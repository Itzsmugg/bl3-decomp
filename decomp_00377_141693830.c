// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141693830 FUN_141693830 body=139 status=ok
// SIG undefined FUN_141693830(void)

void FUN_141693830(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  plVar3 = *(longlong **)(param_1 + 8);
  puVar5 = *(undefined8 **)plVar3[1];
  if (puVar5 + 1 <= (undefined8 *)((longlong *)plVar3[1])[1]) {
    *param_2 = *puVar5;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 8;
    return;
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,param_2,8);
  if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
    puVar4 = (undefined1 *)((longlong)param_2 + 7);
    puVar5 = param_2;
    do {
      puVar1 = (undefined8 *)((longlong)puVar5 + 1);
      uVar2 = *puVar4;
      *puVar4 = *(undefined1 *)puVar5;
      puVar4 = puVar4 + -1;
      *(undefined1 *)puVar5 = uVar2;
      puVar5 = puVar1;
    } while (-(longlong)param_2 + (longlong)puVar1 < -(longlong)param_2 + (longlong)puVar4);
  }
  return;
}



// FUNCTION 1416938e0 Serialize body=244 status=ok
// SIG undefined Serialize(void)

void FBitWriter::Serialize(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar4 = *(ulonglong *)(param_1 + 0xa0);
  param_3 = param_3 * 8;
  lVar5 = uVar4 + param_3;
  if (*(longlong *)(param_1 + 0xa8) < lVar5) {
    if (*(char *)(param_1 + 0xb0) == '\0') {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0xa8) * 2;
    if (lVar5 <= lVar2) {
      lVar5 = lVar2;
    }
    *(longlong *)(param_1 + 0xa8) = lVar5;
    iVar1 = *(int *)(param_1 + 0x98);
    iVar6 = (int)(lVar5 + 7 >> 3) - *(int *)(param_1 + 0x98);
    iVar3 = iVar1 + iVar6;
    *(int *)(param_1 + 0x98) = iVar3;
    if (*(int *)(param_1 + 0x9c) < iVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x90);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x90)),0,(longlong)iVar6);
    uVar4 = (ulonglong)*(uint *)(param_1 + 0xa0);
  }
  appBitsCpy(*(undefined8 *)(param_1 + 0x90),uVar4 & 0xffffffff,param_2,0,(int)param_3);
  *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + param_3;
  return;
}



// FUNCTION 1416939e0 Serialize body=52 status=ok
// SIG undefined Serialize(void)

void FCustomVersionContainer::Serialize(undefined8 param_1,undefined8 param_2)

{
  undefined **local_28;
  undefined8 local_20;
  undefined ***local_18;
  undefined8 **local_10;
  
  local_28 = &PTR_FUN_144cd4ac8;
  local_18 = &local_28;
  local_10 = &local_18;
  local_20 = param_2;
  FUN_141693a20(param_1,&local_18);
  return;
}



// FUNCTION 141693a20 FUN_141693a20 body=1420 status=ok
// SIG undefined FUN_141693a20(void)

/* WARNING: Removing unreachable block (ram,0x000141693be6) */
/* WARNING: Removing unreachable block (ram,0x000141693e39) */

void FUN_141693a20(longlong *param_1,longlong *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  uint local_res18 [2];
  longlong local_res20;
  undefined8 *local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 *puVar17;
  
  if (param_3 != 1) {
    if ((param_3 != 2) && (param_3 == 3)) {
      local_res18[0] = *(uint *)(param_1 + 1);
      uVar11 = 0;
      plVar9 = *(longlong **)(*param_2 + 8);
      puVar4 = *(uint **)plVar9[1];
      if ((uint *)((undefined8 *)plVar9[1])[1] < puVar4 + 1) {
        (**(code **)(*plVar9 + 0x50))(plVar9,local_res18,4);
        if ((*(byte *)((longlong)plVar9 + 0x29) & 0x10) != 0) {
          lVar10 = 3;
          uVar13 = uVar11;
          do {
            uVar2 = *(undefined1 *)((longlong)local_res18 + lVar10);
            *(undefined1 *)((longlong)local_res18 + lVar10) =
                 *(undefined1 *)((longlong)local_res18 + uVar13);
            lVar10 = lVar10 + -1;
            *(undefined1 *)((longlong)local_res18 + uVar13) = uVar2;
            uVar13 = uVar13 + 1;
          } while ((longlong)uVar13 < lVar10);
        }
      }
      else {
        local_res18[0] = *puVar4;
        *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
      }
      if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
        TArray<FCustomVersion,TSizedDefaultAllocator<32>_>::SetNum(param_1,local_res18[0],1);
      }
      if ((int)local_res18[0] < 1) {
        return;
      }
      do {
        lVar10 = (longlong)(int)uVar11 * 0x20 + *param_1;
        FUN_141661f40(param_2,lVar10);
        FUN_1415d6020(*param_2,lVar10 + 0x10);
        uVar12 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar12;
      } while ((int)uVar12 < (int)local_res18[0]);
      return;
    }
    puVar6 = (undefined8 *)0x0;
    local_res18[0] = 0;
    local_78 = (undefined8 *)0x0;
    uStack_6c = 0;
    plVar9 = *(longlong **)(*param_2 + 8);
    puVar4 = *(uint **)plVar9[1];
    if ((uint *)((undefined8 *)plVar9[1])[1] < puVar4 + 1) {
      (**(code **)(*plVar9 + 0x50))(plVar9,local_res18,4);
      if ((*(byte *)((longlong)plVar9 + 0x29) & 0x10) != 0) {
        lVar10 = 3;
        puVar14 = puVar6;
        do {
          uVar2 = *(undefined1 *)((longlong)local_res18 + lVar10);
          *(undefined1 *)((longlong)local_res18 + lVar10) =
               *(undefined1 *)((longlong)local_res18 + (longlong)puVar14);
          lVar10 = lVar10 + -1;
          *(undefined1 *)((longlong)local_res18 + (longlong)puVar14) = uVar2;
          puVar14 = (undefined8 *)((longlong)puVar14 + 1);
        } while ((longlong)puVar14 < lVar10);
      }
    }
    else {
      local_res18[0] = *puVar4;
      *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
    }
    puVar14 = puVar6;
    uVar12 = 0;
    if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
      if ((int)local_res18[0] < 1) {
        uVar12 = 0;
        if (((int)local_res18[0] < 0) && (puVar14 = (undefined8 *)0x0, local_res18[0] != 0)) {
          uStack_70 = local_res18[0];
          FUN_140485810(&local_78);
          puVar14 = local_78;
          uVar12 = uStack_70;
        }
      }
      else {
        uStack_70 = local_res18[0];
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,0);
        puVar14 = local_78;
        uVar12 = uStack_70;
      }
    }
    puVar17 = puVar6;
    if (0 < (int)local_res18[0]) {
      do {
        FUN_1415d6020(*param_2,puVar14 + (int)puVar17);
        FUN_1415d6020(*param_2,(longlong)(puVar14 + (int)puVar17) + 4);
        uVar16 = (int)puVar17 + 1;
        puVar17 = (undefined8 *)(ulonglong)uVar16;
      } while ((int)uVar16 < (int)local_res18[0]);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(uint *)((longlong)param_1 + 0xc) != uVar12) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,uVar12);
    }
    while( true ) {
      iVar15 = (int)puVar6;
      if ((iVar15 < 0) || ((int)uVar12 <= iVar15)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) break;
      uStack_6c = *(undefined4 *)(puVar14 + iVar15);
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FString::PrintfImpl(&local_68,L"EnumTag%u");
      puVar8 = &DAT_143f3eda8;
      if (iStack_60 != 0) {
        puVar8 = (undefined2 *)CONCAT44(uStack_64,local_68);
      }
      puVar6 = (undefined8 *)FName::FName(&local_res20,puVar8,1);
      local_48 = *(undefined4 *)((longlong)puVar14 + (longlong)iVar15 * 8 + 4);
      uStack_40 = *puVar6;
      uStack_44 = 1;
      if (CONCAT44(uStack_64,local_68) != 0) {
        FMemory::Free();
      }
      iVar3 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1,iVar3);
      }
      lVar10 = *param_1;
      puVar6 = (undefined8 *)(ulonglong)(iVar15 + 1);
      puVar17 = (undefined8 *)((longlong)iVar3 * 0x20 + lVar10);
      *puVar17 = local_78;
      puVar17[1] = CONCAT44(uStack_6c,uStack_70);
      puVar1 = (undefined4 *)((longlong)iVar3 * 0x20 + 0x10 + lVar10);
      *puVar1 = local_48;
      puVar1[1] = uStack_44;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
    }
    goto LAB_141693f87;
  }
  puVar6 = (undefined8 *)0x0;
  local_res18[0] = 0;
  local_78 = (undefined8 *)0x0;
  uStack_6c = 0;
  plVar9 = *(longlong **)(*param_2 + 8);
  puVar4 = *(uint **)plVar9[1];
  if ((uint *)((undefined8 *)plVar9[1])[1] < puVar4 + 1) {
    (**(code **)(*plVar9 + 0x50))(plVar9,local_res18,4);
    if ((*(byte *)((longlong)plVar9 + 0x29) & 0x10) != 0) {
      lVar10 = 3;
      puVar14 = puVar6;
      do {
        uVar2 = *(undefined1 *)((longlong)local_res18 + lVar10);
        *(undefined1 *)((longlong)local_res18 + lVar10) =
             *(undefined1 *)((longlong)local_res18 + (longlong)puVar14);
        lVar10 = lVar10 + -1;
        *(undefined1 *)((longlong)local_res18 + (longlong)puVar14) = uVar2;
        puVar14 = (undefined8 *)((longlong)puVar14 + 1);
      } while ((longlong)puVar14 < lVar10);
    }
  }
  else {
    local_res18[0] = *puVar4;
    *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
  }
  uVar12 = local_res18[0];
  puVar14 = puVar6;
  puVar17 = puVar6;
  if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
    uVar11 = (ulonglong)(int)local_res18[0];
    if ((int)local_res18[0] < 1) {
      puVar14 = (undefined8 *)0x0;
      puVar17 = (undefined8 *)0x0;
      if ((-1 < (int)local_res18[0]) || (iVar15 = -local_res18[0], iVar15 == 0)) goto LAB_141693e63;
      local_res20 = uVar11 * 0x28;
      plVar9 = (longlong *)(local_res20 + 0x18);
      do {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 5;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      uStack_70 = uVar12;
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(&local_78);
    }
    else {
      uStack_70 = local_res18[0];
      FUN_140d979d0(&local_78,0);
      if (uVar12 != 0) {
        lVar10 = (longlong)local_78 + 0x24;
        do {
          *(undefined8 *)(lVar10 + -0x24) = 0;
          *(undefined8 *)(lVar10 + -0x1c) = 0;
          *(undefined8 *)(lVar10 + -0xc) = 0;
          *(undefined8 *)(lVar10 + -4) = 0;
          lVar10 = lVar10 + 0x28;
          uVar12 = (int)uVar11 - 1;
          uVar11 = (ulonglong)uVar12;
        } while (uVar12 != 0);
      }
    }
    puVar14 = local_78;
    puVar17 = (undefined8 *)(ulonglong)uStack_70;
  }
LAB_141693e63:
  if (0 < (int)local_res18[0]) {
    do {
      puVar7 = puVar14 + (longlong)(int)puVar6 * 5;
      FUN_141661f40(param_2,puVar7);
      FUN_1415d6020(*param_2,puVar7 + 2);
      FUN_14158ce90(*(undefined8 *)(*param_2 + 8),puVar7 + 3);
      uVar12 = (int)puVar6 + 1;
      puVar6 = (undefined8 *)(ulonglong)uVar12;
    } while ((int)uVar12 < (int)local_res18[0]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  iVar15 = (int)puVar17;
  if (*(int *)((longlong)param_1 + 0xc) != iVar15) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,puVar17);
  }
  if (puVar14 != puVar14 + (longlong)iVar15 * 5) {
    puVar6 = puVar14 + 3;
    do {
      local_68 = *(undefined4 *)(puVar6 + -3);
      uStack_64 = *(undefined4 *)((longlong)puVar6 + -0x14);
      iStack_60 = *(int *)(puVar6 + -2);
      uStack_5c = *(undefined4 *)((longlong)puVar6 + -0xc);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar6;
      }
      puVar7 = (undefined8 *)FName::FName(&local_res20,puVar8,1);
      iVar3 = (int)param_1[1];
      local_48 = *(undefined4 *)(puVar6 + -1);
      uStack_40 = *puVar7;
      uStack_44 = 1;
      *(int *)(param_1 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1,iVar3);
      }
      lVar10 = *param_1;
      puVar7 = (undefined8 *)((longlong)iVar3 * 0x20 + lVar10);
      *puVar7 = CONCAT44(uStack_64,local_68);
      puVar7[1] = CONCAT44(uStack_5c,iStack_60);
      puVar1 = (undefined4 *)((longlong)iVar3 * 0x20 + 0x10 + lVar10);
      *puVar1 = local_48;
      puVar1[1] = uStack_44;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      puVar7 = puVar6 + 2;
      puVar6 = puVar6 + 5;
    } while (puVar7 != puVar14 + (longlong)iVar15 * 5);
  }
  if (iVar15 != 0) {
    plVar9 = puVar14 + 3;
    do {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 5;
      uVar12 = (int)puVar17 - 1;
      puVar17 = (undefined8 *)(ulonglong)uVar12;
    } while (uVar12 != 0);
  }
LAB_141693f87:
  if (puVar14 != (undefined8 *)0x0) {
    FMemory::Free(puVar14);
  }
  return;
}



// FUNCTION 141693fb0 SerializeBits body=235 status=ok
// SIG undefined SerializeBits(void)

void FBitReader::SerializeBits(longlong param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  
  if (-1 < (char)*(byte *)(param_1 + 0x28)) {
    if (*(longlong *)(param_1 + 0xa8) + param_3 <= *(longlong *)(param_1 + 0xa0)) {
      if (param_3 == 1) {
        *param_2 = 0;
        lVar1 = *(longlong *)(param_1 + 0xa8);
        if ((*(byte *)((longlong)(int)(lVar1 >> 3) + *(longlong *)(param_1 + 0x90)) &
            '\x01' << ((byte)lVar1 & 7)) != 0) {
          *param_2 = 1;
          lVar1 = *(longlong *)(param_1 + 0xa8);
        }
        *(longlong *)(param_1 + 0xa8) = lVar1 + 1;
        return;
      }
      if (param_3 == 0) {
        return;
      }
      param_2[(param_3 + 7 >> 3) + -1] = 0;
      appBitsCpy(param_2,0,*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0xa8),
                 (int)param_3);
      *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + param_3;
      return;
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
  }
  ::_guard_xfg_dispatch_icall_nop(param_2,0,param_3 + 7 >> 3);
  return;
}



// FUNCTION 1416940a0 SerializeBits body=302 status=ok
// SIG undefined SerializeBits(void)

void FBitWriter::SerializeBits(longlong param_1,byte *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  
  lVar4 = *(longlong *)(param_1 + 0xa0) + param_3;
  if (*(longlong *)(param_1 + 0xa8) < lVar4) {
    if (*(char *)(param_1 + 0xb0) == '\0') {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0xa8) * 2;
    if (lVar4 <= lVar2) {
      lVar4 = lVar2;
    }
    *(longlong *)(param_1 + 0xa8) = lVar4;
    iVar1 = *(int *)(param_1 + 0x98);
    iVar6 = (int)(lVar4 + 7 >> 3) - *(int *)(param_1 + 0x98);
    iVar3 = iVar1 + iVar6;
    *(int *)(param_1 + 0x98) = iVar3;
    if (*(int *)(param_1 + 0x9c) < iVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x90);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x90)),0,(longlong)iVar6);
  }
  if (param_3 == 1) {
    if ((*param_2 & 1) != 0) {
      pbVar5 = (byte *)((longlong)(int)(*(longlong *)(param_1 + 0xa0) >> 3) +
                       *(longlong *)(param_1 + 0x90));
      *pbVar5 = *pbVar5 | (&DAT_144cd0940)[(uint)*(longlong *)(param_1 + 0xa0) & 7];
    }
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 1;
    return;
  }
  appBitsCpy(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0xa0),param_2,0,(int)param_3)
  ;
  *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + param_3;
  return;
}



// FUNCTION 1416941d0 SerializeBitsWithOffset body=112 status=ok
// SIG undefined SerializeBitsWithOffset(void)

void FBitReader::SerializeBitsWithOffset
               (longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  if (-1 < (char)*(byte *)(param_1 + 0x28)) {
    if (*(longlong *)(param_1 + 0xa0) < *(longlong *)(param_1 + 0xa8) + param_4) {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
    }
    else if (param_4 != 0) {
      appBitsCpy(param_2,param_3,*(undefined8 *)(param_1 + 0x90),*(longlong *)(param_1 + 0xa8),
                 (int)param_4);
      *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + param_4;
      return;
    }
  }
  return;
}



// FUNCTION 141694240 SerializeBitsWithOffset body=259 status=ok
// SIG undefined SerializeBitsWithOffset(void)

void FBitWriter::SerializeBitsWithOffset
               (longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar4 = *(ulonglong *)(param_1 + 0xa0);
  lVar5 = uVar4 + param_4;
  if (*(longlong *)(param_1 + 0xa8) < lVar5) {
    if (*(char *)(param_1 + 0xb0) == '\0') {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0xa8) * 2;
    if (lVar5 <= lVar2) {
      lVar5 = lVar2;
    }
    *(longlong *)(param_1 + 0xa8) = lVar5;
    iVar1 = *(int *)(param_1 + 0x98);
    iVar6 = (int)(lVar5 + 7 >> 3) - *(int *)(param_1 + 0x98);
    iVar3 = iVar1 + iVar6;
    *(int *)(param_1 + 0x98) = iVar3;
    if (*(int *)(param_1 + 0x9c) < iVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x90);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x90)),0,(longlong)iVar6);
    uVar4 = (ulonglong)*(uint *)(param_1 + 0xa0);
  }
  appBitsCpy(*(undefined8 *)(param_1 + 0x90),uVar4 & 0xffffffff,param_2,param_3,(int)param_4);
  *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + param_4;
  return;
}



// FUNCTION 141694350 FUN_141694350 body=1519 status=ok
// SIG undefined FUN_141694350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141694350(longlong *param_1,ulonglong *param_2,ulonglong param_3,undefined4 param_4,
                  char param_5,char param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  bool bVar18;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  uint local_e0;
  undefined4 local_d8;
  undefined1 local_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined8 local_c0;
  char local_b8;
  undefined1 local_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  ulonglong *local_a8;
  undefined4 local_a0;
  ulonglong *local_98;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_a0 = param_4;
  local_98 = param_2;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)(param_1 + 5) & 2) == 0) {
      return;
    }
    local_60 = (longlong)(int)DAT_1464aaa9c;
    local_68 = 0x9e2a83c1;
    FUN_1404c11e0(param_1,&local_68);
    FUN_1404c11e0(param_1,&local_60);
    uVar6 = (longlong)((longlong)(int)DAT_1464aaa9c + -1 + param_3) / (longlong)(int)DAT_1464aaa9c +
            1;
    local_88 = uVar6;
    local_78 = (**(code **)(*param_1 + 0x90))(param_1);
    local_c0 = 0x10;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar6;
    uVar7 = SUB168(ZEXT816(0x10) * auVar2,0);
    if (SUB168(ZEXT816(0x10) * auVar2,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    puVar8 = (ulonglong *)operator_new(uVar7);
    puVar10 = puVar8;
    local_98 = puVar8;
    if (0 < (longlong)uVar6) {
      do {
        FUN_1404c11e0(param_1,puVar10);
        FUN_1404c11e0(param_1,puVar10 + 1);
        uVar6 = uVar6 - 1;
        puVar10 = puVar10 + 2;
      } while (uVar6 != 0);
    }
    puVar8[1] = param_3;
    *puVar8 = 0;
    puVar10 = param_2;
    if (param_5 != '\0') {
      puVar10 = (ulonglong *)FMemory::Malloc((longlong)(int)DAT_1464aaa9c,0);
    }
    iVar3 = DAT_1464aaa9c * 2;
    local_c8 = (undefined1)iVar3;
    uStack_c7 = (undefined1)((uint)iVar3 >> 8);
    uStack_c6 = (undefined1)((uint)iVar3 >> 0x10);
    uStack_c5 = (undefined1)((uint)iVar3 >> 0x18);
    local_a8 = (ulonglong *)FMemory::Malloc((longlong)iVar3,0);
    puVar16 = puVar8;
    if (0 < (longlong)param_3) {
      uVar6 = (ulonglong)DAT_1464aaa9c;
      puVar17 = puVar10;
      do {
        uVar12 = (longlong)(int)uVar6;
        if ((longlong)param_3 <= (longlong)(int)uVar6) {
          uVar12 = param_3;
        }
        if (param_5 != '\0') {
          (**(code **)(*param_2 + 0x50))(param_2,puVar17,uVar12);
        }
        uVar14 = 0xf;
        local_b0 = local_c8;
        uStack_af = uStack_c7;
        uStack_ae = uStack_c6;
        uStack_ad = uStack_c5;
        if (param_6 != '\0') {
          if ((longlong *)param_1[0xe] == (longlong *)0x0) {
            plVar9 = (longlong *)FUN_1415aac40();
            uVar14 = (**(code **)(*plVar9 + 8))(plVar9);
          }
          else {
            uVar14 = (**(code **)(*(longlong *)param_1[0xe] + 0x48))();
          }
        }
        local_e8 = (undefined4)uVar12;
        local_e0 = uVar14;
        FUN_141645020(local_a0,local_a8,&local_b0,puVar17);
        lVar11 = (longlong)CONCAT13(uStack_ad,CONCAT12(uStack_ae,CONCAT11(uStack_af,local_b0)));
        puVar10 = (ulonglong *)((longlong)puVar17 + uVar12);
        if (param_5 != '\0') {
          puVar10 = puVar17;
        }
        (**(code **)(*param_1 + 0x50))(param_1,local_a8,lVar11);
        *puVar8 = *puVar8 + lVar11;
        *(longlong *)(local_c0 + (longlong)puVar8) = lVar11;
        *(ulonglong *)(local_c0 + 8 + (longlong)puVar8) = uVar12;
        local_c0 = local_c0 + 0x10;
        uVar6 = (ulonglong)(int)DAT_1464aaa9c;
        param_3 = param_3 - uVar6;
        puVar16 = local_98;
        puVar17 = puVar10;
      } while (0 < (longlong)param_3);
    }
    uVar6 = 0;
    if (param_5 != '\0') {
      FMemory::Free(puVar10);
    }
    FMemory::Free(local_a8);
    uVar7 = (**(code **)(*param_1 + 0x90))(param_1);
    (**(code **)(*param_1 + 0xa8))(param_1,local_78);
    uVar12 = local_88;
    uVar13 = uVar6;
    if (0 < (longlong)local_88) {
      do {
        FUN_1404c11e0(param_1,puVar16 + uVar13 * 2);
        FUN_1404c11e0(param_1,puVar16 + uVar13 * 2 + 1);
        uVar14 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar14;
        uVar13 = (longlong)(int)uVar14;
      } while ((longlong)(int)uVar14 < (longlong)uVar12);
    }
    (**(code **)(*param_1 + 0xa8))(param_1,uVar7);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    FUN_1404c11e0(0,&local_78);
    FUN_1404c11e0(param_1,&uStack_70);
    bVar18 = local_78 != 0x9e2a83c1;
    local_b8 = bVar18;
    FUN_1404c11e0(param_1,&local_88);
    FUN_1404c11e0(param_1,&local_80);
    if (bVar18) {
      bVar18 = local_78 == 0xc1832a9e;
      if (bVar18) {
        local_88 = CONCAT17((undefined1)local_88,
                            CONCAT16(local_88._1_1_,
                                     CONCAT15(local_88._2_1_,
                                              CONCAT14(local_88._3_1_,
                                                       CONCAT13(local_88._4_1_,
                                                                CONCAT12(local_88._5_1_,
                                                                         CONCAT11(local_88._6_1_,
                                                                                  local_88._7_1_))))
                                             )));
        local_80 = CONCAT17((undefined1)local_80,
                            CONCAT16(local_80._1_1_,
                                     CONCAT15(local_80._2_1_,
                                              CONCAT14(local_80._3_1_,
                                                       CONCAT13(local_80._4_1_,
                                                                CONCAT12(local_80._5_1_,
                                                                         CONCAT11(local_80._6_1_,
                                                                                  local_80._7_1_))))
                                             )));
        uStack_c1 = (undefined1)uStack_70;
        uStack_c2 = uStack_70._1_1_;
        uStack_c3 = uStack_70._2_1_;
        uStack_c4 = uStack_70._3_1_;
        uStack_c5 = uStack_70._4_1_;
        uStack_c6 = uStack_70._5_1_;
        uStack_c7 = uStack_70._6_1_;
        local_c8 = uStack_70._7_1_;
        uStack_70 = CONCAT17((undefined1)uStack_70,
                             CONCAT16(uStack_70._1_1_,
                                      CONCAT15(uStack_70._2_1_,
                                               CONCAT14(uStack_70._3_1_,
                                                        CONCAT13(uStack_70._4_1_,
                                                                 CONCAT12(uStack_70._5_1_,
                                                                          CONCAT11(uStack_70._6_1_,
                                                                                   uStack_70._7_1_))
                                                                )))));
      }
    }
    else {
      bVar18 = local_78 == 0x9e2a83c1;
    }
    if (!bVar18) {
      LowLevelFatalErrorHandler
                ("Unknown",0x291,
                 L"BulkData compressed header read error. This package may be corrupt!");
      FDebug::AssertFailed
                (L"","Unknown",0x291,
                 L"BulkData compressed header read error. This package may be corrupt!");
    }
    lVar11 = uStack_70;
    if (uStack_70 == 0x9e2a83c1) {
      lVar11 = 0x20000;
    }
    uVar6 = (local_80 + -1 + lVar11) / lVar11;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar6;
    uVar7 = SUB168(ZEXT816(0x10) * auVar1,0);
    if (SUB168(ZEXT816(0x10) * auVar1,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    puVar8 = (ulonglong *)operator_new(uVar7);
    uVar12 = 0;
    uVar13 = uVar12;
    uVar15 = uVar12;
    puVar10 = puVar8;
    local_a8 = puVar8;
    if (0 < (longlong)uVar6) {
      do {
        FUN_1404c11e0(param_1,puVar8 + uVar13 * 2);
        FUN_1404c11e0(param_1,puVar8 + uVar13 * 2 + 1);
        if (local_b8 != '\0') {
          uVar13 = *puVar10;
          uStack_c1 = (undefined1)uVar13;
          local_c0._1_1_ = (undefined1)(uVar13 >> 8);
          uStack_c2 = local_c0._1_1_;
          local_c0._2_1_ = (undefined1)(uVar13 >> 0x10);
          uStack_c3 = local_c0._2_1_;
          local_c0._3_1_ = (undefined1)(uVar13 >> 0x18);
          uStack_c4 = local_c0._3_1_;
          local_c0._4_1_ = (undefined1)(uVar13 >> 0x20);
          uStack_c5 = local_c0._4_1_;
          local_c0._5_1_ = (undefined1)(uVar13 >> 0x28);
          uStack_c6 = local_c0._5_1_;
          local_c0._6_1_ = (undefined1)(uVar13 >> 0x30);
          uStack_c7 = local_c0._6_1_;
          local_c0._7_1_ = (undefined1)(uVar13 >> 0x38);
          local_c8 = local_c0._7_1_;
          *puVar10 = CONCAT17(uStack_c1,
                              CONCAT16(local_c0._1_1_,
                                       CONCAT15(local_c0._2_1_,
                                                CONCAT14(local_c0._3_1_,
                                                         CONCAT13(local_c0._4_1_,
                                                                  CONCAT12(local_c0._5_1_,
                                                                           CONCAT11(local_c0._6_1_,
                                                                                    local_c0._7_1_))
                                                                 )))));
          uVar13 = puVar10[1];
          uStack_a9 = (undefined1)uVar13;
          local_c0._1_1_ = (undefined1)(uVar13 >> 8);
          uStack_aa = local_c0._1_1_;
          local_c0._2_1_ = (undefined1)(uVar13 >> 0x10);
          uStack_ab = local_c0._2_1_;
          local_c0._3_1_ = (undefined1)(uVar13 >> 0x18);
          uStack_ac = local_c0._3_1_;
          local_c0._4_1_ = (undefined1)(uVar13 >> 0x20);
          uStack_ad = local_c0._4_1_;
          local_c0._5_1_ = (undefined1)(uVar13 >> 0x28);
          uStack_ae = local_c0._5_1_;
          local_c0._6_1_ = (undefined1)(uVar13 >> 0x30);
          uStack_af = local_c0._6_1_;
          local_c0._7_1_ = (undefined1)(uVar13 >> 0x38);
          local_b0 = local_c0._7_1_;
          puVar10[1] = CONCAT17(uStack_a9,
                                CONCAT16(local_c0._1_1_,
                                         CONCAT15(local_c0._2_1_,
                                                  CONCAT14(local_c0._3_1_,
                                                           CONCAT13(local_c0._4_1_,
                                                                    CONCAT12(local_c0._5_1_,
                                                                             CONCAT11(local_c0._6_1_
                                                                                      ,local_c0.
                                                  _7_1_)))))));
          local_c0 = uVar13;
        }
        if ((longlong)uVar12 <= (longlong)*puVar10) {
          uVar12 = *puVar10;
        }
        uVar14 = (int)uVar15 + 1;
        uVar13 = (longlong)(int)uVar14;
        uVar15 = (ulonglong)uVar14;
        param_2 = local_98;
        puVar10 = puVar10 + 2;
      } while ((longlong)(int)uVar14 < (longlong)uVar6);
    }
    puVar10 = local_a8;
    if (param_6 == '\0') {
      uVar5 = 0xf;
    }
    else {
      plVar9 = (longlong *)FUN_1415aac40();
      uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
    }
    uVar7 = FMemory::Malloc(uVar12,0);
    uVar4 = local_a0;
    puVar16 = puVar10;
    if (0 < (longlong)uVar6) {
      do {
        (**(code **)(*param_1 + 0x50))(param_1,uVar7,*puVar10);
        local_e8 = (undefined4)*puVar10;
        local_e0 = local_e0 & 0xffffff00;
        local_d8 = uVar5;
        FUN_14165b8a0(uVar4,param_2,(int)puVar10[1],uVar7);
        param_2 = (ulonglong *)((longlong)param_2 + puVar10[1]);
        puVar10 = puVar10 + 2;
        uVar6 = uVar6 - 1;
        puVar16 = local_a8;
      } while (uVar6 != 0);
    }
    FMemory::Free(uVar7);
  }
  FMemory::operator_delete(puVar16);
  return;
}



// FUNCTION 141694940 SerializeInt body=178 status=ok
// SIG undefined SerializeInt(void)

void FBitReader::SerializeInt(longlong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  if (-1 < (char)*(byte *)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    uVar4 = 0;
    uVar3 = 1;
    if (1 < param_3) {
      do {
        if (uVar3 == 0) break;
        if (*(longlong *)(param_1 + 0xa0) <= lVar2) {
          *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
          break;
        }
        uVar1 = uVar3 | uVar4;
        if (('\x01' << ((byte)lVar2 & 7) &
            *(byte *)((longlong)(int)(lVar2 >> 3) + *(longlong *)(param_1 + 0x90))) == 0) {
          uVar1 = uVar4;
        }
        uVar4 = uVar1;
        uVar3 = uVar3 * 2;
        lVar2 = lVar2 + 1;
      } while (uVar4 + uVar3 < param_3);
    }
    *(longlong *)(param_1 + 0xa8) = lVar2;
    *param_2 = uVar4;
  }
  return;
}



// FUNCTION 141694a00 SerializeInt body=347 status=ok
// SIG undefined SerializeInt(void)

void FBitWriter::SerializeInt(longlong param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  iVar4 = 0x20;
  iVar1 = iVar4;
  if (param_3 != 0) {
    iVar1 = 0x1f - iVar7;
  }
  uVar3 = param_3 - 1;
  iVar7 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  if (uVar3 != 0) {
    iVar4 = 0x1f - iVar7;
  }
  if (*param_2 < param_3) {
    uVar3 = *param_2;
  }
  lVar6 = *(longlong *)(param_1 + 0xa0);
  lVar8 = (int)(0x20U - iVar4 & ~((iVar1 << 0x1a) >> 0x1f)) + lVar6;
  if (*(longlong *)(param_1 + 0xa8) < lVar8) {
    if (*(char *)(param_1 + 0xb0) == '\0') {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0xa8) * 2;
    if (lVar8 <= lVar6) {
      lVar8 = lVar6;
    }
    *(longlong *)(param_1 + 0xa8) = lVar8;
    iVar7 = *(int *)(param_1 + 0x98);
    iVar4 = (int)(lVar8 + 7 >> 3) - *(int *)(param_1 + 0x98);
    iVar1 = iVar7 + iVar4;
    *(int *)(param_1 + 0x98) = iVar1;
    if (*(int *)(param_1 + 0x9c) < iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x90);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar7 + *(longlong *)(param_1 + 0x90)),0,(longlong)iVar4);
    lVar6 = *(longlong *)(param_1 + 0xa0);
  }
  iVar7 = 0;
  uVar2 = 1;
  if (1 < param_3) {
    do {
      if (uVar2 == 0) break;
      if ((uVar2 & uVar3) != 0) {
        pcVar5 = (char *)((longlong)(int)(lVar6 >> 3) + *(longlong *)(param_1 + 0x90));
        *pcVar5 = *pcVar5 + (&DAT_144cd0940)[(uint)lVar6 & 7];
        iVar7 = iVar7 + uVar2;
      }
      uVar2 = uVar2 * 2;
      lVar6 = lVar6 + 1;
    } while (uVar2 + iVar7 < param_3);
  }
  *(longlong *)(param_1 + 0xa0) = lVar6;
  return;
}



// FUNCTION 141694b60 FUN_141694b60 body=375 status=ok
// SIG undefined FUN_141694b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141694b60(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  byte bVar6;
  undefined1 auStack_68 [32];
  byte local_48 [8];
  undefined1 local_40 [8];
  undefined1 *local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar1 = *param_2;
    cVar5 = (char)uVar1;
    local_38 = (undefined1 *)0x0;
    local_2c = 0;
    uVar2 = uVar1 >> 7;
    iVar3 = 0;
    while (uVar2 != 0) {
      local_30 = iVar3 + 1;
      if (local_2c < local_30) {
        TArray<unsigned_char,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(local_40,iVar3);
      }
      puVar4 = local_40;
      if (local_38 != (undefined1 *)0x0) {
        puVar4 = local_38;
      }
      puVar4[iVar3] = cVar5 * '\x02' | 1;
      cVar5 = (char)(uVar1 >> 7);
      uVar2 = uVar1 >> 0xe;
      uVar1 = uVar1 >> 7;
      iVar3 = local_30;
    }
    local_30 = iVar3 + 1;
    if (local_2c < local_30) {
      TArray<unsigned_char,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(local_40,iVar3);
    }
    puVar4 = local_40;
    if (local_38 != (undefined1 *)0x0) {
      puVar4 = local_38;
    }
    puVar4[iVar3] = cVar5 * '\x02';
    puVar4 = local_40;
    if (local_38 != (undefined1 *)0x0) {
      puVar4 = local_38;
    }
    (**(code **)(*param_1 + 0x50))(param_1,puVar4,(longlong)local_30);
    if (local_38 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    *param_2 = 0;
    cVar5 = '\0';
    do {
      (**(code **)(*param_1 + 0x50))(param_1,local_48,1);
      *param_2 = *param_2 + ((uint)(local_48[0] >> 1) << (cVar5 * '\a' & 0x1fU));
      bVar6 = local_48[0] & 1;
      cVar5 = cVar5 + '\x01';
      local_48[0] = local_48[0] >> 1;
    } while (bVar6 != 0);
  }
  return;
}



// FUNCTION 141694ce0 FUN_141694ce0 body=810 status=ok
// SIG undefined FUN_141694ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141694ce0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_58 [32];
  uint local_38;
  char local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x98) != '\0') && ((*(byte *)(param_1 + 0x28) & 8) != 0)) {
    FUN_14167f5e0(**(undefined8 **)(param_1 + 0x198),param_1 + 0xa0);
    local_34[0] = 0 < *(int *)(param_1 + 0x120);
    plVar2 = *(longlong **)(**(longlong **)(param_1 + 0x198) + 8);
    (**(code **)(*plVar2 + 8))(plVar2,local_34);
    uVar9 = 0;
    lVar7 = 3;
    if (local_34[0] != '\0') {
      plVar2 = *(longlong **)(param_1 + 0x198);
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        local_38 = *(uint *)(param_1 + 0x120);
        plVar4 = *(longlong **)(*plVar2 + 8);
        puVar3 = *(uint **)plVar4[1];
        if ((uint *)((undefined8 *)plVar4[1])[1] < puVar3 + 1) {
          (**(code **)(*plVar4 + 0x50))(plVar4,&local_38,4);
          uVar6 = uVar9;
          lVar10 = lVar7;
          if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
            do {
              cVar1 = local_34[lVar10 + -4];
              local_34[lVar10 + -4] = local_34[uVar6 - 4];
              lVar10 = lVar10 + -1;
              local_34[uVar6 - 4] = cVar1;
              uVar6 = uVar6 + 1;
            } while ((longlong)uVar6 < lVar10);
          }
        }
        else {
          local_38 = *puVar3;
          *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
        }
        if ((*(byte *)(*(longlong *)(*plVar2 + 8) + 0x28) & 1) != 0) {
          TArray<unsigned___int64,FDefaultAllocator>::SetNum(param_1 + 0x118,local_38,1);
        }
        uVar6 = uVar9;
        if (0 < (int)local_38) {
          do {
            (**(code **)(**(longlong **)(*plVar2 + 8) + 0x30))
                      (*(longlong **)(*plVar2 + 8),
                       *(longlong *)(param_1 + 0x118) + (longlong)(int)uVar6 * 8);
            uVar8 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar8;
          } while ((int)uVar8 < (int)local_38);
        }
      }
      else {
        local_38 = 0;
        plVar2 = *(longlong **)(*plVar2 + 8);
        puVar3 = *(uint **)plVar2[1];
        if ((uint *)((undefined8 *)plVar2[1])[1] < puVar3 + 1) {
          (**(code **)(*plVar2 + 0x50))(plVar2,&local_38,4);
          uVar6 = uVar9;
          lVar10 = lVar7;
          if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
            do {
              cVar1 = local_34[lVar10 + -4];
              local_34[lVar10 + -4] = local_34[uVar6 - 4];
              lVar10 = lVar10 + -1;
              local_34[uVar6 - 4] = cVar1;
              uVar6 = uVar6 + 1;
            } while ((longlong)uVar6 < lVar10);
          }
        }
        else {
          local_38 = *puVar3;
          *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
        }
        iVar5 = *(int *)(param_1 + 0x120) + local_38;
        *(int *)(param_1 + 0x120) = iVar5;
        if (*(int *)(param_1 + 0x124) < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
        }
        TBitArray<FDefaultBitArrayAllocator>::Init(param_1 + 0x128,0,local_38);
      }
    }
    local_34[0] = 0 < *(int *)(param_1 + 0xc0);
    plVar2 = *(longlong **)(**(longlong **)(param_1 + 0x198) + 8);
    (**(code **)(*plVar2 + 8))(plVar2,local_34);
    if (local_34[0] != '\0') {
      local_38 = *(uint *)(param_1 + 0xc0);
      plVar2 = *(longlong **)(param_1 + 0x198);
      plVar4 = *(longlong **)(*plVar2 + 8);
      puVar3 = *(uint **)plVar4[1];
      if ((uint *)((undefined8 *)plVar4[1])[1] < puVar3 + 1) {
        (**(code **)(*plVar4 + 0x50))(plVar4,&local_38,4);
        uVar6 = uVar9;
        if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
          do {
            cVar1 = local_34[lVar7 + -4];
            local_34[lVar7 + -4] = local_34[uVar6 - 4];
            lVar7 = lVar7 + -1;
            local_34[uVar6 - 4] = cVar1;
            uVar6 = uVar6 + 1;
          } while ((longlong)uVar6 < lVar7);
        }
      }
      else {
        local_38 = *puVar3;
        *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
      }
      if ((*(byte *)(*(longlong *)(*plVar2 + 8) + 0x28) & 1) != 0) {
        TArray<unsigned___int64,FDefaultAllocator>::SetNum(param_1 + 0xb8,local_38,1);
      }
      if (0 < (int)local_38) {
        do {
          (**(code **)(**(longlong **)(*plVar2 + 8) + 0x40))
                    (*(longlong **)(*plVar2 + 8),
                     *(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar9 * 8);
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < (int)local_38);
      }
    }
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 141695010 SetCustomVersion body=63 status=ok
// SIG undefined SetCustomVersion(void)

void FArchive::SetCustomVersion
               (longlong *param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  uVar1 = (**(code **)(*param_1 + 0x120))();
  FCustomVersionContainer::SetVersion(uVar1,&local_18,param_3,param_4);
  return;
}



// FUNCTION 141695050 FUN_141695050 body=118 status=ok
// SIG undefined FUN_141695050(void)

void FUN_141695050(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FCustomVersionContainer::operator=();
    *(undefined1 *)(param_1 + 0x88) = 0;
    return;
  }
  lVar1 = operator_new(0x10);
  if (lVar1 != 0) {
    uVar2 = FCustomVersionContainer::FCustomVersionContainer(lVar1,param_2);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    *(undefined1 *)(param_1 + 0x88) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}



// FUNCTION 1416950d0 FUN_1416950d0 body=184 status=ok
// SIG undefined FUN_1416950d0(void)

void FUN_1416950d0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x7f;
  param_1[0x15] = 0;
  param_1[0x14] = param_3;
  (**(code **)(*param_1 + 0x1c0))(param_1,*(undefined4 *)((longlong)param_2 + 0x54));
  (**(code **)(*param_1 + 0x1c8))(param_1,(int)param_2[0xb]);
  plVar1 = param_1 + 0x12;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1,0);
    iVar3 = (int)param_1[0x13];
  }
  iVar2 = (int)(param_3 + 7 >> 3) + iVar3;
  *(int *)(param_1 + 0x13) = iVar2;
  if (*(int *)((longlong)param_1 + 0x9c) < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000141695184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2,*plVar1,param_3);
  return;
}



// FUNCTION 141695190 SetDeviceProfileName body=45 status=ok
// SIG undefined SetDeviceProfileName(void)

void FCsvProfiler::SetDeviceProfileName(longlong param_1,longlong *param_2)

{
  FString::operator=(param_1 + 0x88);
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1416951c0 FUN_1416951c0 body=4 status=ok
// SIG undefined FUN_1416951c0(void)

void FUN_1416951c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// FUNCTION 1416951d0 SetEngineVer body=16 status=ok
// SIG undefined SetEngineVer(void)

void FArchive::SetEngineVer(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 1416951f0 SetIsLoading body=8 status=ok
// SIG undefined SetIsLoading(void)

void FArchive::SetIsLoading(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | param_2;
  return;
}



// FUNCTION 141695200 SetIsPersistent body=11 status=ok
// SIG undefined SetIsPersistent(void)

void FArchive::SetIsPersistent(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xbf;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | param_2 << 6;
  return;
}



// FUNCTION 141695210 SetIsSaving body=10 status=ok
// SIG undefined SetIsSaving(void)

void FArchive::SetIsSaving(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfd;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | param_2 * '\x02';
  return;
}



// FUNCTION 141695240 SetLicenseeUE4Ver body=4 status=ok
// SIG undefined SetLicenseeUE4Ver(void)

void FArchive::SetLicenseeUE4Ver(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// FUNCTION 141695250 SetNum body=126 status=ok
// SIG undefined SetNum(void)

void TArray<FCustomVersion,TSizedDefaultAllocator<32>_>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1[1];
  iVar3 = (int)param_2;
  if (iVar1 < iVar3) {
    iVar4 = iVar3 - iVar1;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_1);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
    }
  }
  else if (iVar3 < iVar1) {
    TArray<FCustomVersion,FDefaultAllocator>::RemoveAtImpl(param_1,param_2,iVar1 - iVar3,param_3);
    return;
  }
  return;
}



// FUNCTION 1416952d0 FUN_1416952d0 body=5 status=ok
// SIG undefined FUN_1416952d0(void)

void FUN_1416952d0(longlong param_1)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
  return;
}



// FUNCTION 1416952e0 SetSerializedPropertyChain body=368 status=ok
// SIG undefined SetSerializedPropertyChain(void)

ulonglong FArchive::SetSerializedPropertyChain(longlong param_1,void *param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong in_RAX;
  void *pvVar4;
  void *_Dst;
  void *pvVar5;
  
  if ((param_2 == (void *)0x0) || (*(int *)((longlong)param_2 + 0x48) < 1)) {
    lVar3 = *(longlong *)(param_1 + 0x80);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x40) != 0) {
        FMemory::Free();
      }
      in_RAX = FMemory::operator_delete(lVar3,0x58);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    pvVar5 = (void *)0x0;
    pvVar4 = *(void **)(param_1 + 0x80);
    if (*(void **)(param_1 + 0x80) == (void *)0x0) {
      pvVar4 = (void *)operator_new();
      if (pvVar4 != (void *)0x0) {
        *(undefined8 *)((longlong)pvVar4 + 0x40) = 0;
        *(undefined8 *)((longlong)pvVar4 + 0x48) = 0;
        *(undefined4 *)((longlong)pvVar4 + 0x50) = 0;
        pvVar5 = pvVar4;
      }
      *(void **)(param_1 + 0x80) = pvVar5;
      pvVar4 = pvVar5;
    }
    if (pvVar4 != param_2) {
      pvVar5 = *(void **)((longlong)param_2 + 0x40);
      iVar1 = *(int *)((longlong)param_2 + 0x48);
      *(int *)((longlong)pvVar4 + 0x48) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)pvVar4 + 0x4c) == 0)) {
        *(undefined4 *)((longlong)pvVar4 + 0x4c) = 0;
      }
      else {
        TArray<UProperty_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy(pvVar4,iVar1);
        if (pvVar5 == (void *)0x0) {
          pvVar5 = param_2;
        }
        _Dst = *(void **)((longlong)pvVar4 + 0x40);
        if (*(void **)((longlong)pvVar4 + 0x40) == (void *)0x0) {
          _Dst = pvVar4;
        }
        ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar5,(longlong)iVar1 << 3);
      }
    }
    in_RAX = (ulonglong)*(uint *)((longlong)param_2 + 0x50);
    *(uint *)((longlong)pvVar4 + 0x50) = *(uint *)((longlong)param_2 + 0x50);
  }
  if (param_3 == 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x80);
    if ((uVar2 != 0) && (0 < *(int *)(uVar2 + 0x48))) {
      lVar3 = *(longlong *)(uVar2 + 0x40);
      *(undefined8 *)(param_1 + 0x78) =
           *(undefined8 *)
            ((((ulonglong)(lVar3 != 0) - 1 & uVar2 | *(ulonglong *)(uVar2 + 0x40)) - 8) +
            (longlong)*(int *)(uVar2 + 0x48) * 8);
      return -lVar3;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    return in_RAX;
  }
  *(longlong *)(param_1 + 0x78) = param_3;
  return in_RAX;
}



// FUNCTION 141695450 SetVersion body=199 status=ok
// SIG undefined SetVersion(void)

void FCustomVersionContainer::SetVersion
               (longlong *param_1,int *param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (((param_2[1] != DAT_1468e381c || param_2[2] != DAT_1468e3820) || param_2[3] != DAT_1468e3824)
      || *param_2 != DAT_1468e3818) {
    lVar8 = TArray<FCustomVersion,FDefaultAllocator>::FindByKey<FGuid>();
    if (lVar8 == 0) {
      iVar4 = *param_2;
      iVar5 = param_2[1];
      iVar6 = param_2[2];
      iVar7 = param_2[3];
      iVar3 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1,iVar3);
      }
      lVar8 = *param_1;
      piVar1 = (int *)((longlong)iVar3 * 0x20 + lVar8);
      *piVar1 = iVar4;
      piVar1[1] = iVar5;
      piVar1[2] = iVar6;
      piVar1[3] = iVar7;
      puVar2 = (undefined8 *)((longlong)iVar3 * 0x20 + 0x10 + lVar8);
      *puVar2 = CONCAT44(1,param_3);
      puVar2[1] = param_4;
    }
    else {
      *(undefined4 *)(lVar8 + 0x10) = param_3;
      *(undefined8 *)(lVar8 + 0x18) = param_4;
    }
  }
  return;
}



// FUNCTION 141695520 FUN_141695520 body=11 status=ok
// SIG undefined FUN_141695520(void)

void FUN_141695520(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xef;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | param_2 << 4;
  return;
}



// FUNCTION 141695530 StartAccumulatedLoadTimesStatic body=31 status=ok
// SIG undefined StartAccumulatedLoadTimesStatic(void)

void FLoadTimeTracker::StartAccumulatedLoadTimesStatic(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14168db90();
  *(undefined1 *)(lVar1 + 0xa0) = 1;
  TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
  ::Empty(lVar1 + 0x50,0);
  return;
}



// FUNCTION 141695550 FUN_141695550 body=8 status=ok
// SIG undefined FUN_141695550(void)

void FUN_141695550(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}



// FUNCTION 141695570 StopAccumulatedLoadTimes body=718 status=ok
// SIG undefined StopAccumulatedLoadTimes(void)

void FLoadTimeTracker::StopAccumulatedLoadTimes(longlong param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  uint *puStack_88;
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined8 uStack_68;
  uint *local_60;
  uint uStack_58;
  int iStack_54;
  int local_50;
  longlong local_48 [2];
  longlong *local_38;
  undefined8 uStack_30;
  uint *puStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  iVar7 = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  local_98 = (longlong *)(param_1 + 0x50);
  uStack_d4 = 1;
  iVar1 = *(int *)(param_1 + 0x78);
  puStack_d0 = (uint *)(param_1 + 0x60);
  local_d8 = 0;
  iStack_c4 = 0;
  iStack_c0 = 0;
  if (iVar1 != 0) {
    puVar9 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar9 = puStack_d0;
    }
    uVar8 = *puVar9;
    iStack_c0 = iVar7;
    local_d8 = iVar7;
    while (uVar8 == 0) {
      lVar6 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar5 = local_d8 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar5;
      if (bVar3) goto LAB_14169563f;
      uVar8 = puVar9[lVar6 + 1];
    }
    uStack_d4 = -uVar8 & uVar8;
    iVar5 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_c4 = (iStack_c0 - iVar5) + 0x1f;
    if (iVar1 < iStack_c4) {
LAB_14169563f:
      iStack_c4 = iVar1;
    }
  }
  local_c8 = 0xffffffff;
  uStack_90 = CONCAT44(uStack_d4,local_d8);
  uStack_80 = 0xffffffff;
  iStack_7c = iStack_c4;
  iStack_78 = iStack_c0;
  uStack_74 = uStack_bc;
  local_50 = iStack_c0;
  uStack_58 = 0xffffffff;
  iStack_54 = iStack_c4;
  puStack_88 = puStack_d0;
  local_70 = local_98;
  uStack_68 = uStack_90;
  local_60 = puStack_d0;
  if (iStack_c4 < iVar1) {
    do {
      plVar4 = local_70;
      lVar6 = (longlong)iStack_54;
      FName::ToString(*local_70 + lVar6 * 0x60,&local_d8);
      uVar8 = 0;
      local_b8 = 0;
      local_98 = (longlong *)(*plVar4 + 8 + lVar6 * 0x60);
      uStack_b4 = 1;
      iVar1 = (int)local_98[5];
      puStack_b0 = (uint *)(local_98 + 2);
      uStack_a4 = 0;
      if (iVar1 != 0) {
        puVar9 = (uint *)local_98[4];
        if ((uint *)local_98[4] == (uint *)0x0) {
          puVar9 = puStack_b0;
        }
        uVar2 = *puVar9;
        local_b8 = iVar7;
        while (uVar2 == 0) {
          lVar6 = (longlong)local_b8;
          uVar8 = uVar8 + 0x20;
          iVar5 = local_b8 + 1;
          uStack_a4 = (ulonglong)uVar8 << 0x20;
          bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
          local_b8 = iVar5;
          if (bVar3) goto LAB_14169575f;
          uVar2 = puVar9[lVar6 + 1];
        }
        uStack_b4 = -uVar2 & uVar2;
        iVar5 = 0x1f;
        if (uStack_b4 != 0) {
          for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_b4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iVar5 = (uVar8 - iVar5) + 0x1f;
        uStack_a4._4_4_ = (int)((ulonglong)uStack_a4 >> 0x20);
        uStack_a4 = CONCAT44(uStack_a4._4_4_,iVar5);
        if (iVar1 < iVar5) {
LAB_14169575f:
          uStack_a4 = CONCAT44(uStack_a4._4_4_,iVar1);
        }
      }
      local_a8 = 0xffffffff;
      uStack_90 = CONCAT44(uStack_b4,local_b8);
      uStack_20 = 0xffffffff;
      iStack_1c = (int)uStack_a4;
      iStack_18 = uStack_a4._4_4_;
      uStack_14 = uStack_9c;
      uStack_80 = 0xffffffff;
      iStack_7c = (int)uStack_a4;
      iStack_78 = uStack_a4._4_4_;
      uStack_74 = uStack_9c;
      puStack_88 = puStack_b0;
      local_38 = local_98;
      uStack_30 = uStack_90;
      puStack_28 = puStack_b0;
      if ((int)uStack_a4 < iVar1) {
        do {
          FName::ToString((longlong)iStack_7c * 0x20 + *local_98,local_48);
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          uStack_80 = uStack_80 & ~uStack_90._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
        } while (iStack_7c < (int)puStack_88[6]);
      }
      if (CONCAT44(uStack_d4,local_d8) != 0) {
        FMemory::Free();
      }
      uStack_58 = uStack_58 & ~uStack_68._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_68);
    } while (iStack_54 < (int)local_60[6]);
  }
  return;
}



// FUNCTION 141695840 FUN_141695840 body=21 status=ok
// SIG undefined FUN_141695840(void)

void FUN_141695840(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14168db90();
  FLoadTimeTracker::StopAccumulatedLoadTimes(uVar1);
  return;
}



// FUNCTION 141695880 TestBasicStringExpression body=5 status=ok
// SIG undefined TestBasicStringExpression(void)

bool TextFilterUtils::TestBasicStringExpression
               (undefined8 *param_1,undefined8 *param_2,char param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  short *psVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  
  if (param_3 != '\0') {
    if (param_3 == '\x01') {
      pwVar8 = L"";
      if (*(int *)(param_2 + 1) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)*param_2;
      }
      if (*(int *)(param_1 + 1) != 0) {
        pwVar8 = (wchar_t *)*param_1;
      }
      pwVar8 = ::_guard_xfg_dispatch_icall_nop(pwVar8,pwVar10);
      return pwVar8 != (wchar_t *)0x0;
    }
    if (param_3 == '\x02') {
      iVar3 = *(int *)(param_2 + 1);
      iVar6 = iVar3 + -1;
      iVar5 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = -1;
        iVar5 = 0;
      }
      if (iVar5 < 1) {
        return false;
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      pwVar8 = L"";
      if (iVar3 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)*param_2;
      }
      if (*(int *)(param_1 + 1) != 0) {
        pwVar8 = (wchar_t *)*param_1;
      }
    }
    else {
      if (param_3 != '\x03') {
        return false;
      }
      iVar3 = *(int *)(param_2 + 1);
      iVar6 = iVar3 + -1;
      iVar5 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = -1;
        iVar5 = 0;
      }
      if (iVar5 < 1) {
        return false;
      }
      iVar4 = *(int *)(param_1 + 1);
      iVar5 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      if (iVar5 < iVar6) {
        return false;
      }
      puVar7 = &DAT_143f3eda8;
      if (iVar3 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)*param_2;
      }
      if (iVar4 != 0) {
        puVar7 = (undefined2 *)*param_1;
      }
      pwVar8 = puVar7 + (iVar5 - iVar6);
    }
    iVar6 = wcsncmp(pwVar8,pwVar10,(longlong)iVar6);
    if (iVar6 != 0) {
      return false;
    }
    return true;
  }
  psVar9 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 1) != 0) {
    psVar9 = (short *)*param_1;
  }
  lVar11 = (longlong)puVar7 - (longlong)psVar9;
  do {
    sVar1 = *psVar9;
    sVar2 = *(short *)((longlong)psVar9 + lVar11);
    if (sVar1 != sVar2) break;
    psVar9 = psVar9 + 1;
  } while (sVar2 != 0);
  return sVar1 == sVar2;
}



// FUNCTION 141695890 FUN_141695890 body=319 status=ok
// SIG undefined FUN_141695890(void)

void FUN_141695890(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (DAT_1468e41c8 <= *(int *)(lVar1 + 0x38)) goto LAB_1416958bd;
  _Init_thread_header(&DAT_1468e41c8);
  if (DAT_1468e41c8 != -1) goto LAB_1416958bd;
  if (*(int *)(lVar1 + 0x38) < DAT_1468e41d0) {
    _Init_thread_header(&DAT_1468e41d0);
    if (DAT_1468e41d0 == -1) {
      uVar3 = FCommandLine::Get();
      DAT_1468e41cc = FParse::Param(uVar3,L"LoadTimeStatsForCommandlet");
      _Init_thread_footer(&DAT_1468e41d0);
    }
  }
  if (DAT_1468e41cc == '\0') {
    if (*(int *)(lVar1 + 0x38) < DAT_1468e41d8) {
      _Init_thread_header(&DAT_1468e41d8);
      if (DAT_1468e41d8 == -1) {
        uVar3 = FCommandLine::Get();
        DAT_1468e41d4 = FParse::Param(uVar3,L"LoadTimeFileForCommandlet");
        _Init_thread_footer(&DAT_1468e41d8);
      }
    }
    if (DAT_1468e41d4 != '\0') goto LAB_1416959c8;
    DAT_1468e41c4 = '\0';
  }
  else {
LAB_1416959c8:
    DAT_1468e41c4 = '\x01';
  }
  _Init_thread_footer(&DAT_1468e41c8);
LAB_1416958bd:
  if (DAT_1468e41c4 != '\0') {
    plVar2 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar2 + 0x30))(plVar2,2);
    uVar3 = FUN_14164ab60();
    FUN_14159c300(uVar3,0x3c888889);
  }
  return;
}



// FUNCTION 1416959d0 FUN_1416959d0 body=2176 status=ok
// SIG undefined FUN_1416959d0(void)

longlong * FUN_1416959d0(longlong *param_1,longlong *param_2,short *param_3)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 uVar8;
  short sVar9;
  void *pvVar10;
  int iVar11;
  void *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  void *local_98;
  int local_90;
  void *local_88;
  int local_80;
  void *local_78;
  int local_70;
  void *local_68;
  int local_60;
  void *local_58;
  int local_50;
  void *local_48;
  int local_40;
  void *local_38;
  int local_30;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar6 = *param_1;
  *(undefined4 *)(param_2 + 1) = 2;
  uVar8 = 0x2b;
  if (lVar6 < 0) {
    uVar8 = 0x2d;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  *(undefined2 *)*param_2 = uVar8;
  *(undefined2 *)(*param_2 + 2) = 0;
  sVar9 = *param_3;
  do {
    if (sVar9 == 0) {
      return param_2;
    }
    iVar11 = 0;
    if (sVar9 == 0x25) {
      sVar9 = param_3[1];
      param_3 = param_3 + 1;
      if (sVar9 != 0) {
        switch(sVar9) {
        case 0x44:
          uVar3 = (uint)(*param_1 / 864000000000);
          uVar5 = (int)uVar3 >> 0x1f;
          FString::PrintfImpl(&local_a8,L"%08i",(uVar3 ^ uVar5) - uVar5);
          pvVar10 = local_a8;
          if (local_a0 != 0) {
            iVar11 = local_a0 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = (int)param_2[1];
            iVar2 = (uint)(iVar4 == 0) + iVar4 + iVar11;
            *(int *)(param_2 + 1) = iVar2;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
            pvVar10 = local_a8;
          }
          break;
        default:
          goto switchD_141695acf_caseD_45;
        case 100:
          uVar3 = (uint)(*param_1 / 864000000000);
          uVar5 = (int)uVar3 >> 0x1f;
          FString::PrintfImpl(&local_b8,&DAT_144cd121c,(uVar3 ^ uVar5) - uVar5);
          pvVar10 = local_b8;
          if (local_b0 != 0) {
            iVar11 = local_b0 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = (int)param_2[1];
            iVar2 = (uint)(iVar4 == 0) + iVar4 + iVar11;
            *(int *)(param_2 + 1) = iVar2;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
            pvVar10 = local_b8;
          }
          break;
        case 0x66:
          lVar6 = *param_1;
          lVar7 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar6),8) + lVar6;
          uVar3 = (uint)((lVar6 + ((lVar7 >> 0x17) - (lVar7 >> 0x3f)) * -10000000) / 10000);
          uVar5 = (int)uVar3 >> 0x1f;
          FString::PrintfImpl(&local_68,L"%03i",(uVar3 ^ uVar5) - uVar5);
          pvVar10 = local_68;
          if (local_60 != 0) {
            iVar11 = local_60 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = (int)param_2[1];
            iVar2 = (uint)(iVar4 == 0) + iVar4 + iVar11;
            *(int *)(param_2 + 1) = iVar2;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
            pvVar10 = local_68;
          }
          break;
        case 0x68:
          uVar3 = (int)(*param_1 / 36000000000) + (int)((*param_1 / 36000000000) / 0x18) * -0x18;
          uVar5 = (int)uVar3 >> 0x1f;
          FString::PrintfImpl(&local_98,L"%02i",(uVar3 ^ uVar5) - uVar5);
          pvVar10 = local_98;
          if (local_90 != 0) {
            iVar11 = local_90 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = (int)param_2[1];
            iVar2 = (uint)(iVar4 == 0) + iVar4 + iVar11;
            *(int *)(param_2 + 1) = iVar2;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
            pvVar10 = local_98;
          }
          break;
        case 0x6d:
          lVar6 = *param_1 / 600000000;
          lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar6),8) + lVar6;
          uVar3 = (int)lVar6 + ((int)(lVar7 >> 5) - (int)(lVar7 >> 0x3f)) * -0x3c;
          uVar5 = (int)uVar3 >> 0x1f;
          FString::PrintfImpl(&local_88,L"%02i",(uVar3 ^ uVar5) - uVar5);
          pvVar10 = local_88;
          if (local_80 != 0) {
            iVar11 = local_80 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = (int)param_2[1];
            iVar2 = (uint)(iVar4 == 0) + iVar4 + iVar11;
            *(int *)(param_2 + 1) = iVar2;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
            pvVar10 = local_88;
          }
          break;
        case 0x6e:
          lVar6 = *param_1;
          lVar7 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar6),8) + lVar6;
          uVar3 = ((int)lVar6 + ((int)(lVar7 >> 0x17) - (int)(lVar7 >> 0x3f)) * -10000000) * 100;
          uVar5 = (int)uVar3 >> 0x1f;
          FString::PrintfImpl(&local_38,L"%09i",(uVar3 ^ uVar5) - uVar5);
          pvVar10 = local_38;
          if (local_30 != 0) {
            iVar11 = local_30 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = (int)param_2[1];
            iVar2 = (uint)(iVar4 == 0) + iVar11 + iVar4;
            *(int *)(param_2 + 1) = iVar2;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
            pvVar10 = local_38;
          }
          break;
        case 0x73:
          lVar6 = *param_1 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(*param_1),8);
          lVar7 = (lVar6 >> 0x17) - (lVar6 >> 0x3f);
          lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar7),8) + lVar7;
          uVar3 = (int)lVar7 + ((int)(lVar6 >> 5) - (int)(lVar6 >> 0x3f)) * -0x3c;
          uVar5 = (int)uVar3 >> 0x1f;
          FString::PrintfImpl(&local_78,L"%02i",(uVar3 ^ uVar5) - uVar5);
          pvVar10 = local_78;
          if (local_70 != 0) {
            iVar11 = local_70 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = (int)param_2[1];
            iVar2 = (uint)(iVar4 == 0) + iVar4 + iVar11;
            *(int *)(param_2 + 1) = iVar2;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
            pvVar10 = local_78;
          }
          break;
        case 0x74:
          lVar6 = *param_1;
          lVar7 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar6),8) + lVar6;
          uVar3 = (int)lVar6 + ((int)(lVar7 >> 0x17) - (int)(lVar7 >> 0x3f)) * -10000000;
          uVar5 = (int)uVar3 >> 0x1f;
          FString::PrintfImpl(&local_48,L"%07i",(uVar3 ^ uVar5) - uVar5);
          pvVar10 = local_48;
          if (local_40 != 0) {
            iVar11 = local_40 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = (int)param_2[1];
            iVar2 = (uint)(iVar4 == 0) + iVar11 + iVar4;
            *(int *)(param_2 + 1) = iVar2;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
            pvVar10 = local_48;
          }
          break;
        case 0x75:
          lVar6 = *param_1;
          lVar7 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar6),8) + lVar6;
          uVar3 = (uint)((lVar6 + ((lVar7 >> 0x17) - (lVar7 >> 0x3f)) * -10000000) / 10);
          uVar5 = (int)uVar3 >> 0x1f;
          FString::PrintfImpl(&local_58,L"%06i",(uVar3 ^ uVar5) - uVar5);
          pvVar10 = local_58;
          if (local_50 != 0) {
            iVar11 = local_50 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = (int)param_2[1];
            iVar2 = (uint)(iVar4 == 0) + iVar4 + iVar11;
            *(int *)(param_2 + 1) = iVar2;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
            pvVar10 = local_58;
          }
        }
        if (pvVar10 != (void *)0x0) {
          FMemory::Free(pvVar10);
        }
      }
    }
    else if (sVar9 != 0) {
switchD_141695acf_caseD_45:
      iVar4 = (int)param_2[1];
      iVar2 = iVar4 + -1;
      if (iVar4 < 1) {
        iVar2 = iVar11;
      }
      iVar4 = (iVar4 < 1) + 1 + iVar4;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      *(short *)(*param_2 + (longlong)iVar2 * 2) = sVar9;
      *(undefined2 *)(*param_2 + 2 + (longlong)iVar2 * 2) = 0;
    }
    sVar9 = param_3[1];
    param_3 = param_3 + 1;
  } while( true );
}



// FUNCTION 1416962b0 ToString body=62 status=ok
// SIG undefined ToString(void)

undefined8 FTimespan::ToString(longlong *param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"%h:%m:%s.%f";
  if ((int)(*param_1 / 864000000000) != 0) {
    pwVar1 = L"%d.%h:%m:%s.%f";
  }
  FUN_1416959d0(param_1,param_2,pwVar1);
  return param_2;
}



// FUNCTION 1416962f0 FUN_1416962f0 body=34 status=ok
// SIG undefined FUN_1416962f0(void)

undefined1 FUN_1416962f0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_res18 [16];
  
  local_res18[0] = param_3;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),local_res18);
  return local_res18[0];
}



// FUNCTION 141696320 UnloadModule body=228 status=ok
// SIG undefined UnloadModule(void)

undefined8 FModuleManager::UnloadModule(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong local_18;
  longlong *local_10;
  
  FindModule(param_1,&local_18,param_2);
  if ((local_18 == 0) || (*(longlong **)(local_18 + 0x28) == (longlong *)0x0)) {
    uVar7 = 0;
  }
  else {
    (**(code **)(**(longlong **)(local_18 + 0x28) + 0x20))();
    puVar4 = *(undefined8 **)(local_18 + 0x28);
    *(undefined8 *)(local_18 + 0x28) = 0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    if (param_3 == '\0') {
      TBaseMulticastDelegate<void,FName,enum_EModuleChangeReason>::Broadcast
                (param_1 + 0x108,param_2,1);
      uVar7 = 1;
    }
    else {
      *(undefined1 *)(local_18 + 0x30) = 1;
      uVar7 = 1;
    }
  }
  plVar6 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 141696410 FUN_141696410 body=952 status=ok
// SIG undefined FUN_141696410(void)

void FUN_141696410(ulonglong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 *local_e8;
  undefined8 local_e0;
  int local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  longlong *local_90;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  
  cVar12 = FUN_1415ad720();
  if ((cVar12 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  puVar17 = (undefined8 *)0x0;
  uStack_d4 = 1;
  local_90 = (longlong *)(param_1 + 8);
  local_e8 = (undefined8 *)0x0;
  uVar5 = *(uint *)(param_1 + 0x30);
  puVar1 = (uint *)(param_1 + 0x18);
  local_e0 = 0;
  local_d8 = 0;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar5 != 0) {
    puVar19 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar14 = *puVar19;
    iStack_c0 = 0;
    local_d8 = 0;
    while (uVar14 == 0) {
      lVar15 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar13 = local_d8 + 1;
      bVar9 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar13;
      if (bVar9) goto LAB_14169650f;
      uVar14 = puVar19[lVar15 + 1];
    }
    uStack_d4 = -uVar14 & uVar14;
    local_res18 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> local_res18 == 0; local_res18 = local_res18 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - local_res18;
    }
    uStack_c4 = (iStack_c0 - iVar13) + 0x1f;
    if ((int)uVar5 < (int)uStack_c4) {
LAB_14169650f:
      uStack_c4 = uVar5;
    }
  }
  local_c8 = 0xffffffff;
  uStack_a4 = *(uint *)(param_1 + 0x30);
  uStack_b0 = CONCAT44(uStack_d4,local_d8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_c4;
  uStack_98 = CONCAT44(uStack_bc,iStack_c0);
  local_b8 = (int)uStack_a4 >> 5;
  uStack_b4 = (undefined4)((ulonglong)local_90 >> 0x20);
  uStack_a8 = -1 << ((byte)uStack_a4 & 0x1f);
  uStack_a0 = uStack_a4 & 0xffffffe0;
  uStack_9c = uStack_c4;
  iStack_80 = local_d8;
  uStack_7c = uStack_d4;
  puStack_d0 = puVar1;
  local_78 = puVar1;
  local_68 = uStack_98;
  local_88 = local_90;
  uVar14 = uStack_a4;
  if (uStack_a4 != uVar5) {
    puVar19 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar14 = puVar19[local_b8] & uStack_a8;
    while (uVar14 == 0) {
      lVar15 = (longlong)local_b8;
      uStack_a0 = uStack_a0 + 0x20;
      iVar13 = local_b8 + 1;
      bVar9 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar13;
      if (bVar9) goto LAB_1416965ed;
      uVar14 = puVar19[lVar15 + 1];
      uStack_a8 = 0xffffffff;
    }
    uVar14 = -uVar14 & uVar14;
    local_res20 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> local_res20 == 0; local_res20 = local_res20 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - local_res20;
    }
    uStack_a4 = (uStack_a0 - iVar13) + 0x1f;
    uVar14 = uStack_a4;
    if ((int)uVar5 < (int)uStack_a4) {
LAB_1416965ed:
      uStack_a4 = uVar5;
      uVar14 = uVar5;
    }
  }
  while (((uStack_6c != uVar14 || (local_78 != puVar1)) || (local_88 != local_90))) {
    puVar18 = (undefined8 *)((longlong)(int)uStack_6c * 0x20 + *local_88);
    uVar7 = *puVar18;
    lVar15 = puVar18[1];
    plVar8 = (longlong *)puVar18[2];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      puVar17 = local_e8;
    }
    local_60 = uVar7;
    if (*(longlong **)(lVar15 + 0x28) != (longlong *)0x0) {
      cVar12 = (**(code **)(**(longlong **)(lVar15 + 0x28) + 0x30))();
      uVar11 = local_e0;
      if (cVar12 != '\0') {
        lVar20 = (longlong)(int)local_e0;
        iVar13 = (int)local_e0 + 1;
        local_e0 = CONCAT44(local_e0._4_4_,iVar13);
        if (local_e0._4_4_ < iVar13) {
          TArray<`anonymous_namespace'::FLogCategoryPtrs,FDefaultAllocator>::ResizeGrow
                    (&local_e8,uVar11 & 0xffffffff);
          puVar17 = local_e8;
        }
        puVar18 = puVar17 + lVar20 * 3;
        if (puVar18 != (undefined8 *)0x0) {
          uVar6 = *(undefined4 *)(lVar15 + 0x34);
          puVar18[2] = *(undefined8 *)(lVar15 + 0x28);
          *puVar18 = uVar7;
          *(undefined4 *)(puVar18 + 1) = uVar6;
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar15 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        iVar13 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      LOCK();
      plVar2 = plVar8 + 1;
      lVar15 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      puVar17 = local_e8;
      if ((int)lVar15 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        iVar13 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        puVar17 = local_e8;
        if (iVar13 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          puVar17 = local_e8;
        }
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  lVar15 = (longlong)(int)local_e0;
  AlgoImpl::
  IntroSortInternal<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair,FIdentityFunctor,TDereferenceWrapper<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair,TLess<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair>_>_>
            (puVar17,lVar15,param_1 & 0xff,local_res10);
  puVar18 = puVar17 + lVar15 * 3;
  puVar10 = puVar17;
  if (puVar17 != puVar18) {
    puVar16 = puVar17 + 2;
    do {
      (**(code **)(*(longlong *)*puVar16 + 0x10))();
      *puVar16 = 0;
      puVar4 = puVar16 + 1;
      puVar16 = puVar16 + 3;
    } while (puVar4 != puVar18);
  }
  for (; puVar10 != puVar18; puVar10 = puVar10 + 3) {
    FModuleManager::UnloadModule(param_1,*puVar10,1);
  }
  if (puVar17 != (undefined8 *)0x0) {
    FMemory::Free(puVar17);
  }
  return;
}



// FUNCTION 1416967d0 Update body=363 status=ok
// SIG undefined Update(void)

void FFrameBoundaries::Update(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  
  if (param_2 != 2) {
    TSingleProducerSingleConsumerList<unsigned___int64,16>::PopAll
              ((longlong)param_2 * 0xa0 + param_1,((longlong)param_2 + 0x14) * 0x10 + param_1,1);
    return;
  }
  puVar7 = (uint *)(param_1 + 0x90);
  piVar9 = (int *)(param_1 + 0x148);
  lVar11 = 2;
  do {
    uVar2 = *(undefined8 *)(puVar7 + -2);
    uVar8 = (int)uVar2 - *puVar7;
    iVar6 = *piVar9;
    iVar1 = *piVar9;
    iVar5 = iVar6 + uVar8;
    *piVar9 = iVar5;
    if (piVar9[1] < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(piVar9 + -2);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(piVar9 + -2) + (longlong)iVar6 * 8),0,
               (longlong)(int)uVar8 << 3);
    uVar10 = (ulonglong)(*puVar7 & 0xf);
    if (((*puVar7 & 0xf) == 0) && (uVar10 = 0, *(longlong *)puVar7 != 0)) {
      uVar10 = 0x10;
    }
    uVar12 = 0;
    if (uVar8 != 0) {
      do {
        if ((int)uVar10 == 0x10) {
          lVar3 = *(longlong *)(puVar7 + -0x24);
          uVar10 = 0;
          uVar4 = *(undefined8 *)(lVar3 + 0x80);
          puVar7[2] = puVar7[2] - 1;
          *(undefined8 *)(puVar7 + -0x24) = uVar4;
          FMemory::operator_delete(lVar3,0x88);
        }
        iVar6 = uVar12 + iVar1;
        uVar12 = uVar12 + 1;
        lVar3 = uVar10 * 8;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(undefined8 *)(*(longlong *)(piVar9 + -2) + (longlong)iVar6 * 8) =
             *(undefined8 *)(*(longlong *)(puVar7 + -0x24) + lVar3);
      } while (uVar12 < uVar8);
    }
    piVar9 = piVar9 + 4;
    *(undefined8 *)puVar7 = uVar2;
    puVar7 = puVar7 + 0x28;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return;
}



// FUNCTION 141696940 UppercaseInternalString body=112 status=ok
// SIG undefined UppercaseInternalString(void)

void FTextFilterString::UppercaseInternalString(undefined8 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (*(int *)(param_1 + 1) != 0) {
    puVar2 = (ushort *)*param_1;
    uVar1 = *puVar2;
    while (uVar1 != 0) {
      if (uVar1 < 0x80) {
        uVar1 = *(short *)(&DAT_144cd45b0 + (ulonglong)uVar1 * 4) + uVar1;
      }
      else {
        uVar1 = towupper(uVar1);
      }
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      uVar1 = *puVar2;
    }
  }
  return;
}



// FUNCTION 1416969b0 UsingCustomVersion body=562 status=ok
// SIG undefined UsingCustomVersion(void)

void FArchive::UsingCustomVersion(longlong *param_1,undefined1 (*param_2) [12])

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auVar5 [12];
  undefined8 *puVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 local_res8 [8];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    auVar5 = *param_2;
    iStack_3c = (int)((ulonglong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    puVar6 = (undefined8 *)FUN_14168e7f0();
    if (((DAT_1468e381c == auVar5._4_4_ && DAT_1468e3820 == auVar5._8_4_) &&
        DAT_1468e3818 == auVar5._0_4_) && DAT_1468e3824 == iStack_3c) {
      piVar10 = &DAT_1468e3818;
    }
    else {
      piVar10 = (int *)*puVar6;
      piVar8 = piVar10 + (longlong)*(int *)(puVar6 + 1) * 8;
      for (; piVar10 != piVar8; piVar10 = piVar10 + 8) {
        if (((piVar10[1] == auVar5._4_4_ && piVar10[3] == iStack_3c) && piVar10[2] == auVar5._8_4_)
            && *piVar10 == auVar5._0_4_) goto LAB_141696a9a;
      }
      piVar10 = (int *)0x0;
    }
LAB_141696a9a:
    local_48 = (int)*(undefined8 *)*param_2;
    iStack_44 = (int)((ulonglong)*(undefined8 *)*param_2 >> 0x20);
    iStack_40 = (int)*(undefined8 *)(*param_2 + 8);
    iStack_3c = (int)((ulonglong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    puVar6 = (undefined8 *)FCustomVersion::GetFriendlyName(piVar10,local_res8);
    iVar1 = piVar10[4];
    uVar3 = *puVar6;
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x120))(param_1);
    if (((local_48 != DAT_1468e3818 || iStack_44 != DAT_1468e381c) || iStack_40 != DAT_1468e3820) ||
        iStack_3c != DAT_1468e3824) {
      piVar8 = (int *)*plVar7;
      iVar2 = (int)plVar7[1];
      lVar9 = (longlong)iVar2 * 0x20;
      piVar10 = piVar8 + (longlong)iVar2 * 8;
      for (; piVar8 != piVar10; piVar8 = piVar8 + 8) {
        if (((piVar8[1] == iStack_44 && piVar8[3] == iStack_3c) && piVar8[2] == iStack_40) &&
            local_48 == *piVar8) {
          piVar8[4] = iVar1;
          *(undefined8 *)(piVar8 + 6) = uVar3;
          return;
        }
      }
      *(int *)(plVar7 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar7 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar7,iVar2);
      }
      lVar4 = *plVar7;
      piVar10 = (int *)(lVar9 + lVar4);
      *piVar10 = local_48;
      piVar10[1] = iStack_44;
      piVar10[2] = iStack_40;
      piVar10[3] = iStack_3c;
      puVar6 = (undefined8 *)(lVar9 + 0x10 + lVar4);
      *puVar6 = CONCAT44(1,iVar1);
      puVar6[1] = uVar3;
    }
  }
  return;
}



// FUNCTION 141696bf0 Write body=229 status=ok
// SIG undefined Write(void)

undefined8 FLargeMemoryData::Write(longlong *param_1,void *param_2,longlong param_3,size_t param_4)

{
  uint uVar1;
  longlong lVar2;
  
  if (-1 < param_3) {
    if (param_2 == (void *)0x0) {
      uVar1 = (uint)(param_4 == 0);
    }
    else {
      uVar1 = (uint)(param_4 >> 0x3f) ^ 1;
    }
    if (uVar1 != 0) {
      lVar2 = param_3 + param_4;
      if ((longlong)(param_3 + param_4) <= param_1[1]) {
        lVar2 = param_1[1];
      }
      param_1[1] = lVar2;
      if (param_1[2] < lVar2) {
        lVar2 = FMemory::QuantizeSize
                          (lVar2 + 0x10 +
                           ((longlong)(lVar2 * 3 + (ulonglong)((uint)(lVar2 * 3 >> 0x3f) & 7)) >> 3)
                           ,0);
        if (lVar2 < 0x10001) {
          lVar2 = 0x10000;
        }
        param_1[2] = lVar2;
        if (*param_1 == 0) {
          lVar2 = FMemory::Malloc(lVar2,0);
        }
        else {
          lVar2 = FMemory::Realloc(*param_1,lVar2,0);
        }
        *param_1 = lVar2;
      }
      if (param_4 != 0) {
        ::_guard_xfg_dispatch_icall_nop((void *)(param_3 + *param_1),param_2,param_4);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141696ce0 WriteBit body=256 status=ok
// SIG undefined WriteBit(void)

void FBitWriter::WriteBit(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  
  lVar4 = *(longlong *)(param_1 + 0xa0) + 1;
  if (*(longlong *)(param_1 + 0xa8) < lVar4) {
    if (*(char *)(param_1 + 0xb0) == '\0') {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0xa8) * 2;
    if (lVar4 <= lVar2) {
      lVar4 = lVar2;
    }
    *(longlong *)(param_1 + 0xa8) = lVar4;
    iVar1 = *(int *)(param_1 + 0x98);
    iVar6 = (int)(lVar4 + 7 >> 3) - *(int *)(param_1 + 0x98);
    iVar3 = iVar1 + iVar6;
    *(int *)(param_1 + 0x98) = iVar3;
    if (*(int *)(param_1 + 0x9c) < iVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x90);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x90)),0,(longlong)iVar6);
  }
  if (param_2 != '\0') {
    pbVar5 = (byte *)((longlong)(int)(*(longlong *)(param_1 + 0xa0) >> 3) +
                     *(longlong *)(param_1 + 0x90));
    *pbVar5 = *pbVar5 | (&DAT_144cd0940)[(uint)*(longlong *)(param_1 + 0xa0) & 7];
  }
  *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 1;
  return;
}



// FUNCTION 141696de0 FUN_141696de0 body=6013 status=ok
// SIG undefined FUN_141696de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141696de0(longlong param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  double dVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  uint *puVar5;
  bool bVar6;
  BOOL BVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  LPCRITICAL_SECTION p_Var13;
  ulonglong uVar14;
  longlong lVar15;
  short *psVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong lVar19;
  double *pdVar20;
  longlong *plVar21;
  ErrorLevel EVar22;
  undefined2 *puVar23;
  longlong *plVar24;
  double *pdVar25;
  longlong *plVar26;
  int iVar27;
  longlong *plVar28;
  longlong lVar29;
  int *piVar30;
  longlong *plVar31;
  int iVar32;
  double *pdVar33;
  ulong uVar34;
  undefined *puVar35;
  __uint64 _Var37;
  double *pdVar38;
  int iVar39;
  ulonglong uVar40;
  double *pdVar41;
  float fVar42;
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auStackY_2b8 [32];
  undefined4 in_stack_fffffffffffffd68;
  undefined2 uVar46;
  ulong uVar45;
  undefined1 in_stack_fffffffffffffd70;
  char local_288 [8];
  longlong *local_280;
  ulonglong local_278;
  uint local_270;
  uint local_26c;
  uint local_268;
  longlong *local_260;
  int local_258;
  int local_254;
  uint local_250;
  longlong *local_248;
  undefined8 local_240;
  double *local_238;
  uint local_230;
  uint local_22c;
  longlong *local_228;
  longlong *local_220;
  longlong local_218;
  longlong *local_210;
  uint local_208;
  uint local_204;
  longlong *local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  char local_1e8;
  undefined2 *local_1e0;
  int local_1d8;
  undefined2 *local_1d0;
  int local_1c8;
  undefined2 *local_1c0;
  int local_1b8;
  longlong local_1b0 [3];
  char local_198 [128];
  longlong local_118;
  undefined8 local_110;
  int local_108;
  longlong local_98;
  char *local_90;
  undefined4 local_88;
  ulonglong local_78;
  char *pcVar36;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStackY_2b8;
  local_218 = param_1;
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e35f0);
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e35f0);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    DAT_1464aff89 = 1;
  }
  FUN_141690ec0(param_1);
  plVar12 = (longlong *)0x0;
  local_210 = (longlong *)0x0;
  local_250 = 0;
  local_204 = 0;
  local_200 = (longlong *)0x0;
  local_1f8 = 0;
  FUN_14168e990(param_1,&local_200);
  plVar31 = plVar12;
  uVar10 = local_250;
  if (0 < (int)local_1f8) {
    uVar40 = local_1f8 & 0xffffffff;
    plVar18 = local_200;
    plVar24 = local_210;
    do {
      lVar29 = *plVar18;
      FUN_141690fe0(lVar29);
      iVar32 = (int)plVar31;
      local_208 = iVar32 + 1;
      if ((int)plVar12 < (int)local_208) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_210,plVar31);
        plVar12 = (longlong *)(ulonglong)local_204;
        plVar24 = local_210;
      }
      plVar31 = (longlong *)(ulonglong)local_208;
      plVar18 = plVar18 + 1;
      plVar24[iVar32] = lVar29 + 0x218;
      uVar40 = uVar40 - 1;
      param_1 = local_218;
      uVar10 = local_208;
    } while (uVar40 != 0);
  }
  local_250 = uVar10;
  plVar12 = (longlong *)FUN_1415c3d50();
  if (*(int *)(param_1 + 0x60) == 0) {
    puVar23 = &DAT_143f3eda8;
  }
  else {
    puVar23 = *(undefined2 **)(param_1 + 0x58);
  }
  local_228 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12,puVar23,0);
  if (local_228 != (longlong *)0x0) {
    bVar6 = true;
    local_268 = local_268 & 0xffffff00;
    local_26c = 0;
    p_Var13 = DAT_1468e34d0;
    local_1f0 = local_228;
    while( true ) {
      uVar10 = local_26c;
      if (p_Var13 == (LPCRITICAL_SECTION)0x0) {
        p_Var13 = (LPCRITICAL_SECTION)operator_new(0x88);
        if (p_Var13 == (LPCRITICAL_SECTION)0x0) {
          p_Var13 = (LPCRITICAL_SECTION)0x0;
        }
        else {
          InitializeCriticalSection(p_Var13);
          SetCriticalSectionSpinCount(p_Var13,4000);
          p_Var13[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
          p_Var13[1].LockCount = 0;
          p_Var13[1].RecursionCount = 0;
          p_Var13[1].SpinCount = 0;
          p_Var13[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
          p_Var13[2].LockCount = -1;
          p_Var13[2].RecursionCount = 0;
          p_Var13[2].LockSemaphore = (HANDLE)0x0;
          *(undefined4 *)&p_Var13[2].SpinCount = 0;
          p_Var13[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
          p_Var13[3].LockCount = 1;
          p_Var13[3].RecursionCount = 0;
          if (p_Var13[3].RecursionCount < 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
          }
          p_Var4 = p_Var13[3].DebugInfo;
          p_Var4->Type = 0;
          p_Var4->CreatorBackTraceIndex = 0;
          *(undefined4 *)&p_Var4->field_0x4 = 0;
          p_Var4->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
          uVar10 = local_26c;
        }
        DAT_1468e34d0 = p_Var13;
        _guard_xfg_dispatch_icall_nop(&DAT_1468e3840,0,0x800);
      }
      if (p_Var13[3].LockCount <= (int)uVar10) break;
      plVar12 = local_210;
      if (0 < (int)plVar31) {
        do {
          plVar18 = (longlong *)*plVar12;
          local_248 = (longlong *)0x0;
          local_240 = 0;
          local_260 = plVar18;
          local_220 = plVar31;
          FUN_141691cc0(plVar18,&local_248,uVar10);
          plVar21 = local_228;
          iVar32 = (int)local_240;
          plVar24 = local_248;
          plVar26 = local_248;
          if (0 < (int)local_240) {
            uVar40 = local_240 & 0xffffffff;
            plVar28 = local_248;
            do {
              if (!bVar6) {
                local_288[0] = ',';
                (**(code **)(*plVar21 + 0x50))(plVar21,local_288,1);
              }
              bVar6 = false;
              TStringConversion<TStringConvert<wchar_t,char>,128>::
              TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,&DAT_143f3eda8);
              (**(code **)(*plVar21 + 0x50))(plVar21,local_110,(longlong)local_108);
              if (local_118 != 0) {
                FMemory::Free();
              }
              if ((int)plVar28[1] == 0) {
                puVar23 = &DAT_143f3eda8;
              }
              else {
                puVar23 = (undefined2 *)*plVar28;
              }
              TStringConversion<TStringConvert<wchar_t,char>,128>::
              TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,puVar23);
              (**(code **)(*plVar21 + 0x50))(plVar21,local_110,(longlong)local_108);
              if (local_118 != 0) {
                FMemory::Free();
              }
              plVar28 = plVar28 + 2;
              uVar40 = uVar40 - 1;
              plVar24 = local_248;
              plVar26 = local_248;
              plVar18 = local_260;
              plVar31 = local_220;
            } while (uVar40 != 0);
          }
          for (; plVar21 = local_248, iVar32 != 0; iVar32 = iVar32 + -1) {
            local_248 = plVar26;
            if (*plVar24 != 0) {
              FMemory::Free();
            }
            plVar24 = plVar24 + 2;
            plVar26 = local_248;
            local_248 = plVar21;
          }
          uVar40 = local_240 >> 0x20;
          local_240 = local_240 & 0xffffffff00000000;
          plVar24 = local_248;
          iVar32 = 0;
          local_248 = plVar26;
          if ((int)uVar40 != 0) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_248);
            plVar24 = local_248;
            iVar32 = (int)local_240;
          }
          local_268 = local_268 & 0xff;
          plVar26 = plVar24;
          if ((int)plVar18[0xd] != 0) {
            local_268 = 1;
          }
          for (; iVar32 != 0; iVar32 = iVar32 + -1) {
            if (*plVar26 != 0) {
              FMemory::Free();
            }
            plVar26 = plVar26 + 2;
          }
          if (plVar24 != (longlong *)0x0) {
            FMemory::Free(plVar24);
          }
          plVar31 = (longlong *)((longlong)plVar31 - 1);
          plVar12 = plVar12 + 1;
          uVar10 = local_26c;
        } while (plVar31 != (longlong *)0x0);
        plVar31 = (longlong *)(ulonglong)local_250;
        local_220 = (longlong *)0x0;
        p_Var13 = DAT_1468e34d0;
      }
      local_26c = uVar10 + 1;
    }
    plVar12 = local_228;
    if ((char)local_268 != '\0') {
      local_280 = (longlong *)0x0;
      local_278 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
      plVar18 = local_280;
      FGenericPlatformString::Memcpy(local_280,L"EVENTS",0xe);
      plVar12 = local_228;
      if (!bVar6) {
        local_288[0] = ',';
        (**(code **)(*local_228 + 0x50))(local_228,local_288,1);
      }
      plVar24 = (longlong *)&DAT_143f3eda8;
      if ((uint)local_278 != 0) {
        plVar24 = plVar18;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,plVar24);
      (**(code **)(*plVar12 + 0x50))(plVar12,local_110,(longlong)local_108);
      if (local_118 != 0) {
        FMemory::Free();
      }
      if (plVar18 != (longlong *)0x0) {
        FMemory::Free(plVar18);
      }
    }
    local_288[0] = '\n';
    (**(code **)(*plVar12 + 0x50))(plVar12,local_288,1);
    uVar46 = (undefined2)((uint)in_stack_fffffffffffffd68 >> 0x10);
    local_270 = 0;
    if (0 < *(int *)(local_218 + 0x18)) {
      do {
        local_288[0] = '\x01';
        local_26c = 0;
        p_Var13 = DAT_1468e34d0;
        while( true ) {
          if (p_Var13 == (LPCRITICAL_SECTION)0x0) {
            p_Var13 = (LPCRITICAL_SECTION)operator_new(0x88);
            if (p_Var13 == (LPCRITICAL_SECTION)0x0) {
              p_Var13 = (LPCRITICAL_SECTION)0x0;
            }
            else {
              InitializeCriticalSection(p_Var13);
              SetCriticalSectionSpinCount(p_Var13,4000);
              p_Var13[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              p_Var13[1].LockCount = 0;
              p_Var13[1].RecursionCount = 0;
              p_Var13[1].SpinCount = 0;
              p_Var13[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              p_Var13[2].LockCount = -1;
              p_Var13[2].RecursionCount = 0;
              p_Var13[2].LockSemaphore = (HANDLE)0x0;
              *(undefined4 *)&p_Var13[2].SpinCount = 0;
              p_Var13[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              p_Var13[3].LockCount = 1;
              p_Var13[3].RecursionCount = 0;
              if (p_Var13[3].RecursionCount < 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
              }
              p_Var4 = p_Var13[3].DebugInfo;
              p_Var4->Type = 0;
              p_Var4->CreatorBackTraceIndex = 0;
              *(undefined4 *)&p_Var4->field_0x4 = 0;
              p_Var4->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
            }
            DAT_1468e34d0 = p_Var13;
            _guard_xfg_dispatch_icall_nop(&DAT_1468e3840,0,0x800);
          }
          plVar18 = (longlong *)0x0;
          if (p_Var13[3].LockCount <= (int)local_26c) break;
          plVar24 = (longlong *)(longlong)(int)local_26c;
          plVar18 = local_210;
          local_220 = plVar24;
          uVar10 = local_26c;
          if (0 < (int)plVar31) {
            do {
              local_260 = plVar31;
              pdVar20 = (double *)0x0;
              lVar29 = *plVar18;
              local_238 = (double *)0x0;
              local_22c = 0;
              pdVar25 = pdVar20;
              pdVar33 = pdVar20;
              pdVar38 = pdVar20;
              pdVar41 = pdVar20;
              local_248 = plVar18;
              if (0 < *(int *)(lVar29 + 0x58)) {
                do {
                  puVar5 = *(uint **)((longlong)pdVar25 + *(longlong *)(lVar29 + 0x50));
                  uVar8 = *puVar5 >> 1 & 0x7ff;
                  uVar40 = (ulonglong)uVar8;
                  if ((uVar8 == uVar10) || (plVar24 == (longlong *)0xffffffffffffffff)) {
                    uVar10 = puVar5[10];
                    uVar8 = 0;
                    if (uVar10 != 0) {
                      uVar40 = *(ulonglong *)(puVar5 + 8);
                      uVar8 = *(int *)((uVar40 - 8) + (longlong)(int)puVar5[10] * 0xc) +
                              *(int *)((uVar40 - 0xc) + (longlong)(int)puVar5[10] * 0xc);
                    }
                    if ((int)local_270 < (int)uVar8) {
                      uVar8 = puVar5[7];
                      uVar14 = (ulonglong)(int)uVar8;
                      uVar40 = uVar14;
                      if ((uVar8 == uVar10) ||
                         ((0 < (int)uVar8 &&
                          (uVar40 = *(ulonglong *)(puVar5 + 8),
                          (int)local_270 < *(int *)(uVar40 + uVar14 * 0xc))))) {
                        puVar5[7] = 0;
                        uVar8 = 0;
                      }
                      if ((int)uVar8 < (int)uVar10) {
                        lVar19 = *(longlong *)(puVar5 + 8);
                        while( true ) {
                          uVar40 = (ulonglong)(int)uVar8;
                          iVar32 = local_270 - *(int *)(lVar19 + uVar40 * 0xc);
                          if (iVar32 < 0) break;
                          if (iVar32 < *(int *)(lVar19 + 4 + uVar40 * 0xc)) {
                            lVar19 = (longlong)(*(int *)(lVar19 + 8 + uVar40 * 0xc) + iVar32);
                            uVar40 = *(ulonglong *)(puVar5 + 0xc);
                            if ((char)puVar5[6] == '\x01') {
                              dVar3 = (double)*(int *)(uVar40 + lVar19 * 4);
                            }
                            else {
                              dVar3 = (double)*(float *)(uVar40 + lVar19 * 4);
                            }
                            goto LAB_1416974ed;
                          }
                          uVar8 = uVar8 + 1;
                          puVar5[7] = uVar8;
                          if ((int)uVar10 <= (int)uVar8) goto LAB_1416974ea;
                        }
                        if (0 < (int)uVar8) {
                          uVar40 = (ulonglong)(uVar8 - 1);
                          puVar5[7] = uVar8 - 1;
                        }
                      }
                    }
LAB_1416974ea:
                    dVar3 = 0.0;
LAB_1416974ed:
                    iVar32 = (int)pdVar33;
                    local_230 = iVar32 + 1;
                    if ((int)pdVar38 < (int)local_230) {
                      uVar40 = TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                         (&local_238,pdVar33);
                      pdVar38 = (double *)(ulonglong)local_22c;
                    }
                    pdVar33 = (double *)(ulonglong)local_230;
                    local_238[iVar32] = dVar3;
                    pdVar20 = local_238;
                    plVar24 = local_220;
                    uVar10 = local_26c;
                  }
                  uVar8 = (int)pdVar41 + 1;
                  pdVar25 = pdVar25 + 1;
                  pdVar41 = (double *)(ulonglong)uVar8;
                } while ((int)uVar8 < *(int *)(lVar29 + 0x58));
                if (0 < (int)pdVar33) {
                  do {
                    uVar9 = (undefined4)uVar40;
                    dVar3 = *pdVar20;
                    if (local_288[0] == '\0') {
                      local_288[0] = ',';
                      uVar9 = (**(code **)(*plVar12 + 0x50))(plVar12,local_288,1);
                    }
                    fVar44 = (float)dVar3;
                    local_288[0] = '\0';
                    iVar32 = (int)dVar3;
                    fVar42 = fVar44;
                    if ((iVar32 != -0x80000000) && ((float)iVar32 != fVar44)) {
                      auVar43._4_4_ = fVar44;
                      auVar43._0_4_ = fVar44;
                      auVar43._8_8_ = 0;
                      uVar10 = movmskps(uVar9,auVar43);
                      fVar42 = (float)(int)(iVar32 - (uVar10 & 1));
                    }
                    if (fVar44 - fVar42 == 0.0) {
                      TCString<char>::SnprintfImpl(local_198,0x100,&DAT_144cd4c80,(int)dVar3);
                    }
                    else {
                      puVar35 = &DAT_144cd4c84;
                      if (0.1 <= ABS(dVar3)) {
                        puVar35 = &DAT_144cd4c8c;
                      }
                      TCString<char>::SnprintfImpl(local_198,0x100,puVar35,dVar3);
                    }
                    lVar29 = -1;
                    do {
                      lVar15 = lVar29 + 1;
                      lVar19 = lVar29 + 1;
                      lVar29 = lVar15;
                    } while (local_198[lVar19] != '\0');
                    uVar40 = (**(code **)(*plVar12 + 0x50))(plVar12,local_198,(longlong)(int)lVar15)
                    ;
                    pdVar20 = pdVar20 + 1;
                    pdVar33 = (double *)((longlong)pdVar33 + -1);
                  } while (pdVar33 != (double *)0x0);
                }
                plVar24 = local_220;
                uVar10 = local_26c;
                if (local_238 != (double *)0x0) {
                  FMemory::Free();
                  plVar24 = local_220;
                  uVar10 = local_26c;
                }
              }
              local_248 = local_248 + 1;
              plVar18 = local_248;
              plVar31 = (longlong *)((longlong)local_260 - 1U);
            } while ((longlong *)((longlong)local_260 - 1U) != (longlong *)0x0);
            plVar31 = (longlong *)(ulonglong)local_250;
            local_260 = (longlong *)0x0;
            p_Var13 = DAT_1468e34d0;
          }
          local_26c = uVar10 + 1;
        }
        uVar10 = local_270;
        if ((char)local_268 != '\0') {
          local_280 = (longlong *)0x0;
          local_278 = local_278 & 0xffffffff;
          plVar26 = local_210;
          plVar24 = plVar18;
          plVar31 = plVar18;
          plVar21 = (longlong *)(ulonglong)local_250;
          if (0 < (int)local_250) {
            do {
              local_260 = plVar21;
              lVar29 = *plVar26;
              iVar32 = *(int *)(lVar29 + 0x80);
              if ((iVar32 == *(int *)(lVar29 + 0x68)) ||
                 ((0 < iVar32 &&
                  (uVar10 < *(uint *)(*(longlong *)(lVar29 + 0x60) + 0x10 + (longlong)iVar32 * 0x18)
                  )))) {
                iVar32 = 0;
                *(undefined4 *)(lVar29 + 0x80) = 0;
              }
              uVar8 = local_270;
              if (iVar32 < *(int *)(lVar29 + 0x68)) {
                do {
                  uVar10 = *(uint *)(*(longlong *)(lVar29 + 0x60) + 0x10 + (longlong)iVar32 * 0x18);
                  if (uVar8 == uVar10) {
                    plVar12 = (longlong *)
                              FCsvProcessedEvent::GetFullName
                                        (*(longlong *)(lVar29 + 0x60) + (longlong)iVar32 * 0x18,
                                         local_1b0);
                    iVar32 = (int)plVar24;
                    uVar10 = iVar32 + 1;
                    local_278 = CONCAT44(local_278._4_4_,uVar10);
                    if ((int)plVar31 < (int)uVar10) {
                      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_280,plVar24);
                      plVar31 = (longlong *)(local_278 >> 0x20);
                      plVar18 = local_280;
                      uVar10 = (uint)local_278;
                    }
                    plVar24 = (longlong *)(ulonglong)uVar10;
                    plVar21 = plVar18 + (longlong)iVar32 * 2;
                    *plVar21 = 0;
                    *plVar21 = *plVar12;
                    *plVar12 = 0;
                    *(int *)(plVar21 + 1) = (int)plVar12[1];
                    *(undefined4 *)((longlong)plVar21 + 0xc) =
                         *(undefined4 *)((longlong)plVar12 + 0xc);
                    plVar12[1] = 0;
                    if (local_1b0[0] != 0) {
                      FMemory::Free();
                    }
                    iVar32 = *(int *)(lVar29 + 0x80);
                    uVar8 = local_270;
                  }
                  else if (uVar8 < uVar10) {
                    uVar10 = local_270;
                    if (0 < iVar32) {
                      *(int *)(lVar29 + 0x80) = iVar32 + -1;
                    }
                    break;
                  }
                  iVar32 = iVar32 + 1;
                  *(int *)(lVar29 + 0x80) = iVar32;
                  uVar10 = local_270;
                } while (iVar32 < *(int *)(lVar29 + 0x68));
              }
              plVar26 = plVar26 + 1;
              plVar21 = (longlong *)((longlong)local_260 - 1U);
            } while ((longlong *)((longlong)local_260 - 1U) != (longlong *)0x0);
            local_260 = (longlong *)0x0;
            plVar12 = local_228;
          }
          if (local_288[0] == '\0') {
            local_288[0] = ',';
            (**(code **)(*plVar12 + 0x50))(plVar12,local_288,1);
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,&DAT_143f3eda8);
          (**(code **)(*plVar12 + 0x50))(plVar12,local_110,(longlong)local_108);
          if (local_118 != 0) {
            FMemory::Free();
          }
          iVar32 = 0;
          uVar8 = (uint)plVar24;
          plVar26 = plVar18;
          plVar31 = plVar18;
          if (0 < (int)uVar8) {
            do {
              in_stack_fffffffffffffd68 = 0;
              FString::Replace(plVar26,&local_1e0,&DAT_144cb1544,&DAT_143f73c90);
              if (0 < iVar32) {
                local_288[0] = ';';
                (**(code **)(*plVar12 + 0x50))(plVar12,local_288,1);
              }
              puVar23 = &DAT_143f3eda8;
              if (local_1d8 != 0) {
                puVar23 = local_1e0;
              }
              TStringConversion<TStringConvert<wchar_t,char>,128>::
              TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,puVar23);
              (**(code **)(*plVar12 + 0x50))(plVar12,local_110,(longlong)local_108);
              if (local_118 != 0) {
                FMemory::Free();
              }
              if (local_1e0 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              iVar32 = iVar32 + 1;
              plVar26 = plVar26 + 2;
              uVar10 = local_270;
            } while (iVar32 < (int)uVar8);
          }
          while (uVar8 != 0) {
            if (*plVar31 != 0) {
              FMemory::Free();
            }
            uVar8 = (int)plVar24 - 1;
            plVar24 = (longlong *)(ulonglong)uVar8;
            plVar31 = plVar31 + 2;
          }
          if (plVar18 != (longlong *)0x0) {
            FMemory::Free(plVar18);
          }
        }
        local_288[0] = '\n';
        (**(code **)(*plVar12 + 0x50))(plVar12,local_288,1);
        uVar46 = (undefined2)((uint)in_stack_fffffffffffffd68 >> 0x10);
        local_270 = uVar10 + 1;
        plVar31 = (longlong *)(ulonglong)local_250;
      } while ((int)local_270 < *(int *)(local_218 + 0x18));
    }
    local_288[0] = '\x01';
    lVar19 = -1;
    _Var37 = 8;
    local_98 = 0;
    local_90 = local_198;
    local_88 = 7;
    uVar45 = CONCAT22(uVar46,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_90,8,"Windows");
    EVar22 = 0x44cd3760;
    pcVar36 = local_90;
    FString::PrintfImpl(&local_1c0);
    uVar34 = (ulong)pcVar36;
    lVar29 = local_98;
    if (local_98 != 0) {
      FMemory::Free();
    }
    AK::Monitor::PostCode
              ((ErrorCode)lVar29,EVar22,uVar34,_Var37,uVar45,(bool)in_stack_fffffffffffffd70);
    psVar16 = (short *)FUN_1415bb3d0();
    local_238 = (double *)0x0;
    local_268 = 0;
    local_22c = 0;
    if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
      do {
        lVar19 = lVar19 + 1;
      } while (psVar16[lVar19] != 0);
      uVar10 = (int)lVar19 + 1;
      local_230 = uVar10;
      if (0 < (int)uVar10) {
        local_268 = uVar10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
      }
      local_268 = local_230;
      FGenericPlatformString::Memcpy(local_238,psVar16,(longlong)(int)uVar10 * 2);
    }
    iVar11 = 0;
    local_278 = 2;
    local_280 = (longlong *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
    plVar12 = local_280;
    FGenericPlatformString::Convert<char,wchar_t>(local_280,2,&DAT_144cd18ac);
    local_248 = (longlong *)0x0;
    local_240 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
    plVar31 = local_248;
    FGenericPlatformString::Convert<char,wchar_t>(local_248,2,&DAT_144cd18cc);
    psVar16 = (short *)FCommandLine::Get();
    iVar39 = local_240._4_4_;
    iVar32 = (int)local_240;
    if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
      lVar29 = -1;
      do {
        lVar29 = lVar29 + 1;
      } while (psVar16[lVar29] != 0);
      iVar27 = (int)lVar29;
      if (((int)local_240 == 0) && (iVar27 != 0)) {
        iVar11 = 1;
      }
      local_260 = plVar31;
      local_258 = (int)local_240;
      local_254 = local_240._4_4_;
      if (local_240._4_4_ < iVar11 + (int)local_240 + iVar27) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_260);
      }
      iVar11 = local_258;
      plVar31 = local_260;
      iVar39 = local_254;
      iVar32 = local_258;
      if (iVar27 != 0) {
        lVar29 = (longlong)local_258;
        local_258 = local_258 + (uint)(local_258 == 0) + iVar27;
        if (local_254 < local_258) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,iVar11);
        }
        iVar39 = local_254;
        iVar32 = local_258;
        plVar31 = local_260;
        pvVar1 = (void *)((longlong)local_260 + (lVar29 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,psVar16,(longlong)iVar27 * 2);
        *(undefined2 *)((longlong)iVar27 * 2 + (longlong)pvVar1) = 0;
      }
    }
    plVar18 = plVar12;
    iVar11 = (uint)local_278;
    if (1 < iVar32) {
      iVar11 = 0;
      iVar27 = iVar11;
      if ((uint)local_278 != 0) {
        iVar27 = (uint)local_278 + -1;
      }
      if ((iVar32 == 0) && (iVar27 != 0)) {
        iVar11 = 1;
      }
      local_260 = plVar31;
      local_258 = iVar32;
      local_254 = iVar39;
      if (iVar39 < iVar11 + iVar27 + iVar32) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_260);
      }
      iVar32 = local_258;
      plVar18 = local_260;
      iVar11 = local_258;
      plVar31 = plVar12;
      if (iVar27 != 0) {
        lVar29 = (longlong)local_258;
        local_258 = local_258 + (uint)(local_258 == 0) + iVar27;
        if (local_254 < local_258) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,iVar32);
        }
        iVar11 = local_258;
        plVar18 = local_260;
        pvVar1 = (void *)((longlong)local_260 + (lVar29 - (ulonglong)(iVar32 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,plVar12,(longlong)iVar27 * 2);
        *(undefined2 *)((longlong)iVar27 * 2 + (longlong)pvVar1) = 0;
      }
    }
    if (plVar31 != (longlong *)0x0) {
      FMemory::Free(plVar31);
    }
    psVar16 = (short *)FUN_14162b4e0();
    local_280 = (longlong *)0x0;
    uVar10 = 0;
    local_278 = local_278 & 0xffffffff;
    plVar31 = (longlong *)0x0;
    if ((psVar16 != (short *)0x0) && (plVar31 = (longlong *)0x0, *psVar16 != 0)) {
      lVar29 = -1;
      do {
        lVar29 = lVar29 + 1;
      } while (psVar16[lVar29] != 0);
      uVar8 = (int)lVar29 + 1;
      local_278 = (ulonglong)uVar8;
      uVar10 = uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
        uVar10 = (uint)local_278;
      }
      plVar31 = local_280;
      FGenericPlatformString::Memcpy(local_280,psVar16,(longlong)(int)uVar8 * 2);
    }
    uVar17 = FEngineVersion::Current();
    FEngineVersion::ToString(uVar17,&local_1d0,4);
    local_280 = (longlong *)0x0;
    local_278 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
    plVar12 = local_280;
    FGenericPlatformString::Memcpy(local_280,L"[Platform]",0x16);
    plVar24 = (longlong *)&DAT_143f3eda8;
    if ((uint)local_278 != 0) {
      plVar24 = plVar12;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,plVar24);
    plVar24 = local_228;
    (**(code **)(*local_228 + 0x50))(local_228,local_110,(longlong)local_108);
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    local_288[0] = ',';
    (**(code **)(*plVar24 + 0x50))(plVar24,local_288,1);
    puVar23 = &DAT_143f3eda8;
    if (local_1b8 != 0) {
      puVar23 = local_1c0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,puVar23);
    (**(code **)(*plVar24 + 0x50))(plVar24,local_110,(longlong)local_108);
    if (local_118 != 0) {
      FMemory::Free();
    }
    local_278 = 9;
    local_280 = (longlong *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
    plVar12 = local_280;
    FGenericPlatformString::Memcpy(local_280,L"[Config]",0x12);
    local_288[0] = ',';
    (**(code **)(*plVar24 + 0x50))(plVar24,local_288,1);
    plVar26 = (longlong *)&DAT_143f3eda8;
    if ((uint)local_278 != 0) {
      plVar26 = plVar12;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,plVar26);
    (**(code **)(*plVar24 + 0x50))(plVar24,local_110,(longlong)local_108);
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    local_288[0] = ',';
    (**(code **)(*plVar24 + 0x50))(plVar24,local_288,1);
    pdVar20 = local_238;
    pdVar25 = (double *)&DAT_143f3eda8;
    if (local_268 != 0) {
      pdVar25 = local_238;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,pdVar25);
    (**(code **)(*plVar24 + 0x50))(plVar24,local_110,(longlong)local_108);
    if (local_118 != 0) {
      FMemory::Free();
    }
    local_278 = 0x10;
    local_280 = (longlong *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
    plVar12 = local_280;
    FGenericPlatformString::Memcpy(local_280,L"[DeviceProfile]",0x20);
    local_288[0] = ',';
    (**(code **)(*plVar24 + 0x50))(plVar24,local_288,1);
    plVar26 = (longlong *)&DAT_143f3eda8;
    if ((uint)local_278 != 0) {
      plVar26 = plVar12;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,plVar26);
    (**(code **)(*plVar24 + 0x50))(plVar24,local_110,(longlong)local_108);
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    local_288[0] = ',';
    (**(code **)(*plVar24 + 0x50))(plVar24,local_288,1);
    local_1e8 = '\0';
    FUN_1416986c0(&local_1f0,local_218 + 0x88);
    local_278 = 0xf;
    local_280 = (longlong *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
    plVar12 = local_280;
    FGenericPlatformString::Memcpy(local_280,L"[BuildVersion]",0x1e);
    plVar24 = local_1f0;
    if (local_1e8 == '\0') {
      local_288[0] = ',';
      (**(code **)(*local_1f0 + 0x50))(local_1f0,local_288,1);
    }
    plVar26 = (longlong *)&DAT_143f3eda8;
    if ((uint)local_278 != 0) {
      plVar26 = plVar12;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,plVar26);
    (**(code **)(*plVar24 + 0x50))(plVar24,local_110,(longlong)local_108);
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    local_288[0] = ',';
    (**(code **)(*plVar24 + 0x50))(plVar24,local_288,1);
    plVar12 = (longlong *)&DAT_143f3eda8;
    if (uVar10 != 0) {
      plVar12 = plVar31;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,plVar12);
    (**(code **)(*plVar24 + 0x50))(plVar24,local_110,(longlong)local_108);
    if (local_118 != 0) {
      FMemory::Free();
    }
    local_278 = 0x10;
    local_280 = (longlong *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
    plVar12 = local_280;
    FGenericPlatformString::Memcpy(local_280,L"[EngineVersion]",0x20);
    local_288[0] = ',';
    (**(code **)(*plVar24 + 0x50))(plVar24,local_288,1);
    plVar26 = (longlong *)&DAT_143f3eda8;
    if ((uint)local_278 != 0) {
      plVar26 = plVar12;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,plVar26);
    (**(code **)(*plVar24 + 0x50))(plVar24,local_110,(longlong)local_108);
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    local_288[0] = ',';
    (**(code **)(*plVar24 + 0x50))(plVar24,local_288,1);
    puVar23 = &DAT_143f3eda8;
    if (local_1c8 != 0) {
      puVar23 = local_1d0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,puVar23);
    (**(code **)(*plVar24 + 0x50))(plVar24,local_110,(longlong)local_108);
    if (local_118 != 0) {
      FMemory::Free();
    }
    local_278 = 0xe;
    local_280 = (longlong *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
    plVar12 = local_280;
    FGenericPlatformString::Memcpy(local_280,L"[Commandline]",0x1c);
    local_288[0] = ',';
    (**(code **)(*plVar24 + 0x50))(plVar24,local_288,1);
    plVar26 = (longlong *)&DAT_143f3eda8;
    if ((uint)local_278 != 0) {
      plVar26 = plVar12;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,plVar26);
    (**(code **)(*plVar24 + 0x50))(plVar24,local_110,(longlong)local_108);
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    local_288[0] = ',';
    (**(code **)(*plVar24 + 0x50))(plVar24,local_288,1);
    plVar12 = (longlong *)&DAT_143f3eda8;
    if (iVar11 != 0) {
      plVar12 = plVar18;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,plVar12);
    (**(code **)(*plVar24 + 0x50))(plVar24,local_110,(longlong)local_108);
    if (local_118 != 0) {
      FMemory::Free();
    }
    (**(code **)(*local_228 + 0xe8))();
    if (local_1d0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (plVar31 != (longlong *)0x0) {
      FMemory::Free(plVar31);
    }
    if (plVar18 != (longlong *)0x0) {
      FMemory::Free(plVar18);
    }
    if (pdVar20 != (double *)0x0) {
      FMemory::Free(pdVar20);
    }
    if (local_1c0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  plVar31 = local_200;
  if (0 < (int)local_1f8) {
    uVar40 = local_1f8 & 0xffffffff;
    plVar12 = local_200;
    do {
      lVar29 = *plVar12;
      *(undefined4 *)(lVar29 + 0x30) = 0;
      if (*(int *)(lVar29 + 0x34) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (lVar29 + 0x28,0);
      }
      *(undefined8 *)(lVar29 + 0x20) = 0;
      plVar18 = *(longlong **)(lVar29 + 0x278);
      for (iVar32 = *(int *)(lVar29 + 0x280); iVar32 != 0; iVar32 = iVar32 + -1) {
        if (*plVar18 != 0) {
          FMemory::Free();
        }
        plVar18 = plVar18 + 3;
      }
      lVar19 = 0;
      *(undefined4 *)(lVar29 + 0x280) = 0;
      if (*(int *)(lVar29 + 0x284) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (lVar29 + 0x278,0);
      }
      iVar32 = 0;
      if (0 < *(int *)(lVar29 + 0x270)) {
        do {
          lVar15 = *(longlong *)(lVar19 + *(longlong *)(lVar29 + 0x268));
          if (lVar15 != 0) {
            if (*(longlong *)(lVar15 + 0x30) != 0) {
              FMemory::Free();
            }
            if (*(longlong *)(lVar15 + 0x20) != 0) {
              FMemory::Free();
            }
            FMemory::operator_delete(lVar15);
          }
          iVar32 = iVar32 + 1;
          lVar19 = lVar19 + 8;
        } while (iVar32 < *(int *)(lVar29 + 0x270));
      }
      *(undefined4 *)(lVar29 + 0x270) = 0;
      if (*(int *)(lVar29 + 0x274) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo();
      }
      TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
      ::Empty(lVar29 + 0x218);
      plVar12 = plVar12 + 1;
      *(undefined4 *)(lVar29 + 0x298) = 0;
      uVar40 = uVar40 - 1;
    } while (uVar40 != 0);
  }
  FFrameBoundaries::Update(&DAT_1468e3630,2);
  piVar30 = &DAT_1468e377c;
  do {
    piVar30[-1] = 0;
    if (*piVar30 != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(piVar30 + -3,0);
    }
    lVar29 = local_218;
    piVar30 = piVar30 + 4;
  } while ((longlong)piVar30 < 0x1468e379c);
  DAT_1468e3790 = 0;
  if (*(char *)(local_218 + 0xb) != '\0') {
    local_238 = (double *)0x0;
    TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
              (&local_238,*(undefined8 *)(local_218 + 0x58),*(undefined4 *)(local_218 + 0x60),0);
    uVar10 = local_230;
    lVar19 = (longlong)(int)local_230;
    local_230 = (10 - (uint)(local_230 != 0)) + local_230;
    if ((int)local_22c < (int)local_230) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar10);
    }
    uVar8 = local_230;
    pdVar20 = local_238;
    lVar19 = lVar19 - (ulonglong)(uVar10 != 0);
    puVar2 = (undefined8 *)((longlong)local_238 + lVar19 * 2);
    *puVar2 = 0x6d006f0063002e;
    puVar2[1] = 0x740065006c0070;
    *(undefined2 *)((longlong)local_238 + lVar19 * 2 + 0x10) = 0x65;
    *(undefined2 *)((longlong)local_238 + lVar19 * 2 + 0x12) = 0;
    plVar12 = (longlong *)FUN_1415c3d50();
    pdVar25 = (double *)&DAT_143f3eda8;
    if (uVar8 != 0) {
      pdVar25 = pdVar20;
    }
    (**(code **)(*plVar12 + 0x20))(plVar12,pdVar25,0);
    if (pdVar20 != (double *)0x0) {
      FMemory::Free(pdVar20);
    }
  }
  if (*(longlong *)(lVar29 + 0x80) != 0) {
    DAT_1464aff89 = 0;
  }
  if (plVar31 != (longlong *)0x0) {
    FMemory::Free(plVar31);
  }
  if (local_210 != (longlong *)0x0) {
    FMemory::Free(local_210);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468e35f0);
  return;
}



// FUNCTION 141698560 WriteIntWrapped body=340 status=ok
// SIG undefined WriteIntWrapped(void)

void FBitWriter::WriteIntWrapped(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  iVar5 = 0x20;
  iVar2 = iVar5;
  if (param_3 != 0) {
    iVar2 = 0x1f - iVar7;
  }
  uVar3 = param_3 - 1;
  iVar7 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  if (uVar3 != 0) {
    iVar5 = 0x1f - iVar7;
  }
  lVar4 = (longlong)(int)(0x20U - iVar5 & ~((iVar2 << 0x1a) >> 0x1f)) +
          *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa8) < lVar4) {
    if (*(char *)(param_1 + 0xb0) == '\0') {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0xa8) * 2;
    if (lVar4 <= lVar1) {
      lVar4 = lVar1;
    }
    *(longlong *)(param_1 + 0xa8) = lVar4;
    iVar7 = *(int *)(param_1 + 0x98);
    iVar5 = (int)(lVar4 + 7 >> 3) - *(int *)(param_1 + 0x98);
    iVar2 = iVar7 + iVar5;
    *(int *)(param_1 + 0x98) = iVar2;
    if (*(int *)(param_1 + 0x9c) < iVar2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x90);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar7 + *(longlong *)(param_1 + 0x90)),0,(longlong)iVar5);
  }
  iVar7 = 0;
  uVar3 = 1;
  if (1 < param_3) {
    do {
      if (uVar3 == 0) {
        return;
      }
      if ((param_2 & uVar3) != 0) {
        pcVar6 = (char *)((longlong)(int)(*(longlong *)(param_1 + 0xa0) >> 3) +
                         *(longlong *)(param_1 + 0x90));
        *pcVar6 = *pcVar6 + (&DAT_144cd0940)[(uint)*(longlong *)(param_1 + 0xa0) & 7];
        iVar7 = iVar7 + uVar3;
      }
      *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 1;
      uVar3 = uVar3 * 2;
    } while (uVar3 + iVar7 < param_3);
  }
  return;
}



// FUNCTION 1416986c0 FUN_1416986c0 body=126 status=ok
// SIG undefined FUN_1416986c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416986c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_b8,puVar1);
  (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,local_30,(longlong)local_28);
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141698740 appBitsCpy body=596 status=ok
// SIG undefined appBitsCpy(void)

void appBitsCpy(longlong param_1,uint param_2,longlong param_3,uint param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  sbyte sVar4;
  sbyte sVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar12;
  
  if (param_5 != 0) {
    iVar8 = param_2 + param_5;
    iVar17 = param_4 + param_5;
    uVar11 = (int)(((int)param_2 >> 0x1f & 7U) + param_2) >> 3;
    uVar12 = (ulonglong)uVar11;
    uVar9 = (int)(((int)param_4 >> 0x1f & 7U) + param_4) >> 3;
    sVar4 = (sbyte)(param_2 & 7);
    if (param_5 < 9) {
      iVar8 = iVar8 + -1;
      uVar19 = (int)((iVar8 >> 0x1f & 7U) + iVar8) >> 3;
      pbVar1 = (byte *)((ulonglong)uVar9 + param_3);
      uVar3 = (int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 7U)) >> 3;
      sVar5 = (sbyte)(param_4 & 7);
      if (uVar9 == uVar3) {
        uVar9 = (uint)(*pbVar1 >> sVar5);
      }
      else {
        uVar9 = (uint)*(byte *)((ulonglong)uVar3 + param_3) << (8U - sVar5 & 0x1f) |
                (uint)(*pbVar1 >> sVar5);
      }
      bVar6 = (char)uVar9 << sVar4;
      bVar2 = (byte)(0xfe << ((byte)iVar8 & 7));
      bVar16 = (byte)(0xff << sVar4);
      if (uVar11 != uVar19) {
        *(byte *)(uVar12 + param_1) = ~bVar16 & *(byte *)(uVar12 + param_1) | bVar6 & bVar16;
        *(byte *)((ulonglong)uVar19 + param_1) =
             (byte)(uVar9 >> (8U - sVar4 & 0x1f)) & ~bVar2 |
             bVar2 & *(byte *)((ulonglong)uVar19 + param_1);
        return;
      }
      bVar6 = ~(~bVar2 & bVar16) & *(byte *)(uVar12 + param_1) | bVar6 & ~bVar2 & bVar16;
    }
    else {
      iVar7 = (param_2 & 7) - (param_4 & 7);
      bVar2 = (byte)iVar7;
      bVar6 = bVar2 + 8;
      iVar18 = 0xff << ((byte)iVar8 & 7);
      uVar3 = ((int)((iVar8 >> 0x1f & 7U) + iVar8) >> 3) - uVar11;
      uVar13 = ((int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3) - uVar9;
      uVar19 = (uint)*(byte *)((ulonglong)uVar9 + param_3);
      if (iVar7 < 0) {
        uVar14 = uVar13 - 1;
        if ((int)(uVar13 - 1) <= (int)uVar3) {
          uVar14 = uVar3;
        }
        bVar16 = bVar6 & 0x1f;
        uVar9 = uVar9 + 1;
        bVar6 = bVar2 + 0x10;
        uVar19 = ((uint)*(byte *)((ulonglong)uVar9 + param_3) << (bVar6 & 0x1f)) +
                 (uVar19 << bVar16) >> 8;
      }
      else {
        uVar14 = uVar13;
        if ((int)uVar13 <= (int)uVar3) {
          uVar14 = uVar3;
        }
        uVar19 = uVar19 << (bVar2 & 0x1f);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      bVar2 = (byte)(0xff << sVar4);
      *(byte *)(uVar12 + param_1) = ~bVar2 & *(byte *)(uVar12 + param_1) | bVar2 & (byte)uVar19;
      uVar12 = (ulonglong)(uVar11 + 1);
      if (1 < uVar14) {
        uVar15 = (ulonglong)(uVar14 - 1);
        do {
          pbVar1 = (byte *)(uVar10 + param_3);
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar9 = uVar19 + ((uint)*pbVar1 << (bVar6 & 0x1f));
          uVar19 = uVar9 >> 8;
          *(char *)(uVar12 + param_1) = (char)(uVar9 >> 8);
          uVar12 = (ulonglong)((int)uVar12 + 1);
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (iVar18 == 0xff) {
        return;
      }
      if (iVar17 - 1U >> 3 == (uint)uVar10) {
        uVar19 = uVar19 + ((uint)*(byte *)(uVar10 + param_3) << (bVar6 & 0x1f));
      }
      bVar6 = (byte)iVar18;
      bVar6 = ~bVar6 & (byte)(uVar19 >> 8) | bVar6 & *(byte *)(uVar12 + param_1);
    }
    *(byte *)(uVar12 + param_1) = bVar6;
  }
  return;
}



// FUNCTION 1416989b0 FScopeLogTime body=194 status=ok
// SIG undefined FScopeLogTime(void)

double * FScopeLogTime::FScopeLogTime
                   (double *param_1,short *param_2,double param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  *param_1 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 1,0);
    }
    FGenericPlatformString::Memcpy(param_1[1],param_2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[3] = param_3;
  return param_1;
}



// FUNCTION 141698a80 ~FScopeLogTime body=215 status=ok
// SIG undefined ~FScopeLogTime(void)

void FScopeLogTime::~FScopeLogTime(double *param_1)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  LARGE_INTEGER local_res8;
  longlong local_28 [4];
  
  QueryPerformanceCounter(&local_res8);
  local_28[0] = 0;
  dVar3 = (double)local_res8.QuadPart * DAT_1468b02f8;
  dVar1 = *param_1;
  if (*(int *)(param_1 + 4) == 1) {
    local_28[1] = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    uVar6 = 4;
    puVar5 = &DAT_144cd55fc;
  }
  else {
    local_28[1] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    uVar6 = 6;
    puVar5 = &DAT_144cd5740;
  }
  lVar4 = local_28[0];
  FGenericPlatformString::Memcpy(local_28[0],puVar5,uVar6);
  pdVar2 = (double *)param_1[3];
  if (pdVar2 != (double *)0x0) {
    *pdVar2 = ((dVar3 + 16777216.0) - dVar1) + *pdVar2;
    *(int *)((longlong)param_1[3] + 8) = *(int *)((longlong)param_1[3] + 8) + 1;
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  if (param_1[1] != 0.0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141698b60 DirectStatsCommand body=732 status=ok
// SIG undefined DirectStatsCommand(void)

ulonglong DirectStatsCommand(short *param_1)

{
  short *psVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *_Src;
  bool bVar12;
  short *local_res8;
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  undefined2 *local_70;
  undefined1 local_68 [8];
  undefined2 *local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  
  local_res8 = param_1;
  cVar3 = FParse::Command(&local_res8,L"stat",1);
  uVar4 = FParse::Command(&local_res8,L"budget",1);
  psVar1 = local_res8;
  if ((cVar3 == '\0') && ((char)uVar4 == '\0')) goto LAB_141698e2f;
  puVar11 = (undefined2 *)0x0;
  local_58 = 0;
  local_60 = (undefined2 *)0x0;
  lVar10 = -1;
  if ((local_res8 != (short *)0x0) && (lVar7 = lVar10, *local_res8 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (local_res8[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_58 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    }
    FGenericPlatformString::Memcpy(local_60,psVar1,(longlong)(int)uVar6 * 2);
  }
  uVar4 = FDefaultValueHelper::RemoveWhitespaces(&local_50,&local_60);
  if (local_60 != (undefined2 *)0x0) {
    uVar4 = FMemory::Free();
  }
  psVar1 = local_res8;
  if (1 < local_48) {
    local_60 = (undefined2 *)0x0;
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    puVar8 = puVar11;
    if ((local_res8 == (short *)0x0) || (*local_res8 == 0)) {
LAB_141698cdb:
      _Src = puVar11;
      iVar5 = 0;
      if (puVar8 != (undefined2 *)0x0) {
        FMemory::Free(puVar8);
        _Src = (undefined2 *)0x0;
      }
    }
    else {
      do {
        lVar10 = lVar10 + 1;
      } while (local_res8[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
      local_58._4_4_ = 0;
      iVar5 = local_58._4_4_;
      local_58._4_4_ = 0;
      local_58._0_4_ = iVar9;
      if (0 < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
        iVar5 = local_58._4_4_;
      }
      local_58._4_4_ = iVar5;
      iVar2 = local_58._4_4_;
      iVar5 = (int)local_58;
      puVar8 = local_60;
      FGenericPlatformString::Memcpy(local_60,psVar1,(longlong)iVar9 * 2);
      if (iVar5 < 2) goto LAB_141698cdb;
      _Src = puVar8;
      local_58._4_4_ = iVar2;
      if (iVar2 < iVar5) {
        local_60 = puVar8;
        local_58._0_4_ = iVar5;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_60,iVar5);
        _Src = local_60;
        iVar5 = (int)local_58;
      }
    }
    local_60 = (undefined2 *)0x0;
    local_58 = CONCAT44(local_58._4_4_,iVar5);
    if (iVar5 == 0) {
      local_58._0_4_ = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,iVar5,0);
      puVar11 = local_60;
      _guard_xfg_dispatch_icall_nop(local_60,_Src,(longlong)iVar5 * 2);
    }
    bVar12 = (int)local_58 != 0;
    local_60 = (undefined2 *)0x0;
    local_58 = 0;
    local_70 = &DAT_143f3eda8;
    if (bVar12) {
      local_70 = puVar11;
    }
    uVar4 = FParse::Token(&local_70,&local_60,0);
    if (cVar3 != '\0') {
      uVar4 = local_58 & 0xffffffff;
      if (((int)local_58 != 0) && (iVar5 = (int)local_58 + -1, 0 < iVar5)) {
        iVar9 = (int)local_58;
        if (local_60[(longlong)iVar5 + -1] == 0x2b) {
          iVar9 = ((int)local_58 - ((int)local_58 + -2)) + -1;
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_60 + ((int)local_58 + -2),local_60 + iVar5,(longlong)iVar9 * 2);
          }
          iVar9 = (int)local_58 + -1;
          local_58 = CONCAT44(local_58._4_4_,iVar9);
        }
        puVar8 = &DAT_143f3eda8;
        if (iVar9 != 0) {
          puVar8 = local_60;
        }
        FName::FName(local_68,puVar8,1);
        uVar4 = FUN_141698e40(local_68,local_78,local_res20);
      }
    }
    if (local_60 != (undefined2 *)0x0) {
      uVar4 = FMemory::Free();
    }
    if (puVar11 != (undefined2 *)0x0) {
      uVar4 = FMemory::Free(puVar11);
    }
    if (_Src != (undefined2 *)0x0) {
      uVar4 = FMemory::Free(_Src);
    }
  }
  if (local_50 != 0) {
    uVar4 = FMemory::Free();
  }
LAB_141698e2f:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 141698e40 FUN_141698e40 body=998 status=ok
// SIG undefined FUN_141698e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141698e40(longlong *param_1,char *param_2,undefined1 *param_3)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  
  pvVar3 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  *param_2 = '\x01';
  *param_3 = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar10 * 8) + 0x38) < DAT_1468e41e8) &&
     (_Init_thread_header(&DAT_1468e41e8), DAT_1468e41e8 == -1)) {
    FName::FName(&DAT_1468e41e0,L"STATGROUP_None",1);
    _Init_thread_footer(&DAT_1468e41e8);
  }
  if (*param_1 == DAT_1468e41e0) {
    bVar1 = false;
    DAT_1464af51c = DAT_1464af51c + 1;
    lVar9 = (longlong)(DAT_1464af510 + -1);
    if (-1 < DAT_1464af510 + -1) {
      lVar12 = lVar9 << 4;
      bVar1 = false;
      do {
        if ((*(int *)(lVar12 + 8 + DAT_1464af508) == 0) ||
           (plVar6 = *(longlong **)(lVar12 + DAT_1464af508), plVar6 == (longlong *)0x0)) {
LAB_141698ef3:
          bVar1 = true;
        }
        else {
          cVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,1);
          if (cVar4 == '\0') goto LAB_141698ef3;
        }
        lVar12 = lVar12 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
    iVar2 = DAT_1464af510;
    DAT_1464af51c = DAT_1464af51c + -1;
    if ((bVar1) && (DAT_1464af51c < 1)) {
      iVar8 = 0;
      if (0 < DAT_1464af510) {
        lVar9 = 0;
        do {
          if (((*(int *)(DAT_1464af508 + 8 + lVar9) == 0) ||
              (*(longlong **)(DAT_1464af508 + lVar9) == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(**(longlong **)(DAT_1464af508 + lVar9) + 0x10))(), cVar4 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af508,iVar8,1,1);
          }
          else {
            iVar8 = iVar8 + 1;
            lVar9 = lVar9 + 0x10;
          }
        } while (iVar8 < DAT_1464af510);
      }
      _DAT_1464af518 = DAT_1464af510 * 2;
      if (DAT_1464af510 * 2 < 3) {
        _DAT_1464af518 = 2;
      }
      if ((_DAT_1464af518 < iVar2) && (DAT_1464af514 != DAT_1464af510)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af508);
      }
    }
    uVar5 = 0;
  }
  else {
    FName::ToString(param_1,&local_48);
    uVar10 = 0;
    local_38[1] = 0xb;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0xb,"STATGROUP_",0xb,0x3f);
    FString::RemoveFromStart(&local_48,local_38,1);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    plVar6 = DAT_1464af4c0;
    if (DAT_1464af4c0 != DAT_1464af4c0 + (longlong)DAT_1464af4c8 * 2) {
LAB_141699040:
      if (((int)plVar6[1] == 0) || (*plVar6 == 0)) goto LAB_14169904a;
      puVar11 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar11 = local_48;
      }
      bVar1 = false;
      DAT_1464af4d4 = DAT_1464af4d4 + 1;
      lVar9 = (longlong)(DAT_1464af4c8 + -1);
      if (-1 < DAT_1464af4c8 + -1) {
        lVar12 = lVar9 << 4;
        bVar1 = false;
        do {
          if (((*(int *)((longlong)DAT_1464af4c0 + lVar12 + 8) == 0) ||
              (plVar6 = *(longlong **)((longlong)DAT_1464af4c0 + lVar12), plVar6 == (longlong *)0x0)
              ) || (cVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,puVar11,param_2,param_3),
                   cVar4 == '\0')) {
            bVar1 = true;
          }
          lVar12 = lVar12 + -0x10;
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
      iVar2 = DAT_1464af4c8;
      DAT_1464af4d4 = DAT_1464af4d4 + -1;
      if ((bVar1) && (DAT_1464af4d4 < 1)) {
        uVar13 = uVar10;
        if (0 < DAT_1464af4c8) {
          do {
            if (((*(int *)(uVar13 + 8 + (longlong)DAT_1464af4c0) == 0) ||
                (*(longlong **)(uVar13 + (longlong)DAT_1464af4c0) == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(**(longlong **)(uVar13 + (longlong)DAT_1464af4c0) + 0x10))(),
               cVar4 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af4c0,uVar10,1,1);
            }
            else {
              uVar10 = (ulonglong)((int)uVar10 + 1);
              uVar13 = uVar13 + 0x10;
            }
          } while ((int)uVar10 < DAT_1464af4c8);
        }
        _DAT_1464af4d0 = DAT_1464af4c8 * 2;
        if (_DAT_1464af4d0 < 3) {
          _DAT_1464af4d0 = 2;
        }
        if ((_DAT_1464af4d0 < iVar2) && (DAT_1464af4cc != DAT_1464af4c8)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af4c0);
        }
      }
      puVar7 = &DAT_1464af4d8;
      if (*param_2 != '\0') {
        puVar7 = &DAT_1464af4f0;
      }
      puVar11 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar11 = local_48;
      }
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(puVar7,puVar11);
    }
LAB_1416991b8:
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    uVar5 = 1;
  }
  return uVar5;
LAB_14169904a:
  plVar6 = plVar6 + 2;
  if (plVar6 == DAT_1464af4c0 + (longlong)DAT_1464af4c8 * 2) goto LAB_1416991b8;
  goto LAB_141699040;
}



// FUNCTION 141699230 FUN_141699230 body=697 status=ok
// SIG undefined FUN_141699230(void)

int * FUN_141699230(longlong *param_1,int *param_2,ushort *param_3,undefined1 *param_4)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  ushort *_Src;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0xc);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0xc) = 0xffffffff;
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
  lVar1 = (longlong)iVar11 * 0xc;
  _Src = (ushort *)(*param_1 + lVar1);
  uVar2 = *param_3;
  *_Src = uVar2;
  _Src[2] = 0xffff;
  _Src[3] = 0xffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar2) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(ushort *)(*param_1 + (longlong)iVar9 * 0xc) == uVar2) break;
          iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0xc);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0xc),_Src,2);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0xc) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar6);
      *puVar14 = *puVar14 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1416994c4;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 4) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar13) * 4) = iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_1416994c4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 1416994f0 GetRawNonCasePreservingHash<char> body=92 status=ok
// SIG undefined GetRawNonCasePreservingHash<char>(void)

uint GetRawNonCasePreservingHash<char>(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    uVar2 = toupper((int)cVar1);
    uVar3 = *(uint *)(&DAT_1464acab0 + (ulonglong)((uVar2 & 0xff ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
    cVar1 = *param_1;
  }
  return uVar3 & 0xffff;
}



// FUNCTION 141699550 InitInternal<wchar_t> body=268 status=ok
// SIG undefined InitInternal<wchar_t>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FName::InitInternal<wchar_t>
               (undefined8 *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined2 param_6)

{
  char cVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined4 local_d8 [4];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (DAT_1469e45f8 == '\0') {
    FUN_1416a8e20();
  }
  uVar3 = *param_2;
  if (uVar3 != 0) {
    local_d8[0] = param_5;
    puVar2 = param_2;
    do {
      if (0x7f < uVar3) {
        local_e8 = local_d8;
        cVar1 = FUN_141699ab0(param_2,param_4,1,param_6);
        goto LAB_141699624;
      }
      uVar3 = puVar2[1];
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,param_2);
    local_e8 = local_d8;
    cVar1 = FUN_141699660(local_40,param_4,1,param_6);
    if (local_48 != 0) {
      FMemory::Free();
    }
LAB_141699624:
    if (cVar1 != '\0') {
      *(undefined4 *)param_1 = local_d8[0];
      *(undefined4 *)((longlong)param_1 + 4) = param_3;
      return;
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 141699660 FUN_141699660 body=1095 status=ok
// SIG undefined FUN_141699660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141699660(char *param_1,int param_2,char param_3,ushort param_4,int *param_5)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  byte *pbVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar9;
  int *piVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  char *pcVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar24;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  if (*param_5 < 0) {
    pbVar4 = *(byte **)(&DAT_1468e4200 + (ulonglong)param_4 * 8);
    do {
      do {
        pbVar5 = pbVar4;
        if (pbVar5 == (byte *)0x0) {
          if (param_2 == 0) {
            return 0;
          }
          goto LAB_141699744;
        }
        pbVar4 = *(byte **)(pbVar5 + 8);
      } while ((*pbVar5 & 1) != 0);
      pbVar12 = pbVar5 + 0x10;
      if (param_3 == '\0') {
        lVar14 = (longlong)param_1 - (longlong)pbVar12;
        do {
          bVar2 = *pbVar12;
          if (bVar2 != pbVar12[lVar14]) {
            uVar8 = -(uint)(bVar2 < pbVar12[lVar14]) | 1;
            goto LAB_141699700;
          }
          pbVar12 = pbVar12 + 1;
        } while (bVar2 != 0);
        uVar8 = 0;
      }
      else {
        uVar8 = _stricmp((char *)pbVar12,param_1);
      }
LAB_141699700:
    } while (uVar8 != 0);
    *param_5 = *(int *)pbVar5 >> 1;
    if (param_2 == 2) {
      pcVar19 = param_1;
      do {
        cVar3 = *pcVar19;
        pcVar19[(longlong)(pbVar5 + (0x10 - (longlong)param_1))] = cVar3;
        pcVar19 = pcVar19 + 1;
      } while (cVar3 != '\0');
    }
  }
  else {
LAB_141699744:
    lpCriticalSection = (LPCRITICAL_SECTION)FName::GetCriticalSection();
    BVar6 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar6 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    uVar15 = (ulonglong)param_4;
    plVar17 = (longlong *)(&DAT_1468e4200 + uVar15 * 8);
    pbVar4 = (byte *)*plVar17;
    pbVar5 = pbVar4;
    if (*param_5 < 0) {
      for (; uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20),
          pbVar5 != (byte *)0x0; pbVar5 = *(byte **)(pbVar5 + 8)) {
        if ((*pbVar5 & 1) == 0) {
          pbVar12 = pbVar5 + 0x10;
          if (param_3 == '\0') {
            lVar14 = (longlong)param_1 - (longlong)pbVar12;
            do {
              bVar2 = *pbVar12;
              if (bVar2 != pbVar12[lVar14]) {
                uVar8 = -(uint)(bVar2 < pbVar12[lVar14]) | 1;
                goto LAB_1416997c6;
              }
              pbVar12 = pbVar12 + 1;
            } while (bVar2 != 0);
            uVar8 = 0;
          }
          else {
            uVar8 = _stricmp((char *)pbVar12,param_1);
          }
LAB_1416997c6:
          if (uVar8 == 0) {
            *param_5 = *(int *)pbVar5 >> 1;
            goto LAB_141699a7b;
          }
        }
      }
    }
    lVar14 = *(longlong *)(&DAT_146964200 + uVar15 * 8);
    lVar9 = FName::GetNames();
    iVar7 = *param_5;
    if (iVar7 < 0) {
      iVar7 = TStaticIndirectArrayThreadSafeRead<FNameEntry,2097152,16384>::AddZeroed(lVar9,1);
      *param_5 = iVar7;
    }
    lVar18 = -1;
    do {
      lVar18 = lVar18 + 1;
    } while (param_1[lVar18] != '\0');
    uVar22 = (longlong)((int)lVar18 + 0x18) & 0xfffffffffffffff8;
    piVar10 = DAT_1469e4228;
    if ((longlong)DAT_1469e4230 - (longlong)DAT_1469e4228 < (longlong)uVar22) {
      _DAT_1469e4238 = _DAT_1469e4238 + 1;
      piVar10 = (int *)FMemory::Malloc(0x40000,0);
      DAT_1469e4230 = piVar10 + 0x10000;
    }
    _DAT_1469e4200 = _DAT_1469e4200 + (int)lVar18 + 0x11;
    DAT_1469e4228 = (int *)(uVar22 + (longlong)piVar10);
    LOCK();
    *piVar10 = iVar7 * 2;
    UNLOCK();
    piVar10[2] = 0;
    piVar10[3] = 0;
    pcVar19 = param_1;
    do {
      cVar3 = *pcVar19;
      pcVar19[(longlong)piVar10 + (0x10 - (longlong)param_1)] = cVar3;
      pcVar19 = pcVar19 + 1;
    } while (cVar3 != '\0');
    _DAT_1469e4204 = _DAT_1469e4204 + 1;
    uVar13 = *param_5 >> 0x1f & 0x3fff;
    uVar8 = *param_5 + uVar13;
    plVar1 = (longlong *)
             (*(longlong *)(lVar9 + (longlong)((int)uVar8 >> 0xe) * 8) +
             (longlong)(int)((uVar8 & 0x3fff) - uVar13) * 8);
    LOCK();
    bVar23 = *plVar1 == 0;
    if (bVar23) {
      *plVar1 = (longlong)piVar10;
    }
    UNLOCK();
    if (!bVar23) {
      uVar13 = *param_5 >> 0x1f & 0x3fff;
      uVar8 = *param_5 + uVar13;
      puVar11 = (undefined8 *)
                FNameEntry::GetPlainNameString
                          (*(undefined8 *)
                            (*(longlong *)(lVar9 + (longlong)((int)uVar8 >> 0xe) * 8) +
                            (longlong)(int)((uVar8 & 0x3fff) - uVar13) * 8),local_58);
      puVar20 = &DAT_143f3eda8;
      if (*(int *)(puVar11 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar11;
      }
      iVar7 = *piVar10;
      puVar11 = (undefined8 *)FNameEntry::GetPlainNameString(piVar10,local_68);
      if (*(int *)(puVar11 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar11;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x381,
                 L"Hardcoded name \'%s\' at index %i was duplicated (or unexpected concurrency). Existing entry is \'%s\'."
                 ,puVar21,CONCAT44(uVar24,iVar7 >> 1),puVar16);
      uVar24 = (undefined4)((ulonglong)puVar16 >> 0x20);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      uVar13 = *param_5 >> 0x1f & 0x3fff;
      uVar8 = *param_5 + uVar13;
      puVar11 = (undefined8 *)
                FNameEntry::GetPlainNameString
                          (*(undefined8 *)
                            (*(longlong *)(lVar9 + (longlong)((int)uVar8 >> 0xe) * 8) +
                            (longlong)(int)((uVar8 & 0x3fff) - uVar13) * 8),local_38);
      if (*(int *)(puVar11 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar11;
      }
      iVar7 = *piVar10;
      puVar11 = (undefined8 *)FNameEntry::GetPlainNameString(piVar10,local_48);
      if (*(int *)(puVar11 + 1) != 0) {
        puVar20 = (undefined2 *)*puVar11;
      }
      FDebug::AssertFailed
                (&DAT_144cd57f7,"Unknown",0x381,
                 L"Hardcoded name \'%s\' at index %i was duplicated (or unexpected concurrency). Existing entry is \'%s\'."
                 ,puVar20,CONCAT44(uVar24,iVar7 >> 1),puVar16);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    if (pbVar4 != (byte *)0x0) {
      plVar17 = (longlong *)(lVar14 + 8);
    }
    LOCK();
    if (*plVar17 == 0) {
      *plVar17 = (longlong)piVar10;
    }
    UNLOCK();
    *(int **)(&DAT_146964200 + uVar15 * 8) = piVar10;
LAB_141699a7b:
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}



// FUNCTION 141699ab0 FUN_141699ab0 body=1096 status=ok
// SIG undefined FUN_141699ab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141699ab0(short *param_1,int param_2,char param_3,ushort param_4,int *param_5)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  BOOL BVar9;
  int iVar10;
  uint uVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  short *psVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined2 *puVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar27;
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [3];
  
  if (*param_5 < 0) {
    pbVar5 = *(byte **)(&DAT_1468e4200 + (ulonglong)param_4 * 8);
    do {
      do {
        pbVar7 = pbVar5;
        if (pbVar7 == (byte *)0x0) {
          if (param_2 == 0) {
            return 0;
          }
          goto LAB_141699b96;
        }
        pbVar5 = *(byte **)(pbVar7 + 8);
      } while ((*pbVar7 & 1) == 0);
      puVar15 = (ushort *)(pbVar7 + 0x10);
      if (param_3 == '\0') {
        lVar18 = (longlong)param_1 - (longlong)puVar15;
        do {
          uVar2 = *puVar15;
          uVar3 = *(ushort *)((longlong)puVar15 + lVar18);
          if (uVar2 != uVar3) {
            uVar11 = -(uint)(uVar2 < uVar3) | 1;
            goto LAB_141699b52;
          }
          puVar15 = puVar15 + 1;
        } while (uVar2 != 0);
        uVar11 = 0;
      }
      else {
        uVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
      }
LAB_141699b52:
    } while (uVar11 != 0);
    *param_5 = *(int *)pbVar7 >> 1;
    if (param_2 == 2) {
      psVar19 = param_1;
      do {
        sVar4 = *psVar19;
        *(short *)((longlong)psVar19 + (longlong)(pbVar7 + (0x10 - (longlong)param_1))) = sVar4;
        psVar19 = psVar19 + 1;
      } while (sVar4 != 0);
    }
  }
  else {
LAB_141699b96:
    lpCriticalSection = (LPCRITICAL_SECTION)FName::GetCriticalSection();
    BVar9 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar9 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    uVar27 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    uVar23 = (ulonglong)param_4;
    plVar22 = (longlong *)(&DAT_1468e4200 + uVar23 * 8);
    pbVar5 = (byte *)*plVar22;
    pbVar7 = pbVar5;
    if (*param_5 < 0) {
      for (; uVar27 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20),
          pbVar7 != (byte *)0x0; pbVar7 = *(byte **)(pbVar7 + 8)) {
        if ((*pbVar7 & 1) != 0) {
          puVar15 = (ushort *)(pbVar7 + 0x10);
          if (param_3 == '\0') {
            lVar18 = (longlong)param_1 - (longlong)puVar15;
            do {
              uVar2 = *puVar15;
              uVar3 = *(ushort *)((longlong)puVar15 + lVar18);
              if (uVar2 != uVar3) {
                uVar11 = -(uint)(uVar2 < uVar3) | 1;
                goto LAB_141699c22;
              }
              puVar15 = puVar15 + 1;
            } while (uVar2 != 0);
            uVar11 = 0;
          }
          else {
            uVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
          }
LAB_141699c22:
          if (uVar11 == 0) {
            *param_5 = *(int *)pbVar7 >> 1;
            goto LAB_141699ecc;
          }
        }
      }
    }
    lVar18 = *(longlong *)(&DAT_146964200 + uVar23 * 8);
    lVar12 = FName::GetNames();
    iVar10 = *param_5;
    if (iVar10 < 0) {
      iVar10 = TStaticIndirectArrayThreadSafeRead<FNameEntry,2097152,16384>::AddZeroed(lVar12,1);
      *param_5 = iVar10;
    }
    lVar16 = -1;
    do {
      lVar8 = lVar16 + 1;
      lVar16 = lVar16 + 1;
    } while (param_1[lVar8] != 0);
    iVar6 = (int)lVar16 * 2;
    uVar25 = (longlong)(iVar6 + 0x19) & 0xfffffffffffffff8;
    puVar13 = DAT_1469e4228;
    if ((longlong)DAT_1469e4230 - (longlong)DAT_1469e4228 < (longlong)uVar25) {
      _DAT_1469e4238 = _DAT_1469e4238 + 1;
      puVar13 = (uint *)FMemory::Malloc(0x40000,0);
      DAT_1469e4230 = puVar13 + 0x10000;
    }
    _DAT_1469e4200 = _DAT_1469e4200 + iVar6 + 0x12;
    DAT_1469e4228 = (uint *)(uVar25 + (longlong)puVar13);
    LOCK();
    *puVar13 = iVar10 * 2 | 1;
    UNLOCK();
    puVar13[2] = 0;
    puVar13[3] = 0;
    psVar19 = param_1;
    do {
      sVar4 = *psVar19;
      *(short *)((longlong)psVar19 + (longlong)puVar13 + (0x10 - (longlong)param_1)) = sVar4;
      psVar19 = psVar19 + 1;
    } while (sVar4 != 0);
    _DAT_1469e4208 = _DAT_1469e4208 + 1;
    uVar17 = *param_5 >> 0x1f & 0x3fff;
    uVar11 = *param_5 + uVar17;
    plVar1 = (longlong *)
             (*(longlong *)(lVar12 + (longlong)((int)uVar11 >> 0xe) * 8) +
             (longlong)(int)((uVar11 & 0x3fff) - uVar17) * 8);
    LOCK();
    bVar26 = *plVar1 == 0;
    if (bVar26) {
      *plVar1 = (longlong)puVar13;
    }
    UNLOCK();
    if (!bVar26) {
      uVar17 = *param_5 >> 0x1f & 0x3fff;
      uVar11 = *param_5 + uVar17;
      puVar14 = (undefined8 *)
                FNameEntry::GetPlainNameString
                          (*(undefined8 *)
                            (*(longlong *)(lVar12 + (longlong)((int)uVar11 >> 0xe) * 8) +
                            (longlong)(int)((uVar11 & 0x3fff) - uVar17) * 8),local_60);
      puVar20 = &DAT_143f3eda8;
      if (*(int *)(puVar14 + 1) == 0) {
        puVar24 = &DAT_143f3eda8;
      }
      else {
        puVar24 = (undefined2 *)*puVar14;
      }
      uVar11 = *puVar13;
      puVar14 = (undefined8 *)FNameEntry::GetPlainNameString(puVar13,local_70);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar14;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x381,
                 L"Hardcoded name \'%s\' at index %i was duplicated (or unexpected concurrency). Existing entry is \'%s\'."
                 ,puVar21,CONCAT44(uVar27,(int)uVar11 >> 1),puVar24);
      uVar27 = (undefined4)((ulonglong)puVar24 >> 0x20);
      if (local_70[0] != 0) {
        FMemory::Free();
      }
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      uVar17 = *param_5 >> 0x1f & 0x3fff;
      uVar11 = *param_5 + uVar17;
      puVar14 = (undefined8 *)
                FNameEntry::GetPlainNameString
                          (*(undefined8 *)
                            (*(longlong *)(lVar12 + (longlong)((int)uVar11 >> 0xe) * 8) +
                            (longlong)(int)((uVar11 & 0x3fff) - uVar17) * 8),local_40);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar24 = &DAT_143f3eda8;
      }
      else {
        puVar24 = (undefined2 *)*puVar14;
      }
      uVar11 = *puVar13;
      puVar14 = (undefined8 *)FNameEntry::GetPlainNameString(puVar13,local_50);
      if (*(int *)(puVar14 + 1) != 0) {
        puVar20 = (undefined2 *)*puVar14;
      }
      FDebug::AssertFailed
                (&DAT_144cd581e,"Unknown",0x381,
                 L"Hardcoded name \'%s\' at index %i was duplicated (or unexpected concurrency). Existing entry is \'%s\'."
                 ,puVar20,CONCAT44(uVar27,(int)uVar11 >> 1),puVar24);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
      if (local_40[0] != 0) {
        FMemory::Free();
      }
    }
    if (pbVar5 != (byte *)0x0) {
      plVar22 = (longlong *)(lVar18 + 8);
    }
    LOCK();
    if (*plVar22 == 0) {
      *plVar22 = (longlong)puVar13;
    }
    UNLOCK();
    *(uint **)(&DAT_146964200 + uVar23 * 8) = puVar13;
LAB_141699ecc:
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}



// FUNCTION 141699f00 InitInternal_HashSplit<char> body=441 status=ok
// SIG undefined InitInternal_HashSplit<char>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FName::InitInternal_HashSplit<char>
               (undefined8 *param_1,char *param_2,int param_3,undefined4 param_4,char param_5,
               undefined4 param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined1 auStack_488 [32];
  undefined4 *local_468;
  undefined4 local_458 [3];
  char acStack_449 [1025];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  if ((param_3 == 0) && (param_5 == '\x01')) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != '\0');
    if (0 < (int)lVar3) {
      pcVar5 = param_2 + (longlong)(int)lVar3 + -1;
      cVar1 = *pcVar5;
      pcVar7 = pcVar5;
      if ((byte)(cVar1 - 0x30U) < 10) {
        do {
          if (('9' < cVar1) || (pcVar7 <= param_2)) break;
          cVar1 = pcVar7[-1];
          pcVar7 = pcVar7 + -1;
        } while ('/' < cVar1);
        if ((*pcVar7 == '_') &&
           (((pcVar7[1] != '0' || ((longlong)pcVar5 - (longlong)pcVar7 == 1)) &&
            (uVar4 = _strtoi64(pcVar7 + 1,(char **)0x0,10), uVar4 < 0x80000000)))) {
          iVar6 = ((int)pcVar7 - (int)param_2) + 1;
          iVar2 = 0x400;
          if (iVar6 < 0x401) {
            iVar2 = iVar6;
          }
          strncpy(acStack_449 + 1,param_2,(longlong)iVar2);
          acStack_449[iVar2] = '\0';
          param_2 = acStack_449 + 1;
          param_3 = (int)uVar4 + 1;
        }
      }
    }
  }
  uVar4 = 0;
  cVar1 = *param_2;
  pcVar7 = param_2;
  while (cVar1 != '\0') {
    pcVar7 = pcVar7 + 1;
    iVar2 = toupper((int)cVar1);
    uVar4 = (ulonglong)
            (*(uint *)(&DAT_1464acab0 + (ulonglong)(byte)((byte)iVar2 ^ (byte)uVar4) * 4) ^
            (uint)(uVar4 >> 8));
    cVar1 = *pcVar7;
  }
  if (DAT_1469e45f8 == '\0') {
    FUN_1416a8e20();
  }
  if (*param_2 != '\0') {
    local_458[0] = param_6;
    local_468 = local_458;
    cVar1 = FUN_141699660(param_2,param_4,1,uVar4 & 0xffff);
    if (cVar1 != '\0') {
      *(undefined4 *)param_1 = local_458[0];
      *(int *)((longlong)param_1 + 4) = param_3;
      return;
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 14169a0c0 SplitNameWithCheckImpl<wchar_t> body=254 status=ok
// SIG undefined SplitNameWithCheckImpl<wchar_t>(void)

ulonglong FName::SplitNameWithCheckImpl<wchar_t>
                    (wchar_t *param_1,wchar_t *param_2,int param_3,undefined4 *param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  ulonglong uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (param_1[uVar3] != L'\0');
  if (0 < (int)uVar3) {
    pwVar1 = param_1 + (longlong)(int)uVar3 + -1;
    uVar3 = (ulonglong)(ushort)*pwVar1;
    pwVar5 = pwVar1;
    if ((ushort)(*pwVar1 + L'￐') < 10) {
      do {
        wVar2 = (wchar_t)uVar3;
        if ((0x39 < (ushort)wVar2) || (pwVar5 <= param_1)) break;
        wVar2 = pwVar5[-1];
        uVar3 = (ulonglong)(ushort)wVar2;
        pwVar5 = pwVar5 + -1;
      } while (0x2f < (ushort)wVar2);
      if ((wVar2 == L'_') &&
         (((pwVar5[1] != L'0' || (((longlong)pwVar1 - (longlong)pwVar5 & 0xfffffffffffffffeU) == 2))
          && (uVar3 = _wtoi64(pwVar5 + 1), uVar3 < 0x80000000)))) {
        *param_4 = (int)uVar3;
        iVar4 = (int)((longlong)pwVar5 - (longlong)param_1 >> 1) + 1;
        if (iVar4 <= param_3) {
          param_3 = iVar4;
        }
        wcsncpy(param_2,param_1,(longlong)param_3 - 1);
        param_2[(longlong)param_3 + -1] = L'\0';
        return 1;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 14169a1c0 FCPUIDQueriedData body=964 status=ok
// SIG undefined FCPUIDQueriedData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014169a551) */
/* WARNING: Removing unreachable block (ram,0x00014169a540) */
/* WARNING: Removing unreachable block (ram,0x00014169a3c8) */
/* WARNING: Removing unreachable block (ram,0x00014169a23d) */

char * FCPUIDQueriedData::FCPUIDQueriedData(char *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  short *psVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_1f8 [32];
  undefined2 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  uint local_1b8;
  short local_1a8 [128];
  short *local_a8;
  short *local_a0;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  ulonglong local_70 [9];
  
  local_70[7] = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  cVar7 = CheckForCPUIDInstruction();
  uVar13 = 0;
  *param_1 = cVar7;
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  puVar1 = (ulonglong *)(param_1 + 8);
  *puVar1 = 0;
  puVar2 = (ulonglong *)(param_1 + 0x18);
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  *puVar2 = 0;
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x30] = '\x01';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  if (*param_1 != '\0') {
    lVar11 = cpuid_basic_info(0);
    lVar15 = -1;
    local_84 = *(undefined4 *)(lVar11 + 8);
    local_80 = *(undefined4 *)(lVar11 + 0xc);
    local_a8 = (short *)0x0;
    local_88 = *(undefined4 *)(lVar11 + 4);
    local_7c = 0;
    lVar11 = -1;
    do {
      lVar9 = lVar11;
      lVar11 = lVar9 + 1;
    } while (*(char *)((longlong)&local_88 + lVar9 + 1) != '\0');
    uVar10 = (int)lVar9 + 2;
    local_98 = (undefined4)(lVar9 + 1);
    if ((0x80 < uVar10) && (uVar10 != 0)) {
      local_a8 = (short *)FMemory::Realloc(0,(longlong)(int)uVar10 * 2,0);
    }
    local_a0 = local_1a8;
    if (local_a8 != (short *)0x0) {
      local_a0 = local_a8;
    }
    local_1d8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_a0,uVar10,&local_88,uVar10);
    psVar6 = local_a0;
    local_1c8 = 0;
    local_1b8 = 0;
    uStack_1c0 = (ulonglong)(uint)uStack_1c0;
    uVar12 = uVar13;
    if ((local_a0 != (short *)0x0) && (*local_a0 != 0)) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (local_a0[lVar11] != 0);
      uVar10 = (int)lVar11 + 1;
      uStack_1c0 = (ulonglong)uVar10;
      local_1b8 = uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
        local_1b8 = (uint)uStack_1c0;
      }
      uVar12 = local_1c8;
      FGenericPlatformString::Memcpy(local_1c8,psVar6,(longlong)(int)uVar10 * 2);
    }
    if (local_a8 != (short *)0x0) {
      FMemory::Free();
    }
    if (puVar1 == &local_1c8) {
      if (uVar12 != 0) {
        FMemory::Free(uVar12);
      }
    }
    else {
      if (*puVar1 != 0) {
        FMemory::Free();
      }
      *puVar1 = uVar12;
      *(uint *)(param_1 + 0x10) = local_1b8;
      *(uint *)(param_1 + 0x14) = uStack_1c0._4_4_;
    }
    local_78 = 0;
    local_70[0] = 0;
    local_70[1] = 0;
    local_70[2] = 0;
    local_70[3] = 0;
    local_70[4] = 0;
    local_70[5] = 0;
    local_70[6] = 0;
    puVar3 = (uint *)cpuid(0x80000000);
    local_1c8 = CONCAT44(puVar3[1],0xffffffff);
    uStack_1c0 = CONCAT44(puVar3[2],puVar3[3]);
    uVar12 = uVar13;
    if (0x80000003 < *puVar3) {
      do {
        iVar8 = (int)uVar12 + -0x7ffffffe;
        if (iVar8 == 0) {
          puVar1 = (ulonglong *)cpuid_basic_info(0);
        }
        else if (iVar8 == 1) {
          puVar1 = (ulonglong *)cpuid_Version_info(1);
        }
        else if (iVar8 == 2) {
          puVar1 = (ulonglong *)cpuid_cache_tlb_info(2);
        }
        else if (iVar8 == 3) {
          puVar1 = (ulonglong *)cpuid_serial_info(3);
        }
        else if (iVar8 == 4) {
          puVar1 = (ulonglong *)cpuid_Deterministic_Cache_Parameters_info(4);
        }
        else if (iVar8 == 5) {
          puVar1 = (ulonglong *)cpuid_MONITOR_MWAIT_Features_info(5);
        }
        else if (iVar8 == 6) {
          puVar1 = (ulonglong *)cpuid_Thermal_Power_Management_info(6);
        }
        else if (iVar8 == 7) {
          puVar1 = (ulonglong *)cpuid_Extended_Feature_Enumeration_info(7);
        }
        else if (iVar8 == 9) {
          puVar1 = (ulonglong *)cpuid_Direct_Cache_Access_info(9);
        }
        else if (iVar8 == 10) {
          puVar1 = (ulonglong *)cpuid_Architectural_Performance_Monitoring_info(10);
        }
        else if (iVar8 == 0xb) {
          puVar1 = (ulonglong *)cpuid_Extended_Topology_info(0xb);
        }
        else if (iVar8 == 0xd) {
          puVar1 = (ulonglong *)cpuid_Processor_Extended_States_info(0xd);
        }
        else if (iVar8 == 0xf) {
          puVar1 = (ulonglong *)cpuid_Quality_of_Service_info(0xf);
        }
        else if (iVar8 == -0x7ffffffe) {
          puVar1 = (ulonglong *)cpuid_brand_part1_info(0x80000002);
        }
        else if (iVar8 == -0x7ffffffd) {
          puVar1 = (ulonglong *)cpuid_brand_part2_info(0x80000003);
        }
        else if (iVar8 == -0x7ffffffc) {
          puVar1 = (ulonglong *)cpuid_brand_part3_info(0x80000004);
        }
        else {
          puVar1 = (ulonglong *)cpuid(iVar8);
        }
        local_1c8 = *puVar1;
        uVar10 = (int)uVar12 + 1;
        uStack_1c0 = CONCAT44((int)puVar1[1],*(undefined4 *)((longlong)puVar1 + 0xc));
        local_70[uVar12 * 2 + -1] = local_1c8;
        local_70[uVar12 * 2] = uStack_1c0;
        uVar12 = (ulonglong)uVar10;
      } while (uVar10 < 3);
    }
    local_a8 = (short *)0x0;
    lVar11 = -1;
    do {
      lVar9 = lVar11;
      lVar11 = lVar9 + 1;
    } while (*(char *)((longlong)local_70 + lVar9 + -7) != '\0');
    uVar10 = (int)lVar9 + 2;
    local_98 = (undefined4)(lVar9 + 1);
    if ((0x80 < uVar10) && (uVar10 != 0)) {
      local_a8 = (short *)FMemory::Realloc(0,(longlong)(int)uVar10 * 2,0);
    }
    local_a0 = local_1a8;
    if (local_a8 != (short *)0x0) {
      local_a0 = local_a8;
    }
    local_1d8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_a0,uVar10,&local_78,uVar10);
    psVar6 = local_a0;
    uVar16 = 0;
    local_1c8 = 0;
    uStack_1c0 = uStack_1c0 & 0xffffffff;
    uVar10 = 0;
    if ((local_a0 != (short *)0x0) && (uVar10 = uVar16, *local_a0 != 0)) {
      do {
        lVar15 = lVar15 + 1;
      } while (local_a0[lVar15] != 0);
      uVar14 = (int)lVar15 + 1;
      uStack_1c0 = (ulonglong)uVar14;
      uVar10 = uVar14;
      uVar16 = 0;
      if (0 < (int)uVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
        uVar10 = (uint)uStack_1c0;
        uVar16 = uStack_1c0._4_4_;
      }
      uVar13 = local_1c8;
      FGenericPlatformString::Memcpy(local_1c8,psVar6,(longlong)(int)uVar14 * 2);
    }
    if (local_a8 != (short *)0x0) {
      FMemory::Free();
    }
    if (puVar2 == &local_1c8) {
      if (uVar13 != 0) {
        FMemory::Free(uVar13);
      }
    }
    else {
      if (*puVar2 != 0) {
        FMemory::Free();
      }
      *puVar2 = uVar13;
      *(uint *)(param_1 + 0x20) = uVar10;
      *(uint *)(param_1 + 0x24) = uVar16;
    }
    puVar4 = (undefined4 *)cpuid_Version_info(1);
    uVar5 = *puVar4;
    *(undefined4 *)(param_1 + 0x2c) = puVar4[3];
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    lVar11 = cpuid(0x80000006);
    *(uint *)(param_1 + 0x30) = *(uint *)(lVar11 + 0xc) & 0xff;
  }
  return param_1;
}



// FUNCTION 14169a590 FCrashReportingThread body=135 status=ok
// SIG undefined FCrashReportingThread(void)

LPVOID FCrashReportingThread::FCrashReportingThread(LPVOID param_1)

{
  HANDLE pvVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_14169c880,param_1,
                        0,param_1);
  *(HANDLE *)((longlong)param_1 + 8) = pvVar1;
  if (pvVar1 != (HANDLE)0x0) {
    SetThreadPriority(pvVar1,-1);
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *(HANDLE *)((longlong)param_1 + 0x18) = pvVar1;
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *(HANDLE *)((longlong)param_1 + 0x30) = pvVar1;
  }
  return param_1;
}



// FUNCTION 14169a620 FFileHandleWindows body=96 status=ok
// SIG undefined FFileHandleWindows(void)

undefined8 * FFileHandleWindows::FFileHandleWindows(undefined8 *param_1,HANDLE param_2)

{
  LARGE_INTEGER local_res8 [4];
  
  param_1[1] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144cdb8c8;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((longlong)param_2 - 1U < 0xfffffffffffffffe) {
    GetFileSizeEx(param_2,local_res8);
    *(LARGE_INTEGER *)(param_1 + 7) = local_res8[0];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 14169a680 FGPUDriverInfo body=171 status=ok
// SIG undefined FGPUDriverInfo(void)

undefined4 * FGPUDriverInfo::FGPUDriverInfo(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = 0;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_2 + 0x14) = 0;
  return param_1;
}



// FUNCTION 14169a730 FName body=432 status=ok
// SIG undefined FName(void)

undefined8 * FName::FName(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_ffffffffffffffa8;
  undefined4 local_38 [4];
  
  pbVar1 = param_2 + 4;
  if (param_2[0x808] == 0) {
    if ((*param_2 & 1) != 0) {
      Init(param_1,pbVar1,0,1,in_stack_ffffffffffffffa8 & 0xffffffffffffff00,0xffffffff);
      return param_1;
    }
    uVar7 = 0;
    bVar3 = *pbVar1;
    pbVar2 = pbVar1;
    while (bVar3 != 0) {
      pbVar2 = pbVar2 + 1;
      iVar6 = toupper((int)(char)bVar3);
      uVar7 = (ulonglong)
              (*(uint *)(&DAT_1464acab0 + (((byte)iVar6 ^ uVar7) & 0xff) * 4) ^ (uint)(uVar7 >> 8));
      bVar3 = *pbVar2;
    }
    if (DAT_1469e45f8 == '\0') {
      FUN_1416a8e20();
    }
    if (*pbVar1 == 0) {
      *param_1 = 0;
    }
    else {
      local_38[0] = 0xffffffff;
      cVar5 = FUN_141699660(pbVar1,1,1,uVar7 & 0xffff,local_38);
      *(undefined4 *)((longlong)param_1 + 4) = 0;
      uVar8 = 0;
      if (cVar5 != '\0') {
        uVar8 = local_38[0];
      }
      *(undefined4 *)param_1 = uVar8;
    }
    return param_1;
  }
  uVar4 = *(undefined2 *)(param_2 + 0x804);
  if ((*param_2 & 1) != 0) {
    InitInternal<wchar_t>(param_1,pbVar1,0,1,0xffffffff,uVar4,*(undefined2 *)(param_2 + 0x806));
    return param_1;
  }
  if (DAT_1469e45f8 == '\0') {
    FUN_1416a8e20();
  }
  if (*pbVar1 == 0) {
    *param_1 = 0;
    return param_1;
  }
  local_38[0] = 0xffffffff;
  cVar5 = FUN_141699660(pbVar1,1,1,uVar4,local_38);
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  uVar8 = 0;
  if (cVar5 != '\0') {
    uVar8 = local_38[0];
  }
  *(undefined4 *)param_1 = uVar8;
  return param_1;
}



// FUNCTION 14169a8e0 FName body=66 status=ok
// SIG undefined FName(void)

undefined8 * FName::FName(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    InitInternal_HashSplit<char>(param_1,param_2,0,param_3,1,0xffffffff);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14169a930 FName body=36 status=ok
// SIG undefined FName(void)

undefined8 FName::FName(undefined8 param_1)

{
  Init();
  return param_1;
}



// FUNCTION 14169a960 FName body=66 status=ok
// SIG undefined FName(void)

undefined8 * FName::FName(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    Init(param_1,param_2,0,param_3,1,0xffffffff);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14169a9b0 FUN_14169a9b0 body=296 status=ok
// SIG undefined FUN_14169a9b0(void)

undefined4 * FUN_14169a9b0(undefined4 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar1 = param_2 + 0x10;
  if ((*param_2 & 1) != 0) {
    *param_1 = 1;
    pbVar5 = pbVar1;
    do {
      sVar3 = *(short *)pbVar5;
      *(short *)(pbVar5 + (longlong)param_1 + (4 - (longlong)pbVar1)) = sVar3;
      pbVar5 = pbVar5 + 2;
    } while (sVar3 != 0);
    uVar4 = FUN_140438070(pbVar1);
    *(undefined2 *)(param_1 + 0x201) = uVar4;
    uVar4 = FCrc::StrCrc32<wchar_t>(pbVar1,0);
    *(undefined2 *)((longlong)param_1 + 0x806) = uVar4;
    return param_1;
  }
  *param_1 = 0;
  pbVar5 = pbVar1;
  do {
    bVar2 = *pbVar5;
    pbVar5[(longlong)param_1 + (4 - (longlong)pbVar1)] = bVar2;
    pbVar5 = pbVar5 + 1;
  } while (bVar2 != 0);
  uVar4 = GetRawNonCasePreservingHash<char>(pbVar1);
  *(undefined2 *)(param_1 + 0x201) = uVar4;
  uVar6 = 0xffffffff;
  bVar2 = *pbVar1;
  pbVar1 = param_2 + 0x11;
  while (bVar2 != 0) {
    uVar6 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(((int)(char)bVar2 ^ uVar6) & 0xff) * 4) ^
            uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar6 & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar6 & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar6 & 0xff) * 4) ^ uVar6 >> 8;
    bVar2 = *pbVar1;
    pbVar1 = pbVar1 + 1;
  }
  *(ushort *)((longlong)param_1 + 0x806) = ~(ushort)uVar6;
  return param_1;
}



// FUNCTION 14169aae0 FUN_14169aae0 body=1744 status=ok
// SIG undefined FUN_14169aae0(void)

longlong *
FUN_14169aae0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             LARGE_INTEGER param_6,longlong param_7,longlong param_8,DWORD param_9)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  uint uVar4;
  char cVar5;
  BOOL BVar6;
  DWORD DVar7;
  undefined8 uVar8;
  void *_Dst;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined2 *puVar16;
  LPVOID lpBuffer;
  undefined2 *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  size_t _Size;
  bool bVar21;
  LPOVERLAPPED lpOverlapped;
  undefined4 uVar22;
  undefined1 local_78 [80];
  
  *param_1 = (longlong)&PTR__scalar_deleting_destructor__144ca06d8;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[4] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(bool *)((longlong)param_1 + 0x75) = param_4 != 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  cVar5 = '\0';
  if (param_3 != 0) {
    uVar8 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_3);
    TFunction<void___cdecl(int)>::operator=(param_1 + 4,uVar8);
    cVar5 = *(char *)((longlong)param_1 + 0x74);
  }
  lVar15 = -1;
  if (cVar5 == '\0') {
    lVar15 = param_4;
  }
  param_1[2] = lVar15;
  *param_1 = (longlong)&PTR_FUN_144cdb450;
  param_1[0x11] = param_5;
  ((LARGE_INTEGER *)(param_1 + 0x12))->QuadPart = (LONGLONG)param_6;
  param_1[0x13] = param_7;
  param_1[0x14] = param_8;
  *(DWORD *)(param_1 + 0x15) = param_9;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  param_1[0x16] = 0;
  QueryPerformanceCounter(&param_6);
  param_1[0x1d] = (longlong)((double)param_6.QuadPart * DAT_1468b02f8 + 16777216.0);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  _Size = param_1[0x12];
  lVar15 = param_1[0x11];
  param_1[0x1c] = -1;
  if (_Size == 0x7fffffffffffffff) {
    _Size = param_1[0x13] - lVar15;
    param_1[0x12] = _Size;
  }
  param_1[0x17] = lVar15;
  param_1[0x18] = _Size;
  if (0 < (int)param_1[0x15]) {
    lVar1 = param_1[0x10];
    pvVar2 = (void *)param_1[2];
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x38);
    BVar6 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar6 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    plVar20 = *(longlong **)(lVar1 + 0x28);
    _Dst = (void *)0x0;
    plVar14 = plVar20 + *(int *)(lVar1 + 0x30);
    for (; plVar20 != plVar14; plVar20 = plVar20 + 1) {
      lVar1 = *plVar20;
      lVar19 = *(longlong *)(lVar1 + 0x88);
      if ((((lVar15 < lVar19) || (*(longlong *)(lVar1 + 0x90) + lVar19 < (longlong)(lVar15 + _Size))
           ) || (*(char *)(lVar1 + 0x71) == '\0')) ||
         (lVar9 = *(longlong *)(lVar1 + 0x10), lVar9 == 0)) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = pvVar2;
        if (pvVar2 == (void *)0x0) {
          _Dst = (void *)FMemory::Malloc(_Size,0);
          lVar19 = *(longlong *)(lVar1 + 0x88);
          lVar9 = *(longlong *)(lVar1 + 0x10);
        }
        _guard_xfg_dispatch_icall_nop(_Dst,(void *)((lVar15 - lVar19) + lVar9),_Size);
        if (_Dst != (void *)0x0) break;
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    if (_Dst != (void *)0x0) {
      param_1[2] = (longlong)_Dst;
      IAsyncReadRequest::SetComplete(param_1);
      return param_1;
    }
  }
  lpOverlapped = (LPOVERLAPPED)(param_1 + 0x19);
  uVar3 = param_1[0x11];
  uVar10 = uVar3 & 0xfffffffffffff000;
  param_1[0x17] = uVar10;
  lVar15 = (param_1[0x12] + 0xfff + uVar3 & 0xfffffffffffff000) - uVar10;
  param_1[0x18] = lVar15;
  if (*(char *)((longlong)param_1 + 0x75) != '\0') {
    if ((uVar10 != uVar3) || (lVar15 != param_1[0x12])) {
      if (DAT_1469e45fc < 10) {
        DAT_1469e45fc = DAT_1469e45fc + 1;
      }
      else if (DAT_1469e45fc == 10) {
        DAT_1469e45fc = 0xb;
      }
      lVar15 = FMemory::Malloc(param_1[0x18],0);
      param_1[0x16] = lVar15;
      goto LAB_14169ae09;
    }
    if (*(char *)((longlong)param_1 + 0x75) != '\0') goto LAB_14169ae09;
  }
  lVar15 = FMemory::Malloc(lVar15,0);
  param_1[2] = lVar15;
LAB_14169ae09:
  puVar13 = (undefined8 *)0x0;
  param_9 = 0;
  if (((param_1[0x13] < param_1[0x11] + param_1[0x12]) || (lVar15 = param_1[0x17], lVar15 < 0)) ||
     (param_1[0x18] < 1)) {
    puVar17 = &DAT_143f3eda8;
    if (*(int *)(param_1[0x10] + 0x20) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = *(undefined2 **)(param_1[0x10] + 0x18);
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x89,
               L"FWindowsReadRequest bogus request Offset = %lld BytesToRead = %lld AlignedOffset = %lld AlignedBytesToRead = %lld FileSize = %lld File = %s"
               ,param_1[0x11],param_1[0x12],param_1[0x17],param_1[0x18],param_1[0x13],puVar16);
    if (*(int *)(param_1[0x10] + 0x20) != 0) {
      puVar17 = *(undefined2 **)(param_1[0x10] + 0x18);
    }
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x89,
               L"FWindowsReadRequest bogus request Offset = %lld BytesToRead = %lld AlignedOffset = %lld AlignedBytesToRead = %lld FileSize = %lld File = %s"
               ,param_1[0x11],param_1[0x12],param_1[0x17],param_1[0x18],param_1[0x13],puVar17);
    lVar15 = param_1[0x17];
  }
  *(int *)(param_1 + 0x1b) = (int)lVar15;
  *(int *)((longlong)param_1 + 0xdc) = (int)((ulonglong)lVar15 >> 0x20);
  LOCK();
  if (DAT_1469e44e0 == 0) {
    DAT_1469e44e0 = 0;
  }
  UNLOCK();
  uVar18 = (uint)DAT_1469e44e0;
  uVar3 = DAT_1469e44e0;
  do {
    uVar4 = uVar18 & 0x3ffffff;
    DAT_1469e44e0 = uVar3;
    if ((uVar3 & 0x3ffffff) == 0) {
LAB_14169afeb:
      puVar12 = puVar13;
      if (uVar4 != 0) {
        puVar12 = *(undefined8 **)
                   ((&DAT_1468a81f8)[uVar4 >> 0xe] + 8 + (ulonglong)(uVar18 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
      }
      puVar11 = (undefined8 *)&DAT_ffffffffffffffff;
      if (puVar12 != (undefined8 *)0x0) {
        puVar11 = puVar12;
      }
      if (puVar11 == (undefined8 *)&DAT_ffffffffffffffff) {
        puVar11 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      }
      lpBuffer = (LPVOID)param_1[0x16];
      param_1[0x1c] = (longlong)puVar11;
      if (lpBuffer == (LPVOID)0x0) {
        lpBuffer = (LPVOID)param_1[2];
      }
      BVar6 = ReadFile((HANDLE)param_1[0x14],lpBuffer,*(DWORD *)(param_1 + 0x18),&param_9,
                       lpOverlapped);
      uVar22 = (undefined4)((ulonglong)lpOverlapped >> 0x20);
      if ((BVar6 == 0) && (DVar7 = GetLastError(), DVar7 != 0x3e5)) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x99,L"FWindowsReadRequest ReadFile Failed! Error code = %x",DVar7);
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x99,
                   L"FWindowsReadRequest ReadFile Failed! Error code = %x",CONCAT44(uVar22,DVar7));
      }
      puVar12 = (undefined8 *)operator_new(0x28);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_FUN_144cdb468;
        puVar12[1] = param_1;
        *(undefined4 *)(puVar12 + 2) = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar13 = puVar12;
      }
      param_1[0xf] = (longlong)puVar13;
      cVar5 = FUN_1415bac00();
      lVar1 = DAT_1468b5018;
      lVar15 = param_1[0xf];
      if (cVar5 == '\0') {
        LOCK();
        *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + 1;
        UNLOCK();
        *(undefined8 *)(lVar15 + 0x20) = 0;
        FUN_1415b5910(*(undefined8 *)(lVar15 + 0x18));
        *(undefined8 *)(lVar15 + 0x18) = 0;
        FUN_1416a5ee0(*(undefined8 *)(lVar15 + 8));
        LOCK();
        *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
        UNLOCK();
        (**(code **)(*param_1 + 8))(param_1,0);
      }
      else {
        LOCK();
        *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + 1;
        UNLOCK();
        plVar14 = *(longlong **)(lVar15 + 0x18);
        *(longlong *)(lVar15 + 0x20) = lVar1;
        if (lVar1 == 0) {
          FUN_1415b5910();
          *(undefined8 *)(lVar15 + 0x18) = 0;
          FUN_1416a5ee0(*(undefined8 *)(lVar15 + 8));
          LOCK();
          *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
          UNLOCK();
        }
        else {
          if (plVar14 == (longlong *)0x0) {
            plVar14 = (longlong *)FUN_1415ab270(1);
            *(longlong **)(lVar15 + 0x18) = plVar14;
          }
          (**(code **)(*plVar14 + 0x18))();
          (**(code **)(**(longlong **)(lVar15 + 0x20) + 0x10))(*(longlong **)(lVar15 + 0x20),lVar15)
          ;
        }
      }
      return param_1;
    }
    uVar10 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
    if (uVar10 < (uVar3 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    puVar12 = puVar13;
    if (uVar4 != 0) {
      puVar12 = (undefined8 *)((&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar18 & 0x3fff) * 0x18)
      ;
    }
    LOCK();
    bVar21 = uVar3 == DAT_1469e44e0;
    uVar3 = *(uint *)(puVar12 + 2) | uVar10;
    if (!bVar21) {
      uVar3 = DAT_1469e44e0;
    }
    DAT_1469e44e0 = uVar3;
    UNLOCK();
    if (bVar21) {
      *(undefined4 *)(puVar12 + 2) = 0;
      goto LAB_14169afeb;
    }
    LOCK();
    if (DAT_1469e44e0 == 0) {
      DAT_1469e44e0 = 0;
    }
    UNLOCK();
    uVar18 = (uint)DAT_1469e44e0;
    uVar3 = DAT_1469e44e0;
  } while( true );
}



// FUNCTION 14169b1b0 FWindowsSystemWideCriticalSection body=347 status=ok
// SIG undefined FWindowsSystemWideCriticalSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FWindowsSystemWideCriticalSection::FWindowsSystemWideCriticalSection
          (undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  short sVar1;
  void *_Src;
  DWORD DVar2;
  HANDLE pvVar3;
  short *psVar4;
  longlong lVar5;
  undefined1 auStack_268 [32];
  short *local_248;
  int local_240;
  undefined4 local_23c;
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_240 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_240;
  _Src = (void *)*param_2;
  local_248 = (short *)0x0;
  if (local_240 == 0) {
    local_23c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_240,0);
    ::_guard_xfg_dispatch_icall_nop(local_248,_Src,lVar5 * 2);
  }
  FString::ReplaceInline(&local_248,&DAT_144cd6474,&DAT_144cd6414,1);
  ::_guard_xfg_dispatch_icall_nop(local_238,0,0x208);
  psVar4 = &DAT_143f3eda8;
  if (local_240 != 0) {
    psVar4 = local_248;
  }
  lVar5 = (longlong)local_238 - (longlong)psVar4;
  do {
    sVar1 = *psVar4;
    *(short *)(lVar5 + (longlong)psVar4) = sVar1;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  pvVar3 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,local_238);
  *param_1 = pvVar3;
  if (pvVar3 != (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 == 0xb7) {
      if (param_3 != 0) {
        DVar2 = WaitForSingleObject((HANDLE)*param_1,(int)((double)param_3 * 0.0001));
        if ((DVar2 & 0xffffff7f) == 0) goto LAB_14169b2d6;
      }
      CloseHandle((HANDLE)*param_1);
      *param_1 = 0;
    }
  }
LAB_14169b2d6:
  if (local_248 != (short *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14169b310 ~FCrashReportingThread body=89 status=ok
// SIG undefined ~FCrashReportingThread(void)

void FCrashReportingThread::~FCrashReportingThread(longlong param_1)

{
  DWORD DVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    UNLOCK();
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 8),1000);
    if (DVar1 == 0) {
      CloseHandle(*(HANDLE *)(param_1 + 8));
      CloseHandle(*(HANDLE *)(param_1 + 0x18));
      CloseHandle(*(HANDLE *)(param_1 + 0x30));
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14169b370 ~FGPUDriverInfo body=90 status=ok
// SIG undefined ~FGPUDriverInfo(void)

void FGPUDriverInfo::~FGPUDriverInfo(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14169b3d0 FUN_14169b3d0 body=830 status=ok
// SIG undefined FUN_14169b3d0(void)

void FUN_14169b3d0(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 *hEvent;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  
  lVar1 = param_1[0xf];
  uVar10 = 0;
  *param_1 = &PTR_FUN_144cdb450;
  if (lVar1 == 0) goto LAB_14169b47a;
  plVar8 = *(longlong **)(lVar1 + 0x20);
  if (plVar8 == (longlong *)0x0) {
    LOCK();
    bVar14 = *(int *)(lVar1 + 0x10) == 0;
    if (bVar14) {
      *(int *)(lVar1 + 0x10) = 0;
    }
    UNLOCK();
    if (!bVar14) {
      FUN_1416a5ee0(*(undefined8 *)(lVar1 + 8));
      LOCK();
      *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
      UNLOCK();
    }
code_r0x00014169b44a:
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))(*(longlong **)(lVar1 + 0x18),0xffffffff,0)
      ;
      goto LAB_14169b462;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar8 + 0x18))(plVar8,lVar1);
    if (cVar2 == '\0') goto code_r0x00014169b44a;
    FUN_1416a5ee0(*(undefined8 *)(lVar1 + 8));
    LOCK();
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
    UNLOCK();
    if (*(longlong **)(lVar1 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x10))();
    }
LAB_14169b462:
    *(undefined8 *)(lVar1 + 0x20) = 0;
  }
  plVar8 = (longlong *)param_1[0xf];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8,1);
  }
LAB_14169b47a:
  hEvent = (undefined1 *)param_1[0x1c];
  if (hEvent != &DAT_ffffffffffffffff) {
    ResetEvent(hEvent);
    uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
    uVar5 = uVar10;
    if (uVar3 != 0) {
      uVar5 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
    }
    *(undefined1 **)(uVar5 + 8) = hEvent;
    do {
      LOCK();
      if (DAT_1469e44e0 == 0) {
        DAT_1469e44e0 = 0;
      }
      uVar5 = DAT_1469e44e0;
      UNLOCK();
      uVar12 = (DAT_1469e44e0 & 0xfffffffffc000000) + 0x4000000;
      if (uVar12 < (DAT_1469e44e0 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      uVar6 = uVar10;
      if (uVar3 != 0) {
        uVar6 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
      }
      *(uint *)(uVar6 + 0x10) = (uint)uVar5 & 0x3ffffff;
      LOCK();
      bVar14 = uVar5 != DAT_1469e44e0;
      uVar5 = uVar3 | uVar12;
      if (bVar14) {
        uVar5 = DAT_1469e44e0;
      }
      DAT_1469e44e0 = uVar5;
      UNLOCK();
    } while (bVar14);
    param_1[0x1c] = 0xffffffffffffffff;
  }
  if (param_1[2] != 0) {
    if (*(char *)((longlong)param_1 + 0x75) == '\0') {
      FMemory::Free();
    }
    param_1[2] = 0;
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
    param_1[0x16] = 0;
  }
  if (*(int *)(param_1 + 0x15) == 0) {
    lVar1 = param_1[0x10];
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x38);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    lVar7 = (longlong)*(int *)(lVar1 + 0x30);
    if (*(int *)(lVar1 + 0x30) != 0) {
      bVar14 = (undefined8 *)**(longlong **)(lVar1 + 0x28) != param_1;
      uVar5 = uVar10;
      uVar12 = uVar10;
      do {
        iVar11 = (int)uVar5;
        uVar12 = uVar12 + 1;
        uVar5 = (ulonglong)(iVar11 + 1);
        if ((longlong)uVar12 < lVar7) {
          plVar8 = (longlong *)(*(longlong *)(lVar1 + 0x28) + uVar12 * 8);
          do {
            if (bVar14 != ((undefined8 *)*plVar8 != param_1)) break;
            uVar5 = (ulonglong)((int)uVar5 + 1);
            uVar12 = uVar12 + 1;
            plVar8 = plVar8 + 1;
          } while ((longlong)uVar12 < lVar7);
        }
        iVar13 = (int)uVar5 - iVar11;
        if (bVar14 != false) {
          iVar9 = (int)uVar10;
          if (iVar9 != iVar11) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar9 * 8),
                       (void *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar11 * 8),
                       (longlong)iVar13 << 3);
          }
          uVar10 = (ulonglong)(uint)(iVar9 + iVar13);
        }
        bVar14 = (bool)(bVar14 ^ 1);
      } while ((longlong)uVar12 < lVar7);
      *(int *)(lVar1 + 0x30) = (int)uVar10;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  *param_1 = &PTR__scalar_deleting_destructor__144ca06d8;
  param_1[0x10] = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    plVar8 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar8 = param_1 + 6;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (param_1[10] == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14169b710 ~FWindowsSystemWideCriticalSection body=45 status=ok
// SIG undefined ~FWindowsSystemWideCriticalSection(void)

void FWindowsSystemWideCriticalSection::~FWindowsSystemWideCriticalSection(undefined8 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    ReleaseMutex((HANDLE)*param_1);
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14169b740 FUN_14169b740 body=623 status=ok
// SIG undefined FUN_14169b740(void)

longlong * FUN_14169b740(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong local_18 [2];
  
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    FNameEntrySerialized::GetPlainNameString(param_2,local_18);
    FUN_14158ce90(param_1,local_18);
    puVar2 = *(undefined2 **)param_1[1];
    if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x201,2);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x201,2);
      }
    }
    else {
      *(undefined2 *)(param_2 + 0x201) = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    }
    puVar2 = *(undefined2 **)param_1[1];
    if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0x806,2);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,(longlong)param_2 + 0x806,2);
      }
    }
    else {
      *(undefined2 *)((longlong)param_2 + 0x806) = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  else {
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
    lVar3 = (longlong)local_res8[0];
    if (local_res8[0] < 0) {
      local_res8[0] = -local_res8[0];
      *param_2 = 1;
      lVar3 = (longlong)local_res8[0] * 2;
    }
    else {
      *param_2 = 0;
    }
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,lVar3);
    if (0x1f7 < (int)param_1[8]) {
      puVar2 = *(undefined2 **)param_1[1];
      if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x201,2);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,param_2 + 0x201,2);
        }
      }
      else {
        *(undefined2 *)(param_2 + 0x201) = *puVar2;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
      }
      puVar2 = *(undefined2 **)param_1[1];
      if (puVar2 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
        *(undefined2 *)((longlong)param_2 + 0x806) = *puVar2;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
        *(undefined1 *)(param_2 + 0x202) = 1;
        return param_1;
      }
      (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0x806,2);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,(longlong)param_2 + 0x806,2);
      }
      *(undefined1 *)(param_2 + 0x202) = 1;
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14169b9b0 operator<< body=235 status=ok
// SIG undefined operator<<(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void operator<<(longlong *param_1,undefined4 *param_2)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  undefined1 auStack_1e8 [32];
  short *local_1c8;
  int local_1c0;
  undefined1 local_1b8 [424];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 8) == 0) {
    FUN_1416880d0(local_1b8,param_1);
    FUN_14169b740(local_1b8,param_2);
    FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1b8);
  }
  else {
    FNameEntrySerialized::GetPlainNameString(param_2,&local_1c8);
    FUN_14158ce90(*(undefined8 *)(*param_1 + 8),&local_1c8);
    if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) != 0) {
      *param_2 = 1;
      psVar3 = &DAT_143f3eda8;
      if (local_1c0 != 0) {
        psVar3 = local_1c8;
      }
      lVar2 = 4 - (longlong)psVar3;
      do {
        sVar1 = *psVar3;
        *(short *)((longlong)param_2 + lVar2 + (longlong)psVar3) = sVar1;
        psVar3 = psVar3 + 1;
      } while (sVar1 != 0);
      *(undefined1 *)(param_2 + 0x202) = 0;
    }
    if (local_1c8 != (short *)0x0) {
      FMemory::Free(local_1c8);
    }
  }
  return;
}



// FUNCTION 14169baa0 operator() body=247 status=ok
// SIG undefined operator()(void)

undefined1 <lambda_3d253e035373c06081768798e3659f9a>::operator()(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined1 uVar3;
  int iVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  longlong lVar8;
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong uVar7;
  
  uVar1 = *param_2;
  puVar2 = (undefined8 *)param_1[1];
  uVar6 = 0xffffffffffffffff;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (*(short *)((longlong)(param_2 + 0xb) + uVar6 * 2) != 0);
  if ((*(int *)(puVar2 + 1) != 0) || (iVar4 = 2, (int)uVar7 == -2)) {
    iVar4 = 1;
  }
  iVar4 = iVar4 + (int)uVar6;
  local_28 = (undefined2 *)0x0;
  local_20 = *(int *)(puVar2 + 1);
  lVar8 = (longlong)local_20;
  _Src = (void *)*puVar2;
  if ((local_20 == 0) && (iVar4 == 0)) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20 + iVar4,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,_Src,lVar8 * 2);
  }
  FString::PathAppend(&local_28,param_2 + 0xb,uVar6 & 0xffffffff);
  puVar5 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar5 = local_28;
  }
  uVar3 = (**(code **)(*(longlong *)*param_1 + 8))
                    ((longlong *)*param_1,puVar5,(byte)(uVar1 >> 4) & 1);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 14169bba0 operator() body=590 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 <lambda_9215f1e20df5db2e5a5a15dd3b4a2e15>::operator()(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined1 uVar3;
  BOOL BVar4;
  int iVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d0;
  uint local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_70;
  _SYSTEMTIME local_68;
  _SYSTEMTIME local_58;
  _SYSTEMTIME local_48;
  ulonglong local_38;
  ulonglong uVar8;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = *param_2;
  uVar9 = 0xffffffffffffffff;
  if ((uVar1 >> 4 & 1) == 0) {
    local_b8 = CONCAT44(param_2[7],param_2[8]);
    uVar9 = local_b8;
  }
  BVar4 = FileTimeToSystemTime((FILETIME *)(param_2 + 5),&local_68);
  if (BVar4 == 0) {
    local_98 = 0;
  }
  else {
    local_c0 = 0;
    local_c8 = (uint)local_68.wSecond;
    local_d0 = (uint)local_68.wMinute;
    local_d8 = (uint)local_68.wHour;
    FDateTime::FDateTime(&local_98,local_68.wYear,local_68.wMonth,local_68.wDay);
  }
  BVar4 = FileTimeToSystemTime((FILETIME *)(param_2 + 3),&local_58);
  if (BVar4 == 0) {
    local_a0 = 0;
  }
  else {
    local_c0 = 0;
    local_c8 = (uint)local_58.wSecond;
    local_d0 = (uint)local_58.wMinute;
    local_d8 = (uint)local_58.wHour;
    FDateTime::FDateTime(&local_a0,local_58.wYear,local_58.wMonth,local_58.wDay);
  }
  BVar4 = FileTimeToSystemTime((FILETIME *)(param_2 + 1),&local_48);
  if (BVar4 == 0) {
    local_b8 = 0;
  }
  else {
    local_c0 = 0;
    local_c8 = (uint)local_48.wSecond;
    local_d0 = (uint)local_48.wMinute;
    local_d8 = (uint)local_48.wHour;
    FDateTime::FDateTime(&local_b8,local_48.wYear,local_48.wMonth,local_48.wDay);
  }
  puVar2 = (undefined8 *)param_1[1];
  local_88 = local_a0;
  local_80 = local_98;
  local_70 = ((byte)*param_2 & 1 | 2) * '\x02' | local_70 & 0xfc | (byte)(uVar1 >> 4) & 1;
  uVar7 = 0xffffffffffffffff;
  do {
    uVar8 = uVar7;
    uVar7 = uVar8 + 1;
  } while (*(short *)((longlong)param_2 + uVar7 * 2 + 0x2c) != 0);
  if ((*(int *)(puVar2 + 1) != 0) || (iVar5 = 2, (int)uVar8 == -2)) {
    iVar5 = 1;
  }
  local_b0 = (undefined2 *)0x0;
  iVar5 = (int)uVar7 + iVar5;
  local_a8 = *(int *)(puVar2 + 1);
  lVar10 = (longlong)local_a8;
  _Src = (void *)*puVar2;
  local_90 = local_b8;
  local_78 = uVar9;
  if ((local_a8 == 0) && (iVar5 == 0)) {
    local_a4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,local_a8 + iVar5,0);
    ::_guard_xfg_dispatch_icall_nop(local_b0,_Src,lVar10 * 2);
  }
  FString::PathAppend(&local_b0,param_2 + 0xb,uVar7 & 0xffffffff);
  puVar6 = &DAT_143f3eda8;
  if (local_a8 != 0) {
    puVar6 = local_b0;
  }
  uVar3 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar6,&local_90);
  if (local_b0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 14169bdf0 FUN_14169bdf0 body=84 status=ok
// SIG undefined FUN_14169bdf0(void)

undefined8 * FUN_14169bdf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cdb468;
  FUN_1415b5910(param_1[3]);
  param_1[3] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14169be50 `scalar_deleting_destructor' body=114 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAsyncBufferedFileReaderWindows::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cdb880;
  FUN_1416abbe0();
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  FMemory::Free(param_1[5]);
  FMemory::Free(param_1[6]);
  *param_1 = &PTR_FUN_144cacc30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14169bed0 `scalar_deleting_destructor' body=85 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FFileHandleWindows::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cdb8c8;
  CloseHandle((HANDLE)param_1[1]);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144cacc30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14169bf30 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWindowsAsyncReadFileHandle::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cdb858;
  CloseHandle((HANDLE)param_1[1]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144ca06f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14169bfb0 FUN_14169bfb0 body=52 status=ok
// SIG undefined FUN_14169bfb0(void)

undefined8 FUN_14169bfb0(undefined8 param_1,ulonglong param_2)

{
  FUN_14169b3d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 14169bff0 FUN_14169bff0 body=49 status=ok
// SIG undefined FUN_14169bff0(void)

void FUN_14169bff0(longlong param_1)

{
  FUN_1416a5ee0(*(undefined8 *)(param_1 + 8));
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014169c017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14169c030 AddPlatformSpecificProperties body=167 status=ok
// SIG undefined AddPlatformSpecificProperties(void)

void FWindowsPlatformCrashContext::AddPlatformSpecificProperties(undefined8 param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  FString::PrintfImpl(&local_18,&DAT_1440da628,1);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  FUN_1415a2820(param_1,L"PlatformIsRunningWindows",puVar2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar1 = GetCrashType();
  FString::PrintfImpl(&local_18,&DAT_1440da628,uVar1);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  FUN_1415a2820(param_1,L"PlatformCallbackResult",puVar2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14169c0e0 AddZeroed body=176 status=ok
// SIG undefined AddZeroed(void)

int TStaticIndirectArrayThreadSafeRead<FNameEntry,2097152,16384>::AddZeroed
              (longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  bool bVar5;
  
  LOCK();
  iVar2 = *(int *)(param_1 + 0x400);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x400) = 0;
    iVar2 = 0;
  }
  UNLOCK();
  iVar3 = param_2 + -1 + iVar2;
  iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
  if (*(int *)(param_1 + 0x404) <= iVar3) {
    plVar1 = (longlong *)(param_1 + (longlong)iVar3 * 8);
    do {
      _Dst = (void *)FMemory::Malloc(0x20000);
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x20000);
      LOCK();
      bVar5 = *plVar1 == 0;
      if (bVar5) {
        *plVar1 = (longlong)_Dst;
      }
      UNLOCK();
      iVar4 = *(int *)(param_1 + 0x404);
      if (bVar5) {
        iVar4 = iVar4 + 1;
        *(int *)(param_1 + 0x404) = iVar4;
      }
    } while (iVar4 <= iVar3);
  }
  LOCK();
  *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + param_2;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14169c190 AppendNameToString body=390 status=ok
// SIG undefined AppendNameToString(void)

void FNameEntry::AppendNameToString(byte *param_1,longlong *param_2)

{
  byte *_Src;
  void *_Dst;
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  void *local_28;
  ulonglong local_20;
  
  _Src = param_1 + 0x10;
  if ((*param_1 & 1) == 0) {
    local_28 = (void *)0x0;
    local_20 = 0;
    pvVar5 = (void *)0x0;
    if ((_Src != (byte *)0x0) && (pvVar5 = (void *)0x0, *_Src != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (_Src[lVar4] != 0);
      uVar3 = (int)lVar4 + 1;
      local_20 = (ulonglong)uVar3;
      uVar6 = uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        uVar6 = (uint)local_20;
      }
      pvVar5 = local_28;
      FGenericPlatformString::Convert<char,wchar_t>(local_28,uVar3,_Src,uVar3,0x3f);
      if ((uVar6 != 0) && (iVar7 = uVar6 - 1, iVar7 != 0)) {
        iVar1 = (int)param_2[1];
        iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar7;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar5,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)_Dst) = 0;
      }
    }
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
  }
  else {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(short *)(_Src + lVar4 * 2) != 0);
    iVar7 = (int)lVar4;
    if (iVar7 != 0) {
      iVar1 = (int)param_2[1];
      iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar7;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      pvVar5 = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar5,_Src,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar5) = 0;
    }
  }
  return;
}



// FUNCTION 14169c320 AppendString body=288 status=ok
// SIG undefined AppendString(void)

void FName::AppendString(int *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = GetNames();
  uVar6 = *param_1 >> 0x1f & 0x3fff;
  uVar3 = *param_1 + uVar6;
  lVar5 = *(longlong *)
           (*(longlong *)(lVar5 + (longlong)((int)uVar3 >> 0xe) * 8) +
           (longlong)(int)((uVar3 & 0x3fff) - uVar6) * 8);
  if (lVar5 == 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (10 - (uint)(iVar2 != 0)) + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    lVar5 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
    builtin_wcsncpy((wchar_t *)(*param_2 + lVar5 * 2),L"*INVALID",8);
    lVar5 = *param_2 + lVar5 * 2;
    *(undefined2 *)(lVar5 + 0x10) = 0x2a;
    *(undefined2 *)(lVar5 + 0x12) = 0;
    return;
  }
  FNameEntry::AppendNameToString(lVar5,param_2);
  if (param_1[1] != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (2 - (uint)(iVar2 != 0)) + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    *puVar1 = 0x5f;
    puVar1[1] = 0;
    FString::AppendInt(param_2,param_1[1] + -1);
  }
  return;
}



// FUNCTION 14169c440 BaseAllocator body=46 status=ok
// SIG undefined BaseAllocator(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FWindowsPlatformMemory::BaseAllocator(void)

{
  void *pvVar1;
  
  _DAT_1464a8358 = 5;
  pvVar1 = FUseSystemMallocForNew::operator_new(0x8a8);
  if (pvVar1 != (void *)0x0) {
    FMallocBinned2::FMallocBinned2(pvVar1);
    return;
  }
  return;
}



// FUNCTION 14169c470 BinnedAllocFromOS body=24 status=ok
// SIG undefined BinnedAllocFromOS(void)

void FWindowsPlatformMemory::BinnedAllocFromOS(SIZE_T param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014169c481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualAlloc((LPVOID)0x0,param_1,0x1000,4);
  return;
}



// FUNCTION 14169c490 FUN_14169c490 body=37 status=ok
// SIG undefined FUN_14169c490(void)

void FUN_14169c490(LPVOID param_1)

{
  FUN_14169dad0();
                    /* WARNING: Could not recover jumptable at 0x00014169c4ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualFree(param_1,0,0x8000);
  return;
}



// FUNCTION 14169c4e0 CheckForCPUIDInstruction body=35 status=ok
// SIG undefined CheckForCPUIDInstruction(void)

/* WARNING: Removing unreachable block (ram,0x00014169c4ea) */

undefined8 FCPUIDQueriedData::CheckForCPUIDInstruction(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)cpuid_basic_info(0);
  return CONCAT71((uint7)(uint3)((uint)*puVar1 >> 8),1);
}



// FUNCTION 14169c510 FUN_14169c510 body=135 status=ok
// SIG undefined FUN_14169c510(void)

void FUN_14169c510(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_1464b01f4 != '\0') {
    uVar2 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar2,L"DontAllowKeyboardHook");
    DAT_1464b0030 = cVar1 == '\0';
    DAT_1464b01f4 = '\0';
  }
  if (DAT_1464b0030 == '\0') {
    DAT_1464b0030 = 1;
    if (DAT_1469e4210 != 0) {
      return;
    }
    FUN_1416a8ae0(1);
    return;
  }
  if (DAT_1469e4210 != 0) {
    FUN_1416a8ae0(0);
  }
  DAT_1464b0030 = DAT_1464b0030 == '\0';
  return;
}



// FUNCTION 14169c5a0 CoInitialize body=23 status=ok
// SIG HRESULT CoInitialize(LPVOID pvReserved)

HRESULT __stdcall FWindowsPlatformMisc::CoInitialize(LPVOID pvReserved)

{
  uint uVar1;
  
  uVar1 = ::CoInitialize((LPVOID)0x0);
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
}



// FUNCTION 14169c5c0 CoUninitialize body=7 status=ok
// SIG void CoUninitialize(void)

void __stdcall FWindowsPlatformMisc::CoUninitialize(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014169c5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ::CoUninitialize();
  return;
}



// FUNCTION 14169c5d0 CommandLineCommands body=111 status=ok
// SIG undefined CommandLineCommands(void)

undefined8 FWindowsPlatformMisc::CommandLineCommands(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong local_18 [3];
  
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar2,L"firstinstall");
  if (cVar1 == '\0') {
    cVar1 = HandleGameExplorerIntegration();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  else {
    plVar3 = (longlong *)FUN_141672640();
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_18[0] = 0;
    local_18[1] = 0;
    FConfigCacheIni::Flush(DAT_1468b6148,0,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 14169c640 Compare body=414 status=ok
// SIG undefined Compare(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FName::Compare(int *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  byte *_Str2;
  bool bVar9;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined1 local_268 [256];
  longlong local_168;
  byte *local_160;
  undefined1 local_148 [256];
  longlong local_48;
  byte *local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_278 = 0;
  if (*param_1 == *param_2) {
    iVar2 = param_1[1] - param_2[1];
  }
  else {
    GetNames();
    lVar4 = GetNames();
    uVar7 = *param_1 >> 0x1f & 0x3fff;
    uVar3 = *param_1 + uVar7;
    pbVar1 = *(byte **)(*(longlong *)(lVar4 + (longlong)((int)uVar3 >> 0xe) * 8) +
                       (longlong)(int)((uVar3 & 0x3fff) - uVar7) * 8);
    lVar4 = GetNames();
    iVar2 = *param_2;
    uVar7 = iVar2 >> 0x1f & 0x3fff;
    uVar3 = iVar2 + uVar7;
    pbVar5 = *(byte **)(*(longlong *)(lVar4 + (longlong)((int)uVar3 >> 0xe) * 8) +
                       (longlong)(int)((uVar3 & 0x3fff) - uVar7) * 8);
    if ((pbVar1 == (byte *)0x0) || (pbVar5 == (byte *)0x0)) {
      iVar2 = *param_1 - iVar2;
    }
    else {
      bVar6 = *pbVar1;
      _Str2 = pbVar5 + 0x10;
      if ((bVar6 & 1) == (*pbVar5 & 1)) {
        if ((bVar6 & 1) == 0) {
          iVar2 = _stricmp((char *)(pbVar1 + 0x10),(char *)_Str2);
        }
        else {
          iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
        }
      }
      else {
        bVar9 = (*pbVar5 & 1) == 0;
        if (bVar9) {
          TStringConversion<TStringConvert<char,wchar_t>,128>::
          TStringConversion<TStringConvert<char,wchar_t>,128>(local_148,_Str2);
          bVar6 = *pbVar1;
          _Str2 = local_40;
        }
        pbVar5 = pbVar1 + 0x10;
        bVar8 = bVar9;
        if ((bVar6 & 1) == 0) {
          bVar8 = 2;
          TStringConversion<TStringConvert<char,wchar_t>,128>::
          TStringConversion<TStringConvert<char,wchar_t>,128>(local_268,pbVar1 + 0x10);
          pbVar5 = local_160;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pbVar5,_Str2);
        if (((bVar8 & 2) != 0) && (local_168 != 0)) {
          FMemory::Free();
        }
        if ((bVar9) && (local_48 != 0)) {
          FMemory::Free();
        }
      }
    }
  }
  return iVar2;
}



// FUNCTION 14169c7e0 ConsoleCtrlHandler body=146 status=ok
// SIG undefined ConsoleCtrlHandler(void)

undefined8 ConsoleCtrlHandler(void)

{
  longlong lVar1;
  longlong *plVar2;
  HANDLE hProcess;
  
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af3d0);
  lVar1 = FUN_141672640();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_141672640();
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (DAT_1468b6160 != (longlong *)0x0) {
    (**(code **)(*DAT_1468b6160 + 0x18))();
  }
  if (DAT_1468e28f0 != (longlong *)0x0) {
    (**(code **)(*DAT_1468e28f0 + 0x18))();
  }
  if ((DAT_1468c217e == '\0') && (DAT_1468b616c == '\0')) {
    PostQuitMessage(0);
    DAT_1468c217e = 1;
    return 1;
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0);
  return 1;
}



// FUNCTION 14169c890 FUN_14169c890 body=103 status=ok
// SIG undefined FUN_14169c890(void)

undefined8 FUN_14169c890(longlong *param_1,undefined8 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  LPCWSTR lpPathName;
  undefined8 uVar4;
  longlong local_18 [2];
  
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 400))(param_1,local_18,param_2);
  if (*(int *)(puVar3 + 1) == 0) {
    lpPathName = L"";
  }
  else {
    lpPathName = (LPCWSTR)*puVar3;
  }
  BVar1 = CreateDirectoryW(lpPathName,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0xb7) {
      uVar4 = 0;
      goto LAB_14169c8db;
    }
  }
  uVar4 = 1;
LAB_14169c8db:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 14169c900 FUN_14169c900 body=1923 status=ok
// SIG undefined FUN_14169c900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14169c900(uint *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  wchar_t *_Source;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *local_38;
  undefined8 local_30;
  void *local_28;
  int local_20;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  pwVar9 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"Unhandled Exception: ",0x2c);
  uVar3 = local_30;
  uVar1 = *param_1;
  iVar7 = 0;
  iVar2 = (int)local_30;
  if (uVar1 < 0xc000008d) {
    if (uVar1 == 0xc000008c) {
      lVar8 = (longlong)(int)local_30;
      local_30._0_4_ = (0x20 - (uint)((int)local_30 != 0)) + (int)local_30;
      if (local_30._4_4_ < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
        pwVar9 = local_38;
      }
      builtin_wcsncpy(pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),L"EXCEPTION_ARRAY_BOUNDS_EXCEEDED",
                      0x20);
      goto LAB_14169d02c;
    }
    if (uVar1 == 0x80000002) {
      lVar8 = (longlong)(int)local_30;
      local_30._0_4_ = (0x20 - (uint)((int)local_30 != 0)) + (int)local_30;
      if (local_30._4_4_ < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
        pwVar9 = local_38;
      }
      builtin_wcsncpy(pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),L"EXCEPTION_DATATYPE_MISALIGNMENT",
                      0x20);
      goto LAB_14169d02c;
    }
    if (uVar1 != 0xc0000005) {
      if (uVar1 == 0xc000001d) {
        lVar8 = (longlong)(int)local_30;
        local_30._0_4_ = (0x1e - (uint)((int)local_30 != 0)) + (int)local_30;
        if (local_30._4_4_ < (int)local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
          pwVar9 = local_38;
        }
        builtin_wcsncpy(pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),L"EXCEPTION_ILLEGAL_INSTRUCTION",
                        0x1e);
        goto LAB_14169d02c;
      }
      goto switchD_14169ccf5_caseD_c000008f;
    }
    lVar8 = (longlong)(int)local_30;
    local_30._0_4_ = (0x1c - (uint)((int)local_30 != 0)) + (int)local_30;
    iVar6 = local_30._4_4_;
    if (local_30._4_4_ < (int)local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
      pwVar9 = local_38;
      iVar6 = local_30._4_4_;
    }
    uVar3 = local_30;
    builtin_wcsncpy(pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),L"EXCEPTION_ACCESS_VIOLATION ",0x1c);
    iVar2 = (int)local_30;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = (longlong)(int)local_30;
      local_30._0_4_ = (0x11 - (uint)((int)local_30 != 0)) + (int)local_30;
      if (iVar6 < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
        pwVar9 = local_38;
        iVar6 = local_30._4_4_;
      }
      lVar8 = lVar8 - (ulonglong)(iVar2 != 0);
      builtin_wcsncpy(pwVar9 + lVar8,L"reading ",8);
LAB_14169cb25:
      builtin_wcsncpy(pwVar9 + lVar8 + 8,L"address ",9);
    }
    else if (*(longlong *)(param_1 + 8) == 1) {
      lVar8 = (longlong)(int)local_30;
      local_30._0_4_ = (0x11 - (uint)((int)local_30 != 0)) + (int)local_30;
      if (iVar6 < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
        pwVar9 = local_38;
        iVar6 = local_30._4_4_;
      }
      lVar8 = lVar8 - (ulonglong)(iVar2 != 0);
      builtin_wcsncpy(pwVar9 + lVar8,L"writing ",8);
      goto LAB_14169cb25;
    }
    FString::PrintfImpl(&local_28,L"0x%016llx",*(undefined8 *)(param_1 + 10));
    pvVar4 = local_28;
    uVar3 = local_30;
    if (local_20 != 0) {
      iVar7 = local_20 + -1;
    }
    if (iVar7 != 0) {
      iVar2 = (int)local_30;
      lVar8 = (longlong)(int)local_30;
      iVar5 = (uint)((int)local_30 == 0) + (int)local_30 + iVar7;
      local_30 = CONCAT44(local_30._4_4_,iVar5);
      if (iVar6 < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
        pwVar9 = local_38;
      }
      _guard_xfg_dispatch_icall_nop
                (pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),pvVar4,(longlong)iVar7 * 2);
      (pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)))[iVar7] = L'\0';
    }
joined_r0x00014169d022:
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else {
    switch(uVar1) {
    case 0xc000008d:
      lVar8 = (longlong)(int)local_30;
      local_30._0_4_ = (0x1f - (uint)((int)local_30 != 0)) + (int)local_30;
      if (local_30._4_4_ < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
        pwVar9 = local_38;
      }
      builtin_wcsncpy(pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),L"EXCEPTION_FLT_DENORMAL_OPERAND",
                      0x1f);
      break;
    case 0xc000008e:
      lVar8 = (longlong)(int)local_30;
      local_30._0_4_ = (0x1d - (uint)((int)local_30 != 0)) + (int)local_30;
      if (local_30._4_4_ < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
        pwVar9 = local_38;
      }
      builtin_wcsncpy(pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),L"EXCEPTION_FLT_DIVIDE_BY_ZERO",
                      0x1d);
      break;
    default:
switchD_14169ccf5_caseD_c000008f:
      FString::PrintfImpl(&local_28,L"0x%08x");
      pvVar4 = local_28;
      uVar3 = local_30;
      if (local_20 != 0) {
        iVar7 = local_20 + -1;
      }
      if (iVar7 != 0) {
        iVar2 = (int)local_30;
        lVar8 = (longlong)(int)local_30;
        iVar6 = (uint)((int)local_30 == 0) + iVar7 + (int)local_30;
        local_30 = CONCAT44(local_30._4_4_,iVar6);
        if (local_30._4_4_ < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
          pwVar9 = local_38;
        }
        _guard_xfg_dispatch_icall_nop
                  (pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),pvVar4,(longlong)iVar7 * 2);
        (pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)))[iVar7] = L'\0';
      }
      goto joined_r0x00014169d022;
    case 0xc0000090:
      lVar8 = (longlong)(int)local_30;
      local_30._0_4_ = (0x20 - (uint)((int)local_30 != 0)) + (int)local_30;
      if (local_30._4_4_ < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
        pwVar9 = local_38;
      }
      builtin_wcsncpy(pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),L"EXCEPTION_FLT_INVALID_OPERATION",
                      0x20);
      break;
    case 0xc0000094:
      lVar8 = (longlong)(int)local_30;
      local_30._0_4_ = (0x1d - (uint)((int)local_30 != 0)) + (int)local_30;
      if (local_30._4_4_ < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
        pwVar9 = local_38;
      }
      builtin_wcsncpy(pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),L"EXCEPTION_INT_DIVIDE_BY_ZERO",
                      0x1d);
      break;
    case 0xc0000096:
      lVar8 = (longlong)(int)local_30;
      local_30._0_4_ = (0x1b - (uint)((int)local_30 != 0)) + (int)local_30;
      if (local_30._4_4_ < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
        pwVar9 = local_38;
      }
      builtin_wcsncpy(pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),L"EXCEPTION_PRIV_INSTRUCTION",0x1b)
      ;
      break;
    case 0xc00000fd:
      lVar8 = (longlong)(int)local_30;
      local_30._0_4_ = (0x19 - (uint)((int)local_30 != 0)) + (int)local_30;
      if (local_30._4_4_ < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
        pwVar9 = local_38;
      }
      builtin_wcsncpy(pwVar9 + (lVar8 - (ulonglong)(iVar2 != 0)),L"EXCEPTION_STACK_OVERFLOW",0x19);
    }
  }
LAB_14169d02c:
  _Source = L"";
  if ((int)local_30 != 0) {
    _Source = pwVar9;
  }
  wcsncpy(&DAT_1468be170,_Source,0xfff);
  _DAT_1468c016e = 0;
  if (pwVar9 != (wchar_t *)0x0) {
    FMemory::Free(pwVar9);
  }
  return;
}



// FUNCTION 14169d120 CreateGuid body=7 status=ok
// SIG HRESULT CreateGuid(GUID * pguid)

HRESULT __stdcall FWindowsPlatformMisc::CreateGuid(GUID *pguid)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014169d120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoCreateGuid(pguid);
  return HVar1;
}



// FUNCTION 14169d130 FUN_14169d130 body=103 status=ok
// SIG undefined FUN_14169d130(void)

bool FUN_14169d130(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  LPCWSTR lpPathName;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 400))(param_1,local_18,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    lpPathName = L"";
  }
  else {
    lpPathName = (LPCWSTR)*puVar2;
  }
  RemoveDirectoryW(lpPathName);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  cVar1 = (**(code **)(*param_1 + 0xd0))(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 14169d1a0 FUN_14169d1a0 body=238 status=ok
// SIG undefined FUN_14169d1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14169d1a0(longlong *param_1,undefined8 param_2)

{
  BOOL BVar1;
  DWORD dwMessageId;
  wchar_t *pwVar2;
  LPCWSTR lpFileName;
  undefined1 auStackY_868 [32];
  LPCWSTR local_828;
  int local_820;
  WCHAR local_818 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_868;
  (**(code **)(*param_1 + 0x188))(param_1,&local_828,param_2);
  lpFileName = L"";
  if (local_820 != 0) {
    lpFileName = local_828;
  }
  BVar1 = DeleteFileW(lpFileName);
  if (BVar1 == 0) {
    local_818[0] = L'\0';
    dwMessageId = GetLastError();
    FormatMessageW(0x1000,(LPCVOID)0x0,dwMessageId,0x400,local_818,0x400,(va_list *)0x0);
    pwVar2 = _guard_xfg_dispatch_icall_nop(local_818,L'\r');
    if (pwVar2 != (wchar_t *)0x0) {
      *pwVar2 = L'\0';
    }
    pwVar2 = _guard_xfg_dispatch_icall_nop(local_818,L'\n');
    if (pwVar2 != (wchar_t *)0x0) {
      *pwVar2 = L'\0';
    }
  }
  if (local_828 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  return BVar1 != 0;
}



// FUNCTION 14169d290 DeleteStoredValue body=743 status=ok
// SIG undefined DeleteStoredValue(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FWindowsPlatformMisc::DeleteStoredValue
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  LSTATUS LVar1;
  LSTATUS LVar2;
  LSTATUS LVar3;
  LPCWSTR *ppWVar4;
  LPCWSTR pWVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStackY_4c8 [32];
  LPCWSTR local_488;
  int local_480;
  int local_47c;
  LPCWSTR local_478;
  undefined8 local_470;
  HKEY local_468;
  LPCWSTR local_460;
  undefined8 local_458;
  DWORD local_450 [2];
  WCHAR local_448 [256];
  WCHAR local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_4c8;
  local_458 = 9;
  local_460 = (LPCWSTR)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_460,0);
  pWVar5 = local_460;
  FGenericPlatformString::Memcpy(local_460,L"Software",0x12);
  iVar8 = 2;
  iVar6 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    iVar6 = 0;
  }
  if (((int)local_458 != 0) || (iVar7 = iVar8, iVar6 == -1)) {
    iVar7 = 1;
  }
  local_478 = pWVar5;
  local_470._0_4_ = (int)local_458;
  local_470._4_4_ = local_458._4_4_;
  if (local_458._4_4_ < iVar6 + iVar7 + (int)local_458) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_478);
  }
  FString::PathAppend(&local_478,*param_1,iVar6);
  iVar6 = local_470._4_4_;
  iVar7 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar7 = 0;
  }
  if (((int)local_470 != 0) || (iVar7 == -1)) {
    iVar8 = 1;
  }
  local_488 = local_478;
  iVar8 = iVar7 + iVar8 + (int)local_470;
  local_478 = (LPCWSTR)0x0;
  local_480 = (int)local_470;
  local_47c = local_470._4_4_;
  local_470 = 0;
  if (iVar6 < iVar8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_488);
  }
  FString::PathAppend(&local_488,*param_2,iVar7);
  if (local_478 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  ppWVar4 = (LPCWSTR *)FString::Replace(&local_488,&local_460,&DAT_144cd600c,&DAT_144cd5eac);
  if (&local_488 != ppWVar4) {
    if (local_488 != (LPCWSTR)0x0) {
      FMemory::Free();
    }
    local_488 = *ppWVar4;
    *ppWVar4 = (LPCWSTR)0x0;
    local_480 = *(int *)(ppWVar4 + 1);
    local_47c = *(int *)((longlong)ppWVar4 + 0xc);
    ppWVar4[1] = (LPCWSTR)0x0;
  }
  if (local_460 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  pWVar5 = L"";
  if (local_480 != 0) {
    pWVar5 = local_488;
  }
  LVar1 = RegOpenKeyExW((HKEY)0xffffffff80000001,pWVar5,0,0x2001f,&local_468);
  if (LVar1 == 0) {
    if (*(int *)(param_3 + 1) == 0) {
      pWVar5 = L"";
    }
    else {
      pWVar5 = (LPCWSTR)*param_3;
    }
    LVar1 = RegDeleteValueW(local_468,pWVar5);
    local_450[0] = 0x100;
    LVar2 = RegEnumKeyExW(local_468,0,local_448,local_450,(LPDWORD)0x0,(LPWSTR)0x0,(LPDWORD)0x0,
                          (PFILETIME)0x0);
    local_450[1] = 0x100;
    LVar3 = RegEnumValueW(local_468,0,local_248,local_450 + 1,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,
                          (LPDWORD)0x0);
    RegCloseKey(local_468);
    if ((LVar2 != 0) && (LVar3 != 0)) {
      pWVar5 = L"";
      if (local_480 != 0) {
        pWVar5 = local_488;
      }
      RegDeleteKeyW((HKEY)0xffffffff80000001,pWVar5);
    }
  }
  if (local_488 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  return LVar1 == 0;
}



// FUNCTION 14169d580 FUN_14169d580 body=143 status=ok
// SIG undefined FUN_14169d580(void)

undefined8 FUN_14169d580(longlong *param_1,longlong param_2)

{
  DWORD DVar1;
  longlong lVar2;
  undefined8 *puVar3;
  LPCWSTR lpFileName;
  longlong local_18 [2];
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(short *)(param_2 + lVar2 * 2) != 0);
  if ((int)lVar2 == 0) {
    return 1;
  }
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 400))(param_1,local_18,param_2);
  if (*(int *)(puVar3 + 1) == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*puVar3;
  }
  DVar1 = GetFileAttributesW(lpFileName);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14169d610 EnsureCompletion body=148 status=ok
// SIG undefined EnsureCompletion(void)

void FAsyncTask<FWindowsReadRequestWorker>::EnsureCompletion(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 == (longlong *)0x0) {
      LOCK();
      bVar3 = *(int *)(param_1 + 0x10) == 0;
      if (bVar3) {
        *(int *)(param_1 + 0x10) = 0;
      }
      UNLOCK();
      if (!bVar3) {
        FUN_1416a5ee0(*(undefined8 *)(param_1 + 8));
        LOCK();
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        UNLOCK();
      }
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      if (cVar2 != '\0') {
        FUN_1416a5ee0(*(undefined8 *)(param_1 + 8));
        LOCK();
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        UNLOCK();
        if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
          *(undefined8 *)(param_1 + 0x20) = 0;
          return;
        }
        goto LAB_14169d695;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18),0xffffffff,0)
  ;
LAB_14169d695:
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 14169d6b0 FUN_14169d6b0 body=90 status=ok
// SIG undefined FUN_14169d6b0(void)

undefined8 FUN_14169d6b0(longlong *param_1,undefined8 param_2)

{
  DWORD DVar1;
  undefined8 *puVar2;
  LPCWSTR lpFileName;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,local_18,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*puVar2;
  }
  DVar1 = GetFileAttributesW(lpFileName);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14169d710 FUN_14169d710 body=243 status=ok
// SIG undefined FUN_14169d710(void)

ulonglong FUN_14169d710(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  BOOL BVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  LPCWSTR lpReplacementFileName;
  LPCWSTR lpReplacedFileName;
  longlong local_28 [2];
  longlong local_18 [2];
  
  cVar1 = (**(code **)(*param_1 + 0x68))();
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014169d74d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3);
    return uVar3;
  }
  (**(code **)(*param_1 + 0x90))(param_1,param_2,0);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,local_18,param_3);
  lpReplacedFileName = L"";
  if (*(int *)(puVar4 + 1) == 0) {
    lpReplacementFileName = L"";
  }
  else {
    lpReplacementFileName = (LPCWSTR)*puVar4;
  }
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,local_28,param_2);
  if (*(int *)(puVar4 + 1) != 0) {
    lpReplacedFileName = (LPCWSTR)*puVar4;
  }
  BVar2 = ReplaceFileW(lpReplacedFileName,lpReplacementFileName,(LPCWSTR)0x0,6,(LPVOID)0x0,
                       (LPVOID)0x0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return (ulonglong)(BVar2 != 0);
}



// FUNCTION 14169d810 FUN_14169d810 body=166 status=ok
// SIG undefined FUN_14169d810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14169d810(longlong *param_1,undefined8 param_2)

{
  BOOL BVar1;
  undefined8 *puVar2;
  LPCWSTR lpFileName;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  byte local_38 [28];
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,&local_48,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*puVar2;
  }
  BVar1 = GetFileAttributesExW(lpFileName,GetFileExInfoStandard,local_38);
  if (CONCAT44(uStack_44,local_48) != 0) {
    FMemory::Free();
  }
  if ((BVar1 != 0) && ((local_38[0] & 0x10) == 0)) {
    return CONCAT44(local_1c,local_18);
  }
  return 0xffffffffffffffff;
}



// FUNCTION 14169d8c0 FUN_14169d8c0 body=221 status=ok
// SIG undefined FUN_14169d8c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14169d8c0(longlong *param_1,undefined8 *param_2)

{
  BOOL BVar1;
  undefined8 *puVar2;
  LPCWSTR lpFileName;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_60;
  uint local_58;
  undefined4 local_50;
  _SYSTEMTIME local_48;
  undefined1 local_38 [12];
  FILETIME local_2c [3];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,&local_48);
  if (*(int *)(puVar2 + 1) == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*puVar2;
  }
  BVar1 = GetFileAttributesExW(lpFileName,GetFileExInfoStandard,local_38);
  if (CONCAT26(local_48.wDay,CONCAT24(local_48.wDayOfWeek,CONCAT22(local_48.wMonth,local_48.wYear)))
      != 0) {
    FMemory::Free();
  }
  if ((BVar1 != 0) && (BVar1 = FileTimeToSystemTime(local_2c,&local_48), BVar1 != 0)) {
    local_50 = 0;
    local_58 = (uint)local_48.wSecond;
    local_60 = (uint)local_48.wMinute;
    local_68 = (uint)local_48.wHour;
    FDateTime::FDateTime(param_2,local_48.wYear,local_48.wMonth,local_48.wDay);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14169d9a0 FUN_14169d9a0 body=112 status=ok
// SIG undefined FUN_14169d9a0(void)

undefined8 * FUN_14169d9a0(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  
  *param_1 = 0;
  uVar1 = DAT_1469e45a0;
  _Src = DAT_1469e4598;
  iVar2 = (int)DAT_1469e45a0;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar1 & 0xffffffff,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar2 * 2);
  return param_1;
}



// FUNCTION 14169da10 FUN_14169da10 body=112 status=ok
// SIG undefined FUN_14169da10(void)

undefined8 * FUN_14169da10(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  
  *param_1 = 0;
  uVar1 = DAT_1469e4590;
  _Src = DAT_1469e4588;
  iVar2 = (int)DAT_1469e4590;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar1 & 0xffffffff,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar2 * 2);
  return param_1;
}



// FUNCTION 14169da80 FUN_14169da80 body=7 status=ok
// SIG undefined FUN_14169da80(void)

undefined4 FUN_14169da80(void)

{
  return DAT_1469e45b0;
}



// FUNCTION 14169da90 GetComparisonNameEntry body=62 status=ok
// SIG undefined GetComparisonNameEntry(void)

undefined8 FName::GetComparisonNameEntry(int *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = GetNames();
  uVar3 = *param_1 >> 0x1f & 0x3fff;
  uVar1 = *param_1 + uVar3;
  return *(undefined8 *)
          (*(longlong *)(lVar2 + (longlong)((int)uVar1 >> 0xe) * 8) +
          (longlong)(int)((uVar1 & 0x3fff) - uVar3) * 8);
}



// FUNCTION 14169dad0 FUN_14169dad0 body=320 status=ok
// SIG undefined FUN_14169dad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14169dad0(void)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  _SYSTEM_INFO local_88;
  _MEMORYSTATUSEX local_58;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (DAT_1464b01b0 == 0) {
    local_58.ullTotalPhys = 0;
    local_58.ullAvailPhys = 0;
    local_58.ullTotalPageFile = 0;
    local_58.ullAvailPageFile = 0;
    local_58.ullTotalVirtual = 0;
    local_58.ullAvailVirtual = 0;
    local_58.ullAvailExtendedVirtual = 0;
    local_58.dwLength = 0x40;
    local_58.dwMemoryLoad = 0;
    GlobalMemoryStatusEx(&local_58);
    local_88.u = (_union_552)0x0;
    local_88.dwPageSize = 0;
    local_88.lpMinimumApplicationAddress = (LPVOID)0x0;
    local_88.lpMaximumApplicationAddress = (LPVOID)0x0;
    local_88.dwActiveProcessorMask = 0;
    local_88.dwNumberOfProcessors = 0;
    local_88.dwProcessorType = 0;
    local_88.dwAllocationGranularity = 0;
    local_88.wProcessorLevel = 0;
    local_88.wProcessorRevision = 0;
    GetSystemInfo(&local_88);
    lVar2 = 0x3f;
    if (local_58.ullTotalPhys != 0) {
      for (; local_58.ullTotalPhys >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    _DAT_1464b01b8 = local_58.ullTotalPageFile;
    _DAT_1464b01c8 = local_88._40_8_ & 0xffffffff;
    _DAT_1464b01c0 = (ulonglong)local_88._0_8_ >> 0x20;
    DAT_1464b01b0 = local_58.ullTotalPhys;
    if (local_58.ullTotalPhys == 0) {
      uVar4 = 0x40;
    }
    else {
      uVar4 = (ulonglong)(0x3f - (int)lVar2);
    }
    uVar1 = local_58.ullTotalPhys - 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '?' - (char)lVar2;
    }
    _DAT_1464b01e0 = 1L << (~(byte)((longlong)(uVar4 << 0x39) >> 0x3f) & 0x40U - cVar3 & 0x3f);
    _DAT_1464b01e8 = (undefined4)(local_58.ullTotalPhys + 0x3fffffff >> 0x1e);
    _DAT_1464b01d0 = _DAT_1464b01c8;
  }
  return &DAT_1464b01b0;
}



// FUNCTION 14169dc10 GetConvertibleLaptopMode body=51 status=ok
// SIG undefined GetConvertibleLaptopMode(void)

int FWindowsPlatformMisc::GetConvertibleLaptopMode(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = VerifyWindowsVersion(6);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = GetSystemMetrics(0x2003);
  return 2 - (uint)(iVar2 != 0);
}



// FUNCTION 14169dc50 GetCriticalSection body=101 status=ok
// SIG undefined GetCriticalSection(void)

LPCRITICAL_SECTION FName::GetCriticalSection(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_1469e45f0 == (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)operator_new(0x28);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      InitializeCriticalSection(lpCriticalSection);
      SetCriticalSectionSpinCount(lpCriticalSection,4000);
      DAT_1469e45f0 = lpCriticalSection;
      return lpCriticalSection;
    }
    DAT_1469e45f0 = (LPCRITICAL_SECTION)0x0;
  }
  return DAT_1469e45f0;
}



// FUNCTION 14169dcc0 GetDefaultLanguage body=503 status=ok
// SIG undefined GetDefaultLanguage(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014169dd7b) */

undefined8 * FWindowsPlatformMisc::GetDefaultLanguage(undefined8 *param_1)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  PZZWSTR pwszLanguagesBuffer;
  undefined1 auStack_118 [32];
  ULONG local_f8 [2];
  PZZWSTR local_f0;
  ulonglong local_e8;
  WCHAR local_d8 [88];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar1 = VerifyWindowsVersion(6);
  if (cVar1 != '\0') {
    local_f8[1] = 0;
    local_f8[0] = 0;
    BVar2 = GetUserPreferredUILanguages(8,local_f8 + 1,(PZZWSTR)0x0,local_f8);
    if (BVar2 != 0) {
      lVar4 = (longlong)(int)local_f8[0];
      local_f0 = (PZZWSTR)0x0;
      local_e8 = 0;
      if ((int)local_f8[0] < 1) {
        pwszLanguagesBuffer = (PZZWSTR)0x0;
        if (((int)local_f8[0] < 0) && (pwszLanguagesBuffer = local_f0, local_f8[0] != 0)) {
          local_e8 = (ulonglong)local_f8[0];
          TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_f0);
          pwszLanguagesBuffer = local_f0;
        }
      }
      else {
        local_e8 = (ulonglong)local_f8[0];
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0);
        pwszLanguagesBuffer = local_f0;
        ::_guard_xfg_dispatch_icall_nop(local_f0,0,lVar4 * 2);
      }
      BVar2 = GetUserPreferredUILanguages(8,local_f8 + 1,pwszLanguagesBuffer,local_f8);
      if (BVar2 != 0) {
        *param_1 = 0;
        param_1[1] = 0;
        if (pwszLanguagesBuffer == (PZZWSTR)0x0) {
          return param_1;
        }
        if (*pwszLanguagesBuffer != L'\0') {
          lVar4 = -1;
          do {
            lVar4 = lVar4 + 1;
          } while (pwszLanguagesBuffer[lVar4] != L'\0');
          iVar3 = (int)lVar4 + 1;
          *(int *)(param_1 + 1) = iVar3;
          if (0 < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
          }
          FGenericPlatformString::Memcpy(*param_1,pwszLanguagesBuffer,(longlong)iVar3 * 2);
        }
        FMemory::Free(pwszLanguagesBuffer);
        return param_1;
      }
      if (pwszLanguagesBuffer != (PZZWSTR)0x0) {
        FMemory::Free(pwszLanguagesBuffer);
      }
    }
  }
  iVar3 = GetUserDefaultLocaleName(local_d8,0x55);
  if (iVar3 == 0) {
    FGenericPlatformMisc::GetDefaultLocale(param_1);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    if (local_d8[0] != L'\0') {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (local_d8[lVar4] != L'\0');
      iVar3 = (int)lVar4 + 1;
      *(int *)(param_1 + 1) = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,local_d8,(longlong)iVar3 * 2);
    }
  }
  return param_1;
}



// FUNCTION 14169dec0 GetDefaultLocale body=180 status=ok
// SIG undefined GetDefaultLocale(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FWindowsPlatformMisc::GetDefaultLocale(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  WCHAR local_c8 [88];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar1 = GetUserDefaultLocaleName(local_c8,0x55);
  if (iVar1 == 0) {
    FGenericPlatformMisc::GetDefaultLocale(param_1);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    if (local_c8[0] != L'\0') {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (local_c8[lVar2] != L'\0');
      iVar1 = (int)lVar2 + 1;
      *(int *)(param_1 + 1) = iVar1;
      if (0 < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,local_c8,(longlong)iVar1 * 2);
    }
  }
  return param_1;
}



// FUNCTION 14169df80 GetDefaultPathSeparator body=8 status=ok
// SIG undefined GetDefaultPathSeparator(void)

undefined * FWindowsPlatformMisc::GetDefaultPathSeparator(void)

{
  return &DAT_144cd6314;
}



// FUNCTION 14169df90 GetEnvironmentVariable body=28 status=ok
// SIG undefined GetEnvironmentVariable(void)

void FWindowsPlatformMisc::GetEnvironmentVariable(LPCWSTR param_1,LPWSTR param_2,DWORD param_3)

{
  DWORD DVar1;
  
  DVar1 = GetEnvironmentVariableW(param_1,param_2,param_3);
  if (DVar1 == 0) {
    *param_2 = L'\0';
  }
  return;
}



// FUNCTION 14169dfb0 FUN_14169dfb0 body=26 status=ok
// SIG undefined FUN_14169dfb0(void)

undefined2 * FUN_14169dfb0(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x20) != 0) {
    return *(undefined2 **)(*(longlong *)(param_1 + 0x80) + 0x18);
  }
  return &DAT_143f3eda8;
}



// FUNCTION 14169dfd0 FUN_14169dfd0 body=410 status=ok
// SIG undefined FUN_14169dfd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14169dfd0(longlong *param_1,undefined8 *param_2,LPCWSTR param_3)

{
  WCHAR WVar1;
  DWORD DVar2;
  int iVar3;
  undefined1 *hFile;
  WCHAR *pWVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStackY_288 [32];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStackY_288;
  uVar7 = 0;
  hFile = CreateFileW(param_3,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == &DAT_ffffffffffffffff) {
    (**(code **)(*param_1 + 0x188))(param_1,param_2,param_3);
    return param_2;
  }
  DVar2 = GetFinalPathNameByHandleW(hFile,local_248,0x104,0);
  if ((ulonglong)((longlong)(int)DVar2 * 2) < 0x20a) {
    local_248[(int)DVar2] = L'\0';
    CloseHandle(hFile);
    iVar3 = wcsncmp(local_248,L"\\\\?\\",4);
    uVar5 = uVar7;
    if (iVar3 == 0) {
      uVar5 = 4;
    }
    WVar1 = local_248[uVar5];
    if (WVar1 != L'\0') {
      pWVar4 = local_248;
      do {
        uVar5 = uVar5 + 1;
        if (WVar1 == L'\\') {
          WVar1 = L'/';
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
        *pWVar4 = WVar1;
        WVar1 = local_248[uVar5];
        pWVar4 = pWVar4 + 1;
      } while (WVar1 != L'\0');
    }
    if ((ulonglong)((longlong)(int)uVar7 * 2) < 0x20a) {
      local_248[(int)uVar7] = L'\0';
      *param_2 = 0;
      param_2[1] = 0;
      if (local_248[0] == L'\0') {
        return param_2;
      }
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (local_248[lVar6] != L'\0');
      iVar3 = (int)lVar6 + 1;
      *(int *)(param_2 + 1) = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      }
      FGenericPlatformString::Memcpy(*param_2,local_248,(longlong)iVar3 * 2);
      return param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}



// FUNCTION 14169e170 FUN_14169e170 body=5818 status=ok
// SIG undefined FUN_14169e170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_14169e170(undefined4 *param_1,undefined8 *param_2)

{
  wchar_t wVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  BOOL BVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  int iVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  undefined4 *puVar19;
  int iVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  undefined4 uVar23;
  wchar_t *pwVar24;
  longlong lVar25;
  wchar_t *pwVar26;
  bool bVar27;
  undefined1 auStack_538 [32];
  wchar_t *local_518;
  uint local_510;
  uint local_50c;
  wchar_t *local_508;
  undefined8 local_500;
  int local_4f8;
  wchar_t *local_4f0;
  undefined8 local_4e8;
  undefined4 local_4d8 [2];
  wchar_t *local_4d0;
  undefined8 local_4c8;
  longlong local_4c0;
  undefined8 local_4b8;
  wchar_t *local_4b0;
  undefined8 local_4a8;
  wchar_t *local_4a0;
  undefined8 local_498;
  wchar_t *local_490;
  undefined8 local_488;
  wchar_t *local_478;
  undefined8 local_470;
  wchar_t *local_468;
  int local_460;
  int local_45c;
  wchar_t *local_458;
  int local_450;
  undefined4 local_44c;
  undefined4 local_448 [2];
  undefined2 *local_440;
  undefined8 local_438;
  longlong local_430 [9];
  DWORD local_3e8;
  int local_3e4;
  wchar_t *local_3e0;
  ulonglong local_3d8;
  wchar_t *local_3d0;
  wchar_t *local_3c8;
  ulonglong local_3c0;
  undefined8 *local_3b8;
  undefined4 *local_3b0;
  wchar_t *local_3a8;
  int local_3a0;
  undefined4 local_39c;
  _DISPLAY_DEVICEW local_398;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  pwVar22 = (wchar_t *)0x0;
  uVar9 = 0;
  local_4d8[0] = 0;
  local_4d0 = (wchar_t *)0x0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_4b0 = (wchar_t *)0x0;
  local_4a8 = 0;
  local_4a0 = (wchar_t *)0x0;
  local_498 = 0;
  local_490 = (wchar_t *)0x0;
  local_488 = 0;
  local_3b8 = param_2;
  local_3b0 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4b0,8);
  iVar7 = (int)local_4a8 + 8;
  local_4a8 = CONCAT44(local_4a8._4_4_,iVar7);
  if ((int)local_4a8._4_4_ < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b0);
  }
  builtin_wcsncpy(local_4b0,L"Unknown",8);
  if (local_4a0 != L"Unknown") {
    bVar27 = local_498._4_4_ != 8;
    local_498 = (ulonglong)local_498._4_4_ << 0x20;
    pwVar21 = pwVar22;
    if (bVar27) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4a0,8);
      pwVar21 = (wchar_t *)(local_498 & 0xffffffff);
    }
    iVar7 = (int)pwVar21 + 8;
    local_498 = CONCAT44(local_498._4_4_,iVar7);
    if ((int)local_498._4_4_ < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a0);
    }
    builtin_wcsncpy(local_4a0,L"Unknown",8);
  }
  if (local_490 != L"Unknown") {
    bVar27 = local_488._4_4_ != 8;
    local_488 = (ulonglong)local_488._4_4_ << 0x20;
    pwVar21 = pwVar22;
    if (bVar27) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_490,8);
      pwVar21 = (wchar_t *)(local_488 & 0xffffffff);
    }
    iVar7 = (int)pwVar21 + 8;
    local_488 = CONCAT44(local_488._4_4_,iVar7);
    if ((int)local_488._4_4_ < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_490);
    }
    builtin_wcsncpy(local_490,L"Unknown",8);
  }
  local_518 = (wchar_t *)0x0;
  local_50c = 0;
  local_4f8 = *DAT_1469e4578;
  local_3e4 = 0;
  if (local_4f8 - 3U < 2) {
    local_3e8 = 0;
    pwVar16 = pwVar22;
    pwVar26 = pwVar22;
    pwVar21 = pwVar22;
LAB_14169ee60:
    iVar7 = (int)pwVar26;
    _guard_xfg_dispatch_icall_nop(local_398.DeviceName,0,0x344);
    local_398.cb = 0x348;
    BVar11 = EnumDisplayDevicesW((LPCWSTR)0x0,(DWORD)pwVar22,&local_398,1);
    uVar9 = (uint)pwVar16;
    if (BVar11 != 0) {
      if ((local_4f8 != 3) || (((byte)local_398.StateFlags & 4) != 0)) {
        pwVar22 = (wchar_t *)0x0;
        iVar8 = 0;
        local_3d0 = (wchar_t *)0x0;
        local_468 = (wchar_t *)0x0;
        local_45c = 0;
        if (local_398.DeviceKey[0] != L'\0') {
          lVar25 = -1;
          do {
            lVar17 = lVar25 + 1;
            lVar25 = lVar25 + 1;
          } while (local_398.DeviceKey[lVar17] != L'\0');
          local_460 = (int)lVar25 + 1;
          lVar25 = (longlong)local_460;
          if (0 < local_460) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_468,0);
            local_3d0 = local_468;
          }
          pwVar22 = local_3d0;
          iVar8 = local_460;
          local_468 = local_3d0;
          FGenericPlatformString::Memcpy(local_3d0,local_398.DeviceKey,lVar25 * 2);
          if (iVar8 != 0) {
            iVar20 = iVar8 + -1;
            pwVar21 = pwVar22;
            goto LAB_14169ef9b;
          }
        }
        pwVar21 = L"";
        iVar20 = 0;
LAB_14169ef9b:
        pwVar16 = (wchar_t *)0x0;
        local_3a8 = (wchar_t *)0x0;
        local_39c = 0;
        if (0x12 < iVar20) {
          iVar20 = 0x12;
        }
        pwVar18 = (wchar_t *)(ulonglong)(iVar20 + 1);
        if (iVar20 == 0) {
          pwVar18 = pwVar16;
        }
        iVar10 = (int)pwVar18;
        local_3a0 = iVar10;
        if ((0 < iVar10) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8), iVar10 = local_3a0,
           pwVar16 = local_3a8, 0 < local_3a0)) {
          wcsncpy(local_3a8,pwVar21,(longlong)iVar20);
          pwVar16[iVar20] = L'\0';
        }
        pwVar18 = L"\\Registry\\Machine\\";
        pwVar21 = L"";
        if (iVar10 != 0) {
          pwVar21 = pwVar16;
        }
        do {
          wVar1 = *(wchar_t *)((longlong)pwVar18 + (longlong)(pwVar21 + -0xa266b9f8));
          if ((wVar1 == L'\0') && (*pwVar18 == L'\0')) {
            iVar20 = 0;
            goto LAB_14169f064;
          }
          if (wVar1 != *pwVar18) {
            wVar5 = towlower(wVar1);
            wVar6 = towlower(*pwVar18);
            if (wVar5 != wVar6) goto LAB_14169f059;
          }
          pwVar18 = pwVar18 + 1;
        } while( true );
      }
      local_510 = (0x14 - (uint)(iVar7 != 0)) + iVar7;
      if ((int)(uint)pwVar16 < (int)local_510) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518);
        pwVar21 = local_518;
      }
      pwVar26 = (wchar_t *)(ulonglong)local_510;
      builtin_wcsncpy(pwVar21 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),L"JumpOverNonPrimary ",
                      0x14);
      local_3e8 = (DWORD)pwVar22;
      goto LAB_14169f6be;
    }
    goto LAB_14169f6db;
  }
  pwVar16 = pwVar22;
  pwVar21 = local_518;
  pwVar26 = pwVar22;
  if (local_4f8 == 0) {
    do {
      FString::PrintfImpl(&local_458,
                          L"SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\%04d"
                          ,pwVar16);
      local_448[0] = 0;
      local_440 = (undefined2 *)0x0;
      local_438 = 0;
      local_430[0] = 0;
      local_430[1] = 0;
      local_430[2] = 0;
      local_430[3] = 0;
      local_430[4] = 0;
      local_430[5] = 0;
      local_430[6] = 0;
      local_430[7] = 0;
      FUN_1416a1820(&local_458,local_448);
      cVar4 = FGPUDriverInfo::IsValid(local_448);
      if (cVar4 == '\0') {
        local_510 = 0x1e;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,0);
        pwVar21 = local_518;
        builtin_wcsncpy(local_518,L"GetVideoDriverDetailsInvalid ",0x1e);
        if (local_430[6] != 0) {
          FMemory::Free();
        }
        if (local_430[4] != 0) {
          FMemory::Free();
        }
        if (local_430[2] != 0) {
          FMemory::Free();
        }
        if (local_430[0] != 0) {
          FMemory::Free();
        }
        if (local_440 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_458 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        pwVar26 = (wchar_t *)(ulonglong)local_510;
        uVar9 = local_50c;
        break;
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*param_2;
      }
      puVar12 = &DAT_143f3eda8;
      if ((int)local_438 != 0) {
        puVar12 = local_440;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
      if (iVar7 == 0) {
        local_4d8[0] = local_448[0];
        FString::operator=(&local_4d0,&local_440);
        FString::operator=(&local_4c0,local_430);
        FString::operator=(&local_4b0,local_430 + 2);
        FString::operator=(&local_4a0,local_430 + 4);
        FString::operator=(&local_490,local_430 + 6);
        if (local_430[6] != 0) {
          FMemory::Free();
        }
        if (local_430[4] != 0) {
          FMemory::Free();
        }
        if (local_430[2] != 0) {
          FMemory::Free();
        }
        if (local_430[0] != 0) {
          FMemory::Free();
        }
        pwVar21 = local_458;
        if (local_440 != (undefined2 *)0x0) {
          FMemory::Free();
          pwVar21 = local_458;
        }
        goto LAB_14169edcb;
      }
      if (local_430[6] != 0) {
        FMemory::Free();
      }
      if (local_430[4] != 0) {
        FMemory::Free();
      }
      if (local_430[2] != 0) {
        FMemory::Free();
      }
      if (local_430[0] != 0) {
        FMemory::Free();
      }
      if (local_440 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_458 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      uVar14 = (int)pwVar16 + 1;
      pwVar16 = (wchar_t *)(ulonglong)uVar14;
      pwVar21 = local_518;
    } while (uVar14 < 0x100);
  }
  iVar7 = local_4f8;
  if (local_4b0 != L"Unknown") {
    bVar27 = local_4a8._4_4_ != 8;
    local_4a8 = (ulonglong)local_4a8._4_4_ << 0x20;
    pwVar16 = pwVar22;
    if (bVar27) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4b0,8);
      pwVar16 = (wchar_t *)(local_4a8 & 0xffffffff);
    }
    iVar8 = (int)pwVar16 + 8;
    local_4a8 = CONCAT44(local_4a8._4_4_,iVar8);
    if ((int)local_4a8._4_4_ < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b0);
    }
    builtin_wcsncpy(local_4b0,L"Unknown",8);
  }
  if (local_4a0 != L"Unknown") {
    bVar27 = local_498._4_4_ != 8;
    local_498 = (ulonglong)local_498._4_4_ << 0x20;
    pwVar16 = pwVar22;
    if (bVar27) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4a0,8);
      pwVar16 = (wchar_t *)(local_498 & 0xffffffff);
    }
    iVar8 = (int)pwVar16 + 8;
    local_498 = CONCAT44(local_498._4_4_,iVar8);
    if ((int)local_498._4_4_ < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a0);
    }
    builtin_wcsncpy(local_4a0,L"Unknown",8);
  }
  if (local_490 != L"Unknown") {
    bVar27 = local_488._4_4_ != 8;
    local_488 = (ulonglong)local_488._4_4_ << 0x20;
    if (bVar27) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_490,8);
      pwVar22 = (wchar_t *)(local_488 & 0xffffffff);
    }
    iVar8 = (int)pwVar22 + 8;
    local_488 = CONCAT44(local_488._4_4_,iVar8);
    if ((int)local_488._4_4_ < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_490);
    }
    builtin_wcsncpy(local_490,L"Unknown",8);
  }
  if (iVar7 == 0) {
    FString::PrintfImpl(&local_458,L"FoundDriverCount:%d FallbackToPrimary ",0);
    pwVar22 = local_458;
    if (local_450 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = local_450 + -1;
    }
    if (iVar7 != 0) {
      iVar8 = (int)pwVar26;
      local_510 = iVar7 + (uint)(iVar8 == 0) + iVar8;
      if ((int)uVar9 < (int)local_510) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,pwVar26);
        pwVar21 = local_518;
        uVar9 = local_50c;
      }
      pwVar26 = (wchar_t *)(ulonglong)local_510;
      _guard_xfg_dispatch_icall_nop
                (pwVar21 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)),pwVar22,(longlong)iVar7 * 2);
      (pwVar21 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)))[iVar7] = L'\0';
    }
    if (local_458 != (wchar_t *)0x0) {
      FMemory::Free(local_458);
    }
  }
  pwVar22 = (wchar_t *)0x0;
  local_478 = (wchar_t *)0x0;
  local_470 = 0;
  cVar4 = FUN_1416a6530(0xffffffff80000002,L"HARDWARE\\DEVICEMAP\\VIDEO",L"\\Device\\Video0");
  iVar7 = (int)pwVar26;
  if (cVar4 != '\0') {
    iVar8 = 0;
    if ((int)local_470 == 0) {
      pwVar21 = L"";
    }
    else {
      iVar8 = (int)local_470 + -1;
      pwVar21 = local_478;
    }
    local_468 = (wchar_t *)0x0;
    local_45c = 0;
    if (0x12 < iVar8) {
      iVar8 = 0x12;
    }
    iVar20 = iVar8 + 1;
    if (iVar8 == 0) {
      iVar20 = 0;
    }
    local_460 = iVar20;
    if ((0 < iVar20) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_468,0), iVar20 = local_460,
       pwVar22 = local_468, 0 < local_460)) {
      wcsncpy(local_468,pwVar21,(longlong)iVar8);
      pwVar22[iVar8] = L'\0';
    }
    pwVar16 = L"\\Registry\\Machine\\";
    pwVar21 = L"";
    if (iVar20 != 0) {
      pwVar21 = pwVar22;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(pwVar21 + -0xa266bb84) + (longlong)pwVar16);
      if ((wVar1 == L'\0') && (*pwVar16 == L'\0')) {
        iVar8 = 0;
        goto LAB_14169e7b1;
      }
      if (wVar1 != *pwVar16) {
        wVar5 = towlower(wVar1);
        wVar6 = towlower(*pwVar16);
        if (wVar5 != wVar6) goto LAB_14169e7a9;
      }
      pwVar16 = pwVar16 + 1;
    } while( true );
  }
  local_510 = (0x17 - (uint)(iVar7 != 0)) + iVar7;
  if ((int)uVar9 < (int)local_510) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,pwVar26);
  }
  builtin_wcsncpy(local_518 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),L"QueryForPrimaryFailed ",
                  0x17);
  pwVar21 = local_478;
  pwVar22 = local_518;
  goto LAB_14169edcb;
LAB_14169f059:
  iVar20 = (uint)wVar5 - (uint)wVar6;
LAB_14169f064:
  pwVar21 = (wchar_t *)0x0;
  if (pwVar16 != (wchar_t *)0x0) {
    FMemory::Free(pwVar16);
  }
  if (iVar20 == 0) {
    iVar20 = 0;
    if (iVar8 == 0) {
      pwVar22 = L"";
      iVar8 = iVar20;
    }
    else {
      iVar8 = iVar8 + -1;
    }
    iVar10 = iVar8 + -0x12;
    if ((-1 < iVar10) && (iVar20 = iVar8, iVar10 < iVar8)) {
      iVar20 = iVar10;
    }
    local_3c8 = (wchar_t *)0x0;
    local_3c0 = local_3c0 & 0xffffffff;
    pwVar22 = pwVar22 + ((longlong)iVar8 - (longlong)iVar20);
    pwVar18 = pwVar21;
    pwVar24 = pwVar21;
    pwVar16 = pwVar21;
    if ((pwVar22 != (wchar_t *)0x0) &&
       (pwVar18 = (wchar_t *)0x0, pwVar24 = (wchar_t *)0x0, *pwVar22 != L'\0')) {
      lVar25 = -1;
      do {
        lVar17 = lVar25 + 1;
        lVar25 = lVar25 + 1;
      } while (pwVar22[lVar17] != L'\0');
      uVar14 = (int)lVar25 + 1;
      local_3c0 = (ulonglong)uVar14;
      uVar9 = uVar14;
      if (0 < (int)uVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
        pwVar21 = (wchar_t *)(local_3c0 >> 0x20);
        uVar9 = (uint)local_3c0;
      }
      pwVar16 = local_3c8;
      pwVar18 = (wchar_t *)(ulonglong)uVar9;
      FGenericPlatformString::Memcpy(local_3c8,pwVar22,(longlong)(int)uVar14 * 2);
      pwVar24 = pwVar21;
    }
    iVar8 = (int)pwVar18;
    iVar10 = (int)pwVar24;
    local_508 = (wchar_t *)0x0;
    local_500 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_508,0);
    pwVar22 = local_508;
    FGenericPlatformString::Memcpy(local_508);
    iVar20 = (int)local_500;
    if ((int)local_500 < 2) {
      local_3c0 = 0;
      pwVar18 = (wchar_t *)0x0;
      pwVar21 = pwVar16;
    }
    else {
      iVar15 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar15 = 0;
      }
      if (((int)local_500 != 0) || (iVar8 = 1, iVar15 == 0)) {
        iVar8 = 0;
      }
      iVar2 = local_500._4_4_;
      iVar10 = iVar15 + (int)local_500;
      local_4f0 = pwVar22;
      local_478 = (wchar_t *)0x0;
      local_4e8._0_4_ = (int)local_500;
      local_4e8._4_4_ = local_500._4_4_;
      local_500 = 0;
      if (iVar2 < iVar10 + iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4f0);
        iVar20 = (int)local_4e8;
      }
      pwVar22 = (wchar_t *)0x0;
      pwVar21 = local_4f0;
      iVar10 = local_4e8._4_4_;
      iVar8 = iVar20;
      if (iVar15 != 0) {
        local_4e8._0_4_ = (uint)(iVar20 == 0) + iVar20 + iVar15;
        if (local_4e8._4_4_ < (int)local_4e8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4f0,iVar20);
        }
        iVar10 = local_4e8._4_4_;
        iVar8 = (int)local_4e8;
        pwVar21 = local_4f0;
        pwVar22 = local_4f0 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar22,pwVar16,(longlong)iVar15 * 2);
        pwVar22[iVar15] = L'\0';
        pwVar22 = local_478;
      }
      local_4f0 = (wchar_t *)0x0;
      local_4e8 = 0;
      pwVar18 = pwVar16;
    }
    if (local_3d0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_45c = iVar10;
    local_3d0 = pwVar21;
    if (pwVar22 != (wchar_t *)0x0) {
      FMemory::Free(pwVar22);
    }
    pwVar22 = local_3d0;
    if (pwVar18 != (wchar_t *)0x0) {
      FMemory::Free(pwVar18);
      pwVar22 = local_3d0;
    }
  }
  if (iVar8 == 0) {
    pwVar21 = L"";
    iVar20 = 0;
  }
  else {
    iVar20 = iVar8 + -1;
    pwVar21 = pwVar22;
  }
  if (0x14 < iVar20) {
    iVar20 = 0x14;
  }
  local_458 = (wchar_t *)0x0;
  pwVar16 = (wchar_t *)0x0;
  local_44c = 0;
  iVar10 = iVar20 + 1;
  if (iVar20 == 0) {
    iVar10 = 0;
  }
  local_450 = iVar10;
  if ((0 < iVar10) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_458), iVar10 = local_450,
     pwVar16 = local_458, 0 < local_450)) {
    wcsncpy(local_458,pwVar21,(longlong)iVar20);
    pwVar16[iVar20] = L'\0';
  }
  pwVar18 = L"\\HKEY_LOCAL_MACHINE\\";
  pwVar21 = L"";
  if (iVar10 != 0) {
    pwVar21 = pwVar16;
  }
  do {
    wVar1 = *(wchar_t *)((longlong)pwVar18 + (longlong)(pwVar21 + -0xa266ba24));
    if ((wVar1 == L'\0') && (*pwVar18 == L'\0')) {
      iVar20 = 0;
      goto LAB_14169f344;
    }
    if (wVar1 != *pwVar18) {
      wVar5 = towlower(wVar1);
      wVar6 = towlower(*pwVar18);
      if (wVar5 != wVar6) break;
    }
    pwVar18 = pwVar18 + 1;
  } while( true );
  iVar20 = (uint)wVar5 - (uint)wVar6;
LAB_14169f344:
  if (pwVar16 != (wchar_t *)0x0) {
    FMemory::Free(pwVar16);
  }
  if (iVar20 != 0) {
    local_510 = (0x1d - (uint)(iVar7 != 0)) + iVar7;
    if ((int)local_50c < (int)local_510) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518);
    }
    pwVar26 = (wchar_t *)(ulonglong)local_510;
    builtin_wcsncpy(local_518 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),
                    L"PrimaryDriverLocationFailed ",0x1d);
    pwVar21 = local_518;
    goto LAB_14169f6a1;
  }
  iVar20 = 0;
  if (iVar8 == 0) {
    pwVar21 = L"";
    iVar8 = iVar20;
  }
  else {
    pwVar21 = pwVar22;
    iVar8 = iVar8 + -1;
  }
  iVar10 = iVar8 + -0x14;
  if ((-1 < iVar10) && (iVar20 = iVar8, iVar10 < iVar8)) {
    iVar20 = iVar10;
  }
  local_3d8 = 0;
  pwVar21 = pwVar21 + ((longlong)iVar8 - (longlong)iVar20);
  local_3e0 = (wchar_t *)0x0;
  if ((pwVar21 != (wchar_t *)0x0) && (*pwVar21 != L'\0')) {
    lVar25 = -1;
    do {
      lVar17 = lVar25 + 1;
      lVar25 = lVar25 + 1;
    } while (pwVar21[lVar17] != L'\0');
    uVar9 = (int)lVar25 + 1;
    local_3d8 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e0,0);
    }
    FGenericPlatformString::Memcpy(local_3e0,pwVar21,(longlong)(int)uVar9 * 2);
  }
  local_448[0] = 0;
  local_440 = (undefined2 *)0x0;
  local_438 = 0;
  local_430[0] = 0;
  local_430[1] = 0;
  local_430[2] = 0;
  local_430[3] = 0;
  local_430[4] = 0;
  local_430[5] = 0;
  local_430[6] = 0;
  local_430[7] = 0;
  FUN_1416a1820(&local_3e0);
  cVar4 = FGPUDriverInfo::IsValid(local_448);
  if (cVar4 == '\0') {
    local_510 = (0x1e - (uint)(iVar7 != 0)) + iVar7;
    if ((int)local_50c < (int)local_510) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518);
    }
    pwVar26 = (wchar_t *)(ulonglong)local_510;
    builtin_wcsncpy(local_518 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),
                    L"GetVideoDriverDetailsInvalid ",0x1e);
  }
  uVar9 = local_50c;
  pwVar21 = local_518;
  if (local_4f8 == 3) {
LAB_14169f573:
    iVar7 = local_3e4;
    if (local_3e4 == 0) {
      local_4d8[0] = local_448[0];
      FString::operator=(&local_4d0,&local_440);
      FString::operator=(&local_4c0,local_430);
      FString::operator=(&local_4b0,local_430 + 2);
      FString::operator=(&local_4a0,local_430 + 4);
      FString::operator=(&local_490);
    }
    local_3e4 = iVar7 + 1;
  }
  else {
    puVar13 = &DAT_143f3eda8;
    if ((int)local_438 != 0) {
      puVar13 = local_440;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13);
    if (iVar7 == 0) goto LAB_14169f573;
    iVar7 = (int)pwVar26;
    local_510 = (0x1f - (uint)(iVar7 != 0)) + iVar7;
    if ((int)uVar9 < (int)local_510) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518);
      pwVar21 = local_518;
    }
    pwVar26 = (wchar_t *)(ulonglong)local_510;
    builtin_wcsncpy(pwVar21 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),
                    L"PrimaryIsNotTheChoosenAdapter ",0x1f);
  }
  if (local_430[6] != 0) {
    FMemory::Free();
  }
  if (local_430[4] != 0) {
    FMemory::Free();
  }
  if (local_430[2] != 0) {
    FMemory::Free();
  }
  if (local_430[0] != 0) {
    FMemory::Free();
  }
  if (local_440 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_3e0 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_14169f6a1:
  if (pwVar22 != (wchar_t *)0x0) {
    FMemory::Free(pwVar22);
  }
LAB_14169f6be:
  iVar7 = (int)pwVar26;
  pwVar16 = (wchar_t *)(ulonglong)local_50c;
  local_3e8 = local_3e8 + 1;
  pwVar22 = (wchar_t *)(ulonglong)local_3e8;
  uVar9 = local_50c;
  if (0xff < local_3e8) goto LAB_14169f6db;
  goto LAB_14169ee60;
LAB_14169f6db:
  if (local_3e4 != 1) {
    FString::PrintfImpl(&local_458,L"FoundDriverCount:%d ");
    pwVar22 = local_458;
    if (local_450 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = local_450 + -1;
    }
    if (iVar8 != 0) {
      local_510 = (uint)(iVar7 == 0) + iVar7 + iVar8;
      if ((int)uVar9 < (int)local_510) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,iVar7);
        pwVar21 = local_518;
      }
      _guard_xfg_dispatch_icall_nop
                (pwVar21 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),pwVar22,(longlong)iVar8 * 2);
      (pwVar21 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)))[iVar8] = L'\0';
    }
    if (local_458 != (wchar_t *)0x0) {
      FMemory::Free(local_458);
    }
  }
  *local_3b0 = local_4d8[0];
  *(wchar_t **)(local_3b0 + 2) = local_4d0;
  local_3b0[4] = (undefined4)local_4c8;
  local_3b0[5] = local_4c8._4_4_;
  *(longlong *)(local_3b0 + 6) = local_4c0;
  local_3b0[8] = (undefined4)local_4b8;
  local_3b0[9] = local_4b8._4_4_;
  *(wchar_t **)(local_3b0 + 10) = local_4b0;
  local_3b0[0xc] = (int)local_4a8;
  local_3b0[0xd] = local_4a8._4_4_;
  *(wchar_t **)(local_3b0 + 0xe) = local_4a0;
  local_3b0[0x10] = (undefined4)local_498;
  local_3b0[0x11] = local_498._4_4_;
  *(wchar_t **)(local_3b0 + 0x12) = local_490;
  local_3b0[0x14] = (undefined4)local_488;
  local_3b0[0x15] = local_488._4_4_;
  puVar19 = local_3b0;
  if (pwVar21 == (wchar_t *)0x0) {
    return local_3b0;
  }
  goto LAB_14169f7f9;
LAB_14169e7a9:
  iVar8 = (uint)wVar5 - (uint)wVar6;
LAB_14169e7b1:
  if (pwVar22 != (wchar_t *)0x0) {
    FMemory::Free(pwVar22);
  }
  lVar25 = -1;
  if (iVar8 == 0) {
    if ((int)local_470 == 0) {
      pwVar22 = L"";
      uVar9 = 0;
    }
    else {
      uVar9 = (int)local_470 - 1;
      pwVar22 = local_478;
    }
    pwVar21 = (wchar_t *)0x0;
    uVar14 = uVar9 - 0x12;
    pwVar16 = pwVar21;
    if ((-1 < (int)uVar14) && (pwVar16 = (wchar_t *)(ulonglong)uVar9, (int)uVar14 < (int)uVar9)) {
      pwVar16 = (wchar_t *)(ulonglong)uVar14;
    }
    local_3e0 = (wchar_t *)0x0;
    local_3d8 = local_3d8 & 0xffffffff;
    pwVar22 = pwVar22 + ((longlong)(int)uVar9 - (longlong)(int)pwVar16);
    pwVar18 = pwVar21;
    pwVar24 = pwVar21;
    pwVar16 = pwVar21;
    if ((pwVar22 != (wchar_t *)0x0) &&
       (pwVar18 = (wchar_t *)0x0, pwVar24 = (wchar_t *)0x0, *pwVar22 != L'\0')) {
      lVar17 = -1;
      do {
        lVar17 = lVar17 + 1;
      } while (pwVar22[lVar17] != L'\0');
      uVar14 = (int)lVar17 + 1;
      local_3d8 = (ulonglong)uVar14;
      uVar9 = uVar14;
      if (0 < (int)uVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e0,0);
        pwVar21 = (wchar_t *)(local_3d8 >> 0x20);
        uVar9 = (uint)local_3d8;
      }
      pwVar16 = local_3e0;
      pwVar18 = (wchar_t *)(ulonglong)uVar9;
      FGenericPlatformString::Memcpy(local_3e0,pwVar22,(longlong)(int)uVar14 * 2);
      pwVar24 = pwVar21;
    }
    iVar8 = (int)pwVar18;
    local_508 = (wchar_t *)0x0;
    local_500 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_508,0);
    pwVar22 = local_508;
    FGenericPlatformString::Memcpy(local_508,L"\\HKEY_LOCAL_MACHINE\\",0x2a);
    if ((int)local_500 < 2) {
      pwVar21 = pwVar16;
      pwVar16 = (wchar_t *)0x0;
      uVar23 = (int)pwVar24;
    }
    else {
      iVar20 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar20 = 0;
      }
      if (((int)local_500 != 0) || (iVar8 = 1, iVar20 == 0)) {
        iVar8 = 0;
      }
      TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                (&local_4f0,&local_508,iVar20 + iVar8);
      uVar3 = local_4e8;
      pwVar21 = local_4f0;
      if (iVar20 != 0) {
        iVar8 = (int)local_4e8;
        lVar17 = (longlong)(int)local_4e8;
        iVar10 = (uint)((int)local_4e8 == 0) + iVar20 + (int)local_4e8;
        local_4e8 = CONCAT44(local_4e8._4_4_,iVar10);
        if (local_4e8._4_4_ < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4f0,uVar3 & 0xffffffff);
        }
        pwVar21 = local_4f0;
        pwVar22 = local_4f0 + (lVar17 - (ulonglong)(iVar8 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar22,pwVar16,(longlong)iVar20 * 2);
        pwVar22[iVar20] = L'\0';
      }
      pwVar22 = local_508;
      iVar8 = (int)local_4e8;
      uVar23 = local_4e8._4_4_;
    }
    if (local_478 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_470 = CONCAT44(uVar23,iVar8);
    local_478 = pwVar21;
    if (pwVar22 != (wchar_t *)0x0) {
      FMemory::Free(pwVar22);
    }
    if (pwVar16 != (wchar_t *)0x0) {
      FMemory::Free(pwVar16);
    }
  }
  if ((int)local_470 == 0) {
    pwVar22 = L"";
    iVar8 = 0;
  }
  else {
    iVar8 = (int)local_470 + -1;
    pwVar22 = local_478;
  }
  if (0x14 < iVar8) {
    iVar8 = 0x14;
  }
  pwVar21 = (wchar_t *)0x0;
  local_468 = (wchar_t *)0x0;
  local_45c = 0;
  iVar20 = iVar8 + 1;
  if (iVar8 == 0) {
    iVar20 = 0;
  }
  local_460 = iVar20;
  if ((0 < iVar20) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_468,0), iVar20 = local_460,
     pwVar21 = local_468, 0 < local_460)) {
    wcsncpy(local_468,pwVar22,(longlong)iVar8);
    pwVar21[iVar8] = L'\0';
  }
  pwVar16 = L"\\HKEY_LOCAL_MACHINE\\";
  pwVar22 = L"";
  if (iVar20 != 0) {
    pwVar22 = pwVar21;
  }
  do {
    wVar1 = *(wchar_t *)((longlong)pwVar16 + (longlong)(pwVar22 + -0xa266bbf0));
    if ((wVar1 == L'\0') && (*pwVar16 == L'\0')) {
      iVar8 = 0;
      goto LAB_14169ea51;
    }
    if (wVar1 != *pwVar16) {
      wVar5 = towlower(wVar1);
      wVar6 = towlower(*pwVar16);
      if (wVar5 != wVar6) break;
    }
    pwVar16 = pwVar16 + 1;
  } while( true );
  iVar8 = (uint)wVar5 - (uint)wVar6;
LAB_14169ea51:
  if (pwVar21 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (iVar8 == 0) {
    iVar8 = 0;
    if ((int)local_470 == 0) {
      pwVar22 = L"";
      iVar20 = iVar8;
    }
    else {
      pwVar22 = local_478;
      iVar20 = (int)local_470 + -1;
    }
    iVar10 = iVar20 + -0x14;
    if ((-1 < iVar10) && (iVar8 = iVar20, iVar10 < iVar20)) {
      iVar8 = iVar10;
    }
    local_500 = 0;
    pwVar22 = pwVar22 + ((longlong)iVar20 - (longlong)iVar8);
    local_508 = (wchar_t *)0x0;
    if ((pwVar22 != (wchar_t *)0x0) && (*pwVar22 != L'\0')) {
      do {
        lVar25 = lVar25 + 1;
      } while (pwVar22[lVar25] != L'\0');
      uVar9 = (int)lVar25 + 1;
      local_500 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_508,0);
      }
      FGenericPlatformString::Memcpy(local_508,pwVar22,(longlong)(int)uVar9 * 2);
    }
    local_448[0] = 0;
    local_440 = (undefined2 *)0x0;
    local_438 = 0;
    local_430[0] = 0;
    local_430[1] = 0;
    local_430[2] = 0;
    local_430[3] = 0;
    local_430[4] = 0;
    local_430[5] = 0;
    local_430[6] = 0;
    local_430[7] = 0;
    FUN_1416a1820(&local_508,local_448);
    cVar4 = FGPUDriverInfo::IsValid(local_448);
    if (cVar4 == '\0') {
      local_510 = (0x1e - (uint)(iVar7 != 0)) + iVar7;
      if ((int)local_50c < (int)local_510) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,pwVar26);
      }
      pwVar26 = (wchar_t *)(ulonglong)local_510;
      builtin_wcsncpy(local_518 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),
                      L"GetVideoDriverDetailsInvalid ",0x1e);
    }
    uVar9 = local_50c;
    pwVar22 = local_518;
    if (*(int *)(local_3b8 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*local_3b8;
    }
    puVar12 = &DAT_143f3eda8;
    if ((int)local_438 != 0) {
      puVar12 = local_440;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
    if (iVar7 == 0) {
      local_4d8[0] = local_448[0];
      FString::operator=(&local_4d0,&local_440);
      FString::operator=(&local_4c0,local_430);
      FString::operator=(&local_4b0,local_430 + 2);
      FString::operator=(&local_4a0,local_430 + 4);
      FString::operator=(&local_490,local_430 + 6);
    }
    else {
      iVar7 = (int)pwVar26;
      local_510 = (0x1f - (uint)(iVar7 != 0)) + iVar7;
      if ((int)uVar9 < (int)local_510) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,pwVar26);
        pwVar22 = local_518;
      }
      builtin_wcsncpy(pwVar22 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),
                      L"PrimaryIsNotTheChoosenAdapter ",0x1f);
    }
    FGPUDriverInfo::~FGPUDriverInfo(local_448);
    pwVar21 = local_478;
    if (local_508 != (wchar_t *)0x0) {
      FMemory::Free();
      pwVar21 = local_478;
    }
  }
  else {
    local_510 = (0x1d - (uint)(iVar7 != 0)) + iVar7;
    if ((int)local_50c < (int)local_510) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,pwVar26);
    }
    builtin_wcsncpy(local_518 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),
                    L"PrimaryDriverLocationFailed ",0x1d);
    pwVar21 = local_478;
    pwVar22 = local_518;
  }
LAB_14169edcb:
  if (pwVar21 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  puVar19 = local_3b0;
  FGPUDriverInfo::FGPUDriverInfo(local_3b0,local_4d8);
  if (pwVar22 != (wchar_t *)0x0) {
    FMemory::Free(pwVar22);
  }
  if (local_490 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_4a0 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_4b0 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_4c0 != 0) {
    FMemory::Free();
  }
  pwVar21 = local_4d0;
  if (local_4d0 != (wchar_t *)0x0) {
LAB_14169f7f9:
    FMemory::Free(pwVar21);
  }
  return puVar19;
}



// FUNCTION 14169f830 FUN_14169f830 body=8 status=ok
// SIG undefined FUN_14169f830(void)

undefined * FUN_14169f830(void)

{
  return &DAT_144cd7da4;
}



// FUNCTION 14169f840 FUN_14169f840 body=8 status=ok
// SIG undefined FUN_14169f840(void)

undefined * FUN_14169f840(void)

{
  return &DAT_144cd8000;
}



// FUNCTION 14169f850 GetLastError body=7 status=ok
// SIG DWORD GetLastError(void)

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014169f850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}



// FUNCTION 14169f860 GetMacAddress body=252 status=ok
// SIG undefined GetMacAddress(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FWindowsPlatformMisc::GetMacAddress(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_2c48 [32];
  undefined4 local_2c28;
  longlong local_2c18 [1408];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14169f86c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2c48;
  local_2c28 = 0x2c00;
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = GetAdaptersInfo(local_2c18);
  if (iVar2 == 0) {
    plVar4 = local_2c18;
    do {
      iVar2 = *(int *)((longlong)plVar4 + 0x194);
      if (iVar2 != 0) {
        lVar1 = param_1[1];
        iVar3 = (int)lVar1 + iVar2;
        *(int *)(param_1 + 1) = iVar3;
        if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1);
        }
        ::_guard_xfg_dispatch_icall_nop((void *)((longlong)(int)lVar1 + *param_1),0,(longlong)iVar2)
        ;
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)*param_1,plVar4 + 0x33,(ulonglong)*(uint *)((longlong)plVar4 + 0x194));
        return param_1;
      }
      plVar4 = (longlong *)*plVar4;
    } while (plVar4 != (longlong *)0x0);
  }
  return param_1;
}



// FUNCTION 14169f970 GetNameLength body=39 status=ok
// SIG undefined GetNameLength(void)

void FNameEntry::GetNameLength(byte *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = -1;
  if ((*param_1 & 1) != 0) {
    do {
      lVar2 = lVar2 + 1;
    } while (*(short *)(param_1 + lVar2 * 2 + 0x10) != 0);
    return;
  }
  do {
    lVar1 = lVar2 + 0x11;
    lVar2 = lVar2 + 1;
  } while (param_1[lVar1] != 0);
  return;
}



// FUNCTION 14169f9a0 GetNameTableForDebuggerVisualizers_MT body=5 status=ok
// SIG undefined GetNameTableForDebuggerVisualizers_MT(void)

void * FName::GetNameTableForDebuggerVisualizers_MT(void)

{
  void *_Dst;
  
  if (DAT_1469e45e8 == (void *)0x0) {
    _Dst = (void *)operator_new(0x408);
    if (_Dst != (void *)0x0) {
      *(undefined4 *)((longlong)_Dst + 0x400) = 0;
      *(undefined4 *)((longlong)_Dst + 0x404) = 0;
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x400);
      DAT_1469e45e8 = _Dst;
      return _Dst;
    }
    DAT_1469e45e8 = (void *)0x0;
  }
  return DAT_1469e45e8;
}



// FUNCTION 14169f9b0 GetNames body=116 status=ok
// SIG undefined GetNames(void)

void * FName::GetNames(void)

{
  void *_Dst;
  
  if (DAT_1469e45e8 == (void *)0x0) {
    _Dst = (void *)operator_new(0x408);
    if (_Dst != (void *)0x0) {
      *(undefined4 *)((longlong)_Dst + 0x400) = 0;
      *(undefined4 *)((longlong)_Dst + 0x404) = 0;
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x400);
      DAT_1469e45e8 = _Dst;
      return _Dst;
    }
    DAT_1469e45e8 = (void *)0x0;
  }
  return DAT_1469e45e8;
}



// FUNCTION 14169fa30 FUN_14169fa30 body=264 status=ok
// SIG undefined FUN_14169fa30(void)

int FUN_14169fa30(undefined8 param_1,ulonglong param_2,char param_3)

{
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX p_Var1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD local_res20 [2];
  
  iVar5 = 0;
  local_res20[0] = 0;
  GetLogicalProcessorInformationEx
            (RelationProcessorCore,(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0,local_res20);
  Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)FMemory::Malloc(local_res20[0],0);
  GetLogicalProcessorInformationEx(RelationProcessorCore,Buffer,local_res20);
  for (p_Var1 = Buffer;
      p_Var1 < (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)
               ((longlong)&Buffer->Relationship + (ulonglong)local_res20[0]);
      p_Var1 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)
               ((longlong)&p_Var1->Relationship + (ulonglong)p_Var1->Size)) {
    if ((p_Var1->Relationship == RelationProcessorCore) &&
       (uVar4 = (p_Var1->u).Processor.GroupMask[0].Mask, (param_2 & uVar4) != 0)) {
      if ((param_3 == '\0') || (((p_Var1->u).Processor.Flags & 1) == 0)) {
        iVar5 = iVar5 + 1;
      }
      else {
        uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
        uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
        uVar3 = (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
        ;
        uVar2 = 1;
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
        iVar5 = iVar5 + uVar2;
      }
    }
  }
  FMemory::Free(Buffer);
  return iVar5;
}



// FUNCTION 14169fb40 FUN_14169fb40 body=391 status=ok
// SIG undefined FUN_14169fb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14169fb40(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  ulonglong uVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined1 auStack_1a8 [32];
  DWORD local_188;
  uint local_180;
  uint local_178;
  wchar_t *local_170;
  _SYSTEM_INFO local_168;
  _OSVERSIONINFOW local_138;
  ushort local_20;
  byte local_1e;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e4688) {
    _Init_thread_header(&DAT_1469e4688);
    if (DAT_1469e4688 == -1) {
      GetNativeSystemInfo(&local_168);
      _guard_xfg_dispatch_icall_nop(&local_138.dwMajorVersion,0,0x118);
      local_138.dwOSVersionInfoSize = 0x11c;
      BVar3 = GetVersionExW(&local_138);
      if (BVar3 == 0) {
        DAT_1469e4678 = (void *)0x0;
        _DAT_1469e4680 = 0;
      }
      else {
        local_170 = L"64bit";
        local_178 = (uint)local_20;
        local_180 = (uint)local_1e;
        local_188 = local_138.dwBuildNumber;
        FString::PrintfImpl(&DAT_1469e4678,L"%d.%d.%d.%d.%d.%s",local_138.dwMajorVersion,
                            local_138.dwMinorVersion);
      }
      atexit((_func_5014 *)&LAB_143e7b170);
      _Init_thread_footer(&DAT_1469e4688);
    }
  }
  *param_1 = 0;
  uVar2 = _DAT_1469e4680;
  _Src = DAT_1469e4678;
  iVar1 = DAT_1469e4680;
  lVar4 = (longlong)DAT_1469e4680;
  *(int *)(param_1 + 1) = DAT_1469e4680;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar2 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,lVar4 * 2);
  }
  return param_1;
}



// FUNCTION 14169fcd0 FUN_14169fcd0 body=3257 status=ok
// SIG undefined FUN_14169fcd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14169fcd0(longlong *param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  undefined8 *puVar2;
  longlong lVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar9;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined4 local_180;
  undefined4 local_17c;
  _union_552 local_178 [12];
  _OSVERSIONINFOW local_148;
  ushort local_30;
  char local_2e;
  ulonglong local_28;
  longlong lVar8;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  iVar9 = 0;
  iVar6 = 0;
  GetNativeSystemInfo((LPSYSTEM_INFO)&local_178[0].s);
  _guard_xfg_dispatch_icall_nop(&local_148.dwMajorVersion,0,0x118);
  local_148.dwOSVersionInfoSize = 0x11c;
  if ((wchar_t *)*param_1 != L"Windows (unknown version)") {
    *(undefined4 *)(param_1 + 1) = 0;
    iVar5 = iVar9;
    if (*(int *)((longlong)param_1 + 0xc) != 0x1a) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x1a);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 + 0x1a;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 0x1a) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
    builtin_wcsncpy((wchar_t *)*param_1,L"Windows (unknown version)",0x1a);
  }
  if (param_2 != &local_188) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  BVar4 = GetVersionExW(&local_148);
  if (BVar4 == 0) {
    iVar5 = 4;
  }
  else {
    iVar5 = iVar6;
    if (local_148.dwMajorVersion == 5) {
      if (local_148.dwMinorVersion == 0) {
        if ((wchar_t *)*param_1 != L"Windows 2000") {
          *(undefined4 *)(param_1 + 1) = 0;
          iVar6 = iVar9;
          if (*(int *)((longlong)param_1 + 0xc) != 0xd) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xd);
            iVar6 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar6 + 0xd;
          if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0xd) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
          }
          builtin_wcsncpy((wchar_t *)*param_1,L"Windows 2000",0xd);
        }
        pwVar1 = (wchar_t *)*param_2;
        if (local_2e == '\x01') {
          if (pwVar1 != L"Professional") {
            *(undefined4 *)(param_2 + 1) = 0;
            iVar6 = iVar9;
            if (*(int *)((longlong)param_2 + 0xc) != 0xd) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0xd);
              iVar6 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = iVar6 + 0xd;
            if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0xd) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
            }
            builtin_wcsncpy((wchar_t *)*param_2,L"Professional",0xd);
          }
        }
        else if ((char)local_30 < '\0') {
          if (pwVar1 != L"Datacenter Server") {
            *(undefined4 *)(param_2 + 1) = 0;
            iVar6 = iVar9;
            if (*(int *)((longlong)param_2 + 0xc) != 0x12) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x12);
              iVar6 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = iVar6 + 0x12;
            if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0x12) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
            }
            builtin_wcsncpy((wchar_t *)*param_2,L"Datacenter Server",0x12);
          }
        }
        else if ((local_30 & 2) == 0) {
          if (pwVar1 != L"Server") {
            *(undefined4 *)(param_2 + 1) = 0;
            iVar6 = iVar9;
            if (*(int *)((longlong)param_2 + 0xc) != 7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,7);
              iVar6 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = iVar6 + 7;
            if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
            }
            puVar2 = (undefined8 *)*param_2;
            *puVar2 = 0x76007200650053;
            *(undefined4 *)(puVar2 + 1) = 0x720065;
            *(undefined2 *)((longlong)puVar2 + 0xc) = 0;
          }
        }
        else if (pwVar1 != L"Advanced Server") {
          *(undefined4 *)(param_2 + 1) = 0;
          iVar6 = iVar9;
          if (*(int *)((longlong)param_2 + 0xc) != 0x10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x10);
            iVar6 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar6 + 0x10;
          if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0x10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          builtin_wcsncpy((wchar_t *)*param_2,L"Advanced Server",0x10);
        }
      }
      else if (local_148.dwMinorVersion == 1) {
        if ((wchar_t *)*param_1 != L"Windows XP") {
          *(undefined4 *)(param_1 + 1) = 0;
          iVar6 = iVar9;
          if (*(int *)((longlong)param_1 + 0xc) != 0xb) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xb);
            iVar6 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar6 + 0xb;
          if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0xb) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
          }
          builtin_wcsncpy((wchar_t *)*param_1,L"Windows XP",0xb);
        }
        if ((local_30 & 0x200) == 0) {
          if ((wchar_t *)*param_2 != L"Professional") {
            *(undefined4 *)(param_2 + 1) = 0;
            iVar6 = iVar9;
            if (*(int *)((longlong)param_2 + 0xc) != 0xd) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0xd);
              iVar6 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = iVar6 + 0xd;
            if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0xd) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
            }
            builtin_wcsncpy((wchar_t *)*param_2,L"Professional",0xd);
          }
        }
        else if ((wchar_t *)*param_2 != L"Home Edition") {
          *(undefined4 *)(param_2 + 1) = 0;
          iVar6 = iVar9;
          if (*(int *)((longlong)param_2 + 0xc) != 0xd) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0xd);
            iVar6 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar6 + 0xd;
          if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0xd) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          builtin_wcsncpy((wchar_t *)*param_2,L"Home Edition",0xd);
        }
      }
      else if (local_148.dwMinorVersion == 2) {
        iVar6 = GetSystemMetrics(0x59);
        if (iVar6 == 0) {
          if ((local_30 & 0x2000) == 0) {
            if ((local_30 & 0x8000) == 0) {
              if ((local_2e == '\x01') && (local_178[0].s.wProcessorArchitecture == 9)) {
                if ((wchar_t *)*param_1 != L"Windows XP") {
                  *(undefined4 *)(param_1 + 1) = 0;
                  iVar6 = iVar9;
                  if (*(int *)((longlong)param_1 + 0xc) != 0xb) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xb);
                    iVar6 = (int)param_1[1];
                  }
                  *(int *)(param_1 + 1) = iVar6 + 0xb;
                  if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0xb) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
                  }
                  builtin_wcsncpy((wchar_t *)*param_1,L"Windows XP",0xb);
                }
                if ((wchar_t *)*param_2 != L"Professional x64 Edition") {
                  *(undefined4 *)(param_2 + 1) = 0;
                  iVar6 = iVar9;
                  if (*(int *)((longlong)param_2 + 0xc) != 0x19) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x19);
                    iVar6 = (int)param_2[1];
                  }
                  *(int *)(param_2 + 1) = iVar6 + 0x19;
                  if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0x19) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
                  }
                  builtin_wcsncpy((wchar_t *)*param_2,L"Professional x64 Edition",0x19);
                }
              }
              else if ((wchar_t *)*param_1 != L"Windows Server 2003") {
                *(undefined4 *)(param_1 + 1) = 0;
                iVar6 = iVar9;
                if (*(int *)((longlong)param_1 + 0xc) != 0x14) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x14);
                  iVar6 = (int)param_1[1];
                }
                *(int *)(param_1 + 1) = iVar6 + 0x14;
                if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0x14) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
                }
                builtin_wcsncpy((wchar_t *)*param_1,L"Windows Server 2003",0x14);
              }
            }
            else if ((wchar_t *)*param_1 != L"Windows Home Server") {
              *(undefined4 *)(param_1 + 1) = 0;
              iVar6 = iVar9;
              if (*(int *)((longlong)param_1 + 0xc) != 0x14) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x14);
                iVar6 = (int)param_1[1];
              }
              *(int *)(param_1 + 1) = iVar6 + 0x14;
              if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0x14) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
              }
              builtin_wcsncpy((wchar_t *)*param_1,L"Windows Home Server",0x14);
            }
          }
          else if ((wchar_t *)*param_1 != L"Windows Storage Server 2003") {
            *(undefined4 *)(param_1 + 1) = 0;
            iVar6 = iVar9;
            if (*(int *)((longlong)param_1 + 0xc) != 0x1c) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x1c);
              iVar6 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar6 + 0x1c;
            if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0x1c) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
            }
            builtin_wcsncpy((wchar_t *)*param_1,L"Windows Storage Server 2003",0x1c);
          }
        }
        else if ((wchar_t *)*param_1 != L"Windows Server 2003 R2") {
          *(undefined4 *)(param_1 + 1) = 0;
          iVar6 = iVar9;
          if (*(int *)((longlong)param_1 + 0xc) != 0x17) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x17);
            iVar6 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar6 + 0x17;
          if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0x17) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
          }
          builtin_wcsncpy((wchar_t *)*param_1,L"Windows Server 2003 R2",0x17);
        }
      }
      else {
        iVar5 = 1;
      }
    }
    else if (local_148.dwMajorVersion == 6) {
      if (local_148.dwMinorVersion == 0) {
        if (local_2e == '\x01') {
          if ((wchar_t *)*param_1 != L"Windows Vista") {
            *(undefined4 *)(param_1 + 1) = 0;
            iVar6 = iVar9;
            if (*(int *)((longlong)param_1 + 0xc) != 0xe) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xe);
              iVar6 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar6 + 0xe;
            if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0xe) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
            }
            builtin_wcsncpy((wchar_t *)*param_1,L"Windows Vista",0xe);
          }
        }
        else if ((wchar_t *)*param_1 != L"Windows Server 2008") {
          *(undefined4 *)(param_1 + 1) = 0;
          iVar6 = iVar9;
          if (*(int *)((longlong)param_1 + 0xc) != 0x14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x14);
            iVar6 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar6 + 0x14;
          if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0x14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
          }
          builtin_wcsncpy((wchar_t *)*param_1,L"Windows Server 2008",0x14);
        }
      }
      else if (local_148.dwMinorVersion == 1) {
        if (local_2e == '\x01') {
          if ((wchar_t *)*param_1 != L"Windows 7") {
            *(undefined4 *)(param_1 + 1) = 0;
            iVar6 = iVar9;
            if (*(int *)((longlong)param_1 + 0xc) != 10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,10);
              iVar6 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar6 + 10;
            if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
            }
            builtin_wcsncpy((wchar_t *)*param_1,L"Windows 7",10);
          }
        }
        else if ((wchar_t *)*param_1 != L"Windows Server 2008 R2") {
          *(undefined4 *)(param_1 + 1) = 0;
          iVar6 = iVar9;
          if (*(int *)((longlong)param_1 + 0xc) != 0x17) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x17);
            iVar6 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar6 + 0x17;
          if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0x17) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
          }
          builtin_wcsncpy((wchar_t *)*param_1,L"Windows Server 2008 R2",0x17);
        }
      }
      else if (local_148.dwMinorVersion == 2) {
        if (local_2e == '\x01') {
          if ((wchar_t *)*param_1 != L"Windows 8") {
            *(undefined4 *)(param_1 + 1) = 0;
            iVar6 = iVar9;
            if (*(int *)((longlong)param_1 + 0xc) != 10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,10);
              iVar6 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar6 + 10;
            if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
            }
            builtin_wcsncpy((wchar_t *)*param_1,L"Windows 8",10);
          }
        }
        else if ((wchar_t *)*param_1 != L"Windows Server 2012") {
          *(undefined4 *)(param_1 + 1) = 0;
          iVar6 = iVar9;
          if (*(int *)((longlong)param_1 + 0xc) != 0x14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x14);
            iVar6 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar6 + 0x14;
          if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0x14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
          }
          builtin_wcsncpy((wchar_t *)*param_1,L"Windows Server 2012",0x14);
        }
      }
      else if (local_148.dwMinorVersion == 3) {
        if (local_2e == '\x01') {
          if ((wchar_t *)*param_1 != L"Windows 8.1") {
            *(undefined4 *)(param_1 + 1) = 0;
            iVar6 = iVar9;
            if (*(int *)((longlong)param_1 + 0xc) != 0xc) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xc);
              iVar6 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar6 + 0xc;
            if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0xc) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
            }
            builtin_wcsncpy((wchar_t *)*param_1,L"Windows 8.1",0xc);
          }
        }
        else if ((wchar_t *)*param_1 != L"Windows Server 2012 R2") {
          *(undefined4 *)(param_1 + 1) = 0;
          iVar6 = iVar9;
          if (*(int *)((longlong)param_1 + 0xc) != 0x17) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x17);
            iVar6 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar6 + 0x17;
          if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0x17) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
          }
          builtin_wcsncpy((wchar_t *)*param_1,L"Windows Server 2012 R2",0x17);
        }
      }
      else {
        iVar5 = 1;
      }
    }
    else if (local_148.dwMajorVersion == 10) {
      if (local_148.dwMinorVersion == 0) {
        if (local_2e == '\x01') {
          iVar5 = iVar9;
          if ((wchar_t *)*param_1 != L"Windows 10") {
            *(undefined4 *)(param_1 + 1) = 0;
            if (*(int *)((longlong)param_1 + 0xc) != 0xb) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xb);
              iVar5 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar5 + 0xb;
            if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 0xb) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
            }
            builtin_wcsncpy((wchar_t *)*param_1,L"Windows 10",0xb);
            iVar5 = iVar6;
          }
        }
        else if ((wchar_t *)*param_1 != L"Windows Server Technical Preview") {
          *(undefined4 *)(param_1 + 1) = 0;
          iVar6 = iVar9;
          if (*(int *)((longlong)param_1 + 0xc) != 0x21) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x21);
            iVar6 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar6 + 0x21;
          if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 0x21) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
          }
          builtin_wcsncpy((wchar_t *)*param_1,L"Windows Server Technical Preview",0x21);
        }
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 1;
    }
    if (local_148.szCSDVersion[0] == L'\0') {
      FString::PrintfImpl(&local_188,L"Build %d",local_148.dwBuildNumber);
      if (param_2 == &local_188) {
        if (local_188 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*param_2 != 0) {
          FMemory::Free();
        }
        *param_2 = local_188;
        *(undefined4 *)(param_2 + 1) = local_180;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_17c;
      }
    }
    else if ((WCHAR *)*param_2 != local_148.szCSDVersion) {
      lVar8 = -1;
      do {
        lVar7 = lVar8 + 1;
        lVar3 = lVar8 + 1;
        lVar8 = lVar7;
      } while (local_148.szCSDVersion[lVar3] != L'\0');
      iVar6 = (int)lVar7 + 1;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,iVar6);
        iVar9 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar6 + iVar9;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
      }
      if (iVar6 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)*param_2,local_148.szCSDVersion,(longlong)iVar6 * 2);
      }
    }
  }
  return iVar5;
}



// FUNCTION 1416a0990 FUN_1416a0990 body=403 status=ok
// SIG undefined FUN_1416a0990(void)

void FUN_1416a0990(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar3 < DAT_1469e4658) {
    _Init_thread_header(&DAT_1469e4658);
    if (DAT_1469e4658 == -1) {
      atexit((_func_5014 *)&LAB_143e7b360);
      _Init_thread_footer(&DAT_1469e4658);
    }
  }
  if (*piVar3 < DAT_1469e4670) {
    _Init_thread_header(&DAT_1469e4670);
    if (DAT_1469e4670 == -1) {
      atexit((_func_5014 *)&LAB_143e7b340);
      _Init_thread_footer(&DAT_1469e4670);
    }
  }
  iVar2 = (int)DAT_1469e4650;
  if ((iVar2 < 2) && (DAT_1469e4668 < 2)) {
    FUN_14169fcd0(&DAT_1469e4648,&DAT_1469e4660);
    iVar2 = (int)DAT_1469e4650;
  }
  pvVar1 = DAT_1469e4648;
  if ((void **)param_1 != &DAT_1469e4648) {
    *(int *)(param_1 + 1) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar1,(longlong)iVar2 * 2);
    }
  }
  iVar2 = DAT_1469e4668;
  pvVar1 = DAT_1469e4660;
  if ((void **)param_2 != &DAT_1469e4660) {
    *(int *)(param_2 + 1) = DAT_1469e4668;
    if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar1,(longlong)iVar2 * 2);
    }
  }
  return;
}



// FUNCTION 1416a0b30 GetPlainNameString body=216 status=ok
// SIG undefined GetPlainNameString(void)

undefined8 * FNameEntry::GetPlainNameString(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  bVar1 = *param_1;
  param_1 = param_1 + 0x10;
  *param_2 = 0;
  param_2[1] = 0;
  if ((bVar1 & 1) == 0) {
    if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_1[lVar3] != 0);
      iVar2 = (int)lVar3 + 1;
      *(int *)(param_2 + 1) = iVar2;
      if (0 < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(*param_2,iVar2,param_1,iVar2,0x3f);
    }
  }
  else if ((param_1 != (byte *)0x0) && (*(short *)param_1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(param_1 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,param_1,(longlong)iVar2 * 2);
    return param_2;
  }
  return param_2;
}



// FUNCTION 1416a0c10 GetPlainNameString body=216 status=ok
// SIG undefined GetPlainNameString(void)

undefined8 * FNameEntrySerialized::GetPlainNameString(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  bVar1 = *param_1;
  param_1 = param_1 + 4;
  *param_2 = 0;
  param_2[1] = 0;
  if ((bVar1 & 1) == 0) {
    if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_1[lVar3] != 0);
      iVar2 = (int)lVar3 + 1;
      *(int *)(param_2 + 1) = iVar2;
      if (0 < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(*param_2,iVar2,param_1,iVar2,0x3f);
    }
  }
  else if ((param_1 != (byte *)0x0) && (*(short *)param_1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(param_1 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,param_1,(longlong)iVar2 * 2);
    return param_2;
  }
  return param_2;
}



// FUNCTION 1416a0cf0 GetPlatformChunkInstall body=447 status=ok
// SIG undefined GetPlatformChunkInstall(void)

longlong FWindowsPlatformMisc::GetPlatformChunkInstall(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 local_res8;
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38 [4];
  undefined2 local_18;
  
  if ((DAT_1469e4690 != 0) && (DAT_1469e4698 != '\0')) {
    return DAT_1469e4690;
  }
  plVar4 = (longlong *)0x0;
  if (DAT_1468e2368 < 2) goto LAB_1416a0e95;
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  FConfigCacheIni::GetString
            (DAT_1468b6148,L"StreamingInstall",L"DefaultProviderName",&local_48,&DAT_1468e2360);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_18 = 0;
  if ((int)local_40 == 0) {
    puVar6 = &DAT_143f3eda8;
LAB_1416a0d9d:
    FName::Init(&local_res8,puVar6,0,1,1,0xffffffff);
  }
  else {
    puVar6 = local_48;
    if (local_48 != (undefined2 *)0x0) goto LAB_1416a0d9d;
    local_res8 = 0;
  }
  uVar1 = local_res8;
  uVar3 = FUN_14168dc80();
  cVar2 = FModuleManager::QueryModule(uVar3,uVar1,local_38);
  if (cVar2 != '\0') {
    puVar6 = &DAT_143f3eda8;
    if (((int)local_40 == 0) || (puVar6 = local_48, local_48 != (undefined2 *)0x0)) {
      FName::Init(&local_res8,puVar6,0,1,1,0xffffffff);
    }
    else {
      local_res8 = 0;
    }
    uVar1 = local_res8;
    uVar3 = FUN_14168dc80();
    plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
    if (plVar4 != (longlong *)0x0) {
      DAT_1469e4690 = (**(code **)(*plVar4 + 0x40))(plVar4);
    }
  }
  DAT_1469e4698 = '\x01';
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (plVar4 != (longlong *)0x0) {
    return DAT_1469e4690;
  }
LAB_1416a0e95:
  lVar5 = FUN_1415aabd0();
  DAT_1469e4690 = lVar5;
  return lVar5;
}



// FUNCTION 1416a0eb0 FUN_1416a0eb0 body=108 status=ok
// SIG undefined FUN_1416a0eb0(void)

undefined ** FUN_1416a0eb0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e461c) {
    _Init_thread_header(&DAT_1469e461c);
    if (DAT_1469e461c == -1) {
      atexit((_func_5014 *)&LAB_143e7b3a0);
      _Init_thread_footer(&DAT_1469e461c);
      return &PTR_PTR_1464b01a0;
    }
  }
  return &PTR_PTR_1464b01a0;
}



// FUNCTION 1416a0f20 FUN_1416a0f20 body=584 status=ok
// SIG undefined FUN_1416a0f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1416a0f20(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 *_Src;
  int iVar2;
  longlong *plVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  DWORD DVar7;
  undefined1 auStack_398 [32];
  longlong local_378 [2];
  _DISPLAY_DEVICEW local_368;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e4640) && (_Init_thread_header(&DAT_1469e4640), DAT_1469e4640 == -1))
  {
    atexit((_func_5014 *)&LAB_143e7b380);
    _Init_thread_footer(&DAT_1469e4640);
  }
  DVar7 = 0;
  if ((int)DAT_1469e4638 < 2) {
    plVar3 = (longlong *)FGenericPlatformMisc::GetPrimaryGPUBrand(local_378);
    if ((undefined1 **)plVar3 != &DAT_1469e4630) {
      if (DAT_1469e4630 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      DAT_1469e4630 = (undefined1 *)*plVar3;
      *plVar3 = 0;
      DAT_1469e4638 = (DWORD)plVar3[1];
      DAT_1469e463c = *(DWORD *)((longlong)plVar3 + 0xc);
      plVar3[1] = 0;
    }
    if (local_378[0] != 0) {
      FMemory::Free();
    }
    local_368.cb = 0x348;
    iVar2 = EnumDisplayDevicesW((LPCWSTR)0x0,0,&local_368,0);
    DVar4 = DVar7;
    while (iVar2 != 0) {
      if (((byte)local_368.StateFlags & 5) != 0) {
        if ((WCHAR *)DAT_1469e4630 != local_368.DeviceString) {
          DVar4 = DVar7;
          if (local_368.DeviceString[0] != L'\0') {
            lVar6 = -1;
            do {
              lVar5 = lVar6 + 1;
              lVar1 = lVar6 + 1;
              lVar6 = lVar5;
            } while (local_368.DeviceString[lVar1] != L'\0');
            DVar4 = (int)lVar5 + 1;
          }
          DAT_1469e4638 = 0;
          if (DAT_1469e463c != DVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1469e4630,DVar4);
            DVar7 = DAT_1469e4638;
          }
          DAT_1469e4638 = DVar4 + DVar7;
          if ((int)DAT_1469e463c < (int)DAT_1469e4638) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469e4630);
          }
          if (DVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (DAT_1469e4630,local_368.DeviceString,(longlong)(int)DVar4 * 2);
          }
        }
        break;
      }
      _guard_xfg_dispatch_icall_nop(local_368.DeviceName,0,0x344);
      DVar4 = DVar4 + 1;
      local_368.cb = 0x348;
      iVar2 = EnumDisplayDevicesW((LPCWSTR)0x0,DVar4,&local_368,0);
    }
  }
  *param_1 = 0;
  iVar2 = DAT_1469e4638;
  _Src = DAT_1469e4630;
  lVar6 = (longlong)(int)DAT_1469e4638;
  *(DWORD *)(param_1 + 1) = DAT_1469e4638;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar2,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,lVar6 * 2);
  }
  return param_1;
}



// FUNCTION 1416a1170 GetSize body=74 status=ok
// SIG undefined GetSize(void)

int FNameEntry::GetSize(ushort *param_1)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  
  uVar1 = *param_1;
  puVar4 = param_1;
  do {
    if (uVar1 == 0) {
      iVar3 = 1;
LAB_1416a1198:
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (param_1[lVar2] != 0);
      return ((int)lVar2 + 1) * iVar3 + 0x10;
    }
    if (0x7f < uVar1) {
      iVar3 = 2;
      goto LAB_1416a1198;
    }
    uVar1 = puVar4[1];
    puVar4 = puVar4 + 1;
  } while( true );
}



// FUNCTION 1416a11c0 FUN_1416a11c0 body=499 status=ok
// SIG undefined FUN_1416a11c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1416a11c0(longlong *param_1,undefined8 *param_2)

{
  BOOL BVar1;
  undefined8 *puVar2;
  LPCWSTR lpFileName;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c0;
  uint local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  _SYSTEMTIME local_90;
  _SYSTEMTIME local_80;
  _SYSTEMTIME local_70;
  uint local_60;
  FILETIME local_5c;
  FILETIME local_54;
  FILETIME local_4c;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,&local_90);
  if (*(int *)(puVar2 + 1) == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*puVar2;
  }
  BVar1 = GetFileAttributesExW(lpFileName,GetFileExInfoStandard,&local_60);
  if (CONCAT26(local_90.wDay,CONCAT24(local_90.wDayOfWeek,CONCAT22(local_90.wMonth,local_90.wYear)))
      != 0) {
    FMemory::Free();
  }
  uVar4 = 0xffffffffffffffff;
  if (BVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xf8;
  }
  else {
    uVar5 = local_60 >> 4;
    if ((uVar5 & 1) == 0) {
      local_a8 = CONCAT44(local_44,local_40);
      uVar4 = local_a8;
    }
    BVar1 = FileTimeToSystemTime(&local_4c,&local_80);
    if (BVar1 == 0) {
      local_a0 = 0;
    }
    else {
      local_b0 = 0;
      local_b8 = (uint)local_80.wSecond;
      local_c0 = (uint)local_80.wMinute;
      local_c8 = (uint)local_80.wHour;
      FDateTime::FDateTime(&local_a0,local_80.wYear,local_80.wMonth,local_80.wDay);
    }
    BVar1 = FileTimeToSystemTime(&local_54,&local_70);
    if (BVar1 == 0) {
      local_a8 = 0;
    }
    else {
      local_b0 = 0;
      local_b8 = (uint)local_70.wSecond;
      local_c0 = (uint)local_70.wMinute;
      local_c8 = (uint)local_70.wHour;
      FDateTime::FDateTime(&local_a8,local_70.wYear,local_70.wMonth,local_70.wDay);
    }
    BVar1 = FileTimeToSystemTime(&local_5c,&local_90);
    uVar3 = 0;
    if (BVar1 != 0) {
      local_b0 = 0;
      local_b8 = (uint)local_90.wSecond;
      local_c0 = (uint)local_90.wMinute;
      local_c8 = (uint)local_90.wHour;
      FDateTime::FDateTime(&local_98,local_90.wYear,local_90.wMonth,local_90.wDay);
      uVar3 = local_98;
    }
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe;
    param_2[1] = local_a8;
    *param_2 = uVar3;
    *(byte *)(param_2 + 4) =
         *(byte *)(param_2 + 4) & 0xfd | (byte)uVar5 & 1 | ((byte)local_60 & 1 | 2) * '\x02';
    param_2[2] = local_a0;
  }
  param_2[3] = uVar4;
  return param_2;
}



// FUNCTION 1416a13c0 FUN_1416a13c0 body=244 status=ok
// SIG undefined FUN_1416a13c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1416a13c0(longlong param_1)

{
  HANDLE pvVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  _MEMORYSTATUSEX local_58;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_14159fe30();
  *(undefined8 *)(param_1 + 0x80) = 0;
  local_58.dwLength = 0x40;
  local_58.dwMemoryLoad = 0;
  local_58.ullTotalPhys = 0;
  local_58.ullAvailPhys = 0;
  local_58.ullTotalPageFile = 0;
  local_58.ullAvailPageFile = 0;
  local_58.ullTotalVirtual = 0;
  local_58.ullAvailVirtual = 0;
  local_58.ullAvailExtendedVirtual = 0;
  GlobalMemoryStatusEx(&local_58);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  pvVar1 = GetCurrentProcess();
  _guard_xfg_dispatch_icall_nop(pvVar1,&local_a8,0x48);
  *(DWORDLONG *)(param_1 + 0x40) = local_58.ullAvailPhys;
  *(DWORDLONG *)(param_1 + 0x48) = local_58.ullAvailPageFile;
  *(undefined8 *)(param_1 + 0x50) = local_98;
  *(undefined8 *)(param_1 + 0x58) = local_a0;
  *(undefined8 *)(param_1 + 0x60) = local_70;
  *(undefined8 *)(param_1 + 0x68) = local_68;
  return param_1;
}



// FUNCTION 1416a14c0 GetStoredValue body=487 status=ok
// SIG undefined GetStoredValue(void)

undefined1
FWindowsPlatformMisc::GetStoredValue
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined2 **ppuVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  local_30 = 9;
  local_38 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar7 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"Software",0x12);
  iVar6 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    iVar6 = 0;
  }
  iVar4 = 2;
  if (((int)local_30 != 0) || (iVar3 = 2, iVar6 == -1)) {
    iVar3 = 1;
  }
  local_48 = puVar7;
  local_40._0_4_ = (int)local_30;
  local_40._4_4_ = local_30._4_4_;
  if (local_30._4_4_ < iVar6 + iVar3 + (int)local_30) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
  }
  FString::PathAppend(&local_48,*param_1,iVar6);
  iVar3 = local_40._4_4_;
  iVar6 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar6 = 0;
  }
  if (((int)local_40 != 0) || (iVar6 == -1)) {
    iVar4 = 1;
  }
  local_58 = local_48;
  iVar4 = iVar6 + iVar4 + (int)local_40;
  local_48 = (undefined2 *)0x0;
  local_50 = (int)local_40;
  local_4c = local_40._4_4_;
  local_40 = 0;
  if (iVar3 < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
  }
  FString::PathAppend(&local_58,*param_2,iVar6);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  ppuVar2 = (undefined2 **)FString::Replace(&local_58,&local_38,&DAT_144cd5d44,&DAT_144cd5b54,1);
  if (&local_58 != ppuVar2) {
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_58 = *ppuVar2;
    *ppuVar2 = (undefined2 *)0x0;
    local_50 = *(int *)(ppuVar2 + 1);
    local_4c = *(int *)((longlong)ppuVar2 + 0xc);
    ppuVar2[1] = (undefined2 *)0x0;
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  puVar5 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar5 = local_58;
  }
  uVar1 = FUN_1416a6530(0xffffffff80000001,puVar5,puVar7,param_4);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1416a16b0 GetSystemErrorMessage body=136 status=ok
// SIG undefined GetSystemErrorMessage(void)

wchar_t * FWindowsPlatformMisc::GetSystemErrorMessage(wchar_t *param_1,DWORD param_2,DWORD param_3)

{
  wchar_t *pwVar1;
  
  *param_1 = L'\0';
  if (param_3 == 0) {
    param_3 = GetLastError();
  }
  FormatMessageW(0x1000,(LPCVOID)0x0,param_3,0x400,param_1,param_2,(va_list *)0x0);
  pwVar1 = ::_guard_xfg_dispatch_icall_nop(param_1,L'\r');
  if (pwVar1 != (wchar_t *)0x0) {
    *pwVar1 = L'\0';
  }
  pwVar1 = ::_guard_xfg_dispatch_icall_nop(param_1,L'\n');
  if (pwVar1 != (wchar_t *)0x0) {
    *pwVar1 = L'\0';
  }
  return param_1;
}



// FUNCTION 1416a1740 FUN_1416a1740 body=221 status=ok
// SIG undefined FUN_1416a1740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1416a1740(longlong *param_1,undefined8 *param_2)

{
  BOOL BVar1;
  undefined8 *puVar2;
  LPCWSTR lpFileName;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_60;
  uint local_58;
  undefined4 local_50;
  _SYSTEMTIME local_48;
  undefined1 local_38 [20];
  FILETIME local_24 [2];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,&local_48);
  if (*(int *)(puVar2 + 1) == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*puVar2;
  }
  BVar1 = GetFileAttributesExW(lpFileName,GetFileExInfoStandard,local_38);
  if (CONCAT26(local_48.wDay,CONCAT24(local_48.wDayOfWeek,CONCAT22(local_48.wMonth,local_48.wYear)))
      != 0) {
    FMemory::Free();
  }
  if ((BVar1 != 0) && (BVar1 = FileTimeToSystemTime(local_24,&local_48), BVar1 != 0)) {
    local_50 = 0;
    local_58 = (uint)local_48.wSecond;
    local_60 = (uint)local_48.wMinute;
    local_68 = (uint)local_48.wHour;
    FDateTime::FDateTime(param_2,local_48.wYear,local_48.wMonth,local_48.wDay);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1416a1820 FUN_1416a1820 body=2080 status=ok
// SIG undefined FUN_1416a1820(void)

void FUN_1416a1820(undefined8 *param_1,int *param_2)

{
  undefined2 **ppuVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined2 **ppuVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  int local_res8;
  int local_res18;
  undefined2 *local_d8;
  int local_d0;
  int local_cc;
  undefined2 *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [3];
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
  }
  plVar13 = (longlong *)(param_2 + 2);
  cVar3 = FUN_1416a6530(0xffffffff80000002,puVar6,L"Device Description",plVar13);
  puVar6 = (undefined2 *)0x0;
  iVar9 = 0;
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_1;
    }
    cVar3 = FUN_1416a6530(0xffffffff80000002,puVar7,L"DriverDesc",plVar13);
    if (cVar3 == '\0') {
      local_d0 = *(int *)(param_1 + 1);
      lVar11 = (longlong)local_d0;
      pvVar2 = (void *)*param_1;
      local_d8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_d8,(10 - (uint)(local_d0 != 0)) + local_d0,0);
      puVar7 = local_d8;
      _guard_xfg_dispatch_icall_nop(local_d8,pvVar2,lVar11 * 2);
      iVar4 = local_d0;
      lVar11 = (longlong)local_d0;
      local_d0 = (10 - (uint)(local_d0 != 0)) + local_d0;
      if (local_cc < local_d0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,iVar4);
        puVar7 = local_d8;
      }
      lVar11 = lVar11 - (ulonglong)(iVar4 != 0);
      builtin_wcsncpy(puVar7 + lVar11,L"\\Settings",9);
      puVar8 = &DAT_143f3eda8;
      if (local_d0 != 0) {
        puVar8 = puVar7;
      }
      (puVar7 + lVar11)[9] = L'\0';
      cVar3 = FUN_1416a6530(0xffffffff80000002,puVar8,L"Device Description",plVar13);
      if (cVar3 == '\0') {
        *param_2 = 0;
        if (plVar13 != local_98) {
          if (*plVar13 != 0) {
            FMemory::Free();
          }
          *plVar13 = 0;
          param_2[4] = 0;
          param_2[5] = 0;
        }
        plVar13 = (longlong *)(param_2 + 6);
        if (plVar13 != local_88) {
          if (*plVar13 != 0) {
            FMemory::Free();
          }
          *plVar13 = 0;
          param_2[8] = 0;
          param_2[9] = 0;
        }
        plVar13 = (longlong *)(param_2 + 10);
        if (plVar13 != local_78) {
          if (*plVar13 != 0) {
            FMemory::Free();
          }
          *plVar13 = 0;
          param_2[0xc] = 0;
          param_2[0xd] = 0;
        }
        plVar13 = (longlong *)(param_2 + 0xe);
        if (plVar13 != local_68) {
          if (*plVar13 != 0) {
            FMemory::Free();
          }
          *plVar13 = 0;
          param_2[0x10] = 0;
          param_2[0x11] = 0;
        }
        plVar13 = (longlong *)(param_2 + 0x12);
        if (plVar13 != local_58) {
          if (*plVar13 != 0) {
            FMemory::Free();
          }
          *plVar13 = 0;
          param_2[0x14] = 0;
          param_2[0x15] = 0;
        }
        if (puVar7 == (undefined2 *)0x0) {
          return;
        }
        FMemory::Free(puVar7);
        return;
      }
      if (puVar7 != (undefined2 *)0x0) {
        FMemory::Free(puVar7);
      }
    }
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_1;
  }
  FUN_1416a6530(0xffffffff80000002,puVar7,L"ProviderName",param_2 + 6);
  local_res18 = 1;
  if (1 < param_2[8]) {
    iVar4 = FUN_141592950(param_2 + 6,L"NVIDIA",1,0,0xffffffff);
    if (iVar4 == -1) {
      iVar4 = FUN_141592950(param_2 + 6,L"Advanced Micro Devices",1,0,0xffffffff);
      if (iVar4 == -1) {
        iVar4 = FUN_141592950(param_2 + 6,L"Intel",1,0,0xffffffff);
        if (iVar4 != -1) {
          *param_2 = 0x8086;
        }
      }
      else {
        *param_2 = 0x1002;
      }
    }
    else {
      *param_2 = 0x10de;
    }
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_1;
  }
  FUN_1416a6530(0xffffffff80000002,puVar7,L"DriverVersion",param_2 + 10);
  ppuVar1 = (undefined2 **)(param_2 + 0xe);
  FString::operator=(ppuVar1,param_2 + 10);
  if (*param_2 == 0x10de) {
    ppuVar5 = (undefined2 **)FGPUDriverInfo::GetUnifiedDriverVersion(param_2,&local_b8);
    if (ppuVar1 != ppuVar5) {
      if (*ppuVar1 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar1 = *ppuVar5;
      *ppuVar5 = (undefined2 *)0x0;
      param_2[0x10] = *(int *)(ppuVar5 + 1);
      param_2[0x11] = *(int *)((longlong)ppuVar5 + 0xc);
      ppuVar5[1] = (undefined2 *)0x0;
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  else if (*param_2 == 0x1002) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_1;
    }
    cVar3 = FUN_1416a6530(0xffffffff80000002,puVar7,L"Catalyst_Version",ppuVar1);
    if (cVar3 != '\0') {
      local_c8 = (undefined2 *)0x0;
      local_c0 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      puVar7 = local_c8;
      local_a8 = local_c8;
      FGenericPlatformString::Memcpy(local_c8,L"Catalyst ",0x14);
      local_d0 = param_2[0x10];
      lVar11 = (longlong)local_d0;
      if ((int)local_c0 < 2) {
        puVar8 = *ppuVar1;
        local_d8 = (undefined2 *)0x0;
        if (local_d0 == 0) {
          local_res8 = 0;
          puVar7 = puVar6;
          iVar10 = local_res8;
          iVar14 = local_d0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
          puVar7 = local_d8;
          _guard_xfg_dispatch_icall_nop(local_d8,puVar8,lVar11 * 2);
          iVar10 = local_cc;
          iVar14 = local_d0;
        }
      }
      else {
        iVar4 = local_d0 + -1;
        if (local_d0 == 0) {
          iVar4 = iVar9;
        }
        if (((int)local_c0 != 0) || (puVar8 = (undefined2 *)0x1, iVar4 == 0)) {
          puVar8 = puVar6;
        }
        local_a8 = (undefined2 *)0x0;
        iVar12 = (int)local_c0 + iVar4 + (int)puVar8;
        local_d8 = puVar7;
        local_d0 = (int)local_c0;
        local_cc = local_c0._4_4_;
        if (local_c0._4_4_ < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8,iVar12);
        }
        iVar12 = local_d0;
        local_c8 = *ppuVar1;
        puVar7 = local_d8;
        iVar10 = local_cc;
        iVar14 = local_d0;
        if (iVar4 != 0) {
          lVar11 = (longlong)local_d0;
          local_d0 = iVar4 + (uint)(local_d0 == 0) + local_d0;
          if (local_cc < local_d0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,iVar12);
          }
          iVar10 = local_cc;
          iVar14 = local_d0;
          puVar7 = local_d8;
          puVar8 = local_d8 + (lVar11 - (ulonglong)(iVar12 != 0));
          _guard_xfg_dispatch_icall_nop(puVar8,local_c8,(longlong)iVar4 * 2);
          puVar8[iVar4] = 0;
        }
      }
      if (ppuVar1 == &local_d8) {
        if (puVar7 != (undefined2 *)0x0) {
          FMemory::Free(puVar7);
        }
      }
      else {
        if (*ppuVar1 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *ppuVar1 = puVar7;
        param_2[0x10] = iVar14;
        param_2[0x11] = iVar10;
      }
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free(local_a8);
      }
    }
    puVar7 = &DAT_143f3eda8;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    if (*(int *)(param_1 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_1;
    }
    cVar3 = FUN_1416a6530(0xffffffff80000002,puVar8,L"RadeonSoftwareEdition",&local_b8);
    if (cVar3 != '\0') {
      local_c8 = (undefined2 *)0x0;
      local_c0 = 0;
      if (*(int *)(param_1 + 1) != 0) {
        puVar7 = (undefined2 *)*param_1;
      }
      cVar3 = FUN_1416a6530(0xffffffff80000002,puVar7,L"RadeonSoftwareVersion",&local_c8);
      pvVar2 = local_b8;
      if (cVar3 != '\0') {
        lVar11 = (longlong)(int)local_b0;
        local_d8 = (undefined2 *)0x0;
        local_d0 = (int)local_b0;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_d8,(2 - (uint)((int)local_b0 != 0)) + (int)local_b0,0);
        puVar7 = local_d8;
        _guard_xfg_dispatch_icall_nop(local_d8,pvVar2,lVar11 * 2);
        iVar4 = local_d0;
        lVar11 = (longlong)local_d0;
        local_d0 = (2 - (uint)(local_d0 != 0)) + local_d0;
        if (local_cc < local_d0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,iVar4);
          puVar7 = local_d8;
        }
        puVar8 = local_c8;
        puVar7[lVar11 - (ulonglong)(iVar4 != 0)] = 0x20;
        (puVar7 + (lVar11 - (ulonglong)(iVar4 != 0)))[1] = 0;
        if (local_d0 < 2) {
          lVar11 = (longlong)(int)local_c0;
          local_d8 = (undefined2 *)0x0;
          local_d0 = (int)local_c0;
          iVar12 = (int)local_c0;
          if ((int)local_c0 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_c0 & 0xffffffff,0);
            puVar6 = local_d8;
            _guard_xfg_dispatch_icall_nop(local_d8,puVar8,lVar11 * 2);
            iVar12 = local_d0;
            iVar9 = local_cc;
          }
        }
        else {
          if ((int)local_c0 != 0) {
            iVar9 = (int)local_c0 + -1;
          }
          if ((local_d0 != 0) || (iVar9 == 0)) {
            local_res18 = 0;
          }
          local_res18 = local_d0 + iVar9 + local_res18;
          local_d8 = puVar7;
          if (local_cc < local_res18) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8,local_res18);
          }
          puVar7 = local_c8;
          iVar4 = local_d0;
          puVar6 = local_d8;
          iVar12 = local_d0;
          local_res8 = local_cc;
          if (iVar9 != 0) {
            lVar11 = (longlong)local_d0;
            local_d0 = iVar9 + (uint)(local_d0 == 0) + local_d0;
            if (local_cc < local_d0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,iVar4);
            }
            local_res8 = local_cc;
            iVar12 = local_d0;
            puVar6 = local_d8;
            puVar8 = local_d8 + (lVar11 - (ulonglong)(iVar4 != 0));
            _guard_xfg_dispatch_icall_nop(puVar8,puVar7,(longlong)iVar9 * 2);
            puVar8[iVar9] = 0;
          }
          puVar7 = (undefined2 *)0x0;
          iVar9 = local_res8;
        }
        if (ppuVar1 == &local_d8) {
          if (puVar6 != (undefined2 *)0x0) {
            FMemory::Free(puVar6);
          }
        }
        else {
          if (*ppuVar1 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          *ppuVar1 = puVar6;
          param_2[0x10] = iVar12;
          param_2[0x11] = iVar9;
        }
        if (puVar7 != (undefined2 *)0x0) {
          FMemory::Free(puVar7);
        }
      }
      if (local_c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  puVar6 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) != 0) {
    puVar6 = (undefined2 *)*param_1;
  }
  FUN_1416a6530(0xffffffff80000002,puVar6,L"DriverDate",param_2 + 0x12);
  return;
}



// FUNCTION 1416a2040 FUN_1416a2040 body=1184 status=ok
// SIG undefined FUN_1416a2040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416a2040(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 *hObject;
  HANDLE pvVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined **ppuStack_10198;
  undefined1 uStack_10190;
  longlong lStack_10188;
  wchar_t awStack_10168 [128];
  wchar_t *pwStack_10068;
  wchar_t *pwStack_10060;
  undefined4 uStack_10058;
  char acStack_10048 [65568];
  
  plVar5 = (longlong *)FUN_1415dcd20();
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  hObject = CreateFileW(&DAT_1468b2810,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hObject != &DAT_ffffffffffffffff) {
    GetCurrentThreadId();
    DVar3 = GetCurrentProcessId();
    pvVar6 = GetCurrentProcess();
    _guard_xfg_dispatch_icall_nop(pvVar6,DVar3,hObject,0);
    CloseHandle(hObject);
  }
  uVar7 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar7,L"debugcrashhandler");
  if (cVar2 == '\0') {
    uVar7 = FUN_1415a8bd0(0);
    FGenericPlatformMallocCrash::SetAsGMalloc(uVar7);
    plVar5 = (longlong *)FUN_141672640();
    (**(code **)(*plVar5 + 0x60))(plVar5);
    DAT_1468c2175 = 1;
    DVar3 = GetCurrentThreadId();
    uVar1 = DAT_1468c21c0;
    DAT_1468c21c0 = DVar3;
    if ((DAT_1468e22a0 != 0) && (DAT_1468e2298 != (longlong *)0x0)) {
      (**(code **)(*DAT_1468e2298 + 0x28))(DAT_1468e2298,0);
      if (DAT_1468e2298 != (longlong *)0x0) {
        DAT_1468e2298 = (longlong *)FMemory::Realloc(DAT_1468e2298,0,0);
      }
      DAT_1468e22a0 = 0;
    }
    uVar7 = FWindowsPlatformStackWalk::MakeThreadContextWrapper
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8),
                       *(undefined8 *)(param_1 + 0x28));
    FWindowsPlatformStackWalk::StackWalkAndDump(acStack_10048,0xffff,0,uVar7);
    FWindowsPlatformStackWalk::ReleaseThreadContextWrapper(uVar7);
    lVar11 = -1;
    if (*(int *)**(undefined8 **)(param_1 + 0x20) != 1) {
      FUN_14169c900();
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while ((&DAT_1468b6170)[lVar9] != 0);
      iVar12 = (int)lVar9;
      iVar4 = 0x4000 - iVar12;
      if (0 < iVar4) {
        wcsncpy(&DAT_1468b6170 + iVar12,&DAT_1468be170,(longlong)iVar4 - 1);
        *(undefined2 *)(&DAT_1468b616e + (longlong)iVar4 * 2 + (longlong)iVar12 * 2) = 0;
      }
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while ((&DAT_1468b6170)[lVar9] != 0);
      iVar12 = (int)lVar9;
      iVar4 = 0x4000 - iVar12;
      if (0 < iVar4) {
        wcsncpy(&DAT_1468b6170 + iVar12,L"\r\n\r\n",(longlong)iVar4 - 1);
        *(undefined2 *)(&DAT_1468b616e + (longlong)iVar4 * 2 + (longlong)iVar12 * 2) = 0;
      }
    }
    pwStack_10068 = (wchar_t *)0x0;
    lVar9 = -1;
    do {
      lVar8 = lVar9;
      lVar9 = lVar8 + 1;
    } while (acStack_10048[lVar8 + 1] != '\0');
    uVar10 = (int)lVar8 + 2;
    uStack_10058 = (undefined4)(lVar8 + 1);
    if ((0x80 < uVar10) && (uVar10 != 0)) {
      pwStack_10068 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)uVar10 * 2,0);
    }
    pwStack_10060 = awStack_10168;
    if (pwStack_10068 != (wchar_t *)0x0) {
      pwStack_10060 = pwStack_10068;
    }
    FGenericPlatformString::Convert<char,wchar_t>(pwStack_10060,uVar10,acStack_10048,uVar10);
    do {
      lVar11 = lVar11 + 1;
    } while ((&DAT_1468b6170)[lVar11] != 0);
    iVar4 = (int)lVar11;
    iVar12 = 0x4000 - iVar4;
    if (0 < iVar12) {
      wcsncpy(&DAT_1468b6170 + iVar4,pwStack_10060,(longlong)iVar12 - 1);
      *(undefined2 *)(&DAT_1468b616e + (longlong)iVar12 * 2 + (longlong)iVar4 * 2) = 0;
    }
    if (pwStack_10068 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    plVar5 = (longlong *)FUN_141672640();
    (**(code **)(*plVar5 + 0x48))(plVar5);
    FUN_14159fbd0(&ppuStack_10198);
    ppuStack_10198 = &PTR_FUN_144cdb438;
    uStack_10190 = 0;
    lVar11 = FWindowsPlatformStackWalk::MakeThreadContextWrapper
                       (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8),
                        *(undefined8 *)(param_1 + 0x28));
    FUN_1415a8350(0xfffffffd,100,lVar11);
    if (DAT_1464a8d80 == '\0') {
      FUN_1415b68b0(&ppuStack_10198);
      `anonymous_namespace'::WriteMinidump
                (&ppuStack_10198,&DAT_1468b2810,*(undefined8 *)(param_1 + 0x20),0);
    }
    else {
      FUN_1416a6f40(&ppuStack_10198,*(undefined8 *)(param_1 + 0x20),&DAT_1468c0170,0);
    }
    TBaseMulticastDelegate<void>::Broadcast(&DAT_1464aefe0);
    if (lVar11 != 0) {
      FWindowsPlatformStackWalk::ReleaseThreadContextWrapper(lVar11);
    }
    ppuStack_10198 = &PTR_FUN_144ca06b0;
    if (lStack_10188 != 0) {
      FMemory::Free();
    }
    DAT_1468c21c0 = uVar1;
    return;
  }
  do {
    FUN_1416b1760(0x3a83126f);
  } while( true );
}



// FUNCTION 1416a24e0 HandleGameExplorerIntegration body=3351 status=ok
// SIG undefined HandleGameExplorerIntegration(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 HandleGameExplorerIntegration(void)

{
  void *_Dst;
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  BOOL BVar4;
  uint uVar5;
  HRESULT HVar6;
  int iVar7;
  int iVar8;
  DWORDLONG dwlConditionMask;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  longlong *plVar22;
  longlong *_Src;
  longlong *plVar23;
  undefined1 auStackY_728 [32];
  longlong *local_6f8;
  uint local_6f0;
  int local_6ec;
  longlong *local_6e8;
  uint local_6e0;
  int local_6dc;
  int local_6d0;
  longlong *local_6c8;
  int local_6c0 [2];
  longlong *local_6b8;
  longlong *local_6b0;
  HRESULT local_6a8;
  longlong *local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  _OSVERSIONINFOEXW local_668;
  OLECHAR local_458 [264];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStackY_728;
  plVar22 = (longlong *)0x0;
  iVar8 = 0;
  local_668.dwOSVersionInfoSize = 0x11c;
  local_668.dwMajorVersion = 0;
  local_668.dwMinorVersion = 0;
  local_668.dwBuildNumber = 0;
  local_668.dwPlatformId = 0;
  _guard_xfg_dispatch_icall_nop(local_668.szCSDVersion,0,0x100);
  local_668.wServicePackMajor = 0;
  local_668.wServicePackMinor = 0;
  local_668.wSuiteMask = 0;
  local_668.wProductType = '\x01';
  local_668.wReserved = '\0';
  dwlConditionMask = VerSetConditionMask(0,0x80,1);
  BVar4 = VerifyVersionInfoW(&local_668,0x80,dwlConditionMask);
  if (BVar4 == 0) {
    return 1;
  }
  GetModuleFileNameW((HMODULE)0x0,local_248,0x103);
  uVar5 = CoInitialize((LPVOID)0x0);
  if (1 < uVar5) {
    return 0;
  }
  HVar6 = CoCreateInstance((IID *)&DAT_144cdbb68,(LPUNKNOWN)0x0,1,(IID *)&DAT_144cdbb78,&local_6c8);
  local_6c0[0] = 1;
  uVar9 = Ordinal_2(local_248);
  local_690 = uVar9;
  if ((-1 < HVar6) && (local_6c8 != (longlong *)0x0)) {
    (**(code **)(*local_6c8 + 0x30))(local_6c8,uVar9,local_6c0);
  }
  uVar10 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar10,L"installge");
  if (cVar3 == '\0') {
    uVar10 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar10,L"uninstallge");
    if (cVar3 == '\0') {
      Ordinal_6(uVar9);
      if (local_6c8 != (longlong *)0x0) {
        (**(code **)(*local_6c8 + 0x10))();
        local_6c8 = (longlong *)0x0;
      }
      CoUninitialize();
      if (local_6c0[0] != 0) {
        return 1;
      }
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (&local_688,
                         L"The current level of parental controls do not allow you to run this game."
                         ,L"UnrealEd",L"Error_ParentalControls");
      FUN_1416786b0(0,uVar9,0);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_688);
      return 0;
    }
    if (local_6c8 == (longlong *)0x0) {
      pwVar21 = L"GameExplorerUninstallationFailedDoToNotRunningVista";
      pwVar20 = L"WindowsPlatform";
      pwVar15 = L"GameExplorer uninstallation failed because you are probably not running Vista.";
    }
    else {
      local_688 = 0x7089dd1d;
      uStack_684 = 0x4cc8fe97;
      uStack_680 = 0x3e26ac8a;
      uStack_67c = 0x423c1f44;
      iVar8 = (**(code **)(*local_6c8 + 0x20))(local_6c8,&local_688);
      if (iVar8 < 0) {
        pwVar21 = L"GameExplorerUninstallationFailed";
        pwVar20 = L"WindowsPlatform";
        pwVar15 = L"GameExplorer uninstallation was a failure, quitting now.";
      }
      else {
        pwVar21 = L"GameExplorerUninstallationSuccessful";
        pwVar20 = L"WindowsPlatform";
        pwVar15 = L"GameExplorer uninstallation was successful, quitting now.";
      }
    }
  }
  else {
    if ((local_6c0[0] != 0) && (local_6c8 != (longlong *)0x0)) {
      uVar10 = FUN_1416ac480();
      uVar10 = Ordinal_2(uVar10);
      local_688 = 0x7089dd1d;
      uStack_684 = 0x4cc8fe97;
      uStack_680 = 0x3e26ac8a;
      uStack_67c = 0x423c1f44;
      lVar17 = *local_6c8;
      local_698 = uVar10;
      uVar11 = FCommandLine::Get();
      cVar3 = FParse::Param(uVar11,L"allusers");
      iVar7 = (**(code **)(lVar17 + 0x18))(local_6c8,uVar9,uVar10,(cVar3 != '\0') + '\x02');
      if (iVar7 < 0) {
LAB_1416a303b:
        pwVar21 = L"GameExplorerInstallationFailed";
        pwVar20 = L"WindowsPlatform";
        pwVar15 = L"GameExplorer installation was a failure, quitting now.";
      }
      else {
        SHGetFolderPathW(0,0x801c,0,0);
        StringFromGUID2((GUID *)&DAT_144cdbb88,local_458,0x103);
        local_6e8 = (longlong *)0x0;
        lVar17 = -1;
        local_6dc = 0;
        plVar23 = plVar22;
        if ((short)local_668.dwOSVersionInfoSize == 0) {
LAB_1416a274e:
          iVar7 = 1;
        }
        else {
          lVar12 = -1;
          do {
            lVar19 = lVar12 + 1;
            lVar2 = lVar12 + -9;
            lVar12 = lVar19;
          } while (local_668.szCSDVersion[lVar2] != L'\0');
          uVar5 = (int)lVar19 + 1;
          local_6e0 = uVar5;
          if (0 < (int)uVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6e8,0);
          }
          iVar8 = local_6dc;
          uVar18 = local_6e0;
          plVar22 = local_6e8;
          plVar23 = (longlong *)(ulonglong)local_6e0;
          FGenericPlatformString::Memcpy(local_6e8,&local_668,(longlong)(int)uVar5 * 2);
          iVar7 = 0;
          if (uVar18 == 0) goto LAB_1416a274e;
        }
        local_6f0 = (uint)plVar23;
        local_6f8 = plVar22;
        local_6ec = iVar8;
        if (iVar8 < (int)(local_6f0 + 0x20 + iVar7)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_6f8);
          plVar23 = (longlong *)(ulonglong)local_6f0;
        }
        iVar8 = (int)plVar23;
        local_6f0 = (0x21 - (uint)(iVar8 != 0)) + iVar8;
        if (local_6ec < (int)local_6f0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6f8,plVar23);
        }
        lVar12 = (longlong)iVar8 - (ulonglong)(iVar8 != 0);
        builtin_wcsncpy((wchar_t *)((longlong)local_6f8 + lVar12 * 2),L"\\Microso",8);
        builtin_wcsncpy((wchar_t *)((longlong)local_6f8 + lVar12 * 2 + 0x10),L"ft\\Windo",8);
        builtin_wcsncpy((wchar_t *)((longlong)local_6f8 + lVar12 * 2 + 0x20),L"ws\\GameE",8);
        builtin_wcsncpy((wchar_t *)((longlong)local_6f8 + lVar12 * 2 + 0x30),L"xplorer\\",8);
        *(undefined2 *)((longlong)local_6f8 + lVar12 * 2 + 0x40) = 0;
        plVar22 = local_6f8;
        uVar5 = local_6f0;
        if (local_458[0] != L'\0') {
          do {
            lVar17 = lVar17 + 1;
          } while (local_458[lVar17] != L'\0');
          iVar8 = (int)lVar17;
          if ((local_6f0 != 0) || (iVar7 = 1, iVar8 == 0)) {
            iVar7 = 0;
          }
          uVar18 = local_6f0;
          if (local_6ec < (int)(iVar7 + iVar8 + local_6f0)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_6f8);
            uVar18 = local_6f0;
          }
          plVar22 = local_6f8;
          uVar5 = uVar18;
          if (iVar8 != 0) {
            local_6f0 = iVar8 + (uint)(uVar18 == 0) + uVar18;
            if (local_6ec < (int)local_6f0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6f8,uVar18);
            }
            uVar5 = local_6f0;
            plVar22 = local_6f8;
            _Dst = (void *)((longlong)local_6f8 +
                           ((longlong)(int)uVar18 - (ulonglong)(uVar18 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,local_458,(longlong)iVar8 * 2);
            *(undefined2 *)((longlong)iVar8 * 2 + (longlong)_Dst) = 0;
          }
        }
        local_6f8 = (longlong *)0x0;
        local_6f0 = uVar5;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_6f8,(0xb - (uint)(uVar5 != 0)) + uVar5,0);
        plVar23 = local_6f8;
        _guard_xfg_dispatch_icall_nop(local_6f8,plVar22,(longlong)(int)uVar5 * 2);
        uVar18 = local_6f0;
        lVar17 = (longlong)(int)local_6f0;
        local_6f0 = (0xb - (uint)(local_6f0 != 0)) + local_6f0;
        uVar16 = local_6f0;
        if (local_6ec < (int)local_6f0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6f8,uVar18);
          plVar23 = local_6f8;
          uVar16 = local_6f0;
        }
        local_6f8 = (longlong *)0x0;
        builtin_wcsncpy((wchar_t *)((longlong)plVar23 + (lVar17 - (ulonglong)(uVar18 != 0)) * 2),
                        L"\\PlayTasks",0xb);
        local_6f0 = uVar5;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_6f8,(0xe - (uint)(uVar5 != 0)) + uVar5,0);
        _Src = local_6f8;
        _guard_xfg_dispatch_icall_nop(local_6f8,plVar22,(longlong)(int)uVar5 * 2);
        uVar5 = local_6f0;
        lVar17 = (longlong)(int)local_6f0;
        local_6f0 = (0xe - (uint)(local_6f0 != 0)) + local_6f0;
        if (local_6ec < (int)local_6f0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6f8,uVar5);
          _Src = local_6f8;
        }
        uVar18 = local_6f0;
        builtin_wcsncpy((wchar_t *)((lVar17 - (ulonglong)(uVar5 != 0)) * 2 + (longlong)_Src),
                        L"\\SupportTasks",0xe);
        plVar13 = (longlong *)FUN_1415c3d50();
        plVar14 = (longlong *)&DAT_143f3eda8;
        if (uVar16 != 0) {
          plVar14 = plVar23;
        }
        (**(code **)(*plVar13 + 0x58))(plVar13,plVar14,1);
        plVar13 = (longlong *)FUN_1415c3d50();
        plVar14 = (longlong *)&DAT_143f3eda8;
        if (uVar18 != 0) {
          plVar14 = _Src;
        }
        (**(code **)(*plVar13 + 0x58))(plVar13,plVar14,1);
        local_6a8 = CoCreateInstance((IID *)&DAT_145ac6190,(LPUNKNOWN)0x0,1,(IID *)&DAT_145ac6120,
                                     &local_6b8);
        (**(code **)*local_6b8)(local_6b8,&DAT_145ac6170,&local_6b0);
        (**(code **)(*local_6b8 + 0xa0))(local_6b8,local_248);
        (**(code **)(*local_6b8 + 0x58))(local_6b8,&DAT_144cd57bc);
        (**(code **)(*local_6b8 + 0x38))(local_6b8,L"Play");
        local_6f8 = (longlong *)FUN_1415c3d50();
        local_6e8 = (longlong *)0x0;
        local_6e0 = uVar16;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_6e8,(3 - (uint)(uVar16 != 0)) + uVar16,0);
        plVar14 = local_6e8;
        _guard_xfg_dispatch_icall_nop(local_6e8,plVar23,(longlong)(int)uVar16 * 2);
        local_6d0 = local_6e0;
        local_6e0 = (3 - (uint)(local_6e0 != 0)) + local_6e0;
        if (local_6dc < (int)local_6e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6e8);
          plVar14 = local_6e8;
        }
        puVar1 = (undefined4 *)
                 ((longlong)plVar14 + ((longlong)local_6d0 - (ulonglong)(local_6d0 != 0)) * 2);
        *puVar1 = 0x30005c;
        *(undefined2 *)(puVar1 + 1) = 0;
        plVar13 = (longlong *)&DAT_143f3eda8;
        if (local_6e0 != 0) {
          plVar13 = plVar14;
        }
        (**(code **)(*local_6f8 + 0x58))
                  (local_6f8,plVar13,CONCAT71((uint7)(uint3)(local_6e0 >> 8),1));
        if (plVar14 != (longlong *)0x0) {
          FMemory::Free(plVar14);
        }
        local_6e8 = (longlong *)0x0;
        local_6e0 = uVar16;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_6e8,(0xc - (uint)(uVar16 != 0)) + uVar16,0);
        plVar14 = local_6e8;
        _guard_xfg_dispatch_icall_nop(local_6e8,plVar23,(longlong)(int)uVar16 * 2);
        local_6d0 = local_6e0;
        local_6e0 = (0xc - (uint)(local_6e0 != 0)) + local_6e0;
        if (local_6dc < (int)local_6e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6e8);
          plVar14 = local_6e8;
        }
        puVar1 = (undefined4 *)
                 ((longlong)plVar14 + ((longlong)local_6d0 - (ulonglong)(local_6d0 != 0)) * 2);
        *puVar1 = 0x30005c;
        puVar1[1] = 0x50005c;
        puVar1[2] = 0x61006c;
        puVar1[3] = 0x2e0079;
        puVar1[4] = 0x6e006c;
        plVar13 = (longlong *)&DAT_143f3eda8;
        if (local_6e0 != 0) {
          plVar13 = plVar14;
        }
        *(undefined2 *)(puVar1 + 5) = 0x6b;
        *(undefined2 *)((longlong)puVar1 + 0x16) = 0;
        (**(code **)(*local_6b0 + 0x30))(local_6b0,plVar13,1);
        if (plVar14 != (longlong *)0x0) {
          FMemory::Free(plVar14);
        }
        (**(code **)(*local_6b8 + 0x58))(local_6b8,L"editor");
        (**(code **)(*local_6b8 + 0x38))(local_6b8,L"Editor");
        local_6f8 = (longlong *)FUN_1415c3d50();
        local_6e8 = (longlong *)0x0;
        local_6e0 = uVar16;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_6e8,(3 - (uint)(uVar16 != 0)) + uVar16,0);
        plVar14 = local_6e8;
        _guard_xfg_dispatch_icall_nop(local_6e8,plVar23,(longlong)(int)uVar16 * 2);
        local_6d0 = local_6e0;
        local_6e0 = (3 - (uint)(local_6e0 != 0)) + local_6e0;
        if (local_6dc < (int)local_6e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6e8);
          plVar14 = local_6e8;
        }
        puVar1 = (undefined4 *)
                 ((longlong)plVar14 + ((longlong)local_6d0 - (ulonglong)(local_6d0 != 0)) * 2);
        *puVar1 = 0x31005c;
        *(undefined2 *)(puVar1 + 1) = 0;
        plVar13 = (longlong *)&DAT_143f3eda8;
        if (local_6e0 != 0) {
          plVar13 = plVar14;
        }
        (**(code **)(*local_6f8 + 0x58))
                  (local_6f8,plVar13,CONCAT71((uint7)(uint3)(local_6e0 >> 8),1));
        if (plVar14 != (longlong *)0x0) {
          FMemory::Free(plVar14);
        }
        local_6e8 = (longlong *)0x0;
        local_6e0 = uVar16;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_6e8,(0xe - (uint)(uVar16 != 0)) + uVar16,0);
        plVar14 = local_6e8;
        _guard_xfg_dispatch_icall_nop(local_6e8,plVar23,(longlong)(int)uVar16 * 2);
        uVar5 = local_6e0;
        lVar17 = (longlong)(int)local_6e0;
        local_6e0 = (0xe - (uint)(local_6e0 != 0)) + local_6e0;
        if (local_6dc < (int)local_6e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6e8);
          plVar14 = local_6e8;
        }
        builtin_wcsncpy((wchar_t *)((longlong)plVar14 + (lVar17 - (ulonglong)(uVar5 != 0)) * 2),
                        L"\\1\\Editor.lnk",0xe);
        plVar13 = (longlong *)&DAT_143f3eda8;
        if (local_6e0 != 0) {
          plVar13 = plVar14;
        }
        (**(code **)(*local_6b0 + 0x30))(local_6b0,plVar13,1);
        if (plVar14 != (longlong *)0x0) {
          FMemory::Free(plVar14);
        }
        (**(code **)(*local_6b0 + 0x10))();
        (**(code **)(*local_6b8 + 0x10))();
        CoCreateInstance((IID *)&DAT_145ac6110,(LPUNKNOWN)0x0,1,(IID *)&DAT_145ac6130,&local_6a0);
        (**(code **)*local_6a0)(local_6a0,&DAT_145ac6170,&local_6b0);
        (**(code **)(*local_6a0 + 0x18))(local_6a0,L"http://www.unrealtournament3.com/",0);
        local_6f8 = (longlong *)FUN_1415c3d50();
        local_6e8 = (longlong *)0x0;
        local_6e0 = uVar18;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_6e8,(3 - (uint)(uVar18 != 0)) + uVar18,0);
        plVar14 = local_6e8;
        _guard_xfg_dispatch_icall_nop(local_6e8,_Src,(longlong)(int)uVar18 * 2);
        uVar5 = local_6e0;
        lVar17 = (longlong)(int)local_6e0;
        local_6e0 = (3 - (uint)(local_6e0 != 0)) + local_6e0;
        if (local_6dc < (int)local_6e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6e8,uVar5);
          plVar14 = local_6e8;
        }
        puVar1 = (undefined4 *)((longlong)plVar14 + (lVar17 - (ulonglong)(uVar5 != 0)) * 2);
        *puVar1 = 0x30005c;
        *(undefined2 *)(puVar1 + 1) = 0;
        plVar13 = (longlong *)&DAT_143f3eda8;
        if (local_6e0 != 0) {
          plVar13 = plVar14;
        }
        (**(code **)(*local_6f8 + 0x58))
                  (local_6f8,plVar13,CONCAT71((uint7)(uint3)(local_6e0 >> 8),1));
        if (plVar14 != (longlong *)0x0) {
          FMemory::Free();
        }
        local_6e8 = (longlong *)0x0;
        TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_6e8,_Src,uVar18,0);
        uVar5 = local_6e0;
        lVar17 = (longlong)(int)local_6e0;
        local_6e0 = (0xb - (uint)(local_6e0 != 0)) + local_6e0;
        if (local_6dc < (int)local_6e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6e8,uVar5);
        }
        plVar14 = local_6e8;
        puVar1 = (undefined4 *)((longlong)local_6e8 + (lVar17 - (ulonglong)(uVar5 != 0)) * 2);
        *puVar1 = 0x30005c;
        puVar1[1] = 0x55005c;
        puVar1[2] = 0x330054;
        puVar1[3] = 0x75002e;
        plVar13 = (longlong *)&DAT_143f3eda8;
        if (local_6e0 != 0) {
          plVar13 = local_6e8;
        }
        puVar1[4] = 0x6c0072;
        *(undefined2 *)(puVar1 + 5) = 0;
        (**(code **)(*local_6b0 + 0x30))(local_6b0,plVar13,1);
        if (plVar14 != (longlong *)0x0) {
          FMemory::Free(plVar14);
        }
        (**(code **)(*local_6b0 + 0x10))();
        (**(code **)(*local_6a0 + 0x10))();
        if (_Src != (longlong *)0x0) {
          FMemory::Free(_Src);
        }
        if (plVar23 != (longlong *)0x0) {
          FMemory::Free(plVar23);
        }
        if (plVar22 != (longlong *)0x0) {
          FMemory::Free(plVar22);
        }
        if (local_6a8 < 0) goto LAB_1416a303b;
        pwVar21 = L"GameExplorerInstallationSuccessful";
        pwVar20 = L"WindowsPlatform";
        pwVar15 = L"GameExplorer installation was successful, quitting now.";
      }
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (&local_6e8,pwVar15,pwVar20,pwVar21);
      FUN_1416786b0(0,uVar9,0);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_6e8);
      Ordinal_6(local_698);
      uVar9 = local_690;
      goto LAB_1416a314e;
    }
    pwVar21 = L"GameExplorerInstallationFailedDoToAccessPermissions";
    pwVar20 = L"WindowsPlatform";
    pwVar15 = 
    L"GameExplorer installation failed because you don\'t have access (check parental control levels and that you are running XP). You should not need Admin access"
    ;
  }
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (&local_688,pwVar15,pwVar20,pwVar21);
  FUN_1416786b0(0,uVar10,0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_688);
LAB_1416a314e:
  Ordinal_6(uVar9);
  if (local_6c8 != (longlong *)0x0) {
    (**(code **)(*local_6c8 + 0x10))();
    local_6c8 = (longlong *)0x0;
  }
  CoUninitialize();
  return 0;
}



// FUNCTION 1416a3200 HardKillIfAutomatedTesting body=99 status=ok
// SIG undefined HardKillIfAutomatedTesting(void)

void HardKillIfAutomatedTesting(void)

{
  undefined8 uVar1;
  char cVar2;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FCommandLine::Get();
  FParse::Value(uVar1,L"AutomatedPerfTesting=",local_res8);
  cVar2 = FUN_140612c50();
  if ((cVar2 == '\x01') && (local_res8[0] != 0)) {
    uVar1 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar1,L"KillAllPopUpBlockingWindows");
    if (cVar2 == '\x01') {
      FUN_1416af6e0(L"KillAllPopUpBlockingWindows.bat",0,0);
    }
  }
  return;
}



// FUNCTION 1416a3270 FUN_1416a3270 body=33 status=ok
// SIG undefined FUN_1416a3270(void)

char FUN_1416a3270(undefined1 *param_1)

{
  if ((DAT_1469e420d != '\0') && (param_1 != (undefined1 *)0x0)) {
    *param_1 = DAT_1469e420c;
  }
  return DAT_1469e420d;
}



// FUNCTION 1416a32a0 Init body=289 status=ok
// SIG undefined Init(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FName::Init(undefined8 param_1,ushort *param_2,int param_3,undefined4 param_4,char param_5,
                undefined4 param_6)

{
  ushort uVar1;
  char cVar2;
  undefined2 uVar3;
  ushort *puVar4;
  undefined1 auStack_878 [32];
  undefined4 local_858;
  undefined4 local_850;
  undefined2 local_848;
  int local_838 [4];
  ushort local_828 [64];
  longlong local_7a8;
  undefined8 local_7a0;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_878;
  uVar1 = *param_2;
  puVar4 = param_2;
  while( true ) {
    if (uVar1 == 0) {
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_828);
      local_850 = param_6;
      local_858 = CONCAT31(local_858._1_3_,param_5);
      InitInternal_HashSplit<char>(param_1,local_7a0,param_3,param_4);
      if (local_7a8 != 0) {
        FMemory::Free();
      }
      return;
    }
    if (0x7f < uVar1) break;
    uVar1 = puVar4[1];
    puVar4 = puVar4 + 1;
  }
  if (((param_3 == 0) && (param_5 == '\x01')) &&
     (cVar2 = SplitNameWithCheckImpl<wchar_t>(param_2,local_828,0x400,local_838), cVar2 != '\0')) {
    param_2 = local_828;
    param_3 = local_838[0] + 1;
  }
  uVar3 = FUN_140438070();
  local_848 = 0;
  local_850 = CONCAT22(local_850._2_2_,uVar3);
  local_858 = param_6;
  InitInternal<wchar_t>(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1416a33d0 Init body=31 status=ok
// SIG undefined Init(void)

void FWindowsPlatformMemory::Init(void)

{
  undefined8 uVar1;
  
  FGenericPlatformMemory::Init();
  FUN_14169dad0();
  uVar1 = FUN_141672640();
  FUN_1415a6020(uVar1);
  return;
}



// FUNCTION 1416a33f0 FUN_1416a33f0 body=89 status=ok
// SIG undefined FUN_1416a33f0(void)

ulonglong FUN_1416a33f0(longlong *param_1,undefined8 param_2)

{
  DWORD DVar1;
  undefined8 *puVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  LPCWSTR lpFileName;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,local_18,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*puVar2;
  }
  DVar1 = GetFileAttributesW(lpFileName);
  uVar3 = CONCAT44(extraout_var,DVar1);
  if (local_18[0] != 0) {
    uVar3 = FMemory::Free();
  }
  if (DVar1 != 0xffffffff) {
    return (ulonglong)((byte)DVar1 & 1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1416a3450 IsRemoteSession body=25 status=ok
// SIG undefined IsRemoteSession(void)

bool FWindowsPlatformMisc::IsRemoteSession(void)

{
  int iVar1;
  
  iVar1 = GetSystemMetrics(0x1000);
  return iVar1 != 0;
}



// FUNCTION 1416a3470 IsValid body=243 status=ok
// SIG undefined IsValid(void)

ulonglong FGPUDriverInfo::IsValid(int *param_1)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  ulonglong in_RAX;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  wint_t *pwVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  
  if ((1 < param_1[4]) && (*param_1 != 0)) {
    pwVar3 = &DAT_143f3eda8;
    if (param_1[0xc] == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(param_1 + 10);
    }
    pwVar4 = L"Unknown";
    do {
      _C = *(wchar_t *)((longlong)(puVar5 + -0xa20b1bcc) + (longlong)pwVar4);
      if ((_C == L'\0') && (*pwVar4 == L'\0')) break;
      if (_C != *pwVar4) {
        wVar1 = towlower(_C);
        wVar2 = towlower(*pwVar4);
        in_RAX = CONCAT62(extraout_var,wVar2);
        if (wVar1 != wVar2) goto LAB_1416a34f1;
      }
      pwVar4 = pwVar4 + 1;
    } while( true );
  }
  goto LAB_1416a354e;
LAB_1416a3540:
  in_RAX = (ulonglong)wVar2;
  if (wVar1 != wVar2) {
    return CONCAT71((uint7)(byte)(wVar2 >> 8),1);
  }
  goto LAB_1416a354e;
LAB_1416a34f1:
  in_RAX = (ulonglong)wVar2;
  if (wVar1 != wVar2) {
    if (param_1[0xc] == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(param_1 + 10);
    }
    do {
      wVar1 = *(wint_t *)((longlong)(puVar5 + -0xa1f9f6d4) + (longlong)pwVar3);
      if ((wVar1 == 0) && (*pwVar3 == 0)) break;
      if (wVar1 != *pwVar3) {
        wVar1 = towlower(wVar1);
        wVar2 = towlower(*pwVar3);
        in_RAX = CONCAT62(extraout_var_00,wVar2);
        if (wVar1 != wVar2) goto LAB_1416a3540;
      }
      pwVar3 = pwVar3 + 1;
    } while( true );
  }
LAB_1416a354e:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1416a3570 IsValid body=8 status=ok
// SIG undefined IsValid(void)

bool FWindowsSystemWideCriticalSection::IsValid(longlong *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 1416a3580 IsValidXName body=1638 status=ok
// SIG undefined IsValidXName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FName::IsValidXName(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ushort *puVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort *puVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_268 [32];
  undefined4 local_248 [2];
  longlong local_240;
  undefined8 local_238;
  longlong local_230 [5];
  undefined8 *local_208;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined4 *local_1f0;
  longlong *local_1e8;
  undefined4 *local_1e0;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [24];
  ulonglong local_148;
  ulonglong local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  uint local_114;
  undefined1 local_110 [8];
  ulonglong local_108;
  uint local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  uVar12 = 0;
  local_248[0] = 0;
  if (*(int *)(param_1 + 1) < 2) {
LAB_1416a3bca:
    return CONCAT71((int7)(local_48 >> 8),1);
  }
  iVar6 = *(int *)(param_2 + 1);
  if (iVar6 < 2) goto LAB_1416a3bca;
  puVar18 = (ushort *)*param_2;
  local_240 = 0;
  local_238 = 0;
  local_148 = 0;
  local_140 = 0;
  local_128 = 0;
  puVar7 = puVar18 + iVar6 + -1;
  if (iVar6 == 0) {
    puVar7 = puVar18 + iVar6;
  }
  local_120 = 0;
  local_118 = 0xffffffff;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_230[4] = (ulonglong)((longlong)puVar7 + (1 - (longlong)puVar18)) >> 1;
  if (puVar7 < puVar18) {
    local_230[4] = 0;
  }
  uVar13 = uVar12;
  uVar14 = uVar12;
  uVar15 = uVar12;
  uVar16 = uVar12;
  uVar17 = uVar12;
  uVar19 = uVar12;
  local_230[0] = param_3;
  local_230[2] = param_4;
  local_208 = param_1;
  if (local_230[4] != 0) {
    do {
      uVar3 = *puVar18;
      local_248[0] = CONCAT22(local_248[0]._2_2_,uVar3);
      if ((int)uVar12 != (int)uVar16) {
        puVar8 = local_110;
        if (uVar15 != 0) {
          puVar8 = (undefined1 *)0x0;
        }
        for (iVar6 = *(int *)(((ulonglong)puVar8 | uVar15) +
                             ((longlong)((int)uVar17 + -1) & (ulonglong)uVar3) * 4); iVar6 != -1;
            iVar6 = *(int *)(uVar14 + 4 + (longlong)iVar6 * 0xc)) {
          if (*(ushort *)(uVar14 + (longlong)iVar6 * 0xc) == uVar3) {
            if (iVar6 != -1) goto LAB_1416a376c;
            break;
          }
        }
      }
      puVar9 = (ushort *)*param_1;
      puVar7 = puVar9 + *(int *)(param_1 + 1);
      for (; puVar9 != puVar7; puVar9 = puVar9 + 1) {
        if (*puVar9 == uVar3) {
          if (uVar3 != 0) {
            iVar6 = (int)uVar13;
            iVar11 = iVar6 + -1;
            if (iVar6 < 1) {
              iVar11 = 0;
            }
            iVar6 = (iVar6 < 1) + 1 + iVar6;
            local_238 = CONCAT44(local_238._4_4_,iVar6);
            if (local_238._4_4_ < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,uVar13);
            }
            *(ushort *)(local_240 + (longlong)iVar11 * 2) = uVar3;
            *(undefined2 *)(local_240 + 2 + (longlong)iVar11 * 2) = 0;
          }
          FUN_141699230(&local_148,local_200,local_248,0);
          uVar13 = local_238 & 0xffffffff;
          uVar17 = (ulonglong)local_100;
          uVar16 = (ulonglong)local_114;
          uVar12 = local_140 & 0xffffffff;
          uVar14 = local_148;
          uVar15 = local_108;
          break;
        }
      }
LAB_1416a376c:
      lVar5 = local_230[0];
      puVar18 = puVar18 + 1;
      uVar19 = uVar19 + 1;
    } while (uVar19 != local_230[4]);
    if (((int)uVar13 != 0) && ((int)uVar13 != 1)) {
      if (local_230[0] == 0) {
        uVar10 = 0;
      }
      else {
        local_f8 = 0;
        local_f0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0xffffffff;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        bVar20 = local_230[2] == 0;
        if (bVar20) {
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_1d8,L"Name",L"Core",L"NameDefaultErrorCtx");
        }
        else {
          uVar10 = FText::FText(local_1c0,local_230[2]);
        }
        local_a8[0] = 4;
        FText::FText(local_98,uVar10);
        local_80 = '\x01';
        local_230[2] = 0;
        local_230[3] = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_230 + 2,0);
        FGenericPlatformString::Memcpy(local_230[2],L"ErrorCtx",0x12);
        local_1f8 = local_230 + 2;
        local_1f0 = local_a8;
        FUN_1407484b0(&local_f8,local_230 + 4,&local_1f8,0);
        if (local_230[2] != 0) {
          FMemory::Free();
        }
        if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_90 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar2 = (int *)((longlong)local_90 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
        }
        if ((bVar20) && (local_1d0 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_1d0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_1d0)(local_1d0);
            LOCK();
            piVar2 = (int *)((longlong)local_1d0 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_1d0 + 8))(local_1d0,1);
            }
          }
        }
        if ((!bVar20) && (local_1b8 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_1b8 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_1b8)(local_1b8);
            LOCK();
            piVar2 = (int *)((longlong)local_1b8 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_1b8 + 8))(local_1b8,1);
            }
          }
        }
        uVar10 = FText::FromString(local_1a8,&local_240);
        local_78[0] = 4;
        FText::FText(local_68,uVar10);
        local_50 = '\x01';
        local_230[0] = 0;
        local_230[1] = 0x16;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_230,0);
        FGenericPlatformString::Memcpy(local_230[0],L"IllegalNameCharacters",0x2c);
        local_1e8 = local_230;
        local_1e0 = local_78;
        FUN_1407484b0(&local_f8,&local_208,&local_1e8,0);
        if (local_230[0] != 0) {
          FMemory::Free();
        }
        if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_60 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        if (local_1a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1a0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_1a0)(local_1a0);
            LOCK();
            piVar2 = (int *)((longlong)local_1a0 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_1a0 + 8))(local_1a0,1);
            }
          }
        }
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_178,
                            L"{ErrorCtx} may not contain the following characters: {IllegalNameCharacters}"
                            ,L"Core",L"NameContainsInvalidCharacters");
        uVar10 = FTextFormat::FTextFormat(local_160,uVar10);
        uVar10 = FText::Format(local_190,uVar10,&local_f8);
        FText::operator=(lVar5,uVar10);
        if (local_188 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_188 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_188)(local_188);
            LOCK();
            piVar2 = (int *)((longlong)local_188 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_188 + 8))(local_188,1);
            }
          }
        }
        if (local_170 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_170 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_170)(local_170);
            LOCK();
            piVar2 = (int *)((longlong)local_170 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_170 + 8))(local_170,1);
            }
          }
        }
        local_b0 = 0;
        if (local_b8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_f8);
        uVar10 = 0;
        uVar15 = local_108;
      }
      goto LAB_1416a3b6c;
    }
  }
  uVar10 = 1;
LAB_1416a3b6c:
  local_100 = 0;
  if (uVar15 != 0) {
    FMemory::Free(uVar15);
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_148);
  if (local_240 == 0) {
    return uVar10;
  }
  FMemory::Free();
  return uVar10;
}



// FUNCTION 1416a3bf0 FUN_1416a3bf0 body=209 status=ok
// SIG undefined FUN_1416a3bf0(void)

undefined1 FUN_1416a3bf0(undefined8 param_1,short *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_38;
  ulonglong local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  
  local_38 = 0;
  local_30 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_30 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar2 * 2);
  }
  local_20 = &local_38;
  local_10 = &local_28;
  local_18 = &LAB_14169c4c0;
  local_28 = param_3;
  uVar1 = FUN_1416a3cd0(param_1,param_2,&local_18);
  if (local_38 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1416a3cd0 FUN_1416a3cd0 body=370 status=ok
// SIG undefined FUN_1416a3cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1416a3cd0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  undefined1 *hFindFile;
  undefined1 *puVar5;
  ulonglong uVar6;
  LPCWSTR lpFileName;
  undefined1 auStack_2b8 [32];
  LPCWSTR local_298;
  int local_290;
  int local_28c;
  longlong local_288 [2];
  _WIN32_FIND_DATAW local_278;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 400))(param_1,local_288);
  iVar1 = *(int *)(puVar4 + 1);
  local_298 = (LPCWSTR)*puVar4;
  *puVar4 = 0;
  local_290 = *(int *)(puVar4 + 1);
  local_28c = *(int *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  if (local_28c < (int)((5 - (uint)(iVar1 != 0)) + local_290)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_298);
  }
  FString::PathAppend(&local_298,&DAT_144cdbb58,3);
  lpFileName = L"";
  if (local_290 != 0) {
    lpFileName = local_298;
  }
  hFindFile = FindFirstFileW(lpFileName,&local_278);
  puVar5 = hFindFile;
  if (local_298 != (LPCWSTR)0x0) {
    puVar5 = (undefined1 *)FMemory::Free();
  }
  if (local_288[0] != 0) {
    puVar5 = (undefined1 *)FMemory::Free();
  }
  if (hFindFile == &DAT_ffffffffffffffff) {
    uVar6 = (ulonglong)puVar5 & 0xffffffffffffff00;
  }
  else {
    bVar2 = 1;
    do {
      if (((local_278.cFileName[0] != L'.') || (local_278.cFileName[1] != L'\0')) &&
         ((local_278.cFileName[0] != L'.' ||
          ((local_278.cFileName[1] != L'.' || (local_278.cFileName[2] != L'\0')))))) {
        bVar2 = (*(code *)*param_3)(param_3[1],&local_278);
      }
      if (bVar2 == 0) break;
      BVar3 = FindNextFileW(hFindFile,&local_278);
    } while (BVar3 != 0);
    FindClose(hFindFile);
    uVar6 = (ulonglong)bVar2;
  }
  return uVar6;
}



// FUNCTION 1416a3e50 FUN_1416a3e50 body=209 status=ok
// SIG undefined FUN_1416a3e50(void)

undefined1 FUN_1416a3e50(undefined8 param_1,short *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_38;
  ulonglong local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  
  local_38 = 0;
  local_30 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_30 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar2 * 2);
  }
  local_20 = &local_38;
  local_10 = &local_28;
  local_18 = &LAB_14169c4d0;
  local_28 = param_3;
  uVar1 = FUN_1416a3cd0(param_1,param_2,&local_18);
  if (local_38 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1416a3f30 LocalPrint body=7 status=ok
// SIG void LocalPrint(LPCWSTR lpOutputString)

void __stdcall FWindowsPlatformMisc::LocalPrint(LPCWSTR lpOutputString)

{
                    /* WARNING: Could not recover jumptable at 0x0001416a3f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringW(lpOutputString);
  return;
}



// FUNCTION 1416a3f90 MessageBoxDlgProc body=2245 status=ok
// SIG undefined MessageBoxDlgProc(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 MessageBoxDlgProc(HWND param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  wchar_t **ppwVar7;
  undefined4 **ppuVar8;
  HWND hWnd;
  uint uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_148 [32];
  int local_104;
  undefined8 *local_100;
  undefined8 local_f8;
  wchar_t *local_f0;
  undefined8 local_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  wchar_t *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  tagPOINT local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  tagRECT local_30;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStackY_148;
  if (param_2 == 2) {
    UnregisterHotKey(param_1,100);
    UnregisterHotKey(param_1,0x65);
    if (DAT_1469e45cd != '\0') {
      UnregisterHotKey(param_1,0x66);
    }
  }
  else if (param_2 == 0x110) {
    GetWindowRect(param_1,&local_30);
    local_b0.x = local_30.right;
    local_b0.y = local_30.bottom;
    ScreenToClient(param_1,&local_b0);
    local_104 = local_b0.x + -8;
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    local_d0 = (wchar_t *)0x0;
    local_c8 = 0;
    local_e0 = (undefined4 *)0x0;
    local_d8 = 0;
    local_f0 = (wchar_t *)0x0;
    local_e8 = 0;
    local_100 = (undefined8 *)0x0;
    local_f8 = 0;
    if (DAT_1468b6148 == 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c0,7);
      iVar4 = (int)local_b8 + 7;
      local_b8 = CONCAT44(local_b8._4_4_,iVar4);
      if (local_b8._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0);
      }
      *local_c0 = 0x63006e00610043;
      *(undefined4 *)(local_c0 + 1) = 0x6c0065;
      *(undefined2 *)((longlong)local_c0 + 0xc) = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d0,10);
      iVar4 = (int)local_c8 + 10;
      local_c8 = CONCAT44(local_c8._4_4_,iVar4);
      if (local_c8._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0);
      }
      builtin_wcsncpy(local_d0,L"No to All",10);
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e0,3);
      iVar4 = (int)local_d8 + 3;
      local_d8 = CONCAT44(local_d8._4_4_,iVar4);
      if (local_d8._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0);
      }
      *local_e0 = 0x6f004e;
      *(undefined2 *)(local_e0 + 1) = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f0,0xb);
      iVar4 = (int)local_e8 + 0xb;
      local_e8 = CONCAT44(local_e8._4_4_,iVar4);
      if (local_e8._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0);
      }
      builtin_wcsncpy(local_f0,L"Yes to All",0xb);
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_100,4);
      iVar4 = (int)local_f8 + 4;
      local_f8 = CONCAT44(local_f8._4_4_,iVar4);
      if (local_f8._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100);
      }
      *local_100 = 0x7300650059;
    }
    else {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a8,L"Cancel",L"UnrealEd",L"Cancel");
      ppuVar6 = (undefined8 **)FText::ToString(uVar5);
      if (&local_c0 != ppuVar6) {
        iVar4 = *(int *)(ppuVar6 + 1);
        puVar10 = *ppuVar6;
        local_b8 = CONCAT44(local_b8._4_4_,iVar4);
        if (iVar4 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,iVar4,0);
          _guard_xfg_dispatch_icall_nop(local_c0,puVar10,(longlong)iVar4 * 2);
        }
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a0 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar2 = (int *)((longlong)local_a0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_90,L"No to All",L"UnrealEd",L"NoToAll");
      ppwVar7 = (wchar_t **)FText::ToString(uVar5);
      if (&local_d0 != ppwVar7) {
        iVar4 = *(int *)(ppwVar7 + 1);
        pwVar12 = *ppwVar7;
        local_c8 = CONCAT44(local_c8._4_4_,iVar4);
        if (iVar4 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d0,iVar4,0);
          _guard_xfg_dispatch_icall_nop(local_d0,pwVar12,(longlong)iVar4 * 2);
        }
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)local_88 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_78,&DAT_144cd6384,L"UnrealEd",&DAT_144cd6364);
      ppuVar8 = (undefined4 **)FText::ToString(uVar5);
      if (&local_e0 != ppuVar8) {
        iVar4 = *(int *)(ppuVar8 + 1);
        puVar11 = *ppuVar8;
        local_d8 = CONCAT44(local_d8._4_4_,iVar4);
        if (iVar4 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,iVar4,0);
          _guard_xfg_dispatch_icall_nop(local_e0,puVar11,(longlong)iVar4 * 2);
        }
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_60,L"Yes to All",L"UnrealEd",L"YesToAll");
      ppwVar7 = (wchar_t **)FText::ToString(uVar5);
      if (&local_f0 != ppwVar7) {
        iVar4 = *(int *)(ppwVar7 + 1);
        pwVar12 = *ppwVar7;
        local_e8 = CONCAT44(local_e8._4_4_,iVar4);
        if (iVar4 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f0,iVar4,0);
          _guard_xfg_dispatch_icall_nop(local_f0,pwVar12,(longlong)iVar4 * 2);
        }
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_48,&DAT_144cd63f8,L"UnrealEd",&DAT_144cd63d8);
      ppuVar6 = (undefined8 **)FText::ToString(uVar5);
      if (&local_100 != ppuVar6) {
        iVar4 = *(int *)(ppuVar6 + 1);
        puVar10 = *ppuVar6;
        local_f8 = CONCAT44(local_f8._4_4_,iVar4);
        if (iVar4 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_100,iVar4,0);
          _guard_xfg_dispatch_icall_nop(local_100,puVar10,(longlong)iVar4 * 2);
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    puVar10 = (undefined8 *)&DAT_143f3eda8;
    if ((int)local_b8 != 0) {
      puVar10 = local_c0;
    }
    SetDlgItem(param_1,puVar10,0x3f1,&local_104);
    pwVar12 = L"";
    if ((int)local_c8 != 0) {
      pwVar12 = local_d0;
    }
    SetDlgItem(param_1,pwVar12,0x3e9,&local_104);
    puVar11 = (undefined4 *)&DAT_143f3eda8;
    if ((int)local_d8 != 0) {
      puVar11 = local_e0;
    }
    SetDlgItem(param_1,puVar11,0x3eb,&local_104);
    pwVar12 = L"";
    if ((int)local_e8 != 0) {
      pwVar12 = local_f0;
    }
    SetDlgItem(param_1,pwVar12,1000,&local_104);
    puVar10 = (undefined8 *)&DAT_143f3eda8;
    if ((int)local_f8 != 0) {
      puVar10 = local_100;
    }
    SetDlgItem(param_1,puVar10,0x3ea,&local_104);
    SetDlgItemTextW(param_1,0x3ec,DAT_1469e45d0);
    SetWindowTextW(param_1,DAT_1469e45d8);
    hWnd = GetTopWindow(param_1);
    if (hWnd != (HWND)0x0) {
      SetWindowPos(hWnd,(HWND)&DAT_ffffffffffffffff,0,0,0,0,3);
    }
    SetForegroundWindow(param_1);
    SetWindowPos(param_1,(HWND)&DAT_ffffffffffffffff,0,0,0,0,3);
    RegisterHotKey(param_1,100,0,0x59);
    RegisterHotKey(param_1,0x65,0,0x4e);
    if (DAT_1469e45cd != '\0') {
      RegisterHotKey(param_1,0x66,0,0x1b);
    }
    SetWindowPos(param_1,(HWND)0xfffffffffffffffe,0,0,0,0,3);
    if (hWnd != (HWND)0x0) {
      SetWindowPos(hWnd,(HWND)0xfffffffffffffffe,0,0,0,0,3);
    }
    if (local_100 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (local_f0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_e0 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    if (local_d0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_c0 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  else if (param_2 == 0x111) {
    uVar9 = (uint)param_3 & 0xffff;
    if (uVar9 == 1000) {
      EndDialog(param_1,2);
    }
    else if (uVar9 == 0x3e9) {
      EndDialog(param_1,3);
    }
    else if (uVar9 == 0x3ea) {
      EndDialog(param_1,1);
    }
    else if (uVar9 == 0x3eb) {
      EndDialog(param_1,0);
    }
    else if ((uVar9 == 0x3f1) && (DAT_1469e45cd != '\0')) {
      EndDialog(param_1,4);
    }
  }
  else {
    if (param_2 != 0x312) {
      return 0;
    }
    if (param_3 == 100) {
      EndDialog(param_1,1);
    }
    else if (param_3 == 0x65) {
      EndDialog(param_1,0);
    }
    else if ((param_3 == 0x66) && (DAT_1469e45cd != '\0')) {
      EndDialog(param_1,4);
    }
  }
  return 1;
}



// FUNCTION 1416a4860 FUN_1416a4860 body=499 status=ok
// SIG undefined FUN_1416a4860(void)

ulonglong FUN_1416a4860(undefined4 param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  
  lVar3 = FUN_1415dcd20();
  if (lVar3 != 0) {
    FUN_1415e70c0(lVar3);
  }
  switch(param_1) {
  case 0:
    MessageBoxW((HWND)0x0,param_2,param_3,0x1000);
    uVar5 = 5;
    break;
  case 1:
    iVar2 = MessageBoxW((HWND)0x0,param_2,param_3,0x1004);
    uVar5 = (ulonglong)(iVar2 == 6);
    break;
  case 2:
    iVar2 = MessageBoxW((HWND)0x0,param_2,param_3,0x1001);
    uVar5 = (ulonglong)((iVar2 == 1) + 4);
    break;
  case 3:
    iVar2 = MessageBoxW((HWND)0x0,param_2,param_3,0x1023);
    if (iVar2 == 6) {
      uVar5 = 1;
    }
    else {
      uVar1 = 4;
      if (iVar2 == 7) {
        uVar1 = 0;
      }
      uVar5 = (ulonglong)uVar1;
    }
    break;
  case 4:
    iVar2 = MessageBoxW((HWND)0x0,param_2,param_3,0x1126);
    if (iVar2 != 2) {
      uVar5 = (ulonglong)((iVar2 != 10) + 6);
      break;
    }
  default:
    uVar5 = 4;
    break;
  case 5:
    DAT_1469e45cd = 0;
    DAT_1469e45d0 = param_2;
    DAT_1469e45d8 = param_3;
    pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
    uVar5 = DialogBoxParamW(pHVar4,(LPCWSTR)0x65,(HWND)0x0,MessageBoxDlgProc,0);
    uVar5 = uVar5 & 0xffffffff;
    break;
  case 6:
    DAT_1469e45cd = 1;
    DAT_1469e45d0 = param_2;
    DAT_1469e45d8 = param_3;
    pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
    uVar5 = DialogBoxParamW(pHVar4,(LPCWSTR)0x66,(HWND)0x0,MessageBoxDlgProc,0);
    uVar5 = uVar5 & 0xffffffff;
    break;
  case 7:
    DAT_1469e45cd = 0;
    DAT_1469e45d0 = param_2;
    DAT_1469e45d8 = param_3;
    pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
    uVar5 = DialogBoxParamW(pHVar4,(LPCWSTR)0x67,(HWND)0x0,MessageBoxDlgProc,0);
    uVar5 = uVar5 & 0xffffffff;
  }
  lVar3 = FUN_1415dcd20();
  if (lVar3 != 0) {
    FUN_1415e5410(lVar3);
  }
  return uVar5;
}



// FUNCTION 1416a4a80 FUN_1416a4a80 body=164 status=ok
// SIG undefined FUN_1416a4a80(void)

bool FUN_1416a4a80(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  BOOL BVar1;
  undefined8 *puVar2;
  LPCWSTR lpExistingFileName;
  LPCWSTR lpNewFileName;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,local_18,param_2);
  lpExistingFileName = L"";
  if (*(int *)(puVar2 + 1) == 0) {
    lpNewFileName = L"";
  }
  else {
    lpNewFileName = (LPCWSTR)*puVar2;
  }
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,local_28,param_3);
  if (*(int *)(puVar2 + 1) != 0) {
    lpExistingFileName = (LPCWSTR)*puVar2;
  }
  BVar1 = MoveFileW(lpExistingFileName,lpNewFileName);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return BVar1 != 0;
}



// FUNCTION 1416a4b30 FUN_1416a4b30 body=1066 status=ok
// SIG undefined FUN_1416a4b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1416a4b30(longlong *param_1,longlong *param_2,char param_3)

{
  wchar_t *_Str2;
  wint_t _C;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  undefined **ppuVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_108 [32];
  char local_e8;
  char local_e7;
  char local_e6;
  char local_e5;
  longlong *local_e0;
  longlong local_d8;
  undefined *local_c8 [4];
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  wchar_t *local_68;
  wchar_t *local_60;
  wchar_t *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  iVar9 = 0;
  *param_1 = 0;
  bVar11 = false;
  param_1[1] = 0;
  bVar12 = false;
  iVar1 = (int)param_2[1];
  bVar13 = false;
  local_e8 = '\0';
  local_e7 = '\0';
  local_e5 = param_3;
  local_e0 = param_1;
  if (0 < iVar1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar1);
    iVar1 = (int)param_2[1];
  }
  if (0 < iVar1) {
    local_d8 = 0;
    do {
      _C = *(wint_t *)(local_d8 + *param_2);
      iVar1 = iswlower(_C);
      iVar2 = iswupper(_C);
      iVar3 = iswdigit(_C);
      local_e6 = iVar3 != 0;
      if ((((iVar9 != 0) || (local_e5 == '\0')) || (_C != 0x62)) ||
         (((int)param_2[1] < 2 || (iVar3 = iswupper(*(wint_t *)(*param_2 + 2)), iVar3 == 0)))) {
        plVar8 = local_e0;
        if (((iVar2 != 0) || ((local_e6 != '\0' && (!bVar13)))) &&
           ((local_e8 == '\0' && ((!bVar12 && (local_e7 == '\0')))))) {
          if (!bVar11) {
            iVar2 = (int)local_e0[1];
            iVar4 = iVar2 + -1;
            iVar3 = iVar2 + -1;
            if (iVar2 == 0) {
              iVar4 = 0;
              iVar3 = -1;
            }
            if (0 < iVar4) {
              if (iVar2 < 1) {
                iVar3 = 0;
              }
              iVar2 = (iVar2 < 1) + 1 + iVar2;
              *(int *)(local_e0 + 1) = iVar2;
              if (*(int *)((longlong)local_e0 + 0xc) < iVar2) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e0);
              }
              bVar11 = true;
              *(undefined2 *)(*plVar8 + (longlong)iVar3 * 2) = 0x20;
              *(undefined2 *)(*plVar8 + 2 + (longlong)iVar3 * 2) = 0;
            }
          }
          local_e8 = '\x01';
        }
        plVar8 = local_e0;
        uVar7 = 0;
        cVar5 = '\0';
        if (iVar1 == 0) {
          cVar5 = local_e8;
        }
        local_e8 = cVar5;
        if (_C == 0x5f) {
          _C = 0x20;
          local_e8 = '\x01';
        }
        iVar1 = (int)local_e0[1] + -1;
        if ((int)local_e0[1] == 0) {
          iVar1 = 0;
        }
        if (iVar1 == 0) {
          _C = towupper(_C);
        }
        else if ((local_e6 == '\0') && ((bVar11 || (bVar12)))) {
          local_c8[0] = (undefined *)&DAT_144cd83b0;
          ppuVar10 = local_c8;
          local_c8[1] = (undefined *)&DAT_144cd83b8;
          local_c8[2] = &DAT_144cd83c0;
          local_c8[3] = &DAT_144cd83c8;
          local_a8 = &DAT_144cd83d0;
          local_a0 = &DAT_144cd83d8;
          local_98 = &DAT_144cd83e0;
          local_90 = &DAT_144cd83e8;
          local_88 = &DAT_144cd83f0;
          local_80 = &DAT_144cd83f8;
          local_78 = &DAT_144cd8400;
          local_70 = &DAT_144cd8408;
          local_68 = L"With";
          local_60 = L"When";
          local_58 = L"From";
          do {
            _Str2 = (wchar_t *)*ppuVar10;
            lVar6 = -1;
            do {
              lVar6 = lVar6 + 1;
            } while (_Str2[lVar6] != L'\0');
            iVar1 = (int)lVar6;
            if (iVar1 < (int)param_2[1] - iVar9) {
              lVar6 = (longlong)(iVar1 + iVar9) * 2;
              iVar2 = iswlower(*(wint_t *)(lVar6 + *param_2));
              if (((iVar2 == 0) && (*(short *)(*param_2 + lVar6) != 0)) &&
                 (iVar1 = wcsncmp((wchar_t *)(*param_2 + (longlong)iVar9 * 2),_Str2,(longlong)iVar1)
                 , iVar1 == 0)) {
                _C = towlower(_C);
                plVar8 = local_e0;
                goto LAB_1416a4e75;
              }
            }
            uVar7 = uVar7 + 1;
            ppuVar10 = ppuVar10 + 1;
          } while (uVar7 < 0xf);
          _C = towupper(_C);
          plVar8 = local_e0;
        }
LAB_1416a4e75:
        bVar11 = _C == 0x20;
        bVar12 = _C == 0x28;
        bVar13 = _C == 0x2d;
        if ((local_e6 == '\0') && ((local_e7 == '\0' || (1 < (ushort)(_C - 0x2d))))) {
          local_e7 = '\0';
        }
        else {
          local_e7 = '\x01';
        }
        if (_C != 0) {
          iVar1 = (int)plVar8[1];
          iVar2 = iVar1 + -1;
          if (iVar1 < 1) {
            iVar2 = 0;
          }
          iVar1 = (iVar1 < 1) + 1 + iVar1;
          *(int *)(plVar8 + 1) = iVar1;
          if (*(int *)((longlong)plVar8 + 0xc) < iVar1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar8);
          }
          *(wint_t *)(*plVar8 + (longlong)iVar2 * 2) = _C;
          *(undefined2 *)(*plVar8 + 2 + (longlong)iVar2 * 2) = 0;
        }
      }
      iVar9 = iVar9 + 1;
      local_d8 = local_d8 + 2;
      param_1 = local_e0;
    } while (iVar9 < (int)param_2[1]);
  }
  return param_1;
}



// FUNCTION 1416a4f60 FUN_1416a4f60 body=181 status=ok
// SIG undefined FUN_1416a4f60(void)

void FUN_1416a4f60(void)

{
  undefined8 uVar1;
  char cVar2;
  BOOL BVar3;
  DWORD DVar4;
  long lVar5;
  
  if (0 < DAT_1469e45c8) {
    return;
  }
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e4430);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e4430);
  }
  if (DAT_1469e45cc != '\0') goto LAB_1416a4ffe;
  uVar1 = FUN_1415d80a0();
  FThreadHeartBeat::KillHeartBeat(uVar1);
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 == DAT_1468c21c0) goto LAB_1416a4fd5;
  }
  else {
LAB_1416a4fd5:
    lVar5 = FUN_1415d7fb0();
    AK::MemoryMgr::StartProfileThreadUsage(lVar5);
  }
  DAT_1469e45cc = 1;
  FUN_1416a6710(1);
  DAT_1469e45cc = '\0';
LAB_1416a4ffe:
                    /* WARNING: Could not recover jumptable at 0x0001416a5009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e4430);
  return;
}



// FUNCTION 1416a5020 NormalizeDirectory body=696 status=ok
// SIG undefined NormalizeDirectory(void)

undefined8
FWindowsPlatformFile::NormalizeDirectory(undefined8 param_1,undefined8 param_2,short *param_3)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *_Src;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  
  _Src = (undefined2 *)0x0;
  local_50 = 0;
  iVar9 = 0;
  local_58 = (undefined2 *)0x0;
  lVar7 = -1;
  if ((param_3 != (short *)0x0) && (lVar5 = lVar7, *param_3 != 0)) {
    do {
      lVar5 = lVar5 + 1;
    } while (param_3[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_50 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,param_3,(longlong)(int)uVar4 * 2);
  }
  FPaths::NormalizeDirectoryName(&local_58);
  cVar2 = FString::StartsWith(&local_58,&DAT_144cdbaa8,1);
  if (cVar2 != '\0') {
    if ((int)local_50 == 0) {
      puVar8 = &DAT_143f3eda8;
      iVar3 = iVar9;
    }
    else {
      puVar8 = local_58;
      iVar3 = (int)local_50 + -1;
    }
    iVar11 = iVar3 + -2;
    iVar6 = iVar9;
    if ((-1 < iVar11) && (iVar6 = iVar3, iVar11 < iVar3)) {
      iVar6 = iVar11;
    }
    local_48 = (undefined2 *)0x0;
    local_3c = 0;
    psVar1 = puVar8 + ((longlong)iVar3 - (longlong)iVar6);
    iVar11 = 0;
    iVar3 = 0;
    if ((psVar1 != (short *)0x0) && (iVar11 = 0, iVar3 = 0, *psVar1 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar1[lVar7] != 0);
      iVar6 = (int)lVar7 + 1;
      local_40 = iVar6;
      if (0 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar11 = local_3c;
      iVar3 = local_40;
      _Src = local_48;
      FGenericPlatformString::Memcpy(local_48,psVar1,(longlong)iVar6 * 2);
    }
    local_38 = (undefined2 *)0x0;
    local_30 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    puVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,&DAT_143f607dc);
    if ((int)local_30 < 2) {
      puVar10 = _Src;
      _Src = (undefined2 *)0x0;
    }
    else {
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = iVar9;
      }
      if (((int)local_30 != 0) || (iVar3 = 1, iVar6 == 0)) {
        iVar3 = iVar9;
      }
      local_48 = puVar8;
      local_40 = (int)local_30;
      local_3c = local_30._4_4_;
      if (local_30._4_4_ < iVar3 + (int)local_30 + iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
      }
      iVar9 = local_40;
      puVar10 = local_48;
      puVar8 = (undefined2 *)0x0;
      iVar11 = local_3c;
      iVar3 = local_40;
      if (iVar6 != 0) {
        lVar7 = (longlong)local_40;
        local_40 = local_40 + (uint)(local_40 == 0) + iVar6;
        if (local_3c < local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar9,0);
        }
        iVar11 = local_3c;
        iVar3 = local_40;
        puVar10 = local_48;
        puVar8 = local_48 + (lVar7 - (ulonglong)(iVar9 != 0));
        ::_guard_xfg_dispatch_icall_nop(puVar8,_Src,(longlong)iVar6 * 2);
        puVar8[iVar6] = 0;
        puVar8 = (undefined2 *)0x0;
      }
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_50 = CONCAT44(iVar11,iVar3);
    local_58 = puVar10;
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
    if (_Src != (undefined2 *)0x0) {
      FMemory::Free(_Src);
    }
  }
  FPaths::ConvertRelativePathToFull(param_2,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1416a52e0 NormalizeFilename body=696 status=ok
// SIG undefined NormalizeFilename(void)

undefined8
FWindowsPlatformFile::NormalizeFilename(undefined8 param_1,undefined8 param_2,short *param_3)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *_Src;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  
  _Src = (undefined2 *)0x0;
  local_50 = 0;
  iVar9 = 0;
  local_58 = (undefined2 *)0x0;
  lVar7 = -1;
  if ((param_3 != (short *)0x0) && (lVar5 = lVar7, *param_3 != 0)) {
    do {
      lVar5 = lVar5 + 1;
    } while (param_3[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_50 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,param_3,(longlong)(int)uVar4 * 2);
  }
  FPaths::NormalizeFilename(&local_58);
  cVar2 = FString::StartsWith(&local_58,&DAT_144cdbaa8,1);
  if (cVar2 != '\0') {
    if ((int)local_50 == 0) {
      puVar8 = &DAT_143f3eda8;
      iVar3 = iVar9;
    }
    else {
      puVar8 = local_58;
      iVar3 = (int)local_50 + -1;
    }
    iVar11 = iVar3 + -2;
    iVar6 = iVar9;
    if ((-1 < iVar11) && (iVar6 = iVar3, iVar11 < iVar3)) {
      iVar6 = iVar11;
    }
    local_48 = (undefined2 *)0x0;
    local_3c = 0;
    psVar1 = puVar8 + ((longlong)iVar3 - (longlong)iVar6);
    iVar11 = 0;
    iVar3 = 0;
    if ((psVar1 != (short *)0x0) && (iVar11 = 0, iVar3 = 0, *psVar1 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar1[lVar7] != 0);
      iVar6 = (int)lVar7 + 1;
      local_40 = iVar6;
      if (0 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar11 = local_3c;
      iVar3 = local_40;
      _Src = local_48;
      FGenericPlatformString::Memcpy(local_48,psVar1,(longlong)iVar6 * 2);
    }
    local_38 = (undefined2 *)0x0;
    local_30 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    puVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,&DAT_143f607dc);
    if ((int)local_30 < 2) {
      puVar10 = _Src;
      _Src = (undefined2 *)0x0;
    }
    else {
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = iVar9;
      }
      if (((int)local_30 != 0) || (iVar3 = 1, iVar6 == 0)) {
        iVar3 = iVar9;
      }
      local_48 = puVar8;
      local_40 = (int)local_30;
      local_3c = local_30._4_4_;
      if (local_30._4_4_ < iVar3 + (int)local_30 + iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
      }
      iVar9 = local_40;
      puVar10 = local_48;
      puVar8 = (undefined2 *)0x0;
      iVar11 = local_3c;
      iVar3 = local_40;
      if (iVar6 != 0) {
        lVar7 = (longlong)local_40;
        local_40 = local_40 + (uint)(local_40 == 0) + iVar6;
        if (local_3c < local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar9,0);
        }
        iVar11 = local_3c;
        iVar3 = local_40;
        puVar10 = local_48;
        puVar8 = local_48 + (lVar7 - (ulonglong)(iVar9 != 0));
        ::_guard_xfg_dispatch_icall_nop(puVar8,_Src,(longlong)iVar6 * 2);
        puVar8[iVar6] = 0;
        puVar8 = (undefined2 *)0x0;
      }
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_50 = CONCAT44(iVar11,iVar3);
    local_58 = puVar10;
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
    if (_Src != (undefined2 *)0x0) {
      FMemory::Free(_Src);
    }
  }
  FPaths::ConvertRelativePathToFull(param_2,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1416a55a0 FUN_1416a55a0 body=185 status=ok
// SIG undefined FUN_1416a55a0(void)

void FUN_1416a55a0(void)

{
  char cVar1;
  BOOL BVar2;
  undefined8 uVar3;
  HANDLE hProcess;
  ULONG local_res8 [2];
  int local_res10 [2];
  ULONGLONG local_res18 [2];
  
  local_res10[0] = 0;
  if (DAT_1464b0198 == -1) {
    uVar3 = FCommandLine::Get();
    cVar1 = FParse::Value(uVar3,L"numanode=",local_res10);
    if (cVar1 != '\0') {
      local_res8[0] = 0;
      BVar2 = GetNumaHighestNodeNumber(local_res8);
      if (BVar2 != 0) {
        local_res8[0] = local_res8[0] + 1;
        if ((-1 < local_res10[0]) && (local_res10[0] < (int)local_res8[0])) {
          local_res18[0] = 0;
          BVar2 = GetNumaNodeProcessorMask((UCHAR)local_res10[0],local_res18);
          if ((BVar2 != 0) && (local_res18[0] != 0)) {
            hProcess = GetCurrentProcess();
            BVar2 = SetProcessAffinityMask(hProcess,local_res18[0]);
            if (BVar2 != 0) {
              DAT_1464b0198 = local_res10[0];
              DAT_1469e45e0 = local_res18[0];
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1416a5660 FUN_1416a5660 body=418 status=ok
// SIG undefined FUN_1416a5660(void)

ulonglong FUN_1416a5660(void)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX p_Var4;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer_00;
  LOGICAL_PROCESSOR_RELATIONSHIP *pLVar5;
  uint uVar6;
  DWORD local_res8 [2];
  
  if (DAT_1469e4624 == 0) {
    if ((DAT_1469e45e0 != 0) && (-1 < DAT_1464b0198)) {
      uVar2 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar2,L"usehyperthreading");
      uVar3 = DAT_1469e45e0;
      if (cVar1 != '\0') {
        uVar3 = FUN_14169fa30(DAT_1464b0198,DAT_1469e45e0,1);
        DAT_1469e4624 = (int)uVar3;
        return uVar3;
      }
      uVar6 = 0;
      local_res8[0] = 0;
      GetLogicalProcessorInformationEx
                (RelationProcessorCore,(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0,local_res8);
      Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)FMemory::Malloc(local_res8[0],0);
      GetLogicalProcessorInformationEx(RelationProcessorCore,Buffer,local_res8);
      for (p_Var4 = Buffer;
          p_Var4 < (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)
                   ((longlong)&Buffer->Relationship + (ulonglong)local_res8[0]);
          p_Var4 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)
                   ((longlong)&p_Var4->Relationship + (ulonglong)p_Var4->Size)) {
        if ((p_Var4->Relationship == RelationProcessorCore) &&
           (((p_Var4->u).Processor.GroupMask[0].Mask & uVar3) != 0)) {
          uVar6 = uVar6 + 1;
        }
      }
      FMemory::Free(Buffer);
      DAT_1469e4624 = uVar6;
      return (ulonglong)uVar6;
    }
    uVar2 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar2,L"usehyperthreading");
    if (cVar1 != '\0') {
      uVar3 = FUN_1416a5810();
      DAT_1469e4624 = (int)uVar3;
      return uVar3;
    }
    local_res8[0] = 0;
    GetLogicalProcessorInformation((PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0,local_res8);
    Buffer_00 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)FMemory::Malloc(local_res8[0],0);
    GetLogicalProcessorInformation(Buffer_00,local_res8);
    uVar3 = (ulonglong)(local_res8[0] >> 5);
    if (uVar3 != 0) {
      pLVar5 = &Buffer_00->Relationship;
      do {
        if (*pLVar5 == RelationProcessorCore) {
          DAT_1469e4624 = DAT_1469e4624 + 1;
        }
        pLVar5 = pLVar5 + 8;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    FMemory::Free(Buffer_00);
  }
  return (ulonglong)DAT_1469e4624;
}



// FUNCTION 1416a5810 FUN_1416a5810 body=170 status=ok
// SIG undefined FUN_1416a5810(void)

ulonglong FUN_1416a5810(void)

{
  byte bVar1;
  ulonglong uVar2;
  _SYSTEM_INFO local_38;
  
  if (DAT_1469e4628 == 0) {
    if ((DAT_1469e45e0 != 0) && (-1 < DAT_1464b0198)) {
      uVar2 = DAT_1469e45e0 - (DAT_1469e45e0 >> 1 & 0x5555555555555555);
      uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
      uVar2 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      bVar1 = (byte)(uVar2 >> 0x38);
      DAT_1469e4628 = (uint)bVar1;
      if (bVar1 != 0) {
        return uVar2 >> 0x38;
      }
    }
    GetSystemInfo(&local_38);
    DAT_1469e4628 = local_38.dwNumberOfProcessors;
  }
  return (ulonglong)DAT_1469e4628;
}



// FUNCTION 1416a58c0 FUN_1416a58c0 body=57 status=ok
// SIG undefined FUN_1416a58c0(void)

int FUN_1416a58c0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1416a5660();
  iVar2 = FUN_1416a5810();
  if (iVar1 < iVar2) {
    iVar2 = iVar2 + -2;
  }
  else {
    iVar2 = iVar1 + -1;
  }
  iVar1 = DAT_1464b01f0;
  if (iVar2 <= DAT_1464b01f0) {
    iVar1 = iVar2;
  }
  iVar2 = 1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 1416a5900 FUN_1416a5900 body=368 status=ok
// SIG undefined FUN_1416a5900(void)

undefined8 * FUN_1416a5900(longlong *param_1,undefined8 param_2)

{
  HANDLE pvVar1;
  undefined8 *puVar2;
  LPCWSTR pWVar3;
  int iVar4;
  longlong lVar5;
  LARGE_INTEGER local_res8;
  LPCWSTR local_28;
  int local_20;
  
  (**(code **)(*param_1 + 0x188))(param_1,&local_28,param_2);
  pWVar3 = L"";
  if (local_20 != 0) {
    pWVar3 = local_28;
  }
  pvVar1 = CreateFileW(pWVar3,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,(HANDLE)0x0);
  puVar2 = (undefined8 *)operator_new(0x88);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    pWVar3 = L"";
    if (local_20 != 0) {
      pWVar3 = local_28;
    }
    puVar2[1] = pvVar1;
    lVar5 = -1;
    puVar2[2] = 0xffffffffffffffff;
    *puVar2 = &PTR__scalar_deleting_destructor__144cdb858;
    puVar2[3] = 0;
    puVar2[4] = 0;
    if ((pWVar3 != (LPCWSTR)0x0) && (*pWVar3 != L'\0')) {
      do {
        lVar5 = lVar5 + 1;
      } while (pWVar3[lVar5] != L'\0');
      iVar4 = (int)lVar5 + 1;
      *(int *)(puVar2 + 4) = iVar4;
      if (0 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2 + 3,0);
      }
      FGenericPlatformString::Memcpy(puVar2[3],pWVar3,(longlong)iVar4 * 2);
    }
    puVar2[5] = 0;
    puVar2[6] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 7));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 7),4000);
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 0xc));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 0xc),4000);
    if ((undefined1 *)puVar2[1] != &DAT_ffffffffffffffff) {
      GetFileSizeEx((undefined1 *)puVar2[1],&local_res8);
      *(LARGE_INTEGER *)(puVar2 + 2) = local_res8;
    }
  }
  if (local_28 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  return puVar2;
}



// FUNCTION 1416a5a70 FUN_1416a5a70 body=749 status=ok
// SIG undefined FUN_1416a5a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1416a5a70(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  LPCWSTR pWVar7;
  uint dwShareMode;
  int local_res18 [2];
  LARGE_INTEGER local_res20;
  longlong local_28 [2];
  
  puVar3 = (undefined8 *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e4618) {
    _Init_thread_header(&DAT_1469e4618);
    if (DAT_1469e4618 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469e4608 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x10))
                     (DAT_1468b1f88,L"fileio.FileCacheKb",0x40,
                      L"Read file cache in KB (64k default).",0);
      _DAT_1469e4600 = &PTR_FUN_143f3ecf8;
      _DAT_1469e4610 = (**(code **)(*DAT_1469e4608 + 0x38))(DAT_1469e4608);
      atexit(FUN_143e7b120);
      _Init_thread_footer(&DAT_1469e4618);
    }
  }
  local_res18[0] = (**(code **)(*DAT_1469e4608 + 0x68))();
  uVar2 = FCommandLine::Get();
  FParse::Value(uVar2,L"-FileCacheKb=",local_res18);
  dwShareMode = (uint)param_3 * 2 | 1;
  if (local_res18[0] < 1) {
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,local_28,param_2);
    if (*(int *)(puVar5 + 1) == 0) {
      pWVar7 = L"";
    }
    else {
      pWVar7 = (LPCWSTR)*puVar5;
    }
    puVar4 = CreateFileW(pWVar7,0x80000000,dwShareMode,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                        );
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (puVar4 != &DAT_ffffffffffffffff) {
      lVar6 = operator_new(0x40);
      if (lVar6 != 0) {
        puVar3 = (undefined8 *)FFileHandleWindows::FFileHandleWindows(lVar6,puVar4);
      }
      return puVar3;
    }
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x188))();
    if (*(int *)(puVar3 + 1) == 0) {
      pWVar7 = L"";
    }
    else {
      pWVar7 = (LPCWSTR)*puVar3;
    }
    puVar4 = CreateFileW(pWVar7,0x80000000,dwShareMode,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,
                         (HANDLE)0x0);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (puVar4 != &DAT_ffffffffffffffff) {
      puVar3 = (undefined8 *)operator_new(0x80);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = puVar4;
        puVar3[3] = 0;
        puVar3[4] = 0;
        iVar1 = local_res18[0];
        if (local_res18[0] < 5) {
          iVar1 = 4;
        }
        *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
        *(int *)(puVar3 + 7) = iVar1 << 10;
        *puVar3 = &PTR__scalar_deleting_destructor__144cdb880;
        puVar3[8] = 1;
        *(undefined4 *)(puVar3 + 9) = 0;
        *(undefined2 *)(puVar3 + 0xe) = 0;
        puVar3[0xf] = 0;
        GetFileSizeEx(puVar4,&local_res20);
        *(LARGE_INTEGER *)(puVar3 + 2) = local_res20;
        uVar2 = FMemory::Malloc((longlong)*(int *)(puVar3 + 7),0);
        puVar3[5] = uVar2;
        uVar2 = FMemory::Malloc((longlong)*(int *)(puVar3 + 7),0);
        puVar3[6] = uVar2;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        FUN_1416a8d00(puVar3,*(undefined4 *)((longlong)puVar3 + 0x3c));
        return puVar3;
      }
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1416a5d60 FUN_1416a5d60 body=174 status=ok
// SIG undefined FUN_1416a5d60(void)

undefined8 FUN_1416a5d60(longlong *param_1,undefined8 param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  LPCWSTR lpFileName;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,local_18,param_2);
  if (*(int *)(puVar1 + 1) == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*puVar1;
  }
  uVar4 = 0;
  puVar2 = CreateFileW(lpFileName,0x80000000,(uint)param_3 * 2 | 1,(LPSECURITY_ATTRIBUTES)0x0,3,
                       0x40000080,(HANDLE)0x0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (puVar2 != &DAT_ffffffffffffffff) {
    lVar3 = operator_new(0x40);
    if (lVar3 != 0) {
      uVar4 = FFileHandleWindows::FFileHandleWindows(lVar3,puVar2);
    }
    return uVar4;
  }
  return 0;
}



// FUNCTION 1416a5e10 FUN_1416a5e10 body=203 status=ok
// SIG undefined FUN_1416a5e10(void)

longlong * FUN_1416a5e10(longlong *param_1,undefined8 param_2,byte param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  LPCWSTR lpFileName;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,local_18,param_2);
  if (*(int *)(puVar1 + 1) == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*puVar1;
  }
  plVar4 = (longlong *)0x0;
  puVar2 = CreateFileW(lpFileName,0x40000000,param_4 & 0xff,(LPSECURITY_ATTRIBUTES)0x0,
                       (uint)param_3 * 2 + 2,0x80,(HANDLE)0x0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (puVar2 == &DAT_ffffffffffffffff) {
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar3 = operator_new(0x40);
    if (lVar3 != 0) {
      plVar4 = (longlong *)FFileHandleWindows::FFileHandleWindows(lVar3,puVar2);
    }
    if (param_3 != 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,0);
    }
  }
  return plVar4;
}



// FUNCTION 1416a5ee0 FUN_1416a5ee0 body=982 status=ok
// SIG undefined FUN_1416a5ee0(void)

void FUN_1416a5ee0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  BOOL BVar4;
  DWORD DVar5;
  LPCWSTR lpFileName;
  undefined1 *hFile;
  undefined2 *puVar6;
  LPVOID lpBuffer;
  int iVar7;
  undefined2 *puVar8;
  DWORD local_res8 [2];
  undefined8 local_res10;
  undefined2 *local_58;
  int local_50;
  
  puVar8 = (undefined2 *)0x0;
  local_res8[0] = 0;
  if ((DAT_1469e420e == '\0') &&
     (BVar4 = GetOverlappedResult(*(HANDLE *)(param_1 + 0xa0),(LPOVERLAPPED)(param_1 + 200),
                                  local_res8,1), BVar4 != 0)) {
    puVar6 = puVar8;
    if ((*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0xb8)) +
        *(longlong *)(param_1 + 0x88) <= (longlong)(ulonglong)local_res8[0]) goto LAB_1416a61e8;
    DVar5 = GetLastError();
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x20) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(*(longlong *)(param_1 + 0x80) + 0x18);
    }
    FString::PrintfImpl(&local_58,
                        L"FWindowsReadRequest Short Read Code = %x BytesRead = %lld Offset = %lld AlignedOffset = %lld BytesToRead = %lld Size = %lld File = %s"
                        ,DVar5,local_res8[0],*(undefined8 *)(param_1 + 0x88),
                        *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x90),
                        *(undefined8 *)(param_1 + 0x98),puVar6);
  }
  else {
    DAT_1469e420e = '\0';
    DVar5 = GetLastError();
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x20) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(*(longlong *)(param_1 + 0x80) + 0x18);
    }
    FString::PrintfImpl(&local_58,
                        L"FWindowsReadRequest GetOverlappedResult Code = %x Offset = %lld Size = %lld FileSize = %lld File = %s"
                        ,DVar5,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                        *(undefined8 *)(param_1 + 0x98),puVar6);
  }
  bVar3 = true;
  do {
    iVar7 = (int)puVar8;
    puVar6 = local_58;
    if (9 < iVar7) {
      if (bVar3) {
        puVar8 = &DAT_143f3eda8;
        if (local_50 != 0) {
          puVar8 = local_58;
        }
        LowLevelFatalErrorHandler("Unknown",0xfe,L"Unable to recover from a bad read: %s",puVar8);
        puVar8 = &DAT_143f3eda8;
        if (local_50 != 0) {
          puVar8 = local_58;
        }
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0xfe,L"Unable to recover from a bad read: %s",puVar8);
      }
      break;
    }
    lpFileName = (LPCWSTR)FUN_14169dfb0(param_1);
    hFile = CreateFileW(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile == &DAT_ffffffffffffffff) {
      GetLastError();
    }
    else {
      local_res10 = *(undefined8 *)(param_1 + 0xb8);
      DVar5 = SetFilePointer(hFile,(LONG)local_res10,(PLONG)((longlong)&local_res10 + 4),0);
      if (DVar5 != 0xffffffff) {
        lpBuffer = *(LPVOID *)(param_1 + 0xb0);
        if (lpBuffer == (LPVOID)0x0) {
          lpBuffer = *(LPVOID *)(param_1 + 0x10);
        }
        BVar4 = ReadFile(hFile,lpBuffer,*(DWORD *)(param_1 + 0xc0),local_res8,(LPOVERLAPPED)0x0);
        if ((BVar4 != 0) &&
           ((*(longlong *)(param_1 + 0x90) + *(longlong *)(param_1 + 0x88)) -
            *(longlong *)(param_1 + 0xb8) <= (longlong)(ulonglong)local_res8[0])) {
          bVar3 = false;
          CloseHandle(hFile);
          goto LAB_1416a6159;
        }
      }
      GetLastError();
      CloseHandle(hFile);
    }
LAB_1416a6159:
    if ((bVar3) && (iVar7 < 9)) {
      FUN_1416b1760(0x3e4ccccd);
    }
    puVar8 = (undefined2 *)(ulonglong)(iVar7 + 1);
  } while (bVar3);
LAB_1416a61e8:
  if (0.0 < *(double *)(param_1 + 0xe8)) {
    FUN_1415bb440(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x90),
                  *(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xb8);
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    if (lVar1 != lVar2) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x10),
                 (void *)((longlong)*(void **)(param_1 + 0x10) + (lVar2 - lVar1)),
                 *(size_t *)(param_1 + 0x90));
    }
  }
  else {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x10),(void *)((*(longlong *)(param_1 + 0xb0) - lVar1) + lVar2),
               *(size_t *)(param_1 + 0x90));
    FMemory::Free(*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  IAsyncReadRequest::SetComplete(param_1);
  if (puVar6 != (undefined2 *)0x0) {
    FMemory::Free(puVar6);
  }
  return;
}



// FUNCTION 1416a62c0 PlatformInit body=29 status=ok
// SIG undefined PlatformInit(void)

void FWindowsPlatformMisc::PlatformInit(void)

{
  timeBeginPeriod(1);
  FUN_14169dad0();
  FUN_1416b0dc0();
  return;
}



// FUNCTION 1416a62e0 FUN_1416a62e0 body=342 status=ok
// SIG undefined FUN_1416a62e0(void)

void FUN_1416a62e0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  DWORD DVar5;
  undefined8 uVar6;
  HANDLE hProcess;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  thunk_FUN_1415ac3e0();
  DAT_1469e4220 = _guard_xfg_dispatch_icall_nop(FUN_1416a6440);
  iVar4 = GetSystemMetrics(0);
  if (0x27f < iVar4) {
    iVar4 = GetSystemMetrics(1);
    if (0x1df < iVar4) goto LAB_1416a63c3;
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"The current resolution is too low to run this game.",L"Launch",
                     L"Error_ResolutionTooLow");
  FUN_1416786b0(0,uVar6,0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (DAT_1468c2175 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,3);
  }
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af3d0);
  PostQuitMessage(0);
  DAT_1468c217e = 1;
LAB_1416a63c3:
  hResInfo = FindResourceW((HMODULE)0x0,(LPCWSTR)0x3f2,(LPCWSTR)0xa);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource((HMODULE)0x0,hResInfo);
    if (hResData == (HGLOBAL)0x0) {
      FUN_141681cb0();
      return;
    }
    DVar5 = SizeofResource((HMODULE)0x0,hResInfo);
    pvVar7 = LockResource(hResData);
    if ((1 < DVar5) && (pvVar7 != (LPVOID)0x0)) {
      FSHA1::InitializeFileHashesFromBuffer(pvVar7,DVar5,0);
    }
  }
  return;
}



// FUNCTION 1416a6440 FUN_1416a6440 body=237 status=ok
// SIG undefined FUN_1416a6440(void)

void FUN_1416a6440(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (DAT_1469e4620 == '\0') {
    DAT_1469e4620 = 1;
    if (DAT_1468c2176 != '\0') {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,
                         L"Pure virtual function being called while application was running (GIsRunning == 1)."
                         ,L"Core",L"PureVirtualFunctionCalledWhileRunningApp");
      FUN_1416786b0(0,uVar5,0);
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
    }
    LowLevelFatalErrorHandler("Unknown",0x1be,L"Pure virtual function being called");
    FDebug::AssertFailed
              ((longlong)L"Server" + 0xf,"Unknown",0x1be,L"Pure virtual function being called");
    return;
  }
  if (DAT_1469e4220 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416a6461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1469e4220)();
  return;
}



// FUNCTION 1416a6530 FUN_1416a6530 body=480 status=ok
// SIG undefined FUN_1416a6530(void)

char FUN_1416a6530(HKEY param_1,LPCWSTR param_2,LPCWSTR param_3,wchar_t **param_4)

{
  LSTATUS LVar1;
  wchar_t *_Source;
  char cVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  undefined4 uVar7;
  DWORD local_58 [2];
  HKEY local_50;
  wchar_t *local_48;
  undefined8 local_40;
  
  cVar2 = '\0';
  iVar4 = 0;
  do {
    pwVar5 = (wchar_t *)0x0;
    if (cVar2 != '\0') {
      return cVar2;
    }
    local_50 = (HKEY)0x0;
    uVar6 = 0x100;
    if (iVar4 == 0) {
      uVar6 = 0x200;
    }
    LVar1 = RegOpenKeyExW(param_1,param_2,0,uVar6 | 0x20019,&local_50);
    if (LVar1 == 0) {
      local_58[0] = 0;
      LVar1 = RegQueryValueExW(local_50,param_3,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,local_58);
      if ((LVar1 == 0) && (local_58[0] != 0)) {
        _Source = (wchar_t *)operator_new(local_58[0]);
        LVar1 = RegQueryValueExW(local_50,param_3,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)_Source,local_58
                                );
        if (LVar1 == 0) {
          iVar3 = local_58[0] - 1;
          local_48 = (wchar_t *)0x0;
          uVar7 = 0;
          uVar6 = local_58[0];
          if (iVar3 == 0) {
            uVar6 = 0;
          }
          local_40 = (ulonglong)uVar6;
          if (0 < (int)uVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
            pwVar5 = local_48;
            uVar6 = (uint)local_40;
            uVar7 = local_40._4_4_;
            if (0 < (int)(uint)local_40) {
              wcsncpy(local_48,_Source,(longlong)iVar3);
              pwVar5[iVar3] = L'\0';
            }
          }
          if (param_4 == &local_48) {
            if (pwVar5 != (wchar_t *)0x0) {
              FMemory::Free(pwVar5);
            }
          }
          else {
            if (*param_4 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            *param_4 = pwVar5;
            local_48 = (wchar_t *)0x0;
            local_40 = 0;
            *(uint *)(param_4 + 1) = uVar6;
            *(undefined4 *)((longlong)param_4 + 0xc) = uVar7;
          }
          FString::TrimToNullTerminator(param_4);
          cVar2 = '\x01';
        }
        FMemory::operator_delete(_Source);
      }
      RegCloseKey(local_50);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return cVar2;
}



// FUNCTION 1416a6710 FUN_1416a6710 body=369 status=ok
// SIG undefined FUN_1416a6710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416a6710(DWORD param_1)

{
  HANDLE pvVar1;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  DWORDLONG local_f8;
  DWORDLONG DStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  _MEMORYSTATUSEX local_58;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_14159fe30(&local_138);
  local_b8 = 0;
  local_58.dwLength = 0x40;
  local_58.dwMemoryLoad = 0;
  local_58.ullTotalPhys = 0;
  local_58.ullAvailPhys = 0;
  local_58.ullTotalPageFile = 0;
  local_58.ullAvailPageFile = 0;
  local_58.ullTotalVirtual = 0;
  local_58.ullAvailVirtual = 0;
  local_58.ullAvailExtendedVirtual = 0;
  GlobalMemoryStatusEx(&local_58);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  pvVar1 = GetCurrentProcess();
  _guard_xfg_dispatch_icall_nop(pvVar1,&local_a8,0x48);
  local_f8 = local_58.ullAvailPhys;
  DStack_f0 = local_58.ullAvailPageFile;
  _DAT_1468b0eb0 = local_138;
  _DAT_1468b0eb8 = uStack_130;
  local_e8 = local_98;
  _DAT_1468b0ec0 = local_128;
  _DAT_1468b0ec8 = uStack_120;
  uStack_e0 = local_a0;
  _DAT_1468b0ed0 = local_118;
  _DAT_1468b0ed8 = uStack_110;
  local_d8 = local_70;
  _DAT_1468b0ee0 = local_108;
  _DAT_1468b0ee8 = uStack_100;
  uStack_d0 = local_68;
  DAT_1468b0ef0 = local_58.ullAvailPhys;
  DAT_1468b0ef8 = local_58.ullAvailPageFile;
  DAT_1468b0f00 = local_98;
  DAT_1468b0f08 = local_a0;
  DAT_1468b0f10 = local_70;
  DAT_1468b0f18 = local_68;
  _DAT_1468b0f30 = local_b8;
  _DAT_1468b0f20 = local_c8;
  uRam00000001468b0f24 = uStack_c4;
  _DAT_1468b0f28 = uStack_c0;
  uRam00000001468b0f2c = uStack_bc;
  RaiseException(param_1,0,0,(ULONG_PTR *)0x0);
  return;
}



// FUNCTION 1416a6890 FUN_1416a6890 body=390 status=ok
// SIG undefined FUN_1416a6890(void)

undefined8 FUN_1416a6890(longlong param_1,void *param_2,size_t param_3)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined8 uVar4;
  size_t _Size;
  ulonglong uVar5;
  DWORD local_res18 [4];
  
  if ((longlong)param_3 < 1) {
LAB_1416a69fc:
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x3c)) {
      cVar1 = FUN_1416abbe0();
      if (cVar1 == '\0') goto LAB_1416a69fc;
      FUN_1416a8d00(param_1,*(undefined4 *)(param_1 + 0x40));
    }
    do {
      _Size = (size_t)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x44));
      if ((longlong)param_3 <= (longlong)_Size) {
        _Size = param_3;
      }
      if (*(longlong *)(param_1 + 0x10) < (longlong)(_Size + *(longlong *)(param_1 + 0x18)))
      goto LAB_1416a69fc;
      if ((longlong)_Size < 1) {
        if ((*(char *)(param_1 + 0x70) == '\0') && (*(char *)(param_1 + 0x71) != '\0')) {
          local_res18[0] = 0;
          BVar2 = GetOverlappedResult(*(HANDLE *)(param_1 + 8),(LPOVERLAPPED)(param_1 + 0x50),
                                      local_res18,1);
          if (BVar2 == 0) {
            DVar3 = GetLastError();
            if (DVar3 != 0x26) goto LAB_1416a69fc;
            if (0.0 < *(double *)(param_1 + 0x78)) {
              FUN_1415bb440(*(undefined8 *)(param_1 + 8),local_res18[0],
                            *(undefined8 *)(param_1 + 0x18));
              *(undefined8 *)(param_1 + 0x78) = 0;
            }
          }
          else {
            uVar5 = (ulonglong)local_res18[0];
            if (0.0 < *(double *)(param_1 + 0x78)) {
              FUN_1415bb440(*(undefined8 *)(param_1 + 8),uVar5,*(undefined8 *)(param_1 + 0x18));
              *(undefined8 *)(param_1 + 0x78) = 0;
            }
            *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + uVar5;
            uVar5 = *(ulonglong *)(param_1 + 0x20);
            *(undefined1 *)(param_1 + 0x71) = 0;
            *(int *)(param_1 + 0x60) = (int)uVar5;
            *(int *)(param_1 + 100) = (int)(uVar5 >> 0x20);
            if (uVar5 < *(ulonglong *)(param_1 + 0x10)) goto LAB_1416a69d8;
          }
          *(undefined1 *)(param_1 + 0x70) = 1;
        }
LAB_1416a69d8:
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) ^ 1;
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) ^ 1;
        *(undefined4 *)(param_1 + 0x44) = 0;
        FUN_1416a8d00(param_1,*(undefined4 *)(param_1 + 0x40));
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (param_2,(void *)((longlong)*(int *)(param_1 + 0x44) +
                                   *(longlong *)
                                    (param_1 + 0x28 + (longlong)*(int *)(param_1 + 0x3c) * 8)),_Size
                  );
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (int)_Size;
        param_3 = param_3 - _Size;
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + _Size;
        param_2 = (void *)((longlong)param_2 + _Size);
      }
    } while (0 < (longlong)param_3);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1416a6a20 FUN_1416a6a20 body=242 status=ok
// SIG undefined FUN_1416a6a20(void)

undefined8 FUN_1416a6a20(longlong param_1,LPVOID param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  BOOL BVar4;
  DWORD DVar5;
  undefined8 uVar6;
  DWORD local_res8 [2];
  LARGE_INTEGER local_res18 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 8);
  QueryPerformanceCounter(local_res18);
  local_res8[0] = 0;
  dVar3 = (double)local_res18[0].QuadPart * DAT_1468b02f8;
  BVar4 = ReadFile(*(HANDLE *)(param_1 + 8),param_2,(DWORD)param_3,local_res8,
                   (LPOVERLAPPED)(param_1 + 0x10));
  if (BVar4 == 0) {
    DVar5 = GetLastError();
    if (DVar5 == 0x3e5) {
      local_res8[0] = 0;
      BVar4 = GetOverlappedResult(*(HANDLE *)(param_1 + 8),(LPOVERLAPPED)(param_1 + 0x10),local_res8
                                  ,1);
      if (BVar4 != 0) goto LAB_1416a6ad0;
    }
    uVar6 = 0;
  }
  else {
LAB_1416a6ad0:
    uVar6 = 1;
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (ulonglong)local_res8[0];
    *(int *)(param_1 + 0x20) = (int)*(undefined8 *)(param_1 + 0x30);
    *(int *)(param_1 + 0x24) = (int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  }
  FUN_1415bb440(uVar2,param_3,uVar1,SUB84(dVar3 + 16777216.0,0));
  return uVar6;
}



// FUNCTION 1416a6b20 FUN_1416a6b20 body=363 status=ok
// SIG undefined FUN_1416a6b20(void)

undefined8 *
FUN_1416a6b20(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong param_5,
             undefined8 param_6)

{
  int iVar1;
  char cVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_58 [80];
  
  if (*(longlong *)(param_1 + 8) == -1) {
    puVar6 = (undefined8 *)operator_new(0x80);
    puVar5 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR__scalar_deleting_destructor__144ca06d8;
      puVar6[10] = 0;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      puVar6[4] = AK::MemoryMgr::StartProfileThreadUsage;
      cVar2 = '\0';
      *(undefined4 *)(puVar6 + 0xe) = 0;
      *(undefined2 *)((longlong)puVar6 + 0x74) = 0;
      if (param_5 != 0) {
        uVar7 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58);
        TFunction<void___cdecl(int)>::operator=(puVar6 + 4,uVar7);
        cVar2 = *(char *)((longlong)puVar6 + 0x74);
      }
      puVar6[2] = -(ulonglong)(cVar2 != '\0');
      *puVar6 = &PTR__scalar_deleting_destructor__144cdb840;
      IAsyncReadRequest::SetComplete(puVar6);
      puVar5 = puVar6;
    }
  }
  else {
    lVar4 = operator_new(0xf0);
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)
               FUN_14169aae0(lVar4,param_1,param_5,param_6,param_2,param_3,
                             *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),param_4);
    }
    if (param_4 == 0) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
      }
      iVar1 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = puVar5;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    }
  }
  return puVar5;
}



// FUNCTION 1416a6c90 Rehash body=521 status=ok
// SIG undefined Rehash(void)

void TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator>::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort *puVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar10) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar10;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar10 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_1416a6dcf;
        uVar10 = puVar13[lVar6 + 1];
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
      if (iVar4 < iStack_44) {
LAB_1416a6dcf:
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
        puVar3 = (ushort *)(*param_1 + (longlong)iStack_1c * 0xc);
        uVar10 = (int)*plVar2 - 1U & (uint)*puVar3;
        *(uint *)(puVar3 + 4) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar3 + 2) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1416a6ea0 FUN_1416a6ea0 body=153 status=ok
// SIG undefined FUN_1416a6ea0(void)

undefined8 FUN_1416a6ea0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  HANDLE pvVar4;
  bool bVar5;
  
  if (DAT_1469e4458 != 0) {
    LOCK();
    iVar1 = DAT_1469e45c8 + 1;
    UNLOCK();
    bVar5 = DAT_1469e45c8 == 0;
    DAT_1469e45c8 = iVar1;
    if (bVar5) {
      uVar3 = FUN_1415d8270();
      FUN_1415d3ee0(uVar3);
      TBaseMulticastDelegate<void>::Broadcast(&DAT_1464aefc8);
      lVar2 = DAT_1469e4458;
      *(undefined8 *)(DAT_1469e4458 + 0x20) = param_1;
      pvVar4 = GetCurrentThread();
      *(HANDLE *)(lVar2 + 0x28) = pvVar4;
      SetEvent(*(HANDLE *)(lVar2 + 0x18));
    }
    WaitForSingleObject(*(HANDLE *)(DAT_1469e4458 + 0x30),60000);
    uVar3 = FUN_1415a8bd0(0);
    FUN_1415b7a80(uVar3);
  }
  return 1;
}



// FUNCTION 1416a6f40 FUN_1416a6f40 body=4540 status=ok
// SIG undefined FUN_1416a6f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1416a6f40(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined1 param_5
             )

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  LPCWSTR pWVar4;
  void *pvVar5;
  size_t _Size;
  bool bVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  short *psVar14;
  LPWSTR lpBuffer;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  char *pcVar23;
  longlong lVar24;
  LPCWSTR pWVar25;
  int iVar26;
  void *pvVar27;
  LPCWSTR pWVar28;
  undefined1 auStack_568 [32];
  undefined1 local_548;
  undefined1 local_540;
  undefined8 local_538;
  undefined4 local_530;
  undefined4 local_528;
  char local_518;
  longlong local_510;
  int local_508;
  int local_504;
  undefined2 *local_500;
  int local_4f8;
  undefined2 *local_4f0;
  int local_4e8;
  int local_4e4;
  void *local_4e0;
  int local_4d8;
  LPCWSTR local_4d0;
  int local_4c8;
  int local_4c4;
  void *local_4c0;
  int local_4b8;
  int local_4b4;
  LPCWSTR local_4b0;
  int local_4a8;
  int local_4a4;
  undefined4 *local_498;
  undefined2 **ppuStack_490;
  longlong local_488;
  ulonglong local_480;
  LPCWSTR local_478;
  undefined8 local_470;
  void *local_468;
  undefined8 local_460;
  LPCWSTR local_458;
  undefined8 local_450;
  undefined2 *local_448;
  undefined8 local_440;
  undefined2 *local_438;
  undefined8 local_430;
  longlong local_428;
  ulonglong local_420;
  undefined2 *local_418;
  undefined8 local_410;
  void *local_408;
  ulonglong local_400;
  undefined2 *local_3f8;
  undefined8 local_3f0;
  undefined2 *local_3e8;
  undefined8 local_3e0;
  void *local_3d8;
  ulonglong local_3d0;
  void *local_3c8;
  int local_3c0;
  LPCWSTR local_3b8;
  int local_3b0;
  LPCWSTR local_3a8;
  int local_3a0;
  void *local_398;
  int local_390;
  undefined4 local_38c;
  longlong local_388 [2];
  undefined2 *local_378;
  int local_370;
  undefined2 *local_368;
  int local_360;
  undefined2 *local_358;
  int local_350;
  longlong local_348 [2];
  undefined2 *local_338;
  undefined *local_330;
  undefined2 *local_328;
  undefined2 *local_320;
  undefined2 *local_318;
  undefined2 *local_310;
  undefined2 *local_308;
  undefined2 *local_300;
  undefined2 *local_2f8;
  undefined2 *local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  longlong local_2d8 [2];
  longlong local_2c8 [2];
  longlong local_2b8 [2];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [24];
  undefined1 local_270 [16];
  longlong local_260;
  undefined1 local_250 [8];
  longlong *local_248;
  undefined1 local_238 [24];
  undefined1 local_220 [24];
  undefined1 local_208 [16];
  undefined1 local_1f8 [24];
  undefined1 local_1e0 [24];
  undefined4 local_1c8 [4];
  undefined1 local_1b8 [24];
  undefined1 local_1a0;
  undefined4 local_198;
  undefined1 local_188 [24];
  undefined1 local_170;
  undefined2 *local_168;
  wchar_t *local_160;
  short *local_158;
  short local_148 [4];
  char local_140 [248];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_568;
  FWindowsPlatformProcess::ExecutableName(1);
  cVar8 = FUN_140612c50();
  if ((cVar8 == '\0') && (param_4 != 1)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  local_518 = cVar8;
  FGenericCrashContext::GetUniqueCrashName(param_1,local_148,0x80);
  FUN_1415a95a0(&local_408);
  puVar12 = (undefined8 *)FUN_14167d0d0(local_2d8);
  if (*(int *)(puVar12 + 1) == 0) {
    local_168 = &DAT_143f3eda8;
  }
  else {
    local_168 = (undefined2 *)*puVar12;
  }
  lpBuffer = (LPCWSTR)0x0;
  local_160 = L"Crashes";
  local_158 = local_148;
  local_418 = (undefined2 *)0x0;
  local_410 = 0;
  FPaths::CombineInternal(&local_418,&local_168,3);
  if (local_2d8[0] != 0) {
    FMemory::Free();
  }
  plVar13 = (longlong *)FUN_1415c3d50();
  iVar22 = 0;
  puVar18 = &DAT_143f3eda8;
  if ((int)local_410 != 0) {
    puVar18 = local_418;
  }
  (**(code **)(*plVar13 + 0xe0))(plVar13,&local_500,puVar18);
  plVar13 = (longlong *)FUN_1415c3d50();
  puVar18 = &DAT_143f3eda8;
  if (local_4f8 != 0) {
    puVar18 = local_500;
  }
  cVar9 = (**(code **)(*plVar13 + 0x58))(plVar13,puVar18,1);
  lVar24 = 2;
  if (cVar9 != '\0') {
    local_438 = (undefined2 *)0x0;
    local_338 = &DAT_143f3eda8;
    if (local_4f8 != 0) {
      local_338 = local_500;
    }
    local_330 = PTR_u_CrashContext_runtime_xml_1464a8340;
    local_430 = 0;
    FPaths::CombineInternal(&local_438,&local_338,2);
    puVar18 = &DAT_143f3eda8;
    if ((int)local_430 != 0) {
      puVar18 = local_438;
    }
    (**(code **)(*param_1 + 8))(param_1,puVar18);
    local_448 = (undefined2 *)0x0;
    local_320 = &DAT_143f3eda8;
    if (DAT_1464a86b8 != 0) {
      local_320 = DAT_1464a86b0;
    }
    local_328 = &DAT_143f3eda8;
    if (local_4f8 != 0) {
      local_328 = local_500;
    }
    local_440 = 0;
    FPaths::CombineInternal(&local_448,&local_328,2);
    puVar18 = &DAT_143f3eda8;
    if ((int)local_440 != 0) {
      puVar18 = local_448;
    }
    `anonymous_namespace'::WriteMinidump(param_1,puVar18,param_2,param_5);
    FGenericPlatformOutputDevices::GetAbsoluteLogFilename(local_348);
    FUN_141671d50(local_388 + 2,local_348);
    local_388[0] = 0;
    local_310 = &DAT_143f3eda8;
    if (local_370 != 0) {
      local_310 = local_378;
    }
    local_318 = &DAT_143f3eda8;
    if (local_4f8 != 0) {
      local_318 = local_500;
    }
    local_388[1] = 0;
    FPaths::CombineInternal(local_388,&local_318,2);
    plVar13 = (longlong *)FUN_141672640();
    (**(code **)(*plVar13 + 0x18))(plVar13);
    psVar14 = (short *)FUN_1415a9320();
    plVar13 = (longlong *)FUN_1415c3d50();
    cVar9 = (**(code **)(*plVar13 + 0x48))(plVar13,psVar14);
    if (cVar9 != '\0') {
      local_480 = 0;
      local_488 = 0;
      if ((psVar14 != (short *)0x0) && (*psVar14 != 0)) {
        lVar21 = -1;
        do {
          lVar21 = lVar21 + 1;
        } while (psVar14[lVar21] != 0);
        uVar20 = (int)lVar21 + 1;
        local_480 = (ulonglong)uVar20;
        if (0 < (int)uVar20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_488,0);
        }
        FGenericPlatformString::Memcpy(local_488,psVar14,(longlong)(int)uVar20 * 2);
      }
      FPaths::GetCleanFilename(&local_368,&local_488);
      if (local_488 != 0) {
        FMemory::Free();
      }
      local_3f8 = (undefined2 *)0x0;
      local_300 = &DAT_143f3eda8;
      if (local_360 != 0) {
        local_300 = local_368;
      }
      local_308 = &DAT_143f3eda8;
      if (local_4f8 != 0) {
        local_308 = local_500;
      }
      local_3f0 = 0;
      FPaths::CombineInternal(&local_3f8,&local_308,2);
      plVar13 = (longlong *)FUN_1415c3d50();
      local_528 = 0;
      puVar18 = &DAT_143f3eda8;
      if ((int)local_3f0 != 0) {
        puVar18 = local_3f8;
      }
      local_530 = 0;
      local_538 = 0;
      local_540 = 0;
      local_548 = 0;
      (**(code **)(*plVar13 + 0x38))(plVar13,puVar18,psVar14,1);
      if (local_3f8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_368 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    puVar12 = (undefined8 *)FPaths::ProjectLogDir(local_2c8);
    iVar10 = *(int *)(puVar12 + 1);
    local_4f0 = (undefined2 *)*puVar12;
    *puVar12 = 0;
    local_4e8 = *(int *)(puVar12 + 1);
    local_4e4 = *(int *)((longlong)puVar12 + 0xc);
    puVar12[1] = 0;
    if (local_4e4 < (int)((0x10 - (uint)(iVar10 != 0)) + local_4e8)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4f0);
    }
    FString::PathAppend(&local_4f0,L"CrashVideo.avi",0xe);
    if (local_2c8[0] != 0) {
      FMemory::Free();
    }
    plVar13 = (longlong *)FUN_1415c3d50();
    puVar18 = &DAT_143f3eda8;
    if (local_4e8 != 0) {
      puVar18 = local_4f0;
    }
    cVar9 = (**(code **)(*plVar13 + 0x48))(plVar13,puVar18);
    if (cVar9 != '\0') {
      FUN_141671d50(&local_358,&local_4f0);
      local_3e8 = (undefined2 *)0x0;
      local_2f0 = &DAT_143f3eda8;
      if (local_350 != 0) {
        local_2f0 = local_358;
      }
      local_2f8 = &DAT_143f3eda8;
      if (local_4f8 != 0) {
        local_2f8 = local_500;
      }
      local_3e0 = 0;
      FPaths::CombineInternal(&local_3e8,&local_2f8,2);
      plVar13 = (longlong *)FUN_1415c3d50();
      local_528 = 0;
      puVar18 = &DAT_143f3eda8;
      if (local_4e8 != 0) {
        puVar18 = local_4f0;
      }
      puVar19 = &DAT_143f3eda8;
      if ((int)local_3e0 != 0) {
        puVar19 = local_3e8;
      }
      local_530 = 0;
      local_538 = 0;
      local_540 = 0;
      local_548 = 0;
      (**(code **)(*plVar13 + 0x38))(plVar13,puVar19,puVar18,1);
      if (local_3e8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_358 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (DAT_1468c2178 != '\0') {
      if (local_4f0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_388[0] != 0) {
        FMemory::Free();
      }
      if (local_378 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_348[0] != 0) {
        FMemory::Free();
      }
      if (local_448 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_438 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      goto LAB_1416a805e;
    }
    puVar18 = &DAT_143f3eda8;
    if (local_4f8 != 0) {
      puVar18 = local_500;
    }
    FString::PrintfImpl(&local_510,L"\"%s\"",puVar18);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468509e4) && (_Init_thread_header(), DAT_1468509e4 == -1)) {
      uVar15 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar15,L"nullrhi");
      _Init_thread_footer();
    }
    iVar10 = local_508;
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((cVar8 != '\0') || (bVar6)) {
      lVar21 = (longlong)local_508;
      local_508 = (0xd - (uint)(local_508 != 0)) + local_508;
      if (local_504 < local_508) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_510,iVar10);
      }
      iVar26 = local_508;
      lVar21 = lVar21 - (ulonglong)(iVar10 != 0);
      builtin_wcsncpy((wchar_t *)(local_510 + lVar21 * 2),L" -Unatte",8);
      builtin_wcsncpy((wchar_t *)(local_510 + 0x10 + lVar21 * 2),L"nded",4);
      *(undefined2 *)(local_510 + 0x18 + lVar21 * 2) = 0;
      if (bVar6) {
        lVar21 = (longlong)local_508;
        local_508 = (10 - (uint)(local_508 != 0)) + local_508;
        if (local_504 < local_508) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_510,iVar26);
        }
        lVar21 = lVar21 - (ulonglong)(iVar26 != 0);
        builtin_wcsncpy((wchar_t *)(local_510 + lVar21 * 2),L" -nullrh",8);
        lVar21 = local_510 + lVar21 * 2;
        *(undefined2 *)(lVar21 + 0x10) = 0x69;
        *(undefined2 *)(lVar21 + 0x12) = 0;
      }
    }
    local_478 = (LPCWSTR)0x0;
    local_470 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_478,0);
    pWVar25 = local_478;
    FGenericPlatformString::Memcpy(local_478,L" -AppName=",0x16);
    pvVar27 = local_408;
    iVar10 = (int)local_400;
    if ((int)local_470 < 2) {
      local_3b8 = (LPCWSTR)0x0;
      pWVar28 = lpBuffer;
      local_3b0 = iVar10;
      if (iVar10 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_3b8,local_400 & 0xffffffff,0);
        pWVar28 = local_3b8;
        _guard_xfg_dispatch_icall_nop(local_3b8,pvVar27,(longlong)iVar10 * 2);
      }
    }
    else {
      iVar26 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar26 = iVar22;
      }
      if (((int)local_470 != 0) || (iVar10 = 1, iVar26 == 0)) {
        iVar10 = iVar22;
      }
      local_4d0 = pWVar25;
      local_478 = (LPCWSTR)0x0;
      local_4c8 = (int)local_470;
      pWVar25 = (LPCWSTR)0x0;
      local_4c4 = local_470._4_4_;
      if (local_470._4_4_ < iVar26 + (int)local_470 + iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4d0);
      }
      iVar10 = local_4c8;
      local_4e0 = local_408;
      pWVar28 = local_4d0;
      local_3b0 = local_4c8;
      if (iVar26 != 0) {
        lVar21 = (longlong)local_4c8;
        local_4c8 = iVar26 + (uint)(local_4c8 == 0) + local_4c8;
        if (local_4c4 < local_4c8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d0,iVar10);
        }
        iVar7 = local_4c8;
        pWVar28 = local_4d0;
        pWVar4 = local_4d0 + (lVar21 - (ulonglong)(iVar10 != 0));
        _guard_xfg_dispatch_icall_nop(pWVar4,local_4e0,(longlong)iVar26 * 2);
        pWVar4[iVar26] = L'\0';
        local_3b0 = iVar7;
      }
    }
    iVar10 = local_508;
    if ((local_3b0 != 0) && (iVar26 = local_3b0 + -1, iVar26 != 0)) {
      lVar21 = (longlong)local_508;
      local_508 = (uint)(local_508 == 0) + iVar26 + local_508;
      if (local_504 < local_508) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_510,iVar10);
      }
      pvVar27 = (void *)(local_510 + (lVar21 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar27,pWVar28,(longlong)iVar26 * 2);
      *(undefined2 *)((longlong)iVar26 * 2 + (longlong)pvVar27) = 0;
    }
    if (pWVar28 != (LPCWSTR)0x0) {
      FMemory::Free(pWVar28);
    }
    if (pWVar25 != (LPCWSTR)0x0) {
      FMemory::Free(pWVar25);
    }
    local_468 = (void *)0x0;
    local_460 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_468,0);
    pvVar27 = local_468;
    FGenericPlatformString::Memcpy(local_468,L" -CrashGUID=",0x1a);
    iVar10 = (int)local_460;
    if (local_148[0] != 0) {
      lVar21 = -1;
      do {
        lVar21 = lVar21 + 1;
      } while (local_148[lVar21] != 0);
      iVar26 = (int)lVar21;
      if (((int)local_460 != 0) || (iVar10 = 1, iVar26 == 0)) {
        iVar10 = 0;
      }
      local_4c0 = pvVar27;
      local_4b8 = (int)local_460;
      local_4b4 = local_460._4_4_;
      if (local_460._4_4_ < iVar26 + iVar10 + (int)local_460) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4c0);
      }
      iVar7 = local_4b8;
      pvVar27 = local_4c0;
      iVar10 = local_4b8;
      if (iVar26 != 0) {
        lVar21 = (longlong)local_4b8;
        local_4b8 = iVar26 + (uint)(local_4b8 == 0) + local_4b8;
        if (local_4b4 < local_4b8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c0,iVar7);
        }
        iVar10 = local_4b8;
        pvVar27 = local_4c0;
        pvVar5 = (void *)((longlong)local_4c0 + (lVar21 - (ulonglong)(iVar7 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar5,local_148,(longlong)iVar26 * 2);
        *(undefined2 *)((longlong)iVar26 * 2 + (longlong)pvVar5) = 0;
      }
    }
    iVar26 = local_508;
    if ((iVar10 != 0) && (iVar10 + -1 != 0)) {
      lVar21 = (longlong)local_508;
      local_508 = (uint)(local_508 == 0) + iVar10 + -1 + local_508;
      if (local_504 < local_508) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_510,iVar26);
      }
      pvVar5 = (void *)(local_510 + (lVar21 - (ulonglong)(iVar26 != 0)) * 2);
      _Size = (longlong)iVar10 * 2 - 2;
      _guard_xfg_dispatch_icall_nop(pvVar5,pvVar27,_Size);
      *(undefined2 *)((longlong)pvVar5 + _Size) = 0;
    }
    if (pvVar27 != (void *)0x0) {
      FMemory::Free(pvVar27);
    }
    FWindowsPlatformStackWalk::GetDownstreamStorage(&local_3c8);
    if (1 < local_3c0) {
      local_458 = (LPCWSTR)0x0;
      local_450 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_458,0);
      pWVar25 = local_458;
      FGenericPlatformString::Memcpy(local_458,L" -DebugSymbols=",0x20);
      pvVar27 = local_3c8;
      if ((int)local_450 < 2) {
        local_3a0 = local_3c0;
        local_3a8 = (LPCWSTR)0x0;
        pWVar28 = lpBuffer;
        if (local_3c0 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_3a8,local_3c0,0);
          pWVar28 = local_3a8;
          _guard_xfg_dispatch_icall_nop(local_3a8,pvVar27,(longlong)local_3c0 * 2);
        }
      }
      else {
        iVar10 = local_3c0 + -1;
        if (local_3c0 == 0) {
          iVar10 = iVar22;
        }
        if (((int)local_450 != 0) || (iVar26 = 1, iVar10 == 0)) {
          iVar26 = iVar22;
        }
        local_4b0 = pWVar25;
        local_458 = (LPCWSTR)0x0;
        local_4a8 = (int)local_450;
        pWVar25 = (LPCWSTR)0x0;
        local_4a4 = local_450._4_4_;
        if (local_450._4_4_ < (int)local_450 + iVar26 + iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4b0);
        }
        iVar26 = local_4a8;
        local_4e0 = local_3c8;
        pWVar28 = local_4b0;
        local_3a0 = local_4a8;
        if (iVar10 != 0) {
          lVar21 = (longlong)local_4a8;
          local_4a8 = local_4a8 + (uint)(local_4a8 == 0) + iVar10;
          if (local_4a4 < local_4a8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b0,iVar26);
          }
          iVar7 = local_4a8;
          pWVar28 = local_4b0;
          pWVar4 = local_4b0 + (lVar21 - (ulonglong)(iVar26 != 0));
          _guard_xfg_dispatch_icall_nop(pWVar4,local_4e0,(longlong)iVar10 * 2);
          pWVar4[iVar10] = L'\0';
          local_3a0 = iVar7;
        }
      }
      iVar10 = local_508;
      if ((local_3a0 != 0) && (iVar26 = local_3a0 + -1, iVar26 != 0)) {
        lVar21 = (longlong)local_508;
        local_508 = (uint)(local_508 == 0) + local_508 + iVar26;
        if (local_504 < local_508) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_510,iVar10);
        }
        pvVar27 = (void *)(local_510 + (lVar21 - (ulonglong)(iVar10 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar27,pWVar28,(longlong)iVar26 * 2);
        *(undefined2 *)((longlong)pvVar27 + (longlong)iVar26 * 2) = 0;
      }
      if (pWVar28 != (LPCWSTR)0x0) {
        FMemory::Free(pWVar28);
      }
      if (pWVar25 != (LPCWSTR)0x0) {
        FMemory::Free(pWVar25);
      }
    }
    DVar11 = GetDllDirectoryW(0,(LPWSTR)0x0);
    DVar11 = DVar11 * 2 + 2;
    if ((DVar11 != 0) && (lpBuffer = (LPWSTR)FMemory::Malloc(DVar11,0), lpBuffer != (LPWSTR)0x0)) {
      GetDllDirectoryW(DVar11,lpBuffer);
      SetDllDirectoryW((LPCWSTR)0x0);
    }
    local_3d8 = (void *)0x0;
    local_3d0 = 0;
    uVar15 = FCommandLine::Get();
    cVar8 = FParse::Value(uVar15,L"AbsCrashReportClientLog=",&local_3d8,1);
    pvVar27 = local_3d8;
    if (cVar8 != '\0') {
      lVar21 = (longlong)(int)local_3d0;
      local_398 = (void *)0x0;
      local_390 = (int)local_3d0;
      if ((int)local_3d0 == 0) {
        local_38c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_398,local_3d0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_398,pvVar27,lVar21 * 2);
      }
      FStringFormatArg::FStringFormatArg(local_270,&local_398);
      local_4e0 = (void *)0x0;
      local_4d8 = 1;
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_4e0,1);
      FStringFormatArg::FStringFormatArg(local_4e0,local_270);
      puVar12 = (undefined8 *)FString::Format(local_2b8,L" -abslog=\"{0}\"",&local_4e0);
      iVar10 = local_508;
      pvVar27 = (void *)*puVar12;
      iVar26 = *(int *)(puVar12 + 1) + -1;
      if (*(int *)(puVar12 + 1) == 0) {
        iVar26 = iVar22;
      }
      if (iVar26 != 0) {
        lVar21 = (longlong)local_508;
        local_508 = (uint)(local_508 == 0) + local_508 + iVar26;
        if (local_504 < local_508) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_510,iVar10);
        }
        pvVar5 = (void *)(local_510 + (lVar21 - (ulonglong)(iVar10 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar5,pvVar27,(longlong)iVar26 * 2);
        *(undefined2 *)((longlong)pvVar5 + (longlong)iVar26 * 2) = 0;
      }
      if (local_2b8[0] != 0) {
        FMemory::Free();
      }
      if (local_4d8 != 0) {
        plVar13 = (longlong *)((longlong)local_4e0 + 0x10);
        iVar22 = local_4d8;
        do {
          if (*plVar13 != 0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 4;
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      if (local_4e0 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_260 != 0) {
        FMemory::Free();
      }
    }
    if (lpBuffer != (LPCWSTR)0x0) {
      SetDllDirectoryW(lpBuffer);
      FMemory::Free(lpBuffer);
    }
    if (local_3d8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_3c8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_510 != 0) {
      FMemory::Free();
    }
    if (local_4f0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_388[0] != 0) {
      FMemory::Free();
    }
    if (local_378 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_348[0] != 0) {
      FMemory::Free();
    }
    if (local_448 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_438 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (local_518 == '\0') {
    FUN_1415a6020(DAT_1468b6160);
    psVar14 = (short *)FGenericPlatformMisc::GetEngineMode();
    local_420 = 0;
    local_428 = 0;
    if ((psVar14 != (short *)0x0) && (*psVar14 != 0)) {
      lVar21 = -1;
      do {
        lVar21 = lVar21 + 1;
      } while (psVar14[lVar21] != 0);
      uVar20 = (int)lVar21 + 1;
      local_420 = (ulonglong)uVar20;
      if (0 < (int)uVar20) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,0);
      }
      FGenericPlatformString::Memcpy(local_428,psVar14,(longlong)(int)uVar20 * 2);
    }
    uVar15 = FText::FromString(local_1f8,&local_428);
    uVar16 = FText::FromString(local_1e0,&local_408);
    uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_238,L"The {0} {1} has crashed and will close",L"MessageDialog",
                        L"AppHasCrashed");
    puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_208,uVar17);
    local_1c8[0] = 4;
    FText::FText(local_1b8,uVar16);
    local_1a0 = 1;
    local_198 = 4;
    FText::FText(local_188,uVar15);
    local_498 = local_1c8;
    local_170 = 1;
    ppuStack_490 = &local_168;
    local_2e8 = *puVar12;
    local_2e0 = puVar12[1];
    if (local_2e0 != 0) {
      LOCK();
      *(int *)(local_2e0 + 8) = *(int *)(local_2e0 + 8) + 1;
      UNLOCK();
    }
    local_2a8 = local_498;
    uStack_2a0 = ppuStack_490;
    uVar17 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_298,&local_2a8);
    uVar17 = FText::Format(local_250,&local_2e8,uVar17);
    FText::FText(local_288,uVar17);
    if (local_248 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_248 + 1;
      lVar21 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar21 == 1) {
        (**(code **)*local_248)(local_248);
        LOCK();
        piVar1 = (int *)((longlong)local_248 + 0xc);
        iVar22 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar22 == 1) {
          (**(code **)(*local_248 + 8))(local_248,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_298);
    pcVar23 = local_140;
    do {
      lVar24 = lVar24 + -1;
      pcVar2 = pcVar23 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar13 = *(longlong **)(pcVar23 + -0x40);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar13 + 1;
          lVar21 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar21 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar22 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
      }
      pcVar23 = pcVar2;
    } while (lVar24 != 0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar12);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar16);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar15);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_238);
    if (local_428 != 0) {
      FMemory::Free();
    }
    local_498 = (undefined4 *)0x0;
    ppuStack_490 = (undefined2 **)0x0;
    if (DAT_1468b6170 != 0) {
      lVar24 = -1;
      do {
        lVar24 = lVar24 + 1;
      } while ((&DAT_1468b6170)[lVar24] != 0);
      uVar20 = (int)lVar24 + 1;
      ppuStack_490 = (undefined2 **)(ulonglong)uVar20;
      if (0 < (int)uVar20) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
      }
      FGenericPlatformString::Memcpy(local_498,&DAT_1468b6170,(longlong)(int)uVar20 * 2);
    }
    uVar15 = FText::FromString(local_220,&local_498);
    FUN_1416786b0(0,uVar15,local_288);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_220);
    if (local_498 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_288);
  }
LAB_1416a805e:
  if (local_500 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_418 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_408 != (void *)0x0) {
    FMemory::Free();
  }
  return 0xffffffff;
}



// FUNCTION 1416a8100 ReportEnsureUsingCrashReportClient body=122 status=ok
// SIG undefined ReportEnsureUsingCrashReportClient(void)

undefined4
ReportEnsureUsingCrashReportClient(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined **local_38;
  undefined1 local_30;
  longlong local_28;
  
  FUN_14159fbd0(&local_38);
  local_30 = 1;
  local_38 = &PTR_FUN_144cdb438;
  uVar1 = FUN_1416a6f40(&local_38,param_1,param_2,param_3,1);
  local_38 = &PTR_FUN_144ca06b0;
  if (local_28 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1416a8180 FUN_1416a8180 body=150 status=ok
// SIG undefined FUN_1416a8180(void)

void FUN_1416a8180(char param_1)

{
  HANDLE pvVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  
  if (DAT_1468c2175 != '\0') {
    pvVar1 = GetCurrentProcess();
    TerminateProcess(pvVar1,3);
  }
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af3d0);
  if (param_1 != '\0') {
    lVar2 = FUN_141672640();
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_141672640();
      (**(code **)(*plVar3 + 0x60))(plVar3);
      plVar3 = (longlong *)FUN_141672640();
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
    bVar4 = DAT_1468c2174 != '\0';
    pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001416a81fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TerminateProcess(pvVar1,-(uint)bVar4 & 3);
    return;
  }
  PostQuitMessage(0);
  DAT_1468c217e = 1;
  return;
}



// FUNCTION 1416a8220 `dynamic_initializer_for_'GSystemSettings'' body=18 status=ok
// SIG undefined `dynamic_initializer_for_'GSystemSettings''(void)

void _dynamic_initializer_for__GSystemSettings__(undefined8 param_1,undefined1 param_2)

{
  DAT_1469e420d = 1;
  DAT_1469e420c = param_2;
  FUN_1416a8180();
  return;
}



// FUNCTION 1416a8240 Run body=124 status=ok
// SIG undefined Run(void)

undefined8 FCrashReportingThread::Run(longlong param_1)

{
  DWORD DVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = *(int *)(param_1 + 0x10) == 0;
  if (bVar2) {
    *(int *)(param_1 + 0x10) = 0;
  }
  UNLOCK();
  if (bVar2) {
    while (DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x18),500), DVar1 != 0) {
      LOCK();
      bVar2 = *(int *)(param_1 + 0x10) == 0;
      if (bVar2) {
        *(int *)(param_1 + 0x10) = 0;
      }
      UNLOCK();
      if (!bVar2) {
        return 0;
      }
    }
    ResetEvent(*(HANDLE *)(param_1 + 0x30));
    FUN_1416a2040(param_1);
    ResetEvent(*(HANDLE *)(param_1 + 0x18));
    SetEvent(*(HANDLE *)(param_1 + 0x30));
  }
  return 0;
}



// FUNCTION 1416a82c0 Seek body=197 status=ok
// SIG undefined Seek(void)

undefined1 FAsyncBufferedFileReaderWindows::Seek(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 - *(longlong *)(param_1 + 0x18);
  if (uVar3 != 0) {
    cVar2 = FUN_1416abbe0();
    if (cVar2 == '\0') {
      return 0;
    }
    *(longlong *)(param_1 + 0x18) = param_2;
    if ((((longlong)uVar3 < 0) &&
        (-1 < (longlong)
              ((longlong)*(int *)(param_1 + 0x44) -
              ((uVar3 ^ (longlong)uVar3 >> 0x3f) - ((longlong)uVar3 >> 0x3f))))) ||
       ((0 < (longlong)uVar3 &&
        ((longlong)((longlong)*(int *)(param_1 + 0x44) + uVar3) < (longlong)*(int *)(param_1 + 0x38)
        )))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (int)uVar3;
      return 1;
    }
    *(longlong *)(param_1 + 0x20) = param_2;
    *(int *)(param_1 + 0x60) = (int)param_2;
    *(int *)(param_1 + 100) = (int)((ulonglong)param_2 >> 0x20);
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x44) = 0;
    FUN_1416a8d00(param_1);
  }
  return 1;
}



// FUNCTION 1416a83d0 SetDlgItem body=231 status=ok
// SIG undefined SetDlgItem(void)

undefined1 SetDlgItem(HWND param_1,LPCWSTR param_2,int param_3,int *param_4,int *param_5)

{
  undefined1 uVar1;
  HDC hdc;
  HWND hWnd;
  longlong lVar2;
  tagSIZE local_18 [2];
  
  hdc = CreateCompatibleDC((HDC)0x0);
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_2[lVar2] != L'\0');
  GetTextExtentPoint32W(hdc,param_2,(int)lVar2,local_18);
  DeleteDC(hdc);
  local_18[0].cx = local_18[0].cx + 0xe;
  local_18[0].cy = local_18[0].cy + 8;
  hWnd = GetDlgItem(param_1,param_3);
  uVar1 = (char)hWnd;
  if (hWnd != (HWND)0x0) {
    *param_4 = *param_4 + (-5 - local_18[0].cx);
    SetWindowPos(hWnd,(HWND)0x0,*param_4,*param_5 - local_18[0].cy,local_18[0].cx,local_18[0].cy,0);
    SetDlgItemTextW(param_1,param_3,param_2);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1416a84c0 FUN_1416a84c0 body=14 status=ok
// SIG undefined FUN_1416a84c0(void)

void FUN_1416a84c0(undefined1 param_1)

{
  DAT_1469e420c = param_1;
  DAT_1469e420d = 1;
  return;
}



// FUNCTION 1416a84d0 SetGracefulTerminationHandler body=19 status=ok
// SIG undefined SetGracefulTerminationHandler(void)

void FWindowsPlatformMisc::SetGracefulTerminationHandler(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001416a84dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetConsoleCtrlHandler(ConsoleCtrlHandler,1);
  return;
}



// FUNCTION 1416a84f0 FUN_1416a84f0 body=95 status=ok
// SIG undefined FUN_1416a84f0(void)

bool FUN_1416a84f0(longlong *param_1,undefined8 param_2,char param_3)

{
  BOOL BVar1;
  undefined8 *puVar2;
  LPCWSTR lpFileName;
  DWORD dwFileAttributes;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,local_18,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*puVar2;
  }
  dwFileAttributes = 0x80;
  if (param_3 != '\0') {
    dwFileAttributes = 1;
  }
  BVar1 = SetFileAttributesW(lpFileName,dwFileAttributes);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return BVar1 != 0;
}



// FUNCTION 1416a8550 SetStoredValue body=744 status=ok
// SIG undefined SetStoredValue(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FWindowsPlatformMisc::SetStoredValue
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  DWORD dwMessageId;
  LPCWSTR *ppWVar1;
  int iVar2;
  LPCWSTR pWVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  int iVar7;
  BYTE *lpData;
  undefined1 auStackY_8e8 [32];
  LPCWSTR local_898;
  int local_890;
  int local_88c;
  LPCWSTR local_888;
  undefined8 local_880;
  LPCWSTR local_878;
  undefined8 local_870;
  HKEY local_868 [2];
  WCHAR local_858 [1024];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStackY_8e8;
  local_870 = 9;
  local_878 = (LPCWSTR)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_878,0);
  pWVar3 = local_878;
  FGenericPlatformString::Memcpy(local_878,L"Software",0x12);
  iVar4 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    iVar4 = 0;
  }
  iVar7 = 2;
  if (((int)local_870 != 0) || (iVar2 = 2, iVar4 == -1)) {
    iVar2 = 1;
  }
  local_888 = pWVar3;
  local_880._0_4_ = (int)local_870;
  local_880._4_4_ = local_870._4_4_;
  if (local_870._4_4_ < iVar4 + iVar2 + (int)local_870) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_888);
  }
  FString::PathAppend(&local_888,*param_1,iVar4);
  iVar2 = local_880._4_4_;
  iVar4 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = 0;
  }
  if (((int)local_880 != 0) || (iVar4 == -1)) {
    iVar7 = 1;
  }
  iVar7 = iVar7 + (int)local_880;
  local_898 = local_888;
  local_888 = (LPCWSTR)0x0;
  local_890 = (int)local_880;
  local_88c = local_880._4_4_;
  local_880 = 0;
  if (iVar2 < iVar7 + iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_898);
  }
  FString::PathAppend(&local_898,*param_2,iVar4);
  if (local_888 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  ppWVar1 = (LPCWSTR *)FString::Replace(&local_898,&local_878,&DAT_144cd5b14,&DAT_144cd5974);
  if (&local_898 != ppWVar1) {
    if (local_898 != (LPCWSTR)0x0) {
      FMemory::Free();
    }
    local_898 = *ppWVar1;
    *ppWVar1 = (LPCWSTR)0x0;
    local_890 = *(int *)(ppWVar1 + 1);
    local_88c = *(int *)((longlong)ppWVar1 + 0xc);
    ppWVar1[1] = (LPCWSTR)0x0;
  }
  if (local_878 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  puVar5 = &DAT_143f3eda8;
  pWVar3 = L"";
  if (local_890 != 0) {
    pWVar3 = local_898;
  }
  dwMessageId = RegCreateKeyExW((HKEY)0xffffffff80000001,pWVar3,0,(LPWSTR)0x0,0,0x20006,
                                (LPSECURITY_ATTRIBUTES)0x0,local_868,(LPDWORD)0x0);
  if (dwMessageId == 0) {
    iVar4 = *(int *)(param_4 + 1) + -1;
    if (*(int *)(param_4 + 1) == 0) {
      iVar4 = 0;
      lpData = "";
    }
    else {
      lpData = (BYTE *)*param_4;
    }
    if (*(int *)(param_3 + 1) == 0) {
      pWVar3 = L"";
    }
    else {
      pWVar3 = (LPCWSTR)*param_3;
    }
    dwMessageId = RegSetValueExW(local_868[0],pWVar3,0,1,lpData,iVar4 * 2 + 2);
    RegCloseKey(local_868[0]);
    if (dwMessageId == 0) {
      uVar6 = 1;
      goto LAB_1416a8803;
    }
  }
  FormatMessageW(0x1000,(LPCVOID)0x0,dwMessageId,0,local_858,0x400,(va_list *)0x0);
  if (*(int *)(param_3 + 1) != 0) {
    puVar5 = (undefined2 *)*param_3;
  }
  FOutputDevice::LogfImpl
            (DAT_1468b6160,
             L"FWindowsPlatformMisc::SetStoredValue: ERROR: Could not store value for \'%s\'. Error Code %u: %s"
             ,puVar5,dwMessageId);
  uVar6 = 0;
LAB_1416a8803:
  if (local_898 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 1416a8840 FUN_1416a8840 body=585 status=ok
// SIG undefined FUN_1416a8840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416a8840(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 *hFile;
  LPCWSTR lpFileName;
  longlong lVar3;
  longlong lVar4;
  longlong local_res18;
  undefined1 auStackY_98 [32];
  _FILETIME local_58;
  _FILETIME local_50;
  longlong local_48 [2];
  SYSTEMTIME local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStackY_98;
  local_res18 = param_3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x188))(param_1,local_48,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*puVar2;
  }
  hFile = CreateFileW(lpFileName,0x100,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,(HANDLE)0x0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (hFile != &DAT_ffffffffffffffff) {
    local_38.wYear = FDateTime::GetYear(&local_res18);
    local_38.wMonth = FDateTime::GetMonth(&local_res18);
    local_38.wDay = FDateTime::GetDay(&local_res18);
    uVar1 = FDateTime::GetDayOfWeek(&local_res18);
    local_38.wDayOfWeek = 1;
    switch(uVar1) {
    case 0:
      break;
    case 1:
      local_38.wDayOfWeek = 2;
      break;
    case 2:
      local_38.wDayOfWeek = 3;
      break;
    case 3:
      local_38.wDayOfWeek = 4;
      break;
    case 4:
      local_38.wDayOfWeek = 5;
      break;
    case 5:
      local_38.wDayOfWeek = 6;
      break;
    default:
      local_38.wDayOfWeek = 0;
    }
    local_38.wMilliseconds = 0;
    local_38.wHour =
         (short)(local_res18 / 36000000000) + (short)((local_res18 / 36000000000) / 0x18) * -0x18;
    lVar4 = local_res18 / 600000000;
    lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar4),8) + lVar4;
    local_38.wMinute = (short)lVar4 + ((short)(lVar3 >> 5) - (short)(lVar3 >> 0x3f)) * -0x3c;
    lVar4 = local_res18 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_res18),8);
    lVar3 = (lVar4 >> 0x17) - (lVar4 >> 0x3f);
    lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
    local_38.wSecond = (short)lVar3 + ((short)(lVar4 >> 5) - (short)(lVar4 >> 0x3f)) * -0x3c;
    SystemTimeToFileTime(&local_38,&local_58);
    local_50 = local_58;
    SetFileTime(hFile,(FILETIME *)0x0,(FILETIME *)0x0,&local_50);
    CloseHandle(hFile);
  }
  return;
}



// FUNCTION 1416a8ab0 SetUTF8Output body=42 status=ok
// SIG undefined SetUTF8Output(void)

void FWindowsPlatformMisc::SetUTF8Output(void)

{
  FILE *_File;
  int _FileHandle;
  
  _File = (FILE *)__acrt_iob_func(1);
  _FileHandle = _fileno(_File);
                    /* WARNING: Could not recover jumptable at 0x0001416a8ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _setmode(_FileHandle,0x40000);
  return;
}



// FUNCTION 1416a8ae0 FUN_1416a8ae0 body=314 status=ok
// SIG undefined FUN_1416a8ae0(void)

void FUN_1416a8ae0(char param_1)

{
  char cVar1;
  BOOL BVar2;
  undefined8 uVar3;
  HMODULE hmod;
  
  if (DAT_1464b01f4 != '\0') {
    uVar3 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar3,L"DontAllowKeyboardHook");
    DAT_1464b0030 = cVar1 == '\0';
    DAT_1464b01f4 = '\0';
  }
  if ((DAT_1464b0030 != '\0') && (DAT_1468c21f4 == '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469e469c) &&
       (_Init_thread_header(&DAT_1469e469c), DAT_1469e469c == -1)) {
      uVar3 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar3,L"DontDisableKeyboardHook");
      DAT_1469e4699 = cVar1 == '\0';
      _Init_thread_footer(&DAT_1469e469c);
    }
    if (DAT_1469e4699 != '\0') {
      BVar2 = IsDebuggerPresent();
      DAT_1468c21f4 = BVar2 != 0;
    }
    if ((DAT_1468c21f4 == '\0') && (param_1 != '\0')) {
      if (DAT_1469e4210 != (HHOOK)0x0) {
        return;
      }
      hmod = GetModuleHandleW((LPCWSTR)0x0);
      DAT_1469e4210 = SetWindowsHookExW(0xd,(HOOKPROC)&LAB_1416a3f40,hmod,0);
      return;
    }
  }
  if (DAT_1469e4210 != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_1469e4210);
    DAT_1469e4210 = (HHOOK)0x0;
  }
  return;
}



// FUNCTION 1416a8c20 FUN_1416a8c20 body=203 status=ok
// SIG undefined FUN_1416a8c20(void)

undefined8 * FUN_1416a8c20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_58 [80];
  
  puVar2 = (undefined8 *)operator_new(0x80);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *puVar2 = &PTR__scalar_deleting_destructor__144ca06d8;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    puVar2[4] = AK::MemoryMgr::StartProfileThreadUsage;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x74) = 1;
    if (param_2 != 0) {
      uVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58,param_2);
      TFunction<void___cdecl(int)>::operator=(puVar2 + 4,uVar3);
    }
    puVar2[2] = uVar1;
    *puVar2 = &PTR__scalar_deleting_destructor__144cdb840;
    IAsyncReadRequest::SetComplete(puVar2);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1416a8cf0 SplitNameWithCheck body=5 status=ok
// SIG undefined SplitNameWithCheck(void)

ulonglong FName::SplitNameWithCheck
                    (wchar_t *param_1,wchar_t *param_2,int param_3,undefined4 *param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  ulonglong uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (param_1[uVar3] != L'\0');
  if (0 < (int)uVar3) {
    pwVar1 = param_1 + (longlong)(int)uVar3 + -1;
    uVar3 = (ulonglong)(ushort)*pwVar1;
    pwVar5 = pwVar1;
    if ((ushort)(*pwVar1 + L'￐') < 10) {
      do {
        wVar2 = (wchar_t)uVar3;
        if ((0x39 < (ushort)wVar2) || (pwVar5 <= param_1)) break;
        wVar2 = pwVar5[-1];
        uVar3 = (ulonglong)(ushort)wVar2;
        pwVar5 = pwVar5 + -1;
      } while (0x2f < (ushort)wVar2);
      if ((wVar2 == L'_') &&
         (((pwVar5[1] != L'0' || (((longlong)pwVar1 - (longlong)pwVar5 & 0xfffffffffffffffeU) == 2))
          && (uVar3 = _wtoi64(pwVar5 + 1), uVar3 < 0x80000000)))) {
        *param_4 = (int)uVar3;
        iVar4 = (int)((longlong)pwVar5 - (longlong)param_1 >> 1) + 1;
        if (iVar4 <= param_3) {
          param_3 = iVar4;
        }
        wcsncpy(param_2,param_1,(longlong)param_3 - 1);
        param_2[(longlong)param_3 + -1] = L'\0';
        return 1;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1416a8d00 FUN_1416a8d00 body=280 status=ok
// SIG undefined FUN_1416a8d00(void)

void FUN_1416a8d00(longlong param_1,int param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  double dVar4;
  DWORD local_res8 [2];
  LARGE_INTEGER local_res18 [2];
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    QueryPerformanceCounter(local_res18);
    local_res8[0] = 0;
    dVar4 = (double)local_res18[0].QuadPart * DAT_1468b02f8;
    *(undefined1 *)(param_1 + 0x71) = 1;
    *(int *)(param_1 + 0x48) = param_2;
    *(double *)(param_1 + 0x78) = dVar4 + 16777216.0;
    BVar1 = ReadFile(*(HANDLE *)(param_1 + 8),*(LPVOID *)(param_1 + 0x28 + (longlong)param_2 * 8),
                     *(DWORD *)(param_1 + 0x38),local_res8,(LPOVERLAPPED)(param_1 + 0x50));
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 != 0x3e5) {
        if (0.0 < *(double *)(param_1 + 0x78)) {
          FUN_1415bb440(*(undefined8 *)(param_1 + 8),local_res8[0],*(undefined8 *)(param_1 + 0x18));
          *(undefined8 *)(param_1 + 0x78) = 0;
        }
        *(undefined2 *)(param_1 + 0x70) = 1;
        return;
      }
    }
    else {
      uVar3 = (ulonglong)local_res8[0];
      if (0.0 < *(double *)(param_1 + 0x78)) {
        FUN_1415bb440(*(undefined8 *)(param_1 + 8),uVar3,*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + uVar3;
      uVar3 = *(ulonglong *)(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x71) = 0;
      *(int *)(param_1 + 0x60) = (int)uVar3;
      *(int *)(param_1 + 100) = (int)(uVar3 >> 0x20);
      if (*(ulonglong *)(param_1 + 0x10) <= uVar3) {
        *(undefined1 *)(param_1 + 0x70) = 1;
      }
    }
  }
  return;
}



// FUNCTION 1416a8e20 FUN_1416a8e20 body=6623 status=ok
// SIG undefined FUN_1416a8e20(void)

void FUN_1416a8e20(long param_1)

{
  undefined8 uVar1;
  BOOL BVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_508 [8];
  undefined1 local_500 [8];
  undefined1 local_4f8 [8];
  undefined1 local_4f0 [8];
  undefined1 local_4e8 [8];
  undefined1 local_4e0 [8];
  undefined1 local_4d8 [8];
  undefined1 local_4d0 [8];
  undefined1 local_4c8 [8];
  undefined1 local_4c0 [8];
  undefined1 local_4b8 [8];
  undefined1 local_4b0 [8];
  undefined1 local_4a8 [8];
  undefined1 local_4a0 [8];
  undefined1 local_498 [8];
  undefined1 local_490 [8];
  undefined1 local_488 [8];
  undefined1 local_480 [8];
  undefined1 local_478 [8];
  undefined1 local_470 [8];
  undefined1 local_468 [8];
  undefined1 local_460 [8];
  undefined1 local_458 [8];
  undefined1 local_450 [8];
  undefined1 local_448 [8];
  undefined1 local_440 [8];
  undefined1 local_438 [8];
  undefined1 local_430 [8];
  undefined1 local_428 [8];
  undefined1 local_420 [8];
  undefined1 local_418 [8];
  undefined1 local_410 [8];
  undefined1 local_408 [8];
  undefined1 local_400 [8];
  undefined1 local_3f8 [8];
  undefined1 local_3f0 [8];
  undefined1 local_3e8 [8];
  undefined1 local_3e0 [8];
  undefined1 local_3d8 [8];
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [8];
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [8];
  undefined1 local_398 [8];
  undefined1 local_390 [8];
  undefined1 local_388 [8];
  undefined1 local_380 [8];
  undefined1 local_378 [8];
  undefined1 local_370 [8];
  undefined1 local_368 [8];
  undefined1 local_360 [8];
  undefined1 local_358 [8];
  undefined1 local_350 [8];
  undefined1 local_348 [8];
  undefined1 local_340 [8];
  undefined1 local_338 [8];
  undefined1 local_330 [8];
  undefined1 local_328 [8];
  undefined1 local_320 [8];
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  undefined1 local_308 [8];
  undefined1 local_300 [8];
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [8];
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [8];
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  undefined1 local_240 [8];
  undefined1 local_238 [8];
  undefined1 local_230 [8];
  undefined1 local_228 [8];
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
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
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  DAT_1469e45f8 = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)FName::GetCriticalSection();
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = FName::GetNames();
  TStaticIndirectArrayThreadSafeRead<FNameEntry,2097152,16384>::AddZeroed(uVar1,0x25c);
  LeaveCriticalSection(lpCriticalSection);
  FName::Init(local_res8,L"None",0,1,0,0);
  FName::Init(local_res10,L"ByteProperty",0,1,0,1);
  FName::Init(local_res18,L"IntProperty",0,1,0,2);
  FName::Init(local_res20,L"BoolProperty",0,1,0,3);
  FName::Init(local_508,L"FloatProperty",0,1,0,4);
  FName::Init(local_500,L"ObjectProperty",0,1,0,5);
  FName::Init(local_4f8,L"NameProperty",0,1,0,6);
  FName::Init(local_4f0,L"DelegateProperty",0,1,0,7);
  FName::Init(local_4e8,L"DoubleProperty",0,1,0,8);
  FName::Init(local_4e0,L"ArrayProperty",0,1,0,9);
  FName::Init(local_4d8,L"StructProperty",0,1,0,10);
  FName::Init(local_4d0,L"VectorProperty",0,1,0,0xb);
  FName::Init(local_4c8,L"RotatorProperty",0,1,0,0xc);
  FName::Init(local_4c0,L"StrProperty",0,1,0,0xd);
  FName::Init(local_4b8,L"TextProperty",0,1,0,0xe);
  FName::Init(local_4b0,L"InterfaceProperty",0,1,0,0xf);
  FName::Init(local_4a8,L"MulticastDelegateProperty",0,1,0,0x10);
  FName::Init(local_4a0,L"LazyObjectProperty",0,1,0,0x12);
  FName::Init(local_498,L"SoftObjectProperty",0,1,0,0x13);
  FName::Init(local_490,L"UInt64Property",0,1,0,0x14);
  FName::Init(local_488,L"UInt32Property",0,1,0,0x15);
  FName::Init(local_480,L"UInt16Property",0,1,0,0x16);
  FName::Init(local_478,L"Int64Property",0,1,0,0x17);
  FName::Init(local_470,L"Int16Property",0,1,0,0x19);
  FName::Init(local_468,L"Int8Property",0,1,0,0x1a);
  FName::Init(local_460,L"MapProperty",0,1,0,0x1c);
  FName::Init(local_458,L"SetProperty",0,1,0,0x1d);
  FName::Init(local_450,L"Core",0,1,0,0x1e);
  FName::Init(local_448,L"Engine",0,1,0,0x1f);
  FName::Init(local_440,L"Editor",0,1,0,0x20);
  FName::Init(local_438,L"CoreUObject",0,1,0,0x21);
  FName::Init(local_430,L"EnumProperty",0,1,0,0x22);
  FName::Init(local_428,L"Cylinder",0,1,0,0x32);
  FName::Init(local_420,L"BoxSphereBounds",0,1,0,0x33);
  FName::Init(local_418,L"Sphere",0,1,0,0x34);
  FName::Init(local_410,&DAT_144cd8d88,0,1,0,0x35);
  FName::Init(local_408,L"Vector2D",0,1,0,0x36);
  FName::Init(local_400,L"IntRect",0,1,0,0x37);
  FName::Init(local_3f8,L"IntPoint",0,1,0,0x38);
  FName::Init(local_3f0,L"Vector4",0,1,0,0x39);
  FName::Init(local_3e8,L"Name",0,1,0,0x3a);
  FName::Init(local_3e0,L"Vector",0,1,0,0x3b);
  FName::Init(local_3d8,L"Rotator",0,1,0,0x3c);
  FName::Init(local_3d0,L"SHVector",0,1,0,0x3d);
  FName::Init(local_3c8,L"Color",0,1,0,0x3e);
  FName::Init(local_3c0,L"Plane",0,1,0,0x3f);
  FName::Init(local_3b8,L"Matrix",0,1,0,0x40);
  FName::Init(local_3b0,L"LinearColor",0,1,0,0x41);
  FName::Init(local_3a8,L"AdvanceFrame",0,1,0,0x42);
  FName::Init(local_3a0,L"Pointer",0,1,0,0x43);
  FName::Init(local_398,L"Double",0,1,0,0x44);
  FName::Init(local_390,L"Quat",0,1,0,0x45);
  FName::Init(local_388,L"Self",0,1,0,0x46);
  FName::Init(local_380,L"Transform",0,1,0,0x47);
  FName::Init(local_378,L"IntVector",0,1,0,0x62);
  FName::Init(local_370,L"IntVector4",0,1,0,99);
  FName::Init(local_368,L"Object",0,1,0,100);
  FName::Init(local_360,L"Camera",0,1,0,0x65);
  FName::Init(local_358,L"Actor",0,1,0,0x66);
  FName::Init(local_350,L"ObjectRedirector",0,1,0,0x67);
  FName::Init(local_348,L"ObjectArchetype",0,1,0,0x68);
  FName::Init(local_340,L"Class",0,1,0,0x69);
  FName::Init(local_338,L"ScriptStruct",0,1,0,0x6a);
  FName::Init(local_330,L"Function",0,1,0,0x6b);
  FName::Init(local_328,L"State",0,1,0,200);
  FName::Init(local_320,L"TRUE",0,1,0,0xc9);
  FName::Init(local_318,L"FALSE",0,1,0,0xca);
  FName::Init(local_310,L"Enum",0,1,0,0xcb);
  FName::Init(local_308,L"Default",0,1,0,0xcc);
  FName::Init(local_300,L"Skip",0,1,0,0xcd);
  FName::Init(local_2f8,L"Input",0,1,0,0xce);
  FName::Init(local_2f0,L"Package",0,1,0,0xcf);
  FName::Init(local_2e8,L"Groups",0,1,0,0xd0);
  FName::Init(local_2e0,L"Interface",0,1,0,0xd1);
  FName::Init(local_2d8,L"Components",0,1,0,0xd2);
  FName::Init(local_2d0,L"Global",0,1,0,0xd3);
  FName::Init(local_2c8,L"Super",0,1,0,0xd4);
  FName::Init(local_2c0,L"Outer",0,1,0,0xd5);
  FName::Init(local_2b8,&DAT_144cd90c8,0,1,0,0xd6);
  FName::Init(local_2b0,L"Role",0,1,0,0xd7);
  FName::Init(local_2a8,L"RemoteRole",0,1,0,0xd8);
  FName::Init(local_2a0,L"PersistentLevel",0,1,0,0xd9);
  FName::Init(local_298,L"TheWorld",0,1,0,0xda);
  FName::Init(local_290,L"PackageMetaData",0,1,0,0xdb);
  FName::Init(local_288,L"InitialState",0,1,0,0xdc);
  FName::Init(local_280,L"Game",0,1,0,0xdd);
  FName::Init(local_278,L"SelectionColor",0,1,0,0xde);
  FName::Init(local_270,&DAT_144cd87a4,0,1,0,0xdf);
  FName::Init(local_268,L"ExecuteUbergraph",0,1,0,0xe0);
  FName::Init(local_260,L"DeviceID",0,1,0,0xe1);
  FName::Init(local_258,L"RootStat",0,1,0,0xe2);
  FName::Init(local_250,L"MoveActor",0,1,0,0xe3);
  FName::Init(local_248,&DAT_144cd9210,0,1,0,0xe6);
  FName::Init(local_240,L"MeshEmitterVertexColor",0,1,0,0xe7);
  FName::Init(local_238,L"TextureOffsetParameter",0,1,0,0xe8);
  FName::Init(local_230,L"TextureScaleParameter",0,1,0,0xe9);
  FName::Init(local_228,L"ImpactVel",0,1,0,0xea);
  FName::Init(local_220,L"SlideVel",0,1,0,0xeb);
  FName::Init(local_218,L"TextureOffset1Parameter",0,1,0,0xec);
  FName::Init(local_210,L"MeshEmitterDynamicParameter",0,1,0,0xed);
  FName::Init(local_208,L"ExpressionInput",0,1,0,0xee);
  FName::Init(local_200,L"Untitled",0,1,0,0xef);
  FName::Init(local_1f8,L"Timer",0,1,0,0xf0);
  FName::Init(local_1f0,L"Team",0,1,0,0xf1);
  FName::Init(local_1e8,&DAT_144cd9398,0,1,0,0xf2);
  FName::Init(local_1e0,L"High",0,1,0,0xf3);
  FName::Init(local_1d8,L"NetworkGUID",0,1,0,0xf4);
  FName::Init(local_1d0,L"GameThread",0,1,0,0xf5);
  FName::Init(local_1c8,L"RenderThread",0,1,0,0xf6);
  FName::Init(local_1c0,L"OtherChildren",0,1,0,0xf7);
  FName::Init(local_1b8,L"Location",0,1,0,0xf8);
  FName::Init(local_1b0,L"Rotation",0,1,0,0xf9);
  FName::Init(local_1a8,&DAT_144cd9450,0,1,0,0xfa);
  FName::Init(local_1a0,L"EditorSettings",0,1,0,0xfb);
  FName::Init(local_198,L"AudioThread",0,1,0,0xfc);
  FName::Init(local_190,&DAT_144cd8824,0,1,0,0xfd);
  FName::Init(local_188,L"UserDefinedEnum",0,1,0,0xfe);
  FName::Init(local_180,L"DGram",0,1,0,0x118);
  FName::Init(local_178,L"Stream",0,1,0,0x119);
  FName::Init(local_170,L"GameNetDriver",0,1,0,0x11a);
  FName::Init(local_168,L"PendingNetDriver",0,1,0,0x11b);
  FName::Init(local_160,L"BeaconNetDriver",0,1,0,0x11c);
  FName::Init(local_158,L"FlushNetDormancy",0,1,0,0x11d);
  FName::Init(local_150,L"DemoNetDriver",0,1,0,0x11e);
  FName::Init(local_148,L"GameSession",0,1,0,0x11f);
  FName::Init(local_140,L"PartySession",0,1,0,0x120);
  FName::Init(local_138,L"GamePort",0,1,0,0x121);
  FName::Init(local_130,L"BeaconPort",0,1,0,0x122);
  FName::Init(local_128,L"MatchmakingSession",0,1,0,0x123);
  FName::Init(local_120,L"Linear",0,1,0,300);
  FName::Init(local_118,L"Point",0,1,0,0x12d);
  FName::Init(local_110,L"Aniso",0,1,0,0x12e);
  FName::Init(local_108,L"LightMapResolution",0,1,0,0x12f);
  FName::Init(local_100,L"UnGrouped",0,1,0,0x137);
  FName::Init(local_f8,L"VoiceChat",0,1,0,0x138);
  FName::Init(local_f0,L"Playing",0,1,0,0x140);
  FName::Init(local_e8,L"Spectating",0,1,0,0x142);
  FName::Init(local_e0,L"Inactive",0,1,0,0x145);
  FName::Init(local_d8,L"PerfWarning",0,1,0,0x15e);
  FName::Init(local_d0,L"Info",0,1,0,0x15f);
  FName::Init(local_c8,L"Init",0,1,0,0x160);
  FName::Init(local_c0,L"Exit",0,1,0,0x161);
  FName::Init(local_b8,&DAT_144cd9720,0,1,0,0x162);
  FName::Init(local_b0,L"Warning",0,1,0,0x163);
  FName::Init(local_a8,L"Error",0,1,0,0x164);
  FName::Init(local_a0,L"FontCharacter",0,1,0,400);
  FName::Init(local_98,L"InitChild2StartBone",0,1,0,0x191);
  FName::Init(local_90,L"SoundCueLocalized",0,1,0,0x192);
  FName::Init(local_88,L"SoundCue",0,1,0,0x193);
  FName::Init(local_80,L"RawDistributionFloat",0,1,0,0x194);
  FName::Init(local_78,L"RawDistributionVector",0,1,0,0x195);
  FName::Init(local_70,L"InterpCurveFloat",0,1,0,0x196);
  FName::Init(local_68,L"InterpCurveVector2D",0,1,0,0x197);
  FName::Init(local_60,L"InterpCurveVector",0,1,0,0x198);
  FName::Init(local_58,L"InterpCurveTwoVectors",0,1,0,0x199);
  FName::Init(local_50,L"InterpCurveQuat",0,1,0,0x19a);
  FName::Init(local_48,&DAT_144cd98f8,0,1,0,0x1c2);
  FName::Init(local_40,L"NavMesh",0,1,0,0x1c3);
  FName::Init(local_38,L"PerformanceCapture",0,1,0,500);
  FName::Init(local_30,L"EditorLayout",0,1,0,600);
  FName::Init(local_28,L"EditorKeyBindings",0,1,0,0x259);
  FName::Init(local_20,L"GameUserSettings",0,1,0,0x25a);
  return;
}



// FUNCTION 1416aa800 FUN_1416aa800 body=3819 status=ok
// SIG undefined FUN_1416aa800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416aa800(short *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  DWORD DVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined2 **ppuVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined2 *puVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_2f58 [32];
  undefined2 *local_2f38;
  undefined2 *local_2f30;
  undefined2 *local_2f28;
  undefined2 *local_2f20;
  undefined8 local_2f18;
  undefined8 local_2f10;
  undefined8 local_2f08;
  undefined2 local_2ef8 [4];
  undefined2 *local_2ef0;
  int local_2ee8;
  int local_2ee4;
  undefined2 *local_2ee0;
  int local_2ed8;
  int local_2ed4;
  undefined4 local_2ed0;
  short local_2ecc [2];
  int local_2ec8;
  undefined2 *local_2ec0;
  undefined2 *local_2eb8;
  int local_2eb0;
  int local_2ea8;
  longlong local_2ea0;
  ulonglong local_2e98;
  wchar_t *local_2e90;
  undefined8 local_2e88;
  wchar_t *local_2e80;
  undefined8 local_2e78;
  undefined2 *local_2e70;
  int local_2e68;
  undefined2 *local_2e60;
  int local_2e58;
  undefined2 *local_2e50;
  int local_2e48;
  wchar_t *local_2e40;
  int local_2e38;
  undefined2 *local_2e30;
  int local_2e28;
  undefined2 *local_2e20;
  int local_2e18;
  undefined2 *local_2e10;
  int local_2e08;
  undefined1 local_2e00 [8];
  undefined1 local_2df8 [8];
  longlong local_2df0 [2];
  longlong local_2de0 [2];
  longlong local_2dd0 [2];
  longlong local_2dc0 [2];
  longlong local_2db0 [2];
  longlong local_2da0 [2];
  longlong local_2d90 [2];
  longlong local_2d80 [2];
  undefined1 local_2d70 [8];
  longlong *local_2d68;
  undefined1 local_2d58 [2112];
  wchar_t local_2518 [24];
  wchar_t local_24e8 [24];
  undefined8 local_24b8;
  undefined8 uStack_24b0;
  undefined8 local_24a8;
  undefined8 uStack_24a0;
  undefined8 local_2498;
  undefined8 uStack_2490;
  undefined8 local_2488;
  undefined8 uStack_2480;
  undefined4 local_2478;
  undefined4 uStack_2474;
  undefined4 uStack_2470;
  undefined4 uStack_246c;
  undefined8 local_2468;
  undefined8 uStack_2460;
  undefined2 local_2458;
  wchar_t local_2448 [255];
  undefined2 local_224a;
  wchar_t local_2248 [255];
  undefined2 local_204a;
  wchar_t local_2048 [255];
  undefined2 local_1e4a;
  wchar_t local_1e48 [255];
  undefined2 local_1c4a;
  wchar_t local_1c48 [255];
  undefined2 local_1a4a;
  wchar_t local_1a48 [255];
  undefined2 local_184a;
  wchar_t local_1848 [255];
  undefined2 local_164a;
  wchar_t local_1648 [255];
  undefined2 local_144a;
  wchar_t local_1448 [255];
  undefined2 local_124a;
  wchar_t local_1248 [259];
  undefined2 local_1042;
  wchar_t local_1038 [2047];
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2f58;
  local_2ea8 = param_2;
  uVar9 = FCommandLine::Get();
  cVar6 = FParse::Param(uVar9,L"CrashForUAT");
  if (cVar6 == '\0') {
    DAT_1464af7a4 = DAT_1464af7a4 + 1;
    bVar5 = false;
    lVar17 = (longlong)(DAT_1464af798 + -1);
    if (-1 < DAT_1464af798 + -1) {
      lVar19 = lVar17 << 4;
      bVar5 = false;
      do {
        if (((*(int *)(lVar19 + 8 + DAT_1464af790) == 0) ||
            (plVar12 = *(longlong **)(lVar19 + DAT_1464af790), plVar12 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar12 + 0x40))(plVar12,param_1), cVar6 == '\0')) {
          bVar5 = true;
        }
        lVar19 = lVar19 + -0x10;
        lVar17 = lVar17 + -1;
      } while (-1 < lVar17);
    }
    iVar20 = DAT_1464af798;
    puVar18 = (undefined2 *)0x0;
    DAT_1464af7a4 = DAT_1464af7a4 + -1;
    iVar21 = 0;
    if ((bVar5) && (DAT_1464af7a4 < 1)) {
      puVar15 = puVar18;
      puVar14 = puVar18;
      if (0 < DAT_1464af798) {
        do {
          if (((*(int *)((longlong)puVar14 + DAT_1464af790 + 8) == 0) ||
              (*(longlong **)((longlong)puVar14 + DAT_1464af790) == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(**(longlong **)((longlong)puVar14 + DAT_1464af790) + 0x10))(),
             cVar6 != '\0')) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af790,puVar15,1,1);
          }
          else {
            puVar15 = (undefined2 *)(ulonglong)((int)puVar15 + 1);
            puVar14 = puVar14 + 8;
          }
        } while ((int)puVar15 < DAT_1464af798);
      }
      _DAT_1464af7a0 = DAT_1464af798 * 2;
      if (DAT_1464af798 * 2 < 3) {
        _DAT_1464af7a0 = 2;
      }
      if ((_DAT_1464af7a0 < iVar20) && (DAT_1464af79c != DAT_1464af798)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af790);
      }
    }
    if (DAT_1464a8d80 == '\0') {
      local_2ecc[0] = 0x33;
      local_2ecc[1] = 0;
      builtin_wcsncpy(local_2518,L"UnrealAutoReport",0x10);
      local_2eb8 = (undefined2 *)0x0;
      builtin_wcsncpy(local_2518 + 0x10,L"Dump",5);
      local_2eb0 = 0;
      puVar10 = (undefined8 *)FPaths::ProjectLogDir(local_2de0);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar10;
      }
      ppuVar11 = (undefined2 **)FPaths::CreateTempFilename(local_2df0,puVar15,local_2518,L".txt");
      puVar15 = puVar18;
      if (&local_2eb8 != ppuVar11) {
        puVar15 = *ppuVar11;
        *ppuVar11 = (undefined2 *)0x0;
        local_2eb0 = *(int *)(ppuVar11 + 1);
        ppuVar11[1] = (undefined2 *)0x0;
        local_2eb8 = puVar15;
      }
      if (local_2df0[0] != 0) {
        FMemory::Free();
      }
      if (local_2de0[0] != 0) {
        FMemory::Free();
      }
      plVar12 = (longlong *)FUN_1415c3d50();
      puVar14 = &DAT_143f3eda8;
      if (local_2eb0 != 0) {
        puVar14 = puVar15;
      }
      plVar12 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12,puVar14,4);
      if (plVar12 != (longlong *)0x0) {
        pwVar13 = (wchar_t *)FWindowsPlatformProcess::ComputerName();
        wcsncpy(local_2048,pwVar13,0xff);
        local_1e4a = 0;
        pwVar13 = (wchar_t *)FWindowsPlatformProcess::UserName(1);
        wcsncpy(local_1e48,pwVar13,0xff);
        local_1c4a = 0;
        puVar10 = (undefined8 *)FApp::GetBranchName(local_2dd0);
        if (*(int *)(puVar10 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar10;
        }
        FString::PrintfImpl(&local_2e40,L"%s %s",puVar15,&DAT_146299580);
        pwVar13 = L"";
        if (local_2e38 != 0) {
          pwVar13 = local_2e40;
        }
        wcsncpy(local_1c48,pwVar13,0xff);
        local_1a4a = 0;
        if (local_2e40 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (local_2dd0[0] != 0) {
          FMemory::Free();
        }
        wcsncpy(local_1a48,L"PC 64-bit",0xff);
        local_184a = 0;
        lVar17 = FInternationalization::Get();
        plVar4 = *(longlong **)(lVar17 + 0x60);
        uVar9 = *(undefined8 *)(lVar17 + 0x58);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        puVar10 = (undefined8 *)FCulture::GetName(uVar9);
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)*puVar10;
        }
        wcsncpy(local_1848,pwVar13,0xff);
        local_164a = 0;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar17 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar20 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        uVar9 = FDateTime::Now(local_2e00);
        puVar10 = (undefined8 *)FDateTime::ToString(uVar9,local_2dc0);
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)*puVar10;
        }
        wcsncpy(local_1648,pwVar13,0xff);
        local_144a = 0;
        if (local_2dc0[0] != 0) {
          FMemory::Free();
        }
        uVar9 = FEngineVersion::Current();
        puVar10 = (undefined8 *)FEngineVersion::ToString(uVar9,local_2db0,4);
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)*puVar10;
        }
        wcsncpy(local_1448,pwVar13,0xff);
        local_124a = 0;
        if (local_2db0[0] != 0) {
          FMemory::Free();
        }
        local_2ed0 = 0;
        uVar9 = FCommandLine::Get();
        cVar6 = FParse::Value(uVar9,L"-gABC=",&local_2ed0);
        if (cVar6 == '\x01') {
          local_2e90 = (wchar_t *)0x0;
          local_2e88 = 0;
          FString::AppendInt(&local_2e90,local_2ed0);
          pwVar13 = L"";
          if ((int)local_2e88 != 0) {
            pwVar13 = local_2e90;
          }
          wcsncpy(local_2448,pwVar13,0xff);
          pwVar13 = local_2e90;
        }
        else {
          uVar9 = FEngineVersion::Current();
          uVar7 = FEngineVersionBase::GetChangelist(uVar9);
          local_2e80 = (wchar_t *)0x0;
          local_2e78 = 0;
          FString::AppendInt(&local_2e80,uVar7);
          pwVar13 = L"";
          if ((int)local_2e78 != 0) {
            pwVar13 = local_2e80;
          }
          wcsncpy(local_2448,pwVar13,0xff);
          pwVar13 = local_2e80;
        }
        local_224a = 0;
        if (pwVar13 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        pwVar13 = (wchar_t *)FCommandLine::Get();
        wcsncpy(local_1038,pwVar13,0x7ff);
        local_3a = 0;
        pwVar13 = (wchar_t *)FUN_1416ac480();
        wcsncpy(local_1248,pwVar13,0x103);
        local_1042 = 0;
        pwVar13 = L"Commandlet";
        local_2ef8[0] = 0;
        if (DAT_1468b616c == '\0') {
          pwVar13 = L"Game";
        }
        wcsncpy(local_2248,pwVar13,0xff);
        lVar17 = -1;
        local_204a = 0;
        do {
          lVar17 = lVar17 + 1;
        } while (local_2ecc[lVar17] != 0);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ecc,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_2048[lVar17] != L'\0');
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2048,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_1e48[lVar17] != L'\0');
        (**(code **)(*plVar12 + 0x50))(plVar12,local_1e48,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_1c48[lVar17] != L'\0');
        (**(code **)(*plVar12 + 0x50))(plVar12,local_1c48,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_1a48[lVar17] != L'\0');
        (**(code **)(*plVar12 + 0x50))(plVar12,local_1a48,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_1848[lVar17] != L'\0');
        (**(code **)(*plVar12 + 0x50))(plVar12,local_1848,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_1648[lVar17] != L'\0');
        (**(code **)(*plVar12 + 0x50))(plVar12,local_1648,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_1448[lVar17] != L'\0');
        (**(code **)(*plVar12 + 0x50))(plVar12,local_1448,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_2448[lVar17] != L'\0');
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2448,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_1038[lVar17] != L'\0');
        (**(code **)(*plVar12 + 0x50))(plVar12,local_1038,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_1248[lVar17] != L'\0');
        (**(code **)(*plVar12 + 0x50))(plVar12,local_1248,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (param_1[lVar17] != 0);
        (**(code **)(*plVar12 + 0x50))(plVar12,param_1,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_2248[lVar17] != L'\0');
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2248,(longlong)(int)lVar17 * 2);
        (**(code **)(*plVar12 + 0x50))(plVar12,local_2ef8,2);
        (**(code **)(*plVar12 + 0xe8))(plVar12);
        if (DAT_1468c2178 == '\0') {
          local_24b8 = 0x2e002f002e002e;
          uStack_24b0 = 0x2e002e002f002e;
          local_24a8 = 0x67006e0045002f;
          uStack_24a0 = 0x2f0065006e0069;
          local_2498 = 0x61006e00690042;
          uStack_2490 = 0x73006500690072;
          local_2488 = 0x74006f0044002f;
          uStack_2480 = 0x2f00540045004e;
          local_2478 = 0x750041;
          uStack_2474 = 0x6f0074;
          uStack_2470 = 0x650052;
          uStack_246c = 0x6f0070;
          local_2468 = 0x72006500740072;
          uStack_2460 = 0x6500780065002e;
          local_2458 = 0;
          local_2e70 = (undefined2 *)0x0;
          local_2e68 = 0;
          if (DAT_146299580 != 0) {
            builtin_wcsncpy(local_24e8,L"UnrealAutoReportIniDump",0x18);
            puVar10 = (undefined8 *)FPaths::ProjectLogDir(local_2d90);
            if (*(int *)(puVar10 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar10;
            }
            ppuVar11 = (undefined2 **)
                       FPaths::CreateTempFilename(local_2da0,puVar15,local_24e8,L".txt");
            if (&local_2e70 != ppuVar11) {
              puVar18 = *ppuVar11;
              *ppuVar11 = (undefined2 *)0x0;
              iVar21 = *(int *)(ppuVar11 + 1);
              ppuVar11[1] = (undefined2 *)0x0;
              local_2e70 = puVar18;
              local_2e68 = iVar21;
            }
            if (local_2da0[0] != 0) {
              FMemory::Free();
            }
            if (local_2d90[0] != 0) {
              FMemory::Free();
            }
            puVar15 = &DAT_143f3eda8;
            if (iVar21 != 0) {
              puVar15 = puVar18;
            }
            FOutputDeviceFile::FOutputDeviceFile(local_2d58,puVar15,0,0);
            FConfigCacheIni::Dump(DAT_1468b6148,local_2d58,0);
            FUN_14166ef10(local_2d58);
            FOutputDeviceFile::TearDown(local_2d58);
            FOutputDeviceFile::~FOutputDeviceFile(local_2d58);
          }
          puVar10 = (undefined8 *)FPaths::ProjectLogDir(local_2d80);
          local_2ee0 = (undefined2 *)*puVar10;
          iVar21 = *(int *)(puVar10 + 1);
          *puVar10 = 0;
          local_2ed8 = *(int *)(puVar10 + 1);
          local_2ed4 = *(int *)((longlong)puVar10 + 0xc);
          puVar10[1] = 0;
          iVar20 = local_2ed8;
          if (local_2ed4 < (int)((0xf - (uint)(iVar21 != 0)) + local_2ed8)) {
            local_2ec0 = local_2ee0;
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2ee0);
            iVar20 = local_2ed8;
          }
          local_2ed8 = (0xf - (uint)(iVar20 != 0)) + iVar20;
          local_2ec0 = local_2ee0;
          if (local_2ed4 < local_2ed8) {
            local_2ec8 = local_2ed8;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2ee0,iVar20);
            local_2ec0 = local_2ee0;
          }
          puVar15 = local_2ec0;
          builtin_wcsncpy(local_2ec0 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)),
                          L"CrashVideo.avi",0xf);
          local_2ee0 = local_2ec0;
          local_2ec8 = local_2ed8;
          if (local_2d80[0] != 0) {
            FMemory::Free();
          }
          plVar12 = (longlong *)FUN_1415c3d50();
          puVar14 = &DAT_143f3eda8;
          if (local_2e68 != 0) {
            puVar14 = puVar18;
          }
          (**(code **)(*plVar12 + 0xe0))(plVar12,&local_2e50,puVar14);
          FGenericPlatformOutputDevices::GetAbsoluteLogFilename(&local_2e60);
          plVar12 = (longlong *)FUN_1415c3d50();
          puVar18 = &DAT_143f3eda8;
          if (local_2e58 != 0) {
            puVar18 = local_2e60;
          }
          (**(code **)(*plVar12 + 0xe0))(plVar12,&local_2e10,puVar18);
          plVar12 = (longlong *)FUN_1415c3d50();
          puVar18 = &DAT_143f3eda8;
          if (local_2eb0 != 0) {
            puVar18 = local_2eb8;
          }
          (**(code **)(*plVar12 + 0xe0))(plVar12,&local_2e20,puVar18);
          plVar12 = (longlong *)FUN_1415c3d50();
          puVar18 = &DAT_143f3eda8;
          if (local_2ec8 != 0) {
            puVar18 = puVar15;
          }
          (**(code **)(*plVar12 + 0xe0))(plVar12,&local_2e30,puVar18);
          local_2f20 = &DAT_143f3eda8;
          if (local_2e28 != 0) {
            local_2f20 = local_2e30;
          }
          puVar18 = &DAT_143f3eda8;
          if (local_2e48 != 0) {
            puVar18 = local_2e50;
          }
          puVar15 = &DAT_143f3eda8;
          if (local_2e08 != 0) {
            puVar15 = local_2e10;
          }
          puVar14 = &DAT_143f3eda8;
          if (local_2e18 != 0) {
            puVar14 = local_2e20;
          }
          DVar8 = GetCurrentProcessId();
          local_2f28 = &DAT_1468b2810;
          local_2f38 = puVar15;
          local_2f30 = puVar18;
          FString::PrintfImpl(&local_2ef0,L"%d \"%s\" \"%s\" \"%s\" \"%s\" \"%s\"",DVar8,puVar14);
          iVar21 = local_2ee8;
          if (local_2ea8 == 1) {
            lVar17 = (longlong)local_2ee8;
            local_2ee8 = (0xd - (uint)(local_2ee8 != 0)) + local_2ee8;
            if (local_2ee4 < local_2ee8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2ef0,iVar21);
            }
            lVar17 = lVar17 - (ulonglong)(iVar21 != 0);
            puVar3 = (undefined4 *)(local_2ef0 + lVar17);
            *puVar3 = 0x2d0020;
            puVar3[1] = 0x6e0075;
            puVar3[2] = 0x740061;
            puVar3[3] = 0x650074;
            *(undefined8 *)(local_2ef0 + lVar17 + 8) = 0x6400650064006e;
            local_2ef0[lVar17 + 0xc] = 0;
          }
          else if (local_2ea8 == 2) {
            lVar17 = (longlong)local_2ee8;
            local_2ee8 = (10 - (uint)(local_2ee8 != 0)) + local_2ee8;
            if (local_2ee4 < local_2ee8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2ef0,iVar21);
            }
            builtin_wcsncpy(local_2ef0 + (lVar17 - (ulonglong)(iVar21 != 0)),L" -balloon",10);
          }
          local_2f08 = 0;
          puVar18 = &DAT_143f3eda8;
          if (local_2ee8 != 0) {
            puVar18 = local_2ef0;
          }
          local_2f10 = 0;
          local_2f18 = 0;
          local_2f20 = (undefined2 *)((ulonglong)local_2f20 & 0xffffffff00000000);
          local_2f28 = (undefined2 *)0x0;
          local_2f30 = (undefined2 *)((ulonglong)local_2f30 & 0xffffffffffffff00);
          local_2f38 = (undefined2 *)((ulonglong)local_2f38 & 0xffffffffffffff00);
          plVar12 = (longlong *)FUN_1416ad4c0(local_2df8,&local_24b8,puVar18,1);
          puVar18 = local_2ec0;
          if (*plVar12 == 0) {
            FUN_1415a6020(DAT_1468b6160);
            local_2ea0 = 0;
            local_2e98 = 0;
            if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
              lVar17 = -1;
              do {
                lVar17 = lVar17 + 1;
              } while (param_1[lVar17] != 0);
              uVar16 = (int)lVar17 + 1;
              local_2e98 = (ulonglong)uVar16;
              if (0 < (int)uVar16) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2ea0,0);
              }
              FGenericPlatformString::Memcpy(local_2ea0,param_1,(longlong)(int)uVar16 * 2);
            }
            uVar9 = FText::FromString(local_2d70,&local_2ea0);
            FUN_1416786b0(0,uVar9,0);
            puVar18 = local_2ec0;
            if (local_2d68 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_2d68 + 1;
              lVar17 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              puVar18 = local_2ee0;
              if ((int)lVar17 == 1) {
                (**(code **)*local_2d68)(local_2d68);
                LOCK();
                piVar2 = (int *)((longlong)local_2d68 + 0xc);
                iVar21 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                puVar18 = local_2ee0;
                if (iVar21 == 1) {
                  (**(code **)(*local_2d68 + 8))(local_2d68,1);
                  puVar18 = local_2ee0;
                }
              }
            }
            if (local_2ea0 != 0) {
              FMemory::Free();
            }
          }
          if (local_2ef0 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_2e30 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_2e20 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_2e10 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_2e60 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_2e50 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (puVar18 != (undefined2 *)0x0) {
            FMemory::Free(puVar18);
          }
          if (local_2e70 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        HardKillIfAutomatedTesting();
      }
      if (local_2eb8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      HardKillIfAutomatedTesting();
    }
  }
  return;
}



// FUNCTION 1416ab6f0 ToString body=157 status=ok
// SIG undefined ToString(void)

undefined8 * FName::ToString(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1[1] == 0) {
    lVar2 = GetNames();
    uVar3 = *param_1 >> 0x1f & 0x3fff;
    uVar1 = *param_1 + uVar3;
    lVar2 = *(longlong *)
             (*(longlong *)(lVar2 + (longlong)((int)uVar1 >> 0xe) * 8) +
             (longlong)(int)((uVar1 & 0x3fff) - uVar3) * 8);
    if (lVar2 != 0) {
      FNameEntry::GetPlainNameString(lVar2,param_2);
      return param_2;
    }
  }
  local_18 = 0;
  local_10 = 0;
  ToString(param_1,&local_18);
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = (undefined4)local_10;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_10._4_4_;
  return param_2;
}



// FUNCTION 1416ab790 ToString body=428 status=ok
// SIG undefined ToString(void)

void FName::ToString(int *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  
  lVar6 = GetNames();
  uVar10 = *param_1 >> 0x1f & 0x3fff;
  uVar4 = *param_1 + uVar10;
  pbVar2 = *(byte **)(*(longlong *)(lVar6 + (longlong)((int)uVar4 >> 0xe) * 8) +
                     (longlong)(int)((uVar4 & 0x3fff) - uVar10) * 8);
  if (pbVar2 == (byte *)0x0) {
    if ((wchar_t *)*param_2 != L"*INVALID*") {
      iVar11 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,10);
        iVar11 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar11 + 10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"*INVALID*",10);
    }
  }
  else if (param_1[1] == 0) {
    uVar7 = 0xffffffffffffffff;
    uVar8 = uVar7;
    if ((*pbVar2 & 1) == 0) {
      do {
        uVar7 = uVar8 + 1;
        lVar6 = uVar8 + 0x11;
        uVar8 = uVar7;
      } while (pbVar2[lVar6] != 0);
    }
    else {
      do {
        uVar7 = uVar7 + 1;
      } while (*(short *)(pbVar2 + uVar7 * 2 + 0x10) != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,uVar7 & 0xffffffff);
    }
    FNameEntry::AppendNameToString(pbVar2,param_2);
  }
  else {
    lVar9 = -1;
    lVar6 = lVar9;
    if ((*pbVar2 & 1) == 0) {
      do {
        lVar9 = lVar6 + 1;
        lVar3 = lVar6 + 0x11;
        lVar6 = lVar9;
      } while (pbVar2[lVar3] != 0);
    }
    else {
      do {
        lVar9 = lVar9 + 1;
      } while (*(short *)(pbVar2 + lVar9 * 2 + 0x10) != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != (int)lVar9 + 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
    }
    FNameEntry::AppendNameToString(pbVar2,param_2);
    iVar11 = (int)param_2[1];
    iVar5 = (2 - (uint)(iVar11 != 0)) + iVar11;
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
    }
    puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
    *puVar1 = 0x5f;
    puVar1[1] = 0;
    FString::AppendInt(param_2,param_1[1] + -1);
  }
  return;
}



// FUNCTION 1416ab950 FUN_1416ab950 body=52 status=ok
// SIG undefined FUN_1416ab950(void)

void FUN_1416ab950(longlong param_1,undefined4 param_2)

{
  if (0.0 < *(double *)(param_1 + 0x78)) {
    FUN_1415bb440(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1416ab990 FUN_1416ab990 body=134 status=ok
// SIG undefined FUN_1416ab990(void)

undefined8 FUN_1416ab990(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 1;
  case 1:
  case 3:
  case 6:
    return 2;
  case 2:
    return 0xffffffff;
  case 4:
    return 0xfffffffe;
  case 5:
    break;
  default:
    LowLevelFatalErrorHandler
              ("Unknown",0x12,L"Unknown Priority passed to TranslateThreadPriority()");
    FDebug::AssertFailed
              (&DAT_144cd581f,"Unknown",0x12,L"Unknown Priority passed to TranslateThreadPriority()"
              );
  }
  return 0;
}



// FUNCTION 1416aba40 VerifyWindowsVersion body=122 status=ok
// SIG undefined VerifyWindowsVersion(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FWindowsPlatformMisc::VerifyWindowsVersion(DWORD param_1,DWORD param_2)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined4 extraout_var;
  undefined1 auStack_158 [32];
  _OSVERSIONINFOEXW local_138;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_138.dwOSVersionInfoSize = 0x11c;
  local_138.dwMajorVersion = param_1;
  local_138.dwMinorVersion = param_2;
  uVar2 = VerSetConditionMask(0,2,3);
  dwlConditionMask = VerSetConditionMask(uVar2,1,3);
  BVar1 = VerifyVersionInfoW(&local_138,3,dwlConditionMask);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
}



// FUNCTION 1416abac0 VerifyWindowsVersion body=144 status=ok
// SIG undefined VerifyWindowsVersion(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FWindowsPlatformMisc::VerifyWindowsVersion(DWORD param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined4 extraout_var;
  undefined1 auStack_158 [32];
  _OSVERSIONINFOEXW local_138;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_138.dwOSVersionInfoSize = 0x11c;
  local_138.dwMajorVersion = param_1;
  local_138.dwMinorVersion = param_2;
  local_138.dwBuildNumber = param_3;
  uVar2 = VerSetConditionMask(0,2,3);
  uVar2 = VerSetConditionMask(uVar2,1,3);
  dwlConditionMask = VerSetConditionMask(uVar2,4,3);
  BVar1 = VerifyVersionInfoW(&local_138,7,dwlConditionMask);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
}



// FUNCTION 1416abb50 WaitCompletionImpl body=132 status=ok
// SIG undefined WaitCompletionImpl(void)

void FWindowsReadRequest::WaitCompletionImpl(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    if (0.0 < param_2) {
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))
                          (*(longlong **)(lVar1 + 0x18),(int)(longlong)(param_2 * 1000.0) + 1,0);
        if (cVar3 == '\0') {
          return;
        }
        *(undefined8 *)(lVar1 + 0x20) = 0;
      }
    }
    else {
      FAsyncTask<FWindowsReadRequestWorker>::EnsureCompletion(lVar1,1);
    }
    plVar2 = *(longlong **)(param_1 + 0x78);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,1);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1416abbe0 FUN_1416abbe0 body=199 status=ok
// SIG undefined FUN_1416abbe0(void)

undefined8 FUN_1416abbe0(longlong param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  DWORD local_res8 [2];
  
  if ((*(char *)(param_1 + 0x70) == '\0') && (*(char *)(param_1 + 0x71) != '\0')) {
    local_res8[0] = 0;
    BVar1 = GetOverlappedResult(*(HANDLE *)(param_1 + 8),(LPOVERLAPPED)(param_1 + 0x50),local_res8,1
                               );
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x26) {
        FUN_1416ab950(param_1,local_res8[0]);
        *(undefined1 *)(param_1 + 0x70) = 1;
        return 1;
      }
      return 0;
    }
    uVar3 = (ulonglong)local_res8[0];
    if (0.0 < *(double *)(param_1 + 0x78)) {
      FUN_1415bb440(*(undefined8 *)(param_1 + 8),uVar3,*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + uVar3;
    uVar3 = *(ulonglong *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x71) = 0;
    *(int *)(param_1 + 0x60) = (int)uVar3;
    *(int *)(param_1 + 100) = (int)(uVar3 >> 0x20);
    if (*(ulonglong *)(param_1 + 0x10) <= uVar3) {
      *(undefined1 *)(param_1 + 0x70) = 1;
    }
  }
  return 1;
}



// FUNCTION 1416abcb0 PumpMessages body=93 status=ok
// SIG undefined PumpMessages(void)

void FWindowsApplication::PumpMessages(void)

{
  int iVar1;
  tagMSG local_38;
  
  iVar1 = PeekMessageW(&local_38,(HWND)0x0,0,0,1);
  while (iVar1 != 0) {
    TranslateMessage(&local_38);
    DispatchMessageW(&local_38);
    iVar1 = PeekMessageW(&local_38,(HWND)0x0,0,0,1);
  }
  return;
}



// FUNCTION 1416abd10 FUN_1416abd10 body=170 status=ok
// SIG undefined FUN_1416abd10(void)

undefined8 FUN_1416abd10(longlong param_1,LPCVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD local_res8 [2];
  LARGE_INTEGER local_res20;
  
  local_res8[0] = 0;
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 8),param_2,param_3,local_res8,
                    (LPOVERLAPPED)(param_1 + 0x10));
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      local_res8[0] = 0;
      BVar1 = GetOverlappedResult(*(HANDLE *)(param_1 + 8),(LPOVERLAPPED)(param_1 + 0x10),local_res8
                                  ,1);
      if (BVar1 != 0) goto LAB_1416abd7f;
    }
    return 0;
  }
LAB_1416abd7f:
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (ulonglong)local_res8[0];
  *(int *)(param_1 + 0x20) = (int)*(undefined8 *)(param_1 + 0x30);
  *(int *)(param_1 + 0x24) = (int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  GetFileSizeEx(*(HANDLE *)(param_1 + 8),&local_res20);
  *(LARGE_INTEGER *)(param_1 + 0x38) = local_res20;
  return 1;
}



// FUNCTION 1416abdc0 Write body=47 status=ok
// SIG undefined Write(void)

void FNameEntry::Write(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_818 [2064];
  
  FUN_14169a9b0(local_818,param_1);
  FUN_14169b740(param_2,local_818);
  return;
}



// FUNCTION 1416abdf0 WriteMinidump body=304 status=ok
// SIG undefined WriteMinidump(void)

undefined8
`anonymous_namespace'::WriteMinidump
          (longlong param_1,LPCWSTR param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  undefined1 *hObject;
  undefined8 uVar5;
  HANDLE pvVar6;
  undefined4 extraout_var;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_28;
  int local_24;
  undefined2 *local_20;
  DWORD local_18;
  undefined8 local_14;
  undefined4 local_c;
  
  hObject = CreateFileW(param_2,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hObject == &DAT_ffffffffffffffff) {
    uVar5 = 0xffffffffffffff00;
  }
  else {
    local_18 = GetCurrentThreadId();
    local_24 = *(int *)(param_1 + 0x1c) * 2;
    local_c = 0;
    local_28 = 0x10000;
    if (*(int *)(param_1 + 0x18) == 0) {
      local_20 = &DAT_143f3eda8;
    }
    else {
      local_20 = *(undefined2 **)(param_1 + 0x10);
    }
    local_34 = &local_28;
    local_38 = 1;
    local_14 = param_3;
    if (param_4 == '\0') {
      cVar1 = FGenericCrashContext::IsFullCrashDump(param_1);
    }
    else {
      cVar1 = FGenericCrashContext::IsFullCrashDumpOnEnsure();
    }
    DVar2 = GetCurrentProcessId();
    pvVar6 = GetCurrentProcess();
    iVar3 = ::_guard_xfg_dispatch_icall_nop
                      (pvVar6,DVar2,hObject,-(uint)(cVar1 != '\0') & 0x1826,&local_18,&local_38,0);
    BVar4 = CloseHandle(hObject);
    uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,BVar4) >> 8),iVar3 == 1);
  }
  return uVar5;
}



// FUNCTION 1416abf20 FWindowsThreadContextWrapper body=41 status=ok
// SIG undefined FWindowsThreadContextWrapper(void)

undefined4 * FWindowsThreadContextWrapper::FWindowsThreadContextWrapper(undefined4 *param_1)

{
  *param_1 = 0x5397fe56;
  ::_guard_xfg_dispatch_icall_nop(param_1 + 4,0,0x4d0);
  return param_1;
}



// FUNCTION 1416abf50 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FEventWin::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Create_144cde0d8;
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
  }
  *param_1 = &PTR__purecall_144ca0288;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1416abfb0 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FRunnableThreadWin::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  HANDLE hHandle;
  
  *param_1 = &PTR_SetThreadPriority_144cde108;
  hHandle = (HANDLE)param_1[9];
  if (hHandle != (HANDLE)0x0) {
    if ((longlong *)param_1[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[3] + 0x10))();
      hHandle = (HANDLE)param_1[9];
    }
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((HANDLE)param_1[9]);
    param_1[9] = 0;
  }
  FUN_1415ceb40(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1416ac030 FUN_1416ac030 body=43 status=ok
// SIG undefined FUN_1416ac030(void)

undefined8 * FUN_1416ac030(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144ca0288;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1416ac060 AddDllDirectory body=398 status=ok
// SIG undefined AddDllDirectory(void)

void FWindowsPlatformProcess::AddDllDirectory(short *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong local_28;
  ulonglong local_20;
  undefined2 *local_18;
  int local_10;
  
  local_20 = 0;
  local_28 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_1[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_20 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,param_1,(longlong)(int)uVar5 * 2);
  }
  FPaths::ConvertRelativePathToFull(&local_18,&local_28);
  if (local_28 != 0) {
    FMemory::Free();
  }
  FPaths::NormalizeDirectoryName(&local_18);
  FPaths::MakePlatformFilename(&local_18);
  puVar1 = DAT_1469e46b8;
  puVar8 = DAT_1469e46b8 + (longlong)DAT_1469e46c0 * 2;
  puVar7 = DAT_1469e46b8;
  do {
    if (puVar7 == puVar8) {
LAB_1416ac162:
      iVar2 = DAT_1469e46c0;
      lVar6 = (longlong)DAT_1469e46c0;
      DAT_1469e46c0 = DAT_1469e46c0 + 1;
      if (DAT_1469e46c4 < DAT_1469e46c0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1469e46b8,iVar2);
      }
      puVar4 = local_18;
      puVar7 = DAT_1469e46b8 + lVar6 * 2;
      *puVar7 = 0;
      *(int *)(puVar7 + 1) = local_10;
      if (local_10 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,local_10,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar7,puVar4,(longlong)local_10 * 2);
      }
LAB_1416ac1ca:
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return;
    }
    puVar4 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar4 = local_18;
    }
    if (*(int *)(puVar7 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar7;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if (iVar2 == 0) {
      if ((int)((longlong)puVar7 - (longlong)puVar1 >> 4) != -1) goto LAB_1416ac1ca;
      goto LAB_1416ac162;
    }
    puVar7 = puVar7 + 2;
  } while( true );
}



// FUNCTION 1416ac1f0 FUN_1416ac1f0 body=654 status=ok
// SIG undefined FUN_1416ac1f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1416ac1f0(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_298 [32];
  short *local_278;
  undefined2 *local_268;
  int local_260;
  int local_25c;
  longlong local_258;
  ulonglong local_250;
  longlong local_248 [2];
  short local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e4b48) {
    _Init_thread_header(&DAT_1469e4b48);
    if (DAT_1469e4b48 == -1) {
      atexit((_func_5014 *)&LAB_143e7b4b0);
      _Init_thread_footer(&DAT_1469e4b48);
    }
  }
  if ((DAT_1469e4b40 == 0) || (DAT_1469e4b40 == 1)) {
    local_278 = local_238;
    SHGetFolderPathW(0,0x23,0);
    local_250 = 0;
    local_258 = 0;
    if (local_238[0] != 0) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (local_238[lVar6] != 0);
      uVar5 = (int)lVar6 + 1;
      local_250 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
      }
      FGenericPlatformString::Memcpy(local_258,local_238,(longlong)(int)uVar5 * 2);
    }
    local_278 = (short *)CONCAT44(local_278._4_4_,1);
    puVar3 = (undefined8 *)FString::Replace(&local_258,local_248,&DAT_144cdcee4,&DAT_144cdce9c);
    iVar1 = *(int *)(puVar3 + 1);
    local_268 = (undefined2 *)*puVar3;
    *puVar3 = 0;
    local_260 = *(int *)(puVar3 + 1);
    local_25c = *(int *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    iVar7 = local_260;
    if (local_25c < (int)((0x12 - (uint)(iVar1 != 0)) + local_260)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_268);
      iVar7 = local_260;
    }
    local_260 = (0x12 - (uint)(iVar7 != 0)) + iVar7;
    if (local_25c < local_260) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,iVar7);
    }
    iVar2 = local_25c;
    iVar1 = local_260;
    puVar4 = local_268;
    builtin_wcsncpy(local_268 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),L"/GearboxSoftware/",
                    0x12);
    if (DAT_1469e4b38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    DAT_1469e4b38 = puVar4;
    DAT_1469e4b40 = iVar1;
    _DAT_1469e4b44 = iVar2;
    if (local_248[0] != 0) {
      FMemory::Free();
    }
    if (local_258 != 0) {
      FMemory::Free();
    }
  }
  puVar4 = &DAT_143f3eda8;
  if (DAT_1469e4b40 != 0) {
    puVar4 = DAT_1469e4b38;
  }
  return puVar4;
}



// FUNCTION 1416ac480 FUN_1416ac480 body=1338 status=ok
// SIG undefined FUN_1416ac480(void)

undefined2 * FUN_1416ac480(void)

{
  short sVar1;
  wint_t wVar2;
  WCHAR _C;
  wint_t wVar3;
  int iVar4;
  BOOL BVar5;
  LPWSTR pWVar6;
  short **ppsVar7;
  ulonglong uVar8;
  longlong lVar9;
  short *psVar10;
  uint uVar11;
  wchar_t *_Str1;
  int iVar12;
  longlong lVar13;
  HMODULE local_res8;
  short *local_68;
  undefined8 local_60;
  short *local_58;
  undefined8 local_50;
  short *local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  if (DAT_1469e46f0 == 0) {
    iVar12 = 0;
    local_58 = (short *)0x0;
    local_50 = (short *)0x0;
    pWVar6 = GetCommandLineW();
    FParse::Value(pWVar6,L"-basedir=",&local_58,1);
    if (((int)local_50 == 0) || ((int)local_50 == 1)) {
      pWVar6 = GetCommandLineW();
      lVar9 = -1;
      if (pWVar6 != (LPWSTR)0x0) {
        wVar2 = towupper(0x2d);
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (L"-BaseFromWorkingDir"[lVar13] != L'\0');
        _C = *pWVar6;
        if (_C != L'\0') {
LAB_1416ac610:
          _Str1 = pWVar6 + 1;
          wVar3 = towupper(_C);
          if ((wVar3 != wVar2) ||
             (iVar4 = _wcsnicmp(_Str1,L"BaseFromWorkingDir",(longlong)((int)lVar13 + -1)),
             iVar4 != 0)) goto LAB_1416ac63a;
          if (pWVar6 != (LPWSTR)0x0) {
            GetCurrentDirectoryW(0x200,&DAT_1469e46f0);
            local_68 = (short *)0x0;
            local_60 = (short *)0x0;
            if (DAT_1469e46f0 != 0) {
              do {
                lVar9 = lVar9 + 1;
              } while ((&DAT_1469e46f0)[lVar9] != 0);
              uVar11 = (int)lVar9 + 1;
              local_60 = (short *)(ulonglong)uVar11;
              if (0 < (int)uVar11) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
              }
              FGenericPlatformString::Memcpy(local_68,&DAT_1469e46f0,(longlong)(int)uVar11 * 2);
            }
            ppsVar7 = (short **)
                      FString::Replace(&local_68,&local_48,&DAT_144cdc96c,&DAT_144cdc92c,1);
            if (&local_68 != ppsVar7) {
              if (local_68 != (short *)0x0) {
                FMemory::Free();
              }
              local_68 = *ppsVar7;
              *ppsVar7 = (short *)0x0;
              local_60 = ppsVar7[1];
              ppsVar7[1] = (short *)0x0;
            }
            if (local_48 != (short *)0x0) {
              FMemory::Free();
            }
            iVar12 = (int)local_60 + -1;
            if ((int)local_60 < 1) {
              iVar12 = 0;
            }
            iVar4 = ((int)local_60 < 1) + 1 + (int)local_60;
            local_60 = (short *)CONCAT44(local_60._4_4_,iVar4);
            if (local_60._4_4_ < iVar4) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
            }
            local_68[iVar12] = 0x2f;
            local_68[(longlong)iVar12 + 1] = 0;
            psVar10 = &DAT_143f3eda8;
            if ((int)local_60 != 0) {
              psVar10 = local_68;
            }
            lVar9 = (longlong)&DAT_1469e46f0 - (longlong)psVar10;
            do {
              sVar1 = *psVar10;
              *(short *)((longlong)psVar10 + lVar9) = sVar1;
              psVar10 = psVar10 + 1;
            } while (sVar1 != 0);
            goto LAB_1416ac84e;
          }
        }
      }
LAB_1416ac646:
      BVar5 = GetModuleHandleExW(6,(LPCWSTR)FUN_1416ac480,&local_res8);
      if (BVar5 == 0) {
        local_res8 = DAT_1469e4218;
      }
      GetModuleFileNameW(local_res8,&DAT_1469e46f0,0x200);
      local_68 = (short *)0x0;
      local_60 = (short *)0x0;
      if (DAT_1469e46f0 != 0) {
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while ((&DAT_1469e46f0)[lVar13] != 0);
        uVar11 = (int)lVar13 + 1;
        local_60 = (short *)(ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        }
        FGenericPlatformString::Memcpy(local_68,&DAT_1469e46f0,(longlong)(int)uVar11 * 2);
      }
      ppsVar7 = (short **)FString::Replace(&local_68,local_38,&DAT_144cdca94,&DAT_144cdca44,1);
      if (&local_68 != ppsVar7) {
        if (local_68 != (short *)0x0) {
          FMemory::Free();
        }
        local_68 = *ppsVar7;
        *ppsVar7 = (short *)0x0;
        local_60 = ppsVar7[1];
        ppsVar7[1] = (short *)0x0;
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      psVar10 = &DAT_143f3eda8;
      if ((int)local_60 != 0) {
        psVar10 = local_68;
      }
      lVar13 = (longlong)&DAT_1469e46f0 - (longlong)psVar10;
      do {
        sVar1 = *psVar10;
        *(short *)((longlong)psVar10 + lVar13) = sVar1;
        psVar10 = psVar10 + 1;
      } while (sVar1 != 0);
      uVar8 = 0xffffffffffffffff;
      do {
        uVar8 = uVar8 + 1;
      } while ((&DAT_1469e46f0)[uVar8] != 0);
      if (0 < (int)uVar8) {
        uVar11 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar11;
        lVar13 = (longlong)(int)uVar11;
        if (0 < (int)uVar11) {
          psVar10 = (short *)((longlong)&DAT_1469e46e8 + lVar13 * 2 + 6);
          do {
            if (((*psVar10 == 0x2f) || (*psVar10 == 0x5c)) && (iVar12 = iVar12 + -1, iVar12 < 0))
            break;
            uVar8 = (ulonglong)((int)uVar8 - 1);
            lVar13 = lVar13 + -1;
            psVar10 = psVar10 + -1;
          } while (0 < lVar13);
        }
      }
      if (0x3ff < (ulonglong)((longlong)(int)uVar8 * 2)) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      (&DAT_1469e46f0)[(int)uVar8] = 0;
      local_48 = (short *)0x0;
      local_40 = 0;
      if (DAT_1469e46f0 != 0) {
        do {
          lVar9 = lVar9 + 1;
        } while ((&DAT_1469e46f0)[lVar9] != 0);
        uVar11 = (int)lVar9 + 1;
        local_40 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        }
        FGenericPlatformString::Memcpy(local_48,&DAT_1469e46f0,(longlong)(int)uVar11 * 2);
      }
      FPaths::CollapseRelativeDirectories(&local_48);
      psVar10 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        psVar10 = local_48;
      }
      lVar9 = (longlong)&DAT_1469e46f0 - (longlong)psVar10;
      do {
        sVar1 = *psVar10;
        *(short *)((longlong)psVar10 + lVar9) = sVar1;
        psVar10 = psVar10 + 1;
      } while (sVar1 != 0);
      if (local_48 != (short *)0x0) {
        FMemory::Free();
      }
LAB_1416ac84e:
      if (local_68 != (short *)0x0) {
        FMemory::Free();
      }
    }
    else {
      ppsVar7 = (short **)FString::Replace(&local_58,&local_48,&DAT_144cdc874,&DAT_144cdc83c,1);
      if (&local_58 != ppsVar7) {
        if (local_58 != (short *)0x0) {
          FMemory::Free();
        }
        local_58 = *ppsVar7;
        *ppsVar7 = (short *)0x0;
        local_50 = ppsVar7[1];
        ppsVar7[1] = (short *)0x0;
      }
      if (local_48 != (short *)0x0) {
        FMemory::Free();
      }
      iVar12 = (int)local_50 + -1;
      if ((int)local_50 < 1) {
        iVar12 = 0;
      }
      iVar4 = ((int)local_50 < 1) + 1 + (int)local_50;
      local_50 = (short *)CONCAT44(local_50._4_4_,iVar4);
      if (local_50._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
      }
      local_58[iVar12] = 0x2f;
      local_58[(longlong)iVar12 + 1] = 0;
      psVar10 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        psVar10 = local_58;
      }
      lVar9 = (longlong)&DAT_1469e46f0 - (longlong)psVar10;
      do {
        sVar1 = *psVar10;
        *(short *)(lVar9 + (longlong)psVar10) = sVar1;
        psVar10 = psVar10 + 1;
      } while (sVar1 != 0);
    }
    if (local_58 != (short *)0x0) {
      FMemory::Free();
    }
  }
  return &DAT_1469e46f0;
LAB_1416ac63a:
  _C = *_Str1;
  pWVar6 = _Str1;
  if (_C == L'\0') goto LAB_1416ac646;
  goto LAB_1416ac610;
}



// FUNCTION 1416ac9c0 CanLaunchURL body=7 status=ok
// SIG undefined CanLaunchURL(void)

bool FWindowsPlatformProcess::CanLaunchURL(longlong param_1)

{
  return param_1 != 0;
}



// FUNCTION 1416ac9d0 CaptureStackBackTrace body=355 status=ok
// SIG undefined CaptureStackBackTrace(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FWindowsPlatformStackWalk::CaptureStackBackTrace
               (longlong param_1,uint param_2,longlong param_3)

{
  undefined1 auStack_448 [32];
  ushort local_428;
  ushort local_424;
  uint local_420;
  uint local_41c;
  undefined8 local_418 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  if ((param_1 == 0) || (param_2 == 0)) {
    local_420 = 0;
  }
  else {
    local_420 = 0;
    if (param_3 == 0) {
      if (DAT_1469e46a6 == '\0') {
        DetermineMaxCallstackDepth();
      }
      local_41c = param_2;
      if (DAT_1464b0210 <= param_2) {
        local_41c = DAT_1464b0210;
      }
      local_428 = RtlCaptureStackBackTrace(0,local_41c,local_418,0);
      local_420 = (uint)local_428;
      for (local_424 = 0; local_424 < local_428; local_424 = local_424 + 1) {
        *(undefined8 *)(param_1 + (ulonglong)local_424 * 8) = local_418[local_424];
      }
      for (; local_428 < param_2; local_428 = local_428 + 1) {
        *(undefined8 *)(param_1 + (ulonglong)local_428 * 8) = 0;
      }
    }
    else {
      CaptureStackTraceHelper(param_1,param_2,param_3,&local_420);
    }
  }
  return local_420;
}



// FUNCTION 1416acb40 CaptureStackTraceHelper body=510 status=ok
// SIG undefined CaptureStackTraceHelper(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CaptureStackTraceHelper(longlong param_1,uint param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  HANDLE pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_688 [32];
  undefined8 *local_668;
  undefined8 local_660;
  code *local_658;
  code *local_650;
  undefined8 local_648;
  uint local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined4 local_61c;
  longlong local_608;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined4 local_5ec;
  undefined8 local_518 [154];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  bVar15 = true;
  uVar12 = 0;
  local_630 = *(undefined8 *)(param_3 + 0x4e0);
  lVar10 = 9;
  puVar13 = (undefined8 *)(param_3 + 0x10);
  puVar5 = local_518;
  do {
    puVar14 = puVar5;
    puVar7 = puVar13;
    uVar4 = puVar7[1];
    *puVar14 = *puVar7;
    puVar14[1] = uVar4;
    uVar4 = puVar7[3];
    puVar14[2] = puVar7[2];
    puVar14[3] = uVar4;
    uVar4 = puVar7[5];
    puVar14[4] = puVar7[4];
    puVar14[5] = uVar4;
    uVar4 = puVar7[7];
    puVar14[6] = puVar7[6];
    puVar14[7] = uVar4;
    uVar4 = puVar7[9];
    puVar14[8] = puVar7[8];
    puVar14[9] = uVar4;
    uVar4 = puVar7[0xb];
    puVar14[10] = puVar7[10];
    puVar14[0xb] = uVar4;
    uVar4 = puVar7[0xd];
    puVar14[0xc] = puVar7[0xc];
    puVar14[0xd] = uVar4;
    uVar4 = puVar7[0xf];
    puVar14[0xe] = puVar7[0xe];
    puVar14[0xf] = uVar4;
    lVar10 = lVar10 + -1;
    puVar13 = puVar7 + 0x10;
    puVar5 = puVar14 + 0x10;
  } while (lVar10 != 0);
  uVar4 = puVar7[0x11];
  puVar14[0x10] = puVar7[0x10];
  puVar14[0x11] = uVar4;
  uVar4 = puVar7[0x13];
  puVar14[0x12] = puVar7[0x12];
  puVar14[0x13] = uVar4;
  uVar4 = puVar7[0x15];
  puVar14[0x14] = puVar7[0x14];
  puVar14[0x15] = uVar4;
  uVar1 = *(undefined4 *)((longlong)puVar7 + 0xb4);
  uVar2 = *(undefined4 *)(puVar7 + 0x17);
  uVar3 = *(undefined4 *)((longlong)puVar7 + 0xbc);
  *(undefined4 *)(puVar14 + 0x16) = *(undefined4 *)(puVar7 + 0x16);
  *(undefined4 *)((longlong)puVar14 + 0xb4) = uVar1;
  *(undefined4 *)(puVar14 + 0x17) = uVar2;
  *(undefined4 *)((longlong)puVar14 + 0xbc) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar7 + 0xc4);
  uVar2 = *(undefined4 *)(puVar7 + 0x19);
  uVar3 = *(undefined4 *)((longlong)puVar7 + 0xcc);
  *(undefined4 *)(puVar14 + 0x18) = *(undefined4 *)(puVar7 + 0x18);
  *(undefined4 *)((longlong)puVar14 + 0xc4) = uVar1;
  *(undefined4 *)(puVar14 + 0x19) = uVar2;
  *(undefined4 *)((longlong)puVar14 + 0xcc) = uVar3;
  *param_4 = 0;
  pvVar8 = GetCurrentProcess();
  _guard_xfg_dispatch_icall_nop(&local_628,0,0x108);
  uVar4 = local_630;
  local_61c = 3;
  local_5ec = 3;
  local_5fc = 3;
  local_628 = *(undefined8 *)(param_3 + 0x108);
  local_5f8 = *(undefined8 *)(param_3 + 0xa8);
  local_608 = *(longlong *)(param_3 + 0xb0);
  while( true ) {
    uVar11 = (uint)uVar12;
    if ((!bVar15) || (param_2 <= uVar11)) goto LAB_1416acce1;
    local_648 = 0;
    local_650 = SymGetModuleBase64_exref;
    local_658 = SymFunctionTableAccess64_exref;
    local_660 = 0;
    local_668 = local_518;
    iVar6 = StackWalk64(0x8664,pvVar8,uVar4,&local_628);
    bVar15 = iVar6 != 0;
    if (iVar6 == 0) break;
    if (local_608 == 0) goto LAB_1416acce1;
    *(undefined8 *)(param_1 + uVar12 * 8) = local_628;
    local_638 = uVar11 + 1;
    uVar12 = (ulonglong)local_638;
    *param_4 = local_638;
  }
  GetLastError();
LAB_1416acce1:
  if (uVar11 < param_2) {
    puVar13 = (undefined8 *)(param_1 + uVar12 * 8);
    for (uVar9 = (ulonglong)(param_2 - uVar11); uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
  }
  return 1;
}



// FUNCTION 1416acd50 FUN_1416acd50 body=999 status=ok
// SIG undefined FUN_1416acd50(void)

void FUN_1416acd50(void)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  short *psVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  undefined2 *local_b8;
  int local_b0;
  int local_ac;
  undefined2 *local_a8;
  undefined8 local_a0;
  int local_98;
  uint uStack_94;
  uint *puStack_90;
  undefined4 local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_44;
  uint *local_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  
  if (DAT_1464aaa4b != '\0') {
    uVar6 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar6,L"Multiprocess");
    if (cVar4 == '\0') {
      plVar7 = (longlong *)FUN_1415a30d0();
      uVar1 = *(uint *)(plVar7 + 5);
      local_98 = 0;
      uStack_94 = 1;
      puStack_90 = (uint *)(plVar7 + 2);
      uStack_84 = 0;
      iStack_80 = 0;
      if (uVar1 != 0) {
        puVar18 = (uint *)plVar7[4];
        if ((uint *)plVar7[4] == (uint *)0x0) {
          puVar18 = puStack_90;
        }
        uVar17 = *puVar18;
        iStack_80 = 0;
        local_98 = 0;
        while (uVar17 == 0) {
          lVar15 = (longlong)local_98;
          iStack_80 = iStack_80 + 0x20;
          iVar11 = local_98 + 1;
          bVar2 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
          local_98 = iVar11;
          if (bVar2) goto LAB_1416ace6c;
          uVar17 = puVar18[lVar15 + 1];
        }
        uStack_94 = -uVar17 & uVar17;
        iVar11 = 0x1f;
        if (uStack_94 != 0) {
          for (; uStack_94 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uStack_94 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_84 = (iStack_80 - iVar11) + 0x1f;
        if ((int)uVar1 < (int)uStack_84) {
LAB_1416ace6c:
          uStack_84 = uVar1;
        }
      }
      local_88 = 0xffffffff;
      uStack_64 = *(uint *)(plVar7 + 5);
      uStack_70 = CONCAT44(uStack_94,local_98);
      uStack_38 = 0xffffffff;
      uStack_34 = uStack_84;
      uStack_58 = CONCAT44(uStack_7c,iStack_80);
      uStack_68 = -1 << ((byte)uStack_64 & 0x1f);
      local_78._0_4_ = SUB84(plVar7,0);
      local_78._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
      uVar17 = uStack_64 & 0xffffffe0;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      iStack_48 = local_98;
      uStack_44 = uStack_94;
      local_78 = plVar7;
      local_40 = puStack_90;
      local_30 = uStack_58;
      uStack_60 = uStack_38;
      uStack_5c = uStack_34;
      uVar14 = uStack_64;
      if (uStack_64 != uVar1) {
        puVar18 = (uint *)plVar7[4];
        if ((uint *)plVar7[4] == (uint *)0x0) {
          puVar18 = puStack_90;
        }
        uVar14 = puVar18[(int)uStack_64 >> 5] & uStack_68;
        iVar11 = (int)uStack_64 >> 5;
        while (uVar14 == 0) {
          uVar17 = uVar17 + 0x20;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_1416acf32;
          uVar14 = puVar18[(longlong)iVar11 + 1];
          uStack_68 = 0xffffffff;
          iVar11 = iVar11 + 1;
        }
        uVar14 = -uVar14 & uVar14;
        iVar11 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uVar14 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_64 = (uVar17 - iVar11) + 0x1f;
        uVar14 = uStack_64;
        if ((int)uVar1 < (int)uStack_64) {
LAB_1416acf32:
          uStack_64 = uVar1;
          uVar14 = uVar1;
        }
      }
      while( true ) {
        if (((uStack_34 == uVar14) && (local_40 == puStack_90)) &&
           ((longlong *)CONCAT44(uStack_4c,local_50) == plVar7)) break;
        lVar15 = *(longlong *)CONCAT44(uStack_4c,local_50) + (longlong)(int)uStack_34 * 0x28;
        psVar8 = (short *)FUN_1416ac480();
        local_a8 = (undefined2 *)0x0;
        iVar11 = 0;
        puVar13 = (undefined2 *)0x0;
        iVar19 = iVar11;
        if ((psVar8 != (short *)0x0) && (puVar13 = (undefined2 *)0x0, iVar19 = 0, *psVar8 != 0)) {
          lVar12 = -1;
          do {
            lVar3 = lVar12 + 1;
            lVar12 = lVar12 + 1;
          } while (psVar8[lVar3] != 0);
          local_a0._0_4_ = (int)lVar12 + 1;
          lVar12 = (longlong)(int)local_a0;
          local_a0._4_4_ = 0;
          if (0 < (int)local_a0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
          }
          iVar19 = local_a0._4_4_;
          iVar11 = (int)local_a0;
          puVar13 = local_a8;
          FGenericPlatformString::Memcpy(local_a8,psVar8,lVar12 * 2);
        }
        iVar5 = *(int *)(lVar15 + 0x18);
        iVar16 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar16 = 0;
        }
        if ((iVar11 != 0) || (iVar5 = 2, iVar16 == -1)) {
          iVar5 = 1;
        }
        local_a8 = (undefined2 *)0x0;
        local_a0 = 0;
        local_b8 = puVar13;
        local_b0 = iVar11;
        local_ac = iVar19;
        if (iVar19 < iVar11 + iVar16 + iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
        }
        FString::PathAppend(&local_b8,*(undefined8 *)(lVar15 + 0x10),iVar16);
        plVar9 = (longlong *)FUN_1415c3d50();
        puVar13 = &DAT_143f3eda8;
        if (local_b0 != 0) {
          puVar13 = local_b8;
        }
        (**(code **)(*plVar9 + 0xe0))(plVar9,&local_78,puVar13);
        FPaths::CollapseRelativeDirectories(&local_b8);
        plVar9 = (longlong *)&DAT_143f3eda8;
        if ((int)uStack_70 != 0) {
          plVar9 = local_78;
        }
        puVar13 = &DAT_143f3eda8;
        if (local_b0 != 0) {
          puVar13 = local_b8;
        }
        iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,plVar9);
        if (iVar11 != 0) {
          plVar10 = (longlong *)FUN_1415c3d50();
          plVar9 = (longlong *)&DAT_143f3eda8;
          if ((int)uStack_70 != 0) {
            plVar9 = local_78;
          }
          (**(code **)(*plVar10 + 0x60))(plVar10,plVar9,0,1);
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        uStack_38 = uStack_38 & ~uStack_44;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
      }
      FGenericPlatformProcess::CleanShaderWorkingDir();
    }
  }
  return;
}



// FUNCTION 1416ad140 ComputerName body=67 status=ok
// SIG undefined ComputerName(void)

undefined2 * FWindowsPlatformProcess::ComputerName(void)

{
  DWORD local_res8 [8];
  
  if (DAT_1469e4b50 == 0) {
    local_res8[0] = 0x100;
    GetComputerNameW(&DAT_1469e4b50,local_res8);
    return &DAT_1469e4b50;
  }
  return &DAT_1469e4b50;
}



// FUNCTION 1416ad190 Create body=57 status=ok
// SIG undefined Create(void)

bool FEventWin::Create(longlong param_1,byte param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,(uint)param_2,0,(LPCWSTR)0x0);
  *(HANDLE *)(param_1 + 0x10) = pvVar1;
  *(byte *)(param_1 + 0x18) = param_2;
  return pvVar1 != (HANDLE)0x0;
}



// FUNCTION 1416ad1d0 FUN_1416ad1d0 body=6 status=ok
// SIG undefined FUN_1416ad1d0(void)

undefined1 FUN_1416ad1d0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x11) = param_2;
  return 1;
}



// FUNCTION 1416ad1e0 FUN_1416ad1e0 body=725 status=ok
// SIG undefined FUN_1416ad1e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1416ad1e0(undefined8 *param_1,undefined8 param_2,wchar_t *param_3,ulonglong param_4,
                  undefined4 param_5,undefined8 param_6)

{
  LPDWORD lpThreadId;
  int iVar1;
  HANDLE pvVar2;
  undefined8 uVar3;
  HMODULE hModule;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  wchar_t *_Src;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStackY_108;
  if (DAT_1469e5964 == '\0') {
    DAT_1469e5964 = '\x01';
    iVar1 = FUN_1416ab990(0);
    pvVar2 = GetCurrentThread();
    SetThreadPriority(pvVar2,iVar1);
  }
  param_1[5] = param_6;
  param_1[3] = param_2;
  uVar3 = FUN_1415ab270();
  param_1[4] = uVar3;
  _Src = L"Unnamed UE4";
  if (param_3 != (wchar_t *)0x0) {
    _Src = param_3;
  }
  if ((wchar_t *)param_1[1] != _Src) {
    if ((_Src == (wchar_t *)0x0) || (*_Src == L'\0')) {
      iVar1 = 0;
    }
    else {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (_Src[lVar6] != L'\0');
      iVar1 = (int)lVar6 + 1;
    }
    iVar4 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    if (*(int *)((longlong)param_1 + 0x14) != iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 1,iVar1);
      iVar4 = *(int *)(param_1 + 2);
    }
    *(int *)(param_1 + 2) = iVar4 + iVar1;
    if (*(int *)((longlong)param_1 + 0x14) < iVar4 + iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
    }
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 * 2);
    }
  }
  lpThreadId = (LPDWORD)((longlong)param_1 + 0x44);
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_4 & 0xffffffff,
                        (LPTHREAD_START_ROUTINE)&LAB_1416b26c0,param_1,0x10004,lpThreadId);
  param_1[9] = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    param_1[3] = 0;
  }
  else {
    uVar3 = FUN_1415d8270();
    FUN_1415d1320(uVar3,*lpThreadId,param_1);
    ResumeThread((HANDLE)param_1[9]);
    (**(code **)(*(longlong *)param_1[4] + 0x20))((longlong *)param_1[4],0xffffffff,0);
    puVar7 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 2) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)param_1[1];
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar5);
    FRunnableThreadWin::SetThreadName(*lpThreadId,local_50);
    if (local_58 != 0) {
      FMemory::Free();
    }
    (**(code **)*param_1)(param_1,param_5);
    uVar3 = param_1[9];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469e59ac) &&
       (_Init_thread_header(&DAT_1469e59ac), DAT_1469e59ac == -1)) {
      DAT_1469e59a8 = FWindowsPlatformMisc::VerifyWindowsVersion(10);
      _Init_thread_footer(&DAT_1469e59ac);
    }
    if (DAT_1469e59a8 != '\0') {
      if (DAT_1469e59b8 == '\0') {
        DAT_1469e59b8 = '\x01';
        hModule = GetModuleHandleW(L"kernel32");
        if (hModule != (HMODULE)0x0) {
          DAT_1469e59b0 = GetProcAddress(hModule,"SetThreadDescription");
          DAT_1469e59b9 = DAT_1469e59b0 != (FARPROC)0x0;
        }
        if (DAT_1469e59b8 == '\0') goto LAB_1416ad444;
      }
      if (DAT_1469e59b9 != '\0') {
        if (*(int *)(param_1 + 2) != 0) {
          puVar7 = (undefined2 *)param_1[1];
        }
        (*DAT_1469e59b0)(uVar3,puVar7);
      }
    }
  }
LAB_1416ad444:
  FUN_1415b5910(param_1[4]);
  param_1[4] = 0;
  return param_1[9] != 0;
}



// FUNCTION 1416ad4c0 FUN_1416ad4c0 body=601 status=ok
// SIG undefined FUN_1416ad4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1416ad4c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5,
             char param_6,DWORD *param_7,int param_8,LPCWSTR param_9,HANDLE param_10,HANDLE param_11
             )

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStackY_5e8 [32];
  ULONG_PTR local_598;
  ULONG_PTR local_590;
  LPWSTR local_588 [2];
  _PROCESS_INFORMATION local_578;
  _SECURITY_ATTRIBUTES local_560;
  _STARTUPINFOW local_548;
  undefined1 local_4d8 [144];
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_5e8;
  local_548.dwFlags = 0;
  uVar1 = 0x20;
  local_560.nLength = 0x18;
  local_560.lpSecurityDescriptor = (LPVOID)0x0;
  local_560.bInheritHandle = 1;
  if (param_8 < 0) {
    uVar1 = 0x40;
    uVar4 = 0x4000;
    bVar5 = param_8 == -1;
  }
  else {
    if (param_8 < 1) goto LAB_1416ad555;
    uVar1 = 0x80;
    uVar4 = 0x8000;
    bVar5 = param_8 == 1;
  }
  if (bVar5) {
    uVar1 = uVar4;
  }
LAB_1416ad555:
  local_548.wShowWindow = 0;
  uVar4 = uVar1 | 8;
  if (param_4 == '\0') {
    uVar4 = uVar1;
  }
  if (param_6 == '\0') {
    if (param_5 != '\0') {
      local_548.dwFlags = 1;
      local_548.wShowWindow = 7;
    }
  }
  else {
    local_548.dwFlags = 1;
    if (param_4 != '\0') {
      uVar4 = uVar4 & 0xfffffff7 | 0x10;
    }
  }
  if ((param_10 != (HANDLE)0x0) || (param_11 != (HANDLE)0x0)) {
    local_548.dwFlags = local_548.dwFlags | 0x100;
  }
  local_548.hStdOutput = param_10;
  local_548.hStdError = param_10;
  local_548.lpDesktop = (LPWSTR)0x0;
  local_548.lpTitle = (LPWSTR)0x0;
  local_548.cb = 0x68;
  local_548.lpReserved = (LPWSTR)0x0;
  local_548.dwX = 0x80000000;
  local_548.dwY = 0x80000000;
  local_548.dwXSize = 0x80000000;
  local_548.dwYSize = 0x80000000;
  local_548.dwXCountChars = 0;
  local_548.dwYCountChars = 0;
  local_548.dwFillAttribute = 0;
  local_548.cbReserved2 = 0;
  local_548.lpReserved2 = (LPBYTE)0x0;
  local_548.hStdInput = param_11;
  FString::PrintfImpl(local_588,L"\"%s\" %s",param_2,param_3);
  BVar2 = CreateProcessW((LPCWSTR)0x0,local_588[0],&local_560,&local_560,1,uVar4,(LPVOID)0x0,param_9
                         ,&local_548,&local_578);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    FWindowsPlatformMisc::GetSystemErrorMessage(local_448,0x200,DVar3);
    if ((DVar3 == 8) || (DVar3 == 0xe)) {
      FUN_1416a13c0(local_4d8);
    }
    if (param_7 != (DWORD *)0x0) {
      *param_7 = 0;
    }
    *param_1 = 0;
  }
  else {
    local_590 = 0;
    local_598 = 0;
    BVar2 = GetProcessAffinityMask(local_578.hProcess,&local_590,&local_598);
    if (((BVar2 != 0) && (local_590 != local_598)) && (local_598 != 0)) {
      SetProcessAffinityMask(local_578.hProcess,local_598);
    }
    if (param_7 != (DWORD *)0x0) {
      *param_7 = local_578.dwProcessId;
    }
    CloseHandle(local_578.hThread);
    *param_1 = local_578.hProcess;
  }
  if (local_588[0] != (LPWSTR)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416ad720 CreateRunnableThread body=65 status=ok
// SIG undefined CreateRunnableThread(void)

undefined8 * FWindowsPlatformProcess::CreateRunnableThread(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    FRunnableThread::FRunnableThread(puVar1);
    puVar1[9] = 0;
    *puVar1 = &PTR_SetThreadPriority_144cde108;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1416ad770 CreateSynchEvent body=205 status=ok
// SIG undefined CreateSynchEvent(void)

longlong * FWindowsPlatformProcess::CreateSynchEvent(undefined1 param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_1415bac00();
  if (cVar1 == '\0') {
    plVar2 = (longlong *)operator_new(0x18);
    if (plVar2 != (longlong *)0x0) {
      *(undefined4 *)(plVar2 + 1) = 0;
      *plVar2 = (longlong)&PTR__purecall_144ca0288;
      *(undefined4 *)((longlong)plVar2 + 0xc) = 0;
      *(undefined2 *)(plVar2 + 2) = 0;
      *plVar2 = (longlong)&PTR_FUN_144cde0a8;
      goto LAB_1416ad802;
    }
  }
  else {
    plVar2 = (longlong *)operator_new(0x20);
    if (plVar2 != (longlong *)0x0) {
      *(undefined4 *)(plVar2 + 1) = 0;
      *plVar2 = (longlong)&PTR__purecall_144ca0288;
      *(undefined4 *)((longlong)plVar2 + 0xc) = 0;
      plVar2[2] = 0;
      *plVar2 = (longlong)&PTR_Create_144cde0d8;
      goto LAB_1416ad802;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_1416ad802:
  cVar1 = (**(code **)*plVar2)(plVar2,param_1);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
    return (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 1416ad840 DetermineMaxCallstackDepth body=85 status=ok
// SIG undefined DetermineMaxCallstackDepth(void)

/* WARNING: Removing unreachable block (ram,0x0001416ad877) */

void DetermineMaxCallstackDepth(void)

{
  char cVar1;
  
  cVar1 = FWindowsPlatformMisc::VerifyWindowsVersion(6,0);
  if (cVar1 == '\0') {
    DAT_1464b0210 = 0x3e;
  }
  else {
    DAT_1464b0210 = 0x80;
  }
  DAT_1469e46a6 = 1;
  return;
}



// FUNCTION 1416ad8a0 ExecutableName body=498 status=ok
// SIG undefined ExecutableName(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FWindowsPlatformProcess::ExecutableName(char param_1)

{
  DWORD DVar1;
  undefined8 *puVar2;
  wchar_t *_Source;
  longlong lVar3;
  wchar_t *_Source_00;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  puVar4 = (undefined2 *)&DAT_1469e5550;
  if (DAT_1469e5150 == 0) {
    DVar1 = GetModuleFileNameW(DAT_1469e4218,&DAT_1469e5150,0x200);
    if (DVar1 == 0) {
      ::_guard_xfg_dispatch_icall_nop(&DAT_1469e5150,0,0x400);
      ::_guard_xfg_dispatch_icall_nop(&DAT_1469e5550,0,0x400);
    }
    else {
      local_30 = 0;
      local_38 = 0;
      lVar3 = -1;
      lVar6 = lVar3;
      if (DAT_1469e5150 != 0) {
        do {
          lVar6 = lVar6 + 1;
        } while ((&DAT_1469e5150)[lVar6] != 0);
        uVar5 = (int)lVar6 + 1;
        local_30 = (ulonglong)uVar5;
        if (0 < (int)uVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        FGenericPlatformString::Memcpy(local_38,&DAT_1469e5150,(longlong)(int)uVar5 * 2);
      }
      local_40 = 0;
      local_48 = 0;
      if (DAT_1469e5150 != 0) {
        do {
          lVar3 = lVar3 + 1;
        } while ((&DAT_1469e5150)[lVar3] != 0);
        uVar5 = (int)lVar3 + 1;
        local_40 = (ulonglong)uVar5;
        if (0 < (int)uVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        }
        FGenericPlatformString::Memcpy(local_48,&DAT_1469e5150,(longlong)(int)uVar5 * 2);
      }
      puVar2 = (undefined8 *)FUN_141671940(local_28,&local_38,1);
      _Source_00 = L"";
      if (*(int *)(puVar2 + 1) == 0) {
        _Source = L"";
      }
      else {
        _Source = (wchar_t *)*puVar2;
      }
      wcsncpy(&DAT_1469e5150,_Source,0x1ff);
      _DAT_1469e554e = 0;
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      puVar2 = (undefined8 *)FUN_141671d50(local_28,&local_48);
      if (*(int *)(puVar2 + 1) != 0) {
        _Source_00 = (wchar_t *)*puVar2;
      }
      wcsncpy((wchar_t *)&DAT_1469e5550,_Source_00,0x1ff);
      _DAT_1469e594e = 0;
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
  }
  if (param_1 != '\0') {
    puVar4 = &DAT_1469e5150;
  }
  return puVar4;
}



// FUNCTION 1416adaa0 ExploreFolder body=337 status=ok
// SIG undefined ExploreFolder(void)

void FWindowsPlatformProcess::ExploreFolder(LPCWSTR param_1)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  LPCWSTR lpParameters;
  undefined2 *puVar5;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  longlong local_38;
  ulonglong local_30;
  LPCWSTR local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  plVar2 = (longlong *)FUN_1415c3d50();
  cVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,param_1);
  if (cVar1 != '\0') {
    ShellExecuteW((HWND)0x0,L"explore",param_1,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    return;
  }
  local_38 = 0;
  local_30 = 0;
  if ((param_1 != (LPCWSTR)0x0) && (*param_1 != L'\0')) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_1[lVar4] != L'\0');
    uVar3 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_1,(longlong)(int)uVar3 * 2);
  }
  FString::Replace(&local_38,&local_18,&DAT_144cdcfec,&DAT_144cdcfdc,CONCAT44(uVar6,1));
  if (local_38 != 0) {
    FMemory::Free();
  }
  puVar5 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar5 = local_18;
  }
  FString::PrintfImpl(&local_28,L"/select,%s",puVar5);
  lpParameters = L"";
  if (local_20 != 0) {
    lpParameters = local_28;
  }
  ShellExecuteW((HWND)0x0,L"open",L"explorer.exe",lpParameters,(LPCWSTR)0x0,1);
  if (local_28 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416adc00 FreeDllHandle body=7 status=ok
// SIG BOOL FreeDllHandle(HMODULE hLibModule)

BOOL __stdcall FWindowsPlatformProcess::FreeDllHandle(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416adc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}



// FUNCTION 1416adc10 FUN_1416adc10 body=416 status=ok
// SIG undefined FUN_1416adc10(void)

longlong * FUN_1416adc10(longlong *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *local_28;
  undefined8 local_20;
  
  local_20 = 6;
  local_28 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar1 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Win64",0xc);
  iVar6 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar3 = (int)local_20;
  puVar7 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar7 = puVar1;
  }
  FString::PrintfImpl(param_1,L"..\\..\\..\\Engine\\Binaries\\%s\\%s",puVar7,puVar8);
  if (1 < param_3 - 2U) {
    puVar8 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar8 = puVar1;
    }
    uVar4 = FUN_1415bb3d0(param_3);
    FString::PrintfImpl(&local_28,L"-%s-%s",puVar8,uVar4);
    puVar8 = local_28;
    if ((int)local_20 != 0) {
      iVar6 = (int)local_20 + -1;
    }
    if (iVar6 != 0) {
      iVar3 = (int)param_1[1];
      iVar2 = (uint)(iVar3 == 0) + iVar3 + iVar6;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
      }
      _Dst = (void *)(*param_1 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar8,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  iVar6 = (int)param_1[1];
  iVar3 = (5 - (uint)(iVar6 != 0)) + iVar6;
  *(int *)(param_1 + 1) = iVar3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
  }
  lVar5 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
  builtin_wcsncpy((wchar_t *)(*param_1 + lVar5 * 2),L".exe",4);
  *(undefined2 *)(*param_1 + 8 + lVar5 * 2) = 0;
  if (puVar1 != (undefined2 *)0x0) {
    FMemory::Free(puVar1);
  }
  return param_1;
}



// FUNCTION 1416addb0 GetUBTPlatform body=8 status=ok
// SIG undefined GetUBTPlatform(void)

wchar_t * FGenericPlatformMisc::GetUBTPlatform(void)

{
  return L"Win64";
}



// FUNCTION 1416addc0 GetCPUTime body=69 status=ok
// SIG undefined GetCPUTime(void)

float * FWindowsPlatformTime::GetCPUTime(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = DAT_1469e46a0;
  iVar3 = FUN_1416a5810();
  fVar2 = DAT_1469e46a0;
  param_1[1] = fVar1;
  *param_1 = fVar2 / (float)iVar3;
  return param_1;
}



// FUNCTION 1416ade10 GetCurrentProcessId body=7 status=ok
// SIG DWORD GetCurrentProcessId(void)

DWORD __stdcall FWindowsPlatformProcess::GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ade10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ::GetCurrentProcessId();
  return DVar1;
}



// FUNCTION 1416ade20 FUN_1416ade20 body=166 status=ok
// SIG undefined FUN_1416ade20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1416ade20(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_248 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  GetCurrentDirectoryW(0x104,local_228);
  *param_1 = 0;
  param_1[1] = 0;
  if (local_228[0] != L'\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (local_228[lVar2] != L'\0');
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,local_228,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1416aded0 GetDllExport body=106 status=ok
// SIG undefined GetDllExport(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FARPROC FWindowsPlatformProcess::GetDllExport(HMODULE param_1)

{
  FARPROC pFVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  LPCSTR local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_b8);
  pFVar1 = GetProcAddress(param_1,local_30);
  if (local_38 != 0) {
    FMemory::Free();
  }
  return pFVar1;
}



// FUNCTION 1416adf40 GetDllHandle body=539 status=ok
// SIG undefined GetDllHandle(void)

undefined8 FWindowsPlatformProcess::GetDllHandle(short *param_1)

{
  ulonglong uVar1;
  char cVar2;
  BOOL BVar3;
  undefined8 uVar4;
  LPWSTR pWVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  DWORD dwNewMode;
  int iVar10;
  longlong lVar11;
  DWORD local_res8 [2];
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  iVar10 = 0;
  dwNewMode = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar4 = FUN_1416ae2e0(&local_28);
  uVar1 = local_30;
  lVar8 = (longlong)(int)local_30;
  iVar6 = (int)local_30 + 1;
  local_30 = CONCAT44(local_30._4_4_,iVar6);
  if (local_30._4_4_ < iVar6) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_38,uVar1 & 0xffffffff);
  }
  FString::FString(local_38 + lVar8 * 2,uVar4);
  if (local_28 != 0) {
    FMemory::Free();
  }
  uVar1 = local_30;
  if (0 < DAT_1469e46b0) {
    lVar11 = (longlong)(int)local_30;
    lVar8 = (longlong)(DAT_1469e46b0 + -1) * 0x10 + DAT_1469e46a8;
    iVar6 = (int)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,iVar6);
    if (local_30._4_4_ < iVar6) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_38,uVar1 & 0xffffffff);
    }
    FString::FString(local_38 + lVar11 * 2,lVar8);
  }
  if (0 < DAT_1469e46c0) {
    do {
      uVar1 = local_30;
      lVar8 = DAT_1469e46b8;
      lVar11 = (longlong)(int)local_30;
      iVar6 = (int)local_30 + 1;
      local_30 = CONCAT44(local_30._4_4_,iVar6);
      if (local_30._4_4_ < iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_38,uVar1 & 0xffffffff);
      }
      FString::FString(local_38 + lVar11 * 2,(longlong)iVar10 * 0x10 + lVar8);
      iVar10 = iVar10 + 1;
    } while (iVar10 < DAT_1469e46c0);
  }
  pWVar5 = GetCommandLineW();
  cVar2 = FParse::Param(pWVar5,L"dllerrors");
  if (cVar2 == '\0') {
    pWVar5 = GetCommandLineW();
    cVar2 = FParse::Param(pWVar5,L"unattended");
    dwNewMode = 0x8000;
    if (cVar2 != '\0') {
      dwNewMode = 0x8003;
    }
  }
  local_res8[0] = 0;
  BVar3 = SetThreadErrorMode(dwNewMode,local_res8);
  local_28 = 0;
  local_20 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_1[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_20 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,param_1,(longlong)(int)uVar7 * 2);
  }
  uVar4 = LoadLibraryWithSearchPaths(&local_28,&local_38);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (BVar3 != 0) {
    SetThreadErrorMode(local_res8[0],(LPDWORD)0x0);
  }
  plVar9 = local_38;
  for (iVar6 = (int)local_30; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return uVar4;
}



// FUNCTION 1416ae160 GetDownstreamStorage body=370 status=ok
// SIG undefined GetDownstreamStorage(void)

longlong * FWindowsPlatformStackWalk::GetDownstreamStorage(longlong *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong local_38 [4];
  longlong local_18 [2];
  
  puVar1 = PTR_u__Script_UnrealEd_CrashReporterSe_1464b0208;
  *param_1 = 0;
  param_1[1] = 0;
  cVar2 = FConfigCacheIni::GetString
                    (DAT_1468b6148,puVar1,L"DownstreamStorage",param_1,&DAT_1468e23b0);
  if ((cVar2 == '\0') || ((int)param_1[1] < 2)) {
    local_38[0] = 0;
    local_38[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"Symbols",0x10);
    uVar3 = FPaths::EngineIntermediateDir(local_18);
    plVar4 = (longlong *)FPaths::ConvertRelativePathToFull(local_38 + 2,uVar3,local_38);
    if (param_1 != plVar4) {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = *plVar4;
      *plVar4 = 0;
      *(int *)(param_1 + 1) = (int)plVar4[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
    }
    if (local_38[2] != 0) {
      FMemory::Free();
    }
    local_38[2] = local_38[0];
    if (local_18[0] != 0) {
      FMemory::Free();
      local_38[2] = local_38[0];
    }
  }
  else {
    uVar3 = FPaths::RootDir(local_38 + 2);
    plVar4 = (longlong *)FPaths::ConvertRelativePathToFull(local_38,uVar3,param_1);
    if (param_1 != plVar4) {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = *plVar4;
      *plVar4 = 0;
      *(int *)(param_1 + 1) = (int)plVar4[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  FPaths::MakePlatformFilename(param_1);
  return param_1;
}



// FUNCTION 1416ae2e0 FUN_1416ae2e0 body=520 status=ok
// SIG undefined FUN_1416ae2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1416ae2e0(undefined8 *param_1)

{
  WCHAR *_Src;
  BOOL BVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  HMODULE hModule;
  longlong lVar5;
  undefined1 auStack_258 [32];
  HMODULE local_238 [2];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e5960) && (_Init_thread_header(&DAT_1469e5960), DAT_1469e5960 == -1))
  {
    atexit((_func_5014 *)&LAB_143e7b490);
    _Init_thread_footer(&DAT_1469e5960);
  }
  if ((DAT_1469e5958 == 0) || (DAT_1469e5958 == 1)) {
    BVar1 = GetModuleHandleExW(6,(LPCWSTR)FUN_1416ae2e0,local_238);
    hModule = local_238[0];
    if (BVar1 == 0) {
      hModule = DAT_1469e4218;
    }
    local_238[0] = hModule;
    _guard_xfg_dispatch_icall_nop(local_228,0,0x208);
    GetModuleFileNameW(hModule,local_228,0x104);
    pwVar2 = _guard_xfg_dispatch_icall_nop(local_228,L'\\');
    *pwVar2 = L'\0';
    if (DAT_1469e5950 != local_228) {
      iVar4 = 0;
      if (local_228[0] != L'\0') {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (local_228[lVar5] != L'\0');
        iVar4 = (int)lVar5 + 1;
      }
      DAT_1469e5958 = 0;
      iVar3 = 0;
      if (DAT_1469e595c != iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1469e5950,iVar4);
        iVar3 = DAT_1469e5958;
      }
      DAT_1469e5958 = iVar4 + iVar3;
      if (DAT_1469e595c < DAT_1469e5958) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469e5950);
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop(DAT_1469e5950,local_228,(longlong)iVar4 * 2);
      }
    }
    FUN_1416781b0(&DAT_1469e5950);
  }
  *param_1 = 0;
  iVar4 = DAT_1469e5958;
  _Src = DAT_1469e5950;
  lVar5 = (longlong)DAT_1469e5958;
  *(int *)(param_1 + 1) = DAT_1469e5958;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar4,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,lVar5 * 2);
  }
  return param_1;
}


