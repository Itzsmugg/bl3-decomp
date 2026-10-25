// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1436e5460 FUN_1436e5460 body=5598 status=ok
// SIG undefined FUN_1436e5460(void)

ulonglong *
FUN_1436e5460(int *param_1,undefined8 *param_2,uint param_3,ulonglong *param_4,int param_5,
             undefined4 param_6)

{
  uint *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [8];
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  LPVOID pvVar14;
  byte *pbVar15;
  undefined8 uVar16;
  byte bVar17;
  longlong lVar18;
  undefined1 *puVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong *puVar24;
  uint *puVar25;
  undefined8 local_res20;
  byte local_128;
  byte local_127 [7];
  undefined8 local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  ulonglong local_d8;
  uint local_d0;
  uint local_cc;
  longlong local_c8;
  uint local_c0 [2];
  undefined1 local_b8 [8];
  int local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  
  local_res20 = param_4;
  puVar9 = (undefined8 *)FUN_143714490(param_2,1);
  puVar12 = (undefined8 *)0x0;
  uVar20 = 0;
  uVar8 = uVar20;
  if (puVar9 != (undefined8 *)0x0) {
    uVar8 = (uint)*puVar9;
  }
  bVar4 = 0;
  switch(uVar8 & 0xf) {
  case 2:
  case 4:
    puVar9 = (undefined8 *)FUN_143714490(param_2,1);
    if (puVar9 != (undefined8 *)0x0) {
      bVar4 = (byte)*puVar9;
    }
    if ((bVar4 & 0xf) == 4) {
      puVar12 = param_2;
    }
    piVar10 = (int *)FUN_143714420(puVar12,1);
    if ((piVar10 == (int *)0x0) || (*piVar10 != 0x2004)) {
      if (2 < *param_1) {
        plVar2 = *(longlong **)(param_1 + 2);
        local_res20 = (ulonglong *)CONCAT71(local_res20._1_7_,0xff);
        if (plVar2[1] - *plVar2 < 1) {
          hkIo::ReadBuffer::implRead(plVar2,&local_res20);
        }
        else {
          FGenericPlatformString::Memcpy(&local_res20);
          *plVar2 = *plVar2 + 1;
        }
        local_110 = CONCAT44(local_110._4_4_,6);
        local_f0 = (ulonglong *)((ulonglong)((byte)local_res20 >> 1) & 0x7fffffffffffffbf);
        local_e0 = CONCAT44(local_e0._4_4_,(uint)(byte)local_res20) & 0xffffffff00000001;
        uVar8 = (byte)local_res20 & 1;
        if ((char)(byte)local_res20 < '\0') {
          do {
            plVar2 = *(longlong **)(param_1 + 2);
            local_128 = 0xff;
            if (plVar2[1] - *plVar2 < 1) {
              hkIo::ReadBuffer::implRead(plVar2,&local_128);
            }
            else {
              FGenericPlatformString::Memcpy(&local_128);
              *plVar2 = *plVar2 + 1;
            }
            local_f0 = (ulonglong *)
                       ((ulonglong)local_f0 |
                       ((ulonglong)local_128 & 0xffffffffffffff7f) << ((byte)local_110 & 0x3f));
            local_110 = CONCAT44(local_110._4_4_,(int)local_110 + 7);
          } while ((char)local_128 < '\0');
          uVar8 = (uint)local_e0;
        }
        iVar7 = (int)local_f0;
        if (uVar8 != 0) {
          iVar7 = -iVar7;
        }
        if (iVar7 != 4) {
          FUN_1436e47c0(param_1,param_4,param_3,param_5);
          return param_4;
        }
      }
      FUN_1436e4670(param_1,param_4,param_3,param_5);
      return param_4;
    }
    if (param_5 == 1) {
      plVar2 = *(longlong **)(param_1 + 2);
      if (plVar2[1] - *plVar2 < (longlong)(ulonglong)param_3) {
        hkIo::ReadBuffer::implRead(plVar2,param_4,param_3);
        return param_4;
      }
      FGenericPlatformString::Memcpy(param_4);
      *plVar2 = *plVar2 + (ulonglong)param_3;
      return param_4;
    }
    local_f0 = (ulonglong *)(ulonglong)param_3;
    if (0 < (int)param_3) {
      do {
        plVar2 = *(longlong **)(param_1 + 2);
        local_res20 = (ulonglong *)CONCAT71(local_res20._1_7_,0xff);
        if (plVar2[1] - *plVar2 < 1) {
          hkIo::ReadBuffer::implRead(plVar2,&local_res20);
        }
        else {
          FGenericPlatformString::Memcpy(&local_res20);
          *plVar2 = *plVar2 + 1;
        }
        *(byte *)param_4 = (byte)local_res20;
        param_4 = (ulonglong *)((longlong)param_4 + (longlong)param_5);
        local_f0 = (ulonglong *)((longlong)local_f0 - 1);
      } while (local_f0 != (ulonglong *)0x0);
      return param_4;
    }
    break;
  case 3:
    if (0 < (int)param_3) {
      uVar22 = (ulonglong)param_3;
      do {
        uVar13 = FUN_1436e9dc0(param_1);
        *param_4 = uVar13;
        param_4 = (ulonglong *)((longlong)param_4 + (longlong)param_5);
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
      return local_res20;
    }
    break;
  case 5:
    if ((char)param_1[1] == '\0') {
      if (param_5 == 4) {
        local_res20 = *(ulonglong **)(param_1 + 2);
        local_120 = (undefined8 *)(ulonglong)(param_3 * 4);
        if ((longlong)(local_res20[1] - *local_res20) < (longlong)local_120) {
          hkIo::ReadBuffer::implRead(local_res20,param_4,param_3 * 4);
        }
        else {
          FGenericPlatformString::Memcpy(param_4,*local_res20);
          *local_res20 = *local_res20 + (longlong)local_120;
        }
        if (((char)param_1[4] != '\0') &&
           (puVar11 = (ulonglong *)((longlong)param_4 + (longlong)(int)param_3 * 4),
           param_4 < puVar11)) {
          puVar24 = param_4;
          if (0xf < ((longlong)puVar11 + (3 - (longlong)param_4) & 0xfffffffffffffffcU)) {
            puVar19 = (undefined1 *)((longlong)param_4 + 6);
            do {
              uVar6 = (undefined4)*puVar24;
              *(char *)puVar24 = (char)((uint)uVar6 >> 0x18);
              puVar24 = puVar24 + 2;
              local_res20._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
              puVar19[-5] = local_res20._2_1_;
              puVar19[-4] = (char)((uint)uVar6 >> 8);
              puVar19[-3] = (char)uVar6;
              uVar6 = *(undefined4 *)(puVar19 + -2);
              puVar19[-2] = (char)((uint)uVar6 >> 0x18);
              local_res20._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
              puVar19[-1] = local_res20._2_1_;
              *puVar19 = (char)((uint)uVar6 >> 8);
              puVar19[1] = (char)uVar6;
              uVar6 = *(undefined4 *)(puVar19 + 2);
              puVar19[2] = (char)((uint)uVar6 >> 0x18);
              local_res20._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
              puVar19[3] = local_res20._2_1_;
              puVar19[4] = (char)((uint)uVar6 >> 8);
              puVar19[5] = (char)uVar6;
              uVar6 = *(undefined4 *)(puVar19 + 6);
              puVar19[6] = (char)((uint)uVar6 >> 0x18);
              local_res20._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
              puVar19[7] = local_res20._2_1_;
              puVar19[8] = (char)((uint)uVar6 >> 8);
              puVar19[9] = (char)uVar6;
              puVar19 = puVar19 + 0x10;
            } while (puVar24 < (ulonglong *)((longlong)puVar11 + -0xc));
          }
          if (puVar24 < puVar11) {
            do {
              uVar6 = (undefined4)*puVar24;
              *(char *)puVar24 = (char)((uint)uVar6 >> 0x18);
              local_res20._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
              *(undefined1 *)((longlong)puVar24 + 1) = local_res20._2_1_;
              *(char *)((longlong)puVar24 + 2) = (char)((uint)uVar6 >> 8);
              *(char *)((longlong)puVar24 + 3) = (char)uVar6;
              puVar24 = (ulonglong *)((longlong)puVar24 + 4);
            } while (puVar24 < puVar11);
            return param_4;
          }
        }
      }
      else {
        local_f0 = (ulonglong *)(ulonglong)param_3;
        if (0 < (int)param_3) {
          do {
            plVar2 = *(longlong **)(param_1 + 2);
            if (plVar2[1] - *plVar2 < 4) {
              hkIo::ReadBuffer::implRead(plVar2,&local_res20);
            }
            else {
              FGenericPlatformString::Memcpy(&local_res20);
              *plVar2 = *plVar2 + 4;
            }
            puVar11 = local_res20;
            if ((char)param_1[4] != '\0') {
              local_110 = CONCAT44(local_110._4_4_,(undefined4)local_res20);
              uVar13 = local_110;
              uVar22 = (ulonglong)local_res20 >> 0x18;
              local_110._2_1_ = (undefined1)((ulonglong)local_res20 >> 0x10);
              local_res20._4_4_ = SUB84(puVar11,4);
              local_res20._0_4_ =
                   CONCAT13((char)puVar11,
                            CONCAT12((char)((ulonglong)puVar11 >> 8),
                                     CONCAT11(local_110._2_1_,(char)uVar22)));
              local_110 = uVar13;
            }
            *(undefined4 *)param_4 = (undefined4)local_res20;
            param_4 = (ulonglong *)((longlong)param_4 + (longlong)param_5);
            local_f0 = (ulonglong *)((longlong)local_f0 - 1);
          } while (local_f0 != (ulonglong *)0x0);
          return param_4;
        }
      }
    }
    else if (param_5 == 8) {
      local_res20 = *(ulonglong **)(param_1 + 2);
      local_120 = (undefined8 *)(ulonglong)(param_3 * 8);
      if ((longlong)(local_res20[1] - *local_res20) < (longlong)local_120) {
        hkIo::ReadBuffer::implRead(local_res20,param_4,param_3 * 8);
      }
      else {
        FGenericPlatformString::Memcpy(param_4,*local_res20);
        *local_res20 = *local_res20 + (longlong)local_120;
      }
      if (((char)param_1[4] != '\0') && (puVar11 = param_4 + (int)param_3, param_4 < puVar11)) {
        puVar24 = param_4;
        if (0x1f < ((longlong)puVar11 + (7 - (longlong)param_4) & 0xfffffffffffffff8U)) {
          puVar19 = (undefined1 *)((longlong)param_4 + 10);
          do {
            uVar22 = *puVar24;
            *(char *)puVar24 = (char)(uVar22 >> 0x38);
            local_120._6_1_ = (undefined1)(uVar22 >> 0x30);
            puVar19[-9] = local_120._6_1_;
            puVar19[-8] = (char)(uVar22 >> 0x28);
            local_120._4_1_ = (undefined1)(uVar22 >> 0x20);
            puVar19[-7] = local_120._4_1_;
            puVar19[-6] = (char)(uVar22 >> 0x18);
            local_120._2_1_ = (undefined1)(uVar22 >> 0x10);
            puVar19[-5] = local_120._2_1_;
            local_120._0_1_ = (undefined1)uVar22;
            puVar19[-4] = (char)(uVar22 >> 8);
            puVar19[-3] = (undefined1)local_120;
            uVar16 = *(undefined8 *)(puVar19 + -2);
            puVar19[-2] = (char)((ulonglong)uVar16 >> 0x38);
            local_120._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
            puVar19[-1] = local_120._6_1_;
            *puVar19 = (char)((ulonglong)uVar16 >> 0x28);
            local_120._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
            puVar19[1] = local_120._4_1_;
            puVar19[2] = (char)((ulonglong)uVar16 >> 0x18);
            local_120._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
            puVar19[3] = local_120._2_1_;
            local_120._0_1_ = (undefined1)uVar16;
            puVar19[4] = (char)((ulonglong)uVar16 >> 8);
            puVar19[5] = (undefined1)local_120;
            uVar16 = *(undefined8 *)(puVar19 + 6);
            puVar19[6] = (char)((ulonglong)uVar16 >> 0x38);
            local_120._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
            puVar19[7] = local_120._6_1_;
            puVar19[8] = (char)((ulonglong)uVar16 >> 0x28);
            local_120._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
            puVar19[9] = local_120._4_1_;
            puVar19[10] = (char)((ulonglong)uVar16 >> 0x18);
            local_120._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
            puVar19[0xb] = local_120._2_1_;
            local_120._0_1_ = (undefined1)uVar16;
            puVar19[0xc] = (char)((ulonglong)uVar16 >> 8);
            puVar19[0xd] = (undefined1)local_120;
            uVar16 = *(undefined8 *)(puVar19 + 0xe);
            puVar19[0xe] = (char)((ulonglong)uVar16 >> 0x38);
            local_120._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
            puVar19[0xf] = local_120._6_1_;
            puVar19[0x10] = (char)((ulonglong)uVar16 >> 0x28);
            local_120._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
            puVar19[0x11] = local_120._4_1_;
            puVar19[0x12] = (char)((ulonglong)uVar16 >> 0x18);
            local_120._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
            puVar24 = puVar24 + 4;
            puVar19[0x13] = local_120._2_1_;
            local_120._0_1_ = (undefined1)uVar16;
            puVar19[0x14] = (char)((ulonglong)uVar16 >> 8);
            puVar19[0x15] = (undefined1)local_120;
            puVar19 = puVar19 + 0x20;
          } while (puVar24 < puVar11 + -3);
        }
        if (puVar24 < puVar11) {
          puVar19 = (undefined1 *)((longlong)puVar24 + 2);
          do {
            uVar16 = *(undefined8 *)(puVar19 + -2);
            puVar19[-2] = (char)((ulonglong)uVar16 >> 0x38);
            local_120._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
            puVar19[-1] = local_120._6_1_;
            *puVar19 = (char)((ulonglong)uVar16 >> 0x28);
            local_120._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
            puVar19[1] = local_120._4_1_;
            puVar19[2] = (char)((ulonglong)uVar16 >> 0x18);
            local_120._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
            puVar19[3] = local_120._2_1_;
            local_120._0_1_ = (undefined1)uVar16;
            puVar19[5] = (undefined1)local_120;
            puVar24 = (ulonglong *)(puVar19 + 6);
            puVar19[4] = (char)((ulonglong)uVar16 >> 8);
            puVar19 = puVar19 + 8;
          } while (puVar24 < puVar11);
          return param_4;
        }
      }
    }
    else {
      local_res20 = (ulonglong *)(ulonglong)param_3;
      if (0 < (int)param_3) {
        do {
          plVar2 = *(longlong **)(param_1 + 2);
          if (plVar2[1] - *plVar2 < 8) {
            hkIo::ReadBuffer::implRead(plVar2,&local_120);
          }
          else {
            FGenericPlatformString::Memcpy(&local_120);
            *plVar2 = *plVar2 + 8;
          }
          uVar22 = (ulonglong)local_120;
          if ((char)param_1[4] != '\0') {
            local_f0 = local_120;
            uVar13 = (ulonglong)local_120 >> 0x38;
            local_f0._6_1_ = (undefined1)((ulonglong)local_120 >> 0x30);
            local_f0._4_1_ = (undefined1)(uVar22 >> 0x20);
            local_f0._2_1_ = (undefined1)(uVar22 >> 0x10);
            local_f0._0_1_ = (undefined1)uVar22;
            local_120 = (undefined8 *)
                        CONCAT17((undefined1)local_f0,
                                 CONCAT16((char)(uVar22 >> 8),
                                          CONCAT15(local_f0._2_1_,
                                                   CONCAT14((char)(uVar22 >> 0x18),
                                                            CONCAT13(local_f0._4_1_,
                                                                     CONCAT12((char)(uVar22 >> 0x28)
                                                                              ,CONCAT11(local_f0.
                                                  _6_1_,(char)uVar13)))))));
            local_f0 = (ulonglong *)uVar22;
          }
          *param_4 = (ulonglong)local_120;
          param_4 = (ulonglong *)((longlong)param_4 + (longlong)param_5);
          local_res20 = (ulonglong *)((longlong)local_res20 - 1);
        } while (local_res20 != (ulonglong *)0x0);
        return param_4;
      }
    }
    break;
  case 6:
    local_120 = (undefined8 *)(ulonglong)param_3;
    if (0 < (int)param_3) {
      do {
        local_f0 = (ulonglong *)0x0;
        FUN_1436e9c20(param_1,param_4,&local_f0);
        param_4 = (ulonglong *)((longlong)param_4 + (longlong)param_5);
        local_120 = (undefined8 *)((longlong)local_120 - 1);
      } while (local_120 != (undefined8 *)0x0);
      return local_res20;
    }
    break;
  case 7:
    puVar9 = (undefined8 *)FUN_143714490(param_2,1);
    uVar8 = uVar20;
    if (puVar9 != (undefined8 *)0x0) {
      uVar8 = (uint)*puVar9;
    }
    local_c8 = 0;
    local_c0[0] = 0;
    local_c0[1] = 0x80000000;
    local_120 = puVar12;
    if (((byte)uVar8 & 0xf) == 7) {
      local_120 = param_2;
    }
    local_b0 = 0x80;
    pvVar14 = TlsGetValue(DAT_146b7bf70);
    if (pvVar14 == (LPVOID)0x0) {
      pvVar14 = DAT_146b7bf68;
    }
    local_b8 = *(undefined1 (*) [8])((longlong)pvVar14 + 0x18);
    if ((*(int *)((longlong)pvVar14 + 0x10) < 0x80) ||
       (*(ulonglong *)((longlong)pvVar14 + 0x20) < (longlong)local_b8 + 0x80U)) {
      local_b8 = (undefined1  [8])FUN_1437138c0(pvVar14,0x80);
    }
    else {
      *(ulonglong *)((longlong)pvVar14 + 0x18) = (longlong)local_b8 + 0x80U;
    }
    local_c0[1] = 0x80000080;
    local_c8 = (longlong)local_b8;
    uVar6 = FUN_143738c50(local_120);
    FUN_1436e8130(param_1,uVar6,&local_c8);
    hkReflect::DeclIterAll::DeclIterAll(&local_a8,local_120,0);
    local_f0 = (ulonglong *)0x0;
    do {
      while( true ) {
        do {
          puVar9 = local_a8 + 1;
          if ((local_a0 <= local_a8 + 1) &&
             (cVar5 = FUN_1437144f0(&local_a8), iVar7 = local_b0, auVar3 = local_b8,
             puVar9 = local_a8, cVar5 == '\0')) {
            if (local_b8 == (undefined1  [8])local_c8) {
              local_c0[0] = uVar20;
            }
            pvVar14 = TlsGetValue(DAT_146b7bf70);
            if (pvVar14 == (LPVOID)0x0) {
              pvVar14 = DAT_146b7bf68;
            }
            uVar8 = iVar7 + 0x7fU & 0xffffff80;
            if (((*(int *)((longlong)pvVar14 + 0x10) < (int)uVar8) ||
                ((longlong)(int)uVar8 + (longlong)auVar3 != *(longlong *)((longlong)pvVar14 + 0x18))
                ) || ((undefined1  [8])*(longlong *)((longlong)pvVar14 + 0x28) == auVar3)) {
              FUN_143713ff0(pvVar14,auVar3);
            }
            else {
              *(undefined1 (*) [8])((longlong)pvVar14 + 0x18) = auVar3;
            }
            uVar16 = FUN_143703a50();
            local_c0[0] = 0;
            if ((int)local_c0[1] < 0) {
              return param_4;
            }
            FUN_143702e10(uVar16,local_c8,1,local_c0[1] & 0x3fffffff);
            return param_4;
          }
          local_a8 = puVar9;
          pbVar15 = (byte *)FUN_143714f30(local_a8,&local_108);
        } while ((*pbVar15 & 0x20) == 0);
        FUN_143714060(&local_f8,*local_a8);
        if (*(char *)((longlong)local_f0 + local_c8) != '\0') break;
LAB_1436e6996:
        local_f0 = (ulonglong *)((longlong)local_f0 + 1);
      }
      local_120 = local_f8;
      puVar9 = (undefined8 *)FUN_143714490(local_f8,1);
      bVar17 = bVar4;
      if (puVar9 != (undefined8 *)0x0) {
        bVar17 = (byte)*puVar9;
      }
      puVar9 = puVar12;
      if ((bVar17 & 0xf) == 8) {
        puVar9 = local_120;
      }
      if (puVar9 == (undefined8 *)0x0) {
LAB_1436e6961:
        iVar7 = FUN_143715270(&local_f8);
        FUN_1436e5460(param_1,local_f8,param_3,(longlong)iVar7 + (longlong)param_4,param_5,param_6);
        goto LAB_1436e6996;
      }
      puVar9 = (undefined8 *)FUN_143714490(local_120,1);
      bVar17 = bVar4;
      if (puVar9 != (undefined8 *)0x0) {
        bVar17 = (byte)*puVar9;
      }
      puVar9 = puVar12;
      if ((bVar17 & 0xf) == 8) {
        puVar9 = local_120;
      }
      puVar11 = (ulonglong *)FUN_143714420(puVar9,1);
      puVar9 = puVar12;
      if (puVar11 != (ulonglong *)0x0) {
        puVar9 = (undefined8 *)*puVar11;
      }
      if ((int)((ulonglong)puVar9 >> 8) < 1) goto LAB_1436e6961;
      iVar7 = FUN_1437152f0(local_f8);
      local_110 = CONCAT44(local_110._4_4_,iVar7);
      uVar8 = iVar7 * param_3;
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 0x80000000;
      local_e0 = CONCAT44(local_e0._4_4_,uVar8);
      if (0 < (int)uVar8) {
        puVar9 = (undefined8 *)(ulonglong)uVar8;
        if ((int)uVar8 < 0) {
          puVar9 = puVar12;
        }
        FUN_14370c310(&PTR_vftable_1467f0638,&local_d8,puVar9,1);
        uVar8 = (uint)local_e0;
      }
      local_d0 = uVar8;
      FUN_1436e5460(param_1,local_f8,param_3,local_d8,(int)local_110,param_6);
      local_e0 = local_d8;
      iVar7 = FUN_143715270(&local_f8);
      lVar23 = (longlong)iVar7 + (longlong)local_res20;
      if (0 < (int)param_3) {
        lVar18 = (longlong)(int)local_110;
        uVar22 = local_e0;
        local_120 = (undefined8 *)(ulonglong)param_3;
        do {
          FGenericPlatformString::Memcpy(lVar23,uVar22,lVar18);
          lVar18 = (longlong)(int)local_110;
          uVar22 = uVar22 + lVar18;
          lVar23 = lVar23 + param_5;
          local_120 = (undefined8 *)((longlong)local_120 - 1);
        } while (local_120 != (undefined8 *)0x0);
        local_120 = (undefined8 *)0x0;
      }
      local_d0 = 0;
      if (-1 < (int)local_cc) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_d8,1,local_cc & 0x3fffffff);
      }
      local_f0 = (ulonglong *)((longlong)local_f0 + 1);
      local_d8 = 0;
      local_cc = 0x80000000;
      param_4 = local_res20;
    } while( true );
  case 8:
    puVar9 = (undefined8 *)FUN_143714490(param_2,1);
    if (puVar9 != (undefined8 *)0x0) {
      bVar4 = (byte)*puVar9;
    }
    local_f8 = puVar12;
    if ((bVar4 & 0xf) == 8) {
      local_f8 = param_2;
    }
    puVar11 = (ulonglong *)FUN_143714420(local_f8,1);
    if (puVar11 != (ulonglong *)0x0) {
      puVar12 = (undefined8 *)*puVar11;
    }
    local_f0 = (ulonglong *)((ulonglong)puVar12 >> 8);
    if ((int)((ulonglong)puVar12 >> 8) < 1) {
      local_f8 = (undefined8 *)FUN_143714420(local_f8,2);
      if (local_f8 == (undefined8 *)0x0) {
        local_f8 = (undefined8 *)0x0;
      }
      else {
        local_f8 = (undefined8 *)*local_f8;
      }
      local_120 = (undefined8 *)(ulonglong)param_3;
      local_f0 = param_4;
      if (0 < (int)param_3) {
        do {
          plVar2 = *(longlong **)(param_1 + 2);
          local_127[0] = 0xff;
          if (plVar2[1] - *plVar2 < 1) {
            hkIo::ReadBuffer::implRead(plVar2,local_127);
          }
          else {
            FGenericPlatformString::Memcpy(local_127);
            *plVar2 = *plVar2 + 1;
          }
          local_110 = CONCAT44(local_110._4_4_,6);
          uVar22 = (ulonglong)(local_127[0] >> 1) & 0x7fffffffffffffbf;
          local_e0 = CONCAT44(local_e0._4_4_,(uint)local_127[0]) & 0xffffffff00000001;
          uVar8 = local_127[0] & 1;
          if ((char)local_127[0] < '\0') {
            do {
              plVar2 = *(longlong **)(param_1 + 2);
              local_128 = 0xff;
              if (plVar2[1] - *plVar2 < 1) {
                hkIo::ReadBuffer::implRead(plVar2,&local_128);
              }
              else {
                FGenericPlatformString::Memcpy(&local_128);
                *plVar2 = *plVar2 + 1;
              }
              uVar22 = uVar22 | ((ulonglong)local_128 & 0xffffffffffffff7f) <<
                                ((byte)local_110 & 0x3f);
              local_110 = CONCAT44(local_110._4_4_,(int)local_110 + 7);
            } while ((char)local_128 < '\0');
            uVar8 = (uint)local_e0;
          }
          local_108 = (undefined8 *)0x0;
          if (uVar8 != 0) {
            uVar22 = -uVar22;
          }
          local_e0 = uVar22;
          if ((int)uVar22 < 1) {
            *local_f0 = 0;
          }
          else {
            plVar2 = *(longlong **)(param_1 + 0x1c);
            lVar23 = *plVar2;
            iVar7 = FUN_1437152f0(local_f8);
            local_108 = (undefined8 *)(**(code **)(lVar23 + 8))(plVar2,iVar7 * (uint)local_e0);
            puVar12 = local_f8;
            iVar7 = FUN_1437152f0(local_f8);
            uVar22 = local_e0;
            iVar21 = (int)local_e0;
            FUN_14370c720(local_108,0,iVar7 * iVar21);
            local_e0 = CONCAT44(local_e0._4_4_,*(uint *)(*(longlong *)(param_1 + 0x2e) + 0x40));
            *local_f0 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x2e) + 0x40);
            FUN_1436e6a60(*(undefined8 *)(param_1 + 0x2e),puVar12);
            local_a8 = local_108;
            local_a0 = puVar12;
            if (puVar12 == (undefined8 *)0x0) {
              local_110 = 0;
            }
            else {
              local_110 = FUN_1437151a0(puVar12);
            }
            local_127[0] = (byte)local_110 & 1;
            local_98 = local_110;
            if ((local_110 & 1) != 0) {
              FUN_1437329e0(local_110 & 0xfffffffffffffffe);
            }
            local_90 = CONCAT44(local_90._4_4_,iVar21);
            FUN_1436ea180(*(undefined8 *)(param_1 + 0x2e),local_e0 & 0xffffffff,&local_a8);
            if (local_127[0] != 0) {
              FUN_143733a60(local_110 & 0xfffffffffffffffe);
            }
          }
          uVar6 = FUN_1437152f0(local_f8);
          FUN_1436e5460(param_1,local_f8,uVar22 & 0xffffffff,local_108,uVar6,param_6);
          local_f0 = (ulonglong *)((longlong)local_f0 + (longlong)param_5);
          local_120 = (undefined8 *)((longlong)local_120 - 1);
        } while (local_120 != (undefined8 *)0x0);
        return local_res20;
      }
    }
    else {
      local_f8 = (undefined8 *)FUN_143714420(local_f8,2);
      if (local_f8 == (undefined8 *)0x0) {
        local_f8 = (undefined8 *)0x0;
      }
      else {
        local_f8 = (undefined8 *)*local_f8;
      }
      puVar12 = (undefined8 *)FUN_143714490(local_f8,1);
      uVar22 = (ulonglong)local_f0;
      if (puVar12 != (undefined8 *)0x0) {
        uVar20 = (uint)*puVar12;
      }
      if (((byte)uVar20 & 0xf) == 5) {
        local_108 = (undefined8 *)((ulonglong)local_f0 & 0xffffffff);
        if ((int)local_f0 == 4) {
          plVar2 = *(longlong **)(param_1 + 2);
          local_128 = 0xff;
          if (plVar2[1] - *plVar2 < 1) {
            hkIo::ReadBuffer::implRead(plVar2,&local_128);
          }
          else {
            FGenericPlatformString::Memcpy(&local_128);
            *plVar2 = *plVar2 + 1;
          }
          local_110 = CONCAT44(local_110._4_4_,6);
          local_108 = (undefined8 *)((ulonglong)(local_128 >> 1) & 0x7fffffffffffffbf);
          local_e0 = CONCAT44(local_e0._4_4_,(uint)local_128) & 0xffffffff00000001;
          uVar8 = local_128 & 1;
          if ((char)local_128 < '\0') {
            do {
              plVar2 = *(longlong **)(param_1 + 2);
              local_127[0] = 0xff;
              if (plVar2[1] - *plVar2 < 1) {
                hkIo::ReadBuffer::implRead(plVar2,local_127);
              }
              else {
                FGenericPlatformString::Memcpy(local_127);
                *plVar2 = *plVar2 + 1;
              }
              local_108 = (undefined8 *)
                          ((ulonglong)local_108 |
                          ((ulonglong)local_127[0] & 0xffffffffffffff7f) << ((byte)local_110 & 0x3f)
                          );
              local_110 = CONCAT44(local_110._4_4_,(int)local_110 + 7);
            } while ((char)local_127[0] < '\0');
            uVar8 = (uint)local_e0;
          }
          if (uVar8 != 0) {
            local_108 = (undefined8 *)-(longlong)local_108;
          }
        }
        local_f8 = (undefined8 *)(ulonglong)param_3;
        iVar7 = (int)local_108;
        if ((char)param_1[1] == '\0') {
          local_a0 = (undefined8 *)(ulonglong)(uint)local_a0;
          if (0 < (int)param_3) {
            local_e0 = (ulonglong)(uint)(iVar7 * 4);
            local_120 = (undefined8 *)((longlong)(int)local_f0 << 2);
            local_f0 = param_4;
            do {
              plVar2 = *(longlong **)(param_1 + 2);
              if (plVar2[1] - *plVar2 < (longlong)local_e0) {
                hkIo::ReadBuffer::implRead(plVar2,&local_a8,local_e0);
              }
              else {
                FGenericPlatformString::Memcpy(&local_a8,*plVar2);
                *plVar2 = *plVar2 + local_e0;
              }
              puVar11 = local_f0;
              if ((char)param_1[4] != '\0') {
                puVar12 = &local_a8;
                puVar9 = (undefined8 *)((longlong)&local_a8 + (longlong)iVar7 * 4);
                if (&local_a8 < puVar9) {
                  if (0xf < (ulonglong)((longlong)puVar9 - (longlong)&local_a8)) {
                    puVar19 = (undefined1 *)((longlong)&local_a8 + 6);
                    do {
                      uVar6 = *(undefined4 *)puVar12;
                      *(char *)puVar12 = (char)((uint)uVar6 >> 0x18);
                      puVar12 = puVar12 + 2;
                      local_110._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
                      puVar19[-5] = local_110._2_1_;
                      puVar19[-4] = (char)((uint)uVar6 >> 8);
                      puVar19[-3] = (char)uVar6;
                      uVar6 = *(undefined4 *)(puVar19 + -2);
                      puVar19[-2] = (char)((uint)uVar6 >> 0x18);
                      local_110._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
                      puVar19[-1] = local_110._2_1_;
                      *puVar19 = (char)((uint)uVar6 >> 8);
                      puVar19[1] = (char)uVar6;
                      uVar6 = *(undefined4 *)(puVar19 + 2);
                      puVar19[2] = (char)((uint)uVar6 >> 0x18);
                      local_110._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
                      puVar19[3] = local_110._2_1_;
                      puVar19[4] = (char)((uint)uVar6 >> 8);
                      puVar19[5] = (char)uVar6;
                      uVar6 = *(undefined4 *)(puVar19 + 6);
                      local_110 = CONCAT44(local_110._4_4_,uVar6);
                      uVar22 = local_110;
                      puVar19[6] = (char)((uint)uVar6 >> 0x18);
                      local_110._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
                      puVar19[7] = local_110._2_1_;
                      puVar19[8] = (char)((uint)uVar6 >> 8);
                      puVar19[9] = (char)uVar6;
                      puVar19 = puVar19 + 0x10;
                      local_110 = uVar22;
                    } while (puVar12 < local_b8 + (longlong)iVar7 * 4 + 4);
                  }
                  for (; puVar12 < puVar9; puVar12 = (undefined8 *)((longlong)puVar12 + 4)) {
                    uVar6 = *(undefined4 *)puVar12;
                    local_110._4_4_ = (undefined4)(local_110 >> 0x20);
                    local_110 = CONCAT44(local_110._4_4_,uVar6);
                    uVar22 = local_110;
                    *(char *)puVar12 = (char)((uint)uVar6 >> 0x18);
                    local_110._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
                    *(undefined1 *)((longlong)puVar12 + 1) = local_110._2_1_;
                    *(char *)((longlong)puVar12 + 2) = (char)((uint)uVar6 >> 8);
                    *(char *)((longlong)puVar12 + 3) = (char)uVar6;
                    local_110 = uVar22;
                  }
                }
              }
              FGenericPlatformString::Memcpy(local_f0,&local_a8,local_120);
              local_f0 = (ulonglong *)((longlong)puVar11 + (longlong)param_5);
              local_f8 = (undefined8 *)((longlong)local_f8 - 1);
            } while (local_f8 != (undefined8 *)0x0);
            return local_res20;
          }
        }
        else {
          local_90 = 0;
          if (0 < (int)param_3) {
            local_e0 = (ulonglong)(uint)(iVar7 * 8);
            local_120 = (undefined8 *)((longlong)(int)local_f0 << 3);
            local_f0 = param_4;
            do {
              plVar2 = *(longlong **)(param_1 + 2);
              if (plVar2[1] - *plVar2 < (longlong)local_e0) {
                hkIo::ReadBuffer::implRead(plVar2,&local_a8,local_e0);
              }
              else {
                FGenericPlatformString::Memcpy(&local_a8,*plVar2);
                *plVar2 = *plVar2 + local_e0;
              }
              puVar11 = local_f0;
              if ((char)param_1[4] != '\0') {
                puVar25 = (uint *)&local_a8;
                puVar1 = (uint *)(&local_a8 + iVar7);
                if (&local_a8 < puVar1) {
                  if (0x1f < (ulonglong)((longlong)puVar1 - (longlong)&local_a8)) {
                    puVar19 = (undefined1 *)((longlong)&local_a0 + 2);
                    do {
                      uVar16 = *(undefined8 *)puVar25;
                      *(char *)puVar25 = (char)((ulonglong)uVar16 >> 0x38);
                      local_108._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
                      puVar19[-9] = local_108._6_1_;
                      puVar19[-8] = (char)((ulonglong)uVar16 >> 0x28);
                      local_108._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
                      puVar19[-7] = local_108._4_1_;
                      puVar19[-6] = (char)((ulonglong)uVar16 >> 0x18);
                      local_108._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
                      puVar19[-5] = local_108._2_1_;
                      local_108._0_1_ = (undefined1)uVar16;
                      puVar19[-4] = (char)((ulonglong)uVar16 >> 8);
                      puVar19[-3] = (undefined1)local_108;
                      uVar16 = *(undefined8 *)(puVar19 + -2);
                      puVar19[-2] = (char)((ulonglong)uVar16 >> 0x38);
                      local_108._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
                      puVar19[-1] = local_108._6_1_;
                      *puVar19 = (char)((ulonglong)uVar16 >> 0x28);
                      local_108._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
                      puVar19[1] = local_108._4_1_;
                      puVar19[2] = (char)((ulonglong)uVar16 >> 0x18);
                      local_108._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
                      puVar19[3] = local_108._2_1_;
                      local_108._0_1_ = (undefined1)uVar16;
                      puVar19[4] = (char)((ulonglong)uVar16 >> 8);
                      puVar19[5] = (undefined1)local_108;
                      uVar16 = *(undefined8 *)(puVar19 + 6);
                      puVar19[6] = (char)((ulonglong)uVar16 >> 0x38);
                      local_108._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
                      puVar19[7] = local_108._6_1_;
                      puVar19[8] = (char)((ulonglong)uVar16 >> 0x28);
                      local_108._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
                      puVar19[9] = local_108._4_1_;
                      puVar19[10] = (char)((ulonglong)uVar16 >> 0x18);
                      local_108._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
                      puVar19[0xb] = local_108._2_1_;
                      local_108._0_1_ = (undefined1)uVar16;
                      puVar19[0xc] = (char)((ulonglong)uVar16 >> 8);
                      puVar19[0xd] = (undefined1)local_108;
                      uVar22 = *(ulonglong *)(puVar19 + 0xe);
                      puVar19[0xe] = (char)(uVar22 >> 0x38);
                      local_108._6_1_ = (undefined1)(uVar22 >> 0x30);
                      puVar19[0xf] = local_108._6_1_;
                      puVar19[0x10] = (char)(uVar22 >> 0x28);
                      local_108._4_1_ = (undefined1)(uVar22 >> 0x20);
                      puVar19[0x11] = local_108._4_1_;
                      puVar19[0x12] = (char)(uVar22 >> 0x18);
                      local_108._2_1_ = (undefined1)(uVar22 >> 0x10);
                      puVar25 = puVar25 + 8;
                      puVar19[0x13] = local_108._2_1_;
                      local_108._0_1_ = (undefined1)uVar22;
                      puVar19[0x14] = (char)(uVar22 >> 8);
                      puVar19[0x15] = (undefined1)local_108;
                      puVar19 = puVar19 + 0x20;
                      local_108 = (undefined8 *)uVar22;
                    } while (puVar25 < local_c0 + (longlong)iVar7 * 2);
                  }
                  if (puVar25 < puVar1) {
                    puVar19 = (undefined1 *)((longlong)puVar25 + 2);
                    do {
                      uVar22 = *(ulonglong *)(puVar19 + -2);
                      puVar19[-2] = (char)(uVar22 >> 0x38);
                      local_108._6_1_ = (undefined1)(uVar22 >> 0x30);
                      puVar19[-1] = local_108._6_1_;
                      *puVar19 = (char)(uVar22 >> 0x28);
                      local_108._4_1_ = (undefined1)(uVar22 >> 0x20);
                      puVar19[1] = local_108._4_1_;
                      puVar19[2] = (char)(uVar22 >> 0x18);
                      local_108._2_1_ = (undefined1)(uVar22 >> 0x10);
                      puVar19[3] = local_108._2_1_;
                      local_108._0_1_ = (undefined1)uVar22;
                      puVar19[5] = (undefined1)local_108;
                      puVar25 = (uint *)(puVar19 + 6);
                      puVar19[4] = (char)(uVar22 >> 8);
                      puVar19 = puVar19 + 8;
                      local_108 = (undefined8 *)uVar22;
                    } while (puVar25 < puVar1);
                  }
                }
              }
              FGenericPlatformString::Memcpy(local_f0,&local_a8,local_120);
              local_f0 = (ulonglong *)((longlong)puVar11 + (longlong)param_5);
              local_f8 = (undefined8 *)((longlong)local_f8 - 1);
            } while (local_f8 != (undefined8 *)0x0);
            return local_res20;
          }
        }
      }
      else {
        local_108 = (undefined8 *)(ulonglong)param_3;
        if (0 < (int)param_3) {
          do {
            uVar6 = FUN_1437152f0(local_f8);
            FUN_1436e5460(param_1,local_f8,uVar22 & 0xffffffff,param_4,uVar6,param_6);
            param_4 = (ulonglong *)((longlong)param_4 + (longlong)param_5);
            local_108 = (undefined8 *)((longlong)local_108 - 1);
          } while (local_108 != (undefined8 *)0x0);
          return local_res20;
        }
      }
    }
  }
  return param_4;
}



// FUNCTION 1436e6a60 FUN_1436e6a60 body=77 status=ok
// SIG undefined FUN_1436e6a60(void)

void FUN_1436e6a60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_1436e53e0(param_1 + 0xd8,local_res10);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 4) < 0)) {
    FUN_1436ea0d0(param_1,*(undefined4 *)(param_1 + 0xe0),param_2);
  }
  return;
}



// FUNCTION 1436e6ab0 FUN_1436e6ab0 body=69 status=ok
// SIG undefined FUN_1436e6ab0(void)

undefined8 * FUN_1436e6ab0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143702b60(param_1,0x40,1);
  FUN_14370c720(puVar1,0,0x40);
  *puVar1 = 0x480001d;
  puVar1[1] = 0;
  puVar1[2] = 7;
  return puVar1;
}



// FUNCTION 1436e6b00 FUN_1436e6b00 body=95 status=ok
// SIG undefined FUN_1436e6b00(void)

undefined8 * FUN_1436e6b00(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  DAT_146b7ba00._0_1_ = 1;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (lVar2 != 0) {
    uVar3 = FUN_1436e4cf0(lVar2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1436e6b60 FUN_1436e6b60 body=794 status=ok
// SIG undefined FUN_1436e6b60(void)

undefined * FUN_1436e6b60(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffffd8;
  uint uVar10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar10 = (uint)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if ((param_2 & 0x10) == 0) {
    if ((param_2 & 0x20) == 0) {
      switch(param_2) {
      case 1:
        puVar4 = &DAT_1467f0560;
        break;
      case 2:
        puVar4 = &DAT_1467f02c0;
        break;
      case 3:
        puVar4 = &DAT_1467f03e0;
        if (*(char *)(param_1 + 4) == '\0') {
          puVar4 = &DAT_1467f0380;
        }
        break;
      case 4:
        puVar4 = &DAT_145b734c0;
        if (*(char *)(param_1 + 4) == '\0') {
          puVar4 = &DAT_145b73400;
        }
        break;
      case 5:
        puVar4 = &DAT_145b73490;
        if (*(char *)(param_1 + 4) == '\0') {
          puVar4 = &DAT_145b733d0;
        }
        break;
      case 6:
        puVar4 = &DAT_145b73460;
        if (*(char *)(param_1 + 4) == '\0') {
          puVar4 = &DAT_145b733a0;
        }
        break;
      case 7:
        puVar4 = &DAT_145b73430;
        if (*(char *)(param_1 + 4) == '\0') {
          puVar4 = &DAT_145b73370;
        }
        break;
      case 8:
        if (param_3 == 0) {
          puVar7 = &DAT_1467df8b8;
        }
        else {
          puVar7 = (undefined *)FUN_14373c2c0(param_1 + 0x28,param_3,0);
          if (puVar7 == (undefined *)0x0) {
            puVar7 = (undefined *)FUN_1436e6ab0(*(undefined8 *)(param_1 + 0x68));
            FUN_14373c2f0(param_1 + 0x28,param_3,puVar7);
          }
        }
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))
                          (*(longlong **)(param_1 + 0x68),0x70);
        puVar4 = (undefined *)0x0;
        if (lVar3 != 0) {
          puVar4 = (undefined *)FUN_143736ce0(lVar3,puVar7,&DAT_145b7313c,0);
        }
        uVar6 = *(undefined8 *)(param_1 + 0xa8);
        puVar8 = (undefined8 *)FUN_1437143d0(puVar4,4);
        *puVar8 = uVar6;
        break;
      case 9:
        puVar4 = (undefined *)0x0;
        if ((param_3 != 0) &&
           (puVar4 = (undefined *)FUN_14373c2c0(param_1 + 0x28,param_3,0),
           puVar4 == (undefined *)0x0)) {
          puVar4 = (undefined *)FUN_1436e6ab0(*(undefined8 *)(param_1 + 0x68));
          FUN_14373c2f0(param_1 + 0x28,param_3,puVar4);
        }
        break;
      case 10:
        puVar4 = &DAT_1467f04a0;
        break;
      default:
        puVar4 = &DAT_1467f0048;
      }
    }
    else {
      uVar6 = FUN_1436e6b60(param_1,param_2 & 0xffffffdf,param_3,0);
      uVar1 = FUN_143714d40(uVar6);
      iVar2 = FUN_1437152f0(uVar6);
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))
                        (*(longlong **)(param_1 + 0x68),0x68);
      puVar4 = (undefined *)0x0;
      if (lVar3 != 0) {
        puVar4 = (undefined *)
                 FUN_143736dd0(lVar3,uVar6,param_4,iVar2 * param_4,CONCAT44(uVar9,uVar1),
                               &DAT_146b829b0,&DAT_145b73138,0);
      }
    }
  }
  else if ((param_3 == 0) && ((param_2 & 0xffffffef) == 9)) {
    uVar6 = *(undefined8 *)(param_1 + 0xb0);
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))(*(longlong **)(param_1 + 0x68),0x40);
    puVar4 = (undefined *)0x0;
    if (lVar3 != 0) {
      puVar4 = (undefined *)
               FUN_1437369d0(lVar3,0,0x18,8,uVar6,"hkVariantArray",(ulonglong)uVar10 << 0x20);
    }
  }
  else {
    uVar5 = FUN_1436e6b60();
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))(*(longlong **)(param_1 + 0x68),0x78);
    puVar4 = (undefined *)0x0;
    if (lVar3 != 0) {
      puVar4 = (undefined *)
               FUN_143736b30(lVar3,uVar5,0x10,8,uVar6,"hkArray",(ulonglong)uVar10 << 0x20);
    }
  }
  return puVar4;
}



// FUNCTION 1436e6eb0 FUN_1436e6eb0 body=42 status=ok
// SIG undefined FUN_1436e6eb0(void)

/* WARNING: Removing unreachable block (ram,0x0001436e6eca) */

undefined8 * FUN_1436e6eb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1436e6ee0 FUN_1436e6ee0 body=369 status=ok
// SIG undefined FUN_1436e6ee0(void)

undefined4 *
FUN_1436e6ee0(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uStack_2c;
  
  uVar7 = 0;
  uVar5 = 0;
  if (*param_3 == 0) {
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
    }
    param_5[3] = 0;
    *param_2 = 0;
    return param_2;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) + (longlong)*param_3 * 0x10);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + (longlong)(int)uVar4 * 8)
  ;
  uVar6 = uVar7;
  if (lVar2 != 0) {
    uVar6 = FUN_1437151a0(lVar2);
  }
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  uStack_2c = (uint)((ulonglong)uVar4 >> 0x20);
  if (lVar2 != 0) {
    uVar5 = FUN_1437152f0(lVar2);
    uVar7 = FUN_1437151a0(lVar2);
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
  }
  *(uint *)(param_5 + 2) = (uStack_2c ^ (int)uStack_2c >> 0x1f) - ((int)uStack_2c >> 0x1f);
  *param_5 = uVar3;
  param_5[1] = lVar2;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar5;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = uVar7;
  *param_2 = 0;
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(uVar6 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1436e7060 FUN_1436e7060 body=174 status=ok
// SIG undefined FUN_1436e7060(void)

undefined4 *
FUN_1436e7060(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  if (*param_3 == 0) {
    *param_5 = 0;
    param_5[1] = 0;
    if ((*(byte *)(param_5 + 2) & 1) != 0) {
      FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
    }
    param_5[2] = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1436ea2a0(*(undefined8 *)(param_1 + 0x10),local_28);
    *param_5 = *puVar1;
    param_5[1] = puVar1[1];
    if ((*(byte *)(param_5 + 2) & 1) != 0) {
      FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
    }
    param_5[2] = puVar1[2];
    puVar1[2] = 0;
    if ((local_18 & 1) != 0) {
      FUN_143733a60(local_18 & 0xfffffffffffffffe);
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1436e7110 FUN_1436e7110 body=310 status=ok
// SIG undefined FUN_1436e7110(void)

longlong FUN_1436e7110(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  lVar2 = *param_2;
  uVar10 = (int)lVar2 * -0x61c8864f;
  iVar4 = (int)((ulonglong)lVar2 >> 0x20);
  uVar9 = iVar4 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar2 * -0x4f000000;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar4 * -0x4f000000;
  uVar9 = uVar9 * 0x40 + uVar10 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar9;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  puVar5 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    do {
      if (*(longlong *)(*param_1 + (longlong)(int)puVar5[1] * 0x10) == lVar2) {
        uVar1 = *param_3;
        *(undefined4 *)(*param_1 + 8 + (longlong)(int)puVar5[1] * 0x10) = uVar1;
        return (ulonglong)(uint3)((uint)uVar1 >> 8) << 8;
      }
      lVar3 = param_1[2];
      uVar7 = ((longlong)puVar5 - lVar3 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar5 = (uint *)(lVar3 + uVar7 * 8);
    } while (-1 < *(int *)(lVar3 + 4 + uVar7 * 8));
  }
  uVar10 = *(uint *)(param_1 + 1);
  *puVar5 = uVar9;
  puVar5[1] = uVar10;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,0x10);
  }
  plVar8 = (longlong *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *plVar8 = *param_2;
  uVar1 = *param_3;
  *(undefined4 *)(plVar8 + 1) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 1436e7250 FUN_1436e7250 body=151 status=ok
// SIG undefined FUN_1436e7250(void)

void FUN_1436e7250(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar1 = param_2 + 1;
  if (param_2 + 1 < *(int *)(param_1 + 0x20)) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  if ((int)uVar5 < iVar1) {
    iVar2 = uVar5 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(uVar3,(longlong *)(param_1 + 0x18),iVar6,0x10);
  }
  iVar6 = iVar1 - *(int *)(param_1 + 0x20);
  puVar4 = (undefined8 *)((longlong)*(int *)(param_1 + 0x20) * 0x10 + *(longlong *)(param_1 + 0x18))
  ;
  lVar7 = (longlong)iVar6;
  if (0 < iVar6) {
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0xffffffff00000000;
      }
      puVar4 = puVar4 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}



// FUNCTION 1436e72f0 FUN_1436e72f0 body=629 status=ok
// SIG undefined FUN_1436e72f0(void)

longlong * FUN_1436e72f0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_res8 [2];
  undefined8 local_res20;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [192];
  
  FUN_1437367c0(param_1 + 0x90);
  FUN_143739530(param_1);
  FUN_1436e7250(param_1,0);
  local_res8[0] = 0xffffffff;
  local_res20 = 0;
  lVar5 = FUN_1436e53e0(param_1 + 0xd8,&local_res20);
  if (lVar5 == 0) {
    puVar8 = local_res8;
  }
  else {
    puVar8 = (undefined4 *)
             (*(longlong *)(param_1 + 0xd8) + 8 + (longlong)*(int *)(lVar5 + 4) * 0x10);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  uVar1 = *puVar8;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  uVar4 = DAT_146b82738;
  local_108 = DAT_146b82728;
  local_100 = DAT_146b82730;
  local_f8 = DAT_146b82738;
  uVar7 = DAT_146b82738 & 1;
  if ((DAT_146b82738 & 1) != 0) {
    FUN_1437329e0(DAT_146b82738 & 0xfffffffffffffffe);
  }
  local_f0 = DAT_146b82740;
  FUN_1436ea180(param_1,0,&local_108);
  if (uVar7 != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1436e4b30(local_e8,param_3,param_1 + 0xf8,param_1 + 0x90,param_1,param_1 + 0x140,
                param_1 + 0x158,param_1 + 0x170);
  piVar6 = (int *)FUN_1436e92f0(local_e8,local_res8);
  if (*piVar6 < 0) {
    *param_2 = 0;
  }
  else {
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        lVar5 = FUN_1436ea2a0(param_1,&local_108,iVar9);
        lVar5 = *(longlong *)(lVar5 + 8);
        if ((local_f8 & 1) != 0) {
          FUN_143733a60(local_f8 & 0xfffffffffffffffe);
        }
        if (lVar5 != 0) {
          FUN_1436e9f50(param_1,lVar5);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x20));
    }
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)
                 (*(longlong *)(param_1 + 8) +
                 (longlong)(int)*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x38) + 8) * 8);
        if (lVar3 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_1437151a0(lVar3);
        }
        if ((uVar7 & 1) != 0) {
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
        }
        if ((uVar7 & 1) != 0) {
          FUN_143733a60(uVar7 & 0xfffffffffffffffe);
        }
        if (lVar3 != 0) {
          FUN_1436e9f50(param_1,lVar3);
        }
        iVar9 = iVar9 + 1;
        lVar5 = lVar5 + 0x10;
      } while (iVar9 < *(int *)(param_1 + 0x40));
    }
    *param_2 = param_1;
  }
  FUN_1436e4ed0(local_e8);
  return param_2;
}



// FUNCTION 1436e7570 FUN_1436e7570 body=27 status=ok
// SIG undefined FUN_1436e7570(void)

undefined8 FUN_1436e7570(longlong param_1,undefined8 param_2)

{
  FUN_1436e72f0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 1436e7590 FUN_1436e7590 body=2942 status=ok
// SIG undefined FUN_1436e7590(void)

void FUN_1436e7590(int *param_1,longlong param_2,ulonglong *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  ulonglong *puVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 local_res18;
  undefined4 local_res20;
  byte local_98 [8];
  undefined8 local_90;
  byte local_80;
  ulonglong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  int local_40;
  
  local_68 = *param_3;
  local_res20 = param_4;
  puVar11 = (undefined8 *)FUN_143714490(local_68,1);
  uVar21 = local_68;
  uVar17 = 0;
  uVar7 = 0;
  bVar5 = 0;
  if (puVar11 != (undefined8 *)0x0) {
    uVar7 = (uint)*puVar11;
  }
  switch(uVar7 & 0xf) {
  case 2:
  case 4:
    puVar11 = (undefined8 *)FUN_143714490(local_68,1);
    if (puVar11 != (undefined8 *)0x0) {
      bVar5 = (byte)*puVar11;
    }
    if ((bVar5 & 0xf) == 4) {
      uVar17 = uVar21;
    }
    piVar12 = (int *)FUN_143714420(uVar17,1);
    if ((piVar12 == (int *)0x0) || (*piVar12 != 0x2004)) {
      plVar13 = *(longlong **)(param_1 + 2);
      local_res18 = CONCAT31(local_res18._1_3_,0xff);
      if (plVar13[1] - *plVar13 < 1) {
        hkIo::ReadBuffer::implRead(plVar13,&local_res18);
      }
      else {
        FGenericPlatformString::Memcpy(&local_res18);
        *plVar13 = *plVar13 + 1;
      }
      uVar7 = local_res18 & 1;
      uVar17 = (ulonglong)((byte)local_res18 >> 1) & 0x7fffffffffffffbf;
      bVar5 = 6;
      bVar6 = (byte)local_res18;
      while ((char)bVar6 < '\0') {
        plVar13 = *(longlong **)(param_1 + 2);
        local_98[0] = 0xff;
        if (plVar13[1] - *plVar13 < 1) {
          hkIo::ReadBuffer::implRead(plVar13,local_98);
        }
        else {
          FGenericPlatformString::Memcpy(local_98);
          *plVar13 = *plVar13 + 1;
        }
        uVar17 = uVar17 | ((ulonglong)local_98[0] & 0xffffffffffffff7f) << (bVar5 & 0x3f);
        bVar5 = bVar5 + 7;
        bVar6 = local_98[0];
      }
      if (uVar7 != 0) {
        uVar17 = -uVar17;
      }
      iVar10 = FUN_143715270(param_3);
      *(ulonglong *)(iVar10 + param_2) = uVar17;
    }
    else {
      plVar13 = *(longlong **)(param_1 + 2);
      local_res18 = CONCAT31(local_res18._1_3_,0xff);
      if (plVar13[1] - *plVar13 < 1) {
        hkIo::ReadBuffer::implRead(plVar13,&local_res18);
      }
      else {
        FGenericPlatformString::Memcpy(&local_res18);
        *plVar13 = *plVar13 + 1;
      }
      iVar10 = FUN_143715270(param_3);
      *(byte *)(iVar10 + param_2) = (byte)local_res18;
    }
    break;
  case 3:
    uVar16 = FUN_1436e9dc0(param_1);
    iVar10 = FUN_143715270(param_3);
    *(undefined8 *)(iVar10 + param_2) = uVar16;
    break;
  case 5:
    iVar10 = FUN_143715270(param_3);
    FUN_1436e89c0(param_1,iVar10 + param_2);
    break;
  case 6:
    local_60 = 0;
    iVar10 = FUN_143715270(param_3);
    FUN_1436e9c20(param_1,iVar10 + param_2,&local_60);
    uVar21 = *param_3;
    puVar11 = (undefined8 *)FUN_143714490(uVar21,1);
    bVar5 = 0;
    if (puVar11 != (undefined8 *)0x0) {
      bVar5 = (byte)*puVar11;
    }
    uVar15 = uVar17;
    if ((bVar5 & 0xf) == 6) {
      uVar15 = uVar21;
    }
    local_70 = uVar15;
    puVar14 = (ulonglong *)FUN_143714420(uVar15,2);
    if ((puVar14 == (ulonglong *)0x0) || (*puVar14 < 2)) {
      iVar10 = FUN_143715270(param_3);
      uVar7 = *(uint *)(iVar10 + param_2);
      puVar14 = (ulonglong *)(longlong)(int)uVar7;
      bVar3 = false;
      uVar21 = (ulonglong)puVar14;
      uVar24 = uVar17;
      uVar23 = uVar17;
      local_res18 = uVar7;
      puVar4 = puVar14;
      if (0 < param_1[0x18]) {
        do {
          local_78 = puVar4;
          if ((int)uVar21 == *(int *)(uVar24 + *(longlong *)(param_1 + 0x16))) {
            lVar20 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x2e) + 8) +
                      (longlong)
                      (int)*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x2e) + 0x38) +
                             (longlong)puVar14 * 0x10 + 8) * 8);
            uVar21 = uVar17;
            if (lVar20 != 0) {
              uVar21 = FUN_1437151a0(lVar20);
            }
            if ((uVar21 & 1) != 0) {
              FUN_1437329e0(uVar21 & 0xfffffffffffffffe);
            }
            plVar13 = (longlong *)FUN_1437143d0(local_70,2);
            *plVar13 = lVar20;
            if ((uVar21 & 1) != 0) {
              FUN_143733a60(uVar21 & 0xfffffffffffffffe);
            }
            uVar21 = (ulonglong)local_res18;
            bVar3 = true;
            puVar14 = local_78;
          }
          uVar7 = (uint)uVar21;
          uVar22 = (int)uVar23 + 1;
          uVar24 = uVar24 + 4;
          uVar23 = (ulonglong)uVar22;
          puVar4 = local_78;
        } while ((int)uVar22 < param_1[0x18]);
        uVar15 = local_70;
        param_4 = local_res20;
        if (bVar3) {
          return;
        }
      }
      uVar16 = FUN_143703a50();
      if (param_1[0x26] == (param_1[0x27] & 0x3fffffffU)) {
        FUN_14370c460(uVar16,param_1 + 0x24,0x10);
      }
      puVar14 = (ulonglong *)((longlong)param_1[0x26] * 0x10 + *(longlong *)(param_1 + 0x24));
      param_1[0x26] = param_1[0x26] + 1;
      *puVar14 = uVar15;
      *(undefined4 *)(puVar14 + 1) = param_4;
      *(uint *)((longlong)puVar14 + 0xc) = uVar7;
    }
    break;
  case 7:
    if (*param_1 < 2) {
      local_68 = 0;
      iVar10 = FUN_143715270(param_3);
      FUN_1436e8ae0(param_1,0,&local_68,iVar10 + param_2);
    }
    else {
      local_68 = *param_3;
      iVar10 = FUN_143715270(param_3);
      FUN_1436e8ae0(param_1,3,&local_68,iVar10 + param_2);
    }
    break;
  case 8:
    puVar11 = (undefined8 *)FUN_143714490(local_68,1);
    bVar6 = bVar5;
    if (puVar11 != (undefined8 *)0x0) {
      bVar6 = (byte)*puVar11;
    }
    uVar15 = uVar17;
    if ((bVar6 & 0xf) == 8) {
      uVar15 = uVar21;
    }
    local_90 = uVar15;
    puVar14 = (ulonglong *)FUN_143714420(uVar15,1);
    uVar21 = uVar17;
    if (puVar14 != (ulonglong *)0x0) {
      uVar21 = *puVar14;
    }
    puVar14 = (ulonglong *)FUN_143714420(uVar15,2);
    iVar10 = (int)(uVar21 >> 8);
    if (iVar10 < 1) {
      if (puVar14 == (ulonglong *)0x0) {
        local_60 = 0;
      }
      else {
        local_60 = *puVar14;
      }
      plVar13 = *(longlong **)(param_1 + 2);
      local_res18 = CONCAT31(local_res18._1_3_,0xff);
      if (plVar13[1] - *plVar13 < 1) {
        hkIo::ReadBuffer::implRead(plVar13,&local_res18);
      }
      else {
        FGenericPlatformString::Memcpy(&local_res18);
        *plVar13 = *plVar13 + 1;
      }
      uVar21 = (ulonglong)((byte)local_res18 >> 1) & 0x7fffffffffffffbf;
      local_78 = (ulonglong *)CONCAT44(local_78._4_4_,6);
      local_70 = CONCAT44(local_70._4_4_,local_res18) & 0xffffffff00000001;
      uVar7 = local_res18 & 1;
      if ((char)(byte)local_res18 < '\0') {
        do {
          plVar13 = *(longlong **)(param_1 + 2);
          local_98[0] = 0xff;
          if (plVar13[1] - *plVar13 < 1) {
            hkIo::ReadBuffer::implRead(plVar13,local_98);
          }
          else {
            FGenericPlatformString::Memcpy(local_98);
            *plVar13 = *plVar13 + 1;
          }
          uVar21 = uVar21 | ((ulonglong)local_98[0] & 0xffffffffffffff7f) << ((byte)local_78 & 0x3f)
          ;
          local_78 = (ulonglong *)CONCAT44(local_78._4_4_,(int)local_78 + 7);
        } while ((char)local_98[0] < '\0');
        uVar7 = (uint)local_70;
      }
      if (uVar7 != 0) {
        uVar21 = -uVar21;
      }
      iVar10 = FUN_143715270(param_3);
      local_78 = (ulonglong *)(iVar10 + param_2);
      uVar15 = uVar17;
      if (local_90 != 0) {
        uVar15 = FUN_1437151a0();
      }
      local_80 = (byte)uVar15 & 1;
      if ((uVar15 & 1) != 0) {
        FUN_1437329e0(uVar15 & 0xfffffffffffffffe);
      }
      uVar24 = local_60;
      if (local_60 == 0) {
        plVar13 = *(longlong **)(param_1 + 2);
        local_res18 = CONCAT31(local_res18._1_3_,0xff);
        if (plVar13[1] - *plVar13 < 1) {
          hkIo::ReadBuffer::implRead(plVar13,&local_res18);
        }
        else {
          FGenericPlatformString::Memcpy(&local_res18);
          *plVar13 = *plVar13 + 1;
        }
        uVar24 = (ulonglong)((byte)local_res18 >> 1) & 0x7fffffffffffffbf;
        iVar10 = (int)uVar24;
        local_70 = CONCAT44(local_70._4_4_,local_res18) & 0xffffffff00000001;
        uVar7 = local_res18 & 1;
        bVar5 = 6;
        if ((char)(byte)local_res18 < '\0') {
          do {
            plVar13 = *(longlong **)(param_1 + 2);
            local_98[0] = 0xff;
            if (plVar13[1] - *plVar13 < 1) {
              hkIo::ReadBuffer::implRead(plVar13,local_98);
            }
            else {
              FGenericPlatformString::Memcpy(local_98);
              *plVar13 = *plVar13 + 1;
            }
            uVar24 = uVar24 | ((ulonglong)local_98[0] & 0xffffffffffffff7f) << (bVar5 & 0x3f);
            iVar10 = (int)uVar24;
            bVar5 = bVar5 + 7;
          } while ((char)local_98[0] < '\0');
          uVar7 = (uint)local_70;
        }
        if (uVar7 != 0) {
          iVar10 = -iVar10;
        }
        iVar8 = param_1[0x1e] + 1;
        for (lVar20 = (longlong)iVar8; lVar20 <= iVar10; lVar20 = lVar20 + 1) {
          FUN_143736450(*(undefined8 *)(*(longlong *)(param_1 + 6) + lVar20 * 8));
          param_1[0x1e] = iVar8;
          iVar8 = iVar8 + 1;
        }
        uVar24 = *(ulonglong *)(*(longlong *)(param_1 + 6) + (longlong)iVar10 * 8);
      }
      FUN_1436e6a60(*(undefined8 *)(param_1 + 0x2e),uVar24);
      plVar13 = *(longlong **)(param_1 + 0x1c);
      lVar20 = *plVar13;
      iVar10 = FUN_1437152f0(uVar24);
      iVar8 = (int)uVar21;
      uVar16 = (**(code **)(lVar20 + 8))(plVar13,iVar10 * iVar8);
      iVar10 = FUN_1437152f0(uVar24);
      FUN_14370c720(uVar16,0,iVar10 * iVar8);
      local_res18 = *(uint *)(*(longlong *)(param_1 + 0x2e) + 0x40);
      *local_78 = (ulonglong)local_res18;
      local_58 = uVar16;
      local_50 = uVar24;
      if (uVar24 != 0) {
        uVar17 = FUN_1437151a0(uVar24);
      }
      local_48 = uVar17;
      if ((uVar17 & 1) != 0) {
        FUN_1437329e0(uVar17 & 0xfffffffffffffffe);
      }
      local_40 = iVar8;
      FUN_1436ea180(*(undefined8 *)(param_1 + 0x2e),local_res18,&local_58);
      if ((uVar17 & 1) != 0) {
        FUN_143733a60(uVar17 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437152f0(uVar24);
      FUN_1436e5460(param_1,uVar24,uVar21 & 0xffffffff,uVar16,uVar9,local_res20);
      if (local_80 != 0) {
        FUN_143733a60(uVar15 & 0xfffffffffffffffe);
      }
    }
    else {
      if (puVar14 != (ulonglong *)0x0) {
        uVar17 = *puVar14;
      }
      puVar11 = (undefined8 *)FUN_143714490(uVar17,1);
      if (puVar11 != (undefined8 *)0x0) {
        bVar5 = (byte)*puVar11;
      }
      if ((bVar5 & 0xf) == 5) {
        if ((char)param_1[1] == '\0') {
          iVar8 = FUN_143715270(param_3);
          plVar13 = *(longlong **)(param_1 + 2);
          uVar17 = (ulonglong)(uint)(iVar10 * 4);
          puVar19 = (undefined4 *)(iVar8 + param_2);
          if (plVar13[1] - *plVar13 < (longlong)uVar17) {
            hkIo::ReadBuffer::implRead(plVar13,puVar19,uVar17);
          }
          else {
            FGenericPlatformString::Memcpy(puVar19);
            *plVar13 = *plVar13 + uVar17;
          }
          if ((char)param_1[4] != '\0') {
            puVar2 = puVar19 + iVar10;
            if (puVar19 < puVar2) {
              if (0xf < (ulonglong)((longlong)iVar10 * 4)) {
                puVar18 = (undefined1 *)((longlong)puVar19 + 6);
                do {
                  uVar9 = *puVar19;
                  *(char *)puVar19 = (char)((uint)uVar9 >> 0x18);
                  puVar19 = puVar19 + 4;
                  local_res18._2_1_ = (undefined1)((uint)uVar9 >> 0x10);
                  puVar18[-5] = local_res18._2_1_;
                  puVar18[-4] = (char)((uint)uVar9 >> 8);
                  puVar18[-3] = (char)uVar9;
                  uVar9 = *(undefined4 *)(puVar18 + -2);
                  puVar18[-2] = (char)((uint)uVar9 >> 0x18);
                  local_res18._2_1_ = (undefined1)((uint)uVar9 >> 0x10);
                  puVar18[-1] = local_res18._2_1_;
                  *puVar18 = (char)((uint)uVar9 >> 8);
                  puVar18[1] = (char)uVar9;
                  uVar9 = *(undefined4 *)(puVar18 + 2);
                  puVar18[2] = (char)((uint)uVar9 >> 0x18);
                  local_res18._2_1_ = (undefined1)((uint)uVar9 >> 0x10);
                  puVar18[3] = local_res18._2_1_;
                  puVar18[4] = (char)((uint)uVar9 >> 8);
                  puVar18[5] = (char)uVar9;
                  uVar9 = *(undefined4 *)(puVar18 + 6);
                  puVar18[6] = (char)((uint)uVar9 >> 0x18);
                  local_res18._2_1_ = (undefined1)((uint)uVar9 >> 0x10);
                  puVar18[7] = local_res18._2_1_;
                  puVar18[8] = (char)((uint)uVar9 >> 8);
                  puVar18[9] = (char)uVar9;
                  puVar18 = puVar18 + 0x10;
                } while (puVar19 < puVar2 + -3);
              }
              for (; puVar19 < puVar2; puVar19 = puVar19 + 1) {
                uVar9 = *puVar19;
                *(char *)puVar19 = (char)((uint)uVar9 >> 0x18);
                local_res18._2_1_ = (undefined1)((uint)uVar9 >> 0x10);
                *(undefined1 *)((longlong)puVar19 + 1) = local_res18._2_1_;
                *(char *)((longlong)puVar19 + 2) = (char)((uint)uVar9 >> 8);
                *(char *)((longlong)puVar19 + 3) = (char)uVar9;
              }
            }
          }
        }
        else {
          iVar8 = FUN_143715270(param_3);
          plVar13 = *(longlong **)(param_1 + 2);
          uVar17 = (ulonglong)(uint)(iVar10 * 8);
          puVar11 = (undefined8 *)(iVar8 + param_2);
          if (plVar13[1] - *plVar13 < (longlong)uVar17) {
            hkIo::ReadBuffer::implRead(plVar13,puVar11,uVar17);
          }
          else {
            FGenericPlatformString::Memcpy(puVar11);
            *plVar13 = *plVar13 + uVar17;
          }
          if ((char)param_1[4] != '\0') {
            puVar1 = puVar11 + iVar10;
            if (puVar11 < puVar1) {
              if (0x1f < (ulonglong)((longlong)iVar10 * 8)) {
                puVar18 = (undefined1 *)((longlong)puVar11 + 10);
                do {
                  uVar16 = *puVar11;
                  *(char *)puVar11 = (char)((ulonglong)uVar16 >> 0x38);
                  local_90._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
                  puVar18[-9] = local_90._6_1_;
                  puVar18[-8] = (char)((ulonglong)uVar16 >> 0x28);
                  local_90._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
                  puVar18[-7] = local_90._4_1_;
                  puVar18[-6] = (char)((ulonglong)uVar16 >> 0x18);
                  local_90._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
                  puVar18[-5] = local_90._2_1_;
                  local_90._0_1_ = (undefined1)uVar16;
                  puVar18[-4] = (char)((ulonglong)uVar16 >> 8);
                  puVar18[-3] = (undefined1)local_90;
                  uVar16 = *(undefined8 *)(puVar18 + -2);
                  puVar18[-2] = (char)((ulonglong)uVar16 >> 0x38);
                  local_90._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
                  puVar18[-1] = local_90._6_1_;
                  *puVar18 = (char)((ulonglong)uVar16 >> 0x28);
                  local_90._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
                  puVar18[1] = local_90._4_1_;
                  puVar18[2] = (char)((ulonglong)uVar16 >> 0x18);
                  local_90._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
                  puVar18[3] = local_90._2_1_;
                  local_90._0_1_ = (undefined1)uVar16;
                  puVar18[4] = (char)((ulonglong)uVar16 >> 8);
                  puVar18[5] = (undefined1)local_90;
                  uVar16 = *(undefined8 *)(puVar18 + 6);
                  puVar18[6] = (char)((ulonglong)uVar16 >> 0x38);
                  local_90._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
                  puVar18[7] = local_90._6_1_;
                  puVar18[8] = (char)((ulonglong)uVar16 >> 0x28);
                  local_90._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
                  puVar18[9] = local_90._4_1_;
                  puVar18[10] = (char)((ulonglong)uVar16 >> 0x18);
                  local_90._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
                  puVar18[0xb] = local_90._2_1_;
                  local_90._0_1_ = (undefined1)uVar16;
                  puVar18[0xc] = (char)((ulonglong)uVar16 >> 8);
                  puVar18[0xd] = (undefined1)local_90;
                  uVar16 = *(undefined8 *)(puVar18 + 0xe);
                  puVar18[0xe] = (char)((ulonglong)uVar16 >> 0x38);
                  local_90._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
                  puVar18[0xf] = local_90._6_1_;
                  puVar18[0x10] = (char)((ulonglong)uVar16 >> 0x28);
                  local_90._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
                  puVar18[0x11] = local_90._4_1_;
                  puVar18[0x12] = (char)((ulonglong)uVar16 >> 0x18);
                  local_90._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
                  puVar11 = puVar11 + 4;
                  puVar18[0x13] = local_90._2_1_;
                  local_90._0_1_ = (undefined1)uVar16;
                  puVar18[0x14] = (char)((ulonglong)uVar16 >> 8);
                  puVar18[0x15] = (undefined1)local_90;
                  puVar18 = puVar18 + 0x20;
                } while (puVar11 < puVar1 + -3);
              }
              if (puVar11 < puVar1) {
                puVar18 = (undefined1 *)((longlong)puVar11 + 2);
                do {
                  uVar16 = *(undefined8 *)(puVar18 + -2);
                  puVar18[-2] = (char)((ulonglong)uVar16 >> 0x38);
                  local_90._6_1_ = (undefined1)((ulonglong)uVar16 >> 0x30);
                  puVar18[-1] = local_90._6_1_;
                  *puVar18 = (char)((ulonglong)uVar16 >> 0x28);
                  local_90._4_1_ = (undefined1)((ulonglong)uVar16 >> 0x20);
                  puVar18[1] = local_90._4_1_;
                  puVar18[2] = (char)((ulonglong)uVar16 >> 0x18);
                  local_90._2_1_ = (undefined1)((ulonglong)uVar16 >> 0x10);
                  puVar18[3] = local_90._2_1_;
                  local_90._0_1_ = (undefined1)uVar16;
                  puVar18[5] = (undefined1)local_90;
                  puVar11 = (undefined8 *)(puVar18 + 6);
                  puVar18[4] = (char)((ulonglong)uVar16 >> 8);
                  puVar18 = puVar18 + 8;
                } while (puVar11 < puVar1);
              }
            }
          }
        }
      }
      else {
        iVar8 = FUN_143715270(param_3);
        uVar9 = FUN_1437152f0(uVar17);
        FUN_1436e5460(param_1,uVar17,iVar10,iVar8 + param_2,uVar9,local_res20);
      }
    }
  }
  return;
}



// FUNCTION 1436e8130 FUN_1436e8130 body=391 status=ok
// SIG undefined FUN_1436e8130(void)

void FUN_1436e8130(longlong param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  byte local_58 [64];
  
  uVar9 = param_2 + 7U & 0xfffffff8;
  uVar6 = (int)(uVar9 + ((int)(param_2 + 7U) >> 0x1f & 7U)) >> 3;
  uVar7 = FUN_143703a50();
  uVar8 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  if ((int)uVar8 < (int)uVar9) {
    uVar8 = uVar8 * 2;
    uVar3 = uVar9;
    if ((int)uVar9 < (int)uVar8) {
      uVar3 = uVar8;
    }
    FUN_14370c310(uVar7,param_3,uVar3,1);
  }
  *(uint *)(param_3 + 1) = uVar9;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2[1] - *plVar2 < (longlong)(ulonglong)uVar6) {
    hkIo::ReadBuffer::implRead(plVar2,local_58);
  }
  else {
    FGenericPlatformString::Memcpy(local_58);
    *plVar2 = *plVar2 + (ulonglong)uVar6;
  }
  lVar10 = 0;
  if (0 < (int)uVar6) {
    do {
      bVar1 = local_58[lVar10];
      *(byte *)(*param_3 + lVar10 * 8) = bVar1 & 1;
      *(byte *)(*param_3 + 1 + lVar10 * 8) = bVar1 >> 1 & 1;
      *(byte *)(*param_3 + 2 + lVar10 * 8) = bVar1 >> 2 & 1;
      *(byte *)(*param_3 + 3 + lVar10 * 8) = bVar1 >> 3 & 1;
      *(byte *)(*param_3 + 4 + lVar10 * 8) = bVar1 >> 4 & 1;
      *(byte *)(*param_3 + 5 + lVar10 * 8) = bVar1 >> 5 & 1;
      *(byte *)(*param_3 + 6 + lVar10 * 8) = bVar1 >> 6 & 1;
      *(byte *)(*param_3 + 7 + lVar10 * 8) = bVar1 >> 7;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uVar6);
  }
  uVar7 = FUN_143703a50();
  uVar8 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  if ((int)uVar8 < param_2) {
    iVar5 = uVar8 * 2;
    iVar4 = param_2;
    if (param_2 < iVar5) {
      iVar4 = iVar5;
    }
    FUN_14370c310(uVar7,param_3,iVar4,1);
  }
  *(int *)(param_3 + 1) = param_2;
  return;
}



// FUNCTION 1436e82c0 FUN_1436e82c0 body=1788 status=ok
// SIG undefined FUN_1436e82c0(void)

undefined4 * FUN_1436e82c0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *local_res8;
  undefined4 *local_res10;
  byte local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_288;
  undefined8 local_278;
  longlong local_270;
  undefined1 local_268 [64];
  undefined1 local_228 [96];
  ulonglong local_1c8;
  undefined8 local_110;
  
  local_res10 = param_2;
  uVar6 = FUN_1436e9dc0();
  plVar1 = *(longlong **)(param_1 + 8);
  local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,0xff);
  if (plVar1[1] - *plVar1 < 1) {
    hkIo::ReadBuffer::implRead(plVar1,&local_res8,1);
  }
  else {
    FGenericPlatformString::Memcpy(&local_res8);
    *plVar1 = *plVar1 + 1;
  }
  uVar2 = (ulonglong)local_res8 & 1;
  uVar14 = (ulonglong)((byte)local_res8 >> 1) & 0x7fffffffffffffbf;
  iVar13 = (int)uVar14;
  bVar3 = 6;
  bVar4 = (byte)local_res8;
  while ((char)bVar4 < '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    local_res18[0] = 0xff;
    if (plVar1[1] - *plVar1 < 1) {
      hkIo::ReadBuffer::implRead(plVar1,local_res18);
    }
    else {
      FGenericPlatformString::Memcpy(local_res18);
      *plVar1 = *plVar1 + 1;
    }
    uVar14 = uVar14 | ((ulonglong)local_res18[0] & 0xffffffffffffff7f) << (bVar3 & 0x3f);
    iVar13 = (int)uVar14;
    bVar3 = bVar3 + 7;
    bVar4 = local_res18[0];
  }
  if (uVar2 != 0) {
    iVar13 = -iVar13;
  }
  puVar7 = (undefined8 *)FUN_14373c2c0(param_1 + 0x28,uVar6,0);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_1436e6ab0(*(undefined8 *)(param_1 + 0x68));
    FUN_14373c2f0(param_1 + 0x28,uVar6,puVar7);
  }
  puVar7[5] = (longlong)iVar13;
  puVar7[4] = uVar6;
  puVar7[6] = 0;
  lVar12 = *(longlong *)(param_1 + 0xb8);
  local_res8 = puVar7;
  lVar8 = FUN_1436e53e0(lVar12 + 0xd8,&local_res8);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 4) < 0)) {
    FUN_1436ea0d0(lVar12,*(undefined4 *)(lVar12 + 0xe0),puVar7);
  }
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1 + 0x18,8);
  }
  local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,0xff);
  *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 8) = puVar7;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1[1] - *plVar1 < 1) {
    hkIo::ReadBuffer::implRead(plVar1);
  }
  else {
    FGenericPlatformString::Memcpy(&local_res8);
    *plVar1 = *plVar1 + 1;
  }
  uVar14 = (ulonglong)((byte)local_res8 >> 1) & 0x7fffffffffffffbf;
  iVar13 = (int)uVar14;
  uVar2 = (ulonglong)local_res8 & 1;
  bVar3 = 6;
  bVar4 = (byte)local_res8;
  while ((char)bVar4 < '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    local_res18[0] = 0xff;
    if (plVar1[1] - *plVar1 < 1) {
      hkIo::ReadBuffer::implRead(plVar1,local_res18);
    }
    else {
      FGenericPlatformString::Memcpy(local_res18);
      *plVar1 = *plVar1 + 1;
    }
    uVar14 = uVar14 | ((ulonglong)local_res18[0] & 0xffffffffffffff7f) << (bVar3 & 0x3f);
    iVar13 = (int)uVar14;
    bVar3 = bVar3 + 7;
    bVar4 = local_res18[0];
  }
  if (uVar2 != 0) {
    iVar13 = -iVar13;
  }
  if (iVar13 < 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar13 * 8);
  }
  puVar7[1] = uVar6;
  plVar1 = *(longlong **)(param_1 + 8);
  local_res8._1_7_ = (undefined7)((ulonglong)local_res8 >> 8);
  local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,0xff);
  if (plVar1[1] - *plVar1 < 1) {
    hkIo::ReadBuffer::implRead(plVar1,&local_res8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_res8);
    *plVar1 = *plVar1 + 1;
  }
  uVar2 = (ulonglong)local_res8 & 1;
  uVar14 = (ulonglong)((byte)local_res8 >> 1) & 0x7fffffffffffffbf;
  bVar3 = 6;
  bVar4 = (byte)local_res8;
  while ((char)bVar4 < '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    local_res18[0] = 0xff;
    if (plVar1[1] - *plVar1 < 1) {
      hkIo::ReadBuffer::implRead(plVar1,local_res18);
    }
    else {
      FGenericPlatformString::Memcpy(local_res18);
      *plVar1 = *plVar1 + 1;
    }
    uVar14 = uVar14 | ((ulonglong)local_res18[0] & 0xffffffffffffff7f) << (bVar3 & 0x3f);
    bVar3 = bVar3 + 7;
    bVar4 = local_res18[0];
  }
  if (uVar2 != 0) {
    uVar14 = -uVar14;
  }
  puVar7[2] = 7;
  puVar7[3] = &DAT_146b82b68;
  *puVar7 = 0x480001d;
  puVar9 = (undefined8 *)FUN_143714780(0,uVar14 & 0xffffffff,0,*(undefined8 *)(param_1 + 0x68));
  local_270 = (longlong)(int)uVar14;
  puVar7[7] = puVar9;
  local_288 = 0;
  if (0 < (int)uVar14) {
    do {
      puVar9 = puVar9 + 1;
      uVar6 = FUN_1436e9dc0(param_1);
      plVar1 = *(longlong **)(param_1 + 8);
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,0xff);
      if (plVar1[1] - *plVar1 < 1) {
        hkIo::ReadBuffer::implRead(plVar1,&local_res8);
      }
      else {
        FGenericPlatformString::Memcpy(&local_res8);
        *plVar1 = *plVar1 + 1;
      }
      uVar2 = (ulonglong)local_res8 & 1;
      uVar14 = (ulonglong)((byte)local_res8 >> 1) & 0x7fffffffffffffbf;
      bVar3 = 6;
      bVar4 = (byte)local_res8;
      while ((char)bVar4 < '\0') {
        plVar1 = *(longlong **)(param_1 + 8);
        local_res18[0] = 0xff;
        if (plVar1[1] - *plVar1 < 1) {
          hkIo::ReadBuffer::implRead(plVar1,local_res18);
        }
        else {
          FGenericPlatformString::Memcpy(local_res18);
          *plVar1 = *plVar1 + 1;
        }
        uVar14 = uVar14 | ((ulonglong)local_res18[0] & 0xffffffffffffff7f) << (bVar3 & 0x3f);
        bVar3 = bVar3 + 7;
        bVar4 = local_res18[0];
      }
      if (uVar2 != 0) {
        uVar14 = -uVar14;
      }
      if ((uVar14 & 0x20) == 0) {
        iVar13 = 0;
      }
      else {
        plVar1 = *(longlong **)(param_1 + 8);
        local_res8._1_7_ = (undefined7)((ulonglong)local_res8 >> 8);
        local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,0xff);
        if (plVar1[1] - *plVar1 < 1) {
          hkIo::ReadBuffer::implRead(plVar1,&local_res8);
        }
        else {
          FGenericPlatformString::Memcpy(&local_res8);
          *plVar1 = *plVar1 + 1;
        }
        uVar2 = (ulonglong)local_res8 & 1;
        uVar15 = (ulonglong)((byte)local_res8 >> 1) & 0x7fffffffffffffbf;
        iVar13 = (int)uVar15;
        bVar3 = 6;
        bVar4 = (byte)local_res8;
        while ((char)bVar4 < '\0') {
          plVar1 = *(longlong **)(param_1 + 8);
          local_res18[0] = 0xff;
          if (plVar1[1] - *plVar1 < 1) {
            hkIo::ReadBuffer::implRead(plVar1,local_res18);
          }
          else {
            FGenericPlatformString::Memcpy(local_res18);
            *plVar1 = *plVar1 + 1;
          }
          uVar15 = uVar15 | ((ulonglong)local_res18[0] & 0xffffffffffffff7f) << (bVar3 & 0x3f);
          iVar13 = (int)uVar15;
          bVar3 = bVar3 + 7;
          bVar4 = local_res18[0];
        }
        if (uVar2 != 0) {
          iVar13 = -iVar13;
        }
      }
      if (((uint)uVar14 & 0xf) - 8 < 2) {
        uVar10 = FUN_1436e9dc0(param_1);
      }
      else {
        uVar10 = 0;
      }
      puVar7 = (undefined8 *)FUN_1436e6b60(param_1,uVar14 & 0xffffffff,uVar10,iVar13);
      lVar12 = *(longlong *)(param_1 + 0xb8);
      local_res8 = puVar7;
      lVar8 = FUN_1436e53e0(lVar12 + 0xd8,&local_res8);
      if ((lVar8 == 0) || (*(int *)(lVar8 + 4) < 0)) {
        FUN_1436ea0d0(lVar12,*(undefined4 *)(lVar12 + 0xe0),puVar7);
      }
      FUN_143737060(local_228);
      UMovieScenePropertyTrack::SetSectionToKey(local_228,puVar7);
      FUN_1437380c0(local_228,uVar6,0xfefe,(uint)uVar14 == 0);
      local_1c8 = local_1c8 | 0x400000;
      local_110 = 0;
      piVar11 = (int *)FUN_143737960(local_228,local_res20,*(undefined8 *)(param_1 + 0x68),
                                     &local_278);
      if (*piVar11 < 0) {
        if (DAT_146b7b968 != '\0') {
          FUN_14373a730(local_268,&DAT_146b7b960,1);
          lVar12 = FUN_14373bbd0(local_268,"Failed to allocate type from builder",&DAT_145b909f0,0);
          *(char **)(lVar12 + 0x20) = "Serialize\\Format\\Tagfile2014\\hkTagfileReadFormat2014.cpp";
          *(undefined8 *)(lVar12 + 0x28) = 0x49f;
          FUN_14373a950(local_268);
        }
        puVar5 = local_res10;
        *local_res10 = 0x80040200;
        FUN_143737160(local_228);
        return puVar5;
      }
      *puVar9 = local_278;
      FUN_143737160(local_228);
      local_288 = local_288 + 1;
    } while (local_288 < local_270);
  }
  *local_res10 = 0;
  return local_res10;
}



// FUNCTION 1436e89c0 FUN_1436e89c0 body=281 status=ok
// SIG undefined FUN_1436e89c0(void)

void FUN_1436e89c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 local_res8;
  undefined1 local_res18;
  undefined1 uStackX_19;
  undefined1 uStackX_1a;
  undefined1 uStackX_1b;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (*(char *)(param_1 + 4) != '\0') {
    if (plVar1[1] - *plVar1 < 8) {
      hkIo::ReadBuffer::implRead(plVar1,&local_38);
    }
    else {
      FGenericPlatformString::Memcpy(&local_38);
      *plVar1 = *plVar1 + 8;
    }
    uVar6 = uStack_35;
    uVar5 = uStack_36;
    uVar4 = uStack_37;
    uVar3 = local_38;
    if (*(char *)(param_1 + 0x10) != '\0') {
      local_38 = uStack_31;
      uStack_37 = uStack_32;
      uStack_36 = uStack_33;
      uStack_35 = uStack_34;
      uStack_34 = uVar6;
      uStack_33 = uVar5;
      uStack_32 = uVar4;
      uStack_31 = uVar3;
    }
    *param_2 = CONCAT17(uStack_31,
                        CONCAT16(uStack_32,
                                 CONCAT15(uStack_33,
                                          CONCAT14(uStack_34,
                                                   CONCAT13(uStack_35,
                                                            CONCAT12(uStack_36,
                                                                     CONCAT11(uStack_37,local_38))))
                                         )));
    return;
  }
  if (plVar1[1] - *plVar1 < 4) {
    hkIo::ReadBuffer::implRead(plVar1,&local_res8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_res8);
    *plVar1 = *plVar1 + 4;
  }
  uVar2 = local_res8;
  if (*(char *)(param_1 + 0x10) != '\0') {
    uStackX_1b = (undefined1)((uint)local_res8 >> 0x18);
    uStackX_1a = (undefined1)((uint)local_res8 >> 0x10);
    uStackX_19 = (undefined1)((uint)uVar2 >> 8);
    local_res18 = (undefined1)uVar2;
    local_res8 = CONCAT13(local_res18,CONCAT12(uStackX_19,CONCAT11(uStackX_1a,uStackX_1b)));
  }
  *(undefined4 *)param_2 = local_res8;
  return;
}



// FUNCTION 1436e8ae0 FUN_1436e8ae0 body=2057 status=ok
// SIG undefined FUN_1436e8ae0(void)

ulonglong FUN_1436e8ae0(longlong param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  LPVOID pvVar12;
  byte *pbVar13;
  undefined8 uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint local_res10 [2];
  longlong *local_res18;
  undefined8 *local_res20;
  byte local_298 [8];
  longlong local_290;
  longlong local_288;
  undefined4 local_280;
  uint local_27c;
  longlong local_278;
  int local_270;
  undefined8 *local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  ulonglong local_250;
  undefined1 local_238 [512];
  
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_2 == 0) {
    plVar11 = *(longlong **)(param_1 + 8);
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,0xff);
    if (plVar11[1] - *plVar11 < 1) {
      hkIo::ReadBuffer::implRead(plVar11,local_res10);
    }
    else {
      FGenericPlatformString::Memcpy(local_res10);
      *plVar11 = *plVar11 + 1;
    }
    uVar18 = (ulonglong)((byte)local_res10[0] >> 1) & 0x7fffffffffffffbf;
    param_2 = (int)uVar18;
    uVar21 = local_res10[0] & 1;
    bVar2 = 6;
    bVar3 = (byte)local_res10[0];
    while ((char)bVar3 < '\0') {
      plVar11 = *(longlong **)(param_1 + 8);
      local_298[0] = 0xff;
      if (plVar11[1] - *plVar11 < 1) {
        hkIo::ReadBuffer::implRead(plVar11,local_298);
      }
      else {
        FGenericPlatformString::Memcpy(local_298);
        *plVar11 = *plVar11 + 1;
      }
      uVar18 = uVar18 | ((ulonglong)local_298[0] & 0xffffffffffffff7f) << (bVar2 & 0x3f);
      param_2 = (int)uVar18;
      bVar2 = bVar2 + 7;
      bVar3 = local_298[0];
    }
    if (uVar21 != 0) {
      param_2 = -param_2;
    }
  }
  if (param_2 == 5) {
    plVar11 = *(longlong **)(param_1 + 8);
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,0xff);
    if (plVar11[1] - *plVar11 < 1) {
      hkIo::ReadBuffer::implRead(plVar11,local_res10);
    }
    else {
      FGenericPlatformString::Memcpy(local_res10);
      *plVar11 = *plVar11 + 1;
    }
    uVar21 = local_res10[0] & 1;
    uVar18 = (ulonglong)((byte)local_res10[0] >> 1) & 0x7fffffffffffffbf;
    iVar17 = (int)uVar18;
    bVar2 = 6;
    bVar3 = (byte)local_res10[0];
    while ((char)bVar3 < '\0') {
      plVar11 = *(longlong **)(param_1 + 8);
      local_298[0] = 0xff;
      if (plVar11[1] - *plVar11 < 1) {
        hkIo::ReadBuffer::implRead(plVar11,local_298);
      }
      else {
        FGenericPlatformString::Memcpy(local_298);
        *plVar11 = *plVar11 + 1;
      }
      uVar18 = uVar18 | ((ulonglong)local_298[0] & 0xffffffffffffff7f) << (bVar2 & 0x3f);
      iVar17 = (int)uVar18;
      bVar2 = bVar2 + 7;
      bVar3 = local_298[0];
    }
    if (uVar21 != 0) {
      iVar17 = -iVar17;
    }
    lVar7 = FUN_1436ea2a0(*(undefined8 *)(param_1 + 0xb8),&local_260,
                          *(undefined4 *)((longlong)iVar17 * 4 + *(longlong *)(param_1 + 0x58)));
    *param_3 = *(longlong *)(lVar7 + 8);
    if ((local_250 & 1) != 0) {
      FUN_143733a60(local_250 & 0xfffffffffffffffe);
    }
    uVar18 = (ulonglong)*(uint *)((longlong)iVar17 * 4 + *(longlong *)(param_1 + 0x58));
  }
  else if (param_2 == 6) {
    uVar18 = 0;
  }
  else {
    if (*param_3 == 0) {
      plVar11 = *(longlong **)(param_1 + 8);
      local_res10[0] = CONCAT31(local_res10[0]._1_3_,0xff);
      if (plVar11[1] - *plVar11 < 1) {
        hkIo::ReadBuffer::implRead(plVar11,local_res10);
      }
      else {
        FGenericPlatformString::Memcpy(local_res10);
        *plVar11 = *plVar11 + 1;
      }
      uVar18 = (ulonglong)((byte)local_res10[0] >> 1) & 0x7fffffffffffffbf;
      iVar17 = (int)uVar18;
      uVar21 = local_res10[0] & 1;
      bVar2 = 6;
      bVar3 = (byte)local_res10[0];
      while ((char)bVar3 < '\0') {
        plVar11 = *(longlong **)(param_1 + 8);
        local_298[0] = 0xff;
        if (plVar11[1] - *plVar11 < 1) {
          hkIo::ReadBuffer::implRead(plVar11,local_298);
        }
        else {
          FGenericPlatformString::Memcpy(local_298);
          *plVar11 = *plVar11 + 1;
        }
        uVar18 = uVar18 | ((ulonglong)local_298[0] & 0xffffffffffffff7f) << (bVar2 & 0x3f);
        iVar17 = (int)uVar18;
        bVar2 = bVar2 + 7;
        bVar3 = local_298[0];
      }
      if (uVar21 != 0) {
        iVar17 = -iVar17;
      }
      iVar16 = *(int *)(param_1 + 0x78) + 1;
      if (iVar16 < *(int *)(param_1 + 0x20)) {
        lVar7 = (longlong)iVar16 * 8;
        do {
          FUN_143736450(*(undefined8 *)(lVar7 + *(longlong *)(param_1 + 0x18)));
          *(int *)(param_1 + 0x78) = iVar16;
          lVar7 = lVar7 + 8;
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(param_1 + 0x20));
      }
      *param_3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar17 * 8);
    }
    lVar7 = *param_3;
    puVar8 = (undefined8 *)FUN_143714490(lVar7,1);
    uVar21 = 0;
    uVar6 = uVar21;
    if (puVar8 != (undefined8 *)0x0) {
      uVar6 = (uint)*puVar8;
    }
    lVar10 = 0;
    if (((byte)uVar6 & 0xf) == 7) {
      lVar10 = lVar7;
    }
    local_290 = lVar10;
    if (local_res20 == (undefined8 *)0x0) {
      lVar7 = **(longlong **)(param_1 + 0x70);
      uVar5 = FUN_1437152f0(lVar10);
      puVar9 = (undefined8 *)(**(code **)(lVar7 + 8))(*(undefined8 *)(param_1 + 0x70),uVar5);
      local_res20 = puVar9;
      iVar17 = FUN_1437152f0(lVar10);
      FUN_14370c720(puVar9,0,(longlong)iVar17);
      puVar8 = (undefined8 *)*param_3;
      uVar21 = *(uint *)(*(longlong *)(param_1 + 0xb8) + 0x20);
      local_260 = puVar9;
      local_258 = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = FUN_1437151a0(puVar8);
      }
      local_250 = uVar18;
      if ((uVar18 & 1) != 0) {
        FUN_1437329e0(uVar18 & 0xfffffffffffffffe);
      }
      lVar7 = *(longlong *)(param_1 + 0xb8);
      FUN_1436e7250(lVar7,uVar21);
      local_res10[0] = 0xffffffff;
      local_268 = puVar8;
      lVar10 = FUN_1436e53e0(lVar7 + 0xd8,&local_268);
      if (lVar10 == 0) {
        puVar15 = local_res10;
      }
      else {
        puVar15 = (uint *)(*(longlong *)(lVar7 + 0xd8) + 8 + (longlong)*(int *)(lVar10 + 4) * 0x10);
      }
      uVar6 = *puVar15;
      puVar8 = (undefined8 *)((longlong)(int)uVar21 * 0x10 + *(longlong *)(lVar7 + 0x18));
      *puVar8 = local_res20;
      *(uint *)(puVar8 + 1) = uVar6;
      param_3 = local_res18;
      if ((uVar18 & 1) != 0) {
        FUN_143733a60(uVar18 & 0xfffffffffffffffe);
        param_3 = local_res18;
      }
    }
    lVar7 = local_290;
    uVar18 = 0;
    if (param_2 != 3) {
      if (param_2 == 4) {
        uVar14 = FUN_143703a50();
        if (*(uint *)(param_1 + 0x60) == (*(uint *)(param_1 + 100) & 0x3fffffff)) {
          FUN_14370c460(uVar14,param_1 + 0x58,4);
        }
        *(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x60) * 4) = uVar21;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        uVar22 = uVar18;
        uVar19 = uVar18;
        if (0 < *(int *)(param_1 + 0x88)) {
          do {
            iVar17 = (int)uVar22;
            puVar15 = *(uint **)(uVar19 + *(longlong *)(param_1 + 0x80));
            if (*puVar15 == *(int *)(param_1 + 0x60) - 1U) {
              *puVar15 = uVar21;
              *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
              if (*(int *)(param_1 + 0x88) != iVar17) {
                *(undefined8 *)(*(longlong *)(param_1 + 0x80) + uVar19) =
                     *(undefined8 *)
                      (*(longlong *)(param_1 + 0x80) + (longlong)*(int *)(param_1 + 0x88) * 8);
              }
              iVar17 = iVar17 + -1;
              uVar19 = uVar19 - 8;
            }
            uVar22 = (ulonglong)(iVar17 + 1U);
            uVar19 = uVar19 + 8;
          } while ((int)(iVar17 + 1U) < *(int *)(param_1 + 0x88));
        }
        uVar22 = uVar18;
        if (0 < *(int *)(param_1 + 0x98)) {
          do {
            iVar17 = (int)uVar18;
            if (*(uint *)(uVar22 + 0xc + *(longlong *)(param_1 + 0x90)) == uVar21) {
              lVar10 = *param_3;
              plVar11 = (longlong *)
                        FUN_1437143d0(*(undefined8 *)(uVar22 + *(longlong *)(param_1 + 0x90)),2);
              *plVar11 = lVar10;
              *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
              if (*(int *)(param_1 + 0x98) != iVar17) {
                lVar10 = 2;
                puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x90) + uVar22);
                lVar20 = ((longlong)*(int *)(param_1 + 0x98) * 0x10 + *(longlong *)(param_1 + 0x90))
                         - (longlong)puVar8;
                do {
                  *puVar8 = *(undefined8 *)(lVar20 + (longlong)puVar8);
                  puVar8 = puVar8 + 1;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
              iVar17 = iVar17 + -1;
              uVar22 = uVar22 - 0x10;
            }
            uVar18 = (ulonglong)(iVar17 + 1U);
            uVar22 = uVar22 + 0x10;
          } while ((int)(iVar17 + 1U) < *(int *)(param_1 + 0x98));
        }
      }
      else {
        FUN_1437134a0(&local_260,local_238,0x200);
        Electra::FHTTPResourceRequest::URL(&local_260,"corrupt file");
        iVar17 = FUN_143732300(0x484994d5,local_238,
                               "Serialize\\Format\\Tagfile2014\\hkTagfileReadFormat2014.cpp",0x3da);
        if (iVar17 != 0) {
          pcVar1 = (code *)swi(3);
          uVar18 = (*pcVar1)();
          return uVar18;
        }
        FUN_143713520(&local_260);
      }
    }
    lVar10 = 0;
    local_288 = 0;
    local_280 = 0;
    local_27c = 0x80000000;
    local_270 = 0x80;
    pvVar12 = TlsGetValue(DAT_146b7bf70);
    if (pvVar12 == (LPVOID)0x0) {
      pvVar12 = DAT_146b7bf68;
    }
    local_278 = *(longlong *)((longlong)pvVar12 + 0x18);
    if ((*(int *)((longlong)pvVar12 + 0x10) < 0x80) ||
       (*(ulonglong *)((longlong)pvVar12 + 0x20) < local_278 + 0x80U)) {
      local_278 = FUN_1437138c0(pvVar12,0x80);
    }
    else {
      *(ulonglong *)((longlong)pvVar12 + 0x18) = local_278 + 0x80U;
    }
    local_27c = 0x80000080;
    local_288 = local_278;
    uVar5 = FUN_143738c50(lVar7);
    FUN_1436e8130(param_1,uVar5,&local_288);
    hkReflect::DeclIterAll::DeclIterAll(&local_260,lVar7,0);
    while ((puVar8 = local_260 + 1, local_260 + 1 < local_258 ||
           (cVar4 = FUN_1437144f0(&local_260), iVar17 = local_270, lVar7 = local_278,
           puVar8 = local_260, cVar4 != '\0'))) {
      local_260 = puVar8;
      pbVar13 = (byte *)FUN_143714f30(local_260,local_res10);
      if ((*pbVar13 & 0x20) != 0) {
        FUN_143714060(&local_268,*local_260);
        if (*(char *)(lVar10 + local_288) != '\0') {
          FUN_143714060(&local_290,local_268);
          FUN_1436e7590(param_1,local_res20,&local_290,uVar21);
        }
        lVar10 = lVar10 + 1;
      }
    }
    if (local_278 == local_288) {
      local_280 = 0;
    }
    pvVar12 = TlsGetValue(DAT_146b7bf70);
    if (pvVar12 == (LPVOID)0x0) {
      pvVar12 = DAT_146b7bf68;
    }
    uVar6 = iVar17 + 0x7fU & 0xffffff80;
    if (((*(int *)((longlong)pvVar12 + 0x10) < (int)uVar6) ||
        ((int)uVar6 + lVar7 != *(longlong *)((longlong)pvVar12 + 0x18))) ||
       (*(longlong *)((longlong)pvVar12 + 0x28) == lVar7)) {
      FUN_143713ff0(pvVar12,lVar7);
    }
    else {
      *(longlong *)((longlong)pvVar12 + 0x18) = lVar7;
    }
    uVar14 = FUN_143703a50();
    local_280 = 0;
    if (-1 < (int)local_27c) {
      FUN_143702e10(uVar14,local_288,1,local_27c & 0x3fffffff);
    }
    uVar18 = (ulonglong)uVar21;
  }
  return uVar18;
}



// FUNCTION 1436e92f0 FUN_1436e92f0 body=2318 status=ok
// SIG undefined FUN_1436e92f0(void)

undefined4 * FUN_1436e92f0(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  undefined8 local_res8;
  undefined4 local_res18;
  undefined4 local_res20;
  undefined2 local_268 [2];
  undefined2 local_264 [2];
  undefined1 local_260 [8];
  undefined1 local_258 [32];
  undefined1 local_238 [512];
  
  plVar3 = *(longlong **)(param_1 + 2);
  if (plVar3[1] - *plVar3 < 4) {
    hkIo::ReadBuffer::implRead(plVar3,&local_res8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_res8);
    *plVar3 = *plVar3 + 4;
  }
  bVar16 = local_res8._3_1_;
  uVar2 = local_res8._1_1_;
  uVar19 = local_res8._2_1_;
  bVar7 = (byte)local_res8;
  if ((char)param_1[4] == '\0') {
    uVar11 = (uint)local_res8._3_1_;
    bVar16 = (byte)local_res8;
    uVar19 = local_res8._1_1_;
    uVar2 = local_res8._2_1_;
  }
  else {
    uVar11 = (uint)local_res8;
    local_res18 = (uint)local_res8;
    local_res8._0_4_ = CONCAT13(bVar7,CONCAT21(CONCAT11(uVar2,uVar19),bVar16));
  }
  plVar3 = *(longlong **)(param_1 + 2);
  if (plVar3[1] - *plVar3 < 4) {
    hkIo::ReadBuffer::implRead(plVar3,&local_res18);
  }
  else {
    FGenericPlatformString::Memcpy(&local_res18);
    *plVar3 = *plVar3 + 4;
  }
  uVar13 = local_res8;
  if ((char)param_1[4] == '\0') {
    uVar5 = (uint)local_res18._3_1_;
    bVar7 = (byte)local_res18;
    uVar9 = local_res18._1_1_;
    uVar14 = local_res18._2_1_;
  }
  else {
    local_res20 = local_res18;
    uVar5 = local_res18;
    bVar7 = local_res18._3_1_;
    uVar9 = local_res18._2_1_;
    uVar14 = local_res18._1_1_;
    local_res18 = CONCAT13((byte)local_res18,
                           CONCAT21(CONCAT11(local_res18._1_1_,local_res18._2_1_),local_res18._3_1_)
                          );
  }
  if (((uint)local_res8 == -0x354ff2e2) && (local_res18 == 0xd011face)) {
LAB_1436e94d3:
    plVar3 = *(longlong **)(param_1 + 2);
    local_res8 = CONCAT71(local_res8._1_7_,0xff);
    if (plVar3[1] - *plVar3 < 1) {
      hkIo::ReadBuffer::implRead(plVar3,&local_res8);
    }
    else {
      FGenericPlatformString::Memcpy(&local_res8);
      *plVar3 = *plVar3 + 1;
    }
    uVar13 = local_res8 & 1;
    uVar12 = (ulonglong)((byte)local_res8 >> 1) & 0x7fffffffffffffbf;
    bVar7 = 6;
    bVar16 = (byte)local_res8;
    while ((char)bVar16 < '\0') {
      plVar3 = *(longlong **)(param_1 + 2);
      local_res18._1_3_ = (undefined3)(local_res18 >> 8);
      local_res18 = CONCAT31(local_res18._1_3_,0xff);
      if (plVar3[1] - *plVar3 < 1) {
        hkIo::ReadBuffer::implRead(plVar3,&local_res18);
      }
      else {
        FGenericPlatformString::Memcpy(&local_res18);
        *plVar3 = *plVar3 + 1;
      }
      uVar12 = uVar12 | ((ulonglong)(byte)local_res18 & 0xffffffffffffff7f) << (bVar7 & 0x3f);
      bVar7 = bVar7 + 7;
      bVar16 = (byte)local_res18;
    }
    if (uVar13 != 0) {
      uVar12 = -uVar12;
    }
    iVar17 = (int)uVar12;
    while (iVar17 != -1) {
      switch((int)uVar12) {
      case 1:
        plVar3 = *(longlong **)(param_1 + 2);
        local_res8._1_7_ = (undefined7)(local_res8 >> 8);
        local_res8 = CONCAT71(local_res8._1_7_,0xff);
        if (plVar3[1] - *plVar3 < 1) {
          hkIo::ReadBuffer::implRead(plVar3,&local_res8);
        }
        else {
          FGenericPlatformString::Memcpy(&local_res8);
          *plVar3 = *plVar3 + 1;
        }
        uVar13 = local_res8 & 1;
        uVar12 = (ulonglong)((byte)local_res8 >> 1) & 0x7fffffffffffffbf;
        iVar17 = (int)uVar12;
        bVar16 = (byte)local_res8;
        bVar7 = 6;
        while ((char)bVar16 < '\0') {
          plVar3 = *(longlong **)(param_1 + 2);
          local_res18._1_3_ = (undefined3)(local_res18 >> 8);
          local_res18 = CONCAT31(local_res18._1_3_,0xff);
          if (plVar3[1] - *plVar3 < 1) {
            hkIo::ReadBuffer::implRead(plVar3,&local_res18);
          }
          else {
            FGenericPlatformString::Memcpy(&local_res18);
            *plVar3 = *plVar3 + 1;
          }
          uVar12 = uVar12 | ((ulonglong)(byte)local_res18 & 0xffffffffffffff7f) << (bVar7 & 0x3f);
          iVar17 = (int)uVar12;
          bVar16 = (byte)local_res18;
          bVar7 = bVar7 + 7;
        }
        if (uVar13 != 0) {
          iVar17 = -iVar17;
        }
        *param_1 = iVar17;
        if (iVar17 != 0) {
          if (iVar17 == 1) {
            plVar3 = *(longlong **)(param_1 + 2);
            local_res8._1_7_ = (undefined7)(local_res8 >> 8);
            local_res8 = CONCAT71(local_res8._1_7_,0xff);
            if (plVar3[1] - *plVar3 < 1) {
              hkIo::ReadBuffer::implRead(plVar3,&local_res8);
            }
            else {
              FGenericPlatformString::Memcpy(&local_res8);
              *plVar3 = *plVar3 + 1;
            }
            uVar13 = local_res8 & 1;
            uVar12 = (ulonglong)((byte)local_res8 >> 1) & 0x7fffffffffffffbf;
            iVar17 = (int)uVar12;
            bVar16 = (byte)local_res8;
            bVar7 = 6;
            while ((char)bVar16 < '\0') {
              plVar3 = *(longlong **)(param_1 + 2);
              local_res18._1_3_ = (undefined3)(local_res18 >> 8);
              local_res18 = CONCAT31(local_res18._1_3_,0xff);
              if (plVar3[1] - *plVar3 < 1) {
                hkIo::ReadBuffer::implRead(plVar3,&local_res18);
              }
              else {
                FGenericPlatformString::Memcpy(&local_res18);
                *plVar3 = *plVar3 + 1;
              }
              uVar12 = uVar12 | ((ulonglong)(byte)local_res18 & 0xffffffffffffff7f) <<
                                (bVar7 & 0x3f);
              iVar17 = (int)uVar12;
              bVar16 = (byte)local_res18;
              bVar7 = bVar7 + 7;
            }
            if (uVar13 != 0) {
              iVar17 = -iVar17;
            }
            if (iVar17 != 1) goto switchD_1436e95d2_caseD_5;
            param_1[0x12] = 0;
            uVar15 = FUN_143703a50();
            if (param_1[0x12] == (param_1[0x13] & 0x3fffffffU)) {
              FUN_14370c460(uVar15,param_1 + 0x10,8);
            }
            *(undefined1 **)(*(longlong *)(param_1 + 0x10) + (longlong)param_1[0x12] * 8) =
                 &DAT_145af3922;
            param_1[0x12] = param_1[0x12] + 1;
            uVar15 = FUN_143703a50();
            if (param_1[0x12] == (param_1[0x13] & 0x3fffffffU)) {
              FUN_14370c460(uVar15,param_1 + 0x10,8);
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_1[0x12] * 8) = 0;
            param_1[0x12] = param_1[0x12] + 1;
            uVar15 = FUN_143703a50();
            iVar17 = param_1[0x12] + 0x6d8;
            uVar11 = param_1[0x13] & 0x3fffffff;
            if (((int)uVar11 < iVar17) && ((int)uVar11 < iVar17)) {
              iVar4 = iVar17;
              if (iVar17 < (int)(uVar11 * 2)) {
                iVar4 = uVar11 * 2;
              }
              FUN_14370c310(uVar15,param_1 + 0x10,iVar4,8);
            }
            lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)param_1[0x12] * 8;
            puVar8 = (undefined8 *)(lVar1 + 0x10);
            lVar10 = 0x248;
            do {
              puVar8[-2] = *(undefined8 *)
                            ((longlong)&PTR_vftable_1467f1440 + -lVar1 + (longlong)puVar8);
              puVar8[-1] = *(undefined8 *)((0x1467f1448 - lVar1) + (longlong)puVar8);
              *puVar8 = *(undefined8 *)
                         ((longlong)&PTR_s_variant_1467f1450 + -lVar1 + (longlong)puVar8);
              puVar8 = puVar8 + 3;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            param_1[0x12] = iVar17;
            param_1[0x14] = 0x6da;
          }
          else {
            if (4 < iVar17 - 2U) {
              FUN_1437134a0(local_258,local_238,0x200);
              uVar15 = Electra::FHTTPResourceRequest::URL(local_258,"Unrecognised tagfile version ")
              ;
              FUN_143715b10(uVar15,*param_1);
              uVar15 = 0x4f7;
              goto LAB_1436e9ba6;
            }
            uVar15 = FUN_143703a50();
            if (param_1[0x18] == (param_1[0x19] & 0x3fffffffU)) {
              FUN_14370c460(uVar15,param_1 + 0x16,4);
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x16) + (longlong)param_1[0x18] * 4) = 0;
            param_1[0x18] = param_1[0x18] + 1;
            if (3 < *param_1) {
              FUN_1436e9dc0(param_1);
            }
            if (4 < *param_1) {
              plVar3 = *(longlong **)(param_1 + 2);
              if (plVar3[1] - *plVar3 < 2) {
                hkIo::ReadBuffer::implRead(plVar3,local_268);
              }
              else {
                FGenericPlatformString::Memcpy(local_268);
                *plVar3 = *plVar3 + 2;
              }
              if ((char)param_1[4] != '\0') {
                local_268[0] = CONCAT11((char)local_268[0],(char)((ushort)local_268[0] >> 8));
              }
              plVar3 = *(longlong **)(param_1 + 2);
              if (plVar3[1] - *plVar3 < 2) {
                hkIo::ReadBuffer::implRead(plVar3,&local_res20);
              }
              else {
                FGenericPlatformString::Memcpy(&local_res20);
                *plVar3 = *plVar3 + 2;
              }
              if ((char)param_1[4] != '\0') {
                local_res20 = CONCAT31(CONCAT21(local_res20._2_2_,(char)local_res20),
                                       (char)(local_res20 >> 8));
              }
              if ((ushort)local_res20 != 0) {
                uVar13 = (ulonglong)(ushort)local_res20;
                do {
                  plVar3 = *(longlong **)(param_1 + 2);
                  if (plVar3[1] - *plVar3 < 2) {
                    hkIo::ReadBuffer::implRead(plVar3,local_264);
                  }
                  else {
                    FGenericPlatformString::Memcpy(local_264);
                    *plVar3 = *plVar3 + 2;
                  }
                  if ((char)param_1[4] != '\0') {
                    local_264[0] = CONCAT11((char)local_264[0],(char)((ushort)local_264[0] >> 8));
                  }
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
            }
            if (5 < *param_1) {
              *(undefined1 *)(param_1 + 1) = 1;
            }
          }
        }
        break;
      case 2:
        piVar6 = (int *)FUN_1436e82c0(param_1,local_260);
        if (*piVar6 < 0) goto switchD_1436e95d2_caseD_5;
        break;
      case 3:
      case 4:
      case 6:
        local_res8 = 0;
        FUN_1436e8ae0(param_1,uVar12 & 0xffffffff,&local_res8,0);
        if (*param_1 < 2) goto switchD_1436e95d2_caseD_7;
        break;
      default:
        goto switchD_1436e95d2_caseD_5;
      case 7:
switchD_1436e95d2_caseD_7:
        *param_2 = 0;
        return param_2;
      }
      plVar3 = *(longlong **)(param_1 + 2);
      local_res8 = CONCAT71(local_res8._1_7_,0xff);
      if (plVar3[1] - *plVar3 < 1) {
        hkIo::ReadBuffer::implRead(plVar3,&local_res8);
      }
      else {
        FGenericPlatformString::Memcpy(&local_res8);
        *plVar3 = *plVar3 + 1;
      }
      uVar13 = local_res8 & 1;
      uVar18 = (ulonglong)((byte)local_res8 >> 1) & 0x7fffffffffffffbf;
      bVar7 = 6;
      bVar16 = (byte)local_res8;
      while ((char)bVar16 < '\0') {
        plVar3 = *(longlong **)(param_1 + 2);
        local_res18._1_3_ = (undefined3)(local_res18 >> 8);
        local_res18 = CONCAT31(local_res18._1_3_,0xff);
        if (plVar3[1] - *plVar3 < 1) {
          hkIo::ReadBuffer::implRead(plVar3,&local_res18);
        }
        else {
          FGenericPlatformString::Memcpy(&local_res18);
          *plVar3 = *plVar3 + 1;
        }
        uVar18 = uVar18 | ((ulonglong)(byte)local_res18 & 0xffffffffffffff7f) << (bVar7 & 0x3f);
        bVar7 = bVar7 + 7;
        bVar16 = (byte)local_res18;
      }
      if (uVar13 != 0) {
        uVar18 = -uVar18;
      }
      uVar12 = uVar18 & 0xffffffff;
      iVar17 = (int)uVar18;
    }
  }
  else {
    local_res8._0_2_ = CONCAT11(uVar2,(char)uVar11);
    local_res8._0_3_ = CONCAT12(uVar19,(undefined2)local_res8);
    local_res8._4_4_ = SUB84(uVar13,4);
    local_res8._0_4_ = CONCAT13(bVar16,(undefined3)local_res8);
    if ((uint)local_res8 == -0x354ff2e2) {
      local_res8._0_2_ = CONCAT11(uVar14,(char)uVar5);
      local_res8._0_3_ = CONCAT12(uVar9,(undefined2)local_res8);
      local_res8._0_4_ = CONCAT13(bVar7,(undefined3)local_res8);
      if ((uint)local_res8 == -0x2fee0532) goto LAB_1436e94d3;
    }
    FUN_1437134a0(local_258,local_238,0x200);
    Electra::FHTTPResourceRequest::URL
              (local_258,"This does not look like a binary tagfile (magic number mismatch)");
    uVar15 = 0x4b0;
LAB_1436e9ba6:
    FUN_143732520(0x2ab6036f,local_238,"Serialize\\Format\\Tagfile2014\\hkTagfileReadFormat2014.cpp"
                  ,uVar15);
    FUN_143713520(local_258);
  }
switchD_1436e95d2_caseD_5:
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1436e9c20 FUN_1436e9c20 body=410 status=ok
// SIG undefined FUN_1436e9c20(void)

ulonglong FUN_1436e9c20(int *param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  byte local_res8 [8];
  byte local_res10 [8];
  
  *param_3 = 0;
  if (*param_1 < 2) {
    uVar7 = FUN_1436e8ae0(param_1,0,param_3,0);
    *param_2 = (int)uVar7;
    return uVar7;
  }
  plVar1 = *(longlong **)(param_1 + 2);
  local_res8[0] = 0xff;
  if (plVar1[1] - *plVar1 < 1) {
    hkIo::ReadBuffer::implRead(plVar1,local_res8);
  }
  else {
    FGenericPlatformString::Memcpy(local_res8);
    *plVar1 = *plVar1 + 1;
  }
  bVar2 = local_res8[0] & 1;
  uVar7 = (ulonglong)(local_res8[0] >> 1) & 0x7fffffffffffffbf;
  iVar6 = (int)uVar7;
  bVar3 = 6;
  bVar4 = local_res8[0];
  while ((char)bVar4 < '\0') {
    plVar1 = *(longlong **)(param_1 + 2);
    local_res10[0] = 0xff;
    if (plVar1[1] - *plVar1 < 1) {
      hkIo::ReadBuffer::implRead(plVar1,local_res10);
    }
    else {
      FGenericPlatformString::Memcpy(local_res10);
      *plVar1 = *plVar1 + 1;
    }
    uVar7 = uVar7 | ((ulonglong)local_res10[0] & 0xffffffffffffff7f) << (bVar3 & 0x3f);
    iVar6 = (int)uVar7;
    bVar3 = bVar3 + 7;
    bVar4 = local_res10[0];
  }
  if (bVar2 != 0) {
    iVar6 = -iVar6;
  }
  if (iVar6 < param_1[0x18]) {
    *param_2 = *(int *)((longlong)iVar6 * 4 + *(longlong *)(param_1 + 0x16));
    return (ulonglong)*(uint *)((longlong)iVar6 * 4 + *(longlong *)(param_1 + 0x16));
  }
  uVar5 = FUN_143703a50();
  if (param_1[0x22] == (param_1[0x23] & 0x3fffffffU)) {
    FUN_14370c460(uVar5,param_1 + 0x20,8);
  }
  *(int **)(*(longlong *)(param_1 + 0x20) + (longlong)param_1[0x22] * 8) = param_2;
  param_1[0x22] = param_1[0x22] + 1;
  *param_2 = iVar6;
  return 0xffffffff;
}



// FUNCTION 1436e9dc0 FUN_1436e9dc0 body=394 status=ok
// SIG undefined FUN_1436e9dc0(void)

longlong FUN_1436e9dc0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  byte local_res8 [8];
  byte local_res10 [8];
  
  plVar1 = *(longlong **)(param_1 + 8);
  local_res8[0] = 0xff;
  if (plVar1[1] - *plVar1 < 1) {
    hkIo::ReadBuffer::implRead(plVar1,local_res8);
  }
  else {
    FGenericPlatformString::Memcpy(local_res8);
    *plVar1 = *plVar1 + 1;
  }
  bVar2 = local_res8[0] & 1;
  uVar8 = (ulonglong)(local_res8[0] >> 1) & 0x7fffffffffffffbf;
  bVar3 = 6;
  bVar4 = local_res8[0];
  while ((char)bVar4 < '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    local_res10[0] = 0xff;
    if (plVar1[1] - *plVar1 < 1) {
      hkIo::ReadBuffer::implRead(plVar1,local_res10);
    }
    else {
      FGenericPlatformString::Memcpy(local_res10);
      *plVar1 = *plVar1 + 1;
    }
    uVar8 = uVar8 | ((ulonglong)local_res10[0] & 0xffffffffffffff7f) << (bVar3 & 0x3f);
    bVar3 = bVar3 + 7;
    bVar4 = local_res10[0];
  }
  if (bVar2 != 0) {
    uVar8 = -uVar8;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar7 * -8);
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))
                      (*(longlong **)(param_1 + 0x68),iVar7 + 1);
    plVar1 = *(longlong **)(param_1 + 8);
    uVar8 = uVar8 & 0xffffffff;
    if (plVar1[1] - *plVar1 < (longlong)uVar8) {
      hkIo::ReadBuffer::implRead(plVar1,lVar5,uVar8);
    }
    else {
      FGenericPlatformString::Memcpy(lVar5);
      *plVar1 = *plVar1 + uVar8;
    }
    *(undefined1 *)(iVar7 + lVar5) = 0;
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x48) == (*(uint *)(param_1 + 0x4c) & 0x3fffffff)) {
      FUN_14370c460(uVar6,param_1 + 0x40,8);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 0x48) * 8) = lVar5;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return lVar5;
}



// FUNCTION 1436e9f50 FUN_1436e9f50 body=366 status=ok
// SIG undefined FUN_1436e9f50(void)

void FUN_1436e9f50(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong local_res10;
  
  if (param_2 != 0) {
    uVar9 = 0;
    do {
      local_res10 = param_2;
      lVar4 = FUN_1436e53e0(param_1 + 0xd8,&local_res10);
      bVar1 = 0;
      if ((lVar4 != 0) && (-1 < *(int *)(lVar4 + 4))) {
        return;
      }
      local_res10 = param_2;
      lVar4 = FUN_1436e53e0(param_1 + 0xd8,&local_res10);
      if ((lVar4 == 0) || (*(int *)(lVar4 + 4) < 0)) {
        FUN_1436ea0d0(param_1,*(undefined4 *)(param_1 + 0xe0),param_2);
      }
      puVar5 = (undefined8 *)FUN_143714490(param_2,1);
      if (puVar5 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar5;
      }
      uVar7 = uVar9;
      if ((bVar1 & 0xf) == 7) {
        uVar7 = param_2;
      }
      if (uVar7 != 0) {
        iVar3 = FUN_143715240(uVar7);
        if (iVar3 < 1) {
          return;
        }
        do {
          puVar5 = (undefined8 *)FUN_143714e90(uVar7,&local_res10,uVar9);
          FUN_1436e9f50(param_1,*puVar5);
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          iVar3 = FUN_143715240(uVar7);
        } while ((int)uVar8 < iVar3);
        return;
      }
      puVar5 = (undefined8 *)FUN_143714490(param_2,1);
      bVar2 = 0;
      bVar1 = bVar2;
      if (puVar5 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar5;
      }
      uVar7 = uVar9;
      if ((bVar1 & 0xf) == 8) {
        uVar7 = param_2;
      }
      if (uVar7 == 0) {
        puVar5 = (undefined8 *)FUN_143714490(param_2,1);
        if (puVar5 != (undefined8 *)0x0) {
          bVar2 = (byte)*puVar5;
        }
        uVar7 = uVar9;
        if ((bVar2 & 0xf) == 6) {
          uVar7 = param_2;
        }
        if (uVar7 == 0) {
          return;
        }
      }
      puVar6 = (ulonglong *)FUN_143714420(uVar7,2);
      param_2 = uVar9;
      if (puVar6 != (ulonglong *)0x0) {
        param_2 = *puVar6;
      }
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1436ea0c0 FUN_1436ea0c0 body=10 status=ok
// SIG undefined FUN_1436ea0c0(void)

undefined4 * FUN_1436ea0c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1436ea0d0 FUN_1436ea0d0 body=174 status=ok
// SIG undefined FUN_1436ea0d0(void)

void FUN_1436ea0d0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  int local_res10 [2];
  undefined8 local_res18 [2];
  
  iVar1 = param_2 + 1;
  if (param_2 + 1 < *(int *)(param_1 + 0x10)) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar6 = uVar4 * 2;
    iVar2 = iVar1;
    if (iVar1 < iVar6) {
      iVar2 = iVar6;
    }
    FUN_14370c310(uVar3,param_1 + 8,iVar2,8);
  }
  iVar6 = iVar1 - *(int *)(param_1 + 0x10);
  if (0 < iVar6) {
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
    for (lVar5 = (longlong)iVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  *(int *)(param_1 + 0x10) = iVar1;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8) = param_3;
  FUN_1436e7110(param_1 + 0xd8,local_res18,local_res10);
  return;
}



// FUNCTION 1436ea180 FUN_1436ea180 body=278 status=ok
// SIG undefined FUN_1436ea180(void)

void FUN_1436ea180(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 local_res8;
  undefined4 local_res10 [2];
  
  iVar1 = param_2 + 1;
  if (param_2 + 1 < *(int *)(param_1 + 0x40)) {
    iVar1 = *(int *)(param_1 + 0x40);
  }
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0x44) & 0x3fffffff;
  if ((int)uVar5 < iVar1) {
    iVar6 = uVar5 * 2;
    iVar2 = iVar1;
    if (iVar1 < iVar6) {
      iVar2 = iVar6;
    }
    FUN_14370c310(uVar3,param_1 + 0x38,iVar2,0x10);
  }
  iVar6 = iVar1 - *(int *)(param_1 + 0x40);
  puVar4 = (undefined8 *)((longlong)*(int *)(param_1 + 0x40) * 0x10 + *(longlong *)(param_1 + 0x38))
  ;
  lVar8 = (longlong)iVar6;
  if (0 < iVar6) {
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0xffffffff00000000;
      }
      puVar4 = puVar4 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(int *)(param_1 + 0x40) = iVar1;
  local_res8 = param_3[1];
  local_res10[0] = 0xffffffff;
  lVar8 = FUN_1436e53e0(param_1 + 0xd8,&local_res8);
  if (lVar8 == 0) {
    puVar9 = local_res10;
  }
  else {
    puVar9 = (undefined4 *)
             (*(longlong *)(param_1 + 0xd8) + 8 + (longlong)*(int *)(lVar8 + 4) * 0x10);
  }
  uVar5 = *(uint *)(param_3 + 3);
  uVar3 = *param_3;
  puVar4 = (undefined8 *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x38));
  *(undefined4 *)(puVar4 + 1) = *puVar9;
  uVar7 = (int)uVar5 >> 0x1f;
  *puVar4 = uVar3;
  *(uint *)((longlong)puVar4 + 0xc) = (uVar5 ^ uVar7) - uVar7;
  return;
}



// FUNCTION 1436ea2a0 FUN_1436ea2a0 body=381 status=ok
// SIG undefined FUN_1436ea2a0(void)

undefined8 * FUN_1436ea2a0(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_3 * 0x10);
  local_38 = *puVar5;
  lStack_30 = puVar5[1];
  iVar2 = (int)lStack_30;
  if (iVar2 < 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * -8);
    lVar6 = 0;
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(lVar1,1);
      if (puVar5 == (undefined8 *)0x0) {
        lVar6 = FUN_1437157a0(0);
      }
      else {
        lVar6 = FUN_1437157a0((uint)*puVar5 & 0xf);
      }
    }
    lStack_30 = lVar6;
    local_38 = *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * -8);
    if (lVar6 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_1437151a0();
    }
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    puVar5 = &local_38;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_18 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8);
    local_20 = local_38;
    if (local_18 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = FUN_1437151a0();
    }
    if ((local_10 & 1) != 0) {
      FUN_1437329e0(local_10 & 0xfffffffffffffffe);
    }
    puVar5 = &local_20;
    bVar4 = true;
    bVar3 = false;
  }
  *param_2 = *puVar5;
  param_2[1] = puVar5[1];
  param_2[2] = puVar5[2];
  puVar5[2] = 0;
  if (bVar3) {
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
  }
  if ((bVar4) && ((local_10 & 1) != 0)) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1436ea420 FUN_1436ea420 body=106 status=ok
// SIG undefined FUN_1436ea420(void)

undefined8
FUN_1436ea420(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong *param_5
             )

{
  longlong local_48 [2];
  longlong local_38;
  longlong local_20;
  
  FUN_143733ca0(local_48,param_3,(longlong)param_4);
  FUN_1436e72f0(param_1,param_2,local_48);
  if (param_5 != (longlong *)0x0) {
    *param_5 = (local_20 - local_38) + local_48[0];
  }
  FUN_143733ce0(local_48);
  return param_2;
}



// FUNCTION 1436ea490 FindGeometryOpposingNormal body=37 status=ok
// SIG undefined FindGeometryOpposingNormal(void)

undefined8
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::FindGeometryOpposingNormal
          (longlong param_1,undefined8 param_2)

{
  FUN_1436ea420(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 1436ea4c0 FUN_1436ea4c0 body=979 status=ok
// SIG undefined FUN_1436ea4c0(void)

undefined8 * FUN_1436ea4c0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined1 local_2b8 [32];
  undefined8 local_298;
  undefined4 local_290;
  uint local_28c;
  undefined1 local_208 [512];
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkCompatFormats::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_143734b10(param_1 + 6);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  FUN_143734b10(param_1 + 10);
  FUN_1436eb0a0(param_1);
  FUN_143745310(&local_298,param_2);
  FUN_143746330(&local_298,"hkCompatFormats.dll",0,0);
  plVar3 = (longlong *)FUN_1437473d0(local_res8,local_298);
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  plVar1 = (longlong *)*plVar3;
  *plVar3 = 0;
  param_1[3] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1,"compatInit");
    param_1[0xc] = lVar4;
    if (lVar4 != 0) {
      lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],"compatQuit");
      param_1[0xd] = lVar4;
      if (lVar4 != 0) {
        lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],"compatLoad");
        param_1[0xe] = lVar4;
        if (lVar4 != 0) {
          lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],"compatFree")
          ;
          param_1[0xf] = lVar4;
          if (lVar4 != 0) {
            lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                              ((longlong *)param_1[3],"loadFilterConfigSet");
            param_1[0x10] = lVar4;
            if (lVar4 != 0) {
              lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                ((longlong *)param_1[3],"getFilterConfigSet");
              param_1[0x11] = lVar4;
              if (lVar4 != 0) {
                lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                  ((longlong *)param_1[3],"getFilterConfig");
                param_1[0x12] = lVar4;
                if (lVar4 != 0) {
                  lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                    ((longlong *)param_1[3],"getFilterStage");
                  param_1[0x13] = lVar4;
                  if (lVar4 != 0) {
                    lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                      ((longlong *)param_1[3],"loadClothSetup");
                    param_1[0x14] = lVar4;
                    if (lVar4 != 0) {
                      lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                        ((longlong *)param_1[3],"freeClothSetup");
                      param_1[0x15] = lVar4;
                      if (lVar4 != 0) {
                        lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                          ((longlong *)param_1[3],"getClothSetupDataNum");
                        param_1[0x16] = lVar4;
                        if (lVar4 != 0) {
                          lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                            ((longlong *)param_1[3],"getClothSetupData");
                          param_1[0x17] = lVar4;
                          if (lVar4 != 0) {
                            lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                              ((longlong *)param_1[3],"getClothSetupObject");
                            param_1[0x18] = lVar4;
                            if (lVar4 != 0) {
                              lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                                ((longlong *)param_1[3],"loadAttributeDescription");
                              param_1[0x19] = lVar4;
                              if (lVar4 != 0) {
                                lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                                  ((longlong *)param_1[3],
                                                   "getAttributeDescriptionGroupsNum");
                                param_1[0x1a] = lVar4;
                                if (lVar4 != 0) {
                                  lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                                    ((longlong *)param_1[3],
                                                     "getAttributeDescriptionGroup");
                                  param_1[0x1b] = lVar4;
                                  if (lVar4 != 0) {
                                    lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                                      ((longlong *)param_1[3],
                                                       "getAttributeDescription");
                                    param_1[0x1c] = lVar4;
                                    if (lVar4 != 0) {
                                      lVar4 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                                                        ((longlong *)param_1[3],
                                                         "getAttributeDescriptionEnumItem");
                                      param_1[0x1d] = lVar4;
                                      if (lVar4 != 0) {
                                        *(undefined1 *)(param_1 + 0x1e) = 1;
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
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x1e) != '\0') {
      cVar2 = (*(code *)param_1[0xc])(FUN_1436eb440);
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x1e) = 0;
      }
      if (*(char *)(param_1 + 0x1e) != '\0') goto LAB_1436ea84e;
    }
    FUN_1436eb0a0(param_1);
    FUN_1437134a0(local_2b8,local_208,0x200);
    uVar5 = Electra::FHTTPResourceRequest::URL(local_2b8,local_298);
    Electra::FHTTPResourceRequest::URL(uVar5," is not a valid DLL.");
    FUN_143732520(0xabba9734,local_208,"Serialize\\Format\\Compat\\hkCompatFormats.cpp",0xfd);
    FUN_143713520(local_2b8);
  }
LAB_1436ea84e:
  local_290 = 0;
  if (-1 < (int)local_28c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_298,1,local_28c & 0x3fffffff);
  }
  return param_1;
}



// FUNCTION 1436ea8a0 FUN_1436ea8a0 body=148 status=ok
// SIG undefined FUN_1436ea8a0(void)

void FUN_1436ea8a0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar3 = (int)param_1[1] + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3 * 0x10 + *param_1;
    do {
      FUN_143716650(lVar2);
      lVar2 = lVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x10,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 1436ea940 FUN_1436ea940 body=157 status=ok
// SIG undefined FUN_1436ea940(void)

void FUN_1436ea940(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0x10;
    do {
      FUN_143716650(lVar3);
      lVar3 = lVar3 + -0x10;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 8),0x10,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  FUN_143716650(param_1);
  return;
}



// FUNCTION 1436ea9e0 FUN_1436ea9e0 body=936 status=ok
// SIG undefined FUN_1436ea9e0(void)

void FUN_1436ea9e0(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  *param_1 = hctClothSetupClothData20151Options::vftable;
  uVar4 = uVar2;
  uVar5 = uVar2;
  if (0 < *(int *)(param_1 + 6)) {
    do {
      FUN_14370c150(*(undefined8 *)(uVar5 + param_1[5]));
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 6));
  }
  *(undefined4 *)(param_1 + 6) = 0;
  uVar4 = uVar2;
  uVar5 = uVar2;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_14370c150(*(undefined8 *)(uVar5 + param_1[7]));
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  uVar4 = uVar2;
  uVar5 = uVar2;
  if (0 < *(int *)(param_1 + 10)) {
    do {
      FUN_14370c150(*(undefined8 *)(uVar5 + param_1[9]));
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 10));
  }
  *(undefined4 *)(param_1 + 10) = 0;
  uVar4 = uVar2;
  uVar5 = uVar2;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      FUN_14370c150(*(undefined8 *)(param_1[0xb] + uVar5));
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar4 = uVar2;
  uVar5 = uVar2;
  if (0 < *(int *)(param_1 + 0xe)) {
    do {
      FUN_14370c150(*(undefined8 *)(param_1[0xd] + uVar5));
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 0xe));
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  uVar4 = uVar2;
  uVar5 = uVar2;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      FUN_14370c150(*(undefined8 *)(param_1[0xf] + uVar5));
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar4 = uVar2;
  uVar5 = uVar2;
  if (0 < *(int *)(param_1 + 0x12)) {
    do {
      FUN_14370c150(*(undefined8 *)(param_1[0x11] + uVar5));
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 0x12));
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  uVar4 = uVar2;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      FUN_14370c150(*(undefined8 *)(param_1[0x13] + uVar4));
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
      uVar4 = uVar4 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xa4)) {
    FUN_143702e10(uVar1,param_1[0x13],8,*(uint *)((longlong)param_1 + 0xa4) & 0x3fffffff);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x94)) {
    FUN_143702e10(uVar1,param_1[0x11],8,*(uint *)((longlong)param_1 + 0x94) & 0x3fffffff);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x84)) {
    FUN_143702e10(uVar1,param_1[0xf],8,*(uint *)((longlong)param_1 + 0x84) & 0x3fffffff);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x74)) {
    FUN_143702e10(uVar1,param_1[0xd],8,*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar1,param_1[0xb],8,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar1,param_1[9],8,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar1,param_1[7],8,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],8,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_143716650(param_1 + 3);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1436ead90 FUN_1436ead90 body=136 status=ok
// SIG undefined FUN_1436ead90(void)

void FUN_1436ead90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkCompatFormats::vftable;
  if ((code *)param_1[0xd] != (code *)0x0) {
    (*(code *)param_1[0xd])();
  }
  FUN_1436ea8a0(param_1 + 8);
  thunk_FUN_143734820(param_1 + 6);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],0x10,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1436eae20 FUN_1436eae20 body=151 status=ok
// SIG undefined FUN_1436eae20(void)

longlong FUN_1436eae20(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1436e5020(param_1 + 0x38);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x58;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 1436eaec0 FUN_1436eaec0 body=139 status=ok
// SIG undefined FUN_1436eaec0(void)

longlong FUN_1436eaec0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1436ea9e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xa8;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
    }
  }
  return param_1;
}



// FUNCTION 1436eaf50 FUN_1436eaf50 body=184 status=ok
// SIG undefined FUN_1436eaf50(void)

longlong FUN_1436eaf50(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437484d0(param_1 + 0x30);
  FUN_143716650(param_1 + 0x20);
  FUN_143716650(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x50;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 1436eb010 FUN_1436eb010 body=139 status=ok
// SIG undefined FUN_1436eb010(void)

longlong FUN_1436eb010(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1436ead90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xf8;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xf8);
    }
  }
  return param_1;
}



// FUNCTION 1436eb0a0 FUN_1436eb0a0 body=53 status=ok
// SIG undefined FUN_1436eb0a0(void)

void FUN_1436eb0a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_14370c720(param_1 + 0x60,0,0x98);
  return;
}



// FUNCTION 1436eb0e0 FUN_1436eb0e0 body=278 status=ok
// SIG undefined FUN_1436eb0e0(void)

undefined8 * FUN_1436eb0e0(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  lVar1 = DAT_146af9ba0;
  DAT_146b7ba30._0_1_ = 1;
  if (*(char *)(DAT_146af9ba0 + 0xf0) == '\0') {
    FUN_1437134a0(local_228,local_208,0x200);
    Electra::FHTTPResourceRequest::URL
              (local_228,
               "File with format \'BinaryPackfile2014\' could not be loaded, a valid hkCompatFormats.dll was not found"
              );
    FUN_143732520(0xabba9736,local_208,"Serialize\\Format\\Compat\\hkCompatFormats.cpp",0x15c);
    FUN_143713520(local_228);
    *param_1 = 0;
  }
  else {
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    puVar3 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar2 + 0x58),0x58);
    if (puVar3 == (undefined8 *)0x0) {
      *param_1 = 0;
    }
    else {
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0x1ffff;
      *puVar3 = hkCompatFormats::ReadFormat::vftable;
      puVar3[3] = *(undefined8 *)(lVar1 + 0x70);
      puVar3[4] = *(undefined8 *)(lVar1 + 0x78);
      FUN_1436e4cf0(puVar3 + 7);
      *param_1 = puVar3;
    }
  }
  return param_1;
}



// FUNCTION 1436eb200 FUN_1436eb200 body=278 status=ok
// SIG undefined FUN_1436eb200(void)

undefined8 * FUN_1436eb200(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  lVar1 = DAT_146af9ba0;
  DAT_146b7ba90._0_1_ = 1;
  if (*(char *)(DAT_146af9ba0 + 0xf0) == '\0') {
    FUN_1437134a0(local_228,local_208,0x200);
    Electra::FHTTPResourceRequest::URL
              (local_228,
               "File with format \'XmlPackfile2010\' could not be loaded, a valid hkCompatFormats.dll was not found"
              );
    FUN_143732520(0xabba9736,local_208,"Serialize\\Format\\Compat\\hkCompatFormats.cpp",0x15e);
    FUN_143713520(local_228);
    *param_1 = 0;
  }
  else {
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    puVar3 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar2 + 0x58),0x58);
    if (puVar3 == (undefined8 *)0x0) {
      *param_1 = 0;
    }
    else {
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0x1ffff;
      *puVar3 = hkCompatFormats::ReadFormat::vftable;
      puVar3[3] = *(undefined8 *)(lVar1 + 0x70);
      puVar3[4] = *(undefined8 *)(lVar1 + 0x78);
      FUN_1436e4cf0(puVar3 + 7);
      *param_1 = puVar3;
    }
  }
  return param_1;
}



// FUNCTION 1436eb320 FUN_1436eb320 body=278 status=ok
// SIG undefined FUN_1436eb320(void)

undefined8 * FUN_1436eb320(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  lVar1 = DAT_146af9ba0;
  DAT_146b7ba60._0_1_ = 1;
  if (*(char *)(DAT_146af9ba0 + 0xf0) == '\0') {
    FUN_1437134a0(local_228,local_208,0x200);
    Electra::FHTTPResourceRequest::URL
              (local_228,
               "File with format \'XmlTagfile2014\' could not be loaded, a valid hkCompatFormats.dll was not found"
              );
    FUN_143732520(0xabba9736,local_208,"Serialize\\Format\\Compat\\hkCompatFormats.cpp",0x15d);
    FUN_143713520(local_228);
    *param_1 = 0;
  }
  else {
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    puVar3 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar2 + 0x58),0x58);
    if (puVar3 == (undefined8 *)0x0) {
      *param_1 = 0;
    }
    else {
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0x1ffff;
      *puVar3 = hkCompatFormats::ReadFormat::vftable;
      puVar3[3] = *(undefined8 *)(lVar1 + 0x70);
      puVar3[4] = *(undefined8 *)(lVar1 + 0x78);
      FUN_1436e4cf0(puVar3 + 7);
      *param_1 = puVar3;
    }
  }
  return param_1;
}



// FUNCTION 1436eb440 FUN_1436eb440 body=78 status=ok
// SIG undefined FUN_1436eb440(void)

void FUN_1436eb440(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == 1) {
    uVar1 = 1;
  }
  else if (param_1 == 2) {
    uVar1 = 2;
  }
  (**(code **)(*DAT_146b81f68 + 0x18))(DAT_146b81f68,uVar1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 1436eb490 FUN_1436eb490 body=185 status=ok
// SIG undefined FUN_1436eb490(void)

undefined8 * FUN_1436eb490(longlong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_res20;
  undefined8 local_18 [2];
  
  lVar2 = FUN_1437346f0(param_3);
  if (lVar2 == 0) {
    *param_2 = 0;
    return param_2;
  }
  local_res20 = 0;
  (**(code **)(*param_1 + 0x20))(param_1,local_18,*param_3,lVar2,&local_res20);
  uVar1 = *param_3;
  if (uVar1 + local_res20 <= param_3[1]) {
    *param_2 = local_18[0];
    *param_3 = uVar1 + local_res20;
    return param_2;
  }
  hkIo::ReadBuffer::implSkip(param_3);
  *param_2 = local_18[0];
  return param_2;
}



// FUNCTION 1436eb550 FUN_1436eb550 body=306 status=ok
// SIG undefined FUN_1436eb550(void)

undefined8 *
FUN_1436eb550(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4,longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_res8 [2];
  int local_res20 [2];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258 [2];
  undefined1 local_248 [64];
  undefined1 local_208 [512];
  
  local_res20[0] = 0;
  local_268 = 0;
  local_260 = 0;
  local_res8[0] = param_4;
  lVar1 = (**(code **)(param_1 + 0x18))(param_3,local_res8,local_res20,&local_268,&local_260);
  if (lVar1 == 0) {
    FUN_1437134a0(local_248,local_208,0x200);
    uVar2 = Electra::FHTTPResourceRequest::URL(local_248,"File could not be loaded: ");
    Electra::FHTTPResourceRequest::URL(uVar2,local_260);
    FUN_143732520(0xabba9735,local_208,"Serialize\\Format\\Compat\\hkCompatFormats.cpp",0x140);
    FUN_143713520(local_248);
    (**(code **)(param_1 + 0x20))(local_268);
    *param_2 = 0;
  }
  else {
    FUN_143733ca0(local_248,lVar1,(longlong)local_res8[0]);
    (**(code **)(*(longlong *)(param_1 + 0x38) + 0x18))(param_1 + 0x38,local_258,local_248);
    (**(code **)(param_1 + 0x20))(local_268);
    if (param_5 != (longlong *)0x0) {
      *param_5 = (longlong)local_res20[0];
    }
    *param_2 = local_258[0];
    FUN_143733ce0(local_248);
  }
  return param_2;
}



// FUNCTION 1436eb690 FUN_1436eb690 body=120 status=ok
// SIG undefined FUN_1436eb690(void)

longlong FUN_1436eb690(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 1436eb720 FUN_1436eb720 body=53 status=ok
// SIG undefined FUN_1436eb720(void)

void FUN_1436eb720(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_1436eded0(local_28,&local_28,&local_38,0);
  return;
}



// FUNCTION 1436eb770 FUN_1436eb770 body=53 status=ok
// SIG undefined FUN_1436eb770(void)

void FUN_1436eb770(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_1436ee070(local_28,&local_28,&local_38,0);
  return;
}



// FUNCTION 1436eb7c0 FUN_1436eb7c0 body=53 status=ok
// SIG undefined FUN_1436eb7c0(void)

void FUN_1436eb7c0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_1436ee210(local_28,&local_28,&local_38,1);
  return;
}



// FUNCTION 1436eb800 FUN_1436eb800 body=56 status=ok
// SIG undefined FUN_1436eb800(void)

void FUN_1436eb800(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_1436f2940(local_28,&local_28,&local_38,1);
  return;
}



// FUNCTION 1436eb850 FUN_1436eb850 body=56 status=ok
// SIG undefined FUN_1436eb850(void)

void FUN_1436eb850(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_1436f2430(local_28,&local_28,&local_38,1);
  return;
}



// FUNCTION 1436eb8d0 FUN_1436eb8d0 body=53 status=ok
// SIG undefined FUN_1436eb8d0(void)

void FUN_1436eb8d0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_1436f2940(local_28,&local_28,&local_38,0);
  return;
}



// FUNCTION 1436eb920 FUN_1436eb920 body=53 status=ok
// SIG undefined FUN_1436eb920(void)

void FUN_1436eb920(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_1436f2430(local_28,&local_28,&local_38,0);
  return;
}



// FUNCTION 1436eb970 FUN_1436eb970 body=63 status=ok
// SIG undefined FUN_1436eb970(void)

void FUN_1436eb970(undefined8 param_1,undefined8 param_2)

{
  undefined *local_18;
  undefined *puStack_10;
  
  local_18 = &DAT_145b73f70;
  puStack_10 = &DAT_145b74130;
  FUN_1436f02a0(param_2,param_1,&local_18);
  return;
}



// FUNCTION 1436eb9b0 FUN_1436eb9b0 body=233 status=ok
// SIG undefined FUN_1436eb9b0(void)

void FUN_1436eb9b0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *local_1e8;
  undefined *puStack_1e0;
  undefined8 local_1d8;
  uint uStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  longlong local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  uint local_194;
  undefined1 local_190 [392];
  
  local_1c8 = param_1[2];
  local_1a0 = local_190;
  local_1a8 = param_1[1] - *param_1;
  lStack_1c0 = local_1a8 + local_1c8;
  uStack_1d0 = uStack_1d0 & 0xffffff00;
  local_1d8._0_4_ = (undefined4)local_1c8;
  local_1d8._4_4_ = (undefined4)((ulonglong)local_1c8 >> 0x20);
  local_198 = 0;
  local_194 = 0x80000010;
  local_1e8 = &DAT_145b73f70;
  puStack_1e0 = &DAT_145b74130;
  local_1b8 = (undefined4)local_1d8;
  uStack_1b4 = local_1d8._4_4_;
  uStack_1b0 = uStack_1d0;
  uVar1 = (undefined4)local_1d8;
  local_1d8 = local_1c8;
  FUN_1436eff10(&local_1c8,uVar1,&local_1e8);
  *param_1 = param_1[1];
  uVar2 = FUN_143703a50();
  local_198 = 0;
  if (-1 < (int)local_194) {
    FUN_143702e10(uVar2,local_1a0,0x18,local_194 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1436ebaa0 FUN_1436ebaa0 body=267 status=ok
// SIG undefined FUN_1436ebaa0(void)

void FUN_1436ebaa0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined1 uStack_1e0;
  uint7 uStack_1df;
  undefined *local_1d8;
  undefined *puStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  uint local_194;
  undefined1 local_190 [392];
  
  local_1c8 = param_2[2];
  local_1a0 = local_190;
  local_1a8 = param_2[1] - *param_2;
  lStack_1c0 = local_1a8 + local_1c8;
  uStack_1e0 = 0;
  lStack_1b0 = (ulonglong)uStack_1df << 8;
  uStack_1f0 = *param_3;
  local_1e8 = param_3[1];
  local_198 = 0;
  local_194 = 0x80000010;
  local_1d8 = &DAT_145b73f70;
  puStack_1d0 = &DAT_145b74130;
  local_1f8 = param_1;
  local_1b8 = local_1c8;
  FUN_1436efb40(&local_1c8,&local_1f8,&local_1d8);
  *param_2 = param_2[1];
  uVar1 = FUN_143703a50();
  local_198 = 0;
  if (-1 < (int)local_194) {
    FUN_143702e10(uVar1,local_1a0,0x18,local_194 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1436ebbb0 FUN_1436ebbb0 body=63 status=ok
// SIG undefined FUN_1436ebbb0(void)

void FUN_1436ebbb0(undefined8 param_1,undefined8 param_2)

{
  undefined *local_18;
  undefined **ppuStack_10;
  
  local_18 = &DAT_145b74130;
  ppuStack_10 = &PTR_FUN_145b74170;
  FUN_1436f02a0(param_2,param_1,&local_18);
  return;
}



// FUNCTION 1436ebbf0 FUN_1436ebbf0 body=233 status=ok
// SIG undefined FUN_1436ebbf0(void)

void FUN_1436ebbf0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *local_1e8;
  undefined **ppuStack_1e0;
  undefined8 local_1d8;
  uint uStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  longlong local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  uint local_194;
  undefined1 local_190 [392];
  
  local_1c8 = param_1[2];
  local_1a0 = local_190;
  local_1a8 = param_1[1] - *param_1;
  lStack_1c0 = local_1a8 + local_1c8;
  uStack_1d0 = uStack_1d0 & 0xffffff00;
  local_1d8._0_4_ = (undefined4)local_1c8;
  local_1d8._4_4_ = (undefined4)((ulonglong)local_1c8 >> 0x20);
  local_198 = 0;
  local_194 = 0x80000010;
  local_1e8 = &DAT_145b74130;
  ppuStack_1e0 = &PTR_FUN_145b74170;
  local_1b8 = (undefined4)local_1d8;
  uStack_1b4 = local_1d8._4_4_;
  uStack_1b0 = uStack_1d0;
  uVar1 = (undefined4)local_1d8;
  local_1d8 = local_1c8;
  FUN_1436eff10(&local_1c8,uVar1,&local_1e8);
  *param_1 = param_1[1];
  uVar2 = FUN_143703a50();
  local_198 = 0;
  if (-1 < (int)local_194) {
    FUN_143702e10(uVar2,local_1a0,0x18,local_194 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1436ebce0 FUN_1436ebce0 body=267 status=ok
// SIG undefined FUN_1436ebce0(void)

void FUN_1436ebce0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined1 uStack_1e0;
  uint7 uStack_1df;
  undefined *local_1d8;
  undefined **ppuStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  uint local_194;
  undefined1 local_190 [392];
  
  local_1c8 = param_2[2];
  local_1a0 = local_190;
  local_1a8 = param_2[1] - *param_2;
  lStack_1c0 = local_1a8 + local_1c8;
  uStack_1e0 = 0;
  lStack_1b0 = (ulonglong)uStack_1df << 8;
  uStack_1f0 = *param_3;
  local_1e8 = param_3[1];
  local_198 = 0;
  local_194 = 0x80000010;
  local_1d8 = &DAT_145b74130;
  ppuStack_1d0 = &PTR_FUN_145b74170;
  local_1f8 = param_1;
  local_1b8 = local_1c8;
  FUN_1436efb40(&local_1c8,&local_1f8,&local_1d8);
  *param_2 = param_2[1];
  uVar1 = FUN_143703a50();
  local_198 = 0;
  if (-1 < (int)local_194) {
    FUN_143702e10(uVar1,local_1a0,0x18,local_194 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1436ebe10 FUN_1436ebe10 body=352 status=ok
// SIG undefined FUN_1436ebe10(void)

void FUN_1436ebe10(int *param_1,ulonglong *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_48 [64];
  
  piVar2 = (int *)param_2[1];
  iVar3 = 0;
  piVar1 = (int *)*param_2 + 1;
  if (piVar2 < piVar1) {
    *param_2 = (ulonglong)piVar2;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
  }
  else {
    iVar3 = *(int *)*param_2;
    *param_2 = (ulonglong)piVar1;
  }
  if ((char)param_2[3] != '\0') {
    *param_1 = -0x7ffbfe00;
LAB_1436ebe4d:
    if (DAT_146b7bb18 == '\0') {
      return;
    }
    FUN_14373a730(local_48,&DAT_146b7bb10,1);
    lVar4 = FUN_14373bbd0(local_48,"Error in input stream.",&DAT_145b909f0,0);
    *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar4 + 0x28) = 0x71e;
    FUN_14373a950(local_48);
    return;
  }
  if (*param_1 < 0) goto LAB_1436ebe4d;
  if (iVar3 == param_1[0x42]) {
    if (piVar2 == (int *)*param_2) {
      return;
    }
    if (DAT_146b7bb18 == '\0') goto LAB_1436ebf64;
    FUN_14373a730(local_48,&DAT_146b7bb10,1);
    lVar4 = FUN_14373bbd0(local_48,"Oversized type sequence section (TSEQ).",&DAT_145b909f0,0);
    *(undefined8 *)(lVar4 + 0x28) = 0x720;
    *(undefined4 *)(lVar4 + 0xc) = 0x6e8537db;
  }
  else {
    if (DAT_146b7bb18 == '\0') goto LAB_1436ebf64;
    FUN_14373a730(local_48,&DAT_146b7bb10,1);
    lVar4 = FUN_14373bbd0(local_48,
                          "Sequence number incorrect. This reader didn\'t read the stream as it was written"
                          ,&DAT_145b909f0,0);
    *(undefined8 *)(lVar4 + 0x28) = 0x71f;
  }
  *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_14373a950(local_48);
LAB_1436ebf64:
  *param_1 = -0x7ffbfe00;
  return;
}



// FUNCTION 1436ebf70 FUN_1436ebf70 body=461 status=ok
// SIG undefined FUN_1436ebf70(void)

void FUN_1436ebf70(int *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int local_res8 [2];
  undefined1 local_48 [64];
  
  iVar3 = 0;
  piVar1 = (int *)*param_2 + 1;
  if ((int *)param_2[1] < piVar1) {
    *param_2 = param_2[1];
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
    local_res8[0] = iVar3;
  }
  else {
    local_res8[0] = *(int *)*param_2;
    *param_2 = (ulonglong)piVar1;
  }
  piVar1 = (int *)*param_2 + 1;
  if ((int *)param_2[1] < piVar1) {
    *param_2 = param_2[1];
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
  }
  else {
    iVar3 = *(int *)*param_2;
    *param_2 = (ulonglong)piVar1;
  }
  if ((char)param_2[3] != '\0') {
    *param_1 = -0x7ffbfe00;
LAB_1436ebfda:
    if (DAT_146b7bb18 == '\0') {
      return;
    }
    FUN_14373a730(local_48,&DAT_146b7bb10,1);
    lVar2 = FUN_14373bbd0(local_48,"Error in input stream.",&DAT_145b909f0,0);
    *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar2 + 0x28) = 0x727;
    FUN_14373a950(local_48);
    return;
  }
  if (*param_1 < 0) goto LAB_1436ebfda;
  if (local_res8[0] == param_1[0x46]) {
    param_1[0x46] = iVar3;
    if (param_2[1] == *param_2) {
      return;
    }
    if (DAT_146b7bb18 == '\0') goto LAB_1436ec121;
    FUN_14373a730(local_48,&DAT_146b7bb10,1);
    lVar2 = FUN_14373bbd0(local_48,"Oversized type rolling hash section (TSHA).",&DAT_145b909f0,0);
    *(undefined8 *)(lVar2 + 0x28) = 0x72a;
    *(undefined4 *)(lVar2 + 0xc) = 0x6e8537db;
  }
  else {
    if (DAT_146b7bb18 == '\0') goto LAB_1436ec121;
    FUN_14373a730(local_48,&DAT_146b7bb10,1);
    lVar2 = FUN_14373bbd0(local_48,
                          "Read format has lost sync: invalid previous type rolling hash (expected 0x{:x8}, got 0x{:x8})."
                          ,&DAT_145b74b48,param_1 + 0x46,local_res8,0);
    *(undefined8 *)(lVar2 + 0x28) = 0x728;
  }
  *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_14373a950(local_48);
LAB_1436ec121:
  *param_1 = -0x7ffbfe00;
  return;
}



// FUNCTION 1436ec140 FUN_1436ec140 body=380 status=ok
// SIG undefined FUN_1436ec140(void)

void FUN_1436ec140(undefined4 *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_48 [64];
  
  if (param_1[0x4c] == 2) {
    if ((param_2[1] - *param_2 & 7) == 0) {
      if (param_2[1] - *param_2 != 0) {
        do {
          uVar4 = 0;
          puVar1 = (undefined8 *)*param_2 + 1;
          if ((undefined8 *)param_2[1] < puVar1) {
            *param_2 = param_2[1];
            *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
          }
          else {
            uVar4 = *(undefined8 *)*param_2;
            *param_2 = (ulonglong)puVar1;
          }
          uVar3 = FUN_143703a50();
          if (param_1[0x4a] == (param_1[0x4b] & 0x3fffffff)) {
            FUN_14370c460(uVar3,param_1 + 0x48,8);
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)param_1[0x4a] * 8) = uVar4;
          param_1[0x4a] = param_1[0x4a] + 1;
        } while (param_2[1] != *param_2);
      }
      return;
    }
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_48,&DAT_146b7bb10,1);
      lVar2 = FUN_14373bbd0(local_48,"Type compendium ID has the wrong size.",&DAT_145b909f0,0);
      *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar2 + 0x28) = 0x730;
      FUN_14373a950(local_48);
      *param_1 = 0x80040200;
      return;
    }
  }
  else if (DAT_146b7bb18 != '\0') {
    FUN_14373a730(local_48,&DAT_146b7bb10,1);
    lVar2 = FUN_14373bbd0(local_48,"Unexpected compendium ID section (TCID).",&DAT_145b909f0,0);
    *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar2 + 0x28) = 0x72f;
    FUN_14373a950(local_48);
  }
  *param_1 = 0x80040200;
  return;
}



// FUNCTION 1436ec2c0 FUN_1436ec2c0 body=854 status=ok
// SIG undefined FUN_1436ec2c0(void)

void FUN_1436ec2c0(int *param_1,ulonglong *param_2,char *param_3)

{
  int iVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  longlong local_res20;
  ulonglong local_68 [3];
  undefined1 local_50 [56];
  
  if (param_1[0x4c] == 1) {
    puVar6 = (ulonglong *)param_2[1];
    puVar2 = (ulonglong *)*param_2;
    local_res20 = (longlong)puVar6 - (longlong)puVar2;
    if (7 < local_res20) {
      uVar7 = 0;
      if (puVar6 < puVar2 + 1) {
        *param_2 = (ulonglong)puVar6;
        *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
        local_68[0] = uVar7;
      }
      else {
        local_68[0] = *puVar2;
        *param_2 = (ulonglong)(puVar2 + 1);
      }
      if ((char)param_2[3] == '\0') {
        if (-1 < *param_1) {
          if (0 < param_1[0x4a]) {
            puVar6 = *(ulonglong **)(param_1 + 0x48);
            uVar8 = uVar7;
            do {
              if (*puVar6 == local_68[0]) {
                if ((int)uVar8 != -1) {
                  if (*param_3 == '\0') {
                    return;
                  }
                  plVar3 = (longlong *)param_2[1];
                  plVar4 = (longlong *)*param_2;
                  if ((longlong)plVar3 - (longlong)plVar4 != 0x10) {
                    if (DAT_146b7bb18 == '\0') goto LAB_1436ec50e;
                    FUN_14373a730(local_50,&DAT_146b7bb10,1);
                    lVar5 = FUN_14373bbd0(local_50,"COMPENDIUM_REFERENCE wrong size",&DAT_145b909f0,
                                          0);
                    *(undefined8 *)(lVar5 + 0x28) = 0x744;
                    goto LAB_1436ec4fa;
                  }
                  if (plVar3 < plVar4 + 2) {
                    *param_2 = (ulonglong)plVar3;
                    *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
                  }
                  else {
                    *param_2 = (ulonglong)(plVar4 + 2);
                  }
                  if ((*plVar4 == 0) && (plVar4[1] == 0)) {
                    lVar5 = *(longlong *)(param_1 + 4);
                    iVar1 = param_1[6];
                    *plVar4 = lVar5;
                    plVar4[1] = lVar5 + (longlong)iVar1 * 8;
                    return;
                  }
                  if (DAT_146b7bb18 == '\0') goto LAB_1436ec50e;
                  FUN_14373a730(local_50,&DAT_146b7bb10,1);
                  lVar5 = FUN_14373bbd0(local_50,"Buffer already inplace loaded",&DAT_145b909f0,0);
                  *(undefined8 *)(lVar5 + 0x28) = 0x749;
                  goto LAB_1436ec4fa;
                }
                break;
              }
              uVar8 = (ulonglong)((int)uVar8 + 1);
              uVar7 = uVar7 + 1;
              puVar6 = puVar6 + 1;
            } while ((longlong)uVar7 < (longlong)param_1[0x4a]);
          }
          if (DAT_146b7bb18 != '\0') {
            FUN_14373a730(local_50,&DAT_146b7bb10,1);
            lVar5 = FUN_14373bbd0(local_50,
                                  "Compendium with signature {} needed to load ({} are loaded)",
                                  &DAT_145b74c60,local_68,param_1 + 0x48,0);
            *(undefined8 *)(lVar5 + 0x28) = 0x740;
LAB_1436ec4fa:
            *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            FUN_14373a950(local_50);
          }
LAB_1436ec50e:
          *param_1 = -0x7ffbfe00;
          return;
        }
      }
      else {
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_146b7bb18 == '\0') {
        return;
      }
      FUN_14373a730(local_50,&DAT_146b7bb10,1);
      lVar5 = FUN_14373bbd0(local_50,"Error in input stream.",&DAT_145b909f0,0);
      *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar5 + 0x28) = 0x73e;
      FUN_14373a950(local_50);
      return;
    }
    if (DAT_146b7bb18 != '\0') {
      local_res8 = 8;
      FUN_14373a730(local_50,&DAT_146b7bb10,1);
      lVar5 = FUN_14373bbd0(local_50,"TCRF chunk is the wrong size ({}, expected at least {})",
                            &DAT_145b74c48,&local_res20,&local_res8,0);
      *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar5 + 0x28) = 0x73c;
      FUN_14373a950(local_50);
      *param_1 = -0x7ffbfe00;
      return;
    }
  }
  else if (DAT_146b7bb18 != '\0') {
    FUN_14373a730(local_50,&DAT_146b7bb10,1);
    lVar5 = FUN_14373bbd0(local_50,"Encountered compendium reference, but no compendium loaded",
                          &DAT_145b909f0,0);
    *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar5 + 0x28) = 0x73b;
    FUN_14373a950(local_50);
  }
  *param_1 = -0x7ffbfe00;
  return;
}



// FUNCTION 1436ec620 FUN_1436ec620 body=985 status=ok
// SIG undefined FUN_1436ec620(void)

void FUN_1436ec620(int *param_1,longlong param_2,char *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [56];
  
  if (*param_3 == '\0') {
    iVar4 = FUN_1436f0600(param_2);
    if (*(char *)(param_2 + 0x18) == '\0') {
      if (-1 < *param_1) {
        iVar10 = 0;
        if (iVar4 < 1) {
          return;
        }
        while( true ) {
          iVar5 = FUN_1436f0600(param_2);
          local_res18[0] = FUN_1436f0620(param_2);
          uVar3 = FUN_1436f05e0(param_2);
          uVar9 = (ulonglong)uVar3;
          if (*(char *)(param_2 + 0x18) != '\0') break;
          if (*param_1 < 0) goto LAB_1436ec979;
          cVar2 = FUN_1436f51b0(iVar5,param_1 + 2);
          if (cVar2 != '\0') {
            if (DAT_146b7bb18 != '\0') {
              FUN_14373a730(local_60,&DAT_146b7bb10,1);
              lVar6 = FUN_14373bbd0(local_60,"Invalid context ID (out of bounds) when reading decl",
                                    &DAT_145b909f0,0);
              *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar6 + 0x28) = 0x705;
              FUN_14373a950(local_60);
            }
LAB_1436ec96b:
            *param_1 = -0x7ffbfe00;
            return;
          }
          local_70 = *(undefined8 *)(*(longlong *)(param_1 + 4) + (longlong)iVar5 * 8);
          if (param_1[0x22] <= (int)((uint)uVar9 & 0xffff)) {
            if (DAT_146b7bb18 != '\0') {
              FUN_14373a730(local_60,&DAT_146b7bb10,1);
              lVar6 = FUN_14373bbd0(local_60,"Invalid field name string ID (out of bounds)",
                                    &DAT_145b909f0,0);
              *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar6 + 0x28) = 0x709;
              FUN_14373a950(local_60);
              *param_1 = -0x7ffbfe00;
              return;
            }
            goto LAB_1436ec96b;
          }
          local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (uVar9 & 0xffff) * 8);
          plVar7 = (longlong *)FUN_143714490(local_70,0x4000000);
          if ((plVar7 == (longlong *)0x0) || (*plVar7 == 0)) {
            if (DAT_146b7bb18 != '\0') {
              FUN_14373a730(local_60,&DAT_146b7bb10,1);
              lVar6 = FUN_14373bbd0(local_60,
                                    "Cannot add decl to \'{}\' as it does not have Opt::DECLS",
                                    &DAT_145b749c8,&local_70,0);
              *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar6 + 0x28) = 0x70e;
              FUN_14373a950(local_60);
              *param_1 = -0x7ffbfe00;
              return;
            }
            goto LAB_1436ec96b;
          }
          FUN_143714060(&local_res20,*(undefined8 *)(*plVar7 + 8 + (longlong)local_res18[0] * 8));
          cVar2 = FUN_1436f33b0(local_res20);
          if (cVar2 == '\0') {
            if (DAT_146b7bb18 != '\0') {
              FUN_14373a730(local_60,&DAT_146b7bb10,1);
              lVar6 = FUN_14373bbd0(local_60,"Decl {} of \'{}\' (\'{}\') has already been read",
                                    &DAT_145b749d8,local_res18,&local_70,&local_78,0);
              *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar6 + 0x28) = 0x711;
              FUN_14373a950(local_60);
              *param_1 = -0x7ffbfe00;
              return;
            }
            goto LAB_1436ec96b;
          }
          FUN_143714060(&local_68,local_res20);
          uVar1 = local_78;
          puVar8 = (undefined8 *)FUN_1437143d0(local_68,0x80000);
          iVar10 = iVar10 + 1;
          *puVar8 = uVar1;
          if (iVar4 <= iVar10) {
            return;
          }
        }
        *param_1 = -0x7ffbfe00;
LAB_1436ec979:
        if (DAT_146b7bb18 == '\0') {
          return;
        }
        FUN_14373a730(local_60,&DAT_146b7bb10,1);
        lVar6 = FUN_14373bbd0(local_60,"Error in input stream.",&DAT_145b909f0,0);
        *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar6 + 0x28) = 0x702;
        FUN_14373a950(local_60);
        return;
      }
    }
    else {
      *param_1 = -0x7ffbfe00;
    }
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_60,&DAT_146b7bb10,1);
      lVar6 = FUN_14373bbd0(local_60,"Error in input stream.",&DAT_145b909f0,0);
      *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x28) = 0x6fc;
      FUN_14373a950(local_60);
    }
  }
  return;
}



// FUNCTION 1436eca00 FUN_1436eca00 body=191 status=ok
// SIG undefined FUN_1436eca00(void)

void FUN_1436eca00(undefined8 param_1,undefined4 *param_2,char *param_3)

{
  undefined1 local_res18 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined1 local_30 [40];
  
  if (*param_3 != '\0') {
    local_38 = *(longlong *)(param_3 + 8);
    if (local_38 == 0) {
      hkReflect::Detail::LockedDerivedDataCache::LockedDerivedDataCache(local_res18);
      local_58 = *param_2;
      uStack_54 = param_2[1];
      uStack_50 = param_2[2];
      uStack_4c = param_2[3];
      local_48 = param_2[4];
      uStack_44 = param_2[5];
      uStack_40 = param_2[6];
      uStack_3c = param_2[7];
      FUN_1436ef7d0(param_1,&local_58,local_res18);
      hkReflect::Detail::LockedDerivedDataCache::~LockedDerivedDataCache(local_res18);
      return;
    }
    FUN_14374b170(local_30,0xffffffffffffffff);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    FUN_1436ef420(param_1,&local_58,&local_38);
    FUN_14374b1b0(local_30);
  }
  return;
}



// FUNCTION 1436ecac0 inplacePropertyHashes body=174 status=ok
// SIG undefined inplacePropertyHashes(void)

void hkSerialize::TagfileReadFormat::Impl::inplacePropertyHashes
               (undefined8 param_1,undefined4 *param_2,char *param_3)

{
  undefined1 local_res18 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (*param_3 != '\0') {
    if (*(longlong *)(param_3 + 8) == 0) {
      hkReflect::Detail::LockedDerivedDataCache::LockedDerivedDataCache(local_res18);
      local_48 = *param_2;
      uStack_44 = param_2[1];
      uStack_40 = param_2[2];
      uStack_3c = param_2[3];
      local_38 = param_2[4];
      uStack_34 = param_2[5];
      uStack_30 = param_2[6];
      uStack_2c = param_2[7];
      FUN_1436eedc0(param_1,&local_48,local_res18);
      hkReflect::Detail::LockedDerivedDataCache::~LockedDerivedDataCache(local_res18);
      return;
    }
    FUN_14374b140(local_28);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    FUN_1436ef0f0(param_1,&local_48,local_28);
    FUN_14374b1b0(local_28);
  }
  return;
}



// FUNCTION 1436ecb70 FUN_1436ecb70 body=328 status=ok
// SIG undefined FUN_1436ecb70(void)

void FUN_1436ecb70(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 local_48 [64];
  
  iVar7 = (*(uint *)(param_2[2] + 4 + (longlong)(*(int *)(param_2 + 3) + -1) * 0x18) & 0x3fffffff) -
          8;
  uVar4 = FUN_143703a50();
  iVar1 = param_1[10];
  iVar9 = iVar1 + iVar7;
  if ((int)(param_1[0xb] & 0x3fffffff) < iVar9) {
    iVar3 = (param_1[0xb] & 0x3fffffff) * 2;
    if (iVar9 < iVar3) {
      iVar9 = iVar3;
    }
    FUN_14370c310(uVar4,param_1 + 8,iVar9,1);
  }
  param_1[10] = param_1[10] + iVar7;
  lVar8 = (longlong)iVar1 + *(longlong *)(param_1 + 8);
  lVar6 = (longlong)iVar7;
  plVar2 = (longlong *)*param_2;
  if (plVar2[1] - *plVar2 < lVar6) {
    lVar5 = hkIo::ReadBuffer::implRead(plVar2,lVar8,lVar6);
  }
  else {
    FGenericPlatformString::Memcpy(lVar8);
    *plVar2 = *plVar2 + lVar6;
    lVar5 = lVar6;
  }
  if (lVar5 == lVar6) {
    *(longlong *)(param_1 + 0x10) = lVar8;
    *(longlong *)(param_1 + 0x12) = lVar6 + lVar8;
  }
  else {
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_48,&DAT_146b7bb10,1);
      lVar6 = FUN_14373bbd0(local_48,"Short read while reading DATA",&DAT_145b909f0,0);
      *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x28) = 0x643;
      FUN_14373a950(local_48);
    }
    *param_1 = 0x80040200;
  }
  return;
}



// FUNCTION 1436eccc0 handleData body=40 status=ok
// SIG undefined handleData(void)

void hkSerialize::TagfileReadFormat::Impl::handleData(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_2[2];
  lVar2 = param_2[1];
  lVar3 = *param_2;
  *(longlong *)(param_1 + 0x40) = lVar1;
  *(longlong *)(param_1 + 0x48) = (lVar2 - lVar3) + lVar1;
  return;
}



// FUNCTION 1436eccf0 FUN_1436eccf0 body=397 status=ok
// SIG undefined FUN_1436eccf0(void)

void FUN_1436eccf0(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong local_78 [3];
  longlong lStack_60;
  longlong local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  iVar7 = (*(uint *)(param_2[2] + 4 + (longlong)(*(int *)(param_2 + 3) + -1) * 0x18) & 0x3fffffff) -
          8;
  uVar4 = FUN_143703a50();
  iVar1 = param_1[0xe];
  iVar9 = iVar1 + iVar7;
  if ((int)(param_1[0xf] & 0x3fffffff) < iVar9) {
    iVar3 = (param_1[0xf] & 0x3fffffff) * 2;
    if (iVar9 < iVar3) {
      iVar9 = iVar3;
    }
    FUN_14370c310(uVar4,param_1 + 0xc,iVar9,1);
  }
  param_1[0xe] = param_1[0xe] + iVar7;
  lVar8 = (longlong)iVar1 + *(longlong *)(param_1 + 0xc);
  lVar6 = (longlong)iVar7;
  plVar2 = (longlong *)*param_2;
  if (plVar2[1] - *plVar2 < lVar6) {
    lVar5 = hkIo::ReadBuffer::implRead(plVar2,lVar8,lVar6);
  }
  else {
    FGenericPlatformString::Memcpy(lVar8);
    *plVar2 = *plVar2 + lVar6;
    lVar5 = lVar6;
  }
  if (lVar5 == lVar6) {
    local_78[0] = local_78[0] & 0xffffffffffffff00;
    lStack_60 = lVar6 + lVar8;
    local_78[1] = 0;
    uStack_50 = uStack_50 & 0xffffff00;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    local_78[2] = lVar8;
    local_58 = lVar8;
    local_48 = lVar8;
    lStack_40 = lStack_60;
    local_38 = lVar8;
    FUN_1436ece80(param_1,&local_48,local_78);
  }
  else {
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(&local_48,&DAT_146b7bb10,1);
      lVar6 = FUN_14373bbd0(&local_48,"Short read while reading DATA",&DAT_145b909f0,0);
      *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x28) = 0x651;
      FUN_14373a950(&local_48);
    }
    *param_1 = 0x80040200;
  }
  return;
}



// FUNCTION 1436ece80 FUN_1436ece80 body=809 status=ok
// SIG undefined FUN_1436ece80(void)

void FUN_1436ece80(undefined4 *param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [56];
  
  if ((ulonglong)(param_2[1] - *param_2) % 0xc == 0) {
    lVar4 = param_2[2];
    uStack_78 = lVar4 + (longlong)(int)((ulonglong)(param_2[1] - *param_2) / 0xc) * 0xc;
    local_80._0_4_ = (undefined4)lVar4;
    local_80._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    param_1[0x14] = (undefined4)local_80;
    param_1[0x15] = local_80._4_4_;
    *(longlong *)(param_1 + 0x16) = uStack_78;
    if (*param_3 != '\0') {
      local_80 = lVar4;
      hkReflect::Detail::LockedDerivedDataCache::LockedDerivedDataCache(local_res20);
      local_80 = 0;
      uStack_78._0_4_ = 0;
      uStack_78._4_4_ = 0x80000000;
      uVar7 = (longlong)(int)param_1[6] * 8 >> 3;
      uVar5 = FUN_143703a50();
      iVar10 = (int)uVar7;
      if ((int)(uStack_78._4_4_ & 0x3fffffff) < iVar10) {
        uVar3 = (uStack_78._4_4_ & 0x3fffffff) * 2;
        uVar7 = uVar7 & 0xffffffff;
        if (iVar10 < (int)uVar3) {
          uVar7 = (ulonglong)uVar3;
        }
        FUN_14370c310(uVar5,&local_80,uVar7,8);
      }
      puVar9 = (undefined4 *)(local_80 + (longlong)(int)uStack_78 * 8);
      lVar4 = (longlong)(iVar10 - (int)uStack_78);
      if (0 < iVar10 - (int)uStack_78) {
        do {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = 0xfffffffe;
            puVar9[1] = 0;
          }
          puVar9 = puVar9 + 2;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      uStack_78 = CONCAT44(uStack_78._4_4_,iVar10);
      if (iVar10 == 0) {
        if (DAT_146b7bb18 != '\0') {
          FUN_14373a730(local_70,&DAT_146b7bb10,1);
          lVar4 = FUN_14373bbd0(local_70,
                                "No types found. Was this input created for inplace loading? (Save.withTarget())"
                                ,&DAT_145b909f0,0);
          *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar4 + 0x28) = 0x8cf;
          FUN_14373a950(local_70);
        }
        *param_1 = 0x80040200;
        uVar5 = FUN_143703a50();
      }
      else {
        iVar10 = 1;
        if (1 < (int)((*(longlong *)(param_1 + 0x16) - *(longlong *)(param_1 + 0x14)) / 0xc)) {
          lVar4 = 0xc;
          do {
            lVar2 = *(longlong *)(param_1 + 0x14);
            lVar1 = (ulonglong)(*(uint *)(lVar2 + lVar4) & 0xffffff) * 8;
            piVar8 = (int *)(local_80 + lVar1);
            if (*piVar8 < -1) {
              puVar6 = (undefined8 *)
                       hkReflect::Detail::VtableInitializer::preCalc
                                 (local_res20,local_88,
                                  *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 4)));
              *(undefined8 *)piVar8 = *puVar6;
            }
            if (-1 < *piVar8) {
              FUN_14374a3d0(local_res20,local_res10,piVar8,
                            (longlong)*(int *)(lVar2 + 4 + lVar4) + *(longlong *)(param_1 + 0x10),
                            *(undefined4 *)(lVar2 + 8 + lVar4));
            }
            iVar10 = iVar10 + 1;
            lVar4 = lVar4 + 0xc;
          } while (iVar10 < (int)((*(longlong *)(param_1 + 0x16) - *(longlong *)(param_1 + 0x14)) /
                                 0xc));
        }
        uVar5 = FUN_143703a50();
      }
      lVar4 = uStack_78;
      uVar3 = uStack_78._4_4_;
      uStack_78 = (ulonglong)uStack_78._4_4_ << 0x20;
      if (-1 < lVar4) {
        FUN_143702e10(uVar5,local_80,8,uVar3 & 0x3fffffff);
      }
      local_80 = 0;
      uStack_78 = CONCAT44(0x80000000,(int)uStack_78);
      hkReflect::Detail::LockedDerivedDataCache::~LockedDerivedDataCache(local_res20);
    }
    return;
  }
  if (DAT_146b7bb18 != '\0') {
    FUN_14373a730(local_70,&DAT_146b7bb10,1);
    lVar4 = FUN_14373bbd0(local_70,"ITEMS section has the wrong size",&DAT_145b909f0,0);
    *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar4 + 0x28) = 0x873;
    *(undefined4 *)(lVar4 + 0xc) = 0x66e1b3ab;
    FUN_14373a950(local_70);
  }
  *param_1 = 0x80040200;
  return;
}



// FUNCTION 1436ed1b0 FUN_1436ed1b0 body=1311 status=ok
// SIG undefined FUN_1436ed1b0(void)

void FUN_1436ed1b0(undefined4 *param_1,ulonglong *param_2,char *param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  int local_res18 [2];
  uint local_res20 [2];
  ulonglong local_b8;
  int local_b0;
  uint local_ac;
  ulonglong local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [64];
  
  if (*param_3 != '\0') {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    local_b8 = uVar10;
    if ((uVar11 - uVar10 & 3) == 0) {
      local_a8 = uVar11 - uVar10 >> 2;
      uVar1 = uVar10 + (longlong)(int)local_a8 * 4;
      if (uVar11 < uVar1) {
        *param_2 = uVar11;
        *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
      }
      else {
        *param_2 = uVar1;
      }
      local_res18[0] = 0;
      iVar12 = 0;
      if (2 < (int)local_a8) {
        do {
          local_res18[0] = iVar12 + 2;
          uVar15 = *(uint *)(uVar10 + (longlong)(iVar12 + 1) * 4);
          local_res20[0] = uVar15;
          if ((int)local_a8 < (int)(uVar15 + local_res18[0])) {
            if (DAT_146b7bb18 != '\0') {
              FUN_14373a730(local_78,&DAT_146b7bb10,1);
              lVar5 = FUN_14373bbd0(local_78,"Corrupt patch index body at index {}",&DAT_145b74460,
                                    local_res18,0);
              *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar5 + 0x28) = 0x8fe;
              FUN_14373a950(local_78);
            }
LAB_1436ed6c4:
            *param_1 = 0x80040200;
            return;
          }
          uVar7 = *(undefined8 *)
                   (*(longlong *)(param_1 + 4) +
                   (longlong)*(int *)(uVar10 + (longlong)iVar12 * 4) * 8);
          local_90 = uVar7;
          plVar6 = (longlong *)FUN_1437151a0(uVar7);
          iVar12 = 0;
          if (0 < (int)uVar15) {
            do {
              piVar9 = (int *)((longlong)*(int *)(uVar10 + (longlong)(local_res18[0] + iVar12) * 4)
                              + *(longlong *)(param_1 + 0x10));
              if (*piVar9 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6,local_9c,piVar9,uVar7,0,0,0);
              }
              else {
                puVar2 = (uint *)(*(longlong *)(param_1 + 0x14) + (longlong)*piVar9 * 0xc);
                FUN_1436f1a00(param_1 + 2,&local_88,puVar2);
                uVar4 = local_88;
                if ((((*puVar2 & 0xf0000000) == 0x50000000) &&
                    (FUN_1437140c0(&local_98,local_88), 1 < local_98)) &&
                   (*(char *)((ulonglong)(*puVar2 & 0xffffff) + *(longlong *)(param_1 + 100)) ==
                    '\0')) {
                  if (DAT_146b7bb18 != '\0') {
                    local_res20[0] = *puVar2 & 0xffffff;
                    local_a8 = *(ulonglong *)
                                (*(longlong *)(param_1 + 4) + (ulonglong)(*puVar2 & 0xffffff) * 8);
                    FUN_14373a730(local_78,&DAT_146b7bb10,1);
                    lVar5 = FUN_14373bbd0(local_78,
                                          "Found pointer to decl in type ${} ({}) but no property hash has been loaded for the type"
                                          ,&DAT_145b750a0,local_res20,&local_a8,0);
                    *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp"
                    ;
                    *(undefined8 *)(lVar5 + 0x28) = 0x914;
                    FUN_14373a950(local_78);
                    *param_1 = 0x80040200;
                    return;
                  }
                  goto LAB_1436ed6c4;
                }
                uVar7 = local_90;
                (**(code **)(*plVar6 + 0x10))
                          (plVar6,local_a0,piVar9,local_90,uVar4,local_80,puVar2[2]);
                uVar15 = local_res20[0];
              }
              iVar12 = iVar12 + 1;
              uVar10 = local_b8;
            } while (iVar12 < (int)uVar15);
          }
          local_res18[0] = local_res18[0] + uVar15;
          iVar12 = local_res18[0];
        } while (local_res18[0] + 2 < (int)local_a8);
      }
      hkReflect::Detail::LockedDerivedDataCache::LockedDerivedDataCache(local_res20);
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 0x80000000;
      uVar11 = (longlong)(int)param_1[6] * 8 >> 3;
      uVar7 = FUN_143703a50();
      iVar12 = (int)uVar11;
      if ((int)(local_ac & 0x3fffffff) < iVar12) {
        uVar15 = (local_ac & 0x3fffffff) * 2;
        uVar11 = uVar11 & 0xffffffff;
        if (iVar12 < (int)uVar15) {
          uVar11 = (ulonglong)uVar15;
        }
        FUN_14370c310(uVar7,&local_b8,uVar11,8);
      }
      puVar14 = (undefined4 *)(local_b8 + (longlong)local_b0 * 8);
      lVar5 = (longlong)(iVar12 - local_b0);
      if (0 < iVar12 - local_b0) {
        do {
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = 0xfffffffe;
            puVar14[1] = 0;
          }
          puVar14 = puVar14 + 2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      iVar13 = 1;
      local_b0 = iVar12;
      if (1 < (int)((*(longlong *)(param_1 + 0x16) - *(longlong *)(param_1 + 0x14)) / 0xc)) {
        lVar5 = 0xc;
        do {
          lVar3 = *(longlong *)(param_1 + 0x14);
          uVar11 = (ulonglong)(*(uint *)(lVar3 + lVar5) & 0xffffff);
          piVar9 = (int *)(local_b8 + uVar11 * 8);
          if (*(int *)(local_b8 + uVar11 * 8) < -1) {
            puVar8 = (undefined8 *)
                     FUN_14374a870(local_res20,&local_a8,
                                   *(undefined8 *)(*(longlong *)(param_1 + 4) + uVar11 * 8));
            *(undefined8 *)piVar9 = *puVar8;
          }
          if (-1 < *piVar9) {
            FUN_14374a380(local_res20,local_res18,piVar9,
                          (longlong)*(int *)(lVar3 + 4 + lVar5) + *(longlong *)(param_1 + 0x10),
                          *(undefined8 *)(*(longlong *)(param_1 + 4) + uVar11 * 8),
                          *(undefined4 *)(lVar3 + 8 + lVar5));
          }
          iVar13 = iVar13 + 1;
          lVar5 = lVar5 + 0xc;
        } while (iVar13 < (int)((*(longlong *)(param_1 + 0x16) - *(longlong *)(param_1 + 0x14)) /
                               0xc));
      }
      uVar7 = FUN_143703a50();
      local_b0 = 0;
      if (-1 < (int)local_ac) {
        FUN_143702e10(uVar7,local_b8,8,local_ac & 0x3fffffff);
      }
      local_b8 = 0;
      local_ac = 0x80000000;
      hkReflect::Detail::LockedDerivedDataCache::~LockedDerivedDataCache(local_res20);
    }
    else {
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(local_78,&DAT_146b7bb10,1);
        lVar5 = FUN_14373bbd0(local_78,"PATCH_DATA section has the wrong size",&DAT_145b909f0,0);
        *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar5 + 0x28) = 0x8ed;
        *(undefined4 *)(lVar5 + 0xc) = 0x20f2cca4;
        FUN_14373a950(local_78);
      }
      *param_1 = 0x80040200;
    }
  }
  return;
}



// FUNCTION 1436ed6d0 FUN_1436ed6d0 body=415 status=ok
// SIG undefined FUN_1436ed6d0(void)

void FUN_1436ed6d0(undefined4 *param_1,longlong *param_2,char *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 local_48 [64];
  
  if (*param_3 != '\0') {
    if ((param_2[1] - *param_2 & 7U) != 0) {
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(local_48,&DAT_146b7bb10,1);
        lVar2 = FUN_14373bbd0(local_48,"NATIVE_POINTERS section has the wrong size",&DAT_145b909f0,0
                             );
        *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar2 + 0x28) = 0x854;
        *(undefined4 *)(lVar2 + 0xc) = 0x574328eb;
        FUN_14373a950(local_48);
        *param_1 = 0x80040200;
        return;
      }
LAB_1436ed85e:
      *param_1 = 0x80040200;
      return;
    }
    lVar2 = 0;
    uVar6 = (ulonglong)(param_2[1] - *param_2) >> 3;
    uVar5 = (uint)uVar6;
    if (0 < (int)uVar5) {
      do {
        if (*(longlong *)(param_2[2] + lVar2 * 8) != 0) {
          if (DAT_146b7bb18 != '\0') {
            FUN_14373a730(local_48,&DAT_146b7bb10,1);
            lVar2 = FUN_14373bbd0(local_48,"Buffer already inplace loaded",&DAT_145b909f0,0);
            *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar2 + 0x28) = 0x859;
            FUN_14373a950(local_48);
          }
          goto LAB_1436ed85e;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)uVar5);
    }
    *(longlong *)(param_1 + 4) = param_2[2];
    param_1[7] = uVar5 | 0x80000000;
    param_1[6] = uVar5;
    uVar3 = FUN_143703a50();
    if ((int)(param_1[0x67] & 0x3fffffff) < (int)uVar5) {
      uVar1 = (param_1[0x67] & 0x3fffffff) * 2;
      uVar6 = uVar6 & 0xffffffff;
      if ((int)uVar5 < (int)uVar1) {
        uVar6 = (ulonglong)uVar1;
      }
      FUN_14370c310(uVar3,param_1 + 100,uVar6,1);
    }
    iVar4 = uVar5 - param_1[0x66];
    if (0 < iVar4) {
      puVar7 = (undefined1 *)((longlong)(int)param_1[0x66] + *(longlong *)(param_1 + 100));
      for (lVar2 = (longlong)iVar4; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    param_1[0x66] = uVar5;
  }
  return;
}



// FUNCTION 1436ed880 FUN_1436ed880 body=302 status=ok
// SIG undefined FUN_1436ed880(void)

void FUN_1436ed880(ulonglong *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_48 [64];
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)(*param_1 + 8)) {
    *param_1 = (ulonglong)puVar3;
    *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
  }
  else {
    *param_1 = *param_1 + 8;
  }
  puVar1 = (undefined8 *)*param_1;
  if ((longlong)puVar3 - (longlong)puVar1 == 0x10) {
    if (puVar3 < puVar1 + 2) {
      *param_1 = (ulonglong)puVar3;
      *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
    }
    else {
      *param_1 = (ulonglong)(puVar1 + 2);
    }
    lVar2 = 2;
    puVar3 = puVar1;
    do {
      *(undefined8 *)((longlong)param_2 + (8 - (longlong)puVar1) + (longlong)puVar3) = *puVar3;
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*(longlong *)(param_2 + 2) != *(longlong *)(param_2 + 4)) {
      return;
    }
    if (DAT_146b7bb18 < 2) goto LAB_1436ed9a2;
    FUN_14373a730(local_48,&DAT_146b7bb10,2);
    lVar2 = FUN_14373bbd0(local_48,
                          "COMPENDIUM_REFERENCE was not initialized. Was this buffer inplace loaded?"
                          ,&DAT_145b909f0,0);
    *(undefined8 *)(lVar2 + 0x28) = 0x950;
  }
  else {
    if (DAT_146b7bb18 < 2) goto LAB_1436ed9a2;
    FUN_14373a730(local_48,&DAT_146b7bb10,2);
    lVar2 = FUN_14373bbd0(local_48,"Invalid COMPENDIUM_REFERENCE",&DAT_145b909f0,0);
    *(undefined8 *)(lVar2 + 0x28) = 0x948;
  }
  *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_14373a950(local_48);
LAB_1436ed9a2:
  *param_2 = 0x80040200;
  return;
}



// FUNCTION 1436ed9b0 unloadNativePointers body=34 status=ok
// SIG undefined unloadNativePointers(void)

void hkSerialize::TagfileReadFormat::Impl::unloadNativePointers(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  return;
}



// FUNCTION 1436ed9e0 FUN_1436ed9e0 body=157 status=ok
// SIG undefined FUN_1436ed9e0(void)

void FUN_1436ed9e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(int)((*(longlong *)(param_1 + 8) - (longlong)*(uint **)(param_1 + 0x10)) / 0xc)
  ;
  if (1 < lVar3) {
    lVar3 = lVar3 + -1;
    puVar2 = *(uint **)(param_1 + 0x10);
    do {
      uVar1 = puVar2[3];
      if ((uVar1 & 0xf0000000) == 0x10000000) {
        FUN_143749de0((ulonglong)puVar2[4] + *(longlong *)(param_2 + 0x18),
                      *(undefined8 *)
                       (*(longlong *)(param_2 + 8) + (ulonglong)(uVar1 & 0xffffff) * 8),1);
      }
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1436eda80 FUN_1436eda80 body=363 status=ok
// SIG undefined FUN_1436eda80(void)

void FUN_1436eda80(int *param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char cStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  char cStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  
  local_68 = 0;
  cStack_60 = '\0';
  local_78 = 0;
  uStack_70 = 0;
  iVar2 = FUN_1436f35e0(&local_78,param_2,param_1 + 0x30);
  cVar1 = cStack_60;
  if (iVar2 < 0) {
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(&local_58,&DAT_146b7bb10,1);
      lVar3 = FUN_14373bbd0(&local_58,"Failed to read string section",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x3f9;
      FUN_14373a950(&local_58);
    }
    *param_1 = -0x7ffbfe00;
    return;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  uStack_50 = (undefined4)uStack_70;
  uStack_4c = uStack_70._4_4_;
  local_48 = (undefined1)local_68;
  uStack_47 = local_68._1_1_;
  uStack_46 = local_68._2_1_;
  uStack_45 = local_68._3_1_;
  uStack_44 = local_68._4_1_;
  uStack_43 = local_68._5_1_;
  uStack_42 = local_68._6_1_;
  uStack_41 = local_68._7_1_;
  cStack_40 = cStack_60;
  uStack_3f = uStack_5f;
  uStack_3e = uStack_5e;
  uStack_3d = uStack_5d;
  uStack_3c = uStack_5c;
  uStack_3b = uStack_5b;
  uStack_3a = uStack_5a;
  uStack_39 = uStack_59;
  FUN_1436f3770(param_1,&local_58,param_1 + 0x1c,param_3);
  if (cVar1 == '\0') {
    if (-1 < *param_1) {
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_146b7bb18 != '\0') {
    FUN_14373a730(&local_58,&DAT_146b7bb10,1);
    lVar3 = FUN_14373bbd0(&local_58,"Error in input stream.",&DAT_145b909f0,0);
    *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0x3fb;
    FUN_14373a950(&local_58);
  }
  return;
}



// FUNCTION 1436edbf0 FUN_1436edbf0 body=366 status=ok
// SIG undefined FUN_1436edbf0(void)

void FUN_1436edbf0(int *param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char cStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  char cStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  
  local_68 = 0;
  cStack_60 = '\0';
  local_78 = 0;
  uStack_70 = 0;
  iVar2 = FUN_1436f35e0(&local_78,param_2,param_1 + 0x30);
  cVar1 = cStack_60;
  if (iVar2 < 0) {
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(&local_58,&DAT_146b7bb10,1);
      lVar3 = FUN_14373bbd0(&local_58,"Failed to read string section",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x3f9;
      FUN_14373a950(&local_58);
    }
    *param_1 = -0x7ffbfe00;
    return;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  uStack_50 = (undefined4)uStack_70;
  uStack_4c = uStack_70._4_4_;
  local_48 = (undefined1)local_68;
  uStack_47 = local_68._1_1_;
  uStack_46 = local_68._2_1_;
  uStack_45 = local_68._3_1_;
  uStack_44 = local_68._4_1_;
  uStack_43 = local_68._5_1_;
  uStack_42 = local_68._6_1_;
  uStack_41 = local_68._7_1_;
  cStack_40 = cStack_60;
  uStack_3f = uStack_5f;
  uStack_3e = uStack_5e;
  uStack_3d = uStack_5d;
  uStack_3c = uStack_5c;
  uStack_3b = uStack_5b;
  uStack_3a = uStack_5a;
  uStack_39 = uStack_59;
  FUN_1436f3770(param_1,&local_58,param_1 + 0x20,param_3);
  if (cVar1 == '\0') {
    if (-1 < *param_1) {
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_146b7bb18 != '\0') {
    FUN_14373a730(&local_58,&DAT_146b7bb10,1);
    lVar3 = FUN_14373bbd0(&local_58,"Error in input stream.",&DAT_145b909f0,0);
    *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0x3fb;
    FUN_14373a950(&local_58);
  }
  return;
}



// FUNCTION 1436edd60 FUN_1436edd60 body=366 status=ok
// SIG undefined FUN_1436edd60(void)

void FUN_1436edd60(int *param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char cStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  char cStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  
  local_68 = 0;
  cStack_60 = '\0';
  local_78 = 0;
  uStack_70 = 0;
  iVar2 = FUN_1436f35e0(&local_78,param_2,param_1 + 0x30);
  cVar1 = cStack_60;
  if (iVar2 < 0) {
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(&local_58,&DAT_146b7bb10,1);
      lVar3 = FUN_14373bbd0(&local_58,"Failed to read string section",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x3f9;
      FUN_14373a950(&local_58);
    }
    *param_1 = -0x7ffbfe00;
    return;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  uStack_50 = (undefined4)uStack_70;
  uStack_4c = uStack_70._4_4_;
  local_48 = (undefined1)local_68;
  uStack_47 = local_68._1_1_;
  uStack_46 = local_68._2_1_;
  uStack_45 = local_68._3_1_;
  uStack_44 = local_68._4_1_;
  uStack_43 = local_68._5_1_;
  uStack_42 = local_68._6_1_;
  uStack_41 = local_68._7_1_;
  cStack_40 = cStack_60;
  uStack_3f = uStack_5f;
  uStack_3e = uStack_5e;
  uStack_3d = uStack_5d;
  uStack_3c = uStack_5c;
  uStack_3b = uStack_5b;
  uStack_3a = uStack_5a;
  uStack_39 = uStack_59;
  FUN_1436f3770(param_1,&local_58,param_1 + 0x24,param_3);
  if (cVar1 == '\0') {
    if (-1 < *param_1) {
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_146b7bb18 != '\0') {
    FUN_14373a730(&local_58,&DAT_146b7bb10,1);
    lVar3 = FUN_14373bbd0(&local_58,"Error in input stream.",&DAT_145b909f0,0);
    *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0x3fb;
    FUN_14373a950(&local_58);
  }
  return;
}



// FUNCTION 1436eded0 FUN_1436eded0 body=404 status=ok
// SIG undefined FUN_1436eded0(void)

void FUN_1436eded0(int *param_1,undefined8 *param_2,char *param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  local_48 = *(undefined4 *)(param_2 + 2);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_68 = param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  if (*param_3 == '\0') {
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_60 = uStack_60 & 0xffffff00;
    local_58 = *(undefined4 *)param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_3c = uStack_5c;
    iVar2 = FUN_1436f3700(&local_78,&local_58,param_1 + 0x30);
    if (iVar2 < 0) {
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(&local_58,&DAT_146b7bb10,1);
        lVar3 = FUN_14373bbd0(&local_58,"Failed to read string section",&DAT_145b909f0,0);
        *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar3 + 0x28) = 0x416;
        FUN_14373a950(&local_58);
      }
      *param_1 = -0x7ffbfe00;
    }
    else {
      cVar1 = (char)uStack_60;
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = (undefined4)uStack_70;
      uStack_4c = uStack_70._4_4_;
      local_48 = (undefined4)local_68;
      uStack_44 = (undefined4)((ulonglong)local_68 >> 0x20);
      uStack_40 = uStack_60;
      FUN_1436f3770(param_1,&local_58,param_1 + 0x1c,param_4);
      if (cVar1 == '\0') {
        if (-1 < *param_1) {
          return;
        }
      }
      else {
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(&local_58,&DAT_146b7bb10,1);
        lVar3 = FUN_14373bbd0(&local_58,"Error in input stream.",&DAT_145b909f0,0);
        *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar3 + 0x28) = 0x418;
        FUN_14373a950(&local_58);
      }
    }
  }
  else {
    local_78 = *param_2;
    uStack_70 = param_2[1];
    uStack_60 = uStack_40;
    FUN_1436f3770(*(undefined4 *)param_2,&local_78,param_1 + 0x1c);
  }
  return;
}



// FUNCTION 1436ee070 FUN_1436ee070 body=410 status=ok
// SIG undefined FUN_1436ee070(void)

void FUN_1436ee070(int *param_1,undefined8 *param_2,char *param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  local_48 = *(undefined4 *)(param_2 + 2);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_68 = param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  if (*param_3 == '\0') {
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_60 = uStack_60 & 0xffffff00;
    local_58 = *(undefined4 *)param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_3c = uStack_5c;
    iVar2 = FUN_1436f3700(&local_78,&local_58,param_1 + 0x30);
    if (iVar2 < 0) {
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(&local_58,&DAT_146b7bb10,1);
        lVar3 = FUN_14373bbd0(&local_58,"Failed to read string section",&DAT_145b909f0,0);
        *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar3 + 0x28) = 0x416;
        FUN_14373a950(&local_58);
      }
      *param_1 = -0x7ffbfe00;
    }
    else {
      cVar1 = (char)uStack_60;
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = (undefined4)uStack_70;
      uStack_4c = uStack_70._4_4_;
      local_48 = (undefined4)local_68;
      uStack_44 = (undefined4)((ulonglong)local_68 >> 0x20);
      uStack_40 = uStack_60;
      FUN_1436f3770(param_1,&local_58,param_1 + 0x20,param_4);
      if (cVar1 == '\0') {
        if (-1 < *param_1) {
          return;
        }
      }
      else {
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(&local_58,&DAT_146b7bb10,1);
        lVar3 = FUN_14373bbd0(&local_58,"Error in input stream.",&DAT_145b909f0,0);
        *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar3 + 0x28) = 0x418;
        FUN_14373a950(&local_58);
      }
    }
  }
  else {
    local_78 = *param_2;
    uStack_70 = param_2[1];
    uStack_60 = uStack_40;
    FUN_1436f3770(*(undefined4 *)param_2,&local_78,param_1 + 0x20);
  }
  return;
}



// FUNCTION 1436ee210 FUN_1436ee210 body=410 status=ok
// SIG undefined FUN_1436ee210(void)

void FUN_1436ee210(int *param_1,undefined8 *param_2,char *param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  local_48 = *(undefined4 *)(param_2 + 2);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_68 = param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  if (*param_3 == '\0') {
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_60 = uStack_60 & 0xffffff00;
    local_58 = *(undefined4 *)param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_3c = uStack_5c;
    iVar2 = FUN_1436f3700(&local_78,&local_58,param_1 + 0x30);
    if (iVar2 < 0) {
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(&local_58,&DAT_146b7bb10,1);
        lVar3 = FUN_14373bbd0(&local_58,"Failed to read string section",&DAT_145b909f0,0);
        *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar3 + 0x28) = 0x416;
        FUN_14373a950(&local_58);
      }
      *param_1 = -0x7ffbfe00;
    }
    else {
      cVar1 = (char)uStack_60;
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = (undefined4)uStack_70;
      uStack_4c = uStack_70._4_4_;
      local_48 = (undefined4)local_68;
      uStack_44 = (undefined4)((ulonglong)local_68 >> 0x20);
      uStack_40 = uStack_60;
      FUN_1436f3770(param_1,&local_58,param_1 + 0x24,param_4);
      if (cVar1 == '\0') {
        if (-1 < *param_1) {
          return;
        }
      }
      else {
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(&local_58,&DAT_146b7bb10,1);
        lVar3 = FUN_14373bbd0(&local_58,"Error in input stream.",&DAT_145b909f0,0);
        *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar3 + 0x28) = 0x418;
        FUN_14373a950(&local_58);
      }
    }
  }
  else {
    local_78 = *param_2;
    uStack_70 = param_2[1];
    uStack_60 = uStack_40;
    FUN_1436f3770(*(undefined4 *)param_2,&local_78,param_1 + 0x24);
  }
  return;
}



// FUNCTION 1436ee3b0 FUN_1436ee3b0 body=147 status=ok
// SIG undefined FUN_1436ee3b0(void)

void FUN_1436ee3b0(int *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_1436f09c0(&local_38,param_2,param_1,param_3);
  if (-1 < *param_1) {
    local_68[0] = local_68[0] & 0xffffffffffffff00;
    local_68[1] = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_1436eb850(param_1,&local_58,local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  hkIo::ReadBuffer::implSkip(local_18,local_10);
  return;
}



// FUNCTION 1436ee450 FUN_1436ee450 body=147 status=ok
// SIG undefined FUN_1436ee450(void)

void FUN_1436ee450(int *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_1436f09c0(&local_38,param_2,param_1,param_3);
  if (-1 < *param_1) {
    local_68[0] = local_68[0] & 0xffffffffffffff00;
    local_68[1] = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_1436eb920(param_1,&local_58,local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  hkIo::ReadBuffer::implSkip(local_18,local_10);
  return;
}



// FUNCTION 1436ee4f0 FUN_1436ee4f0 body=147 status=ok
// SIG undefined FUN_1436ee4f0(void)

void FUN_1436ee4f0(int *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_1436f09c0(&local_38,param_2,param_1,param_3);
  if (-1 < *param_1) {
    local_68[0] = local_68[0] & 0xffffffffffffff00;
    local_68[1] = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_1436eb800(param_1,&local_58,local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  hkIo::ReadBuffer::implSkip(local_18,local_10);
  return;
}



// FUNCTION 1436ee590 FUN_1436ee590 body=147 status=ok
// SIG undefined FUN_1436ee590(void)

void FUN_1436ee590(int *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_1436f09c0(&local_38,param_2,param_1,param_3);
  if (-1 < *param_1) {
    local_68[0] = local_68[0] & 0xffffffffffffff00;
    local_68[1] = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_1436eb8d0(param_1,&local_58,local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  hkIo::ReadBuffer::implSkip(local_18,local_10);
  return;
}



// FUNCTION 1436ee630 FUN_1436ee630 body=147 status=ok
// SIG undefined FUN_1436ee630(void)

void FUN_1436ee630(int *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_1436f09c0(&local_38,param_2,param_1,param_3);
  if (-1 < *param_1) {
    local_68[0] = local_68[0] & 0xffffffffffffff00;
    local_68[1] = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_1436ec140(param_1,&local_58,local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  hkIo::ReadBuffer::implSkip(local_18,local_10);
  return;
}



// FUNCTION 1436ee6d0 FUN_1436ee6d0 body=147 status=ok
// SIG undefined FUN_1436ee6d0(void)

void FUN_1436ee6d0(int *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_1436f09c0(&local_38,param_2,param_1,param_3);
  if (-1 < *param_1) {
    local_68[0] = local_68[0] & 0xffffffffffffff00;
    local_68[1] = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_1436ec2c0(param_1,&local_58,local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  hkIo::ReadBuffer::implSkip(local_18,local_10);
  return;
}



// FUNCTION 1436ee770 FUN_1436ee770 body=147 status=ok
// SIG undefined FUN_1436ee770(void)

void FUN_1436ee770(int *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_1436f09c0(&local_38,param_2,param_1,param_3);
  if (-1 < *param_1) {
    local_68[0] = local_68[0] & 0xffffffffffffff00;
    local_68[1] = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_1436ec620(param_1,&local_58,local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  hkIo::ReadBuffer::implSkip(local_18,local_10);
  return;
}



// FUNCTION 1436ee810 FUN_1436ee810 body=147 status=ok
// SIG undefined FUN_1436ee810(void)

void FUN_1436ee810(int *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_1436f09c0(&local_38,param_2,param_1,param_3);
  if (-1 < *param_1) {
    local_68[0] = local_68[0] & 0xffffffffffffff00;
    local_68[1] = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_1436ebf70(param_1,&local_58,local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  hkIo::ReadBuffer::implSkip(local_18,local_10);
  return;
}



// FUNCTION 1436ee8b0 FUN_1436ee8b0 body=147 status=ok
// SIG undefined FUN_1436ee8b0(void)

void FUN_1436ee8b0(int *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong *local_18;
  longlong local_10;
  
  FUN_1436f09c0(&local_38,param_2,param_1,param_3);
  if (-1 < *param_1) {
    local_68[0] = local_68[0] & 0xffffffffffffff00;
    local_68[1] = 0;
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    FUN_1436ebe10(param_1,&local_58,local_68);
  }
  if (*local_18 + local_10 <= local_18[1]) {
    *local_18 = *local_18 + local_10;
    return;
  }
  hkIo::ReadBuffer::implSkip(local_18,local_10);
  return;
}



// FUNCTION 1436ee950 FUN_1436ee950 body=35 status=ok
// SIG undefined FUN_1436ee950(void)

void FUN_1436ee950(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = (longlong)param_3;
  if (0 < param_3) {
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)((param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar2 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar2;
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1436ee980 FUN_1436ee980 body=189 status=ok
// SIG undefined FUN_1436ee980(void)

undefined8 FUN_1436ee980(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_48 [64];
  
  uVar1 = FUN_1436f16b0(param_2,0x54414730);
  if ((int)uVar1 == 0x54414730) {
    return uVar1;
  }
  uVar1 = FUN_1436f16b0(param_2,0x54434d30);
  if ((int)uVar1 == 0x54434d30) {
    *(undefined4 *)(param_1 + 0x130) = 2;
    return uVar1;
  }
  if (1 < DAT_146b7bb18) {
    FUN_14373a730(local_48,&DAT_146b7bb10,2);
    lVar2 = FUN_14373bbd0(local_48,"Input does not appear to be a tagfile",&DAT_145b909f0,0);
    *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar2 + 0x28) = 0x627;
    FUN_14373a950(local_48);
  }
  return 0;
}



// FUNCTION 1436eea40 FUN_1436eea40 body=189 status=ok
// SIG undefined FUN_1436eea40(void)

undefined8 FUN_1436eea40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_48 [64];
  
  uVar1 = FUN_1436f1540(param_2,0x54414730);
  if ((int)uVar1 == 0x54414730) {
    return uVar1;
  }
  uVar1 = FUN_1436f1540(param_2,0x54434d30);
  if ((int)uVar1 == 0x54434d30) {
    *(undefined4 *)(param_1 + 0x130) = 2;
    return uVar1;
  }
  if (1 < DAT_146b7bb18) {
    FUN_14373a730(local_48,&DAT_146b7bb10,2);
    lVar2 = FUN_14373bbd0(local_48,"Input does not appear to be a tagfile",&DAT_145b909f0,0);
    *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar2 + 0x28) = 0x627;
    FUN_14373a950(local_48);
  }
  return 0;
}



// FUNCTION 1436eeb00 FUN_1436eeb00 body=119 status=ok
// SIG undefined FUN_1436eeb00(void)

void FUN_1436eeb00(longlong param_1,longlong *param_2,int param_3)

{
  if (*param_2 - param_2[2] ==
      (longlong)
      (int)((*(uint *)(param_2[5] + 4 + (longlong)((int)param_2[6] + -1) * 0x18) & 0x3fffffff) +
           *(int *)(param_2[5] + 8 + (longlong)((int)param_2[6] + -1) * 0x18))) {
    param_2[4] = *(longlong *)(param_2[5] + 0x10 + (longlong)((int)param_2[6] + -1) * 0x18);
    *(int *)(param_2 + 6) = (int)param_2[6] + -1;
  }
  else {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  if (param_3 == 0x54434d30) {
    *(undefined4 *)(param_1 + 0x130) = 1;
  }
  return;
}



// FUNCTION 1436eeb80 FUN_1436eeb80 body=136 status=ok
// SIG undefined FUN_1436eeb80(void)

void FUN_1436eeb80(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  if ((plVar1[5] - plVar1[2]) + *plVar1 ==
      (longlong)
      (int)((*(uint *)(param_2[2] + 4 + (longlong)((int)param_2[3] + -1) * 0x18) & 0x3fffffff) +
           *(int *)(param_2[2] + 8 + (longlong)((int)param_2[3] + -1) * 0x18))) {
    param_2[1] = *(longlong *)(param_2[2] + 0x10 + (longlong)((int)param_2[3] + -1) * 0x18);
    *(int *)(param_2 + 3) = (int)param_2[3] + -1;
  }
  else {
    *(byte *)(plVar1 + 4) = *(byte *)(plVar1 + 4) | 2;
  }
  if (param_3 == 0x54434d30) {
    *(undefined4 *)(param_1 + 0x130) = 1;
  }
  return;
}



// FUNCTION 1436eec10 FUN_1436eec10 body=32 status=ok
// SIG undefined FUN_1436eec10(void)

int * FUN_1436eec10(int param_1,undefined8 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  while( true ) {
    if (piVar1 == (int *)param_2[1]) {
      return (int *)0x0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 8;
  }
  return piVar1;
}



// FUNCTION 1436eec30 FUN_1436eec30 body=334 status=ok
// SIG undefined FUN_1436eec30(void)

uint * FUN_1436eec30(longlong *param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar1 = *param_3;
  uVar8 = iVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  puVar7 = (uint *)(param_1[2] + uVar5 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar5 * 8)) {
    do {
      if (*(int *)((longlong)(int)puVar7[1] * 0x20 + *param_1) == iVar1) {
        *param_2 = puVar7[1];
        goto LAB_1436eed4d;
      }
      lVar4 = param_1[2];
      uVar5 = ((longlong)puVar7 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar7 = (uint *)(lVar4 + uVar5 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar5 * 8));
  }
  uVar2 = *(uint *)(param_1 + 1);
  *puVar7 = uVar8;
  puVar7[1] = uVar2;
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1,0x20);
  }
  lVar4 = (longlong)(int)param_1[1] * 0x20 + *param_1;
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x1c) = 0x80000000;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined4 *)(lVar4 + 0x18) = 0;
  }
  piVar6 = (int *)((longlong)(int)param_1[1] * 0x20 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar6 = *param_3;
  FUN_1436f0fe0(piVar6 + 2,param_4);
  *param_2 = uVar2;
LAB_1436eed4d:
  param_2[1] = (uint)((longlong)puVar7 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 1436eed80 FUN_1436eed80 body=60 status=ok
// SIG undefined FUN_1436eed80(void)

ulonglong FUN_1436eed80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  plVar1 = (longlong *)*param_1;
  uVar2 = 0;
  iVar4 = (int)(param_1[1] - (longlong)plVar1 >> 3);
  if (0 < iVar4) {
    uVar3 = uVar2;
    do {
      if (*plVar1 == *param_2) {
        return uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar2 < (longlong)iVar4);
  }
  return 0xffffffff;
}



// FUNCTION 1436eedc0 FUN_1436eedc0 body=803 status=ok
// SIG undefined FUN_1436eedc0(void)

void FUN_1436eedc0(int *param_1,ulonglong *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  undefined1 local_78 [64];
  
  iVar3 = FUN_1436f0600(param_2);
  if ((char)param_2[3] == '\0') {
    if (-1 < *param_1) {
      iVar6 = 0;
      if (iVar3 < 1) {
        return;
      }
      while( true ) {
        local_res8[0] = FUN_1436f0600(param_2);
        lVar4 = (longlong)local_res8[0];
        piVar1 = (int *)*param_2 + 1;
        if ((int *)param_2[1] < piVar1) {
          *param_2 = param_2[1];
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
          local_res10[0] = 0;
        }
        else {
          local_res10[0] = *(int *)*param_2;
          *param_2 = (ulonglong)piVar1;
        }
        if ((char)param_2[3] != '\0') break;
        if (*param_1 < 0) goto LAB_1436ef075;
        cVar2 = FUN_1436f51b0(local_res8[0],param_1 + 2);
        if (cVar2 != '\0') {
          if (DAT_146b7bb18 != '\0') {
            FUN_14373a730(local_78,&DAT_146b7bb10,1);
            lVar4 = FUN_14373bbd0(local_78,
                                  "Invalid type ID (out of bounds) when reading property hash",
                                  &DAT_145b909f0,0);
            *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar4 + 0x28) = 0x82b;
            FUN_14373a950(local_78);
          }
LAB_1436ef067:
          *param_1 = -0x7ffbfe00;
          return;
        }
        if (*(longlong *)(*(longlong *)(param_1 + 4) + lVar4 * 8) == 0) {
          if (DAT_146b7bb18 != '\0') {
            FUN_14373a730(local_78,&DAT_146b7bb10,1);
            lVar4 = FUN_14373bbd0(local_78,
                                  "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                                  ,&DAT_145b74460,local_res8,0);
            *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar4 + 0x28) = 0x82d;
            FUN_14373a950(local_78);
            *param_1 = -0x7ffbfe00;
            return;
          }
          goto LAB_1436ef067;
        }
        local_res20[0] = FUN_143749350(param_3);
        if (local_res10[0] != local_res20[0]) {
          if (DAT_146b7bb18 != '\0') {
            lVar5 = (longlong)local_res8[0];
            lVar4 = *(longlong *)(param_1 + 0x18);
            FUN_14373a730(local_78,&DAT_146b7bb10,1);
            lVar4 = FUN_14373bbd0(local_78,
                                  "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                                  ,&DAT_145b75320,local_res8,lVar4 + lVar5 * 8,local_res10,
                                  local_res20,0);
            *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar4 + 0x28) = 0x834;
            FUN_14373a950(local_78);
            *param_1 = -0x7ffbfe00;
            return;
          }
          goto LAB_1436ef067;
        }
        iVar6 = iVar6 + 1;
        *(undefined1 *)((longlong)local_res8[0] + *(longlong *)(param_1 + 100)) = 1;
        if (iVar3 <= iVar6) {
          return;
        }
      }
      *param_1 = -0x7ffbfe00;
LAB_1436ef075:
      if (DAT_146b7bb18 == '\0') {
        return;
      }
      FUN_14373a730(local_78,&DAT_146b7bb10,1);
      lVar4 = FUN_14373bbd0(local_78,"Error in input stream.",&DAT_145b909f0,0);
      *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar4 + 0x28) = 0x828;
      FUN_14373a950(local_78);
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_146b7bb18 == '\0') {
    return;
  }
  FUN_14373a730(local_78,&DAT_146b7bb10,1);
  lVar4 = FUN_14373bbd0(local_78,"Error in input stream.",&DAT_145b909f0,0);
  *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
  *(undefined8 *)(lVar4 + 0x28) = 0x820;
  FUN_14373a950(local_78);
  return;
}



// FUNCTION 1436ef0f0 FUN_1436ef0f0 body=803 status=ok
// SIG undefined FUN_1436ef0f0(void)

void FUN_1436ef0f0(int *param_1,ulonglong *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  undefined1 local_78 [64];
  
  iVar3 = FUN_1436f0600(param_2);
  if ((char)param_2[3] == '\0') {
    if (-1 < *param_1) {
      iVar6 = 0;
      if (iVar3 < 1) {
        return;
      }
      while( true ) {
        local_res8[0] = FUN_1436f0600(param_2);
        lVar4 = (longlong)local_res8[0];
        piVar1 = (int *)*param_2 + 1;
        if ((int *)param_2[1] < piVar1) {
          *param_2 = param_2[1];
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
          local_res10[0] = 0;
        }
        else {
          local_res10[0] = *(int *)*param_2;
          *param_2 = (ulonglong)piVar1;
        }
        if ((char)param_2[3] != '\0') break;
        if (*param_1 < 0) goto LAB_1436ef3a5;
        cVar2 = FUN_1436f51b0(local_res8[0],param_1 + 2);
        if (cVar2 != '\0') {
          if (DAT_146b7bb18 != '\0') {
            FUN_14373a730(local_78,&DAT_146b7bb10,1);
            lVar4 = FUN_14373bbd0(local_78,
                                  "Invalid type ID (out of bounds) when reading property hash",
                                  &DAT_145b909f0,0);
            *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar4 + 0x28) = 0x82b;
            FUN_14373a950(local_78);
          }
LAB_1436ef397:
          *param_1 = -0x7ffbfe00;
          return;
        }
        if (*(longlong *)(*(longlong *)(param_1 + 4) + lVar4 * 8) == 0) {
          if (DAT_146b7bb18 != '\0') {
            FUN_14373a730(local_78,&DAT_146b7bb10,1);
            lVar4 = FUN_14373bbd0(local_78,
                                  "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                                  ,&DAT_145b74460,local_res8,0);
            *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar4 + 0x28) = 0x82d;
            FUN_14373a950(local_78);
            *param_1 = -0x7ffbfe00;
            return;
          }
          goto LAB_1436ef397;
        }
        local_res20[0] = USkeletalMesh::FindMorphTarget(param_3);
        if (local_res10[0] != local_res20[0]) {
          if (DAT_146b7bb18 != '\0') {
            lVar5 = (longlong)local_res8[0];
            lVar4 = *(longlong *)(param_1 + 0x18);
            FUN_14373a730(local_78,&DAT_146b7bb10,1);
            lVar4 = FUN_14373bbd0(local_78,
                                  "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                                  ,&DAT_145b75320,local_res8,lVar4 + lVar5 * 8,local_res10,
                                  local_res20,0);
            *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar4 + 0x28) = 0x834;
            FUN_14373a950(local_78);
            *param_1 = -0x7ffbfe00;
            return;
          }
          goto LAB_1436ef397;
        }
        iVar6 = iVar6 + 1;
        *(undefined1 *)((longlong)local_res8[0] + *(longlong *)(param_1 + 100)) = 1;
        if (iVar3 <= iVar6) {
          return;
        }
      }
      *param_1 = -0x7ffbfe00;
LAB_1436ef3a5:
      if (DAT_146b7bb18 == '\0') {
        return;
      }
      FUN_14373a730(local_78,&DAT_146b7bb10,1);
      lVar4 = FUN_14373bbd0(local_78,"Error in input stream.",&DAT_145b909f0,0);
      *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar4 + 0x28) = 0x828;
      FUN_14373a950(local_78);
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_146b7bb18 == '\0') {
    return;
  }
  FUN_14373a730(local_78,&DAT_146b7bb10,1);
  lVar4 = FUN_14373bbd0(local_78,"Error in input stream.",&DAT_145b909f0,0);
  *(char **)(lVar4 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
  *(undefined8 *)(lVar4 + 0x28) = 0x820;
  FUN_14373a950(local_78);
  return;
}



// FUNCTION 1436ef420 FUN_1436ef420 body=936 status=ok
// SIG undefined FUN_1436ef420(void)

void FUN_1436ef420(int *param_1,ulonglong *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 local_res8;
  int local_res10 [2];
  undefined8 *local_res18;
  undefined1 local_78 [64];
  
  local_res18 = param_3;
  iVar3 = FUN_1436f0600(param_2);
  local_res8 = CONCAT44(local_res8._4_4_,iVar3);
  if ((char)param_2[3] == '\0') {
    if (-1 < *param_1) {
      if ((longlong)(param_2[1] - *param_2) / 5 < (longlong)iVar3) {
        if (DAT_146b7bb18 != '\0') {
          FUN_14373a730(local_78,&DAT_146b7bb10,1);
          lVar5 = FUN_14373bbd0(local_78,&DAT_145b752b0,&DAT_145b75258,
                                "numHashes > rb.remaining() / 5",0);
          *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar5 + 0x28) = 0x7f4;
          FUN_14373a950(local_78);
        }
        *param_1 = -0x7ffbfe00;
        return;
      }
      iVar8 = 0;
      if (iVar3 < 1) {
        return;
      }
      while( true ) {
        iVar3 = FUN_1436f0600(param_2);
        piVar1 = (int *)*param_2 + 1;
        if ((int *)param_2[1] < piVar1) {
          *param_2 = param_2[1];
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)*param_2;
          *param_2 = (ulonglong)piVar1;
        }
        local_res10[0] = iVar7;
        if ((char)param_2[3] != '\0') break;
        if (*param_1 < 0) goto LAB_1436ef749;
        cVar2 = FUN_1436f51b0(iVar3,param_1 + 2);
        if (cVar2 != '\0') {
          if (DAT_146b7bb18 != '\0') {
            FUN_14373a730(local_78,&DAT_146b7bb10,1);
            lVar5 = FUN_14373bbd0(local_78,&DAT_145b752b0,&DAT_145b75268,
                                  "typeIdIsNullOrOutOfBounds(tid, m_bundle)",0);
            *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar5 + 0x28) = 0x7fa;
            FUN_14373a950(local_78);
          }
LAB_1436ef73b:
          *param_1 = -0x7ffbfe00;
          return;
        }
        lVar5 = (longlong)iVar3 * 8;
        lVar6 = (**(code **)(*(longlong *)*param_3 + 0x20))
                          ((longlong *)*param_3,
                           *(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x18)));
        if ((lVar6 == 0) || (iVar4 = FUN_14374b760(local_res18 + 1,lVar6), iVar4 != iVar7)) {
          if (DAT_146b7bb18 != '\0') {
            local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 8);
            FUN_14373a730(local_78,&DAT_146b7bb10,1);
            lVar5 = FUN_14373bbd0(local_78,"Type {} with hash {:x} does not match a native type",
                                  &DAT_145b75278,&local_res8,local_res10,0);
            *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar5 + 0x28) = 0x7fe;
            FUN_14373a950(local_78);
            *param_1 = -0x7ffbfe00;
            return;
          }
          goto LAB_1436ef73b;
        }
        iVar8 = iVar8 + 1;
        *(longlong *)(lVar5 + *(longlong *)(param_1 + 4)) = lVar6;
        param_3 = local_res18;
        if ((int)local_res8 <= iVar8) {
          return;
        }
      }
      *param_1 = -0x7ffbfe00;
LAB_1436ef749:
      if (DAT_146b7bb18 == '\0') {
        return;
      }
      FUN_14373a730(local_78,&DAT_146b7bb10,1);
      lVar5 = FUN_14373bbd0(local_78,"Error in input stream.",&DAT_145b909f0,0);
      *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar5 + 0x28) = 0x7f9;
      FUN_14373a950(local_78);
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_146b7bb18 == '\0') {
    return;
  }
  FUN_14373a730(local_78,&DAT_146b7bb10,1);
  lVar5 = FUN_14373bbd0(local_78,"Error in input stream.",&DAT_145b909f0,0);
  *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
  *(undefined8 *)(lVar5 + 0x28) = 0x7f2;
  FUN_14373a950(local_78);
  return;
}



// FUNCTION 1436ef7d0 FUN_1436ef7d0 body=870 status=ok
// SIG undefined FUN_1436ef7d0(void)

void FUN_1436ef7d0(int *param_1,ulonglong *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  undefined8 local_res10;
  undefined1 local_78 [64];
  
  iVar3 = FUN_1436f0600(param_2);
  if ((char)param_2[3] == '\0') {
    if (-1 < *param_1) {
      if ((longlong)(param_2[1] - *param_2) / 5 < (longlong)iVar3) {
        if (DAT_146b7bb18 != '\0') {
          FUN_14373a730(local_78,&DAT_146b7bb10,1);
          lVar5 = FUN_14373bbd0(local_78,&DAT_145b752b0,&DAT_145b75258,
                                "numHashes > rb.remaining() / 5",0);
          *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar5 + 0x28) = 0x7f4;
          FUN_14373a950(local_78);
        }
        *param_1 = -0x7ffbfe00;
        return;
      }
      iVar7 = 0;
      if (iVar3 < 1) {
        return;
      }
      while( true ) {
        iVar4 = FUN_1436f0600(param_2);
        piVar1 = (int *)*param_2 + 1;
        if ((int *)param_2[1] < piVar1) {
          *param_2 = param_2[1];
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
          local_res8[0] = 0;
        }
        else {
          local_res8[0] = *(int *)*param_2;
          *param_2 = (ulonglong)piVar1;
        }
        if ((char)param_2[3] != '\0') break;
        if (*param_1 < 0) goto LAB_1436efabd;
        cVar2 = FUN_1436f51b0(iVar4,param_1 + 2);
        if (cVar2 != '\0') {
          if (DAT_146b7bb18 != '\0') {
            FUN_14373a730(local_78,&DAT_146b7bb10,1);
            lVar5 = FUN_14373bbd0(local_78,&DAT_145b752b0,&DAT_145b75268,
                                  "typeIdIsNullOrOutOfBounds(tid, m_bundle)",0);
            *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar5 + 0x28) = 0x7fa;
            FUN_14373a950(local_78);
          }
LAB_1436efaaf:
          *param_1 = -0x7ffbfe00;
          return;
        }
        lVar5 = (longlong)iVar4 * 8;
        lVar6 = FUN_143749f50(param_3,*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x18)));
        if (lVar6 == 0) {
          if (DAT_146b7bb18 != '\0') {
            local_res10 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 8);
            FUN_14373a730(local_78,&DAT_146b7bb10,1);
            lVar5 = FUN_14373bbd0(local_78,"Type {} with hash {:x} does not match a native type",
                                  &DAT_145b75278,&local_res10,local_res8,0);
            *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar5 + 0x28) = 0x7fe;
            FUN_14373a950(local_78);
            *param_1 = -0x7ffbfe00;
            return;
          }
          goto LAB_1436efaaf;
        }
        iVar7 = iVar7 + 1;
        *(longlong *)(lVar5 + *(longlong *)(param_1 + 4)) = lVar6;
        if (iVar3 <= iVar7) {
          return;
        }
      }
      *param_1 = -0x7ffbfe00;
LAB_1436efabd:
      if (DAT_146b7bb18 == '\0') {
        return;
      }
      FUN_14373a730(local_78,&DAT_146b7bb10,1);
      lVar5 = FUN_14373bbd0(local_78,"Error in input stream.",&DAT_145b909f0,0);
      *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar5 + 0x28) = 0x7f9;
      FUN_14373a950(local_78);
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_146b7bb18 == '\0') {
    return;
  }
  FUN_14373a730(local_78,&DAT_146b7bb10,1);
  lVar5 = FUN_14373bbd0(local_78,"Error in input stream.",&DAT_145b909f0,0);
  *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
  *(undefined8 *)(lVar5 + 0x28) = 0x7f2;
  FUN_14373a950(local_78);
  return;
}



// FUNCTION 1436efb40 FUN_1436efb40 body=961 status=ok
// SIG undefined FUN_1436efb40(void)

void FUN_1436efb40(ulonglong *param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar4;
  longlong lVar3;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  undefined1 local_res13;
  undefined1 local_res14;
  undefined1 *local_d8;
  int local_d0;
  uint local_cc;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong lStack_60;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  local_d8 = local_c8;
  puVar1 = (uint *)*param_2;
  uVar8 = param_3[1] - *param_3 >> 5;
  local_d0 = 0;
  local_cc = 0x80000010;
  iVar7 = (int)uVar8;
  iVar6 = 0;
  if (0x10 < iVar7) {
    uVar8 = uVar8 & 0xffffffff;
    if (iVar7 < 0x20) {
      uVar8 = 0x20;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_d8,uVar8,1);
    iVar6 = local_d0;
  }
  if (0 < iVar7 - iVar6) {
    puVar5 = local_d8 + iVar6;
    for (lVar3 = (longlong)(iVar7 - iVar6); lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  uVar4 = *puVar1;
  local_d0 = iVar7;
  while (-1 < (int)uVar4) {
    uVar2 = FUN_1436f16b0(param_1,0);
    uVar4 = (uint)((ulonglong)uVar2 >> 8) & 0xffffff;
    if ((int)uVar2 == 1) {
      if (1 < DAT_146b7bb18) {
        FUN_14373a730(&local_b8,&DAT_146b7bb10,2);
        lVar3 = FUN_14373bbd0(&local_b8,"IO error",&DAT_145b909f0,0);
        *(undefined8 *)(lVar3 + 0x28) = 0x480;
LAB_1436efe96:
        *(char **)(lVar3 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        FUN_14373a950(&local_b8);
      }
LAB_1436efea3:
      *puVar1 = 0x80040200;
    }
    else {
      if ((int)uVar2 == 0) goto LAB_1436efeb6;
      local_78 = *param_3;
      lStack_70 = param_3[1];
      lVar3 = FUN_1436eec10();
      if (lVar3 == 0) {
        local_res13 = (undefined1)uVar4;
        local_res10 = (undefined1)(uVar4 >> 0x18);
        local_res11 = (undefined1)(uVar4 >> 0x10);
        local_res12 = (undefined1)(uVar4 >> 8);
        local_res14 = 0;
        if (1 < DAT_146b7bb18) {
          FUN_14373a730(&local_b8,&DAT_146b7bb10,2);
          lVar3 = FUN_14373bbd0(&local_b8,"Unexpected section {}",&DAT_145b75208,&local_res10,0);
          *(undefined8 *)(lVar3 + 0x28) = 0x4a9;
          goto LAB_1436efe96;
        }
        goto LAB_1436efea3;
      }
      iVar6 = (int)(lVar3 - *param_3 >> 5);
      if (local_d8[iVar6] != '\0') {
        if (1 < DAT_146b7bb18) {
          FUN_14373a730(&local_b8,&DAT_146b7bb10,2);
          lVar3 = FUN_14373bbd0(&local_b8,"Duplicate section",&DAT_145b909f0,0);
          *(undefined8 *)(lVar3 + 0x28) = 0x4a2;
          goto LAB_1436efe96;
        }
        goto LAB_1436efea3;
      }
      local_d8[iVar6] = 1;
      if (*(longlong *)(lVar3 + 0x10) == 0) {
        uVar8 = (longlong)
                (int)((*(uint *)(param_1[5] + 4 + (longlong)((int)param_1[6] + -1) * 0x18) &
                      0x3fffffff) - 8) + *param_1;
        if (param_1[1] < uVar8) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          *puVar1 = -(uint)((char)param_1[3] != '\0') & 0x80040200;
        }
        else {
          *param_1 = uVar8;
          *puVar1 = -(uint)((char)param_1[3] != '\0') & 0x80040200;
        }
      }
      else {
        local_68 = *param_2;
        local_78 = param_2[1];
        local_a8 = *param_1;
        lStack_70 = param_2[2];
        iVar6 = (*(uint *)(param_1[5] + 4 + (longlong)((int)param_1[6] + -1) * 0x18) & 0x3fffffff) -
                8;
        uVar8 = (longlong)iVar6 + local_a8;
        if (param_1[1] < uVar8) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
        }
        else {
          *param_1 = uVar8;
        }
        lStack_b0 = (longlong)iVar6 + local_a8;
        local_b8._0_4_ = (undefined4)local_a8;
        local_b8._4_4_ = (undefined4)(local_a8 >> 0x20);
        uStack_a0 = uStack_a0 & 0xffffff00;
        local_48 = (undefined4)local_b8;
        uStack_44 = local_b8._4_4_;
        local_38 = (undefined4)local_b8;
        uStack_34 = local_b8._4_4_;
        uStack_30 = uStack_a0;
        uStack_2c = uStack_9c;
        local_b8 = local_a8;
        lStack_60 = local_78;
        local_58 = lStack_70;
        uStack_40 = lStack_b0;
        (**(code **)(lVar3 + 0x10))(local_68,&local_48,&local_78);
      }
      if ((int)*puVar1 < 0) break;
      if (*param_1 - param_1[2] ==
          (longlong)
          (int)((*(uint *)(param_1[5] + 4 + (longlong)((int)param_1[6] + -1) * 0x18) & 0x3fffffff) +
               *(int *)(param_1[5] + 8 + (longlong)((int)param_1[6] + -1) * 0x18))) {
        param_1[4] = *(ulonglong *)(param_1[5] + 0x10 + (longlong)((int)param_1[6] + -1) * 0x18);
        *(int *)(param_1 + 6) = (int)param_1[6] + -1;
      }
      else {
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
      }
    }
    uVar4 = *puVar1;
  }
  *(undefined4 *)(param_1 + 6) = 0;
LAB_1436efeb6:
  local_d0 = 0;
  if (-1 < (int)local_cc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_d8,1,local_cc & 0x3fffffff);
  }
  return;
}



// FUNCTION 1436eff10 FUN_1436eff10 body=905 status=ok
// SIG undefined FUN_1436eff10(void)

void FUN_1436eff10(ulonglong *param_1,uint *param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  uint uVar3;
  longlong lVar2;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  undefined1 local_res13;
  undefined1 local_res14;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_68;
  int local_60;
  uint local_5c;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  local_68 = local_58;
  uVar7 = (longlong)(param_3[1] - *param_3) >> 5;
  local_60 = 0;
  local_5c = 0x80000010;
  iVar6 = (int)uVar7;
  iVar5 = 0;
  if (0x10 < iVar6) {
    uVar7 = uVar7 & 0xffffffff;
    if (iVar6 < 0x20) {
      uVar7 = 0x20;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_68,uVar7,1);
    iVar5 = local_60;
  }
  if (0 < iVar6 - iVar5) {
    puVar4 = local_68 + iVar5;
    for (lVar2 = (longlong)(iVar6 - iVar5); lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  uVar3 = *param_2;
  local_60 = iVar6;
  while (-1 < (int)uVar3) {
    uVar1 = FUN_1436f16b0(param_1,0);
    uVar3 = (uint)((ulonglong)uVar1 >> 8) & 0xffffff;
    if ((int)uVar1 == 1) {
      if (1 < DAT_146b7bb18) {
        FUN_14373a730(&local_a8,&DAT_146b7bb10,2);
        lVar2 = FUN_14373bbd0(&local_a8,"IO error",&DAT_145b909f0,0);
        *(undefined8 *)(lVar2 + 0x28) = 0x480;
LAB_1436f0233:
        *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        FUN_14373a950(&local_a8);
      }
LAB_1436f0240:
      *param_2 = 0x80040200;
    }
    else {
      if ((int)uVar1 == 0) goto LAB_1436f0253;
      local_a8 = *param_3;
      uStack_a0 = param_3[1];
      lVar2 = FUN_1436eec10();
      if (lVar2 == 0) {
        local_res13 = (undefined1)uVar3;
        local_res10 = (undefined1)(uVar3 >> 0x18);
        local_res11 = (undefined1)(uVar3 >> 0x10);
        local_res12 = (undefined1)(uVar3 >> 8);
        local_res14 = 0;
        if (1 < DAT_146b7bb18) {
          FUN_14373a730(&local_a8,&DAT_146b7bb10,2);
          lVar2 = FUN_14373bbd0(&local_a8,"Unexpected section {}",&DAT_145b75208,&local_res10,0);
          *(undefined8 *)(lVar2 + 0x28) = 0x4a9;
          goto LAB_1436f0233;
        }
        goto LAB_1436f0240;
      }
      iVar5 = (int)((longlong)(lVar2 - *param_3) >> 5);
      if (local_68[iVar5] != '\0') {
        if (1 < DAT_146b7bb18) {
          FUN_14373a730(&local_a8,&DAT_146b7bb10,2);
          lVar2 = FUN_14373bbd0(&local_a8,"Duplicate section",&DAT_145b909f0,0);
          *(undefined8 *)(lVar2 + 0x28) = 0x4a2;
          goto LAB_1436f0233;
        }
        goto LAB_1436f0240;
      }
      local_68[iVar5] = 1;
      if (*(longlong *)(lVar2 + 0x18) == 0) {
        uVar7 = (longlong)
                (int)((*(uint *)(param_1[5] + 4 + (longlong)((int)param_1[6] + -1) * 0x18) &
                      0x3fffffff) - 8) + *param_1;
        if (param_1[1] < uVar7) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          *param_2 = -(uint)((char)param_1[3] != '\0') & 0x80040200;
        }
        else {
          *param_1 = uVar7;
          *param_2 = -(uint)((char)param_1[3] != '\0') & 0x80040200;
        }
      }
      else {
        local_a8 = *param_1;
        iVar5 = (*(uint *)(param_1[5] + 4 + (longlong)((int)param_1[6] + -1) * 0x18) & 0x3fffffff) -
                8;
        uVar7 = (longlong)iVar5 + local_a8;
        if (param_1[1] < uVar7) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
        }
        else {
          *param_1 = uVar7;
        }
        uStack_a0 = (longlong)iVar5 + local_a8;
        uStack_90 = uStack_90 & 0xffffff00;
        local_98._0_4_ = (undefined4)local_a8;
        local_98._4_4_ = (undefined4)(local_a8 >> 0x20);
        local_38 = (undefined4)local_98;
        uStack_34 = local_98._4_4_;
        uStack_30 = uStack_90;
        uStack_2c = uStack_8c;
        local_48 = (undefined4)local_98;
        uStack_44 = local_98._4_4_;
        local_98 = local_a8;
        uStack_40 = uStack_a0;
        (**(code **)(lVar2 + 0x18))(&local_48,param_2);
      }
      if ((int)*param_2 < 0) break;
      if (*param_1 - param_1[2] ==
          (longlong)
          (int)((*(uint *)(param_1[5] + 4 + (longlong)((int)param_1[6] + -1) * 0x18) & 0x3fffffff) +
               *(int *)(param_1[5] + 8 + (longlong)((int)param_1[6] + -1) * 0x18))) {
        param_1[4] = *(ulonglong *)(param_1[5] + 0x10 + (longlong)((int)param_1[6] + -1) * 0x18);
        *(int *)(param_1 + 6) = (int)param_1[6] + -1;
      }
      else {
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
      }
    }
    uVar3 = *param_2;
  }
  *(undefined4 *)(param_1 + 6) = 0;
LAB_1436f0253:
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_68,1,local_5c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1436f02a0 FUN_1436f02a0 body=818 status=ok
// SIG undefined FUN_1436f02a0(void)

void FUN_1436f02a0(longlong *param_1,uint *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar6;
  longlong lVar5;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 local_res18;
  undefined1 local_res19;
  undefined1 local_res1a;
  undefined1 local_res1b;
  undefined1 local_res1c;
  undefined1 *local_88;
  int local_80;
  uint local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [64];
  
  local_88 = local_78;
  uVar9 = param_3[1] - *param_3 >> 5;
  local_80 = 0;
  local_7c = 0x80000010;
  iVar8 = (int)uVar9;
  iVar4 = 0;
  if (0x10 < iVar8) {
    uVar9 = uVar9 & 0xffffffff;
    if (iVar8 < 0x20) {
      uVar9 = 0x20;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_88,uVar9,1);
    iVar4 = local_80;
  }
  if (0 < iVar8 - iVar4) {
    puVar7 = local_88 + iVar4;
    for (lVar5 = (longlong)(iVar8 - iVar4); lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  uVar6 = *param_2;
  local_80 = iVar8;
  while (-1 < (int)uVar6) {
    uVar3 = FUN_1436f1540(param_1,0);
    uVar6 = (uint)((ulonglong)uVar3 >> 8) & 0xffffff;
    if ((int)uVar3 == 1) {
      if (1 < DAT_146b7bb18) {
        FUN_14373a730(local_68,&DAT_146b7bb10,2);
        lVar5 = FUN_14373bbd0(local_68,"IO error",&DAT_145b909f0,0);
        *(undefined8 *)(lVar5 + 0x28) = 0x480;
LAB_1436f056c:
        *(char **)(lVar5 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        FUN_14373a950(local_68);
      }
LAB_1436f0579:
      *param_2 = 0x80040200;
    }
    else {
      if ((int)uVar3 == 0) goto LAB_1436f058c;
      lVar5 = FUN_1436eec10();
      if (lVar5 == 0) {
        local_res1b = (undefined1)uVar6;
        local_res18 = (undefined1)(uVar6 >> 0x18);
        local_res19 = (undefined1)(uVar6 >> 0x10);
        local_res1a = (undefined1)(uVar6 >> 8);
        local_res1c = 0;
        if (1 < DAT_146b7bb18) {
          FUN_14373a730(local_68,&DAT_146b7bb10,2);
          lVar5 = FUN_14373bbd0(local_68,"Unexpected section {}",&DAT_145b75208,&local_res18,0);
          *(undefined8 *)(lVar5 + 0x28) = 0x4a9;
          goto LAB_1436f056c;
        }
        goto LAB_1436f0579;
      }
      iVar4 = (int)(lVar5 - *param_3 >> 5);
      if (local_88[iVar4] != '\0') {
        if (1 < DAT_146b7bb18) {
          FUN_14373a730(local_68,&DAT_146b7bb10,2);
          lVar5 = FUN_14373bbd0(local_68,"Duplicate section",&DAT_145b909f0,0);
          *(undefined8 *)(lVar5 + 0x28) = 0x4a2;
          goto LAB_1436f056c;
        }
        goto LAB_1436f0579;
      }
      local_88[iVar4] = 1;
      if (*(code **)(lVar5 + 8) == (code *)0x0) {
        puVar1 = (ulonglong *)*param_1;
        lVar5 = (longlong)
                (int)((*(uint *)(param_1[2] + 4 + (longlong)((int)param_1[3] + -1) * 0x18) &
                      0x3fffffff) - 8);
        uVar9 = *puVar1 + lVar5;
        if (puVar1[1] < uVar9) {
          hkIo::ReadBuffer::implSkip(puVar1,lVar5);
        }
        else {
          *puVar1 = uVar9;
        }
        *param_2 = -(uint)(*(char *)(*param_1 + 0x20) != '\0') & 0x80040200;
      }
      else {
        (**(code **)(lVar5 + 8))(param_2,param_1);
      }
      if ((int)*param_2 < 0) break;
      plVar2 = (longlong *)*param_1;
      if ((plVar2[5] - plVar2[2]) + *plVar2 ==
          (longlong)
          (int)((*(uint *)(param_1[2] + 4 + (longlong)((int)param_1[3] + -1) * 0x18) & 0x3fffffff) +
               *(int *)(param_1[2] + 8 + (longlong)((int)param_1[3] + -1) * 0x18))) {
        param_1[1] = *(longlong *)(param_1[2] + 0x10 + (longlong)((int)param_1[3] + -1) * 0x18);
        *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      }
      else {
        *(byte *)(plVar2 + 4) = *(byte *)(plVar2 + 4) | 2;
      }
    }
    uVar6 = *param_2;
  }
  *(undefined4 *)(param_1 + 3) = 0;
LAB_1436f058c:
  local_80 = 0;
  if (-1 < (int)local_7c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_88,1,local_7c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1436f05e0 FUN_1436f05e0 body=32 status=ok
// SIG undefined FUN_1436f05e0(void)

void FUN_1436f05e0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1436f4f10();
  if (0xffff < uVar1) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  }
  return;
}



// FUNCTION 1436f0600 FUN_1436f0600 body=32 status=ok
// SIG undefined FUN_1436f0600(void)

void FUN_1436f0600(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1436f4f10();
  if (0x7fffffff < uVar1) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  }
  return;
}



// FUNCTION 1436f0620 FUN_1436f0620 body=34 status=ok
// SIG undefined FUN_1436f0620(void)

void FUN_1436f0620(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1436f4f10();
  if (0xffffffff < uVar1) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  }
  return;
}



// FUNCTION 1436f0650 thunk_FUN_1436f4f10 body=5 status=ok
// SIG undefined thunk_FUN_1436f4f10(void)

undefined8 thunk_FUN_1436f4f10(ulonglong *param_1)

{
  undefined8 uVar1;
  int aiStackX_8 [8];
  
  if (*param_1 != param_1[1]) {
    aiStackX_8[0] = 0;
    uVar1 = FUN_14374bbd0(*param_1,aiStackX_8);
    if (0 < aiStackX_8[0]) {
      if ((longlong)aiStackX_8[0] + *param_1 <= param_1[1]) {
        *param_1 = (longlong)aiStackX_8[0] + *param_1;
        return uVar1;
      }
      *param_1 = param_1[1];
      *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
      return uVar1;
    }
  }
  *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
  return 0;
}



// FUNCTION 1436f0660 FUN_1436f0660 body=454 status=ok
// SIG undefined FUN_1436f0660(void)

undefined4 * FUN_1436f0660(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined8 local_38;
  code *local_30;
  undefined4 *local_28;
  undefined1 local_20;
  undefined *local_18;
  undefined4 local_10;
  
  puVar1 = param_1 + 2;
  *param_1 = 0;
  FUN_1436f0830(puVar1,param_1 + 0x4e);
  param_1[0x46] = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0x80000000;
  param_1[0x4c] = 0;
  hkReflect::Detail::Impl::Impl(param_1 + 0x4e);
  *(undefined4 **)(param_1 + 0x52) = puVar1;
  *(undefined ***)(param_1 + 0x4e) = hkSerialize::Detail::TagfilePointerImpl::vftable;
  hkReflect::Detail::Impl::Impl(param_1 + 0x54);
  *(undefined4 **)(param_1 + 0x58) = puVar1;
  *(undefined ***)(param_1 + 0x54) = hkSerialize::Detail::TagfileArrayImpl::vftable;
  hkReflect::Detail::Impl::Impl(param_1 + 0x5a);
  *(undefined4 **)(param_1 + 0x5e) = puVar1;
  *(undefined ***)(param_1 + 0x5a) = hkSerialize::Detail::TagfileStringImpl::vftable;
  *(undefined8 *)(param_1 + 0x60) = 0;
  param_1[0x62] = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0x80000000;
  local_78[0] = 1;
  local_74 = 0x1fff;
  local_70 = 0x7ffffeff;
  local_68 = 1;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 1;
  FUN_14374b970(param_1 + 0x68,local_78);
  local_3c = 0x1bff;
  local_38 = 0x1586001f;
  local_30 = FUN_1436f5060;
  param_1[0x86] = 0x45b73df0;
  param_1[0x87] = 1;
  param_1[0x88] = 0x45b73eb0;
  param_1[0x89] = 1;
  *(undefined8 *)(param_1 + 0x8a) = 0;
  local_18 = &DAT_146b7bb10;
  local_10 = 1;
  local_40[0] = 1;
  local_20 = 1;
  local_28 = puVar1;
  FUN_14374bb50(param_1 + 0x68,local_40);
  return param_1;
}



// FUNCTION 1436f0830 FUN_1436f0830 body=265 status=ok
// SIG undefined FUN_1436f0830(void)

undefined8 * FUN_1436f0830(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_143734d20();
  *param_1 = hkSerialize::Detail::TagfileBundle::vftable;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  FUN_143734b10(param_1 + 0x15);
  uVar1 = FUN_143703a50();
  FUN_1437365b0(param_1 + 0x17,uVar1,0x4000);
  param_1[0x21] = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  param_1[0xb] = &DAT_146b7bb00;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000001;
  return param_1;
}



// FUNCTION 1436f0940 FUN_1436f0940 body=115 status=ok
// SIG undefined FUN_1436f0940(void)

undefined8 * FUN_1436f0940(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *param_1 = hkSerialize::TagfileReadFormat::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x230);
  if (lVar2 != 0) {
    uVar3 = FUN_1436f0660(lVar2);
    param_1[3] = uVar3;
    return param_1;
  }
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1436f09c0 FUN_1436f09c0 body=314 status=ok
// SIG undefined FUN_1436f09c0(void)

longlong * FUN_1436f09c0(longlong *param_1,longlong *param_2,undefined4 *param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res20 [2];
  undefined1 local_58 [64];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  plVar1 = (longlong *)*param_2;
  param_1[4] = (longlong)plVar1;
  lVar2 = (longlong)
          (int)((*(uint *)(param_2[2] + 4 + (longlong)((int)param_2[3] + -1) * 0x18) & 0x3fffffff) -
               8);
  param_1[5] = lVar2;
  lVar2 = (ulonglong)(-(uint)(param_4 != '\0') & 8) + lVar2;
  lVar3 = plVar1[1] - *plVar1;
  if (lVar3 < lVar2) {
    if (plVar1[7] != 0) {
      lVar3 = hkIo::ReadBuffer::implPrefetch(plVar1,lVar2,param_3,-param_4);
    }
    if (lVar3 < lVar2) {
      if (1 < DAT_146b7bb18) {
        local_res20[0] = *(undefined4 *)(param_2[2] + (longlong)((int)param_2[3] + -1) * 0x18);
        FUN_14373a730(local_58,&DAT_146b7bb10,2);
        lVar2 = FUN_14373bbd0(local_58,"Short read in section {:x}",&DAT_145b73c70,local_res20,0);
        *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar2 + 0x28) = 0xbe;
        FUN_14373a950(local_58);
      }
      *param_3 = 0x80040200;
      return param_1;
    }
  }
  lVar2 = *(longlong *)param_1[4];
  *param_1 = lVar2;
  param_1[1] = param_1[5] + lVar2;
  param_1[2] = lVar2;
  return param_1;
}



// FUNCTION 1436f0b00 FUN_1436f0b00 body=216 status=ok
// SIG undefined FUN_1436f0b00(void)

void FUN_1436f0b00(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar3 = (int)param_1[1] + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*param_1 + 0x1c + lVar5 * 0x20);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),0x10,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -8;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x20,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 1436f0be0 FUN_1436f0be0 body=284 status=ok
// SIG undefined FUN_1436f0be0(void)

void FUN_1436f0be0(longlong param_1)

{
  undefined8 uVar1;
  
  thunk_FUN_143734820(param_1 + 0x1b0);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1ac)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x1a0),8,*(uint *)(param_1 + 0x1ac) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x19c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 400),1,*(uint *)(param_1 + 0x19c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0x80000000;
  FUN_143732980(param_1 + 0x168);
  FUN_143732980(param_1 + 0x150);
  FUN_143732980(param_1 + 0x138);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (-1 < (int)*(uint *)(param_1 + 300)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x120),8,*(uint *)(param_1 + 300) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 300) = 0x80000000;
  FUN_1436f0d00(param_1 + 8);
  return;
}



// FUNCTION 1436f0d00 FUN_1436f0d00 body=397 status=ok
// SIG undefined FUN_1436f0d00(void)

void FUN_1436f0d00(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143736600(param_1 + 0xb8);
  FUN_1436f0b00(param_1 + 0x98);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x94)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x88),8,*(uint *)(param_1 + 0x94) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x84)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x78),8,*(uint *)(param_1 + 0x84) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x74)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x68),8,*(uint *)(param_1 + 0x74) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (-1 < (int)*(uint *)(param_1 + 100)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x58),8,*(uint *)(param_1 + 100) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),1,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),1,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_143734f50(param_1);
  return;
}



// FUNCTION 1436f0e90 FUN_1436f0e90 body=100 status=ok
// SIG undefined FUN_1436f0e90(void)

void FUN_1436f0e90(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = param_1[3];
  *param_1 = hkSerialize::TagfileReadFormat::vftable;
  if (lVar1 != 0) {
    FUN_1436f0be0(lVar1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x230);
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1436f0f00 FUN_1436f0f00 body=213 status=ok
// SIG undefined FUN_1436f0f00(void)

void FUN_1436f0f00(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x134)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x128),4,*(uint *)(param_1 + 0x134) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xa4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x98),4,*(uint *)(param_1 + 0xa4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 8),4,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1436f0fe0 FUN_1436f0fe0 body=200 status=ok
// SIG undefined FUN_1436f0fe0(void)

undefined8 * FUN_1436f0fe0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  *param_1 = *param_2;
  iVar2 = *(int *)(param_2 + 2);
  lVar3 = param_2[1];
  uVar4 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar4,param_1 + 1,iVar2,0x10);
  }
  iVar7 = iVar2;
  if (*(int *)(param_1 + 2) < iVar2) {
    iVar7 = *(int *)(param_1 + 2);
  }
  FUN_1436ee950(param_1[1],lVar3,iVar7);
  puVar5 = (undefined8 *)(param_1[1] + (longlong)iVar7 * 0x10);
  lVar6 = (longlong)(iVar2 - iVar7);
  if (0 < iVar2 - iVar7) {
    lVar8 = (longlong)iVar7 * 0x10 - (longlong)puVar5;
    do {
      if (puVar5 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)(lVar8 + lVar3 + (longlong)puVar5);
        uVar4 = puVar1[1];
        *puVar5 = *puVar1;
        puVar5[1] = uVar4;
      }
      puVar5 = puVar5 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 2) = iVar2;
  return param_1;
}



// FUNCTION 1436f10b0 FUN_1436f10b0 body=120 status=ok
// SIG undefined FUN_1436f10b0(void)

longlong FUN_1436f10b0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1436f0d00();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x110);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x110);
    }
  }
  return param_1;
}



// FUNCTION 1436f1130 FUN_1436f1130 body=139 status=ok
// SIG undefined FUN_1436f1130(void)

longlong FUN_1436f1130(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1436f0e90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x20;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
    }
  }
  return param_1;
}



// FUNCTION 1436f11c0 FUN_1436f11c0 body=96 status=ok
// SIG undefined FUN_1436f11c0(void)

longlong FUN_1436f11c0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = (ulonglong)
          ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000) &
          *(uint *)(param_1 + 3));
  iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
  if (-1 < iVar5) {
    do {
      if (*(int *)((longlong)iVar5 * 0x20 + *param_1) == iVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 1436f1220 FUN_1436f1220 body=366 status=ok
// SIG undefined FUN_1436f1220(void)

void FUN_1436f1220(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_1436f11c0(param_1,(longlong)(int)uVar4 * 0x20 + *param_1);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  lVar5 = *param_1 + (longlong)(int)uVar2 * 0x20;
  uVar6 = FUN_143703a50();
  *(undefined4 *)(lVar5 + 0x18) = 0;
  if (-1 < (int)*(uint *)(lVar5 + 0x1c)) {
    FUN_143702e10(uVar6,*(undefined8 *)(lVar5 + 0x10),0x10,*(uint *)(lVar5 + 0x1c) & 0x3fffffff);
  }
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x1c) = 0x80000000;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    lVar5 = 4;
    puVar7 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x20);
    lVar9 = ((longlong)(int)*(uint *)(param_1 + 1) * 0x20 + *param_1) - (longlong)puVar7;
    do {
      *puVar7 = *(undefined8 *)(lVar9 + (longlong)puVar7);
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = param_1[2];
  uVar8 = ((longlong)param_2 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + uVar8 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar8 * 8);
  while (-1 < iVar3) {
    lVar5 = param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & *puVar1) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar8 = ((longlong)puVar1 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
    puVar1 = (uint *)(lVar5 + uVar8 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar8 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 1436f1390 FUN_1436f1390 body=128 status=ok
// SIG undefined FUN_1436f1390(void)

void FUN_1436f1390(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  
  local_14 = 0x80000000;
  local_20 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_1436eec30(param_1,local_res8,local_res10,local_28);
  *(undefined8 *)((longlong)local_res8[0] * 0x20 + 8 + *param_1) = param_3;
  uVar1 = FUN_143703a50();
  if (-1 < (int)local_14) {
    FUN_143702e10(uVar1,local_20,0x10,local_14 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1436f1410 FUN_1436f1410 body=205 status=ok
// SIG undefined FUN_1436f1410(void)

void FUN_1436f1410(longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,
                  longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int local_res20 [2];
  
  if ((param_4 < (int)(param_5[1] - *param_5 >> 3)) &&
     (lVar1 = *(longlong *)(*param_5 + (longlong)param_4 * 8), lVar1 != 0)) {
    *param_3 = lVar1;
    return;
  }
  local_res20[0] = param_4;
  lVar1 = FUN_1436f11c0(param_1,local_res20);
  if (lVar1 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)(lVar1 + 4);
  }
  lVar1 = (longlong)iVar3 * 0x20 + *param_1;
  *param_3 = *(longlong *)(lVar1 + 8);
  uVar2 = FUN_143703a50();
  if (*(uint *)(lVar1 + 0x18) == (*(uint *)(lVar1 + 0x1c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,(longlong *)(lVar1 + 0x10),0x10);
  }
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  puVar4 = (undefined8 *)
           ((longlong)(*(int *)(lVar1 + 0x18) + -1) * 0x10 + *(longlong *)(lVar1 + 0x10));
  puVar4[1] = param_2;
  *puVar4 = param_3;
  return;
}



// FUNCTION 1436f14e0 FUN_1436f14e0 body=95 status=ok
// SIG undefined FUN_1436f14e0(void)

undefined8 * FUN_1436f14e0(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  DAT_146b7bbd0._0_1_ = 1;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (lVar2 != 0) {
    uVar3 = FUN_1436f0940(lVar2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1436f1540 FUN_1436f1540 body=356 status=ok
// SIG undefined FUN_1436f1540(void)

uint FUN_1436f1540(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  plVar2 = (longlong *)*param_1;
  if ((plVar2[5] - plVar2[2]) + *plVar2 < param_1[1]) {
    lVar7 = plVar2[1] - *plVar2;
    if (lVar7 < 8) {
      if (plVar2[7] != 0) {
        lVar7 = hkIo::ReadBuffer::implPrefetch(plVar2,8);
      }
      if (lVar7 < 8) {
        return 1;
      }
    }
    puVar3 = (undefined8 *)*param_1;
    puVar4 = (uint *)*puVar3;
    uVar9 = puVar4[1];
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    if (uVar9 == 0) {
      *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) | 2;
      return 1;
    }
    if ((param_2 == 0) || (param_2 == uVar9)) {
      uVar1 = *puVar4;
      lVar7 = (puVar3[5] - puVar3[2]) + (longlong)puVar4;
      uVar6 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8;
      uVar1 = uVar1 << 0x18;
      uVar10 = (ulonglong)(uVar6 | uVar1 & 0x3fffffff) + lVar7;
      if (((ulonglong)param_1[1] < uVar10) || ((uVar6 | uVar1 & 0x3fffffff) < 8)) {
        *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) | 2;
        uVar9 = 1;
      }
      else {
        uVar8 = FUN_143703a50();
        if (*(uint *)(param_1 + 3) == (*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff)) {
          FUN_14370c460(uVar8,param_1 + 2,0x18);
        }
        puVar4 = (uint *)(param_1[2] + (longlong)(int)param_1[3] * 0x18);
        *(int *)(param_1 + 3) = (int)param_1[3] + 1;
        puVar4[2] = (uint)lVar7;
        puVar4[1] = uVar6 | uVar1;
        *puVar4 = uVar9;
        *(longlong *)(puVar4 + 4) = param_1[1];
        puVar5 = (ulonglong *)*param_1;
        param_1[1] = uVar10;
        if (puVar5[1] < *puVar5 + 8) {
          hkIo::ReadBuffer::implSkip(puVar5,8);
        }
        else {
          *puVar5 = *puVar5 + 8;
        }
        uVar9 = *puVar4;
      }
      return uVar9;
    }
  }
  return 0;
}



// FUNCTION 1436f16b0 FUN_1436f16b0 body=301 status=ok
// SIG undefined FUN_1436f16b0(void)

uint FUN_1436f16b0(ulonglong *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  
  puVar2 = (uint *)*param_1;
  lVar6 = (longlong)puVar2 - param_1[2];
  if ((longlong)param_1[4] <= lVar6) {
    return 0;
  }
  if (7 < (longlong)(param_1[1] - (longlong)puVar2)) {
    uVar7 = puVar2[1];
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    if (uVar7 != 0) {
      if ((param_2 != 0) && (param_2 != uVar7)) {
        return 0;
      }
      uVar1 = *puVar2;
      uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8;
      uVar1 = uVar1 << 0x18;
      uVar5 = (ulonglong)(uVar3 | uVar1 & 0x3fffffff) + lVar6;
      if ((param_1[4] < uVar5) || ((uVar3 | uVar1 & 0x3fffffff) < 8)) {
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
        uVar7 = 1;
      }
      else {
        uVar4 = FUN_143703a50();
        if ((uint)param_1[6] == (*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff)) {
          FUN_14370c460(uVar4,param_1 + 5,0x18);
        }
        puVar2 = (uint *)(param_1[5] + (longlong)(int)param_1[6] * 0x18);
        *(int *)(param_1 + 6) = (int)param_1[6] + 1;
        puVar2[2] = (uint)lVar6;
        puVar2[1] = uVar3 | uVar1;
        *puVar2 = uVar7;
        *(ulonglong *)(puVar2 + 4) = param_1[4];
        param_1[4] = uVar5;
        if (param_1[1] < *param_1 + 8) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
        }
        else {
          *param_1 = *param_1 + 8;
        }
        uVar7 = *puVar2;
      }
      return uVar7;
    }
    *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
  }
  return 1;
}



// FUNCTION 1436f17e0 FUN_1436f17e0 body=543 status=ok
// SIG undefined FUN_1436f17e0(void)

void FUN_1436f17e0(undefined8 param_1,uint *param_2,int *param_3,undefined4 *param_4)

{
  short *psVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong uVar7;
  
  if (0 < *param_3) {
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    FUN_1436f1410(local_38,param_2,param_2 + 2,*param_3,&local_38);
  }
  uVar7 = 0;
  if (0 < param_3[1]) {
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    uVar2 = uVar7;
    if ((*param_2 & 2) != 0) {
      uVar2 = FUN_1437143d0(param_2,2);
    }
    FUN_1436f1410(param_1,param_2,uVar2,param_3[1],&local_38);
  }
  if (((((*param_2 >> 0x1a & 1) != 0) &&
       (puVar3 = (undefined8 *)FUN_1437143d0(param_2,0x4000000), puVar3 != (undefined8 *)0x0)) &&
      (psVar1 = (short *)*puVar3, psVar1 != (short *)0x0)) &&
     (uVar2 = uVar7, uVar8 = uVar7, 0 < *psVar1)) {
    do {
      local_38 = *param_4;
      uStack_34 = param_4[1];
      uStack_30 = param_4[2];
      uStack_2c = param_4[3];
      FUN_1436f1410(param_1,param_2,*(longlong *)(uVar8 + 8 + (longlong)psVar1) + 8,
                    *(undefined4 *)(uVar2 + *(longlong *)(param_3 + 2)),&local_38);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar2 = uVar2 + 4;
      uVar8 = uVar8 + 8;
    } while ((int)uVar6 < (int)*psVar1);
  }
  uVar7 = 0;
  if ((param_3[0x28] != 0) &&
     (lVar4 = FUN_143715320(param_2), uVar2 = uVar7, uVar8 = uVar7, 0 < param_3[0x28])) {
    do {
      if (**(char **)(lVar4 + 0x18) == 't') {
        local_38 = *param_4;
        uStack_34 = param_4[1];
        uStack_30 = param_4[2];
        uStack_2c = param_4[3];
        FUN_1436f1410(param_1,param_2,lVar4 + 0x10,
                      *(undefined4 *)(*(longlong *)(param_3 + 0x26) + uVar8),&local_38);
        uVar2 = (ulonglong)((int)uVar2 + 1);
        uVar8 = uVar8 + 4;
      }
      lVar4 = lVar4 + 0x10;
    } while ((int)uVar2 < param_3[0x28]);
  }
  if (param_3[0x4c] != 0) {
    uVar2 = uVar7;
    if (((*param_2 >> 0x11 & 1) != 0) &&
       (puVar5 = (ulonglong *)FUN_1437143d0(param_2,0x20000), puVar5 != (ulonglong *)0x0)) {
      uVar2 = *puVar5;
    }
    uVar8 = uVar7;
    if (0 < param_3[0x4c]) {
      do {
        local_38 = *param_4;
        uStack_34 = param_4[1];
        uStack_30 = param_4[2];
        uStack_2c = param_4[3];
        FUN_1436f1410(param_1,param_2,(longlong)(int)uVar7 * 0x10 + uVar2 + 8,
                      *(undefined4 *)(uVar8 + *(longlong *)(param_3 + 0x4a)),&local_38);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar8 = uVar8 + 4;
      } while ((int)uVar6 < param_3[0x4c]);
    }
  }
  return;
}



// FUNCTION 1436f1a00 FUN_1436f1a00 body=415 status=ok
// SIG undefined FUN_1436f1a00(void)

longlong * FUN_1436f1a00(longlong param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = *param_3;
  uVar1 = uVar6 & 0xf0000000;
  if (uVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if ((uVar1 == 0x20000000) && (param_3[2] == 0)) {
    *param_2 = 0;
  }
  else {
    if (uVar1 == 0x40000000) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar6 & 0xffffff) * 8);
      if (lVar5 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        return param_2;
      }
      puVar2 = (undefined8 *)FUN_143714490(lVar5,1);
      if (puVar2 == (undefined8 *)0x0) {
        lVar3 = FUN_1437157a0(0);
        param_2[1] = lVar3;
        *param_2 = lVar5;
        return param_2;
      }
      lVar3 = FUN_1437157a0((uint)*puVar2 & 0xf);
      param_2[1] = lVar3;
      *param_2 = lVar5;
      return param_2;
    }
    if (uVar1 == 0x50000000) {
      plVar4 = (longlong *)
               FUN_143714490(*(undefined8 *)
                              (*(longlong *)(param_1 + 8) + (ulonglong)(uVar6 & 0xffffff) * 8),
                             0x4000000);
      lVar3 = 0;
      uVar6 = 0;
      lVar5 = lVar3;
      if (plVar4 != (longlong *)0x0) {
        lVar5 = *plVar4;
      }
      lVar5 = *(longlong *)(lVar5 + 8 + (longlong)(int)param_3[2] * 8);
      if (lVar5 != 0) {
        puVar2 = (undefined8 *)FUN_143714490(lVar5,1);
        if (puVar2 != (undefined8 *)0x0) {
          uVar6 = (uint)*puVar2;
        }
        lVar3 = FUN_1437157a0(uVar6 & 0xf);
      }
      *param_2 = lVar5;
      param_2[1] = lVar3;
      return param_2;
    }
    *param_2 = (ulonglong)param_3[1] + *(longlong *)(param_1 + 0x38);
  }
  param_2[1] = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar6 & 0xffffff) * 8);
  return param_2;
}



// FUNCTION 1436f1ba0 FUN_1436f1ba0 body=268 status=ok
// SIG undefined FUN_1436f1ba0(void)

undefined8 * FUN_1436f1ba0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  if ((int)((*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48)) / 0xc) < 2) {
    local_28 = 0;
    local_38 = 0;
    lStack_30 = 0;
    puVar3 = &local_38;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    FUN_1436f1a00(param_1,&local_38,*(longlong *)(param_1 + 0x48) + 0xc);
    local_20 = local_38;
    local_18 = lStack_30;
    if (lStack_30 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = FUN_1437151a0();
    }
    if ((local_10 & 1) != 0) {
      FUN_1437329e0(local_10 & 0xfffffffffffffffe);
    }
    puVar3 = &local_20;
    bVar2 = true;
    bVar1 = false;
  }
  *param_2 = *puVar3;
  param_2[1] = puVar3[1];
  param_2[2] = puVar3[2];
  puVar3[2] = 0;
  if (bVar1) {
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
  }
  if ((bVar2) && ((local_10 & 1) != 0)) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1436f1cb0 FUN_1436f1cb0 body=484 status=ok
// SIG undefined FUN_1436f1cb0(void)

ulonglong FUN_1436f1cb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar8 = *(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48);
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  uVar6 = (lVar8 >> 1) - (lVar8 >> 0x3f);
  uVar2 = FUN_143703a50();
  lVar8 = 0x18;
  uVar4 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  iVar10 = (int)uVar6;
  if ((int)uVar4 < iVar10) {
    uVar4 = uVar4 * 2;
    uVar9 = uVar6 & 0xffffffff;
    if (iVar10 < (int)uVar4) {
      uVar9 = (ulonglong)uVar4;
    }
    FUN_14370c310(uVar2,param_2,uVar9,0x18);
  }
  iVar1 = iVar10 - (int)param_2[1];
  lVar5 = (longlong)iVar1;
  if (0 < iVar1) {
    puVar3 = (undefined1 *)(*param_2 + (longlong)(int)param_2[1] * 0x18 + 0x10);
    do {
      if ((undefined8 *)(puVar3 + -0x10) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar3 + -0x10) = 0;
        *(undefined8 *)(puVar3 + -8) = 0;
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
      }
      puVar3 = puVar3 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  *(int *)(param_2 + 1) = iVar10;
  iVar10 = 1;
  if ((int)((*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48)) / 0xc) < 2) {
    uVar6 = uVar6 & 0xffffffff;
  }
  else {
    lVar5 = 0xc;
    do {
      puVar7 = (uint *)(*(longlong *)(param_1 + 0x48) + lVar5);
      FUN_1436f1a00(param_1,&local_28,puVar7);
      *(undefined8 *)(lVar8 + *param_2) = local_28;
      *(undefined8 *)(lVar8 + 8 + *param_2) = local_20;
      uVar4 = *puVar7 & 0xf0000000;
      if (((uVar4 == 0x10000000) || (uVar4 == 0x40000000)) || (uVar4 == 0x50000000)) {
        *(undefined1 *)(lVar8 + 0x10 + *param_2) = 0;
        *(undefined4 *)(lVar8 + 0x14 + *param_2) = 0xffffffff;
      }
      else {
        uVar4 = *puVar7 & 0xf0000000;
        if (uVar4 == 0x30000000) {
          *(undefined1 *)(lVar8 + 0x10 + *param_2) = 2;
          *(uint *)(lVar8 + 0x14 + *param_2) = puVar7[2];
        }
        else if (uVar4 == 0x20000000) {
          *(undefined1 *)(lVar8 + 0x10 + *param_2) = 1;
          *(uint *)(lVar8 + 0x14 + *param_2) = puVar7[2];
        }
      }
      iVar10 = iVar10 + 1;
      lVar5 = lVar5 + 0xc;
      lVar8 = lVar8 + 0x18;
    } while (iVar10 < (int)((*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48)) / 0xc));
    uVar6 = (ulonglong)*(uint *)(param_2 + 1);
  }
  return uVar6;
}



// FUNCTION 1436f1ea0 FUN_1436f1ea0 body=233 status=ok
// SIG undefined FUN_1436f1ea0(void)

/* WARNING: Removing unreachable block (ram,0x0001436f1f79) */

undefined8 * FUN_1436f1ea0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 local_18;
  longlong local_10;
  
  uVar3 = *(uint *)*param_3;
  if (uVar3 < (uint)((*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48)) / 0xc)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar1 = lVar2 + (longlong)(int)uVar3 * 0xc;
    uVar3 = *(uint *)(lVar2 + (longlong)(int)uVar3 * 0xc) & 0xf0000000;
    if (uVar3 == 0x30000000) {
      FUN_1436f1a00(param_1,&local_18,lVar1);
      *param_2 = local_18;
      param_2[1] = local_10;
      if (local_10 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1437151a0();
      }
      param_2[2] = uVar4;
      if ((uVar4 & 1) == 0) {
        return param_2;
      }
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      return param_2;
    }
    if (uVar3 == 0) {
      hkSerialize::Detail::TagfileBundle::getVar
                (param_1,param_2,lVar2 + (longlong)*(int *)(lVar1 + 8) * 0xc);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1436f1f90 FUN_1436f1f90 body=584 status=ok
// SIG undefined FUN_1436f1f90(void)

undefined4 *
FUN_1436f1f90(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  puVar7 = (ulonglong *)FUN_143714420(param_4,1);
  uVar8 = 0;
  uVar9 = uVar8;
  if (puVar7 != (ulonglong *)0x0) {
    uVar9 = *puVar7;
  }
  iVar10 = (int)(uVar9 >> 8);
  uVar6 = 0;
  if (iVar10 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    uVar2 = *param_3;
    if ((uint)((*(longlong *)(lVar4 + 0x50) - *(longlong *)(lVar4 + 0x48)) / 0xc) <= uVar2) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0;
      if ((*(byte *)(param_5 + 3) & 1) != 0) {
        FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
      }
      param_5[3] = 0;
      *param_2 = 0x80040200;
      return param_2;
    }
    lVar1 = *(longlong *)(lVar4 + 0x48) + (longlong)(int)uVar2 * 0xc;
    uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x48) + (longlong)(int)uVar2 * 0xc);
    if ((uVar2 & 0xf0000000) == 0x20000000) {
      iVar10 = *(int *)(lVar1 + 8);
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 8) + (ulonglong)(uVar2 & 0xffffff) * 8);
      uVar6 = 0;
      if (iVar10 == 0) {
        if (lVar5 != 0) {
          uVar6 = FUN_1437152f0(lVar5);
          uVar8 = FUN_1437151a0(lVar5);
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
        }
        *param_5 = 0;
        *(undefined4 *)((longlong)param_5 + 0x14) = uVar6;
      }
      else {
        iVar3 = *(int *)(lVar1 + 4);
        lVar4 = *(longlong *)(lVar4 + 0x38);
        if (lVar5 != 0) {
          uVar6 = FUN_1437152f0(lVar5);
          uVar8 = FUN_1437151a0(lVar5);
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
        }
        *param_5 = iVar3 + lVar4;
        *(undefined4 *)((longlong)param_5 + 0x14) = uVar6;
      }
      *(int *)(param_5 + 2) = iVar10;
      param_5[1] = lVar5;
      if ((*(byte *)(param_5 + 3) & 1) != 0) {
        FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
      }
      param_5[3] = uVar8;
    }
    else {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0;
      if ((*(byte *)(param_5 + 3) & 1) != 0) {
        FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
      }
      param_5[3] = 0;
    }
  }
  else {
    puVar7 = (ulonglong *)FUN_143714420(param_4,2);
    uVar9 = uVar8;
    if (puVar7 != (ulonglong *)0x0) {
      uVar9 = *puVar7;
    }
    if (uVar9 != 0) {
      uVar6 = FUN_1437152f0(uVar9);
      uVar8 = FUN_1437151a0(uVar9);
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
    }
    *param_5 = (longlong)param_3;
    param_5[1] = uVar9;
    *(int *)(param_5 + 2) = iVar10;
    *(undefined4 *)((longlong)param_5 + 0x14) = uVar6;
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
    }
    param_5[3] = uVar8;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1436f21e0 FUN_1436f21e0 body=342 status=ok
// SIG undefined FUN_1436f21e0(void)

undefined4 *
FUN_1436f21e0(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 local_18;
  longlong local_10;
  
  uVar3 = 0;
  *param_5 = 0;
  param_5[1] = 0;
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = 0;
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar1 = *param_3;
  if (uVar1 < (uint)((*(longlong *)(lVar4 + 0x50) - *(longlong *)(lVar4 + 0x48)) / 0xc)) {
    uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x48) + (longlong)(int)uVar1 * 0xc) & 0xf0000000;
    if (uVar2 == 0x30000000) {
      FUN_1436f1a00(lVar4,&local_18,
                    *(longlong *)(lVar4 + 0x48) +
                    (longlong)*(int *)(*(longlong *)(lVar4 + 0x48) + (longlong)(int)uVar1 * 0xc + 8)
                    * 0xc);
      lVar4 = local_10;
      if (local_10 != 0) {
        uVar3 = FUN_1437151a0(local_10);
      }
    }
    else {
      if (uVar2 == 0x20000000) goto LAB_1436f2312;
      FUN_1436f1a00(lVar4,&local_18);
      lVar4 = local_10;
      if (local_10 != 0) {
        uVar3 = FUN_1437151a0(local_10);
      }
    }
    if ((uVar3 & 1) != 0) {
      FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
    }
    *param_5 = local_18;
    param_5[1] = lVar4;
    if ((*(byte *)(param_5 + 2) & 1) != 0) {
      FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
    }
    param_5[2] = uVar3;
    *param_2 = 0;
  }
  else {
LAB_1436f2312:
    *param_2 = 0x80040200;
  }
  return param_2;
}



// FUNCTION 1436f2340 FUN_1436f2340 body=155 status=ok
// SIG undefined FUN_1436f2340(void)

uint * FUN_1436f2340(longlong param_1,uint *param_2,uint *param_3,undefined8 param_4,
                    longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  *param_5 = 0;
  uVar1 = *param_3;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (uVar1 < (uint)((*(longlong *)(lVar2 + 0x50) - *(longlong *)(lVar2 + 0x48)) / 0xc)) {
    uVar3 = *(uint *)(*(longlong *)(lVar2 + 0x48) + (longlong)(int)uVar1 * 0xc) & 0xf0000000;
    if (uVar3 != 0x20000000) {
      *param_2 = -(uint)(uVar3 != 0) & 0x80040200;
      return param_2;
    }
    uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x48) + (longlong)(int)uVar1 * 0xc + 4);
    if ((ulonglong)uVar1 < (ulonglong)(longlong)(*(int *)(lVar2 + 0x40) - *(int *)(lVar2 + 0x38))) {
      *param_5 = (longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x38);
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1436f23e0 getVar body=79 status=ok
// SIG undefined getVar(void)

undefined8 * hkSerialize::Detail::TagfileBundle::getVar(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 local_18;
  longlong local_10;
  
  FUN_1436f1a00(param_1,&local_18);
  *param_2 = local_18;
  param_2[1] = local_10;
  if (local_10 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1437151a0();
  }
  param_2[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1436f2430 FUN_1436f2430 body=1282 status=ok
// SIG undefined FUN_1436f2430(void)

void FUN_1436f2430(int *param_1,ulonglong *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int local_res18 [2];
  int local_res20;
  longlong local_78;
  undefined1 local_70 [56];
  
  if (*param_3 != '\0') {
    return;
  }
  local_res20 = param_4;
  if (param_1[0x4c] == 1) {
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_70,&DAT_146b7bb10,1);
      lVar6 = FUN_14373bbd0(local_70,"Types cannot be added to when using a compendium.",
                            &DAT_145b909f0,0);
      *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x28) = 0x6bb;
      FUN_14373a950(local_70);
    }
    *param_1 = -0x7ffbfe00;
    return;
  }
  iVar3 = param_1[0x1a];
  iVar10 = param_1[6];
  if (iVar10 < 1) {
    iVar10 = 1;
  }
  if (iVar3 < iVar10) {
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_70,&DAT_146b7bb10,1);
      lVar6 = FUN_14373bbd0(local_70,"Cannot remove types while deserializing.",&DAT_145b909f0,0);
      *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x28) = 0x6c0;
      FUN_14373a950(local_70);
    }
    *param_1 = -0x7ffbfe00;
    return;
  }
  uVar7 = FUN_143703a50();
  if ((int)(param_1[7] & 0x3fffffffU) < iVar3) {
    iVar8 = (param_1[7] & 0x3fffffffU) * 2;
    iVar5 = iVar3;
    if (iVar3 < iVar8) {
      iVar5 = iVar8;
    }
    FUN_14370c310(uVar7,param_1 + 4,iVar5,8);
  }
  iVar5 = local_res20;
  iVar8 = iVar3 - param_1[6];
  if (0 < iVar8) {
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 4) + (longlong)param_1[6] * 8);
    for (lVar6 = (longlong)iVar8; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  iVar8 = 0;
  param_1[6] = iVar3;
  local_res18[0] = iVar3 - iVar10;
  if (local_res20 == 0) {
    if (param_2[1] < *(longlong *)(param_1 + 0x60) + *param_2) {
      *param_2 = param_2[1];
      *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
    }
    else {
      *param_2 = *(longlong *)(param_1 + 0x60) + *param_2;
    }
    if ((char)param_2[3] == '\0') {
      if (-1 < *param_1) goto LAB_1436f264a;
    }
    else {
      *param_1 = -0x7ffbfe00;
    }
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_70,&DAT_146b7bb10,1);
      lVar6 = FUN_14373bbd0(local_70,"Error in input stream.",&DAT_145b909f0,0);
      *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x28) = 0x6ca;
      FUN_14373a950(local_70);
    }
  }
  else {
LAB_1436f264a:
    if (param_2[1] != *param_2 && -1 < (longlong)(param_2[1] - *param_2)) {
      do {
        if (*(char *)*param_2 == '\0') break;
        if (local_res18[0] <= iVar8) {
          if (DAT_146b7bb18 != '\0') {
            FUN_14373a730(local_70,&DAT_146b7bb10,1);
            lVar6 = FUN_14373bbd0(local_70,
                                  "Too many type bodies actually present in bundle compared to what expected ({})."
                                  ,&DAT_145b74460,local_res18,0);
            *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar6 + 0x28) = 0x6ce;
            FUN_14373a950(local_70);
            *param_1 = -0x7ffbfe00;
            return;
          }
          goto LAB_1436f2873;
        }
        FUN_1436f3810(param_1,param_2);
        if ((char)param_2[3] != '\0') {
          *param_1 = -0x7ffbfe00;
LAB_1436f26a9:
          if (DAT_146b7bb18 == '\0') {
            return;
          }
          FUN_14373a730(local_70,&DAT_146b7bb10,1);
          lVar6 = FUN_14373bbd0(local_70,"Error in input stream.",&DAT_145b909f0,0);
          *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar6 + 0x28) = 0x6d0;
          FUN_14373a950(local_70);
          return;
        }
        if (*param_1 < 0) goto LAB_1436f26a9;
        iVar8 = iVar8 + 1;
      } while (param_2[1] != *param_2 && -1 < (longlong)(param_2[1] - *param_2));
    }
    uVar4 = *param_2;
    local_78 = param_2[1] - uVar4;
    if (local_78 < 4) {
      if (local_78 != 0) {
        do {
          pcVar1 = (char *)*param_2 + 1;
          if ((char *)param_2[1] < pcVar1) {
            *param_2 = param_2[1];
            *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
          }
          else {
            cVar2 = *(char *)*param_2;
            *param_2 = (ulonglong)pcVar1;
            if (cVar2 != '\0') {
              if (DAT_146b7bb18 != '\0') {
                FUN_14373a730(local_70,&DAT_146b7bb10,1);
                lVar6 = FUN_14373bbd0(local_70,
                                      "Found non-zero byte in padding of type body section (TBOD/TBDY)."
                                      ,&DAT_145b909f0,0);
                *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar6 + 0x28) = 0x6d9;
                *(undefined4 *)(lVar6 + 0xc) = 0x68bf09d3;
                FUN_14373a950(local_70);
              }
              goto LAB_1436f2873;
            }
          }
        } while (param_2[1] != *param_2);
      }
      if ((char)param_2[3] == '\0') {
        if (-1 < *param_1) {
          if (iVar5 != 0) {
            return;
          }
          *(ulonglong *)(param_1 + 0x60) = uVar4 - param_2[2];
          return;
        }
      }
      else {
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(local_70,&DAT_146b7bb10,1);
        lVar6 = FUN_14373bbd0(local_70,"Error in input stream.",&DAT_145b909f0,0);
        *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar6 + 0x28) = 0x6db;
        FUN_14373a950(local_70);
      }
    }
    else if (DAT_146b7bb18 == '\0') {
LAB_1436f2873:
      *param_1 = -0x7ffbfe00;
    }
    else {
      FUN_14373a730(local_70,&DAT_146b7bb10,1);
      lVar6 = FUN_14373bbd0(local_70,
                            "Type body section (TBOD/TBDY) has oversized padding: max padding of 3 bytes expected, found {} instead."
                            ,&DAT_145b74848,&local_78,0);
      *(char **)(lVar6 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x28) = 0x6d5;
      *(undefined4 *)(lVar6 + 0xc) = 0x16964161;
      FUN_14373a950(local_70);
      *param_1 = -0x7ffbfe00;
    }
  }
  return;
}



// FUNCTION 1436f2940 FUN_1436f2940 body=2587 status=ok
// SIG undefined FUN_1436f2940(void)

void FUN_1436f2940(int *param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  int iVar14;
  longlong lVar15;
  undefined8 local_res8;
  ulonglong *local_res10;
  int local_res20 [2];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined4 local_88;
  int local_84;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  int local_48 [2];
  ulonglong local_40;
  
  iVar14 = param_1[0x1a] + -1;
  if (0 < iVar14) {
    lVar9 = (longlong)iVar14;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8);
    do {
      if ((undefined *)*puVar11 != &DAT_1467dd018) break;
      iVar14 = iVar14 + -1;
      lVar9 = lVar9 + -1;
      puVar11 = puVar11 + -1;
    } while (0 < lVar9);
  }
  iVar14 = iVar14 + 1;
  iVar4 = FUN_1436f0600(param_2);
  lVar9 = (longlong)iVar4;
  if ((char)param_2[3] == '\0') {
    if (-1 < *param_1) {
      if (iVar4 < iVar14) {
        if (DAT_146b7bb18 != '\0') {
          FUN_14373a730(local_98,&DAT_146b7bb10,1);
          lVar9 = FUN_14373bbd0(local_98,"Cannot remove types.",&DAT_145b909f0,0);
          *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar9 + 0x28) = 0x76a;
          FUN_14373a950(local_98);
        }
      }
      else {
        if (iVar4 == iVar14) {
          return;
        }
        local_res20[0] = iVar4 - iVar14;
        if ((longlong)local_res20[0] <= param_2[1] - *param_2) {
          uVar7 = FUN_143703a50();
          if ((int)(param_1[0x1b] & 0x3fffffffU) < iVar4) {
            iVar3 = (param_1[0x1b] & 0x3fffffffU) * 2;
            iVar5 = iVar4;
            if (iVar4 < iVar3) {
              iVar5 = iVar3;
            }
            iVar5 = FUN_14370c310(uVar7,param_1 + 0x18,iVar5,8);
            if (iVar5 < 0) {
              if (DAT_146b7bb18 != '\0') {
                FUN_14373a730(local_98,&DAT_146b7bb10,1);
                lVar9 = FUN_14373bbd0(local_98,
                                      "Failed to allocate storage for {} new type identities.",
                                      &DAT_145b74460,local_res20,0);
                *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar9 + 0x28) = 0x772;
                FUN_14373a950(local_98);
                *param_1 = -0x7ffbfe00;
                return;
              }
              goto LAB_1436f2a76;
            }
          }
          iVar5 = iVar4 - param_1[0x1a];
          if (0 < iVar5) {
            puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_1[0x1a] * 8);
            for (lVar10 = (longlong)iVar5; lVar10 != 0; lVar10 = lVar10 + -1) {
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            }
          }
          param_1[0x1a] = iVar4;
          lVar10 = FUN_143702b60(param_1 + 0x30,0x38,local_res20[0]);
          local_58 = (longlong)iVar14;
          if (local_58 < lVar9) {
            puVar11 = (undefined8 *)(lVar10 + 0x18);
            lVar10 = local_58;
            do {
              puVar1 = puVar11 + -3;
              if (puVar1 != (undefined8 *)0x0) {
                puVar11[-1] = 1;
                *puVar11 = 0;
                puVar11[1] = 0;
                puVar11[2] = 0;
                *(undefined4 *)(puVar11 + 3) = 0;
                *puVar1 = 0x800001;
                puVar11[-2] = 0;
              }
              puVar11 = puVar11 + 7;
              *(undefined8 **)(*(longlong *)(param_1 + 0x18) + lVar10 * 8) = puVar1;
              lVar10 = lVar10 + 1;
            } while (lVar10 < lVar9);
          }
          local_60 = lVar9;
          if (param_4 == 0) {
            iVar4 = 1;
            if (1 < iVar14) {
              do {
                FUN_1436f4f10(param_2);
                uVar6 = FUN_1436f0600(param_2);
                if ((char)param_2[3] != '\0') {
                  *param_1 = -0x7ffbfe00;
LAB_1436f2caa:
                  if (DAT_146b7bb18 == '\0') {
                    return;
                  }
                  FUN_14373a730(local_98,&DAT_146b7bb10,1);
                  lVar9 = FUN_14373bbd0(local_98,"Error in input stream.",&DAT_145b909f0,0);
                  *(undefined8 *)(lVar9 + 0x28) = 0x784;
                  goto LAB_1436f3326;
                }
                if (*param_1 < 0) goto LAB_1436f2caa;
                if (0 < (int)uVar6) {
                  uVar12 = (ulonglong)uVar6;
                  do {
                    FUN_1436f4f10(param_2);
                    FUN_1436f4f10(param_2);
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar14);
            }
            if ((char)param_2[3] == '\0') {
              if (-1 < *param_1) goto LAB_1436f2d47;
            }
            else {
              *param_1 = -0x7ffbfe00;
            }
            if (DAT_146b7bb18 == '\0') {
              return;
            }
            FUN_14373a730(local_98,&DAT_146b7bb10,1);
            lVar9 = FUN_14373bbd0(local_98,"Error in input stream.",&DAT_145b909f0,0);
            *(undefined8 *)(lVar9 + 0x28) = 0x78b;
LAB_1436f3326:
            *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            FUN_14373a950(local_98);
            return;
          }
LAB_1436f2d47:
          lVar9 = local_60;
          if (local_60 <= local_58) {
            return;
          }
          do {
            puVar13 = *(ulonglong **)(*(longlong *)(param_1 + 0x18) + local_58 * 8);
            *(int *)(puVar13 + 6) = iVar14;
            local_res10 = puVar13;
            local_40 = FUN_1436f4f10(param_2);
            if ((char)param_2[3] != '\0') {
              *param_1 = -0x7ffbfe00;
LAB_1436f32e5:
              if (DAT_146b7bb18 == '\0') {
                return;
              }
              FUN_14373a730(local_98,&DAT_146b7bb10,1);
              lVar9 = FUN_14373bbd0(local_98,"Error in input stream.",&DAT_145b909f0,0);
              *(undefined8 *)(lVar9 + 0x28) = 0x799;
              goto LAB_1436f3326;
            }
            if (*param_1 < 0) goto LAB_1436f32e5;
            if (local_40 < 0x80000000) {
              if ((ulonglong)(longlong)param_1[0x1e] <= local_40) {
                if (DAT_146b7bb18 != '\0') {
                  FUN_14373a730(local_98,&DAT_146b7bb10,1);
                  lVar9 = FUN_14373bbd0(local_98,"Invalid type name string ID #{} (out of bounds).",
                                        &DAT_145b74d70,&local_40,0);
                  *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar9 + 0x28) = 0x79c;
                  FUN_14373a950(local_98);
                  *param_1 = -0x7ffbfe00;
                  return;
                }
                goto LAB_1436f3287;
              }
              uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x1c) + (longlong)(int)local_40 * 8);
              *puVar13 = *puVar13 | 8;
              puVar13[3] = uVar12;
            }
            iVar4 = FUN_1436f0600(param_2);
            lVar10 = (longlong)iVar4;
            if ((char)param_2[3] != '\0') {
              *param_1 = -0x7ffbfe00;
LAB_1436f3298:
              if (DAT_146b7bb18 == '\0') {
                return;
              }
              FUN_14373a730(local_98,&DAT_146b7bb10,1);
              lVar9 = FUN_14373bbd0(local_98,"Error in input stream.",&DAT_145b909f0,0);
              *(undefined8 *)(lVar9 + 0x28) = 0x7a3;
              goto LAB_1436f3326;
            }
            if (*param_1 < 0) goto LAB_1436f3298;
            if (0 < iVar4) {
              if ((param_2[1] - *param_2) / 2 < lVar10) {
                if (DAT_146b7bb18 != '\0') {
                  FUN_14373a730(local_98,&DAT_146b7bb10,1);
                  lVar9 = FUN_14373bbd0(local_98,"Invalid template",&DAT_145b909f0,0);
                  *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar9 + 0x28) = 0x7a6;
                  FUN_14373a950(local_98);
                }
LAB_1436f3287:
                *param_1 = -0x7ffbfe00;
                return;
              }
              puVar8 = (ulonglong *)FUN_143714810(lVar10,param_1 + 0x30);
              *puVar13 = *puVar13 | 0x40000;
              puVar13[4] = (ulonglong)puVar8;
              lVar15 = 0;
              lVar9 = local_60;
              if (0 < lVar10) {
                do {
                  puVar13 = puVar8 + 2;
                  local_res20[0] = FUN_1436f0600(param_2);
                  local_50 = thunk_FUN_1436f4f10(param_2);
                  if ((char)param_2[3] != '\0') {
                    *param_1 = -0x7ffbfe00;
LAB_1436f31e8:
                    if (DAT_146b7bb18 == '\0') {
                      return;
                    }
                    FUN_14373a730(local_98,&DAT_146b7bb10,1);
                    lVar9 = FUN_14373bbd0(local_98,"Error in input stream.",&DAT_145b909f0,0);
                    *(undefined8 *)(lVar9 + 0x28) = 0x7b2;
                    goto LAB_1436f3326;
                  }
                  if (*param_1 < 0) goto LAB_1436f31e8;
                  if ((local_res20[0] < 0) || (param_1[0x1e] <= local_res20[0])) {
                    if (DAT_146b7bb18 != '\0') {
                      local_res8 = FUN_1437151f0(local_res10);
                      FUN_14373a730(local_98,&DAT_146b7bb10,1);
                      lVar9 = FUN_14373bbd0(local_98,
                                            "Invalid template parameter name string ID #{} (out of bounds) for type \'{}\'."
                                            ,&DAT_145b74d80,local_res20,&local_res8,0);
                      *(char **)(lVar9 + 0x20) =
                           "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                      *(undefined8 *)(lVar9 + 0x28) = 0x7b5;
                      FUN_14373a950(local_98);
                      *param_1 = -0x7ffbfe00;
                      return;
                    }
                    goto LAB_1436f3287;
                  }
                  iVar4 = FUN_14370c910(*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x1c) +
                                         (longlong)local_res20[0] * 8));
                  if (iVar4 < 2) {
                    if (DAT_146b7bb18 != '\0') {
                      local_res8 = FUN_1437151f0(local_res10);
                      FUN_14373a730(local_98,&DAT_146b7bb10,1);
                      lVar9 = FUN_14373bbd0(local_98,
                                            "Invalid template parameter string ID #{} with empty name for type \'{}\'."
                                            ,&DAT_145b74d80,local_res20,&local_res8,0);
                      *(char **)(lVar9 + 0x20) =
                           "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                      *(undefined8 *)(lVar9 + 0x28) = 0x7b7;
                      FUN_14373a950(local_98);
                      *param_1 = -0x7ffbfe00;
                      return;
                    }
                    goto LAB_1436f3287;
                  }
                  pcVar2 = *(char **)(*(longlong *)(param_1 + 0x1c) + (longlong)local_res20[0] * 8);
                  if ((*pcVar2 + 0x8cU & 0xfd) != 0) {
                    if (DAT_146b7bb18 != '\0') {
                      local_res8 = FUN_1437151f0(local_res10);
                      lVar10 = (longlong)local_res20[0];
                      lVar9 = *(longlong *)(param_1 + 0x1c);
                      uVar7 = *(undefined8 *)(lVar9 + lVar10 * 8);
                      FUN_14373a730(local_98,&DAT_146b7bb10,1);
                      lVar9 = FUN_14373bbd0(local_98,
                                            "Invalid template parameter name \'{}\' for type \'{}\' (expected \'t\' for type, \'v\' for value; found \'{}\' instead)."
                                            ,&DAT_145b74d98,lVar9 + lVar10 * 8,&local_res8,uVar7,0);
                      *(char **)(lVar9 + 0x20) =
                           "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                      *(undefined8 *)(lVar9 + 0x28) = 0x7b9;
                      FUN_14373a950(local_98);
                      *param_1 = -0x7ffbfe00;
                      return;
                    }
                    goto LAB_1436f3287;
                  }
                  puVar8[3] = (ulonglong)pcVar2;
                  if (*pcVar2 == 't') {
                    if ((local_50 == 0) || ((ulonglong)(longlong)param_1[0x1a] <= local_50)) {
                      if (DAT_146b7bb18 != '\0') {
                        local_res8 = FUN_1437151f0(local_res10);
                        FUN_14373a730(local_98,&DAT_146b7bb10,1);
                        lVar9 = FUN_14373bbd0(local_98,
                                              "Invalid template type ID #{} (out of bounds) for type \'{}\'."
                                              ,&DAT_145b74db8,&local_50,&local_res8,0);
                        *(char **)(lVar9 + 0x20) =
                             "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                        *(undefined8 *)(lVar9 + 0x28) = 0x7be;
                        FUN_14373a950(local_98);
                        *param_1 = -0x7ffbfe00;
                        return;
                      }
                      goto LAB_1436f3287;
                    }
                    *puVar13 = *(ulonglong *)
                                (*(longlong *)(param_1 + 0x18) + (longlong)(int)local_50 * 8);
                  }
                  else {
                    *puVar13 = local_50;
                  }
                  lVar15 = lVar15 + 1;
                  lVar9 = local_60;
                  puVar8 = puVar13;
                } while (lVar15 < lVar10);
              }
            }
            local_res8 = CONCAT44(local_res8._4_4_,iVar14);
            local_90 = 0;
            local_88 = 0;
            local_84 = -0x80000000;
            FUN_1436eec30(param_1 + 0x28,local_48,&local_res8,local_98);
            *(ulonglong **)((longlong)local_48[0] * 0x20 + 8 + *(longlong *)(param_1 + 0x28)) =
                 local_res10;
            uVar7 = FUN_143703a50();
            local_88 = 0;
            if (-1 < local_84) {
              FUN_143702e10(uVar7,local_90,0x10);
            }
            iVar14 = iVar14 + 1;
            local_58 = local_58 + 1;
            local_90 = 0;
            local_84 = 0x80000000;
            if (lVar9 <= local_58) {
              return;
            }
          } while( true );
        }
        if (DAT_146b7bb18 != '\0') {
          FUN_14373a730(local_98,&DAT_146b7bb10,1);
          lVar9 = FUN_14373bbd0(local_98,"More types than would fit in the section",&DAT_145b909f0,0
                               );
          *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar9 + 0x28) = 0x771;
          FUN_14373a950(local_98);
          *param_1 = -0x7ffbfe00;
          return;
        }
      }
LAB_1436f2a76:
      *param_1 = -0x7ffbfe00;
      return;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_146b7bb18 != '\0') {
    FUN_14373a730(local_98,&DAT_146b7bb10,1);
    lVar9 = FUN_14373bbd0(local_98,"Error in input stream.",&DAT_145b909f0,0);
    *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar9 + 0x28) = 0x769;
    FUN_14373a950(local_98);
  }
  return;
}



// FUNCTION 1436f3360 FUN_1436f3360 body=73 status=ok
// SIG undefined FUN_1436f3360(void)

undefined8 FUN_1436f3360(longlong param_1,undefined8 param_2)

{
  FUN_1436f51d0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 1436f33b0 FUN_1436f33b0 body=30 status=ok
// SIG undefined FUN_1436f33b0(void)

bool FUN_1436f33b0(undefined8 param_1)

{
  char *pcVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  pcVar1 = (char *)FUN_1437151c0(local_res8);
  return *pcVar1 == '$';
}



// FUNCTION 1436f33d0 FUN_1436f33d0 body=56 status=ok
// SIG undefined FUN_1436f33d0(void)

undefined8 FUN_1436f33d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  
  if (*(int *)*param_3 != 0) {
    cVar1 = FUN_143714910(param_2,&DAT_1467e6b20);
    if (cVar1 != '\0') {
      return *param_3;
    }
  }
  return 0;
}



// FUNCTION 1436f3410 FUN_1436f3410 body=422 status=ok
// SIG undefined FUN_1436f3410(void)

longlong * FUN_1436f3410(int *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 local_res20 [8];
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined1 *local_1b8;
  int local_1b0;
  uint local_1ac;
  undefined1 local_1a8 [384];
  
  piVar6 = (int *)FUN_1436f4f70(param_1,local_res20);
  if (*piVar6 < 0) {
    *param_2 = 0;
    return param_2;
  }
  local_1c0 = 0x7fffffffffffffff;
  local_1b8 = local_1a8;
  local_1b0 = 0;
  local_1ac = 0x80000010;
  local_1c8 = param_3;
  iVar5 = FUN_1436eea40(param_1,&local_1c8);
  if (iVar5 != 0) {
    uVar1 = *(uint *)(local_1b8 + (longlong)(local_1b0 + -1) * 0x18 + 4);
    lVar2 = param_3[2];
    lVar3 = param_3[5];
    lVar4 = *param_3;
    uVar7 = FUN_143734630(param_3);
    FUN_143734710(param_3,local_res20,((int)((uVar1 & 0x3fffffff) - 8) - lVar2) + lVar3 + lVar4);
    local_1d8 = param_1[0x86];
    iStack_1d4 = param_1[0x87];
    iStack_1d0 = param_1[0x88];
    iStack_1cc = param_1[0x89];
    param_1[0x42] = param_1[0x42] + 1;
    FUN_1436f02a0(&local_1c8,param_1,&local_1d8);
    if (-1 < *param_1) {
      FUN_1436eeb80(param_1,&local_1c8,iVar5);
      *param_2 = (longlong)(param_1 + 2);
      FUN_143734710(param_3,local_res20,uVar7);
      goto LAB_1436f3567;
    }
    FUN_143734710(param_3,local_res20,uVar7);
  }
  *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 2;
  *param_2 = 0;
LAB_1436f3567:
  uVar7 = FUN_143703a50();
  local_1b0 = 0;
  if (-1 < (int)local_1ac) {
    FUN_143702e10(uVar7,local_1b8,0x18,local_1ac & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 1436f35c0 FUN_1436f35c0 body=27 status=ok
// SIG undefined FUN_1436f35c0(void)

undefined8 FUN_1436f35c0(longlong param_1,undefined8 param_2)

{
  FUN_1436f3410(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 1436f35e0 FUN_1436f35e0 body=281 status=ok
// SIG undefined FUN_1436f35e0(void)

undefined8 FUN_1436f35e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_48 [64];
  
  uVar5 = *(uint *)(param_2[2] + 4 + (longlong)((int)param_2[3] + -1) * 0x18) & 0x3fffffff;
  lVar4 = (longlong)(int)(uVar5 - 8);
  lVar2 = (**(code **)(*param_3 + 8))(param_3,uVar5);
  plVar1 = (longlong *)*param_2;
  if (plVar1[1] - *plVar1 < lVar4) {
    lVar3 = hkIo::ReadBuffer::implRead(plVar1,lVar2,lVar4);
    if (lVar3 != lVar4) {
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(local_48,&DAT_146b7bb10,1);
        lVar2 = FUN_14373bbd0(local_48,"Invalid section size",&DAT_145b909f0,0);
        *(char **)(lVar2 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar2 + 0x28) = 0x9b;
        FUN_14373a950(local_48);
      }
      *(byte *)(*param_2 + 0x20) = *(byte *)(*param_2 + 0x20) | 2;
      return 0x80040200;
    }
  }
  else {
    FGenericPlatformString::Memcpy(lVar2);
    *plVar1 = *plVar1 + lVar4;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = lVar2 + lVar4;
  *param_1 = lVar2;
  param_1[2] = lVar2;
  return 0;
}



// FUNCTION 1436f3700 FUN_1436f3700 body=108 status=ok
// SIG undefined FUN_1436f3700(void)

undefined8 FUN_1436f3700(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_2[1] - *param_2;
  lVar1 = (**(code **)(*param_3 + 8))(param_3,(int)lVar2 + 8);
  FGenericPlatformString::Memcpy(lVar1,param_2[2],lVar2);
  *param_1 = lVar1;
  param_1[2] = lVar1;
  param_1[1] = lVar1 + lVar2;
  *(undefined1 *)(param_1 + 3) = 0;
  return 0;
}



// FUNCTION 1436f3770 FUN_1436f3770 body=153 status=ok
// SIG undefined FUN_1436f3770(void)

void FUN_1436f3770(undefined8 param_1,longlong param_2,longlong *param_3,char param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar1 = *(char **)(param_2 + 8);
  pcVar3 = *(char **)(param_2 + 0x10);
  pcVar4 = pcVar3;
  for (; pcVar3 != pcVar1; pcVar3 = pcVar3 + 1) {
    if (*pcVar3 == '\0') {
      if ((pcVar4 != pcVar3) || (param_4 != '\0')) {
        uVar2 = FUN_143703a50();
        if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar2,param_3,8);
        }
        *(char **)(*param_3 + (longlong)(int)param_3[1] * 8) = pcVar4;
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      }
      pcVar4 = pcVar3 + 1;
    }
  }
  return;
}



// FUNCTION 1436f3810 FUN_1436f3810 body=5852 status=ok
// SIG undefined FUN_1436f3810(void)

void FUN_1436f3810(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined8 local_res8;
  uint local_res10 [2];
  int local_res18 [2];
  uint local_res20 [2];
  undefined1 local_3c8 [56];
  uint *local_390;
  uint local_388;
  undefined8 local_380;
  ulonglong local_378;
  undefined8 local_370;
  undefined4 local_368;
  int local_364;
  undefined1 *local_360;
  uint local_358;
  uint local_354;
  undefined1 local_350 [128];
  undefined1 *local_2d0;
  uint local_2c8;
  uint local_2c4;
  undefined1 local_2c0 [128];
  undefined1 *local_240;
  uint local_238;
  uint local_234;
  undefined1 local_230 [8];
  undefined1 local_228 [96];
  ulonglong local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  int *local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong *local_130;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 local_f0;
  undefined8 local_e0;
  
  local_res18[0] = FUN_1436f0600(param_2);
  uVar6 = FUN_1436f0600(param_2);
  local_res10[0] = FUN_1436f0620(param_2);
  uVar20 = (ulonglong)local_res10[0];
  if ((char)param_2[3] != '\0') {
    *param_1 = -0x7ffbfe00;
LAB_1436f3869:
    if (DAT_146b7bb18 == '\0') {
      return;
    }
    FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
    lVar9 = FUN_14373bbd0(local_3c8,"Error in input stream.",&DAT_145b909f0,0);
    *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar9 + 0x28) = 0x507;
    FUN_14373a950(local_3c8);
    return;
  }
  if (*param_1 < 0) goto LAB_1436f3869;
  lVar9 = (longlong)local_res18[0];
  cVar2 = FUN_1436f51b0(local_res18[0],param_1 + 2);
  if (cVar2 != '\0') {
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
      lVar9 = FUN_14373bbd0(local_3c8,"Invalid type ID (out of bounds).",&DAT_145b909f0,0);
      *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x28) = 0x50b;
      *(undefined4 *)(lVar9 + 0xc) = 0x71b95bd8;
      FUN_14373a950(local_3c8);
    }
LAB_1436f3949:
    *param_1 = -0x7ffbfe00;
    return;
  }
  if ((int)((longlong)param_1[6] * 8 >> 3) <= (int)lVar9) {
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
      lVar9 = FUN_14373bbd0(local_3c8,"Invalid type ID (out of bounds).",&DAT_145b909f0,0);
      *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x28) = 0x50c;
      *(undefined4 *)(lVar9 + 0xc) = 0x71b95bd9;
      FUN_14373a950(local_3c8);
      *param_1 = -0x7ffbfe00;
      return;
    }
    goto LAB_1436f3949;
  }
  if (*(longlong *)(lVar9 * 8 + *(longlong *)(param_1 + 4)) != 0) {
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
      lVar9 = FUN_14373bbd0(local_3c8,"TypeId {} already read",&DAT_145b74460,local_res18,0);
      *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x28) = 0x50d;
      FUN_14373a950(local_3c8);
      *param_1 = -0x7ffbfe00;
      return;
    }
    goto LAB_1436f3949;
  }
  puVar17 = *(uint **)(lVar9 * 8 + *(longlong *)(param_1 + 0x18));
  local_390 = puVar17;
  cVar2 = FUN_1436f51c0(uVar6,param_1 + 2);
  if (cVar2 != '\0') {
    if (DAT_146b7bb18 != '\0') {
      local_res8 = FUN_1437151f0(puVar17);
      FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
      lVar9 = FUN_14373bbd0(local_3c8,"Invalid parent type ID (out of bounds) for type \'{}\'.",
                            &DAT_145b74470,&local_res8,0);
      *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x28) = 0x511;
      FUN_14373a950(local_3c8);
      *param_1 = -0x7ffbfe00;
      return;
    }
LAB_1436f3d34:
    *param_1 = -0x7ffbfe00;
    return;
  }
  iVar19 = 0;
  bVar21 = (uVar20 & 1) != 0;
  if (bVar21) {
    local_res10[0] = (uint)uVar20 ^ 1;
    uVar20 = (ulonglong)local_res10[0];
  }
  uVar13 = (uint)bVar21;
  if ((uVar20 & 2) != 0) {
    uVar13 = bVar21 | 2;
    local_res10[0] = (uint)uVar20 ^ 2;
    uVar20 = (ulonglong)local_res10[0];
  }
  uVar16 = (uint)uVar20;
  if ((uVar20 & 4) != 0) {
    uVar13 = uVar13 | 0x10;
    uVar16 = uVar16 ^ 4;
    local_res10[0] = uVar16;
  }
  if ((uVar16 & 8) != 0) {
    uVar13 = uVar13 | 0x800000;
    uVar16 = uVar16 ^ 8;
    local_res10[0] = uVar16;
  }
  if ((uVar16 & 0x10) != 0) {
    uVar13 = uVar13 | 0x1000000;
    uVar16 = uVar16 ^ 0x10;
    local_res10[0] = uVar16;
  }
  if ((uVar16 & 0x20) != 0) {
    uVar13 = uVar13 | 0x4000000;
    uVar16 = uVar16 ^ 0x20;
    local_res10[0] = uVar16;
  }
  if ((uVar16 & 0x40) != 0) {
    uVar13 = uVar13 | 0x20000;
    uVar16 = uVar16 ^ 0x40;
    local_res10[0] = uVar16;
  }
  if ((uVar16 & 0x80) != 0) {
    uVar13 = uVar13 | 0x10000000;
    uVar16 = uVar16 ^ 0x80;
    local_res10[0] = uVar16;
  }
  local_res8 = CONCAT44(local_res8._4_4_,uVar13);
  if (uVar16 != 0) {
    if (DAT_146b7bb18 != '\0') {
      local_390 = (uint *)FUN_1437151f0(puVar17);
      FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
      lVar9 = FUN_14373bbd0(local_3c8,"Invalid Opt bits 0x{:x} on content of type \'{}\'.",
                            &DAT_145b74480,local_res10,&local_390,0);
      *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x28) = 0x523;
      FUN_14373a950(local_3c8);
      *param_1 = -0x7ffbfe00;
      return;
    }
    goto LAB_1436f3d34;
  }
  cVar2 = FUN_14374ba80(param_1 + 0x68);
  if (cVar2 == '\0') {
    if (DAT_146b7bb18 != '\0') {
      local_390 = (uint *)FUN_1437151f0(puVar17);
      FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
      lVar9 = FUN_14373bbd0(local_3c8,"Forbidden Opt bits 0x{:x} on content of type \'{}\'.",
                            &DAT_145b74480,&local_res8,&local_390,0);
      *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x28) = 0x526;
      FUN_14373a950(local_3c8);
    }
    goto LAB_1436f3d34;
  }
  local_res10[0] = (uint)local_res8;
  FUN_143737060(local_228);
  local_360 = local_350;
  local_2d0 = local_2c0;
  local_364 = 0;
  local_240 = local_230;
  local_358 = 0;
  local_354 = 0x80000020;
  local_2c8 = 0;
  local_2c4 = 0x80000020;
  local_238 = 0;
  local_234 = 0x80000002;
  local_res20[0] = 0;
  local_368 = uVar6;
  if ((local_res10[0] & 1) == 0) goto LAB_1436f3f8d;
  local_res20[0] = FUN_1436f0620(param_2);
  uVar20 = (ulonglong)local_res20[0];
  if ((char)param_2[3] != '\0') {
    *param_1 = -0x7ffbfe00;
LAB_1436f3dda:
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
      lVar9 = FUN_14373bbd0(local_3c8,"Error in input stream.",&DAT_145b909f0,0);
      *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x28) = 0x538;
      FUN_14373a950(local_3c8);
    }
    goto LAB_1436f4ec1;
  }
  if (*param_1 < 0) goto LAB_1436f3dda;
  uVar14 = local_1c8 | 1;
  local_1c0 = uVar20;
  switch(local_res20[0] & 0x1f) {
  case 0:
    local_1b0 = (int *)&DAT_146b7bb88;
    break;
  case 1:
    local_1b0 = (int *)&DAT_146b7bb98;
    break;
  case 2:
  case 4:
  case 5:
    local_1c8 = uVar14;
    lVar9 = FUN_143749330(uVar20);
    if (lVar9 != 0) {
      local_1b0 = (int *)FUN_1437151a0(lVar9);
      uVar14 = local_1c8;
      break;
    }
    if (DAT_146b7bb18 != '\0') {
      local_res8 = FUN_1437151f0(puVar17);
      FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
      lVar9 = FUN_14373bbd0(local_3c8,
                            "Cannot find a built-in type corresponding to format 0x{:x8} of type \'{}\' (invalid format?)."
                            ,&DAT_145b74480,local_res20,&local_res8,0);
      *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x28) = 0x553;
      *(undefined4 *)(lVar9 + 0xc) = 0x775182a1;
      FUN_14373a950(local_3c8);
      *param_1 = -0x7ffbfe00;
      goto LAB_1436f4ec1;
    }
    goto LAB_1436f4388;
  case 3:
    local_1b0 = param_1 + 0x5a;
    break;
  case 6:
    local_1b0 = param_1 + 0x4e;
    break;
  case 7:
    local_f0 = 0;
    local_1b0 = (int *)&DAT_146b82b68;
    uVar14 = local_1c8 | 0x4000001;
    break;
  case 8:
    local_1b0 = param_1 + 0x54;
    break;
  default:
    local_1c8 = uVar14;
    if (DAT_146b7bb18 != '\0') {
      local_390 = (uint *)FUN_1437151f0(puVar17);
      local_res8 = CONCAT44(local_res8._4_4_,local_res20[0]) & 0xffffffff0000001f;
      FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
      lVar9 = FUN_14373bbd0(local_3c8,"Unknown format kind 0x{:x8} for type \'{}\'.",&DAT_145b74480,
                            &local_res8,&local_390,0);
      *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x28) = 0x56a;
      FUN_14373a950(local_3c8);
      *param_1 = -0x7ffbfe00;
      goto LAB_1436f4ec1;
    }
    goto LAB_1436f4388;
  }
  local_1c8 = uVar14 | 4;
LAB_1436f3f8d:
  if ((local_res10[0] & 2) == 0) {
LAB_1436f41e1:
    if ((local_res10[0] & 0x10) != 0) {
      local_res8 = FUN_1436f4f10(param_2);
      if ((char)param_2[3] == '\0') {
        if (-1 < *param_1) {
          if (((local_res8 & 0xffffffff00000000) + 0x100000000 & 0xfffffffeffffffff) == 0) {
            if (-1 < (int)local_res8) {
              local_1c8 = local_1c8 | 0x10;
              local_1a0 = (longlong)(int)local_res8;
              goto LAB_1436f43a5;
            }
            if (DAT_146b7bb18 != '\0') {
              FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
              lVar9 = FUN_14373bbd0(local_3c8,"Invalid negative version for type #{}.",
                                    &DAT_145b74460,local_res18,0);
              *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar9 + 0x28) = 0x58e;
              FUN_14373a950(local_3c8);
            }
          }
          else if (DAT_146b7bb18 != '\0') {
            FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
            lVar9 = FUN_14373bbd0(local_3c8,"Invalid version number {} for type #{}.",&DAT_145b74498
                                  ,&local_res8,local_res18,0);
            *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar9 + 0x28) = 0x58c;
            *(undefined4 *)(lVar9 + 0xc) = 0xfc913ab0;
            FUN_14373a950(local_3c8);
            *param_1 = -0x7ffbfe00;
            goto LAB_1436f4ec1;
          }
          goto LAB_1436f4388;
        }
      }
      else {
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
        lVar9 = FUN_14373bbd0(local_3c8,"Error in input stream.",&DAT_145b909f0,0);
        *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x28) = 0x589;
        FUN_14373a950(local_3c8);
      }
      goto LAB_1436f4ec1;
    }
LAB_1436f43a5:
    if ((local_res10[0] & 0x800000) != 0) {
      uVar13 = FUN_1436f0620(param_2);
      uVar3 = FUN_1436f0620(param_2);
      if ((char)param_2[3] == '\0') {
        if (-1 < *param_1) {
          local_1c8 = local_1c8 | 0x800000;
          local_108 = (ulonglong)((uVar3 & 0xfff | (uint)(uVar3 >> 0xc) << 0xc) << 0x10) |
                      (ulonglong)uVar13 & 0xffff;
          goto LAB_1436f447d;
        }
      }
      else {
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
        lVar9 = FUN_14373bbd0(local_3c8,"Error in input stream.",&DAT_145b909f0,0);
        *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x28) = 0x597;
        FUN_14373a950(local_3c8);
      }
      goto LAB_1436f4ec1;
    }
LAB_1436f447d:
    if ((local_res10[0] & 0x1000000) != 0) {
      uVar3 = FUN_1436f05e0(param_2);
      if ((char)param_2[3] == '\0') {
        if (-1 < *param_1) {
          local_1c8 = local_1c8 | 0x1000000;
          local_100 = (ulonglong)uVar3;
          goto LAB_1436f451d;
        }
      }
      else {
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
        lVar9 = FUN_14373bbd0(local_3c8,"Error in input stream.",&DAT_145b909f0,0);
        *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x28) = 0x5a4;
        FUN_14373a950(local_3c8);
      }
      goto LAB_1436f4ec1;
    }
LAB_1436f451d:
    if ((local_res10[0] & 0x4000000) == 0) {
LAB_1436f4787:
      if ((local_res10[0] & 0x20000) != 0) {
        iVar7 = FUN_1436f0600(param_2);
        if ((char)param_2[3] == '\0') {
          if (-1 < *param_1) {
            if ((param_2[1] - *param_2) / 2 < (longlong)iVar7) {
              if (DAT_146b7bb18 != '\0') {
                FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
                lVar9 = FUN_14373bbd0(local_3c8,"Too many fields",&DAT_145b909f0,0);
                *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar9 + 0x28) = 0x5d0;
                FUN_14373a950(local_3c8);
                *param_1 = -0x7ffbfe00;
                goto LAB_1436f4ec1;
              }
              goto LAB_1436f4e7e;
            }
            iVar18 = iVar19;
            if (0 < iVar7) {
              do {
                uVar6 = FUN_1436f0600(param_2);
                uVar8 = FUN_1436f0600(param_2);
                if ((char)param_2[3] != '\0') {
                  *param_1 = -0x7ffbfe00;
LAB_1436f4bd2:
                  if (DAT_146b7bb18 != '\0') {
                    FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
                    lVar9 = FUN_14373bbd0(local_3c8,"Error in input stream.",&DAT_145b909f0,0);
                    *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp"
                    ;
                    *(undefined8 *)(lVar9 + 0x28) = 0x5d6;
                    FUN_14373a950(local_3c8);
                  }
                  goto LAB_1436f4ec1;
                }
                if (*param_1 < 0) goto LAB_1436f4bd2;
                cVar2 = FUN_1436f51b0(uVar6,param_1 + 2,uVar8);
                if (cVar2 != '\0') {
                  if (DAT_146b7bb18 == '\0') goto LAB_1436f4e7e;
                  local_res8 = FUN_1437151f0(puVar17);
                  FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
                  lVar9 = FUN_14373bbd0(local_3c8,
                                        "Invalid interface type ID (out of bounds) for type \'{}\'."
                                        ,&DAT_145b74470,&local_res8,0);
                  *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar9 + 0x28) = 0x5d7;
                  FUN_14373a950(local_3c8);
                  *param_1 = -0x7ffbfe00;
                  goto LAB_1436f4ec1;
                }
                FUN_143737570(local_228,0);
                uVar10 = FUN_143703a50();
                if (local_238 == (local_234 & 0x3fffffff)) {
                  FUN_14370c460(uVar10,&local_240,4);
                }
                iVar18 = iVar18 + 1;
                *(undefined4 *)(local_240 + (longlong)(int)local_238 * 4) = uVar6;
                local_238 = local_238 + 1;
              } while (iVar18 < iVar7);
            }
            goto LAB_1436f4b20;
          }
        }
        else {
          *param_1 = -0x7ffbfe00;
        }
        if (DAT_146b7bb18 != '\0') {
          FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
          lVar9 = FUN_14373bbd0(local_3c8,"Error in input stream.",&DAT_145b909f0,0);
          *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar9 + 0x28) = 0x5cf;
          FUN_14373a950(local_3c8);
        }
        goto LAB_1436f4ec1;
      }
LAB_1436f4b20:
      if ((local_res10[0] & 0x10000000) != 0) {
        iVar7 = FUN_1436f0600(param_2);
        if ((char)param_2[3] == '\0') {
          if (-1 < *param_1) {
            if (param_1[0x26] <= iVar7) {
              if (DAT_146b7bb18 != '\0') {
                local_res8 = FUN_1437151f0(puVar17);
                FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
                lVar9 = FUN_14373bbd0(local_3c8,
                                      "Invalid attribute string ID (out of bounds) for type \'{}\'."
                                      ,&DAT_145b74470,&local_res8,0);
                *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar9 + 0x28) = 0x5e2;
                FUN_14373a950(local_3c8);
                *param_1 = -0x7ffbfe00;
                goto LAB_1436f4ec1;
              }
              goto LAB_1436f4e7e;
            }
            local_e0 = *(undefined8 *)(*(longlong *)(param_1 + 0x24) + (longlong)iVar7 * 8);
            local_1c8 = local_1c8 | 0x10000000;
            goto LAB_1436f4d3f;
          }
        }
        else {
          *param_1 = -0x7ffbfe00;
        }
        if (DAT_146b7bb18 != '\0') {
          FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
          lVar9 = FUN_14373bbd0(local_3c8,"Error in input stream.",&DAT_145b909f0,0);
          *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar9 + 0x28) = 0x5e1;
          FUN_14373a950(local_3c8);
        }
        goto LAB_1436f4ec1;
      }
LAB_1436f4d3f:
      if (((byte)*puVar17 >> 3 & 1) != 0) {
        local_1a8 = FUN_1437151f0(puVar17);
        local_1c8 = local_1c8 | 8;
      }
      if ((((*puVar17 >> 0x12 & 1) != 0) &&
          (plVar11 = (longlong *)FUN_143715320(puVar17), plVar11 != (longlong *)0x0)) &&
         (local_1c8 = local_1c8 | 0x40000, plVar1 = plVar11, local_130 = plVar11,
         (short)plVar11[1] != 0)) {
        do {
          plVar15 = plVar1 + 2;
          if (*(char *)plVar1[3] == 't') {
            uVar6 = *(undefined4 *)(*plVar15 + 0x30);
            uVar10 = FUN_143703a50();
            if (local_2c8 == (local_2c4 & 0x3fffffff)) {
              FUN_14370c460(uVar10,&local_2d0,4);
            }
            *(undefined4 *)(local_2d0 + (longlong)(int)local_2c8 * 4) = uVar6;
            local_2c8 = local_2c8 + 1;
            *plVar15 = 0;
          }
          iVar19 = iVar19 + 1;
          plVar1 = plVar15;
        } while (iVar19 < (int)(uint)*(ushort *)(plVar11 + 1));
      }
      piVar12 = (int *)FUN_143737960(local_228,&local_res8,param_1 + 0x30,&local_380);
      if (-1 < *piVar12) {
        FUN_1436f5120(param_1 + 2,local_res18[0],local_380,&local_368);
        if (*(code **)(param_1 + 0x8a) != (code *)0x0) {
          (**(code **)(param_1 + 0x8a))(local_380);
        }
        goto LAB_1436f4ec1;
      }
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
        lVar9 = FUN_14373bbd0(local_3c8,"Failed to allocate type from builder",&DAT_145b909f0,0);
        *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x28) = 0x60f;
        FUN_14373a950(local_3c8);
      }
LAB_1436f4e7e:
      *param_1 = -0x7ffbfe00;
    }
    else {
      uVar13 = FUN_1436f0620(param_2);
      if ((char)param_2[3] == '\0') {
        if (-1 < *param_1) {
          local_378 = (ulonglong)uVar13 & 0xffff;
          local_388 = uVar13 >> 0x10;
          if ((longlong)local_378 <=
              (longlong)
              ((param_2[1] - *param_2) + (ulonglong)((uint)(param_2[1] - *param_2 >> 0x3f) & 3)) >>
              2) {
            iVar7 = iVar19;
            if ((int)local_378 != 0) {
              do {
                uVar3 = FUN_1436f05e0(param_2);
                uVar4 = FUN_1436f05e0(param_2);
                uVar5 = FUN_1436f05e0(param_2);
                local_res8 = CONCAT62(local_res8._2_6_,uVar5);
                uVar6 = FUN_1436f0600(param_2);
                if ((char)param_2[3] != '\0') {
                  *param_1 = -0x7ffbfe00;
LAB_1436f492f:
                  if (DAT_146b7bb18 != '\0') {
                    FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
                    lVar9 = FUN_14373bbd0(local_3c8,"Error in input stream.",&DAT_145b909f0,0);
                    *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp"
                    ;
                    *(undefined8 *)(lVar9 + 0x28) = 0x5b9;
                    FUN_14373a950(local_3c8);
                  }
                  goto LAB_1436f4ec1;
                }
                if (*param_1 < 0) goto LAB_1436f492f;
                if (param_1[0x22] <= (int)(uint)uVar3) {
                  if (DAT_146b7bb18 == '\0') goto LAB_1436f4e7e;
                  FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
                  lVar9 = FUN_14373bbd0(local_3c8,"Invalid field name string ID (out of bounds).",
                                        &DAT_145b909f0,0);
                  *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar9 + 0x28) = 0x5ba;
                  FUN_14373a950(local_3c8);
                  *param_1 = -0x7ffbfe00;
                  goto LAB_1436f4ec1;
                }
                cVar2 = FUN_1436f51b0(uVar6,param_1 + 2);
                if (cVar2 != '\0') {
                  if (DAT_146b7bb18 == '\0') goto LAB_1436f4e7e;
                  local_res8 = FUN_1437151f0(local_390);
                  FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
                  lVar9 = FUN_14373bbd0(local_3c8,
                                        "Invalid field type ID (out of bounds) for type \'{}\'.",
                                        &DAT_145b74470,&local_res8,0);
                  *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar9 + 0x28) = 0x5bb;
                  FUN_14373a950(local_3c8);
                  *param_1 = -0x7ffbfe00;
                  goto LAB_1436f4ec1;
                }
                local_370 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 8);
                if (((byte)uVar4 & 0x30) != 0x20) {
                  if (DAT_146b7bb18 == '\0') goto LAB_1436f4e7e;
                  local_res8 = FUN_1437151f0(local_390);
                  FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
                  lVar9 = FUN_14373bbd0(local_3c8,"Invalid flags on {}::{}",&DAT_145b744b0,
                                        &local_res8,&local_370,0);
                  *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar9 + 0x28) = 0x5be;
                  FUN_14373a950(local_3c8);
                  *param_1 = -0x7ffbfe00;
                  goto LAB_1436f4ec1;
                }
                FUN_143737600(local_228,local_370,local_res8 & 0xffff,uVar4,0);
                uVar10 = FUN_143703a50();
                if (local_358 == (local_354 & 0x3fffffff)) {
                  FUN_14370c460(uVar10,&local_360,4);
                }
                iVar7 = iVar7 + 1;
                *(undefined4 *)(local_360 + (longlong)(int)local_358 * 4) = uVar6;
                local_358 = local_358 + 1;
                puVar17 = local_390;
              } while (iVar7 < (int)local_378);
            }
            uVar20 = (ulonglong)local_388;
            if (local_388 != 0) {
              do {
                FUN_143737600(local_228,"$PLACEHOLDER$",0,0x11,&DAT_1467df8b8);
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            goto LAB_1436f4787;
          }
          if (DAT_146b7bb18 != '\0') {
            FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
            lVar9 = FUN_14373bbd0(local_3c8,"Too many fields",&DAT_145b909f0,0);
            *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar9 + 0x28) = 0x5b1;
            FUN_14373a950(local_3c8);
            *param_1 = -0x7ffbfe00;
            goto LAB_1436f4ec1;
          }
          goto LAB_1436f4e7e;
        }
      }
      else {
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_146b7bb18 != '\0') {
        FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
        lVar9 = FUN_14373bbd0(local_3c8,"Error in input stream.",&DAT_145b909f0,0);
        *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar9 + 0x28) = 0x5ac;
        FUN_14373a950(local_3c8);
      }
    }
    goto LAB_1436f4ec1;
  }
  if (local_res20[0] == 0) {
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
      lVar9 = FUN_14373bbd0(local_3c8,
                            "Invalid type #{} with Opt::SUBTYPE optional but no Opt::FORMAT.",
                            &DAT_145b74460,local_res18,0);
      *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x28) = 0x571;
      *(undefined4 *)(lVar9 + 0xc) = 0x1aff8e1a;
      FUN_14373a950(local_3c8);
      *param_1 = -0x7ffbfe00;
      goto LAB_1436f4ec1;
    }
LAB_1436f4388:
    *param_1 = -0x7ffbfe00;
  }
  else {
    iVar7 = FUN_1436f0600(param_2);
    if ((char)param_2[3] == '\0') {
      if (-1 < *param_1) {
        if (-1 < iVar7) {
          if (param_1[0x1a] <= iVar7) {
            FUN_1436f1390(param_1 + 0x28,iVar7,&DAT_1467dd018);
          }
          local_1c8 = local_1c8 | 2;
          local_1b8 = 0;
          local_364 = iVar7;
          goto LAB_1436f41e1;
        }
        if (DAT_146b7bb18 != '\0') {
          local_res8 = FUN_1437151f0(puVar17);
          FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
          lVar9 = FUN_14373bbd0(local_3c8,"Invalid sub-type ID (out of bounds) for type \'{}\'.",
                                &DAT_145b74470,&local_res8,0);
          *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar9 + 0x28) = 0x575;
          FUN_14373a950(local_3c8);
          *param_1 = -0x7ffbfe00;
          goto LAB_1436f4ec1;
        }
        goto LAB_1436f4388;
      }
    }
    else {
      *param_1 = -0x7ffbfe00;
    }
    if (DAT_146b7bb18 != '\0') {
      FUN_14373a730(local_3c8,&DAT_146b7bb10,1);
      lVar9 = FUN_14373bbd0(local_3c8,"Error in input stream.",&DAT_145b909f0,0);
      *(char **)(lVar9 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar9 + 0x28) = 0x574;
      FUN_14373a950(local_3c8);
    }
  }
LAB_1436f4ec1:
  FUN_1436f0f00(&local_368);
  FUN_143737160(local_228);
  return;
}



// FUNCTION 1436f4f10 FUN_1436f4f10 body=91 status=ok
// SIG undefined FUN_1436f4f10(void)

undefined8 FUN_1436f4f10(ulonglong *param_1)

{
  undefined8 uVar1;
  int local_res8 [8];
  
  if (*param_1 != param_1[1]) {
    local_res8[0] = 0;
    uVar1 = FUN_14374bbd0(*param_1,local_res8);
    if (0 < local_res8[0]) {
      if ((longlong)local_res8[0] + *param_1 <= param_1[1]) {
        *param_1 = (longlong)local_res8[0] + *param_1;
        return uVar1;
      }
      *param_1 = param_1[1];
      *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
      return uVar1;
    }
  }
  *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
  return 0;
}



// FUNCTION 1436f4f70 FUN_1436f4f70 body=59 status=ok
// SIG undefined FUN_1436f4f70(void)

undefined4 * FUN_1436f4f70(longlong param_1,undefined4 *param_2)

{
  if (((*(longlong *)(param_1 + 0x10) !=
        *(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 8) &&
      (*(int *)(param_1 + 0x108) == -1)) && (*(int *)(param_1 + 0x130) != 1)) {
    *param_2 = 0x80040200;
    return param_2;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1436f4fb0 FUN_1436f4fb0 body=170 status=ok
// SIG undefined FUN_1436f4fb0(void)

void FUN_1436f4fb0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  lVar3 = FUN_1436f11c0(param_1,local_res10);
  if (lVar3 != 0) {
    lVar2 = param_1[2];
    iVar1 = *(int *)(lVar3 + 4);
    if (-1 < iVar1) {
      lVar7 = (longlong)iVar1 * 0x20;
      puVar4 = *(undefined8 **)(lVar7 + 0x10 + *param_1);
      puVar6 = puVar4 + (longlong)*(int *)(lVar7 + 0x18 + *param_1) * 2;
      for (; puVar4 != puVar6; puVar4 = puVar4 + 2) {
        *(undefined8 *)*puVar4 = param_3;
      }
      uVar5 = (uint)(lVar3 - lVar2 >> 3);
      if ((*(uint *)(param_1 + 3) < uVar5) ||
         (lVar3 = param_1[2] + (longlong)(int)uVar5 * 8,
         *(int *)(param_1[2] + 4 + (longlong)(int)uVar5 * 8) != iVar1)) {
        lVar3 = FUN_1436f11c0(param_1,*param_1 + lVar7);
      }
      FUN_1436f1220(param_1,lVar3);
    }
  }
  return;
}



// FUNCTION 1436f5060 FUN_1436f5060 body=184 status=ok
// SIG undefined FUN_1436f5060(void)

undefined8 FUN_1436f5060(undefined *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong local_18;
  longlong lStack_10;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  if (param_1 != &DAT_1467df8b8) {
    local_18 = *(longlong *)(param_2 + 8);
    lStack_10 = local_18 + (longlong)*(int *)(param_2 + 0x10) * 8;
    iVar1 = FUN_1436eed80(&local_18);
    if (iVar1 < 0) {
      uVar3 = 0;
      if (0 < *(int *)(param_2 + 0x60)) {
        puVar2 = *(undefined8 **)(param_2 + 0x58);
        uVar4 = uVar3;
        while ((undefined *)*puVar2 != param_1) {
          uVar4 = (ulonglong)((int)uVar4 + 1);
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + 1;
          if ((longlong)*(int *)(param_2 + 0x60) <= (longlong)uVar3) {
            return 0;
          }
        }
        if (-1 < (int)uVar4) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1436f5120 FUN_1436f5120 body=129 status=ok
// SIG undefined FUN_1436f5120(void)

void FUN_1436f5120(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_18;
  longlong lStack_10;
  
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8) = param_3;
  FUN_1436f4fb0(param_1 + 0x98);
  local_18 = *(longlong *)(param_1 + 8);
  lStack_10 = local_18 + (longlong)*(int *)(param_1 + 0x10) * 8;
  FUN_1436f17e0(param_1 + 0x98,param_3,param_4,&local_18);
  return;
}



// FUNCTION 1436f51b0 FUN_1436f51b0 body=15 status=ok
// SIG undefined FUN_1436f51b0(void)

undefined1 FUN_1436f51b0(int param_1,longlong param_2)

{
  if ((0 < param_1) && (param_1 < *(int *)(param_2 + 0x60))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1436f51c0 FUN_1436f51c0 body=15 status=ok
// SIG undefined FUN_1436f51c0(void)

undefined1 FUN_1436f51c0(int param_1,longlong param_2)

{
  if ((-1 < param_1) && (param_1 < *(int *)(param_2 + 0x60))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1436f51d0 FUN_1436f51d0 body=408 status=ok
// SIG undefined FUN_1436f51d0(void)

longlong *
FUN_1436f51d0(int *param_1,longlong *param_2,int *param_3,longlong param_4,ulonglong *param_5,
             longlong *param_6)

{
  uint uVar1;
  ulonglong *puVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 local_208;
  longlong lStack_200;
  int *local_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  longlong lStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  undefined1 *local_1b0;
  int local_1a8;
  uint local_1a4;
  undefined1 local_1a0 [392];
  
  puVar2 = param_5;
  *param_5 = 0;
  piVar4 = (int *)FUN_1436f4f70(param_1,&param_5);
  if (*piVar4 < 0) {
    *param_2 = 0;
    return param_2;
  }
  local_1b0 = local_1a0;
  uStack_1f0 = uStack_1f0 & 0xffffff00;
  lStack_200 = (longlong)param_3 + param_4;
  local_208._0_4_ = SUB84(param_3,0);
  local_208._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  local_1a8 = 0;
  local_1d8 = (undefined4)local_208;
  uStack_1d4 = local_208._4_4_;
  local_1a4 = 0x80000010;
  local_1c8 = (undefined4)local_208;
  uStack_1c4 = local_208._4_4_;
  uStack_1c0 = uStack_1f0;
  uStack_1bc = uStack_1ec;
  local_208 = param_3;
  local_1f8 = param_3;
  local_1b8 = param_4;
  lStack_1d0 = lStack_200;
  iVar3 = FUN_1436ee980(param_1,&local_1d8);
  if (iVar3 != 0) {
    param_1[0x42] = param_1[0x42] + 1;
    local_1e8 = *(undefined8 *)(param_1 + 0x86);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
    lStack_200 = *param_6;
    local_1f8 = (int *)param_6[1];
    uVar1 = *(uint *)(local_1b0 + (longlong)(local_1a8 + -1) * 0x18 + 4);
    local_208 = param_1;
    FUN_1436efb40(&local_1d8,&local_208,&local_1e8);
    if (-1 < *param_1) {
      *puVar2 = (ulonglong)(uVar1 & 0x3fffffff);
      FUN_1436eeb00(param_1,&local_1d8,iVar3);
      *param_2 = (longlong)(param_1 + 2);
      goto LAB_1436f5318;
    }
  }
  *param_2 = 0;
LAB_1436f5318:
  uVar5 = FUN_143703a50();
  local_1a8 = 0;
  if (-1 < (int)local_1a4) {
    FUN_143702e10(uVar5,local_1b0,0x18,local_1a4 & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 1436f5370 FUN_1436f5370 body=72 status=ok
// SIG undefined FUN_1436f5370(void)

undefined8 FUN_1436f5370(longlong param_1,undefined8 param_2)

{
  FUN_1436f51d0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 1436f53c0 GetLevel body=30 status=ok
// SIG undefined GetLevel(void)

void AActor::GetLevel(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  FUN_143747d50(param_1,uVar1);
  return;
}



// FUNCTION 1436f53e0 FUN_1436f53e0 body=6234 status=ok
// SIG undefined FUN_1436f53e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001436f6913) */
/* WARNING: Removing unreachable block (ram,0x0001436f692c) */

undefined4
FUN_1436f53e0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,uint param_7,uint param_8,int param_9)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 uVar3;
  ushort uVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uchar *puVar12;
  undefined8 uVar13;
  int *piVar14;
  uint uVar15;
  float *pfVar16;
  undefined2 *puVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  int iVar20;
  undefined4 uVar21;
  double *pdVar22;
  longlong ****pppplVar23;
  double *pdVar24;
  longlong lVar25;
  WriteBytesMem *pWVar26;
  ulonglong *puVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  double *pdVar31;
  double *pdVar32;
  float *pfVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  short *psVar36;
  short *psVar37;
  ulonglong uVar38;
  int iVar39;
  longlong lVar40;
  uint uVar41;
  ulonglong uVar42;
  bool bVar43;
  float fVar44;
  longlong ****in_stack_ffffffffffffd228;
  byte *pbVar45;
  byte local_2da4 [4];
  WriteBytesMem *local_2da0;
  longlong ***local_2d98;
  longlong ***local_2d90;
  longlong ***local_2d88;
  longlong local_2d80;
  byte local_2d78;
  double *local_2d70;
  double *local_2d68;
  longlong ***local_2d58;
  uint uStack_2d50;
  undefined4 uStack_2d4c;
  double *local_2d48;
  longlong *local_2d38;
  WriteBytesMem *local_2d30;
  undefined8 local_2d28;
  double *local_2d20;
  int local_2d18;
  int local_2d14;
  int local_2d10;
  int local_2d0c;
  int local_2d08 [2];
  byte *local_2d00;
  longlong ***local_2cf8;
  longlong local_2cf0;
  double *local_2ce8;
  ulonglong local_2ce0;
  WriteBytesMem *local_2cd8;
  undefined8 local_2cd0;
  double *local_2cc8;
  undefined1 local_2cc0 [4];
  undefined1 local_2cbc [4];
  undefined1 local_2cb8 [4];
  undefined1 local_2cb4 [12];
  longlong ***local_2ca8;
  uint uStack_2ca0;
  undefined4 uStack_2c9c;
  undefined1 local_2c98 [8];
  undefined8 local_2c90;
  undefined4 local_2c88;
  undefined4 local_2c84;
  undefined8 local_2c70;
  undefined4 local_2c68;
  undefined4 local_2c64;
  undefined1 local_2c60 [24];
  undefined1 *local_2c48;
  uint local_2c40;
  uint local_2c3c;
  undefined1 local_2c38 [3072];
  double local_2038 [1028];
  
  local_2c48 = local_2c38;
  local_2c40 = 0;
  local_2c3c = 0x80000040;
  local_2d14 = 0;
  if (0 < param_9) {
    uVar38 = (ulonglong)param_7;
    do {
      local_2d80 = local_2d14 * (int)uVar38 + param_3;
      local_2d88 = (longlong ***)((int)(local_2d14 * param_8) + param_5);
      uVar6 = param_9 - local_2d14;
      if (0x400 < param_9 - local_2d14) {
        uVar6 = 0x400;
      }
      local_2d18 = 0;
      pppplVar23 = (longlong ****)local_2d88;
      lVar25 = local_2d80;
LAB_1436f54bf:
      for (; uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffd228 >> 0x20),
          local_2d18 != (int)param_2[1]; local_2d18 = local_2d18 + 1) {
        pWVar26 = (WriteBytesMem *)((longlong)local_2d18 * 0x30 + *param_2);
        uVar41 = 0;
        if (lVar25 != 0) {
          uVar41 = (uint)*(ushort *)(pWVar26 + 4);
        }
        pdVar22 = (double *)((int)uVar41 + lVar25);
        uVar41 = 0;
        if (pppplVar23 != (longlong ****)0x0) {
          uVar41 = (uint)*(ushort *)(pWVar26 + 2);
        }
        pdVar24 = (double *)((longlong)(int)uVar41 + (longlong)local_2d88);
        local_2da0 = pWVar26;
        local_2d70 = pdVar22;
        switch(*pWVar26) {
        case (WriteBytesMem)0x1:
          FUN_1436f7090(pWVar26,&local_2d30,pdVar22);
          FUN_1436f70e0(pWVar26,&local_2d58,pdVar24);
          iVar20 = uVar6 + *(int *)(param_1 + 0x10);
          uVar10 = FUN_143703a50();
          uVar41 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
          if ((int)uVar41 < iVar20) {
            iVar8 = uVar41 * 2;
            if (iVar20 < iVar8) {
              iVar20 = iVar8;
            }
            FUN_14370c310(uVar10,param_1 + 8,iVar20,0x20);
          }
          if (0 < (int)uVar6) {
            uVar38 = (ulonglong)uVar6;
            do {
              pWVar26 = local_2d30;
              FUN_143742a00(&local_2d58,&local_2cf8);
              if (((int)local_2ce8 == 0) &&
                 ((local_2cf0 == 0 ||
                  ((puVar27 = (ulonglong *)FUN_143714420(CONCAT44(uStack_2d4c,uStack_2d50),2),
                   puVar27 != (ulonglong *)0x0 && (1 < *puVar27)))))) {
                uVar10 = 0;
              }
              else {
                uVar10 = 1;
              }
              in_stack_ffffffffffffd228 = &local_2d58;
              FUN_1436f8680(param_1,&DAT_145b755e0,uVar10,&local_2d30,in_stack_ffffffffffffd228);
              if ((local_2ce0 & 1) != 0) {
                FUN_143733a60(local_2ce0 & 0xfffffffffffffffe);
              }
              local_2d30 = pWVar26 + (int)param_7;
              local_2d58 = (longlong ***)((longlong)local_2d58 + (longlong)(int)param_8);
              uVar38 = uVar38 - 1;
            } while (uVar38 != 0);
          }
          if (((ulonglong)local_2d48 & 1) != 0) {
            FUN_143733a60((ulonglong)local_2d48 & 0xfffffffffffffffe);
          }
          if (((ulonglong)local_2d20 & 1) == 0) break;
          goto LAB_1436f5648;
        case (WriteBytesMem)0x2:
          FUN_1436f7090(pWVar26,&local_2d30,pdVar22);
          FUN_1436f70e0(pWVar26,&local_2d58,pdVar24);
          uVar10 = local_2d28;
          iVar20 = 0;
          local_2d68 = local_2d48;
          local_2d70 = local_2d20;
          if (0 < (int)uVar6) {
            uVar13 = CONCAT44(uStack_2d4c,uStack_2d50);
            local_2d98 = (longlong ***)((ulonglong)local_2d48 & 0xfffffffffffffffe);
            local_2d38 = (longlong *)((ulonglong)local_2d20 & 0xfffffffffffffffe);
            local_2da0 = local_2d30;
            local_2d90 = local_2d58;
            do {
              local_2da4[0] = 0;
              pbVar45 = local_2da4;
              (*(code *)(*local_2d98)[7])(local_2d98,local_2cc0,local_2d90,uVar13,pbVar45);
              in_stack_ffffffffffffd228 =
                   (longlong ****)CONCAT71((int7)((ulonglong)pbVar45 >> 8),local_2da4[0]);
              (**(code **)(*local_2d38 + 0x30))
                        (local_2d38,&local_2d10,local_2da0,uVar10,in_stack_ffffffffffffd228);
              if (local_2d10 < 0) goto LAB_1436f6abb;
              iVar20 = iVar20 + 1;
              local_2da0 = local_2da0 + (int)param_7;
              local_2d90 = (longlong ***)((longlong)local_2d90 + (longlong)(int)param_8);
            } while (iVar20 < (int)uVar6);
          }
          goto LAB_1436f5771;
        case (WriteBytesMem)0x3:
          FUN_1436f7090(pWVar26,&local_2d30,pdVar22);
          FUN_1436f70e0(pWVar26,&local_2d58,pdVar24);
          uVar10 = local_2d28;
          iVar20 = 0;
          local_2d68 = local_2d48;
          local_2d70 = local_2d20;
          if (0 < (int)uVar6) {
            uVar13 = CONCAT44(uStack_2d4c,uStack_2d50);
            local_2d98 = (longlong ***)((ulonglong)local_2d48 & 0xfffffffffffffffe);
            local_2d38 = (longlong *)((ulonglong)local_2d20 & 0xfffffffffffffffe);
            local_2da0 = local_2d30;
            local_2d90 = local_2d58;
            do {
              local_2ca8 = (longlong ***)0x0;
              uStack_2ca0 = uStack_2ca0 & 0xffffff00;
              (*(code *)(*local_2d98)[7])(local_2d98,local_2cbc,local_2d90,uVar13,&local_2ca8);
              in_stack_ffffffffffffd228 = &local_2d58;
              local_2d58 = local_2ca8;
              uStack_2d50 = uStack_2ca0;
              uStack_2d4c = uStack_2c9c;
              (**(code **)(*local_2d38 + 0x30))
                        (local_2d38,&local_2d0c,local_2da0,uVar10,in_stack_ffffffffffffd228);
              if (local_2d0c < 0) goto LAB_1436f6abb;
              iVar20 = iVar20 + 1;
              local_2da0 = local_2da0 + (int)param_7;
              local_2d90 = (longlong ***)((longlong)local_2d90 + (longlong)(int)param_8);
            } while (iVar20 < (int)uVar6);
          }
          goto LAB_1436f5771;
        case (WriteBytesMem)0x4:
          FUN_1436f7090(pWVar26,&local_2d30,pdVar22);
          FUN_1436f70e0(pWVar26,&local_2d58,pdVar24);
          uVar10 = local_2d28;
          local_2d68 = local_2d48;
          iVar20 = 0;
          local_2d70 = local_2d20;
          if (0 < (int)uVar6) {
            uVar13 = CONCAT44(uStack_2d4c,uStack_2d50);
            local_2d00 = (byte *)((ulonglong)local_2d48 & 0xfffffffffffffffe);
            local_2d38 = (longlong *)((ulonglong)local_2d20 & 0xfffffffffffffffe);
            local_2da0 = local_2d30;
            local_2d98 = local_2d58;
            do {
              local_2d90 = (longlong ***)0x0;
              (**(code **)(*(longlong *)local_2d00 + 0x38))
                        (local_2d00,local_2cb8,local_2d98,uVar13,&local_2d90);
              in_stack_ffffffffffffd228 = (longlong ****)local_2d90;
              (**(code **)(*local_2d38 + 0x30))(local_2d38,local_2d08,local_2da0,uVar10,local_2d90);
              if (local_2d08[0] < 0) goto LAB_1436f6abb;
              iVar20 = iVar20 + 1;
              local_2da0 = local_2da0 + (int)param_7;
              local_2d98 = (longlong ***)((longlong)local_2d98 + (longlong)(int)param_8);
            } while (iVar20 < (int)uVar6);
          }
LAB_1436f5771:
          pdVar24 = local_2d70;
          if (((ulonglong)local_2d68 & 1) != 0) {
            FUN_143733a60();
          }
LAB_1436f5784:
          if (((ulonglong)pdVar24 & 1) != 0) {
LAB_1436f5648:
            FUN_143733a60();
          }
          break;
        case (WriteBytesMem)0x5:
          FUN_1436f7090(pWVar26,&local_2d58,pdVar22);
          FUN_1436f70e0(pWVar26,&local_2d30,pdVar24);
          pdVar22 = local_2d20;
          local_2cd8 = local_2d30;
          local_2cd0 = local_2d28;
          local_2da4[0] = (byte)local_2d20 & 1;
          local_2cc8 = local_2d20;
          if (((ulonglong)local_2d20 & 1) != 0) {
            FUN_1437329e0((ulonglong)local_2d20 & 0xfffffffffffffffe);
          }
          pdVar24 = local_2d48;
          local_2cf8 = local_2d58;
          local_2cf0 = CONCAT44(uStack_2d4c,uStack_2d50);
          local_2ce8 = local_2d48;
          if (((ulonglong)local_2d48 & 1) != 0) {
            FUN_1437329e0((ulonglong)local_2d48 & 0xfffffffffffffffe);
          }
          in_stack_ffffffffffffd228 = (longlong ****)CONCAT44(uVar21,param_7);
          piVar14 = (int *)FUN_1436f98c0(param_1,local_2cb4,&local_2cf8,&local_2cd8,
                                         in_stack_ffffffffffffd228,param_8,uVar6);
          if (*piVar14 < 0) {
            if (((ulonglong)pdVar22 & 1) != 0) {
              FUN_143733a60((ulonglong)pdVar22 & 0xfffffffffffffffe);
            }
            if (((ulonglong)pdVar24 & 1) != 0) {
              FUN_143733a60((ulonglong)pdVar24 & 0xfffffffffffffffe);
            }
            goto LAB_1436f6b0c;
          }
          if (local_2da4[0] != 0) {
            FUN_143733a60();
          }
          goto LAB_1436f5784;
        case (WriteBytesMem)0x6:
          local_2c84 = 0x80000000;
          local_2c90 = 0;
          local_2c88 = 0;
          local_2c70 = 0;
          local_2c68 = 0;
          local_2c64 = 0x80000000;
          FUN_143734b10(local_2c60);
          uVar10 = *(undefined8 *)(pWVar26 + 0x10);
          FUN_1437152f0(uVar10);
          uVar13 = FUN_1436f9ee0(pWVar26);
          FUN_1437152f0(uVar13);
          uVar13 = *(undefined8 *)(pWVar26 + 0x20);
          uVar21 = FUN_1437152f0(uVar10);
          uVar10 = FUN_1436f9ee0(local_2da0);
          uVar9 = FUN_1437152f0(uVar10);
          pppplVar23 = (longlong ****)local_2d88;
          in_stack_ffffffffffffd228 = (longlong ****)local_2d88;
          iVar20 = FUN_1436f53e0(local_2c98,uVar13,local_2d80,uVar9,local_2d88,uVar21,0,0,1);
          if (-1 < iVar20) goto code_r0x0001436f6a6e;
          FUN_1436f7f80();
          uVar21 = 0x80040200;
          goto LAB_1436f6b6e;
        case (WriteBytesMem)0x7:
          iVar20 = local_2c40 + uVar6;
          uVar10 = FUN_143703a50();
          if ((int)(local_2c3c & 0x3fffffff) < iVar20) {
            iVar8 = (local_2c3c & 0x3fffffff) * 2;
            if (iVar20 < iVar8) {
              iVar20 = iVar8;
            }
            FUN_14370c310(uVar10,&local_2c48,iVar20,0x30);
          }
          if ((int)uVar6 < 1) break;
          iVar8 = 0;
          iVar20 = 0;
          local_2d98 = (longlong ***)((ulonglong)local_2d98 & 0xffffffff00000000);
          local_2d90 = (longlong ***)((ulonglong)local_2d90 & 0xffffffff00000000);
          local_2d68 = (double *)(ulonglong)uVar6;
          do {
            iVar39 = 0;
            if (pdVar22 != (double *)0x0) {
              iVar39 = iVar20;
            }
            FUN_1436f7090(local_2da0,&local_2cd8,(longlong)iVar39 + (longlong)pdVar22);
            iVar20 = 0;
            if (pdVar24 != (double *)0x0) {
              iVar20 = iVar8;
            }
            FUN_1436f70e0(local_2da0,&local_2cf8,(longlong)iVar20 + (longlong)pdVar24);
            pdVar22 = local_2ce8;
            local_2d78 = (byte)local_2ce8 & 1;
            if (((ulonglong)local_2ce8 & 1) != 0) {
              FUN_1437329e0((ulonglong)local_2ce8 & 0xfffffffffffffffe);
            }
            pdVar31 = local_2cc8;
            local_2da4[0] = (byte)local_2cc8 & 1;
            if (((ulonglong)local_2cc8 & 1) != 0) {
              FUN_1437329e0((ulonglong)local_2cc8 & 0xfffffffffffffffe);
            }
            if (local_2da4[0] != 0) {
              FUN_143733a60((ulonglong)pdVar31 & 0xfffffffffffffffe);
            }
            if (local_2d78 != 0) {
              FUN_143733a60((ulonglong)pdVar22 & 0xfffffffffffffffe);
            }
            uVar10 = FUN_143703a50();
            if (local_2c40 == (local_2c3c & 0x3fffffff)) {
              FUN_14370c460(uVar10,&local_2c48,0x30);
            }
            puVar11 = (undefined8 *)(local_2c48 + (longlong)(int)local_2c40 * 0x30);
            if (puVar11 != (undefined8 *)0x0) {
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
              puVar11[3] = 0;
              puVar11[4] = 0;
              puVar11[5] = 0;
            }
            lVar25 = (longlong)(int)local_2c40;
            local_2c40 = local_2c40 + 1;
            FUN_1436fa270(local_2c48 + lVar25 * 0x30,&local_2cd8,&local_2cf8);
            if (((ulonglong)local_2ce8 & 1) != 0) {
              FUN_143733a60((ulonglong)local_2ce8 & 0xfffffffffffffffe);
            }
            if (((ulonglong)local_2cc8 & 1) != 0) {
              FUN_143733a60((ulonglong)local_2cc8 & 0xfffffffffffffffe);
            }
            uVar38 = (ulonglong)param_7;
            iVar20 = (int)local_2d90 + param_7;
            iVar8 = (int)local_2d98 + param_8;
            local_2d68 = (double *)((longlong)local_2d68 - 1);
            local_2d90 = (longlong ***)CONCAT44(local_2d90._4_4_,iVar20);
            local_2d98 = (longlong ***)CONCAT44(local_2d98._4_4_,iVar8);
            pdVar22 = local_2d70;
          } while (local_2d68 != (double *)0x0);
          local_2d68 = (double *)0x0;
          lVar25 = local_2d80;
          goto switchD_1436f5528_default;
        case (WriteBytesMem)0x8:
          uVar41 = *(uint *)(pWVar26 + 0x10);
          if ((uVar41 == (uint)uVar38) && (uVar41 == param_8)) {
            FUN_14370c700(pdVar22,pdVar24,uVar41 * uVar6);
          }
          else {
            lVar25 = local_2d80;
            if ((int)uVar6 < 1) goto switchD_1436f5528_default;
            uVar42 = (ulonglong)uVar6;
            do {
              if (0 < (longlong)(int)uVar41) {
                pdVar31 = pdVar22;
                lVar25 = (longlong)(int)uVar41;
                do {
                  *(undefined1 *)pdVar31 =
                       *(undefined1 *)(((longlong)pdVar24 - (longlong)pdVar22) + (longlong)pdVar31);
                  pdVar31 = (double *)((longlong)pdVar31 + 1);
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
              }
              pdVar22 = (double *)((longlong)pdVar22 + (longlong)(int)(uint)uVar38);
              pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)param_8);
              uVar42 = uVar42 - 1;
            } while (uVar42 != 0);
          }
          break;
        case (WriteBytesMem)0x9:
          uVar10 = FUniqueNetIdString::GetBytes(pWVar26);
          puVar27 = (ulonglong *)FUN_143714420(uVar10,1);
          if (puVar27 == (ulonglong *)0x0) {
            uVar38 = 0;
          }
          else {
            uVar38 = *puVar27;
          }
          puVar12 = AK::WriteBytesMem::Bytes(local_2da0);
          puVar27 = (ulonglong *)FUN_143714420(puVar12,1);
          if (puVar27 == (ulonglong *)0x0) {
            uVar42 = 0;
          }
          else {
            uVar42 = *puVar27;
          }
          uVar28 = ((uint)(uVar42 >> 10) & 0x3fffff) + 7 >> 3;
          uVar19 = (ulonglong)uVar28;
          uVar41 = ((uint)(uVar38 >> 10) & 0x3fffff) + 7 >> 3;
          local_2da4[0] = ((byte)(uVar42 >> 8) & 1) != ((byte)(uVar38 >> 8) & 1);
          local_2d98 = (longlong ***)CONCAT44(local_2d98._4_4_,uVar28);
          iVar20 = uVar41 - uVar28;
          local_2d90 = (longlong ***)CONCAT44(local_2d90._4_4_,iVar20);
          if (iVar20 < 1) {
            if ((uVar42 & 0x100) != 0) {
              pdVar24 = (double *)((longlong)pdVar24 + (longlong)-iVar20);
            }
            if ((bool)local_2da4[0]) {
              uVar38 = (ulonglong)uVar6;
              if (0 < (int)uVar6) {
                do {
                  if (uVar41 == 1) {
                    *(undefined1 *)pdVar22 = *(undefined1 *)pdVar24;
                  }
                  else if (uVar41 == 2) {
                    *(ushort *)pdVar22 = *(ushort *)pdVar24 >> 8 | *(ushort *)pdVar24 << 8;
                  }
                  else if (uVar41 == 4) {
                    fVar44 = *(float *)pdVar24;
                    *(uint *)pdVar22 =
                         (uint)fVar44 >> 0x18 | ((uint)fVar44 & 0xff0000) >> 8 |
                         ((uint)fVar44 & 0xff00) << 8 | (int)fVar44 << 0x18;
                  }
                  else if (uVar41 == 8) {
                    dVar5 = *pdVar24;
                    *pdVar22 = (double)((ulonglong)dVar5 >> 0x38 |
                                        ((ulonglong)dVar5 & 0xff000000000000) >> 0x28 |
                                        ((ulonglong)dVar5 & 0xff0000000000) >> 0x18 |
                                        ((ulonglong)dVar5 & 0xff00000000) >> 8 |
                                        ((ulonglong)dVar5 & 0xff000000) << 8 |
                                        ((ulonglong)dVar5 & 0xff0000) << 0x18 |
                                        ((ulonglong)dVar5 & 0xff00) << 0x28 |
                                       (longlong)dVar5 << 0x38);
                  }
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)param_8);
                  pdVar22 = (double *)((longlong)pdVar22 + (longlong)(int)param_7);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            else {
              uVar38 = (ulonglong)(int)param_7;
              if ((uVar41 == param_7) && (uVar41 == param_8)) {
                FUN_14370c700(pdVar22,pdVar24,uVar41 * uVar6);
              }
              else {
                lVar25 = local_2d80;
                if ((int)uVar6 < 1) goto switchD_1436f5528_default;
                uVar42 = (ulonglong)uVar6;
                do {
                  if ((ulonglong)uVar41 != 0) {
                    pdVar31 = pdVar22;
                    uVar19 = (ulonglong)uVar41;
                    do {
                      *(undefined1 *)pdVar31 =
                           *(undefined1 *)
                            (((longlong)pdVar24 - (longlong)pdVar22) + (longlong)pdVar31);
                      pdVar31 = (double *)((longlong)pdVar31 + 1);
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  pdVar22 = (double *)((longlong)pdVar22 + uVar38);
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)param_8);
                  uVar42 = uVar42 - 1;
                } while (uVar42 != 0);
              }
            }
          }
          else {
            local_2d38 = (longlong *)0x1;
            local_2d70 = (double *)0x0;
            local_2d68 = (double *)(longlong)(int)(uVar28 - 1);
            if ((uVar38 & 0x100) != 0) {
              local_2d70 = (double *)(longlong)iVar20;
              local_2d68 = (double *)(ulonglong)uVar28;
              local_2d38 = (longlong *)(longlong)-iVar20;
            }
            if (0 < (int)uVar6) {
              local_2d58 = (longlong ***)(uVar42 >> 9 & 0x7fffff);
              local_2da0 = (WriteBytesMem *)(ulonglong)uVar6;
              do {
                puVar27 = (ulonglong *)((longlong)local_2d70 + (longlong)pdVar22);
                pbVar45 = (byte *)((longlong)local_2d68 + (longlong)pdVar22);
                local_2d00 = (byte *)((longlong)local_2d38 + (longlong)pbVar45);
                iVar8 = (int)uVar19;
                if (local_2da4[0] == 0) {
                  if (iVar8 == 0) {
                    FUN_14370c700(puVar27,pdVar24);
                    iVar20 = (int)local_2d90;
                  }
                  else if (0 < (longlong)uVar19) {
                    lVar25 = (longlong)pdVar24 - (longlong)puVar27;
                    do {
                      *(undefined1 *)puVar27 = *(undefined1 *)(lVar25 + (longlong)puVar27);
                      puVar27 = (ulonglong *)((longlong)puVar27 + 1);
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                }
                else if (iVar8 == 1) {
                  *(undefined1 *)puVar27 = *(undefined1 *)pdVar24;
                }
                else if (iVar8 == 2) {
                  *(ushort *)puVar27 = *(ushort *)pdVar24 >> 8 | *(ushort *)pdVar24 << 8;
                }
                else if (iVar8 == 4) {
                  fVar44 = *(float *)pdVar24;
                  *(uint *)puVar27 =
                       (uint)fVar44 >> 0x18 | ((uint)fVar44 & 0xff0000) >> 8 |
                       ((uint)fVar44 & 0xff00) << 8 | (int)fVar44 << 0x18;
                }
                else if (iVar8 == 8) {
                  dVar5 = *pdVar24;
                  *puVar27 = (ulonglong)dVar5 >> 0x38 |
                             ((ulonglong)dVar5 & 0xff000000000000) >> 0x28 |
                             ((ulonglong)dVar5 & 0xff0000000000) >> 0x18 |
                             ((ulonglong)dVar5 & 0xff00000000) >> 8 |
                             ((ulonglong)dVar5 & 0xff000000) << 8 |
                             ((ulonglong)dVar5 & 0xff0000) << 0x18 |
                             ((ulonglong)dVar5 & 0xff00) << 0x28 | (longlong)dVar5 << 0x38;
                }
                if (((ulonglong)local_2d58 & 1) != 0) {
                  FUN_14370c720(local_2d00,-((*pbVar45 & 0x80) != 0),iVar20);
                }
                uVar19 = (ulonglong)(int)local_2d98;
                pdVar22 = (double *)((longlong)pdVar22 + (longlong)(int)param_7);
                pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)param_8);
                local_2da0 = (WriteBytesMem *)((longlong)local_2da0 - 1);
                iVar20 = (int)local_2d90;
              } while (local_2da0 != (WriteBytesMem *)0x0);
              local_2da0 = (WriteBytesMem *)0x0;
            }
          }
          break;
        case (WriteBytesMem)0xa:
          uVar10 = FUniqueNetIdString::GetBytes(pWVar26);
          puVar11 = (undefined8 *)FUN_143714420(uVar10,1);
          if (puVar11 == (undefined8 *)0x0) {
            local_2da0 = (WriteBytesMem *)0x0;
          }
          else {
            local_2da0 = (WriteBytesMem *)*puVar11;
          }
          puVar12 = AK::WriteBytesMem::Bytes(pWVar26);
          puVar27 = (ulonglong *)FUN_143714420(puVar12,1);
          if (puVar27 == (ulonglong *)0x0) {
            uVar38 = 0;
          }
          else {
            uVar38 = *puVar27;
          }
          lVar25 = (longlong)(int)param_8;
          uVar41 = (uint)uVar38;
          pdVar31 = local_2038;
          if ((uVar38 & 0x100) == 0) {
            pdVar31 = pdVar24;
          }
          bVar43 = (uVar38 & 0x100) != 0;
          uVar28 = param_8;
          if (bVar43) {
            uVar28 = 8;
          }
          local_2d90 = (longlong ***)CONCAT44(local_2d90._4_4_,uVar28);
          if (bVar43) {
            pdVar32 = local_2038;
            uVar15 = ((uint)(uVar38 >> 0xb) & 0x1f) + 7 +
                     ((uint)(uVar38 >> 10) & 1) + ((uint)(uVar38 >> 0x10) & 0xff) >> 3;
            if (uVar15 == 1) {
              if (0 < (int)uVar6) {
                uVar38 = (ulonglong)uVar6;
                do {
                  uVar1 = *(undefined1 *)pdVar24;
                  pdVar24 = (double *)((longlong)pdVar24 + lVar25);
                  *(undefined1 *)pdVar32 = uVar1;
                  pdVar32 = pdVar32 + 1;
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            else if (uVar15 == 2) {
              if (0 < (int)uVar6) {
                uVar38 = (ulonglong)uVar6;
                do {
                  uVar4 = *(ushort *)pdVar24;
                  pdVar24 = (double *)((longlong)pdVar24 + lVar25);
                  *(ushort *)pdVar32 = uVar4 >> 8 | uVar4 << 8;
                  uVar38 = uVar38 - 1;
                  pdVar32 = pdVar32 + 1;
                } while (uVar38 != 0);
              }
            }
            else if (uVar15 == 4) {
              if (0 < (int)uVar6) {
                uVar38 = (ulonglong)uVar6;
                do {
                  fVar44 = *(float *)pdVar24;
                  pdVar24 = (double *)((longlong)pdVar24 + lVar25);
                  *(uint *)pdVar32 =
                       (uint)fVar44 >> 0x18 | ((uint)fVar44 & 0xff0000) >> 8 |
                       ((uint)fVar44 & 0xff00) << 8 | (int)fVar44 << 0x18;
                  uVar38 = uVar38 - 1;
                  pdVar32 = pdVar32 + 1;
                } while (uVar38 != 0);
              }
            }
            else if ((uVar15 == 8) && (0 < (int)uVar6)) {
              uVar38 = (ulonglong)uVar6;
              do {
                dVar5 = *pdVar24;
                pdVar24 = (double *)((longlong)pdVar24 + lVar25);
                *pdVar32 = (double)((ulonglong)dVar5 >> 0x38 |
                                    ((ulonglong)dVar5 & 0xff000000000000) >> 0x28 |
                                    ((ulonglong)dVar5 & 0xff0000000000) >> 0x18 |
                                    ((ulonglong)dVar5 & 0xff00000000) >> 8 |
                                    ((ulonglong)dVar5 & 0xff000000) << 8 |
                                    ((ulonglong)dVar5 & 0xff0000) << 0x18 |
                                    ((ulonglong)dVar5 & 0xff00) << 0x28 | (longlong)dVar5 << 0x38);
                uVar38 = uVar38 - 1;
                pdVar32 = pdVar32 + 1;
              } while (uVar38 != 0);
            }
            uVar41 = uVar41 & 0xfffffeff;
          }
          pdVar24 = local_2038;
          if (((ulonglong)local_2da0 & 0x100) == 0) {
            pdVar24 = pdVar22;
          }
          uVar15 = param_7;
          if (((ulonglong)local_2da0 & 0x100) != 0) {
            uVar15 = 8;
          }
          uVar7 = (uint)local_2da0 & 0xfffffeff;
          if (uVar41 == 0x74605) {
            if (uVar7 == 0x74605) {
              if (0 < (int)uVar6) {
                uVar38 = (ulonglong)uVar6;
                do {
                  uVar3 = *(undefined2 *)pdVar31;
                  pdVar31 = (double *)((longlong)pdVar31 + (longlong)(int)uVar28);
                  *(undefined2 *)pdVar24 = uVar3;
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)uVar15);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            else if (uVar7 == 0x174605) {
              if (0 < (int)uVar6) {
                uVar38 = (ulonglong)uVar6;
                do {
                  sVar2 = *(short *)pdVar31;
                  pdVar31 = (double *)((longlong)pdVar31 + (longlong)(int)uVar28);
                  *(int *)pdVar24 = (int)sVar2 << 0x10;
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)uVar15);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            else if (uVar7 == 0x345e05) {
              iVar20 = 0;
              if (3 < (int)uVar6) {
                lVar25 = (longlong)(int)uVar28;
                uVar41 = (uVar6 - 4 >> 2) + 1;
                lVar40 = (longlong)(int)uVar15;
                uVar38 = (ulonglong)uVar41;
                iVar20 = uVar41 * 4;
                do {
                  *pdVar24 = (double)(float)((int)*(short *)pdVar31 << 0x10);
                  psVar36 = (short *)((longlong)pdVar31 + lVar25 + lVar25);
                  *(double *)((longlong)pdVar24 + lVar40) =
                       (double)(float)((int)*(short *)((longlong)pdVar31 + lVar25) << 0x10);
                  pdVar24 = (double *)((longlong)pdVar24 + lVar40 + lVar40);
                  psVar37 = (short *)((longlong)psVar36 + lVar25);
                  *pdVar24 = (double)(float)((int)*psVar36 << 0x10);
                  pdVar24 = (double *)((longlong)pdVar24 + lVar40);
                  pdVar31 = (double *)((longlong)psVar37 + lVar25);
                  fVar44 = (float)((int)*psVar37 << 0x10);
                  local_2d98 = (longlong ***)CONCAT44(local_2d98._4_4_,fVar44);
                  *pdVar24 = (double)fVar44;
                  pdVar24 = (double *)((longlong)pdVar24 + lVar40);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
              if (iVar20 < (int)uVar6) {
                uVar38 = (ulonglong)(uVar6 - iVar20);
                do {
                  sVar2 = *(short *)pdVar31;
                  pdVar31 = (double *)((longlong)pdVar31 + (longlong)(int)uVar28);
                  local_2d98 = (longlong ***)CONCAT44(local_2d98._4_4_,(int)sVar2 << 0x10);
                  *pdVar24 = (double)(float)((int)sVar2 << 0x10);
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)uVar15);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
          }
          else if (uVar41 == 0x174605) {
            if (uVar7 == 0x74605) {
              iVar20 = 0;
              if (3 < (int)uVar6) {
                lVar25 = (longlong)(int)uVar28;
                uVar41 = (uVar6 - 4 >> 2) + 1;
                lVar40 = (longlong)(int)uVar15;
                uVar38 = (ulonglong)uVar41;
                iVar20 = uVar41 * 4;
                do {
                  *(short *)pdVar24 = (short)((uint)(*(float *)pdVar31 * 1.0039062) >> 0x10);
                  pfVar16 = (float *)((longlong)pdVar31 + lVar25 + lVar25);
                  *(undefined2 *)((longlong)pdVar24 + lVar40) =
                       (short)((uint)(*(float *)((longlong)pdVar31 + lVar25) * 1.0039062) >> 0x10);
                  puVar17 = (undefined2 *)((longlong)pdVar24 + lVar40 + lVar40);
                  pfVar33 = (float *)((longlong)pfVar16 + lVar25);
                  *puVar17 = (short)((uint)(*pfVar16 * 1.0039062) >> 0x10);
                  puVar17 = (undefined2 *)((longlong)puVar17 + lVar40);
                  pdVar31 = (double *)((longlong)pfVar33 + lVar25);
                  fVar44 = *pfVar33 * 1.0039062;
                  local_2d98 = (longlong ***)CONCAT44(local_2d98._4_4_,fVar44);
                  *puVar17 = (short)((uint)fVar44 >> 0x10);
                  pdVar24 = (double *)((longlong)puVar17 + lVar40);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
              if (iVar20 < (int)uVar6) {
                uVar38 = (ulonglong)(uVar6 - iVar20);
                do {
                  fVar44 = *(float *)pdVar31;
                  pdVar31 = (double *)((longlong)pdVar31 + (longlong)(int)uVar28);
                  local_2d98 = (longlong ***)CONCAT44(local_2d98._4_4_,fVar44 * 1.0039062);
                  *(short *)pdVar24 = (short)((uint)(fVar44 * 1.0039062) >> 0x10);
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)uVar15);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            else if (uVar7 == 0x174605) {
              iVar20 = 0;
              if (3 < (int)uVar6) {
                lVar25 = (longlong)(int)uVar28;
                uVar41 = (uVar6 - 4 >> 2) + 1;
                lVar40 = (longlong)(int)uVar15;
                uVar38 = (ulonglong)uVar41;
                iVar20 = uVar41 * 4;
                do {
                  *(float *)pdVar24 = *(float *)pdVar31;
                  puVar34 = (undefined4 *)((longlong)pdVar31 + lVar25 + lVar25);
                  *(undefined4 *)((longlong)pdVar24 + lVar40) =
                       *(undefined4 *)((longlong)pdVar31 + lVar25);
                  puVar18 = (undefined4 *)((longlong)pdVar24 + lVar40 + lVar40);
                  puVar35 = (undefined4 *)((longlong)puVar34 + lVar25);
                  *puVar18 = *puVar34;
                  puVar18 = (undefined4 *)((longlong)puVar18 + lVar40);
                  pdVar31 = (double *)((longlong)puVar35 + lVar25);
                  *puVar18 = *puVar35;
                  pdVar24 = (double *)((longlong)puVar18 + lVar40);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
              if (iVar20 < (int)uVar6) {
                uVar38 = (ulonglong)(uVar6 - iVar20);
                do {
                  fVar44 = *(float *)pdVar31;
                  pdVar31 = (double *)((longlong)pdVar31 + (longlong)(int)uVar28);
                  *(float *)pdVar24 = fVar44;
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)uVar15);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            else if (uVar7 == 0x345e05) {
              iVar20 = 0;
              if (3 < (int)uVar6) {
                lVar25 = (longlong)(int)uVar28;
                uVar41 = (uVar6 - 4 >> 2) + 1;
                lVar40 = (longlong)(int)uVar15;
                uVar38 = (ulonglong)uVar41;
                iVar20 = uVar41 * 4;
                do {
                  *pdVar24 = (double)*(float *)pdVar31;
                  pfVar16 = (float *)((longlong)pdVar31 + lVar25 + lVar25);
                  *(double *)((longlong)pdVar24 + lVar40) =
                       (double)*(float *)((longlong)pdVar31 + lVar25);
                  pdVar24 = (double *)((longlong)pdVar24 + lVar40 + lVar40);
                  pfVar33 = (float *)((longlong)pfVar16 + lVar25);
                  *pdVar24 = (double)*pfVar16;
                  pdVar24 = (double *)((longlong)pdVar24 + lVar40);
                  pdVar31 = (double *)((longlong)pfVar33 + lVar25);
                  *pdVar24 = (double)*pfVar33;
                  pdVar24 = (double *)((longlong)pdVar24 + lVar40);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
              if (iVar20 < (int)uVar6) {
                uVar38 = (ulonglong)(uVar6 - iVar20);
                do {
                  fVar44 = *(float *)pdVar31;
                  pdVar31 = (double *)((longlong)pdVar31 + (longlong)(int)uVar28);
                  *pdVar24 = (double)fVar44;
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)uVar15);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
          }
          else if (uVar41 == 0x345e05) {
            if (uVar7 == 0x74605) {
              iVar20 = 0;
              if (3 < (int)uVar6) {
                lVar25 = (longlong)(int)uVar28;
                uVar41 = (uVar6 - 4 >> 2) + 1;
                lVar40 = (longlong)(int)uVar15;
                uVar38 = (ulonglong)uVar41;
                iVar20 = uVar41 * 4;
                do {
                  *(short *)pdVar24 = (short)((uint)((float)*pdVar31 * 1.0039062) >> 0x10);
                  pdVar32 = (double *)((longlong)pdVar31 + lVar25 + lVar25);
                  *(undefined2 *)((longlong)pdVar24 + lVar40) =
                       (short)((uint)((float)*(double *)((longlong)pdVar31 + lVar25) * 1.0039062) >>
                              0x10);
                  puVar17 = (undefined2 *)((longlong)pdVar24 + lVar40 + lVar40);
                  pdVar24 = (double *)((longlong)pdVar32 + lVar25);
                  *puVar17 = (short)((uint)((float)*pdVar32 * 1.0039062) >> 0x10);
                  puVar17 = (undefined2 *)((longlong)puVar17 + lVar40);
                  pdVar31 = (double *)((longlong)pdVar24 + lVar25);
                  fVar44 = (float)*pdVar24 * 1.0039062;
                  local_2d98 = (longlong ***)CONCAT44(local_2d98._4_4_,fVar44);
                  *puVar17 = (short)((uint)fVar44 >> 0x10);
                  pdVar24 = (double *)((longlong)puVar17 + lVar40);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
              if (iVar20 < (int)uVar6) {
                uVar38 = (ulonglong)(uVar6 - iVar20);
                do {
                  dVar5 = *pdVar31;
                  pdVar31 = (double *)((longlong)pdVar31 + (longlong)(int)uVar28);
                  local_2d98 = (longlong ***)CONCAT44(local_2d98._4_4_,(float)dVar5 * 1.0039062);
                  *(short *)pdVar24 = (short)((uint)((float)dVar5 * 1.0039062) >> 0x10);
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)uVar15);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            else if (uVar7 == 0x174605) {
              iVar20 = 0;
              if (3 < (int)uVar6) {
                lVar25 = (longlong)(int)uVar28;
                uVar41 = (uVar6 - 4 >> 2) + 1;
                lVar40 = (longlong)(int)uVar15;
                uVar38 = (ulonglong)uVar41;
                iVar20 = uVar41 * 4;
                do {
                  *(float *)pdVar24 = (float)*pdVar31;
                  pdVar32 = (double *)((longlong)pdVar31 + lVar25 + lVar25);
                  *(float *)((longlong)pdVar24 + lVar40) =
                       (float)*(double *)((longlong)pdVar31 + lVar25);
                  pfVar16 = (float *)((longlong)pdVar24 + lVar40 + lVar40);
                  pdVar24 = (double *)((longlong)pdVar32 + lVar25);
                  *pfVar16 = (float)*pdVar32;
                  pfVar16 = (float *)((longlong)pfVar16 + lVar40);
                  pdVar31 = (double *)((longlong)pdVar24 + lVar25);
                  *pfVar16 = (float)*pdVar24;
                  pdVar24 = (double *)((longlong)pfVar16 + lVar40);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
              if (iVar20 < (int)uVar6) {
                uVar38 = (ulonglong)(uVar6 - iVar20);
                do {
                  dVar5 = *pdVar31;
                  pdVar31 = (double *)((longlong)pdVar31 + (longlong)(int)uVar28);
                  *(float *)pdVar24 = (float)dVar5;
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)uVar15);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            else if (uVar7 == 0x345e05) {
              iVar20 = 0;
              if (3 < (int)uVar6) {
                lVar25 = (longlong)(int)uVar28;
                uVar41 = (uVar6 - 4 >> 2) + 1;
                lVar40 = (longlong)(int)uVar15;
                uVar38 = (ulonglong)uVar41;
                iVar20 = uVar41 * 4;
                do {
                  *pdVar24 = *pdVar31;
                  puVar29 = (undefined8 *)((longlong)pdVar31 + lVar25 + lVar25);
                  *(undefined8 *)((longlong)pdVar24 + lVar40) =
                       *(undefined8 *)((longlong)pdVar31 + lVar25);
                  puVar11 = (undefined8 *)((longlong)pdVar24 + lVar40 + lVar40);
                  puVar30 = (undefined8 *)((longlong)puVar29 + lVar25);
                  *puVar11 = *puVar29;
                  puVar11 = (undefined8 *)((longlong)puVar11 + lVar40);
                  pdVar31 = (double *)((longlong)puVar30 + lVar25);
                  *puVar11 = *puVar30;
                  pdVar24 = (double *)((longlong)puVar11 + lVar40);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
              if (iVar20 < (int)uVar6) {
                uVar38 = (ulonglong)(uVar6 - iVar20);
                do {
                  dVar5 = *pdVar31;
                  pdVar31 = (double *)((longlong)pdVar31 + (longlong)(int)uVar28);
                  *pdVar24 = dVar5;
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)uVar15);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
          }
          if (((ulonglong)local_2da0 & 0x100) != 0) {
            pdVar24 = local_2038;
            uVar41 = ((uint)local_2da0 >> 0xb & 0x1f) + 7 +
                     ((uint)((ulonglong)local_2da0 >> 10) & 1) +
                     ((uint)((ulonglong)local_2da0 >> 0x10) & 0xff) >> 3;
            if (uVar41 == 1) {
              uVar38 = (ulonglong)uVar6;
              if (0 < (int)uVar6) {
                do {
                  uVar1 = *(undefined1 *)pdVar24;
                  pdVar24 = pdVar24 + 1;
                  *(undefined1 *)pdVar22 = uVar1;
                  pdVar22 = (double *)((longlong)pdVar22 + (longlong)(int)param_7);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            else if (uVar41 == 2) {
              uVar38 = (ulonglong)uVar6;
              if (0 < (int)uVar6) {
                do {
                  uVar4 = *(ushort *)pdVar24;
                  pdVar24 = pdVar24 + 1;
                  *(ushort *)pdVar22 = uVar4 >> 8 | uVar4 << 8;
                  pdVar22 = (double *)((longlong)pdVar22 + (longlong)(int)param_7);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            else if (uVar41 == 4) {
              uVar38 = (ulonglong)uVar6;
              if (0 < (int)uVar6) {
                do {
                  uVar41 = *(uint *)pdVar24;
                  pdVar24 = pdVar24 + 1;
                  *(uint *)pdVar22 =
                       uVar41 >> 0x18 | (uVar41 & 0xff0000) >> 8 | (uVar41 & 0xff00) << 8 |
                       uVar41 << 0x18;
                  pdVar22 = (double *)((longlong)pdVar22 + (longlong)(int)param_7);
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            else if ((uVar41 == 8) && (uVar38 = (ulonglong)uVar6, 0 < (int)uVar6)) {
              do {
                dVar5 = *pdVar24;
                pdVar24 = pdVar24 + 1;
                *pdVar22 = (double)((ulonglong)dVar5 >> 0x38 |
                                    ((ulonglong)dVar5 & 0xff000000000000) >> 0x28 |
                                    ((ulonglong)dVar5 & 0xff0000000000) >> 0x18 |
                                    ((ulonglong)dVar5 & 0xff00000000) >> 8 |
                                    ((ulonglong)dVar5 & 0xff000000) << 8 |
                                    ((ulonglong)dVar5 & 0xff0000) << 0x18 |
                                    ((ulonglong)dVar5 & 0xff00) << 0x28 | (longlong)dVar5 << 0x38);
                pdVar22 = (double *)((longlong)pdVar22 + (longlong)(int)param_7);
                uVar38 = uVar38 - 1;
              } while (uVar38 != 0);
            }
          }
          break;
        case (WriteBytesMem)0xb:
          uVar10 = *(undefined8 *)(pWVar26 + 0x10);
          FUN_1437152f0(uVar10);
          FUN_1437152f0(*(undefined8 *)(local_2da0 + 0x18));
          iVar20 = FUN_1437152f0(uVar10);
          iVar8 = FUN_1437152f0();
          iVar39 = 0;
          pdVar22 = local_2d70;
          if ((int)uVar6 < 1) break;
          do {
            if (iVar20 == 1) {
              bVar43 = *(char *)pdVar24 == '\0';
            }
            else if (iVar20 == 2) {
              bVar43 = *(short *)pdVar24 == 0;
            }
            else if (iVar20 == 4) {
              bVar43 = *(float *)pdVar24 == 0.0;
            }
            else {
              bVar43 = *pdVar24 == 0.0;
            }
            bVar43 = !bVar43;
            if (iVar8 == 1) {
              *(bool *)pdVar22 = bVar43;
            }
            else if (iVar8 == 2) {
              *(ushort *)pdVar22 = (ushort)bVar43;
            }
            else if (iVar8 == 4) {
              *(uint *)pdVar22 = (uint)bVar43;
            }
            else {
              *pdVar22 = (double)(ulonglong)bVar43;
            }
            uVar38 = (ulonglong)(int)param_7;
            iVar39 = iVar39 + 1;
            pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)param_8);
            pdVar22 = (double *)((longlong)pdVar22 + uVar38);
            lVar25 = local_2d80;
          } while (iVar39 < (int)uVar6);
        default:
          goto switchD_1436f5528_default;
        }
        uVar38 = (ulonglong)param_7;
        lVar25 = local_2d80;
switchD_1436f5528_default:
        pppplVar23 = (longlong ****)local_2d88;
      }
      local_2d14 = local_2d14 + uVar6;
    } while (local_2d14 < param_9);
  }
  iVar20 = 0;
  if (0 < (int)local_2c40) {
    do {
      piVar14 = (int *)FUN_1436f9a30(param_1,&param_9,local_2c48 + (longlong)iVar20 * 0x30,
                                     local_2c48 + (longlong)iVar20 * 0x30 + 0x18);
      if (*piVar14 < 0) {
        uVar21 = 0x80040200;
        goto LAB_1436f6b6e;
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < (int)local_2c40);
  }
  uVar21 = 0;
LAB_1436f6b6e:
  local_2d58 = (longlong ***)FUN_143703a50();
  lVar25 = (longlong)(int)(local_2c40 - 1);
  if (-1 < (int)(local_2c40 - 1)) {
    puVar27 = (ulonglong *)(local_2c48 + lVar25 * 0x30 + 0x10);
    do {
      if ((puVar27[3] & 1) != 0) {
        FUN_143733a60(puVar27[3] & 0xfffffffffffffffe);
      }
      if ((*puVar27 & 1) != 0) {
        FUN_143733a60(*puVar27 & 0xfffffffffffffffe);
      }
      puVar27 = puVar27 + -6;
      lVar25 = lVar25 + -1;
    } while (-1 < lVar25);
  }
  local_2c40 = 0;
  if (-1 < (int)local_2c3c) {
    FUN_143702e10(local_2d58,local_2c48,0x30,local_2c3c & 0x3fffffff);
  }
  return uVar21;
code_r0x0001436f6a6e:
  FUN_1436f7f80();
  local_2d18 = local_2d18 + 1;
  uVar38 = (ulonglong)param_7;
  lVar25 = local_2d80;
  goto LAB_1436f54bf;
LAB_1436f6abb:
  if (((ulonglong)local_2d68 & 1) != 0) {
    FUN_143733a60((ulonglong)local_2d68 & 0xfffffffffffffffe);
  }
  if (((ulonglong)local_2d70 & 1) == 0) {
LAB_1436f6b0c:
    uVar21 = 0x80040200;
  }
  else {
    FUN_143733a60((ulonglong)local_2d70 & 0xfffffffffffffffe);
    uVar21 = 0x80040200;
  }
  goto LAB_1436f6b6e;
}



// FUNCTION 1436f6c70 FUN_1436f6c70 body=330 status=ok
// SIG undefined FUN_1436f6c70(void)

undefined4 *
FUN_1436f6c70(longlong *param_1,undefined4 *param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  if (*param_3 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar4 = FUN_143740180();
    uVar9 = (ulonglong)uVar4;
  }
  iVar5 = *(int *)(param_1[2] + 4 + (*(uint *)(param_1 + 3) & uVar9) * 8);
  puVar1 = (undefined4 *)(param_1[2] + (*(uint *)(param_1 + 3) & uVar9) * 8);
  do {
    if (iVar5 < 0) {
      lVar2 = param_1[1];
      *puVar1 = (int)uVar9;
      puVar1[1] = (int)lVar2;
      uVar6 = FUN_143703a50();
      if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar6,param_1,0x10);
      }
      lVar3 = param_1[1];
      *param_2 = (int)lVar2;
      plVar7 = (longlong *)((longlong)(int)lVar3 * 0x10 + *param_1);
      *(int *)(param_1 + 1) = (int)lVar3 + 1;
      *plVar7 = *param_3;
      *(undefined4 *)(plVar7 + 1) = *param_4;
LAB_1436f6d8b:
      param_2[1] = (int)((longlong)puVar1 - param_1[2] >> 3);
      return param_2;
    }
    lVar2 = *(longlong *)((longlong)(int)puVar1[1] * 0x10 + *param_1);
    if ((lVar2 == *param_3) ||
       (((lVar2 != 0 && (*param_3 != 0)) && (iVar5 = hkString::strCmp(), iVar5 == 0)))) {
      *param_2 = puVar1[1];
      goto LAB_1436f6d8b;
    }
    lVar2 = param_1[2];
    uVar8 = ((longlong)puVar1 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar5 = *(int *)(lVar2 + 4 + uVar8 * 8);
    puVar1 = (undefined4 *)(lVar2 + uVar8 * 8);
  } while( true );
}



// FUNCTION 1436f6dc0 FUN_1436f6dc0 body=355 status=ok
// SIG undefined FUN_1436f6dc0(void)

undefined4 *
FUN_1436f6dc0(longlong *param_1,undefined4 *param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  if (*param_3 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar4 = FUN_143740180();
    uVar9 = (ulonglong)uVar4;
  }
  iVar5 = *(int *)(param_1[2] + 4 + (*(uint *)(param_1 + 3) & uVar9) * 8);
  puVar1 = (undefined4 *)(param_1[2] + (*(uint *)(param_1 + 3) & uVar9) * 8);
  do {
    if (iVar5 < 0) {
      lVar3 = param_1[1];
      *puVar1 = (int)uVar9;
      puVar1[1] = (int)lVar3;
      uVar6 = FUN_143703a50();
      if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar6,param_1,0x10);
      }
      puVar7 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
      }
      lVar10 = (longlong)(int)param_1[1] * 0x10 + *param_1;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      FUN_1437166c0(lVar10,*param_3);
      uVar2 = *param_4;
      *param_2 = (int)lVar3;
      *(undefined4 *)(lVar10 + 8) = uVar2;
LAB_1436f6ef4:
      param_2[1] = (int)((longlong)puVar1 - param_1[2] >> 3);
      return param_2;
    }
    if ((*(ulonglong *)(*param_1 + (longlong)(int)puVar1[1] * 0x10) & 0xfffffffffffffffe) == 0) {
      iVar5 = -(uint)(*param_3 != 0);
LAB_1436f6e59:
      if (iVar5 == 0) {
        *param_2 = puVar1[1];
        goto LAB_1436f6ef4;
      }
    }
    else if (*param_3 != 0) {
      iVar5 = hkString::strCmp();
      goto LAB_1436f6e59;
    }
    lVar3 = param_1[2];
    uVar8 = ((longlong)puVar1 - lVar3 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar5 = *(int *)(lVar3 + 4 + uVar8 * 8);
    puVar1 = (undefined4 *)(lVar3 + uVar8 * 8);
  } while( true );
}



// FUNCTION 1436f6f30 FUN_1436f6f30 body=343 status=ok
// SIG undefined FUN_1436f6f30(void)

uint * FUN_1436f6f30(longlong *param_1,uint *param_2,int *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = *param_3;
  iVar3 = param_3[1];
  uVar10 = iVar2 * -0x61c8864f;
  uVar8 = iVar3 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar10 = uVar10 ^ (uVar8 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + uVar8;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar10);
  puVar9 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    do {
      if ((*(int *)(*param_1 + (longlong)(int)puVar9[1] * 0xc) == iVar2) &&
         (*(int *)(*param_1 + 4 + (longlong)(int)puVar9[1] * 0xc) == iVar3)) {
        *param_2 = puVar9[1];
        goto LAB_1436f7056;
      }
      lVar4 = param_1[2];
      uVar7 = ((longlong)puVar9 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar9 = (uint *)(lVar4 + uVar7 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar7 * 8));
  }
  uVar8 = *(uint *)(param_1 + 1);
  *puVar9 = uVar10;
  puVar9[1] = uVar8;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,0xc);
  }
  lVar5 = param_1[1];
  lVar4 = *param_1;
  *param_2 = uVar8;
  puVar1 = (undefined8 *)(lVar4 + (longlong)(int)lVar5 * 0xc);
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined4 *)(puVar1 + 1) = *param_4;
LAB_1436f7056:
  param_2[1] = (uint)((longlong)puVar9 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 1436f7090 FUN_1436f7090 body=75 status=ok
// SIG undefined FUN_1436f7090(void)

undefined8 * FUN_1436f7090(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUniqueNetIdString::GetBytes();
  *param_2 = param_3;
  param_2[1] = lVar1;
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1437151a0(lVar1);
  }
  param_2[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1436f70e0 FUN_1436f70e0 body=75 status=ok
// SIG undefined FUN_1436f70e0(void)

undefined8 * FUN_1436f70e0(WriteBytesMem *param_1,undefined8 *param_2,undefined8 param_3)

{
  uchar *puVar1;
  ulonglong uVar2;
  
  puVar1 = AK::WriteBytesMem::Bytes(param_1);
  *param_2 = param_3;
  param_2[1] = puVar1;
  uVar2 = 0;
  if (puVar1 != (uchar *)0x0) {
    uVar2 = FUN_1437151a0(puVar1);
  }
  param_2[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1436f7130 FUN_1436f7130 body=131 status=ok
// SIG undefined FUN_1436f7130(void)

void FUN_1436f7130(int param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  if ((int)param_2[1] <= param_1) {
    param_1 = param_1 + 1;
    uVar2 = FUN_143703a50();
    uVar4 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
    if ((int)uVar4 < param_1) {
      iVar1 = uVar4 * 2;
      iVar5 = param_1;
      if (param_1 < iVar1) {
        iVar5 = iVar1;
      }
      FUN_14370c310(uVar2,param_2,iVar5,0xc);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 0xc);
    iVar5 = param_1 - (int)param_2[1];
    lVar6 = (longlong)iVar5;
    if (0 < iVar5) {
      do {
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          *(undefined4 *)(puVar3 + 1) = 0;
        }
        puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    *(int *)(param_2 + 1) = param_1;
  }
  return;
}



// FUNCTION 1436f71c0 FUN_1436f71c0 body=286 status=ok
// SIG undefined FUN_1436f71c0(void)

void FUN_1436f71c0(int param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  
  if ((int)param_2[1] <= param_1) {
    param_1 = param_1 + 1;
    uVar3 = FUN_143703a50();
    uVar5 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
    if ((int)uVar5 < param_1) {
      iVar1 = uVar5 * 2;
      iVar2 = param_1;
      if (param_1 < iVar1) {
        iVar2 = iVar1;
      }
      FUN_14370c310(uVar3,param_2,iVar2,0x18);
    }
    iVar2 = ((int)param_2[1] - param_1) + -1;
    lVar7 = (longlong)iVar2;
    if (-1 < iVar2) {
      puVar6 = (uint *)(*param_2 + (longlong)param_1 * 0x18 + 0x14 + lVar7 * 0x18);
      do {
        uVar3 = FUN_143703a50();
        puVar6[-1] = 0;
        if (-1 < (int)*puVar6) {
          FUN_143702e10(uVar3,*(undefined8 *)(puVar6 + -3),0x10,*puVar6 & 0x3fffffff);
        }
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        *puVar6 = 0x80000000;
        puVar6 = puVar6 + -6;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    iVar2 = param_1 - (int)param_2[1];
    lVar7 = (longlong)iVar2;
    if (0 < iVar2) {
      puVar4 = (undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 0x18 + 0x14);
      do {
        if (puVar4 + -5 != (undefined4 *)0x0) {
          puVar4[-5] = 0;
          *(undefined8 *)(puVar4 + -3) = 0;
          puVar4[-1] = 0;
          *puVar4 = 0x80000000;
        }
        puVar4 = puVar4 + 6;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    *(int *)(param_2 + 1) = param_1;
  }
  return;
}



// FUNCTION 1436f72e0 FUN_1436f72e0 body=223 status=ok
// SIG undefined FUN_1436f72e0(void)

void FUN_1436f72e0(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 uStackX_c;
  
  uVar6 = (ulonglong)param_2;
  uVar7 = uVar6;
  uVar11 = param_4;
  do {
    uVar4 = (ulonglong)param_3;
    uVar9 = uVar7 & 0xffffffff;
    uVar2 = *(undefined8 *)(param_1 + ((longlong)(param_3 + (int)uVar7) >> 1) * 8);
    uStackX_c = (uint)((ulonglong)uVar2 >> 0x20);
    iVar10 = param_3;
    do {
      while( true ) {
        uVar1 = *(uint *)(param_1 + uVar6 * 8);
        uVar5 = (uint)uVar2;
        uVar8 = (uint)uVar9;
        if ((uVar5 <= uVar1) &&
           ((uVar1 != uVar5 || (uStackX_c <= *(uint *)(param_1 + 4 + uVar6 * 8))))) break;
        uVar9 = (ulonglong)(uVar8 + 1);
        uVar6 = uVar6 + 1;
      }
      while( true ) {
        uVar1 = *(uint *)(param_1 + uVar4 * 8);
        if ((uVar1 <= uVar5) &&
           ((uVar5 != uVar1 || (*(uint *)(param_1 + 4 + uVar4 * 8) <= uStackX_c)))) break;
        iVar10 = iVar10 + -1;
        uVar4 = uVar4 - 1;
      }
      if ((longlong)uVar4 < (longlong)uVar6) break;
      if (uVar4 != uVar6) {
        uVar3 = *(undefined8 *)(param_1 + uVar4 * 8);
        *(undefined8 *)(param_1 + uVar4 * 8) = *(undefined8 *)(param_1 + uVar6 * 8);
        *(undefined8 *)(param_1 + uVar6 * 8) = uVar3;
      }
      iVar10 = iVar10 + -1;
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 <= (longlong)uVar4);
    if ((int)uVar7 < iVar10) {
      FUN_1436f72e0(param_1,uVar7 & 0xffffffff,iVar10,uVar11);
      uVar11 = param_4 & 0xff;
    }
    if (param_3 <= (int)uVar8) {
      return;
    }
    uVar7 = (ulonglong)uVar8;
  } while( true );
}



// FUNCTION 1436f73d0 FUN_1436f73d0 body=12 status=ok
// SIG undefined FUN_1436f73d0(void)

void FUN_1436f73d0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e2850);
  return;
}



// FUNCTION 1436f73e0 FUN_1436f73e0 body=97 status=ok
// SIG undefined FUN_1436f73e0(void)

void FUN_1436f73e0(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = *param_2;
  iVar3 = FUN_14370c910(uVar2);
  uVar1 = *param_1 + (longlong)(iVar3 + 1);
  if (uVar1 <= param_1[1]) {
    FGenericPlatformString::Memcpy();
    *param_1 = uVar1;
    return;
  }
  hkIo::WriteBuffer::implWriteRaw(param_1,uVar2);
  return;
}



// FUNCTION 1436f7450 FUN_1436f7450 body=95 status=ok
// SIG undefined FUN_1436f7450(void)

void FUN_1436f7450(ulonglong *param_1,int *param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong local_res8;
  undefined1 local_18 [16];
  
  local_res8 = (longlong)*param_2;
  iVar2 = hkUintVle::write((int)&local_res8,local_18,param_3);
  uVar1 = *param_1;
  if (uVar1 + (longlong)iVar2 <= param_1[1]) {
    FGenericPlatformString::Memcpy();
    *param_1 = uVar1 + (longlong)iVar2;
    return;
  }
  hkIo::WriteBuffer::implWriteRaw(param_1,local_18);
  return;
}



// FUNCTION 1436f74b0 FUN_1436f74b0 body=94 status=ok
// SIG undefined FUN_1436f74b0(void)

void FUN_1436f74b0(ulonglong *param_1,uint *param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong local_res8;
  undefined1 local_18 [16];
  
  local_res8 = (ulonglong)*param_2;
  iVar2 = hkUintVle::write((int)&local_res8,local_18,param_3);
  uVar1 = *param_1;
  if (uVar1 + (longlong)iVar2 <= param_1[1]) {
    FGenericPlatformString::Memcpy();
    *param_1 = uVar1 + (longlong)iVar2;
    return;
  }
  hkIo::WriteBuffer::implWriteRaw(param_1,local_18);
  return;
}



// FUNCTION 1436f7510 FUN_1436f7510 body=95 status=ok
// SIG undefined FUN_1436f7510(void)

void FUN_1436f7510(ulonglong *param_1,undefined8 *param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 local_res8;
  undefined1 local_18 [16];
  
  local_res8 = *param_2;
  iVar2 = hkUintVle::write((int)&local_res8,local_18,param_3);
  uVar1 = *param_1;
  if (uVar1 + (longlong)iVar2 <= param_1[1]) {
    FGenericPlatformString::Memcpy();
    *param_1 = uVar1 + (longlong)iVar2;
    return;
  }
  hkIo::WriteBuffer::implWriteRaw(param_1,local_18);
  return;
}



// FUNCTION 1436f7570 FUN_1436f7570 body=81 status=ok
// SIG undefined FUN_1436f7570(void)

void FUN_1436f7570(ulonglong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_2;
  uVar1 = *param_1;
  if (uVar1 + 4 <= param_1[1]) {
    FGenericPlatformString::Memcpy();
    *param_1 = uVar1 + 4;
    return;
  }
  hkIo::WriteBuffer::implWriteRaw(param_1,local_res8,4);
  return;
}



// FUNCTION 1436f75d0 FUN_1436f75d0 body=83 status=ok
// SIG undefined FUN_1436f75d0(void)

void FUN_1436f75d0(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 local_res8;
  
  local_res8 = *param_2;
  uVar1 = *param_1;
  if (uVar1 + 8 <= param_1[1]) {
    FGenericPlatformString::Memcpy();
    *param_1 = uVar1 + 8;
    return;
  }
  hkIo::WriteBuffer::implWriteRaw(param_1,&local_res8,8);
  return;
}



// FUNCTION 1436f7630 FUN_1436f7630 body=792 status=ok
// SIG undefined FUN_1436f7630(void)

undefined8 * FUN_1436f7630(undefined8 *param_1,undefined8 *param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = hkSerialize::TagfileWriteFormat::Impl::vftable;
  FUN_1436f7950(param_1 + 1);
  puVar6 = (undefined8 *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x80000000;
  param_1[0x2d] = 0;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x80000000;
  FUN_143734b10(param_1 + 0x33);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = 8;
  }
  else {
    uVar1 = FUN_14374dbd0(param_2);
  }
  *(undefined4 *)(param_1 + 0x3d) = uVar1;
  uVar1 = 4;
  if (param_3 != '\0') {
    if (param_2 == (undefined8 *)0x0) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = EVP_CIPHER_CTX_iv_length(param_2);
      iVar2 = iVar2 * 4;
    }
  }
  *(int *)((longlong)param_1 + 0x1ec) = iVar2;
  if (param_3 != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x3d);
  }
  *(undefined4 *)(param_1 + 0x3e) = uVar1;
  FUN_14374e530(param_1 + 0x3f);
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(char *)((longlong)param_1 + 0x23c) = param_3;
  puVar5 = puVar6;
  if (param_4 != '\0') {
    puVar5 = param_2;
  }
  *(undefined1 *)((longlong)param_1 + 0x23d) = 0;
  param_1[0x48] = puVar5;
  FUN_14374b170(param_1 + 0x49,0xffffffffffffffff);
  FUN_14374b140(param_1 + 0x4e);
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x80000000;
  FUN_143734b10(param_1 + 0x54);
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x60);
  puVar5 = puVar6;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0x1ffff;
    *puVar4 = hkSerialize::Detail::TagfileTypeWriter::vftable;
    FUN_143731a30(puVar4 + 3);
    puVar4[10] = param_1;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    puVar5 = puVar4;
  }
  if (param_2 == (undefined8 *)0x0) {
    if (puVar5 != (undefined8 *)param_1[0x46]) {
      if ((undefined8 *)param_1[0x46] != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      param_1[0x46] = puVar5;
    }
  }
  else {
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    puVar4 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0x1ffff;
      *puVar4 = hkSerialize::Detail::MakeTargetedTypeWriter::vftable;
      puVar4[3] = param_2;
      puVar4[4] = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_14370c030(puVar5);
      }
    }
    if (puVar4 != (undefined8 *)param_1[0x46]) {
      if ((undefined8 *)param_1[0x46] != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      param_1[0x46] = puVar4;
    }
    FUN_14370c150(puVar5);
  }
  FUN_143750180(param_1 + 0x3f);
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = hkTypeVm::IntAndFloatConversionPass::vftable;
    puVar6 = puVar5;
  }
  FUN_14374e870(param_1 + 0x3f,puVar6);
  *(undefined2 *)((longlong)param_1 + 0x1f9) = 0x100;
  return param_1;
}



// FUNCTION 1436f7950 FUN_1436f7950 body=120 status=ok
// SIG undefined FUN_1436f7950(void)

undefined8 * FUN_1436f7950(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1436f7ac0(param_1 + 2);
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80000000;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x80000000;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x80000000;
  return param_1;
}



// FUNCTION 1436f79d0 FUN_1436f79d0 body=229 status=ok
// SIG undefined FUN_1436f79d0(void)

undefined8 * FUN_1436f79d0(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_38 [48];
  
  uVar4 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkSerialize::TagfileWriteFormat::vftable;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x2b0);
  if (lVar2 != 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar3 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),8);
    if (lVar3 != 0) {
      uVar4 = FUN_14374c210(local_38);
      uVar4 = FUN_14374cb20(lVar3,uVar4);
    }
    uVar4 = FUN_1436f7630(lVar2,uVar4,0,1);
    param_1[3] = uVar4;
    return param_1;
  }
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1436f7ac0 FUN_1436f7ac0 body=274 status=ok
// SIG undefined FUN_1436f7ac0(void)

undefined8 * FUN_1436f7ac0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_143734b10(param_1 + 8);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  FUN_143734b10(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  FUN_143734b10(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  FUN_143734b10(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x17) = 1;
  return param_1;
}



// FUNCTION 1436f7be0 FUN_1436f7be0 body=202 status=ok
// SIG undefined FUN_1436f7be0(void)

void FUN_1436f7be0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_143703a50();
  iVar3 = (int)param_1[1] + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*param_1 + 0x14 + lVar5 * 0x18);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),0x10,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -6;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x18,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 1436f7cb0 FUN_1436f7cb0 body=517 status=ok
// SIG undefined FUN_1436f7cb0(void)

void FUN_1436f7cb0(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  undefined1 local_48 [64];
  
  *param_1 = hkSerialize::TagfileWriteFormat::Impl::vftable;
  if ((*(int *)(param_1 + 0x3c) == 1) && (DAT_146b7bca8 != '\0')) {
    FUN_14373a730(local_48,&DAT_146b7bca0,1);
    lVar1 = FUN_14373bbd0(local_48,"beginTypeCompendium called without matching endTypeCompendium",
                          &DAT_145b909f0,0);
    *(char **)(lVar1 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileWriteFormat.cpp";
    *(undefined8 *)(lVar1 + 0x28) = 0x3d1;
    FUN_14373a950(local_48);
  }
  lVar1 = param_1[0x48];
  if (lVar1 != 0) {
    FUN_14374cc10(lVar1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,8);
  }
  thunk_FUN_143734820(param_1 + 0x54);
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x29c)) {
    FUN_143702e10(uVar3,param_1[0x52],4,*(uint *)((longlong)param_1 + 0x29c) & 0x3fffffff);
  }
  param_1[0x52] = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x80000000;
  FUN_14374b1b0(param_1 + 0x4e);
  FUN_14374b1b0(param_1 + 0x49);
  if (param_1[0x46] != 0) {
    FUN_14370c150();
  }
  FUN_14374e570(param_1 + 0x3f);
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1dc)) {
    FUN_143702e10(uVar3,param_1[0x3a],8,*(uint *)((longlong)param_1 + 0x1dc) & 0x3fffffff);
  }
  param_1[0x3a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x80000000;
  if (param_1[0x36] != 0) {
    FUN_14370c150();
  }
  FUN_1436f7f80(param_1 + 0x2c);
  FUN_1436f7ec0(param_1 + 0x26);
  FUN_1436f8070(param_1 + 3);
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 2) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x14)) {
    FUN_143702e10(uVar3,param_1[1],1,*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff);
  }
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  *param_1 = _anon_E7D49DE2::Fixups::vftable;
  return;
}



// FUNCTION 1436f7ec0 FUN_1436f7ec0 body=181 status=ok
// SIG undefined FUN_1436f7ec0(void)

void FUN_1436f7ec0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],8,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 3) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) {
    FUN_143702e10(uVar1,param_1[2],8,*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0xc,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 1436f7f80 FUN_1436f7f80 body=165 status=ok
// SIG undefined FUN_1436f7f80(void)

void FUN_1436f7f80(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  FUN_1436ea8a0(param_1 + 0x28);
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)(*(longlong *)(param_1 + 8) + 0x10 + lVar4 * 0x20);
    do {
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      puVar3 = puVar3 + -4;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 8),0x20,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 1436f8030 FUN_1436f8030 body=51 status=ok
// SIG undefined FUN_1436f8030(void)

void FUN_1436f8030(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = hkSerialize::TagfileWriteFormat::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1437352a0(param_1);
  return;
}



// FUNCTION 1436f8070 FUN_1436f8070 body=492 status=ok
// SIG undefined FUN_1436f8070(void)

void FUN_1436f8070(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x10c)) {
    FUN_143702e10(uVar1,param_1[0x20],8,*(uint *)((longlong)param_1 + 0x10c) & 0x3fffffff);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  thunk_FUN_143734820(param_1 + 0x1d);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xe4)) {
    FUN_143702e10(uVar1,param_1[0x1b],0xc,*(uint *)((longlong)param_1 + 0xe4) & 0x3fffffff);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  FUN_1436f7be0(param_1 + 0x15);
  thunk_FUN_143734820(param_1 + 0x12);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) {
    FUN_143702e10(uVar1,param_1[0x10],0x10,*(uint *)((longlong)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  thunk_FUN_143734820(param_1 + 0xd);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar1,param_1[0xb],0x10,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  thunk_FUN_143734820(param_1 + 8);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],0x10,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],1,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,8,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 1436f8260 FUN_1436f8260 body=153 status=ok
// SIG undefined FUN_1436f8260(void)

void FUN_1436f8260(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),8,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x10),1,*(uint *)(param_1 + 0x1c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  uVar1 = FUN_143703a50();
  FUN_143700a90(param_1,uVar1);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1436f8300 FUN_1436f8300 body=43 status=ok
// SIG undefined FUN_1436f8300(void)

undefined8 * FUN_1436f8300(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = _anon_E7D49DE2::Fixups::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1436f8330 FUN_1436f8330 body=120 status=ok
// SIG undefined FUN_1436f8330(void)

longlong FUN_1436f8330(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1436f7cb0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x2b0);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x2b0);
    }
  }
  return param_1;
}



// FUNCTION 1436f83b0 FUN_1436f83b0 body=99 status=ok
// SIG undefined FUN_1436f83b0(void)

undefined8 * FUN_1436f83b0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkTypeVm::Pass::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 1436f8420 FUN_1436f8420 body=151 status=ok
// SIG undefined FUN_1436f8420(void)

longlong FUN_1436f8420(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x28;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1436f84c0 FUN_1436f84c0 body=151 status=ok
// SIG undefined FUN_1436f84c0(void)

longlong FUN_1436f84c0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1436f8260(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x60;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
    }
  }
  return param_1;
}



// FUNCTION 1436f8560 FUN_1436f8560 body=139 status=ok
// SIG undefined FUN_1436f8560(void)

longlong FUN_1436f8560(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1436f8030();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x20;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
    }
  }
  return param_1;
}



// FUNCTION 1436f85f0 FUN_1436f85f0 body=139 status=ok
// SIG undefined FUN_1436f85f0(void)

longlong FUN_1436f85f0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437352a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x18;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
    }
  }
  return param_1;
}



// FUNCTION 1436f8680 FUN_1436f8680 body=356 status=ok
// SIG undefined FUN_1436f8680(void)

void FUN_1436f8680(undefined8 *param_1,undefined8 param_2,char param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  uVar4 = 0;
  if (param_3 != '\0') {
    uVar4 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    uVar6 = *param_5;
    uVar1 = param_5[2];
    uVar2 = param_5[1];
    if ((uVar1 & 1) != 0) {
      FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    }
    uVar5 = FUN_143703a50();
    if (*(uint *)(param_1 + 2) == (*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff)) {
      FUN_14370c460(uVar5,param_1 + 1,0x20);
    }
    puVar7 = (undefined8 *)((longlong)*(int *)(param_1 + 2) * 0x20 + param_1[1]);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = uVar6;
      puVar7[1] = uVar2;
      puVar7[2] = uVar1;
      if ((uVar1 & 1) != 0) {
        FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
      }
      *(undefined4 *)(puVar7 + 3) = uVar4;
    }
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
    if ((uVar1 & 1) != 0) {
      FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    }
    if (*(char *)(param_1 + 4) != '\0') {
      uVar6 = param_4[1];
      uVar2 = *param_4;
      lVar3 = *(longlong *)param_1[3];
      uVar5 = FUN_1436fa0b0(param_5[1]);
      uVar6 = FUN_1436fa0b0(uVar6);
      (**(code **)(lVar3 + 0x10))(param_1[3],uVar2,uVar6,uVar5);
    }
  }
  *(undefined4 *)*param_4 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001436f87e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],*param_4,uVar4);
  return;
}



// FUNCTION 1436f87f0 FUN_1436f87f0 body=92 status=ok
// SIG undefined FUN_1436f87f0(void)

longlong FUN_1436f87f0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = (ulonglong)
          ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000) &
          *(uint *)(param_1 + 3));
  iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
  if (-1 < iVar5) {
    do {
      if (*(int *)(*param_1 + (longlong)iVar5 * 4) == iVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 1436f8850 FUN_1436f8850 body=97 status=ok
// SIG undefined FUN_1436f8850(void)

void FUN_1436f8850(longlong *param_1,int param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  FUN_1436f7130(param_2,param_1);
  *(uint *)(*param_1 + lVar1 * 0xc) = param_3 | 0x50000000;
  *(undefined4 *)(*param_1 + 4 + lVar1 * 0xc) = 0xffffffff;
  *(undefined4 *)(*param_1 + 8 + lVar1 * 0xc) = param_4;
  return;
}



// FUNCTION 1436f88c0 FUN_1436f88c0 body=87 status=ok
// SIG undefined FUN_1436f88c0(void)

void FUN_1436f88c0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1,8);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CONCAT44(param_3,param_2);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



// FUNCTION 1436f8920 FUN_1436f8920 body=132 status=ok
// SIG undefined FUN_1436f8920(void)

void FUN_1436f8920(longlong *param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  iVar1 = param_3;
  if (param_3 < param_2) {
    iVar1 = param_2;
  }
  FUN_1436f7130(iVar1,param_1);
  *(uint *)(*param_1 + lVar2 * 0xc) = param_4 | 0x30000000;
  *(undefined4 *)(*param_1 + 4 + lVar2 * 0xc) = param_5;
  *(int *)(*param_1 + 8 + lVar2 * 0xc) = param_2;
  if ((*(uint *)(*param_1 + (longlong)param_2 * 0xc) & 0xf0000000) == 0) {
    *(int *)(*param_1 + 8 + (longlong)param_2 * 0xc) = param_3;
  }
  return;
}



// FUNCTION 1436f89b0 FUN_1436f89b0 body=86 status=ok
// SIG undefined FUN_1436f89b0(void)

void FUN_1436f89b0(longlong *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  FUN_1436f7130(param_2,param_1);
  *(uint *)(*param_1 + lVar1 * 0xc) = param_3 | 0x40000000;
  *(undefined4 *)(*param_1 + 4 + lVar1 * 0xc) = 0xffffffff;
  *(undefined4 *)(*param_1 + 8 + lVar1 * 0xc) = 0;
  return;
}



// FUNCTION 1436f8a10 FUN_1436f8a10 body=95 status=ok
// SIG undefined FUN_1436f8a10(void)

void FUN_1436f8a10(longlong *param_1,int param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  FUN_1436f7130(param_2,param_1);
  *(uint *)(*param_1 + lVar1 * 0xc) = param_3 | 0x10000000;
  *(undefined4 *)(*param_1 + 4 + lVar1 * 0xc) = param_4;
  *(undefined4 *)(*param_1 + 8 + lVar1 * 0xc) = 1;
  return;
}



// FUNCTION 1436f8a70 FUN_1436f8a70 body=18 status=ok
// SIG undefined FUN_1436f8a70(void)

void FUN_1436f8a70(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1a8) = param_2;
  *(undefined4 *)(param_1 + 0x1f0) = 1;
  return;
}



// FUNCTION 1436f8a90 FUN_1436f8a90 body=9 status=ok
// SIG undefined FUN_1436f8a90(void)

void FUN_1436f8a90(longlong param_1)

{
  FUN_1436f8a70(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1436f8aa0 FUN_1436f8aa0 body=222 status=ok
// SIG undefined FUN_1436f8aa0(void)

void FUN_1436f8aa0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 local_48 [64];
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    *(undefined4 *)(param_1 + 0x1e0) = 1;
    if (*param_2 != 0) {
      FUN_14370c030();
    }
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(param_1 + 0x1b0) = *param_2;
    *(longlong *)(param_1 + 0x1b8) = param_2[1];
    *(longlong *)(param_1 + 0x1c0) = param_2[2];
    *(longlong *)(param_1 + 0x1c8) = param_2[3];
  }
  else if (DAT_146b7bca8 != '\0') {
    FUN_14373a730(local_48,&DAT_146b7bca0,1);
    lVar1 = FUN_14373bbd0(local_48,"Type Compendium already begun",&DAT_145b909f0,0);
    *(char **)(lVar1 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileWriteFormat.cpp";
    *(undefined8 *)(lVar1 + 0x28) = 0x50a;
    FUN_14373a950(local_48);
    return;
  }
  return;
}



// FUNCTION 1436f8b80 FUN_1436f8b80 body=9 status=ok
// SIG undefined FUN_1436f8b80(void)

void FUN_1436f8b80(longlong param_1)

{
  FUN_1436f8aa0(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1436f8b90 FUN_1436f8b90 body=95 status=ok
// SIG undefined FUN_1436f8b90(void)

undefined8 * FUN_1436f8b90(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  DAT_146b7bd40._0_1_ = 1;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (lVar2 != 0) {
    uVar3 = FUN_1436f79d0(lVar2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1436f8bf0 FUN_1436f8bf0 body=239 status=ok
// SIG undefined FUN_1436f8bf0(void)

undefined8 FUN_1436f8bf0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  uVar2 = FUN_14374be90(0,*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20));
  uVar2 = FUN_1436f9f40(param_1 + 0x30,uVar2);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0xa8) + lVar6;
      uVar2 = FUN_14374be90(uVar2,lVar4,4);
      iVar5 = 0;
      iVar1 = *(int *)(lVar4 + 0x10);
      if (0 < iVar1) {
        do {
          uVar2 = FUN_14374be90(uVar2,*(undefined8 *)(lVar4 + 8),(longlong)iVar1 << 4);
          iVar5 = iVar5 + 1;
          iVar1 = *(int *)(lVar4 + 0x10);
        } while (iVar5 < iVar1);
      }
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 0xb0));
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  return uVar2;
}



// FUNCTION 1436f8ce0 FUN_1436f8ce0 body=181 status=ok
// SIG undefined FUN_1436f8ce0(void)

void FUN_1436f8ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0xc,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 3) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) {
    FUN_143702e10(uVar1,param_1[2],8,*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],8,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[4] = 0;
  return;
}



// FUNCTION 1436f8da0 FUN_1436f8da0 body=161 status=ok
// SIG undefined FUN_1436f8da0(void)

void FUN_1436f8da0(longlong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  lVar3 = (longlong)iVar1;
  if (-1 < iVar1) {
    puVar2 = (ulonglong *)(*(longlong *)(param_1 + 8) + 0x10 + lVar3 * 0x20);
    do {
      if ((*puVar2 & 1) != 0) {
        FUN_143733a60(*puVar2 & 0xfffffffffffffffe);
      }
      puVar2 = puVar2 + -4;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar1 = *(int *)(param_1 + 0x30) + -1;
    if (-1 < iVar1) {
      lVar3 = (longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28);
      do {
        FUN_143716650(lVar3);
        lVar3 = lVar3 + -0x10;
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_1437347e0(param_1 + 0x38);
  }
  return;
}



// FUNCTION 1436f8e50 FUN_1436f8e50 body=88 status=ok
// SIG undefined FUN_1436f8e50(void)

undefined8 * FUN_1436f8e50(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (lVar2 != 0) {
    uVar3 = FUN_1436f79d0(lVar2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1436f8eb0 FUN_1436f8eb0 body=155 status=ok
// SIG undefined FUN_1436f8eb0(void)

undefined4 * FUN_1436f8eb0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 local_48 [64];
  
  if (((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x38) == 0)) &&
     (*(int *)(param_1 + 200) < 2)) {
    *(undefined1 *)(param_1 + 0x23d) = 1;
    *param_2 = 0;
    return param_2;
  }
  if (1 < DAT_146b7bca8) {
    FUN_14373a730(local_48,&DAT_146b7bca0,2);
    lVar1 = FUN_14373bbd0(local_48,"You must enable multibundle before writing any data",
                          &DAT_145b909f0,0);
    *(char **)(lVar1 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileWriteFormat.cpp";
    *(undefined8 *)(lVar1 + 0x28) = 0x533;
    FUN_14373a950(local_48);
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1436f8f50 FUN_1436f8f50 body=27 status=ok
// SIG undefined FUN_1436f8f50(void)

undefined8 FUN_1436f8f50(longlong param_1,undefined8 param_2)

{
  FUN_1436f8eb0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 1436f8f70 FUN_1436f8f70 body=1889 status=ok
// SIG undefined FUN_1436f8f70(void)

void FUN_1436f8f70(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong local_res8;
  longlong local_138;
  int local_130;
  uint local_12c;
  longlong local_128;
  uint local_120;
  uint local_11c;
  undefined1 *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined1 local_108 [64];
  undefined8 local_c8;
  undefined1 *local_b8;
  int local_b0;
  uint local_ac;
  undefined1 local_a8 [128];
  
  local_118 = local_108;
  local_10c = 0x80000010;
  uVar14 = 0;
  local_c8 = *(undefined8 *)(param_1 + 0x1a8);
  local_110 = 0;
  FUN_14374df30(&local_118,0,0x54414730);
  local_b8 = local_a8;
  local_ac = 0x80000080;
  local_b0 = 1;
  local_a8[0] = 0;
  hkStringBuf::printf((char *)&local_b8,&DAT_145b756e4,0x133ec84);
  FUN_14374dfc0(&local_118,0x53444b56,local_b8,local_b0 + -1);
  local_b0 = 0;
  if (-1 < (int)local_ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 0x80000000;
  if (0 < *(int *)(param_1 + 0x138)) {
    FUN_14370c310(&PTR_vftable_1467f0638,&local_138,*(int *)(param_1 + 0x138),4);
  }
  iVar11 = 1;
  *(undefined4 *)(local_138 + (longlong)local_130 * 4) = 0;
  local_130 = local_130 + 1;
  if (1 < *(int *)(param_1 + 0x138)) {
    lVar12 = 0xc;
    do {
      if (((*(uint *)(lVar12 + *(longlong *)(param_1 + 0x130)) & 0xf0000000) == 0) &&
         (*(int *)(lVar12 + 8 + *(longlong *)(param_1 + 0x130)) == 0)) {
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -1;
        lVar10 = *(longlong *)(param_1 + 0x130) + lVar12;
        lVar13 = (longlong)(*(int *)(param_1 + 0x138) - iVar11) * 0xc;
        uVar5 = uVar14;
        uVar8 = uVar14;
        if (0 < lVar13) {
          do {
            uVar7 = (int)uVar8 + 4;
            *(undefined4 *)(uVar5 + lVar10) = *(undefined4 *)(uVar5 + 0xc + lVar10);
            uVar5 = uVar5 + 4;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < lVar13);
        }
        iVar11 = iVar11 + -1;
        lVar12 = lVar12 + -0xc;
        *(undefined4 *)(local_138 + (longlong)local_130 * 4) = 0;
      }
      else {
        *(int *)(local_138 + (longlong)local_130 * 4) = iVar11;
      }
      iVar11 = iVar11 + 1;
      local_130 = local_130 + 1;
      lVar12 = lVar12 + 0xc;
    } while (iVar11 < *(int *)(param_1 + 0x138));
  }
  uVar5 = uVar14;
  uVar8 = uVar14;
  if (0 < *(int *)(param_1 + 0x158)) {
    do {
      iVar11 = *(int *)(local_138 +
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 4 + uVar8) * 4);
      if (iVar11 != 0) {
        *(int *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x150) + uVar8) +
                *(longlong *)(param_1 + 8)) = iVar11;
      }
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      uVar8 = uVar8 + 8;
    } while ((int)uVar7 < *(int *)(param_1 + 0x158));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_14374df30(&local_118,1,0x44415441);
    puVar4 = *(ulonglong **)(param_1 + 0x1a8);
    uVar5 = *puVar4 + (longlong)*(int *)(param_1 + 0x10);
    if (puVar4[1] < uVar5) {
      hkIo::WriteBuffer::implWriteRaw(puVar4,*(undefined8 *)(param_1 + 8));
    }
    else {
      FGenericPlatformString::Memcpy();
      *puVar4 = uVar5;
    }
    FUN_1436fa1b0(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1f0),param_1 + 0x1f0,
                  &DAT_145b75498);
    FUN_14374ded0(&local_118);
  }
  if (*(int *)(param_1 + 0x1e0) == 0) {
    FUN_1436fba30(param_1,&local_118,*(undefined8 *)(param_1 + 0x1a8));
  }
  else {
    FUN_14374df30(&local_118,1,0x54435246);
    if (((*(int *)(param_1 + 0xd8) == *(int *)(param_1 + 0x38)) &&
        (*(int *)(param_1 + 0xdc) == *(int *)(param_1 + 0x50))) &&
       (*(int *)(param_1 + 0xe0) == *(int *)(param_1 + 200))) {
      uVar5 = *(ulonglong *)(param_1 + 0xe8);
    }
    else {
      uVar5 = FUN_1436f8bf0();
    }
    local_res8 = uVar5;
    if ((*(int *)(param_1 + 0x1e0) != 2) &&
       ((*(int *)(param_1 + 0x1d8) == 0 ||
        (*(ulonglong *)
          (*(longlong *)(param_1 + 0x1d0) + (longlong)(*(int *)(param_1 + 0x1d8) + -1) * 8) != uVar5
        )))) {
      uVar6 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x1d8) == (*(uint *)(param_1 + 0x1dc) & 0x3fffffff)) {
        FUN_14370c460(uVar6,(longlong *)(param_1 + 0x1d0),8);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x1d0) + (longlong)*(int *)(param_1 + 0x1d8) * 8) =
           uVar5;
      *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
    }
    FUN_1436f75d0(*(undefined8 *)(param_1 + 0x1a8),&local_res8);
    if (*(char *)(param_1 + 0x23c) != '\0') {
      FUN_143747f80(*(undefined8 *)(param_1 + 0x1a8),(longlong)(*(int *)(param_1 + 0x1e8) * 2));
    }
    FUN_14374ded0(&local_118);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_14374df30(&local_118,0,0x494e4458);
    FUN_14374df30(&local_118,1,0x4954454d);
    uVar5 = uVar14;
    uVar8 = uVar14;
    if (0 < *(int *)(param_1 + 0x138)) {
      do {
        puVar9 = (uint *)(*(longlong *)(param_1 + 0x130) + uVar8);
        FUN_1436f7570(*(undefined8 *)(param_1 + 0x1a8),puVar9);
        FUN_1436f7570(*(undefined8 *)(param_1 + 0x1a8),puVar9 + 1);
        if (((*puVar9 & 0xf0000000) == 0) || ((*puVar9 & 0xf0000000) == 0x30000000)) {
          local_res8 = CONCAT44(local_res8._4_4_,
                                *(undefined4 *)(local_138 + (longlong)(int)puVar9[2] * 4));
          puVar9 = (uint *)register0x00000020;
        }
        FUN_1436f7570(*(undefined8 *)(param_1 + 0x1a8),puVar9 + 2);
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
        uVar8 = uVar8 + 0xc;
      } while ((int)uVar7 < *(int *)(param_1 + 0x138));
    }
    FUN_14374ded0(&local_118);
    if ((*(char *)(param_1 + 0x23c) != '\0') && (*(int *)(param_1 + 0x148) != 0)) {
      FUN_14374df30(&local_118,1,0x50544348);
      if (1 < *(int *)(param_1 + 0x148)) {
        FUN_1436f72e0(*(undefined8 *)(param_1 + 0x140),0,*(int *)(param_1 + 0x148) + -1,
                      local_res8 & 0xff);
      }
      plVar1 = (longlong *)(param_1 + 0x140);
      uVar6 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x148) == (*(uint *)(param_1 + 0x14c) & 0x3fffffff)) {
        FUN_14370c460(uVar6,plVar1,8);
      }
      iVar11 = -1;
      local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
      puVar2 = (undefined4 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x148) * 8);
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
      *puVar2 = 0xffffffff;
      puVar2[1] = 0;
      local_128 = 0;
      local_120 = 0;
      local_11c = 0x80000000;
      uVar5 = uVar14;
      uVar8 = uVar14;
      uVar16 = uVar14;
      if (0 < *(int *)(param_1 + 0x148)) {
        do {
          uVar7 = (uint)uVar5;
          lVar12 = *plVar1;
          if (*(int *)(lVar12 + uVar8) != iVar11) {
            if (uVar7 != 0) {
              FUN_1436f7570(*(undefined8 *)(param_1 + 0x1a8),&local_res8);
              local_res8 = CONCAT44(local_res8._4_4_,local_120);
              FUN_1436f7570(*(undefined8 *)(param_1 + 0x1a8),&local_res8);
              uVar5 = uVar14;
              if (0 < (int)local_120) {
                do {
                  FUN_1436f7570(*(undefined8 *)(param_1 + 0x1a8),
                                local_128 + (longlong)(int)uVar5 * 4);
                  uVar7 = (int)uVar5 + 1;
                  uVar5 = (ulonglong)uVar7;
                } while ((int)uVar7 < (int)local_120);
              }
              local_120 = 0;
              uVar7 = 0;
            }
            iVar11 = *(int *)(lVar12 + uVar8);
            local_res8 = CONCAT44(local_res8._4_4_,iVar11);
          }
          uVar3 = *(undefined4 *)(lVar12 + 4 + uVar8);
          if (uVar7 == (local_11c & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,&local_128,4);
            uVar7 = local_120;
          }
          uVar15 = (int)uVar16 + 1;
          *(undefined4 *)(local_128 + (longlong)(int)uVar7 * 4) = uVar3;
          local_120 = local_120 + 1;
          uVar5 = (ulonglong)local_120;
          uVar8 = uVar8 + 8;
          uVar16 = (ulonglong)uVar15;
        } while ((int)uVar15 < *(int *)(param_1 + 0x148));
      }
      FUN_14374ded0(&local_118);
      local_120 = 0;
      if (-1 < (int)local_11c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_128,4,local_11c & 0x3fffffff);
      }
    }
    FUN_14374ded0(&local_118);
  }
  FUN_14374ded0(&local_118);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  uVar6 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar6,*(undefined8 *)(param_1 + 8),1,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  FUN_1436f8ce0(param_1 + 0x130);
  local_130 = 0;
  if (-1 < (int)local_12c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_138,4,local_12c & 0x3fffffff);
  }
  local_138 = 0;
  local_12c = 0x80000000;
  uVar6 = FUN_143703a50();
  local_110 = 0;
  if (-1 < (int)local_10c) {
    FUN_143702e10(uVar6,local_118,4,local_10c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1436f96e0 FUN_1436f96e0 body=9 status=ok
// SIG undefined FUN_1436f96e0(void)

void FUN_1436f96e0(longlong param_1)

{
  FUN_1436f8f70(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1436f96f0 FUN_1436f96f0 body=440 status=ok
// SIG undefined FUN_1436f96f0(void)

void FUN_1436f96f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined1 local_d8 [64];
  undefined1 *local_98;
  undefined1 local_88 [48];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [64];
  
  if (*(int *)(param_1 + 0x1e0) == 1) {
    *(undefined4 *)(param_1 + 0x1e0) = 2;
    Audio::FDelayStereo::FDelayStereo(local_88);
    local_58 = 0;
    uStack_50 = 0;
    FUN_143747cb0(local_88,param_1 + 0x1b0);
    local_e8 = local_d8;
    local_e0 = 0;
    local_98 = local_88;
    local_dc = 0x80000010;
    FUN_14374df30(&local_e8,0,0x54434d30);
    FUN_14374df30(&local_e8,1,0x54434944);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x1d8)) {
      do {
        FUN_1436f75d0(local_88,*(longlong *)(param_1 + 0x1d0) + (longlong)iVar3 * 8);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x1d8));
    }
    FUN_14374ded0(&local_e8);
    FUN_1436fba30(param_1,&local_e8,local_88);
    FUN_14374ded0(&local_e8);
    uVar2 = FUN_143703a50();
    local_e0 = 0;
    if (-1 < (int)local_dc) {
      FUN_143702e10(uVar2,local_e8,4,local_dc & 0x3fffffff);
    }
    local_e8 = (undefined1 *)0x0;
    local_dc = 0x80000000;
    UParticleModuleSubUV::PostLoad(local_88);
  }
  else if (DAT_146b7bca8 != '\0') {
    FUN_14373a730(local_48,&DAT_146b7bca0,1);
    lVar1 = FUN_14373bbd0(local_48,"Type Compendium not begun",&DAT_145b909f0,0);
    *(char **)(lVar1 + 0x20) = "Serialize\\Format\\Tagfile\\hkTagfileWriteFormat.cpp";
    *(undefined8 *)(lVar1 + 0x28) = 0x516;
    FUN_14373a950(local_48);
    return;
  }
  return;
}



// FUNCTION 1436f98b0 FUN_1436f98b0 body=9 status=ok
// SIG undefined FUN_1436f98b0(void)

void FUN_1436f98b0(longlong param_1)

{
  FUN_1436f96f0(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1436f98c0 FUN_1436f98c0 body=362 status=ok
// SIG undefined FUN_1436f98c0(void)

/* WARNING: Removing unreachable block (ram,0x0001436f998d) */

undefined4 *
FUN_1436f98c0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4,
             int param_5,int param_6,uint param_7)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)*param_3;
  if (0 < (int)param_7) {
    uVar7 = (ulonglong)param_7;
    do {
      iVar4 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_4);
      if ((*(char *)(param_1 + 4) != '\0') && (iVar4 != 0)) {
        uVar6 = param_3[1];
        lVar2 = *(longlong *)param_1[3];
        uVar5 = FUN_1436fa0b0(param_4[1]);
        uVar6 = FUN_1436fa0b0(uVar6);
        (**(code **)(lVar2 + 8))(param_1[3],puVar8,uVar6,uVar5);
      }
      *puVar8 = 0;
      (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],puVar8,iVar4);
      uVar3 = param_4[2];
      *param_4 = (longlong)param_6 + *param_4;
      param_4[1] = param_4[1];
      if ((*(byte *)(param_4 + 2) & 1) != 0) {
        FUN_143733a60(param_4[2] & 0xfffffffffffffffe);
      }
      puVar8 = (undefined4 *)((longlong)puVar8 + (longlong)param_5);
      param_4[2] = uVar3 & 0xfffffffffffffffe;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_3 + 2);
  *param_2 = 0;
  if ((bVar1 & 1) != 0) {
    FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_4 + 2) & 1) != 0) {
    FUN_143733a60(param_4[2] & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1436f9a30 FUN_1436f9a30 body=767 status=ok
// SIG undefined FUN_1436f9a30(void)

void FUN_1436f9a30(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  ulonglong local_res8;
  undefined4 *local_res10;
  undefined8 *local_res18;
  ulonglong local_res20;
  undefined8 local_58;
  int local_50 [4];
  
  iVar6 = 0;
  local_res20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  (**(code **)(*(longlong *)(param_4[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_4[2] & 0xfffffffffffffffe),&local_res8,*param_4,param_4[1],
             &local_res20);
  if (local_res20 != 0) {
    puVar7 = (undefined8 *)FUN_143714420(param_4[1],1);
    if (puVar7 == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)*puVar7;
    }
    if ((uVar5 >> 7 & 1) == 0) {
      iVar6 = (**(code **)(*(longlong *)*param_1 + 0x18))();
      uVar1 = param_4[2];
      local_res8 = param_4[1];
      uVar2 = *param_4;
      if ((uVar1 & 1) != 0) {
        FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
      }
      uVar8 = FUN_143703a50();
      if (*(uint *)(param_1 + 2) == (*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff)) {
        FUN_14370c460(uVar8,param_1 + 1,0x20);
      }
      puVar10 = (ulonglong *)((longlong)*(int *)(param_1 + 2) * 0x20 + param_1[1]);
      if (puVar10 != (ulonglong *)0x0) {
        puVar10[1] = local_res8;
        *puVar10 = uVar2;
        puVar10[2] = uVar1;
        if ((uVar1 & 1) != 0) {
          FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
        }
        *(int *)(puVar10 + 3) = iVar6;
      }
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
      param_3 = local_res18;
      if ((uVar1 & 1) != 0) {
        FUN_143733a60(uVar1 & 0xfffffffffffffffe);
        param_3 = local_res18;
      }
    }
    else {
      local_58 = 0;
      local_res8 = local_res8 & 0xffffffff00000000;
      (**(code **)(*(longlong *)(param_4[2] & 0xfffffffffffffffe) + 0x38))
                ((longlong *)(param_4[2] & 0xfffffffffffffffe),&local_res20,*param_4,param_4[1],
                 &local_58);
      FUN_1436f6dc0(param_1 + 5,local_50,&local_58,&local_res8);
      iVar6 = *(int *)(param_1[5] + 8 + (longlong)local_50[0] * 0x10);
      if (iVar6 == 0) {
        iVar6 = (**(code **)(*(longlong *)*param_1 + 0x18))();
        uVar1 = param_4[2];
        local_res8 = *param_4;
        local_res20 = param_4[1];
        if ((uVar1 & 1) != 0) {
          FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
        }
        uVar8 = FUN_143703a50();
        if (*(uint *)(param_1 + 2) == (*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff)) {
          FUN_14370c460(uVar8,param_1 + 1,0x20);
        }
        puVar10 = (ulonglong *)((longlong)*(int *)(param_1 + 2) * 0x20 + param_1[1]);
        if (puVar10 != (ulonglong *)0x0) {
          *puVar10 = local_res8;
          puVar10[1] = local_res20;
          puVar10[2] = uVar1;
          if ((uVar1 & 1) != 0) {
            FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
          }
          *(int *)(puVar10 + 3) = iVar6;
        }
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
        if ((uVar1 & 1) != 0) {
          FUN_143733a60(uVar1 & 0xfffffffffffffffe);
        }
        *(int *)(param_1[5] + 8 + (longlong)local_50[0] * 0x10) = iVar6;
        param_3 = local_res18;
      }
    }
    if (*(char *)(param_1 + 4) != '\0') {
      uVar8 = param_3[1];
      uVar3 = *param_3;
      lVar4 = *(longlong *)param_1[3];
      uVar9 = FUN_1436fa0b0(param_4[1]);
      uVar8 = FUN_1436fa0b0(uVar8);
      (**(code **)(lVar4 + 0x10))(param_1[3],uVar3,uVar8,uVar9);
    }
  }
  *(int *)*local_res18 = iVar6;
  (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],*local_res18,iVar6);
  *local_res10 = 0;
  return;
}



// FUNCTION 1436f9d30 FUN_1436f9d30 body=426 status=ok
// SIG undefined FUN_1436f9d30(void)

ulonglong FUN_1436f9d30(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  
  uVar9 = *param_3;
  iVar2 = *(int *)(param_3 + 1);
  local_res10 = param_2;
  puVar5 = (ulonglong *)FUN_143714490(uVar9,0x4000000);
  uVar10 = 0;
  uVar11 = uVar10;
  if (puVar5 != (ulonglong *)0x0) {
    uVar11 = *puVar5;
  }
  uVar12 = uVar10;
  if (0 < *(short *)(uVar11 + 4)) {
    do {
      uVar6 = FUN_1437151c0(&local_res10);
      local_res20 = *(undefined8 *)(uVar10 + 8 + uVar11);
      uVar7 = FUN_1437151c0(&local_res20);
      iVar4 = hkString::strCmp(uVar7,uVar6);
      iStack_44 = (int)uVar12;
      if (iVar4 == 0) {
        FUN_1437140c0(&local_res18,local_res20);
        if (CONCAT44(uStackX_1c,local_res18) < 2) {
          return uVar12;
        }
        local_res18 = 0xffffffff;
        local_48 = iVar2;
        FUN_1436f6f30(param_1 + 0xf0,&local_40,&local_48,&local_res18);
        lVar8 = (longlong)(int)local_40;
        lVar3 = *(longlong *)(param_1 + 0xf0);
        if (-1 < *(int *)(lVar3 + 8 + lVar8 * 0xc)) {
          return uVar12;
        }
        local_res18 = *(undefined4 *)(param_1 + 0x78);
        local_40 = uVar6;
        FUN_1436f6c70(param_1 + 0x70,&local_48,&local_40,&local_res18);
        *(undefined4 *)(lVar3 + lVar8 * 0xc + 8) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 8 + (longlong)local_48 * 0x10);
        if (*(char *)(param_1 + 0x23c) == '\0') {
          return uVar12;
        }
        iStack_44 = FUN_14374b650(param_1 + 0x270,uVar9,&local_res18);
        if ((char)local_res18 == '\0') {
          return uVar12;
        }
        local_48 = iVar2;
        uVar9 = FUN_143703a50();
        if (*(uint *)(param_1 + 0x120) == (*(uint *)(param_1 + 0x124) & 0x3fffffff)) {
          FUN_14370c460(uVar9,(longlong *)(param_1 + 0x118),8);
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x118) + (longlong)*(int *)(param_1 + 0x120) * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = CONCAT44(iStack_44,local_48);
        }
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
        return uVar12;
      }
      uVar10 = uVar10 + 8;
      uVar12 = (ulonglong)(iStack_44 + 1U);
    } while ((int)(iStack_44 + 1U) < (int)*(short *)(uVar11 + 4));
  }
  return 0xffffffff;
}



// FUNCTION 1436f9ee0 FUN_1436f9ee0 body=72 status=ok
// SIG undefined FUN_1436f9ee0(void)

/* WARNING: Removing unreachable block (ram,0x0001436f9f1b) */

undefined8 FUN_1436f9ee0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = (undefined8 *)FUN_143714490(uVar1,1);
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  uVar3 = 0;
  if (((byte)*puVar2 & 0xf) == 7) {
    uVar3 = uVar1;
  }
  return uVar3;
}



// FUNCTION 1436f9f30 FUN_1436f9f30 body=11 status=ok
// SIG undefined FUN_1436f9f30(void)

void FUN_1436f9f30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f9f37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
  return;
}



// FUNCTION 1436f9f40 FUN_1436f9f40 body=126 status=ok
// SIG undefined FUN_1436f9f40(void)

undefined8 FUN_1436f9f40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  iVar2 = (int)(((longlong)*(int *)(param_1 + 1) << 4) >> 4);
  lVar3 = (longlong)iVar2;
  if (iVar2 < 1) {
    return param_2;
  }
  do {
    uVar1 = *puVar4;
    iVar2 = FUN_14370c910(uVar1);
    param_2 = FUN_14374be90(param_2,uVar1,(longlong)iVar2);
    puVar4 = puVar4 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_2;
}



// FUNCTION 1436f9fc0 FUN_1436f9fc0 body=237 status=ok
// SIG undefined FUN_1436f9fc0(void)

ulonglong FUN_1436f9fc0(longlong *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar1 = *param_2;
  uVar7 = iVar1 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar7);
  puVar4 = (uint *)(param_1[2] + uVar6 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar6 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar4[1] * 4) == iVar1) {
        return (ulonglong)puVar4 & 0xffffffffffffff00;
      }
      lVar3 = param_1[2];
      uVar6 = ((longlong)puVar4 - lVar3 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar4 = (uint *)(lVar3 + uVar6 * 8);
    } while (-1 < *(int *)(lVar3 + 4 + uVar6 * 8));
  }
  uVar2 = *(uint *)(param_1 + 1);
  *puVar4 = uVar7;
  puVar4[1] = uVar2;
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1,4);
  }
  iVar1 = *param_2;
  *(int *)(*param_1 + (longlong)(int)param_1[1] * 4) = iVar1;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}



// FUNCTION 1436fa0b0 FUN_1436fa0b0 body=66 status=ok
// SIG undefined FUN_1436fa0b0(void)

longlong FUN_1436fa0b0(longlong param_1)

{
  ulonglong local_res8 [4];
  
  FUN_1437140a0(local_res8,param_1);
  while (1 < local_res8[0]) {
    param_1 = *(longlong *)(param_1 + 8);
    FUN_1437140a0(local_res8,param_1);
  }
  return param_1;
}



// FUNCTION 1436fa100 FUN_1436fa100 body=164 status=ok
// SIG undefined FUN_1436fa100(void)

void FUN_1436fa100(longlong *param_1,int param_2,int *param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  
  iVar2 = FUN_1436fa250((longlong)(int)param_1[1]);
  lVar7 = (longlong)iVar2;
  if (iVar2 != 0) {
    uVar3 = FUN_143703a50();
    iVar6 = (int)param_1[1] + iVar2;
    uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    if ((int)uVar4 < iVar6) {
      iVar1 = uVar4 * 2;
      if (iVar6 < iVar1) {
        iVar6 = iVar1;
      }
      FUN_14370c310(uVar3,param_1,iVar6,1);
    }
    puVar5 = (undefined1 *)((longlong)(int)param_1[1] + *param_1);
    if (0 < iVar2) {
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar5 = param_4;
        puVar5 = puVar5 + 1;
      }
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar2;
  }
  if (param_2 < *param_3) {
    param_2 = *param_3;
  }
  *param_3 = param_2;
  return;
}



// FUNCTION 1436fa1b0 FUN_1436fa1b0 body=159 status=ok
// SIG undefined FUN_1436fa1b0(void)

void FUN_1436fa1b0(ulonglong *param_1,int param_2,int *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  for (iVar2 = FUN_1436fa250((param_1[4] - param_1[2]) + *param_1); iVar2 != 0;
      iVar2 = iVar2 - iVar3) {
    uVar1 = *param_1;
    iVar3 = 0x20;
    if (iVar2 < 0x20) {
      iVar3 = iVar2;
    }
    if (param_1[1] < uVar1 + (longlong)iVar3) {
      hkIo::WriteBuffer::implWriteRaw(param_1,param_4);
    }
    else {
      FGenericPlatformString::Memcpy();
      *param_1 = uVar1 + (longlong)iVar3;
    }
  }
  if (param_2 < *param_3) {
    param_2 = *param_3;
  }
  *param_3 = param_2;
  return;
}



// FUNCTION 1436fa250 FUN_1436fa250 body=25 status=ok
// SIG undefined FUN_1436fa250(void)

int FUN_1436fa250(ulonglong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_1 % (ulonglong)(longlong)param_2);
  if (iVar1 != 0) {
    return param_2 - iVar1;
  }
  return 0;
}



// FUNCTION 1436fa270 FUN_1436fa270 body=161 status=ok
// SIG undefined FUN_1436fa270(void)

void FUN_1436fa270(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_143733a60(param_1[2] & 0xfffffffffffffffe);
  }
  param_1[2] = param_2[2];
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    FUN_143733a60(param_1[5] & 0xfffffffffffffffe);
  }
  param_1[5] = param_3[2];
  return;
}



// FUNCTION 1436fa320 FUN_1436fa320 body=129 status=ok
// SIG undefined FUN_1436fa320(void)

void FUN_1436fa320(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x23c) != '\0') &&
     ((lVar2 = FUN_1436f87f0(param_1 + 0x290,param_2 + 1), lVar2 == 0 || (*(int *)(lVar2 + 4) < 0)))
     ) {
    FUN_1436f9fc0(param_1 + 0x290,param_2 + 1);
    uVar1 = FUN_14374b760(param_1 + 0x248,*param_2);
    FUN_1436f88c0(param_1 + 0x18,*(undefined4 *)(param_2 + 1),uVar1);
  }
  return;
}



// FUNCTION 1436fa3b0 FUN_1436fa3b0 body=120 status=ok
// SIG undefined FUN_1436fa3b0(void)

undefined8 FUN_1436fa3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)*param_4)(param_4,param_3);
  (**(code **)(*param_4 + 0x10))(param_4,uVar1);
  FUN_1436fae70(param_1,param_2,param_3,uVar1,1,param_4);
  return param_2;
}



// FUNCTION 1436fa430 FUN_1436fa430 body=27 status=ok
// SIG undefined FUN_1436fa430(void)

undefined8 FUN_1436fa430(longlong param_1,undefined8 param_2)

{
  FUN_1436fa3b0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 1436fa450 FUN_1436fa450 body=2409 status=ok
// SIG undefined FUN_1436fa450(void)

void FUN_1436fa450(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  short *psVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong local_res10;
  uint local_res18;
  ulonglong local_res20;
  longlong *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong local_128;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  ulonglong *local_108;
  undefined1 *local_100;
  ulonglong local_f8 [2];
  undefined1 local_e8 [48];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [8];
  int local_a0 [2];
  int local_98 [2];
  int local_90 [2];
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  int local_70 [2];
  ulonglong local_68;
  ulonglong local_60;
  int local_58 [6];
  
  lVar1 = param_1 + 0x18;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x40)) {
    local_148 = (longlong *)0x0;
    plVar8 = (longlong *)AActor::GetLevel(*(longlong *)(param_1 + 0x50) + 0x30);
    if (plVar8 != (longlong *)0x0) {
      FUN_14370c030(plVar8);
    }
    if (local_148 != (longlong *)0x0) {
      FUN_14370c150();
    }
    local_130 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_148 = plVar8;
    Audio::FDelayStereo::FDelayStereo(local_e8);
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_143747cb0(local_e8,&local_148);
    if (local_148 != (longlong *)0x0) {
      FUN_14370c150();
    }
    puVar9 = (ulonglong *)FUN_143732190(lVar1);
    local_108 = puVar9;
    if (puVar9 != (ulonglong *)0x0) {
      local_120 = 2;
      local_11c = 4;
      local_118 = 8;
      local_114 = 0x10;
      local_110 = 0x20;
      local_res18 = 0x40;
      local_10c = 1;
      do {
        uVar18 = local_10c;
        local_108 = puVar9;
        iVar5 = FUN_143732050(lVar1,puVar9);
        local_res20 = CONCAT44(local_res20._4_4_,iVar5);
        uVar6 = FUN_143731fd0(lVar1,puVar9[1]);
        if (*(int *)(param_1 + 0x58) < iVar5) {
          *(int *)(param_1 + 0x58) = iVar5;
        }
        local_res10._0_4_ = uVar6;
        FUN_1436f7450(local_e8,&local_res20);
        FUN_1436f7450(local_e8,&local_res10);
        uVar23 = *puVar9;
        uVar17 = (uint)uVar23;
        uVar15 = 0;
        if ((uVar23 & 1) != 0) {
          uVar15 = uVar18;
        }
        if ((uVar23 & 2) != 0) {
          uVar15 = uVar15 | local_120;
        }
        local_f8[0] = (ulonglong)(uVar17 & 0x10);
        if ((uVar23 & 0x10) != 0) {
          uVar15 = uVar15 | local_11c;
        }
        local_88 = (ulonglong)(uVar17 & 0x800000);
        if ((uVar23 & 0x800000) != 0) {
          uVar15 = uVar15 | local_118;
        }
        local_80 = (ulonglong)(uVar17 & 0x1000000);
        if ((uVar23 & 0x1000000) != 0) {
          uVar15 = uVar15 | local_114;
        }
        local_78 = (ulonglong)(uVar17 & 0x4000000);
        if ((uVar23 & 0x4000000) != 0) {
          uVar15 = uVar15 | local_110;
        }
        local_68 = (ulonglong)(uVar17 & 0x20000);
        if ((uVar23 & 0x20000) != 0) {
          uVar15 = uVar15 | local_res18;
        }
        local_60 = (ulonglong)(uVar17 & 0x10000000);
        if ((uVar23 & 0x10000000) != 0) {
          uVar15 = uVar15 | local_res18 << 1 | (uint)((int)local_res18 < 0);
        }
        local_res10 = CONCAT44(local_res10._4_4_,uVar15);
        FUN_1436f74b0(local_e8,&local_res10);
        if ((uVar23 & 1) != 0) {
          if (((*puVar9 & 1) == 0) ||
             (puVar10 = (ulonglong *)FUN_1437143d0(puVar9,1), puVar10 == (ulonglong *)0x0)) {
            local_res10 = 0;
          }
          else {
            local_res10 = *puVar10;
          }
          FUN_1436f7510(local_e8,&local_res10);
        }
        if ((uVar23 & 2) != 0) {
          puVar11 = (undefined8 *)FUN_143714490(puVar9,1);
          bVar14 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            bVar14 = (byte)*puVar11;
          }
          puVar10 = (ulonglong *)0x0;
          if ((bVar14 & 0xf) == 8) {
            puVar10 = puVar9;
          }
          if (puVar10 == (ulonglong *)0x0) {
            puVar11 = (undefined8 *)FUN_143714490(puVar9,1);
            bVar14 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              bVar14 = (byte)*puVar11;
            }
            puVar10 = (ulonglong *)0x0;
            if ((bVar14 & 0xf) == 6) {
              puVar10 = puVar9;
            }
            if (puVar10 != (ulonglong *)0x0) goto LAB_1436fa730;
            puVar11 = (undefined8 *)FUN_143714490(puVar9,1);
            if (puVar11 == (undefined8 *)0x0) {
              bVar14 = 0;
            }
            else {
              bVar14 = (byte)*puVar11;
            }
            puVar10 = (ulonglong *)0x0;
            if ((bVar14 & 0xf) == 7) {
              puVar10 = puVar9;
            }
            if (puVar10 != (ulonglong *)0x0) {
              puVar11 = (undefined8 *)FUN_143714490(puVar9,2);
              if (puVar11 == (undefined8 *)0x0) goto LAB_1436fa788;
              uVar12 = *puVar11;
              goto LAB_1436fa78a;
            }
          }
          else {
            puVar11 = (undefined8 *)FUN_143714420(puVar10);
            iVar7 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              iVar7 = (int)((ulonglong)*puVar11 >> 8);
            }
            if (iVar7 == 0) {
LAB_1436fa730:
              puVar11 = (undefined8 *)FUN_143714420(puVar10,2);
              if (puVar11 == (undefined8 *)0x0) {
                uVar6 = FUN_143732050(lVar1,0);
              }
              else {
                uVar6 = FUN_143732050(lVar1,*puVar11);
              }
            }
            else {
              puVar11 = (undefined8 *)FUN_143714420(puVar10);
              if (puVar11 == (undefined8 *)0x0) {
LAB_1436fa788:
                uVar12 = 0;
              }
              else {
                uVar12 = *puVar11;
              }
LAB_1436fa78a:
              uVar6 = FUN_143731fd0(lVar1,uVar12);
            }
            local_res10 = CONCAT44(local_res10._4_4_,uVar6);
            FUN_1436f7450(local_e8,&local_res10);
          }
        }
        if ((uVar23 & 8) == 0) {
          lVar16 = *(longlong *)(param_1 + 0x50);
          FUN_1436f71c0(iVar5);
          iVar7 = FUN_14370c910(&DAT_145af3922);
          if (iVar7 < 1) goto LAB_1436fa874;
          local_res10 = CONCAT44(local_res10._4_4_,*(undefined4 *)(lVar16 + 0x50));
          local_100 = &DAT_145af3922;
          FUN_1436f6c70(lVar16 + 0x48,local_98,&local_100,&local_res10);
          uVar6 = *(undefined4 *)(*(longlong *)(lVar16 + 0x48) + 8 + (longlong)local_98[0] * 0x10);
        }
        else {
          if (((*puVar9 & 8) == 0) ||
             (puVar11 = (undefined8 *)FUN_1437143d0(puVar9,8), puVar11 == (undefined8 *)0x0)) {
            puVar21 = (undefined1 *)0x0;
          }
          else {
            puVar21 = (undefined1 *)*puVar11;
          }
          lVar16 = *(longlong *)(param_1 + 0x50);
          FUN_1436f71c0(iVar5);
          iVar7 = FUN_14370c910(puVar21);
          if (iVar7 < 1) {
LAB_1436fa874:
            uVar6 = 0xffffffff;
          }
          else {
            local_res10 = CONCAT44(local_res10._4_4_,*(undefined4 *)(lVar16 + 0x50));
            local_100 = puVar21;
            FUN_1436f6c70(lVar16 + 0x48,local_a0,&local_100,&local_res10);
            uVar6 = *(undefined4 *)(*(longlong *)(lVar16 + 0x48) + 8 + (longlong)local_a0[0] * 0x10)
            ;
          }
        }
        *(undefined4 *)((longlong)iVar5 * 0x18 + *(longlong *)(lVar16 + 0xc0)) = uVar6;
        if (local_f8[0] != 0) {
          if (((*puVar9 & 0x10) == 0) ||
             (puVar10 = (ulonglong *)FUN_1437143d0(puVar9,0x10), puVar10 == (ulonglong *)0x0)) {
            local_res10 = 0;
          }
          else {
            local_res10 = *puVar10;
          }
          FUN_1436f7510(local_e8,&local_res10);
        }
        if ((uVar23 >> 0x12 & 1) != 0) {
          plVar8 = (longlong *)FUN_143715320(puVar9);
          local_148 = (longlong *)0x0;
          uVar18 = *(uint *)(plVar8 + 1) & 0xffff;
          uVar23 = (ulonglong)uVar18;
          local_140._0_4_ = 0;
          local_140._4_4_ = 0x80000000;
          uVar12 = FUN_143703a50();
          if ((local_140._4_4_ & 0x3fffffff) < uVar18) {
            uVar15 = (local_140._4_4_ & 0x3fffffff) * 2;
            uVar22 = uVar23;
            if (uVar18 < uVar15) {
              uVar22 = (ulonglong)uVar15;
            }
            FUN_14370c310(uVar12,&local_148,uVar22,0x10);
          }
          if (uVar18 != 0) {
            do {
              plVar20 = plVar8 + 2;
              uVar12 = FUN_143703a50();
              if ((uint)local_140 == (local_140._4_4_ & 0x3fffffff)) {
                FUN_14370c460(uVar12,&local_148,0x10);
              }
              plVar4 = local_148;
              lVar16 = *(longlong *)(param_1 + 0x50);
              local_140._0_4_ = 1;
              local_f8[0] = plVar8[3];
              local_res10 = CONCAT44(local_res10._4_4_,*(undefined4 *)(lVar16 + 0x50));
              FUN_1436f6c70(lVar16 + 0x48,local_90,local_f8,&local_res10);
              *plVar4 = (longlong)
                        *(int *)(*(longlong *)(lVar16 + 0x48) + 8 + (longlong)local_90[0] * 0x10);
              if (*(char *)plVar8[3] == 't') {
                iVar7 = FUN_143731fd0(lVar1,*plVar20);
                plVar4[1] = (longlong)iVar7;
              }
              else {
                plVar4[1] = *plVar20;
              }
              uVar23 = uVar23 - 1;
              puVar9 = local_108;
              plVar8 = plVar20;
            } while (uVar23 != 0);
          }
          lVar16 = *(longlong *)(param_1 + 0x50);
          FUN_1436f71c0(local_res20 & 0xffffffff,lVar16 + 0xc0);
          lVar16 = *(longlong *)(lVar16 + 0xc0) + (longlong)iVar5 * 0x18;
          plVar8 = *(longlong **)(lVar16 + 8);
          *(longlong **)(lVar16 + 8) = local_148;
          uVar6 = *(undefined4 *)(lVar16 + 0x10);
          *(uint *)(lVar16 + 0x10) = (uint)local_140;
          uVar18 = *(uint *)(lVar16 + 0x14);
          *(uint *)(lVar16 + 0x14) = local_140._4_4_;
          local_148 = plVar8;
          local_140._0_4_ = uVar6;
          local_140._4_4_ = uVar18;
          uVar12 = FUN_143703a50();
          uVar18 = local_140._4_4_;
          local_140 = (ulonglong)local_140._4_4_ << 0x20;
          if (-1 < (int)uVar18) {
            FUN_143702e10(uVar12,local_148,0x10,uVar18 & 0x3fffffff);
          }
          local_148 = (longlong *)0x0;
          local_140 = CONCAT44(0x80000000,(uint)local_140);
        }
        if (local_88 != 0) {
          if ((((uint)*puVar9 >> 0x17 & 1) == 0) ||
             (puVar10 = (ulonglong *)FUN_1437143d0(puVar9,0x800000), puVar10 == (ulonglong *)0x0)) {
            uVar23 = 0;
          }
          else {
            uVar23 = *puVar10;
          }
          local_res10 = uVar23 & 0xffff;
          FUN_1436f7510(local_e8,&local_res10);
          local_res10 = (uVar23 & 0xffffffff) >> 0x10;
          FUN_1436f7510(local_e8,&local_res10);
        }
        if (local_80 != 0) {
          if ((((uint)*puVar9 >> 0x18 & 1) == 0) ||
             (puVar10 = (ulonglong *)FUN_1437143d0(puVar9,0x1000000), puVar10 == (ulonglong *)0x0))
          {
            local_res10 = 0;
          }
          else {
            local_res10 = *puVar10;
          }
          FUN_1436f7510(local_e8,&local_res10);
        }
        if (local_78 != 0) {
          if ((((uint)*puVar9 >> 0x1a & 1) == 0) ||
             (puVar11 = (undefined8 *)FUN_1437143d0(puVar9,0x4000000), puVar11 == (undefined8 *)0x0)
             ) {
            psVar19 = (short *)0x0;
          }
          else {
            psVar19 = (short *)*puVar11;
          }
          sVar2 = *psVar19;
          uVar23 = (ulonglong)(uint)(int)sVar2;
          local_res10 = CONCAT44(local_res10._4_4_,(int)psVar19[1] << 0x10 | (int)sVar2);
          FUN_1436f7450(local_e8,&local_res10);
          if (0 < sVar2) {
            lVar16 = 0;
            do {
              FUN_143714060(&local_128,*(undefined8 *)((longlong)psVar19 + lVar16 + 8));
              local_res20 = FUN_1437151c0(&local_128);
              lVar3 = *(longlong *)(param_1 + 0x50);
              local_res10._0_4_ = *(undefined4 *)(lVar3 + 0x78);
              FUN_1436f6c70(lVar3 + 0x70,local_70,&local_res20,&local_res10);
              local_res10._0_4_ =
                   *(undefined4 *)(*(longlong *)(lVar3 + 0x70) + 8 + (longlong)local_70[0] * 0x10);
              FUN_1436f7450(local_e8,&local_res10);
              puVar13 = (undefined4 *)FUN_143714f30(&local_128,local_a8);
              local_res10._0_4_ = *puVar13;
              FUN_1436f7450(local_e8,&local_res10);
              local_res10._0_4_ = FUN_143715270(&local_128);
              FUN_1436f7450(local_e8,&local_res10);
              uVar6 = FUN_143731fd0(lVar1,*(undefined8 *)(local_128 + 8));
              local_res10 = CONCAT44(local_res10._4_4_,uVar6);
              FUN_1436f7450(local_e8,&local_res10);
              lVar16 = lVar16 + 8;
              uVar23 = uVar23 - 1;
              puVar9 = local_108;
            } while (uVar23 != 0);
          }
        }
        if (local_68 != 0) {
          if ((((uint)*puVar9 >> 0x11 & 1) == 0) ||
             (puVar11 = (undefined8 *)FUN_1437143d0(puVar9,0x20000), puVar11 == (undefined8 *)0x0))
          {
            plVar8 = (longlong *)0x0;
          }
          else {
            plVar8 = (longlong *)*puVar11;
          }
          plVar20 = plVar8 + 1;
          uVar23 = (*plVar8 << 4) >> 4;
          iVar5 = (int)uVar23;
          local_res10 = CONCAT44(local_res10._4_4_,iVar5);
          FUN_1436f7450(local_e8,&local_res10);
          if (0 < iVar5) {
            uVar23 = uVar23 & 0xffffffff;
            do {
              plVar8 = plVar8 + 2;
              uVar6 = FUN_143731fd0(lVar1,*plVar20);
              local_res10 = CONCAT44(local_res10._4_4_,uVar6);
              FUN_1436f7450(local_e8,&local_res10);
              FUN_1436f7510(local_e8,plVar8);
              plVar20 = plVar20 + 2;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
        }
        if (local_60 != 0) {
          if ((((uint)*puVar9 >> 0x1c & 1) == 0) ||
             (puVar9 = (ulonglong *)FUN_1437143d0(puVar9,0x10000000), puVar9 == (ulonglong *)0x0)) {
            local_res20 = 0;
          }
          else {
            local_res20 = *puVar9;
          }
          lVar16 = *(longlong *)(param_1 + 0x50);
          local_res10._0_4_ = *(undefined4 *)(lVar16 + 0xa0);
          FUN_1436f6c70(lVar16 + 0x98,local_58,&local_res20,&local_res10);
          local_res10 = CONCAT44(local_res10._4_4_,
                                 *(undefined4 *)
                                  (*(longlong *)(lVar16 + 0x98) + 8 + (longlong)local_58[0] * 0x10))
          ;
          FUN_1436f7450(local_e8,&local_res10);
        }
        puVar9 = (ulonglong *)FUN_143732190(lVar1);
      } while (puVar9 != (ulonglong *)0x0);
      local_108 = (ulonglong *)0x0;
    }
    UParticleModuleSubUV::PostLoad(local_e8);
  }
  return;
}



// FUNCTION 1436fadc0 FUN_1436fadc0 body=167 status=ok
// SIG undefined FUN_1436fadc0(void)

void FUN_1436fadc0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  (**(code **)(**(longlong **)(param_1 + 0x230) + 0x18))
            (*(longlong **)(param_1 + 0x230),&local_28,param_4);
  uVar3 = uStack_20;
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x148) == (*(uint *)(param_1 + 0x14c) & 0x3fffffff)) {
    FUN_14370c460(uVar4,(longlong *)(param_1 + 0x140),8);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x140) + (longlong)*(int *)(param_1 + 0x148) * 8);
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
  *puVar1 = uVar3;
  puVar1[1] = param_2 - (int)uVar2;
  local_18 = local_28;
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  FUN_1436fa320(param_1,&local_18);
  return;
}



// FUNCTION 1436fae70 FUN_1436fae70 body=1849 status=ok
// SIG undefined FUN_1436fae70(void)

undefined4 *
FUN_1436fae70(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4,
             char param_5,undefined8 *param_6)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong local_res18 [2];
  longlong *local_e8;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  int local_48;
  ulonglong local_40;
  
  lVar10 = FUN_1436f73d0(*param_3,param_3[1]);
  uVar11 = 0;
  if (lVar10 == 0) {
    FUN_1436f8da0(param_1 + 0x160);
    *(undefined8 **)(param_1 + 0x160) = param_6;
    *(longlong *)(param_1 + 0x178) = param_1;
    *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_1 + 0x23c);
    (**(code **)(**(longlong **)(param_1 + 0x230) + 0x18))
              (*(longlong **)(param_1 + 0x230),&local_c8,param_3[1]);
    uVar16 = uStack_c0;
    uVar11 = CONCAT44(uStack_c4,local_c8);
    local_res18[0] = CONCAT44(local_res18[0]._4_4_,uStack_c0);
    uVar5 = FUN_143714d40(uVar11);
    FUN_1436fa100(param_1 + 8,uVar5,param_1 + 0x1f0,0);
    local_d8 = local_c8;
    uStack_d4 = uStack_c4;
    uStack_d0 = uStack_c0;
    uStack_cc = uStack_bc;
    FUN_1436fa320(param_1,&local_d8);
    if (param_5 == '\0') {
      iVar8 = *(int *)(param_1 + 0x10);
      uVar5 = (**(code **)*param_6)(param_6,param_3);
      FUN_1436f8920(param_1 + 0x130,param_4,uVar5,local_res18[0] & 0xffffffff,(longlong)iVar8);
    }
    else {
      FUN_1436f8a10(param_1 + 0x130,param_4,uVar16,(longlong)*(int *)(param_1 + 0x10));
    }
    puVar12 = (ulonglong *)FUN_14374ea80(param_1 + 0x1f8,&local_e8,param_3[1],uVar11);
    local_res18[0] = *puVar12;
    uVar5 = FUN_1437152f0(uVar11);
    iVar6 = FUN_1437152f0(uVar11);
    uVar11 = FUN_143703a50();
    iVar8 = *(int *)(param_1 + 0x10);
    uVar16 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
    iVar20 = iVar8 + iVar6;
    if ((int)uVar16 < iVar20) {
      iVar9 = uVar16 * 2;
      if (iVar20 < iVar9) {
        iVar20 = iVar9;
      }
      FUN_14370c310(uVar11,param_1 + 8,iVar20,1);
    }
    lVar10 = (longlong)iVar8 + *(longlong *)(param_1 + 8);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar6;
    FUN_14370c720(lVar10,0,uVar5);
    uVar11 = *param_3;
    uVar7 = FUN_1437152f0(param_3[1]);
    FUN_1436f53e0(param_1 + 0x160,local_res18[0],lVar10,uVar5,uVar11,uVar7,0,0,1);
    local_dc = 0;
    if (0 < *(int *)(param_1 + 0x170)) {
      local_78 = 0;
      do {
        lVar3 = local_78;
        lVar10 = *(longlong *)(param_1 + 0x168);
        uVar1 = *(ulonglong *)(local_78 + 0x10 + lVar10);
        lVar14 = *(longlong *)(local_78 + lVar10);
        lVar10 = *(longlong *)(local_78 + 8 + lVar10);
        if ((uVar1 & 1) != 0) {
          FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
        }
        local_88 = 0;
        local_98 = 0;
        lStack_90 = 0;
        local_res18[0] =
             CONCAT44(local_res18[0]._4_4_,
                      *(undefined4 *)(*(longlong *)(param_1 + 0x168) + 0x18 + lVar3));
        uVar19 = local_88;
        if (lVar10 != 0) {
          puVar13 = (undefined8 *)FUN_143714490(lVar10,1);
          bVar4 = 0;
          if (puVar13 != (undefined8 *)0x0) {
            bVar4 = (byte)*puVar13;
          }
          uVar19 = local_88;
          if ((bVar4 & 0xf) == 8) {
            local_98 = lVar14;
            lStack_90 = lVar10;
            if ((uVar1 & 1) != 0) {
              FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
            }
            uVar19 = uVar1;
            if ((local_88 & 1) != 0) {
              FUN_143733a60(local_88 & 0xfffffffffffffffe);
            }
          }
        }
        local_88 = uVar19;
        if (local_98 == 0) {
          uVar19 = 0;
          if (lVar10 == 0) {
LAB_1436fb561:
            *param_2 = 0x80040200;
            if ((uVar19 & 1) != 0) {
              FUN_143733a60(uVar19 & 0xfffffffffffffffe);
            }
            if ((local_88 & 1) != 0) {
              FUN_143733a60(local_88 & 0xfffffffffffffffe);
            }
            if ((uVar1 & 1) == 0) {
              return param_2;
            }
            FUN_143733a60(uVar1 & 0xfffffffffffffffe);
            return param_2;
          }
          puVar13 = (undefined8 *)FUN_143714490(lVar10,1);
          bVar4 = 0;
          if (puVar13 != (undefined8 *)0x0) {
            bVar4 = (byte)*puVar13;
          }
          if ((bVar4 & 0xf) != 3) goto LAB_1436fb561;
          if ((uVar1 & 1) != 0) {
            FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
          }
          uVar19 = uVar1;
          if (lVar14 == 0) goto LAB_1436fb561;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x18))
                    (*(longlong **)(param_1 + 0x230),&local_d8,&DAT_1467f0500);
          uVar16 = uStack_d0;
          local_b0 = 0;
          local_e8 = (longlong *)(uVar1 & 0xfffffffffffffffe);
          (**(code **)(*local_e8 + 0x38))(local_e8,local_70,lVar14,lVar10,&local_b0);
          iVar8 = FUN_14370c910(local_b0);
          local_68 = local_d8;
          uStack_64 = uStack_d4;
          uStack_60 = uStack_d0;
          uStack_5c = uStack_cc;
          iVar8 = iVar8 + 1;
          FUN_1436fa320(param_1,&local_68);
          if (*(char *)(param_1 + 0x23c) != '\0') {
            FUN_1436fa100(param_1 + 8,2,param_1 + 0x1f0);
          }
          uVar5 = *(undefined4 *)(param_1 + 0x10);
          FUN_1436f7130(local_res18[0] & 0xffffffff,param_1 + 0x130);
          lVar10 = local_b0;
          lVar14 = (longlong)(int)local_res18[0];
          *(uint *)(*(longlong *)(param_1 + 0x130) + lVar14 * 0xc) = uVar16 | 0x20000000;
          *(undefined4 *)(*(longlong *)(param_1 + 0x130) + 4 + lVar14 * 0xc) = uVar5;
          *(int *)(*(longlong *)(param_1 + 0x130) + 8 + lVar14 * 0xc) = iVar8;
          uVar11 = FUN_143703a50();
          uVar16 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
          iVar20 = *(int *)(param_1 + 0x10) + iVar8;
          if (((int)uVar16 < iVar20) && ((int)uVar16 < iVar20)) {
            iVar6 = iVar20;
            if (iVar20 < (int)(uVar16 * 2)) {
              iVar6 = uVar16 * 2;
            }
            FUN_14370c310(uVar11,param_1 + 8,iVar6,1);
          }
          puVar15 = (undefined1 *)((longlong)*(int *)(param_1 + 0x10) + *(longlong *)(param_1 + 8));
          lVar14 = (longlong)iVar8;
          if (0 < iVar8) {
            lVar10 = lVar10 - (longlong)puVar15;
            do {
              *puVar15 = puVar15[lVar10];
              puVar15 = puVar15 + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          *(int *)(param_1 + 0x10) = iVar20;
          plVar17 = local_e8;
          if ((uVar1 & 1) != 0) goto LAB_1436fb50e;
        }
        else {
          FUN_143742a00(&local_98,&local_58);
          plVar17 = local_50;
          local_e8 = local_50;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x18))
                    (*(longlong **)(param_1 + 0x230),&local_a8,local_50);
          uVar16 = uStack_a0;
          local_80 = CONCAT44(uStack_a4,local_a8);
          local_e0 = local_48;
          iVar8 = FUN_143714d40();
          if (iVar8 < *(int *)(param_1 + 0x1ec)) {
            iVar8 = *(int *)(param_1 + 0x1ec);
          }
          FUN_1436fa100(param_1 + 8,iVar8,param_1 + 0x1f0,0);
          local_68 = local_a8;
          uStack_64 = uStack_a4;
          uStack_60 = uStack_a0;
          uStack_5c = uStack_9c;
          FUN_1436fa320(param_1,&local_68);
          uVar5 = *(undefined4 *)(param_1 + 0x10);
          FUN_1436f7130(local_res18[0] & 0xffffffff,param_1 + 0x130);
          iVar8 = local_e0;
          lVar10 = (longlong)(int)local_res18[0];
          *(uint *)(*(longlong *)(param_1 + 0x130) + lVar10 * 0xc) = uVar16 | 0x20000000;
          *(undefined4 *)(*(longlong *)(param_1 + 0x130) + 4 + lVar10 * 0xc) = uVar5;
          *(int *)(*(longlong *)(param_1 + 0x130) + 8 + lVar10 * 0xc) = local_e0;
          if (local_e0 != 0) {
            iVar9 = FUN_1437152f0(plVar17);
            local_res18[0] = CONCAT44(local_res18[0]._4_4_,iVar9);
            local_b8 = FUN_1437152f0(local_80);
            iVar18 = local_b8 * iVar8;
            puVar13 = (undefined8 *)FUN_14374ea80(param_1 + 0x1f8,&local_c8,local_e8,local_80);
            local_e8 = (longlong *)*puVar13;
            uVar11 = FUN_143703a50();
            iVar20 = *(int *)(param_1 + 0x10);
            uVar16 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
            iVar6 = iVar20 + iVar18;
            if ((int)uVar16 < iVar6) {
              iVar2 = uVar16 * 2;
              if (iVar6 < iVar2) {
                iVar6 = iVar2;
              }
              FUN_14370c310(uVar11,param_1 + 8,iVar6,1);
            }
            lVar10 = (longlong)iVar20 + *(longlong *)(param_1 + 8);
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar18;
            FUN_14370c720(lVar10,0,iVar18);
            FUN_1436f53e0(param_1 + 0x160,local_e8,lVar10,iVar18,local_58,iVar9 * iVar8,local_b8,
                          (int)local_res18[0],local_e0);
          }
          if ((local_40 & 1) != 0) {
            plVar17 = (longlong *)(local_40 & 0xfffffffffffffffe);
LAB_1436fb50e:
            FUN_143733a60(plVar17);
          }
        }
        if ((local_88 & 1) != 0) {
          FUN_143733a60(local_88 & 0xfffffffffffffffe);
        }
        if ((uVar1 & 1) != 0) {
          FUN_143733a60(uVar1 & 0xfffffffffffffffe);
        }
        local_dc = local_dc + 1;
        local_78 = local_78 + 0x20;
      } while (local_dc < *(int *)(param_1 + 0x170));
    }
  }
  else {
    FUN_143714060(local_res18,lVar10);
    if (local_res18[0] < 2) {
      (**(code **)(**(longlong **)(param_1 + 0x230) + 0x18))
                (*(longlong **)(param_1 + 0x230),&local_a8,lVar10);
      FUN_1436f89b0(param_1 + 0x130,param_4,uStack_a0);
      local_d8 = local_a8;
      uStack_d4 = uStack_a4;
      uStack_d0 = uStack_a0;
      uStack_cc = uStack_9c;
      FUN_1436fa320(param_1,&local_d8);
    }
    else {
      plVar17 = *(longlong **)(param_1 + 0x230);
      if (local_res18[0] != 0) {
        uVar11 = FUN_143714de0();
      }
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_c8,uVar11);
      local_d8 = local_c8;
      uStack_d4 = uStack_c4;
      uStack_d0 = uStack_c0;
      uStack_cc = uStack_bc;
      FUN_1436fa320(param_1,&local_d8);
      local_d8 = local_c8;
      uStack_d4 = uStack_c4;
      uStack_d0 = uStack_c0;
      uStack_cc = uStack_bc;
      uVar5 = FUN_1436f9d30(param_1,local_res18[0],&local_d8);
      FUN_1436f8850(param_1 + 0x130,param_4,uStack_c0,uVar5);
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1436fb5b0 FUN_1436fb5b0 body=47 status=ok
// SIG undefined FUN_1436fb5b0(void)

undefined8
FUN_1436fb5b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1436fae70(param_1,param_2,param_4,param_3,0,param_5);
  return param_2;
}



// FUNCTION 1436fb5e0 FindGeometryOpposingNormal body=37 status=ok
// SIG undefined FindGeometryOpposingNormal(void)

undefined8
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::FindGeometryOpposingNormal
          (longlong param_1,undefined8 param_2)

{
  FUN_1436fb5b0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 1436fb610 FUN_1436fb610 body=108 status=ok
// SIG undefined FUN_1436fb610(void)

void FUN_1436fb610(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x158) == (*(uint *)(param_1 + 0x15c) & 0x3fffffff)) {
    FUN_14370c460(uVar3,(longlong *)(param_1 + 0x150),8);
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x150) + (longlong)*(int *)(param_1 + 0x158) * 8);
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  piVar1[1] = param_3;
  *piVar1 = param_2 - (int)uVar2;
  return;
}



// FUNCTION 1436fb680 FUN_1436fb680 body=93 status=ok
// SIG undefined FUN_1436fb680(void)

void FUN_1436fb680(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2 + (longlong)((int)param_1[1] - (int)param_1[2]);
  if (param_2[1] < uVar1) {
    hkIo::WriteBuffer::implWriteRaw(param_2,(longlong)(int)param_1[2] + *param_1);
  }
  else {
    FGenericPlatformString::Memcpy();
    *param_2 = uVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[1];
  return;
}



// FUNCTION 1436fb6e0 FUN_1436fb6e0 body=131 status=ok
// SIG undefined FUN_1436fb6e0(void)

void FUN_1436fb6e0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = (undefined4)param_1[1];
  FUN_1436f7450(param_2,local_res8);
  iVar2 = (int)param_1[2];
  if (iVar2 < (int)param_1[1]) {
    do {
      lVar1 = *param_1 + (longlong)iVar2 * 8;
      FUN_1436f7450(param_2,lVar1);
      FUN_1436f7570(param_2,lVar1 + 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  *(int *)(param_1 + 2) = (int)param_1[1];
  return;
}



// FUNCTION 1436fb770 FUN_1436fb770 body=229 status=ok
// SIG undefined FUN_1436fb770(void)

void FUN_1436fb770(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 local_res8 [2];
  
  FUN_1436f7450(param_2,param_1 + 1);
  uVar4 = (ulonglong)(int)param_1[2];
  if ((int)param_1[2] < (int)param_1[1]) {
    lVar5 = uVar4 * 0x18;
    do {
      lVar1 = *param_1 + lVar5;
      FUN_1436f7450(param_2,lVar1);
      local_res8[0] = *(undefined4 *)(lVar1 + 0x10);
      FUN_1436f7450(param_2,local_res8);
      iVar2 = 0;
      if (0 < *(int *)(lVar1 + 0x10)) {
        do {
          FUN_1436f7510(param_2,*(longlong *)(lVar1 + 8) + (longlong)iVar2 * 0x10);
          FUN_1436f7510(param_2,*(longlong *)(lVar1 + 8) + 8 + (longlong)iVar2 * 0x10);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(lVar1 + 0x10));
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      lVar5 = lVar5 + 0x18;
    } while ((int)uVar3 < (int)param_1[1]);
  }
  *(int *)(param_1 + 2) = (int)param_1[1];
  return;
}



// FUNCTION 1436fb860 FUN_1436fb860 body=153 status=ok
// SIG undefined FUN_1436fb860(void)

void FUN_1436fb860(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = (undefined4)param_1[1];
  FUN_1436f7450(param_2,local_res8);
  iVar2 = (int)param_1[4];
  if (iVar2 < (int)param_1[1]) {
    do {
      lVar1 = (longlong)iVar2 * 0xc;
      FUN_1436f7450(param_2,*param_1 + lVar1);
      FUN_1436f7450(param_2,*param_1 + 4 + lVar1);
      FUN_1436f7450(param_2,*param_1 + 8 + lVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  *(int *)(param_1 + 4) = (int)param_1[1];
  return;
}



// FUNCTION 1436fb900 FUN_1436fb900 body=121 status=ok
// SIG undefined FUN_1436fb900(void)

void FUN_1436fb900(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = (int)param_1[4];
  iVar3 = (int)(((longlong)(int)param_1[1] << 4) >> 4);
  if (iVar1 < iVar3) {
    lVar2 = (longlong)iVar1 * 0x10 + *param_1;
    uVar4 = (ulonglong)(uint)(iVar3 - iVar1);
    do {
      FUN_1436f73e0(param_2,lVar2);
      lVar2 = lVar2 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(int *)(param_1 + 4) = iVar3;
  return;
}



// FUNCTION 1436fb980 FUN_1436fb980 body=65 status=ok
// SIG undefined FUN_1436fb980(void)

undefined8 FUN_1436fb980(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14374d270(*(undefined8 *)(param_1 + 0x18),param_3,0);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
            (*(longlong **)(param_1 + 0x20),param_2,uVar1);
  return param_2;
}



// FUNCTION 1436fb9d0 FUN_1436fb9d0 body=84 status=ok
// SIG undefined FUN_1436fb9d0(void)

undefined8 * FUN_1436fb9d0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143731fd0(param_1 + 0x18,param_3);
  FUN_1436fa450(param_1);
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1436fba30 FUN_1436fba30 body=1011 status=ok
// SIG undefined FUN_1436fba30(void)

void FUN_1436fba30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  
  if ((*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) ||
     (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0xf8))) {
    FUN_14374df30(param_2,0,0x54595045);
    if (*(char *)(param_1 + 0x23c) != '\0') {
      FUN_14374df30(param_2,1,0x54505452);
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x230) + 0x20))();
      FUN_143747f80(param_3,(longlong)(*(int *)(param_1 + 0x1e8) * (iVar1 + 1)));
      FUN_14374ded0(param_2);
    }
    if (*(char *)(param_1 + 0x23d) == '\0') {
      *(undefined4 *)(param_1 + 0x238) = 1;
    }
    else {
      if (((*(int *)(param_1 + 0xd8) == *(int *)(param_1 + 0x38)) &&
          (*(int *)(param_1 + 0xdc) == *(int *)(param_1 + 0x50))) &&
         (*(int *)(param_1 + 0xe0) == *(int *)(param_1 + 200))) {
        uVar2 = (undefined4)*(undefined8 *)(param_1 + 0xe8);
      }
      else {
        uVar2 = FUN_1436f8bf0(param_1 + 0x18);
      }
      local_res8[0] = uVar2;
      FUN_14374df30(param_2,1,0x54534841);
      FUN_1436f7570(param_3,param_1 + 0x238);
      FUN_1436f7570(param_3,local_res8);
      FUN_14374ded0(param_2);
      *(undefined4 *)(param_1 + 0x238) = uVar2;
    }
    if (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 0x50)) {
      FUN_14374df30(param_2,1,0x54535452);
      FUN_1436fb900(param_1 + 0x48,param_3);
      FUN_1436fa1b0(param_3,4,param_1 + 0x1f0,&DAT_145b75498);
      FUN_14374ded0(param_2);
    }
    if (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 200)) {
      FUN_14374df30(param_2,1,0x544e4131);
      FUN_1436fb770(param_1 + 0xc0,param_3);
      FUN_1436fa1b0(param_3,4,param_1 + 0x1f0,&DAT_145b75498);
      FUN_14374ded0(param_2);
    }
    if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x78)) {
      FUN_14374df30(param_2,1,0x46535452);
      FUN_1436fb900(param_1 + 0x70,param_3);
      FUN_1436fa1b0(param_3,4,param_1 + 0x1f0,&DAT_145b75498);
      FUN_14374ded0(param_2);
    }
    if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0xa0)) {
      FUN_14374df30(param_2,1,0x41535452);
      FUN_1436fb900(param_1 + 0x98,param_3);
      FUN_1436fa1b0(param_3,4,param_1 + 0x1f0,&DAT_145b754b8);
      FUN_14374ded0(param_2);
    }
    if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      FUN_14374df30(param_2,1,0x54424459);
      FUN_1436fb680(param_1 + 0x30,param_3);
      FUN_1436fa1b0(param_3,4,param_1 + 0x1f0,&DAT_145b75498);
      FUN_14374ded0(param_2);
    }
    if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
      FUN_14374df30(param_2,1,0x54485348);
      FUN_1436fb6e0(param_1 + 0x18,param_3);
      FUN_1436fa1b0(param_3,4,param_1 + 0x1f0,&DAT_145b75498);
      FUN_14374ded0(param_2);
    }
    if (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0xf8)) {
      FUN_14374df30(param_2,1,0x5450524f);
      FUN_1436fb860(param_1 + 0xf0,param_3);
      FUN_1436fa1b0(param_3,4,param_1 + 0x1f0,&DAT_145b75498);
      FUN_14374ded0(param_2);
    }
    if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 0x120)) {
      FUN_14374df30(param_2,1,0x54504853);
      FUN_1436fb6e0(param_1 + 0x118,param_3);
      FUN_1436fa1b0(param_3,4,param_1 + 0x1f0,&DAT_145b75498);
      FUN_14374ded0(param_2);
    }
    FUN_14374df30(param_2,1,0x54504144);
    FUN_1436fa1b0(param_3,4,param_1 + 0x1f0,&DAT_145b75498);
    FUN_14374ded0(param_2);
    FUN_14374ded0(param_2);
  }
  return;
}



// FUNCTION 1436fbe30 FUN_1436fbe30 body=287 status=ok
// SIG undefined FUN_1436fbe30(void)

longlong FUN_1436fbe30(longlong param_1)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 0x10) = param_1;
  *(undefined ***)(param_1 + 8) = hkSerialize::XmlReadFormat::Impl::AllocationImpl::vftable;
  uVar1 = FUN_143703a50();
  FUN_1437365b0(param_1 + 0x18,uVar1,0x4000);
  FUN_143739070(param_1 + 0x60);
  *(undefined ***)(param_1 + 0x60) =
       hkSerialize::Detail::BundleWithRelocs<hkSerialize::Detail::IndexedBundle>::vftable;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x80000000;
  FUN_143734b10(param_1 + 0xe0);
  *(undefined ***)(param_1 + 0x60) = hkSerialize::XmlReadFormat::Impl::BundleXml::vftable;
  uVar1 = FUN_143703a50();
  FUN_1437365b0(param_1 + 0xf0,uVar1,0x4000);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0x80000000;
  *(undefined4 *)(param_1 + 0x148) = 0;
  hkReflect::Detail::Impl::Impl(param_1 + 0x150);
  *(longlong *)(param_1 + 0x160) = param_1;
  *(undefined ***)(param_1 + 0x150) = hkSerialize::XmlReadFormat::Impl::ArrayImpl::vftable;
  hkReflect::Detail::Impl::Impl(param_1 + 0x168);
  *(undefined ***)(param_1 + 0x168) = hkSerialize::XmlReadFormat::Impl::StringImpl::vftable;
  *(longlong *)(param_1 + 0x178) = param_1;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0x80000000;
  return param_1;
}



// FUNCTION 1436fbf50 FUN_1436fbf50 body=115 status=ok
// SIG undefined FUN_1436fbf50(void)

undefined8 * FUN_1436fbf50(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *param_1 = hkSerialize::XmlReadFormat::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x198);
  if (lVar2 != 0) {
    uVar3 = FUN_1436fbe30(lVar2);
    param_1[3] = uVar3;
    return param_1;
  }
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1436fbfd0 FUN_1436fbfd0 body=216 status=ok
// SIG undefined FUN_1436fbfd0(void)

void FUN_1436fbfd0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar3 = (int)param_1[1] + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*param_1 + 0x14 + lVar5 * 0x18);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),8,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -6;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x18,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 1436fc0b0 FUN_1436fc0b0 body=237 status=ok
// SIG undefined FUN_1436fc0b0(void)

void FUN_1436fc0b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x18c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x180),0x10,
                  *(uint *)(param_1 + 0x18c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0x80000000;
  FUN_143732980(param_1 + 0x168);
  FUN_143732980(param_1 + 0x150);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x144)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x138),4,*(uint *)(param_1 + 0x144) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0x80000000;
  FUN_143736600(param_1 + 0xf0);
  FUN_1436fbfd0(param_1 + 0xd0);
  FUN_1436fc1a0(param_1 + 0x60);
  FUN_143736600(param_1 + 0x18);
  *(undefined ***)(param_1 + 8) = hkReflect::Detail::AllocationImpl::vftable;
  return;
}



// FUNCTION 1436fc1a0 FUN_1436fc1a0 body=110 status=ok
// SIG undefined FUN_1436fc1a0(void)

void FUN_1436fc1a0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143732980(param_1 + 0x58);
  FUN_143732980(param_1 + 0x40);
  FUN_143732980(param_1 + 0x28);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x18,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_143734f50(param_1);
  return;
}



// FUNCTION 1436fc210 FUN_1436fc210 body=100 status=ok
// SIG undefined FUN_1436fc210(void)

void FUN_1436fc210(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = param_1[3];
  *param_1 = hkSerialize::XmlReadFormat::vftable;
  if (lVar1 != 0) {
    FUN_1436fc0b0(lVar1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x198);
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1436fc280 FUN_1436fc280 body=93 status=ok
// SIG undefined FUN_1436fc280(void)

void FUN_1436fc280(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*param_1,1,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)
    ;
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 1436fc2e0 FUN_1436fc2e0 body=242 status=ok
// SIG undefined FUN_1436fc2e0(void)

void FUN_1436fc2e0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xc4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xb8),8,*(uint *)(param_1 + 0xc4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x80000000;
  FUN_143751370(param_1 + 0x68);
  FUN_14370c000(param_1 + 0x50);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),1,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),8,*(uint *)(param_1 + 0x3c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  FUN_14373bf70(param_1 + 0x18);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1436fc3e0 FUN_1436fc3e0 body=91 status=ok
// SIG undefined FUN_1436fc3e0(void)

undefined8 * FUN_1436fc3e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    FUN_143733a60(param_1[3] & 0xfffffffffffffffe);
  }
  param_1[3] = param_2[3];
  param_2[3] = 0;
  return param_1;
}


