// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142db4a80 FUN_142db4a80 body=1711 status=ok
// SIG undefined FUN_142db4a80(void)

void FUN_142db4a80(longlong *param_1,longlong param_2,byte param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint local_res8 [2];
  longlong local_res10;
  byte local_res18 [8];
  undefined8 local_res20;
  int local_b8;
  uint uStack_b4;
  int iStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [8];
  byte *local_80;
  longlong local_78;
  byte *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar10 = *(longlong *)(param_2 + 0x20);
  plVar7 = (longlong *)(*param_1 + (ulonglong)param_3 * 0x18);
  local_res20 = *(undefined8 *)(lVar2 + 0xa8);
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_78 = lVar2;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar10 + 0x30,0);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar10 + 0x80,0);
  *(undefined1 *)(lVar10 + 0x29) = 1;
  local_88[0] = 0;
  plVar3 = *(longlong **)(param_2 + 8);
  puVar4 = *(undefined1 **)plVar3[1];
  local_90 = param_2;
  if ((undefined1 *)((undefined8 *)plVar3[1])[1] < puVar4 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,local_88,1);
  }
  else {
    local_88[0] = *puVar4;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
  }
  if (*plVar7 == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)plVar7[1];
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_90);
  if (-1 < *(char *)(lVar2 + 0x28)) {
    lVar2 = *(longlong *)(param_2 + 0x20);
    if ((*(int *)(lVar2 + 0x38) == *(int *)(lVar2 + 100)) &&
       (*(int *)(lVar2 + 0x88) == *(int *)(lVar2 + 0xb4))) {
      FUN_142db55e0(param_1 + 3,local_res18[0]);
    }
    else {
      if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
        plVar7 = (longlong *)param_1[0xb];
        if ((longlong *)param_1[0xb] == (longlong *)0x0) {
          plVar7 = param_1 + 10;
        }
        iVar8 = *(int *)((longlong)plVar7 +
                        ((longlong)(int)param_1[0xc] - 1U & (ulonglong)local_res18[0]) * 4);
        if (iVar8 != -1) {
          do {
            pbVar17 = (byte *)((longlong)iVar8 * 0xd0 + param_1[3]);
            if (*pbVar17 == local_res18[0]) {
              if ((iVar8 != -1) && (pbVar17 != (byte *)0x0)) goto LAB_142db4c25;
              break;
            }
            iVar8 = *(int *)(pbVar17 + 200);
          } while (iVar8 != -1);
        }
      }
      local_80 = local_res18;
      FUN_142d963f0(param_1 + 3,local_res8);
      pbVar17 = (byte *)((longlong)(int)local_res8[0] * 0xd0 + param_1[3]);
LAB_142db4c25:
      pbVar1 = pbVar17 + 0x10;
      if (*(int *)(pbVar17 + 0x18) - *(int *)(pbVar17 + 0x44) ==
          *(int *)(lVar2 + 0x38) - *(int *)(lVar2 + 100)) {
        uVar11 = *(uint *)(pbVar17 + 0x38);
        puStack_60 = (uint *)(pbVar17 + 0x20);
        uStack_b4 = 1;
        local_b8 = 0;
        local_a8._4_4_ = 0;
        uStack_a0 = 0;
        if (uVar11 != 0) {
          puVar14 = *(uint **)(pbVar17 + 0x30);
          if (*(uint **)(pbVar17 + 0x30) == (uint *)0x0) {
            puVar14 = puStack_60;
          }
          uVar12 = *puVar14;
          uStack_a0 = 0;
          local_b8 = 0;
          while (uVar12 == 0) {
            lVar10 = (longlong)local_b8;
            uStack_a0 = uStack_a0 + 0x20;
            iVar8 = local_b8 + 1;
            bVar5 = (int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
            local_b8 = iVar8;
            if (bVar5) goto LAB_142db4ceb;
            uVar12 = puVar14[lVar10 + 1];
          }
          uStack_b4 = -uVar12 & uVar12;
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
          local_a8._4_4_ = (uStack_a0 - iVar8) + 0x1f;
          if ((int)uVar11 < (int)local_a8._4_4_) {
LAB_142db4ceb:
            local_a8._4_4_ = uVar11;
          }
        }
        uVar11 = *(uint *)(pbVar17 + 0x38);
        uStack_68 = CONCAT44(uStack_b4,local_b8);
        uVar12 = *(uint *)(pbVar17 + 0x38);
        uStack_58 = CONCAT44(local_a8._4_4_,0xffffffff);
        local_98 = CONCAT44(uStack_9c,uStack_a0);
        uVar13 = uVar11 & 0xffffffe0;
        _iStack_b0 = CONCAT44(uStack_b4,local_b8);
        uStack_a0 = 0xffffffff;
        uStack_9c = local_a8._4_4_;
        local_70 = pbVar1;
        uStack_50 = local_98;
        local_a8 = puStack_60;
        if (uVar11 != uVar12) {
          pbVar16 = *(byte **)(pbVar17 + 0x30);
          if (*(byte **)(pbVar17 + 0x30) == (byte *)0x0) {
            pbVar16 = pbVar17 + 0x20;
          }
          uVar9 = *(uint *)(pbVar16 + (longlong)((int)uVar11 >> 5) * 4) &
                  -1 << ((byte)uVar11 & 0x1f);
          iVar8 = (int)uVar11 >> 5;
          while (uVar9 == 0) {
            uVar13 = uVar13 + 0x20;
            if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
            goto LAB_142db4dab;
            uVar9 = *(uint *)(pbVar16 + (longlong)iVar8 * 4 + 4);
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
          uVar11 = (uVar13 - iVar8) + 0x1f;
          if ((int)uVar12 < (int)uVar11) {
LAB_142db4dab:
            uVar11 = uVar12;
          }
        }
        while( true ) {
          if ((uStack_9c == uVar11) && (local_a8 == (uint *)(pbVar17 + 0x20))) goto LAB_142db4e3e;
          if (*(int *)(lVar2 + 0x38) == *(int *)(lVar2 + 100)) break;
          iVar8 = *(int *)(*(longlong *)pbVar1 + (longlong)(int)uStack_9c * 0xc);
          lVar10 = *(longlong *)(lVar2 + 0x70);
          if (*(longlong *)(lVar2 + 0x70) == 0) {
            lVar10 = lVar2 + 0x68;
          }
          iVar6 = *(int *)(lVar10 + ((longlong)*(int *)(lVar2 + 0x78) - 1U & (longlong)iVar8) * 4);
          if (iVar6 == -1) break;
          lVar10 = *(longlong *)(lVar2 + 0x30);
          while (*(int *)(lVar10 + (longlong)iVar6 * 0xc) != iVar8) {
            iVar6 = *(int *)(lVar10 + 4 + (longlong)iVar6 * 0xc);
            if (iVar6 == -1) goto LAB_142db4e2b;
          }
          if (iVar6 == -1) break;
          uStack_a0 = uStack_a0 & ~uStack_ac;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b0);
        }
      }
LAB_142db4e2b:
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                (pbVar1,(longlong *)(lVar2 + 0x30));
      *(undefined1 *)(local_res10 + 0x44) = 1;
LAB_142db4e3e:
      pbVar1 = pbVar17 + 0x60;
      if (*(int *)(pbVar17 + 0x68) - *(int *)(pbVar17 + 0x94) ==
          *(int *)(lVar2 + 0x88) - *(int *)(lVar2 + 0xb4)) {
        uVar11 = *(uint *)(pbVar17 + 0x88);
        puVar14 = (uint *)(pbVar17 + 0x70);
        uStack_b4 = 1;
        local_b8 = 0;
        local_a8._4_4_ = 0;
        uStack_a0 = 0;
        if (uVar11 != 0) {
          puVar15 = *(uint **)(pbVar17 + 0x80);
          if (*(uint **)(pbVar17 + 0x80) == (uint *)0x0) {
            puVar15 = puVar14;
          }
          uVar12 = *puVar15;
          uStack_a0 = 0;
          local_b8 = 0;
          while (uVar12 == 0) {
            lVar10 = (longlong)local_b8;
            uStack_a0 = uStack_a0 + 0x20;
            iVar8 = local_b8 + 1;
            bVar5 = (int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
            local_b8 = iVar8;
            if (bVar5) goto LAB_142db4f1a;
            uVar12 = puVar15[lVar10 + 1];
          }
          uStack_b4 = -uVar12 & uVar12;
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
          local_a8._4_4_ = (uStack_a0 - iVar8) + 0x1f;
          if ((int)uVar11 < (int)local_a8._4_4_) {
LAB_142db4f1a:
            local_a8._4_4_ = uVar11;
          }
        }
        uVar12 = *(uint *)(pbVar17 + 0x88);
        uStack_68 = CONCAT44(uStack_b4,local_b8);
        uStack_58 = CONCAT44(local_a8._4_4_,0xffffffff);
        local_98 = CONCAT44(uStack_9c,uStack_a0);
        local_res8[0] = -1 << ((byte)uVar12 & 0x1f);
        uVar13 = uVar12 & 0xffffffe0;
        _iStack_b0 = CONCAT44(uStack_b4,local_b8);
        uStack_a0 = 0xffffffff;
        uStack_9c = local_a8._4_4_;
        local_70 = pbVar1;
        puStack_60 = puVar14;
        uStack_50 = local_98;
        local_a8 = puVar14;
        if (uVar12 != uVar11) {
          puVar15 = *(uint **)(pbVar17 + 0x80);
          if (*(uint **)(pbVar17 + 0x80) == (uint *)0x0) {
            puVar15 = puVar14;
          }
          uVar9 = puVar15[(int)uVar12 >> 5] & local_res8[0];
          iVar8 = (int)uVar12 >> 5;
          while (uVar9 == 0) {
            uVar13 = uVar13 + 0x20;
            if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
            goto LAB_142db4fdb;
            uVar9 = puVar15[(longlong)iVar8 + 1];
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
          uVar12 = (uVar13 - iVar8) + 0x1f;
          if ((int)uVar11 < (int)uVar12) {
LAB_142db4fdb:
            uVar12 = uVar11;
          }
        }
        while( true ) {
          if ((uStack_9c == uVar12) && (local_a8 == puVar14)) goto LAB_142db508c;
          if (*(int *)(lVar2 + 0x88) == *(int *)(lVar2 + 0xb4)) break;
          iVar8 = *(int *)(*(longlong *)pbVar1 + (longlong)(int)uStack_9c * 0xc);
          lVar10 = *(longlong *)(lVar2 + 0xc0);
          if (*(longlong *)(lVar2 + 0xc0) == 0) {
            lVar10 = lVar2 + 0xb8;
          }
          iVar6 = *(int *)(lVar10 + ((longlong)*(int *)(lVar2 + 200) - 1U & (longlong)iVar8) * 4);
          if (iVar6 == -1) break;
          lVar10 = *(longlong *)(lVar2 + 0x80);
          while (*(int *)(lVar10 + (longlong)iVar6 * 0xc) != iVar8) {
            iVar6 = *(int *)(lVar10 + 4 + (longlong)iVar6 * 0xc);
            if (iVar6 == -1) goto LAB_142db5057;
          }
          if (iVar6 == -1) break;
          uStack_a0 = uStack_a0 & ~uStack_ac;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b0);
        }
      }
LAB_142db5057:
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                (pbVar1,(longlong *)(lVar2 + 0x80));
      *(undefined1 *)(local_res10 + 0x44) = 1;
LAB_142db508c:
      param_2 = local_res10;
      if (pbVar17[8] == 0) {
        pbVar17[0xc0] = 0;
        pbVar17[0xc1] = 0;
        pbVar17[0xc2] = 0;
        pbVar17[0xc3] = 0;
        if (*(int *)(pbVar17 + 0xc4) != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(pbVar17 + 0xb8,0);
        }
        *(int *)(pbVar17 + 0xb0) = *(int *)(local_78 + 0xa8) - (int)local_res20;
        FBitReaderMark::Copy(&local_res20,local_78,pbVar17 + 0xb8);
      }
      pbVar17[8] = 0;
      if (*(int *)(lVar2 + 0x38) != *(int *)(lVar2 + 100)) {
        *(undefined1 *)(param_2 + 0x43) = 1;
      }
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x20);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar2 + 0x30,0);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar2 + 0x80,0);
  *(undefined1 *)(lVar2 + 0x29) = 0;
  return;
}



// FUNCTION 142db5180 FUN_142db5180 body=529 status=ok
// SIG undefined FUN_142db5180(void)

void FUN_142db5180(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iStack_44;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar4 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar4 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar4) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar4;
      do {
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar8 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    iVar10 = 0;
    iStack_44 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      uVar4 = *puVar13;
      iVar5 = 0;
      while (uVar4 == 0) {
        iVar10 = iVar10 + 0x20;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142db52bf;
        uVar4 = puVar13[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_44 = (iVar10 - iVar5) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_142db52bf:
        iStack_44 = iVar3;
      }
    }
    while (iStack_44 < iVar3) {
      pbVar9 = (byte *)((longlong)iStack_44 * 0xd0 + *param_1);
      uVar4 = (int)*plVar2 - 1U & (uint)*pbVar9;
      *(uint *)(pbVar9 + 0xcc) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(pbVar9 + 200) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4) = iStack_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      iVar3 = (int)param_1[5];
    }
  }
  return;
}



// FUNCTION 142db53a0 FUN_142db53a0 body=566 status=ok
// SIG undefined FUN_142db53a0(void)

void FUN_142db53a0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if ((param_1[0x67] != 0) && (param_1[0x66] != 0)) {
    lVar6 = param_1[0x67];
    lVar2 = FUN_1423af5a0();
    if (lVar2 == lVar6) {
      lVar2 = param_1[0x66];
      iVar7 = *(int *)(lVar2 + 0xbf8);
      if ((((int)param_1[0x5e] == iVar7) && ((int)param_1[0x5c] == iVar7)) &&
         ((int)param_1[0x60] == iVar7)) {
        if (lVar6 != 0) {
          FUN_142dbe2d0(param_1);
          lVar2 = param_1[0x66];
        }
        if (lVar2 == 0) {
          return;
        }
        plVar3 = (longlong *)FUN_1426e2550((int)param_1[0x65]);
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*plVar3 + 0x358))
                  (plVar3,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Physics\\DynamicPhysicalAnimationComponent.cpp"
                   ,0x1c6);
        iVar7 = 0;
        if (0 < (int)param_1[0x5e]) {
          lVar6 = 0;
          do {
            lVar5 = param_1[0x5d] + lVar6;
            lVar8 = (longlong)iVar7 * 0x100;
            lVar2 = param_1[0x5b] + (longlong)iVar7 * 0x18;
            cVar1 = FUN_142dafb60(lVar2,param_1[0x5f] + lVar8,lVar5);
            if (cVar1 == '\0') {
              FUN_142da1dd0(lVar2,param_1[0x5f] + lVar8,lVar5,param_1[0x66],plVar3,
                            ~*(byte *)(lVar5 + 8) & 1);
              uVar4 = FUN_142dab3f0(param_1,lVar2);
              FUN_142db6f60(param_1,uVar4,lVar5,0);
            }
            iVar7 = iVar7 + 1;
            lVar6 = lVar6 + 0x28;
          } while (iVar7 < (int)param_1[0x5e]);
        }
        (**(code **)(*plVar3 + 0x360))(plVar3);
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (*(int *)((longlong)param_1 + 0x2f4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5d,0);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(int *)((longlong)param_1 + 0x2e4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5b,0);
  }
  iVar7 = (int)param_1[0x60];
  if (iVar7 != 0) {
    plVar3 = (longlong *)(param_1[0x5f] + 8);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x20;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)((longlong)param_1 + 0x304) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<256,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5f,0);
  }
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  (**(code **)(*param_1 + 0x330))(param_1);
  return;
}



// FUNCTION 142db55e0 FUN_142db55e0 body=263 status=ok
// SIG undefined FUN_142db55e0(void)

undefined8 FUN_142db55e0(longlong *param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar7 + (param_2 & uVar8) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0xd0;
      if (*(byte *)(lVar3 + lVar2) == param_2) {
        lVar6 = (longlong)iVar5 * 0xd0;
        lVar3 = lVar6 + lVar2;
        uVar8 = (longlong)*(int *)(lVar3 + 0xcc) & uVar8;
        piVar4 = (int *)((longlong)plVar7 + uVar8 * 4);
        iVar1 = *(int *)((longlong)plVar7 + uVar8 * 4);
        goto joined_r0x000142db567a;
      }
      iVar5 = *(int *)(lVar3 + 200 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x000142db567a:
  if (iVar1 == -1) {
LAB_142db56b0:
    FUN_142d98a00(*param_1 + 8 + lVar6);
    TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FComponentVelocityData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + 200);
    goto LAB_142db56b0;
  }
  piVar4 = (int *)((longlong)iVar1 * 0xd0 + 200 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x000142db567a;
}



// FUNCTION 142db56f0 FUN_142db56f0 body=173 status=ok
// SIG undefined FUN_142db56f0(void)

void FUN_142db56f0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar6 = (longlong)param_2 * 0xd0;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0xcc + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar6 + 200 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 200 + (longlong)iVar1 * 0xd0);
      iVar1 = *piVar5;
    }
  }
  FUN_142d98a00((longlong)param_2 * 0xd0 + 8 + *param_1);
  TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FComponentVelocityData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 142db57a0 RemoveAtImpl body=107 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<unsigned_char,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 + *param_1),
                 (void *)((longlong)(param_2 + param_3) + *param_1),(longlong)iVar2);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - param_3;
    if (param_4 != '\0') {
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142db5810 FUN_142db5810 body=487 status=ok
// SIG undefined FUN_142db5810(void)

void FUN_142db5810(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int local_res8;
  undefined4 uStackX_c;
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x28),&local_res8,param_2);
  plVar5 = (longlong *)0x0;
  if (local_res8 != -1) {
    plVar5 = (longlong *)((longlong)local_res8 * 0x20 + *(longlong *)(param_1 + 0x28));
  }
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    FWeakObjectPtr::operator=(&local_res8,param_3);
    TArray<TWeakObjectPtr<UAmbientAudioComponent,FWeakObjectPtr>,FDefaultAllocator>::Remove
              (plVar6,&local_res8);
    if (*(longlong *)(param_2 + 0x978) != 0) {
      if (*(longlong *)(param_3 + 0x490) == 0) {
        cVar2 = FUN_142dac3d0(plVar6);
        if (cVar2 == '\0') {
          lVar7 = *plVar6;
          lVar1 = lVar7 + (longlong)(int)plVar6[1] * 8;
          if (lVar7 != lVar1) {
            do {
              lVar4 = FWeakObjectPtr::Get(lVar7);
              if (*(longlong *)(lVar4 + 0x490) != 0) {
                local_res8 = 0x41800000;
                uStackX_c = 0x41100000;
                cVar2 = *(char *)(param_3 + 0x4a8);
                lVar4 = FWeakObjectPtr::Get(lVar7);
                bVar3 = 0x4e;
                if (cVar2 != '\0') {
                  bVar3 = 0xe;
                }
                if (*(char *)(param_3 + 0x4a8) != '\0') {
                  bVar3 = bVar3 | 0x80;
                }
                FUN_142e72620(*(undefined8 *)(param_2 + 0x978),*(undefined8 *)(lVar4 + 0x490),bVar3,
                              CONCAT44(uStackX_c,local_res8),*(undefined4 *)(param_3 + 0x498),4,
                              *(undefined8 *)(param_3 + 0x4a0));
              }
              lVar7 = lVar7 + 8;
            } while (lVar7 != lVar1);
            return;
          }
        }
      }
      else {
        lVar7 = *plVar6;
        lVar1 = lVar7 + (longlong)(int)plVar6[1] * 8;
        for (; lVar7 != lVar1; lVar7 = lVar7 + 8) {
          lVar4 = FWeakObjectPtr::Get(lVar7);
          if (*(longlong *)(lVar4 + 0x490) == *(longlong *)(param_3 + 0x490)) {
            if (lVar7 != 0) {
              return;
            }
            break;
          }
        }
        FUN_142e724b0(*(undefined8 *)(param_2 + 0x978),*(undefined8 *)(param_3 + 0x490),
                      *(undefined8 *)(param_3 + 0x4a0),1);
      }
    }
  }
  return;
}



// FUNCTION 142db5a00 FUN_142db5a00 body=410 status=ok
// SIG undefined FUN_142db5a00(void)

void FUN_142db5a00(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
                  longlong *param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  longlong *plStack_18;
  undefined1 local_10;
  undefined7 uStack_f;
  
  lVar4 = FUN_142c1f5b0();
  if (lVar4 != 0) {
    uStack_34 = *(undefined4 *)(param_2 + 1);
    local_40 = 0;
    local_30 = *param_3;
    uStack_28 = *(undefined4 *)(param_3 + 1);
    local_20 = param_6;
    uStack_3c = (undefined4)*param_2;
    uStack_38 = (undefined4)((ulonglong)*param_2 >> 0x20);
    uStack_24 = CONCAT31(uStack_24._1_3_,param_4);
    plStack_18 = param_5;
    puVar5 = (undefined1 *)FGenericTeamId::GetTeamIdentifier(local_58,param_5);
    local_10 = *puVar5;
    plVar6 = (longlong *)FUN_142df53d0();
    lVar7 = plVar6[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar7 = plVar6[0x1f];
    }
    if ((int)(uint)*(byte *)(lVar7 + 0x48) < *(int *)(lVar4 + 0xd8)) {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xd0) + (ulonglong)*(byte *)(lVar7 + 0x48) * 8);
      if (lVar4 != 0) {
        lVar7 = *(longlong *)(lVar4 + 0x38);
        if (param_5 == (longlong *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_5 + 0x678))(param_5);
        }
        if (lVar7 != 0) {
          local_50[0] = *(undefined1 *)(lVar4 + 0x48);
          local_48 = *(undefined8 *)(lVar4 + 0x50);
          cVar3 = FUN_142c21120(lVar7,uVar8,local_50);
          if (cVar3 != '\0') {
            iVar2 = *(int *)(lVar4 + 0xa0);
            *(int *)(lVar4 + 0xa0) = iVar2 + 1;
            if (*(int *)(lVar4 + 0xa4) < iVar2 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(lVar4 + 0x98,iVar2);
            }
            lVar7 = *(longlong *)(lVar4 + 0x98);
            lVar9 = (longlong)iVar2 * 0x38;
            *(undefined8 *)(lVar9 + lVar7) = CONCAT44(uStack_3c,local_40);
            ((undefined8 *)(lVar9 + lVar7))[1] = CONCAT44(uStack_34,uStack_38);
            puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar7);
            *puVar1 = local_30;
            puVar1[1] = CONCAT44(uStack_24,uStack_28);
            puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar7);
            *puVar1 = CONCAT44(uStack_1c,local_20);
            puVar1[1] = plStack_18;
            *(ulonglong *)(lVar9 + 0x30 + lVar7) = CONCAT71(uStack_f,local_10);
            *(undefined4 *)(lVar4 + 0x40) = 0;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142db5ba0 FUN_142db5ba0 body=1149 status=ok
// SIG undefined FUN_142db5ba0(void)

void FUN_142db5ba0(longlong param_1)

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
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
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
  float fVar28;
  
  lVar16 = *(longlong *)(param_1 + 0x1c8);
  lVar17 = (longlong)*(int *)(param_1 + 0x1d0) * 0x20 + lVar16;
  if (lVar16 != lVar17) {
    do {
      if (*(int *)(lVar16 + 8) != -1) {
        if ((*(char *)((longlong)*(int *)(lVar16 + 4) * 0x40 + *(longlong *)(param_1 + 0x1f8)) !=
             '\0') &&
           (*(char *)((longlong)*(int *)(lVar16 + 8) * 0x40 + *(longlong *)(param_1 + 0x1f8)) ==
            '\0')) {
          piVar12 = (int *)((longlong)*(int *)(lVar16 + 4) * 0x100 + *(longlong *)(param_1 + 0x600))
          ;
          if (piVar12[1] != -1) {
            lVar15 = (longlong)piVar12[1] * 0x1e0 +
                     *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x138);
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)*piVar12 * 8);
            lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)piVar12[9] * 8);
            if ((lVar10 != 0) && (lVar11 != 0)) {
              fVar25 = *(float *)(lVar15 + 0x20) + *(float *)(lVar15 + 0x20);
              fVar21 = *(float *)(lVar15 + 0x24) + *(float *)(lVar15 + 0x24);
              fVar23 = *(float *)(lVar15 + 0x28) + *(float *)(lVar15 + 0x28);
              fVar28 = *(float *)(lVar15 + 0x3c) + *(float *)(lVar15 + 0x3c);
              lVar13 = (longlong)*(int *)(lVar10 + 0x38) * 0x60;
              fVar27 = *(float *)(lVar15 + 0x44) + *(float *)(lVar15 + 0x44);
              lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x50);
              fVar1 = *(float *)(lVar13 + 0x3c + lVar10);
              fVar2 = *(float *)(lVar13 + 0x38 + lVar10);
              fVar3 = *(float *)(lVar13 + 0x34 + lVar10);
              fVar4 = *(float *)(lVar13 + 0x30 + lVar10);
              fVar22 = fVar1 * fVar1 - 0.5;
              fVar19 = fVar4 * fVar25 + fVar3 * fVar21 + fVar2 * fVar23;
              fVar24 = *(float *)(lVar15 + 0x40) + *(float *)(lVar15 + 0x40);
              lVar14 = (longlong)*(int *)(lVar11 + 0x38) * 0x60;
              lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x50);
              fVar5 = *(float *)(lVar14 + 0x3c + lVar11);
              fVar6 = *(float *)(lVar14 + 0x34 + lVar11);
              fVar7 = *(float *)(lVar14 + 0x38 + lVar11);
              fVar26 = fVar5 * fVar5 - 0.5;
              fVar8 = *(float *)(lVar14 + 0x30 + lVar11);
              fVar20 = fVar8 * fVar28 + fVar6 * fVar24 + fVar7 * fVar27;
              fVar18 = 0.0;
              if (*(int *)(lVar15 + 0x54) == 1) {
                fVar18 = *(float *)(lVar15 + 0x80);
              }
              else if (*(int *)(lVar15 + 0x54) == 2) {
                fVar18 = 3.4028235e+38;
              }
              fVar9 = *(float *)(param_1 + 0x5f0);
              if (fVar9 < ABS(((fVar3 * fVar23 - fVar2 * fVar21) * fVar1 + fVar22 * fVar25 +
                               fVar4 * fVar19 + *(float *)(lVar13 + 0x40 + lVar10)) -
                              ((fVar6 * fVar27 - fVar7 * fVar24) * fVar5 + fVar26 * fVar28 +
                               fVar8 * fVar20 + *(float *)(lVar14 + 0x40 + lVar11))) - fVar18) {
LAB_142db5fb6:
                *(undefined1 *)(param_1 + 0x5bc) = 2;
                return;
              }
              fVar18 = 0.0;
              if (*(int *)(lVar15 + 0x58) == 1) {
                fVar18 = *(float *)(lVar15 + 0x80);
              }
              else if (*(int *)(lVar15 + 0x58) == 2) {
                fVar18 = 3.4028235e+38;
              }
              if (fVar9 < ABS(((fVar2 * fVar25 - fVar4 * fVar23) * fVar1 + fVar22 * fVar21 +
                               fVar3 * fVar19 + *(float *)(lVar13 + 0x44 + lVar10)) -
                              ((fVar7 * fVar28 - fVar8 * fVar27) * fVar5 + fVar26 * fVar24 +
                               fVar6 * fVar20 + *(float *)(lVar14 + 0x44 + lVar11))) - fVar18)
              goto LAB_142db5fb6;
              fVar18 = 0.0;
              if (*(int *)(lVar15 + 0x5c) == 1) {
                fVar18 = *(float *)(lVar15 + 0x80);
              }
              else if (*(int *)(lVar15 + 0x5c) == 2) {
                fVar18 = 3.4028235e+38;
              }
              if (fVar9 < ABS(((fVar4 * fVar21 - fVar3 * fVar25) * fVar1 + fVar22 * fVar23 +
                               fVar2 * fVar19 + *(float *)(lVar13 + 0x48 + lVar10)) -
                              ((fVar8 * fVar24 - fVar6 * fVar28) * fVar5 + fVar26 * fVar27 +
                               fVar7 * fVar20 + *(float *)(lVar14 + 0x48 + lVar11))) - fVar18)
              goto LAB_142db5fb6;
            }
          }
        }
      }
      lVar16 = lVar16 + 0x20;
    } while (lVar16 != lVar17);
  }
  return;
}



// FUNCTION 142db6020 ResizeForCopy body=112 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<TSharedPtr<FGameplayAbilityTargetData,0>,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>
     ::ResizeForCopy(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    TInlineAllocator<1,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedPtr<FGameplayAbilityTargetData,0>_>::ResizeAllocation
              (param_1,0,iVar1,0x10);
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



// FUNCTION 142db6090 ResizeGrow body=266 status=ok
// SIG undefined ResizeGrow(void)

void TArray<AActor_*,TInlineAllocator<128,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x408);
  if (uVar1 < 0x81) {
    uVar2 = 0x80;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x40c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x40c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x400);
  if (uVar2 < 0x81) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x400);
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
        *(void **)((longlong)param_1 + 0x400) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x400) = uVar5;
  return;
}



// FUNCTION 142db61a0 FUN_142db61a0 body=737 status=ok
// SIG undefined FUN_142db61a0(void)

void FUN_142db61a0(undefined8 *param_1,char param_2)

{
  void *pvVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (((*(int *)(param_1 + 1) == 0) || (*(longlong *)*param_1 == 0)) ||
     (plVar13 = *(longlong **)(*(longlong *)*param_1 + 0x118), plVar13 == (longlong *)0x0)) {
LAB_142db622b:
    plVar11 = (longlong *)0x0;
    pvVar1 = (void *)*param_1;
    local_50 = *(int *)(param_1 + 1);
    lVar5 = (longlong)local_50;
    local_58 = (longlong *)0x0;
    plVar13 = plVar11;
    iVar10 = local_50;
    if (local_50 != 0) {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
      plVar13 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar5 * 0x28);
      iVar10 = local_50;
    }
    local_50 = *(int *)(param_1 + 3);
    lVar5 = (longlong)local_50;
    pvVar1 = (void *)param_1[2];
    local_58 = (longlong *)0x0;
    plVar12 = plVar11;
    if (local_50 != 0) {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
      plVar12 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar5 << 4);
    }
    iVar3 = local_50;
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,0);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 2,0);
    }
    for (plVar9 = plVar13; plVar9 != plVar13 + (longlong)iVar10 * 5; plVar9 = plVar9 + 5) {
      plVar6 = (longlong *)*plVar9;
      if (plVar6 != (longlong *)0x0) {
        if (param_2 == '\0') {
          (**(code **)(*plVar6 + 0x840))(plVar6,plVar9 + 1,1);
        }
        else {
          plVar6 = (longlong *)FUN_14178ca30();
          if (plVar6 != (longlong *)0x0) {
            plVar2 = *(longlong **)(*plVar9 + 0x118);
            plVar8 = plVar11;
            if ((plVar2 != (longlong *)0x0) && (plVar2[0x2d] == *plVar9)) {
              lVar5 = (**(code **)(*plVar2 + 0x678))();
              if (lVar5 == 0) {
                plVar8 = (longlong *)0x0;
              }
              else {
                plVar8 = *(longlong **)(lVar5 + 0x4c8);
              }
            }
            FUN_142326750(&local_58,plVar8);
            puVar7 = (undefined4 *)(**(code **)(*plVar6 + 0x4d0))(plVar6);
            local_48 = *puVar7;
            uStack_44 = puVar7[1];
            uStack_40 = puVar7[2];
            uStack_3c = puVar7[3];
            local_38 = puVar7[4];
            uStack_34 = puVar7[5];
            uStack_30 = puVar7[6];
            uStack_2c = puVar7[7];
            FUN_1426db060(&local_48,plVar9 + 1);
            (**(code **)(*(longlong *)*plVar9 + 0x840))((longlong *)*plVar9,&local_48,1);
            FUN_142328740(&local_58);
          }
        }
      }
    }
    for (plVar11 = plVar12; plVar11 != plVar12 + (longlong)iVar3 * 2; plVar11 = plVar11 + 2) {
      if (*plVar11 != 0) {
        FUN_142df2730(*plVar11,*(undefined1 *)((longlong)plVar11 + 9));
        FUN_142df2ce0(*plVar11,(char)plVar11[1]);
      }
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    if (plVar13 != (longlong *)0x0) {
      FMemory::Free(plVar13);
    }
  }
  else {
    if ((*(byte *)(plVar13 + 0x12) & 0x20) == 0) {
      uVar4 = UScrollBox::GetPrivateStaticClass();
      lVar5 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar4);
      if ((lVar5 == 0) || ((*(uint *)(lVar5 + 0x840) >> 3 & 1) == 0)) goto LAB_142db622b;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,0);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 2,0);
      return;
    }
  }
  return;
}



// FUNCTION 142db6490 FUN_142db6490 body=167 status=ok
// SIG undefined FUN_142db6490(void)

undefined8 FUN_142db6490(undefined1 *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  
  if (*param_2 == 4) {
    puVar1 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar1 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,param_1 + 0x18,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,param_1 + 0x18,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = *puVar1;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *param_1 = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 142db6540 FUN_142db6540 body=426 status=ok
// SIG undefined FUN_142db6540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142db6540(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  int local_90 [2];
  undefined8 local_88;
  undefined ***pppuStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined ***pppuStack_58;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_2 != *(longlong *)(param_1 + 0x1f8)) {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x300)) {
      lVar2 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x2f8);
        iVar5 = iVar5 + 1;
        *(undefined4 *)(lVar2 + 0x3c + lVar1) = 0x3f800000;
        *(undefined4 *)(lVar2 + 0x40 + lVar1) = 0x3f800000;
        *(undefined4 *)(lVar2 + 0x44 + lVar1) = 0x3f800000;
        *(undefined4 *)(lVar2 + 0x48 + lVar1) = 0x3f800000;
        lVar2 = lVar2 + 0x100;
      } while (iVar5 < *(int *)(param_1 + 0x300));
    }
    pppuStack_80 = &local_68;
    local_68 = &PTR_LAB_1458a5d00;
    local_30 = &local_68;
    local_88._0_4_ = (undefined4)param_1;
    local_88._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    local_60 = (undefined4)local_88;
    uStack_5c = local_88._4_4_;
    pppuStack_58 = pppuStack_80;
    local_88 = param_1;
    if (param_2 != 0) {
      plVar3 = *(longlong **)(param_2 + 0x30);
      plVar4 = plVar3 + (longlong)*(int *)(param_2 + 0x38) * 4;
      for (; plVar3 != plVar4; plVar3 = plVar3 + 4) {
        local_88 = *plVar3;
        pppuStack_80 = (undefined ***)plVar3[1];
        local_78 = (undefined4)plVar3[2];
        uStack_74 = *(undefined4 *)((longlong)plVar3 + 0x14);
        uStack_70 = (undefined4)plVar3[3];
        uStack_6c = *(undefined4 *)((longlong)plVar3 + 0x1c);
        iVar5 = UPhysicsAsset::FindBodyIndex(*(undefined8 *)(param_1 + 0x338),local_88);
        if ((iVar5 != -1) && (iVar5 < *(int *)(param_1 + 0x300))) {
          local_98[0] = 3;
          local_90[0] = iVar5;
          if (local_30 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_guard_xfg_dispatch_icall_nop();
          }
          (*(code *)(*local_30)[2])(local_30,&local_88,local_90,local_98);
        }
      }
    }
    *(longlong *)(param_1 + 0x1f8) = param_2;
    if (local_30 != (undefined ***)0x0) {
      (*(code *)(*local_30)[4])
                (local_30,CONCAT71((int7)((ulonglong)&local_68 >> 8),local_30 != &local_68));
    }
  }
  return;
}



// FUNCTION 142db66f0 FUN_142db66f0 body=300 status=ok
// SIG undefined FUN_142db66f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142db66f0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 *puVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [192];
  ulonglong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  undefined1 *puVar3;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  puVar4 = (undefined1 *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  if (param_2 != 0) {
    FUN_140725150(param_2,local_108,0);
  }
  puVar3 = local_108;
  if (local_48 != 0) {
    puVar3 = puVar4;
  }
  plVar2 = (longlong *)((ulonglong)puVar3 | local_48);
  puVar3 = (undefined1 *)((longlong)local_40 & 0x1fffffffffffffff);
  if (plVar2 + local_40 < plVar2) {
    puVar3 = puVar4;
  }
  if (puVar3 != (undefined1 *)0x0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        FUN_142db9760(param_1,plVar1);
        (**(code **)(*plVar1 + 0x838))(plVar1,param_3);
      }
      plVar2 = plVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar3);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142db6820 FUN_142db6820 body=414 status=ok
// SIG undefined FUN_142db6820(void)

void FUN_142db6820(longlong param_1,int param_2,byte param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  byte local_res18 [8];
  byte *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  byte local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  
  lVar5 = (longlong)param_2;
  if (*(longlong *)(param_1 + 0x330) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x2d8) + lVar5 * 0x18;
    local_68 = local_res18;
    lVar6 = lVar5 * 0x100 + *(longlong *)(param_1 + 0x2f8);
    local_res18[0] = param_3;
    local_60 = param_1;
    local_58 = lVar6;
    local_50 = lVar1;
    plVar2 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x328));
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x358))
                (plVar2,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Physics\\DynamicPhysicalAnimationComponent.cpp"
                 ,0x40c);
      if ((*(byte *)(lVar6 + 0x38) & 1) != local_res18[0]) {
        if ((param_2 == *(int *)(param_1 + 0x2a8)) || (local_res18[0] == 0)) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        *(byte *)(lVar6 + 0x38) = *(byte *)(lVar6 + 0x38) & 0xfe | bVar4;
        FUN_142da1dd0(lVar1,lVar6,lVar6 + 0x30,*(undefined8 *)(param_1 + 0x330),plVar2,
                      local_res18[0] == 0);
        if ((param_2 == *(int *)(param_1 + 0x2a8)) && (local_res18[0] != 0)) {
          local_40 = local_40 | 1;
          *(undefined8 *)(lVar6 + 0x44) = 0;
          *(undefined8 *)(lVar6 + 0x3c) = 0;
          local_48 = 0;
          local_3c = 0;
          uStack_34 = 0;
          local_2c = 0;
          uVar3 = FUN_142dab3f0(param_1,lVar1);
          FUN_142db6eb0(param_1,uVar3,*(longlong *)(param_1 + 0x2e8) + lVar5 * 0x28,&local_48);
        }
      }
      FUN_142d99e00(&local_68);
      (**(code **)(*plVar2 + 0x360))(plVar2);
    }
  }
  return;
}



// FUNCTION 142db69c0 FUN_142db69c0 body=140 status=ok
// SIG undefined FUN_142db69c0(void)

void FUN_142db69c0(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = UPhysicsAsset::FindBodyIndex(*(undefined8 *)(param_1 + 0x338),*param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x100 + *(longlong *)(param_1 + 0x2f8);
    if (param_4 != '\0') {
      FUN_142db76e0(param_1,**(undefined4 **)
                              (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xbf0) +
                              (longlong)iVar2 * 8),2);
    }
    uVar1 = param_3[1];
    *(undefined8 *)(lVar3 + 0x58) = *param_3;
    *(undefined8 *)(lVar3 + 0x60) = uVar1;
    *(undefined4 *)(lVar3 + 0x68) = *(undefined4 *)(param_3 + 2);
  }
  return;
}



// FUNCTION 142db6a50 RHIAutomaticCacheFlushAfterComputeShader body=7 status=ok
// SIG undefined RHIAutomaticCacheFlushAfterComputeShader(void)

void FD3D12CommandContext::RHIAutomaticCacheFlushAfterComputeShader
               (longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x17a) = param_2;
  return;
}



// FUNCTION 142db6a60 FUN_142db6a60 body=597 status=ok
// SIG undefined FUN_142db6a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142db6a60(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
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
  if ((*(byte *)(param_1 + 0x2e0) & 2) != 0) {
    if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar3 = FUN_1423407b0(), lVar3 == 0)) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    cVar1 = UWorld::IsGameWorld(lVar3);
    if (cVar1 != '\0') {
      local_98 = FUN_142d9c4a0;
      lVar3 = *(longlong *)(param_1 + 0x120);
      uStack_90 = 0;
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_98;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_98._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_90;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_8c;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar3;
        *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_88 = 0;
      local_80 = 0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_a0 = 0xbf800000;
      local_a8 = 0;
      local_70 = 0;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar5,param_1 + 0x2e8,&local_88,0x800000);
      if (local_28 != 0) {
        plVar6 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar6 = local_38;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar3 = FMemory::Realloc(plVar4,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
      if ((*(longlong *)(param_1 + 0x118) != 0) && (iVar2 = FUN_14233f450(param_1), iVar2 == 3)) {
        (**(code **)(**(longlong **)(param_1 + 0x118) + 0x600))();
        FUN_142da1ad0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142db6cc0 FUN_142db6cc0 body=301 status=ok
// SIG undefined FUN_142db6cc0(void)

void FUN_142db6cc0(longlong param_1,char param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char local_res10 [8];
  longlong local_28;
  char *local_20;
  undefined1 *local_18;
  longlong *plStack_10;
  
  if (param_2 != '\0') {
    *(char *)(param_1 + 0x340) = param_2;
  }
  local_res10[0] = param_2;
  FUN_14288e3d0(param_1 + 0x30);
  cVar1 = local_res10[0];
  iVar3 = 0;
  if (param_3 == 0) {
    if ((*(longlong *)(param_1 + 0x330) != 0) && (*(longlong *)(param_1 + 0x338) != 0)) {
      FUN_142db7df0(param_1,local_res10[0]);
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x400))
                        (*(longlong **)(param_1 + 0x330),0);
      if ((cVar2 != cVar1) && (0 < *(int *)(*(longlong *)(param_1 + 0x330) + 0xbf8))) {
        do {
          FUN_142db76e0(param_1,iVar3,-(cVar1 != '\0') & 3);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(*(longlong *)(param_1 + 0x330) + 0xbf8));
        return;
      }
    }
  }
  else {
    local_20 = local_res10;
    plStack_10 = &local_28;
    local_18 = &LAB_142d9d950;
    local_28 = param_1;
    FUN_1427da670(*(undefined8 *)(param_1 + 0x330),param_3,1,0,&local_18);
  }
  return;
}



// FUNCTION 142db6df0 FUN_142db6df0 body=145 status=ok
// SIG undefined FUN_142db6df0(void)

void FUN_142db6df0(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x330) != 0) && (*(longlong *)(param_1 + 0x338) != 0)) {
    FUN_142db7df0();
    iVar2 = 0;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x400))
                      (*(longlong **)(param_1 + 0x330),0);
    if ((cVar1 != param_2) && (0 < *(int *)(*(longlong *)(param_1 + 0x330) + 0xbf8))) {
      do {
        FUN_142db76e0(param_1,iVar2,-(param_2 != '\0') & 3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(*(longlong *)(param_1 + 0x330) + 0xbf8));
    }
  }
  return;
}



// FUNCTION 142db6e90 FUN_142db6e90 body=12 status=ok
// SIG undefined FUN_142db6e90(void)

void FUN_142db6e90(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142db6e95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5b8))(param_1,0);
  return;
}



// FUNCTION 142db6ea0 FUN_142db6ea0 body=7 status=ok
// SIG undefined FUN_142db6ea0(void)

void FUN_142db6ea0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x17b) = param_2;
  return;
}



// FUNCTION 142db6eb0 FUN_142db6eb0 body=174 status=ok
// SIG undefined FUN_142db6eb0(void)

void FUN_142db6eb0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  
  FConstraintInstance::SetAngularDriveParams
            (param_2,*(float *)(param_3 + 0xc) * *(float *)(param_4 + 0xc) *
                     *(float *)(param_1 + 0x1ac),
             *(float *)(param_3 + 0x10) * *(float *)(param_4 + 0x10) * *(float *)(param_1 + 0x1ac),
             0x7f7fffff);
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    fVar1 = *(float *)(param_3 + 0x14) * *(float *)(param_4 + 0x14) * *(float *)(param_1 + 0x1ac);
    fVar2 = *(float *)(param_3 + 0x18) * *(float *)(param_4 + 0x18) * *(float *)(param_1 + 0x1ac);
  }
  else {
    fVar1 = 0.0;
    fVar2 = 0.0;
  }
  FConstraintInstance::SetLinearDriveParams(param_2,fVar1,fVar2,0x7f7fffff);
  return;
}



// FUNCTION 142db6f60 FUN_142db6f60 body=164 status=ok
// SIG undefined FUN_142db6f60(void)

void FUN_142db6f60(longlong param_1,undefined8 param_2,longlong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  FConstraintInstance::SetAngularDriveParams
            (param_2,param_4 * *(float *)(param_3 + 0xc) * *(float *)(param_1 + 0x1ac),
             param_4 * *(float *)(param_3 + 0x10) * *(float *)(param_1 + 0x1ac),0x7f7fffff);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    fVar1 = param_4 * *(float *)(param_3 + 0x14) * *(float *)(param_1 + 0x1ac);
    fVar2 = param_4 * *(float *)(param_3 + 0x18) * *(float *)(param_1 + 0x1ac);
  }
  else {
    fVar1 = 0.0;
    fVar2 = 0.0;
  }
  FConstraintInstance::SetLinearDriveParams(param_2,fVar1,fVar2,0x7f7fffff);
  return;
}



// FUNCTION 142db7010 FUN_142db7010 body=278 status=ok
// SIG undefined FUN_142db7010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142db7010(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_1 + 0x1c8);
  lVar6 = (longlong)*(int *)(param_1 + 0x1d0) * 0x20 + lVar5;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x20) {
    iVar1 = *(int *)(lVar5 + 4);
    if ((iVar1 != -1) &&
       (lVar2 = *(longlong *)
                 (*(longlong *)(param_1 + 0x1d8) +
                 (longlong)*(int *)((longlong)iVar1 * 0x100 + 0x24 + *(longlong *)(param_1 + 0x600))
                 * 8), lVar2 != 0)) {
      uVar3 = P2UTransform(local_58,(longlong)*(int *)(lVar2 + 0x38) * 0x60 + 0x30 +
                                    *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x50));
      FUN_14162bfb0(lVar2,&local_88,uVar3);
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x620));
      *puVar4 = local_88;
      puVar4[1] = uStack_80;
      *(undefined4 *)(puVar4 + 2) = local_78;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_74;
      *(undefined4 *)(puVar4 + 3) = uStack_70;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_6c;
      *(undefined4 *)(puVar4 + 4) = local_68;
      *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_64;
      *(undefined4 *)(puVar4 + 5) = uStack_60;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_5c;
    }
  }
  return;
}



// FUNCTION 142db7130 FUN_142db7130 body=51 status=ok
// SIG undefined FUN_142db7130(void)

void FUN_142db7130(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  if (param_2 != (longlong *)0x0) {
    FUN_142db9760();
    (**(code **)(*param_2 + 0x838))(param_2,param_3);
  }
  return;
}



// FUNCTION 142db7170 FUN_142db7170 body=27 status=ok
// SIG undefined FUN_142db7170(void)

void FUN_142db7170(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x211) = param_2;
  if (param_2 == '\x01') {
    FUN_142db6820(param_1,*(undefined4 *)(param_1 + 0x2a8),1);
    return;
  }
  return;
}



// FUNCTION 142db7190 FUN_142db7190 body=153 status=ok
// SIG undefined FUN_142db7190(void)

void FUN_142db7190(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar1 = *(longlong **)(param_1 + 400);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x728))(plVar1,param_2,1);
  }
  if ((*(longlong *)(param_1 + 0x188) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x168), lVar2 != 0)) {
    local_18 = *param_2;
    local_10 = *(undefined4 *)(param_2 + 1);
    if (param_3 != '\0') {
      FUN_142398470();
      return;
    }
    FUN_142399b90(lVar2,&local_18,0,0,0);
  }
  return;
}



// FUNCTION 142db7230 FUN_142db7230 body=167 status=ok
// SIG undefined FUN_142db7230(void)

void FUN_142db7230(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_1 + 0x2e0) & 2) != 0) {
    iVar1 = FUN_14233f450();
    if ((iVar1 == 3) && (param_2 != 0)) {
      plVar2 = *(longlong **)(param_1 + 800);
      if (*(longlong **)(param_1 + 800) == (longlong *)0x0) {
        plVar2 = (longlong *)(param_1 + 0x310);
      }
      plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x328) * 2;
      if (plVar2 != plVar3) {
        while (*plVar2 != param_2) {
          plVar2 = plVar2 + 2;
          if (plVar2 == plVar3) {
            return;
          }
        }
        if ((plVar2 != (longlong *)0x0) && (plVar2[1] != param_3)) {
          plVar2[1] = param_3;
          FUN_142db6a60(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142db72e0 FUN_142db72e0 body=553 status=ok
// SIG undefined FUN_142db72e0(void)

undefined8 FUN_142db72e0(float *param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  byte local_40;
  undefined8 local_38;
  
  if (((param_2 != 0) && (plVar6 = *(longlong **)(param_2 + 0x118), plVar6 != (longlong *)0x0)) &&
     ((char)plVar6[0x25] == '\x03')) {
    lVar4 = (**(code **)(*plVar6 + 0x148))();
    if (*param_1 <= *(float *)(lVar4 + 0x790) - param_1[1]) {
      fVar1 = param_1[4];
      uVar7 = 0;
      param_1[1] = *(float *)(lVar4 + 0x790);
      param_1[4] = 0.0;
      if (param_1[5] != fVar1) {
        TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 2);
      }
      plVar6 = *(longlong **)(param_2 + 0xbf0);
      uVar8 = (longlong)*(int *)(param_2 + 0xbf8) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(param_2 + 0xbf8) < plVar6) {
        uVar8 = uVar7;
      }
      if (uVar8 != 0) {
        do {
          lVar4 = *plVar6;
          if (lVar4 != 0) {
            cVar2 = FUN_1426aaac0(lVar4);
            if ((cVar2 == '\0') ||
               (cVar2 = FBodyInstance::IsValidBodyInstance(lVar4), cVar2 == '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              local_68 = 0;
              uStack_64 = 0;
              uStack_60 = 0;
              uStack_5c = 0x3f800000;
              local_58 = 0;
              uStack_50 = 0;
              uStack_4c = 0;
              local_78 = 0;
              local_70 = 0;
              uStack_48 = 0;
              uStack_44 = 0;
              local_40 = 0;
              local_38 = 0;
              lVar4 = FWeakObjectPtr::Get(lVar4 + 0x140);
              local_38 = *(undefined8 *)(lVar4 + 0x90);
              UPrimitiveComponent::GetRigidBodyState(param_2,&local_78);
              fVar1 = param_1[4];
              local_40 = local_40 | 2;
              param_1[4] = (float)((int)fVar1 + 1);
              if ((int)param_1[5] < (int)fVar1 + 1) {
                TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 2,fVar1);
              }
              puVar5 = (undefined8 *)((longlong)(int)fVar1 * 0x50 + *(longlong *)(param_1 + 2));
              *puVar5 = local_78;
              *(undefined4 *)(puVar5 + 1) = local_70;
              *(undefined4 *)(puVar5 + 2) = local_68;
              *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_64;
              *(undefined4 *)(puVar5 + 3) = uStack_60;
              *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_5c;
              puVar5[4] = local_58;
              *(undefined4 *)(puVar5 + 5) = uStack_50;
              *(ulonglong *)((longlong)puVar5 + 0x2c) = CONCAT44(uStack_48,uStack_4c);
              *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_44;
              *(byte *)(puVar5 + 7) = local_40;
              puVar5[8] = local_38;
            }
          }
          plVar6 = plVar6 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar8);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142db7510 FUN_142db7510 body=456 status=ok
// SIG undefined FUN_142db7510(void)

undefined8 FUN_142db7510(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_98 [16];
  int local_88;
  undefined8 uStack_84;
  int iStack_7c;
  undefined8 local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x118) != 0)) &&
     (*(char *)(*(longlong *)(param_2 + 0x118) + 0x128) == '\x03')) {
    lVar7 = param_1[1];
    uVar11 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != (int)lVar7) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo();
    }
    uVar12 = uVar11;
    if (0 < *(int *)(param_2 + 0xbf8)) {
      do {
        lVar7 = *(longlong *)(uVar12 + *(longlong *)(param_2 + 0xbf0));
        iVar10 = (int)uVar11;
        if (lVar7 != 0) {
          cVar5 = FUN_1426aaac0(lVar7);
          if ((cVar5 == '\0') || (cVar5 = FBodyInstance::IsValidBodyInstance(lVar7), cVar5 == '\0'))
          {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            lVar7 = FWeakObjectPtr::Get(lVar7 + 0x140);
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_4c = 0x3f800000;
            local_48 = 0;
            uStack_40 = 0;
            local_38 = 0;
            local_30 = 0;
            UPrimitiveComponent::GetRigidBodyState(param_2,&local_68,*(undefined8 *)(lVar7 + 0x90));
            uStack_84 = local_68;
            iStack_7c = local_60;
            puVar8 = (undefined8 *)FQuat::Rotator(&local_58,local_98);
            iVar3 = (int)param_1[1];
            uVar2 = *puVar8;
            uVar4 = *(undefined4 *)(puVar8 + 1);
            *(int *)(param_1 + 1) = iVar3 + 1;
            local_88 = iVar10;
            if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
              ResizeGrow(param_1,iVar3);
            }
            lVar7 = *param_1;
            lVar9 = (longlong)iVar3 * 0x1c;
            piVar1 = (int *)(lVar9 + lVar7);
            *piVar1 = local_88;
            piVar1[1] = (int)uStack_84;
            piVar1[2] = uStack_84._4_4_;
            piVar1[3] = iStack_7c;
            *(undefined8 *)(lVar9 + 0x10 + lVar7) = uVar2;
            *(undefined4 *)(lVar9 + 0x18 + lVar7) = uVar4;
          }
        }
        uVar11 = (ulonglong)(iVar10 + 1U);
        uVar12 = uVar12 + 8;
      } while ((int)(iVar10 + 1U) < *(int *)(param_2 + 0xbf8));
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142db76e0 FUN_142db76e0 body=960 status=ok
// SIG undefined FUN_142db76e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142db76e0(longlong param_1,int param_2,int param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint7 uVar8;
  ulonglong uVar7;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar12 = (longlong)param_2;
  puVar4 = (ulonglong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x328));
  if (puVar4 == (ulonglong *)0x0) {
    return;
  }
  uVar11 = *puVar4;
  uVar10 = 0x2cf;
  (**(code **)(uVar11 + 0x358))
            (puVar4,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Physics\\DynamicPhysicalAnimationComponent.cpp"
             ,0x2cf);
  lVar9 = lVar12 * 0x100 + *(longlong *)(param_1 + 0x2f8);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xbf0) + lVar12 * 8);
  if ((lVar2 == 0) || (lVar12 = FUN_142697a40(lVar2,lVar12), lVar12 == 0)) goto LAB_142db7a68;
  bVar6 = param_3 - 2U < 3;
  uVar7 = (ulonglong)bVar6;
  FUN_142db7df0(param_1,uVar7);
  if (bVar6 != *(int *)(lVar9 + 0x6c) - 2U < 3) {
    if (*(int *)(param_1 + 0x2a8) == param_2) {
      lVar12 = *(longlong *)(param_1 + 0x118);
      uVar8 = (uint7)(uVar7 >> 8);
      if (bVar6) {
        lVar3 = *(longlong *)(param_1 + 0x330);
        if ((*(longlong *)(lVar12 + 0x168) == lVar3) || (lVar3 == 0)) {
          FUN_1426a9140(lVar2,CONCAT71(uVar8,1),0);
          FUN_1423b8450(*(undefined8 *)(param_1 + 0x330),1);
        }
        else {
          *(byte *)(param_1 + 0x1d4) = *(byte *)(lVar3 + 0x24c) >> 2 & 1;
          *(byte *)(param_1 + 0x1e4) = *(byte *)(lVar3 + 0x24c) >> 3 & 1;
          *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(lVar3 + 0x1ec);
          *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(lVar3 + 500);
          *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(lVar3 + 0x1f8);
          *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(lVar3 + 0x200);
          FUN_1426a9140(lVar2,CONCAT71(uVar8,1),0);
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x330) + 0x24c);
          *pbVar1 = *pbVar1 | 4;
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x330) + 0x24c);
          *pbVar1 = *pbVar1 | 8;
          FUN_142699110(lVar2,&local_68,1,0);
          lVar12 = *(longlong *)(param_1 + 0x330);
          local_80 = uStack_50;
          *(undefined4 *)(lVar12 + 0x1ec) = local_58;
          *(undefined4 *)(lVar12 + 0x1f0) = uStack_54;
          *(undefined4 *)(lVar12 + 500) = uStack_50;
          local_78 = local_68;
          uStack_74 = uStack_64;
          uStack_70 = uStack_60;
          uStack_6c = uStack_5c;
          puVar5 = (undefined8 *)FRotator::FRotator(local_88,&local_78);
          lVar12 = *(longlong *)(param_1 + 0x330);
          *(undefined8 *)(lVar12 + 0x1f8) = *puVar5;
          *(undefined4 *)(lVar12 + 0x200) = *(undefined4 *)(puVar5 + 1);
          FUN_1423b8450(*(undefined8 *)(param_1 + 0x330),1);
        }
        goto LAB_142db7a31;
      }
      if ((lVar12 == 0) || (*(char *)(lVar12 + 0x128) != '\x03')) {
        lVar12 = *(longlong *)(param_1 + 0x330);
        uVar7 = (ulonglong)uVar8 << 8;
        uVar10 = uVar10 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        *(undefined8 *)(lVar12 + 0x1ec) = *(undefined8 *)(param_1 + 0x1c8);
        *(undefined4 *)(lVar12 + 500) = *(undefined4 *)(param_1 + 0x1d0);
        lVar12 = *(longlong *)(param_1 + 0x330);
        *(undefined8 *)(lVar12 + 0x1f8) = *(undefined8 *)(param_1 + 0x1d8);
        *(undefined4 *)(lVar12 + 0x200) = *(undefined4 *)(param_1 + 0x1e0);
        lVar12 = *(longlong *)(param_1 + 0x330);
      }
      else {
        uVar7 = (ulonglong)*(byte *)(param_1 + 0x1d4);
        if (*(byte *)(param_1 + 0x1d4) == 0) {
          lVar12 = *(longlong *)(param_1 + 0x330);
          *(undefined8 *)(lVar12 + 0x1ec) = *(undefined8 *)(param_1 + 0x1c8);
          *(undefined4 *)(lVar12 + 500) = *(undefined4 *)(param_1 + 0x1d0);
          uVar7 = (ulonglong)*(byte *)(param_1 + 0x1d4);
          if (*(byte *)(param_1 + 0x1d4) == 0) {
            lVar12 = *(longlong *)(param_1 + 0x330);
            *(undefined8 *)(lVar12 + 0x1f8) = *(undefined8 *)(param_1 + 0x1d8);
            *(undefined4 *)(lVar12 + 0x200) = *(undefined4 *)(param_1 + 0x1e0);
            uVar7 = (ulonglong)*(byte *)(param_1 + 0x1d4);
          }
        }
        lVar12 = *(longlong *)(param_1 + 0x330);
        uVar10 = (ulonglong)*(byte *)(param_1 + 0x1e4);
        uVar11 = (ulonglong)(*(byte *)(lVar12 + 0x24c) >> 4 & 1);
      }
      FUN_142397000(lVar12,uVar7,uVar10,uVar11);
      bVar6 = false;
    }
    FUN_1426a9140(lVar2,bVar6,0);
  }
LAB_142db7a31:
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xf7;
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) | -(param_3 != 0) & 8U;
  *(int *)(lVar9 + 0x6c) = param_3;
  if (param_3 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x3f800000;
  }
  *(undefined4 *)(lVar2 + 0xf4) = uVar13;
LAB_142db7a68:
  (**(code **)(*puVar4 + 0x360))(puVar4);
  return;
}



// FUNCTION 142db7aa0 FUN_142db7aa0 body=571 status=ok
// SIG undefined FUN_142db7aa0(void)

void FUN_142db7aa0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_res8 [8];
  longlong *local_38;
  int local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((((param_1[0x66] != 0) && (FUN_1423bfe60(param_1[0x66],param_1 + 0x5a), param_2 != 0)) &&
      ((*(byte *)(param_2 + 0xb8) & 1) != 0)) && ((*(byte *)(param_2 + 200) & 0x10) != 0)) {
    uStack_20 = 0;
    local_28 = FUN_142db53a0;
    local_38 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_30 = 3;
    local_38 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_28._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_20;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    plVar2 = (longlong *)FUN_1423b84e0(param_1[0x66],local_res8,&local_38);
    param_1[0x5a] = *plVar2;
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) goto LAB_142db7bce;
      (**(code **)(*local_38 + 0x28))(local_38,0);
      if (local_38 != (longlong *)0x0) {
        local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
      }
      local_30 = 0;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
LAB_142db7bce:
  param_1[0x66] = param_2;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(int *)((longlong)param_1 + 0x2e4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5b,0);
  }
  iVar4 = (int)param_1[0x60];
  if (iVar4 != 0) {
    plVar2 = (longlong *)(param_1[0x5f] + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x20;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)((longlong)param_1 + 0x304) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<256,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5f,0);
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (*(int *)((longlong)param_1 + 0x2f4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5d,0);
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (*(int *)((longlong)param_1 + 0x314) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x61,0);
  }
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)((longlong)param_1 + 0x324) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 99,0);
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (*(int *)((longlong)param_1 + 500) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x3d,0);
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  if (((longlong *)param_1[0x66] != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)param_1[0x66] + 800))(), cVar1 != '\0')) {
    (**(code **)(*param_1 + 0x330))(param_1);
  }
  return;
}



// FUNCTION 142db7ce0 FUN_142db7ce0 body=44 status=ok
// SIG undefined FUN_142db7ce0(void)

void FUN_142db7ce0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x178) != param_2) {
    *(undefined1 *)(param_1 + 0x318) = 0;
    *(undefined4 *)(param_1 + 0x214) = 0;
    *(undefined4 *)(param_1 + 0x294) = 0;
    *(undefined4 *)(param_1 + 0x314) = 0;
    *(longlong *)(param_1 + 0x178) = param_2;
  }
  return;
}



// FUNCTION 142db7d10 FUN_142db7d10 body=204 status=ok
// SIG undefined FUN_142db7d10(void)

void FUN_142db7d10(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 != (longlong *)0x0) {
    uVar3 = UCircularThrobber::GetPrivateStaticClass();
    lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
    if (lVar4 != 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      uStack_10._0_2_ = CONCAT11(*(char *)(lVar4 + 0x1a9) == '\0',*(undefined1 *)(lVar4 + 0x1a8));
      *(int *)(param_1 + 0x18) = iVar2 + 1;
      if (*(int *)(param_1 + 0x1c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x10),iVar2);
      }
      local_18 = (undefined4)lVar4;
      uStack_14 = (undefined4)((ulonglong)lVar4 >> 0x20);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x10);
      *puVar1 = local_18;
      puVar1[1] = uStack_14;
      puVar1[2] = uStack_10;
      puVar1[3] = uStack_c;
      FUN_142df2730(lVar4,param_4);
      FUN_142df2ce0(lVar4,param_3);
    }
  }
  return;
}



// FUNCTION 142db7de0 SetAnimationState body=7 status=ok
// SIG undefined SetAnimationState(void)

void ULocomotionLogicComponent::SetAnimationState(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x179) = param_2;
  return;
}



// FUNCTION 142db7df0 FUN_142db7df0 body=228 status=ok
// SIG undefined FUN_142db7df0(void)

void FUN_142db7df0(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong local_30;
  code *local_28;
  longlong **pplStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  longlong **pplStack_10;
  
  if ((*(longlong *)(param_1 + 0x330) != 0) && (*(longlong *)(param_1 + 0x338) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x178 + ((ulonglong)param_2 ^ 1) * 8);
    plVar2 = (longlong *)UWorld::AddOnActorSpawnedHandler(*(longlong *)(param_1 + 0x330),local_res8)
    ;
    if (lVar1 != *plVar2) {
      (**(code **)(**(longlong **)(param_1 + 0x330) + 0x640))(*(longlong **)(param_1 + 0x330),lVar1)
      ;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x330) + 0xbf0);
      plVar2 = plVar3 + *(int *)(*(longlong *)(param_1 + 0x330) + 0xbf8);
      for (; plVar3 != plVar2; plVar3 = plVar3 + 1) {
        if (*plVar3 != 0) {
          pplStack_20 = &local_38;
          local_28 = FUN_142d9d970;
          local_18 = 0x42d9d970;
          uStack_14 = 1;
          local_38 = plVar3;
          local_30 = param_1;
          pplStack_10 = pplStack_20;
          FUN_142693730(*plVar3,&local_18);
        }
      }
    }
  }
  return;
}



// FUNCTION 142db7ee0 FUN_142db7ee0 body=215 status=ok
// SIG undefined FUN_142db7ee0(void)

ulonglong FUN_142db7ee0(longlong param_1,longlong *param_2)

{
  longlong *in_RAX;
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (((*param_2 != 0) && (param_2[1] != 0)) && ((int)param_2[0xd] != 0)) {
    in_RAX = param_2 + 10;
    plVar4 = (longlong *)param_2[0xc];
    if ((longlong *)param_2[0xc] == (longlong *)0x0) {
      plVar4 = in_RAX;
    }
    plVar2 = plVar4 + (longlong)(int)param_2[0xd] * 2;
    while( true ) {
      if (plVar4 == plVar2) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      in_RAX = (longlong *)*plVar4;
      if (in_RAX == (longlong *)0x0) break;
      puVar1 = *(undefined8 **)(param_1 + 800);
      if (*(undefined8 **)(param_1 + 800) == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)(param_1 + 0x310);
      }
      puVar3 = puVar1 + (longlong)*(int *)(param_1 + 0x328) * 2;
      while( true ) {
        if (puVar1 == puVar3) goto LAB_142db7f8e;
        if ((longlong *)*puVar1 == in_RAX) break;
        puVar1 = puVar1 + 2;
      }
      if (puVar1[1] != plVar4[1]) break;
      plVar4 = plVar4 + 2;
    }
  }
LAB_142db7f8e:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142db7fc0 FUN_142db7fc0 body=41 status=ok
// SIG undefined FUN_142db7fc0(void)

undefined1 FUN_142db7fc0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = FUN_14222e270(param_3);
    if (lVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142db7ff0 FUN_142db7ff0 body=981 status=ok
// SIG undefined FUN_142db7ff0(void)

longlong * FUN_142db7ff0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  byte bVar10;
  undefined4 *puVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong local_res18;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined1 local_78 [80];
  
  if (((*(byte *)(param_2 + 1) & 0x10) == 0) &&
     (iVar4 = FUN_142da7d60(param_1,*param_2,param_2[4]), iVar4 != -1)) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x10 + (longlong)iVar4 * 0x30);
    if (lVar5 == 0) {
      return (longlong *)0x0;
    }
    if ((*(byte *)(lVar5 + 0x718) & 0x10) == 0) {
      return (longlong *)0x0;
    }
    FUN_1425fcab0(lVar5,0);
    return (longlong *)0x0;
  }
  pwVar9 = *(wchar_t **)(param_1 + 0x118);
  pwVar13 = (wchar_t *)0x0;
  if (pwVar9 != (wchar_t *)0x0) {
    lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142db809f;
  }
  pwVar9 = pwVar13;
LAB_142db809f:
  pwVar6 = pwVar13;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    pwVar6 = (wchar_t *)AActor::GetWorldSettings();
  }
  if ((wchar_t *)param_2[5] != (wchar_t *)0x0) {
    pwVar6 = (wchar_t *)param_2[5];
  }
  if (pwVar6 == (wchar_t *)0x0) {
    return (longlong *)0x0;
  }
  FUN_1417846f0(pwVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
  plVar8 = (longlong *)FUN_1417985e0(uVar7,pwVar6,0,0,0,0,0,0,0);
  UActorComponent::SetTickGroup(plVar8,5);
  (**(code **)(*plVar8 + 0x3d0))(plVar8,param_1);
  FUN_14260f940(plVar8,*param_2);
  FUN_14234b150(plVar8);
  if ((*(byte *)(param_2 + 1) & 4) != 0) {
    FUN_142398e60(plVar8,8,1);
  }
  FUN_142398ea0(plVar8,pwVar9);
  FUN_142397000(plVar8,1,1);
  if (*(char *)(param_2 + 1) < '\0') {
    UPrimitiveComponent::SetDepthPriorityGroup(plVar8,0);
    *(uint *)(plVar8 + 0x73) = *(uint *)(plVar8 + 0x73) & 0xfffffffe;
  }
  else {
    UPrimitiveComponent::SetDepthPriorityGroup(plVar8,1);
    *(uint *)(plVar8 + 0x73) = *(uint *)(plVar8 + 0x73) | 1;
  }
  *(byte *)((longlong)plVar8 + 0x2f3) = *(byte *)((longlong)plVar8 + 0x2f3) | 8;
  *(undefined4 *)((longlong)plVar8 + 0x794) = 0;
  *(byte *)((longlong)plVar8 + 0x3c) =
       *(byte *)((longlong)plVar8 + 0x3c) ^
       (*(byte *)(param_2 + 1) >> 5 ^ *(byte *)((longlong)plVar8 + 0x3c)) & 1;
  iVar4 = *(int *)(param_1 + 0x180);
  *(int *)(param_1 + 0x180) = iVar4 + 1;
  if (*(int *)(param_1 + 0x184) < iVar4 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x178,iVar4);
  }
  pwVar12 = (wchar_t *)((longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0x178));
  pwVar6 = pwVar13;
  if (pwVar12 != (wchar_t *)0x0) {
    pwVar12[0] = L'\0';
    pwVar12[1] = L'\0';
    pwVar12[2] = L'\0';
    pwVar12[3] = L'\0';
    pwVar6 = pwVar12;
  }
  *(undefined8 *)(pwVar6 + 4) = *param_2;
  *(undefined8 *)pwVar6 = param_2[4];
  *(undefined8 *)(pwVar6 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(pwVar6 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined1 *)(pwVar6 + 0x12) = *(undefined1 *)(param_2 + 3);
  *(byte *)((longlong)pwVar6 + 0x25) =
       *(byte *)((longlong)pwVar6 + 0x25) ^
       (*(byte *)(param_2 + 1) >> 3 ^ *(byte *)((longlong)pwVar6 + 0x25)) & 1;
  bVar10 = (*(byte *)((longlong)pwVar6 + 0x25) ^ *(byte *)(param_2 + 1)) & 2 ^
           *(byte *)((longlong)pwVar6 + 0x25);
  *(byte *)((longlong)pwVar6 + 0x25) = bVar10;
  bVar10 = (*(byte *)(param_2 + 1) >> 4 ^ bVar10) & 4 ^ bVar10;
  *(byte *)((longlong)pwVar6 + 0x25) = bVar10;
  cVar2 = *(char *)((longlong)param_2 + 9);
  *(longlong **)(pwVar6 + 8) = plVar8;
  *(byte *)((longlong)pwVar6 + 0x25) = (cVar2 << 3 ^ bVar10) & 8 ^ bVar10;
  if ((pwVar9 != (wchar_t *)0x0) && (*(longlong *)(pwVar9 + 0x294) != 0)) {
    FUN_142d9d6e0(param_1,local_78,pwVar9);
    FUN_142dbeeb0(param_1,pwVar6,local_78);
  }
  FUN_1425fcab0(plVar8,1);
  pwVar9 = _guard_xfg_dispatch_icall_nop
                     (L"&UScreenParticleManagerComponent::OnScreenParticleFinished",L"::");
  while (pwVar6 = pwVar9, pwVar6 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
    pwVar13 = pwVar6;
  }
  FName::FName(&local_res18,pwVar13 + 2,1);
  plVar1 = plVar8 + 0x115;
  FWeakObjectPtr::operator=(&local_88,0);
  local_80 = 0;
  FWeakObjectPtr::operator=(&local_88,param_1);
  local_80 = local_res18;
  if ((local_res18 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_88), lVar5 != 0)) {
    UObject::FindFunction(lVar5,local_80);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  iVar4 = (int)plVar8[0x116];
  *(int *)(plVar8 + 0x116) = iVar4 + 1;
  if (*(int *)((longlong)plVar8 + 0x8b4) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar4);
  }
  puVar11 = (undefined4 *)((longlong)iVar4 * 0x10 + *plVar1);
  *puVar11 = local_88;
  puVar11[1] = local_84;
  *(longlong *)(puVar11 + 2) = local_80;
  return plVar8;
}



// FUNCTION 142db83d0 FUN_142db83d0 body=373 status=ok
// SIG undefined FUN_142db83d0(void)

void FUN_142db83d0(longlong *param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,char param_7,char param_8,undefined8 param_9
                  ,char param_10,char param_11,char param_12,char param_13)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  
  if ((param_1 != (longlong *)0x0) &&
     (plVar3 = (longlong *)(**(code **)(*param_1 + 0x668))(), plVar3 != (longlong *)0x0)) {
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (param_11 == '\0') {
        if (((*(uint *)((longlong)plVar3 + 0x4cc) >> 1 & 1) == 0) ||
           (cVar2 = (**(code **)(*plVar3 + 0x768))(plVar3), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return;
        }
      }
      else if ((char)plVar3[0x25] != '\x03') {
        return;
      }
      if (plVar3[0x12f] != 0) {
        if (param_7 == '\0') {
          bVar5 = param_3 + 0x4eU & 0xfb;
        }
        else {
          bVar5 = param_3 + 0x4eU | 4;
        }
        if (param_8 == '\0') {
          bVar5 = bVar5 & 0xf7;
        }
        else {
          bVar5 = bVar5 | 8;
        }
        if (param_10 == '\0') {
          bVar5 = bVar5 & 0xef;
        }
        else {
          bVar5 = bVar5 | 0x10;
        }
        if (param_12 == '\0') {
          bVar5 = bVar5 & 0xdf;
        }
        else {
          bVar5 = bVar5 | 0x20;
        }
        if (param_13 == '\0') {
          bVar5 = bVar5 & 0xbf;
        }
        else {
          bVar5 = bVar5 | 0x40;
        }
        FUN_142e72620(plVar3[0x12f],param_2,bVar5 & 0x7f,param_4,param_5,param_6,param_9);
      }
    }
  }
  return;
}



// FUNCTION 142db8550 FUN_142db8550 body=3081 status=ok
// SIG undefined FUN_142db8550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142db8550(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  float *pfVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  float fVar22;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar23 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
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
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auStack_358 [32];
  float *local_338;
  undefined8 local_330;
  undefined4 *local_328;
  undefined8 *local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  float local_308;
  float local_304;
  float local_300;
  float local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  longlong *local_2d8 [2];
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  longlong *local_288;
  float local_280;
  float local_27c;
  float local_278;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined4 local_248 [4];
  undefined1 local_238 [12];
  undefined4 local_22c;
  float local_224;
  float local_220;
  float local_21c;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined2 local_194;
  undefined1 local_192;
  undefined4 local_190;
  undefined1 local_18c;
  undefined4 local_188;
  undefined2 local_184;
  longlong local_160;
  undefined8 local_158;
  longlong local_140;
  undefined8 local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  uVar16 = *(undefined8 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xbf0) +
            (longlong)*(int *)(param_1 + 0x2a8) * 8);
  plVar11 = (longlong *)FUN_142697a40(uVar16);
  if (plVar11 != (longlong *)0x0) {
    lVar17 = (longlong)*(int *)(param_1 + 0x2a8);
    lVar13 = *(longlong *)(param_1 + 0x2d8);
    plVar12 = (longlong *)0x0;
    if (*(char *)(lVar13 + lVar17 * 0x18) == '\0') {
      plVar12 = *(longlong **)(lVar13 + 0x10 + lVar17 * 0x18);
    }
    else {
      iVar10 = *(int *)(lVar13 + 0x10 + lVar17 * 0x18);
      if (iVar10 != -1) {
        plVar12 = (longlong *)
                  FUN_142697a40(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0xbf0) +
                                 (longlong)iVar10 * 8));
      }
    }
    local_288 = (longlong *)0x0;
    (**(code **)(*plVar11 + 0xd0))(plVar11,&local_288,1);
    local_2d8[0] = (longlong *)0x0;
    (**(code **)(*local_288 + 200))(local_288,local_2d8,1);
    (**(code **)(*local_2d8[0] + 0x60))();
    (**(code **)(*local_2d8[0] + 0x40))();
    local_248[0] = 0;
    local_1a0 = 0;
    local_160 = 0;
    local_158 = 0;
    local_140 = 0;
    local_138 = 0;
    local_2f8 = 0.0;
    uStack_2f4 = 0;
    local_194 = 0;
    local_18c = 0;
    local_192 = 0;
    local_188 = 0;
    lVar13 = *(longlong *)(param_1 + 0x120);
    local_198 = 0x10000;
    local_1a8 = 0;
    local_184 = 0x101;
    local_190 = 1;
    if (lVar13 == 0) {
      lVar13 = FUN_1423407b0(param_1);
    }
    uVar14 = (**(code **)(*plVar11 + 0xa0))(plVar11,&local_318);
    P2UTransform(&local_f8,uVar14);
    cVar9 = FUN_1426aaac0(uVar16);
    if ((cVar9 == '\0') || (cVar9 = FBodyInstance::IsValidBodyInstance(uVar16), cVar9 == '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
      if ((lVar17 == 0) || (lVar17 == *(longlong *)(param_1 + 0x330))) {
        if (*(char *)(param_1 + 0x2a4) != '\0') {
          fVar36 = (float)FUN_1428cc5b0(lVar13);
          *(float *)(param_1 + 0x288) = fVar36 * param_2 + *(float *)(param_1 + 0x288);
        }
        uStack_2f4 = *(undefined4 *)(param_1 + 0x290);
        local_2ec = 0;
        fVar27 = param_2 * *(float *)(param_1 + 0x284) + fStack_e4;
        fVar36 = param_2 * 0.5;
        fVar26 = param_2 * *(float *)(param_1 + 0x280) + local_e8;
        fVar58 = param_2 * *(float *)(param_1 + 0x288) + fStack_e0;
        local_2f8 = *(float *)(param_1 + 0x28c);
        local_2f0 = *(undefined4 *)(param_1 + 0x294);
        local_2e8 = local_f8;
        fStack_2e4 = fStack_f4;
        fStack_2e0 = fStack_f0;
        fStack_2dc = fStack_ec;
        local_280 = fVar26;
        local_27c = fVar27;
        local_278 = fVar58;
        pfVar18 = (float *)physx::PxQuat::operator*(&local_2f8,&local_268,&local_2e8);
        fVar39 = fVar36 * *pfVar18 + local_f8;
        fVar42 = fVar36 * pfVar18[1] + fStack_f4;
        fVar22 = fVar36 * pfVar18[2] + fStack_f0;
        fVar54 = fVar36 * pfVar18[3] + fStack_ec;
        fVar36 = SQRT(fVar42 * fVar42 + fVar39 * fVar39 + fVar22 * fVar22 + fVar54 * fVar54);
        if (fVar36 != 0.0) {
          fVar36 = 1.0 / fVar36;
          fVar42 = fVar42 * fVar36;
          fVar39 = fVar36 * fVar39;
          fVar22 = fVar22 * fVar36;
          fVar54 = fVar54 * fVar36;
        }
        local_318 = CONCAT44(fVar42,fVar39);
        uStack_310 = CONCAT44(fVar54,fVar22);
        local_308 = fVar26;
        local_304 = fVar27;
        local_300 = fVar58;
        _guard_xfg_dispatch_icall_nop(local_238,0,0x90);
        local_2e8 = local_e8;
        fStack_2e0 = fStack_e0;
        fStack_2e4 = fStack_e4;
        local_22c = 0x3f800000;
        local_268 = local_f8;
        fStack_264 = fStack_f4;
        fStack_260 = fStack_f0;
        fStack_25c = fStack_ec;
        puVar15 = (undefined8 *)FName::FName(&local_2f8,L"CharacterMesh",1);
        local_320 = &local_1a8;
        local_328 = local_248;
        local_330 = *puVar15;
        local_338 = &local_268;
        cVar9 = FUN_1423577f0(lVar13,local_238,&local_2e8,&local_280);
        if (cVar9 != '\0') {
          puVar15 = (undefined8 *)(**(code **)(*plVar11 + 0xa0))(plVar11,&local_268);
          local_318 = *puVar15;
          uStack_310 = puVar15[1];
          local_308 = local_224;
          *(undefined8 *)(param_1 + 0x280) = _DAT_1468b5d90;
          *(undefined4 *)(param_1 + 0x288) = DAT_1468b5d98;
          local_304 = local_220;
          local_300 = local_21c;
        }
      }
      else {
        lVar13 = FUN_142912e90();
        fVar42 = fRam0000000146b342c8;
        fVar39 = fRam0000000146b342c4;
        fVar36 = _DAT_146b342c0;
        if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        fVar22 = _DAT_1468b5b70;
        fVar54 = fRam00000001468b5b74;
        fVar26 = fRam00000001468b5b78;
        fVar27 = fRam00000001468b5b7c;
        fVar58 = _DAT_1468b5b90;
        fVar46 = fRam00000001468b5b94;
        fVar48 = fRam00000001468b5b98;
        fVar50 = fRam00000001468b5b9c;
        fVar43 = _DAT_1468b5b80;
        fVar59 = fRam00000001468b5b84;
        fVar60 = fRam00000001468b5b88;
        fVar25 = fRam00000001468b5b8c;
        if (bVar8) {
          uVar21 = *(uint *)(lVar17 + 0x230) & _DAT_146b34350;
          uVar24 = *(uint *)(lVar17 + 0x234) & uRam0000000146b34354;
          auVar31._4_4_ = uVar24;
          auVar31._0_4_ = uVar21;
          uVar28 = *(uint *)(lVar17 + 0x238) & uRam0000000146b34358;
          auVar19._12_4_ = *(uint *)(lVar17 + 0x23c) & uRam0000000146b3435c;
          auVar31._8_4_ = uVar28;
          auVar31._12_4_ = auVar19._12_4_;
          auVar32._4_4_ = uVar28;
          auVar32._0_4_ = uVar24;
          auVar32._8_4_ = uVar21;
          auVar32._12_4_ = auVar19._12_4_;
          auVar32 = minps(auVar31,auVar32);
          auVar19._4_4_ = uVar21;
          auVar19._0_4_ = uVar28;
          auVar19._8_4_ = uVar24;
          auVar32 = minps(auVar32,auVar19);
          local_2f8 = auVar32._0_4_;
          fVar22 = *(float *)(lVar17 + 0x210);
          fVar54 = *(float *)(lVar17 + 0x214);
          fVar26 = *(float *)(lVar17 + 0x218);
          fVar27 = *(float *)(lVar17 + 0x21c);
          fVar58 = *(float *)(lVar17 + 0x230);
          fVar46 = *(float *)(lVar17 + 0x234);
          fVar48 = *(float *)(lVar17 + 0x238);
          fVar50 = *(float *)(lVar17 + 0x23c);
          fVar43 = *(float *)(lVar17 + 0x220);
          fVar59 = *(float *)(lVar17 + 0x224);
          fVar60 = *(float *)(lVar17 + 0x228) - local_2f8 * *(float *)(lVar17 + 0x710);
          fVar25 = 0.0;
        }
        iVar10 = *(int *)(*(longlong *)(param_1 + 0x330) + 0x76c);
        pfVar18 = (float *)((longlong)
                            *(int *)((longlong)*(int *)(param_1 + 0x2a8) * 0x100 + 0x28 +
                                    *(longlong *)(param_1 + 0x2f8)) * 0x30 +
                           *(longlong *)
                            (*(longlong *)(param_1 + 0x330) + 0x728 + (longlong)iVar10 * 0x10));
        auVar32 = *(undefined1 (*) [16])(pfVar18 + 8);
        fVar1 = auVar32._0_4_;
        fVar2 = auVar32._4_4_;
        fVar3 = auVar32._8_4_;
        fVar30 = *pfVar18;
        fVar6 = pfVar18[1];
        fVar7 = pfVar18[2];
        fVar41 = pfVar18[3];
        fVar55 = pfVar18[4];
        fVar56 = pfVar18[5];
        fVar57 = pfVar18[6];
        auVar5._4_4_ = fVar46;
        auVar5._0_4_ = fVar58;
        auVar5._8_4_ = fVar48;
        auVar5._12_4_ = fVar50;
        auVar19 = minps(auVar32,auVar5);
        auVar20._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146b34324);
        auVar20._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146b34320);
        auVar20._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146b34328);
        auVar20._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146b3432c);
        iVar10 = movmskps(iVar10 * 2,auVar20);
        if (iVar10 == 0) {
          fVar55 = fVar55 * fVar58;
          fVar56 = fVar56 * fVar46;
          fVar57 = fVar57 * fVar48;
          fVar29 = pfVar18[7] * fVar50;
          local_128 = fVar41 * fVar22 * _DAT_146b34300 + fVar27 * fVar30 +
                      fVar7 * fVar54 * _DAT_146b342f0 + fVar6 * fVar26 * _DAT_146b342e0;
          fStack_124 = fVar7 * fVar22 * fRam0000000146b34304 + fVar27 * fVar6 +
                       fVar41 * fVar54 * fRam0000000146b342f4 +
                       fVar30 * fVar26 * fRam0000000146b342e4;
          fStack_120 = fVar6 * fVar22 * fRam0000000146b34308 + fVar27 * fVar7 +
                       fVar30 * fVar54 * fRam0000000146b342f8 +
                       fVar41 * fVar26 * fRam0000000146b342e8;
          fStack_11c = fVar30 * fVar22 * fRam0000000146b3430c + fVar27 * fVar41 +
                       fVar6 * fVar54 * fRam0000000146b342fc + fVar7 * fVar26 * fRam0000000146b342ec
          ;
          fVar36 = fVar57 * fVar54 - fVar56 * fVar26;
          fVar39 = fVar55 * fVar26 - fVar57 * fVar22;
          fVar42 = fVar56 * fVar22 - fVar55 * fVar54;
          fVar30 = fVar29 * fVar27 - fVar29 * fVar27;
          fVar36 = fVar36 + fVar36;
          fVar39 = fVar39 + fVar39;
          fVar42 = fVar42 + fVar42;
          fVar30 = fVar30 + fVar30;
          local_118._4_4_ = (fVar36 * fVar26 - fVar42 * fVar22) + fVar27 * fVar39 + fVar56 + fVar59;
          local_118._0_4_ = (fVar42 * fVar54 - fVar39 * fVar26) + fVar27 * fVar36 + fVar55 + fVar43;
          fStack_110 = (fVar39 * fVar22 - fVar36 * fVar54) + fVar27 * fVar42 + fVar57 + fVar60;
          fStack_10c = (fVar30 * fVar27 - fVar30 * fVar27) + fVar27 * fVar30 + fVar29 + fVar25;
        }
        else {
          fVar25 = fVar54 + fVar54;
          fVar29 = fVar26 + fVar26;
          fVar33 = (fVar22 + fVar22) * fVar22;
          fVar44 = fVar27 * (fVar22 + fVar22);
          fVar51 = (fVar27 * fVar29 + fVar22 * fVar25) * fVar58;
          fVar52 = (fVar44 + fVar54 * fVar29) * fVar46;
          fVar53 = (fVar27 * fVar25 + fVar22 * fVar29) * fVar48;
          fVar34 = fVar46 * (fVar22 * fVar25 - fVar27 * fVar29);
          fVar37 = fVar48 * (fVar54 * fVar29 - fVar44);
          fVar40 = fVar58 * (fVar22 * fVar29 - fVar27 * fVar25);
          fVar22 = (float)((uint)((_DAT_146b342c0 - (fVar29 * fVar26 + fVar25 * fVar54)) * fVar58) &
                          _DAT_146b342d0);
          fVar26 = (float)((uint)((fRam0000000146b342c4 - (fVar29 * fVar26 + fVar33)) * fVar46) &
                          uRam0000000146b342d4);
          fVar29 = (float)((uint)((fRam0000000146b342c8 - (fVar25 * fVar54 + fVar33)) * fVar48) &
                          uRam0000000146b342d8);
          fVar33 = (float)((uint)((fRam0000000146b342cc - (fVar33 + fVar33)) * fVar50) &
                          uRam0000000146b342dc);
          fVar27 = fVar6 + fVar6;
          fVar25 = fVar7 + fVar7;
          fVar44 = (fVar30 + fVar30) * fVar30;
          fVar54 = fVar41 * (fVar30 + fVar30);
          fVar45 = (fVar41 * fVar25 + fVar30 * fVar27) * fVar1;
          fVar47 = (fVar54 + fVar6 * fVar25) * fVar2;
          fVar49 = (fVar41 * fVar27 + fVar30 * fVar25) * fVar3;
          fVar35 = fVar2 * (fVar30 * fVar27 - fVar41 * fVar25);
          fVar38 = fVar3 * (fVar6 * fVar25 - fVar54);
          fVar41 = fVar1 * (fVar30 * fVar25 - fVar41 * fVar27);
          fVar54 = (float)((uint)((_DAT_146b342c0 - (fVar25 * fVar7 + fVar27 * fVar6)) * fVar1) &
                          _DAT_146b342d0);
          fVar25 = (float)((uint)((fRam0000000146b342c4 - (fVar25 * fVar7 + fVar44)) * fVar2) &
                          uRam0000000146b342d4);
          fVar27 = (float)((uint)((fRam0000000146b342c8 - (fVar27 * fVar6 + fVar44)) * fVar3) &
                          uRam0000000146b342d8);
          fVar30 = (float)((uint)((fRam0000000146b342cc - (fVar44 + fVar44)) * auVar32._12_4_) &
                          uRam0000000146b342dc);
          local_2c8 = fVar54 * fVar22 + fVar45 * fVar34 + fVar41 * fVar53 + fVar30 * fVar43;
          fStack_2c4 = fVar54 * fVar51 + fVar45 * fVar26 + fVar41 * fVar37 + fVar30 * fVar59;
          fStack_2c0 = fVar54 * fVar40 + fVar45 * fVar52 + fVar41 * fVar29 + fVar30 * fVar60;
          fStack_2bc = fVar54 * fVar33 + fVar45 * fVar33 + fVar41 * fVar33 +
                       fVar30 * fRam0000000146b342cc;
          local_2b8 = fVar35 * fVar22 + fVar25 * fVar34 + fVar47 * fVar53 + fVar30 * fVar43;
          fStack_2b4 = fVar35 * fVar51 + fVar25 * fVar26 + fVar47 * fVar37 + fVar30 * fVar59;
          fStack_2b0 = fVar35 * fVar40 + fVar25 * fVar52 + fVar47 * fVar29 + fVar30 * fVar60;
          fStack_2ac = fVar35 * fVar33 + fVar25 * fVar33 + fVar47 * fVar33 +
                       fVar30 * fRam0000000146b342cc;
          local_2a8 = fVar49 * fVar22 + fVar38 * fVar34 + fVar27 * fVar53 + fVar30 * fVar43;
          fStack_2a4 = fVar49 * fVar51 + fVar38 * fVar26 + fVar27 * fVar37 + fVar30 * fVar59;
          fStack_2a0 = fVar49 * fVar40 + fVar38 * fVar52 + fVar27 * fVar29 + fVar30 * fVar60;
          fStack_29c = fVar49 * fVar33 + fVar38 * fVar33 + fVar27 * fVar33 +
                       fVar30 * fRam0000000146b342cc;
          local_298 = fVar55 * fVar22 + fVar56 * fVar34 + fVar57 * fVar53 +
                      fRam0000000146b342cc * fVar43;
          fStack_294 = fVar55 * fVar51 + fVar56 * fVar26 + fVar57 * fVar37 +
                       fRam0000000146b342cc * fVar59;
          fStack_290 = fVar55 * fVar40 + fVar56 * fVar52 + fVar57 * fVar29 +
                       fRam0000000146b342cc * fVar60;
          fStack_28c = fVar55 * fVar33 + fVar56 * fVar33 + fVar57 * fVar33 +
                       fRam0000000146b342cc * fRam0000000146b342cc;
          FMatrix::RemoveScaling(&local_2c8);
          fVar36 = (float)(-(uint)(_DAT_146b34320 <= fVar1 * fVar58) &
                           (_DAT_146b34310 ^ (uint)fVar36) ^ _DAT_146b34310);
          fVar39 = (float)(-(uint)(fRam0000000146b34324 <= fVar2 * fVar46) &
                           (uRam0000000146b34314 ^ (uint)fVar39) ^ uRam0000000146b34314);
          fVar42 = (float)(-(uint)(fRam0000000146b34328 <= fVar3 * fVar48) &
                           (uRam0000000146b34318 ^ (uint)fVar42) ^ uRam0000000146b34318);
          local_2c8 = local_2c8 * fVar36;
          fStack_2c4 = fStack_2c4 * fVar36;
          fStack_2c0 = fStack_2c0 * fVar36;
          fStack_2b4 = fStack_2b4 * fVar39;
          fStack_2b0 = fStack_2b0 * fVar39;
          local_2b8 = local_2b8 * fVar39;
          fStack_2a4 = fStack_2a4 * fVar42;
          fStack_2a0 = fStack_2a0 * fVar42;
          local_2a8 = local_2a8 * fVar42;
          FQuat::FQuat(&local_2e8,&local_2c8);
          local_2f8 = 1e-08;
          auVar23._0_4_ = local_2e8 * local_2e8 + fStack_2e0 * fStack_2e0;
          auVar23._4_4_ = fStack_2e4 * fStack_2e4 + fStack_2dc * fStack_2dc;
          auVar23._8_4_ = fStack_2e0 * fStack_2e0 + local_2e8 * local_2e8;
          auVar23._12_4_ = fStack_2dc * fStack_2dc + fStack_2e4 * fStack_2e4;
          fVar54 = auVar23._4_4_ + auVar23._0_4_;
          fVar26 = auVar23._8_4_ + auVar23._4_4_;
          fVar27 = auVar23._12_4_ + auVar23._8_4_;
          fVar43 = auVar23._0_4_ + auVar23._12_4_;
          auVar4._4_4_ = fVar26;
          auVar4._0_4_ = fVar54;
          auVar4._8_4_ = fVar27;
          auVar4._12_4_ = fVar43;
          auVar19 = rsqrtps(auVar23,auVar4);
          fVar36 = auVar19._0_4_;
          fVar39 = auVar19._4_4_;
          fVar42 = auVar19._8_4_;
          fVar22 = auVar19._12_4_;
          fVar36 = (_DAT_146b342b0 - fVar36 * fVar36 * fVar54 * _DAT_146b342b0) * fVar36 + fVar36;
          fVar39 = (fRam0000000146b342b4 - fVar39 * fVar39 * fVar26 * fRam0000000146b342b4) * fVar39
                   + fVar39;
          fVar42 = (fRam0000000146b342b8 - fVar42 * fVar42 * fVar27 * fRam0000000146b342b8) * fVar42
                   + fVar42;
          fVar22 = (fRam0000000146b342bc - fVar22 * fVar22 * fVar43 * fRam0000000146b342bc) * fVar22
                   + fVar22;
          local_118._4_4_ = fStack_294;
          local_118._0_4_ = local_298;
          fStack_110 = fStack_290;
          local_128 = (float)(((uint)(((_DAT_146b342b0 - fVar36 * fVar36 * fVar54 * _DAT_146b342b0)
                                       * fVar36 + fVar36) * local_2e8) ^ _DAT_146b342a0) &
                              -(uint)(1e-08 <= fVar54) ^ _DAT_146b342a0);
          fStack_124 = (float)(((uint)(((fRam0000000146b342b4 -
                                        fVar39 * fVar39 * fVar26 * fRam0000000146b342b4) * fVar39 +
                                       fVar39) * fStack_2e4) ^ uRam0000000146b342a4) &
                               -(uint)(1e-08 <= fVar26) ^ uRam0000000146b342a4);
          fStack_120 = (float)(((uint)(((fRam0000000146b342b8 -
                                        fVar42 * fVar42 * fVar27 * fRam0000000146b342b8) * fVar42 +
                                       fVar42) * fStack_2e0) ^ uRam0000000146b342a8) &
                               -(uint)(1e-08 <= fVar27) ^ uRam0000000146b342a8);
          fStack_11c = (float)(((uint)(((fRam0000000146b342bc -
                                        fVar22 * fVar22 * fVar43 * fRam0000000146b342bc) * fVar22 +
                                       fVar22) * fStack_2dc) ^ uRam0000000146b342ac) &
                               -(uint)(1e-08 <= fVar43) ^ uRam0000000146b342ac);
          fStack_10c = 0.0;
        }
        fStack_fc = auVar32._12_4_ * fVar50;
        fStack_100 = fVar3 * fVar48;
        fStack_104 = fVar2 * fVar46;
        local_108 = fVar1 * fVar58;
        puVar15 = (undefined8 *)U2PTransform(&local_268,&local_128);
        local_318 = *puVar15;
        uStack_310 = puVar15[1];
        local_308 = *(float *)(puVar15 + 2);
        local_304 = *(float *)((longlong)puVar15 + 0x14);
        local_300 = *(float *)(puVar15 + 3);
      }
      (**(code **)(*plVar12 + 0x1b0))(plVar12,&local_318);
    }
    else {
      *(ulonglong *)(param_1 + 0x250) = CONCAT44(fStack_f4,local_f8);
      *(ulonglong *)(param_1 + 600) = CONCAT44(fStack_ec,fStack_f0);
      *(undefined8 *)(param_1 + 0x270) = local_d8;
      *(undefined8 *)(param_1 + 0x278) = uStack_d0;
      *(ulonglong *)(param_1 + 0x260) = CONCAT44(fStack_e4,local_e8);
      *(ulonglong *)(param_1 + 0x268) = CONCAT44(uStack_dc,fStack_e0);
      lVar13 = *plVar12;
      uVar16 = (**(code **)(*plVar11 + 0xa0))(plVar11,&local_318);
      (**(code **)(lVar13 + 0xa8))(plVar12,uVar16,1);
    }
    if (local_140 != 0) {
      FMemory::Free();
    }
    if (local_160 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142db9160 FUN_142db9160 body=190 status=ok
// SIG undefined FUN_142db9160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142db9160(float *param_1,float *param_2,float param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar9 = param_3 * *param_4 * param_5 + param_2[2];
  param_1[2] = fVar9;
  fVar8 = param_3 * fVar1 * param_5 + *param_2;
  *param_1 = fVar8;
  fVar7 = param_3 * fVar2 * param_5 + param_2[1];
  param_1[1] = fVar7;
  fVar1 = (float)DAT_146b34290;
  fVar2 = DAT_146b34290._4_4_;
  fVar5 = DAT_146b34290._8_4_;
  auVar6._4_4_ = fVar7;
  auVar6._0_4_ = fVar8;
  auVar6._8_4_ = fVar9;
  auVar6._12_4_ = 0;
  auVar6 = divps(auVar6,_DAT_146b34290);
  fVar8 = fVar8 - (float)(int)auVar6._0_4_ * fVar1;
  fVar7 = fVar7 - (float)(int)auVar6._4_4_ * fVar2;
  fVar9 = fVar9 - (float)(int)auVar6._8_4_ * fVar5;
  fVar8 = (float)(((uint)(fVar8 + fVar1) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                 (uint)(fVar8 + fVar1));
  fVar7 = (float)(((uint)(fVar7 + fVar2) ^ (uint)fVar7) & -(uint)(0.0 <= fVar7) ^
                 (uint)(fVar7 + fVar2));
  fVar9 = (float)(((uint)(fVar9 + fVar5) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                 (uint)(fVar9 + fVar5));
  bVar3 = fRam0000000146b34284 < fVar7;
  bVar4 = fRam0000000146b34288 < fVar9;
  *param_1 = (float)(((uint)(fVar8 - fVar1) ^ (uint)fVar8) & -(uint)(_DAT_146b34280 < fVar8) ^
                    (uint)fVar8);
  param_1[2] = (float)(((uint)(fVar9 - fVar5) ^ (uint)fVar9) & -(uint)bVar4 ^ (uint)fVar9);
  param_1[1] = (float)(((uint)(fVar7 - fVar2) ^ (uint)fVar7) & -(uint)bVar3 ^ (uint)fVar7);
  return param_1;
}



// FUNCTION 142db9220 FUN_142db9220 body=28 status=ok
// SIG undefined FUN_142db9220(void)

undefined8 FUN_142db9220(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142dabf50();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}



// FUNCTION 142db9240 FUN_142db9240 body=27 status=ok
// SIG undefined FUN_142db9240(void)

undefined1 FUN_142db9240(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_142dabf50();
  if (puVar1 != (undefined1 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 142db9260 FUN_142db9260 body=113 status=ok
// SIG undefined FUN_142db9260(void)

undefined8 FUN_142db9260(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)UDungeonEventListener::GetPrivateStaticClass();
    plVar3 = param_1;
    do {
      if (plVar3 == plVar1) {
        lVar4 = param_1[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*param_1 + 0x368))(param_1);
          lVar4 = param_1[0x1f];
          if (lVar4 == 0) {
            return 0;
          }
        }
        uVar2 = FUN_142e11920(lVar4,param_2);
        return uVar2;
      }
      plVar3 = (longlong *)plVar3[6];
    } while (plVar3 != (longlong *)0x0);
  }
  return 0;
}



// FUNCTION 142db92e0 FUN_142db92e0 body=136 status=ok
// SIG undefined FUN_142db92e0(void)

void FUN_142db92e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)UDungeonEventListener::GetPrivateStaticClass();
    plVar2 = param_1;
    do {
      if (plVar2 == plVar1) {
        lVar3 = param_1[0x1f];
        if (lVar3 == 0) {
          (**(code **)(*param_1 + 0x368))(param_1);
          lVar3 = param_1[0x1f];
          if (lVar3 == 0) {
            return;
          }
        }
        FUN_142e11970(lVar3,param_2,param_3,param_4);
        return;
      }
      plVar2 = (longlong *)plVar2[6];
    } while (plVar2 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 142db9370 FUN_142db9370 body=59 status=ok
// SIG undefined FUN_142db9370(void)

undefined4 FUN_142db9370(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return *(undefined4 *)(lVar2 + 0x140);
}



// FUNCTION 142db93b0 FUN_142db93b0 body=113 status=ok
// SIG undefined FUN_142db93b0(void)

undefined8 FUN_142db93b0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)UDungeonEventListener::GetPrivateStaticClass();
    plVar3 = param_1;
    do {
      if (plVar3 == plVar1) {
        lVar4 = param_1[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*param_1 + 0x368))(param_1);
          lVar4 = param_1[0x1f];
          if (lVar4 == 0) {
            return 0;
          }
        }
        uVar2 = FUN_142e11d50(lVar4,param_2);
        return uVar2;
      }
      plVar3 = (longlong *)plVar3[6];
    } while (plVar3 != (longlong *)0x0);
  }
  return 0;
}



// FUNCTION 142db9430 FUN_142db9430 body=530 status=ok
// SIG undefined FUN_142db9430(void)

void FUN_142db9430(longlong *param_1,char param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((param_1 != (longlong *)0x0) &&
     ((lVar2 = param_1[0x24], lVar2 != 0 || (lVar2 = FUN_1423407b0(), lVar2 != 0)))) {
    plVar3 = (longlong *)FUN_1426e2530(*(undefined8 *)(lVar2 + 0x218),0);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x358))
                (plVar3,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Physics\\GbxPhysicsSettings.cpp"
                 ,0x3a);
    }
    uVar6 = 0;
    if (param_3 == 0) {
      plVar7 = (longlong *)param_1[0x17e];
      uVar8 = (longlong)(int)param_1[0x17f] & 0x1fffffffffffffff;
      if (plVar7 + (int)param_1[0x17f] < plVar7) {
        uVar8 = uVar6;
      }
      if (uVar8 != 0) {
        do {
          if (*plVar7 != 0) {
            *(undefined1 *)(*plVar7 + 400) = 0;
          }
          plVar7 = plVar7 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar8);
      }
      if (param_2 != '\0') {
        iVar1 = (**(code **)(*param_1 + 0x4f0))(param_1,0xe);
        if (iVar1 == 2) {
          (**(code **)(*param_1 + 0x830))(param_1,0xe,1);
        }
        iVar1 = (**(code **)(*param_1 + 0x4f0))(param_1,0xf);
        if (iVar1 == 2) {
          (**(code **)(*param_1 + 0x830))(param_1,0xf,1);
        }
        (**(code **)(*param_1 + 0x830))(param_1,2);
      }
      (**(code **)(*param_1 + 0x648))(param_1,5);
    }
    else {
      lVar4 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
      if ((lVar4 != 0) && (lVar5 = FUN_142697a40(lVar4), lVar5 != 0)) {
        FUN_142db9650(lVar2,lVar5,param_2 != '\0');
        *(undefined1 *)(lVar4 + 400) = 1;
        if (param_2 != '\0') {
          if (*(char *)(lVar4 + 0x36) == '\x02') {
            FUN_1426a9e30(lVar4,0xe,1);
          }
          if (*(char *)(lVar4 + 0x37) == '\x02') {
            FUN_1426a9e30(lVar4,0xf,1);
          }
          FUN_1426a9e30(lVar4,2);
        }
        if ((*(byte *)(lVar4 + 0x10) & 8) != 0) {
          FUN_1426a9ae0(lVar4,5);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x360))(plVar3);
    }
  }
  return;
}



// FUNCTION 142db9650 FUN_142db9650 body=228 status=ok
// SIG undefined FUN_142db9650(void)

void FUN_142db9650(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  byte local_res8;
  byte local_res9;
  undefined2 local_res10 [4];
  
  plVar1 = (longlong *)FUN_1426e2530(*(undefined8 *)(param_1 + 0x218),0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x358))
              (plVar1,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Physics\\GbxPhysicsSettings.cpp"
               ,0x1b);
  }
  (**(code **)(*param_2 + 0x68))(param_2,param_3);
  (**(code **)(*plVar1 + 0xe8))(plVar1,&local_res8,1,0);
  if ((1e-08 < ABS((float)local_res8 - 1.0)) || (1e-08 < ABS((float)local_res9))) {
    local_res10[0] = 1;
    (**(code **)(*plVar1 + 0xe0))(plVar1,1,0,local_res10);
  }
  (**(code **)(*plVar1 + 0x360))(plVar1);
  return;
}



// FUNCTION 142db9740 FUN_142db9740 body=29 status=ok
// SIG undefined FUN_142db9740(void)

void FUN_142db9740(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  *(undefined1 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x17d) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  return;
}



// FUNCTION 142db9760 FUN_142db9760 body=202 status=ok
// SIG undefined FUN_142db9760(void)

void FUN_142db9760(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_2 != (longlong *)0x0) {
    plVar4 = (longlong *)*param_1;
    plVar1 = plVar4 + (longlong)(int)param_1[1] * 5;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 5) {
      if ((longlong *)*plVar4 == param_2) {
        return;
      }
    }
    FUN_1426d3dd0(&uStack_30);
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x4d0))(param_2);
    iVar2 = (int)param_1[1];
    lVar6 = (longlong)iVar2;
    uStack_30 = *puVar5;
    uStack_28 = puVar5[1];
    uStack_20 = puVar5[2];
    uStack_18 = puVar5[3];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    lVar3 = *param_1;
    puVar5 = (undefined8 *)(lVar3 + lVar6 * 0x28);
    *puVar5 = param_2;
    puVar5[1] = uStack_30;
    puVar5 = (undefined8 *)(lVar3 + 0x10 + lVar6 * 0x28);
    *puVar5 = uStack_28;
    puVar5[1] = uStack_20;
    *(undefined8 *)(lVar3 + 0x20 + lVar6 * 0x28) = uStack_18;
  }
  return;
}



// FUNCTION 142db9830 FUN_142db9830 body=379 status=ok
// SIG undefined FUN_142db9830(void)

void FUN_142db9830(longlong param_1,float param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    if (1e-08 < ABS(*(float *)(param_1 + 0x20))) {
      fVar5 = *(float *)(param_1 + 0x18);
      fVar2 = -fVar5;
      fVar4 = fVar5;
      if (1e-08 < fVar5) {
        fVar4 = fVar2;
        fVar2 = fVar5;
      }
      fVar3 = (param_2 / *(float *)(param_1 + 0x14)) * fVar5 + *(float *)(param_1 + 0x20);
      if ((fVar4 <= fVar3) && (fVar4 = fVar2, fVar3 <= fVar2)) {
        fVar4 = fVar3;
      }
      *(float *)(param_1 + 0x20) = fVar4;
      if ((*(char *)(param_1 + 0x10) == '\0') &&
         (((fVar4 < 1e-08 && (fVar5 < 1e-08)) || ((1e-08 < fVar4 && (1e-08 < fVar5)))))) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        fVar4 = 0.0;
      }
      fVar4 = fVar4 + *(float *)((longlong)param_3 + 4);
      fVar5 = (float)(int)(fVar4 * 0.0027777778) * 360.0;
      if (ABS(fVar4) < ABS(fVar5)) {
        fVar5 = fVar4;
      }
      fVar4 = fVar4 - fVar5;
      if (fVar4 < 0.0) {
        fVar4 = fVar4 + 360.0;
      }
      if (180.0 < fVar4) {
        fVar4 = fVar4 - 360.0;
      }
      *(float *)((longlong)param_3 + 4) = fVar4;
    }
    return;
  }
  local_24 = *(float *)(param_1 + 0x28);
  if (0.1 < ABS(*(float *)((longlong)param_3 + 4) - local_24)) {
    local_28 = 0;
    local_20 = 0;
    puVar1 = (undefined8 *)FMath::RInterpTo(local_18,param_3,&local_28);
    *param_3 = *puVar1;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
    return;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 142db99b0 FUN_142db99b0 body=589 status=ok
// SIG undefined FUN_142db99b0(void)

void FUN_142db99b0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_28;
  longlong local_20 [3];
  
  if (*(char *)(param_1 + 0x340) == '\0') {
    FUN_14288e3d0(param_1 + 0x30,0);
    return;
  }
  if (*DAT_146b34568 != 1) {
    plVar7 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x328));
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar7 + 0x358))
              (plVar7,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Physics\\DynamicPhysicalAnimationComponent.cpp"
               ,0x62c);
    FUN_142da6300(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000142db9bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x360))(plVar7);
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  uVar9 = 0;
  if (((lVar3 == 0) || (*(char *)(lVar3 + 0x5f5) == '\0')) || (*(char *)(lVar3 + 0x5f7) == '\0')) {
LAB_142db9a84:
    if (DAT_146b343dd == '\0') goto LAB_142db9ae6;
  }
  else {
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar5 = *(longlong *)(param_1 + 0x120);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      uVar4 = *(undefined8 *)(lVar5 + 0x30);
    }
    else {
      uVar4 = AActor::GetLevel();
    }
    if (DAT_146b343dd == '\0') {
      FTickFunction::RegisterTickFunction(&DAT_146b343d0,uVar4);
      FTickFunction::AddPrerequisite(&DAT_146b343d0,lVar3,lVar3 + 0x5e8);
      goto LAB_142db9a84;
    }
  }
  FWeakObjectPtr::operator=(&local_res8,param_1);
  lVar3 = (longlong)DAT_146b34420;
  puVar6 = (undefined8 *)operator_new(0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = local_res8;
    *(undefined4 *)((longlong)puVar6 + 0xc) = local_resc;
    LOCK();
    puVar1 = (undefined8 *)(&DAT_146b34430)[lVar3 * 2];
    (&DAT_146b34430)[lVar3 * 2] = puVar6;
    UNLOCK();
    LOCK();
    *puVar1 = puVar6;
    UNLOCK();
  }
  FUN_14288e3d0(&DAT_146b343d0,1);
LAB_142db9ae6:
  FUN_14288e3d0(param_1 + 0x30,0);
  plVar7 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x328));
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x358))
              (plVar7,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Physics\\DynamicPhysicalAnimationComponent.cpp"
               ,0x619);
    uVar10 = uVar9;
    if (0 < *(int *)(param_1 + 0x2e0)) {
      do {
        if (((*(char *)(uVar10 + *(longlong *)(param_1 + 0x2d8)) == '\0') &&
            (plVar2 = *(longlong **)(*(longlong *)(uVar10 + 8 + *(longlong *)(param_1 + 0x2d8)) + 8)
            , plVar2 != (longlong *)0x0)) &&
           (((**(code **)(*plVar2 + 0x30))(plVar2,&local_28,local_20), local_28 == 0 ||
            (local_20[0] == 0)))) {
          FUN_142db53a0(param_1);
          break;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar10 = uVar10 + 0x18;
      } while ((int)uVar8 < *(int *)(param_1 + 0x2e0));
    }
    (**(code **)(*plVar7 + 0x360))(plVar7);
  }
  return;
}



// FUNCTION 142db9c00 FUN_142db9c00 body=53 status=ok
// SIG undefined FUN_142db9c00(void)

void FUN_142db9c00(longlong param_1,undefined4 param_2)

{
  FUN_142357eb0();
  if (*(char *)(param_1 + 0x17b) == '\0') {
    FUN_142dafcd0(param_1,param_2);
  }
  return;
}



// FUNCTION 142db9c40 FUN_142db9c40 body=1180 status=ok
// SIG undefined FUN_142db9c40(void)

void FUN_142db9c40(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 in_stack_ffffffffffffff28;
  uint3 uVar14;
  uint uVar13;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  
  FUN_142357eb0();
  if (((*(longlong *)(param_1 + 0x118) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) &&
     (cVar3 = FUN_142dbf5d0(param_1), cVar3 != '\0')) {
    uVar4 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x298);
    fVar5 = (float)FRichCurve::Eval(uVar4,*(undefined4 *)(param_1 + 0x314),0);
    uVar4 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x218);
    fVar6 = (float)FRichCurve::Eval(uVar4,*(undefined4 *)(param_1 + 0x294),0);
    uVar4 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x198);
    local_a8 = (float)FRichCurve::Eval(uVar4,*(undefined4 *)(param_1 + 0x214),0);
    local_b8 = DAT_1468b5d90;
    fStack_b4 = DAT_1468b5d94;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x168);
    if (lVar1 == 0) {
      local_b0 = DAT_1468b5d98;
    }
    else {
      local_b8 = *(float *)(lVar1 + 0x220);
      fStack_b4 = *(float *)(lVar1 + 0x224);
      local_b0 = *(float *)(lVar1 + 0x228);
    }
    lVar1 = *(longlong *)(param_1 + 0x118);
    local_a8 = local_b8 + *(float *)(param_1 + 0x180) + local_a8;
    local_a4 = fStack_b4 + *(float *)(param_1 + 0x184) + fVar6;
    local_a0 = local_b0 + *(float *)(param_1 + 0x188) + fVar5;
    uVar14 = (uint3)((uint)in_stack_ffffffffffffff28 >> 8);
    if (*(char *)(param_1 + 0x318) == '\0') {
      lVar2 = *(longlong *)(lVar1 + 0x168);
      if (lVar2 == 0) {
        local_b8 = DAT_1468b5d90;
        fStack_b4 = DAT_1468b5d94;
        local_b0 = DAT_1468b5d98;
      }
      else {
        local_b8 = *(float *)(lVar2 + 0x220);
        fStack_b4 = *(float *)(lVar2 + 0x224);
        local_b0 = *(float *)(lVar2 + 0x228);
      }
      fVar10 = local_a8 - local_b8;
      fVar11 = local_a4 - fStack_b4;
      fVar12 = local_a0 - local_b0;
      local_c8 = local_b8;
      fStack_c4 = fStack_b4;
      fVar7 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12;
      fVar5 = fVar10;
      fVar6 = fVar11;
      fVar8 = fVar12;
      if ((fVar7 != 1.0) &&
         (fVar5 = DAT_1468b5d90, fVar6 = DAT_1468b5d94, fVar8 = DAT_1468b5d98, 1e-08 <= fVar7)) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar8 = auVar9._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
        fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
        fVar5 = fVar10 * fVar8;
        fVar6 = fVar11 * fVar8;
        fVar8 = fVar12 * fVar8;
      }
      fVar7 = SQRT((local_a4 - fStack_b4) * (local_a4 - fStack_b4) + fVar10 * fVar10 +
                   (local_a0 - local_b0) * (local_a0 - local_b0));
      if (fVar7 < *(float *)(param_1 + 400) || fVar7 == *(float *)(param_1 + 400)) {
        if (*(float *)(param_1 + 0x194) <= 0.0) {
          *(undefined4 *)(param_1 + 0x31c) = 0x3f800000;
          fVar5 = 1.0;
        }
        else {
          fVar5 = param_2 / *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x31c);
          *(float *)(param_1 + 0x31c) = fVar5;
        }
        if (1.0 <= fVar5) {
          *(undefined1 *)(param_1 + 0x318) = 1;
          fVar5 = 1.0;
          *(undefined4 *)(param_1 + 0x31c) = 0x3f800000;
        }
        uVar13 = 0x3f800000;
        uVar4 = FMath::VInterpTo(&local_c8,&local_b8,&local_a8,fVar5,0x3f800000);
        FUN_14223c850(lVar1,uVar4,1,0,uVar13 & 0xffffff00);
        FUN_142dbebd0(param_1,param_2);
      }
      else {
        fVar7 = *(float *)(param_1 + 0x18c);
        *(undefined4 *)(param_1 + 0x31c) = 0;
        local_c0 = fVar8 * param_2 * fVar7 + local_b0;
        _local_c8 = CONCAT44(fVar6 * param_2 * fVar7 + fStack_b4,fVar5 * param_2 * fVar7 + local_b8)
        ;
        FUN_14223c850(lVar1,&local_c8,1,0,(uint)uVar14 << 8);
      }
    }
    else {
      FUN_14223c850(lVar1,&local_a8,1,0,(uint)uVar14 << 8);
      FUN_142dbebd0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 142dba0e0 FUN_142dba0e0 body=59 status=ok
// SIG undefined FUN_142dba0e0(void)

void FUN_142dba0e0(longlong param_1,undefined4 param_2)

{
  FUN_142357eb0();
  FUN_142dbf2c0(param_1,param_2);
  FUN_142dbf0e0(param_1);
  *(undefined1 *)(param_1 + 0x198) = 0;
  return;
}



// FUNCTION 142dba120 FUN_142dba120 body=760 status=ok
// SIG undefined FUN_142dba120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dba120(longlong param_1,float param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  
  cVar2 = *(char *)(param_1 + 0x1a0);
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x188);
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x168) == 0) {
    return;
  }
  local_88 = 0;
  local_80 = 0.0;
  if (cVar2 == '\x01') {
    local_80 = *(float *)(param_1 + 0x1a4);
    fVar4 = param_2 + *(float *)(param_1 + 0x1a8);
    *(float *)(param_1 + 0x1a8) = fVar4;
    if (local_80 <= fVar4) {
      *(undefined1 *)(param_1 + 0x1a0) = 0;
      param_2 = param_2 - (fVar4 - local_80);
    }
    local_78._0_4_ = (float)*(undefined8 *)(param_1 + 0x1ac);
    local_78._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1ac) >> 0x20);
    local_80 = param_2 / local_80;
    fVar4 = (float)local_78 * local_80;
    fVar6 = local_78._4_4_ * local_80;
    local_80 = *(float *)(param_1 + 0x1b4) * local_80;
  }
  else {
    fVar4 = 0.0;
    fVar6 = 0.0;
    if (cVar2 != '\x02') goto LAB_142dba301;
    fVar4 = param_2 + *(float *)(param_1 + 0x1a8);
    fVar1 = *(float *)(param_1 + 0x1a4);
    *(float *)(param_1 + 0x1a8) = fVar4;
    if (0.0 <= fVar4) {
      if (fVar4 < fVar1) {
        fVar4 = fVar4 / fVar1;
        fVar5 = (3.0 - (fVar4 + fVar4)) * fVar4 * fVar4;
      }
      else {
        fVar5 = 1.0;
      }
    }
    else {
      fVar5 = 0.0;
    }
    local_78._0_4_ = (float)*(undefined8 *)(param_1 + 0x1ac);
    local_78._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1ac) >> 0x20);
    fVar7 = *(float *)(param_1 + 0x1b4) * fVar5;
    fVar4 = (float)local_78 * fVar5 - *(float *)(param_1 + 0x1b8);
    fVar6 = local_78._4_4_ * fVar5 - *(float *)(param_1 + 0x1bc);
    local_80 = fVar7 - *(float *)(param_1 + 0x1c0);
    *(ulonglong *)(param_1 + 0x1b8) = CONCAT44(local_78._4_4_ * fVar5,(float)local_78 * fVar5);
    *(float *)(param_1 + 0x1c0) = fVar7;
    if (fVar1 < *(float *)(param_1 + 0x1a8) || fVar1 == *(float *)(param_1 + 0x1a8)) {
      *(undefined1 *)(param_1 + 0x1a0) = 0;
    }
  }
  local_88 = CONCAT44(fVar6,fVar4);
LAB_142dba301:
  if (*(char *)(param_1 + 0x180) == '\0') {
    local_78 = local_88;
    local_70 = local_80;
    FUN_142221b50(lVar3,&local_78,0,0,0);
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x168);
    *(float *)(lVar3 + 0x1ec) = fVar4 + *(float *)(lVar3 + 0x1ec);
    *(float *)(lVar3 + 0x1f0) = fVar6 + *(float *)(lVar3 + 0x1f0);
    *(float *)(lVar3 + 500) = local_80 + *(float *)(lVar3 + 500);
  }
  if ((*(char *)(param_1 + 0x179) != '\0') && (lVar3 = *(longlong *)(param_1 + 0x198), lVar3 != 0))
  {
    if ((param_2 <= 0.0) || (*(char *)(param_1 + 0x1a0) == '\0')) {
      if (*(char *)(param_1 + 0x17a) == '\0') {
        return;
      }
      *(undefined8 *)(lVar3 + 0x18c) = _DAT_1468b5d90;
      fVar4 = DAT_1468b5d98;
    }
    else {
      param_2 = 1.0 / param_2;
      *(ulonglong *)(lVar3 + 0x18c) = CONCAT44(param_2 * fVar6,param_2 * fVar4);
      fVar4 = param_2 * local_80;
    }
    *(float *)(lVar3 + 0x194) = fVar4;
  }
  return;
}



// FUNCTION 142dba420 FUN_142dba420 body=860 status=ok
// SIG undefined FUN_142dba420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dba420(longlong param_1,float param_2)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  float local_50;
  
  bVar2 = *(byte *)(param_1 + 0x1c4);
  fVar13 = (float)(uint)bVar2;
  if (((bVar2 != 0) && (lVar3 = *(longlong *)(param_1 + 0x188), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x168) != 0)) {
    fVar12 = 0.0;
    fVar15 = 0.0;
    if (bVar2 == 1) {
      local_78 = *(undefined8 *)(param_1 + 0x1d0);
      fVar15 = *(float *)(param_1 + 0x1c8);
      fVar13 = *(float *)(param_1 + 0x1d8);
      uVar4 = local_78;
      fVar12 = param_2 + *(float *)(param_1 + 0x1cc);
      local_70 = fVar13;
      *(float *)(param_1 + 0x1cc) = fVar12;
      if (fVar15 <= fVar12) {
        *(undefined1 *)(param_1 + 0x1c4) = 0;
        param_2 = param_2 - (fVar12 - fVar15);
      }
      local_78._4_4_ = (float)((ulonglong)local_78 >> 0x20);
      param_2 = param_2 / fVar15;
      fVar14 = (float)local_78 * param_2;
      fVar15 = local_78._4_4_ * param_2;
      fVar12 = fVar13 * param_2;
      local_78 = uVar4;
    }
    else {
      fVar14 = 0.0;
      if (bVar2 == 2) {
        param_2 = param_2 + *(float *)(param_1 + 0x1cc);
        local_78 = *(undefined8 *)(param_1 + 0x1d0);
        fVar1 = *(float *)(param_1 + 0x1c8);
        uVar4 = local_78;
        local_70 = *(float *)(param_1 + 0x1d8);
        *(float *)(param_1 + 0x1cc) = param_2;
        if (0.0 <= param_2) {
          if (param_2 < fVar1) {
            param_2 = param_2 / fVar1;
            fVar10 = (3.0 - (param_2 + param_2)) * param_2 * param_2;
          }
          else {
            fVar10 = 1.0;
          }
        }
        else {
          fVar10 = 0.0;
        }
        local_78._4_4_ = (float)((ulonglong)local_78 >> 0x20);
        fVar13 = *(float *)(param_1 + 0x1d8) * fVar10;
        fVar14 = (float)local_78 * fVar10 - *(float *)(param_1 + 0x1dc);
        fVar15 = local_78._4_4_ * fVar10 - *(float *)(param_1 + 0x1e0);
        local_50 = fVar13;
        fVar12 = fVar13 - *(float *)(param_1 + 0x1e4);
        *(ulonglong *)(param_1 + 0x1dc) = CONCAT44(local_78._4_4_ * fVar10,(float)local_78 * fVar10)
        ;
        *(float *)(param_1 + 0x1e4) = fVar13;
        local_78 = uVar4;
        if (fVar1 < *(float *)(param_1 + 0x1cc) || fVar1 == *(float *)(param_1 + 0x1cc)) {
          *(undefined1 *)(param_1 + 0x1c4) = 0;
        }
      }
    }
    if (*(char *)(param_1 + 0x17c) != '\0') {
      fVar12 = 0.0;
      fVar14 = 0.0;
    }
    cVar7 = *(char *)(param_1 + 0x180);
    lVar3 = *(longlong *)(lVar3 + 0x168);
    if (cVar7 == '\0') {
      cVar7 = '\0';
      fStack_60 = (float)DAT_1468b5da8;
      local_68 = DAT_1468b5da0;
      if (lVar3 != 0) {
        fVar1 = *(float *)(lVar3 + 0x210);
        local_68 = *(undefined8 *)(lVar3 + 0x210);
        fStack_60 = *(float *)(lVar3 + 0x218);
        fStack_5c = *(float *)(lVar3 + 0x21c);
        auVar9._4_4_ = -(uint)(*(float *)(lVar3 + 0x254) != *(float *)(lVar3 + 0x214));
        auVar9._0_4_ = -(uint)(*(float *)(lVar3 + 0x250) != fVar1);
        auVar9._8_4_ = -(uint)(*(float *)(lVar3 + 600) != fStack_60);
        auVar9._12_4_ = -(uint)(*(float *)(lVar3 + 0x25c) != fStack_5c);
        iVar5 = movmskps(fVar13,auVar9);
        if (iVar5 != 0) {
          *(float *)(lVar3 + 0x250) = fVar1;
          *(float *)(lVar3 + 0x254) = *(float *)(lVar3 + 0x214);
          *(float *)(lVar3 + 600) = fStack_60;
          *(float *)(lVar3 + 0x25c) = fStack_5c;
          puVar6 = (undefined8 *)FQuat::Rotator(&local_68,&local_58,0);
          *(undefined8 *)(lVar3 + 0x260) = *puVar6;
          *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(puVar6 + 1);
          cVar7 = *(char *)(param_1 + 0x180);
        }
        fStack_60 = (float)*(undefined4 *)(lVar3 + 0x268);
        local_68 = *(undefined8 *)(lVar3 + 0x260);
      }
      local_50 = fStack_60;
      puVar6 = &local_58;
      local_58 = local_68;
    }
    else {
      local_78 = *(undefined8 *)(lVar3 + 0x1f8);
      local_70 = (float)*(undefined4 *)(lVar3 + 0x200);
      puVar6 = &local_78;
    }
    local_50 = *(float *)(puVar6 + 1);
    fVar15 = fVar15 + (float)((ulonglong)*puVar6 >> 0x20);
    fVar14 = (float)*puVar6 + fVar14;
    fVar13 = (float)DAT_146b34290;
    fVar1 = DAT_146b34290._4_4_;
    fVar10 = DAT_146b34290._8_4_;
    auVar8._4_4_ = fVar15;
    auVar8._0_4_ = fVar14;
    auVar8._8_4_ = fVar12 + local_50;
    auVar8._12_4_ = 0;
    auVar9 = divps(auVar8,_DAT_146b34290);
    fVar14 = fVar14 - (float)(int)auVar9._0_4_ * fVar13;
    fVar15 = fVar15 - (float)(int)auVar9._4_4_ * fVar1;
    fVar11 = (fVar12 + local_50) - (float)(int)auVar9._8_4_ * fVar10;
    fVar12 = (float)(((uint)(fVar14 + fVar13) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                    (uint)(fVar14 + fVar13));
    fVar15 = (float)(((uint)(fVar15 + fVar1) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar15 + fVar1));
    local_70 = (float)(((uint)(fVar11 + fVar10) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar10));
    local_70 = (float)(((uint)(local_70 - fVar10) ^ (uint)local_70) &
                       -(uint)(fRam0000000146b34288 < local_70) ^ (uint)local_70);
    local_78 = CONCAT44(((uint)(fVar15 - fVar1) ^ (uint)fVar15) &
                        -(uint)(fRam0000000146b34284 < fVar15) ^ (uint)fVar15,
                        ((uint)(fVar12 - fVar13) ^ (uint)fVar12) & -(uint)(_DAT_146b34280 < fVar12)
                        ^ (uint)fVar12);
    FUN_142db7190(param_1,&local_78,cVar7);
  }
  return;
}



// FUNCTION 142dba780 FUN_142dba780 body=111 status=ok
// SIG undefined FUN_142dba780(void)

void FUN_142dba780(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x2e0) & 2) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x2f0);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x2f8) * 0xe;
    if (plVar1 != plVar2) {
      while (*plVar1 != param_2) {
        plVar1 = plVar1 + 0xe;
        if (plVar1 == plVar2) {
          return;
        }
      }
      if (0 < (int)plVar1[0xd]) {
        plVar2 = (longlong *)plVar1[0xc];
        if ((longlong *)plVar1[0xc] == (longlong *)0x0) {
          plVar2 = plVar1 + 10;
        }
        FUN_142db7230(param_1,*plVar2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142dba7f0 FUN_142dba7f0 body=3477 status=ok
// SIG undefined FUN_142dba7f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dba7f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong lVar20;
  float *pfVar21;
  byte bVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  void *_Dst;
  longlong *plVar25;
  undefined1 *puVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  void *pvVar29;
  void *pvVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar38;
  undefined1 auVar37 [16];
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
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  int local_2c0;
  undefined8 *local_2b8;
  longlong *local_2b0;
  int local_2a8;
  int local_2a4;
  longlong *local_2a0;
  void *local_298;
  int local_290;
  int local_28c;
  undefined8 local_288;
  undefined8 *local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
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
  undefined1 local_218 [8];
  undefined8 uStack_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [16];
  ulonglong local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  longlong local_1d8 [24];
  ulonglong local_118;
  int local_110;
  undefined4 local_10c;
  undefined1 local_108 [48];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  if ((((*(byte *)(param_1 + 0x5c) & 1) == 0) && (param_1[0x23] != 0)) &&
     ((param_1[0x24] != 0 || (lVar17 = FUN_1423407b0(), lVar17 != 0)))) {
    lVar17 = param_1[0x24];
    if (lVar17 == 0) {
      lVar17 = FUN_1423407b0(param_1);
    }
    cVar14 = UWorld::IsGameWorld(lVar17);
    if (cVar14 != '\0') {
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 0;
      lVar17 = 0;
      puVar26 = (undefined1 *)0x0;
      if (param_1[0x23] != 0) {
        FUN_142d96c20(param_1[0x23],local_1f8,0);
        lVar17 = param_1[0x23];
        puVar26 = (undefined1 *)(ulonglong)local_1e0;
      }
      puVar23 = local_1f8;
      if (local_1e8 != 0) {
        puVar23 = (undefined1 *)0x0;
      }
      local_2c8 = (longlong *)((ulonglong)puVar23 | local_1e8);
      plVar18 = local_2c8 + (int)puVar26;
      local_2a0 = plVar18;
      if (local_2c8 != plVar18) {
        do {
          uVar31 = 0;
          puVar24 = (undefined8 *)*local_2c8;
          if (puVar24 != (undefined8 *)0x0) {
            bVar22 = 0;
            if (puVar24 == param_1) {
              bVar22 = 2;
            }
            *(byte *)(puVar24 + 0x5c) = bVar22 | *(byte *)(puVar24 + 0x5c) & 0xfd | 1;
            iVar15 = FUN_14233f450(puVar24);
            if (iVar15 == 3) {
              FUN_142350b20(puVar24,*(byte *)(puVar24 + 0x5c) >> 1 & 1);
            }
            puVar27 = param_1 + 0x66;
            iVar15 = *(int *)(param_1 + 0x6a);
            lVar17 = (longlong)iVar15;
            *(int *)(param_1 + 0x6a) = iVar15 + 1;
            if (*(int *)((longlong)param_1 + 0x354) < iVar15 + 1) {
              TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>::ResizeGrow
                        (puVar27,iVar15);
            }
            puVar19 = (undefined8 *)param_1[0x69];
            if ((undefined8 *)param_1[0x69] == (undefined8 *)0x0) {
              puVar19 = puVar27;
            }
            puVar19[lVar17 * 3] = 0;
            puVar19[lVar17 * 3 + 1] = 0;
            puVar19[lVar17 * 3 + 2] = 0;
            puVar19 = (undefined8 *)param_1[0x69];
            if ((undefined8 *)param_1[0x69] == (undefined8 *)0x0) {
              puVar19 = puVar27;
            }
            puVar19 = puVar19 + lVar17 * 3;
            *puVar19 = puVar24[3];
            plVar18 = (longlong *)puVar24[0x34];
            puVar27 = (undefined8 *)((longlong)*(int *)(puVar24 + 0x35) & 0x1fffffffffffffff);
            if (plVar18 + *(int *)(puVar24 + 0x35) < plVar18) {
              puVar27 = (undefined8 *)uVar31;
            }
            local_2b8 = puVar19;
            local_280 = puVar27;
            if (puVar27 != (undefined8 *)0x0) {
              do {
                lVar17 = *plVar18;
                if ((lVar17 != 0) && (*(longlong *)(lVar17 + 0x118) == param_1[0x23])) {
                  iVar15 = *(int *)(puVar19 + 2);
                  uVar1 = *(undefined8 *)(lVar17 + 0x18);
                  *(int *)(puVar19 + 2) = iVar15 + 1;
                  if (*(int *)((longlong)puVar19 + 0x14) < iVar15 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (puVar19 + 1,iVar15);
                    puVar27 = local_280;
                  }
                  *(undefined8 *)(puVar19[1] + (longlong)iVar15 * 8) = uVar1;
                }
                plVar18 = plVar18 + 1;
                uVar31 = uVar31 + 1;
              } while ((undefined8 *)uVar31 != puVar27);
            }
            puVar27 = local_2b8;
            iVar15 = *(int *)(param_1 + 0x65);
            *(int *)(param_1 + 0x65) = iVar15 + 1;
            if (*(int *)((longlong)param_1 + 0x32c) < iVar15 + 1) {
              TArray<FSlateCachedClipState,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>::
              ResizeGrow(param_1 + 0x62,iVar15);
            }
            puVar19 = (undefined8 *)param_1[100];
            if ((undefined8 *)param_1[100] == (undefined8 *)0x0) {
              puVar19 = param_1 + 0x62;
            }
            uVar1 = puVar24[0x5a];
            puVar19[(longlong)iVar15 * 2] = *puVar27;
            puVar19[(longlong)iVar15 * 2 + 1] = uVar1;
            plVar18 = local_2a0;
          }
          local_2c8 = local_2c8 + 1;
        } while (local_2c8 != plVar18);
        lVar17 = param_1[0x23];
      }
      plVar18 = (longlong *)0x0;
      local_2b0 = (longlong *)0x0;
      local_118 = 0;
      local_110 = 0;
      local_2c0 = 0;
      local_2a4 = 0;
      local_10c = 0;
      if (lVar17 != 0) {
        FUN_140749cd0(lVar17,local_1d8,0);
      }
      plVar28 = local_1d8;
      if (local_118 != 0) {
        plVar28 = plVar18;
      }
      local_280 = (undefined8 *)((ulonglong)plVar28 | local_118);
      plVar28 = local_280 + local_110;
      iVar15 = 0;
      local_2c8 = plVar28;
      if (local_280 != plVar28) {
        do {
          iVar15 = 0;
          local_2b8 = (undefined8 *)*local_280;
          if (local_2b8 == (undefined8 *)0x0) goto LAB_142dbb4b7;
          puVar24 = (undefined8 *)local_2b8[0x32];
          plVar18 = local_2b0;
          if ((puVar24 != (undefined8 *)0x0) && (puVar24[0x23] == param_1[0x23])) {
            local_298 = (void *)0x0;
            local_28c = 0;
            local_288 = 0;
            puVar27 = local_2b8;
            iVar16 = iVar15;
            while (puVar33 = puVar27, puVar19 = local_2b8, puVar27 = (undefined8 *)puVar33[0x32],
                  puVar27 != (undefined8 *)0x0) {
              lVar17 = ATroiCaoGateActor::GetPrivateStaticClass();
              if ((*(int *)(puVar27[2] + 0x90) < *(int *)(lVar17 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(puVar27[2] + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8) !=
                  lVar17 + 0x88)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                if (iVar16 == 0) {
                  local_288 = puVar27[0x5b];
                }
                uVar1 = puVar33[3];
                uVar2 = puVar27[3];
                local_290 = iVar16 + 1;
                local_2a0 = (longlong *)CONCAT44(local_2a0._4_4_,iVar16);
                if (iVar15 < local_290) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_298);
                  iVar16 = (int)local_2a0;
                  iVar15 = local_28c;
                }
                puVar19 = (undefined8 *)((longlong)iVar16 * 0x10 + (longlong)local_298);
                *puVar19 = uVar2;
                puVar19[1] = uVar1;
                iVar16 = local_290;
              }
            }
            if ((iVar16 != 0) ||
               (cVar14 = FUN_142d97060(local_2b8), pvVar30 = local_298, cVar14 != '\0')) {
              if ((puVar19 != param_1) &&
                 (((*(byte *)(puVar19 + 0x17) & 8) != 0 &&
                  (iVar15 = FUN_14233f450(param_1), iVar15 == 3)))) {
                FUN_142350b20(puVar19,0);
              }
              if ((puVar19 != *(undefined8 **)(param_1[0x23] + 0x168)) &&
                 ((lVar17 = puVar19[2], lVar20 = FUN_1429ff160(), puVar19 = local_2b8,
                  lVar17 == lVar20 ||
                  (lVar17 = local_2b8[2], lVar20 = ATroiCaoGateActor::GetPrivateStaticClass(),
                  lVar17 == lVar20)))) {
                lVar17 = (longlong)local_2c0;
                local_2c0 = local_2c0 + 1;
                local_2a8 = local_2c0;
                if (local_2a4 < local_2c0) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_2b0);
                }
                plVar18 = local_2b0;
                local_2b0[lVar17] = (longlong)puVar19;
                plVar28 = local_2c8;
                local_2c0 = local_2a8;
                if (local_298 != (void *)0x0) {
                  FMemory::Free(local_298);
                  plVar28 = local_2c8;
                }
                goto LAB_142dbacd7;
              }
              FUN_14238d0c0(puVar19,&local_228);
              do {
                puVar27 = puVar24;
                puVar24 = puVar27;
                if ((puVar27 == *(undefined8 **)(param_1[0x23] + 0x168)) ||
                   ((lVar17 = puVar27[2], lVar20 = FUN_1429ff160(), lVar17 != lVar20 &&
                    (lVar17 = puVar27[2], lVar20 = ATroiCaoGateActor::GetPrivateStaticClass(),
                    lVar17 != lVar20)))) break;
                pfVar21 = (float *)FUN_14238d0c0(puVar27,local_108);
                fVar13 = fStack_1fc;
                fVar12 = fStack_200;
                fVar11 = fStack_204;
                fVar10 = local_208;
                fVar48 = fRam0000000146b34328;
                fVar46 = fRam0000000146b34324;
                fVar39 = _DAT_146b34320;
                fVar67 = fRam0000000146b342c8;
                fVar66 = fRam0000000146b342c4;
                fVar65 = _DAT_146b342c0;
                auVar8._4_4_ = fStack_204;
                auVar8._0_4_ = local_208;
                auVar8._8_4_ = fStack_200;
                auVar8._12_4_ = fStack_1fc;
                auVar34 = *(undefined1 (*) [16])(pfVar21 + 8);
                fVar3 = auVar34._0_4_;
                fVar4 = auVar34._4_4_;
                fVar5 = auVar34._8_4_;
                fVar6 = auVar34._12_4_;
                auVar34 = minps(auVar8,auVar34);
                auVar35._4_4_ = -(uint)(auVar34._4_4_ < fRam0000000146b34324);
                auVar35._0_4_ = -(uint)(auVar34._0_4_ < _DAT_146b34320);
                auVar35._8_4_ = -(uint)(auVar34._8_4_ < fRam0000000146b34328);
                auVar35._12_4_ = -(uint)(auVar34._12_4_ < fRam0000000146b3432c);
                iVar15 = movmskps((int)puVar24,auVar35);
                if (iVar15 == 0) {
                  fVar65 = *pfVar21;
                  fVar66 = pfVar21[1];
                  fVar67 = pfVar21[2];
                  fVar39 = pfVar21[3];
                  fVar47 = fVar3 * (float)local_218._0_4_;
                  fVar49 = fVar4 * (float)local_218._4_4_;
                  uStack_210._0_4_ = fVar5 * (float)uStack_210;
                  uStack_210._4_4_ = fVar6 * uStack_210._4_4_;
                  fVar38 = fVar65 * fStack_224;
                  fVar44 = fVar65 * local_228;
                  fVar36 = fVar66 * local_228;
                  fVar42 = fVar66 * fStack_224;
                  fVar46 = fVar67 * local_228;
                  fVar48 = fVar67 * fStack_220;
                  local_228 = fVar65 * fStack_21c * _DAT_146b34300 + local_228 * fVar39 +
                              fVar66 * fStack_220 * _DAT_146b342f0 +
                              fVar67 * fStack_224 * _DAT_146b342e0;
                  fStack_224 = fVar65 * fStack_220 * fRam0000000146b34304 + fStack_224 * fVar39 +
                               fVar66 * fStack_21c * fRam0000000146b342f4 +
                               fVar46 * fRam0000000146b342e4;
                  fStack_220 = fVar38 * fRam0000000146b34308 + fStack_220 * fVar39 +
                               fVar36 * fRam0000000146b342f8 +
                               fVar67 * fStack_21c * fRam0000000146b342e8;
                  fStack_21c = fVar44 * fRam0000000146b3430c + fStack_21c * fVar39 +
                               fVar42 * fRam0000000146b342fc + fVar48 * fRam0000000146b342ec;
                  fVar46 = (float)uStack_210 * fVar66 - fVar49 * fVar67;
                  fVar48 = fVar47 * fVar67 - (float)uStack_210 * fVar65;
                  fVar36 = fVar49 * fVar65 - fVar47 * fVar66;
                  fVar42 = uStack_210._4_4_ * fVar39 - uStack_210._4_4_ * fVar39;
                  fVar46 = fVar46 + fVar46;
                  fVar48 = fVar48 + fVar48;
                  fVar36 = fVar36 + fVar36;
                  fVar42 = fVar42 + fVar42;
                  local_218._4_4_ =
                       (fVar46 * fVar67 - fVar36 * fVar65) + fVar48 * fVar39 + fVar49 + pfVar21[5];
                  local_218._0_4_ =
                       (fVar36 * fVar66 - fVar48 * fVar67) + fVar46 * fVar39 + fVar47 + pfVar21[4];
                  uStack_210._0_4_ =
                       (fVar48 * fVar65 - fVar46 * fVar66) + fVar36 * fVar39 + (float)uStack_210 +
                       pfVar21[6];
                  uStack_210._4_4_ =
                       (fVar42 * fVar39 - fVar42 * fVar39) + fVar42 * fVar39 + uStack_210._4_4_ +
                       pfVar21[7];
                }
                else {
                  fVar36 = *pfVar21;
                  fVar42 = pfVar21[1];
                  fVar38 = pfVar21[2];
                  fVar44 = pfVar21[3];
                  fVar47 = pfVar21[4];
                  fVar49 = pfVar21[5];
                  fVar7 = pfVar21[6];
                  fVar40 = fVar42 + fVar42;
                  fVar43 = fVar38 + fVar38;
                  fVar62 = fVar3 * local_208;
                  fVar63 = fVar4 * fStack_204;
                  fVar64 = fVar5 * fStack_200;
                  fVar45 = (fVar36 + fVar36) * fVar36;
                  fVar41 = (fVar36 + fVar36) * fVar44;
                  fVar50 = fVar4 * (fVar40 * fVar36 - fVar43 * fVar44);
                  fVar52 = fVar5 * (fVar43 * fVar42 - fVar41);
                  fVar54 = fVar3 * (fVar43 * fVar36 - fVar40 * fVar44);
                  fVar59 = (fVar40 * fVar36 + fVar43 * fVar44) * fVar3;
                  fVar60 = (fVar43 * fVar42 + fVar41) * fVar4;
                  fVar61 = (fVar43 * fVar36 + fVar40 * fVar44) * fVar5;
                  fVar36 = (float)((uint)((_DAT_146b342c0 - (fVar43 * fVar38 + fVar40 * fVar42)) *
                                         fVar3) & _DAT_146b342d0);
                  fVar38 = (float)((uint)((fRam0000000146b342c4 - (fVar43 * fVar38 + fVar45)) *
                                         fVar4) & uRam0000000146b342d4);
                  fVar40 = (float)((uint)((fRam0000000146b342c8 - (fVar40 * fVar42 + fVar45)) *
                                         fVar5) & uRam0000000146b342d8);
                  fVar43 = (float)((uint)((fRam0000000146b342cc - (fVar45 + fVar45)) * fVar6) &
                                  uRam0000000146b342dc);
                  fVar41 = fStack_224 + fStack_224;
                  fVar44 = fStack_220 + fStack_220;
                  fVar45 = local_228 * (local_228 + local_228);
                  fVar42 = (local_228 + local_228) * fStack_21c;
                  fVar56 = (fVar44 * fStack_21c + fVar41 * local_228) * local_208;
                  fVar57 = (fVar42 + fVar44 * fStack_224) * fStack_204;
                  fVar58 = (fVar41 * fStack_21c + fVar44 * local_228) * fStack_200;
                  fVar51 = fStack_204 * (fVar41 * local_228 - fVar44 * fStack_21c);
                  fVar53 = fStack_200 * (fVar44 * fStack_224 - fVar42);
                  fVar55 = local_208 * (fVar44 * local_228 - fVar41 * fStack_21c);
                  fVar42 = (float)((uint)((_DAT_146b342c0 -
                                          (fStack_220 * fVar44 + fStack_224 * fVar41)) * local_208)
                                  & _DAT_146b342d0);
                  fVar44 = (float)((uint)((fRam0000000146b342c4 - (fStack_220 * fVar44 + fVar45)) *
                                         fStack_204) & uRam0000000146b342d4);
                  fVar41 = (float)((uint)((fRam0000000146b342c8 - (fStack_224 * fVar41 + fVar45)) *
                                         fStack_200) & uRam0000000146b342d8);
                  fVar45 = (float)((uint)((fRam0000000146b342cc - (fVar45 + fVar45)) * fStack_1fc) &
                                  uRam0000000146b342dc);
                  local_278 = fVar56 * fVar50 + fVar42 * fVar36 + fVar55 * fVar61 + fVar45 * fVar47;
                  fStack_274 = fVar56 * fVar38 + fVar42 * fVar59 + fVar55 * fVar52 + fVar45 * fVar49
                  ;
                  fStack_270 = fVar56 * fVar60 + fVar42 * fVar54 + fVar55 * fVar40 + fVar45 * fVar7;
                  fStack_26c = fVar56 * fVar43 + fVar42 * fVar43 + fVar55 * fVar43 +
                               fVar45 * fRam0000000146b342cc;
                  local_268 = fVar44 * fVar50 + fVar51 * fVar36 + fVar57 * fVar61 + fVar45 * fVar47;
                  fStack_264 = fVar44 * fVar38 + fVar51 * fVar59 + fVar57 * fVar52 + fVar45 * fVar49
                  ;
                  fStack_260 = fVar44 * fVar60 + fVar51 * fVar54 + fVar57 * fVar40 + fVar45 * fVar7;
                  fStack_25c = fVar44 * fVar43 + fVar51 * fVar43 + fVar57 * fVar43 +
                               fVar45 * fRam0000000146b342cc;
                  local_258 = fVar53 * fVar50 + fVar58 * fVar36 + fVar41 * fVar61 + fVar45 * fVar47;
                  fStack_254 = fVar53 * fVar38 + fVar58 * fVar59 + fVar41 * fVar52 + fVar45 * fVar49
                  ;
                  fStack_250 = fVar53 * fVar60 + fVar58 * fVar54 + fVar41 * fVar40 + fVar45 * fVar7;
                  fStack_24c = fVar53 * fVar43 + fVar58 * fVar43 + fVar41 * fVar43 +
                               fVar45 * fRam0000000146b342cc;
                  local_248 = (float)local_218._4_4_ * fVar50 + (float)local_218._0_4_ * fVar36 +
                              (float)uStack_210 * fVar61 + fRam0000000146b342cc * fVar47;
                  fStack_244 = (float)local_218._4_4_ * fVar38 + (float)local_218._0_4_ * fVar59 +
                               (float)uStack_210 * fVar52 + fRam0000000146b342cc * fVar49;
                  fStack_240 = (float)local_218._4_4_ * fVar60 + (float)local_218._0_4_ * fVar54 +
                               (float)uStack_210 * fVar40 + fRam0000000146b342cc * fVar7;
                  fStack_23c = (float)local_218._4_4_ * fVar43 + (float)local_218._0_4_ * fVar43 +
                               (float)uStack_210 * fVar43 +
                               fRam0000000146b342cc * fRam0000000146b342cc;
                  FMatrix::RemoveScaling(&local_278);
                  fVar65 = (float)(-(uint)(fVar39 <= fVar62) & (_DAT_146b34310 ^ (uint)fVar65) ^
                                  _DAT_146b34310);
                  fVar66 = (float)(-(uint)(fVar46 <= fVar63) & (uRam0000000146b34314 ^ (uint)fVar66)
                                  ^ uRam0000000146b34314);
                  fVar67 = (float)(-(uint)(fVar48 <= fVar64) & (uRam0000000146b34318 ^ (uint)fVar67)
                                  ^ uRam0000000146b34318);
                  local_278 = local_278 * fVar65;
                  fStack_270 = fStack_270 * fVar65;
                  fStack_274 = fStack_274 * fVar65;
                  fStack_260 = fStack_260 * fVar66;
                  fStack_264 = fStack_264 * fVar66;
                  local_268 = local_268 * fVar66;
                  fStack_250 = fStack_250 * fVar67;
                  local_258 = local_258 * fVar67;
                  fStack_254 = fStack_254 * fVar67;
                  FQuat::FQuat(&local_238,&local_278);
                  local_2a0 = (longlong *)CONCAT44(local_2a0._4_4_,0x322bcc77);
                  auVar37._0_4_ = local_238 * local_238 + fStack_230 * fStack_230;
                  auVar37._4_4_ = fStack_234 * fStack_234 + fStack_22c * fStack_22c;
                  auVar37._8_4_ = fStack_230 * fStack_230 + local_238 * local_238;
                  auVar37._12_4_ = fStack_22c * fStack_22c + fStack_234 * fStack_234;
                  fVar46 = auVar37._4_4_ + auVar37._0_4_;
                  fVar48 = auVar37._8_4_ + auVar37._4_4_;
                  fVar36 = auVar37._12_4_ + auVar37._8_4_;
                  fVar42 = auVar37._0_4_ + auVar37._12_4_;
                  auVar34._4_4_ = fVar48;
                  auVar34._0_4_ = fVar46;
                  auVar34._8_4_ = fVar36;
                  auVar34._12_4_ = fVar42;
                  auVar34 = rsqrtps(auVar37,auVar34);
                  fVar65 = auVar34._0_4_;
                  fVar66 = auVar34._4_4_;
                  fVar67 = auVar34._8_4_;
                  fVar39 = auVar34._12_4_;
                  fVar65 = (_DAT_146b342b0 - fVar65 * fVar65 * fVar46 * _DAT_146b342b0) * fVar65 +
                           fVar65;
                  fVar66 = (fRam0000000146b342b4 - fVar66 * fVar66 * fVar48 * fRam0000000146b342b4)
                           * fVar66 + fVar66;
                  fVar67 = (fRam0000000146b342b8 - fVar67 * fVar67 * fVar36 * fRam0000000146b342b8)
                           * fVar67 + fVar67;
                  fVar39 = (fRam0000000146b342bc - fVar39 * fVar39 * fVar42 * fRam0000000146b342bc)
                           * fVar39 + fVar39;
                  local_218._4_4_ = fStack_244;
                  local_218._0_4_ = local_248;
                  uStack_210._0_4_ = fStack_240;
                  local_238 = (float)(((uint)(((_DAT_146b342b0 -
                                               fVar65 * fVar65 * fVar46 * _DAT_146b342b0) * fVar65 +
                                              fVar65) * local_238) ^ _DAT_146b342a0) &
                                      -(uint)(1e-08 <= fVar46) ^ _DAT_146b342a0);
                  fStack_234 = (float)(((uint)(((fRam0000000146b342b4 -
                                                fVar66 * fVar66 * fVar48 * fRam0000000146b342b4) *
                                                fVar66 + fVar66) * fStack_234) ^
                                       uRam0000000146b342a4) & -(uint)(1e-08 <= fVar48) ^
                                      uRam0000000146b342a4);
                  fStack_230 = (float)(((uint)(((fRam0000000146b342b8 -
                                                fVar67 * fVar67 * fVar36 * fRam0000000146b342b8) *
                                                fVar67 + fVar67) * fStack_230) ^
                                       uRam0000000146b342a8) & -(uint)(1e-08 <= fVar36) ^
                                      uRam0000000146b342a8);
                  fStack_22c = (float)(((uint)(((fRam0000000146b342bc -
                                                fVar39 * fVar39 * fVar42 * fRam0000000146b342bc) *
                                                fVar39 + fVar39) * fStack_22c) ^
                                       uRam0000000146b342ac) & -(uint)(1e-08 <= fVar42) ^
                                      uRam0000000146b342ac);
                  uStack_210._4_4_ = 0.0;
                  local_228 = local_238;
                  fStack_224 = fStack_234;
                  fStack_220 = fStack_230;
                  fStack_21c = fStack_22c;
                }
                fStack_1fc = fVar6 * fVar13;
                fStack_200 = fVar5 * fVar12;
                fStack_204 = fVar4 * fVar11;
                local_208 = fVar3 * fVar10;
                puVar24 = (undefined8 *)puVar27[0x32];
                puVar19 = puVar27;
              } while (puVar24 != (undefined8 *)0x0);
              plVar18 = param_1 + 0x5e;
              iVar15 = *(int *)(param_1 + 0x5f);
              *(int *)(param_1 + 0x5f) = iVar15 + 1;
              if (*(int *)((longlong)param_1 + 0x2fc) < iVar15 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
                ResizeGrow(plVar18,iVar15);
              }
              lVar17 = *plVar18;
              lVar20 = (longlong)iVar15 * 0x70;
              *(undefined8 *)(lVar20 + lVar17) = 0;
              *(undefined8 *)(lVar20 + 8 + lVar17) = 0;
              *(undefined8 *)(lVar20 + 0x10 + lVar17) = 0;
              *(undefined8 *)(lVar20 + 0x18 + lVar17) = 0;
              uVar1 = uRam00000001468b5b78;
              puVar27 = (undefined8 *)(lVar20 + 0x20 + lVar17);
              *puVar27 = _DAT_1468b5b70;
              puVar27[1] = uVar1;
              uVar1 = uRam00000001468b5b88;
              puVar27 = (undefined8 *)(lVar20 + 0x30 + lVar17);
              *puVar27 = _DAT_1468b5b80;
              puVar27[1] = uVar1;
              uVar1 = uRam00000001468b5b98;
              puVar27 = (undefined8 *)(lVar20 + 0x40 + lVar17);
              *puVar27 = _DAT_1468b5b90;
              puVar27[1] = uVar1;
              *(undefined8 *)(lVar20 + 0x60 + lVar17) = 0;
              *(undefined8 *)(lVar20 + 0x68 + lVar17) = 0;
              lVar17 = *plVar18;
              *(undefined8 **)(lVar20 + lVar17) = local_2b8;
              *(undefined8 **)(lVar20 + 8 + lVar17) = puVar24;
              pvVar29 = (void *)(lVar17 + 0x50 + lVar20);
              *(undefined8 *)(lVar20 + 0x10 + lVar17) = local_288;
              puVar24 = (undefined8 *)(lVar20 + 0x20 + lVar17);
              *puVar24 = CONCAT44(fStack_224,local_228);
              puVar24[1] = CONCAT44(fStack_21c,fStack_220);
              puVar24 = (undefined8 *)(lVar20 + 0x30 + lVar17);
              *puVar24 = local_218;
              puVar24[1] = uStack_210;
              puVar24 = (undefined8 *)(lVar20 + 0x40 + lVar17);
              *puVar24 = CONCAT44(fStack_204,local_208);
              puVar24[1] = CONCAT44(fStack_1fc,fStack_200);
              *(undefined8 *)(lVar20 + 0x18 + lVar17) = puVar19[0x33];
              *(int *)((longlong)pvVar29 + 0x18) = iVar16;
              if ((iVar16 == 0) && (*(int *)((longlong)pvVar29 + 0x1c) == 0)) {
                *(undefined4 *)((longlong)pvVar29 + 0x1c) = 0;
                pvVar30 = local_298;
              }
              else {
                TArray<TSharedPtr<FGameplayAbilityTargetData,0>,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>
                ::ResizeForCopy(pvVar29,iVar16);
                pvVar30 = local_298;
                _Dst = *(void **)((longlong)pvVar29 + 0x10);
                if (*(void **)((longlong)pvVar29 + 0x10) == (void *)0x0) {
                  _Dst = pvVar29;
                }
                _guard_xfg_dispatch_icall_nop(_Dst,local_298,(longlong)iVar16 << 4);
              }
            }
            plVar18 = local_2b0;
            plVar28 = local_2c8;
            if (pvVar30 != (void *)0x0) {
              FMemory::Free(pvVar30);
              plVar18 = local_2b0;
              plVar28 = local_2c8;
            }
          }
LAB_142dbacd7:
          local_280 = local_280 + 1;
          iVar15 = local_2c0;
        } while (local_280 != plVar28);
      }
      uVar32 = 0;
      uVar31 = (ulonglong)((longlong)(plVar18 + iVar15) + (7 - (longlong)plVar18)) >> 3;
      if (plVar18 + iVar15 < plVar18) {
        uVar31 = uVar32;
      }
      if (uVar31 != 0) {
        do {
          plVar28 = (longlong *)*plVar18;
          if ((*(byte *)(plVar28 + 0x17) & 1) != 0) {
            FUN_142359580(plVar28);
          }
          (**(code **)(*plVar28 + 0x418))(plVar28,&DAT_14653218c);
          plVar18 = plVar18 + 1;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar31);
      }
      plVar18 = (longlong *)param_1[0x5e];
      plVar28 = plVar18 + (longlong)*(int *)(param_1 + 0x5f) * 0xe;
      for (; plVar18 != plVar28; plVar18 = plVar18 + 0xe) {
        plVar25 = (longlong *)*plVar18;
        if ((plVar25 == (longlong *)0x0) || (plVar18[1] == 0)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if ((bVar9) && (plVar25 != (longlong *)0x0)) {
          if ((*(byte *)(plVar25 + 0x17) & 1) != 0) {
            FUN_142359580();
            plVar25 = (longlong *)*plVar18;
          }
          (**(code **)(*plVar25 + 0x418))(plVar25,&DAT_146532190);
        }
      }
      FUN_142db6a60(param_1);
      iVar15 = FUN_14233f450(param_1);
      plVar18 = local_2b0;
      if (iVar15 != 3) {
        FUN_142da1c40(param_1);
        plVar18 = local_2b0;
      }
LAB_142dbb4b7:
      if (local_118 != 0) {
        FMemory::Free();
      }
      if (plVar18 != (longlong *)0x0) {
        FMemory::Free(plVar18);
      }
      if (local_1e8 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142dbb590 FUN_142dbb590 body=62 status=ok
// SIG undefined FUN_142dbb590(void)

void FUN_142dbb590(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte *)(plVar1 + 0x17) & 1) != 0) {
      FUN_142359580();
      plVar1 = (longlong *)*param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x000142dbb5c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x418))(plVar1,&DAT_146532190);
    return;
  }
  return;
}



// FUNCTION 142dbb5d0 FUN_142dbb5d0 body=204 status=ok
// SIG undefined FUN_142dbb5d0(void)

void FUN_142dbb5d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*param_2 != 0) {
    iVar4 = *(int *)(param_1 + 0x90);
    plVar5 = *(longlong **)(param_1 + 0x88);
    if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 8);
    }
    plVar2 = plVar5;
    if (plVar5 != plVar5 + iVar4) {
      while (*plVar2 != *param_2) {
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar5 + iVar4) {
          return;
        }
      }
      iVar1 = (int)((longlong)plVar2 - (longlong)plVar5 >> 3);
      if (iVar1 != -1) {
        iVar3 = (iVar4 - iVar1) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop(plVar5 + iVar1,plVar5 + (iVar1 + 1),(longlong)iVar3 << 3);
          iVar4 = *(int *)(param_1 + 0x90);
        }
        *(int *)(param_1 + 0x90) = iVar4 + -1;
        TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink
                  ((longlong *)(param_1 + 8));
        *(bool *)param_1 = 0 < *(int *)(param_1 + 0x90);
      }
    }
  }
  return;
}



// FUNCTION 142dbb6a0 FUN_142dbb6a0 body=48 status=ok
// SIG undefined FUN_142dbb6a0(void)

void FUN_142dbb6a0(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_1407418a0(param_1 + 8,0);
  }
  *param_1 = 0;
  return;
}



// FUNCTION 142dbb6d0 FUN_142dbb6d0 body=110 status=ok
// SIG undefined FUN_142dbb6d0(void)

undefined8 FUN_142dbb6d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = UAISense::GetListeners();
  uVar2 = FUN_142c20cf0(param_1);
  FUN_142dbe4a0(param_1,uVar1);
  FUN_142dbe4a0(param_1,uVar2);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xa4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x98,0);
  }
  return 0x7f7fffff;
}



// FUNCTION 142dbb740 FUN_142dbb740 body=1513 status=ok
// SIG undefined FUN_142dbb740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142dbb740(longlong param_1)

{
  float fVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int *piVar19;
  uint *puVar20;
  undefined1 *puVar21;
  int iVar22;
  bool bVar23;
  float fVar24;
  int local_res8 [2];
  uint local_res10;
  undefined8 local_res18;
  undefined1 *local_res20;
  int local_188;
  uint uStack_184;
  int iStack_180;
  uint uStack_17c;
  undefined8 local_178;
  uint uStack_170;
  int iStack_16c;
  undefined1 local_168 [16];
  longlong *local_158;
  undefined2 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  uint *puStack_110;
  undefined1 auStack_108 [16];
  undefined8 local_f8;
  float local_e8 [2];
  float local_e0;
  
  iVar9 = *(int *)(param_1 + 0xf0);
  iVar22 = 0;
  if (iVar9 != 0) {
    cVar7 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0xe8) + 4);
    bVar23 = cVar7 != '\0';
    iVar17 = iVar22;
    do {
      iVar5 = iVar17;
      do {
        iVar5 = iVar5 + 1;
        if (iVar9 <= iVar5) break;
        cVar7 = FWeakObjectPtr::IsValid
                          (*(longlong *)(param_1 + 0xe8) + ((longlong)iVar5 * 3 + 1) * 4);
      } while (bVar23 == (cVar7 != '\0'));
      if (bVar23 != false) {
        if (iVar22 != iVar17) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar22 * 0xc),
                     (void *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar17 * 0xc),
                     (longlong)(iVar5 - iVar17) * 0xc);
        }
        iVar22 = iVar22 + (iVar5 - iVar17);
      }
      bVar23 = (bool)(bVar23 ^ 1);
      iVar17 = iVar5;
    } while (iVar5 < iVar9);
    *(int *)(param_1 + 0xf0) = iVar22;
  }
  bVar2 = *(byte *)(param_1 + 0x48);
  plVar11 = (longlong *)UAISense::GetListeners(param_1);
  iVar9 = (int)plVar11[5];
  local_188 = 0;
  uStack_184 = 1;
  puStack_110 = (uint *)(plVar11 + 2);
  local_178._4_4_ = 0;
  uStack_170 = 0;
  if (iVar9 != 0) {
    puVar20 = (uint *)plVar11[4];
    if ((uint *)plVar11[4] == (uint *)0x0) {
      puVar20 = puStack_110;
    }
    uVar4 = *puVar20;
    while (uVar4 == 0) {
      lVar16 = (longlong)local_188;
      uStack_170 = uStack_170 + 0x20;
      iVar22 = local_188 + 1;
      bVar23 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar22;
      if (bVar23) goto LAB_142dbb8e5;
      uVar4 = puVar20[lVar16 + 1];
    }
    uStack_184 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar22 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar22 == 0; iVar22 = iVar22 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar22 = 0x20;
    }
    else {
      iVar22 = 0x1f - iVar22;
    }
    local_178._4_4_ = (uStack_170 - iVar22) + 0x1f;
    if (iVar9 < local_178._4_4_) {
LAB_142dbb8e5:
      local_178._4_4_ = iVar9;
    }
  }
  auStack_108._4_4_ = local_178._4_4_;
  auStack_108._0_4_ = 0xffffffff;
  auStack_108._8_4_ = uStack_170;
  auStack_108._12_4_ = iStack_16c;
  iStack_118 = local_188;
  uStack_114 = uStack_184;
  local_150 = 0;
  local_f8._0_4_ = SUB84(plVar11,0);
  local_f8._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
  uStack_170 = 0xffffffff;
  iStack_16c = local_178._4_4_;
  iStack_180 = local_188;
  uStack_17c = uStack_184;
  local_168._8_4_ = (undefined4)local_f8;
  local_168._0_8_ = auStack_108._8_8_;
  local_168._12_4_ = local_f8._4_4_;
  if (local_178._4_4_ < (int)plVar11[5]) {
    local_res10 = (uint)bVar2;
    local_158 = plVar11;
    local_120 = plVar11;
    local_f8 = plVar11;
    local_178 = puStack_110;
    do {
      lVar16 = (longlong)iStack_16c * 0x3c + *plVar11;
      if ((*(uint *)(lVar16 + 0xc) >> (local_res10 & 0x1f) & 1) != 0) {
        puVar21 = *(undefined1 **)(param_1 + 0xe8);
        local_res20 = puVar21 + (longlong)*(int *)(param_1 + 0xf0) * 0xc;
        if (puVar21 != local_res20) {
          do {
            lVar12 = FWeakObjectPtr::Get(puVar21 + 4);
            if (lVar12 != 0) {
              if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
                lVar14 = *(longlong *)(param_1 + 0xd8);
                if (*(longlong *)(param_1 + 0xd8) == 0) {
                  lVar14 = param_1 + 0xd0;
                }
                iVar9 = *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0xe0) - 1U &
                                          (longlong)*(int *)(lVar16 + 0x30)) * 4);
                if (iVar9 != -1) {
                  do {
                    piVar19 = (int *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x98));
                    if (*piVar19 == *(int *)(lVar16 + 0x30)) {
                      if (iVar9 != -1) goto LAB_142dbba62;
                      break;
                    }
                    iVar9 = piVar19[2];
                  } while (iVar9 != -1);
                }
              }
              piVar19 = (int *)0x0;
LAB_142dbba62:
              uVar3 = *puVar21;
              piVar13 = piVar19 + 1;
              if (piVar19 == (int *)0x0) {
                piVar13 = (int *)0x0;
              }
              bVar2 = *(byte *)((longlong)piVar13 + 1);
              iVar9 = *piVar13;
              if (*(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
                          ) < DAT_1468591e4) {
                _Init_thread_header(&DAT_1468591e4);
                if (DAT_1468591e4 == -1) {
                  DAT_1468591e0 = 7;
                  _Init_thread_footer(&DAT_1468591e4);
                }
              }
              if (bVar2 != DAT_1468591e0) {
                if (PTR_FUN_146690ee0 == (undefined *)0x0) {
                  bVar8 = 1;
                }
                else {
                  bVar8 = (*(code *)PTR_FUN_146690ee0)((char)iVar9,uVar3);
                }
                if ((bVar2 & (byte)(1 << (bVar8 & 0x1f))) == 0) goto LAB_142dbbc5e;
              }
              lVar14 = FWeakObjectPtr::Get(lVar16 + 4);
              if (lVar14 != 0) {
                FUN_140777f40((longlong *)(lVar14 + 0x1c0),local_res8,lVar12);
                lVar6 = DAT_146b343c8;
                if (local_res8[0] == -1) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (longlong)local_res8[0] * 0x380 + *(longlong *)(lVar14 + 0x1c0);
                }
                lVar18 = lVar14 + 8;
                if (lVar14 == 0) {
                  lVar18 = 0;
                }
                cVar7 = FUN_1415ad720(&DAT_1468e2448);
                if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
                  DVar10 = GetCurrentThreadId();
                  lVar14 = 4;
                  if (DVar10 == DAT_1468c21c0) goto LAB_142dbbb62;
                }
                else {
LAB_142dbbb62:
                  lVar14 = 0;
                }
                fVar1 = *(float *)(lVar6 + lVar14);
                if (lVar18 == 0) {
LAB_142dbbbaa:
                  bVar23 = false;
                }
                else {
                  FUN_140772210(local_e8);
                  cVar7 = FUN_142c20200(lVar18,local_e8);
                  if (cVar7 == '\0') goto LAB_142dbbbaa;
                  fVar24 = local_e8[0];
                  if (local_e0 <= 0.0) {
                    fVar24 = 3.4028235e+38;
                  }
                  if (fVar1 < fVar24) goto LAB_142dbbbaa;
                  bVar23 = true;
                }
                if (bVar23) {
                  lVar14 = *(longlong *)(lVar12 + 0x168);
                  local_res18 = 0;
                  if (lVar14 == 0) {
                    local_134 = DAT_1468b5d98;
                    puVar15 = &local_13c;
                    local_13c = _DAT_1468b5d90;
                  }
                  else {
                    puVar15 = (undefined8 *)&local_148;
                    local_148 = *(undefined4 *)(lVar14 + 0x220);
                    local_140 = *(undefined4 *)(lVar14 + 0x228);
                    uStack_144 = *(undefined4 *)(lVar14 + 0x224);
                  }
                  local_130 = *puVar15;
                  local_128 = *(undefined4 *)(puVar15 + 1);
                  FUN_142c1a410(local_e8,param_1,0x3f800000,&local_130,lVar16 + 0x10,0,0);
                  FUN_142c24730(lVar16 + 4,lVar12,local_e8);
                }
              }
            }
LAB_142dbbc5e:
            puVar21 = puVar21 + 0xc;
          } while (puVar21 != local_res20);
        }
      }
      uStack_170 = uStack_170 & ~uStack_17c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_180);
    } while (iStack_16c < (int)local_178[6]);
    if (((char)local_150 != '\0') && (local_150._1_1_ != '\0')) {
      TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_158,(int)local_158[1] - *(int *)((longlong)local_158 + 0x34),
                          CONCAT71((uint7)(uint3)(local_res10 >> 8),1));
    }
  }
  return 0x3f800000;
}



// FUNCTION 142dbbd30 FUN_142dbbd30 body=1077 status=ok
// SIG undefined FUN_142dbbd30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142dbbd30(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong local_res8;
  longlong *local_res10;
  int local_158;
  uint uStack_154;
  uint uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  uint uStack_104;
  uint *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_b8 [128];
  
  if (0 < *(int *)(param_1 + 0x188)) {
    plVar7 = (longlong *)UAISense::GetListeners();
    uVar3 = *(uint *)(plVar7 + 5);
    local_158 = 0;
    uStack_154 = 1;
    puVar1 = (uint *)(plVar7 + 2);
    uStack_144 = 0;
    iStack_140 = 0;
    if (uVar3 != 0) {
      puVar16 = (uint *)plVar7[4];
      if ((uint *)plVar7[4] == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar4 = *puVar16;
      iStack_140 = 0;
      local_158 = 0;
      while (uVar4 == 0) {
        lVar12 = (longlong)local_158;
        iStack_140 = iStack_140 + 0x20;
        iVar14 = local_158 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_158;
        local_158 = iVar14;
        if (bVar5) goto LAB_142dbbe2f;
        uVar4 = puVar16[lVar12 + 1];
      }
      uStack_154 = -uVar4 & uVar4;
      iVar14 = 0x1f;
      if (uStack_154 != 0) {
        for (; uStack_154 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uStack_154 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      uStack_144 = (iStack_140 - iVar14) + 0x1f;
      if ((int)uVar3 < (int)uStack_144) {
LAB_142dbbe2f:
        uStack_144 = uVar3;
      }
    }
    uVar4 = *(uint *)(plVar7 + 5);
    uStack_f8 = CONCAT44(uStack_144,0xffffffff);
    local_f0 = CONCAT44(uStack_13c,iStack_140);
    uStack_e0 = CONCAT44(uStack_154,local_158);
    uVar15 = uVar4 & 0xffffffe0;
    local_e8._0_4_ = SUB84(plVar7,0);
    local_e8._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
    local_110 = (undefined4)local_e8;
    uStack_10c = local_e8._4_4_;
    iStack_108 = local_158;
    uStack_104 = uStack_154;
    local_res10 = plVar7;
    local_100 = puVar1;
    local_e8 = plVar7;
    puStack_d8 = puVar1;
    uStack_d0 = uStack_f8;
    uStack_c8 = local_f0;
    uStack_144 = uVar4;
    if (uVar4 != uVar3) {
      puVar16 = (uint *)plVar7[4];
      if ((uint *)plVar7[4] == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar11 = puVar16[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar14 = (int)uVar4 >> 5;
      while (uVar11 == 0) {
        uVar15 = uVar15 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
        goto LAB_142dbbf04;
        uVar11 = puVar16[(longlong)iVar14 + 1];
        iVar14 = iVar14 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar14 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      uStack_144 = (uVar15 - iVar14) + 0x1f;
      if ((int)uVar3 < (int)uStack_144) {
LAB_142dbbf04:
        uStack_144 = uVar3;
      }
    }
    while( true ) {
      if (((uStack_f8._4_4_ == uStack_144) && (local_100 == puVar1)) &&
         ((longlong *)CONCAT44(uStack_10c,local_110) == plVar7)) break;
      lVar12 = *(longlong *)CONCAT44(uStack_10c,local_110) +
               (longlong)(int)uStack_f8._4_4_ * 0x3c + 4;
      cVar6 = FWeakObjectPtr::IsValid(lVar12);
      if (cVar6 != '\0') {
        lVar13 = *(longlong *)(param_1 + 0x180);
        lVar2 = lVar13 + (longlong)*(int *)(param_1 + 0x188) * 0x18;
        plVar7 = local_res10;
        for (; local_res10 = plVar7, lVar13 != lVar2; lVar13 = lVar13 + 0x18) {
          if ((*(longlong **)(lVar13 + 0x10) != (longlong *)0x0) &&
             (plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar13 + 0x10) + 0x668))(),
             plVar7 != (longlong *)0x0)) {
            uVar8 = UHomeWidget::GetPrivateStaticClass();
            lVar9 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
            if ((lVar9 != 0) &&
               ((cVar6 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                                   (lVar9), cVar6 != '\0' && (*(longlong *)(lVar13 + 8) != 0)))) {
              lVar9 = *(longlong *)(*(longlong *)(lVar13 + 8) + 0x168);
              local_res8 = 0;
              if (lVar9 == 0) {
                local_124 = DAT_1468b5d98;
                puVar10 = &local_12c;
                local_12c = _DAT_1468b5d90;
              }
              else {
                puVar10 = (undefined8 *)&local_138;
                local_138 = *(undefined4 *)(lVar9 + 0x220);
                local_130 = *(undefined4 *)(lVar9 + 0x228);
                uStack_134 = *(undefined4 *)(lVar9 + 0x224);
              }
              local_120 = *puVar10;
              local_118 = *(undefined4 *)(puVar10 + 1);
              FUN_142c1a410(local_b8,param_1,0x3f800000,&local_120,lVar12 + 0xc,0,0);
              FUN_142c24730(lVar12,*(undefined8 *)(lVar13 + 8),local_b8);
            }
          }
          plVar7 = local_res10;
        }
      }
      uStack_f8 = CONCAT44(uStack_f8._4_4_,(uint)uStack_f8 & ~uStack_104);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_108);
    }
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x180,0);
  }
  if ((*(longlong *)(param_1 + 400) == 0) && (DAT_146b34274 == '\0')) {
    FUN_142db3b50(param_1);
    AlgoImpl::
    IntroSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
              (*(undefined8 *)(param_1 + 0x138),(longlong)*(int *)(param_1 + 0x140),
               local_res8 & 0xff,&local_res8);
    uVar8 = UAISense::GetListeners(param_1);
    FUN_142db3fe0(param_1,uVar8);
  }
  return 0;
}



// FUNCTION 142dbc170 FUN_142dbc170 body=4738 status=ok
// SIG undefined FUN_142dbc170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142dbc170(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
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
  undefined1 auStack_368 [32];
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  longlong local_328;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  undefined8 local_300;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  ulonglong local_2d8;
  ulonglong uStack_2d0;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  undefined8 local_2b8;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined8 local_2a0;
  float local_298;
  float local_294;
  longlong local_290;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  undefined4 local_270;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  longlong local_238;
  undefined8 local_230;
  longlong *local_228;
  longlong local_220;
  undefined1 local_218 [16];
  float local_208;
  float local_204;
  float local_200;
  undefined1 local_1f8 [16];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int iStack_1bc;
  undefined1 local_1b0 [28];
  undefined1 local_194 [16];
  undefined1 local_184 [16];
  undefined1 local_174 [16];
  undefined1 local_164 [16];
  undefined1 local_154 [16];
  undefined1 local_144 [16];
  undefined1 local_134 [28];
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  if ((*param_2 != 0) && (*(longlong *)(*param_2 + 0xb0) != 0)) {
    local_228 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x138);
    local_2b0 = *(float *)(param_2 + 2);
    lVar8 = (longlong)(int)local_2b0;
    _Src = (void *)param_2[1];
    puVar1 = (ulonglong *)(param_2 + 1);
    lVar10 = param_2[3];
    local_2b8 = (void *)0x0;
    local_238 = lVar10;
    local_230 = param_3;
    if (local_2b0 != 0.0) {
      FUN_140615970(&local_2b8,local_2b0,0);
      _guard_xfg_dispatch_icall_nop(local_2b8,_Src,lVar8 * 0x30);
    }
    lVar8 = *(longlong *)(param_1 + 0x1c8);
    local_220 = (longlong)*(int *)(param_1 + 0x1d0) * 0x20 + lVar8;
    if (lVar8 != local_220) {
      do {
        lVar3 = (longlong)*(int *)(lVar8 + 4);
        if (*(int *)(lVar8 + 4) != -1) {
          lVar11 = *(longlong *)(param_1 + 0x600);
          piVar9 = (int *)(lVar3 * 0x100 + lVar11);
          if (((piVar9[1] != -1) &&
              (*(char *)(lVar3 * 0x40 + *(longlong *)(param_1 + 0x1f8)) != '\0')) &&
             (piVar9[0x1b] == 3)) {
            lVar12 = *(longlong *)(lVar10 + 0x50);
            lVar13 = param_2[4];
            lVar7 = (longlong)*(int *)(lVar12 + (longlong)piVar9[10] * 4);
            local_290 = lVar8;
            if (*(char *)(lVar7 + lVar13) == '\0') {
              FUN_14060c680(puVar1);
              lVar11 = *(longlong *)(param_1 + 0x600);
              lVar12 = *(longlong *)(lVar10 + 0x50);
              lVar13 = param_2[4];
            }
            local_300 = *puVar1;
            iVar14 = *piVar9;
            lVar7 = lVar7 * 0x30 + local_300;
            lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x640) + lVar3 * 4) * 0x1e0 +
                     *local_228;
            local_2a0 = (ulonglong)
                        *(int *)(lVar12 + (longlong)
                                          *(int *)((longlong)iVar14 * 0x100 + 0x28 + lVar11) * 4);
            if (*(char *)(lVar13 + local_2a0) == '\0') {
              FUN_14060c680(puVar1);
              local_300 = *puVar1;
              iVar14 = *piVar9;
            }
            local_328 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)piVar9[9] * 8);
            lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar14 * 8);
            if ((lVar11 != 0) && (local_328 != 0)) {
              lVar8 = (longlong)*(int *)(lVar11 + 0x38) * 0x60 +
                      *(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x50);
              U2PTransform(local_1f8);
              U2PTransform(local_218,local_328);
              local_33c = *(float *)(lVar8 + 0x30);
              local_330 = *(float *)(lVar8 + 0x34);
              local_32c = *(float *)(lVar8 + 0x38);
              local_278 = *(float *)(lVar8 + 0x40);
              local_334 = *(float *)(lVar8 + 0x3c);
              local_270 = *(undefined4 *)(lVar8 + 0x48);
              local_274 = *(float *)(lVar8 + 0x44);
              local_328 = CONCAT44(local_328._4_4_,local_270);
              local_288 = local_33c;
              local_284 = local_330;
              local_280 = local_32c;
              local_27c = local_334;
              lVar8 = U2PTransform(&local_2d8,lVar7);
              uVar2 = local_230;
              pfVar4 = (float *)U2PTransform(local_1b0,local_230);
              fVar23 = *(float *)(lVar8 + 0x10) + *(float *)(lVar8 + 0x10);
              fVar19 = *(float *)(lVar8 + 0x14) + *(float *)(lVar8 + 0x14);
              fVar16 = pfVar4[3];
              fVar22 = *(float *)(lVar8 + 0x18) + *(float *)(lVar8 + 0x18);
              fVar17 = pfVar4[1];
              fVar18 = *pfVar4;
              fVar20 = pfVar4[2];
              fVar21 = fVar16 * fVar16 - 0.5;
              fVar15 = fVar18 * fVar23 + fVar17 * fVar19 + fVar20 * fVar22;
              fVar25 = (fVar17 * fVar22 - fVar20 * fVar19) * fVar16 + fVar21 * fVar23 +
                       fVar18 * fVar15 + pfVar4[4];
              fVar24 = (fVar20 * fVar23 - fVar18 * fVar22) * fVar16 + fVar21 * fVar19 +
                       fVar17 * fVar15 + pfVar4[5];
              fVar21 = (fVar18 * fVar19 - fVar17 * fVar23) * fVar16 + fVar21 * fVar22 +
                       fVar20 * fVar15 + pfVar4[6];
              pfVar4 = (float *)physx::PxQuat::operator*(pfVar4,local_194,lVar8);
              local_314 = pfVar4[3];
              local_320 = *pfVar4;
              local_31c = pfVar4[1];
              local_318 = pfVar4[2];
              fVar15 = local_204 * 2.0;
              fVar18 = local_200 * 2.0;
              fVar20 = local_208 * 2.0;
              fVar17 = local_314 * local_314 - 0.5;
              fVar16 = fVar15 * local_31c + fVar20 * local_320 + fVar18 * local_318;
              fVar19 = fVar25 + (fVar18 * local_31c - fVar15 * local_318) * local_314 +
                                fVar17 * fVar20 + fVar16 * local_320;
              local_344 = (fVar20 * local_318 - fVar18 * local_320) * local_314 + fVar17 * fVar15 +
                          fVar16 * local_31c + fVar24;
              fVar20 = fVar21 + (fVar15 * local_320 - local_31c * fVar20) * local_314 +
                                fVar17 * fVar18 + fVar16 * local_318;
              local_310 = fVar25;
              local_30c = fVar24;
              local_308 = fVar21;
              local_298 = fVar19;
              local_294 = fVar20;
              pfVar4 = (float *)physx::PxQuat::operator*(&local_320,local_184,local_218);
              local_248 = fVar19;
              local_240 = fVar20;
              fVar17 = pfVar4[1];
              local_348 = pfVar4[2];
              local_340 = pfVar4[3];
              fVar16 = *pfVar4;
              local_254 = fVar17;
              local_244 = local_344;
              local_258 = fVar16;
              local_250 = local_348;
              local_24c = local_340;
              fVar18 = local_344;
              local_338 = fVar17;
              if ((*(byte *)(piVar9 + 0xe) & 1) != 0) {
                lVar8 = U2PTransform(local_1b0,local_2a0 * 0x30 + local_300);
                pfVar4 = (float *)U2PTransform(local_118,uVar2);
                fVar23 = *(float *)(lVar8 + 0x10) + *(float *)(lVar8 + 0x10);
                fVar19 = *(float *)(lVar8 + 0x14) + *(float *)(lVar8 + 0x14);
                fVar16 = pfVar4[3];
                fVar22 = *(float *)(lVar8 + 0x18) + *(float *)(lVar8 + 0x18);
                fVar17 = pfVar4[1];
                fVar18 = *pfVar4;
                fVar20 = pfVar4[2];
                fVar21 = fVar16 * fVar16 - 0.5;
                fVar15 = fVar18 * fVar23 + fVar17 * fVar19 + fVar20 * fVar22;
                fVar26 = (fVar17 * fVar22 - fVar20 * fVar19) * fVar16 + fVar21 * fVar23 +
                         fVar18 * fVar15 + pfVar4[4];
                local_340 = (fVar18 * fVar19 - fVar17 * fVar23) * fVar16 + fVar21 * fVar22 +
                            fVar20 * fVar15 + pfVar4[6];
                fVar15 = (fVar20 * fVar23 - fVar18 * fVar22) * fVar16 + fVar21 * fVar19 +
                         fVar17 * fVar15 + pfVar4[5];
                local_2a8 = fVar15;
                pfVar4 = (float *)physx::PxQuat::operator*(pfVar4,local_174,lVar8);
                fVar16 = *pfVar4;
                fVar17 = pfVar4[1];
                fVar18 = pfVar4[2];
                fVar20 = pfVar4[3];
                local_308 = local_340;
                local_348 = local_1e4 * 2.0;
                fVar25 = local_1e8 * 2.0;
                fVar24 = local_1e0 * 2.0;
                fVar23 = fVar20 * fVar20 - 0.5;
                fVar22 = local_348 * fVar17 + fVar25 * fVar16 + fVar24 * fVar18;
                local_320 = fVar16;
                local_31c = fVar17;
                local_318 = fVar18;
                local_314 = fVar20;
                local_310 = fVar26;
                local_30c = fVar15;
                pfVar4 = (float *)physx::PxQuat::operator*(&local_320,local_164,local_1f8);
                fVar15 = *pfVar4;
                fVar19 = pfVar4[2];
                local_2a0 = CONCAT44(local_2a0._4_4_,fVar15) ^ 0x80000000;
                local_338 = -fVar19;
                local_300 = CONCAT44(local_300._4_4_,pfVar4[1]) ^ 0x80000000;
                fVar26 = -((fVar24 * fVar17 - local_348 * fVar18) * fVar20 + fVar23 * fVar25 +
                           fVar22 * fVar16 + fVar26);
                fVar26 = fVar26 + fVar26;
                local_314 = pfVar4[3];
                fVar21 = -((fVar25 * fVar18 - fVar24 * fVar16) * fVar20 + fVar23 * local_348 +
                           fVar22 * fVar17 + local_2a8);
                fVar21 = fVar21 + fVar21;
                fVar22 = -((local_348 * fVar16 - fVar25 * fVar17) * fVar20 + fVar23 * fVar24 +
                           fVar22 * fVar18 + local_340);
                fVar22 = fVar22 + fVar22;
                fVar16 = pfVar4[1];
                fVar20 = local_294 + local_294;
                local_320 = (float)local_2a0;
                fVar18 = local_314 * local_314 - 0.5;
                fVar17 = fVar16 * fVar21 + fVar26 * fVar15 + fVar22 * fVar19;
                local_310 = (fVar18 * fVar26 - (fVar22 * fVar16 - fVar19 * fVar21) * local_314) +
                            fVar17 * fVar15;
                fVar23 = local_344 + local_344;
                fVar19 = local_298 + local_298;
                local_31c = (float)local_300;
                local_30c = (fVar18 * fVar21 - (pfVar4[2] * fVar26 - fVar22 * fVar15) * local_314) +
                            fVar17 * fVar16;
                local_308 = (fVar18 * fVar22 - (fVar21 * *pfVar4 - fVar16 * fVar26) * local_314) +
                            fVar17 * pfVar4[2];
                fVar16 = fVar23 * (float)local_300 + fVar19 * (float)local_2a0 + fVar20 * local_338;
                fVar21 = local_310 +
                         (fVar20 * (float)local_300 - fVar23 * local_338) * local_314 +
                         fVar18 * fVar19 + fVar16 * (float)local_2a0;
                fVar15 = (fVar19 * local_338 - fVar20 * (float)local_2a0) * local_314 +
                         fVar18 * fVar23 + fVar16 * (float)local_300 + local_30c;
                fVar23 = (fVar23 * (float)local_2a0 - fVar19 * (float)local_300) * local_314 +
                         fVar18 * fVar20 + fVar16 * local_338 + local_308;
                local_318 = local_338;
                puVar5 = (ulonglong *)physx::PxQuat::operator*(&local_320,local_154,&local_258);
                local_2d8 = *puVar5;
                uStack_2d0 = puVar5[1];
                local_344 = fVar23 + fVar23;
                fVar22 = fVar21 + fVar21;
                fVar17 = local_334 * local_334 - 0.5;
                fVar20 = fVar15 + fVar15;
                fVar16 = local_330 * fVar20 + local_33c * fVar22 + local_32c * local_344;
                fVar19 = local_278 +
                         (local_330 * local_344 - local_32c * fVar20) * local_334 + fVar17 * fVar22
                         + local_33c * fVar16;
                fVar18 = local_274 +
                         (local_32c * fVar22 - local_33c * local_344) * local_334 + fVar17 * fVar20
                         + local_330 * fVar16;
                fVar20 = (local_33c * fVar20 - local_330 * fVar22) * local_334 + fVar17 * local_344
                         + local_32c * fVar16 + (float)local_328;
                local_2c8 = fVar21;
                local_2c4 = fVar15;
                local_2c0 = fVar23;
                pfVar4 = (float *)physx::PxQuat::operator*(&local_288,local_144,&local_2d8);
                local_348 = pfVar4[2];
                local_340 = pfVar4[3];
                fVar16 = *pfVar4;
                fVar17 = pfVar4[1];
              }
              local_33c = -(fVar20 + fVar20);
              fVar20 = local_340 * local_340 - 0.5;
              fVar15 = -(fVar19 + fVar19);
              fVar19 = -(fVar18 + fVar18);
              fVar18 = fVar19 * fVar17 + fVar15 * fVar16 + local_33c * local_348;
              local_2f0 = -local_348;
              local_2f8 = -fVar16;
              local_2f4 = -fVar17;
              local_2e8 = (fVar20 * fVar15 - (local_33c * fVar17 - fVar19 * local_348) * local_340)
                          + fVar18 * fVar16;
              local_2e0 = (fVar20 * local_33c - (fVar19 * fVar16 - fVar15 * fVar17) * local_340) +
                          fVar18 * local_348;
              local_2e4 = (fVar20 * fVar19 - (fVar15 * local_348 - local_33c * fVar16) * local_340)
                          + fVar18 * fVar17;
              local_2ec = local_340;
              if (*(char *)(param_1 + 0x5bc) == '\0') {
                local_348 = local_2f0;
                local_328._0_4_ = local_2e8;
                pfVar4 = (float *)U2PTransform(local_118,piVar9 + 0x20);
              }
              else {
                pfVar4 = (float *)&local_2d8;
                local_2c8 = local_2e8;
                local_2d8 = CONCAT44(fVar17,fVar16) ^ 0x8000000080000000;
                uStack_2d0 = CONCAT44(local_340,local_348) ^ 0x80000000;
                local_2c4 = local_2e4;
                local_2c0 = local_2e0;
                local_348 = local_2f0;
              }
              fVar16 = pfVar4[2];
              fVar17 = *pfVar4;
              fVar18 = pfVar4[1];
              fVar20 = pfVar4[4];
              fVar15 = pfVar4[5];
              fVar19 = pfVar4[6];
              local_328 = CONCAT44(local_328._4_4_,pfVar4[3]);
              local_32c = fVar16;
              puVar6 = (undefined8 *)P2UTransform(local_118,&local_2f8);
              fVar26 = local_2e0;
              fVar25 = local_2e4;
              fVar24 = local_2ec;
              fVar23 = local_2f0;
              fVar22 = local_2f4;
              fVar21 = local_2f8;
              uVar2 = puVar6[1];
              *(undefined8 *)(piVar9 + 0x20) = *puVar6;
              *(undefined8 *)(piVar9 + 0x22) = uVar2;
              uVar2 = puVar6[3];
              *(undefined8 *)(piVar9 + 0x24) = puVar6[2];
              *(undefined8 *)(piVar9 + 0x26) = uVar2;
              uVar2 = puVar6[5];
              *(undefined8 *)(piVar9 + 0x28) = puVar6[4];
              *(undefined8 *)(piVar9 + 0x2a) = uVar2;
              local_334 = (float)*(int *)(param_1 + 0x5d8);
              local_330 = (local_2e8 - fVar20) * local_334;
              fVar15 = (local_2e4 - fVar15) * local_334;
              local_268 = -fVar17;
              fVar20 = (local_2e0 - fVar19) * local_334;
              local_264 = -fVar18;
              local_260 = -fVar16;
              local_25c = (float)local_328;
              local_2b0 = local_2f0 - local_32c;
              local_2b8 = (void *)CONCAT44(local_2f4 - fVar18,local_2f8 - fVar17);
              local_2ac = local_2ec - (float)local_328;
              pfVar4 = (float *)physx::PxQuat::operator*(&local_2b8,local_134,&local_268);
              fVar16 = *pfVar4;
              fVar17 = pfVar4[1];
              fVar18 = pfVar4[2];
              *(float *)(lVar10 + 0x11c) = fVar21;
              *(float *)(lVar10 + 0x120) = fVar22;
              *(float *)(lVar10 + 0x124) = fVar23;
              *(float *)(lVar10 + 0x128) = fVar24;
              *(float *)(lVar10 + 300) = local_2e8;
              *(float *)(lVar10 + 0x130) = fVar25;
              *(float *)(lVar10 + 0x134) = fVar26;
              *(float *)(lVar10 + 0x138) = local_330;
              *(float *)(lVar10 + 0x13c) = fVar15;
              *(float *)(lVar10 + 0x140) = fVar20;
              *(float *)(lVar10 + 0x148) = (fVar17 + fVar17) * local_334;
              *(float *)(lVar10 + 0x14c) = (fVar18 + fVar18) * local_334;
              *(float *)(lVar10 + 0x144) = (fVar16 + fVar16) * local_334;
              lVar8 = local_290;
            }
            local_1c8 = (float)piVar9[0x10];
            fStack_1c4 = (float)piVar9[0x11];
            fStack_1c0 = (float)piVar9[0x12];
            iStack_1bc = piVar9[0x13];
            fVar16 = 1.0 / (float)*(int *)(param_1 + 0x5d8);
            fVar20 = fStack_1c0 * fVar16;
            fVar18 = (float)piVar9[0xf] * (1.0 / fVar16) * (float)piVar9[0xf];
            fVar17 = (1.0 / fVar16) * (float)piVar9[0x11] * fStack_1c4;
            fVar16 = local_1c8 * fVar16;
            if ((*(byte *)(piVar9 + 0xe) & 1) == 0) {
              *(float *)(lVar10 + 0xbc) =
                   fVar17 * *(float *)(*(longlong *)(param_1 + 0x610) + 0x14 + lVar3 * 0x28);
              *(float *)(lVar10 + 0xc0) =
                   fVar20 * *(float *)(*(longlong *)(param_1 + 0x610) + 0x18 + lVar3 * 0x28);
              *(float *)(lVar10 + 0xcc) =
                   fVar17 * *(float *)(*(longlong *)(param_1 + 0x610) + 0x14 + lVar3 * 0x28);
              *(float *)(lVar10 + 0xd0) =
                   fVar20 * *(float *)(*(longlong *)(param_1 + 0x610) + 0x18 + lVar3 * 0x28);
              *(float *)(lVar10 + 0xdc) =
                   fVar17 * *(float *)(*(longlong *)(param_1 + 0x610) + 0x14 + lVar3 * 0x28);
              fVar20 = fVar20 * *(float *)(*(longlong *)(param_1 + 0x610) + 0x18 + lVar3 * 0x28);
            }
            else {
              fVar20 = 0.0;
              *(undefined8 *)(lVar10 + 0xbc) = 0;
              *(undefined8 *)(lVar10 + 0xcc) = 0;
              *(undefined4 *)(lVar10 + 0xdc) = 0;
            }
            *(float *)(lVar10 + 0xe0) = fVar20;
            *(float *)(lVar10 + 0x10c) =
                 fVar18 * *(float *)(*(longlong *)(param_1 + 0x610) + 0xc + lVar3 * 0x28);
            *(float *)(lVar10 + 0x110) =
                 -(fVar16 * *(float *)(*(longlong *)(param_1 + 0x610) + 0x10 + lVar3 * 0x28));
            *(float *)(lVar10 + 0xec) =
                 fVar18 * *(float *)(*(longlong *)(param_1 + 0x610) + 0xc + lVar3 * 0x28);
            *(float *)(lVar10 + 0xf0) =
                 -(fVar16 * *(float *)(*(longlong *)(param_1 + 0x610) + 0x10 + lVar3 * 0x28));
            *(float *)(lVar10 + 0xfc) =
                 fVar18 * *(float *)(*(longlong *)(param_1 + 0x610) + 0xc + lVar3 * 0x28);
            *(float *)(lVar10 + 0x100) =
                 -(fVar16 * *(float *)(*(longlong *)(param_1 + 0x610) + 0x10 + lVar3 * 0x28));
            lVar10 = local_238;
          }
        }
        lVar8 = lVar8 + 0x20;
      } while (lVar8 != local_220);
    }
  }
  return;
}



// FUNCTION 142dbd400 FUN_142dbd400 body=1489 status=ok
// SIG undefined FUN_142dbd400(void)

void FUN_142dbd400(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  void *pvVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  void *local_208;
  int local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined1 local_190 [32];
  undefined1 local_170 [32];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [28];
  undefined1 local_114 [28];
  undefined1 local_f8 [28];
  undefined1 local_dc [164];
  
  if ((*param_2 != 0) && (*(longlong *)(*param_2 + 0xb0) != 0)) {
    lVar9 = *(longlong *)(param_1 + 0x1c0);
    local_200 = (int)param_2[2];
    lVar15 = (longlong)local_200;
    plVar1 = param_2 + 1;
    pvVar22 = (void *)*plVar1;
    lVar10 = param_2[3];
    local_208 = (void *)0x0;
    if (local_200 != 0) {
      FUN_140615970(&local_208,local_200,0);
      _guard_xfg_dispatch_icall_nop(local_208,pvVar22,lVar15 * 0x30);
    }
    pvVar22 = *(void **)(param_1 + 0x1c8);
    local_208 = (void *)((longlong)*(int *)(param_1 + 0x1d0) * 0x20 + (longlong)pvVar22);
    if (pvVar22 != local_208) {
      do {
        iVar18 = *(int *)((longlong)pvVar22 + 4);
        if (iVar18 != -1) {
          lVar15 = *(longlong *)(param_1 + 0x600);
          piVar16 = (int *)((longlong)iVar18 * 0x100 + lVar15);
          iVar17 = piVar16[1];
          if (((iVar17 != -1) &&
              (*(char *)((longlong)iVar18 * 0x40 + *(longlong *)(param_1 + 0x1f8)) != '\0')) &&
             (piVar16[0x1b] == 3)) {
            lVar13 = *(longlong *)(lVar10 + 0x50);
            lVar19 = param_2[4];
            lVar14 = (longlong)*(int *)(lVar13 + (longlong)piVar16[10] * 4);
            if (*(char *)(lVar19 + lVar14) == '\0') {
              FUN_14060c680(plVar1);
              iVar17 = piVar16[1];
              lVar15 = *(longlong *)(param_1 + 0x600);
              lVar13 = *(longlong *)(lVar10 + 0x50);
              lVar19 = param_2[4];
            }
            lVar21 = *plVar1;
            iVar18 = *piVar16;
            lVar14 = lVar14 * 0x30 + lVar21;
            lVar20 = (longlong)iVar17 * 0x1e0 + *(longlong *)(lVar9 + 0x138);
            local_198 = (longlong)
                        *(int *)(lVar13 + (longlong)
                                          *(int *)((longlong)iVar18 * 0x100 + 0x28 + lVar15) * 4);
            if (*(char *)(local_198 + lVar19) == '\0') {
              FUN_14060c680(plVar1);
              iVar18 = *piVar16;
              lVar21 = *plVar1;
            }
            local_1a0 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)piVar16[9] * 8);
            lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar18 * 8);
            if ((lVar15 != 0) && (local_1a0 != 0)) {
              U2PTransform(local_170,lVar15);
              U2PTransform(local_190,local_1a0);
              lVar15 = U2PTransform(local_130,lVar14);
              pfVar11 = (float *)U2PTransform(local_114,param_3);
              fVar27 = *(float *)(lVar15 + 0x10) + *(float *)(lVar15 + 0x10);
              fVar24 = *(float *)(lVar15 + 0x14) + *(float *)(lVar15 + 0x14);
              fVar2 = pfVar11[3];
              fVar26 = *(float *)(lVar15 + 0x18) + *(float *)(lVar15 + 0x18);
              fVar3 = pfVar11[1];
              fVar4 = *pfVar11;
              fVar5 = pfVar11[2];
              fVar25 = fVar2 * fVar2 - 0.5;
              fVar23 = fVar4 * fVar27 + fVar3 * fVar24 + fVar5 * fVar26;
              fVar6 = pfVar11[4];
              fVar7 = pfVar11[6];
              fVar8 = pfVar11[5];
              puVar12 = (undefined4 *)physx::PxQuat::operator*(pfVar11,local_150,lVar15);
              local_1f8 = *puVar12;
              uStack_1f4 = puVar12[1];
              uStack_1f0 = puVar12[2];
              uStack_1ec = puVar12[3];
              local_1e8 = (fVar3 * fVar26 - fVar5 * fVar24) * fVar2 + fVar25 * fVar27 +
                          fVar4 * fVar23 + fVar6;
              local_1e4 = (fVar5 * fVar27 - fVar4 * fVar26) * fVar2 + fVar25 * fVar24 +
                          fVar3 * fVar23 + fVar8;
              local_1e0 = (fVar4 * fVar24 - fVar3 * fVar27) * fVar2 + fVar25 * fVar26 +
                          fVar5 * fVar23 + fVar7;
              lVar15 = U2PTransform(local_f8,local_198 * 0x30 + lVar21);
              pfVar11 = (float *)U2PTransform(local_dc,param_3);
              fVar27 = *(float *)(lVar15 + 0x10) + *(float *)(lVar15 + 0x10);
              fVar24 = *(float *)(lVar15 + 0x14) + *(float *)(lVar15 + 0x14);
              fVar2 = pfVar11[3];
              fVar26 = *(float *)(lVar15 + 0x18) + *(float *)(lVar15 + 0x18);
              fVar3 = pfVar11[1];
              fVar4 = *pfVar11;
              fVar5 = pfVar11[2];
              fVar25 = fVar2 * fVar2 - 0.5;
              fVar23 = fVar4 * fVar27 + fVar3 * fVar24 + fVar5 * fVar26;
              fVar6 = pfVar11[4];
              fVar7 = pfVar11[6];
              fVar8 = pfVar11[5];
              puVar12 = (undefined4 *)physx::PxQuat::operator*(pfVar11,local_140,lVar15);
              local_1dc = *puVar12;
              uStack_1d8 = puVar12[1];
              uStack_1d4 = puVar12[2];
              uStack_1d0 = puVar12[3];
              piVar16[0x3d] = *(int *)(param_1 + 0x5ec);
              local_1cc = (fVar3 * fVar26 - fVar5 * fVar24) * fVar2 + fVar25 * fVar27 +
                          fVar4 * fVar23 + fVar6;
              local_1c8 = (fVar5 * fVar27 - fVar4 * fVar26) * fVar2 + fVar25 * fVar24 +
                          fVar3 * fVar23 + fVar8;
              local_1c4 = (fVar4 * fVar24 - fVar3 * fVar27) * fVar2 + fVar25 * fVar26 +
                          fVar5 * fVar23 + fVar7;
              FUN_142da01f0(piVar16 + 0x2f,&local_1c0,local_170,local_190,&local_1dc,&local_1f8);
              *(undefined8 *)(lVar20 + 0x10) = local_1c0;
              *(undefined8 *)(lVar20 + 0x18) = uStack_1b8;
              *(undefined4 *)(lVar20 + 0x20) = local_1b0;
              *(undefined4 *)(lVar20 + 0x28) = local_1a8;
              *(undefined4 *)(lVar20 + 0x24) = local_1ac;
            }
          }
        }
        pvVar22 = (void *)((longlong)pvVar22 + 0x20);
      } while (pvVar22 != local_208);
    }
  }
  return;
}



// FUNCTION 142dbd9e0 FUN_142dbd9e0 body=2278 status=ok
// SIG undefined FUN_142dbd9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dbd9e0(longlong param_1,int param_2,int param_3,longlong *param_4,float *param_5)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  longlong lVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar19 [16];
  float fVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar20 [16];
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
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auStack_208 [32];
  float local_1e8;
  int local_1e0;
  int local_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined1 local_198 [16];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (((*param_4 != 0) && (*(longlong *)(*param_4 + 0xb0) != 0)) && (param_3 != 0)) {
    if (*(char *)(param_1 + 0x19c) == '\0') {
      iVar7 = *(int *)(param_1 + 0x1a0);
    }
    else if (*(int *)(param_1 + 0x198) == -1) {
      iVar7 = -1;
    }
    else {
      iVar7 = *(int *)(*(longlong *)(param_4[3] + 0x80) + (longlong)*(int *)(param_1 + 0x198) * 4);
    }
    plVar1 = param_4 + 1;
    local_1e0 = param_2;
    local_1dc = param_3;
    if (*(char *)((longlong)iVar7 + param_4[4]) == '\0') {
      FUN_14060c680(plVar1);
    }
    piVar11 = *(int **)(param_1 + 0x1c8);
    puVar8 = (undefined8 *)((longlong)iVar7 * 0x30 + *plVar1);
    piVar13 = piVar11 + (longlong)*(int *)(param_1 + 0x1d0) * 8;
    local_118 = *puVar8;
    uStack_110 = puVar8[1];
    local_108 = *(undefined1 (*) [16])(puVar8 + 2);
    local_f8 = puVar8[4];
    uStack_f0 = puVar8[5];
    for (; piVar11 != piVar13; piVar11 = piVar11 + 8) {
      lVar12 = (longlong)piVar11[1];
      if ((*(char *)(lVar12 * 0x40 + *(longlong *)(param_1 + 0x1f8)) == '\0') &&
         (*(longlong *)
           (*(longlong *)(param_1 + 0x1d8) +
           (longlong)*(int *)(lVar12 * 0x100 + 0x24 + *(longlong *)(param_1 + 0x600)) * 8) != 0)) {
        iVar7 = *piVar11;
        if (*(char *)((longlong)iVar7 + param_4[4]) == '\0') {
          FUN_14060c680(plVar1);
        }
        fVar40 = fRam0000000146b342c8;
        fVar37 = fRam0000000146b342c4;
        fVar35 = _DAT_146b342c0;
        fVar6 = fRam0000000146b342bc;
        fVar5 = fRam0000000146b342b8;
        fVar4 = fRam0000000146b342b4;
        fVar3 = _DAT_146b342b0;
        auVar14 = *(undefined1 (*) [16])(param_5 + 8);
        fVar18 = auVar14._0_4_;
        fVar26 = auVar14._4_4_;
        fVar36 = auVar14._8_4_;
        fVar42 = auVar14._12_4_;
        pfVar9 = (float *)(lVar12 * 0x30 + *(longlong *)(param_1 + 0x620));
        local_128 = (float)((uint)_DAT_146b342c0 & _DAT_146b342d0);
        fStack_124 = (float)((uint)fRam0000000146b342c4 & uRam0000000146b342d4);
        fStack_120 = (float)((uint)fRam0000000146b342c8 & uRam0000000146b342d8);
        fStack_11c = (float)((uint)fRam0000000146b342cc & uRam0000000146b342dc);
        local_168 = pfVar9[4];
        fStack_164 = pfVar9[5];
        fStack_160 = pfVar9[6];
        fStack_15c = pfVar9[7];
        local_158 = pfVar9[8];
        fStack_154 = pfVar9[9];
        fStack_150 = pfVar9[10];
        fStack_14c = pfVar9[0xb];
        fVar56 = *pfVar9;
        fVar57 = pfVar9[1];
        fVar58 = pfVar9[2];
        fVar59 = pfVar9[3];
        pfVar10 = (float *)((longlong)iVar7 * 0x30 + *plVar1);
        local_148 = 0.0;
        fStack_144 = 0.0;
        fStack_140 = 0.0;
        fStack_13c = fRam0000000146b342cc;
        local_138 = 0;
        uStack_130 = 0;
        local_198 = *(undefined1 (*) [16])(pfVar10 + 8);
        fVar23 = local_198._0_4_;
        fVar27 = local_198._4_4_;
        fVar39 = local_198._8_4_;
        fVar43 = local_198._12_4_;
        auVar14 = minps(local_198,auVar14);
        auVar15._4_4_ = -(uint)(auVar14._4_4_ < fRam0000000146b34324);
        auVar15._0_4_ = -(uint)(auVar14._0_4_ < _DAT_146b34320);
        auVar15._8_4_ = -(uint)(auVar14._8_4_ < fRam0000000146b34328);
        auVar15._12_4_ = -(uint)(auVar14._12_4_ < fRam0000000146b3432c);
        iVar7 = movmskps((int)pfVar9,auVar15);
        local_178 = _DAT_146b34320;
        fStack_174 = fRam0000000146b34324;
        fStack_170 = fRam0000000146b34328;
        fStack_16c = fRam0000000146b3432c;
        if (iVar7 == 0) {
          fVar35 = *param_5;
          fVar37 = param_5[1];
          fVar40 = param_5[2];
          fVar28 = param_5[3];
          fVar21 = *pfVar10;
          fVar24 = pfVar10[1];
          fVar38 = pfVar10[2];
          fVar41 = pfVar10[3];
          fVar22 = fVar18 * pfVar10[4];
          fVar17 = fVar26 * pfVar10[5];
          fVar30 = fVar36 * pfVar10[6];
          fVar16 = fVar42 * pfVar10[7];
          local_148 = fVar41 * fVar35 * _DAT_146b34300 + fVar28 * fVar21 +
                      fVar37 * fVar38 * _DAT_146b342f0 + fVar40 * fVar24 * _DAT_146b342e0;
          fStack_144 = fVar38 * fVar35 * fRam0000000146b34304 + fVar28 * fVar24 +
                       fVar37 * fVar41 * fRam0000000146b342f4 +
                       fVar40 * fVar21 * fRam0000000146b342e4;
          fStack_140 = fVar24 * fVar35 * fRam0000000146b34308 + fVar28 * fVar38 +
                       fVar37 * fVar21 * fRam0000000146b342f8 +
                       fVar40 * fVar41 * fRam0000000146b342e8;
          fStack_13c = fVar21 * fVar35 * fRam0000000146b3430c + fVar28 * fVar41 +
                       fVar37 * fVar24 * fRam0000000146b342fc +
                       fVar40 * fVar38 * fRam0000000146b342ec;
          fVar24 = fVar30 * fVar37 - fVar17 * fVar40;
          fVar38 = fVar22 * fVar40 - fVar30 * fVar35;
          fVar41 = fVar17 * fVar35 - fVar22 * fVar37;
          fVar25 = fVar16 * fVar28 - fVar16 * fVar28;
          fVar24 = fVar24 + fVar24;
          fVar38 = fVar38 + fVar38;
          fVar41 = fVar41 + fVar41;
          fVar25 = fVar25 + fVar25;
          fVar21 = (fVar41 * fVar37 - fVar38 * fVar40) + fVar24 * fVar28 + fVar22 + param_5[4];
          fVar40 = (fVar24 * fVar40 - fVar41 * fVar35) + fVar38 * fVar28 + fVar17 + param_5[5];
          fVar35 = (fVar38 * fVar35 - fVar24 * fVar37) + fVar41 * fVar28 + fVar30 + param_5[6];
          fVar37 = (fVar25 * fVar28 - fVar25 * fVar28) + fVar25 * fVar28 + fVar16 + param_5[7];
        }
        else {
          fVar28 = *param_5;
          fVar21 = param_5[1];
          fVar24 = param_5[2];
          fVar38 = param_5[3];
          fVar29 = fVar21 + fVar21;
          fVar32 = fVar24 + fVar24;
          fVar33 = fVar28 * (fVar28 + fVar28);
          fVar30 = (fVar28 + fVar28) * fVar38;
          fVar41 = *pfVar10;
          fVar25 = pfVar10[1];
          fVar22 = pfVar10[2];
          fVar17 = pfVar10[3];
          fVar53 = (fVar32 * fVar38 + fVar29 * fVar28) * fVar18;
          fVar54 = (fVar30 + fVar32 * fVar21) * fVar26;
          fVar55 = (fVar29 * fVar38 + fVar32 * fVar28) * fVar36;
          fVar44 = fVar26 * (fVar29 * fVar28 - fVar32 * fVar38);
          fVar46 = fVar36 * (fVar32 * fVar21 - fVar30);
          fVar48 = fVar18 * (fVar32 * fVar28 - fVar29 * fVar38);
          fVar28 = param_5[4];
          fVar38 = param_5[5];
          fVar30 = param_5[6];
          fVar16 = (float)((uint)((_DAT_146b342c0 - (fVar24 * fVar32 + fVar21 * fVar29)) * fVar18) &
                          _DAT_146b342d0);
          fVar32 = (float)((uint)((fRam0000000146b342c4 - (fVar24 * fVar32 + fVar33)) * fVar26) &
                          uRam0000000146b342d4);
          fVar29 = (float)((uint)((fRam0000000146b342c8 - (fVar21 * fVar29 + fVar33)) * fVar36) &
                          uRam0000000146b342d8);
          fVar33 = (float)((uint)((fRam0000000146b342cc - (fVar33 + fVar33)) * fVar42) &
                          uRam0000000146b342dc);
          fVar21 = fVar25 + fVar25;
          fVar24 = fVar22 + fVar22;
          fVar34 = fVar41 * (fVar41 + fVar41);
          fVar31 = fVar17 * (fVar41 + fVar41);
          fVar50 = (fVar17 * fVar24 + fVar41 * fVar21) * fVar23;
          fVar51 = (fVar31 + fVar25 * fVar24) * fVar27;
          fVar52 = (fVar17 * fVar21 + fVar41 * fVar24) * fVar39;
          fVar45 = fVar27 * (fVar41 * fVar21 - fVar17 * fVar24);
          fVar47 = fVar39 * (fVar25 * fVar24 - fVar31);
          fVar49 = fVar23 * (fVar41 * fVar24 - fVar17 * fVar21);
          fVar17 = (float)((uint)((_DAT_146b342c0 - (fVar22 * fVar24 + fVar25 * fVar21)) * fVar23) &
                          _DAT_146b342d0);
          fVar22 = (float)((uint)((fRam0000000146b342c4 - (fVar22 * fVar24 + fVar34)) * fVar27) &
                          uRam0000000146b342d4);
          fVar25 = (float)((uint)((fRam0000000146b342c8 - (fVar25 * fVar21 + fVar34)) * fVar39) &
                          uRam0000000146b342d8);
          fVar31 = (float)((uint)((fRam0000000146b342cc - (fVar34 + fVar34)) * fVar43) &
                          uRam0000000146b342dc);
          fVar21 = pfVar10[4];
          fVar24 = pfVar10[5];
          fVar41 = pfVar10[6];
          local_1d8 = fVar50 * fVar44 + fVar17 * fVar16 + fVar49 * fVar55 + fVar31 * fVar28;
          fStack_1d4 = fVar50 * fVar32 + fVar17 * fVar53 + fVar49 * fVar46 + fVar31 * fVar38;
          fStack_1d0 = fVar50 * fVar54 + fVar17 * fVar48 + fVar49 * fVar29 + fVar31 * fVar30;
          fStack_1cc = fVar50 * fVar33 + fVar17 * fVar33 + fVar49 * fVar33 +
                       fVar31 * fRam0000000146b342cc;
          local_1c8 = fVar22 * fVar44 + fVar45 * fVar16 + fVar51 * fVar55 + fVar31 * fVar28;
          fStack_1c4 = fVar22 * fVar32 + fVar45 * fVar53 + fVar51 * fVar46 + fVar31 * fVar38;
          fStack_1c0 = fVar22 * fVar54 + fVar45 * fVar48 + fVar51 * fVar29 + fVar31 * fVar30;
          fStack_1bc = fVar22 * fVar33 + fVar45 * fVar33 + fVar51 * fVar33 +
                       fVar31 * fRam0000000146b342cc;
          local_1b8 = fVar47 * fVar44 + fVar52 * fVar16 + fVar25 * fVar55 + fVar31 * fVar28;
          fStack_1b4 = fVar47 * fVar32 + fVar52 * fVar53 + fVar25 * fVar46 + fVar31 * fVar38;
          fStack_1b0 = fVar47 * fVar54 + fVar52 * fVar48 + fVar25 * fVar29 + fVar31 * fVar30;
          fStack_1ac = fVar47 * fVar33 + fVar52 * fVar33 + fVar25 * fVar33 +
                       fVar31 * fRam0000000146b342cc;
          local_1a8 = fVar24 * fVar44 + fVar21 * fVar16 + fVar41 * fVar55 +
                      fRam0000000146b342cc * fVar28;
          fStack_1a4 = fVar24 * fVar32 + fVar21 * fVar53 + fVar41 * fVar46 +
                       fRam0000000146b342cc * fVar38;
          fStack_1a0 = fVar24 * fVar54 + fVar21 * fVar48 + fVar41 * fVar29 +
                       fRam0000000146b342cc * fVar30;
          fStack_19c = fVar24 * fVar33 + fVar21 * fVar33 + fVar41 * fVar33 +
                       fRam0000000146b342cc * fRam0000000146b342cc;
          FMatrix::RemoveScaling(&local_1d8);
          fVar35 = (float)(-(uint)(local_178 <= fVar23 * fVar18) & (_DAT_146b34310 ^ (uint)fVar35) ^
                          _DAT_146b34310);
          fVar37 = (float)(-(uint)(fStack_174 <= fVar27 * fVar26) &
                           (uRam0000000146b34314 ^ (uint)fVar37) ^ uRam0000000146b34314);
          fVar40 = (float)(-(uint)(fStack_170 <= fVar39 * fVar36) &
                           (uRam0000000146b34318 ^ (uint)fVar40) ^ uRam0000000146b34318);
          local_1d8 = local_1d8 * fVar35;
          fStack_1d0 = fStack_1d0 * fVar35;
          fStack_1d4 = fStack_1d4 * fVar35;
          fStack_1c0 = fStack_1c0 * fVar37;
          fStack_1c4 = fStack_1c4 * fVar37;
          local_1c8 = local_1c8 * fVar37;
          fStack_1b0 = fStack_1b0 * fVar40;
          local_1b8 = local_1b8 * fVar40;
          fStack_1b4 = fStack_1b4 * fVar40;
          FQuat::FQuat(&local_188,&local_1d8);
          auVar19._0_4_ = local_188 * local_188 + fStack_180 * fStack_180;
          auVar19._4_4_ = fStack_184 * fStack_184 + fStack_17c * fStack_17c;
          auVar19._8_4_ = fStack_180 * fStack_180 + local_188 * local_188;
          auVar19._12_4_ = fStack_17c * fStack_17c + fStack_184 * fStack_184;
          fVar24 = auVar19._4_4_ + auVar19._0_4_;
          fVar38 = auVar19._8_4_ + auVar19._4_4_;
          fVar41 = auVar19._12_4_ + auVar19._8_4_;
          fVar25 = auVar19._0_4_ + auVar19._12_4_;
          auVar14._4_4_ = fVar38;
          auVar14._0_4_ = fVar24;
          auVar14._8_4_ = fVar41;
          auVar14._12_4_ = fVar25;
          auVar14 = rsqrtps(auVar19,auVar14);
          fVar35 = auVar14._0_4_;
          fVar40 = auVar14._4_4_;
          fVar28 = auVar14._8_4_;
          fVar21 = auVar14._12_4_;
          fVar35 = (fVar3 - fVar35 * fVar35 * fVar24 * fVar3) * fVar35 + fVar35;
          fVar40 = (fVar4 - fVar40 * fVar40 * fVar38 * fVar4) * fVar40 + fVar40;
          fVar28 = (fVar5 - fVar28 * fVar28 * fVar41 * fVar5) * fVar28 + fVar28;
          fVar21 = (fVar6 - fVar21 * fVar21 * fVar25 * fVar6) * fVar21 + fVar21;
          fVar37 = 0.0;
          local_148 = (float)(((uint)(((fVar3 - fVar35 * fVar35 * fVar24 * fVar3) * fVar35 + fVar35)
                                     * local_188) ^ _DAT_146b342a0) & -(uint)(1e-08 <= fVar24) ^
                             _DAT_146b342a0);
          fStack_144 = (float)(((uint)(((fVar4 - fVar40 * fVar40 * fVar38 * fVar4) * fVar40 + fVar40
                                       ) * fStack_184) ^ uRam0000000146b342a4) &
                               -(uint)(1e-08 <= fVar38) ^ uRam0000000146b342a4);
          fStack_140 = (float)(((uint)(((fVar5 - fVar28 * fVar28 * fVar41 * fVar5) * fVar28 + fVar28
                                       ) * fStack_180) ^ uRam0000000146b342a8) &
                               -(uint)(1e-08 <= fVar41) ^ uRam0000000146b342a8);
          fStack_13c = (float)(((uint)(((fVar6 - fVar21 * fVar21 * fVar25 * fVar6) * fVar21 + fVar21
                                       ) * fStack_17c) ^ uRam0000000146b342ac) &
                               -(uint)(1e-08 <= fVar25) ^ uRam0000000146b342ac);
          fVar21 = local_1a8;
          fVar40 = fStack_1a4;
          fVar35 = fStack_1a0;
          local_188 = local_148;
          fStack_184 = fStack_144;
          fStack_180 = fStack_140;
          fStack_17c = fStack_13c;
        }
        fStack_11c = fVar43 * fVar42;
        fStack_120 = fVar39 * fVar36;
        fStack_124 = fVar27 * fVar26;
        local_128 = fVar23 * fVar18;
        local_138 = CONCAT44(fVar40,fVar21);
        uStack_130 = CONCAT44(fVar37,fVar35);
        local_1e8 = ((float)local_1e0 + 1.0) / (float)local_1dc;
        if (1e-05 < ABS(local_1e8)) {
          if (1e-05 < ABS(local_1e8 - 1.0)) {
            fVar18 = fVar56 * local_148 + fVar58 * fStack_140;
            fVar23 = fVar57 * fStack_144 + fVar59 * fStack_13c;
            fVar26 = fVar58 * fStack_140 + fVar56 * local_148;
            fVar27 = fVar59 * fStack_13c + fVar57 * fStack_144;
            local_128 = (local_128 - local_158) * local_1e8 + local_158;
            fStack_124 = (fStack_124 - fStack_154) * local_1e8 + fStack_154;
            fStack_120 = (fStack_120 - fStack_150) * local_1e8 + fStack_150;
            fStack_11c = (fStack_11c - fStack_14c) * local_1e8 + fStack_14c;
            local_138 = CONCAT44((fVar40 - fStack_164) * local_1e8 + fStack_164,
                                 (fVar21 - local_168) * local_1e8 + local_168);
            uStack_130 = CONCAT44((fVar37 - fStack_15c) * local_1e8 + fStack_15c,
                                  (fVar35 - fStack_160) * local_1e8 + fStack_160);
            fVar56 = (float)(-(uint)(0.0 <= fVar23 + fVar18) & ((uint)(0.0 - fVar56) ^ (uint)fVar56)
                            ^ (uint)(0.0 - fVar56)) * (_DAT_146b342c0 - local_1e8) +
                     local_1e8 * local_148;
            fVar57 = (float)(-(uint)(0.0 <= fVar26 + fVar23) & ((uint)(0.0 - fVar57) ^ (uint)fVar57)
                            ^ (uint)(0.0 - fVar57)) * (fRam0000000146b342c4 - local_1e8) +
                     local_1e8 * fStack_144;
            fVar58 = (float)(-(uint)(0.0 <= fVar27 + fVar26) & ((uint)(0.0 - fVar58) ^ (uint)fVar58)
                            ^ (uint)(0.0 - fVar58)) * (fRam0000000146b342c8 - local_1e8) +
                     local_1e8 * fStack_140;
            fVar59 = (float)(-(uint)(0.0 <= fVar18 + fVar27) & ((uint)(0.0 - fVar59) ^ (uint)fVar59)
                            ^ (uint)(0.0 - fVar59)) * (fRam0000000146b342cc - local_1e8) +
                     local_1e8 * fStack_13c;
            auVar20._0_4_ = fVar56 * fVar56 + fVar58 * fVar58;
            auVar20._4_4_ = fVar57 * fVar57 + fVar59 * fVar59;
            auVar20._8_4_ = fVar58 * fVar58 + fVar56 * fVar56;
            auVar20._12_4_ = fVar59 * fVar59 + fVar57 * fVar57;
            fVar36 = auVar20._4_4_ + auVar20._0_4_;
            fVar39 = auVar20._8_4_ + auVar20._4_4_;
            fVar42 = auVar20._12_4_ + auVar20._8_4_;
            fVar43 = auVar20._0_4_ + auVar20._12_4_;
            auVar2._4_4_ = fVar39;
            auVar2._0_4_ = fVar36;
            auVar2._8_4_ = fVar42;
            auVar2._12_4_ = fVar43;
            auVar14 = rsqrtps(auVar20,auVar2);
            fVar18 = auVar14._0_4_;
            fVar23 = auVar14._4_4_;
            fVar26 = auVar14._8_4_;
            fVar27 = auVar14._12_4_;
            fVar18 = (fVar3 - fVar18 * fVar18 * fVar36 * fVar3) * fVar18 + fVar18;
            fVar23 = (fVar4 - fVar23 * fVar23 * fVar39 * fVar4) * fVar23 + fVar23;
            fVar26 = (fVar5 - fVar26 * fVar26 * fVar42 * fVar5) * fVar26 + fVar26;
            fVar27 = (fVar6 - fVar27 * fVar27 * fVar43 * fVar6) * fVar27 + fVar27;
            local_148 = (float)(((uint)(((fVar3 - fVar18 * fVar18 * fVar36 * fVar3) * fVar18 +
                                        fVar18) * fVar56) ^ _DAT_146b342a0) &
                                -(uint)(_DAT_146b34360 <= fVar36) ^ _DAT_146b342a0);
            fStack_144 = (float)(((uint)(((fVar4 - fVar23 * fVar23 * fVar39 * fVar4) * fVar23 +
                                         fVar23) * fVar57) ^ uRam0000000146b342a4) &
                                 -(uint)(fRam0000000146b34364 <= fVar39) ^ uRam0000000146b342a4);
            fStack_140 = (float)(((uint)(((fVar5 - fVar26 * fVar26 * fVar42 * fVar5) * fVar26 +
                                         fVar26) * fVar58) ^ uRam0000000146b342a8) &
                                 -(uint)(fRam0000000146b34368 <= fVar42) ^ uRam0000000146b342a8);
            fStack_13c = (float)(((uint)(((fVar6 - fVar27 * fVar27 * fVar43 * fVar6) * fVar27 +
                                         fVar27) * fVar59) ^ uRam0000000146b342ac) &
                                 -(uint)(fRam0000000146b3436c <= fVar43) ^ uRam0000000146b342ac);
          }
        }
        else {
          local_138 = CONCAT44(fStack_164,local_168);
          uStack_130 = CONCAT44(fStack_15c,fStack_160);
          local_148 = fVar56;
          fStack_144 = fVar57;
          fStack_140 = fVar58;
          fStack_13c = fVar59;
          local_128 = local_158;
          fStack_124 = fStack_154;
          fStack_120 = fStack_150;
          fStack_11c = fStack_14c;
        }
        FUN_140957900(*(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + lVar12 * 8),&local_148);
      }
    }
  }
  return;
}



// FUNCTION 142dbe2d0 FUN_142dbe2d0 body=457 status=ok
// SIG undefined FUN_142dbe2d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142dbe2d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [96];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 0x118);
  uVar7 = 0;
  fVar10 = 0.0;
  if (lVar1 != 0) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0x4c8) != 0)) {
      fVar10 = *(float *)(*(longlong *)(lVar1 + 0x4c8) + 0x318);
      goto LAB_142dbe386;
    }
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_142d9ceb0(&local_68);
  }
LAB_142dbe386:
  plVar4 = *(longlong **)(param_1 + 0x330);
  plVar5 = (longlong *)plVar4[0x17e];
  uVar8 = (longlong)(int)plVar4[0x17f] & 0x1fffffffffffffff;
  if (plVar5 + (int)plVar4[0x17f] < plVar5) {
    uVar8 = uVar7;
  }
  uVar6 = uVar7;
  if (uVar8 != 0) {
    do {
      *(undefined1 *)(*plVar5 + 0x192) = 0;
      FUN_1426b0300();
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (uVar6 != uVar8);
    plVar4 = *(longlong **)(param_1 + 0x330);
  }
  fVar9 = (float)(**(code **)(*plVar4 + 0x7f0))();
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x330) + 0xbf0);
  uVar6 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x330) + 0xbf8);
  uVar8 = uVar6 & 0x1fffffffffffffff;
  if (plVar5 + uVar6 < plVar5) {
    uVar8 = uVar7;
  }
  if (uVar8 != 0) {
    do {
      lVar1 = *plVar5;
      if ((*(byte *)(lVar1 + 0x10) & 0x10) == 0) {
        *(float *)(lVar1 + 0x88) = (fVar10 / fVar9) * *(float *)(lVar1 + 0x88);
      }
      else {
        FBodyInstance::SetMassOverride(lVar1,(fVar10 / fVar9) * *(float *)(lVar1 + 0x5c),1);
      }
      FUN_1426b0300(lVar1);
      plVar5 = plVar5 + 1;
      *(undefined1 *)(lVar1 + 0x192) = 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar8);
  }
  return;
}



// FUNCTION 142dbe4a0 FUN_142dbe4a0 body=1829 status=ok
// SIG undefined FUN_142dbe4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dbe4a0(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong *plVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  uint uVar18;
  uint *puVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_238;
  float local_230;
  undefined8 local_228;
  uint uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  uint uStack_210;
  int iStack_20c;
  undefined1 local_208 [16];
  longlong *local_1f8;
  undefined2 local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  float local_19c;
  longlong *local_198;
  uint uStack_190;
  uint uStack_18c;
  uint *puStack_188;
  undefined1 auStack_180 [16];
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [280];
  
  iVar9 = (int)param_2[5];
  puStack_188 = (uint *)(param_2 + 2);
  local_228._0_4_ = 0;
  local_228._4_4_ = 1;
  local_218._4_4_ = 0;
  uStack_210 = 0;
  if (iVar9 != 0) {
    puVar19 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar19 = puStack_188;
    }
    uVar18 = *puVar19;
    local_228._0_4_ = 0;
    uStack_210 = 0;
    while (uVar18 == 0) {
      lVar15 = (longlong)(int)(uint)local_228;
      uStack_210 = uStack_210 + 0x20;
      uVar18 = (uint)local_228 + 1;
      bVar6 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)(uint)local_228;
      local_228._0_4_ = uVar18;
      if (bVar6) goto LAB_142dbe577;
      uVar18 = puVar19[lVar15 + 1];
    }
    local_228._4_4_ = uVar18 - 1 & uVar18 ^ uVar18;
    iVar8 = 0x1f;
    if (local_228._4_4_ != 0) {
      for (; local_228._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (local_228._4_4_ == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_218._4_4_ = (uStack_210 - iVar8) + 0x1f;
    if (iVar9 < local_218._4_4_) {
LAB_142dbe577:
      local_218._4_4_ = iVar9;
    }
  }
  auStack_180._4_4_ = local_218._4_4_;
  auStack_180._0_4_ = 0xffffffff;
  auStack_180._8_4_ = uStack_210;
  auStack_180._12_4_ = iStack_20c;
  uStack_190 = (uint)local_228;
  uStack_18c = local_228._4_4_;
  local_1f0 = 0;
  local_170._0_4_ = SUB84(param_2,0);
  local_170._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_210 = 0xffffffff;
  iStack_20c = local_218._4_4_;
  uStack_220 = (uint)local_228;
  uStack_21c = local_228._4_4_;
  local_208._8_4_ = (undefined4)local_170;
  local_208._0_8_ = auStack_180._8_8_;
  local_208._12_4_ = local_170._4_4_;
  bVar6 = local_218._4_4_ < (int)param_2[5];
  local_228 = param_2;
  local_1f8 = param_2;
  local_198 = param_2;
  local_170 = param_2;
  local_218 = puStack_188;
  if (bVar6) {
    do {
      lVar15 = *local_228 + 4 + (longlong)iStack_20c * 0x3c;
      if ((*(uint *)(lVar15 + 8) >> (*(byte *)(param_1 + 0x48) & 0x1f) & 1) != 0) {
        if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
          lVar10 = *(longlong *)(param_1 + 0xe8);
          if (*(longlong *)(param_1 + 0xe8) == 0) {
            lVar10 = param_1 + 0xe0;
          }
          iVar9 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0xf0) - 1U &
                                    (longlong)*(int *)(lVar15 + 0x2c)) * 4);
          if (iVar9 != -1) {
            do {
              lVar10 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar9 * 0x14;
              if (*(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar9 * 0x14) ==
                  *(int *)(lVar15 + 0x2c)) {
                if (iVar9 != -1) goto LAB_142dbe714;
                break;
              }
              iVar9 = *(int *)(lVar10 + 0xc);
            } while (iVar9 != -1);
          }
        }
        lVar10 = 0;
LAB_142dbe714:
        lVar20 = *(longlong *)(param_1 + 0x98);
        lVar16 = (longlong)*(int *)(param_1 + 0xa0) * 0x38 + lVar20;
        if (lVar20 != lVar16) {
          pfVar1 = (float *)(lVar15 + 0xc);
          pfVar17 = (float *)(lVar20 + 0xc);
          do {
            if ((*(char *)(pfVar17 + 4) != '\0') ||
               (fVar21 = *(float *)(lVar15 + 0x10) - pfVar17[-1],
               fVar23 = *(float *)(lVar15 + 0x14) - *pfVar17,
               *(float *)(lVar10 + 4) <
               (*pfVar1 - pfVar17[-2]) * (*pfVar1 - pfVar17[-2]) + fVar21 * fVar21 + fVar23 * fVar23
               )) {
              fVar21 = pfVar17[-1];
              fVar23 = pfVar17[-2];
              fVar25 = pfVar17[2] - fVar21;
              fVar28 = *pfVar17;
              fVar26 = pfVar17[1] - fVar23;
              fVar24 = pfVar17[3] - fVar28;
              fVar27 = SQRT(fVar26 * fVar26 + fVar25 * fVar25 + fVar24 * fVar24);
              if (0.0001 <= fVar27) {
                pfVar11 = &local_1e8;
                fVar22 = 1.0 / fVar27;
                local_1e4 = fVar25 * fVar22;
                local_1e0 = fVar24 * fVar22;
                local_1e8 = fVar26 * fVar22;
              }
              else {
                local_1b4 = DAT_1468b5d98;
                pfVar11 = (float *)&local_1bc;
                local_1bc = _DAT_1468b5d90;
              }
              uVar12 = *(undefined8 *)pfVar11;
              local_1d0 = pfVar11[2];
              local_1d8 = uVar12;
              uVar12 = local_1d8;
              local_1d8._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
              fVar24 = (*pfVar1 - fVar23) * (float)uVar12 +
                       local_1d8._4_4_ * (*(float *)(lVar15 + 0x10) - fVar21) +
                       local_1d0 * (*(float *)(lVar15 + 0x14) - fVar28);
              if (0.0 <= fVar24) {
                if (fVar27 <= fVar24) {
                  fVar24 = fVar27;
                }
              }
              else {
                fVar24 = 0.0;
              }
              fVar21 = local_1d8._4_4_ * fVar24 + fVar21;
              fVar23 = (float)uVar12 * fVar24 + fVar23;
              fVar28 = local_1d0 * fVar24 + fVar28;
              fVar25 = *(float *)(lVar15 + 0x10) - fVar21;
              fVar24 = *pfVar1 - fVar23;
              fVar26 = *(float *)(lVar15 + 0x14) - fVar28;
              local_1d8 = uVar12;
              if (fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26 <= *(float *)(lVar10 + 4)) {
                bVar2 = *(byte *)(lVar10 + 8);
                uVar3 = *(undefined1 *)(pfVar17 + 9);
                uVar4 = *(undefined1 *)(lVar15 + 0x24);
                if (*(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x38) < DAT_1468591e4) {
                  _Init_thread_header(&DAT_1468591e4);
                  if (DAT_1468591e4 == -1) {
                    DAT_1468591e0 = 7;
                    _Init_thread_footer(&DAT_1468591e4);
                  }
                }
                if (bVar2 != DAT_1468591e0) {
                  if (PTR_FUN_146690ee0 == (undefined *)0x0) {
                    bVar7 = 1;
                  }
                  else {
                    bVar7 = (*(code *)PTR_FUN_146690ee0)(uVar4,uVar3);
                  }
                  if ((bVar2 & (byte)(1 << (bVar7 & 0x1f))) == 0) goto LAB_142dbeaad;
                }
                plVar5 = *(longlong **)(pfVar17 + 7);
                local_238 = 0;
                local_230 = 0.0;
                if (plVar5 == (longlong *)0x0) {
                  local_238 = CONCAT44(fVar21,fVar23);
                  local_230 = fVar28;
                }
                else {
                  uVar12 = FUN_142e79d90();
                  lVar13 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar12);
                  if (lVar13 == 0) {
                    lVar13 = *(longlong *)(*(longlong *)(pfVar17 + 7) + 0x168);
                    if (lVar13 == 0) {
                      local_1a8 = DAT_1468b5d98;
                      puVar14 = &local_1b0;
                      local_1b0 = _DAT_1468b5d90;
                    }
                    else {
                      puVar14 = (undefined8 *)&local_1c8;
                      local_1c8 = *(undefined4 *)(lVar13 + 0x220);
                      local_1c0 = *(undefined4 *)(lVar13 + 0x228);
                      uStack_1c4 = *(undefined4 *)(lVar13 + 0x224);
                    }
                    local_238 = *puVar14;
                    local_230 = *(float *)(puVar14 + 1);
                    local_19c = local_230;
                  }
                  else {
                    puVar14 = (undefined8 *)FUN_142dd0240(lVar13,local_168);
                    local_238 = *puVar14;
                    local_230 = *(float *)(puVar14 + 1);
                  }
                }
                FUN_142c1a410(local_158,param_1,pfVar17[5],&local_238,pfVar1,0,0);
                FUN_142c24730(lVar15,*(undefined8 *)(pfVar17 + 7),local_158);
              }
            }
LAB_142dbeaad:
            lVar20 = lVar20 + 0x38;
            pfVar17 = pfVar17 + 0xe;
          } while (lVar20 != lVar16);
        }
      }
      uStack_210 = uStack_210 & ~uStack_21c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_220);
    } while (iStack_20c < (int)local_218[6]);
    if (((char)local_1f0 != '\0') && (local_1f0._1_1_ != '\0')) {
      TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_1f8,(int)local_1f8[1] - *(int *)((longlong)local_1f8 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 142dbebd0 FUN_142dbebd0 body=465 status=ok
// SIG undefined FUN_142dbebd0(void)

void FUN_142dbebd0(longlong param_1,float param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  undefined1 local_48 [64];
  
  cVar3 = FUN_142dbf5d0();
  if (cVar3 != '\0') {
    fVar5 = *(float *)(param_1 + 0x210);
    fVar4 = param_2 + *(float *)(param_1 + 0x214);
    *(float *)(param_1 + 0x214) = fVar4;
    if (fVar5 <= 0.0) {
      uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x198);
      lVar2 = FRichCurve::GetLastKey(uVar1,local_48);
      fVar4 = *(float *)(param_1 + 0x214);
      fVar5 = *(float *)(lVar2 + 4);
    }
    if (fVar5 < fVar4) {
      fVar5 = *(float *)(param_1 + 0x210);
      if (fVar5 <= 0.0) {
        uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x198);
        lVar2 = FRichCurve::GetLastKey(uVar1,local_48);
        fVar4 = *(float *)(param_1 + 0x214);
        fVar5 = *(float *)(lVar2 + 4);
      }
      *(float *)(param_1 + 0x214) = fVar4 - fVar5;
    }
    fVar5 = *(float *)(param_1 + 0x290);
    fVar4 = param_2 + *(float *)(param_1 + 0x294);
    *(float *)(param_1 + 0x294) = fVar4;
    if (fVar5 <= 0.0) {
      uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x218);
      lVar2 = FRichCurve::GetLastKey(uVar1,local_48);
      fVar4 = *(float *)(param_1 + 0x294);
      fVar5 = *(float *)(lVar2 + 4);
    }
    if (fVar5 < fVar4) {
      fVar5 = *(float *)(param_1 + 0x290);
      if (fVar5 <= 0.0) {
        uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x218);
        lVar2 = FRichCurve::GetLastKey(uVar1,local_48);
        fVar4 = *(float *)(param_1 + 0x294);
        fVar5 = *(float *)(lVar2 + 4);
      }
      *(float *)(param_1 + 0x294) = fVar4 - fVar5;
    }
    param_2 = param_2 + *(float *)(param_1 + 0x314);
    fVar5 = *(float *)(param_1 + 0x310);
    *(float *)(param_1 + 0x314) = param_2;
    if (fVar5 <= 0.0) {
      uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x298);
      lVar2 = FRichCurve::GetLastKey(uVar1,local_48);
      param_2 = *(float *)(param_1 + 0x314);
      fVar5 = *(float *)(lVar2 + 4);
    }
    if (fVar5 < param_2) {
      fVar5 = *(float *)(param_1 + 0x310);
      if (fVar5 <= 0.0) {
        uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x298);
        lVar2 = FRichCurve::GetLastKey(uVar1,local_48);
        param_2 = *(float *)(param_1 + 0x314);
        fVar5 = *(float *)(lVar2 + 4);
      }
      *(float *)(param_1 + 0x314) = param_2 - fVar5;
    }
  }
  return;
}



// FUNCTION 142dbedb0 FUN_142dbedb0 body=253 status=ok
// SIG undefined FUN_142dbedb0(void)

void FUN_142dbedb0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_1[1];
  if (ABS(param_1[1]) <= ABS(*param_1)) {
    fVar2 = *param_1;
  }
  fVar4 = ABS(fVar2);
  if (fVar4 <= 0.1) {
    fVar2 = 0.0;
  }
  fVar3 = param_1[8];
  param_1[7] = fVar2;
  *(bool *)(param_1 + 4) = 1e-08 < ABS(fVar2);
  if (fVar4 <= 1e-08) {
    fVar4 = -fVar3;
  }
  else {
    fVar4 = fVar2 * param_1[2];
  }
  param_1[6] = fVar4;
  if ((1e-08 >= ABS(fVar2)) || (ABS(fVar3) <= 1e-08)) {
    fVar2 = param_1[3];
  }
  else {
    fVar2 = ((param_1[2] - fVar3) / param_1[2]) * param_1[3];
  }
  fVar1 = -fVar4;
  param_1[5] = fVar2;
  fVar2 = fVar4;
  if (1e-08 < fVar4) {
    fVar2 = fVar1;
    fVar1 = fVar4;
  }
  fVar3 = fVar4 * 0.0333 + fVar3;
  if (fVar3 < fVar2) {
    param_1[8] = fVar2;
    return;
  }
  if (fVar3 <= fVar1) {
    fVar1 = fVar3;
  }
  param_1[8] = fVar1;
  return;
}



// FUNCTION 142dbeeb0 FUN_142dbeeb0 body=552 status=ok
// SIG undefined FUN_142dbeeb0(void)

void FUN_142dbeeb0(undefined8 param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  float *pfVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [8];
  float local_30;
  
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return;
  }
  cVar4 = '\0';
  bVar1 = *(byte *)(param_3 + 0x11);
  if ((((*(byte *)(param_2 + 0x25) & 4) != 0) && ((bVar1 & 1) != 0)) ||
     (((*(byte *)(param_2 + 0x25) & 8) != 0 && ((bVar1 & 2) != 0)))) {
    cVar4 = '\x01';
  }
  if ((bVar1 & 4) != 0) {
    cVar4 = '\x01';
  }
  FUN_142397540(*(longlong *)(param_2 + 0x10),cVar4,1);
  if (cVar4 != '\0') {
    return;
  }
  fVar5 = *(float *)(param_2 + 0x20);
  pfVar2 = (float *)FRotator::Vector(param_3 + 0xb,local_38);
  local_40 = pfVar2[2] * fVar5 + (float)param_3[10];
  local_48 = CONCAT44(pfVar2[1] * fVar5 + (float)param_3[9],fVar5 * *pfVar2 + (float)param_3[8]);
  FUN_142399750(*(undefined8 *)(param_2 + 0x10),&local_48,param_3 + 5);
  cVar4 = *(char *)(param_2 + 0x24);
  if (cVar4 == '\x05') goto LAB_142dbf084;
  if (((param_3[1] < *param_3) && (param_3[2] == 2)) || (param_3[2] == 1)) {
    fVar7 = (float)param_3[3] * *(float *)(param_2 + 0x20);
    fVar5 = (float)param_3[4];
    fVar8 = fVar7 / fVar5;
  }
  else {
    fVar8 = (float)param_3[3] * *(float *)(param_2 + 0x20);
    fVar5 = (float)param_3[4];
    fVar7 = fVar5 * fVar8;
  }
  local_40 = 1.0;
  fVar6 = 1.0 / *(float *)(param_2 + 0x1c);
  fVar7 = fVar7 / *(float *)(param_2 + 0x18);
  fVar8 = fVar6 * fVar8;
  fVar6 = fVar6 * *(float *)(param_2 + 0x18);
  if (cVar4 != '\x04') {
    if (cVar4 == '\x06') {
      if (fVar5 <= fVar6) {
        fVar8 = (fVar5 / fVar6) * fVar8;
      }
      else {
        fVar7 = (fVar6 / fVar5) * fVar7;
      }
    }
    else {
      if (cVar4 == '\0') {
LAB_142dbf049:
        local_40 = fVar7;
      }
      else {
        local_40 = fVar8;
        if (cVar4 == '\x02') {
          if (fVar6 < fVar5) goto LAB_142dbf049;
        }
        else if ((cVar4 == '\x03') && (fVar5 < fVar6)) goto LAB_142dbf049;
      }
      fVar8 = 1.0;
      fVar7 = 1.0;
    }
  }
  local_48 = CONCAT44(fVar8 * local_40,fVar7 * local_40);
  local_30 = local_40;
  FUN_142399c30(*(undefined8 *)(param_2 + 0x10),&local_48);
LAB_142dbf084:
  lVar3 = *(longlong *)(param_2 + 0x10);
  if ((*(byte *)(lVar3 + 0x24c) & 1) == 0) {
    FUN_140942fb0(lVar3,0,0);
    lVar3 = *(longlong *)(param_2 + 0x10);
  }
  FUN_142616380(lVar3,1,1);
  return;
}



// FUNCTION 142dbf0e0 FUN_142dbf0e0 body=430 status=ok
// SIG undefined FUN_142dbf0e0(void)

void FUN_142dbf0e0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_58 [80];
  
  lVar11 = *(longlong *)(param_1 + 0x118);
  if (lVar11 != 0) {
    lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(longlong *)(lVar11 + 0x528) != 0)) && (0 < *(int *)(param_1 + 0x180))) {
      FUN_142d9d6e0(param_1,local_58,lVar11);
      iVar9 = *(int *)(param_1 + 0x180) + -1;
      if (-1 < iVar9) {
        lVar5 = (longlong)iVar9 * 0x30;
        lVar10 = (longlong)*(int *)(param_1 + 0x180) * 0x30;
        lVar11 = lVar5;
        do {
          lVar1 = *(longlong *)(param_1 + 0x178);
          lVar6 = *(longlong *)(lVar5 + 0x10 + lVar1);
          if (lVar6 == 0) {
LAB_142dbf21e:
            iVar7 = *(int *)(param_1 + 0x180);
            iVar4 = (iVar7 - iVar9) + -1;
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar11 + lVar1),(void *)(lVar10 + lVar1),(longlong)iVar4 * 0x30);
              iVar7 = *(int *)(param_1 + 0x180);
            }
            *(int *)(param_1 + 0x180) = iVar7 + -1;
          }
          else {
            uVar3 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar3 < (int)DAT_1469e91c4) {
              uVar8 = uVar3 & 0xffff;
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 + 0xffff;
                uVar8 = uVar8 - 0x10000;
              }
              lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                      (longlong)(int)uVar8 * 0x18;
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0) goto LAB_142dbf21e;
            FUN_142dbeeb0(param_1,lVar5 + lVar1,local_58);
          }
          lVar10 = lVar10 + -0x30;
          lVar11 = lVar11 + -0x30;
          lVar5 = lVar5 + -0x30;
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
      }
    }
  }
  return;
}



// FUNCTION 142dbf290 FUN_142dbf290 body=37 status=ok
// SIG undefined FUN_142dbf290(void)

float FUN_142dbf290(float param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  
  fVar1 = param_1;
  if ((param_1 != param_2) && (fVar1 = param_2, param_3 != 0.0)) {
    fVar1 = (float)FMath::FInterpConstantTo(param_1,param_2,param_4,param_3);
    return fVar1;
  }
  return fVar1;
}



// FUNCTION 142dbf2c0 FUN_142dbf2c0 body=779 status=ok
// SIG undefined FUN_142dbf2c0(void)

void FUN_142dbf2c0(longlong param_1,float param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  longlong *local_res8;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  
  plVar12 = (longlong *)0x0;
  lVar10 = *(longlong *)(param_1 + 0x118);
  plVar9 = plVar12;
  if (lVar10 != 0) {
    lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar9 = *(longlong **)(lVar10 + 0x848);
    }
  }
  if ((*(char *)(param_1 + 0x198) == '\0') && (plVar9 != (longlong *)0x0)) {
    cVar7 = (**(code **)(*plVar9 + 0x950))();
    local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffffffffff00);
    if (cVar7 == '\0') goto LAB_142dbf368;
  }
  local_res8 = (longlong *)CONCAT71(local_res8._1_7_,1);
LAB_142dbf368:
  local_58 = (longlong *)0x0;
  plVar9 = *(longlong **)(param_1 + 0x188);
  iVar11 = 0;
  local_4c = 0;
  plVar14 = plVar9 + (longlong)*(int *)(param_1 + 400) * 7;
  if (plVar9 != plVar14) {
    cVar7 = (char)local_res8;
    plVar13 = plVar12;
    plVar15 = plVar12;
    do {
      lVar10 = *plVar9;
      if ((lVar10 == 0) || (plVar9[1] == 0)) {
LAB_142dbf483:
        lVar10 = (longlong)(int)plVar13;
        local_50 = (int)plVar13 + 1;
        if ((int)plVar15 < (int)local_50) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_58,plVar13);
          plVar15 = (longlong *)(ulonglong)local_4c;
          plVar12 = local_58;
        }
        plVar13 = (longlong *)(ulonglong)local_50;
        lVar8 = plVar9[1];
        plVar12[lVar10 * 7] = *plVar9;
        (plVar12 + lVar10 * 7)[1] = lVar8;
        lVar8 = plVar9[3];
        plVar12[lVar10 * 7 + 2] = plVar9[2];
        (plVar12 + lVar10 * 7 + 2)[1] = lVar8;
        uVar4 = *(undefined4 *)((longlong)plVar9 + 0x24);
        lVar8 = plVar9[5];
        uVar5 = *(undefined4 *)((longlong)plVar9 + 0x2c);
        plVar1 = plVar12 + lVar10 * 7 + 4;
        *(int *)plVar1 = (int)plVar9[4];
        *(undefined4 *)((longlong)plVar1 + 4) = uVar4;
        *(int *)(plVar1 + 1) = (int)lVar8;
        *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
        plVar12[lVar10 * 7 + 6] = plVar9[6];
      }
      else {
        bVar6 = false;
        if (*(char *)(lVar10 + 0x3c) != '\0') {
          if (*(char *)(lVar10 + 0x44) != '\0') {
            if (*(longlong *)(param_1 + 0x120) == 0) {
              lVar8 = FUN_1423407b0(param_1);
              lVar10 = *plVar9;
              if (lVar8 == 0) goto LAB_142dbf43d;
            }
            lVar8 = *(longlong *)(param_1 + 0x120);
            if (lVar8 == 0) {
              lVar8 = FUN_1423407b0(param_1);
            }
            lVar10 = *plVar9;
            if (*(float *)(lVar8 + 0x790) <=
                *(float *)(lVar10 + 0x48) + *(float *)((longlong)plVar9 + 0x24)) goto LAB_142dbf43d;
          }
          bVar6 = true;
          *(float *)(plVar9 + 4) = param_2 * *(float *)(lVar10 + 0x40) + *(float *)(plVar9 + 4);
        }
LAB_142dbf43d:
        fVar2 = *(float *)(plVar9 + 4);
        fVar16 = *(float *)(lVar10 + 0x30);
        if ((((fVar2 < fVar16) && (*(char *)(lVar10 + 0x38) != '\0')) ||
            ((fVar3 = *(float *)(lVar10 + 0x34), fVar3 < fVar2 && (*(char *)(lVar10 + 0x39) != '\0')
             ))) || ((*(char *)(lVar10 + 0x3a) != '\0' && (cVar7 != '\0')))) {
          if (*(char *)(lVar10 + 0x3b) != '\0') {
            FUN_142e724b0(param_1,plVar9[1],plVar9[2],0);
          }
          goto LAB_142dbf483;
        }
        if (bVar6) {
          if ((fVar16 <= fVar2) && (fVar16 = fVar2, fVar3 <= fVar2)) {
            fVar16 = fVar3;
          }
          *(float *)(plVar9 + 4) = fVar16;
          if (plVar9[5] == 0) {
            FUN_142e72560(param_1,plVar9[1],plVar9[2],plVar9[3],fVar16);
          }
          else {
            FUN_1425a2750(plVar9[5],plVar9[3],fVar16);
          }
        }
      }
      iVar11 = (int)plVar13;
      plVar9 = plVar9 + 7;
    } while (plVar9 != plVar14);
  }
  for (plVar9 = plVar12; plVar9 != plVar12 + (longlong)iVar11 * 7; plVar9 = plVar9 + 7) {
    local_res8 = plVar9;
    FUN_142d970b0((undefined8 *)(param_1 + 0x188),&local_res8);
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  return;
}



// FUNCTION 142dbf5d0 FUN_142dbf5d0 body=156 status=ok
// SIG undefined FUN_142dbf5d0(void)

ulonglong FUN_142dbf5d0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x198);
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x198);
    uVar2 = lVar1 + 0x60;
    if (0 < *(int *)(lVar1 + 0x68)) {
      lVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x218);
      uVar2 = 0;
      if (lVar1 != 0) {
        lVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x218);
        uVar2 = lVar1 + 0x60;
        if (0 < *(int *)(lVar1 + 0x68)) {
          lVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x298);
          uVar2 = 0;
          if (lVar1 != 0) {
            lVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x298);
            uVar2 = lVar1 + 0x60;
            if (0 < *(int *)(lVar1 + 0x68)) {
              return CONCAT71((int7)(uVar2 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142dbf670 WorldVectorToSpaceNoScale body=399 status=ok
// SIG undefined WorldVectorToSpaceNoScale(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * WorldVectorToSpaceNoScale
                  (float *param_1,int param_2,float *param_3,float *param_4,float *param_5)

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
  
  if (param_2 == 0) {
    fVar6 = param_3[2];
    fVar5 = param_3[1];
    fVar4 = *param_3;
    fVar1 = *param_4;
    fVar2 = param_4[1];
    fVar3 = param_4[2];
    fVar7 = param_4[3];
  }
  else {
    if (param_2 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      param_1[2] = param_3[2];
      return param_1;
    }
    if (param_2 != 2) {
      *(undefined8 *)param_1 = _DAT_1468b5d90;
      param_1[2] = DAT_1468b5d98;
      return param_1;
    }
    fVar6 = param_3[2];
    fVar7 = *param_4 * _DAT_146b34390;
    fVar8 = param_4[1] * fRam0000000146b34394;
    fVar9 = param_4[2] * fRam0000000146b34398;
    fVar10 = param_4[3] * fRam0000000146b3439c;
    fVar5 = param_3[1];
    fVar4 = *param_3;
    fVar1 = fVar6 * fVar8 - fVar5 * fVar9;
    fVar2 = fVar4 * fVar9 - fVar6 * fVar7;
    fVar3 = fVar5 * fVar7 - fVar4 * fVar8;
    fVar1 = fVar1 + fVar1;
    fVar2 = fVar2 + fVar2;
    fVar3 = fVar3 + fVar3;
    fVar4 = (fVar3 * fVar8 - fVar2 * fVar9) + fVar10 * fVar1 + fVar4;
    fVar5 = (fVar1 * fVar9 - fVar3 * fVar7) + fVar10 * fVar2 + fVar5;
    fVar6 = (fVar2 * fVar7 - fVar1 * fVar8) + fVar10 * fVar3 + fVar6;
    fVar1 = *param_5;
    fVar2 = param_5[1];
    fVar3 = param_5[2];
    fVar7 = param_5[3];
  }
  fVar1 = fVar1 * _DAT_146b34390;
  fVar2 = fVar2 * fRam0000000146b34394;
  fVar3 = fVar3 * fRam0000000146b34398;
  fVar7 = fVar7 * fRam0000000146b3439c;
  fVar8 = fVar6 * fVar2 - fVar5 * fVar3;
  fVar9 = fVar4 * fVar3 - fVar6 * fVar1;
  fVar10 = fVar5 * fVar1 - fVar4 * fVar2;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  *param_1 = (fVar10 * fVar2 - fVar9 * fVar3) + fVar7 * fVar8 + fVar4;
  param_1[2] = (fVar9 * fVar1 - fVar8 * fVar2) + fVar7 * fVar10 + fVar6;
  param_1[1] = (fVar8 * fVar3 - fVar10 * fVar1) + fVar7 * fVar9 + fVar5;
  return param_1;
}



// FUNCTION 142dbf880 FUN_142dbf880 body=189 status=ok
// SIG undefined FUN_142dbf880(void)

void FUN_142dbf880(longlong param_1,longlong param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  iVar2 = *param_3;
  uVar3 = *param_4;
  lVar6 = (longlong)iVar2 * 0x100 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x2f8);
  *(undefined4 *)(lVar6 + 0x3c) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(lVar6 + 0x40) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(lVar6 + 0x44) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(lVar6 + 0x48) = *(undefined4 *)(param_2 + 0x18);
  FUN_142db6820(*(undefined8 *)(param_1 + 8),(longlong)iVar2,*(byte *)(param_2 + 9) & 1);
  if (*(char *)(param_2 + 8) != '\0') {
    puVar5 = *(undefined4 **)(lVar6 + 8);
    puVar1 = puVar5 + *(int *)(lVar6 + 0x10);
    for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      local_res10[0] = *puVar5;
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38);
      local_res8[0] = uVar3;
      if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_guard_xfg_dispatch_icall_nop();
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,param_2,local_res10,local_res8);
    }
  }
  return;
}



// FUNCTION 142dbf940 FUN_142dbf940 body=255 status=ok
// SIG undefined FUN_142dbf940(void)

void FUN_142dbf940(longlong param_1,int *param_2,int *param_3,float *param_4,float *param_5)

{
  longlong *plVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  pfVar2 = param_5;
  lVar7 = (longlong)*param_2;
  iVar6 = 0;
  lVar5 = lVar7 * 0x100;
  *param_3 = *param_3 + *(int *)(**(longlong **)(param_1 + 8) + 0x10 + lVar5);
  lVar4 = **(longlong **)(param_1 + 0x10);
  *param_4 = *(float *)(lVar4 + 0x10 + lVar7 * 0x18) + *param_4;
  lVar3 = **(longlong **)(param_1 + 8);
  *param_5 = *(float *)(lVar4 + 0x14 + lVar7 * 0x18) + *param_5;
  if (0 < *(int *)(lVar5 + 0x10 + lVar3)) {
    lVar4 = 0;
    do {
      param_5._0_4_ =
           *(undefined4 *)
            ((longlong)*(int *)(*(longlong *)(lVar5 + 8 + lVar3) + lVar4) * 0x100 + 0x24 + lVar3);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
      if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_guard_xfg_dispatch_icall_nop();
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,&param_5,param_3,param_4,pfVar2);
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 4;
      lVar3 = **(longlong **)(param_1 + 8);
    } while (iVar6 < *(int *)(lVar5 + 0x10 + lVar3));
  }
  return;
}



// FUNCTION 142dbfa40 FUN_142dbfa40 body=204 status=ok
// SIG undefined FUN_142dbfa40(void)

void FUN_142dbfa40(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 local_res8 [2];
  
  lVar5 = (longlong)*param_2 * 0x100 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x600);
  *(undefined4 *)(lVar5 + 0x3c) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xc);
  *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x14);
  *(undefined4 *)(lVar5 + 0x48) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 9);
  *(undefined4 *)(lVar5 + 0x6c) = 3;
  *(byte *)(lVar5 + 0x38) = *(byte *)(lVar5 + 0x38) ^ (bVar2 ^ *(byte *)(lVar5 + 0x38)) & 1;
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 8) != '\0') {
    puVar4 = *(undefined4 **)(lVar5 + 8);
    puVar1 = puVar4 + *(int *)(lVar5 + 0x10);
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      local_res8[0] = *puVar4;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
      if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_guard_xfg_dispatch_icall_nop();
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,local_res8);
    }
  }
  return;
}



// FUNCTION 142dbfb10 FUN_142dbfb10 body=258 status=ok
// SIG undefined FUN_142dbfb10(void)

void FUN_142dbfb10(longlong param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  
  lVar4 = *(longlong *)(param_1 + 8);
  iVar3 = 0;
  lVar5 = (longlong)*param_2 * 0x100;
  if (0 < *(int *)(*(longlong *)(lVar4 + 0x2f8) + 0x10 + lVar5)) {
    lVar6 = 0;
    do {
      iVar1 = *(int *)(lVar6 + *(longlong *)(*(longlong *)(lVar4 + 0x2f8) + 8 + lVar5));
      lVar4 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x330) + 0xc00) +
               (longlong)*(int *)((longlong)iVar1 * 0x100 + 4 + *(longlong *)(lVar4 + 0x2f8)) * 8);
      if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 8), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0xb8))(plVar2,0x40000000);
        (**(code **)(**(longlong **)(lVar4 + 8) + 0xa8))(*(longlong **)(lVar4 + 8),0x40000000);
      }
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38);
      local_res8[0] = iVar1;
      if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_guard_xfg_dispatch_icall_nop();
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,local_res8);
      lVar4 = *(longlong *)(param_1 + 8);
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 4;
    } while (iVar3 < *(int *)(*(longlong *)(lVar4 + 0x2f8) + 0x10 + lVar5));
  }
  return;
}



// FUNCTION 142dbfc60 FUN_142dbfc60 body=110 status=ok
// SIG undefined FUN_142dbfc60(void)

void FUN_142dbfc60(undefined8 param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 local_res20;
  
  uVar3 = (ulonglong)param_3;
  FUN_1426f2910();
  if (0 < (int)param_3) {
    plVar2 = (longlong *)(param_2 + 8);
    do {
      if ((((*plVar2 != 0) && (piVar1 = *(int **)(*plVar2 + 0x10), piVar1 != (int *)0x0)) &&
          (*piVar1 == 8)) && (*(longlong *)(piVar1 + 2) != 0)) {
        local_res20 = *(undefined8 *)(piVar1 + 4);
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                  (*(longlong *)(piVar1 + 2) + 0x1e8,&local_res20);
      }
      plVar2 = plVar2 + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 142dbfcd0 FUN_142dbfcd0 body=543 status=ok
// SIG undefined FUN_142dbfcd0(void)

float * FUN_142dbfcd0(float *param_1,float param_2,float *param_3,float *param_4)

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
  float local_res18;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = *param_4;
  fVar6 = param_4[1];
  local_res18 = 1.0;
  fVar10 = fVar5 * fVar1 + fVar6 * fVar2 + param_4[2] * fVar3 + param_4[3] * fVar4;
  if (fVar10 < 0.0) {
    local_res18 = -1.0;
  }
  fVar10 = ABS(fVar10);
  fVar9 = 1.0 - fVar10 * fVar10;
  if (fVar9 < 1e-16) {
    *param_1 = fVar1;
    param_1[1] = fVar2;
    param_1[2] = fVar3;
    param_1[3] = fVar4;
  }
  else {
    fVar9 = SQRT(fVar9);
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar9,fVar10);
    fVar9 = 1.0 / fVar9;
    fVar7 = _guard_xfg_dispatch_icall_nop((1.0 - param_2) * fVar10);
    fVar7 = fVar7 * fVar9;
    fVar8 = _guard_xfg_dispatch_icall_nop(fVar10 * param_2);
    fVar10 = param_4[2];
    local_res18 = fVar8 * fVar9 * local_res18;
    *param_1 = fVar5 * local_res18 + fVar1 * fVar7;
    param_1[1] = fVar6 * local_res18 + fVar2 * fVar7;
    param_1[2] = fVar10 * local_res18 + fVar3 * fVar7;
    param_1[3] = param_4[3] * local_res18 + fVar4 * fVar7;
  }
  return param_1;
}



// FUNCTION 142dbfef0 FUN_142dbfef0 body=66 status=ok
// SIG undefined FUN_142dbfef0(void)

void FUN_142dbfef0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1458acf38;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1458acf80;
  }
  return;
}



// FUNCTION 142dbff40 FUN_142dbff40 body=62 status=ok
// SIG undefined FUN_142dbff40(void)

void FUN_142dbff40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_142dcc740();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return;
}



// FUNCTION 142dbff80 FUN_142dbff80 body=64 status=ok
// SIG undefined FUN_142dbff80(void)

undefined1 FUN_142dbff80(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_142dcc740();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return 1;
}



// FUNCTION 142dbffc0 FUN_142dbffc0 body=180 status=ok
// SIG undefined FUN_142dbffc0(void)

longlong FUN_142dbffc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_14217bdd0(param_1,0,param_3,param_4,param_2);
  cVar2 = FUN_14218fca0(param_1);
  if (cVar2 != '\0') {
    cVar2 = FUN_14218fca0(param_1);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(param_1 + 0x2e0);
      *(int *)(param_1 + 0x2e0) = iVar1 + 1;
      if (*(int *)(param_1 + 0x2e4) < iVar1 + 1) {
        FUN_140ae1b70(param_1 + 0x38,iVar1);
      }
      lVar3 = *(longlong *)(param_1 + 0x2d8);
      if (*(longlong *)(param_1 + 0x2d8) == 0) {
        lVar3 = param_1 + 0x38;
      }
      FUN_142dc00c0(lVar3 + (longlong)iVar1 * 0xa8,param_4,param_1 + 8,param_5,param_6);
    }
  }
  return param_1;
}



// FUNCTION 142dc0080 FUN_142dc0080 body=61 status=ok
// SIG undefined FUN_142dc0080(void)

undefined8
FUN_142dc0080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_142dbffc0(param_1,&local_18,param_2,param_3,param_4,param_5);
  return param_1;
}



// FUNCTION 142dc00c0 FUN_142dc00c0 body=325 status=ok
// SIG undefined FUN_142dc00c0(void)

longlong FUN_142dc00c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 local_58 [4];
  undefined1 local_38 [32];
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_14217e740(local_58);
  FUN_142194380(local_58,0x28,0,0,0);
  local_58[0] = *param_4;
  FUN_14217e610(local_38,*param_5);
  lVar3 = 2;
  if (*(int *)(param_1 + 0x8c) < 2) {
    FUN_140a70170(param_1,2);
  }
  puVar5 = local_58;
  do {
    iVar1 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar1 + 1;
    if (*(int *)(param_1 + 0x8c) < iVar1 + 1) {
      TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1;
    }
    FUN_14217e5b0(lVar2 + (longlong)iVar1 * 0x20,puVar5);
    puVar5 = puVar5 + 4;
  } while (puVar5 != (undefined8 *)&stack0xffffffffffffffe8);
  puVar4 = &stack0xffffffffffffffe8;
  do {
    puVar4 = puVar4 + -0x20;
    FUN_14217f430(puVar4);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x90) = param_2;
  FString::FString(param_1 + 0x98,param_3);
  return param_1;
}



// FUNCTION 142dc0210 FUN_142dc0210 body=243 status=ok
// SIG undefined FUN_142dc0210(void)

undefined8 FUN_142dc0210(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 local_78 [24];
  longlong local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = plVar3 + (longlong)(int)param_1[1] * 7;
  while( true ) {
    if (plVar3 == plVar4) {
      return 0;
    }
    lVar1 = *param_2;
    local_40 = 0;
    local_38 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = 0;
    local_60 = lVar1;
    if (lVar1 == 0) {
      local_48 = 0;
    }
    else {
      uVar2 = FSoftObjectPath::FSoftObjectPath(local_78,lVar1);
      FSoftObjectPath::operator=(&local_48,uVar2);
      FWeakObjectPtr::operator=(&local_58,lVar1);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_54 = CONCAT44(DAT_1464b56f4,(undefined4)local_54);
    }
    bVar5 = *plVar3 == local_60;
    local_30 = 0;
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (bVar5) break;
    plVar3 = plVar3 + 7;
  }
  return 1;
}



// FUNCTION 142dc0310 FUN_142dc0310 body=729 status=ok
// SIG undefined FUN_142dc0310(void)

uint * FUN_142dc0310(longlong param_1,uint *param_2,ulonglong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint local_res8 [2];
  uint local_38 [2];
  ulonglong *local_30;
  
  FUN_142dc4c00(param_1,local_38);
  uVar12 = 0xffffffff;
  uVar2 = *param_3;
  *param_2 = local_38[0];
  *local_30 = uVar2;
  *(undefined4 *)(local_30 + 1) = 0xffffffff;
  uVar9 = *(int *)(param_1 + 0x108) - *(int *)(param_1 + 300);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar9 != 1) {
    FUN_142dcbcd0(param_1,local_res8,uVar2);
    uVar4 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar7 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar7 + lVar8 * 0x10),local_30,8);
      bVar3 = (byte)local_38[0] & 0x1f;
      if (*(int *)(param_1 + 300) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar8 = param_1;
        }
        *(uint *)(lVar8 + (longlong)*(int *)(param_1 + 0x128) * 0x10) = local_38[0];
      }
      lVar8 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar8 = param_1;
      }
      *(undefined4 *)(lVar8 + (longlong)(int)local_38[0] * 0x10) = 0xffffffff;
      if (0 < *(int *)(param_1 + 300)) {
        uVar12 = *(undefined4 *)(param_1 + 0x128);
      }
      *(undefined4 *)(lVar8 + 4 + (longlong)(int)local_38[0] * 0x10) = uVar12;
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
      *(uint *)(param_1 + 0x128) = local_38[0];
      lVar8 = *(longlong *)(param_1 + 0x118);
      *param_2 = uVar4;
      if (lVar8 == 0) {
        lVar8 = param_1 + 0x110;
      }
      puVar1 = (uint *)(lVar8 + (longlong)
                                ((int)(local_38[0] + ((int)local_38[0] >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142dc05bb;
    }
  }
  uVar4 = uVar9 >> 1;
  iVar6 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  iVar5 = 0x20;
  cVar10 = '\0';
  if (uVar4 != 0) {
    iVar5 = 0x1f - iVar6;
  }
  uVar4 = uVar4 - 1;
  iVar6 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  if (uVar4 != 0) {
    cVar10 = '\x1f' - (char)iVar6;
  }
  uVar11 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  uVar4 = 8;
  if ((7 < uVar11) && (uVar4 = uVar11, uVar9 < 4)) {
    uVar4 = 8;
  }
  if (((int)uVar9 < 1) ||
     ((*(int *)(param_1 + 0x158) != 0 && ((int)uVar4 <= *(int *)(param_1 + 0x158))))) {
    iVar6 = (int)(*local_30 >> 4);
    uVar4 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar11 = -(uVar4 + iVar6) ^ uVar4 >> 0xd;
    uVar9 = (iVar6 - uVar4) - uVar11 ^ uVar11 >> 0xc;
    uVar4 = (uVar4 - uVar9) - uVar11 ^ uVar9 << 0x10;
    uVar11 = (uVar11 - uVar4) - uVar9 ^ uVar4 >> 5;
    uVar9 = (uVar9 - uVar4) - uVar11 ^ uVar11 >> 3;
    uVar4 = (uVar4 - uVar9) - uVar11 ^ uVar9 << 10;
    uVar9 = ((uVar11 - uVar4) - uVar9 ^ uVar4 >> 0xf) & *(int *)(param_1 + 0x158) - 1U;
    *(uint *)((longlong)local_30 + 0xc) = uVar9;
    lVar8 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar8 = param_1 + 0x130;
    }
    *(undefined4 *)(local_30 + 1) =
         *(undefined4 *)
          (lVar8 + ((longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)(int)uVar9) * 4);
    lVar8 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar8 = param_1 + 0x130;
    }
    *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)(int)uVar9) * 4) =
         local_38[0];
  }
  else {
    *(uint *)(param_1 + 0x158) = uVar4;
    FUN_142dd8e60(param_1);
  }
LAB_142dc05bb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142dc05f0 FUN_142dc05f0 body=244 status=ok
// SIG undefined FUN_142dc05f0(void)

longlong * FUN_142dc05f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 local_78 [24];
  longlong local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = plVar3 + (longlong)(int)param_1[1] * 7;
  while( true ) {
    if (plVar3 == plVar4) {
      return (longlong *)0x0;
    }
    lVar1 = *param_2;
    local_40 = 0;
    local_38 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = 0;
    local_60 = lVar1;
    if (lVar1 == 0) {
      local_48 = 0;
    }
    else {
      uVar2 = FSoftObjectPath::FSoftObjectPath(local_78,lVar1);
      FSoftObjectPath::operator=(&local_48,uVar2);
      FWeakObjectPtr::operator=(&local_58,lVar1);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_54 = CONCAT44(DAT_1464b56f4,(undefined4)local_54);
    }
    bVar5 = *plVar3 == local_60;
    local_30 = 0;
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (bVar5) break;
    plVar3 = plVar3 + 7;
  }
  return plVar3;
}



// FUNCTION 142dc06f0 FUN_142dc06f0 body=678 status=ok
// SIG undefined FUN_142dc06f0(void)

longlong FUN_142dc06f0(longlong param_1,float *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
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
  
  if (param_1 != 0) {
    plVar2 = (longlong *)(param_1 + 0x2b0);
    uStack_94 = 1;
    uVar3 = *(uint *)(param_1 + 0x2d8);
    puVar1 = (uint *)(param_1 + 0x2c0);
    local_98 = 0;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar3 != 0) {
      puVar11 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar4 = *puVar11;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar4 == 0) {
        lVar9 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar7 = local_98 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar7;
        if (bVar5) goto LAB_142dc07dd;
        uVar4 = puVar11[lVar9 + 1];
      }
      uStack_94 = uVar4 - 1 & uVar4 ^ uVar4;
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
LAB_142dc07dd:
        uStack_84 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x2d8);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar10 = uVar4 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = plVar2;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar4;
    if (uVar4 != uVar3) {
      puVar11 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar7 = (int)uVar4 >> 5;
      while (uVar8 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142dc08b5;
        uVar8 = puVar11[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
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
      uStack_84 = (uVar10 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_142dc08b5:
        uStack_84 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) break;
      lVar9 = *(longlong *)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
      if (lVar9 != 0) {
        lVar6 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (*param_2 - 1.0 < *(float *)(lVar9 + 0x36c))) {
          return lVar9;
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
  }
  return 0;
}



// FUNCTION 142dc09a0 FUN_142dc09a0 body=1089 status=ok
// SIG undefined FUN_142dc09a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142dc09a0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong **_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [32];
  char local_e8;
  longlong *local_e0;
  int local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  longlong **local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 0x48) = 0;
  local_e8 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x4c)) {
    TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_d4 = 1;
  local_e0 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_d0 = (uint *)(param_1 + 0x2c0);
  local_ac = 0;
  iVar13 = 0;
  local_d8 = 0;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_d0;
    }
    uVar12 = *puVar10;
    iStack_c0 = 0;
    local_d8 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar5 = local_d8 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar5;
      if (bVar3) goto LAB_142dc0aba;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_d4 = uVar12 - 1 & uVar12 ^ uVar12;
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
    uStack_c4 = (iStack_c0 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_c4) {
LAB_142dc0aba:
      uStack_c4 = uVar1;
    }
  }
  local_c8 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_78 = CONCAT44(uStack_d4,local_d8);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_c4;
  local_88 = CONCAT44(uStack_bc,iStack_c0);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_a0 = local_d8;
  uStack_9c = uStack_d4;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_d0;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142dc0b7d;
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
LAB_142dc0b7d:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_98 = puStack_d0;
  local_80 = local_e0;
  puStack_70 = puStack_d0;
  uStack_60 = local_88;
  local_a8 = local_e0;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  while( true ) {
    if ((uStack_8c == uVar12) && (local_98 == puStack_d0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_a8 == local_e0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_a8 + (longlong)(int)uStack_8c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_142a07000();
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
        iVar2 = *(int *)(param_2 + 0x48);
        *(int *)(param_2 + 0x48) = iVar2 + 1;
        if (*(int *)(param_2 + 0x4c) < iVar2 + 1) {
          TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                    (param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_e8 != '\0') && (lVar7 != 0)) {
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
        local_b0 = iVar13 + 1;
        if (iVar5 < local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,iVar13);
          plVar11 = local_b8;
          iVar5 = local_ac;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_b0;
      }
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  }
  if (local_e8 != '\0') {
    uVar8 = 0;
    local_40 = (longlong **)0x0;
    local_38 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_142dc09a0(*(longlong *)(*plVar14 + 0x2d8),&local_80,1);
          iVar13 = (int)local_38;
          lVar7 = (longlong)(int)local_38;
          if ((int)local_38 != 0) {
            iVar5 = *(int *)(param_2 + 0x48);
            if (*(int *)(param_2 + 0x4c) < (int)local_38 + iVar5) {
              TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
                        (param_2);
              iVar5 = *(int *)(param_2 + 0x48);
            }
            _Src = &local_80;
            if (local_40 != (longlong **)0x0) {
              _Src = local_40;
            }
            lVar4 = *(longlong *)(param_2 + 0x40);
            if (*(longlong *)(param_2 + 0x40) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + iVar13;
            local_38 = local_38 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 142dc0df0 FUN_142dc0df0 body=51 status=ok
// SIG undefined FUN_142dc0df0(void)

longlong FUN_142dc0df0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_142df90a0();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 142dc0e30 NewObject<USaveGame> body=149 status=ok
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



// FUNCTION 142dc0ed0 FUN_142dc0ed0 body=184 status=ok
// SIG undefined FUN_142dc0ed0(void)

undefined8 * FUN_142dc0ed0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1458af138;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  FTextFormat::FTextFormat(param_1 + 0x9f);
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  return param_1;
}



// FUNCTION 142dc0f90 FUN_142dc0f90 body=118 status=ok
// SIG undefined FUN_142dc0f90(void)

undefined8 * FUN_142dc0f90(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1458b0638;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 3;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0x67 | 8;
  return param_1;
}



// FUNCTION 142dc1010 FUN_142dc1010 body=51 status=ok
// SIG undefined FUN_142dc1010(void)

undefined8 * FUN_142dc1010(undefined8 *param_1)

{
  FUN_1426d3980();
  param_1[0x58e] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_1458b0fa8;
  *(undefined1 *)(param_1 + 0x58f) = 0;
  return param_1;
}



// FUNCTION 142dc1050 FUN_142dc1050 body=406 status=ok
// SIG undefined FUN_142dc1050(void)

undefined8 * FUN_142dc1050(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  FUN_1426f4f60();
  *param_1 = &PTR_FUN_1458ad6f8;
  param_1[0x8b] = &PTR_LAB_1458ae778;
  param_1[0x106] = &PTR_LAB_1458ae7d0;
  param_1[0x107] = &PTR_LAB_1458ae7f8;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 2;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 2;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 2;
  *(undefined1 *)(param_1 + 0x11f) = 0;
  param_1[0x120] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  *(undefined1 *)(param_1 + 299) = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  uVar2 = DAT_146b34860;
  uVar1 = FUN_142e6f7c0();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0x10a] = uVar2;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"ScreenParticleManager",1);
  uVar2 = *puVar3;
  uVar1 = FUN_142e71aa0();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0x12f] = uVar2;
  return param_1;
}



// FUNCTION 142dc11f0 FUN_142dc11f0 body=42 status=ok
// SIG undefined FUN_142dc11f0(void)

undefined8 * FUN_142dc11f0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  param_1[0x8b] = 0;
  return param_1;
}



// FUNCTION 142dc1220 FUN_142dc1220 body=233 status=ok
// SIG undefined FUN_142dc1220(void)

undefined8 * FUN_142dc1220(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_2 + 0x41);
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  _Src = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 9,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[9],_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  return param_1;
}



// FUNCTION 142dc1310 FUN_142dc1310 body=597 status=ok
// SIG undefined FUN_142dc1310(void)

longlong * FUN_142dc1310(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  longlong local_78;
  undefined1 local_70 [16];
  longlong local_60 [4];
  longlong local_40;
  
  FUN_142dc16e0(param_1 + 1);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 3) = (int)param_2[3];
  local_78 = param_2[4];
  FString::FString(local_70,param_2 + 5);
  FSoftObjectPath::operator=(param_1 + 4,&local_78);
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(char *)(param_1 + 10) = (char)param_2[10];
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  param_1[0xb] = param_2[0xb];
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_2 + 0x7a);
  if (((*param_1 != 0) && (param_1[1] != 0)) && (cVar5 = FUN_142dd3600(param_1), cVar5 != '\0')) {
    if (param_2[0xd] == 0) {
      FUN_142dc85d0(param_1,*param_1,param_1[1],*(undefined1 *)((longlong)param_1 + 0x79));
    }
    else {
      param_1[0xd] = param_2[0xd];
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  puVar7 = (undefined8 *)param_2[8];
  puVar8 = puVar7 + (longlong)(int)param_2[9] * 7;
  if (puVar7 == puVar8) {
    return param_1;
  }
  plVar1 = param_1 + 8;
  do {
    plVar2 = (longlong *)*plVar1;
    lVar4 = param_1[9];
    for (plVar6 = plVar2; plVar6 != plVar2 + (longlong)(int)lVar4 * 7; plVar6 = plVar6 + 7) {
      FUN_142dc1770(local_60,*puVar7,0);
      bVar9 = *plVar6 == local_60[0];
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (bVar9) {
        iVar3 = (int)(((longlong)plVar6 - (longlong)plVar2) / 0x38);
        if (iVar3 != -1) {
          *(undefined4 *)((longlong)iVar3 * 0x38 + 0x30 + *plVar1) = *(undefined4 *)(puVar7 + 6);
          goto LAB_142dc14e7;
        }
        break;
      }
    }
    iVar3 = (int)param_1[9];
    *(int *)(param_1 + 9) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x4c) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar3);
    }
    FUN_142dc1770((longlong)iVar3 * 0x38 + *plVar1,*puVar7,*(undefined4 *)(puVar7 + 6));
LAB_142dc14e7:
    puVar7 = puVar7 + 7;
    if (puVar7 == puVar8) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 142dc1570 FUN_142dc1570 body=304 status=ok
// SIG undefined FUN_142dc1570(void)

longlong * FUN_142dc1570(longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_48 [32];
  
  *param_1 = param_2;
  FUN_142dc16e0(param_1 + 1);
  param_1[1] = param_3;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    if ((*(int *)((longlong)param_1 + 0x34) < 0) && (*(int *)((longlong)param_1 + 0x34) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
    }
    if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[5] = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_48,param_3);
    FSoftObjectPath::operator=(param_1 + 4,uVar3);
    FWeakObjectPtr::operator=(param_1 + 2,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 3) = DAT_1464b56f4;
  }
  if (((param_2 != 0) && (param_3 != 0)) && (cVar2 = FUN_142dd3600(param_1), cVar2 != '\0')) {
    FUN_142dc85d0(param_1,param_2,param_3,param_4);
  }
  lVar1 = param_1[0xd];
  if (((lVar1 == 0) || (*(char *)(lVar1 + 0xe0) == '\0')) ||
     ((*(char *)((longlong)param_1 + 0x51) != '\0' && (*(char *)(lVar1 + 0x89) == '\0')))) {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return param_1;
}



// FUNCTION 142dc16a0 FUN_142dc16a0 body=57 status=ok
// SIG undefined FUN_142dc16a0(void)

undefined8 * FUN_142dc16a0(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_142dc16e0(param_1 + 1);
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  return param_1;
}



// FUNCTION 142dc16e0 FUN_142dc16e0 body=136 status=ok
// SIG undefined FUN_142dc16e0(void)

undefined8 * FUN_142dc16e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  return param_1;
}



// FUNCTION 142dc1770 FUN_142dc1770 body=261 status=ok
// SIG undefined FUN_142dc1770(void)

longlong * FUN_142dc1770(longlong *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 local_48 [32];
  
  *param_1 = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < 0) && (*(int *)((longlong)param_1 + 0x2c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
    }
    if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[4] = 0;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_48,param_2);
    FSoftObjectPath::operator=(param_1 + 3,uVar1);
    FWeakObjectPtr::operator=(param_1 + 1,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 2) = DAT_1464b56f4;
  }
  *(undefined4 *)(param_1 + 6) = param_3;
  return param_1;
}



// FUNCTION 142dc1880 FUN_142dc1880 body=52 status=ok
// SIG undefined FUN_142dc1880(void)

longlong * FUN_142dc1880(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  if (*(char *)(param_2 + 0x38) != '\0') {
    iVar1 = *(int *)(param_2 + 0x34);
    if (*(int *)(param_2 + 0x34) <= param_3) {
      iVar1 = param_3;
    }
    param_3 = iVar1;
    *(int *)(param_1 + 1) = param_3;
  }
  if (*(char *)(param_2 + 0x40) != '\0') {
    iVar1 = *(int *)(param_2 + 0x3c);
    if (param_3 <= *(int *)(param_2 + 0x3c)) {
      iVar1 = param_3;
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return param_1;
}



// FUNCTION 142dc1920 FUN_142dc1920 body=139 status=ok
// SIG undefined FUN_142dc1920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142dc1920(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14408b3d8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x54) = DAT_1468b5d98;
  param_1[8] = *(undefined8 *)((longlong)param_1 + 0x4c);
  *(undefined4 *)(param_1 + 9) = uVar1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x800040;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x7f7fffff;
  return param_1;
}



// FUNCTION 142dc19e0 FUN_142dc19e0 body=197 status=ok
// SIG undefined FUN_142dc19e0(void)

undefined8 * FUN_142dc19e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 3,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[3],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  return param_1;
}



// FUNCTION 142dc1ab0 FAudioDeviceHandle body=20 status=ok
// SIG undefined FAudioDeviceHandle(void)

undefined8 * FAudioDeviceHandle::FAudioDeviceHandle(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 142dc1ad0 FUN_142dc1ad0 body=338 status=ok
// SIG undefined FUN_142dc1ad0(void)

longlong FUN_142dc1ad0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  FWeakObjectPtr::operator=(param_1,0);
  FWeakObjectPtr::operator=(param_1 + 8,0);
  FWeakObjectPtr::operator=(param_1 + 0x10,0);
  FWeakObjectPtr::operator=(param_1 + 0x18,0);
  lVar2 = 8;
  puVar1 = (undefined4 *)(param_1 + 0x20);
  do {
    *puVar1 = 0x7f7fffff;
    puVar1[1] = 0x7f7fffff;
    puVar1[2] = 0xbf800000;
    *(undefined8 *)(puVar1 + 3) = DAT_1466ad8f0;
    puVar1[5] = DAT_1466ad8f8;
    *(undefined8 *)(puVar1 + 6) = DAT_1466ad8f0;
    puVar1[8] = DAT_1466ad8f8;
    *(undefined8 *)(puVar1 + 10) = 0;
    FUN_140760710(puVar1 + 0xc);
    puVar1[0x11] = puVar1[0x11] & 0xfffffc00;
    puVar1[0x10] = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0xbf800000;
    *(undefined8 *)(puVar1 + 0x16) = DAT_1466ad8f0;
    puVar1[0x18] = DAT_1466ad8f8;
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 0x1a;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x360) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x368) = 0xff;
  FName::FName(param_1 + 0x370,L"Invalid",1);
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined1 *)(param_1 + 0x378) = 3;
  *(undefined2 *)(param_1 + 0x380) = 0x101;
  *(byte *)(param_1 + 0x38c) = *(byte *)(param_1 + 0x38c) & 0xf8;
  *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
  return param_1;
}



// FUNCTION 142dc1c30 FUN_142dc1c30 body=202 status=ok
// SIG undefined FUN_142dc1c30(void)

undefined8 * FUN_142dc1c30(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1458acfc8;
  param_1[6] = 0;
  param_1[7] = 0;
  FText::FText(param_1 + 8);
  FText::FText(param_1 + 0xb);
  FText::FText(param_1 + 0xe);
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  *(undefined2 *)((longlong)param_1 + 0x8b) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x8d) = 1;
  return param_1;
}



// FUNCTION 142dc1d00 FUN_142dc1d00 body=57 status=ok
// SIG undefined FUN_142dc1d00(void)

undefined8 * FUN_142dc1d00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1458aec38;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 6,uVar1);
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  return param_1;
}



// FUNCTION 142dc1d40 USoundNode body=43 status=ok
// SIG undefined USoundNode(void)

undefined8 * USoundNode::USoundNode(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1458aeeb8;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142dc1d70 UGunfireCrossplayManager body=47 status=ok
// SIG undefined UGunfireCrossplayManager(void)

undefined8 * UGunfireCrossplayManager::UGunfireCrossplayManager(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__1458b03b0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 142dc1da0 FUN_142dc1da0 body=120 status=ok
// SIG undefined FUN_142dc1da0(void)

undefined8 * FUN_142dc1da0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1458b0d20;
  FText::FText(param_1 + 6);
  FText::FText(param_1 + 9);
  FText::FText(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  return param_1;
}



// FUNCTION 142dc1e20 FUN_142dc1e20 body=171 status=ok
// SIG undefined FUN_142dc1e20(void)

undefined8 * FUN_142dc1e20(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1458ad268;
  param_1[5] = &PTR_LAB_1458ad6c8;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return param_1;
}



// FUNCTION 142dc1ed0 FUN_142dc1ed0 body=60 status=ok
// SIG undefined FUN_142dc1ed0(void)

undefined8 * FUN_142dc1ed0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined2 *)((longlong)param_1 + 0x3a) = 0x101;
  *param_1 = &PTR_FUN_143ff62b0;
  *(undefined2 *)(param_1 + 6) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return param_1;
}



// FUNCTION 142dc1f10 FUN_142dc1f10 body=62 status=ok
// SIG undefined FUN_142dc1f10(void)

undefined8 * FUN_142dc1f10(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1458b1ca8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f000000;
  return param_1;
}



// FUNCTION 142dc1f50 FUN_142dc1f50 body=61 status=ok
// SIG undefined FUN_142dc1f50(void)

undefined8 * FUN_142dc1f50(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1458b0130;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FText::FText(param_1 + 9);
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  return param_1;
}



// FUNCTION 142dc1f90 FUN_142dc1f90 body=83 status=ok
// SIG undefined FUN_142dc1f90(void)

undefined8 * FUN_142dc1f90(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__1458ae810;
  param_1[5] = &PTR_LAB_1458aec08;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  return param_1;
}



// FUNCTION 142dc1ff0 FUN_142dc1ff0 body=129 status=ok
// SIG undefined FUN_142dc1ff0(void)

undefined8 * FUN_142dc1ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_1458b3570;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  FUN_142de2eb0(param_1 + 0x11);
  *(byte *)((longlong)param_1 + 0x89) = *(byte *)((longlong)param_1 + 0x89) | 0x66;
  *(undefined1 *)((longlong)param_1 + 0x8b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  return param_1;
}



// FUNCTION 142dc2080 FUN_142dc2080 body=129 status=ok
// SIG undefined FUN_142dc2080(void)

undefined8 * FUN_142dc2080(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_1458b37f8;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  FUN_142de2eb0(param_1 + 0x11);
  *(byte *)((longlong)param_1 + 0x89) = *(byte *)((longlong)param_1 + 0x89) | 0x66;
  *(undefined1 *)((longlong)param_1 + 0x8b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x41200000;
  return param_1;
}



// FUNCTION 142dc2110 FUN_142dc2110 body=211 status=ok
// SIG undefined FUN_142dc2110(void)

undefined8 * FUN_142dc2110(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14178c940();
  FUN_141781840(param_1,uVar3);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *param_1 = &PTR_FUN_1458b3a80;
  FUN_142de2eb0(param_1 + 0x11);
  plVar1 = param_1 + 0x21;
  *plVar1 = 0;
  param_1[0x22] = 0;
  *(byte *)((longlong)param_1 + 0x89) = *(byte *)((longlong)param_1 + 0x89) | 0x66;
  *(undefined1 *)((longlong)param_1 + 0x8b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  uVar3 = FUN_142df90a0();
  iVar2 = *(int *)(param_1 + 0x22);
  *(int *)(param_1 + 0x22) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x114) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar3;
  return param_1;
}



// FUNCTION 142dc21f0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_143f4b3b0;
  return param_1;
}



// FUNCTION 142dc2220 FUN_142dc2220 body=212 status=ok
// SIG undefined FUN_142dc2220(void)

undefined8 * FUN_142dc2220(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1458acfc8;
  param_1[6] = 0;
  param_1[7] = 0;
  FText::FText(param_1 + 8);
  FText::FText(param_1 + 0xb);
  FText::FText(param_1 + 0xe);
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1458acfc8;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  *(undefined2 *)((longlong)param_1 + 0x8b) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x8d) = 1;
  return param_1;
}



// FUNCTION 142dc2300 FUN_142dc2300 body=316 status=ok
// SIG undefined FUN_142dc2300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142dc2300(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14178c940();
  FUN_14237eb90(param_1,uVar2);
  *(undefined1 *)((longlong)param_1 + 0x6f1) = 1;
  *param_1 = &PTR_FUN_1458b23e8;
  param_1[5] = &PTR_LAB_1458b2cf8;
  param_1[0x5a] = &PTR_LAB_1458b2d28;
  param_1[0xdf] = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  param_1[0xe0] = &PTR_FUN_14408b3d8;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x754) = DAT_1468b5d98;
  param_1[0xe8] = *(undefined8 *)((longlong)param_1 + 0x74c);
  *(undefined1 *)(param_1 + 0xeb) = 0;
  *(undefined4 *)(param_1 + 0xe9) = uVar1;
  *(undefined4 *)(param_1 + 0xef) = 0x800040;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7b4) = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = 0xffffffff;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 4;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xfd;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  FUN_142717090(param_1,0);
  return param_1;
}



// FUNCTION 142dc2440 FUN_142dc2440 body=75 status=ok
// SIG undefined FUN_142dc2440(void)

undefined8 * FUN_142dc2440(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UDataAsset::UDataAsset(param_1,uVar1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f89999a;
  *param_1 = &PTR__scalar_deleting_destructor__1458b2d80;
  *(undefined4 *)(param_1 + 8) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 142dc2490 FUN_142dc2490 body=260 status=ok
// SIG undefined FUN_142dc2490(void)

undefined8 * FUN_142dc2490(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1458afcf0;
  param_1[5] = &PTR_LAB_1458b00e8;
  param_1[0x2f] = &PTR_LAB_1458b0118;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0xe) = 0x3e4ccccd;
  return param_1;
}



// FUNCTION 142dc25a0 FUN_142dc25a0 body=142 status=ok
// SIG undefined FUN_142dc25a0(void)

undefined8 * FUN_142dc25a0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1458b1f40;
  param_1[5] = &PTR_LAB_1458b2370;
  param_1[0x2f] = &PTR_LAB_1458b23a0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  *(undefined1 *)(param_1 + 0x32) = 1;
  if (*(int *)((longlong)param_1 + 0x18c) < 0x14) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x30,0x14);
  }
  return param_1;
}



// FUNCTION 142dc2630 UAssetImportData body=33 status=ok
// SIG undefined UAssetImportData(void)

undefined8 * UAssetImportData::UAssetImportData(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1458b2ff8;
  return param_1;
}



// FUNCTION 142dc2660 FUN_142dc2660 body=56 status=ok
// SIG undefined FUN_142dc2660(void)

undefined8 * FUN_142dc2660(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined2 *)((longlong)param_1 + 0x37) = 0;
  *param_1 = &PTR_FUN_1458b32e8;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 3;
  return param_1;
}



// FUNCTION 142dc26a0 FUN_142dc26a0 body=448 status=ok
// SIG undefined FUN_142dc26a0(void)

undefined8 * FUN_142dc26a0(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_142de33e0();
  *param_1 = &PTR_FUN_1458af880;
  param_1[5] = &PTR_LAB_1458afc88;
  param_1[0x2f] = &PTR_LAB_1458afcb8;
  param_1[0x37] = &PTR_LAB_1458afcd0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FText::FText(param_1 + 0x4f);
  param_1[0x52] = 0;
  plVar1 = param_1 + 0x65;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *plVar1 = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 2;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x74) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x47a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x269) = 0x1010101;
  *(undefined1 *)(param_1 + 0x8f) = 1;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x67] = param_1;
    param_1[0x66] = &DAT_146b34888;
    *plVar1 = (longlong)DAT_146b34888;
    DAT_146b34888 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 142dc2860 FUN_142dc2860 body=537 status=ok
// SIG undefined FUN_142dc2860(void)

undefined8 * FUN_142dc2860(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar3 = FUN_14178c940();
  FUN_142326e40(param_1,uVar3);
  *param_1 = &PTR_FUN_1458b1868;
  param_1[5] = &PTR_LAB_1458b1c78;
  FUN_142c62020(param_1 + 0x2f);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 2;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  FUN_142d2e580(param_1 + 0x4b);
  plVar1 = param_1 + 0x62;
  uStack_10 = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0xea7] = 0;
  param_1[0xea8] = 0;
  param_1[0x1ce9] = 0;
  param_1[0x1cea] = 0;
  *(undefined4 *)(param_1 + 0x1ceb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe75c) = 0;
  *(undefined4 *)(param_1 + 0x1cec) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe764) = 0;
  param_1[0x1cee] = 0;
  param_1[0x1cef] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xe) = 0x3dcccccd;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  local_18 = FUN_142dd50b0;
  *(undefined1 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_144089920;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_144089968;
  }
  if (&local_18 != plVar1) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 99) != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)
         ) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar5 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar5;
        }
        *(undefined4 *)(param_1 + 99) = 0;
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
  param_1[0x1cf1] = 0;
  return param_1;
}



// FUNCTION 142dc2a80 FUN_142dc2a80 body=95 status=ok
// SIG undefined FUN_142dc2a80(void)

void FUN_142dc2a80(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x48);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xc;
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



// FUNCTION 142dc2ae0 ~TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_> body=159 status=ok
// SIG undefined ~TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>(void)

void TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>::
     ~TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>
               (longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x30);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 7;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142dc2b80 FUN_142dc2b80 body=104 status=ok
// SIG undefined FUN_142dc2b80(void)

void FUN_142dc2b80(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x28);
    do {
      TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>::
      ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(plVar2 + 3);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x10;
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



// FUNCTION 142dc2bf0 FUN_142dc2bf0 body=535 status=ok
// SIG undefined FUN_142dc2bf0(void)

void FUN_142dc2bf0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1458af880;
  param_1[5] = &PTR_LAB_1458afc88;
  param_1[0x2f] = &PTR_LAB_1458afcb8;
  param_1[0x37] = &PTR_LAB_1458afcd0;
  if (param_1[0x8d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x8b] != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x89);
  if (param_1[0x87] != 0) {
    FMemory::Free();
  }
  if (param_1[0x85] != 0) {
    FMemory::Free();
  }
  if (param_1[0x71] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x6d);
  if (param_1[0x6b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x6a] != 0) {
    if (param_1[0x68] == 0) {
      *(longlong *)param_1[0x69] = 0;
    }
    else {
      *(longlong *)param_1[0x69] = param_1[0x68];
      *(undefined8 *)(param_1[0x68] + 8) = param_1[0x69];
      param_1[0x68] = 0;
    }
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
  }
  if (param_1[0x67] != 0) {
    if (param_1[0x65] == 0) {
      *(longlong *)param_1[0x66] = 0;
    }
    else {
      *(longlong *)param_1[0x66] = param_1[0x65];
      *(undefined8 *)(param_1[0x65] + 8) = param_1[0x66];
      param_1[0x65] = 0;
    }
    param_1[0x66] = 0;
    param_1[0x67] = 0;
  }
  if (param_1[99] != 0) {
    FMemory::Free();
  }
  if (param_1[0x55] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x50];
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
  if (param_1[0x4b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x49] != 0) {
    FMemory::Free();
  }
  param_1[0x37] = &PTR_FUN_1458af860;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x32);
  param_1[0x2f] = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 142dc2e10 FUN_142dc2e10 body=555 status=ok
// SIG undefined FUN_142dc2e10(void)

undefined8 FUN_142dc2e10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_58 [16];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar6 = AActor::GetLevel(param_2);
  if ((*(byte *)(lVar6 + 0x206) & 1) != 0) {
    return 0;
  }
  if (DAT_1468c2185 != '\0') {
    return 0;
  }
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar9 = iVar1 >> 0x1f & 0xffff;
    uVar5 = iVar1 + uVar9;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
            (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
  }
  else {
    lVar6 = 0;
  }
  if ((*(uint *)(lVar6 + 8) & 0x30000000) != 0) {
    return 0;
  }
  lVar6 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar6 == 0) {
    return 0;
  }
  FUN_142b813e0(local_58,lVar6);
  lVar2 = param_2[2];
  cVar4 = IsGarbageCollecting();
  if (cVar4 != '\0') goto LAB_142dc2fe0;
  local_res18 = *(undefined8 *)(lVar2 + 0x18);
  FName::ToString(&local_res18,&local_48);
  puVar11 = &DAT_143f3eda8;
  puVar10 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar10 = local_48;
  }
  FString::PrintfImpl(&local_38,L"DESTROYED_%s_CHILDACTOR",puVar10);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  cVar4 = UWorld::IsGameWorld(lVar6);
  if (cVar4 == '\0') {
    cVar4 = FUN_141790400();
    uVar12 = 4;
    if (cVar4 != '\0') goto LAB_142dc2f44;
  }
  else {
LAB_142dc2f44:
    uVar12 = 5;
  }
  lVar3 = param_2[4];
  puVar10 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar10 = local_38;
  }
  puVar7 = (undefined8 *)FName::FName(&local_res18,puVar10,1);
  uVar8 = FUN_141791c20(local_res20,lVar3,lVar2,*puVar7);
  puVar7 = (undefined8 *)FName::ToString(uVar8,&local_48);
  if (*(int *)(puVar7 + 1) != 0) {
    puVar11 = (undefined2 *)*puVar7;
  }
  (**(code **)(*param_2 + 0x138))(param_2,puVar11,0,uVar12);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_142dc2fe0:
  FWeakObjectPtr::operator=(param_2 + 0x33,0);
  local_res10[0] = 0x10101;
  FUN_1422279d0(param_2,local_res10);
  FUN_142543860(lVar6,param_2,0,1);
  FUN_142b83220(local_58);
  return 1;
}



// FUNCTION 142dc3040 FUN_142dc3040 body=304 status=ok
// SIG undefined FUN_142dc3040(void)

void FUN_142dc3040(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined8 uStack_38;
  
  if (*param_2 != 0) {
    plVar2 = (longlong *)param_1[1];
    plVar6 = (longlong *)plVar2[0x18];
    if ((longlong *)plVar2[0x18] == (longlong *)0x0) {
      plVar6 = plVar2;
    }
    plVar2 = plVar6 + (int)plVar2[0x19];
    for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      plVar3 = (longlong *)*plVar6;
      if ((plVar3 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*plVar3 + 0x440))(plVar3,*param_2), cVar5 != '\0')) {
        local_48 = 0xffffffff;
        local_44 = 0;
        local_40 = 0;
        uStack_38 = 0;
        FWeakObjectPtr::operator=(&local_48,plVar3);
        local_40 = *param_2;
        lVar4 = *param_1;
        uStack_38 = CONCAT44(uStack_38._4_4_,param_3);
        iVar1 = *(int *)(lVar4 + 800);
        lVar8 = (longlong)iVar1;
        *(int *)(lVar4 + 800) = iVar1 + 1;
        if (*(int *)(lVar4 + 0x324) < iVar1 + 1) {
          TArray<FCompactPose,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (lVar4 + 0x2b8,iVar1);
        }
        lVar7 = *(longlong *)(lVar4 + 0x318);
        if (*(longlong *)(lVar4 + 0x318) == 0) {
          lVar7 = lVar4 + 0x2b8;
        }
        *(undefined4 *)(lVar7 + lVar8 * 0x18) = local_48;
        *(undefined4 *)(lVar7 + 4 + lVar8 * 0x18) = local_44;
        *(longlong *)(lVar7 + 8 + lVar8 * 0x18) = local_40;
        *(undefined4 *)(lVar7 + 0x10 + lVar8 * 0x18) = (undefined4)uStack_38;
        return;
      }
    }
  }
  return;
}



// FUNCTION 142dc3170 FUN_142dc3170 body=465 status=ok
// SIG undefined FUN_142dc3170(void)

void FUN_142dc3170(undefined8 *param_1,undefined2 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  bVar4 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(longlong *)param_1[2] == 0) {
    pwVar7 = L"UNKNOWN ENUM";
  }
  else {
    puVar2 = (undefined8 *)
             FUN_1417392b0(*(longlong *)param_1[2],local_48,
                           *(undefined1 *)(*(longlong *)param_1[1] + 8));
    if (*(int *)(puVar2 + 1) == 0) {
      pwVar7 = L"";
      bVar4 = true;
    }
    else {
      pwVar7 = (wchar_t *)*puVar2;
      bVar4 = true;
    }
  }
  if (param_2 == (undefined2 *)0x0) {
    local_60 = 5;
    local_68 = param_2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(ulonglong *)(param_2 + 0xc);
    FName::ToString(&local_res8,&local_68);
  }
  puVar8 = &DAT_143f3eda8;
  if ((int)local_60 != 0) {
    puVar8 = local_68;
  }
  if (*(int *)((undefined8 *)param_1[3] + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *(undefined2 **)param_1[3];
  }
  puVar3 = (undefined2 *)**(undefined8 **)param_1[1];
  if (puVar3 == (undefined2 *)0x0) {
    local_70 = 5;
    local_78 = puVar3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,&DAT_143f3edc8,10);
  }
  else {
    local_res10 = *(undefined8 *)(puVar3 + 0xc);
    FName::ToString(&local_res10,&local_78);
  }
  puVar3 = &DAT_143f3eda8;
  if ((int)local_70 != 0) {
    puVar3 = local_78;
  }
  cVar1 = FUN_1407c3030(param_3);
  uVar5 = 0x72;
  if (cVar1 != '\0') {
    uVar5 = 0x67;
  }
  FString::PrintfImpl(local_58,L"{c:%c}%ls{c} %ls %s : {c:b}(%ls){c}",uVar5,puVar3,pwVar7,puVar6,
                      puVar8);
  FUN_1428c0170(*param_1,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if ((bVar4) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142dc3400 FUN_142dc3400 body=223 status=ok
// SIG undefined FUN_142dc3400(void)

longlong FUN_142dc3400(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x500);
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
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x458);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x518);
  }
  return param_1;
}



// FUNCTION 142dc34e0 FUN_142dc34e0 body=107 status=ok
// SIG undefined FUN_142dc34e0(void)

longlong FUN_142dc34e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x488);
  }
  return param_1;
}



// FUNCTION 142dc3550 FUN_142dc3550 body=52 status=ok
// SIG undefined FUN_142dc3550(void)

undefined8 FUN_142dc3550(undefined8 param_1,ulonglong param_2)

{
  FUN_1426d55e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2c80);
  }
  return param_1;
}



// FUNCTION 142dc3590 FUN_142dc3590 body=200 status=ok
// SIG undefined FUN_142dc3590(void)

longlong FUN_142dc3590(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FMemory::Free();
  }
  FUN_142dc2a80(param_1 + 0x948);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x8e0);
  if (*(longlong *)(param_1 + 0x8d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x8a8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x890);
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x838) = &PTR_FUN_14407f2f8;
  *(undefined ***)(param_1 + 0x830) = &PTR_FUN_14407f310;
  FUN_140ce2670(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x980);
  }
  return param_1;
}



// FUNCTION 142dc3660 FUN_142dc3660 body=43 status=ok
// SIG undefined FUN_142dc3660(void)

undefined8 * FUN_142dc3660(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1458af860;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142dc3690 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FBuildTileConesCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1413f36b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 142dc36d0 FUN_142dc36d0 body=132 status=ok
// SIG undefined FUN_142dc36d0(void)

longlong FUN_142dc36d0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142dc3760 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleEventGenerator::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142dc37a0 FUN_142dc37a0 body=239 status=ok
// SIG undefined FUN_142dc37a0(void)

longlong FUN_142dc37a0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x68);
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
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 142dc3890 FUN_142dc3890 body=187 status=ok
// SIG undefined FUN_142dc3890(void)

longlong FUN_142dc3890(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  FUN_142dc2b80(param_1 + 0x1c8);
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 142dc3950 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTTLImpermanentStatus::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142dc39a0 FUN_142dc39a0 body=132 status=ok
// SIG undefined FUN_142dc39a0(void)

longlong FUN_142dc39a0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x50);
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
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142dc3a30 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FTTLDynamicMeshSceneProxy::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 142dc3a80 FUN_142dc3a80 body=96 status=ok
// SIG undefined FUN_142dc3a80(void)

longlong FUN_142dc3a80(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 142dc3ae0 FUN_142dc3ae0 body=113 status=ok
// SIG undefined FUN_142dc3ae0(void)

longlong FUN_142dc3ae0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 142dc3b60 FUN_142dc3b60 body=81 status=ok
// SIG undefined FUN_142dc3b60(void)

longlong FUN_142dc3b60(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x700) = &PTR_FUN_14408b3d8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x730);
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7f0);
  }
  return param_1;
}



// FUNCTION 142dc3bc0 FUN_142dc3bc0 body=148 status=ok
// SIG undefined FUN_142dc3bc0(void)

longlong FUN_142dc3bc0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x218);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x198);
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 142dc3c60 FUN_142dc3c60 body=99 status=ok
// SIG undefined FUN_142dc3c60(void)

longlong FUN_142dc3c60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  FUN_14147c580(param_1 + 0x180);
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 142dc3cd0 FUN_142dc3cd0 body=52 status=ok
// SIG undefined FUN_142dc3cd0(void)

undefined8 FUN_142dc3cd0(undefined8 param_1,ulonglong param_2)

{
  FUN_142dc2bf0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x480);
  }
  return param_1;
}



// FUNCTION 142dc3d10 FUN_142dc3d10 body=239 status=ok
// SIG undefined FUN_142dc3d10(void)

longlong FUN_142dc3d10(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xe778);
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
  if (*(longlong *)(param_1 + 0xe748) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7538) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x310);
  FUN_1406d8b70(param_1 + 600);
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x218);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe790);
  }
  return param_1;
}



// FUNCTION 142dc3e20 FUN_142dc3e20 body=398 status=ok
// SIG undefined FUN_142dc3e20(void)

void FUN_142dc3e20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong local_18;
  longlong local_10;
  
  lVar7 = *(longlong *)(param_1 + 0x1c8);
  lVar4 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar7;
  if (lVar7 != lVar4) {
    while (*(longlong *)(lVar7 + 8) != param_2) {
      lVar7 = lVar7 + 0x80;
      if (lVar7 == lVar4) {
        return;
      }
    }
    if (lVar7 != 0) {
      lVar4 = FUN_142dcdb70(lVar7);
      cVar2 = '\0';
      if (lVar4 != 0) {
        cVar2 = *(char *)(lVar4 + 0x89);
      }
      if ((*(char *)(lVar7 + 0x51) == '\0') || (cVar2 != '\0')) {
        if ((*(char *)(lVar7 + 0x50) == '\0') || (*(char *)(lVar7 + 0x7a) == '\0')) {
          lVar5 = *(longlong *)(param_1 + 0x120);
          lVar6 = lVar5;
          if (lVar5 == 0) {
            lVar5 = FUN_1423407b0(param_1);
            lVar6 = *(longlong *)(param_1 + 0x120);
          }
          if (lVar5 == 0) {
            uVar8 = 0;
          }
          else {
            if (lVar6 == 0) {
              lVar6 = FUN_1423407b0(param_1);
            }
            uVar8 = *(undefined4 *)(lVar6 + 0x790);
          }
          *(undefined4 *)(lVar7 + 0x70) = uVar8;
        }
        *(undefined1 *)(lVar7 + 0x50) = 1;
        if (lVar4 != 0) {
          FUN_142dd3f20(lVar4);
          FUN_142dfe190(lVar4);
        }
        local_18 = param_1;
        local_10 = param_2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x188,&local_18);
        if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) {
          lVar7 = *(longlong *)(param_1 + 0x120);
          if (lVar7 == 0) {
            lVar7 = FUN_1423407b0(param_1);
          }
          lVar7 = UWorld::GetGameState<APVPGameState>(lVar7);
          if ((lVar7 != 0) && (plVar1 = *(longlong **)(lVar7 + 0x540), plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x708))(plVar1,param_1,param_2);
          }
        }
        iVar3 = FUN_142340f30(param_1);
        if (iVar3 != 3) {
          FUN_142e02f50(param_1,param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 142dc3fb0 FUN_142dc3fb0 body=209 status=ok
// SIG undefined FUN_142dc3fb0(void)

void FUN_142dc3fb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x1c8);
  lVar6 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar5;
  do {
    if (lVar5 == lVar6) {
      return;
    }
    lVar4 = *(longlong *)(lVar5 + 0x68);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0xe8) != 0) {
        lVar3 = FUN_142dfdfe0();
        lVar4 = *(longlong *)(lVar4 + 0xe8);
        for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar3) goto LAB_142dc4027;
        }
      }
      lVar4 = 0;
LAB_142dc4027:
      if (((lVar4 == param_2) &&
          ((*(char *)(lVar5 + 0x50) == '\0' || (*(char *)(lVar5 + 0x7a) == '\0')))) &&
         ((cVar2 = FUN_142dd33a0(lVar5), cVar2 == '\0' ||
          (*(char *)(*(longlong *)(lVar5 + 0x68) + 0x89) != '\0')))) {
        FUN_142dc3e20(param_1);
      }
    }
    lVar5 = lVar5 + 0x80;
  } while( true );
}



// FUNCTION 142dc4090 FUN_142dc4090 body=512 status=ok
// SIG undefined FUN_142dc4090(void)

void FUN_142dc4090(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  
  if (param_2 != 0) {
    lVar4 = FUN_142dfdfe0();
    lVar6 = param_2;
    while (lVar6 != lVar4) {
      lVar6 = *(longlong *)(lVar6 + 0x30);
      if (lVar6 == 0) {
        return;
      }
    }
    lVar4 = FUN_142dfdfe0();
    lVar6 = param_2;
    do {
      lVar7 = param_2;
      if (lVar6 == lVar4) break;
      lVar6 = *(longlong *)(lVar6 + 0x30);
      lVar7 = 0;
    } while (lVar6 != 0);
    local_30 = 0;
    local_38 = 0;
    local_28 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    if (lVar7 == 0) {
      local_38 = 0;
    }
    else {
      uVar5 = FSoftObjectPath::FSoftObjectPath(local_60,lVar7);
      FSoftObjectPath::operator=(&local_38,uVar5);
      FWeakObjectPtr::operator=(&local_48,lVar7);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_44 = CONCAT44(DAT_1464b56f4,(undefined4)local_44);
    }
    lVar6 = *(longlong *)(param_1 + 0x38);
    iVar2 = *(int *)(param_1 + 0x40);
    for (lVar4 = lVar6; lVar4 != lVar6 + (longlong)iVar2 * 0x28; lVar4 = lVar4 + 0x28) {
      cVar3 = FSoftObjectPath::operator==(lVar4 + 0x10,&local_38);
      if (cVar3 != '\0') {
        if ((int)((lVar4 - lVar6) / 0x28) != -1) goto LAB_142dc425f;
        break;
      }
    }
    iVar2 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar2 + 1;
    if (*(int *)(param_1 + 0x44) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x28);
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
    if (0x7fffffff < (uint)puVar1[9]) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 6,0);
    }
    if (*(undefined2 **)(puVar1 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(puVar1 + 6) = 0;
    }
    puVar1[2] = 0;
    *puVar1 = local_48;
    puVar1[1] = (undefined4)local_44;
    puVar1[2] = local_44._4_4_;
    local_78 = local_38;
    FString::FString(local_70,&local_30);
    FSoftObjectPath::operator=(puVar1 + 4,&local_78);
LAB_142dc425f:
    if (local_30 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142dc4290 FUN_142dc4290 body=518 status=ok
// SIG undefined FUN_142dc4290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142dc4290(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_res8 [2];
  
  uVar2 = *(ulonglong *)(param_1 + 8);
  if (((uVar2 == 0) || (*(char *)(uVar2 + 0x48) == '\0')) || (*(longlong *)(param_1 + 0x10) == 0)) {
    return uVar2 & 0xffffffffffffff00;
  }
  lVar6 = *(longlong *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  lVar9 = (longlong)iVar1 * 0x1c0;
  lVar8 = lVar9 + lVar6;
  if (lVar6 != lVar8) {
    do {
      if ((*(longlong *)(lVar6 + 0x28) == *(longlong *)(param_2 + 0x28)) &&
         (*(longlong *)(lVar6 + 0x38) == *(longlong *)(param_2 + 0x20))) {
        bVar3 = *(byte *)(lVar6 + 0x1b8);
        *(float *)(lVar6 + 0x1b0) = *(float *)(param_2 + 0x30) + *(float *)(lVar6 + 0x1b0);
        goto LAB_142dc4405;
      }
      lVar6 = lVar6 + 0x1c0;
    } while (lVar6 != lVar8);
  }
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
    FUN_141a09ac0(param_1 + 0x38,iVar1);
  }
  lVar8 = (longlong)iVar1 * 0x1c0 + *(longlong *)(param_1 + 0x38);
  FUN_142d0ab00();
  uVar7 = 0;
  *(undefined8 *)(lVar8 + 0x1b0) = 0;
  *(undefined2 *)(lVar8 + 0x1b8) = 0;
  lVar8 = *(longlong *)(param_1 + 0x38);
  *(undefined4 *)(lVar9 + 0x1b4 + lVar8) = 0;
  *(undefined4 *)(lVar9 + 0x1b0 + lVar8) = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar5 = (uint *)(lVar9 + 0xf0 + lVar8);
  *puVar5 = *puVar5 & 0xfffffffd;
  *(undefined8 *)(lVar9 + lVar8) = uVar4;
  *(undefined8 *)(lVar9 + 0x100 + lVar8) = _DAT_1468b5d90;
  *(undefined4 *)(lVar9 + 0x108 + lVar8) = DAT_1468b5d98;
  *(undefined8 *)(lVar9 + 0x10c + lVar8) = _DAT_1468b5d90;
  *(undefined4 *)(lVar9 + 0x114 + lVar8) = DAT_1468b5d98;
  *(undefined8 *)(lVar9 + 0x118 + lVar8) = _DAT_1468b5d90;
  *(undefined4 *)(lVar9 + 0x120 + lVar8) = DAT_1468b5d98;
  *(undefined8 *)(lVar9 + 0x28 + lVar8) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar9 + 0x38 + lVar8) = *(undefined8 *)(param_2 + 0x20);
  uVar4 = uVar7;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50);
  }
  *(undefined8 *)(lVar9 + 0x48 + lVar8) = uVar4;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58);
  }
  *(undefined8 *)(lVar9 + 0x40 + lVar8) = uVar7;
  puVar5 = (uint *)(lVar8 + 0x128 + lVar9);
  if (local_res8 != puVar5) {
    *puVar5 = local_res8[0] | 7;
    *(undefined1 *)(puVar5 + 1) = 1;
  }
  puVar5 = (uint *)(lVar8 + 0x130 + lVar9);
  if (local_res8 != puVar5) {
    *(undefined2 *)puVar5 = 0x101;
  }
  bVar3 = *(byte *)(param_1 + 0x69);
  while (bVar3 == 0) {
    bVar3 = 1;
  }
  *(byte *)(param_1 + 0x69) = bVar3 + 1;
  *(byte *)(lVar9 + 0x1b8 + lVar8) = bVar3;
LAB_142dc4405:
  return (ulonglong)bVar3;
}



// FUNCTION 142dc44a0 FUN_142dc44a0 body=530 status=ok
// SIG undefined FUN_142dc44a0(void)

void FUN_142dc44a0(longlong param_1,longlong param_2,longlong param_3,int param_4,char param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar7 = *(int *)(param_1 + 0x480);
    iVar6 = iVar7 + -1;
    if (param_5 == DAT_146b34690) {
      for (; -1 < iVar6; iVar6 = iVar6 + -1) {
        lVar8 = *(longlong *)(param_1 + 0x478) + (longlong)iVar6 * 0x18;
        lVar3 = FWeakObjectPtr::Get(lVar8);
        if ((lVar3 == param_2) && (lVar3 = FWeakObjectPtr::Get(lVar8 + 8), lVar3 == param_3)) {
          if (*(char *)(lVar8 + 0x14) == DAT_146b34690) {
            lVar5 = (longlong)*(int *)(lVar8 + 0x10) + (longlong)param_4;
            lVar3 = -0x80000000;
            if ((-0x80000001 < lVar5) && (lVar3 = 0x7fffffff, lVar5 < 0x7fffffff)) {
              lVar3 = lVar5;
            }
            *(int *)(lVar8 + 0x10) = (int)lVar3;
            return;
          }
          break;
        }
      }
    }
    else if (-1 < iVar6) {
      plVar1 = (longlong *)(param_1 + 0x478);
      lVar8 = (longlong)iVar6 * 0x18;
      do {
        lVar5 = *plVar1 + lVar8;
        lVar3 = FWeakObjectPtr::Get(lVar5);
        if ((lVar3 == param_2) && (lVar3 = FWeakObjectPtr::Get(lVar5 + 8), lVar3 == param_3)) {
          if (*(char *)(lVar5 + 0x14) == DAT_1466ad810) {
            *(int *)(lVar5 + 0x10) = param_4;
            return;
          }
          iVar4 = *(int *)(param_1 + 0x480);
          iVar2 = (iVar4 - iVar6) + -1;
          if (iVar2 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar6 * 0x18),
                       (void *)(*plVar1 + (longlong)iVar7 * 0x18),(longlong)iVar2 * 0x18);
            iVar4 = *(int *)(param_1 + 0x480);
          }
          *(int *)(param_1 + 0x480) = iVar4 + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
        }
        iVar7 = iVar7 + -1;
        lVar8 = lVar8 + -0x18;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    iVar7 = *(int *)(param_1 + 0x480);
    *(int *)(param_1 + 0x480) = iVar7 + 1;
    if (*(int *)(param_1 + 0x484) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x478,iVar7);
    }
    lVar8 = *(longlong *)(param_1 + 0x478);
    *(undefined4 *)(lVar8 + (longlong)iVar7 * 0x18) = 0xffffffff;
    lVar8 = lVar8 + (longlong)iVar7 * 0x18;
    *(undefined4 *)(lVar8 + 4) = 0;
    *(undefined4 *)(lVar8 + 8) = 0xffffffff;
    *(undefined4 *)(lVar8 + 0xc) = 0;
    FWeakObjectPtr::operator=(lVar8,param_2);
    FWeakObjectPtr::operator=(lVar8 + 8,param_3);
    *(int *)(lVar8 + 0x10) = param_4;
    *(char *)(lVar8 + 0x14) = param_5;
  }
  return;
}



// FUNCTION 142dc46c0 FUN_142dc46c0 body=562 status=ok
// SIG undefined FUN_142dc46c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142dc46c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong *plVar12;
  float fVar13;
  undefined4 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  float local_3c;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  
  local_58 = *param_3;
  plVar12 = (longlong *)0x0;
  local_3c = *(float *)((longlong)param_3 + 0x1c);
  local_28 = *(float *)(param_3 + 6);
  local_50 = *(undefined4 *)(param_3 + 1);
  local_4c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_48 = *(undefined4 *)(param_3 + 2);
  local_44 = *(undefined4 *)((longlong)param_3 + 0x14);
  local_40 = *(char *)(param_3 + 3);
  local_38 = param_3[4];
  local_30 = param_3[5];
  plVar8 = plVar12;
  if (param_1[1] != 0) {
    plVar8 = *(longlong **)(param_1[1] + 0x30);
  }
  if (plVar8 != (longlong *)0x0) {
    local_68 = (undefined4 *)0x0;
    local_60 = 0;
    cVar6 = (**(code **)(*plVar8 + 0x280))(local_28,&local_58,param_1,&local_68);
    if (cVar6 == '\0') {
      if (local_68 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      goto LAB_142dc4873;
    }
    puVar1 = local_68 + (longlong)(int)local_60 * 3;
    for (puVar10 = local_68; puVar10 != puVar1; puVar10 = puVar10 + 3) {
      if (local_40 != '\x01') {
        local_3c = local_3c + (float)puVar10[1];
      }
      if (((param_1[1] != 0) && (*(char *)(param_1[1] + 0x48) != '\0')) && (param_1[2] != 0)) {
        local_28 = local_28 + (float)puVar10[2];
      }
      FUN_142dd96c0(param_1,*puVar10);
    }
    if (local_68 != (undefined4 *)0x0) {
      FMemory::Free(local_68);
    }
  }
  if (local_40 == '\0') {
    uVar9 = *(uint *)(param_1 + 10);
    plVar12 = (longlong *)(ulonglong)uVar9;
    if (-1 < (int)uVar9) {
      while (((uVar9 = uVar9 - 1, -1 < (int)uVar9 && ((int)uVar9 < *(int *)(param_1 + 10))) &&
             ((lVar2 = param_1[9] + (longlong)(int)uVar9 * 0x48, lVar2 != 0 &&
              (*(char *)(lVar2 + 0x18) != '\x01'))))) {
        if (*(char *)(lVar2 + 0x18) == '\0') {
          fVar13 = (*(float *)(lVar2 + 0x3c) + *(float *)(lVar2 + 0x1c)) - *(float *)(param_1 + 0xb)
          ;
        }
        else {
          fVar13 = 3.4028235e+38;
        }
        if ((local_3c < fVar13) ||
           (uVar11 = (int)plVar12 - 1, plVar12 = (longlong *)(ulonglong)uVar11, (int)uVar11 < 0))
        break;
      }
    }
  }
  puVar7 = (undefined8 *)FUN_142dc88c0(param_1,plVar12,&local_58);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_142dd4710(param_1,puVar7);
    uVar3 = *(undefined4 *)(puVar7 + 7);
    *param_2 = *param_1;
    param_2[1] = *puVar7;
    *(undefined4 *)(param_2 + 2) = uVar3;
    return param_2;
  }
LAB_142dc4873:
  uVar5 = DAT_1466ad838;
  uVar4 = uRam00000001466ad830;
  *param_2 = _DAT_1466ad828;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  return param_2;
}



// FUNCTION 142dc4900 FUN_142dc4900 body=158 status=ok
// SIG undefined FUN_142dc4900(void)

void FUN_142dc4900(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)*param_2;
  plVar5 = plVar4 + (longlong)(int)param_2[1] * 2;
  for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
    if (*plVar4 != 0) {
      iVar2 = FUN_140e0f1b0(param_1 + 0x178,plVar4);
      plVar3 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x178));
      lVar1 = *plVar3;
      if (*(char *)(lVar1 + 0x38) != '\0') {
        iVar2 = *(int *)(lVar1 + 0x34);
        if (*(int *)(lVar1 + 0x34) <= (int)plVar3[1]) {
          iVar2 = (int)plVar3[1];
        }
        *(int *)(plVar3 + 1) = iVar2;
      }
      if (*(char *)(lVar1 + 0x40) != '\0') {
        iVar2 = *(int *)(lVar1 + 0x3c);
        if ((int)plVar3[1] <= *(int *)(lVar1 + 0x3c)) {
          iVar2 = (int)plVar3[1];
        }
        *(int *)(plVar3 + 1) = iVar2;
      }
    }
  }
  return;
}



// FUNCTION 142dc49a0 FUN_142dc49a0 body=455 status=ok
// SIG undefined FUN_142dc49a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142dc49a0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (((*param_3 == 0) ||
      ((lVar6 = FWeakObjectPtr::Get(param_3 + 1), lVar6 == 0 &&
       (((lVar6 = FWeakObjectPtr::Get(param_3 + 1,1), lVar6 == 0 ||
         (*(char *)(*param_3 + 0x48) == '\0')) || ((char)param_3[3] == '\x01')))))) ||
     (((iVar5 = FUN_14233f450(param_1), iVar5 != 3 ||
       (cVar4 = FUN_1407c3030(param_1 + 0x33), cVar4 != '\0')) ||
      (cVar4 = (**(code **)(*param_1 + 0x420))(param_1,param_3), cVar4 == '\0')))) {
    uVar3 = uRam00000001466ad830;
    *param_2 = _DAT_1466ad828;
    param_2[1] = uVar3;
    param_2[2] = DAT_1466ad838;
    return param_2;
  }
  lVar2 = *param_3;
  plVar1 = param_1 + 0x30;
  lVar7 = *plVar1;
  lVar8 = (longlong)(int)param_1[0x31] * 0x70;
  lVar6 = lVar8 + lVar7;
  do {
    if (lVar7 == lVar6) {
LAB_142dc4a86:
      lVar7 = 0;
LAB_142dc4a89:
      if (lVar7 == 0) {
        iVar5 = (int)param_1[0x31] + 1;
        *(int *)(param_1 + 0x31) = iVar5;
        if (*(int *)((longlong)param_1 + 0x18c) < iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1);
        }
        lVar6 = *plVar1;
        *(longlong **)(lVar8 + lVar6) = param_1;
        *(longlong *)(lVar8 + 8 + lVar6) = lVar2;
        *(undefined8 *)(lVar8 + 0x10 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x18 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x20 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x28 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x30 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x38 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x40 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x48 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x50 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x58 + lVar6) = 0;
        *(undefined2 *)(lVar8 + 0x60 + lVar6) = 0;
        *(undefined4 *)(lVar8 + 100 + lVar6) = 0;
        *(undefined2 *)(lVar8 + 0x68 + lVar6) = 0;
        lVar7 = *plVar1 + lVar8;
        FUN_142dd1950(lVar7);
        (**(code **)(*param_1 + 0x410))(param_1,lVar7);
      }
      FUN_142dc46c0(lVar7,param_2,param_3);
      return param_2;
    }
    if ((*(longlong *)(lVar7 + 8) != 0) && (*(longlong *)(lVar7 + 8) == lVar2)) {
      if (*(char *)(lVar7 + 0x60) == '\0') goto LAB_142dc4a89;
      goto LAB_142dc4a86;
    }
    lVar7 = lVar7 + 0x70;
  } while( true );
}



// FUNCTION 142dc4b70 FUN_142dc4b70 body=139 status=ok
// SIG undefined FUN_142dc4b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142dc4b70(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)FUN_142dc49a0(lVar3,&local_28,param_3);
      goto LAB_142dc4bd8;
    }
  }
  puVar4 = &local_28;
  local_28 = _DAT_1466ad828;
  uStack_20 = uRam00000001466ad830;
  local_18 = DAT_1466ad838;
LAB_142dc4bd8:
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



// FUNCTION 142dc4c00 FUN_142dc4c00 body=516 status=ok
// SIG undefined FUN_142dc4c00(void)

int * FUN_142dc4c00(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 300) == 0) {
    iVar8 = *(int *)(param_1 + 0x108);
    *(int *)(param_1 + 0x108) = iVar8 + 1;
    if (*(int *)(param_1 + 0x10c) < iVar8 + 1) {
      TArray<FNiagaraRendererVariableInfo,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
      ResizeGrow(param_1,iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x120);
    iVar4 = iVar2 + 1;
    *(int *)(param_1 + 0x120) = iVar4;
    if (*(int *)(param_1 + 0x124) <= iVar2) {
      uVar3 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
      iVar5 = 1;
      if (1 < uVar3) {
        iVar4 = *(int *)(param_1 + 0x124) + 0x1f;
        lVar7 = 4;
        if (((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar3)) {
          lVar7 = (longlong)(int)uVar3 + 0x10 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3);
        }
        uVar6 = FMemory::QuantizeSize(lVar7 * 4,0);
        iVar4 = *(int *)(param_1 + 0x120);
        iVar5 = (int)(uVar6 >> 2);
        if (iVar5 < (int)uVar3) {
          iVar5 = 0x7fffffff;
        }
      }
      *(int *)(param_1 + 0x124) = iVar5 << 5;
      TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 0x110,iVar4 + -1);
    }
    lVar7 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar7 = param_1 + 0x110;
    }
    puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
  }
  else {
    iVar8 = *(int *)(param_1 + 0x128);
    lVar7 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar7 = param_1;
    }
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar8 * 0x10);
    iVar4 = *(int *)(param_1 + 300) + -1;
    *(int *)(param_1 + 0x128) = iVar2;
    *(int *)(param_1 + 300) = iVar4;
    if (iVar4 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar7 = param_1;
      }
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  *param_2 = iVar8;
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    lVar7 = param_1 + 0x110;
  }
  puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  lVar7 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar7 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 + (longlong)iVar8 * 0x10;
  return param_2;
}



// FUNCTION 142dc4e10 FUN_142dc4e10 body=1922 status=ok
// SIG undefined FUN_142dc4e10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142dc4e10(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined8 *puVar5;
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
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined8 local_138;
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
  uint uStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  uint uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [176];
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 10);
  fVar13 = *param_2;
  fVar12 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  local_d8 = param_2[4];
  fStack_d4 = param_2[5];
  fStack_d0 = param_2[6];
  fVar1 = param_2[7];
  fVar11 = *param_3;
  *param_1 = fVar13;
  param_1[1] = fVar12;
  param_1[2] = fVar9;
  param_1[3] = fVar10;
  param_1[4] = local_d8;
  param_1[5] = fStack_d4;
  param_1[6] = fStack_d0;
  param_1[7] = fVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 10) = uVar3;
  if (((0.0001 < ABS(fVar11)) || (0.0001 < ABS(param_3[1]))) || (0.0001 < ABS(param_3[2]))) {
    fVar1 = param_3[1];
    local_130 = param_3[2];
    fVar8 = fVar1 * fVar1 + fVar11 * fVar11 + local_130 * local_130;
    auVar16 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar14 = auVar16._0_4_;
    fVar14 = fVar14 + fVar14 * (0.5 - fVar8 * 0.5 * fVar14 * fVar14);
    fVar14 = fVar14 + fVar14 * (0.5 - fVar8 * 0.5 * fVar14 * fVar14);
    local_130 = fVar14 * local_130;
    fVar6 = fVar12 + fVar12;
    fVar7 = fVar9 + fVar9;
    *(ulonglong *)param_3 = CONCAT44(fVar14 * fVar1,fVar14 * fVar11);
    fStack_cc = fRam0000000146b346ec;
    fVar8 = fRam0000000146b346e8;
    fVar1 = fRam0000000146b346e4;
    fVar11 = _DAT_146b346e0;
    param_3[2] = local_130;
    fVar14 = (fVar13 + fVar13) * fVar13;
    fStack_e4 = (fVar13 + fVar13) * fVar10;
    fStack_104 = fVar7 * fVar10 + fVar6 * fVar13;
    fStack_f0 = fStack_e4 + fVar7 * fVar12;
    local_e8 = fVar6 * fVar10 + fVar7 * fVar13;
    local_f8 = fVar6 * fVar13 - fVar7 * fVar10;
    fStack_e4 = fVar7 * fVar12 - fStack_e4;
    fStack_100 = fVar7 * fVar13 - fVar6 * fVar10;
    local_108 = (float)((uint)(fVar11 - (fVar7 * fVar9 + fVar6 * fVar12)) & _DAT_146b346f0);
    fStack_f4 = (float)((uint)(fVar1 - (fVar7 * fVar9 + fVar14)) & uRam0000000146b346f4);
    fStack_e0 = (float)((uint)(fVar8 - (fVar6 * fVar12 + fVar14)) & uRam0000000146b346f8);
    uStack_fc = (uint)(fStack_cc - (fVar14 + fVar14)) & uRam0000000146b346fc;
    uStack_ec = uStack_fc;
    uStack_dc = uStack_fc;
    FMatrix::GetUnitAxes(&local_108,&local_138,local_b8,&local_118);
    fVar11 = param_3[1];
    fVar13 = *param_3;
    fVar12 = param_3[2];
    fVar9 = local_114 * fVar11 + local_118 * fVar13 + local_110 * fVar12;
    if (1e-08 < ABS(1.0 - ABS(fVar9))) {
      fVar10 = -1.0;
      if ((-1.0 <= fVar9) && (fVar10 = fVar9, 1.0 <= fVar9)) {
        fVar10 = 1.0;
      }
      fVar8 = _guard_xfg_dispatch_icall_nop(fVar10);
      fVar1 = DAT_1468b5d98;
      fVar10 = DAT_1468b5d94;
      fVar9 = DAT_1468b5d90;
      fVar8 = fVar8 * 57.295776;
      local_128 = local_114 * fVar12 - local_110 * fVar11;
      local_124 = local_110 * fVar13 - local_118 * fVar12;
      local_120 = local_118 * fVar11 - local_114 * fVar13;
      fVar11 = local_124 * local_124 + local_128 * local_128 + local_120 * local_120;
      if (fVar11 != 1.0) {
        if (1e-08 <= fVar11) {
          auVar16 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
          fVar13 = auVar16._0_4_;
          fVar13 = fVar13 + fVar13 * (0.5 - fVar11 * 0.5 * fVar13 * fVar13);
          fVar13 = fVar13 + fVar13 * (0.5 - fVar11 * 0.5 * fVar13 * fVar13);
          local_128 = local_128 * fVar13;
          local_124 = local_124 * fVar13;
          local_120 = local_120 * fVar13;
        }
        else {
          local_128 = DAT_1468b5d90;
          local_124 = DAT_1468b5d94;
          local_120 = DAT_1468b5d98;
        }
      }
      pfVar4 = (float *)FVector::RotateAngleAxis(&local_138,local_c8,fVar8,&local_128);
      fVar11 = pfVar4[1];
      fVar13 = *pfVar4;
      fVar12 = fVar13 * fVar13 + fVar11 * fVar11 + pfVar4[2] * pfVar4[2];
      if (fVar12 == 1.0) {
        local_138 = *(undefined8 *)pfVar4;
        local_130 = pfVar4[2];
        fVar6 = local_130;
        fVar7 = (float)((ulonglong)local_138 >> 0x20);
        fVar14 = (float)local_138;
      }
      else {
        fVar6 = fVar1;
        fVar7 = fVar10;
        fVar14 = fVar9;
        if (1e-08 <= fVar12) {
          auVar16 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
          fVar14 = auVar16._0_4_;
          fVar14 = fVar14 + fVar14 * (0.5 - fVar12 * 0.5 * fVar14 * fVar14);
          fVar14 = fVar14 * (0.5 - fVar12 * 0.5 * fVar14 * fVar14) + fVar14;
          fVar6 = fVar14 * pfVar4[2];
          fVar7 = fVar14 * fVar11;
          fVar14 = fVar14 * fVar13;
        }
      }
      pfVar4 = (float *)FVector::RotateAngleAxis(local_b8,local_c8,fVar8,&local_128);
      fVar11 = pfVar4[1];
      fVar13 = *pfVar4;
      fVar12 = fVar13 * fVar13 + fVar11 * fVar11 + pfVar4[2] * pfVar4[2];
      if (fVar12 == 1.0) {
        local_138 = *(undefined8 *)pfVar4;
        local_130 = pfVar4[2];
        fVar17 = local_130;
        fVar18 = (float)((ulonglong)local_138 >> 0x20);
        fVar15 = (float)local_138;
      }
      else {
        fVar17 = fVar1;
        fVar18 = fVar10;
        fVar15 = fVar9;
        if (1e-08 <= fVar12) {
          auVar16 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
          fVar15 = auVar16._0_4_;
          fVar15 = fVar15 + fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15);
          fVar15 = fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15) + fVar15;
          fVar17 = fVar15 * pfVar4[2];
          fVar18 = fVar15 * fVar11;
          fVar15 = fVar15 * fVar13;
        }
      }
      pfVar4 = (float *)FVector::RotateAngleAxis(&local_118,local_c8,fVar8,&local_128);
      fVar11 = pfVar4[1];
      fVar13 = *pfVar4 * *pfVar4 + fVar11 * fVar11 + pfVar4[2] * pfVar4[2];
      if (fVar13 == 1.0) {
        local_138 = *(undefined8 *)pfVar4;
        local_130 = pfVar4[2];
        fStack_e0 = local_130;
        fStack_e4 = (float)((ulonglong)local_138 >> 0x20);
        local_e8 = (float)local_138;
      }
      else {
        fStack_e0 = fVar1;
        fStack_e4 = fVar10;
        local_e8 = fVar9;
        if (1e-08 <= fVar13) {
          auVar16 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
          fVar12 = auVar16._0_4_;
          fVar12 = fVar12 + fVar12 * (0.5 - fVar13 * 0.5 * fVar12 * fVar12);
          fVar12 = fVar12 * (0.5 - fVar13 * 0.5 * fVar12 * fVar12) + fVar12;
          fStack_e0 = fVar12 * pfVar4[2];
          fStack_e4 = fVar12 * fVar11;
          local_e8 = fVar12 * *pfVar4;
        }
      }
      local_d8 = fVar9;
      fStack_d4 = fVar10;
      fStack_d0 = fVar1;
      uStack_fc = 0;
      uStack_ec = 0;
      uStack_dc = 0;
      fStack_cc = 1.0;
      local_108 = fVar14;
      fStack_104 = fVar7;
      fStack_100 = fVar6;
      local_f8 = fVar15;
      fStack_f4 = fVar18;
      fStack_f0 = fVar17;
      puVar5 = (undefined8 *)FMatrix::ToQuat(&local_108,local_c8);
      uVar2 = puVar5[1];
      *(undefined8 *)param_1 = *puVar5;
      *(undefined8 *)(param_1 + 2) = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 142dc55a0 FUN_142dc55a0 body=75 status=ok
// SIG undefined FUN_142dc55a0(void)

void FUN_142dc55a0(char *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_28 [32];
  
  puVar2 = (undefined8 *)
           FUN_14248a390(param_2,local_28,param_3,(*param_1 == '\x02') + '\x03',
                         *(undefined4 *)(param_1 + 4),local_res8);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar2 + 2);
  return;
}



// FUNCTION 142dc55f0 FUN_142dc55f0 body=125 status=ok
// SIG undefined FUN_142dc55f0(void)

void FUN_142dc55f0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x2c70) == DAT_1468c21b0) {
    param_2 = 0;
  }
  else {
    *(longlong *)(param_1 + 0x2c70) = DAT_1468c21b0;
  }
  if (((*(char *)(param_1 + 0x2c78) == '\0') && (*(longlong *)(param_1 + 0x2c68) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x2c68) + 0x930) != 0)) {
    uVar2 = *(undefined4 *)(param_3 + 1);
    uVar1 = *param_3;
    FUN_1426d8eb0(param_1,param_2);
    *param_3 = uVar1;
    *(undefined4 *)(param_3 + 1) = uVar2;
    return;
  }
  FUN_1426d8eb0(param_1,param_2);
  return;
}



// FUNCTION 142dc5670 FUN_142dc5670 body=38 status=ok
// SIG undefined FUN_142dc5670(void)

void FUN_142dc5670(longlong *param_1)

{
  *(undefined1 *)(param_1 + 0x58f) = 1;
  (**(code **)(*param_1 + 0x768))();
  *(undefined1 *)(param_1 + 0x58f) = 0;
  return;
}



// FUNCTION 142dc56a0 FUN_142dc56a0 body=1381 status=ok
// SIG undefined FUN_142dc56a0(void)

void FUN_142dc56a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  byte bVar14;
  longlong *plVar15;
  char cVar16;
  bool bVar17;
  char local_res8;
  byte local_res10;
  undefined1 local_res18;
  undefined8 local_res20;
  longlong *local_58;
  undefined8 local_50;
  
  bVar6 = 0;
  bVar14 = 0;
  local_res10 = 0;
  cVar7 = '\0';
  local_res8 = '\0';
  cVar16 = '\0';
  local_res18 = 0;
  if (((param_1[0x12e] != 0) && (*(char *)(param_1[0x12e] + 0x30) != '\0')) &&
     ((*(byte *)(param_1 + 200) & 2) == 0)) {
    *(undefined4 *)(param_1 + 0xb9) = 0;
    if (*(int *)((longlong)param_1 + 0x5cc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0xb8,0);
    }
    FUN_142dcaa30(param_1 + 0xff,0);
    plVar2 = (longlong *)param_1[0xa5];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x848))(plVar2,1);
    }
  }
  lVar9 = param_1[0x12e];
  if (lVar9 == 0) {
    *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & 0xfffffff9;
  }
  else {
    uVar8 = ((uint)*(byte *)(lVar9 + 0x30) * 2 ^ *(uint *)(param_1 + 200)) & 2 ^
            *(uint *)(param_1 + 200);
    *(uint *)(param_1 + 200) = uVar8;
    if (((uVar8 & 2) == 0) || (uVar13 = 4, *(char *)(lVar9 + 0x31) == '\0')) {
      uVar13 = 0;
    }
    *(uint *)(param_1 + 200) = uVar8 & 0xfffffffb | uVar13;
    local_res8 = *(char *)(lVar9 + 0x3a);
    bVar14 = *(byte *)(lVar9 + 0x35);
    cVar7 = *(char *)(lVar9 + 0x36);
    bVar6 = *(byte *)(lVar9 + 0x37);
    cVar16 = *(char *)(lVar9 + 0x39);
    local_res10 = *(byte *)(lVar9 + 0x34);
    local_res18 = *(undefined1 *)(lVar9 + 0x3b);
  }
  uVar8 = *(uint *)(param_1 + 0xe9);
  if ((uint)bVar14 != (uVar8 & 1)) {
    (**(code **)(*param_1 + 0x7c0))(param_1,bVar14);
    *(uint *)(param_1 + 0xe9) =
         *(uint *)(param_1 + 0xe9) ^ ((uint)bVar14 ^ *(uint *)(param_1 + 0xe9)) & 1;
    uVar8 = *(uint *)(param_1 + 0xe9);
  }
  if ((uint)bVar6 != (uVar8 >> 1 & 1)) {
    (**(code **)(*param_1 + 0x7d8))(param_1,bVar6);
    *(uint *)(param_1 + 0xe9) =
         *(uint *)(param_1 + 0xe9) ^ ((uint)bVar6 + (uint)bVar6 ^ *(uint *)(param_1 + 0xe9)) & 2;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b34938) && (_Init_thread_header(&DAT_146b34938), DAT_146b34938 == -1))
  {
    FName::FName(&DAT_146b34930,L"CinematicMode",1);
    _Init_thread_footer(&DAT_146b34938);
  }
  local_58 = (longlong *)0x0;
  local_50 = 0;
  (**(code **)(*param_1 + 0x1060))(param_1,&local_58);
  plVar2 = local_58 + (int)local_50;
  for (plVar15 = local_58; plVar15 != plVar2; plVar15 = plVar15 + 1) {
    if (((longlong *)*plVar15 != (longlong *)0x0) &&
       (lVar9 = (**(code **)(*(longlong *)*plVar15 + 0x6e8))(), lVar9 != 0)) {
      lVar10 = FUN_142e39920();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) {
        cVar5 = FUN_142dafb10(lVar9 + 0x948,&DAT_146b34930);
        if (cVar7 != cVar5) {
          if (cVar7 == '\0') {
            FUN_142dbb5d0(lVar9 + 0x948,&DAT_146b34930);
          }
          else {
            FUN_142dafbc0();
          }
        }
        bVar6 = FUN_142dafb10(lVar9 + 0xc40,&DAT_146b34930);
        if (bVar14 != bVar6) {
          if (bVar14 == 0) {
            FUN_142dbb5d0(lVar9 + 0xc40,&DAT_146b34930);
          }
          else {
            FUN_142dafbc0();
          }
        }
      }
    }
  }
  if ((char)param_1[0x25] == '\x03') {
    cVar7 = APlayerController::IsPrimaryPlayer(param_1);
    if (cVar7 != '\0') {
      if (((((*(byte *)(param_1 + 200) & 2) == 0) || ((int)param_1[0x12d] < 1)) ||
          (lVar9 = *(longlong *)(param_1[300] + -8 + (longlong)(int)param_1[0x12d] * 8), lVar9 == 0)
          ) || (*(char *)(lVar9 + 0x33) == '\0')) {
        uVar11 = 0;
      }
      else {
        uVar11 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
      }
      FUN_142ddab60(param_1,uVar11);
    }
    plVar2 = local_58 + (int)local_50;
    for (plVar15 = local_58; plVar15 != plVar2; plVar15 = plVar15 + 1) {
      plVar3 = (longlong *)*plVar15;
      if (plVar3 != (longlong *)0x0) {
        bVar17 = ((byte)(int)param_1[200] & 6) == 6;
        lVar9 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_142cce120(plVar3,bVar17,DAT_146b34930);
        }
        else {
          (**(code **)(*plVar3 + 0x310))(plVar3,bVar17);
        }
        uVar11 = FUN_142e79d90();
        plVar12 = (longlong *)(**(code **)(*plVar3 + 0x628))(plVar3,uVar11);
        if (plVar12 != (longlong *)0x0) {
          plVar1 = plVar12 + 0x74;
          cVar7 = FUN_142dafb10(plVar1,&DAT_146b34930);
          if (local_res8 != cVar7) {
            local_res20 = DAT_146b34930;
            cVar7 = FUN_1407c3030(plVar1);
            if (local_res8 == '\0') {
              FUN_142dbb5d0(plVar1,&local_res20);
            }
            else {
              FUN_142dafbc0();
            }
            cVar5 = FUN_1407c3030(plVar1);
            if (cVar5 != cVar7) {
              (**(code **)(*plVar12 + 0x260))(plVar12);
            }
          }
        }
        uVar11 = UScrollBox::GetPrivateStaticClass();
        lVar9 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar11);
        if (lVar9 != 0) {
          cVar7 = FUN_142dafb10(lVar9 + 0x290,&DAT_146b34930);
          if (cVar16 != cVar7) {
            if (cVar16 == '\0') {
              FUN_142dbb5d0(lVar9 + 0x290,&DAT_146b34930);
            }
            else {
              FUN_142dafbc0();
            }
          }
        }
      }
    }
  }
  plVar2 = (longlong *)param_1[0xa4];
  if ((plVar2 != (longlong *)0x0) && ((*(byte *)(plVar2 + 0x8c) >> 1 & 1) == local_res10)) {
    (**(code **)(*plVar2 + 0x6e8))(plVar2,local_res10 == 0);
    if (param_1[0xea] != 0) {
      SVirtualJoystick::SetJoystickVisibility
                (param_1[0xea],*(byte *)(param_1[0xa4] + 0x460) >> 1 & 1,1);
    }
  }
  (**(code **)(*param_1 + 0x1078))(param_1,local_res18);
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142dc5c10 FUN_142dc5c10 body=271 status=ok
// SIG undefined FUN_142dc5c10(void)

void FUN_142dc5c10(longlong param_1,longlong param_2,undefined1 param_3,float param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  size_t _Size;
  longlong *plVar6;
  float fVar7;
  
  if (param_2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0();
    }
    if (lVar4 == 0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = *(float *)(lVar4 + 0x790);
    }
    if ((param_4 <= 0.0) || (fVar7 <= param_4)) {
      plVar6 = (longlong *)(param_1 + 0x388);
      FUN_142dd95e0(plVar6);
      plVar5 = (longlong *)*plVar6;
      iVar2 = *(int *)(param_1 + 0x390);
      _Size = (longlong)iVar2 * 0x10;
      plVar1 = plVar5 + (longlong)iVar2 * 2;
      for (; (plVar5 != plVar1 && (*plVar5 != param_2)); plVar5 = plVar5 + 2) {
      }
      if (plVar5 == (longlong *)(*plVar6 + _Size)) {
        *(int *)(param_1 + 0x390) = iVar2 + 1;
        if (*(int *)(param_1 + 0x394) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar2);
        }
        _guard_xfg_dispatch_icall_nop((void *)(*plVar6 + 0x10),(void *)*plVar6,_Size);
        puVar3 = (undefined8 *)*plVar6;
        *puVar3 = 0;
        puVar3[1] = 0;
        plVar6 = (longlong *)*plVar6;
        *(float *)((longlong)plVar6 + 0xc) = param_4;
        *plVar6 = param_2;
        *(undefined1 *)(plVar6 + 1) = param_3;
      }
      else {
        *(float *)((longlong)plVar5 + 0xc) = param_4;
        *(undefined1 *)(plVar5 + 1) = param_3;
      }
    }
  }
  return;
}



// FUNCTION 142dc5d20 FUN_142dc5d20 body=62 status=ok
// SIG undefined FUN_142dc5d20(void)

void FUN_142dc5d20(undefined8 *param_1)

{
  FWeakObjectPtr::operator=(param_1[1] + 0x198,*param_1);
  FUN_1422232e0(param_1[1],*param_1,&DAT_146532184,0);
  return;
}



// FUNCTION 142dc5d60 FUN_142dc5d60 body=67 status=ok
// SIG undefined FUN_142dc5d60(void)

void FUN_142dc5d60(longlong *param_1)

{
  FUN_142385110();
  *(undefined1 *)((longlong)param_1 + 0x6f1) = 0;
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    (**(code **)(*param_1 + 0x8f0))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000142dc5d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,(char)param_1[0xde]);
  return;
}



// FUNCTION 142dc5db0 FUN_142dc5db0 body=1041 status=ok
// SIG undefined FUN_142dc5db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142dc5db0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_168 [32];
  int local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  FUN_142de5760();
  if (((*(char *)(param_1 + 0x268) != '\0') && (*(longlong *)(param_1 + 0x350) == 0)) &&
     ((*(byte *)(param_1 + 8) & 0x30) == 0)) {
    lVar10 = *(longlong *)(param_1 + 0x118);
    if (lVar10 != 0) {
      lVar5 = FUN_1429d7ab0();
      lVar10 = *(longlong *)(lVar10 + 0x10);
      if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_142dc5e6d;
    }
    plVar11 = (longlong *)(param_1 + 0x340);
    *(longlong *)(param_1 + 0x350) = param_1;
    *(longlong ***)(param_1 + 0x348) = &DAT_146b348a0;
    *plVar11 = (longlong)DAT_146b348a0;
    DAT_146b348a0 = plVar11;
    if (*plVar11 != 0) {
      *(longlong **)(*plVar11 + 8) = plVar11;
    }
  }
LAB_142dc5e6d:
  plVar11 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_140749cd0(*(longlong *)(param_1 + 0x118),local_108,0);
    local_110 = local_108;
    local_118 = param_1;
    if (*(int *)(param_1 + 0x324) < *(int *)(param_1 + 0x2b0) + 1) {
      FUN_1407685d0(param_1 + 0x2b8);
    }
    FUN_142dc3040(&local_118,param_1 + 0x290,0xffffffff);
    local_118 = (longlong)*(int *)(param_1 + 0x2b0);
    local_148 = 0;
    if (0 < local_118) {
      local_128 = 0;
      local_120 = 0;
      do {
        lVar10 = local_120 + *(longlong *)(param_1 + 0x2a8);
        if (*(longlong *)(lVar10 + 0x90) != 0) {
          plVar8 = local_108;
          if (local_48 != (longlong *)0x0) {
            plVar8 = local_48;
          }
          plVar7 = plVar8 + (int)local_40;
          for (; plVar8 != plVar7; plVar8 = plVar8 + 1) {
            plVar9 = (longlong *)*plVar8;
            if ((plVar9 != (longlong *)0x0) &&
               (cVar4 = (**(code **)(*plVar9 + 0x440))(plVar9,*(undefined8 *)(lVar10 + 0x90)),
               cVar4 != '\0')) {
              local_140 = 0xffffffff;
              local_13c = 0;
              local_138 = 0;
              uStack_130 = 0;
              FWeakObjectPtr::operator=(&local_140,plVar9);
              local_138 = *(undefined8 *)(lVar10 + 0x90);
              uStack_130 = CONCAT44(uStack_130._4_4_,local_148);
              iVar2 = *(int *)(param_1 + 800);
              lVar10 = (longlong)iVar2;
              *(int *)(param_1 + 800) = iVar2 + 1;
              if (*(int *)(param_1 + 0x324) < iVar2 + 1) {
                TArray<FCompactPose,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                          (param_1 + 0x2b8,iVar2);
              }
              lVar5 = *(longlong *)(param_1 + 0x318);
              if (*(longlong *)(param_1 + 0x318) == 0) {
                lVar5 = param_1 + 0x2b8;
              }
              *(undefined4 *)(lVar5 + lVar10 * 0x18) = local_140;
              *(undefined4 *)(lVar5 + 4 + lVar10 * 0x18) = local_13c;
              *(undefined8 *)(lVar5 + 8 + lVar10 * 0x18) = local_138;
              *(undefined4 *)(lVar5 + 0x10 + lVar10 * 0x18) = (undefined4)uStack_130;
              break;
            }
          }
        }
        local_148 = local_148 + 1;
        local_120 = local_120 + 0x98;
        local_118 = local_118 + -1;
      } while (local_118 != 0);
    }
    if ((*(int *)(param_1 + 800) < 1) &&
       (*(undefined4 *)(param_1 + 800) = 0, *(int *)(param_1 + 0x324) != 0)) {
      FUN_1407685d0(param_1 + 0x2b8,0);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  plVar8 = (longlong *)(param_1 + 0x468);
  *(undefined4 *)(param_1 + 0x470) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x474)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8,0);
  }
  if (*(int *)(param_1 + 0x460) != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    local_40._0_4_ = 0;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_140749cd0(*(longlong *)(param_1 + 0x118),local_108,0);
    }
    plVar7 = local_108;
    if (local_48 != (longlong *)0x0) {
      plVar7 = plVar11;
    }
    plVar7 = (longlong *)((ulonglong)plVar7 | (ulonglong)local_48);
    plVar9 = (longlong *)((longlong)(int)local_40 & 0x1fffffffffffffff);
    if (plVar7 + (int)local_40 < plVar7) {
      plVar9 = plVar11;
    }
    if (plVar9 != (longlong *)0x0) {
      do {
        lVar10 = *plVar7;
        if (lVar10 != 0) {
          plVar6 = *(longlong **)(param_1 + 0x458);
          plVar1 = plVar6 + *(int *)(param_1 + 0x460);
          for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
            if (*plVar6 == *(longlong *)(lVar10 + 0x18)) {
              iVar2 = *(int *)(param_1 + 0x470);
              *(int *)(param_1 + 0x470) = iVar2 + 1;
              if (*(int *)(param_1 + 0x474) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar2);
              }
              *(longlong *)(*plVar8 + (longlong)iVar2 * 8) = lVar10;
              break;
            }
          }
        }
        plVar7 = plVar7 + 1;
        plVar11 = (longlong *)((longlong)plVar11 + 1);
      } while (plVar11 != plVar9);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142dc61d0 FUN_142dc61d0 body=100 status=ok
// SIG undefined FUN_142dc61d0(void)

void FUN_142dc61d0(longlong *param_1)

{
  FUN_142330a70();
  FUN_142c73280(param_1 + 0x2f,param_1);
  *(float *)(param_1 + 0xe) = *(float *)(param_1 + 0x4a);
  if ((param_1[0x4b] != 0) && (0.0 < *(float *)(param_1 + 0x4a))) {
                    /* WARNING: Could not recover jumptable at 0x000142dc6219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x358))(param_1,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dc622d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,0);
  return;
}



// FUNCTION 142dc6240 FUN_142dc6240 body=663 status=ok
// SIG undefined FUN_142dc6240(void)

void FUN_142dc6240(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x38) < DAT_146859258) {
    _Init_thread_header(&DAT_146859258);
    if (DAT_146859258 == -1) {
      DAT_146859248 = -1;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
  }
  if (DAT_1466ad930 == DAT_146859248) {
    plVar1 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
    }
    DAT_1466ad938 = *(undefined8 *)(lVar4 + 0x50);
    DAT_1466ad930 = *(char *)(lVar4 + 0x48);
  }
  if (*(int *)(lVar3 + 0x38) < DAT_146859258) {
    _Init_thread_header(&DAT_146859258);
    if (DAT_146859258 == -1) {
      DAT_146859248 = -1;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
  }
  if (DAT_1466ad940 == DAT_146859248) {
    plVar1 = (longlong *)FUN_142df53d0();
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
    }
    DAT_1466ad948 = *(undefined8 *)(lVar4 + 0x50);
    DAT_1466ad940 = *(char *)(lVar4 + 0x48);
  }
  if (*(int *)(lVar3 + 0x38) < DAT_146859258) {
    _Init_thread_header(&DAT_146859258);
    if (DAT_146859258 == -1) {
      DAT_146859248 = -1;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
  }
  if (DAT_1466ad950 == DAT_146859248) {
    plVar1 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
    lVar3 = plVar1[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar3 = plVar1[0x1f];
    }
    DAT_1466ad958 = *(undefined8 *)(lVar3 + 0x50);
    DAT_1466ad950 = *(char *)(lVar3 + 0x48);
  }
  if (((DAT_1466ad824 < 0.0) || (DAT_1466ad8fc < 0.0)) || (DAT_1466ad970 < 0.0)) {
    uVar2 = FWeakObjectPtr::Get(param_1);
    lVar3 = FUN_142da89b0(uVar2);
    if (lVar3 != 0) {
      DAT_1466ad824 = *(float *)(lVar3 + 0x40);
      DAT_1466ad8fc = *(float *)(lVar3 + 0x44);
      DAT_1466ad970 = *(float *)(lVar3 + 0x48);
    }
  }
  return;
}



// FUNCTION 142dc64e0 FUN_142dc64e0 body=86 status=ok
// SIG undefined FUN_142dc64e0(void)

ulonglong FUN_142dc64e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_res8 [2];
  
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    lVar2 = *param_2;
  }
  uVar3 = FUN_142c98860(param_1 + 0x10,lVar2);
  local_res8[0] = (uint)uVar3;
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x280))(plVar1,param_2,local_res8);
    uVar3 = (ulonglong)local_res8[0];
  }
  return uVar3;
}



// FUNCTION 142dc6540 FUN_142dc6540 body=408 status=ok
// SIG undefined FUN_142dc6540(void)

float FUN_142dc6540(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float local_res8 [2];
  float local_res18 [4];
  longlong local_48;
  longlong local_40;
  int local_38;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    iVar1 = (int)param_1[1];
    if (((-1 < iVar1) && (iVar1 < *(int *)(lVar7 + 0x40))) &&
       (lVar7 = (longlong)iVar1 * 0x50 + *(longlong *)(lVar7 + 0x38), lVar7 != 0)) {
      fVar9 = 0.0;
      if ((2 < *(byte *)(lVar7 + 8)) && (*(byte *)(lVar7 + 8) == 3)) {
        fVar9 = 1.0;
      }
      lVar5 = *param_2;
      lVar6 = (longlong)(int)param_2[1] * 0x1c + lVar5;
      for (; lVar5 != lVar6; lVar5 = lVar5 + 0x1c) {
        if (*(char *)(lVar5 + 0x19) == '\0') {
          lVar3 = FWeakObjectPtr::Get(lVar5 + 8);
          local_48 = FWeakObjectPtr::Get(lVar5);
          local_38 = *(int *)(lVar5 + 0x14);
          local_40 = lVar3;
          if (*(byte *)(lVar7 + 8) < 3) {
            lVar4 = local_48;
            if (lVar3 != 0) {
              lVar4 = lVar3;
            }
            local_res18[0] = (float)FUN_142c98860(lVar7 + 0x10,lVar4);
            plVar2 = *(longlong **)(lVar7 + 0x48);
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x280))(plVar2,&local_48,local_res18);
            }
            fVar9 = fVar9 + (float)local_38 * local_res18[0];
          }
          else if (*(byte *)(lVar7 + 8) == 3) {
            lVar4 = local_48;
            if (lVar3 != 0) {
              lVar4 = lVar3;
            }
            local_res8[0] = (float)FUN_142c98860(lVar7 + 0x10,lVar4);
            plVar2 = *(longlong **)(lVar7 + 0x48);
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x280))(plVar2,&local_48,local_res8);
            }
            fVar8 = _guard_xfg_dispatch_icall_nop(local_res8[0],(float)local_38);
            fVar9 = fVar9 * fVar8;
          }
        }
      }
      return fVar9;
    }
  }
  return 0.0;
}



// FUNCTION 142dc66e0 FUN_142dc66e0 body=39 status=ok
// SIG undefined FUN_142dc66e0(void)

void FUN_142dc66e0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = param_3[4];
  FUN_142dc3170(local_28,*param_2,&local_28);
  return;
}



// FUNCTION 142dc6710 FUN_142dc6710 body=26 status=ok
// SIG undefined FUN_142dc6710(void)

bool FUN_142dc6710(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1407c3030(param_1 + 0x198);
  return cVar1 == '\0';
}



// FUNCTION 142dc6740 FUN_142dc6740 body=649 status=ok
// SIG undefined FUN_142dc6740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142dc6740(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                       undefined4 *param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined1 *local_1a0;
  undefined *local_198;
  undefined1 local_188 [8];
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_168 [12];
  undefined4 local_15c;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b349f0) && (_Init_thread_header(&DAT_146b349f0), DAT_146b349f0 == -1))
  {
    FName::FName(&DAT_146b349e8,L"AILineOfSight",1);
    _Init_thread_footer(&DAT_146b349f0);
  }
  lVar2 = *(longlong *)(param_1 + -0x98);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1 + -0x1b8);
    uVar3 = 0;
    if (lVar2 == 0) goto LAB_142dc6960;
  }
  uVar3 = FUN_1407c3030(param_1 + 8);
  if ((char)uVar3 != '\0') {
LAB_142dc6960:
    return uVar3 & 0xffffffffffffff00;
  }
  *param_4 = *param_4 + 1;
  puVar4 = (undefined8 *)FUN_142dd0240(param_1 + -0x1b8);
  *param_3 = *puVar4;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar4 + 1);
  _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
  local_15c = 0x3f800000;
  local_1a8 = param_6;
  FUN_1422ffb20(local_d8,DAT_146b349e8,local_188,1);
  FCollisionQueryParams::AddIgnoredActor(local_d8,*(undefined8 *)(param_1 + -0xa0));
  local_1a0 = local_d8;
  local_198 = &DAT_146aefe68;
  local_1a8._0_4_ = 3;
  cVar1 = UWorld::LineTraceSingleByChannel(lVar2,local_168,param_2,param_3);
  if (cVar1 == '\0') {
LAB_142dc692a:
    *param_5 = 0x3f800000;
    uVar3 = 1;
  }
  else {
    if (((*(longlong *)(param_1 + -0xa0) != 0) &&
        (plVar5 = (longlong *)FUN_14222e250(), plVar5 != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*plVar5 + 0x780))(plVar5), cVar1 != '\0')) {
      *param_4 = *param_4 + 1;
      (**(code **)(*plVar5 + 0x790))(plVar5,&local_180);
      local_1a0 = local_d8;
      local_198 = &DAT_146aefe68;
      local_1a8._0_4_ = 3;
      cVar1 = UWorld::LineTraceSingleByChannel(lVar2,local_168,param_2,&local_180);
      if (cVar1 == '\0') {
        *param_3 = local_180;
        *(undefined4 *)(param_3 + 1) = local_178;
        goto LAB_142dc692a;
      }
    }
    uVar3 = 0;
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 == 0) {
    return uVar3;
  }
  FMemory::Free();
  return uVar3;
}



// FUNCTION 142dc69d0 FUN_142dc69d0 body=1240 status=ok
// SIG undefined FUN_142dc69d0(void)

void FUN_142dc69d0(longlong *param_1,longlong param_2,int param_3,char param_4)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  int local_44;
  longlong *local_40;
  longlong local_38;
  
  if (param_3 < 1) {
    return;
  }
  plVar11 = (longlong *)param_1[0x39];
  plVar3 = (longlong *)0x0;
  plVar2 = plVar11 + (longlong)(int)param_1[0x3a] * 0x10;
  for (; plVar10 = plVar3, plVar11 != plVar2; plVar11 = plVar11 + 0x10) {
    if (plVar11[1] == param_2) {
      plVar10 = plVar11;
      if ((plVar11 != (longlong *)0x0) &&
         (plVar3 = (longlong *)FUN_142dcdb70(), plVar3 != (longlong *)0x0)) {
        cVar7 = *(char *)((longlong)plVar3 + 0x89);
        goto LAB_142dc6a37;
      }
      break;
    }
  }
  cVar7 = '\0';
  plVar11 = plVar10;
LAB_142dc6a37:
  if (param_4 == '\0') {
    if (plVar11 != (longlong *)0x0) {
      if (((char)plVar11[10] == '\0') || (*(char *)((longlong)plVar11 + 0x7a) == '\0')) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (bVar14) goto LAB_142dc6a7d;
    }
    bVar14 = false;
  }
  else {
LAB_142dc6a7d:
    bVar14 = true;
  }
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if (!bVar14) {
    return;
  }
  if ((*(char *)((longlong)plVar11 + 0x51) != '\0') && (cVar7 == '\0')) {
    return;
  }
  lVar8 = param_1[0x24];
  lVar4 = lVar8;
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
    lVar4 = param_1[0x24];
  }
  if (lVar8 == 0) {
    uVar16 = 0;
  }
  else {
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    uVar16 = *(undefined4 *)(lVar4 + 0x790);
  }
  bVar15 = false;
  *(undefined4 *)((longlong)plVar11 + 0x74) = uVar16;
  bVar14 = true;
  if (plVar3 == (longlong *)0x0) {
    *(undefined1 *)(plVar11 + 10) = 0;
  }
  else {
    bVar15 = 0 < (int)plVar3[0x18];
    if ((int)plVar3[0x18] < 1) {
      lVar8 = plVar3[0x14];
      lVar4 = (longlong)(int)plVar3[0x15] * 0x30 + lVar8;
      for (; lVar8 != lVar4; lVar8 = lVar8 + 0x30) {
        if (0 < *(int *)(lVar8 + 0x10)) {
          bVar15 = true;
          goto LAB_142dc6b44;
        }
      }
    }
    else {
LAB_142dc6b44:
      *(int *)((longlong)plVar11 + 0x3c) = *(int *)((longlong)plVar11 + 0x3c) + param_3;
    }
    if (0 < (int)plVar3[0x18]) {
      bVar14 = (int)plVar3[0x18] <= *(int *)((longlong)plVar11 + 0x3c);
    }
    if ((char)plVar3[0x13] == '\0') {
      lVar8 = plVar3[0x14];
      lVar4 = (longlong)(int)plVar3[0x15] * 0x30 + lVar8;
      for (; lVar8 != lVar4; lVar8 = lVar8 + 0x30) {
        if ((0 < *(int *)(lVar8 + 0x10)) &&
           (bVar15 = true, *(int *)((longlong)plVar11 + 0x3c) < *(int *)(lVar8 + 0x10))) {
          bVar14 = false;
        }
      }
    }
    if (*(char *)((longlong)plVar3 + 0x89) == '\0') {
      *(bool *)(plVar11 + 10) = bVar14 == false;
    }
  }
  *(int *)(plVar11 + 7) = (int)plVar11[7] + 1;
  *(bool *)((longlong)plVar11 + 0x51) = bVar14;
  if (plVar3 == (longlong *)0x0) goto LAB_142dc6c25;
  lVar8 = param_1[0x23];
  if (lVar8 == 0) {
LAB_142dc6c14:
    lVar8 = 0;
  }
  else {
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142dc6c14;
  }
  (**(code **)(*plVar3 + 0x290))(plVar3,lVar8);
LAB_142dc6c25:
  if ((param_1[0x24] != 0) || (lVar8 = FUN_1423407b0(param_1), lVar8 != 0)) {
    lVar8 = param_1[0x24];
    if (lVar8 == 0) {
      lVar8 = FUN_1423407b0(param_1);
    }
    lVar8 = UWorld::GetGameState<APVPGameState>(lVar8);
    if ((lVar8 != 0) && (plVar2 = *(longlong **)(lVar8 + 0x540), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x710))(plVar2,param_1,param_2);
    }
  }
  local_40 = param_1;
  local_38 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x35,&local_40);
  if (plVar3 != (longlong *)0x0) {
    plVar10 = (longlong *)plVar3[6];
    plVar2 = plVar10 + (int)plVar3[7];
    for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
      if (*plVar10 != 0) {
        lVar5 = FUN_142dfdfe0();
        lVar8 = *plVar10;
        for (lVar4 = lVar8; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar5) {
            if (lVar8 != 0) {
              local_40 = param_1;
              local_38 = lVar8;
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (param_1 + 0x37,&local_40);
            }
            break;
          }
        }
      }
    }
  }
  local_44 = 0;
  if (bVar15) {
    local_44 = *(int *)((longlong)plVar11 + 0x3c) + -1;
  }
  iVar12 = 1;
  if (1 < param_3) {
    do {
      (**(code **)(*param_1 + 0x430))(param_1,plVar3,0,(local_44 - param_3) + iVar12,0);
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_3);
  }
  (**(code **)(*param_1 + 0x430))
            (param_1,plVar3,*(undefined1 *)((longlong)plVar11 + 0x51),local_44,0);
  if (bVar15) {
    if ((cVar7 != '\0') && (bVar14 != false)) {
      *(undefined4 *)((longlong)plVar11 + 0x3c) = 0;
      *(undefined1 *)((longlong)plVar11 + 0x51) = 0;
    }
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    if ((*(char *)((longlong)plVar3 + 0xb1) != '\0') && (0 < (int)plVar3[0x18])) {
      *(undefined4 *)((longlong)plVar11 + 0x54) = 0;
    }
    if ((char)plVar3[0x13] == '\0') {
      plVar2 = (longlong *)plVar3[0x14];
      plVar10 = plVar2 + (longlong)(int)plVar3[0x15] * 6;
      for (; plVar2 != plVar10; plVar2 = plVar2 + 6) {
        if ((0 < (int)plVar2[2]) && (*(char *)((longlong)plVar2 + 0x29) != '\0')) {
          plVar9 = (longlong *)plVar11[8];
          plVar13 = plVar9 + (longlong)(int)plVar11[9] * 7;
          for (; plVar9 != plVar13; plVar9 = plVar9 + 7) {
            if (*plVar9 == *plVar2) {
              *(undefined4 *)(plVar9 + 6) = 0;
            }
          }
        }
      }
    }
  }
  if (((plVar3 != (longlong *)0x0) && (0 < (int)plVar3[0x1e])) &&
     (lVar8 = param_1[0x23], lVar8 != 0)) {
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (bVar14) {
      uVar6 = FUN_142d80d40();
      FUN_142d94090(uVar6,lVar8,(int)plVar3[0x1e]);
    }
  }
  return;
}



// FUNCTION 142dc6eb0 FUN_142dc6eb0 body=112 status=ok
// SIG undefined FUN_142dc6eb0(void)

void FUN_142dc6eb0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x508);
  uVar2 = (longlong)*(int *)(param_1 + 0x510) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x510) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x28))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 142dc6f30 FUN_142dc6f30 body=141 status=ok
// SIG undefined FUN_142dc6f30(void)

longlong FUN_142dc6f30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (0 < *(int *)(param_1 + 0x330)) {
    plVar1 = *(longlong **)(param_1 + 0x118);
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x248);
    if ((lVar2 == 0) || (*(longlong **)(lVar2 + 0x118) != plVar1)) {
      if (plVar1 == (longlong *)0x0) {
        lVar2 = 0;
      }
      else {
        uVar3 = FUN_142c36280();
        lVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
      }
      FWeakObjectPtr::operator=(param_1 + 0x248,lVar2);
    }
    return lVar2;
  }
  return 0;
}



// FUNCTION 142dc6fc0 FUN_142dc6fc0 body=127 status=ok
// SIG undefined FUN_142dc6fc0(void)

void FUN_142dc6fc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((param_2 != 0) && (0 < *(int *)(param_2 + 0xf0))) &&
     (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      uVar4 = FUN_142d80d40();
      FUN_142d94090(uVar4,lVar1,*(undefined4 *)(param_2 + 0xf0));
    }
  }
  return;
}



// FUNCTION 142dc7040 FUN_142dc7040 body=147 status=ok
// SIG undefined FUN_142dc7040(void)

void FUN_142dc7040(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((param_2 != 0) && (0 < *(int *)(param_2 + 0xf4))) &&
     (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      uVar4 = FUN_142d80d40();
      FUN_142d943d0(uVar4,lVar1,*(undefined4 *)(param_2 + 0xf4),param_3);
    }
  }
  return;
}



// FUNCTION 142dc70e0 FUN_142dc70e0 body=317 status=ok
// SIG undefined FUN_142dc70e0(void)

undefined1
FUN_142dc70e0(longlong param_1,byte *param_2,undefined1 param_3,float *param_4,float *param_5)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  *param_4 = 3.4028235e+38;
  if (*param_2 < 8) {
    cVar2 = *(char *)((ulonglong)*param_2 * 0x68 + 0x50 + param_1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146859258) &&
       (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
      DAT_146859248 = -1;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
    if ((((cVar2 != DAT_146859248) &&
         (lVar3 = (ulonglong)*param_2 * 0x68, (*(uint *)(lVar3 + 100 + param_1) >> 1 & 1) != 0)) &&
        (fVar1 = *(float *)(lVar3 + 0x28 + param_1), 0.0 < fVar1)) &&
       (fVar4 = *(float *)(lVar3 + 0x20 + param_1), fVar4 < 3.4028235e+38)) {
      if (fVar1 <= 0.0) {
        fVar4 = 3.4028235e+38;
      }
      if (((0.0 <= fVar4) && (fVar4 < 3.4028235e+38)) && (fVar4 < *param_5)) {
        *param_5 = fVar4;
      }
      *param_4 = fVar4;
      param_3 = 1;
    }
  }
  return param_3;
}



// FUNCTION 142dc7220 FUN_142dc7220 body=196 status=ok
// SIG undefined FUN_142dc7220(void)

void FUN_142dc7220(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if ((char)param_1[0x25] == '\x03') {
    if (0 < (int)param_1[0x12d]) {
      *(undefined4 *)(param_1 + 0x12d) = 0;
      if (*(int *)((longlong)param_1 + 0x96c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 300,0);
      }
      param_1[0x12e] = 0;
      (**(code **)(*param_1 + 0x1068))(param_1);
      if ((char)param_1[0x25] != '\x03') {
        return;
      }
    }
    if (param_2 != 0) {
      plVar1 = param_1 + 300;
      iVar2 = (int)param_1[0x12d];
      *(int *)(param_1 + 0x12d) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x96c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = param_2;
      param_1[0x12e] = *(longlong *)(*plVar1 + -8 + (longlong)(int)param_1[0x12d] * 8);
      (**(code **)(*param_1 + 0x1068))(param_1);
    }
  }
  return;
}



// FUNCTION 142dc72f0 FUN_142dc72f0 body=132 status=ok
// SIG undefined FUN_142dc72f0(void)

void FUN_142dc72f0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_2 != 0) &&
      (lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
    lVar3 = FUN_142e4e4a0();
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
      FUN_142d5ab70(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 142dc73d0 FUN_142dc73d0 body=89 status=ok
// SIG undefined FUN_142dc73d0(void)

void FUN_142dc73d0(longlong *param_1)

{
  if (((char)param_1[0x25] == '\x03') && (0 < (int)param_1[0x12d])) {
    *(undefined4 *)(param_1 + 0x12d) = 0;
    if (*(int *)((longlong)param_1 + 0x96c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 300,0);
    }
    param_1[0x12e] = 0;
                    /* WARNING: Could not recover jumptable at 0x000142dc741c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1068))(param_1);
    return;
  }
  return;
}



// FUNCTION 142dc7430 FUN_142dc7430 body=128 status=ok
// SIG undefined FUN_142dc7430(void)

void FUN_142dc7430(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
    lVar3 = FUN_142e4e4a0();
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
      FUN_142d5abe0(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142dc74b0 FUN_142dc74b0 body=598 status=ok
// SIG undefined FUN_142dc74b0(void)

void FUN_142dc74b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b34990) && (_Init_thread_header(&DAT_146b34990), DAT_146b34990 == -1))
  {
    atexit((_func_5014 *)&LAB_143ec0eb0);
    _Init_thread_footer(&DAT_146b34990);
  }
  DAT_146b34988 = 0;
  if (DAT_146b3498c != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146b34980,0);
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    lVar8 = (longlong)(*(int *)(param_1 + 0x30) + -1);
    lVar9 = lVar8 * 0x1c;
    do {
      if (lVar8 < 0) break;
      lVar7 = *(longlong *)(param_1 + 0x28) + lVar9;
      if (*(char *)(lVar7 + 0x19) == '\0') {
        cVar2 = FWeakObjectPtr::IsValid(lVar7);
        if (cVar2 == '\0') {
          *(undefined1 *)(lVar7 + 0x19) = 1;
        }
        if (((*(byte *)(lVar7 + 0x18) & 2) != 0) &&
           (cVar2 = FWeakObjectPtr::IsValid(lVar7 + 8), cVar2 == '\0')) {
          *(undefined1 *)(lVar7 + 0x19) = 1;
        }
        iVar6 = DAT_146b34988;
        if (*(char *)(lVar7 + 0x19) != '\0') {
          lVar7 = (longlong)DAT_146b34988;
          cVar2 = *(char *)(lVar9 + 0x10 + *(longlong *)(param_1 + 0x28));
          DAT_146b34988 = DAT_146b34988 + 1;
          if (DAT_146b3498c < DAT_146b34988) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146b34980,iVar6);
          }
          DAT_146b34980[lVar7] = (int)cVar2;
        }
      }
      lVar8 = lVar8 + -1;
      lVar9 = lVar9 + -0x1c;
    } while (*(char *)(param_1 + 0x60) == '\0');
  }
  if (0 < DAT_146b34988) {
    iVar4 = *(int *)(param_1 + 0x50);
    iVar6 = iVar4 + -1;
    if (-1 < iVar6) {
      lVar9 = (longlong)iVar6 * 0x48;
      lVar7 = (longlong)iVar4 * 0x48;
      lVar8 = lVar9;
      do {
        lVar1 = *(longlong *)(param_1 + 0x48);
        if (DAT_146b34980 != DAT_146b34980 + DAT_146b34988) {
          piVar5 = DAT_146b34980;
          do {
            if (*piVar5 == (int)*(char *)(lVar1 + 0x41 + lVar9)) {
              if ((*(char *)(lVar1 + 0x18 + lVar9) == '\x01') ||
                 (cVar2 = FUN_142dde100(param_1), cVar2 == '\0')) {
                FUN_142dd48a0(param_1,lVar1 + lVar8);
                iVar4 = *(int *)(param_1 + 0x50);
                iVar3 = (iVar4 - iVar6) + -1;
                if (iVar3 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(param_1 + 0x48) + lVar8),
                             (void *)(*(longlong *)(param_1 + 0x48) + lVar7),(longlong)iVar3 * 0x48)
                  ;
                  iVar4 = *(int *)(param_1 + 0x50);
                }
                *(int *)(param_1 + 0x50) = iVar4 + -1;
                TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink(param_1 + 0x48);
              }
              break;
            }
            piVar5 = piVar5 + 1;
          } while (piVar5 != DAT_146b34980 + DAT_146b34988);
        }
        lVar7 = lVar7 + -0x48;
        lVar8 = lVar8 + -0x48;
        lVar9 = lVar9 + -0x48;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      iVar4 = *(int *)(param_1 + 0x50);
    }
    if (iVar4 < 1) {
      FUN_142ddd0c0(param_1);
    }
  }
  return;
}



// FUNCTION 142dc7710 FUN_142dc7710 body=148 status=ok
// SIG undefined FUN_142dc7710(void)

void FUN_142dc7710(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x678))();
    if (plVar1 != (longlong *)0x0) {
      param_1 = plVar1;
    }
    uVar2 = FUN_142e75af0();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
    if ((lVar3 != 0) && (*(undefined8 *)(lVar3 + 0x1c8) = 0, *(char *)(lVar3 + 0x1b0) == '\x02')) {
      iVar4 = 2;
      while (*(longlong *)(lVar3 + 0x1b8 + (longlong)iVar4 * 8) == 0) {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) {
          FUN_142dcaec0(lVar3);
          return;
        }
      }
      *(char *)(lVar3 + 0x1b0) = (char)iVar4;
      FUN_142dcaec0(lVar3);
    }
  }
  return;
}



// FUNCTION 142dc77b0 FUN_142dc77b0 body=84 status=ok
// SIG undefined FUN_142dc77b0(void)

void FUN_142dc77b0(longlong param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1b8 + (ulonglong)param_2 * 8) = 0;
    if (bVar1 == param_2) {
      uVar2 = (uint)param_2;
      do {
        if (*(longlong *)(param_1 + 0x1b8 + (longlong)(int)uVar2 * 8) != 0) {
          *(char *)(param_1 + 0x1b0) = (char)uVar2;
          FUN_142dcaec0();
          return;
        }
        uVar2 = uVar2 - 1;
      } while (-1 < (int)uVar2);
      FUN_142dcaec0();
      return;
    }
  }
  return;
}



// FUNCTION 142dc7810 FUN_142dc7810 body=57 status=ok
// SIG undefined FUN_142dc7810(void)

void FUN_142dc7810(longlong param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  
  if ((param_2 != 0) &&
     (bVar1 = *(byte *)(param_1 + 0x1b0),
     *(undefined8 *)(param_1 + 0x1b8 + (ulonglong)param_2 * 8) = 0, bVar1 == param_2)) {
    uVar2 = (uint)param_2;
    while (*(longlong *)(param_1 + 0x1b8 + (longlong)(int)uVar2 * 8) == 0) {
      uVar2 = uVar2 - 1;
      if ((int)uVar2 < 0) {
        return;
      }
    }
    *(char *)(param_1 + 0x1b0) = (char)uVar2;
  }
  return;
}



// FUNCTION 142dc7850 FUN_142dc7850 body=44 status=ok
// SIG undefined FUN_142dc7850(void)

void FUN_142dc7850(longlong param_1)

{
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    FUN_142dcaec0();
    return;
  }
  return;
}



// FUNCTION 142dc7880 FUN_142dc7880 body=48 status=ok
// SIG undefined FUN_142dc7880(void)

void FUN_142dc7880(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_142340f30();
  if (iVar1 == 3) {
    FUN_142dc3e20(param_1,param_2);
  }
  return;
}



// FUNCTION 142dc78d0 FUN_142dc78d0 body=131 status=ok
// SIG undefined FUN_142dc78d0(void)

void FUN_142dc78d0(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  plVar1 = *(longlong **)(lVar3 + 400);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_142e4e4a0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x388))(plVar1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142dc7980 FUN_142dc7980 body=218 status=ok
// SIG undefined FUN_142dc7980(void)

void FUN_142dc7980(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  
  plVar2 = (longlong *)FUN_142dceb30();
  lVar3 = (longlong)(int)plVar2[1] + (longlong)param_3;
  lVar4 = -0x80000000;
  if ((-0x80000001 < lVar3) && (lVar4 = 0x7fffffff, lVar3 < 0x7fffffff)) {
    lVar4 = lVar3;
  }
  lVar3 = *plVar2;
  iVar5 = (int)lVar4;
  *(int *)(plVar2 + 1) = iVar5;
  iVar1 = iVar5;
  if (*(char *)(lVar3 + 0x38) != '\0') {
    iVar1 = *(int *)(lVar3 + 0x34);
    if (*(int *)(lVar3 + 0x34) <= iVar5) {
      iVar1 = iVar5;
    }
    *(int *)(plVar2 + 1) = iVar1;
  }
  if (*(char *)(lVar3 + 0x40) != '\0') {
    iVar5 = *(int *)(lVar3 + 0x3c);
    if (iVar1 <= *(int *)(lVar3 + 0x3c)) {
      iVar5 = iVar1;
    }
    *(int *)(plVar2 + 1) = iVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x120);
  if ((lVar4 == 0) && (lVar4 = FUN_1423407b0(param_1), lVar4 == 0)) {
    return;
  }
  lVar4 = UWorld::GetGameState<APVPGameState>(lVar4);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x548) != 0)) {
    local_28 = *(undefined8 *)(param_1 + 0x118);
    local_20 = param_2;
    local_18 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(lVar4 + 0x548) + 0x458,&local_28);
  }
  return;
}



// FUNCTION 142dc7a60 FUN_142dc7a60 body=253 status=ok
// SIG undefined FUN_142dc7a60(void)

void FUN_142dc7a60(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b34928) {
    _Init_thread_header(&DAT_146b34928);
    if (DAT_146b34928 == -1) {
      FName::FName(&DAT_146b34920,L"CheatMessage",1);
      _Init_thread_footer(&DAT_146b34928);
    }
  }
  if (param_3 == DAT_146b34920) {
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b17150);
  }
  FUN_1426fe730(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142dc7b70 FUN_142dc7b70 body=118 status=ok
// SIG undefined FUN_142dc7b70(void)

void FUN_142dc7b70(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_38 = *param_6;
  local_30 = *(undefined4 *)(param_6 + 1);
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  FUN_142dd58a0(local_28,param_2,&local_28,param_4,param_5,&local_38,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142dc7bf0 FUN_142dc7bf0 body=39 status=ok
// SIG undefined FUN_142dc7bf0(void)

void FUN_142dc7bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142d408e0(param_2,param_1,0x3f800000,0,param_3);
  return;
}



// FUNCTION 142dc7c20 FUN_142dc7c20 body=61 status=ok
// SIG undefined FUN_142dc7c20(void)

/* WARNING: Removing unreachable block (ram,0x000142dc7c53) */

void FUN_142dc7c20(void)

{
  FUN_142dd5bc0();
  return;
}



// FUNCTION 142dc7c70 FUN_142dc7c70 body=161 status=ok
// SIG undefined FUN_142dc7c70(void)

void FUN_142dc7c70(longlong *param_1,undefined8 param_2)

{
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  (**(code **)(*param_1 + 0x7a8))(param_1,&local_68,local_38);
  local_50 = 0;
  local_58 = 0;
  local_40 = local_60;
  local_48 = local_68;
  FUN_1405a1e30(local_28,param_1,param_2,&local_48,0x42480000,&local_58);
  FUN_140591060(local_28);
  return;
}



// FUNCTION 142dc7d20 FUN_142dc7d20 body=58 status=ok
// SIG undefined FUN_142dc7d20(void)

void FUN_142dc7d20(longlong *param_1)

{
  FUN_1426ff0d0();
  if ((param_1[0x12e] != 0) && (param_1[0x91] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000142dc7d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1068))(param_1);
    return;
  }
  return;
}



// FUNCTION 142dc7d60 FUN_142dc7d60 body=400 status=ok
// SIG undefined FUN_142dc7d60(void)

void FUN_142dc7d60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong local_38 [2];
  
  if (param_2 != 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_142d4a150(param_2,param_1,local_38);
    lVar1 = (longlong)*(int *)(param_1 + 0x950);
    if (*(int *)(param_1 + 0x950) != 0) {
      iVar7 = 0;
      bVar8 = **(longlong **)(param_1 + 0x948) != param_2;
      lVar3 = 0;
      iVar4 = 0;
      do {
        lVar3 = lVar3 + 1;
        iVar5 = iVar4 + 1;
        if (lVar3 < lVar1) {
          plVar2 = (longlong *)(lVar3 * 0x60 + *(longlong *)(param_1 + 0x948));
          do {
            if (bVar8 != (*plVar2 != param_2)) break;
            iVar5 = iVar5 + 1;
            lVar3 = lVar3 + 1;
            plVar2 = plVar2 + 0xc;
          } while (lVar3 < lVar1);
        }
        iVar6 = iVar5 - iVar4;
        if (bVar8 == false) {
          if (iVar6 != 0) {
            plVar2 = (longlong *)((longlong)iVar4 * 0x60 + 0x48 + *(longlong *)(param_1 + 0x948));
            do {
              if (*plVar2 != 0) {
                FMemory::Free();
              }
              plVar2 = plVar2 + 0xc;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        else {
          if (iVar7 != iVar4) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar7 * 0x60 + *(longlong *)(param_1 + 0x948)),
                       (void *)((longlong)iVar4 * 0x60 + *(longlong *)(param_1 + 0x948)),
                       (longlong)iVar6 * 0x60);
          }
          iVar7 = iVar7 + iVar6;
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar4 = iVar5;
      } while (lVar3 < lVar1);
      *(int *)(param_1 + 0x950) = iVar7;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142dc7ef0 FUN_142dc7ef0 body=186 status=ok
// SIG undefined FUN_142dc7ef0(void)

void FUN_142dc7ef0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  
  plVar2 = (longlong *)FUN_142dceb30();
  lVar3 = *plVar2;
  *(int *)(plVar2 + 1) = param_3;
  iVar4 = param_3;
  if (*(char *)(lVar3 + 0x38) != '\0') {
    iVar4 = *(int *)(lVar3 + 0x34);
    if (*(int *)(lVar3 + 0x34) <= param_3) {
      iVar4 = param_3;
    }
    *(int *)(plVar2 + 1) = iVar4;
  }
  if (*(char *)(lVar3 + 0x40) != '\0') {
    iVar1 = *(int *)(lVar3 + 0x3c);
    if (iVar4 <= *(int *)(lVar3 + 0x3c)) {
      iVar1 = iVar4;
    }
    *(int *)(plVar2 + 1) = iVar1;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
    return;
  }
  lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x548) != 0)) {
    local_28 = *(undefined8 *)(param_1 + 0x118);
    local_20 = param_2;
    local_18 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(lVar3 + 0x548) + 0x468,&local_28);
  }
  return;
}



// FUNCTION 142dc7fb0 FUN_142dc7fb0 body=198 status=ok
// SIG undefined FUN_142dc7fb0(void)

void FUN_142dc7fb0(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 *param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_142d39300(uVar1);
  if (lVar2 != 0) {
    local_18 = *param_7;
    local_10 = *(undefined4 *)(param_7 + 1);
    FUN_142d49080(lVar2,param_2,param_1,param_3,param_4,param_5,param_6,&local_18,param_8,param_9);
  }
  return;
}



// FUNCTION 142dc8080 FUN_142dc8080 body=63 status=ok
// SIG undefined FUN_142dc8080(void)

void FUN_142dc8080(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_142d39300(uVar1);
  if (lVar2 != 0) {
    FUN_142d4a020(lVar2,param_2,param_1);
  }
  return;
}



// FUNCTION 142dc80e0 FUN_142dc80e0 body=847 status=ok
// SIG undefined FUN_142dc80e0(void)

void FUN_142dc80e0(longlong *param_1,longlong param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong local_28;
  int local_20;
  
  if (param_2 != 0) {
    lVar9 = param_1[0x39];
    lVar5 = (longlong)(int)param_1[0x3a] * 0x80 + lVar9;
    for (; lVar9 != lVar5; lVar9 = lVar9 + 0x80) {
      if (*(longlong *)(lVar9 + 8) == param_2) goto LAB_142dc8131;
    }
    lVar9 = 0;
LAB_142dc8131:
    if (lVar9 == 0) {
      FUN_142dd0ad0(param_1,param_2,0);
      lVar9 = param_1[0x39];
      lVar5 = (longlong)(int)param_1[0x3a] * 0x80 + lVar9;
      for (; lVar9 != lVar5; lVar9 = lVar9 + 0x80) {
        if (*(longlong *)(lVar9 + 8) == param_2) goto LAB_142dc8169;
      }
      lVar9 = 0;
LAB_142dc8169:
      if (lVar9 == 0) {
        return;
      }
    }
    lVar5 = FUN_142dcdb70(lVar9);
    if (lVar5 != 0) {
      if (*(char *)(lVar5 + 0x88) == '\0') {
        if (param_3 == '\0') {
          if ((*(char *)(lVar9 + 0x50) == '\0') || (*(char *)(lVar9 + 0x7a) == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            return;
          }
        }
        if ((*(char *)(lVar9 + 0x51) == '\0') || (*(char *)(lVar5 + 0x89) != '\0')) {
          plVar6 = (longlong *)param_1[0x23];
          if (plVar6 != (longlong *)0x0) {
            lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
            if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              uVar4 = FUN_142dcf7f0(lVar9);
              iVar3 = FUN_142340f30(param_1);
              if (iVar3 != 3) {
                if (((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) == 0) ||
                   (cVar2 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar2 == '\0')) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (!bVar1) {
                  FUN_142dc69d0(param_1,param_2,uVar4,param_3);
                }
              }
              (**(code **)(*param_1 + 0x418))(param_1,param_2,uVar4,param_3);
            }
          }
          FUN_142dc3fb0(param_1,param_2);
        }
      }
      else {
        iVar3 = FUN_142340f30(param_1);
        if ((iVar3 != 3) &&
           ((lVar9 = param_1[0x24], lVar9 != 0 || (lVar9 = FUN_1423407b0(param_1), lVar9 != 0)))) {
          UWorld::GetPlayerControllerIterator(lVar9,&local_28);
          while( true ) {
            if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) break;
            plVar6 = (longlong *)FWeakObjectPtr::Get();
            if (plVar6 != (longlong *)0x0) {
              lVar9 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
              if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                  lVar9 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                uVar7 = FUN_142e035e0();
                plVar8 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
                if (plVar8 != (longlong *)0x0) {
                  lVar9 = FUN_142dcdc90(plVar8,param_2);
                  if (param_3 == '\0') {
                    if (lVar9 != 0) {
                      if ((*(char *)(lVar9 + 0x50) == '\0') || (*(char *)(lVar9 + 0x7a) == '\0')) {
                        bVar1 = false;
                      }
                      else {
                        bVar1 = true;
                      }
                      if (bVar1) goto LAB_142dc829c;
                    }
                    bVar1 = false;
                  }
                  else {
LAB_142dc829c:
                    bVar1 = true;
                  }
                  if (((lVar9 != 0) && (bVar1)) &&
                     ((*(char *)(lVar9 + 0x51) == '\0' || (*(char *)(lVar5 + 0x89) != '\0')))) {
                    uVar4 = FUN_142dcf7f0(lVar9);
                    if (((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) == 0) ||
                       (cVar2 = (**(code **)(*plVar6 + 0x768))(), cVar2 == '\0')) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (!bVar1) {
                      FUN_142dc69d0(plVar8,param_2,uVar4,param_3);
                    }
                    (**(code **)(*plVar8 + 0x418))(plVar8,param_2,uVar4,param_3);
                    FUN_142dc3fb0(plVar8,param_2);
                  }
                }
              }
            }
            local_20 = local_20 + 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142dc8430 FUN_142dc8430 body=319 status=ok
// SIG undefined FUN_142dc8430(void)

void FUN_142dc8430(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_18 [16];
  
  lVar6 = param_1[0x39];
  lVar3 = (longlong)(int)param_1[0x3a] * 0x80 + lVar6;
  if (lVar6 == lVar3) {
    return;
  }
  while (*(longlong *)(lVar6 + 8) != param_2) {
    lVar6 = lVar6 + 0x80;
    if (lVar6 == lVar3) {
      return;
    }
  }
  if (lVar6 == 0) {
    return;
  }
  if ((*(char *)(lVar6 + 0x50) == '\0') || (*(char *)(lVar6 + 0x7a) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar4 = FUN_142dcdb70(lVar6);
  lVar3 = param_1[0x23];
  if (lVar3 != 0) {
    lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142dc84fe;
  }
  lVar3 = 0;
LAB_142dc84fe:
  if ((((*(char *)(lVar4 + 0xb0) != '\0') && (*(int *)(lVar6 + 0x3c) < *(int *)(lVar4 + 0xc0))) &&
      (*(int *)(*(longlong *)(lVar4 + 0xb8) + (longlong)*(int *)(lVar6 + 0x3c) * 8) <=
       *(int *)(lVar6 + 0x54))) ||
     ((lVar3 != 0 && (cVar2 = FUN_142dde3c0(lVar4,lVar3,0,local_18), cVar2 != '\0')))) {
    (**(code **)(*param_1 + 0x410))(param_1,param_2,0);
  }
  return;
}



// FUNCTION 142dc8570 FUN_142dc8570 body=85 status=ok
// SIG undefined FUN_142dc8570(void)

void FUN_142dc8570(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  FWeakObjectPtr::operator=(param_1 + 0x18,param_3);
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(lVar1 + 0x8c8);
    }
    FUN_142ddd4c0(param_1,param_2,uVar2);
  }
  return;
}



// FUNCTION 142dc85d0 FUN_142dc85d0 body=591 status=ok
// SIG undefined FUN_142dc85d0(void)

void FUN_142dc85d0(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  uVar4 = FUN_142e035e0();
  lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
  if (lVar5 == 0) {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x79) = param_4;
  cVar3 = FUN_142dd3600(param_1);
  if ((cVar3 == '\0') || (*(char *)((longlong)param_1 + 0x79) != '\0')) {
    lVar6 = param_3[0x1f];
    bVar2 = false;
    if (lVar6 != 0) goto LAB_142dc869e;
    (**(code **)(*param_3 + 0x368))(param_3);
    lVar6 = param_3[0x1f];
    bVar2 = false;
  }
  else {
    lVar6 = NewObject<USaveGame>(lVar5,param_3,0,0,0,0,0);
    param_1[0xd] = lVar6;
    bVar2 = true;
  }
  if (lVar6 == 0) {
    return;
  }
LAB_142dc869e:
  iVar10 = (int)param_1[9];
  if (iVar10 != 0) {
    plVar8 = (longlong *)(param_1[8] + 0x20);
    do {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 7;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 8,0);
  }
  puVar9 = *(undefined8 **)(lVar6 + 0xa0);
  puVar11 = puVar9 + (longlong)*(int *)(lVar6 + 0xa8) * 6;
  for (; puVar9 != puVar11; puVar9 = puVar9 + 6) {
    if ((*(char *)(puVar9 + 5) != '\0') &&
       (cVar3 = FUN_142dc0210(param_1 + 8,puVar9), cVar3 == '\0')) {
      iVar10 = (int)param_1[9];
      *(int *)(param_1 + 9) = iVar10 + 1;
      if (*(int *)((longlong)param_1 + 0x4c) < iVar10 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 8,iVar10);
      }
      FUN_142dc1770((longlong)iVar10 * 0x38 + param_1[8],*puVar9,0);
    }
  }
  if (((char)param_1[10] == '\0') || (*(char *)((longlong)param_1 + 0x7a) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (((longlong *)*param_1 == (longlong *)0x0) ||
       (lVar6 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar6 == 0)) {
      uVar12 = 0;
    }
    else {
      lVar6 = (**(code **)(*(longlong *)*param_1 + 0x148))();
      uVar12 = *(undefined4 *)(lVar6 + 0x790);
    }
    *(undefined4 *)(param_1 + 0xe) = uVar12;
  }
  if (((bVar2) && ((char)param_1[0xf] == '\0')) && (lVar6 = *param_1, lVar6 != 0)) {
    lVar7 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_142dd1c90(param_1[0xd],lVar5,*(undefined8 *)(lVar6 + 0x848),param_1);
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  return;
}



// FUNCTION 142dc8820 SpawnParticleActor body=59 status=ok
// SIG undefined SpawnParticleActor(void)

void UEffectLibrary::SpawnParticleActor(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = FActorSpawnParameters::FActorSpawnParameters(local_38);
  UWorld::SpawnActor(param_1,param_2,0,0,uVar1);
  return;
}



// FUNCTION 142dc8860 FUN_142dc8860 body=84 status=ok
// SIG undefined FUN_142dc8860(void)

void FUN_142dc8860(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1458b3d08;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1458b3d50;
  }
  return;
}



// FUNCTION 142dc88c0 FUN_142dc88c0 body=598 status=ok
// SIG undefined FUN_142dc88c0(void)

longlong FUN_142dc88c0(longlong param_1,int param_2,undefined8 *param_3)

{
  void *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  
  lVar15 = (longlong)param_2;
  if (param_2 == -1) {
    return 0;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x50) <= param_2)) {
    iVar14 = *(int *)(param_1 + 100);
    if (iVar14 == 0) {
      iVar14 = 1;
    }
    *(int *)(param_1 + 100) = iVar14 + 1;
    iVar6 = *(int *)(param_1 + 0x50);
    lVar15 = (longlong)iVar6;
    *(int *)(param_1 + 0x50) = iVar6 + 1;
    if (*(int *)(param_1 + 0x54) < iVar6 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar6);
    }
    lVar13 = *(longlong *)(param_1 + 0x48);
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    *(undefined8 *)(lVar13 + lVar15 * 0x48) = *param_3;
    *(undefined4 *)(lVar13 + 8 + lVar15 * 0x48) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(lVar13 + 0xc + lVar15 * 0x48) = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)(lVar13 + 0x10 + lVar15 * 0x48) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(lVar13 + 0x14 + lVar15 * 0x48) = *(undefined4 *)((longlong)param_3 + 0x14);
    *(undefined1 *)(lVar13 + 0x18 + lVar15 * 0x48) = *(undefined1 *)(param_3 + 3);
    *(undefined4 *)(lVar13 + 0x1c + lVar15 * 0x48) = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined8 *)(lVar13 + 0x20 + lVar15 * 0x48) = param_3[4];
    *(undefined8 *)(lVar13 + 0x28 + lVar15 * 0x48) = param_3[5];
    *(undefined4 *)(lVar13 + 0x30 + lVar15 * 0x48) = *(undefined4 *)(param_3 + 6);
    *(undefined4 *)(lVar13 + 0x3c + lVar15 * 0x48) = uVar1;
    *(int *)(lVar13 + 0x38 + lVar15 * 0x48) = iVar14;
    *(undefined2 *)(lVar13 + 0x40 + lVar15 * 0x48) = 0;
    lVar15 = *(longlong *)(param_1 + 0x48) + lVar15 * 0x48;
  }
  else {
    iVar14 = *(int *)(param_1 + 100);
    if (iVar14 == 0) {
      iVar14 = 1;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    *(int *)(param_1 + 100) = iVar14 + 1;
    uVar5 = *(undefined4 *)(param_3 + 2);
    iVar6 = *(int *)(param_1 + 0x50);
    uVar10 = *param_3;
    uVar7 = *(undefined4 *)(param_3 + 1);
    uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
    uVar3 = *(undefined4 *)(param_3 + 6);
    uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar4 = *(undefined1 *)(param_3 + 3);
    uVar11 = param_3[4];
    uVar12 = param_3[5];
    *(int *)(param_1 + 0x50) = iVar6 + 1;
    if (*(int *)(param_1 + 0x54) < iVar6 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar6);
    }
    _Src = (void *)(*(longlong *)(param_1 + 0x48) + lVar15 * 0x48);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + 0x48),_Src,(longlong)(iVar6 - param_2) * 0x48);
    lVar13 = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(lVar13 + lVar15 * 0x48) = uVar10;
    *(undefined4 *)(lVar13 + 8 + lVar15 * 0x48) = uVar7;
    *(undefined4 *)(lVar13 + 0xc + lVar15 * 0x48) = uVar8;
    *(undefined4 *)(lVar13 + 0x10 + lVar15 * 0x48) = uVar5;
    *(undefined4 *)(lVar13 + 0x14 + lVar15 * 0x48) = uVar9;
    *(undefined1 *)(lVar13 + 0x18 + lVar15 * 0x48) = uVar4;
    *(undefined8 *)(lVar13 + 0x20 + lVar15 * 0x48) = uVar11;
    *(undefined4 *)(lVar13 + 0x1c + lVar15 * 0x48) = uVar2;
    *(undefined4 *)(lVar13 + 0x30 + lVar15 * 0x48) = uVar3;
    *(undefined8 *)(lVar13 + 0x28 + lVar15 * 0x48) = uVar12;
    *(undefined4 *)(lVar13 + 0x3c + lVar15 * 0x48) = uVar1;
    *(int *)(lVar13 + 0x38 + lVar15 * 0x48) = iVar14;
    *(undefined2 *)(lVar13 + 0x40 + lVar15 * 0x48) = 0;
    lVar15 = *(longlong *)(param_1 + 0x48) + lVar15 * 0x48;
  }
  return lVar15;
}



// FUNCTION 142dc8b20 FUN_142dc8b20 body=101 status=ok
// SIG undefined FUN_142dc8b20(void)

void FUN_142dc8b20(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0xd] != 0) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      lVar1 = (**(code **)(*(longlong *)*param_1 + 0x148))();
      if (lVar1 != 0) {
        uVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
        lVar1 = UWorld::GetGameState<APVPGameState>(uVar2);
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x540) != 0)) {
          FUN_142ddf7e0(*(longlong *)(lVar1 + 0x540),param_1);
        }
      }
    }
    param_1[0xd] = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return;
}



// FUNCTION 142dc8b90 FUN_142dc8b90 body=173 status=ok
// SIG undefined FUN_142dc8b90(void)

void FUN_142dc8b90(undefined8 param_1,float param_2,float param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  int local_38;
  int local_34 [11];
  
  lVar1 = FUN_14270bb10();
  if (lVar1 != 0) {
    FUN_14270dc70(param_1,&local_38,local_34);
    FUN_142701ac0(param_1,(float)local_38 * *(float *)(lVar1 + 0x78) + param_2,
                  (float)local_34[0] * *(float *)(lVar1 + 0x7c) + param_3,param_4,param_5,param_6,0)
    ;
  }
  return;
}



// FUNCTION 142dc8c40 FUN_142dc8c40 body=421 status=ok
// SIG undefined FUN_142dc8c40(void)

undefined8 FUN_142dc8c40(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_res8;
  
  plVar5 = (longlong *)param_1[0xa1];
  if (plVar5 != (longlong *)0x0) {
    lVar2 = FUN_1429c30a0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = UIpConnection::GetPrivateStaticClass();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_res8 = plVar5;
        (**(code **)(*plVar5 + 0x300))();
        TArray<FName,FDefaultAllocator>::Remove(plVar5[0x32e] + 0x48,&local_res8);
        return 1;
      }
      (**(code **)(*plVar5 + 0x2f8))(plVar5);
      return 1;
    }
  }
  lVar2 = param_1[0xa1];
  if (lVar2 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar2 = *(longlong *)(lVar2 + 0x38);
      if (((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x90), lVar3 != 0)) &&
         (0 < *(int *)(lVar3 + 0x50))) {
        plVar5 = *(longlong **)(lVar3 + 0x48);
        lVar4 = 0;
        do {
          local_res8 = (longlong *)*plVar5;
          if ((longlong *)local_res8[6] == param_1) {
            (**(code **)(*local_res8 + 0x300))(local_res8);
            TArray<FName,FDefaultAllocator>::Remove(*(longlong *)(lVar2 + 0x90) + 0x48,&local_res8);
            return 1;
          }
          lVar4 = lVar4 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar4 < *(int *)(lVar3 + 0x50));
      }
    }
  }
  return 0;
}



// FUNCTION 142dc8df0 FUN_142dc8df0 body=95 status=ok
// SIG undefined FUN_142dc8df0(void)

void FUN_142dc8df0(longlong param_1)

{
  FUN_142dc8e80(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if ((*(char *)(param_1 + 0xd1) == '\0') && (*(char *)(param_1 + 0xd0) == '\0')) {
    *(undefined1 *)(param_1 + 0xd1) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0x7f7fffff;
    return;
  }
  *(undefined1 *)(param_1 + 0xd1) = 1;
  *(undefined4 *)(param_1 + 0xcc) = 0x7f7fffff;
  return;
}



// FUNCTION 142dc8e50 FUN_142dc8e50 body=46 status=ok
// SIG undefined FUN_142dc8e50(void)

void FUN_142dc8e50(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x700) + 0x10))();
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  return;
}



// FUNCTION 142dc8e80 FUN_142dc8e80 body=245 status=ok
// SIG undefined FUN_142dc8e80(void)

void FUN_142dc8e80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  uint local_10;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (iVar7 = 0, 0 < *(int *)(lVar1 + 0x1a8))) {
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(lVar8 + *(longlong *)(lVar1 + 0x1a0));
      if ((((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x118), lVar2 != 0)) &&
          ((*(uint *)(lVar2 + 8) & *(uint *)(param_1 + 0xd)) == *(uint *)(param_1 + 0xd))) &&
         (cVar6 = FUN_142dc2e10(local_res8), cVar6 != '\0')) {
        iVar7 = iVar7 + -1;
        lVar8 = lVar8 + -8;
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < *(int *)(lVar1 + 0x1a8));
  }
  FUN_142dc2e10(local_res8,param_1[1]);
  FUN_142ddf640(param_1);
  uVar5 = DAT_1468b5d98;
  uVar4 = DAT_1468b5d94;
  uVar3 = DAT_1468b5d90;
  local_10 = local_10 & 0xffffff00;
  *(undefined4 *)(param_1 + 6) = DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 7) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  param_1[1] = 0;
  param_1[8] = CONCAT44(uVar5,uVar4);
  *(uint *)(param_1 + 9) = local_10;
  return;
}



// FUNCTION 142dc8f80 FUN_142dc8f80 body=161 status=ok
// SIG undefined FUN_142dc8f80(void)

void FUN_142dc8f80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 local_res8 [4];
  
  FUN_142701ce0();
  if ((*(char *)(param_1 + 0x128) == '\x03') && (lVar2 = *(longlong *)(param_1 + 0x848), lVar2 != 0)
     ) {
    iVar1 = *(int *)(lVar2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      FUN_142227350(lVar2,0,1);
      *(undefined8 *)(param_1 + 0x848) = 0;
      local_res8[0] = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x8c0,local_res8);
    }
  }
  return;
}



// FUNCTION 142dc9030 FUN_142dc9030 body=72 status=ok
// SIG undefined FUN_142dc9030(void)

void FUN_142dc9030(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xe9);
  FUN_142701e80();
  if ((((byte)(uVar1 >> 3) & 1) != ((byte)(*(uint *)(param_1 + 0xe9) >> 3) & 1)) &&
     ((*(uint *)(param_1 + 0xe9) >> 3 & 1) == 0)) {
    (**(code **)(*param_1 + 0xfe8))(param_1);
  }
  return;
}



// FUNCTION 142dc9080 FUN_142dc9080 body=1082 status=ok
// SIG undefined FUN_142dc9080(void)

void FUN_142dc9080(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  longlong local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  longlong local_70 [2];
  longlong local_60 [5];
  
  local_res20 = param_4;
  FUN_142701ef0(param_1,param_2,param_3,param_4,param_5);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b34948) && (_Init_thread_header(&DAT_146b34948), DAT_146b34948 == -1))
  {
    FName::FName(&DAT_146b34940,L"GbxInput",1);
    _Init_thread_footer(&DAT_146b34948);
  }
  plVar4 = (longlong *)*param_3;
  plVar1 = plVar4 + (int)param_3[1];
  if (plVar4 != plVar1) {
    while (*plVar4 != DAT_146b34940) {
      plVar4 = plVar4 + 1;
      if (plVar4 == plVar1) {
        return;
      }
    }
    plVar1 = (longlong *)(param_2 + 0x98);
    local_c8 = 0;
    local_c0 = 0;
    (**(code **)(*param_1 + 0xd68))(param_1,&local_c8);
    local_d8 = CONCAT44((float)DAT_1464aa730._1_1_ * 0.003921569,
                        (float)DAT_1464aa730._2_1_ * 0.003921569);
    local_d0 = CONCAT44((float)DAT_1464aa730._3_1_ * 0.003921569,
                        (float)(byte)DAT_1464aa730 * 0.003921569);
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_d8);
    local_res18[0] = 0;
    local_d8 = 0;
    local_d0 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"<<<< INPUT STACK >>>>",0x2c);
    FUN_1428a6fb0(plVar1,&local_d8,local_res18);
    if (local_d8 != 0) {
      FMemory::Free();
    }
    lVar6 = (longlong)((int)local_c0 + -1);
    if (-1 < (int)local_c0 + -1) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_c8 + lVar6 * 8) + 0x118);
        local_b8 = (float)DAT_1464aa730._2_1_ * 0.003921569;
        local_b4 = (float)DAT_1464aa730._1_1_ * 0.003921569;
        local_b0 = (float)(byte)DAT_1464aa730 * 0.003921569;
        local_ac = (float)DAT_1464aa730._3_1_ * 0.003921569;
        (**(code **)(*plVar1 + 0x20))(plVar1,&local_b8);
        local_res18[0] = 0;
        lVar3 = *(longlong *)(*(longlong *)(local_c8 + lVar6 * 8) + 0x18);
        if (lVar2 == 0) {
          local_d8 = lVar3;
          FName::ToString(&local_d8,&local_80);
          puVar5 = &DAT_143f3eda8;
          if (local_78 != 0) {
            puVar5 = local_80;
          }
          FString::PrintfImpl(local_60,&DAT_1458a71f0,puVar5);
          FUN_1428a6fb0(plVar1,local_60,local_res18);
          puVar5 = local_80;
          if (local_60[0] != 0) {
            FMemory::Free();
            puVar5 = local_80;
          }
        }
        else {
          local_a8 = lVar3;
          FName::ToString(&local_a8,&local_90);
          local_d8 = *(longlong *)(lVar2 + 0x18);
          puVar5 = &DAT_143f3eda8;
          if (local_88 != 0) {
            puVar5 = local_90;
          }
          FName::ToString(&local_d8,&local_a0);
          puVar7 = &DAT_143f3eda8;
          if (local_98 != 0) {
            puVar7 = local_a0;
          }
          FString::PrintfImpl(local_70,L" %s.%s",puVar7,puVar5);
          FUN_1428a6fb0(plVar1,local_70,local_res18);
          if (local_70[0] != 0) {
            FMemory::Free();
          }
          puVar5 = local_90;
          if (local_a0 != (undefined2 *)0x0) {
            FMemory::Free();
            puVar5 = local_90;
          }
        }
        if (puVar5 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        lVar6 = lVar6 + -1;
        param_4 = local_res20;
      } while (-1 < lVar6);
    }
    local_res18[0] = 0;
    local_d8 = 0;
    local_d0 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"<<<<  >>>>",0x16);
    FUN_1428a6fb0(plVar1,&local_d8,local_res18);
    if (local_d8 != 0) {
      FMemory::Free();
    }
    plVar1 = (longlong *)param_1[0x26];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x408))(plVar1,param_2,param_3,param_4,param_5);
    }
    if (local_c8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142dc94c0 FUN_142dc94c0 body=523 status=ok
// SIG undefined FUN_142dc94c0(void)

void FUN_142dc94c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  code **ppcVar8;
  float local_res8 [2];
  longlong *local_res10;
  longlong in_stack_00000030;
  undefined8 local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90 [3];
  code *local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  longlong **local_48;
  undefined8 *local_40;
  longlong *local_38;
  
  local_res10 = (longlong *)0x0;
  local_res8[0] = 0.0;
  lVar7 = *param_1;
  if (lVar7 != 0) {
    iVar1 = (int)param_1[1];
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar7 + 0x40))) {
      local_res10 = (longlong *)((longlong)iVar1 * 0x50 + *(longlong *)(lVar7 + 0x38));
    }
  }
  uVar5 = UEnum::GetPrivateStaticClass();
  local_a8 = FUN_141799410(uVar5,0xffffffffffffffff,L"EGbxAttributeModifierType");
  if ((local_res10 != (longlong *)0x0) && (*local_res10 != 0)) {
    if (in_stack_00000030 == 0) {
      FString::PrintfImpl(local_90,L"{c:y}%.4f{c}",(double)*(float *)(param_1 + 4));
      ppcVar8 = local_90;
      bVar4 = false;
      bVar3 = true;
    }
    else {
      lVar6 = FWeakObjectPtr::Get(in_stack_00000030 + 8);
      local_68 = FWeakObjectPtr::Get(in_stack_00000030);
      plVar2 = local_res10;
      local_58 = *(undefined4 *)(in_stack_00000030 + 0x14);
      lVar7 = local_68;
      if (lVar6 != 0) {
        lVar7 = lVar6;
      }
      local_60 = lVar6;
      local_res8[0] = (float)FUN_142c98860(local_res10 + 2,lVar7);
      plVar2 = (longlong *)plVar2[9];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x280))(plVar2,&local_68,local_res8);
      }
      FString::PrintfImpl(&local_78,L"{c:g}%.4f{c}/{c:y}%.4f{c}",(double)local_res8[0],
                          (double)*(float *)(param_1 + 4));
      ppcVar8 = &local_78;
      bVar4 = true;
      bVar3 = false;
    }
    local_a0 = *ppcVar8;
    *ppcVar8 = (code *)0x0;
    local_98 = *(undefined4 *)(ppcVar8 + 1);
    local_94 = *(undefined4 *)((longlong)ppcVar8 + 0xc);
    ppcVar8[1] = (code *)0x0;
    if ((bVar3) && (local_90[0] != (code *)0x0)) {
      FMemory::Free();
    }
    if ((bVar4) && (local_78 != (code *)0x0)) {
      FMemory::Free();
    }
    local_48 = &local_res10;
    local_40 = &local_a8;
    local_38 = (longlong *)&local_a0;
    plStack_70 = &local_50;
    local_78 = FUN_142dc66e0;
    local_50 = param_2 + 0x98;
    FUN_142c9ea60(param_1 + 5,&local_78);
    if (local_a0 != (code *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142dc96d0 FUN_142dc96d0 body=94 status=ok
// SIG undefined FUN_142dc96d0(void)

void FUN_142dc96d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  
  cVar1 = FUN_142dd3d30();
  if (cVar1 != '\0') {
    FUN_142dca1a0(*param_1,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 142dc9730 FUN_142dc9730 body=2068 status=ok
// SIG undefined FUN_142dc9730(void)

/* WARNING: Removing unreachable block (ram,0x000142dc9bb3) */
/* WARNING: Removing unreachable block (ram,0x000142dc9bc0) */

void FUN_142dc9730(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 **ppuVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  longlong local_res8;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 uVar20;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98 [2];
  undefined8 local_88;
  undefined2 *local_80;
  undefined8 local_78;
  undefined2 *local_70;
  
  lVar9 = param_2 + 0x98;
  iVar1 = *(int *)(param_1 + 0x50);
  lVar14 = (longlong)iVar1;
  if (((iVar1 < 1) || (iVar1 <= iVar1 + -1)) ||
     (lVar15 = *(longlong *)(param_1 + 0x48), *(char *)(lVar15 + -0x30 + lVar14 * 0x48) != '\0')) {
    fVar17 = 3.4028235e+38;
  }
  else {
    fVar17 = (*(float *)(lVar15 + -0xc + lVar14 * 0x48) + *(float *)(lVar15 + -0x2c + lVar14 * 0x48)
             ) - *(float *)(param_1 + 0x58);
  }
  if ((iVar1 < 1) || (lVar14 = *(longlong *)(param_1 + 0x48), *(char *)(lVar14 + 0x18) != '\0')) {
    fVar19 = 3.4028235e+38;
  }
  else {
    fVar19 = (*(float *)(lVar14 + 0x3c) + *(float *)(lVar14 + 0x1c)) - *(float *)(param_1 + 0x58);
  }
  bVar3 = fVar17 != 3.4028235e+38;
  local_res8 = lVar9;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (bVar3) {
    FString::PrintfImpl(&local_d8,L"%.2f",(double)fVar17);
    ppuVar8 = &local_d8;
  }
  else {
    local_f8 = (undefined2 *)0x0;
    local_f0 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"Infinite",0x12);
    ppuVar8 = &local_f8;
  }
  local_80 = *ppuVar8;
  *ppuVar8 = (undefined2 *)0x0;
  iVar1 = *(int *)(ppuVar8 + 1);
  ppuVar8[1] = (undefined2 *)0x0;
  if ((bVar3) && (local_d8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((!bVar3) && (local_f8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  bVar3 = fVar19 != 3.4028235e+38;
  if (bVar3) {
    FString::PrintfImpl(&local_d8,L"%.2f",(double)fVar19);
    ppuVar8 = &local_d8;
  }
  else {
    local_f8 = (undefined2 *)0x0;
    local_f0 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"Infinite",0x12);
    ppuVar8 = &local_f8;
  }
  puVar13 = *ppuVar8;
  *ppuVar8 = (undefined2 *)0x0;
  iVar2 = *(int *)(ppuVar8 + 1);
  ppuVar8[1] = (undefined2 *)0x0;
  local_70 = puVar13;
  if ((bVar3) && (local_d8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((!bVar3) && (local_f8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  puVar12 = &DAT_143f3eda8;
  if (iVar1 != 0) {
    puVar12 = local_80;
  }
  uVar20 = *(undefined4 *)(param_1 + 0x50);
  puVar11 = &DAT_143f3eda8;
  if (iVar2 != 0) {
    puVar11 = puVar13;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    local_b0 = 5;
    local_b8 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,&DAT_143f3edc8,10);
  }
  else {
    local_88 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
    FName::ToString(&local_88,&local_b8);
  }
  dVar18 = (double)*(float *)(param_1 + 0x58);
  puVar13 = &DAT_143f3eda8;
  if ((int)local_b0 != 0) {
    puVar13 = local_b8;
  }
  FString::PrintfImpl(&local_d8,L"{c:y}%s{c} x%d {c:o}[%.2f]{c} ({c:r}%s{c}|{c:b}%s{c})",puVar13,
                      uVar20,dVar18,puVar11,puVar12);
  FUN_1428c0170(lVar9,&local_d8);
  if (local_d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_c8 = (undefined2 *)0x0;
  local_c0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"Value Contexts: ",0x22);
  lVar14 = *(longlong *)(param_1 + 0x28);
  lVar15 = (longlong)*(int *)(param_1 + 0x30) * 0x1c + lVar14;
  if (lVar14 != lVar15) {
    lVar16 = lVar14 + 8;
    do {
      uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
      lVar9 = FWeakObjectPtr::Get(lVar16);
      if (lVar9 == 0) {
        lVar9 = FWeakObjectPtr::Get(lVar14);
        if (lVar9 == 0) {
          local_a8 = 0;
          local_a0 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
          FGenericPlatformString::Memcpy(local_a8,&DAT_143f3edc8,10);
        }
        else {
          local_b8 = *(undefined2 **)(lVar9 + 0x18);
          FName::ToString(&local_b8,&local_a8);
        }
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        plVar10 = &local_a8;
      }
      else {
        lVar9 = FWeakObjectPtr::Get(lVar16);
        if (lVar9 == 0) {
          local_f8 = (undefined2 *)0x0;
          local_f0 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
          FGenericPlatformString::Memcpy(local_f8,&DAT_143f3edc8,10);
        }
        else {
          local_88 = *(undefined8 *)(lVar9 + 0x18);
          FName::ToString(&local_88,&local_f8);
        }
        puVar13 = &DAT_143f3eda8;
        if ((int)local_f0 != 0) {
          puVar13 = local_f8;
        }
        lVar9 = FWeakObjectPtr::Get(lVar14);
        if (lVar9 == 0) {
          local_e8 = (undefined2 *)0x0;
          local_e0 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
          FGenericPlatformString::Memcpy(local_e8,&DAT_143f3edc8,10);
        }
        else {
          local_78 = *(undefined8 *)(lVar9 + 0x18);
          FName::ToString(&local_78,&local_e8);
        }
        puVar12 = &DAT_143f3eda8;
        if ((int)local_e0 != 0) {
          puVar12 = local_e8;
        }
        FString::PrintfImpl(local_98,L"%s/{c:y}%s{c}",puVar12,puVar13);
        plVar10 = local_98;
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
      }
      puVar13 = (undefined2 *)*plVar10;
      *plVar10 = 0;
      lVar9 = plVar10[1];
      plVar10[1] = 0;
      if ((bVar3) && (local_98[0] != 0)) {
        FMemory::Free();
      }
      if ((bVar4) && (local_e8 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if ((bVar5) && (local_f8 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      dVar18 = (double)CONCAT44(uVar20,*(undefined4 *)(lVar16 + 0xc));
      puVar12 = &DAT_143f3eda8;
      if ((int)lVar9 != 0) {
        puVar12 = puVar13;
      }
      puVar11 = &DAT_143f3eda8;
      if ((int)local_c0 != 0) {
        puVar11 = local_c8;
      }
      FString::PrintfImpl(&local_d8,L"%s (%s {c:o}x%i{c})",puVar11,puVar12,dVar18);
      if (local_c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_c8 = local_d8;
      local_c0 = local_d0;
      local_d0 = 0;
      local_d8 = (undefined2 *)0x0;
      if (puVar13 != (undefined2 *)0x0) {
        FMemory::Free(puVar13);
      }
      lVar14 = lVar14 + 0x1c;
      lVar16 = lVar16 + 0x1c;
      lVar9 = local_res8;
    } while (lVar14 != lVar15);
  }
  FUN_1428c0170(lVar9,&local_c8);
  uVar7 = local_res20;
  uVar6 = local_res18;
  lVar15 = local_res10;
  fVar17 = *(float *)(lVar9 + 0x1a8);
  *(float *)(lVar9 + 0x1a8) = fVar17 + 15.0;
  lVar14 = *(longlong *)(param_1 + 0x18);
  lVar16 = (longlong)*(int *)(param_1 + 0x20) * 0x38 + lVar14;
  for (; lVar14 != lVar16; lVar14 = lVar14 + 0x38) {
    FUN_142dc94c0(lVar14,lVar15,uVar6,uVar7,param_5,0);
    lVar9 = local_res8;
  }
  *(float *)(lVar9 + 0x1a8) = fVar17;
  if (((*(longlong *)(param_1 + 8) != 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x48) != '\0'))
     && (*(longlong *)(param_1 + 0x10) != 0)) {
    FString::PrintfImpl(local_98,L"Damage Over Time [{c:b}%i{c}]",*(undefined4 *)(param_1 + 0x40));
    FUN_1428c0170(lVar9,local_98);
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    fVar17 = *(float *)(lVar9 + 0x1a8);
    *(float *)(lVar9 + 0x1a8) = fVar17 + 15.0;
    lVar14 = *(longlong *)(param_1 + 0x38);
    lVar15 = (longlong)*(int *)(param_1 + 0x40) * 0x1c0 + lVar14;
    for (; lVar14 != lVar15; lVar14 = lVar14 + 0x1c0) {
      if (*(longlong *)(lVar14 + 0x18) == 0) {
        local_e0 = 5;
        local_e8 = (undefined2 *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
        FGenericPlatformString::Memcpy(local_e8,&DAT_143f3edc8,10);
      }
      else {
        local_res10 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x18);
        FName::ToString(&local_res10,&local_e8);
      }
      puVar13 = &DAT_143f3eda8;
      if ((int)local_e0 != 0) {
        puVar13 = local_e8;
      }
      if (*(longlong *)(lVar14 + 0x38) == 0) {
        local_f8 = (undefined2 *)0x0;
        local_f0 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
        FGenericPlatformString::Memcpy(local_f8,&DAT_143f3edc8,10);
      }
      else {
        local_res8 = *(longlong *)(*(longlong *)(lVar14 + 0x38) + 0x18);
        FName::ToString(&local_res8,&local_f8);
      }
      puVar12 = &DAT_143f3eda8;
      if ((int)local_f0 != 0) {
        puVar12 = local_f8;
      }
      FString::PrintfImpl(local_98,L"{c:r}%f{c} {c:b}%s{c} ({c:y}%s{c}) [%s]",
                          (double)*(float *)(lVar14 + 0x1b0),puVar12,puVar13);
      FUN_1428c0170(lVar9);
      if (local_98[0] != 0) {
        FMemory::Free();
      }
      if (local_f8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_e8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    *(float *)(lVar9 + 0x1a8) = fVar17;
  }
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_70 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_80 != (undefined2 *)0x0) {
    FMemory::Free(local_80);
  }
  return;
}



// FUNCTION 142dc9f50 FUN_142dc9f50 body=586 status=ok
// SIG undefined FUN_142dc9f50(void)

void FUN_142dc9f50(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  float fVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *local_48;
  ulonglong local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b349a0) && (_Init_thread_header(&DAT_146b349a0), DAT_146b349a0 == -1))
  {
    FName::FName(&DAT_146b34998,L"StatusEffects",1);
    _Init_thread_footer(&DAT_146b349a0);
  }
  plVar4 = (longlong *)*param_3;
  plVar1 = plVar4 + (int)param_3[1];
  if (plVar4 == plVar1) {
    return;
  }
  while (*plVar4 != DAT_146b34998) {
    plVar4 = plVar4 + 1;
    if (plVar4 == plVar1) {
      return;
    }
  }
  cVar3 = UActorComponent::IsComponentTickEnabled(param_1);
  pwVar8 = L"{c:g}NOT TICKING{c}";
  if (cVar3 != '\0') {
    pwVar8 = L"{c:r}TICKING{c}";
  }
  puVar10 = (undefined2 *)0x0;
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  if (*pwVar8 != L'\0') {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar8[lVar6] != L'\0');
    uVar5 = (int)lVar6 + 1;
    local_40 = (ulonglong)uVar5;
    uVar7 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar7 = (uint)local_40;
    }
    puVar10 = local_48;
    FGenericPlatformString::Memcpy(local_48,pwVar8,(longlong)(int)uVar5 * 2);
    puVar11 = puVar10;
    if (uVar7 != 0) goto LAB_142dca06d;
  }
  puVar11 = &DAT_143f3eda8;
LAB_142dca06d:
  FString::PrintfImpl(&local_48,L"{c:r}Status Effects{c} : ({c:b}%i{c}) %s",
                      *(undefined4 *)(param_1 + 0x188),puVar11);
  FUN_1428c0170(param_2 + 0x98,&local_48);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  fVar2 = *(float *)(param_2 + 0x240);
  *(float *)(param_2 + 0x240) = fVar2 + 15.0;
  lVar6 = *(longlong *)(param_1 + 0x180);
  lVar9 = (longlong)*(int *)(param_1 + 0x188) * 0x70 + lVar6;
  for (; lVar6 != lVar9; lVar6 = lVar6 + 0x70) {
    FUN_142dc9730(lVar6,param_2,param_3,param_4,param_5);
  }
  *(float *)(param_2 + 0x240) = fVar2;
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  return;
}



// FUNCTION 142dca1a0 FUN_142dca1a0 body=1537 status=ok
// SIG undefined FUN_142dca1a0(void)

/* WARNING: Removing unreachable block (ram,0x000142dca55c) */
/* WARNING: Removing unreachable block (ram,0x000142dca569) */

void FUN_142dca1a0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined2 *puVar8;
  char cVar9;
  undefined2 **ppuVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  float fVar22;
  undefined2 *local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined2 *local_98;
  undefined2 *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined4 local_50;
  
  lVar17 = *(longlong *)(param_1 + 0x180);
  lVar11 = (longlong)*(int *)(param_1 + 0x188) * 0x70 + lVar17;
  if (lVar17 != lVar11) {
    while ((*(longlong *)(lVar17 + 8) == 0 ||
           (*(longlong *)(lVar17 + 8) != *(longlong *)(param_2 + 8)))) {
      lVar17 = lVar17 + 0x70;
      if (lVar17 == lVar11) {
        return;
      }
    }
    if (*(char *)(lVar17 + 0x60) == '\0') {
      lVar18 = *(longlong *)(lVar17 + 0x48);
      lVar11 = lVar18 + (longlong)*(int *)(lVar17 + 0x50) * 0x48;
      for (; (lVar19 = 0, lVar18 != lVar11 &&
             (lVar19 = lVar18, *(int *)(lVar18 + 0x38) != *(int *)(param_2 + 0x10)));
          lVar18 = lVar18 + 0x48) {
      }
      if (lVar19 != 0) {
        local_res18 = param_3;
        local_res20 = param_4;
        if ((*(char *)(lVar19 + 0x18) == '\0') &&
           (fVar22 = (*(float *)(lVar19 + 0x3c) + *(float *)(lVar19 + 0x1c)) -
                     *(float *)(lVar17 + 0x58), fVar22 != 3.4028235e+38)) {
          FString::PrintfImpl(&local_78,L"%.2f",(double)fVar22);
          ppuVar10 = &local_78;
          bVar5 = true;
          bVar4 = false;
        }
        else {
          local_68 = (undefined2 *)0x0;
          local_60 = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          FGenericPlatformString::Memcpy(local_68,L"Infinite",0x12);
          ppuVar10 = &local_68;
          bVar5 = false;
          bVar4 = true;
        }
        local_90 = *ppuVar10;
        *ppuVar10 = (undefined2 *)0x0;
        iVar1 = *(int *)(ppuVar10 + 1);
        ppuVar10[1] = (undefined2 *)0x0;
        if ((bVar5) && (local_78 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar4) && (local_68 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        lVar11 = FWeakObjectPtr::Get(lVar19 + 0x10);
        if (lVar11 == 0) {
          lVar11 = FWeakObjectPtr::Get(lVar19 + 8);
          if (lVar11 == 0) {
            local_88 = 0;
            local_80 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
            FGenericPlatformString::Memcpy(local_88,&DAT_143f3edc8,10);
          }
          else {
            local_res10 = *(undefined2 **)(lVar11 + 0x18);
            FName::ToString(&local_res10,&local_88);
          }
          bVar7 = false;
          bVar6 = false;
          bVar5 = false;
          bVar4 = true;
          ppuVar10 = (undefined2 **)&local_88;
        }
        else {
          lVar11 = FWeakObjectPtr::Get(lVar19 + 0x10);
          if (lVar11 == 0) {
            local_68 = (undefined2 *)0x0;
            local_60 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
            FGenericPlatformString::Memcpy(local_68,&DAT_143f3edc8,10);
          }
          else {
            local_res10 = *(undefined2 **)(lVar11 + 0x18);
            FName::ToString(&local_res10,&local_68);
          }
          puVar12 = &DAT_143f3eda8;
          if ((int)local_60 != 0) {
            puVar12 = local_68;
          }
          lVar11 = FWeakObjectPtr::Get(lVar19 + 8);
          if (lVar11 == 0) {
            local_78 = (undefined2 *)0x0;
            local_70 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
            FGenericPlatformString::Memcpy(local_78,&DAT_143f3edc8,10);
          }
          else {
            local_98 = *(undefined2 **)(lVar11 + 0x18);
            FName::ToString(&local_98,&local_78);
          }
          puVar20 = &DAT_143f3eda8;
          if ((int)local_70 != 0) {
            puVar20 = local_78;
          }
          FString::PrintfImpl(&local_58,L"(%s/{c:y}%s{c})",puVar20,puVar12);
          ppuVar10 = &local_58;
          bVar7 = true;
          bVar6 = true;
          bVar5 = true;
          bVar4 = false;
        }
        local_98 = *ppuVar10;
        *ppuVar10 = (undefined2 *)0x0;
        iVar2 = *(int *)(ppuVar10 + 1);
        ppuVar10[1] = (undefined2 *)0x0;
        if ((bVar4) && ((undefined2 *)local_88 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar5) && (local_58 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar6) && (local_78 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar7) && (local_68 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if (((*(longlong *)(lVar17 + 8) == 0) ||
            (*(char *)(*(longlong *)(lVar17 + 8) + 0x48) == '\0')) ||
           (*(longlong *)(lVar17 + 0x10) == 0)) {
          local_50 = 0;
          ppuVar10 = &local_58;
          bVar4 = false;
          local_res10 = (undefined2 *)0x0;
        }
        else {
          FString::PrintfImpl(&local_68,L"DOT: {c:r}%.4f{c}",(double)*(float *)(lVar19 + 0x30));
          ppuVar10 = &local_68;
          local_res10 = local_68;
          bVar4 = true;
        }
        *ppuVar10 = (undefined2 *)0x0;
        iVar3 = *(int *)(ppuVar10 + 1);
        ppuVar10[1] = (undefined2 *)0x0;
        if ((bVar4) && (local_68 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        puVar8 = local_90;
        puVar20 = local_98;
        puVar12 = *(undefined2 **)(lVar17 + 8);
        puVar13 = &DAT_143f3eda8;
        if (iVar3 != 0) {
          puVar13 = local_res10;
        }
        puVar15 = &DAT_143f3eda8;
        if (iVar1 != 0) {
          puVar15 = local_90;
        }
        puVar21 = &DAT_143f3eda8;
        if (iVar2 != 0) {
          puVar21 = local_98;
        }
        if (puVar12 == (undefined2 *)0x0) {
          local_60 = 5;
          local_68 = puVar12;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          FGenericPlatformString::Memcpy(local_68,&DAT_143f3edc8,10);
        }
        else {
          local_88 = *(longlong *)(puVar12 + 0xc);
          FName::ToString(&local_88,&local_68);
        }
        puVar12 = &DAT_143f3eda8;
        if ((int)local_60 != 0) {
          puVar12 = local_68;
        }
        FString::PrintfImpl(&local_58,L"{c:y}%s{c} %s ({c:b}%s{c}) %s",puVar12,puVar21,puVar15,
                            puVar13);
        FUN_1428c0170(local_res18 + 0x98,&local_58);
        if (local_58 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        lVar11 = *(longlong *)(lVar17 + 0x18);
        lVar18 = (longlong)*(int *)(lVar17 + 0x20) * 0x38 + lVar11;
        for (; lVar11 != lVar18; lVar11 = lVar11 + 0x38) {
          lVar14 = *(longlong *)(lVar17 + 0x28);
          lVar16 = (longlong)*(int *)(lVar17 + 0x30) * 0x1c + lVar14;
          for (; lVar14 != lVar16; lVar14 = lVar14 + 0x1c) {
            cVar9 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar14,lVar19 + 8);
            if (cVar9 != '\0') {
              if (lVar14 != 0) {
                FUN_142dc94c0(lVar11,local_res18,local_res20,param_5,param_6,lVar14);
                goto LAB_142dca702;
              }
              break;
            }
          }
          local_60 = 0x1e;
          local_68 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          FGenericPlatformString::Memcpy(local_68,L"{c:r}***NO VALUECONTEXT***{c}",0x3c);
          FUN_1428c0170(local_res18 + 0x98);
          if (local_68 != (undefined2 *)0x0) {
            FMemory::Free();
          }
LAB_142dca702:
          puVar20 = local_98;
          puVar8 = local_90;
        }
        if (local_res10 != (undefined2 *)0x0) {
          FMemory::Free(local_res10);
        }
        if (puVar20 != (undefined2 *)0x0) {
          FMemory::Free(puVar20);
        }
        if (puVar8 != (undefined2 *)0x0) {
          FMemory::Free(puVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 142dca7b0 FUN_142dca7b0 body=237 status=ok
// SIG undefined FUN_142dca7b0(void)

ulonglong FUN_142dca7b0(longlong param_1,undefined8 param_2,float param_3,int param_4)

{
  float fVar1;
  ulonglong in_RAX;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 local_28 [32];
  
  if (((-1 < param_4) || (param_4 = param_4 + *(int *)(param_1 + 0x7540), -1 < param_4)) &&
     (param_4 < *(int *)(param_1 + 0x7540))) {
    lVar4 = *(longlong *)(param_1 + 0x7538);
    pbVar2 = (byte *)FUN_14077bb00(local_28);
    if (lVar4 == 0) {
      lVar4 = param_1 + 0x338;
    }
    lVar4 = lVar4 + (longlong)param_4 * 0x390;
    uVar3 = FUN_14077cd10(pbVar2);
    if ((char)uVar3 != '\0') {
      uVar3 = 0;
      if (*pbVar2 < 8) {
        uVar3 = (ulonglong)*pbVar2;
        if ((0.0 < *(float *)(uVar3 * 0x68 + 0x28 + lVar4)) &&
           (fVar1 = *(float *)(uVar3 * 0x68 + 0x20 + lVar4), fVar1 < 3.4028235e+38)) {
          if (param_3 < 0.0001) {
            return 1;
          }
          return (ulonglong)(fVar1 <= param_3);
        }
      }
    }
    return uVar3 & 0xffffffffffffff00;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142dca8a0 FUN_142dca8a0 body=395 status=ok
// SIG undefined FUN_142dca8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dca8a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  longlong local_318;
  undefined8 local_310;
  undefined1 local_308 [8];
  undefined1 local_300 [48];
  undefined1 local_2d0 [672];
  undefined1 *local_30;
  int local_28;
  int local_24;
  ulonglong local_10;
  
  if ((param_1 != 0) &&
     (local_10 = DAT_1468387a8 ^ (ulonglong)auStack_348, *(char *)(param_1 + 0x128) == '\x03')) {
    local_318 = param_1;
    local_310 = param_2;
    if ((DAT_146aeafc8 == '\0') &&
       (puVar4 = (undefined8 *)FUN_14218d320(), puVar4 != &DAT_146aeaf98)) {
      DAT_146aeaf98 = *puVar4;
      uRam0000000146aeafa0 = puVar4[1];
      _DAT_146aeafa8 = puVar4[2];
      uRam0000000146aeafb0 = puVar4[3];
      _DAT_146aeafb8 = *(undefined4 *)(puVar4 + 4);
      uRam0000000146aeafbc = *(undefined4 *)((longlong)puVar4 + 0x24);
      uRam0000000146aeafc0 = *(undefined4 *)(puVar4 + 5);
      uRam0000000146aeafc4 = *(undefined4 *)((longlong)puVar4 + 0x2c);
      DAT_146aeafc8 = '\x01';
    }
    uVar1 = DAT_146aeaf98;
    if ((DAT_146b34840 == '\0') &&
       (puVar4 = (undefined8 *)FUN_142dcc740(), puVar4 != &DAT_146b34828)) {
      DAT_146b34828._0_4_ = *(undefined4 *)puVar4;
      DAT_146b34828._4_4_ = *(undefined4 *)((longlong)puVar4 + 4);
      _DAT_146b34830 = *(undefined4 *)(puVar4 + 1);
      uRam0000000146b34834 = *(undefined4 *)((longlong)puVar4 + 0xc);
      _DAT_146b34838 = puVar4[2];
      DAT_146b34840 = '\x01';
    }
    local_328 = &local_310;
    FUN_142dc0080(local_308,param_2,CONCAT44(DAT_146b34828._4_4_,(undefined4)DAT_146b34828),
                  &local_318);
    cVar3 = FUN_14218fca0(local_308);
    iVar2 = local_28;
    if (cVar3 != '\0') {
      lVar6 = (longlong)local_28;
      local_28 = local_28 + 1;
      if (local_24 < local_28) {
        FUN_140ae1b70(local_2d0,iVar2);
      }
      puVar5 = local_2d0;
      if (local_30 != (undefined1 *)0x0) {
        puVar5 = local_30;
      }
      FUN_140ac3930(puVar5 + lVar6 * 0xa8,uVar1,local_300,&local_318);
    }
    FUN_14217f3d0(local_308);
  }
  return;
}



// FUNCTION 142dcaa30 FUN_142dcaa30 body=165 status=ok
// SIG undefined FUN_142dcaa30(void)

void FUN_142dcaa30(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    iVar4 = (int)plVar3[1];
    lVar1 = *plVar3;
    if (iVar4 != 0) {
      lVar1 = lVar1 + 8;
      do {
        FRichCurve::~FRichCurve(lVar1);
        lVar1 = lVar1 + 0x80;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lVar1 = *plVar3;
    }
    if (lVar1 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 5;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 142dcaae0 FUN_142dcaae0 body=138 status=ok
// SIG undefined FUN_142dcaae0(void)

void FUN_142dcaae0(void)

{
  longlong lVar1;
  
  FUN_1427076b0();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468698b0) {
    _Init_thread_header(&DAT_1468698b0);
    if (DAT_1468698b0 == -1) {
      FName::FName(&DAT_1468698a8,"LogitechLED",1);
      _Init_thread_footer(&DAT_1468698b0);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_1468698a8);
  if (lVar1 != 0) {
    FUN_140631000(lVar1);
    return;
  }
  return;
}



// FUNCTION 142dcab70 FUN_142dcab70 body=222 status=ok
// SIG undefined FUN_142dcab70(void)

void FUN_142dcab70(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b349b0) && (_Init_thread_header(&DAT_146b349b0), DAT_146b349b0 == -1))
  {
    FName::FName(&DAT_146b349a8,L"EndPlay",1);
    _Init_thread_footer(&DAT_146b349b0);
  }
  FUN_142dafbc0(param_1 + 0x198,&DAT_146b349a8);
  lVar1 = *(longlong *)(param_1 + 0x180);
  lVar2 = (longlong)*(int *)(param_1 + 0x188) * 0x70 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x70) {
    FUN_142ddd0c0(lVar1);
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 142dcac50 FUN_142dcac50 body=277 status=ok
// SIG undefined FUN_142dcac50(void)

void FUN_142dcac50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_14233a670();
  if ((int)param_1[100] == -1) goto LAB_142dcacb3;
  lVar5 = param_1[0x24];
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
    if (lVar5 != 0) goto LAB_142dcac92;
  }
  else {
LAB_142dcac92:
    lVar5 = UBehaviorTreeManager::GetCurrent(lVar5);
    if (lVar5 != 0) {
      FUN_142bd8290(lVar5,(int)param_1[100]);
    }
  }
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
LAB_142dcacb3:
  local_10 = (longlong *)0x0;
  if (param_1 + 0x1cee != &local_18) {
    param_1[0x1cee] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1cef,&local_10);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  lVar5 = param_1[0xea8];
  if (0 < (int)lVar5) {
    *(undefined4 *)(param_1 + 0xea8) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x7544)) {
      FUN_142dd9f30(param_1 + 0x67,0);
    }
    (**(code **)(*param_1 + 0x408))(param_1,(int)lVar5);
  }
  return;
}



// FUNCTION 142dcad70 FUN_142dcad70 body=329 status=ok
// SIG undefined FUN_142dcad70(void)

void FUN_142dcad70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b34968) {
    _Init_thread_header(&DAT_146b34968);
    if (DAT_146b34968 == -1) {
      FName::FName(&DAT_146b34960,L"Stance",1);
      _Init_thread_footer(&DAT_146b34968);
    }
  }
  if (*(char *)(param_1 + 0x84) != '\0') {
    FUN_142d8eb40(param_2,DAT_146b34960);
  }
  if (*(char *)(param_1 + 0x85) != '\0') {
    FUN_142d8f210(param_2,DAT_146b34960);
  }
  if (*(char *)(param_1 + 0x86) != '\0') {
    FUN_142d8eb90(param_2,DAT_146b34960);
  }
  if (*(char *)(param_1 + 0x87) != '\0') {
    FUN_142d8ec80(param_2,DAT_146b34960);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_142d6f980(param_2);
    return;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar2 = UAnimNotifyState::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x98);
    lVar3 = lVar1;
    if (lVar1 != 0) {
      while (lVar3 != lVar2) {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        FUN_142d55580(param_2);
      }
    }
  }
  return;
}



// FUNCTION 142dcaec0 FUN_142dcaec0 body=388 status=ok
// SIG undefined FUN_142dcaec0(void)

void FUN_142dcaec0(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  
  iVar6 = FUN_14233f450();
  if (iVar6 == 3) {
    plVar3 = *(longlong **)(param_1 + 0x1e0);
    plVar4 = *(longlong **)(param_1 + 0x1b8 + (ulonglong)*(byte *)(param_1 + 0x1b0) * 8);
    plVar9 = (longlong *)0x0;
    plVar7 = plVar9;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = (longlong *)(**(code **)(*plVar4 + 0x280))(plVar4,*(undefined8 *)(param_1 + 0x1a8));
    }
    plVar4 = *(longlong **)(param_1 + 0x1e0);
    if ((plVar7 != plVar4) || (*(char *)(param_1 + 0x1d8) != *(char *)(param_1 + 0x1b0))) {
      uVar1 = *(undefined1 *)(param_1 + 0x1d8);
      uVar2 = *(undefined1 *)(param_1 + 0x1b0);
      if ((*(int *)(param_1 + 0x1a0) != 0) &&
         ((*(longlong **)(param_1 + 0x198) != (longlong *)0x0 &&
          (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x18))(), cVar5 != '\0')))) {
        if (*(int *)(param_1 + 0x1a0) != 0) {
          plVar9 = *(longlong **)(param_1 + 0x198);
        }
        (**(code **)(*plVar9 + 0x40))(plVar9,uVar1,plVar4,uVar2,plVar7);
      }
      *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_1 + 0x1b0);
      *(longlong **)(param_1 + 0x1e0) = plVar7;
    }
    plVar4 = *(longlong **)(param_1 + 0x1e0);
    if (plVar4 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x290))(plVar3,*(undefined8 *)(param_1 + 0x118));
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(param_1 + 0x118));
      }
      lVar8 = *(longlong *)(param_1 + 0x120);
      if ((lVar8 == 0) && (lVar8 = FUN_1423407b0(param_1), lVar8 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(lVar8 + 0x790);
      }
      *(undefined4 *)(param_1 + 0x268) = uVar10;
    }
  }
  return;
}


