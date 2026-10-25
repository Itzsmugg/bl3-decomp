// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143690260 FUN_143690260 body=347 status=ok
// SIG undefined FUN_143690260(void)

void FUN_143690260(uint *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x11);
  if (bVar1 < 8) {
    uVar2 = *param_1;
    uVar7 = (ulonglong)uVar2;
    if (bVar1 == 1) {
      pbVar5 = (byte *)(param_2 + -1 + uVar7);
      pbVar4 = (byte *)((ulonglong)(uVar2 - 1 >> 3) + param_2);
      iVar3 = 7 - (uVar2 - 1 & 7);
      if (uVar2 != 0) {
        do {
          *pbVar5 = *pbVar4 >> ((byte)iVar3 & 0x1f) & 1;
          if (iVar3 == 7) {
            iVar3 = 0;
            pbVar4 = pbVar4 + -1;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          pbVar5 = pbVar5 + -1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else if (bVar1 == 2) {
      pbVar5 = (byte *)(param_2 + -1 + uVar7);
      pbVar4 = (byte *)((ulonglong)(uVar2 - 1 >> 2) + param_2);
      iVar3 = (3 - (uVar2 - 1 & 3)) * 2;
      if (uVar2 != 0) {
        do {
          *pbVar5 = *pbVar4 >> ((byte)iVar3 & 0x1f) & 3;
          if (iVar3 == 6) {
            iVar3 = 0;
            pbVar4 = pbVar4 + -1;
          }
          else {
            iVar3 = iVar3 + 2;
          }
          pbVar5 = pbVar5 + -1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else if (bVar1 == 4) {
      uVar6 = (ulonglong)uVar2;
      pbVar5 = (byte *)(param_2 + -1 + uVar7);
      pbVar4 = (byte *)((ulonglong)(uVar2 - 1 >> 1) + param_2);
      iVar3 = (1 - (uVar2 - 1 & 1)) * 4;
      if (uVar2 != 0) {
        do {
          *pbVar5 = *pbVar4 >> ((byte)iVar3 & 0x1f) & 0xf;
          if (iVar3 == 4) {
            iVar3 = 0;
            pbVar4 = pbVar4 + -1;
          }
          else {
            iVar3 = 4;
          }
          pbVar5 = pbVar5 + -1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x11) = 8;
    *(byte *)((longlong)param_1 + 0x13) = *(byte *)((longlong)param_1 + 0x12) << 3;
    *(ulonglong *)(param_1 + 2) = (ulonglong)(*(byte *)((longlong)param_1 + 0x12) * uVar2);
  }
  return;
}



// FUNCTION 1436903c0 FUN_1436903c0 body=612 status=ok
// SIG undefined FUN_1436903c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436903c0(longlong param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)local_28;
  bVar2 = *(byte *)(param_1 + 0x10);
  if (bVar2 != 3) {
    bVar3 = *(byte *)(param_1 + 0x11);
    uVar10 = (uint)bVar3;
    if ((bVar2 & 2) == 0) {
      lVar8 = 1;
      local_28[0] = (uint)bVar3 - (uint)param_3[3];
    }
    else {
      local_28[0] = (uint)bVar3 - (uint)*param_3;
      local_28[1] = (uint)bVar3 - (uint)param_3[1];
      lVar8 = 3;
      local_28[2] = uVar10 - param_3[2];
    }
    uVar7 = (uint)lVar8;
    if ((bVar2 & 4) != 0) {
      uVar7 = uVar7 + 1;
      local_28[lVar8] = uVar10 - param_3[4];
    }
    uVar5 = 0;
    uVar12 = (ulonglong)uVar7;
    uVar4 = uVar5;
    uVar13 = uVar5;
    if (uVar7 != 0) {
      do {
        if ((local_28[uVar4] < 1) || ((int)uVar10 <= local_28[uVar4])) {
          local_28[uVar4] = 0;
        }
        else {
          uVar13 = 1;
        }
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)uVar12);
      if ((int)uVar13 != 0) {
        if (uVar10 == 2) {
          uVar4 = *(ulonglong *)(param_1 + 8);
          if (param_2 + *(ulonglong *)(param_1 + 8) < param_2) {
            uVar4 = uVar5;
          }
          if (uVar4 != 0) {
            pbVar6 = param_2;
            do {
              pbVar1 = pbVar6 + 1;
              *pbVar6 = *pbVar6 >> 1 & 0x55;
              pbVar6 = pbVar1;
            } while ((ulonglong)((longlong)pbVar1 - (longlong)param_2) < uVar4);
          }
        }
        else if (bVar3 == 4) {
          iVar11 = 0xf >> ((byte)local_28[0] & 0x1f);
          uVar4 = *(ulonglong *)(param_1 + 8);
          if (param_2 + *(ulonglong *)(param_1 + 8) < param_2) {
            uVar4 = uVar5;
          }
          if (uVar4 != 0) {
            pbVar6 = param_2;
            do {
              pbVar1 = pbVar6 + 1;
              *pbVar6 = *pbVar6 >> ((byte)local_28[0] & 0x1f) & ((byte)iVar11 | (byte)(iVar11 << 4))
              ;
              pbVar6 = pbVar1;
            } while ((ulonglong)((longlong)pbVar1 - (longlong)param_2) < uVar4);
          }
        }
        else if (bVar3 == 8) {
          uVar4 = *(ulonglong *)(param_1 + 8);
          if (param_2 + *(ulonglong *)(param_1 + 8) < param_2) {
            uVar4 = uVar5;
          }
          if (uVar4 != 0) {
            pbVar6 = param_2;
            uVar13 = uVar5;
            do {
              pbVar1 = pbVar6 + 1;
              uVar9 = uVar13 + 1;
              *pbVar6 = *pbVar6 >> (*(byte *)(local_28 + uVar13) & 0x1f);
              uVar13 = uVar5;
              if ((longlong)uVar9 < (longlong)uVar12) {
                uVar13 = uVar9;
              }
              pbVar6 = pbVar1;
            } while ((ulonglong)((longlong)pbVar1 - (longlong)param_2) < uVar4);
          }
        }
        else if (bVar3 == 0x10) {
          pbVar6 = param_2 + *(longlong *)(param_1 + 8);
          uVar4 = uVar5;
          while (param_2 < pbVar6) {
            uVar13 = uVar4 + 1;
            iVar11 = (int)((uint)*param_2 * 0x100 + (uint)param_2[1]) >>
                     ((byte)local_28[uVar4] & 0x1f);
            *param_2 = (byte)((uint)iVar11 >> 8);
            param_2[1] = (byte)iVar11;
            param_2 = param_2 + 2;
            uVar4 = uVar5;
            if ((longlong)uVar13 < (longlong)uVar12) {
              uVar4 = uVar13;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143690630 FUN_143690630 body=57 status=ok
// SIG undefined FUN_143690630(void)

undefined8 FUN_143690630(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_res18 [4];
  
  iVar1 = FUN_14368a760(local_res18,param_1,param_2,100000);
  if (iVar1 != 0) {
    uVar2 = FUN_14368a640(local_res18[0]);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 143690670 FUN_143690670 body=392 status=ok
// SIG undefined FUN_143690670(void)

void FUN_143690670(longlong param_1)

{
  ulonglong *puVar1;
  char *pcVar2;
  ushort uVar3;
  ulonglong *puVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  uint uVar20;
  longlong lVar22;
  char *pcVar23;
  byte *pbVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar21;
  
  uVar3 = *(ushort *)(param_1 + 0x268);
  uVar25 = 0;
  iVar26 = 0;
  if ((uVar3 != 0) && (uVar3 != 0)) {
    pcVar23 = *(char **)(param_1 + 0x300);
    uVar21 = uVar25;
    uVar27 = uVar25;
    do {
      if (*pcVar23 != -1) {
        if (*pcVar23 != '\0') goto LAB_1436906e2;
        uVar27 = 1;
      }
      iVar26 = (int)uVar27;
      uVar20 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar20;
      pcVar23 = pcVar23 + 1;
    } while ((int)uVar20 < (int)(uint)uVar3);
  }
  *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xff7fffff;
  *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffffdfff;
  if (iVar26 == 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xfffffe7f;
  }
LAB_1436906e2:
  if ((*(uint *)(param_1 + 0x15c) & 0x1100) == 0x1100) {
    pbVar24 = (byte *)((ulonglong)*(byte *)(param_1 + 0x288) * 3 + *(longlong *)(param_1 + 600));
    *(ushort *)(param_1 + 0x28a) = (ushort)*pbVar24;
    *(ushort *)(param_1 + 0x28c) = (ushort)pbVar24[1];
    *(ushort *)(param_1 + 0x28e) = (ushort)pbVar24[2];
    if ((*(uint *)(param_1 + 0x15c) & 0x2080000) == 0x80000) {
      uVar20 = 0;
      if ((uVar3 != 0) && (0x1f < uVar3)) {
        puVar1 = (ulonglong *)(param_1 + 0x300);
        puVar4 = (ulonglong *)*puVar1;
        if ((puVar1 < puVar4) ||
           ((ulonglong *)((longlong)(int)(uVar3 - 1) + (longlong)puVar4) < puVar1)) {
          uVar21 = uVar25;
          do {
            pcVar23 = (char *)((longlong)puVar4 + uVar25);
            cVar5 = pcVar23[1];
            cVar6 = pcVar23[2];
            cVar7 = pcVar23[3];
            cVar8 = pcVar23[4];
            cVar9 = pcVar23[5];
            cVar10 = pcVar23[6];
            cVar11 = pcVar23[7];
            cVar12 = pcVar23[8];
            cVar13 = pcVar23[9];
            cVar14 = pcVar23[10];
            cVar15 = pcVar23[0xb];
            cVar16 = pcVar23[0xc];
            cVar17 = pcVar23[0xd];
            cVar18 = pcVar23[0xe];
            cVar19 = pcVar23[0xf];
            uVar20 = (int)uVar21 + 0x20;
            uVar21 = (ulonglong)uVar20;
            pcVar2 = (char *)((longlong)puVar4 + uVar25);
            *pcVar2 = -1 - *pcVar23;
            pcVar2[1] = -1 - cVar5;
            pcVar2[2] = -1 - cVar6;
            pcVar2[3] = -1 - cVar7;
            pcVar2[4] = -1 - cVar8;
            pcVar2[5] = -1 - cVar9;
            pcVar2[6] = -1 - cVar10;
            pcVar2[7] = -1 - cVar11;
            pcVar2[8] = -1 - cVar12;
            pcVar2[9] = -1 - cVar13;
            pcVar2[10] = -1 - cVar14;
            pcVar2[0xb] = -1 - cVar15;
            pcVar2[0xc] = -1 - cVar16;
            pcVar2[0xd] = -1 - cVar17;
            pcVar2[0xe] = -1 - cVar18;
            pcVar2[0xf] = -1 - cVar19;
            pcVar23 = (char *)((longlong)puVar4 + uVar25 + 0x10);
            cVar5 = pcVar23[1];
            cVar6 = pcVar23[2];
            cVar7 = pcVar23[3];
            cVar8 = pcVar23[4];
            cVar9 = pcVar23[5];
            cVar10 = pcVar23[6];
            cVar11 = pcVar23[7];
            cVar12 = pcVar23[8];
            cVar13 = pcVar23[9];
            cVar14 = pcVar23[10];
            cVar15 = pcVar23[0xb];
            cVar16 = pcVar23[0xc];
            cVar17 = pcVar23[0xd];
            cVar18 = pcVar23[0xe];
            cVar19 = pcVar23[0xf];
            pcVar2 = (char *)((longlong)puVar4 + uVar25 + 0x10);
            *pcVar2 = -1 - *pcVar23;
            pcVar2[1] = -1 - cVar5;
            pcVar2[2] = -1 - cVar6;
            pcVar2[3] = -1 - cVar7;
            pcVar2[4] = -1 - cVar8;
            pcVar2[5] = -1 - cVar9;
            pcVar2[6] = -1 - cVar10;
            pcVar2[7] = -1 - cVar11;
            pcVar2[8] = -1 - cVar12;
            pcVar2[9] = -1 - cVar13;
            pcVar2[10] = -1 - cVar14;
            pcVar2[0xb] = -1 - cVar15;
            pcVar2[0xc] = -1 - cVar16;
            pcVar2[0xd] = -1 - cVar17;
            pcVar2[0xe] = -1 - cVar18;
            pcVar2[0xf] = -1 - cVar19;
            uVar25 = uVar25 + 0x20;
          } while ((longlong)uVar25 < (longlong)((ulonglong)uVar3 & 0xffffffe0));
        }
      }
      for (lVar22 = (longlong)(int)uVar20; lVar22 < (longlong)(ulonglong)uVar3; lVar22 = lVar22 + 1)
      {
        pbVar24 = (byte *)(*(longlong *)(param_1 + 0x300) + lVar22);
        *pbVar24 = ~*pbVar24;
      }
    }
  }
  return;
}



// FUNCTION 143690800 FUN_143690800 body=2988 status=ok
// SIG undefined FUN_143690800(void)

void FUN_143690800(longlong param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined2 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ushort uVar20;
  longlong lVar21;
  byte *pbVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined2 local_res8;
  undefined2 local_res18;
  
  uVar15 = 100000;
  if (*(int *)(param_1 + 0x2b4) == 0) {
    if (*(int *)(param_1 + 0x2b8) == 0) {
      *(undefined4 *)(param_1 + 0x2b4) = 100000;
      *(undefined4 *)(param_1 + 0x2b8) = 100000;
    }
    else {
      uVar14 = FUN_14368a850();
      *(undefined4 *)(param_1 + 0x2b4) = uVar14;
    }
LAB_143690869:
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xffffdfff;
  }
  else {
    if (*(int *)(param_1 + 0x2b8) == 0) {
      uVar14 = FUN_14368a850();
      *(undefined4 *)(param_1 + 0x2b8) = uVar14;
      goto LAB_143690869;
    }
    iVar13 = FUN_143690630();
    if (iVar13 == 0) goto LAB_143690869;
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x2000;
  }
  uVar23 = 0;
  if ((*(uint *)(param_1 + 0x15c) & 0x40080) == 0x40000) {
    *(undefined2 *)(param_1 + 0x268) = 0;
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffffdfff;
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xfd7ffeff;
  }
  iVar13 = FUN_14368a640(*(undefined4 *)(param_1 + 0x2b8));
  if (iVar13 == 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xff7fffff;
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffffdfff;
  }
  if ((*(uint *)(param_1 + 0x15c) >> 8 & 1) == 0) {
    if ((((*(uint *)(param_1 + 0x15c) & 0x4080) != 0x4080) ||
        (sVar4 = *(short *)(param_1 + 0x28a), sVar4 != *(short *)(param_1 + 0x28c))) ||
       (sVar4 != *(short *)(param_1 + 0x28e))) goto LAB_143690916;
    *(short *)(param_1 + 0x290) = sVar4;
  }
  else if ((*(byte *)(param_1 + 0x26f) & 2) != 0) goto LAB_143690916;
  *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x800;
LAB_143690916:
  if (*(char *)(param_1 + 0x26f) == '\x03') {
    FUN_143690670();
  }
  else {
    FUN_1436913b0(param_1);
  }
  uVar6 = *(uint *)(param_1 + 0x15c);
  if (((uVar6 & 0x380) == 0x280) && (*(char *)(param_1 + 0x270) != '\x10')) {
    *(short *)(param_1 + 0x28a) = (short)((*(ushort *)(param_1 + 0x28a) + 0x81) * 0xff >> 0x10);
    *(short *)(param_1 + 0x28c) = (short)((*(ushort *)(param_1 + 0x28c) + 0x81) * 0xff >> 0x10);
    *(short *)(param_1 + 0x28e) = (short)((*(ushort *)(param_1 + 0x28e) + 0x81) * 0xff >> 0x10);
    *(short *)(param_1 + 0x290) = (short)((*(ushort *)(param_1 + 0x290) + 0x81) * 0xff >> 0x10);
  }
  if ((((uVar6 & 0x80) != 0 && (uVar6 & 0x4000400) != 0) && ((uVar6 >> 8 & 1) == 0)) &&
     (*(char *)(param_1 + 0x270) == '\x10')) {
    *(short *)(param_1 + 0x28a) = *(short *)(param_1 + 0x28a) * 0x101;
    *(short *)(param_1 + 0x28c) = *(short *)(param_1 + 0x28c) * 0x101;
    *(short *)(param_1 + 0x28e) = *(short *)(param_1 + 0x28e) * 0x101;
    *(short *)(param_1 + 0x290) = *(short *)(param_1 + 0x290) * 0x101;
  }
  *(undefined8 *)(param_1 + 0x292) = *(undefined8 *)(param_1 + 0x288);
  *(undefined2 *)(param_1 + 0x29a) = *(undefined2 *)(param_1 + 0x290);
  if (((((uVar6 >> 0xd & 1) == 0) &&
       (((uVar6 & 0x600000) == 0 ||
        ((iVar13 = FUN_14368a640(*(undefined4 *)(param_1 + 0x2b4)), iVar13 == 0 &&
         (iVar13 = FUN_14368a640(*(undefined4 *)(param_1 + 0x2b8)), iVar13 == 0)))))) &&
      (((*(byte *)(param_1 + 0x15c) & 0x80) == 0 ||
       (((iVar13 = FUN_14368a640(*(undefined4 *)(param_1 + 0x2b4)), iVar13 == 0 &&
         (iVar13 = FUN_14368a640(*(undefined4 *)(param_1 + 0x2b8)), iVar13 == 0)) &&
        ((*(char *)(param_1 + 0x280) != '\x03' ||
         (iVar13 = FUN_14368a640(*(undefined4 *)(param_1 + 0x284)), iVar13 == 0)))))))) &&
     (((*(uint *)(param_1 + 0x15c) & 0x800000) == 0 ||
      (iVar13 = FUN_14368a640(*(undefined4 *)(param_1 + 0x2b8)), iVar13 == 0)))) {
    if (((*(byte *)(param_1 + 0x15c) & 0x80) != 0) && (*(char *)(param_1 + 0x26f) == '\x03')) {
      uVar3 = *(ushort *)(param_1 + 0x268);
      bVar9 = *(byte *)(param_1 + 0x28a);
      bVar10 = *(byte *)(param_1 + 0x28c);
      bVar11 = *(byte *)(param_1 + 0x28e);
      local_res8 = CONCAT11(bVar10,bVar9);
      if ((ulonglong)uVar3 != 0) {
        pbVar22 = (byte *)(*(longlong *)(param_1 + 600) + 2);
        do {
          bVar1 = *(byte *)(uVar23 + *(longlong *)(param_1 + 0x300));
          if (bVar1 == 0) {
            *(undefined2 *)(pbVar22 + -2) = local_res8;
            *pbVar22 = bVar11;
          }
          else if (bVar1 != 0xff) {
            uVar20 = (0xff - (ushort)bVar1) * (ushort)bVar9 + (ushort)pbVar22[-2] * (ushort)bVar1 +
                     0x80;
            pbVar22[-2] = (byte)((uint)(uVar20 >> 8) + (uint)uVar20 >> 8);
            bVar1 = *(byte *)(*(longlong *)(param_1 + 0x300) + uVar23);
            uVar20 = (0xff - (ushort)bVar1) * (ushort)bVar10 + (ushort)pbVar22[-1] * (ushort)bVar1 +
                     0x80;
            pbVar22[-1] = (byte)((uint)(uVar20 >> 8) + (uint)uVar20 >> 8);
            bVar1 = *(byte *)(*(longlong *)(param_1 + 0x300) + uVar23);
            uVar20 = (0xff - (ushort)bVar1) * (ushort)bVar11 + (ushort)*pbVar22 * (ushort)bVar1 +
                     0x80;
            *pbVar22 = (byte)((uint)(uVar20 >> 8) + (uint)uVar20 >> 8);
          }
          uVar23 = uVar23 + 1;
          pbVar22 = pbVar22 + 3;
        } while ((longlong)uVar23 < (longlong)(ulonglong)uVar3);
      }
      *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xffffff7f;
    }
  }
  else {
    FUN_143689630(param_1,*(undefined1 *)(param_1 + 0x270));
    uVar6 = *(uint *)(param_1 + 0x15c);
    if ((char)uVar6 < '\0') {
      if ((uVar6 & 0x600000) != 0) {
        FUN_1436941c0(param_1,"libpng does not support gamma+background+rgb_to_gray");
      }
      if (*(char *)(param_1 + 0x26f) == '\x03') {
        cVar2 = *(char *)(param_1 + 0x280);
        lVar18 = *(longlong *)(param_1 + 600);
        uVar3 = *(ushort *)(param_1 + 0x260);
        if (cVar2 == '\x02') {
          lVar19 = *(longlong *)(param_1 + 0x2c0);
          bVar9 = *(byte *)((ulonglong)*(ushort *)(param_1 + 0x28e) + lVar19);
          local_res18 = CONCAT11(*(undefined1 *)((ulonglong)*(ushort *)(param_1 + 0x28c) + lVar19),
                                 *(undefined1 *)(lVar19 + (ulonglong)*(ushort *)(param_1 + 0x28a)));
          lVar19 = *(longlong *)(param_1 + 0x2d8);
          local_res8._0_1_ = *(byte *)(lVar19 + (ulonglong)*(ushort *)(param_1 + 0x28c));
          bVar10 = *(byte *)(lVar19 + (ulonglong)*(ushort *)(param_1 + 0x28a));
          bVar11 = *(byte *)(lVar19 + (ulonglong)*(ushort *)(param_1 + 0x28e));
        }
        else {
          if (cVar2 == '\x01') {
            uVar14 = *(undefined4 *)(param_1 + 0x2b8);
          }
          else if (cVar2 == '\x02') {
            uVar14 = FUN_14368a850(*(undefined4 *)(param_1 + 0x2b4));
            uVar15 = FUN_14368a8b0(*(undefined4 *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b8)
                                  );
          }
          else if (cVar2 == '\x03') {
            uVar14 = FUN_14368a850(*(undefined4 *)(param_1 + 0x284));
            uVar15 = FUN_14368a8b0(*(undefined4 *)(param_1 + 0x284),*(undefined4 *)(param_1 + 0x2b8)
                                  );
          }
          else {
            uVar14 = 100000;
          }
          iVar13 = FUN_14368a640(uVar15);
          if (iVar13 == 0) {
            bVar9 = *(byte *)(param_1 + 0x28e);
            local_res18 = CONCAT11(*(undefined1 *)(param_1 + 0x28c),*(undefined1 *)(param_1 + 0x28a)
                                  );
          }
          else {
            uVar7 = FUN_14368a5b0(*(undefined2 *)(param_1 + 0x28a),uVar15);
            uVar8 = FUN_14368a5b0(*(undefined2 *)(param_1 + 0x28c),uVar15);
            local_res18 = CONCAT11(uVar8,uVar7);
            bVar9 = FUN_14368a5b0(*(undefined2 *)(param_1 + 0x28e),uVar15);
          }
          iVar13 = FUN_14368a640(uVar14);
          if (iVar13 == 0) {
            local_res8._0_1_ = *(byte *)(param_1 + 0x28c);
            bVar10 = *(byte *)(param_1 + 0x28a);
            bVar11 = *(byte *)(param_1 + 0x28e);
          }
          else {
            bVar10 = FUN_14368a5b0(*(undefined2 *)(param_1 + 0x28a),uVar14);
            local_res8._0_1_ = FUN_14368a5b0(*(undefined2 *)(param_1 + 0x28c),uVar14);
            bVar11 = FUN_14368a5b0(*(undefined2 *)(param_1 + 0x28e),uVar14);
          }
        }
        if (uVar3 != 0) {
          pbVar22 = (byte *)(lVar18 + 2);
          uVar24 = uVar23;
          do {
            if (((int)uVar23 < (int)(uint)*(ushort *)(param_1 + 0x268)) &&
               (bVar1 = *(byte *)(uVar24 + *(longlong *)(param_1 + 0x300)), bVar1 != 0xff)) {
              if (bVar1 != 0) {
                uVar20 = (ushort)*(byte *)((ulonglong)pbVar22[-2] + *(longlong *)(param_1 + 0x2d8))
                         * (ushort)bVar1 + (0xff - (ushort)bVar1) * (ushort)bVar10 + 0x80;
                pbVar22[-2] = *(byte *)((ulonglong)((uint)(uVar20 >> 8) + (uint)uVar20 >> 8 & 0xff)
                                       + *(longlong *)(param_1 + 0x2d0));
                bVar1 = *(byte *)(*(longlong *)(param_1 + 0x300) + uVar24);
                uVar20 = (ushort)*(byte *)((ulonglong)pbVar22[-1] + *(longlong *)(param_1 + 0x2d8))
                         * (ushort)bVar1 + (0xff - (ushort)bVar1) * (ushort)(byte)local_res8 + 0x80;
                pbVar22[-1] = *(byte *)((ulonglong)((uint)(uVar20 >> 8) + (uint)uVar20 >> 8 & 0xff)
                                       + *(longlong *)(param_1 + 0x2d0));
                bVar1 = *(byte *)(*(longlong *)(param_1 + 0x300) + uVar24);
                uVar20 = (ushort)*(byte *)((ulonglong)*pbVar22 + *(longlong *)(param_1 + 0x2d8)) *
                         (ushort)bVar1 + (0xff - (ushort)bVar1) * (ushort)bVar11 + 0x80;
                lVar18 = *(longlong *)(param_1 + 0x2d0);
                uVar17 = (ulonglong)((uint)(uVar20 >> 8) + (uint)uVar20 >> 8 & 0xff);
                goto LAB_14369100e;
              }
              *(undefined2 *)(pbVar22 + -2) = local_res18;
              *pbVar22 = bVar9;
            }
            else {
              pbVar22[-2] = *(byte *)((ulonglong)pbVar22[-2] + *(longlong *)(param_1 + 0x2c0));
              pbVar22[-1] = *(byte *)((ulonglong)pbVar22[-1] + *(longlong *)(param_1 + 0x2c0));
              uVar17 = (ulonglong)*pbVar22;
              lVar18 = *(longlong *)(param_1 + 0x2c0);
LAB_14369100e:
              *pbVar22 = *(byte *)(uVar17 + lVar18);
            }
            uVar23 = (ulonglong)((int)uVar23 + 1);
            uVar24 = uVar24 + 1;
            pbVar22 = pbVar22 + 3;
          } while ((longlong)uVar24 < (longlong)(ulonglong)uVar3);
        }
        *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xffffdf7f;
      }
      else {
        cVar2 = *(char *)(param_1 + 0x280);
        if (cVar2 == '\x01') {
          uVar14 = *(undefined4 *)(param_1 + 0x2b8);
        }
        else if (cVar2 == '\x02') {
          uVar14 = FUN_14368a850(*(undefined4 *)(param_1 + 0x2b4));
          uVar15 = FUN_14368a8b0(*(undefined4 *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b8));
        }
        else {
          if (cVar2 != '\x03') {
                    /* WARNING: Subroutine does not return */
            FUN_143693c80(param_1,"invalid background gamma type");
          }
          uVar14 = FUN_14368a850(*(undefined4 *)(param_1 + 0x284));
          uVar15 = FUN_14368a8b0(*(undefined4 *)(param_1 + 0x284),*(undefined4 *)(param_1 + 0x2b8));
        }
        iVar13 = FUN_14368a640(uVar14);
        iVar16 = FUN_14368a640(uVar15);
        if (iVar13 != 0) {
          uVar12 = FUN_14368a610(param_1,*(undefined2 *)(param_1 + 0x290),uVar14);
          *(undefined2 *)(param_1 + 0x29a) = uVar12;
        }
        if (iVar16 != 0) {
          uVar12 = FUN_14368a610(param_1,*(undefined2 *)(param_1 + 0x290),uVar15);
          *(undefined2 *)(param_1 + 0x290) = uVar12;
        }
        sVar4 = *(short *)(param_1 + 0x28a);
        if (((sVar4 == *(short *)(param_1 + 0x28c)) && (sVar4 == *(short *)(param_1 + 0x28e))) &&
           (sVar5 = *(short *)(param_1 + 0x290), sVar4 == sVar5)) {
          uVar12 = *(undefined2 *)(param_1 + 0x29a);
          *(undefined2 *)(param_1 + 0x298) = uVar12;
          *(undefined2 *)(param_1 + 0x296) = uVar12;
          *(undefined2 *)(param_1 + 0x294) = uVar12;
          *(short *)(param_1 + 0x28e) = sVar5;
          *(short *)(param_1 + 0x28c) = sVar5;
          *(short *)(param_1 + 0x28a) = sVar5;
          *(undefined1 *)(param_1 + 0x280) = 1;
        }
        else {
          if (iVar13 != 0) {
            uVar12 = FUN_14368a610(param_1,sVar4,uVar14);
            *(undefined2 *)(param_1 + 0x294) = uVar12;
            uVar12 = FUN_14368a610(param_1,*(undefined2 *)(param_1 + 0x28c),uVar14);
            *(undefined2 *)(param_1 + 0x296) = uVar12;
            uVar12 = FUN_14368a610(param_1,*(undefined2 *)(param_1 + 0x28e),uVar14);
            *(undefined2 *)(param_1 + 0x298) = uVar12;
          }
          if (iVar16 != 0) {
            uVar12 = FUN_14368a610(param_1,*(undefined2 *)(param_1 + 0x28a),uVar15);
            *(undefined2 *)(param_1 + 0x28a) = uVar12;
            uVar12 = FUN_14368a610(param_1,*(undefined2 *)(param_1 + 0x28c),uVar15);
            *(undefined2 *)(param_1 + 0x28c) = uVar12;
            uVar12 = FUN_14368a610(param_1,*(undefined2 *)(param_1 + 0x28e),uVar15);
            *(undefined2 *)(param_1 + 0x28e) = uVar12;
          }
          *(undefined1 *)(param_1 + 0x280) = 1;
        }
      }
    }
    else if ((*(char *)(param_1 + 0x26f) == '\x03') &&
            ((uVar6 >> 0xc & 1) == 0 || (uVar6 & 0x600000) == 0)) {
      uVar3 = *(ushort *)(param_1 + 0x260);
      if ((ulonglong)uVar3 != 0) {
        pbVar22 = (byte *)(*(longlong *)(param_1 + 600) + 2);
        do {
          uVar23 = uVar23 + 1;
          pbVar22[-2] = *(byte *)((ulonglong)pbVar22[-2] + *(longlong *)(param_1 + 0x2c0));
          pbVar22[-1] = *(byte *)((ulonglong)pbVar22[-1] + *(longlong *)(param_1 + 0x2c0));
          *pbVar22 = *(byte *)((ulonglong)*pbVar22 + *(longlong *)(param_1 + 0x2c0));
          pbVar22 = pbVar22 + 3;
        } while ((longlong)uVar23 < (longlong)(ulonglong)uVar3);
      }
      *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xffffdfff;
    }
  }
  lVar18 = 0;
  if (((*(uint *)(param_1 + 0x15c) & 0x1008) == 8) && (*(char *)(param_1 + 0x26f) == '\x03')) {
    bVar9 = *(byte *)(param_1 + 0x2f0);
    uVar23 = (ulonglong)*(ushort *)(param_1 + 0x260);
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xfffffff7;
    if ((-(uint)bVar9 + 7 < 7) && (lVar19 = lVar18, lVar21 = lVar18, uVar23 != 0)) {
      do {
        lVar21 = lVar21 + 1;
        pbVar22 = (byte *)(*(longlong *)(param_1 + 600) + -3 + lVar19 + 3);
        *pbVar22 = *pbVar22 >> ((char)-(uint)bVar9 + 8U & 0x1f);
        lVar19 = lVar19 + 3;
      } while (lVar21 < (longlong)uVar23);
    }
    bVar9 = *(byte *)(param_1 + 0x2f1);
    if ((-(uint)bVar9 + 7 < 7) && (lVar19 = lVar18, lVar21 = lVar18, uVar23 != 0)) {
      do {
        lVar21 = lVar21 + 1;
        pbVar22 = (byte *)(*(longlong *)(param_1 + 600) + -2 + lVar19 + 3);
        *pbVar22 = *pbVar22 >> ((char)-(uint)bVar9 + 8U & 0x1f);
        lVar19 = lVar19 + 3;
      } while (lVar21 < (longlong)uVar23);
    }
    bVar9 = *(byte *)(param_1 + 0x2f2);
    if ((-(uint)bVar9 + 7 < 7) && (lVar19 = lVar18, uVar23 != 0)) {
      do {
        lVar18 = lVar18 + 1;
        pbVar22 = (byte *)(*(longlong *)(param_1 + 600) + -1 + lVar19 + 3);
        *pbVar22 = *pbVar22 >> ((char)-(uint)bVar9 + 8U & 0x1f);
        lVar19 = lVar19 + 3;
      } while (lVar18 < (longlong)uVar23);
    }
  }
  return;
}



// FUNCTION 1436913b0 FUN_1436913b0 body=208 status=ok
// SIG undefined FUN_1436913b0(void)

void FUN_1436913b0(longlong param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  
  if ((*(byte *)(param_1 + 0x26f) & 4) == 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xff7fffff;
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffffdfff;
    if (*(short *)(param_1 + 0x268) == 0) {
      *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xfffffe7f;
    }
  }
  if (((*(uint *)(param_1 + 0x15c) & 0x1100) == 0x1100) && ((*(byte *)(param_1 + 0x26f) & 2) == 0))
  {
    cVar1 = *(char *)(param_1 + 0x270);
    sVar3 = *(short *)(param_1 + 0x290);
    sVar2 = *(short *)(param_1 + 0x310);
    if (cVar1 == '\x01') {
      sVar3 = sVar3 * 0xff;
      sVar2 = sVar2 * 0xff;
    }
    else if (cVar1 == '\x02') {
      sVar3 = sVar3 * 0x55;
      sVar2 = sVar2 * 0x55;
    }
    else if (cVar1 == '\x04') {
      sVar3 = sVar3 * 0x11;
      sVar2 = sVar2 * 0x11;
    }
    *(short *)(param_1 + 0x28e) = sVar3;
    *(short *)(param_1 + 0x28c) = sVar3;
    *(short *)(param_1 + 0x28a) = sVar3;
    if ((*(uint *)(param_1 + 0x15c) >> 0x19 & 1) == 0) {
      *(short *)(param_1 + 0x30e) = sVar2;
      *(short *)(param_1 + 0x30c) = sVar2;
      *(short *)(param_1 + 0x30a) = sVar2;
    }
  }
  return;
}



// FUNCTION 143691480 FUN_143691480 body=554 status=ok
// SIG undefined FUN_143691480(void)

void FUN_143691480(longlong param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((*(uint *)(param_1 + 0x15c) >> 0xc & 1) != 0) {
    if (*(byte *)((longlong)param_2 + 0x25) == 3) {
      sVar2 = *(short *)(param_1 + 0x268);
      *(undefined1 *)(param_2 + 9) = 8;
      uVar3 = 2;
      if (sVar2 != 0) {
        uVar3 = 6;
      }
      *(undefined2 *)((longlong)param_2 + 0x22) = 0;
      *(undefined1 *)((longlong)param_2 + 0x25) = uVar3;
      if (*(longlong *)(param_1 + 600) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1,"Palette is NULL in indexed image");
      }
    }
    else {
      if ((*(short *)(param_1 + 0x268) != 0) && ((*(uint *)(param_1 + 0x15c) >> 0x19 & 1) != 0)) {
        *(byte *)((longlong)param_2 + 0x25) = *(byte *)((longlong)param_2 + 0x25) | 4;
      }
      if ((byte)param_2[9] < 8) {
        *(undefined1 *)(param_2 + 9) = 8;
      }
      *(undefined2 *)((longlong)param_2 + 0x22) = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x15c) & 0x80) != 0) {
    *(undefined8 *)((longlong)param_2 + 0x72) = *(undefined8 *)(param_1 + 0x288);
    *(undefined2 *)((longlong)param_2 + 0x7a) = *(undefined2 *)(param_1 + 0x290);
  }
  param_2[0xd] = *(uint *)(param_1 + 0x2b4);
  if ((char)param_2[9] == '\x10') {
    if ((*(uint *)(param_1 + 0x15c) & 0x4000000) != 0) {
      *(undefined1 *)(param_2 + 9) = 8;
    }
    if ((*(uint *)(param_1 + 0x15c) & 0x400) != 0) {
      *(undefined1 *)(param_2 + 9) = 8;
    }
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x4000) != 0) {
    *(byte *)((longlong)param_2 + 0x25) = *(byte *)((longlong)param_2 + 0x25) | 2;
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x600000) != 0) {
    *(byte *)((longlong)param_2 + 0x25) = *(byte *)((longlong)param_2 + 0x25) & 0xfd;
  }
  if (((((*(byte *)(param_1 + 0x15c) & 0x40) != 0) &&
       ((*(char *)((longlong)param_2 + 0x25) - 2U & 0xfb) == 0)) &&
      (*(longlong *)(param_1 + 0x390) != 0)) && ((char)param_2[9] == '\b')) {
    *(undefined1 *)((longlong)param_2 + 0x25) = 3;
  }
  if ((((*(uint *)(param_1 + 0x15c) & 0x200) != 0) && ((char)param_2[9] == '\b')) &&
     (*(char *)((longlong)param_2 + 0x25) != '\x03')) {
    *(undefined1 *)(param_2 + 9) = 0x10;
  }
  if (((*(byte *)(param_1 + 0x15c) & 4) != 0) && ((byte)param_2[9] < 8)) {
    *(undefined1 *)(param_2 + 9) = 8;
  }
  bVar1 = *(byte *)((longlong)param_2 + 0x25);
  if ((bVar1 == 3) || ((bVar1 & 2) == 0)) {
    *(undefined1 *)((longlong)param_2 + 0x29) = 1;
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x29) = 3;
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x40000) != 0) {
    *(undefined2 *)((longlong)param_2 + 0x22) = 0;
    *(byte *)((longlong)param_2 + 0x25) = bVar1 & 0xfb;
  }
  bVar1 = *(byte *)((longlong)param_2 + 0x25);
  if ((bVar1 & 4) != 0) {
    *(char *)((longlong)param_2 + 0x29) = *(char *)((longlong)param_2 + 0x29) + '\x01';
  }
  if ((((*(uint *)(param_1 + 0x15c) & 0x8000) != 0) && ((bVar1 & 0xfd) == 0)) &&
     (*(char *)((longlong)param_2 + 0x29) = *(char *)((longlong)param_2 + 0x29) + '\x01',
     (*(uint *)(param_1 + 0x15c) & 0x1000000) != 0)) {
    *(byte *)((longlong)param_2 + 0x25) = bVar1 | 4;
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x100000) != 0) {
    if (*(char *)(param_1 + 0x150) != '\0') {
      *(char *)(param_2 + 9) = *(char *)(param_1 + 0x150);
    }
    cVar4 = *(char *)((longlong)param_2 + 0x29);
    if (*(char *)(param_1 + 0x151) != '\0') {
      cVar4 = *(char *)(param_1 + 0x151);
    }
    *(char *)((longlong)param_2 + 0x29) = cVar4;
  }
  bVar1 = (char)param_2[9] * *(char *)((longlong)param_2 + 0x29);
  *(byte *)((longlong)param_2 + 0x2a) = bVar1;
  if (7 < bVar1) {
    lVar5 = (ulonglong)(bVar1 >> 3) * (ulonglong)*param_2;
    *(longlong *)(param_2 + 4) = lVar5;
    *(longlong *)(param_1 + 0x248) = lVar5;
    return;
  }
  uVar6 = (ulonglong)bVar1 * (ulonglong)*param_2 + 7 >> 3;
  *(ulonglong *)(param_2 + 4) = uVar6;
  *(ulonglong *)(param_1 + 0x248) = uVar6;
  return;
}



// FUNCTION 1436916b0 FUN_1436916b0 body=23 status=ok
// SIG undefined FUN_1436916b0(void)

void FUN_1436916b0(longlong param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x2001000;
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffffffbf;
  }
  return;
}



// FUNCTION 1436916d0 FUN_1436916d0 body=33 status=ok
// SIG undefined FUN_1436916d0(void)

void FUN_1436916d0(longlong param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x2001200;
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffffffbf;
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x4000;
  }
  return;
}



// FUNCTION 143691700 FUN_143691700 body=23 status=ok
// SIG undefined FUN_143691700(void)

void FUN_143691700(longlong param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x1000;
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffffffbf;
  }
  return;
}



// FUNCTION 143691720 FUN_143691720 body=70 status=ok
// SIG undefined FUN_143691720(void)

void FUN_143691720(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_14368d070(param_1,param_3);
  uVar2 = FUN_14368d070(param_1,param_2);
  FUN_143691770(param_1,uVar2,uVar1);
  return;
}



// FUNCTION 143691770 FUN_143691770 body=62 status=ok
// SIG undefined FUN_143691770(void)

void FUN_143691770(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  if (param_1 != 0) {
    uVar1 = FUN_143691930(param_1,param_2,1);
    uVar2 = FUN_143691930(param_1,uVar3 & 0xffffffff,0);
    *(undefined4 *)(param_1 + 0x2b4) = uVar2;
    *(undefined4 *)(param_1 + 0x2b8) = uVar1;
  }
  return;
}



// FUNCTION 1436917b0 FUN_1436917b0 body=41 status=ok
// SIG undefined FUN_1436917b0(void)

void FUN_1436917b0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_143691700();
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x4000;
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffffffbf;
  }
  return;
}



// FUNCTION 1436917e0 FUN_1436917e0 body=249 status=ok
// SIG undefined FUN_1436917e0(void)

ulonglong FUN_1436917e0(longlong param_1,int param_2,int param_3,int param_4)

{
  ulonglong in_RAX;
  
  if (param_1 != 0) {
    if (param_2 == 1) {
      *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x600000;
    }
    else if (param_2 == 2) {
      *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x400000;
    }
    else {
      if (param_2 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1,"invalid error action to rgb_to_gray");
      }
      *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x200000;
    }
    if (*(char *)(param_1 + 0x26f) == '\x03') {
      *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x1000;
    }
    if ((-1 < param_3) && (-1 < param_4)) {
      if (param_3 + param_4 < 0x186a1) {
        *(undefined1 *)(param_1 + 0x3f2) = 1;
        *(short *)(param_1 + 0x3f4) = (short)((uint)(param_3 * 0x8000) / 100000);
        *(short *)(param_1 + 0x3f6) = (short)((uint)(param_4 * 0x8000) / 100000);
        return (ulonglong)(uint)(param_4 * 0x8000) * 0x4f8b588f & 0xffffffff;
      }
      in_RAX = FUN_1436941c0(param_1,"ignoring out of range rgb_to_gray coefficients");
    }
    if ((*(short *)(param_1 + 0x3f4) == 0) && (*(short *)(param_1 + 0x3f6) == 0)) {
      *(undefined4 *)(param_1 + 0x3f4) = 0x5b8a1b38;
    }
  }
  return in_RAX;
}



// FUNCTION 1436918e0 FUN_1436918e0 body=16 status=ok
// SIG undefined FUN_1436918e0(void)

void FUN_1436918e0(longlong param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x4000000;
  }
  return;
}



// FUNCTION 1436918f0 FUN_1436918f0 body=16 status=ok
// SIG undefined FUN_1436918f0(void)

void FUN_1436918f0(longlong param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x400;
  }
  return;
}



// FUNCTION 143691900 FUN_143691900 body=16 status=ok
// SIG undefined FUN_143691900(void)

void FUN_143691900(longlong param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x40000;
  }
  return;
}



// FUNCTION 143691910 FUN_143691910 body=18 status=ok
// SIG undefined FUN_143691910(void)

void FUN_143691910(longlong param_1)

{
  *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x2001000;
  *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffffffbf;
  return;
}



// FUNCTION 143691930 FUN_143691930 body=73 status=ok
// SIG undefined FUN_143691930(void)

int FUN_143691930(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == -1) || (param_2 == -100000)) {
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x1000;
    iVar1 = 0xb18f;
    if (param_3 != 0) {
      iVar1 = 220000;
    }
    return iVar1;
  }
  if ((param_2 != -2) && (param_2 != -50000)) {
    return param_2;
  }
  iVar1 = 0x10175;
  if (param_3 != 0) {
    iVar1 = 0x250ac;
  }
  return iVar1;
}



// FUNCTION 143691980 FUN_143691980 body=245 status=ok
// SIG undefined FUN_143691980(void)

void FUN_143691980(uint *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  bVar1 = (byte)param_1[4];
  if ((bVar1 & 2) != 0) {
    uVar3 = *param_1;
    uVar4 = (ulonglong)uVar3;
    if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      if (bVar1 == 2) {
        if (uVar3 != 0) {
          do {
            uVar2 = *param_2;
            *param_2 = param_2[2];
            param_2[2] = uVar2;
            param_2 = param_2 + 3;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          return;
        }
      }
      else if ((bVar1 == 6) && (uVar3 != 0)) {
        do {
          uVar2 = *param_2;
          *param_2 = param_2[2];
          param_2[2] = uVar2;
          param_2 = param_2 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        return;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x11) == '\x10') {
      if (bVar1 == 2) {
        if (uVar3 != 0) {
          param_2 = param_2 + 1;
          do {
            uVar2 = param_2[-1];
            param_2[-1] = param_2[3];
            param_2[3] = uVar2;
            uVar2 = *param_2;
            *param_2 = param_2[4];
            param_2[4] = uVar2;
            param_2 = param_2 + 6;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          return;
        }
      }
      else if ((bVar1 == 6) && (uVar3 != 0)) {
        param_2 = param_2 + 1;
        do {
          uVar2 = param_2[-1];
          param_2[-1] = param_2[3];
          param_2[3] = uVar2;
          uVar2 = *param_2;
          *param_2 = param_2[4];
          param_2[4] = uVar2;
          param_2 = param_2 + 8;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143691a80 FUN_143691a80 body=452 status=ok
// SIG undefined FUN_143691a80(void)

void FUN_143691a80(longlong param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  sbyte sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  bVar1 = *(byte *)((longlong)param_2 + 0x11);
  if (((int)(uint)*(ushort *)(param_1 + 0x260) < 1 << (bVar1 & 0x1f)) &&
     (*(ushort *)(param_1 + 0x260) != 0)) {
    pbVar2 = *(byte **)(param_1 + 0x220);
    pbVar3 = pbVar2 + *(longlong *)(param_2 + 2);
    uVar6 = -((uint)*(byte *)((longlong)param_2 + 0x13) * *param_2) & 7;
    if (bVar1 == 1) {
      for (; pbVar2 < pbVar3; pbVar3 = pbVar3 + -1) {
        if (*pbVar3 >> (sbyte)uVar6 != 0) {
          *(undefined4 *)(param_1 + 0x264) = 1;
        }
        uVar6 = 0;
      }
    }
    else if (bVar1 == 2) {
      if (pbVar2 < pbVar3) {
        uVar7 = *(uint *)(param_1 + 0x264);
        do {
          sVar4 = (sbyte)uVar6;
          uVar6 = *pbVar3 >> sVar4 & 3;
          if ((int)uVar7 < (int)uVar6) {
            *(uint *)(param_1 + 0x264) = uVar6;
            uVar7 = uVar6;
          }
          uVar6 = (byte)((*pbVar3 >> sVar4) >> 2) & 3;
          if ((int)uVar7 < (int)uVar6) {
            *(uint *)(param_1 + 0x264) = uVar6;
            uVar7 = uVar6;
          }
          uVar6 = (byte)((*pbVar3 >> sVar4) >> 4) & 3;
          if ((int)uVar7 < (int)uVar6) {
            *(uint *)(param_1 + 0x264) = uVar6;
            uVar7 = uVar6;
          }
          uVar6 = (uint)(byte)((*pbVar3 >> sVar4) >> 6);
          if ((int)uVar7 < (int)uVar6) {
            *(uint *)(param_1 + 0x264) = uVar6;
            uVar7 = uVar6;
          }
          uVar6 = 0;
          pbVar3 = pbVar3 + -1;
        } while (pbVar2 < pbVar3);
        return;
      }
    }
    else if (bVar1 == 4) {
      if (pbVar2 < pbVar3) {
        uVar7 = *(uint *)(param_1 + 0x264);
        do {
          uVar5 = *pbVar3 >> (sbyte)uVar6 & 0xf;
          if ((int)uVar7 < (int)uVar5) {
            *(uint *)(param_1 + 0x264) = uVar5;
            uVar7 = uVar5;
          }
          uVar6 = (uint)(byte)((*pbVar3 >> (sbyte)uVar6) >> 4);
          if ((int)uVar7 < (int)uVar6) {
            *(uint *)(param_1 + 0x264) = uVar6;
            uVar7 = uVar6;
          }
          uVar6 = 0;
          pbVar3 = pbVar3 + -1;
        } while (pbVar2 < pbVar3);
        return;
      }
    }
    else if ((bVar1 == 8) && (pbVar2 < pbVar3)) {
      uVar6 = *(uint *)(param_1 + 0x264);
      do {
        if ((int)uVar6 < (int)(uint)*pbVar3) {
          uVar6 = (uint)*pbVar3;
          *(uint *)(param_1 + 0x264) = uVar6;
        }
        pbVar3 = pbVar3 + -1;
      } while (pbVar2 < pbVar3);
      return;
    }
  }
  return;
}



// FUNCTION 143691c50 FUN_143691c50 body=208 status=ok
// SIG undefined FUN_143691c50(void)

void FUN_143691c50(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = *(ulonglong *)(param_1 + 8);
    uVar2 = 0;
    if (uVar1 != 0) {
      if (0x1f < uVar1) {
        do {
          uVar2 = uVar2 + 0x20;
          *param_2 = ~*param_2;
          param_2[1] = ~param_2[1];
          param_2[2] = ~param_2[2];
          param_2[3] = ~param_2[3];
          param_2 = param_2 + 4;
        } while (uVar2 < (uVar1 & 0xffffffffffffffe0));
      }
      if (uVar2 < uVar1) {
        lVar3 = uVar1 - uVar2;
        do {
          *(byte *)param_2 = ~(byte)*param_2;
          param_2 = (ulonglong *)((longlong)param_2 + 1);
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x10) == '\x04') {
    if (*(char *)(param_1 + 0x11) == '\b') {
      if (*(longlong *)(param_1 + 8) != 0) {
        lVar3 = (*(longlong *)(param_1 + 8) - 1U >> 1) + 1;
        do {
          *(byte *)param_2 = ~(byte)*param_2;
          param_2 = (ulonglong *)((longlong)param_2 + 2);
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        return;
      }
    }
    else if ((*(char *)(param_1 + 0x11) == '\x10') && (*(longlong *)(param_1 + 8) != 0)) {
      pbVar4 = (byte *)((longlong)param_2 + 1);
      lVar3 = (*(longlong *)(param_1 + 8) - 1U >> 2) + 1;
      do {
        pbVar4[-1] = ~pbVar4[-1];
        *pbVar4 = ~*pbVar4;
        pbVar4 = pbVar4 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 143691d20 FUN_143691d20 body=105 status=ok
// SIG undefined FUN_143691d20(void)

void FUN_143691d20(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  undefined *puVar5;
  
  bVar2 = *(byte *)(param_1 + 0x11);
  if (bVar2 < 8) {
    if (bVar2 == 1) {
      puVar5 = &DAT_145b619e0;
    }
    else if (bVar2 == 2) {
      puVar5 = &DAT_145b61ae0;
    }
    else {
      if (bVar2 != 4) {
        return;
      }
      puVar5 = &DAT_145b61be0;
    }
    uVar4 = *(ulonglong *)(param_1 + 8);
    if (param_2 + *(ulonglong *)(param_1 + 8) < param_2) {
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      pbVar3 = param_2;
      do {
        pbVar1 = pbVar3 + 1;
        *pbVar3 = puVar5[*pbVar3];
        pbVar3 = pbVar1;
      } while ((ulonglong)((longlong)pbVar1 - (longlong)param_2) < uVar4);
    }
  }
  return;
}



// FUNCTION 143691d90 FUN_143691d90 body=456 status=ok
// SIG undefined FUN_143691d90(void)

void FUN_143691d90(longlong param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  
  puVar7 = param_2 + *(longlong *)(param_1 + 8);
  puVar2 = param_2;
  if (*(char *)(param_1 + 0x12) == '\x02') {
    if (*(char *)(param_1 + 0x11) == '\b') {
      if (param_3 == 0) {
        puVar2 = param_2 + 1;
        lVar3 = 2;
      }
      else {
        lVar3 = 1;
      }
      puVar4 = param_2 + lVar3;
      uVar5 = 0;
      uVar6 = (ulonglong)(puVar7 + (1 - (longlong)puVar4)) >> 1;
      if (puVar7 < puVar4) {
        uVar6 = uVar5;
      }
      if (uVar6 != 0) {
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 2;
          *puVar2 = uVar1;
          uVar5 = uVar5 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar5 < uVar6);
      }
      *(undefined1 *)(param_1 + 0x13) = 8;
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\x10') {
        return;
      }
      if (param_3 == 0) {
        puVar2 = param_2 + 2;
        lVar3 = 4;
      }
      else {
        lVar3 = 2;
      }
      for (puVar4 = param_2 + lVar3; puVar4 < puVar7; puVar4 = puVar4 + 4) {
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar2 = puVar2 + 2;
      }
      *(undefined1 *)(param_1 + 0x13) = 0x10;
    }
    *(undefined1 *)(param_1 + 0x12) = 1;
    if (*(char *)(param_1 + 0x10) == '\x04') {
      *(undefined1 *)(param_1 + 0x10) = 0;
      *(longlong *)(param_1 + 8) = (longlong)puVar2 - (longlong)param_2;
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0x12) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x11) == '\b') {
      if (param_3 == 0) {
        puVar2 = param_2 + 3;
        lVar3 = 4;
      }
      else {
        lVar3 = 1;
      }
      for (puVar4 = param_2 + lVar3; puVar4 < puVar7; puVar4 = puVar4 + 4) {
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar2[2] = puVar4[2];
        puVar2 = puVar2 + 3;
      }
      *(undefined1 *)(param_1 + 0x13) = 0x18;
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\x10') {
        return;
      }
      if (param_3 == 0) {
        puVar2 = param_2 + 6;
        lVar3 = 8;
      }
      else {
        lVar3 = 2;
      }
      for (puVar4 = param_2 + lVar3; puVar4 < puVar7; puVar4 = puVar4 + 8) {
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar2[2] = puVar4[2];
        puVar2[3] = puVar4[3];
        puVar2[4] = puVar4[4];
        puVar2[5] = puVar4[5];
        puVar2 = puVar2 + 6;
      }
      *(undefined1 *)(param_1 + 0x13) = 0x30;
    }
    *(undefined1 *)(param_1 + 0x12) = 3;
    if (*(char *)(param_1 + 0x10) == '\x06') {
      *(undefined1 *)(param_1 + 0x10) = 2;
    }
  }
  *(longlong *)(param_1 + 8) = (longlong)puVar2 - (longlong)param_2;
  return;
}



// FUNCTION 143691f60 FUN_143691f60 body=55 status=ok
// SIG undefined FUN_143691f60(void)

void FUN_143691f60(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((*(char *)((longlong)param_1 + 0x11) == '\x10') &&
     (uVar2 = (uint)*(byte *)((longlong)param_1 + 0x12) * *param_1, uVar2 != 0)) {
    uVar3 = (ulonglong)uVar2;
    do {
      uVar1 = *param_2;
      *param_2 = param_2[1];
      param_2[1] = uVar1;
      param_2 = param_2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 143691fa0 FUN_143691fa0 body=34 status=ok
// SIG undefined FUN_143691fa0(void)

void FUN_143691fa0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_143691fe0();
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x1000000;
  }
  return;
}



// FUNCTION 143691fd0 FUN_143691fd0 body=13 status=ok
// SIG undefined FUN_143691fd0(void)

void FUN_143691fd0(longlong param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 1;
  }
  return;
}



// FUNCTION 143691fe0 FUN_143691fe0 body=89 status=ok
// SIG undefined FUN_143691fe0(void)

void FUN_143691fe0(longlong param_1,undefined2 param_2,int param_3)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x8000;
    *(undefined2 *)(param_1 + 0x27e) = param_2;
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x80;
    }
    else {
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffffff7f;
    }
    if (*(char *)(param_1 + 0x26f) == '\x02') {
      *(undefined1 *)(param_1 + 0x274) = 4;
    }
    if ((*(char *)(param_1 + 0x26f) == '\0') && (7 < *(byte *)(param_1 + 0x270))) {
      *(undefined1 *)(param_1 + 0x274) = 2;
    }
  }
  return;
}



// FUNCTION 143692040 FUN_143692040 body=33 status=ok
// SIG undefined FUN_143692040(void)

undefined8 FUN_143692040(longlong param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x26c) != '\0')) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 2;
    return 7;
  }
  return 1;
}



// FUNCTION 143692070 FUN_143692070 body=16 status=ok
// SIG undefined FUN_143692070(void)

void FUN_143692070(longlong param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x80000;
  }
  return;
}



// FUNCTION 143692080 FUN_143692080 body=13 status=ok
// SIG undefined FUN_143692080(void)

void FUN_143692080(longlong param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x20;
  }
  return;
}



// FUNCTION 143692090 FUN_143692090 body=29 status=ok
// SIG undefined FUN_143692090(void)

void FUN_143692090(longlong param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x270) < 8)) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 4;
    *(undefined1 *)(param_1 + 0x271) = 8;
  }
  return;
}



// FUNCTION 1436920b0 FUN_1436920b0 body=25 status=ok
// SIG undefined FUN_1436920b0(void)

void FUN_1436920b0(longlong param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x270) < 8)) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x10000;
  }
  return;
}



// FUNCTION 1436920d0 FUN_1436920d0 body=31 status=ok
// SIG undefined FUN_1436920d0(void)

void FUN_1436920d0(longlong param_1,undefined4 *param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 8;
    *(undefined4 *)(param_1 + 0x2f5) = *param_2;
    *(undefined1 *)(param_1 + 0x2f9) = *(undefined1 *)(param_2 + 1);
  }
  return;
}



// FUNCTION 1436920f0 FUN_1436920f0 body=22 status=ok
// SIG undefined FUN_1436920f0(void)

void FUN_1436920f0(longlong param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x270) == '\x10')) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x10;
  }
  return;
}



// FUNCTION 143692110 FUN_143692110 body=16 status=ok
// SIG undefined FUN_143692110(void)

void FUN_143692110(longlong param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x20000;
  }
  return;
}



// FUNCTION 143692140 FUN_143692140 body=75 status=ok
// SIG undefined FUN_143692140(void)

void FUN_143692140(longlong param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if ((param_1 != 0) &&
     (sVar1 = _guard_xfg_dispatch_icall_nop(param_2,1,param_3,*(FILE **)(param_1 + 0x130)),
     sVar1 != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Write Error");
  }
  return;
}



// FUNCTION 143692190 FUN_143692190 body=16 status=ok
// SIG undefined FUN_143692190(void)

void FUN_143692190(longlong param_1)

{
  if (*(code **)(param_1 + 0x2a0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014369219c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x2a0))();
    return;
  }
  return;
}



// FUNCTION 1436921a0 FUN_1436921a0 body=88 status=ok
// SIG undefined FUN_1436921a0(void)

void FUN_1436921a0(longlong param_1,undefined8 param_2,code *param_3,undefined1 *param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x130) = param_2;
    pcVar1 = FUN_143692140;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    *(code **)(param_1 + 0x120) = pcVar1;
    puVar2 = &LAB_143692120;
    if (param_4 != (undefined1 *)0x0) {
      puVar2 = param_4;
    }
    *(undefined1 **)(param_1 + 0x2a0) = puVar2;
    if (*(longlong *)(param_1 + 0x128) != 0) {
      *(undefined8 *)(param_1 + 0x128) = 0;
      FUN_1436941c0(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
      return;
    }
  }
  return;
}



// FUNCTION 143692200 FUN_143692200 body=35 status=ok
// SIG undefined FUN_143692200(void)

void FUN_143692200(longlong param_1)

{
  if (*(code **)(param_1 + 0x120) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143692214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x120))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Call to NULL write function");
}



// FUNCTION 143692230 FUN_143692230 body=75 status=ok
// SIG undefined FUN_143692230(void)

void FUN_143692230(longlong param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if ((param_1 != 0) &&
     (sVar1 = _guard_xfg_dispatch_icall_nop(param_2,1,param_3,*(FILE **)(param_1 + 0x130)),
     sVar1 != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Read Error");
  }
  return;
}



// FUNCTION 143692280 FUN_143692280 body=35 status=ok
// SIG undefined FUN_143692280(void)

void FUN_143692280(longlong param_1)

{
  if (*(code **)(param_1 + 0x128) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143692294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x128))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Call to NULL read function");
}



// FUNCTION 1436922b0 FUN_1436922b0 body=91 status=ok
// SIG undefined FUN_1436922b0(void)

void FUN_1436922b0(longlong param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x130) = param_2;
    pcVar1 = FUN_143692230;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    *(code **)(param_1 + 0x128) = pcVar1;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      *(undefined8 *)(param_1 + 0x120) = 0;
      FUN_1436941c0(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
    }
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  return;
}



// FUNCTION 143692310 FUN_143692310 body=53 status=ok
// SIG undefined FUN_143692310(void)

void * FUN_143692310(undefined8 param_1,size_t param_2)

{
  void *_Dst;
  
  _Dst = (void *)FUN_1436924c0();
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,param_2);
  }
  return _Dst;
}



// FUNCTION 143692350 FUN_143692350 body=10 status=ok
// SIG undefined FUN_143692350(void)

void FUN_143692350(undefined8 param_1)

{
  FUN_143692360(param_1,0,0);
  return;
}



// FUNCTION 143692360 FUN_143692360 body=154 status=ok
// SIG undefined FUN_143692360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_143692360(int param_1,code *param_2,undefined8 param_3)

{
  void *_Dst;
  size_t _Size;
  undefined1 auStack_4e8 [32];
  undefined1 local_4c8 [1024];
  undefined8 local_c8;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  if (param_1 == 2) {
    _Size = 0x138;
  }
  else {
    if (param_1 != 1) {
      return (void *)0x0;
    }
    _Size = 0x4b0;
  }
  if (param_2 == (code *)0x0) {
    _Dst = _guard_xfg_dispatch_icall_nop(_Size);
  }
  else {
    local_c8 = param_3;
    _Dst = (void *)(*param_2)(local_4c8);
  }
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
  }
  return _Dst;
}



// FUNCTION 143692400 FUN_143692400 body=10 status=ok
// SIG undefined FUN_143692400(void)

void FUN_143692400(undefined8 param_1)

{
  FUN_143692410(param_1,0,0);
  return;
}



// FUNCTION 143692410 FUN_143692410 body=109 status=ok
// SIG undefined FUN_143692410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143692410(void *param_1,code *param_2,undefined8 param_3)

{
  undefined1 auStack_4e8 [32];
  undefined1 local_4c8 [1024];
  undefined8 local_c8;
  ulonglong local_18;
  
  if (param_1 != (void *)0x0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
    if (param_2 != (code *)0x0) {
      local_c8 = param_3;
      (*param_2)(local_4c8,param_1);
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1);
  }
  return;
}



// FUNCTION 143692480 FUN_143692480 body=50 status=ok
// SIG undefined FUN_143692480(void)

void FUN_143692480(longlong param_1,void *param_2)

{
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    return;
  }
  if (*(code **)(param_1 + 0x410) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143692496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x410))();
    return;
  }
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    _guard_xfg_dispatch_icall_nop(param_2);
    return;
  }
  return;
}



// FUNCTION 1436924c0 FUN_1436924c0 body=82 status=ok
// SIG undefined FUN_1436924c0(void)

longlong FUN_1436924c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    lVar1 = 0;
  }
  else {
    if (*(code **)(param_1 + 0x408) == (code *)0x0) {
      lVar1 = FUN_143692520();
    }
    else {
      lVar1 = (**(code **)(param_1 + 0x408))();
    }
    if ((lVar1 == 0) && ((*(uint *)(param_1 + 0x158) & 0x100000) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"Out of Memory");
    }
  }
  return lVar1;
}



// FUNCTION 143692520 FUN_143692520 body=21 status=ok
// SIG undefined FUN_143692520(void)

void * FUN_143692520(longlong param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    pvVar1 = _guard_xfg_dispatch_icall_nop(param_2);
    return pvVar1;
  }
  return (void *)0x0;
}



// FUNCTION 143692540 FUN_143692540 body=67 status=ok
// SIG undefined FUN_143692540(void)

undefined8 FUN_143692540(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x158);
  *(uint *)(param_1 + 0x158) = uVar1 | 0x100000;
  uVar2 = FUN_1436924c0();
  *(uint *)(param_1 + 0x158) = uVar1;
  return uVar2;
}



// FUNCTION 143692590 FUN_143692590 body=27 status=ok
// SIG undefined FUN_143692590(void)

void FUN_143692590(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x400) = param_2;
    *(undefined8 *)(param_1 + 0x408) = param_3;
    *(undefined8 *)(param_1 + 0x410) = param_4;
  }
  return;
}



// FUNCTION 1436925b0 FUN_1436925b0 body=117 status=ok
// SIG undefined FUN_1436925b0(void)

uint FUN_1436925b0(byte *param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar1 = true;
  if (param_1 == (byte *)0x0) {
    *param_2 = 0;
    return 0;
  }
  bVar2 = *param_1;
  if (bVar2 != 0) {
    do {
      if (0x4e < uVar3) break;
      param_1 = param_1 + 1;
      if (((byte)(bVar2 - 0x21) < 0x5e) || (0xa0 < bVar2)) {
        *param_2 = bVar2;
        uVar3 = uVar3 + 1;
        param_2 = param_2 + 1;
        bVar1 = false;
      }
      else if (!bVar1) {
        *param_2 = 0x20;
        bVar1 = true;
        param_2 = param_2 + 1;
        uVar3 = uVar3 + 1;
      }
      bVar2 = *param_1;
    } while (bVar2 != 0);
    if ((uVar3 != 0) && (bVar1)) {
      uVar3 = uVar3 - 1;
      param_2 = param_2 + -1;
    }
  }
  *param_2 = 0;
  return uVar3;
}



// FUNCTION 143692630 FUN_143692630 body=243 status=ok
// SIG undefined FUN_143692630(void)

void FUN_143692630(longlong param_1,uint *param_2,uint param_3,uint param_4,undefined1 param_5,
                  undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  byte bVar1;
  ulonglong uVar2;
  
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    param_2[1] = param_4;
    *(undefined1 *)((longlong)param_2 + 0x26) = param_8;
    *(undefined1 *)(param_2 + 10) = param_7;
    *(undefined1 *)((longlong)param_2 + 0x25) = param_6;
    *(undefined1 *)((longlong)param_2 + 0x27) = param_9;
    *param_2 = param_3;
    *(undefined1 *)(param_2 + 9) = param_5;
    FUN_143689900(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    bVar1 = *(byte *)((longlong)param_2 + 0x25);
    if ((bVar1 == 3) || ((bVar1 & 2) == 0)) {
      *(undefined1 *)((longlong)param_2 + 0x29) = 1;
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x29) = 3;
    }
    if ((bVar1 & 4) != 0) {
      *(char *)((longlong)param_2 + 0x29) = *(char *)((longlong)param_2 + 0x29) + '\x01';
    }
    bVar1 = (char)param_2[9] * *(char *)((longlong)param_2 + 0x29);
    *(byte *)((longlong)param_2 + 0x2a) = bVar1;
    if (bVar1 < 8) {
      uVar2 = (ulonglong)bVar1 * (ulonglong)param_3 + 7 >> 3;
    }
    else {
      uVar2 = (ulonglong)(bVar1 >> 3) * (ulonglong)param_3;
    }
    *(ulonglong *)(param_2 + 4) = uVar2;
  }
  return;
}



// FUNCTION 143692730 FUN_143692730 body=225 status=ok
// SIG undefined FUN_143692730(void)

void FUN_143692730(longlong param_1,longlong param_2,void *param_3,int param_4)

{
  int iVar1;
  void *_Dst;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(char *)(param_2 + 0x25) == '\x03') {
      iVar1 = 1 << (*(byte *)(param_2 + 0x24) & 0x1f);
    }
    else {
      iVar1 = 0x100;
    }
    if ((param_4 < 0) || (iVar1 < param_4)) {
      if (*(char *)(param_2 + 0x25) == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1,"Invalid palette length");
      }
      FUN_1436941c0();
    }
    else {
      FUN_14368a100(param_1,param_2,0x1000,0);
      _Dst = (void *)FUN_143692310(param_1,0x300);
      *(void **)(param_1 + 600) = _Dst;
      _guard_xfg_dispatch_icall_nop(_Dst,param_3,(longlong)param_4 * 3);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 600);
      *(short *)(param_1 + 0x260) = (short)param_4;
      *(uint *)(param_2 + 0xe4) = *(uint *)(param_2 + 0xe4) | 0x1000;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
      *(short *)(param_2 + 0x20) = (short)param_4;
    }
  }
  return;
}



// FUNCTION 143692820 FUN_143692820 body=34 status=ok
// SIG undefined FUN_143692820(void)

void FUN_143692820(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined8 *)(param_2 + 0x72) = *param_3;
    uVar1 = *(undefined2 *)(param_3 + 1);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
    *(undefined2 *)(param_2 + 0x7a) = uVar1;
  }
  return;
}



// FUNCTION 143692850 FUN_143692850 body=242 status=ok
// SIG undefined FUN_143692850(void)

void FUN_143692850(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     (iVar1 = FUN_143689af0(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                           ), iVar1 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
    *(undefined4 *)(param_2 + 0xa8) = param_5;
    *(undefined4 *)(param_2 + 0xa0) = param_3;
    *(undefined4 *)(param_2 + 0xa4) = param_4;
    *(undefined4 *)(param_2 + 0xac) = param_6;
    *(undefined4 *)(param_2 + 0xb0) = param_7;
    *(undefined4 *)(param_2 + 0xb4) = param_8;
    *(undefined4 *)(param_2 + 0xb8) = param_9;
    *(undefined4 *)(param_2 + 0xbc) = param_10;
  }
  return;
}



// FUNCTION 143692950 FUN_143692950 body=43 status=ok
// SIG undefined FUN_143692950(void)

void FUN_143692950(longlong param_1,longlong param_2,int param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 - 0x10U < 0x2540be31) {
      *(int *)(param_2 + 0x34) = param_3;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
      return;
    }
    FUN_1436941c0(param_1,"Out of range gamma value ignored");
    return;
  }
  return;
}



// FUNCTION 143692980 FUN_143692980 body=229 status=ok
// SIG undefined FUN_143692980(void)

void FUN_143692980(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((ushort)(*(short *)(param_2 + 0x20) - 1U) < 0x100) {
      FUN_14368a100(param_1);
      lVar2 = FUN_143692540(param_1,0x200);
      *(longlong *)(param_1 + 0x3a0) = lVar2;
      if (lVar2 != 0) {
        uVar4 = 0;
        uVar6 = uVar4;
        if (*(short *)(param_2 + 0x20) != 0) {
          do {
            uVar5 = (int)uVar6 + 1;
            *(undefined2 *)(uVar4 + *(longlong *)(param_1 + 0x3a0)) =
                 *(undefined2 *)(uVar4 + param_3);
            uVar4 = uVar4 + 2;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < (int)(uint)*(ushort *)(param_2 + 0x20));
        }
        uVar1 = *(undefined8 *)(param_1 + 0x3a0);
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
        *(uint *)(param_2 + 0xe4) = *(uint *)(param_2 + 0xe4) | 8;
        *(undefined8 *)(param_2 + 0x98) = uVar1;
        return;
      }
      pcVar3 = "Insufficient memory for hIST chunk data";
    }
    else {
      pcVar3 = "Invalid palette size, hIST allocation skipped";
    }
    FUN_1436941c0(param_1,pcVar3);
  }
  return;
}



// FUNCTION 143692a70 FUN_143692a70 body=382 status=ok
// SIG undefined FUN_143692a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143692a70(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  void *param_5,uint param_6)

{
  uint uVar1;
  void *_Dst;
  void *_Dst_00;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [80];
  ulonglong local_48;
  
  if (param_1 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
    if (((param_2 != 0) && (param_3 != 0)) && (param_5 != (void *)0x0)) {
      uVar1 = FUN_1436925b0(param_3,local_98);
      if (uVar1 == 0) {
        FUN_1436941c0(param_1,"iCCP: invalid keyword");
      }
      else {
        _Dst = (void *)FUN_143692540(param_1,(ulonglong)uVar1 + 1);
        if (_Dst == (void *)0x0) {
          FUN_1436941c0(param_1,"Insufficient memory to process iCCP chunk");
        }
        else {
          _guard_xfg_dispatch_icall_nop(_Dst,local_98,(ulonglong)uVar1 + 1);
          _Dst_00 = (void *)FUN_143692540(param_1,(ulonglong)param_6);
          if (_Dst_00 == (void *)0x0) {
            FUN_143692480(param_1,_Dst);
            FUN_1436941c0(param_1,"Insufficient memory to process iCCP profile");
          }
          else {
            _guard_xfg_dispatch_icall_nop(_Dst_00,param_5,(ulonglong)param_6);
            FUN_14368a100(param_1,param_2,0x10);
            *(uint *)(param_2 + 0xe4) = *(uint *)(param_2 + 0xe4) | 0x10;
            *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
            *(uint *)(param_2 + 0x108) = param_6;
            *(void **)(param_2 + 0xf8) = _Dst;
            *(void **)(param_2 + 0x100) = _Dst_00;
            *(undefined1 *)(param_2 + 0x10c) = param_4;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143692bf0 FUN_143692bf0 body=40 status=ok
// SIG undefined FUN_143692bf0(void)

void FUN_143692bf0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
    *(undefined1 *)(param_2 + 0x84) = param_5;
    *(undefined4 *)(param_2 + 0x7c) = param_3;
    *(undefined4 *)(param_2 + 0x80) = param_4;
  }
  return;
}



// FUNCTION 143692c20 FUN_143692c20 body=699 status=ok
// SIG undefined FUN_143692c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143692c20(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,uint param_6,int param_7,void *param_8,longlong *param_9)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong *local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  if (param_1 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
    local_a0 = param_9;
    if (param_2 != 0) {
      local_a8 = param_4;
      uVar2 = FUN_1436925b0(param_3);
      if (uVar2 == 0) {
        FUN_1436941c0(param_1,"pCAL: invalid purpose keyword");
      }
      else {
        if (3 < param_6) {
                    /* WARNING: Subroutine does not return */
          FUN_143693c80(param_1,"Invalid pCAL equation type");
        }
        uVar11 = 0;
        uVar9 = uVar11;
        if (0 < param_7) {
          do {
            lVar6 = -1;
            do {
              lVar6 = lVar6 + 1;
            } while (*(char *)(*param_9 + lVar6) != '\0');
            iVar3 = FUN_143689e70();
            if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_143693c80(param_1,"Invalid format for pCAL parameter");
            }
            uVar8 = (int)uVar9 + 1;
            param_9 = param_9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while ((int)uVar8 < param_7);
        }
        pvVar4 = (void *)FUN_143692540(param_1,(ulonglong)uVar2 + 1);
        *(void **)(param_2 + 0xc0) = pvVar4;
        if (pvVar4 == (void *)0x0) {
          pcVar7 = "Insufficient memory for pCAL purpose";
        }
        else {
          _guard_xfg_dispatch_icall_nop(pvVar4,local_98,(ulonglong)uVar2 + 1);
          *(undefined4 *)(param_2 + 200) = local_a8;
          *(undefined4 *)(param_2 + 0xcc) = param_5;
          *(char *)(param_2 + 0xe0) = (char)param_6;
          *(char *)(param_2 + 0xe1) = (char)param_7;
          lVar6 = -1;
          do {
            lVar10 = lVar6;
            lVar6 = lVar10 + 1;
          } while (*(char *)((longlong)param_8 + lVar10 + 1) != '\0');
          pvVar4 = (void *)FUN_143692540(param_1,lVar10 + 2);
          *(void **)(param_2 + 0xd0) = pvVar4;
          if (pvVar4 == (void *)0x0) {
            pcVar7 = "Insufficient memory for pCAL units";
          }
          else {
            _guard_xfg_dispatch_icall_nop(pvVar4,param_8,lVar10 + 2);
            pvVar4 = (void *)FUN_143692540(param_1);
            *(void **)(param_2 + 0xd8) = pvVar4;
            if (pvVar4 != (void *)0x0) {
              _guard_xfg_dispatch_icall_nop(pvVar4,0,(longlong)(param_7 + 1) << 3);
              plVar1 = local_a0;
              uVar9 = uVar11;
              if (0 < param_7) {
                do {
                  lVar6 = -1;
                  do {
                    lVar10 = lVar6;
                    lVar6 = lVar10 + 1;
                  } while (*(char *)(*(longlong *)(uVar11 + (longlong)plVar1) + 1 + lVar10) != '\0')
                  ;
                  uVar5 = FUN_143692540(param_1,lVar10 + 2);
                  *(undefined8 *)(uVar11 + *(longlong *)(param_2 + 0xd8)) = uVar5;
                  pvVar4 = *(void **)(uVar11 + *(longlong *)(param_2 + 0xd8));
                  if (pvVar4 == (void *)0x0) {
                    pcVar7 = "Insufficient memory for pCAL parameter";
                    goto LAB_143692d2e;
                  }
                  _guard_xfg_dispatch_icall_nop
                            (pvVar4,*(void **)(uVar11 + (longlong)plVar1),lVar10 + 2);
                  uVar2 = (int)uVar9 + 1;
                  uVar11 = uVar11 + 8;
                  uVar9 = (ulonglong)uVar2;
                } while ((int)uVar2 < param_7);
              }
              *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
              *(uint *)(param_2 + 0xe4) = *(uint *)(param_2 + 0xe4) | 0x80;
              return;
            }
            pcVar7 = "Insufficient memory for pCAL params";
          }
        }
LAB_143692d2e:
        FUN_1436941c0(param_1,pcVar7);
      }
    }
  }
  return;
}



// FUNCTION 143692ee0 FUN_143692ee0 body=43 status=ok
// SIG undefined FUN_143692ee0(void)

void FUN_143692ee0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
    *(undefined1 *)(param_2 + 0x90) = param_5;
    *(undefined4 *)(param_2 + 0x88) = param_3;
    *(undefined4 *)(param_2 + 0x8c) = param_4;
  }
  return;
}



// FUNCTION 143692f10 FUN_143692f10 body=85 status=ok
// SIG undefined FUN_143692f10(void)

void FUN_143692f10(longlong param_1,longlong param_2,longlong param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(longlong *)(param_2 + 0x130) != 0) && (*(longlong *)(param_2 + 0x130) != param_3)) {
      FUN_14368a100(param_1,param_2,0x40);
    }
    *(longlong *)(param_2 + 0x130) = param_3;
    if (param_3 != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
    }
  }
  return;
}



// FUNCTION 143692f70 FUN_143692f70 body=29 status=ok
// SIG undefined FUN_143692f70(void)

void FUN_143692f70(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x58) = *param_3;
    uVar1 = *(undefined1 *)(param_3 + 1);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
    *(undefined1 *)(param_2 + 0x5c) = uVar1;
  }
  return;
}



// FUNCTION 143692f90 FUN_143692f90 body=415 status=ok
// SIG undefined FUN_143692f90(void)

void FUN_143692f90(longlong param_1,longlong param_2,int param_3,char *param_4,char *param_5)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar5;
  longlong lVar4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  if (1 < param_3 - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Invalid sCAL unit");
  }
  if (param_4 != (char *)0x0) {
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (param_4[lVar3] != '\0');
    if (((lVar3 != 0) && (*param_4 != '-')) && (iVar1 = FUN_143689e70(param_4,lVar3), iVar1 != 0)) {
      lVar3 = -1;
      if (param_5 != (char *)0x0) {
        do {
          lVar5 = lVar3;
          lVar3 = lVar5 + 1;
        } while (param_5[lVar3] != '\0');
        if (((lVar3 != 0) && (*param_5 != '-')) &&
           (iVar1 = FUN_143689e70(param_5,lVar3), iVar1 != 0)) {
          *(char *)(param_2 + 0x11c) = (char)param_3;
          pvVar2 = (void *)FUN_143692540(param_1,lVar4 + 2);
          *(void **)(param_2 + 0x120) = pvVar2;
          if (pvVar2 != (void *)0x0) {
            _guard_xfg_dispatch_icall_nop(pvVar2,param_4,lVar4 + 2);
            pvVar2 = (void *)FUN_143692540(param_1,lVar5 + 2);
            *(void **)(param_2 + 0x128) = pvVar2;
            if (pvVar2 != (void *)0x0) {
              _guard_xfg_dispatch_icall_nop(pvVar2,param_5,lVar5 + 2);
              *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000;
              *(uint *)(param_2 + 0xe4) = *(uint *)(param_2 + 0xe4) | 0x100;
              return;
            }
            FUN_143692480(param_1,*(undefined8 *)(param_2 + 0x120));
            *(undefined8 *)(param_2 + 0x120) = 0;
          }
          FUN_1436941c0(param_1,"Memory allocation failed while processing sCAL");
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"Invalid sCAL height");
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Invalid sCAL width");
}



// FUNCTION 143693140 FUN_143693140 body=591 status=ok
// SIG undefined FUN_143693140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143693140(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  if (param_1 != 0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
    lVar4 = (longlong)param_4;
    if (param_2 != 0) {
      if (((param_4 < 0) || (0x7fffffff - *(int *)(param_2 + 0x118) < param_4)) ||
         (_Dst = (void *)FUN_143692540(param_1,(longlong)(*(int *)(param_2 + 0x118) + param_4) << 5)
         , _Dst == (void *)0x0)) {
        FUN_1436941c0(param_1,"No memory for sPLT palettes");
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (_Dst,*(void **)(param_2 + 0x110),(longlong)*(int *)(param_2 + 0x118) << 5);
        FUN_143692480(param_1,*(undefined8 *)(param_2 + 0x110));
        *(undefined8 *)(param_2 + 0x110) = 0;
        local_b8 = 0;
        iVar2 = 0;
        if (0 < param_4) {
          lVar7 = 0;
          piVar6 = (int *)(param_3 + 0x18);
          do {
            puVar5 = (undefined8 *)((*(int *)(param_2 + 0x118) + lVar7) * 0x20 + (longlong)_Dst);
            uVar1 = FUN_1436925b0(*(undefined8 *)(piVar6 + -6),local_a8);
            if (uVar1 == 0) {
              FUN_1436941c0(param_1,"sPLT: invalid keyword");
            }
            else {
              pvVar3 = (void *)FUN_143692540(param_1,(ulonglong)uVar1 + 1);
              *puVar5 = pvVar3;
              if (pvVar3 == (void *)0x0) {
                FUN_1436941c0(param_1,"Out of memory while processing sPLT chunk");
              }
              else {
                _guard_xfg_dispatch_icall_nop(pvVar3,local_a8,(ulonglong)uVar1 + 1);
                pvVar3 = (void *)FUN_143692540(param_1,(longlong)*piVar6 * 10);
                puVar5[2] = pvVar3;
                if (pvVar3 == (void *)0x0) {
                  FUN_1436941c0(param_1,"Out of memory while processing sPLT chunk");
                  FUN_143692480(param_1,*puVar5);
                  *puVar5 = 0;
                }
                else {
                  _guard_xfg_dispatch_icall_nop
                            (pvVar3,*(void **)(piVar6 + -2),(longlong)*piVar6 * 10);
                  *(int *)(puVar5 + 3) = *piVar6;
                  *(char *)(puVar5 + 1) = (char)piVar6[-4];
                  local_b8 = local_b8 + 1;
                  lVar7 = lVar7 + 1;
                }
              }
            }
            piVar6 = piVar6 + 8;
            lVar4 = lVar4 + -1;
            iVar2 = local_b8;
          } while (lVar4 != 0);
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
        *(uint *)(param_2 + 0xe4) = *(uint *)(param_2 + 0xe4) | 0x20;
        *(void **)(param_2 + 0x110) = _Dst;
        *(int *)(param_2 + 0x118) = iVar2;
      }
    }
  }
  return;
}



// FUNCTION 143693390 FUN_143693390 body=22 status=ok
// SIG undefined FUN_143693390(void)

void FUN_143693390(longlong param_1,longlong param_2,undefined1 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
    *(undefined1 *)(param_2 + 0x38) = param_3;
  }
  return;
}



// FUNCTION 1436933b0 FUN_1436933b0 body=130 status=ok
// SIG undefined FUN_1436933b0(void)

void FUN_1436933b0(longlong param_1,longlong param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_143693390();
    FUN_143692950(param_1,param_2,0xb18f);
    FUN_143692850(param_1,param_2,0x7a26,0x8084,64000,33000,30000,60000,15000,6000);
  }
  return;
}



// FUNCTION 143693440 FUN_143693440 body=93 status=ok
// SIG undefined FUN_143693440(void)

void FUN_143693440(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(param_1 + 0x154) & 0x200) != 0)) {
    return;
  }
  if ((((byte)(*(char *)((longlong)param_3 + 2) - 1U) < 0xc) &&
      ((byte)(*(char *)((longlong)param_3 + 3) - 1U) < 0x1f)) &&
     ((*(byte *)((longlong)param_3 + 4) < 0x18 &&
      ((*(byte *)((longlong)param_3 + 5) < 0x3c && (*(byte *)((longlong)param_3 + 6) < 0x3d)))))) {
    uVar1 = *param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
    *(undefined8 *)(param_2 + 0x50) = uVar1;
    return;
  }
  FUN_1436941c0(param_1,"Ignoring invalid time value");
  return;
}



// FUNCTION 1436934a0 FUN_1436934a0 body=312 status=ok
// SIG undefined FUN_1436934a0(void)

void FUN_1436934a0(longlong param_1,longlong param_2,void *param_3,uint param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_4 < 0x101) {
      if (param_3 != (void *)0x0) {
        FUN_14368a100(param_1,param_2,0x2000,0);
        uVar1 = FUN_1436924c0(param_1,0x100);
        *(undefined8 *)(param_2 + 0x60) = uVar1;
        *(undefined8 *)(param_1 + 0x300) = uVar1;
        if (param_4 - 1 < 0x100) {
          _guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 0x60),param_3,(longlong)(int)param_4);
        }
      }
      if (param_5 != (undefined8 *)0x0) {
        if (*(byte *)(param_2 + 0x24) < 0x10) {
          uVar2 = (1 << (*(byte *)(param_2 + 0x24) & 0x1f)) - 1;
          if (((*(char *)(param_2 + 0x25) == '\0') && (uVar2 < *(ushort *)(param_5 + 1))) ||
             ((*(char *)(param_2 + 0x25) == '\x02' &&
              (((uVar2 < *(ushort *)((longlong)param_5 + 2) ||
                (uVar2 < *(ushort *)((longlong)param_5 + 4))) ||
               (uVar2 < *(ushort *)((longlong)param_5 + 6))))))) {
            FUN_1436941c0(param_1,"tRNS chunk has out-of-range samples for bit_depth");
          }
        }
        *(undefined8 *)(param_2 + 0x68) = *param_5;
        if (param_4 == 0) {
          param_4 = 1;
        }
        *(undefined2 *)(param_2 + 0x70) = *(undefined2 *)(param_5 + 1);
      }
      *(short *)(param_2 + 0x22) = (short)param_4;
      if (param_4 != 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
        *(uint *)(param_2 + 0xe4) = *(uint *)(param_2 + 0xe4) | 0x2000;
      }
    }
    else {
      FUN_1436941c0(param_1,"Ignoring invalid num_trans value");
    }
  }
  return;
}



// FUNCTION 1436935e0 FUN_1436935e0 body=865 status=ok
// SIG undefined FUN_1436935e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1436935e0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  longlong lVar3;
  void *pvVar4;
  char *pcVar5;
  size_t _Size;
  size_t _Size_00;
  int *piVar6;
  int iVar7;
  ulonglong _Size_01;
  longlong *plVar8;
  ulonglong _Size_02;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f4;
  undefined1 local_e8 [80];
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    local_f4 = param_4;
    if ((param_4 < 0) || (iVar1 = *(int *)(param_2 + 0x3c), 0x7ffffff7 - iVar1 < param_4)) {
      FUN_1436941c0(param_1,"too many text chunks");
    }
    else {
      iVar7 = *(int *)(param_2 + 0x40);
      if (iVar7 < iVar1 + param_4) {
        pvVar4 = *(void **)(param_2 + 0x48);
        if (pvVar4 == (void *)0x0) {
          *(undefined4 *)(param_2 + 0x3c) = 0;
          *(int *)(param_2 + 0x40) = param_4 + 8;
          lVar3 = FUN_143692540(param_1,(longlong)(param_4 + 8) * 0x38);
          *(longlong *)(param_2 + 0x48) = lVar3;
          if (lVar3 == 0) {
            *(int *)(param_2 + 0x3c) = iVar1;
            *(int *)(param_2 + 0x40) = iVar7;
            return 1;
          }
          *(uint *)(param_2 + 0xe4) = *(uint *)(param_2 + 0xe4) | 0x4000;
        }
        else {
          iVar1 = iVar1 + param_4 + 8;
          *(int *)(param_2 + 0x40) = iVar1;
          _Dst = (void *)FUN_143692540(param_1,(longlong)iVar1 * 0x38);
          *(void **)(param_2 + 0x48) = _Dst;
          if (_Dst == (void *)0x0) {
            *(int *)(param_2 + 0x40) = iVar7;
            *(void **)(param_2 + 0x48) = pvVar4;
            return 1;
          }
          _guard_xfg_dispatch_icall_nop(_Dst,pvVar4,(longlong)iVar7 * 0x38);
          FUN_143692480(param_1,pvVar4);
        }
      }
      local_f8 = 0;
      if (0 < param_4) {
        plVar8 = (longlong *)(param_3 + 0x28);
        do {
          iVar1 = local_f8;
          iVar7 = 1;
          _Size_00 = 0;
          piVar6 = (int *)((longlong)*(int *)(param_2 + 0x3c) * 0x38 + *(longlong *)(param_2 + 0x48)
                          );
          local_f8 = iVar1;
          if (plVar8[-4] != 0) {
            if ((int)plVar8[-5] + 1U < 4) {
              uVar2 = FUN_1436925b0(plVar8[-4],local_e8);
              _Size_02 = (ulonglong)uVar2;
              if (uVar2 != 0) {
                _Size_01 = _Size_00;
                if (0 < (int)plVar8[-5]) {
                  if (*plVar8 != 0) {
                    uVar2 = FUN_1436925b0(*plVar8,local_98);
                    _Size_01 = (ulonglong)uVar2;
                  }
                  if (plVar8[1] != 0) {
                    _Size_00 = 0xffffffffffffffff;
                    do {
                      _Size_00 = _Size_00 + 1;
                    } while (*(char *)(plVar8[1] + _Size_00) != '\0');
                  }
                }
                pcVar5 = (char *)plVar8[-3];
                if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
                  _Size = 0;
                  iVar1 = -1;
                  if (0 < (int)plVar8[-5]) {
                    iVar1 = iVar7;
                  }
                }
                else {
                  _Size = 0xffffffffffffffff;
                  do {
                    _Size = _Size + 1;
                  } while (pcVar5[_Size] != '\0');
                  iVar1 = (int)plVar8[-5];
                }
                *piVar6 = iVar1;
                pvVar4 = (void *)FUN_143692540(param_1,_Size_00 + 4 + _Size + _Size_01 + _Size_02);
                *(void **)(piVar6 + 2) = pvVar4;
                if (pvVar4 == (void *)0x0) {
                  return 1;
                }
                _guard_xfg_dispatch_icall_nop(pvVar4,local_e8,_Size_02);
                *(undefined1 *)(_Size_02 + *(longlong *)(piVar6 + 2)) = 0;
                if ((int)plVar8[-5] < 1) {
                  piVar6[10] = 0;
                  piVar6[0xb] = 0;
                  pvVar4 = (void *)(*(longlong *)(piVar6 + 2) + 1 + _Size_02);
                  piVar6[0xc] = 0;
                  piVar6[0xd] = 0;
                }
                else {
                  pvVar4 = (void *)(*(longlong *)(piVar6 + 2) + 1 + _Size_02);
                  *(void **)(piVar6 + 10) = pvVar4;
                  _guard_xfg_dispatch_icall_nop(pvVar4,(void *)*plVar8,_Size_01);
                  *(undefined1 *)(_Size_01 + *(longlong *)(piVar6 + 10)) = 0;
                  pvVar4 = (void *)(*(longlong *)(piVar6 + 10) + 1 + _Size_01);
                  *(void **)(piVar6 + 0xc) = pvVar4;
                  _guard_xfg_dispatch_icall_nop(pvVar4,(void *)plVar8[1],_Size_00);
                  *(undefined1 *)(_Size_00 + *(longlong *)(piVar6 + 0xc)) = 0;
                  pvVar4 = (void *)(*(longlong *)(piVar6 + 0xc) + 1 + _Size_00);
                }
                *(void **)(piVar6 + 4) = pvVar4;
                if (_Size != 0) {
                  _guard_xfg_dispatch_icall_nop(pvVar4,(void *)plVar8[-3],_Size);
                }
                *(undefined1 *)(_Size + *(longlong *)(piVar6 + 4)) = 0;
                param_4 = local_f4;
                if (*piVar6 < 1) {
                  *(size_t *)(piVar6 + 6) = _Size;
                  piVar6[8] = 0;
                  piVar6[9] = 0;
                  *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
                }
                else {
                  *(size_t *)(piVar6 + 8) = _Size;
                  piVar6[6] = 0;
                  piVar6[7] = 0;
                  *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
                }
                goto LAB_1436938d2;
              }
              pcVar5 = "invalid text keyword";
            }
            else {
              pcVar5 = "text compression mode is out of range";
            }
            FUN_1436941c0(param_1,pcVar5);
            local_f8 = iVar1;
          }
LAB_1436938d2:
          local_f8 = local_f8 + 1;
          plVar8 = plVar8 + 7;
        } while (local_f8 < param_4);
      }
    }
  }
  return 0;
}



// FUNCTION 143693950 FUN_143693950 body=408 status=ok
// SIG undefined FUN_143693950(void)

void FUN_143693950(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  void *_Dst;
  void *_Dst_00;
  undefined4 *puVar1;
  longlong lVar2;
  size_t *psVar3;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if (((-1 < param_4) && (param_4 <= 0x7fffffff - *(int *)(param_2 + 0xf0))) &&
       (_Dst = (void *)FUN_143692540(param_1,(longlong)(*(int *)(param_2 + 0xf0) + param_4) << 5),
       _Dst != (void *)0x0)) {
      _guard_xfg_dispatch_icall_nop
                (_Dst,*(void **)(param_2 + 0xe8),(longlong)*(int *)(param_2 + 0xf0) << 5);
      FUN_143692480(param_1,*(undefined8 *)(param_2 + 0xe8));
      lVar2 = 0;
      *(undefined8 *)(param_2 + 0xe8) = 0;
      if (0 < param_4) {
        psVar3 = (size_t *)(param_3 + 0x10);
        do {
          puVar1 = (undefined4 *)((*(int *)(param_2 + 0xf0) + lVar2) * 0x20 + (longlong)_Dst);
          *puVar1 = (int)psVar3[-2];
          *(undefined1 *)(puVar1 + 1) = 0;
          *(size_t *)(puVar1 + 4) = *psVar3;
          *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_1 + 0x154);
          if (*psVar3 == 0) {
            *(undefined8 *)(puVar1 + 2) = 0;
          }
          else {
            _Dst_00 = (void *)FUN_143692540(param_1);
            *(void **)(puVar1 + 2) = _Dst_00;
            if (_Dst_00 == (void *)0x0) {
              FUN_1436941c0(param_1,"Out of memory while processing unknown chunk");
              *(undefined8 *)(puVar1 + 4) = 0;
            }
            else {
              _guard_xfg_dispatch_icall_nop(_Dst_00,(void *)psVar3[-1],*psVar3);
            }
          }
          lVar2 = lVar2 + 1;
          psVar3 = psVar3 + 4;
        } while (lVar2 < param_4);
      }
      *(int *)(param_2 + 0xf0) = *(int *)(param_2 + 0xf0) + param_4;
      *(uint *)(param_2 + 0xe4) = *(uint *)(param_2 + 0xe4) | 0x200;
      *(void **)(param_2 + 0xe8) = _Dst;
      return;
    }
    FUN_1436941c0(param_1,"Out of memory while processing unknown chunk");
  }
  return;
}



// FUNCTION 143693af0 FUN_143693af0 body=30 status=ok
// SIG undefined FUN_143693af0(void)

void FUN_143693af0(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x158) & 0x800000) != 0) {
    FUN_1436941c0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80();
}



// FUNCTION 143693b10 FUN_143693b10 body=30 status=ok
// SIG undefined FUN_143693b10(void)

void FUN_143693b10(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x158) & 0x800000) != 0) {
    FUN_143693b70();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693b30();
}



// FUNCTION 143693b30 FUN_143693b30 body=48 status=ok
// SIG undefined FUN_143693b30(void)

void FUN_143693b30(longlong param_1,undefined8 param_2)

{
  undefined1 local_68 [96];
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80();
  }
  FUN_143693d30(param_1,local_68,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,local_68);
}



// FUNCTION 143693b70 FUN_143693b70 body=86 status=ok
// SIG undefined FUN_143693b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143693b70(longlong param_1,undefined1 *param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    FUN_143693d30(param_1,local_78,param_2);
    param_2 = local_78;
  }
  FUN_1436941c0(param_1,param_2);
  return;
}



// FUNCTION 143693bd0 FUN_143693bd0 body=93 status=ok
// SIG undefined FUN_143693bd0(void)

void FUN_143693bd0(undefined8 param_1,char *param_2)

{
  FILE *pFVar1;
  char *pcVar2;
  
  pcVar2 = "undefined";
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  pFVar1 = (FILE *)_guard_xfg_dispatch_icall_nop(2);
  fwprintf(pFVar1,(wchar_t *)"libpng error: %s",pcVar2);
  pFVar1 = (FILE *)_guard_xfg_dispatch_icall_nop(2);
  fwprintf(pFVar1,L"\n");
                    /* WARNING: Subroutine does not return */
  FUN_143694120(param_1,1);
}



// FUNCTION 143693c30 FUN_143693c30 body=67 status=ok
// SIG undefined FUN_143693c30(void)

void FUN_143693c30(undefined8 param_1,undefined8 param_2)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)_guard_xfg_dispatch_icall_nop(2);
  fwprintf(pFVar1,(wchar_t *)"libpng warning: %s",param_2);
  pFVar1 = (FILE *)_guard_xfg_dispatch_icall_nop(2);
  fwprintf(pFVar1,L"\n");
  return;
}



// FUNCTION 143693c80 FUN_143693c80 body=47 status=ok
// SIG undefined FUN_143693c80(void)

void FUN_143693c80(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x108) != (code *)0x0)) {
    (**(code **)(param_1 + 0x108))();
  }
  FUN_143693bd0(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 143693cb0 FUN_143693cb0 body=115 status=ok
// SIG undefined FUN_143693cb0(void)

void FUN_143693cb0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  char local_68 [104];
  
  iVar2 = 0;
  builtin_strncpy(local_68,"fixed point overflow in ",0x18);
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
    do {
      if (*pcVar1 == '\0') break;
      pcVar1[(longlong)(local_68 + (0x18 - (longlong)param_2))] = *pcVar1;
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while ((longlong)pcVar1 - (longlong)param_2 < 0x3f);
  }
  if ((longlong)iVar2 + 0x18U < 0x58) {
    local_68[(longlong)iVar2 + 0x18] = '\0';
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(0x65786966,local_68);
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}



// FUNCTION 143693d30 FUN_143693d30 body=297 status=ok
// SIG undefined FUN_143693d30(void)

void FUN_143693d30(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar2 = *(uint *)(param_1 + 0x210);
  uVar9 = 0;
  iVar7 = 0x18;
  uVar3 = uVar9;
  uVar10 = uVar9;
  do {
    uVar8 = uVar2 >> ((byte)iVar7 & 0x1f);
    iVar7 = iVar7 + -8;
    uVar6 = uVar8 & 0xff;
    if ((uVar6 - 0x41 < 0x3a) && (5 < uVar6 - 0x5b)) {
      *(char *)(uVar10 + param_2) = (char)uVar8;
      iVar4 = 1;
    }
    else {
      *(undefined1 *)(uVar10 + param_2) = 0x5b;
      *(char *)(uVar10 + 1 + param_2) =
           "0123456789ABCDEFfixed point overflow in "[(longlong)(ulonglong)uVar6 >> 4];
      *(char *)(uVar10 + 2 + param_2) = "0123456789ABCDEFfixed point overflow in "[uVar8 & 0xf];
      uVar10 = uVar10 + 3;
      iVar4 = 4;
      *(undefined1 *)(uVar10 + param_2) = 0x5d;
    }
    uVar6 = (int)uVar3 + iVar4;
    uVar3 = (ulonglong)uVar6;
    uVar10 = uVar10 + 1;
  } while (-1 < iVar7);
  if (param_3 == 0) {
    *(undefined1 *)((int)uVar6 + param_2) = 0;
  }
  else {
    *(undefined1 *)((int)uVar6 + param_2) = 0x3a;
    iVar7 = uVar6 + 2;
    *(undefined1 *)((int)(uVar6 + 1) + param_2) = 0x20;
    lVar5 = (longlong)iVar7;
    do {
      if (*(char *)(uVar9 + param_3) == '\0') break;
      *(char *)(lVar5 + param_2) = *(char *)(uVar9 + param_3);
      cVar1 = *(char *)(uVar9 + 1 + param_3);
      if (cVar1 == '\0') {
        iVar7 = iVar7 + 1;
        break;
      }
      *(char *)(lVar5 + 1 + param_2) = cVar1;
      cVar1 = *(char *)(uVar9 + 2 + param_3);
      if (cVar1 == '\0') {
        iVar7 = iVar7 + 2;
        break;
      }
      *(char *)(lVar5 + 2 + param_2) = cVar1;
      uVar9 = uVar9 + 3;
      lVar5 = lVar5 + 3;
      iVar7 = iVar7 + 3;
    } while ((longlong)uVar9 < 0x3f);
    *(undefined1 *)(iVar7 + param_2) = 0;
  }
  return;
}



// FUNCTION 143693e60 FUN_143693e60 body=358 status=ok
// SIG undefined FUN_143693e60(void)

char * FUN_143693e60(char *param_1,longlong param_2,int param_3,ulonglong param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = 0;
  pcVar5 = (char *)(param_2 + -1);
  bVar1 = false;
  *pcVar5 = '\0';
  iVar3 = 1;
  if (pcVar5 <= param_1) {
    return pcVar5;
  }
  do {
    if ((param_4 == 0) && (iVar3 <= iVar6)) {
      return pcVar5;
    }
    if (param_3 == 1) {
LAB_143693f43:
      uVar4 = param_4 / 10;
      cVar2 = "0123456789ABCDEF"[param_4 % 10];
LAB_143693f65:
      pcVar5 = pcVar5 + -1;
      *pcVar5 = cVar2;
LAB_143693f68:
      if (param_3 == 5) goto LAB_143693f71;
    }
    else {
      if (param_3 == 2) {
        iVar3 = 2;
        goto LAB_143693f43;
      }
      if (param_3 == 3) {
LAB_143693f2b:
        uVar4 = param_4 >> 4;
        cVar2 = "0123456789ABCDEF"[(uint)param_4 & 0xf];
        goto LAB_143693f65;
      }
      if (param_3 == 4) {
        iVar3 = 2;
        goto LAB_143693f2b;
      }
      if (param_3 != 5) {
        uVar4 = 0;
        goto LAB_143693f68;
      }
      iVar3 = 5;
      if ((bVar1) || (param_4 != (param_4 / 10) * 10)) {
        pcVar5 = pcVar5 + -1;
        bVar1 = true;
        *pcVar5 = "0123456789ABCDEF"[param_4 % 10];
      }
      uVar4 = param_4 / 10;
LAB_143693f71:
      if (iVar6 == 4) {
        if (pcVar5 <= param_1) {
          return pcVar5;
        }
        if (bVar1) {
          pcVar5 = pcVar5 + -1;
          *pcVar5 = '.';
        }
        else if (uVar4 == 0) {
          pcVar5 = pcVar5 + -1;
          *pcVar5 = '0';
        }
      }
    }
    iVar6 = iVar6 + 1;
    param_4 = uVar4;
    if (pcVar5 <= param_1) {
      return pcVar5;
    }
  } while( true );
}



// FUNCTION 143693fd0 FUN_143693fd0 body=304 status=ok
// SIG undefined FUN_143693fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143693fd0(undefined8 param_1,longlong param_2,char *param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  char cVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  char cVar7;
  undefined1 auStack_f8 [32];
  char local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar2 = 0;
  do {
    cVar7 = *param_3;
    if (cVar7 == '\0') break;
    if (((param_2 == 0) || (cVar7 != '@')) || (pcVar1 = param_3 + 1, param_3[1] == '\0')) {
LAB_1436940a1:
      local_d8[uVar2] = cVar7;
      uVar2 = uVar2 + 1;
    }
    else {
      cVar7 = *pcVar1;
      iVar6 = 0;
      param_3 = pcVar1;
      if (cVar7 != '1') {
        cVar3 = '1';
        puVar5 = &DAT_145b62190;
        do {
          if (cVar3 == '\0') break;
          cVar3 = puVar5[1];
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + 1;
        } while (cVar3 != cVar7);
        if (7 < iVar6) goto LAB_1436940a1;
      }
      pcVar4 = (char *)((longlong)iVar6 * 0x20 + param_2);
      pcVar1 = pcVar4 + 0x20;
      for (; ((uVar2 < 0xbf && (*pcVar4 != '\0')) && (pcVar4 < pcVar1)); pcVar4 = pcVar4 + 1) {
        local_d8[uVar2] = *pcVar4;
        uVar2 = uVar2 + 1;
      }
    }
    param_3 = param_3 + 1;
  } while (uVar2 < 0xbf);
  if (uVar2 < 0xc0) {
    local_d8[uVar2] = '\0';
    FUN_1436941c0(param_1,local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}



// FUNCTION 143694110 FUN_143694110 body=16 status=ok
// SIG undefined FUN_143694110(void)

undefined8 FUN_143694110(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x118);
}



// FUNCTION 143694120 FUN_143694120 body=28 status=ok
// SIG undefined FUN_143694120(void)

void FUN_143694120(longlong param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x100) != (code *)0x0)) {
    (**(code **)(param_1 + 0x100))();
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop();
}



// FUNCTION 143694140 FUN_143694140 body=62 status=ok
// SIG undefined FUN_143694140(void)

ulonglong FUN_143694140(longlong param_1,ulonglong param_2,ulonglong param_3,char *param_4)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = param_3;
  if ((param_1 != 0) && (param_3 < param_2)) {
    if ((param_4 != (char *)0x0) && (cVar1 = *param_4, cVar1 != '\0')) {
      do {
        if (param_2 - 1 <= uVar2) break;
        *(char *)(param_1 + uVar2) = cVar1;
        uVar2 = uVar2 + 1;
        cVar1 = param_4[uVar2 - param_3];
      } while (cVar1 != '\0');
    }
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}



// FUNCTION 143694180 png_set_error_fn body=27 status=ok
// SIG undefined png_set_error_fn(void)

void png_set_error_fn(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x118) = param_2;
    *(undefined8 *)(param_1 + 0x108) = param_3;
    *(undefined8 *)(param_1 + 0x110) = param_4;
  }
  return;
}



// FUNCTION 1436941a0 FUN_1436941a0 body=28 status=ok
// SIG undefined FUN_1436941a0(void)

longlong FUN_1436941a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  if ((param_1 != 0) && (param_3 == 0x100)) {
    *(undefined8 *)(param_1 + 0x100) = param_2;
    return param_1;
  }
  return 0;
}



// FUNCTION 1436941c0 FUN_1436941c0 body=96 status=ok
// SIG undefined FUN_1436941c0(void)

void FUN_1436941c0(longlong param_1,char *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != 0) {
    if (*param_2 == '#') {
      iVar2 = 1;
      lVar1 = 1;
      do {
        if (param_2[lVar1] == ' ') break;
        if (param_2[lVar1 + 1] == ' ') {
          iVar2 = iVar2 + 1;
          break;
        }
        lVar1 = lVar1 + 2;
        iVar2 = iVar2 + 2;
      } while (lVar1 < 0xf);
    }
    if (*(code **)(param_1 + 0x110) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143694212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x110))(param_1,param_2 + iVar2);
      return;
    }
  }
  FUN_143693c30(param_1,param_2 + iVar2);
  return;
}



// FUNCTION 143694220 FUN_143694220 body=40 status=ok
// SIG undefined FUN_143694220(void)

void FUN_143694220(longlong param_1,int param_2,undefined8 param_3)

{
  if (param_2 - 1U < 8) {
    FUN_143694140((longlong)(param_2 + -1) * 0x20 + param_1,0x20,0,param_3);
    return;
  }
  return;
}



// FUNCTION 143694250 FUN_143694250 body=113 status=ok
// SIG undefined FUN_143694250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143694250(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar2 = (ulonglong)param_4;
  if (param_4 < 0) {
    uVar2 = ~uVar2 + 1;
  }
  puVar1 = (undefined1 *)FUN_143693e60(local_38,&local_20,param_3,uVar2);
  if ((param_4 < 0) && (local_38 < puVar1)) {
    puVar1 = puVar1 + -1;
    *puVar1 = 0x2d;
  }
  FUN_143694220(param_1,param_2,puVar1);
  return;
}



// FUNCTION 1436942d0 FUN_1436942d0 body=82 status=ok
// SIG undefined FUN_1436942d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436942d0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar1 = FUN_143693e60(local_28,&local_10);
  FUN_143694220(param_1,param_2,uVar1);
  return;
}



// FUNCTION 143694330 FUN_143694330 body=209 status=ok
// SIG undefined FUN_143694330(void)

undefined8
FUN_143694330(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             uint *param_5,uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_2;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = param_2[1];
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)*(byte *)(param_2 + 9);
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = (uint)*(byte *)((longlong)param_2 + 0x25);
    }
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)*(byte *)((longlong)param_2 + 0x26);
    }
    if (param_9 != (uint *)0x0) {
      *param_9 = (uint)*(byte *)((longlong)param_2 + 0x27);
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)*(byte *)(param_2 + 10);
    }
    FUN_143689900(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 9),
                  *(undefined1 *)((longlong)param_2 + 0x25),*(undefined1 *)(param_2 + 10),
                  *(undefined1 *)((longlong)param_2 + 0x26),
                  *(undefined1 *)((longlong)param_2 + 0x27));
    return 1;
  }
  return 0;
}



// FUNCTION 143694410 FUN_143694410 body=51 status=ok
// SIG undefined FUN_143694410(void)

void FUN_143694410(undefined8 param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  undefined4 local_res20;
  
  iVar1 = FUN_143694450();
  if (iVar1 != 0) {
    *param_3 = (double)local_res20 * 1e-05;
  }
  return;
}



// FUNCTION 143694450 FUN_143694450 body=36 status=ok
// SIG undefined FUN_143694450(void)

undefined8 FUN_143694450(longlong param_1,longlong param_2,undefined4 *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 1) != 0)) &&
     (param_3 != (undefined4 *)0x0)) {
    *param_3 = *(undefined4 *)(param_2 + 0x34);
    return 1;
  }
  return 0;
}



// FUNCTION 143694480 FUN_143694480 body=18 status=ok
// SIG undefined FUN_143694480(void)

undefined8 FUN_143694480(longlong param_1,longlong param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



// FUNCTION 1436944a0 FUN_1436944a0 body=20 status=ok
// SIG undefined FUN_1436944a0(void)

uint FUN_1436944a0(longlong param_1,longlong param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(uint *)(param_2 + 8) & param_3;
  }
  return 0;
}



// FUNCTION 1436944c0 FUN_1436944c0 body=700 status=ok
// SIG undefined FUN_1436944c0(void)

void FUN_1436944c0(uint *param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  bool bVar9;
  
  if (5 < param_3) {
    return;
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x13);
  puVar5 = param_2;
  if (bVar1 == 1) {
    uVar2 = *param_1;
    uVar8 = 0;
    uVar3 = (uint)(byte)(&DAT_145b62960)[param_3];
    iVar6 = 7;
    if (uVar2 <= uVar3) goto LAB_1436946fd;
    bVar1 = (&DAT_145b62968)[param_3];
    do {
      uVar8 = uVar8 | ((byte)param_2[uVar3 >> 3] >> (7 - ((byte)uVar3 & 7) & 0x1f) & 1) <<
                      ((byte)iVar6 & 0x1f);
      if (iVar6 == 0) {
        *puVar5 = (char)uVar8;
        iVar6 = 7;
        puVar5 = puVar5 + 1;
        uVar8 = 0;
      }
      else {
        iVar6 = iVar6 + -1;
      }
      uVar7 = (undefined1)uVar8;
      uVar3 = uVar3 + bVar1;
    } while (uVar3 < uVar2);
    bVar9 = iVar6 == 7;
  }
  else if (bVar1 == 2) {
    uVar2 = *param_1;
    uVar8 = 0;
    iVar6 = 6;
    uVar3 = (uint)(byte)(&DAT_145b62960)[param_3];
    if (uVar2 <= uVar3) goto LAB_1436946fd;
    bVar1 = (&DAT_145b62968)[param_3];
    do {
      uVar8 = uVar8 | ((byte)param_2[uVar3 >> 2] >> (('\x03' - ((byte)uVar3 & 3)) * '\x02' & 0x1f) &
                      3) << ((byte)iVar6 & 0x1f);
      if (iVar6 == 0) {
        *puVar5 = (char)uVar8;
        iVar6 = 6;
        puVar5 = puVar5 + 1;
        uVar8 = 0;
      }
      else {
        iVar6 = iVar6 + -2;
      }
      uVar7 = (undefined1)uVar8;
      uVar3 = uVar3 + bVar1;
    } while (uVar3 < uVar2);
    bVar9 = iVar6 == 6;
  }
  else {
    if (bVar1 != 4) {
      uVar2 = *param_1;
      uVar4 = (ulonglong)(bVar1 >> 3);
      uVar3 = (uint)(byte)(&DAT_145b62960)[param_3];
      if (uVar3 < uVar2) {
        bVar1 = (&DAT_145b62968)[param_3];
        do {
          if (puVar5 != param_2 + uVar3 * uVar4) {
            _guard_xfg_dispatch_icall_nop(puVar5,param_2 + uVar3 * uVar4,uVar4);
          }
          puVar5 = puVar5 + uVar4;
          uVar3 = uVar3 + bVar1;
        } while (uVar3 < uVar2);
      }
      goto LAB_1436946fd;
    }
    uVar2 = *param_1;
    uVar8 = 0;
    iVar6 = 4;
    uVar3 = (uint)(byte)(&DAT_145b62960)[param_3];
    if (uVar2 <= uVar3) goto LAB_1436946fd;
    bVar1 = (&DAT_145b62968)[param_3];
    do {
      uVar8 = uVar8 | ((byte)param_2[uVar3 >> 1] >> (((byte)uVar3 & 1) * -4 + 4 & 0x1f) & 0xf) <<
                      ((byte)iVar6 & 0x1f);
      if (iVar6 == 0) {
        *puVar5 = (char)uVar8;
        iVar6 = 4;
        puVar5 = puVar5 + 1;
        uVar8 = 0;
      }
      else {
        iVar6 = iVar6 + -4;
      }
      uVar7 = (undefined1)uVar8;
      uVar3 = uVar3 + bVar1;
    } while (uVar3 < uVar2);
    bVar9 = iVar6 == 4;
  }
  if (!bVar9) {
    *puVar5 = uVar7;
  }
LAB_1436946fd:
  uVar4 = (ulonglong)
          ((*param_1 - 1) +
          ((uint)(byte)(&DAT_145b62968)[param_3] - (uint)(byte)(&DAT_145b62960)[param_3])) /
          (ulonglong)(byte)(&DAT_145b62968)[param_3];
  bVar1 = *(byte *)((longlong)param_1 + 0x13);
  *param_1 = (uint)uVar4;
  if (bVar1 < 8) {
    *(ulonglong *)(param_1 + 2) = uVar4 * bVar1 + 7 >> 3;
    return;
  }
  *(ulonglong *)(param_1 + 2) = (bVar1 >> 3) * uVar4;
  return;
}



// FUNCTION 143694780 thunk_FUN_1436947a0 body=5 status=ok
// SIG undefined thunk_FUN_1436947a0(void)

void thunk_FUN_1436947a0(undefined1 *param_1,undefined4 param_2)

{
  param_1[3] = (char)param_2;
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  return;
}



// FUNCTION 143694790 FUN_143694790 body=11 status=ok
// SIG undefined FUN_143694790(void)

void FUN_143694790(undefined1 *param_1,undefined4 param_2)

{
  param_1[1] = (char)param_2;
  *param_1 = (char)((uint)param_2 >> 8);
  return;
}



// FUNCTION 1436947a0 FUN_1436947a0 body=27 status=ok
// SIG undefined FUN_1436947a0(void)

void FUN_1436947a0(undefined1 *param_1,undefined4 param_2)

{
  param_1[3] = (char)param_2;
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  return;
}



// FUNCTION 1436947c0 FUN_1436947c0 body=747 status=ok
// SIG undefined FUN_1436947c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436947c0(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4,
                       undefined8 *param_5)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auStack_148 [32];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  param_5[2] = 0;
  param_5[3] = 0;
  *param_5 = 0;
  param_5[1] = param_3;
  if (param_4 == -1) {
    *param_5 = param_2;
  }
  else {
    if (2 < param_4) {
      FUN_143694250(local_128,1,1);
      FUN_143693fd0(param_1,local_128,"Unknown compression type @1");
    }
    FUN_143697330(param_1,2);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b8);
    *(int *)(param_1 + 0x168) = (int)param_3;
    *(undefined8 *)(param_1 + 0x160) = param_2;
    do {
      iVar3 = FUN_14369d3f0(param_1 + 0x160,0);
      if (iVar3 != 0) {
        if (*(longlong *)(param_1 + 0x180) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_143693c80(param_1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1,"zlib error");
      }
      if (*(int *)(param_1 + 0x178) == 0) {
        iVar3 = *(int *)((longlong)param_5 + 0x14);
        if (iVar3 <= *(int *)(param_5 + 2)) {
          pvVar2 = (void *)param_5[3];
          iVar4 = *(int *)(param_5 + 2) + 4;
          *(int *)((longlong)param_5 + 0x14) = iVar4;
          pvVar5 = (void *)FUN_1436924c0(param_1,(longlong)iVar4 << 3);
          param_5[3] = pvVar5;
          if (pvVar2 != (void *)0x0) {
            _guard_xfg_dispatch_icall_nop(pvVar5,pvVar2,(longlong)iVar3 << 3);
            FUN_143692480(param_1,pvVar2);
          }
        }
        uVar6 = FUN_1436924c0(param_1,*(undefined4 *)(param_1 + 0x1c0));
        *(undefined8 *)(param_5[3] + (longlong)*(int *)(param_5 + 2) * 8) = uVar6;
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_5[3] + (longlong)*(int *)(param_5 + 2) * 8),
                   *(void **)(param_1 + 0x1b8),(ulonglong)*(uint *)(param_1 + 0x1c0));
        *(int *)(param_5 + 2) = *(int *)(param_5 + 2) + 1;
        *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1c0);
        *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b8);
      }
    } while (*(int *)(param_1 + 0x168) != 0);
    while (iVar3 = FUN_14369d3f0(param_1 + 0x160,4), iVar3 == 0) {
      if (*(int *)(param_1 + 0x178) == 0) {
        iVar3 = *(int *)((longlong)param_5 + 0x14);
        if (iVar3 <= *(int *)(param_5 + 2)) {
          pvVar2 = (void *)param_5[3];
          iVar4 = *(int *)(param_5 + 2) + 4;
          *(int *)((longlong)param_5 + 0x14) = iVar4;
          pvVar5 = (void *)FUN_1436924c0(param_1,(longlong)iVar4 << 3);
          param_5[3] = pvVar5;
          if (pvVar2 != (void *)0x0) {
            _guard_xfg_dispatch_icall_nop(pvVar5,pvVar2,(longlong)iVar3 << 3);
            FUN_143692480(param_1,pvVar2);
          }
        }
        uVar6 = FUN_1436924c0(param_1,*(undefined4 *)(param_1 + 0x1c0));
        *(undefined8 *)(param_5[3] + (longlong)*(int *)(param_5 + 2) * 8) = uVar6;
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_5[3] + (longlong)*(int *)(param_5 + 2) * 8),
                   *(void **)(param_1 + 0x1b8),(ulonglong)*(uint *)(param_1 + 0x1c0));
        *(int *)(param_5 + 2) = *(int *)(param_5 + 2) + 1;
        *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1c0);
        *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b8);
      }
    }
    if (iVar3 != 1) {
      if (*(longlong *)(param_1 + 0x180) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"zlib error");
    }
    uVar1 = *(uint *)(param_1 + 0x1c0);
    param_3 = (ulonglong)(uVar1 * *(int *)(param_5 + 2));
    if (*(uint *)(param_1 + 0x178) < uVar1) {
      param_3 = param_3 + ((ulonglong)uVar1 - (ulonglong)*(uint *)(param_1 + 0x178));
    }
  }
  return param_3 & 0xffffffff;
}



// FUNCTION 143694ab0 FUN_143694ab0 body=380 status=ok
// SIG undefined FUN_143694ab0(void)

void FUN_143694ab0(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)(param_1 + 0x154) & 4) == 0) && (*(char *)(param_1 + 0x438) == '\0')) {
    bVar1 = *param_2;
    if (((bVar1 & 0xf) != 8) || (0x70 < (bVar1 & 0xf0))) {
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"Invalid zlib compression method or flags in IDAT");
    }
    if (((1 < param_3) && (uVar2 = *(uint *)(param_1 + 500), uVar2 < 0x4000)) &&
       (*(uint *)(param_1 + 0x1f0) < 0x4000)) {
      uVar4 = ((uint)*(byte *)(param_1 + 0x273) * (uint)*(byte *)(param_1 + 0x270) *
               *(uint *)(param_1 + 0x1f0) + 0xf >> 3) * uVar2;
      if (*(char *)(param_1 + 0x26c) != '\0') {
        iVar3 = 6;
        if (*(byte *)(param_1 + 0x270) < 8) {
          iVar3 = 0xc;
        }
        uVar4 = uVar4 + iVar3 * (uVar2 + 7 >> 3);
      }
      uVar5 = (uint)(bVar1 >> 4);
      for (uVar2 = 1 << (bVar1 >> 4) + 7; (uVar4 <= uVar2 && (0xff < uVar2)); uVar2 = uVar2 >> 1) {
        uVar5 = uVar5 - 1;
      }
      uVar2 = uVar5 << 4 | 8;
      if (bVar1 != uVar2) {
        *param_2 = (byte)uVar2;
        uVar2 = uVar2 * 0x100 + (param_2[1] & 0xe0);
        param_2[1] = ((char)(param_2[1] & 0xe0) - ((char)uVar2 + (char)(uVar2 / 0x1f) * -0x1f)) +
                     0x1f;
      }
    }
  }
  FUN_1436954e0(param_1,0x49444154,param_2,param_3);
  *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 4;
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1c0);
  return;
}



// FUNCTION 143694c30 FUN_143694c30 body=38 status=ok
// SIG undefined FUN_143694c30(void)

void FUN_143694c30(longlong param_1)

{
  FUN_1436954e0(param_1,0x49454e44,0,0);
  *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x10;
  return;
}



// FUNCTION 143694c60 FUN_143694c60 body=970 status=ok
// SIG undefined FUN_143694c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143694c60(longlong param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
                  int param_6,int param_7,uint param_8)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  char local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  cVar3 = (char)param_4;
  if (param_5 == 0) {
    if ((0x10 < param_4) || ((0x10116U >> (param_4 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"Invalid bit depth for grayscale image");
    }
  }
  else {
    if (param_5 == 2) {
      if ((param_4 - 8 & 0xfffffff7) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1,"Invalid bit depth for RGB image");
      }
      *(undefined1 *)(param_1 + 0x273) = 3;
      goto LAB_143694d2e;
    }
    if (param_5 != 3) {
      if (param_5 == 4) {
        if ((param_4 - 8 & 0xfffffff7) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_143693c80(param_1,"Invalid bit depth for grayscale+alpha image");
        }
        *(undefined1 *)(param_1 + 0x273) = 2;
      }
      else {
        if (param_5 != 6) {
                    /* WARNING: Subroutine does not return */
          FUN_143693c80(param_1,"Invalid image color type specified");
        }
        if ((param_4 - 8 & 0xfffffff7) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_143693c80(param_1,"Invalid bit depth for RGBA image");
        }
        *(undefined1 *)(param_1 + 0x273) = 4;
      }
      goto LAB_143694d2e;
    }
    if ((8 < param_4) || ((0x116U >> (param_4 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"Invalid bit depth for paletted image");
    }
  }
  *(undefined1 *)(param_1 + 0x273) = 1;
LAB_143694d2e:
  if (param_6 != 0) {
    FUN_1436941c0(param_1,"Invalid compression type specified");
  }
  if ((((((*(byte *)(param_1 + 0x3f8) & 4) == 0) || ((*(uint *)(param_1 + 0x154) & 0x1000) != 0)) ||
       ((param_5 - 2U & 0xfffffffb) != 0)) || (param_7 != 0x40)) && (param_7 != 0)) {
    FUN_1436941c0(param_1,"Invalid filter type specified");
    param_7 = 0;
  }
  if (1 < param_8) {
    FUN_1436941c0(param_1,"Invalid interlace type specified");
    param_8 = 1;
  }
  bVar2 = *(char *)(param_1 + 0x273) * cVar3;
  *(char *)(param_1 + 0x270) = cVar3;
  *(char *)(param_1 + 0x26f) = (char)param_5;
  *(char *)(param_1 + 0x26c) = (char)param_8;
  *(char *)(param_1 + 0x3fc) = (char)param_7;
  *(byte *)(param_1 + 0x272) = bVar2;
  *(undefined1 *)(param_1 + 0x438) = 0;
  *(uint *)(param_1 + 0x1f0) = param_2;
  *(undefined4 *)(param_1 + 500) = param_3;
  if (bVar2 < 8) {
    uVar4 = (ulonglong)bVar2 * (ulonglong)param_2 + 7 >> 3;
  }
  else {
    uVar4 = (ulonglong)(bVar2 >> 3) * (ulonglong)param_2;
  }
  *(ulonglong *)(param_1 + 0x200) = uVar4;
  *(char *)(param_1 + 0x274) = *(char *)(param_1 + 0x273);
  *(uint *)(param_1 + 0x1fc) = param_2;
  *(char *)(param_1 + 0x271) = cVar3;
  FUN_1436947a0(local_48,param_2);
  FUN_1436947a0(local_44,param_3);
  local_40 = cVar3;
  local_3f = (char)param_5;
  local_3e = 0;
  local_3d = (char)param_7;
  local_3c = (char)param_8;
  FUN_1436954e0(param_1,0x49484452,local_48,0xd);
  *(code **)(param_1 + 400) = FUN_14368ab40;
  *(code **)(param_1 + 0x198) = thunk_FUN_143692480;
  *(longlong *)(param_1 + 0x1a0) = param_1;
  if (*(char *)(param_1 + 0x26e) == '\0') {
    if ((*(char *)(param_1 + 0x26f) == '\x03') || (*(byte *)(param_1 + 0x270) < 8)) {
      *(undefined1 *)(param_1 + 0x26e) = 8;
    }
    else {
      *(undefined1 *)(param_1 + 0x26e) = 0xf8;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x158);
  if ((uVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x1d8) = (uint)(*(char *)(param_1 + 0x26e) != '\b');
  }
  if ((uVar1 & 2) == 0) {
    *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
  }
  if ((uVar1 & 4) == 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 8;
  }
  if ((uVar1 & 8) == 0) {
    *(undefined4 *)(param_1 + 0x1d0) = 0xf;
  }
  if ((uVar1 & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 8;
  }
  if ((uVar1 >> 0x18 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  if ((uVar1 >> 0x19 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x1c8);
  }
  if ((uVar1 >> 0x1a & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1d4);
  }
  if ((uVar1 >> 0x1b & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1d0);
  }
  if ((uVar1 >> 0x1c & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1cc);
  }
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x154) = 1;
  return;
}



// FUNCTION 143695030 FUN_143695030 body=251 status=ok
// SIG undefined FUN_143695030(void)

void FUN_143695030(longlong param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  
  uVar4 = (ulonglong)param_3;
  bVar1 = *(byte *)(param_1 + 0x26f);
  if (bVar1 == 3) {
    uVar2 = 1 << (*(byte *)(param_1 + 0x270) & 0x1f);
  }
  else {
    uVar2 = 0x100;
  }
  if ((((*(byte *)(param_1 + 0x3f8) & 1) == 0) && (param_3 == 0)) || (uVar2 < param_3)) {
    pcVar3 = "Invalid number of colors in palette";
    if (bVar1 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_143693c80();
    }
  }
  else {
    if ((bVar1 & 2) != 0) {
      *(short *)(param_1 + 0x260) = (short)param_3;
      FUN_143695440(param_1,0x504c5445,param_3 * 3);
      if (param_3 != 0) {
        puVar5 = (undefined1 *)(param_2 + 2);
        do {
          local_res8 = puVar5[-2];
          local_res9 = puVar5[-1];
          local_resa = *puVar5;
          FUN_1436953b0(param_1,&local_res8,3);
          puVar5 = puVar5 + 3;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      FUN_143695400(param_1);
      *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 2;
      return;
    }
    pcVar3 = "Ignoring request to write a PLTE chunk in grayscale PNG";
  }
  FUN_1436941c0(param_1,pcVar3);
  return;
}



// FUNCTION 143695130 FUN_143695130 body=298 status=ok
// SIG undefined FUN_143695130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143695130(longlong param_1,byte *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  byte local_18 [2];
  char local_16 [2];
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if (param_3 == 3) {
    if (((*(ushort *)(param_1 + 0x260) != 0) || ((*(byte *)(param_1 + 0x3f8) & 1) == 0)) &&
       (*(ushort *)(param_1 + 0x260) <= (ushort)*param_2)) {
      FUN_1436941c0(param_1,"Invalid background palette index");
      return;
    }
    local_18[0] = *param_2;
    uVar1 = 1;
  }
  else if ((param_3 & 2) == 0) {
    if (1 << (*(byte *)(param_1 + 0x270) & 0x1f) <= (int)(uint)*(ushort *)(param_2 + 8)) {
      FUN_1436941c0(param_1,"Ignoring attempt to write bKGD chunk out-of-range for bit_depth");
      return;
    }
    FUN_143694790(local_18);
    uVar1 = 2;
  }
  else {
    FUN_143694790(local_18,*(undefined2 *)(param_2 + 2));
    FUN_143694790(local_16,*(undefined2 *)(param_2 + 4));
    FUN_143694790(local_14,*(undefined2 *)(param_2 + 6));
    if ((*(char *)(param_1 + 0x270) == '\b') &&
       ((local_14[0] != '\0' || local_16[0] != '\0') || local_18[0] != 0)) {
      FUN_1436941c0(param_1,"Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8");
      return;
    }
    uVar1 = 6;
  }
  FUN_1436954e0(param_1,0x624b4744,local_18,uVar1);
  return;
}



// FUNCTION 143695260 FUN_143695260 body=284 status=ok
// SIG undefined FUN_143695260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143695260(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_88 = param_9;
  local_90 = param_8;
  local_98 = param_7;
  local_a0 = param_6;
  local_a8 = param_5;
  iVar1 = FUN_143689af0();
  if (iVar1 != 0) {
    FUN_1436947a0(local_78,param_2);
    FUN_1436947a0(local_74,param_3);
    FUN_1436947a0(local_70,param_4);
    FUN_1436947a0(local_6c,param_5);
    FUN_1436947a0(local_68,param_6);
    FUN_1436947a0(local_64,param_7);
    FUN_1436947a0(local_60,param_8);
    FUN_1436947a0(local_5c,param_9);
    FUN_1436954e0(param_1,0x6348524d,local_78,0x20);
  }
  return;
}



// FUNCTION 143695380 FUN_143695380 body=42 status=ok
// SIG undefined FUN_143695380(void)

void FUN_143695380(undefined8 param_1,undefined1 *param_2)

{
  FUN_1436954e0(param_1,CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]));
  return;
}



// FUNCTION 1436953b0 FUN_1436953b0 body=74 status=ok
// SIG undefined FUN_1436953b0(void)

void FUN_1436953b0(longlong param_1,longlong param_2,longlong param_3)

{
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    FUN_143692200();
    FUN_143689850(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 143695400 FUN_143695400 body=64 status=ok
// SIG undefined FUN_143695400(void)

void FUN_143695400(longlong param_1)

{
  undefined1 local_res8 [32];
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x480) = 0x82;
    FUN_1436947a0(local_res8,*(undefined4 *)(param_1 + 0x254));
    FUN_143692200(param_1,local_res8,4);
  }
  return;
}



// FUNCTION 143695440 FUN_143695440 body=160 status=ok
// SIG undefined FUN_143695440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143695440(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  if (param_1 != 0) {
    local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
    *(undefined4 *)(param_1 + 0x480) = 0x22;
    FUN_1436947a0(local_18,param_3);
    FUN_1436947a0(local_14,param_2);
    FUN_143692200(param_1,local_18,8);
    *(undefined4 *)(param_1 + 0x210) = param_2;
    FUN_14368a920(param_1);
    FUN_143689850(param_1,local_14,4);
    *(undefined4 *)(param_1 + 0x480) = 0x42;
  }
  return;
}



// FUNCTION 1436954e0 FUN_1436954e0 body=97 status=ok
// SIG undefined FUN_1436954e0(void)

void FUN_1436954e0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  if (param_1 != 0) {
    if (0xffffffff < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"length exceeds PNG maxima");
    }
    FUN_143695440(param_1,param_2,param_4 & 0xffffffff);
    FUN_1436953b0(param_1,param_3,param_4);
    FUN_143695400(param_1);
  }
  return;
}



// FUNCTION 143695550 FUN_143695550 body=467 status=ok
// SIG undefined FUN_143695550(void)

void FUN_143695550(longlong param_1,longlong *param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*param_2 != 0) {
    FUN_1436953b0();
    return;
  }
  if (((1 < param_3) && ((ulonglong)param_2[1] < 0x4000)) && (1 < *(uint *)(param_1 + 0x1c0))) {
    if ((int)param_2[2] == 0) {
      bVar1 = **(byte **)(param_1 + 0x1b8);
    }
    else {
      bVar1 = **(byte **)param_2[3];
    }
    if (((bVar1 & 0xf) != 8) || (0x70 < (bVar1 & 0xf0))) {
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"Invalid zlib compression method or flags in non-IDAT chunk");
    }
    uVar5 = (uint)(bVar1 >> 4);
    for (uVar2 = 1 << (bVar1 >> 4) + 7;
        ((ulonglong)param_2[1] <= (ulonglong)uVar2 && (0xff < uVar2)); uVar2 = uVar2 >> 1) {
      uVar5 = uVar5 - 1;
    }
    uVar5 = uVar5 << 4 | 8;
    if ((int)param_2[2] == 0) {
      **(byte **)(param_1 + 0x1b8) = (byte)uVar5;
      lVar4 = *(longlong *)(param_1 + 0x1b8);
    }
    else {
      if (**(byte **)param_2[3] == uVar5) goto LAB_143695677;
      **(byte **)param_2[3] = (byte)uVar5;
      lVar4 = *(longlong *)param_2[3];
    }
    uVar2 = *(byte *)(lVar4 + 1) & 0xe0;
    uVar5 = uVar5 * 0x100 + uVar2;
    *(char *)(lVar4 + 1) = ((char)uVar2 - ((char)uVar5 + (char)(uVar5 / 0x1f) * -0x1f)) + '\x1f';
  }
LAB_143695677:
  iVar3 = 0;
  if (0 < (int)param_2[2]) {
    lVar4 = 0;
    do {
      FUN_1436953b0(param_1,*(undefined8 *)(lVar4 + param_2[3]),*(undefined4 *)(param_1 + 0x1c0));
      FUN_143692480(param_1,*(undefined8 *)(lVar4 + param_2[3]));
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < (int)param_2[2]);
  }
  if (*(int *)((longlong)param_2 + 0x14) != 0) {
    FUN_143692480(param_1,param_2[3]);
  }
  if (*(uint *)(param_1 + 0x178) < *(uint *)(param_1 + 0x1c0)) {
    FUN_1436953b0(param_1,*(undefined8 *)(param_1 + 0x1b8),
                  *(uint *)(param_1 + 0x1c0) - *(uint *)(param_1 + 0x178));
  }
  FUN_143697540(param_1);
  return;
}



// FUNCTION 143695730 FUN_143695730 body=272 status=ok
// SIG undefined FUN_143695730(void)

void FUN_143695730(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  
  *(undefined8 *)(param_1 + 0x160) = param_2;
  *(undefined4 *)(param_1 + 0x168) = 0;
  do {
    if (*(int *)(param_1 + 0x168) == 0) {
      if (param_3 < 0x100000000) {
        *(int *)(param_1 + 0x168) = (int)param_3;
        param_3 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
        param_3 = param_3 - 0xffffffff;
      }
    }
    while( true ) {
      iVar2 = FUN_14369d3f0(param_1 + 0x160,0);
      if (iVar2 != 0) {
        if (*(longlong *)(param_1 + 0x180) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_143693c80(param_1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1,"zlib error");
      }
      if (*(int *)(param_1 + 0x178) == 0) {
        FUN_143694ab0(param_1,*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
      }
      if (param_3 != 0) break;
      if (*(int *)(param_1 + 0x168) == 0) {
        lVar1 = *(longlong *)(param_1 + 0x218);
        if (lVar1 != 0) {
          *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x220);
          *(longlong *)(param_1 + 0x220) = lVar1;
        }
        FUN_143696080(param_1);
        *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + 1;
        if ((*(uint *)(param_1 + 0x2a8) != 0) &&
           (*(uint *)(param_1 + 0x2a8) <= *(uint *)(param_1 + 0x2ac))) {
          FUN_14368b200(param_1);
        }
        return;
      }
    }
  } while( true );
}



// FUNCTION 143695850 FUN_143695850 body=2090 status=ok
// SIG undefined FUN_143695850(void)

void FUN_143695850(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  char cVar4;
  ulonglong uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  int iVar65;
  char *pcVar66;
  longlong lVar67;
  uint uVar68;
  ulonglong uVar69;
  char *pcVar70;
  longlong lVar71;
  byte *pbVar72;
  uint uVar73;
  int iVar74;
  int iVar75;
  ulonglong uVar76;
  longlong lVar77;
  byte *pbVar78;
  longlong lVar79;
  uint uVar80;
  char *pcVar81;
  longlong lVar82;
  char *pcVar83;
  uint uVar84;
  ulonglong uVar85;
  byte *pbVar86;
  ulonglong uVar87;
  byte *pbVar88;
  byte *pbVar89;
  longlong local_50;
  
  lVar67 = *(longlong *)(param_1 + 0x220);
  uVar87 = 0;
  bVar64 = *(byte *)(param_1 + 0x26e);
  lVar79 = *(longlong *)(param_1 + 0x218);
  uVar5 = *(ulonglong *)(param_2 + 8);
  uVar73 = *(byte *)(param_2 + 0x13) + 7 >> 3;
  uVar85 = 0x7fffffff;
  if ((((bVar64 & 8) != 0) && (bVar64 != 8)) && (uVar69 = uVar87, uVar85 = uVar87, uVar5 != 0)) {
    do {
      bVar63 = *(byte *)(uVar69 + 1 + lVar67);
      uVar68 = (uint)bVar63;
      if (0x7f < bVar63) {
        uVar68 = 0x100 - bVar63;
      }
      uVar69 = uVar69 + 1;
      uVar85 = (ulonglong)((int)uVar85 + uVar68);
    } while (uVar69 < uVar5);
  }
  uVar68 = (uint)uVar85;
  if (bVar64 == 0x10) {
    pcVar81 = (char *)(lVar67 + 1);
    pcVar66 = (char *)(*(longlong *)(param_1 + 0x228) + 1);
    uVar69 = (ulonglong)uVar73;
    pcVar70 = pcVar81;
    uVar85 = uVar87;
    if (uVar73 != 0) {
      uVar85 = (ulonglong)uVar73;
      do {
        cVar4 = *pcVar70;
        pcVar70 = pcVar70 + 1;
        *pcVar66 = cVar4;
        pcVar66 = pcVar66 + 1;
        uVar69 = uVar69 - 1;
      } while (uVar69 != 0);
    }
    uVar69 = uVar5 - uVar85;
    if (uVar85 < uVar5) {
      if (0x1f < uVar69) {
        if (((pcVar81 + (uVar5 - 1) < pcVar66 + uVar85) ||
            (pcVar66 + (uVar5 - 1) < pcVar81 + uVar85)) &&
           ((pcVar70 + (uVar5 - 1) < pcVar66 + uVar85 || (pcVar66 + (uVar5 - 1) < pcVar70 + uVar85))
           )) {
          do {
            cVar4 = pcVar81[1];
            cVar6 = pcVar81[2];
            cVar7 = pcVar81[3];
            cVar8 = pcVar81[4];
            cVar9 = pcVar81[5];
            cVar10 = pcVar81[6];
            cVar11 = pcVar81[7];
            cVar12 = pcVar81[8];
            cVar13 = pcVar81[9];
            cVar14 = pcVar81[10];
            cVar15 = pcVar81[0xb];
            cVar16 = pcVar81[0xc];
            cVar17 = pcVar81[0xd];
            cVar18 = pcVar81[0xe];
            cVar19 = pcVar81[0xf];
            uVar85 = uVar85 + 0x20;
            cVar20 = pcVar70[1];
            cVar21 = pcVar70[2];
            cVar22 = pcVar70[3];
            cVar23 = pcVar70[4];
            cVar24 = pcVar70[5];
            cVar25 = pcVar70[6];
            cVar26 = pcVar70[7];
            cVar27 = pcVar70[8];
            cVar28 = pcVar70[9];
            cVar29 = pcVar70[10];
            cVar30 = pcVar70[0xb];
            cVar31 = pcVar70[0xc];
            cVar32 = pcVar70[0xd];
            cVar33 = pcVar70[0xe];
            cVar34 = pcVar70[0xf];
            *pcVar66 = *pcVar70 - *pcVar81;
            pcVar66[1] = cVar20 - cVar4;
            pcVar66[2] = cVar21 - cVar6;
            pcVar66[3] = cVar22 - cVar7;
            pcVar66[4] = cVar23 - cVar8;
            pcVar66[5] = cVar24 - cVar9;
            pcVar66[6] = cVar25 - cVar10;
            pcVar66[7] = cVar26 - cVar11;
            pcVar66[8] = cVar27 - cVar12;
            pcVar66[9] = cVar28 - cVar13;
            pcVar66[10] = cVar29 - cVar14;
            pcVar66[0xb] = cVar30 - cVar15;
            pcVar66[0xc] = cVar31 - cVar16;
            pcVar66[0xd] = cVar32 - cVar17;
            pcVar66[0xe] = cVar33 - cVar18;
            pcVar66[0xf] = cVar34 - cVar19;
            pcVar83 = pcVar70 + 0x10;
            cVar4 = pcVar70[0x11];
            cVar6 = pcVar70[0x12];
            cVar7 = pcVar70[0x13];
            cVar8 = pcVar70[0x14];
            cVar9 = pcVar70[0x15];
            cVar10 = pcVar70[0x16];
            cVar11 = pcVar70[0x17];
            cVar12 = pcVar70[0x18];
            cVar13 = pcVar70[0x19];
            cVar14 = pcVar70[0x1a];
            cVar15 = pcVar70[0x1b];
            cVar16 = pcVar70[0x1c];
            cVar17 = pcVar70[0x1d];
            cVar18 = pcVar70[0x1e];
            cVar19 = pcVar70[0x1f];
            pcVar70 = pcVar70 + 0x20;
            pcVar1 = pcVar81 + 0x10;
            cVar20 = pcVar81[0x11];
            cVar21 = pcVar81[0x12];
            cVar22 = pcVar81[0x13];
            cVar23 = pcVar81[0x14];
            cVar24 = pcVar81[0x15];
            cVar25 = pcVar81[0x16];
            cVar26 = pcVar81[0x17];
            cVar27 = pcVar81[0x18];
            cVar28 = pcVar81[0x19];
            cVar29 = pcVar81[0x1a];
            cVar30 = pcVar81[0x1b];
            cVar31 = pcVar81[0x1c];
            cVar32 = pcVar81[0x1d];
            cVar33 = pcVar81[0x1e];
            cVar34 = pcVar81[0x1f];
            pcVar81 = pcVar81 + 0x20;
            pcVar66[0x10] = *pcVar83 - *pcVar1;
            pcVar66[0x11] = cVar4 - cVar20;
            pcVar66[0x12] = cVar6 - cVar21;
            pcVar66[0x13] = cVar7 - cVar22;
            pcVar66[0x14] = cVar8 - cVar23;
            pcVar66[0x15] = cVar9 - cVar24;
            pcVar66[0x16] = cVar10 - cVar25;
            pcVar66[0x17] = cVar11 - cVar26;
            pcVar66[0x18] = cVar12 - cVar27;
            pcVar66[0x19] = cVar13 - cVar28;
            pcVar66[0x1a] = cVar14 - cVar29;
            pcVar66[0x1b] = cVar15 - cVar30;
            pcVar66[0x1c] = cVar16 - cVar31;
            pcVar66[0x1d] = cVar17 - cVar32;
            pcVar66[0x1e] = cVar18 - cVar33;
            pcVar66[0x1f] = cVar19 - cVar34;
            pcVar66 = pcVar66 + 0x20;
          } while (uVar85 < uVar5 - ((uint)uVar69 & 0x1f));
        }
      }
      if (uVar85 < uVar5) {
        lVar71 = (longlong)pcVar70 - (longlong)pcVar66;
        lVar82 = (longlong)pcVar81 - (longlong)pcVar66;
        lVar77 = uVar5 - uVar85;
        do {
          *pcVar66 = pcVar66[lVar71] - pcVar66[lVar82];
          pcVar66 = pcVar66 + 1;
          lVar77 = lVar77 + -1;
        } while (lVar77 != 0);
      }
    }
    local_50 = *(longlong *)(param_1 + 0x228);
LAB_143695a10:
    if ((bVar64 & 0x20) != 0) {
      pbVar78 = *(byte **)(param_1 + 0x230);
      pcVar81 = (char *)(lVar67 + 1);
      uVar85 = uVar87;
      if (uVar5 != 0) {
        lVar71 = (lVar79 + 1) - (longlong)pcVar81;
        uVar69 = uVar87;
        do {
          pbVar78 = pbVar78 + 1;
          bVar63 = *pcVar81 - pcVar81[lVar71];
          pcVar81 = pcVar81 + 1;
          *pbVar78 = bVar63;
          uVar84 = (uint)bVar63;
          if (0x7f < bVar63) {
            uVar84 = 0x100 - bVar63;
          }
          uVar84 = (int)uVar85 + uVar84;
          uVar85 = (ulonglong)uVar84;
          if (uVar68 < uVar84) goto LAB_143695a88;
          uVar69 = uVar69 + 1;
        } while (uVar69 < uVar5);
      }
      if ((uint)uVar85 < uVar68) {
        local_50 = *(longlong *)(param_1 + 0x230);
        uVar68 = (uint)uVar85;
      }
    }
LAB_143695a88:
    if (bVar64 == 0x40) {
      pbVar78 = (byte *)(lVar79 + 1);
      pcVar70 = (char *)(lVar67 + 1);
      pcVar83 = (char *)(*(longlong *)(param_1 + 0x238) + 1);
      pcVar81 = pcVar70;
      pcVar66 = pcVar70;
      uVar85 = (ulonglong)uVar73;
      if (uVar73 != 0) {
        do {
          bVar64 = *pbVar78;
          pbVar78 = pbVar78 + 1;
          pcVar81 = pcVar66 + 1;
          *pcVar83 = *pcVar66 - (bVar64 >> 1);
          pcVar83 = pcVar83 + 1;
          uVar85 = uVar85 - 1;
          pcVar66 = pcVar81;
          uVar87 = (ulonglong)uVar73;
        } while (uVar85 != 0);
      }
      if (uVar87 < uVar5) {
        pbVar72 = pbVar78;
        do {
          bVar64 = *pbVar72;
          uVar87 = (ulonglong)((int)uVar87 + 1);
          pbVar86 = pbVar72 + ((longlong)pcVar70 - (longlong)pbVar78);
          pbVar72 = pbVar72 + 1;
          pbVar72[(longlong)(pcVar83 + (-1 - (longlong)pbVar78))] =
               pbVar72[(longlong)(pcVar81 + (-1 - (longlong)pbVar78))] -
               (char)((uint)*pbVar86 + (uint)bVar64 >> 1);
        } while (uVar87 < uVar5);
      }
      local_50 = *(longlong *)(param_1 + 0x238);
      goto LAB_14369604c;
    }
  }
  else {
    local_50 = lVar67;
    if ((bVar64 & 0x10) != 0) {
      pbVar78 = (byte *)(lVar67 + 1);
      uVar76 = (ulonglong)uVar73;
      pbVar86 = (byte *)(*(longlong *)(param_1 + 0x228) + 1);
      pbVar72 = pbVar78;
      uVar85 = uVar87;
      uVar69 = uVar87;
      if (uVar76 != 0) {
        uVar69 = (ulonglong)uVar73;
        do {
          uVar84 = (uint)*pbVar72;
          *pbVar86 = *pbVar72;
          if (0x7f < uVar84) {
            uVar84 = 0x100 - uVar84;
          }
          pbVar72 = pbVar72 + 1;
          uVar85 = (ulonglong)((int)uVar85 + uVar84);
          pbVar86 = pbVar86 + 1;
          uVar76 = uVar76 - 1;
        } while (uVar76 != 0);
      }
      uVar84 = (uint)uVar85;
      if (uVar69 < uVar5) {
        lVar77 = (longlong)pbVar72 - (longlong)pbVar86;
        lVar71 = (longlong)pbVar78 - (longlong)pbVar86;
        do {
          bVar63 = pbVar86[lVar77] - pbVar86[lVar71];
          *pbVar86 = bVar63;
          uVar84 = (uint)bVar63;
          if (0x7f < bVar63) {
            uVar84 = 0x100 - bVar63;
          }
          uVar84 = (int)uVar85 + uVar84;
          uVar85 = (ulonglong)uVar84;
          if (uVar68 < uVar84) goto LAB_143695be8;
          pbVar86 = pbVar86 + 1;
          uVar69 = uVar69 + 1;
        } while (uVar69 < uVar5);
      }
      if (uVar84 < uVar68) {
        local_50 = *(longlong *)(param_1 + 0x228);
        uVar68 = uVar84;
      }
    }
LAB_143695be8:
    if (bVar64 != 0x20) goto LAB_143695a10;
    pcVar81 = (char *)(lVar67 + 1);
    pcVar70 = (char *)(*(longlong *)(param_1 + 0x230) + 1);
    pcVar66 = (char *)(lVar79 + 1);
    if (uVar5 != 0) {
      uVar85 = uVar87;
      if (((0x1f < uVar5) &&
          ((pcVar66 + (uVar5 - 1) < pcVar70 || (pcVar70 + (uVar5 - 1) < pcVar66)))) &&
         ((pcVar81 + (uVar5 - 1) < pcVar70 || (uVar85 = 0, pcVar70 + (uVar5 - 1) < pcVar81)))) {
        uVar85 = uVar87;
        do {
          cVar4 = pcVar66[1];
          cVar6 = pcVar66[2];
          cVar7 = pcVar66[3];
          cVar8 = pcVar66[4];
          cVar9 = pcVar66[5];
          cVar10 = pcVar66[6];
          cVar11 = pcVar66[7];
          cVar12 = pcVar66[8];
          cVar13 = pcVar66[9];
          cVar14 = pcVar66[10];
          cVar15 = pcVar66[0xb];
          cVar16 = pcVar66[0xc];
          cVar17 = pcVar66[0xd];
          cVar18 = pcVar66[0xe];
          cVar19 = pcVar66[0xf];
          uVar85 = uVar85 + 0x20;
          cVar20 = pcVar81[1];
          cVar21 = pcVar81[2];
          cVar22 = pcVar81[3];
          cVar23 = pcVar81[4];
          cVar24 = pcVar81[5];
          cVar25 = pcVar81[6];
          cVar26 = pcVar81[7];
          cVar27 = pcVar81[8];
          cVar28 = pcVar81[9];
          cVar29 = pcVar81[10];
          cVar30 = pcVar81[0xb];
          cVar31 = pcVar81[0xc];
          cVar32 = pcVar81[0xd];
          cVar33 = pcVar81[0xe];
          cVar34 = pcVar81[0xf];
          *pcVar70 = *pcVar81 - *pcVar66;
          pcVar70[1] = cVar20 - cVar4;
          pcVar70[2] = cVar21 - cVar6;
          pcVar70[3] = cVar22 - cVar7;
          pcVar70[4] = cVar23 - cVar8;
          pcVar70[5] = cVar24 - cVar9;
          pcVar70[6] = cVar25 - cVar10;
          pcVar70[7] = cVar26 - cVar11;
          pcVar70[8] = cVar27 - cVar12;
          pcVar70[9] = cVar28 - cVar13;
          pcVar70[10] = cVar29 - cVar14;
          pcVar70[0xb] = cVar30 - cVar15;
          pcVar70[0xc] = cVar31 - cVar16;
          pcVar70[0xd] = cVar32 - cVar17;
          pcVar70[0xe] = cVar33 - cVar18;
          pcVar70[0xf] = cVar34 - cVar19;
          pcVar83 = pcVar81 + 0x10;
          cVar4 = pcVar81[0x11];
          cVar6 = pcVar81[0x12];
          cVar7 = pcVar81[0x13];
          cVar8 = pcVar81[0x14];
          cVar9 = pcVar81[0x15];
          cVar10 = pcVar81[0x16];
          cVar11 = pcVar81[0x17];
          cVar12 = pcVar81[0x18];
          cVar13 = pcVar81[0x19];
          cVar14 = pcVar81[0x1a];
          cVar15 = pcVar81[0x1b];
          cVar16 = pcVar81[0x1c];
          cVar17 = pcVar81[0x1d];
          cVar18 = pcVar81[0x1e];
          cVar19 = pcVar81[0x1f];
          pcVar81 = pcVar81 + 0x20;
          pcVar1 = pcVar66 + 0x10;
          cVar20 = pcVar66[0x11];
          cVar21 = pcVar66[0x12];
          cVar22 = pcVar66[0x13];
          cVar23 = pcVar66[0x14];
          cVar24 = pcVar66[0x15];
          cVar25 = pcVar66[0x16];
          cVar26 = pcVar66[0x17];
          cVar27 = pcVar66[0x18];
          cVar28 = pcVar66[0x19];
          cVar29 = pcVar66[0x1a];
          cVar30 = pcVar66[0x1b];
          cVar31 = pcVar66[0x1c];
          cVar32 = pcVar66[0x1d];
          cVar33 = pcVar66[0x1e];
          cVar34 = pcVar66[0x1f];
          pcVar66 = pcVar66 + 0x20;
          pcVar70[0x10] = *pcVar83 - *pcVar1;
          pcVar70[0x11] = cVar4 - cVar20;
          pcVar70[0x12] = cVar6 - cVar21;
          pcVar70[0x13] = cVar7 - cVar22;
          pcVar70[0x14] = cVar8 - cVar23;
          pcVar70[0x15] = cVar9 - cVar24;
          pcVar70[0x16] = cVar10 - cVar25;
          pcVar70[0x17] = cVar11 - cVar26;
          pcVar70[0x18] = cVar12 - cVar27;
          pcVar70[0x19] = cVar13 - cVar28;
          pcVar70[0x1a] = cVar14 - cVar29;
          pcVar70[0x1b] = cVar15 - cVar30;
          pcVar70[0x1c] = cVar16 - cVar31;
          pcVar70[0x1d] = cVar17 - cVar32;
          pcVar70[0x1e] = cVar18 - cVar33;
          pcVar70[0x1f] = cVar19 - cVar34;
          pcVar70 = pcVar70 + 0x20;
        } while (uVar85 < (uVar5 & 0xffffffffffffffe0));
      }
      if (uVar85 < uVar5) {
        lVar77 = (longlong)pcVar66 - (longlong)pcVar70;
        lVar71 = (longlong)pcVar81 - (longlong)pcVar70;
        lVar82 = uVar5 - uVar85;
        do {
          *pcVar70 = pcVar70[lVar71] - pcVar70[lVar77];
          pcVar70 = pcVar70 + 1;
          lVar82 = lVar82 + -1;
        } while (lVar82 != 0);
      }
    }
    local_50 = *(longlong *)(param_1 + 0x230);
  }
  if ((bVar64 & 0x40) != 0) {
    pbVar78 = (byte *)(*(longlong *)(param_1 + 0x238) + 1);
    pbVar72 = (byte *)(lVar79 + 1);
    pcVar81 = (char *)(lVar67 + 1);
    uVar69 = uVar87;
    uVar76 = uVar87;
    for (uVar85 = (ulonglong)uVar73; uVar84 = (uint)uVar76, uVar85 != 0; uVar85 = uVar85 - 1) {
      bVar63 = *pbVar72;
      pbVar72 = pbVar72 + 1;
      cVar4 = *pcVar81;
      pcVar81 = pcVar81 + 1;
      bVar63 = cVar4 - (bVar63 >> 1);
      *pbVar78 = bVar63;
      pbVar78 = pbVar78 + 1;
      uVar80 = (uint)bVar63;
      if (0x7f < bVar63) {
        uVar80 = 0x100 - bVar63;
      }
      uVar76 = (ulonglong)(uVar84 + uVar80);
      uVar69 = (ulonglong)uVar73;
    }
    if (uVar69 < uVar5) {
      pbVar86 = pbVar72;
      do {
        bVar63 = *pbVar86;
        pbVar88 = pbVar86 + ((lVar67 + 1) - (longlong)pbVar72);
        pbVar86 = pbVar86 + 1;
        bVar63 = pbVar86[(longlong)(pcVar81 + (-1 - (longlong)pbVar72))] -
                 (char)((uint)*pbVar88 + (uint)bVar63 >> 1);
        pbVar86[(longlong)(pbVar78 + (-1 - (longlong)pbVar72))] = bVar63;
        uVar84 = (uint)bVar63;
        if (0x7f < bVar63) {
          uVar84 = 0x100 - bVar63;
        }
        uVar84 = (int)uVar76 + uVar84;
        uVar76 = (ulonglong)uVar84;
        if (uVar68 < uVar84) goto LAB_143695d93;
        uVar69 = uVar69 + 1;
      } while (uVar69 < uVar5);
    }
    if (uVar84 < uVar68) {
      local_50 = *(longlong *)(param_1 + 0x238);
      uVar68 = uVar84;
    }
  }
LAB_143695d93:
  if (bVar64 == 0x80) {
    pbVar78 = (byte *)(lVar67 + 1);
    pbVar88 = (byte *)(*(longlong *)(param_1 + 0x240) + 1);
    uVar85 = (ulonglong)uVar73;
    pbVar89 = (byte *)(lVar79 + 1);
    pbVar72 = pbVar89;
    pbVar86 = pbVar78;
    if (uVar85 != 0) {
      if (((0x1f < uVar85) &&
          ((pbVar89 + (uVar85 - 1) < pbVar88 || (pbVar88 + (uVar85 - 1) < pbVar89)))) &&
         ((pbVar78 + (uVar85 - 1) < pbVar88 || (pbVar88 + (uVar85 - 1) < pbVar78)))) {
        do {
          bVar64 = pbVar72[1];
          bVar63 = pbVar72[2];
          bVar35 = pbVar72[3];
          bVar36 = pbVar72[4];
          bVar37 = pbVar72[5];
          bVar38 = pbVar72[6];
          bVar39 = pbVar72[7];
          bVar40 = pbVar72[8];
          bVar41 = pbVar72[9];
          bVar42 = pbVar72[10];
          bVar43 = pbVar72[0xb];
          bVar44 = pbVar72[0xc];
          bVar45 = pbVar72[0xd];
          bVar46 = pbVar72[0xe];
          bVar47 = pbVar72[0xf];
          uVar87 = uVar87 + 0x20;
          bVar48 = pbVar86[1];
          bVar49 = pbVar86[2];
          bVar50 = pbVar86[3];
          bVar51 = pbVar86[4];
          bVar52 = pbVar86[5];
          bVar53 = pbVar86[6];
          bVar54 = pbVar86[7];
          bVar55 = pbVar86[8];
          bVar56 = pbVar86[9];
          bVar57 = pbVar86[10];
          bVar58 = pbVar86[0xb];
          bVar59 = pbVar86[0xc];
          bVar60 = pbVar86[0xd];
          bVar61 = pbVar86[0xe];
          bVar62 = pbVar86[0xf];
          *pbVar88 = *pbVar86 - *pbVar72;
          pbVar88[1] = bVar48 - bVar64;
          pbVar88[2] = bVar49 - bVar63;
          pbVar88[3] = bVar50 - bVar35;
          pbVar88[4] = bVar51 - bVar36;
          pbVar88[5] = bVar52 - bVar37;
          pbVar88[6] = bVar53 - bVar38;
          pbVar88[7] = bVar54 - bVar39;
          pbVar88[8] = bVar55 - bVar40;
          pbVar88[9] = bVar56 - bVar41;
          pbVar88[10] = bVar57 - bVar42;
          pbVar88[0xb] = bVar58 - bVar43;
          pbVar88[0xc] = bVar59 - bVar44;
          pbVar88[0xd] = bVar60 - bVar45;
          pbVar88[0xe] = bVar61 - bVar46;
          pbVar88[0xf] = bVar62 - bVar47;
          pbVar2 = pbVar86 + 0x10;
          bVar64 = pbVar86[0x11];
          bVar63 = pbVar86[0x12];
          bVar35 = pbVar86[0x13];
          bVar36 = pbVar86[0x14];
          bVar37 = pbVar86[0x15];
          bVar38 = pbVar86[0x16];
          bVar39 = pbVar86[0x17];
          bVar40 = pbVar86[0x18];
          bVar41 = pbVar86[0x19];
          bVar42 = pbVar86[0x1a];
          bVar43 = pbVar86[0x1b];
          bVar44 = pbVar86[0x1c];
          bVar45 = pbVar86[0x1d];
          bVar46 = pbVar86[0x1e];
          bVar47 = pbVar86[0x1f];
          pbVar86 = pbVar86 + 0x20;
          pbVar3 = pbVar72 + 0x10;
          bVar48 = pbVar72[0x11];
          bVar49 = pbVar72[0x12];
          bVar50 = pbVar72[0x13];
          bVar51 = pbVar72[0x14];
          bVar52 = pbVar72[0x15];
          bVar53 = pbVar72[0x16];
          bVar54 = pbVar72[0x17];
          bVar55 = pbVar72[0x18];
          bVar56 = pbVar72[0x19];
          bVar57 = pbVar72[0x1a];
          bVar58 = pbVar72[0x1b];
          bVar59 = pbVar72[0x1c];
          bVar60 = pbVar72[0x1d];
          bVar61 = pbVar72[0x1e];
          bVar62 = pbVar72[0x1f];
          pbVar72 = pbVar72 + 0x20;
          pbVar88[0x10] = *pbVar2 - *pbVar3;
          pbVar88[0x11] = bVar64 - bVar48;
          pbVar88[0x12] = bVar63 - bVar49;
          pbVar88[0x13] = bVar35 - bVar50;
          pbVar88[0x14] = bVar36 - bVar51;
          pbVar88[0x15] = bVar37 - bVar52;
          pbVar88[0x16] = bVar38 - bVar53;
          pbVar88[0x17] = bVar39 - bVar54;
          pbVar88[0x18] = bVar40 - bVar55;
          pbVar88[0x19] = bVar41 - bVar56;
          pbVar88[0x1a] = bVar42 - bVar57;
          pbVar88[0x1b] = bVar43 - bVar58;
          pbVar88[0x1c] = bVar44 - bVar59;
          pbVar88[0x1d] = bVar45 - bVar60;
          pbVar88[0x1e] = bVar46 - bVar61;
          pbVar88[0x1f] = bVar47 - bVar62;
          pbVar88 = pbVar88 + 0x20;
        } while (uVar87 < (uVar85 & 0xffffffffffffffe0));
      }
      if (uVar87 < uVar85) {
        lVar67 = uVar85 - uVar87;
        uVar87 = uVar87 + lVar67;
        do {
          bVar64 = *pbVar86;
          pbVar86 = pbVar86 + 1;
          bVar63 = *pbVar72;
          pbVar72 = pbVar72 + 1;
          *pbVar88 = bVar64 - bVar63;
          pbVar88 = pbVar88 + 1;
          lVar67 = lVar67 + -1;
        } while (lVar67 != 0);
      }
    }
    if (uVar87 < uVar5) {
      lVar79 = (longlong)pbVar72 - (longlong)pbVar78;
      lVar77 = (longlong)pbVar89 - (longlong)pbVar78;
      lVar71 = (longlong)pbVar88 - (longlong)pbVar86;
      lVar67 = uVar5 - uVar87;
      do {
        bVar64 = pbVar78[lVar77];
        pbVar72 = pbVar78 + lVar79;
        bVar63 = *pbVar78;
        pbVar78 = pbVar78 + 1;
        uVar84 = (uint)*pbVar72 - (uint)bVar64;
        uVar73 = (uint)bVar63 - (uint)bVar64;
        iVar75 = (uVar84 ^ (int)uVar84 >> 0x1f) - ((int)uVar84 >> 0x1f);
        iVar74 = (uVar73 ^ (int)uVar73 >> 0x1f) - ((int)uVar73 >> 0x1f);
        uVar68 = (int)(uVar73 + uVar84) >> 0x1f;
        iVar65 = (uVar73 + uVar84 ^ uVar68) - uVar68;
        if (((iVar74 < iVar75) || (iVar65 < iVar75)) && (bVar63 = bVar64, iVar74 <= iVar65)) {
          bVar63 = *pbVar72;
        }
        pbVar86[lVar71] = *pbVar86 - bVar63;
        pbVar86 = pbVar86 + 1;
        lVar67 = lVar67 + -1;
      } while (lVar67 != 0);
    }
  }
  else {
    if (-1 < (char)bVar64) goto LAB_14369604c;
    pbVar78 = (byte *)(*(longlong *)(param_1 + 0x240) + 1);
    uVar69 = (ulonglong)uVar73;
    pcVar70 = (char *)(lVar79 + 1);
    pcVar81 = (char *)(lVar67 + 1);
    uVar85 = uVar87;
    pcVar66 = pcVar70;
    if (uVar69 != 0) {
      uVar85 = (ulonglong)uVar73;
      do {
        cVar4 = *pcVar81;
        pcVar81 = pcVar81 + 1;
        bVar64 = cVar4 - *pcVar66;
        pcVar66 = pcVar66 + 1;
        *pbVar78 = bVar64;
        pbVar78 = pbVar78 + 1;
        uVar73 = (uint)bVar64;
        if (0x7f < bVar64) {
          uVar73 = 0x100 - bVar64;
        }
        uVar87 = (ulonglong)((int)uVar87 + uVar73);
        uVar69 = uVar69 - 1;
      } while (uVar69 != 0);
    }
    uVar73 = (uint)uVar87;
    if (uVar85 < uVar5) {
      pbVar72 = (byte *)(lVar67 + 1);
      lVar67 = (longlong)pcVar70 - (longlong)pbVar72;
      lVar71 = (longlong)pcVar66 - (longlong)pbVar72;
      lVar79 = (longlong)pbVar78 - (longlong)pcVar81;
      do {
        bVar64 = pbVar72[lVar67];
        pbVar78 = pbVar72 + lVar71;
        bVar63 = *pbVar72;
        pbVar72 = pbVar72 + 1;
        uVar80 = (uint)*pbVar78 - (uint)bVar64;
        uVar73 = (uint)bVar63 - (uint)bVar64;
        iVar75 = (uVar80 ^ (int)uVar80 >> 0x1f) - ((int)uVar80 >> 0x1f);
        iVar74 = (uVar73 ^ (int)uVar73 >> 0x1f) - ((int)uVar73 >> 0x1f);
        uVar84 = (int)(uVar73 + uVar80) >> 0x1f;
        iVar65 = (uVar73 + uVar80 ^ uVar84) - uVar84;
        if (((iVar74 < iVar75) || (iVar65 < iVar75)) && (bVar63 = bVar64, iVar74 <= iVar65)) {
          bVar63 = *pbVar78;
        }
        bVar63 = *pcVar81 - bVar63;
        pcVar81[lVar79] = bVar63;
        pcVar81 = pcVar81 + 1;
        uVar73 = (uint)bVar63;
        if (0x7f < bVar63) {
          uVar73 = 0x100 - bVar63;
        }
        uVar73 = (int)uVar87 + uVar73;
        uVar87 = (ulonglong)uVar73;
      } while ((uVar73 <= uVar68) && (uVar85 = uVar85 + 1, uVar85 < uVar5));
    }
    if (uVar68 <= uVar73) goto LAB_14369604c;
  }
  local_50 = *(longlong *)(param_1 + 0x240);
LAB_14369604c:
  FUN_143695730(param_1,local_50,*(longlong *)(param_2 + 8) + 1);
  return;
}



// FUNCTION 143696080 FUN_143696080 body=547 status=ok
// SIG undefined FUN_143696080(void)

void FUN_143696080(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  void *_Dst;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  
  *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
  if (*(uint *)(param_1 + 0x1f8) <= *(uint *)(param_1 + 0x20c)) {
    if (*(char *)(param_1 + 0x26c) != '\0') {
      *(undefined4 *)(param_1 + 0x20c) = 0;
      if ((*(byte *)(param_1 + 0x15c) & 2) == 0) {
        do {
          *(char *)(param_1 + 0x26d) = *(char *)(param_1 + 0x26d) + '\x01';
          bVar6 = *(byte *)(param_1 + 0x26d);
          if (6 < bVar6) goto LAB_1436961f0;
          bVar2 = (&UNK_145b62950)[bVar6];
          uVar3 = (*(int *)(param_1 + 0x1f0) + -1 +
                  ((uint)(byte)(&UNK_145b62948)[bVar6] - (uint)(byte)(&UNK_145b62940)[bVar6])) /
                  (uint)(byte)(&UNK_145b62948)[bVar6];
          bVar1 = (&UNK_145b62958)[bVar6];
          *(uint *)(param_1 + 0x1fc) = uVar3;
          uVar4 = (*(int *)(param_1 + 500) + -1 + ((uint)bVar1 - (uint)bVar2)) / (uint)bVar1;
          *(uint *)(param_1 + 0x1f8) = uVar4;
        } while ((uVar3 == 0) || (uVar4 == 0));
      }
      else {
        *(char *)(param_1 + 0x26d) = *(char *)(param_1 + 0x26d) + '\x01';
        bVar6 = *(byte *)(param_1 + 0x26d);
      }
      if (bVar6 < 7) {
        _Dst = *(void **)(param_1 + 0x218);
        if (_Dst == (void *)0x0) {
          return;
        }
        bVar6 = *(byte *)(param_1 + 0x271);
        bVar2 = *(byte *)(param_1 + 0x274);
        if (7 < (uint)bVar6 * (uint)bVar2) {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,0,((ulonglong)bVar6 * (ulonglong)bVar2 >> 3) *
                            (ulonglong)*(uint *)(param_1 + 0x1f0) + 1);
          return;
        }
        _guard_xfg_dispatch_icall_nop
                  (_Dst,0,((ulonglong)*(uint *)(param_1 + 0x1f0) * (ulonglong)bVar6 *
                           (ulonglong)bVar2 + 7 >> 3) + 1);
        return;
      }
    }
LAB_1436961f0:
    while (iVar5 = FUN_14369d3f0(param_1 + 0x160,4), iVar5 == 0) {
      if (*(int *)(param_1 + 0x178) == 0) {
        FUN_143694ab0(param_1,*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
        *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b8);
        *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1c0);
      }
    }
    if (iVar5 != 1) {
      if (*(longlong *)(param_1 + 0x180) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1,"zlib error");
      }
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1);
    }
    if (*(uint *)(param_1 + 0x178) < *(uint *)(param_1 + 0x1c0)) {
      FUN_143694ab0(param_1,*(undefined8 *)(param_1 + 0x1b8),
                    *(uint *)(param_1 + 0x1c0) - *(uint *)(param_1 + 0x178));
    }
    FUN_143697540(param_1);
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 1436962b0 FUN_1436962b0 body=49 status=ok
// SIG undefined FUN_1436962b0(void)

void FUN_1436962b0(undefined8 param_1)

{
  undefined1 local_res18 [16];
  
  FUN_1436947a0(local_res18);
  FUN_1436954e0(param_1,0x67414d41,local_res18,4);
  return;
}



// FUNCTION 1436962f0 FUN_1436962f0 body=167 status=ok
// SIG undefined FUN_1436962f0(void)

void FUN_1436962f0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 local_res18 [8];
  
  if ((int)(uint)*(ushort *)(param_1 + 0x260) < param_3) {
    FUN_1436941c0(param_1,"Invalid number of histogram entries specified");
    return;
  }
  FUN_143695440(param_1,0x68495354,param_3 * 2);
  lVar1 = 0;
  if (0 < (longlong)param_3) {
    do {
      FUN_143694790(local_res18,*(undefined2 *)(param_2 + lVar1 * 2));
      FUN_1436953b0(param_1,local_res18,2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_3);
  }
  FUN_143695400(param_1);
  return;
}



// FUNCTION 1436963a0 FUN_1436963a0 body=371 status=ok
// SIG undefined FUN_1436963a0(void)

void FUN_1436963a0(undefined8 param_1,longlong param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  iVar2 = 0;
  local_28 = 0;
  lVar3 = -1;
  local_20 = 0;
  local_38 = 0;
  local_30 = 0;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_2 + lVar3) != '\0');
  if (param_3 != 0) {
    FUN_1436941c0(param_1,"Unknown compression type in iCCP chunk");
  }
  iVar1 = iVar2;
  if (param_4 != (char *)0x0) {
    iVar1 = param_5;
  }
  if ((iVar1 < 4) ||
     (iVar2 = CONCAT31(CONCAT21(CONCAT11(*param_4,param_4[1]),param_4[2]),param_4[3]), -1 < *param_4
     )) {
    if (iVar1 < iVar2) {
      FUN_1436941c0(param_1,"Embedded profile length too large in iCCP chunk");
    }
    else {
      if (iVar2 < iVar1) {
        FUN_1436941c0(param_1,"Truncating profile to actual length in iCCP chunk");
        iVar1 = iVar2;
      }
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = FUN_1436947c0(param_1,param_4,(longlong)iVar1,0,&local_38);
      }
      FUN_143695440(param_1,0x69434350,iVar2 + 2 + (int)lVar3);
      FUN_1436953b0(param_1,param_2,lVar3);
      param_5 = (uint)CONCAT21((short)((uint)param_5 >> 0x10),(char)param_3) << 8;
      FUN_1436953b0(param_1,&param_5,2);
      if (iVar2 != 0) {
        FUN_143695550(param_1,&local_38,(longlong)iVar2);
      }
      FUN_143695400(param_1);
    }
  }
  else {
    FUN_1436941c0(param_1,"Embedded profile length in iCCP chunk is negative");
  }
  return;
}



// FUNCTION 143696520 FUN_143696520 body=401 status=ok
// SIG undefined FUN_143696520(void)

void FUN_143696520(undefined8 param_1,int param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  longlong lVar5;
  
  puVar1 = param_5;
  lVar6 = 0;
  local_38 = 0;
  local_30 = 0;
  local_48[0] = 0;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_3 + lVar4) != '\0');
  lVar7 = lVar6;
  if (param_4 != (undefined8 *)0x0) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)((longlong)param_4 + lVar7) != '\0');
  }
  if (param_5 != (undefined8 *)0x0) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)param_5 + lVar6) != '\0');
  }
  if (param_6 != 0) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(param_6 + lVar8) != '\0');
  }
  iVar2 = FUN_1436947c0();
  FUN_143695440(param_1,0x69545874,(int)lVar7 + 5 + (int)lVar4 + (int)lVar6 + iVar2);
  FUN_1436953b0(param_1,param_3,lVar5 + 2);
  param_5._1_1_ = 0;
  param_5._0_1_ = (param_2 + 1U & 0xfffffffd) != 0;
  FUN_1436953b0(param_1,&param_5,2);
  param_5._0_1_ = 0;
  puVar3 = &param_5;
  if (param_4 != (undefined8 *)0x0) {
    puVar3 = param_4;
  }
  FUN_1436953b0(param_1,puVar3,lVar7 + 1);
  puVar3 = &param_5;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  FUN_1436953b0(param_1,puVar3,lVar6 + 1);
  FUN_143695550(param_1,local_48,(longlong)iVar2);
  FUN_143695400(param_1);
  return;
}



// FUNCTION 1436966c0 FUN_1436966c0 body=151 status=ok
// SIG undefined FUN_1436966c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436966c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (1 < param_4) {
    FUN_1436941c0(param_1,"Unrecognized unit type for oFFs chunk");
  }
  thunk_FUN_1436947a0(local_28,param_2);
  thunk_FUN_1436947a0(local_24,param_3);
  local_20 = (char)param_4;
  FUN_1436954e0(param_1,0x6f464673,local_28,9);
  return;
}



// FUNCTION 143696760 FUN_143696760 body=481 status=ok
// SIG undefined FUN_143696760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143696760(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,uint param_6,longlong param_7,undefined8 *param_8)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50;
  undefined1 local_4f;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar5 = (ulonglong)param_6;
  local_60 = param_7;
  local_68 = param_3;
  local_64 = param_4;
  if (3 < param_5) {
    FUN_1436941c0(param_1,"Unrecognized equation type for pCAL chunk");
  }
  lVar3 = -1;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + 1;
  } while (*(char *)(lVar4 + 1 + param_2) != '\0');
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(local_60 + lVar3) != '\0');
  lVar3 = lVar3 + (ulonglong)(param_6 != 0);
  uVar8 = lVar4 + 0xc + lVar3;
  plVar1 = (longlong *)FUN_1436924c0(param_1,(longlong)(int)param_6 << 3);
  iVar7 = 0;
  if (0 < (int)param_6) {
    plVar6 = plVar1;
    do {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(*(longlong *)(((longlong)param_8 - (longlong)plVar1) + (longlong)plVar6) +
                        lVar2) != '\0');
      bVar9 = iVar7 != param_6 - 1;
      iVar7 = iVar7 + 1;
      lVar2 = (ulonglong)bVar9 + lVar2;
      *plVar6 = lVar2;
      uVar8 = uVar8 + lVar2;
      plVar6 = plVar6 + 1;
    } while (iVar7 < (int)param_6);
  }
  FUN_143695440(param_1,0x7043414c,uVar8 & 0xffffffff);
  FUN_1436953b0(param_1,param_2,lVar4 + 2);
  thunk_FUN_1436947a0(local_58,local_68);
  thunk_FUN_1436947a0(local_54,local_64);
  local_50 = (undefined1)param_5;
  local_4f = (undefined1)param_6;
  FUN_1436953b0(param_1,local_58,10);
  FUN_1436953b0(param_1,local_60,lVar3);
  if (0 < (int)param_6) {
    lVar3 = (longlong)plVar1 - (longlong)param_8;
    do {
      FUN_1436953b0(param_1,*param_8,*(undefined8 *)(lVar3 + (longlong)param_8));
      param_8 = param_8 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_143692480(param_1,plVar1);
  FUN_143695400(param_1);
  return;
}



// FUNCTION 143696950 FUN_143696950 body=151 status=ok
// SIG undefined FUN_143696950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143696950(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (1 < param_4) {
    FUN_1436941c0(param_1,"Unrecognized unit type for pHYs chunk");
  }
  FUN_1436947a0(local_28,param_2);
  FUN_1436947a0(local_24,param_3);
  local_20 = (char)param_4;
  FUN_1436954e0(param_1,0x70485973,local_28,9);
  return;
}



// FUNCTION 1436969f0 FUN_1436969f0 body=196 status=ok
// SIG undefined FUN_1436969f0(void)

void FUN_1436969f0(longlong param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  byte local_res18 [16];
  
  if ((param_3 & 2) == 0) {
    bVar4 = param_2[3];
    if ((bVar4 == 0) || (*(byte *)(param_1 + 0x271) < bVar4)) goto LAB_143696aa3;
    lVar5 = 1;
    local_res18[0] = bVar4;
  }
  else {
    bVar4 = 8;
    if (param_3 != 3) {
      bVar4 = *(byte *)(param_1 + 0x271);
    }
    bVar1 = *param_2;
    if ((bVar1 == 0) || (bVar4 < bVar1)) goto LAB_143696aa3;
    bVar2 = param_2[1];
    if ((bVar2 == 0) || (((bVar4 < bVar2 || (bVar3 = param_2[2], bVar3 == 0)) || (bVar4 < bVar3))))
    goto LAB_143696aa3;
    lVar5 = 3;
    local_res18[0] = bVar1;
    local_res18[1] = bVar2;
    local_res18[2] = bVar3;
  }
  if ((param_3 & 4) != 0) {
    bVar4 = param_2[4];
    if ((bVar4 == 0) || (*(byte *)(param_1 + 0x271) < bVar4)) {
LAB_143696aa3:
      FUN_1436941c0(param_1,"Invalid sBIT depth specified");
      return;
    }
    local_res18[lVar5] = bVar4;
    lVar5 = lVar5 + 1;
  }
  FUN_1436954e0(param_1,0x73424954,local_res18,lVar5);
  return;
}



// FUNCTION 143696ac0 FUN_143696ac0 body=186 status=ok
// SIG undefined FUN_143696ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143696ac0(undefined8 param_1,undefined1 param_2,void *param_3,void *param_4)

{
  longlong lVar1;
  size_t _Size;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_77 [2];
  undefined1 auStack_75 [61];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  _Size = 0xffffffffffffffff;
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (*(char *)((longlong)param_3 + lVar3 + 1) != '\0');
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)param_4 + _Size) != '\0');
  uVar2 = lVar3 + 3 + _Size;
  if (uVar2 < 0x41) {
    local_78 = param_2;
    _guard_xfg_dispatch_icall_nop(local_77,param_3,lVar3 + 2);
    _guard_xfg_dispatch_icall_nop(auStack_75 + lVar3,param_4,_Size);
    FUN_1436954e0(param_1,0x7343414c,&local_78,uVar2);
  }
  else {
    FUN_1436941c0(param_1,"Can\'t write sCAL (buffer too small)");
  }
  return;
}



// FUNCTION 143696b80 FUN_143696b80 body=363 status=ok
// SIG undefined FUN_143696b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143696b80(undefined8 param_1,longlong *param_2)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined2 *puVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34 [2];
  undefined1 local_32 [2];
  undefined1 local_30 [8];
  ulonglong local_28;
  longlong lVar5;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  iVar7 = 10;
  if ((char)param_2[1] == '\b') {
    iVar7 = 6;
  }
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(*param_2 + lVar4) != '\0');
  FUN_143695440(param_1,0x73504c54,(int)param_2[3] * iVar7 + 2 + (int)lVar4);
  FUN_1436953b0(param_1,*param_2,lVar5 + 2);
  FUN_1436953b0(param_1,param_2 + 1,1);
  uVar2 = param_2[2];
  if (uVar2 < uVar2 + (longlong)(int)param_2[3] * 10) {
    puVar6 = (undefined2 *)(uVar2 + 4);
    do {
      if ((char)param_2[1] == '\b') {
        local_38 = *(undefined1 *)(puVar6 + -2);
        puVar3 = local_34;
        local_37 = *(undefined1 *)(puVar6 + -1);
        local_36 = *(undefined1 *)puVar6;
        local_35 = *(undefined1 *)(puVar6 + 1);
      }
      else {
        FUN_143694790(&local_38,puVar6[-2]);
        FUN_143694790(&local_36,puVar6[-1]);
        FUN_143694790(local_34,*puVar6);
        FUN_143694790(local_32,puVar6[1]);
        puVar3 = local_30;
      }
      FUN_143694790(puVar3,puVar6[2]);
      FUN_1436953b0(param_1,&local_38,iVar7);
      puVar1 = puVar6 + 3;
      puVar6 = puVar6 + 5;
    } while (puVar1 < (undefined2 *)(param_2[2] + (longlong)(int)param_2[3] * 10));
  }
  FUN_143695400(param_1);
  return;
}



// FUNCTION 143696cf0 FUN_143696cf0 body=72 status=ok
// SIG undefined FUN_143696cf0(void)

void FUN_143696cf0(undefined8 param_1,int param_2)

{
  undefined1 local_res10 [24];
  
  if (3 < param_2) {
    FUN_1436941c0(param_1,"Invalid sRGB rendering intent specified");
  }
  local_res10[0] = (undefined1)param_2;
  FUN_1436954e0(param_1,0x73524742,local_res10,1);
  return;
}



// FUNCTION 143696d40 FUN_143696d40 body=118 status=ok
// SIG undefined FUN_143696d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143696d40(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  local_18 = 0x474e5089;
  local_14 = 0xa1a0a0d;
  *(undefined4 *)(param_1 + 0x480) = 0x12;
  FUN_143692200(param_1,(longlong)&local_18 + (ulonglong)*(byte *)(param_1 + 0x275),
                (longlong)(int)(8 - (uint)*(byte *)(param_1 + 0x275)));
  if (*(byte *)(param_1 + 0x275) < 3) {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x1000;
  }
  return;
}



// FUNCTION 143696dc0 FUN_143696dc0 body=416 status=ok
// SIG undefined FUN_143696dc0(void)

void FUN_143696dc0(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x274) * (uint)*(byte *)(param_1 + 0x271);
  if (uVar4 < 8) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x1f0) * (longlong)(int)uVar4 + 7 >> 3;
  }
  else {
    uVar3 = ((ulonglong)(longlong)(int)uVar4 >> 3) * (ulonglong)*(uint *)(param_1 + 0x1f0);
  }
  *(char *)(param_1 + 0x276) = (char)uVar4;
  *(undefined1 *)(param_1 + 0x277) = *(undefined1 *)(param_1 + 0x272);
  puVar1 = (undefined1 *)FUN_1436924c0(param_1,uVar3 + 1);
  *(undefined1 **)(param_1 + 0x220) = puVar1;
  *puVar1 = 0;
  if ((*(byte *)(param_1 + 0x26e) & 0x10) != 0) {
    puVar1 = (undefined1 *)FUN_1436924c0(param_1,*(longlong *)(param_1 + 0x200) + 1);
    *(undefined1 **)(param_1 + 0x228) = puVar1;
    *puVar1 = 1;
  }
  if ((*(byte *)(param_1 + 0x26e) & 0xe0) != 0) {
    uVar2 = FUN_143692310(param_1,uVar3 + 1);
    *(undefined8 *)(param_1 + 0x218) = uVar2;
    if ((*(byte *)(param_1 + 0x26e) & 0x20) != 0) {
      puVar1 = (undefined1 *)FUN_1436924c0(param_1,*(longlong *)(param_1 + 0x200) + 1);
      *(undefined1 **)(param_1 + 0x230) = puVar1;
      *puVar1 = 2;
    }
    if ((*(byte *)(param_1 + 0x26e) & 0x40) != 0) {
      puVar1 = (undefined1 *)FUN_1436924c0(param_1,*(longlong *)(param_1 + 0x200) + 1);
      *(undefined1 **)(param_1 + 0x238) = puVar1;
      *puVar1 = 3;
    }
    if (*(char *)(param_1 + 0x26e) < '\0') {
      puVar1 = (undefined1 *)FUN_1436924c0(param_1,*(longlong *)(param_1 + 0x200) + 1);
      *(undefined1 **)(param_1 + 0x240) = puVar1;
      *puVar1 = 4;
    }
  }
  if ((*(char *)(param_1 + 0x26c) == '\0') || ((*(byte *)(param_1 + 0x15c) & 2) != 0)) {
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 500);
    uVar4 = *(uint *)(param_1 + 0x1f0);
  }
  else {
    *(uint *)(param_1 + 0x1f8) = *(int *)(param_1 + 500) + 7U >> 3;
    uVar4 = *(int *)(param_1 + 0x1f0) + 7U >> 3;
  }
  *(uint *)(param_1 + 0x1fc) = uVar4;
  FUN_143697330(param_1,1);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b8);
  return;
}



// FUNCTION 143696f60 FUN_143696f60 body=169 status=ok
// SIG undefined FUN_143696f60(void)

void FUN_143696f60(undefined8 param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = -1;
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (*(char *)(lVar3 + 1 + param_2) != '\0');
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    lVar2 = 0;
  }
  else {
    do {
      lVar2 = lVar2 + 1;
    } while (param_3[lVar2] != '\0');
  }
  FUN_143695440(param_1,0x74455874,(int)(lVar3 + 1) + 1 + (int)lVar2);
  FUN_1436953b0(param_1,param_2,lVar3 + 2);
  if (lVar2 != 0) {
    FUN_1436953b0(param_1,param_3,lVar2);
  }
  FUN_143695400(param_1);
  return;
}



// FUNCTION 143697010 FUN_143697010 body=207 status=ok
// SIG undefined FUN_143697010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143697010(undefined8 param_1,undefined2 *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [2];
  char local_26;
  char local_25;
  byte local_24;
  undefined1 local_23;
  byte local_22;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  cVar1 = *(char *)(param_2 + 1);
  if (((((byte)(cVar1 - 1U) < 0xc) &&
       (cVar2 = *(char *)((longlong)param_2 + 3), (byte)(cVar2 - 1U) < 0x1f)) &&
      (bVar3 = *(byte *)(param_2 + 2), bVar3 < 0x18)) &&
     (bVar4 = *(byte *)(param_2 + 3), bVar4 < 0x3d)) {
    FUN_143694790(local_28,*param_2);
    local_23 = *(undefined1 *)((longlong)param_2 + 5);
    local_26 = cVar1;
    local_25 = cVar2;
    local_24 = bVar3;
    local_22 = bVar4;
    FUN_1436954e0(param_1,0x74494d45,local_28,7);
  }
  else {
    FUN_1436941c0(param_1,"Invalid time specified for tIME chunk");
  }
  return;
}



// FUNCTION 1436970e0 FUN_1436970e0 body=296 status=ok
// SIG undefined FUN_1436970e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436970e0(longlong param_1,undefined8 param_2,longlong param_3,int param_4,int param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  char local_18 [2];
  char local_16 [2];
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if (param_5 == 3) {
    if ((0 < param_4) && (param_4 <= (int)(uint)*(ushort *)(param_1 + 0x260))) {
      FUN_1436954e0(param_1,0x74524e53,param_2,(longlong)param_4);
      return;
    }
    pcVar1 = "Invalid number of transparent colors specified";
  }
  else if (param_5 == 0) {
    if ((int)(uint)*(ushort *)(param_3 + 8) < 1 << (*(byte *)(param_1 + 0x270) & 0x1f)) {
      FUN_143694790(local_18);
      uVar2 = 2;
LAB_1436971d0:
      FUN_1436954e0(param_1,0x74524e53,local_18,uVar2);
      return;
    }
    pcVar1 = "Ignoring attempt to write tRNS chunk out-of-range for bit_depth";
  }
  else if (param_5 == 2) {
    FUN_143694790(local_18,*(undefined2 *)(param_3 + 2));
    FUN_143694790(local_16,*(undefined2 *)(param_3 + 4));
    FUN_143694790(local_14,*(undefined2 *)(param_3 + 6));
    if ((*(char *)(param_1 + 0x270) != '\b') ||
       ((local_14[0] == '\0' && local_18[0] == '\0') && local_16[0] == '\0')) {
      uVar2 = 6;
      goto LAB_1436971d0;
    }
    pcVar1 = "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8";
  }
  else {
    pcVar1 = "Can\'t write tRNS with an alpha channel";
  }
  FUN_1436941c0(param_1,pcVar1);
  return;
}



// FUNCTION 143697210 FUN_143697210 body=273 status=ok
// SIG undefined FUN_143697210(void)

void FUN_143697210(undefined8 param_1,longlong param_2,char *param_3,undefined8 param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res18 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar4 = -1;
  local_28 = 0;
  local_20 = 0;
  local_38 = 0;
  local_30 = 0;
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (*(char *)(param_2 + 1 + lVar3) != '\0');
  if (((param_3 != (char *)0x0) && (*param_3 != '\0')) && (param_5 != -1)) {
    do {
      lVar4 = lVar4 + 1;
    } while (param_3[lVar4] != '\0');
    iVar2 = FUN_1436947c0(param_1,param_3,lVar4,param_5,&local_38);
    FUN_143695440(param_1,0x7a545874,(int)(lVar3 + 1) + 2 + iVar2);
    FUN_1436953b0(param_1,param_2,lVar3 + 2);
    local_res18[0] = (undefined1)param_5;
    FUN_1436953b0(param_1,local_res18,1);
    FUN_143695550(param_1,&local_38,(longlong)iVar2);
    FUN_143695400(param_1);
    return;
  }
  FUN_143696f60(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 143697330 FUN_143697330 body=520 status=ok
// SIG undefined FUN_143697330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143697330(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  char *local_68;
  undefined4 local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(param_1 + 0x1c4);
  if ((uVar1 & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"zstream already in use (internal error)");
  }
  if (uVar1 != param_2) {
    if (uVar1 != 0) {
      iVar2 = deflateEnd(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x1c4) = 0;
      puVar4 = &DAT_145b2e34c;
      if (iVar2 != 0) goto LAB_143697493;
    }
    if (param_2 == 1) {
      local_60 = 0x58;
      local_68 = "1.2.7";
      local_70 = *(undefined4 *)(param_1 + 0x1d8);
      local_78 = *(undefined4 *)(param_1 + 0x1d4);
      iVar2 = deflateInit2_(param_1 + 0x160,*(undefined4 *)(param_1 + 0x1c8),
                            *(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x1d0));
      puVar4 = &DAT_145b6221c;
    }
    else {
      if (param_2 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1,"invalid zlib state");
      }
      local_60 = 0x58;
      local_68 = "1.2.7";
      local_70 = *(undefined4 *)(param_1 + 0x1ec);
      local_78 = *(undefined4 *)(param_1 + 0x1e8);
      iVar2 = deflateInit2_(param_1 + 0x160,*(undefined4 *)(param_1 + 0x1dc),
                            *(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4));
      puVar4 = &DAT_145b0907c;
    }
    if (iVar2 != 0) {
LAB_143697493:
      uVar3 = FUN_143694140(local_58,0x40,0,"zlib failed to initialize compressor (");
      uVar3 = FUN_143694140(local_58,0x40,uVar3,puVar4);
      if (iVar2 == -6) {
        pcVar5 = ") version error";
      }
      else if (iVar2 == -4) {
        pcVar5 = ") memory error";
      }
      else if (iVar2 == -2) {
        pcVar5 = ") stream error";
      }
      else {
        pcVar5 = ") unknown error";
      }
      FUN_143694140(local_58,0x40,uVar3,pcVar5);
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,local_58);
    }
    *(uint *)(param_1 + 0x1c4) = param_2;
  }
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) | 4;
  return;
}



// FUNCTION 143697540 FUN_143697540 body=269 status=ok
// SIG undefined FUN_143697540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143697540(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_138 [32];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_1 + 0x1c4) & 4) == 0) {
    FUN_1436941c0(param_1,"zstream not in use (internal error)");
  }
  else {
    iVar1 = deflateReset(param_1 + 0x160);
    *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) & 0xfffffffb;
    if (iVar1 != 0) {
      if (iVar1 == -6) {
        pcVar2 = "version";
      }
      else if (iVar1 == -4) {
        pcVar2 = "memory";
      }
      else {
        pcVar2 = "unknown";
        if (iVar1 == -2) {
          pcVar2 = "stream";
        }
      }
      FUN_143694250(local_118,1,1,iVar1);
      FUN_143694220(local_118,2,pcVar2);
      pcVar2 = "[no zlib message]";
      if (*(char **)(param_1 + 0x180) != (char *)0x0) {
        pcVar2 = *(char **)(param_1 + 0x180);
      }
      FUN_143694220(local_118,3,pcVar2);
      FUN_143693fd0(param_1,local_118,"zlib failed to reset compressor: @1(@2): @3");
    }
  }
  return;
}



// FUNCTION 143697650 FUN_143697650 body=371 status=ok
// SIG undefined FUN_143697650(void)

void FUN_143697650(uint *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  if ((*(char *)((longlong)param_1 + 0x11) == '\b') &&
     (*(char *)((longlong)param_1 + 0x12) == '\x01')) {
    if (param_3 == 1) {
      uVar6 = (ulonglong)*param_1;
      uVar3 = 0;
      uVar4 = 0x80;
      pbVar5 = param_2;
      if (*param_1 != 0) {
        do {
          if (*param_2 != 0) {
            uVar3 = uVar3 | uVar4;
          }
          param_2 = param_2 + 1;
          if (uVar4 < 2) {
            *pbVar5 = (byte)uVar3;
            uVar4 = 0x80;
            pbVar5 = pbVar5 + 1;
            uVar3 = 0;
          }
          else {
            uVar4 = (int)uVar4 >> 1;
          }
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if (uVar4 != 0x80) {
          *pbVar5 = (byte)uVar3;
        }
      }
    }
    else if (param_3 == 2) {
      uVar4 = 0;
      iVar2 = 6;
      if (*param_1 != 0) {
        uVar6 = (ulonglong)*param_1;
        pbVar5 = param_2;
        do {
          uVar4 = uVar4 | (*param_2 & 3) << ((byte)iVar2 & 0x1f);
          if (iVar2 == 0) {
            *pbVar5 = (byte)uVar4;
            iVar2 = 6;
            pbVar5 = pbVar5 + 1;
            uVar4 = 0;
          }
          else {
            iVar2 = iVar2 + -2;
          }
          param_2 = param_2 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if (iVar2 != 6) {
          *pbVar5 = (byte)uVar4;
        }
      }
    }
    else if (param_3 == 4) {
      uVar4 = 0;
      iVar2 = 4;
      if (*param_1 != 0) {
        uVar6 = (ulonglong)*param_1;
        pbVar5 = param_2;
        do {
          uVar4 = uVar4 | (*param_2 & 0xf) << ((byte)iVar2 & 0x1f);
          if (iVar2 == 0) {
            *pbVar5 = (byte)uVar4;
            iVar2 = 4;
            pbVar5 = pbVar5 + 1;
            uVar4 = 0;
          }
          else {
            iVar2 = iVar2 + -4;
          }
          param_2 = param_2 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if (iVar2 != 4) {
          *pbVar5 = (byte)uVar4;
        }
      }
    }
    bVar1 = (char)param_3 * *(char *)((longlong)param_1 + 0x12);
    *(char *)((longlong)param_1 + 0x11) = (char)param_3;
    *(byte *)((longlong)param_1 + 0x13) = bVar1;
    if (7 < bVar1) {
      *(ulonglong *)(param_1 + 2) = (ulonglong)(bVar1 >> 3) * (ulonglong)*param_1;
      return;
    }
    *(ulonglong *)(param_1 + 2) = (ulonglong)*param_1 * (ulonglong)bVar1 + 7 >> 3;
  }
  return;
}



// FUNCTION 1436977d0 FUN_1436977d0 body=694 status=ok
// SIG undefined FUN_1436977d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436977d0(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  longlong lVar12;
  int local_58 [4];
  uint local_48 [4];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)local_58;
  bVar5 = *(byte *)(param_1 + 4);
  if (bVar5 != 3) {
    if ((bVar5 & 2) == 0) {
      bVar2 = param_3[3];
      lVar12 = 1;
      local_58[0] = (uint)*(byte *)((longlong)param_1 + 0x11) - (uint)bVar2;
    }
    else {
      bVar1 = *(byte *)((longlong)param_1 + 0x11);
      lVar12 = 3;
      bVar2 = *param_3;
      local_58[1] = (uint)bVar1 - (uint)param_3[1];
      local_58[0] = (uint)bVar1 - (uint)bVar2;
      local_48[1] = (uint)param_3[1];
      local_58[2] = (uint)bVar1 - (uint)param_3[2];
      local_48[2] = (uint)param_3[2];
    }
    uVar6 = (uint)bVar2;
    uVar11 = (uint)lVar12;
    local_48[0] = uVar6;
    if ((bVar5 & 4) != 0) {
      bVar5 = param_3[4];
      bVar2 = *(byte *)((longlong)param_1 + 0x11);
      local_48[lVar12] = (uint)bVar5;
      uVar11 = uVar11 + 1;
      local_58[lVar12] = (uint)bVar2 - (uint)bVar5;
    }
    bVar5 = *(byte *)((longlong)param_1 + 0x11);
    if (bVar5 < 8) {
      lVar12 = *(longlong *)(param_1 + 2);
      if ((param_3[3] == 1) && (bVar5 == 2)) {
        bVar5 = 0x55;
      }
      else if ((bVar5 != 4) || (bVar5 = 0x11, param_3[3] != 3)) {
        bVar5 = 0xff;
      }
      if (lVar12 != 0) {
        do {
          bVar2 = *param_2;
          *param_2 = 0;
          for (iVar7 = local_58[0]; (int)-uVar6 < iVar7; iVar7 = iVar7 - uVar6) {
            if (iVar7 < 1) {
              *param_2 = *param_2 | bVar2 >> (-(byte)iVar7 & 0x1f) & bVar5;
            }
            else {
              *param_2 = *param_2 | bVar2 << ((byte)iVar7 & 0x1f);
            }
          }
          param_2 = param_2 + 1;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
    }
    else if (bVar5 == 8) {
      iVar7 = *param_1;
      uVar6 = 0;
      if (iVar7 * uVar11 != 0) {
        do {
          bVar5 = *param_2;
          *param_2 = 0;
          uVar3 = local_48[(int)(uVar6 % uVar11)];
          for (iVar8 = local_58[(int)(uVar6 % uVar11)]; (int)-uVar3 < iVar8; iVar8 = iVar8 - uVar3)
          {
            if (iVar8 < 1) {
              *param_2 = *param_2 | bVar5 >> (-(byte)iVar8 & 0x1f);
            }
            else {
              *param_2 = *param_2 | bVar5 << ((byte)iVar8 & 0x1f);
            }
          }
          uVar6 = uVar6 + 1;
          param_2 = param_2 + 1;
        } while (uVar6 < iVar7 * uVar11);
      }
    }
    else {
      iVar7 = *param_1;
      uVar6 = 0;
      if (iVar7 * uVar11 != 0) {
        do {
          uVar9 = 0;
          uVar10 = (ushort)*param_2 * 0x100 + (ushort)param_2[1];
          for (iVar8 = local_58[(int)(uVar6 % uVar11)];
              (int)-local_48[(int)(uVar6 % uVar11)] < iVar8;
              iVar8 = iVar8 - local_48[(int)(uVar6 % uVar11)]) {
            if (iVar8 < 1) {
              uVar4 = uVar10 >> (-(byte)iVar8 & 0x1f);
            }
            else {
              uVar4 = uVar10 << ((byte)iVar8 & 0x1f);
            }
            uVar9 = uVar9 | uVar4;
          }
          uVar6 = uVar6 + 1;
          *param_2 = (byte)(uVar9 >> 8);
          param_2[1] = (byte)uVar9;
          param_2 = param_2 + 2;
        } while (uVar6 < iVar7 * uVar11);
      }
    }
  }
  return;
}



// FUNCTION 143697a90 FUN_143697a90 body=218 status=ok
// SIG undefined FUN_143697a90(void)

void FUN_143697a90(uint *param_1,char *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  bVar1 = (byte)param_1[4];
  if ((bVar1 & 2) != 0) {
    uVar4 = *param_1;
    uVar2 = (ulonglong)uVar4;
    if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      if (bVar1 == 2) {
        lVar3 = 3;
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        lVar3 = 4;
      }
      if (uVar4 != 0) {
        do {
          *param_2 = *param_2 - param_2[1];
          param_2[2] = param_2[2] - param_2[1];
          param_2 = param_2 + lVar3;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        return;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x11) == '\x10') {
      if (bVar1 == 2) {
        lVar3 = 6;
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        lVar3 = 8;
      }
      if (uVar4 != 0) {
        do {
          uVar4 = (uint)CONCAT11(*param_2,param_2[1]) - (uint)CONCAT11(param_2[2],param_2[3]) &
                  0xffff;
          param_2[1] = (char)uVar4;
          *param_2 = (char)(uVar4 >> 8);
          uVar4 = (uint)CONCAT11(param_2[4],param_2[5]) - (uint)CONCAT11(param_2[2],param_2[3]) &
                  0xffff;
          param_2[5] = (char)uVar4;
          param_2[4] = (char)(uVar4 >> 8);
          param_2 = param_2 + lVar3;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143697b70 FUN_143697b70 body=177 status=ok
// SIG undefined FUN_143697b70(void)

void FUN_143697b70(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  
  if ((char)param_1[4] == '\x06') {
    uVar1 = *param_1;
    uVar2 = (ulonglong)uVar1;
    if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      if (uVar1 != 0) {
        do {
          param_2[3] = ~param_2[3];
          param_2 = param_2 + 4;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        return;
      }
    }
    else if (uVar1 != 0) {
      do {
        param_2[6] = ~param_2[6];
        param_2[7] = ~param_2[7];
        param_2 = param_2 + 8;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      return;
    }
  }
  else if ((char)param_1[4] == '\x04') {
    uVar1 = *param_1;
    uVar2 = (ulonglong)uVar1;
    if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      puVar3 = param_2;
      if (uVar1 != 0) {
        do {
          *puVar3 = *param_2;
          puVar3[1] = ~param_2[1];
          uVar2 = uVar2 - 1;
          param_2 = param_2 + 2;
          puVar3 = puVar3 + 2;
        } while (uVar2 != 0);
        return;
      }
    }
    else if (uVar1 != 0) {
      do {
        param_2[2] = ~param_2[2];
        param_2[3] = ~param_2[3];
        param_2 = param_2 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return;
}



// FUNCTION 143697c30 FUN_143697c30 body=303 status=ok
// SIG undefined FUN_143697c30(void)

void FUN_143697c30(uint *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  if ((char)param_1[4] == '\x06') {
    uVar3 = *param_1;
    uVar5 = (ulonglong)uVar3;
    if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      puVar4 = param_2;
      if (uVar3 != 0) {
        do {
          uVar1 = *puVar4;
          *param_2 = puVar4[1];
          param_2[1] = puVar4[2];
          param_2[2] = puVar4[3];
          param_2[3] = uVar1;
          uVar5 = uVar5 - 1;
          param_2 = param_2 + 4;
          puVar4 = puVar4 + 4;
        } while (uVar5 != 0);
        return;
      }
    }
    else {
      puVar4 = param_2;
      if (uVar3 != 0) {
        do {
          uVar1 = *puVar4;
          uVar2 = puVar4[1];
          *param_2 = puVar4[2];
          param_2[1] = puVar4[3];
          param_2[2] = puVar4[4];
          param_2[3] = puVar4[5];
          param_2[4] = puVar4[6];
          param_2[5] = puVar4[7];
          param_2[6] = uVar1;
          param_2[7] = uVar2;
          uVar5 = uVar5 - 1;
          param_2 = param_2 + 8;
          puVar4 = puVar4 + 8;
        } while (uVar5 != 0);
        return;
      }
    }
  }
  else if ((char)param_1[4] == '\x04') {
    uVar3 = *param_1;
    uVar5 = (ulonglong)uVar3;
    if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      puVar4 = param_2;
      if (uVar3 != 0) {
        do {
          uVar1 = *puVar4;
          *param_2 = puVar4[1];
          param_2[1] = uVar1;
          uVar5 = uVar5 - 1;
          param_2 = param_2 + 2;
          puVar4 = puVar4 + 2;
        } while (uVar5 != 0);
        return;
      }
    }
    else {
      puVar4 = param_2;
      if (uVar3 != 0) {
        do {
          uVar1 = *puVar4;
          uVar2 = puVar4[1];
          *param_2 = puVar4[2];
          param_2[1] = puVar4[3];
          param_2[2] = uVar1;
          param_2[3] = uVar2;
          uVar5 = uVar5 - 1;
          param_2 = param_2 + 4;
          puVar4 = puVar4 + 4;
        } while (uVar5 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143697d60 FUN_143697d60 body=396 status=ok
// SIG undefined FUN_143697d60(void)

void FUN_143697d60(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    if (((*(uint *)(param_1 + 0x15c) & 0x100000) != 0) &&
       (*(code **)(param_1 + 0x140) != (code *)0x0)) {
      (**(code **)(param_1 + 0x140))(param_1,param_2,*(longlong *)(param_1 + 0x220) + 1);
    }
    if ((*(uint *)(param_1 + 0x15c) & 0x8000) != 0) {
      if ((*(byte *)(param_1 + 0x26f) & 5) == 0) {
        FUN_143691d90(param_2,*(longlong *)(param_1 + 0x220) + 1,
                      ~(*(uint *)(param_1 + 0x158) >> 7) & 1);
      }
      else {
        FUN_1436941c0(param_1,"incorrect png_set_filler call ignored");
        *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xffff7fff;
      }
    }
    if ((*(uint *)(param_1 + 0x15c) & 0x10000) != 0) {
      FUN_143691d20(param_2,*(longlong *)(param_1 + 0x220) + 1);
    }
    if ((*(byte *)(param_1 + 0x15c) & 4) != 0) {
      FUN_143697650(param_2,*(longlong *)(param_1 + 0x220) + 1,*(undefined1 *)(param_1 + 0x270));
    }
    if ((*(byte *)(param_1 + 0x15c) & 0x10) != 0) {
      FUN_143691f60(param_2,*(longlong *)(param_1 + 0x220) + 1);
    }
    if ((*(byte *)(param_1 + 0x15c) & 8) != 0) {
      FUN_1436977d0(param_2,*(longlong *)(param_1 + 0x220) + 1,param_1 + 0x2f5);
    }
    if ((*(uint *)(param_1 + 0x15c) & 0x20000) != 0) {
      FUN_143697c30(param_2,*(longlong *)(param_1 + 0x220) + 1);
    }
    if ((*(uint *)(param_1 + 0x15c) & 0x80000) != 0) {
      FUN_143697b70(param_2,*(longlong *)(param_1 + 0x220) + 1);
    }
    if ((*(byte *)(param_1 + 0x15c) & 1) != 0) {
      FUN_143691980(param_2,*(longlong *)(param_1 + 0x220) + 1);
    }
    if ((*(byte *)(param_1 + 0x15c) & 0x20) != 0) {
      FUN_143691c50(param_2,*(longlong *)(param_1 + 0x220) + 1);
    }
  }
  return;
}



// FUNCTION 143697ef0 FUN_143697ef0 body=67 status=ok
// SIG undefined FUN_143697ef0(void)

void FUN_143697ef0(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  while ((uVar1 = (uint)param_2 & 0xff, uVar1 - 0x41 < 0x3a && (5 < uVar1 - 0x5b))) {
    param_2 = param_2 >> 8 & 0xffffff;
    iVar2 = iVar2 + 1;
    if (4 < iVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693b30(param_1,"invalid chunk type");
}



// FUNCTION 143697f40 FUN_143697f40 body=1372 status=ok
// SIG undefined FUN_143697f40(void)

void FUN_143697f40(longlong param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  size_t _Size;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  byte bVar17;
  uint uVar18;
  uint uVar8;
  
  pbVar13 = (byte *)0x0;
  bVar4 = *(byte *)(param_1 + 0x277);
  uVar9 = (ulonglong)bVar4;
  pbVar10 = (byte *)(*(longlong *)(param_1 + 0x220) + 1);
  uVar15 = (ulonglong)*(uint *)(param_1 + 0x1f0);
  bVar17 = 0;
  bVar1 = *(byte *)(param_1 + 0x26d);
  if (bVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"internal row logic error");
  }
  uVar18 = (uint)bVar4;
  if (*(ulonglong *)(param_1 + 0x248) != 0) {
    if (uVar18 < 8) {
      uVar5 = uVar9 * uVar15 + 7 >> 3;
    }
    else {
      uVar5 = (bVar4 >> 3) * uVar15;
    }
    if (*(ulonglong *)(param_1 + 0x248) != uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"internal row size calculation error");
    }
  }
  if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"internal row width error");
  }
  uVar8 = *(uint *)(param_1 + 0x1f0) * uVar18 & 7;
  bVar7 = (byte)uVar8;
  pbVar16 = pbVar13;
  if (uVar8 != 0) {
    if (uVar18 < 8) {
      uVar5 = uVar9 * uVar15 + 7 >> 3;
    }
    else {
      uVar5 = (bVar4 >> 3) * uVar15;
    }
    pbVar16 = param_2 + (uVar5 - 1);
    bVar17 = *pbVar16;
    if ((*(uint *)(param_1 + 0x15c) & 0x10000) == 0) {
      bVar7 = (byte)(0xff >> bVar7);
    }
    else {
      bVar7 = (byte)(0xff << bVar7);
    }
  }
  if ((((*(char *)(param_1 + 0x26c) == '\0') || ((*(uint *)(param_1 + 0x15c) & 2) == 0)) ||
      (5 < bVar1)) || ((param_3 != 0 && ((param_3 != 1 || ((bVar1 & 1) == 0)))))) {
    if (uVar18 < 8) {
      _Size = uVar9 * uVar15 + 7 >> 3;
    }
    else {
      _Size = (bVar4 >> 3) * uVar15;
    }
    _guard_xfg_dispatch_icall_nop(param_2,pbVar10,_Size);
  }
  else {
    uVar8 = (bVar1 & 1) << (3U - (char)(bVar1 + 1 >> 1) & 0x1f);
    if (uVar15 <= (uVar8 & 7)) {
      return;
    }
    if (7 < uVar18) {
      if ((bVar4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1,"invalid user transform pixel depth");
      }
      uVar6 = (uint)(bVar4 >> 3);
      uVar5 = (ulonglong)((uVar8 & 7) * uVar6);
      uVar9 = uVar6 * uVar15 - uVar5;
      param_2 = param_2 + uVar5;
      pbVar10 = pbVar10 + uVar5;
      uVar18 = uVar6;
      if ((param_3 != 0) && (uVar18 = uVar6 << ((byte)(6 - bVar1 >> 1) & 0x1f), uVar9 < uVar18)) {
        uVar18 = (uint)uVar9;
      }
      uVar6 = uVar6 << ((byte)(7 - bVar1 >> 1) & 0x1f);
      uVar15 = (ulonglong)uVar6;
      if (uVar18 == 1) {
        *param_2 = *pbVar10;
        for (; uVar15 < uVar9; uVar9 = uVar9 - uVar15) {
          pbVar10 = pbVar10 + uVar15;
          param_2 = param_2 + uVar15;
          *param_2 = *pbVar10;
        }
        return;
      }
      if (uVar18 == 2) {
        do {
          *param_2 = *pbVar10;
          param_2[1] = pbVar10[1];
          if (uVar9 <= uVar15) {
            return;
          }
          pbVar10 = pbVar10 + uVar15;
          param_2 = param_2 + uVar15;
          uVar9 = uVar9 - uVar15;
        } while (1 < uVar9);
        *param_2 = *pbVar10;
        return;
      }
      if (uVar18 != 3) {
        if (((uVar18 < 0x10) && ((((ulonglong)pbVar10 | (ulonglong)param_2) & 1) == 0)) &&
           (((uVar6 | uVar18) & 1) == 0)) {
          if (((((ulonglong)pbVar10 | (ulonglong)param_2) & 3) == 0) &&
             (((uVar6 | uVar18) & 3) == 0)) {
            uVar12 = (ulonglong)uVar18;
            uVar5 = uVar12;
            while( true ) {
              do {
                uVar3 = *(undefined4 *)pbVar10;
                pbVar10 = pbVar10 + 4;
                *(undefined4 *)param_2 = uVar3;
                param_2 = param_2 + 4;
                uVar5 = uVar5 - 4;
              } while (uVar5 != 0);
              if (uVar9 <= uVar15) break;
              lVar11 = (ulonglong)(uVar6 - uVar18 >> 2) * 4;
              uVar9 = uVar9 - uVar15;
              param_2 = param_2 + lVar11;
              pbVar10 = pbVar10 + lVar11;
              uVar5 = uVar12;
              if (uVar9 < uVar12) {
                lVar11 = (longlong)pbVar10 - (longlong)param_2;
                do {
                  *param_2 = param_2[lVar11];
                  param_2 = param_2 + 1;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
                return;
              }
            }
            return;
          }
          uVar12 = (ulonglong)uVar18;
          uVar14 = (ulonglong)(uVar6 - uVar18 >> 1);
          uVar5 = uVar12;
          while( true ) {
            do {
              uVar2 = *(undefined2 *)pbVar10;
              pbVar10 = pbVar10 + 2;
              *(undefined2 *)param_2 = uVar2;
              param_2 = param_2 + 2;
              uVar5 = uVar5 - 2;
            } while (uVar5 != 0);
            if (uVar9 <= uVar15) break;
            uVar9 = uVar9 - uVar15;
            param_2 = param_2 + uVar14 * 2;
            pbVar10 = pbVar10 + uVar14 * 2;
            uVar5 = uVar12;
            if (uVar9 < uVar12) {
              lVar11 = (longlong)pbVar10 - (longlong)param_2;
              do {
                *param_2 = param_2[lVar11];
                param_2 = param_2 + 1;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
              return;
            }
          }
          return;
        }
        _guard_xfg_dispatch_icall_nop(param_2,pbVar10,(ulonglong)uVar18);
        while (uVar15 < uVar9) {
          pbVar10 = pbVar10 + uVar15;
          param_2 = param_2 + uVar15;
          uVar9 = uVar9 - uVar15;
          if (uVar9 < uVar18) {
            uVar18 = (uint)uVar9;
          }
          _guard_xfg_dispatch_icall_nop(param_2,pbVar10,(ulonglong)uVar18);
        }
        return;
      }
      *param_2 = *pbVar10;
      param_2[1] = pbVar10[1];
      param_2[2] = pbVar10[2];
      for (; uVar15 < uVar9; uVar9 = uVar9 - uVar15) {
        pbVar10 = pbVar10 + uVar15;
        param_2 = param_2 + uVar15;
        *param_2 = *pbVar10;
        param_2[1] = pbVar10[1];
        param_2[2] = pbVar10[2];
      }
      return;
    }
    if ((*(uint *)(param_1 + 0x15c) >> 0x10 & 1) == 0) {
      if (param_3 == 0) {
        if (uVar18 != 1) {
          pbVar13 = (byte *)((ulonglong)(uVar18 != 2) + 1);
        }
        uVar18 = *(uint *)(&DAT_145b63b88 + ((ulonglong)bVar1 + (longlong)pbVar13 * 6) * 4);
      }
      else {
        if (uVar18 != 1) {
          pbVar13 = (byte *)((ulonglong)(uVar18 != 2) + 1);
        }
        uVar18 = *(uint *)(&DAT_145b63bf4 + ((ulonglong)(bVar1 >> 1) + (longlong)pbVar13 * 3) * 4);
      }
    }
    else if (param_3 == 0) {
      if (uVar18 != 1) {
        pbVar13 = (byte *)((ulonglong)(uVar18 != 2) + 1);
      }
      uVar18 = *(uint *)(&DAT_145b63b40 + ((ulonglong)bVar1 + (longlong)pbVar13 * 6) * 4);
    }
    else {
      if (uVar18 != 1) {
        pbVar13 = (byte *)((ulonglong)(uVar18 != 2) + 1);
      }
      uVar18 = *(uint *)(&DAT_145b63bd0 + ((ulonglong)(bVar1 >> 1) + (longlong)pbVar13 * 3) * 4);
    }
    while( true ) {
      bVar4 = (byte)uVar18;
      if (bVar4 != 0) {
        if ((uVar18 & 0xff) == 0xff) {
          *param_2 = *pbVar10;
        }
        else {
          *param_2 = ~bVar4 & *param_2 | *pbVar10 & bVar4;
        }
      }
      if (uVar15 <= 8 / uVar9) break;
      uVar15 = uVar15 - 8 / uVar9;
      param_2 = param_2 + 1;
      pbVar10 = pbVar10 + 1;
      uVar18 = uVar18 >> 8 | uVar18 << 0x18;
    }
  }
  if (pbVar16 != (byte *)0x0) {
    *pbVar16 = ~bVar7 & *pbVar16 | bVar7 & bVar17;
  }
  return;
}



// FUNCTION 1436984a0 FUN_1436984a0 body=185 status=ok
// SIG undefined FUN_1436984a0(void)

bool FUN_1436984a0(longlong param_1)

{
  bool bVar1;
  byte local_res8;
  byte local_res9;
  byte local_resa;
  byte local_resb;
  
  if ((*(uint *)(param_1 + 0x210) & 0x20000000) == 0) {
    bVar1 = true;
    if ((*(uint *)(param_1 + 0x158) & 0x800) != 0) {
      bVar1 = false;
    }
  }
  else {
    bVar1 = (*(uint *)(param_1 + 0x158) & 0x300) != 0x300;
  }
  *(undefined4 *)(param_1 + 0x480) = 0x81;
  FUN_143692280(param_1,&local_res8,4);
  if (bVar1) {
    return (((uint)local_res8 * 0x100 + (uint)local_res9) * 0x100 + (uint)local_resa) * 0x100 +
           (uint)local_resb != *(int *)(param_1 + 0x254);
  }
  return false;
}



// FUNCTION 143698560 FUN_143698560 body=193 status=ok
// SIG undefined FUN_143698560(void)

undefined8 FUN_143698560(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1c0);
  for (uVar3 = (ulonglong)param_2; uVar2 < uVar3; uVar3 = uVar3 - uVar2) {
    FUN_143698630(param_1,*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
  }
  if (uVar3 != 0) {
    FUN_143698630(param_1,*(undefined8 *)(param_1 + 0x1b8),uVar3);
  }
  iVar1 = FUN_1436984a0(param_1);
  if (iVar1 != 0) {
    if ((*(uint *)(param_1 + 0x210) & 0x20000000) == 0) {
      uVar2 = *(uint *)(param_1 + 0x158) & 0x400;
    }
    else {
      uVar2 = ~(*(uint *)(param_1 + 0x158) >> 9) & 1;
    }
    if (uVar2 != 0) {
      FUN_143693b70();
      return 1;
    }
    FUN_143693b10(param_1,"CRC error");
  }
  return 0;
}



// FUNCTION 143698630 FUN_143698630 body=64 status=ok
// SIG undefined FUN_143698630(void)

void FUN_143698630(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    FUN_143692280();
    FUN_143689850(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 143698670 FUN_143698670 body=513 status=ok
// SIG undefined FUN_143698670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143698670(longlong param_1,int param_2,ulonglong param_3,size_t param_4,size_t *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (param_3 < param_4) {
    FUN_1436941c0(param_1,"invalid chunklength");
    param_4 = 0;
  }
  else if (param_2 == 0) {
    local_168 = 0;
    uVar1 = FUN_14369bb80(param_1,*(longlong *)(param_1 + 0x478) + param_4,param_3 - param_4,0);
    if (((param_4 < 0xfffffffffffffffe) && (uVar1 < -param_4 - 2)) &&
       ((*(longlong *)(param_1 + 0x448) == 0 ||
        (param_4 + uVar1 < *(longlong *)(param_1 + 0x448) - 1U)))) {
      if (uVar1 != 0) {
        pvVar3 = (void *)FUN_143692540(param_1,param_4 + uVar1 + 1);
        if (pvVar3 == (void *)0x0) {
          FUN_1436941c0(param_1,"Not enough memory to decompress chunk");
        }
        else {
          _guard_xfg_dispatch_icall_nop(pvVar3,*(void **)(param_1 + 0x478),param_4);
          local_168 = uVar1;
          uVar2 = FUN_14369bb80(param_1,*(longlong *)(param_1 + 0x478) + param_4,param_3 - param_4,
                                param_4 + (longlong)pvVar3);
          *(undefined1 *)(param_4 + (longlong)pvVar3 + uVar1) = 0;
          if (uVar2 == uVar1) {
            FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
            *(void **)(param_1 + 0x478) = pvVar3;
            *param_5 = param_4 + uVar1;
            return;
          }
          FUN_1436941c0(param_1,"png_inflate logic error");
          FUN_143692480(param_1,pvVar3);
        }
      }
    }
    else {
      FUN_1436941c0(param_1,"Exceeded size limit while expanding chunk");
    }
  }
  else {
    FUN_143694250(local_158,1,1,param_2);
    FUN_143693fd0(param_1,local_158,"Unknown compression type @1");
  }
  pvVar3 = (void *)FUN_143692540(param_1,param_4 + 1);
  if (pvVar3 != (void *)0x0) {
    if (param_4 != 0) {
      _guard_xfg_dispatch_icall_nop(pvVar3,*(void **)(param_1 + 0x478),param_4);
    }
    FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
    *(void **)(param_1 + 0x478) = pvVar3;
    *(undefined1 *)(param_4 + (longlong)pvVar3) = 0;
  }
  *param_5 = param_4;
  return;
}



// FUNCTION 143698880 FUN_143698880 body=1059 status=ok
// SIG undefined FUN_143698880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143698880(uint *param_1,longlong param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  void *_Dst;
  void *_Src;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  if ((param_2 != 0) && (local_48 = DAT_1468387a8 ^ (ulonglong)auStack_78, param_1 != (uint *)0x0))
  {
    uVar2 = *param_1;
    bVar1 = *(byte *)((longlong)param_1 + 0x13);
    uVar3 = *(uint *)(&DAT_145b63c18 + (longlong)param_3 * 4);
    uVar4 = (ulonglong)uVar3;
    local_58 = uVar2 * uVar3;
    if (bVar1 == 1) {
      pbVar10 = (byte *)((ulonglong)(local_58 - 1 >> 3) + param_2);
      pbVar18 = (byte *)((ulonglong)(uVar2 - 1 >> 3) + param_2);
      if ((param_4 >> 0x10 & 1) == 0) {
        uVar11 = 7 - (uVar2 - 1 & 7);
        uVar9 = 7 - (local_58 - 1 & 7);
        uVar16 = 0;
        uVar13 = 7;
        iVar12 = 1;
      }
      else {
        uVar16 = 7;
        uVar13 = 0;
        uVar11 = uVar2 - 1 & 7;
        uVar9 = local_58 - 1 & 7;
        iVar12 = -1;
      }
      uVar17 = 0;
      if (uVar2 != 0) {
        do {
          bVar1 = *pbVar18;
          uVar7 = uVar4;
          if (0 < (int)uVar3) {
            do {
              *pbVar10 = (byte)(0x7f7f >> (7 - (byte)uVar9 & 0x1f)) & *pbVar10 |
                         (bVar1 >> ((byte)uVar11 & 0x1f) & 1) << ((byte)uVar9 & 0x1f);
              if (uVar9 == uVar13) {
                pbVar10 = pbVar10 + -1;
                uVar9 = uVar16;
              }
              else {
                uVar9 = uVar9 + iVar12;
              }
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          if (uVar11 == uVar13) {
            pbVar18 = pbVar18 + -1;
            uVar11 = uVar16;
          }
          else {
            uVar11 = uVar11 + iVar12;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *param_1);
      }
    }
    else if (bVar1 == 2) {
      uVar11 = uVar2 - 1 & 3;
      uVar13 = local_58 - 1 & 3;
      pbVar18 = (byte *)((ulonglong)(uVar2 - 1 >> 2) + param_2);
      pbVar10 = (byte *)((ulonglong)(local_58 - 1 >> 2) + param_2);
      if ((param_4 >> 0x10 & 1) == 0) {
        iVar14 = uVar11 * -2 + 6;
        iVar5 = uVar13 * -2 + 6;
        iVar15 = 0;
        iVar12 = 6;
        iVar8 = 2;
      }
      else {
        iVar15 = 6;
        iVar14 = uVar11 * 2;
        iVar5 = uVar13 * 2;
        iVar12 = 0;
        iVar8 = -2;
      }
      uVar13 = 0;
      if (uVar2 != 0) {
        do {
          bVar1 = *pbVar18;
          uVar7 = uVar4;
          if (0 < (int)uVar3) {
            do {
              *pbVar10 = (byte)(0x3f3f >> (6 - (byte)iVar5 & 0x1f)) & *pbVar10 |
                         (bVar1 >> ((byte)iVar14 & 0x1f) & 3) << ((byte)iVar5 & 0x1f);
              if (iVar5 == iVar12) {
                pbVar10 = pbVar10 + -1;
                iVar5 = iVar15;
              }
              else {
                iVar5 = iVar5 + iVar8;
              }
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          if (iVar14 == iVar12) {
            pbVar18 = pbVar18 + -1;
            iVar14 = iVar15;
          }
          else {
            iVar14 = iVar14 + iVar8;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *param_1);
      }
    }
    else if (bVar1 == 4) {
      uVar11 = uVar2 - 1 & 1;
      uVar13 = local_58 - 1 & 1;
      pbVar18 = (byte *)((ulonglong)(uVar2 - 1 >> 1) + param_2);
      pbVar10 = (byte *)((ulonglong)(local_58 - 1 >> 1) + param_2);
      if ((param_4 >> 0x10 & 1) == 0) {
        iVar14 = 4;
        iVar12 = uVar11 * -4 + 4;
        iVar5 = 4;
        iVar8 = uVar13 * -4 + 4;
        iVar15 = 0;
      }
      else {
        iVar15 = 4;
        iVar12 = uVar11 << 2;
        iVar8 = uVar13 << 2;
        iVar14 = 0;
        iVar5 = -4;
      }
      uVar13 = 0;
      if (uVar2 != 0) {
        do {
          bVar1 = *pbVar18;
          uVar7 = uVar4;
          if (0 < (int)uVar3) {
            do {
              *pbVar10 = (byte)(0xf0f >> (4 - (byte)iVar8 & 0x1f)) & *pbVar10 |
                         (bVar1 >> ((byte)iVar12 & 0x1f) & 0xf) << ((byte)iVar8 & 0x1f);
              if (iVar8 == iVar14) {
                pbVar10 = pbVar10 + -1;
                iVar8 = iVar15;
              }
              else {
                iVar8 = iVar8 + iVar5;
              }
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          if (iVar12 == iVar14) {
            pbVar18 = pbVar18 + -1;
            iVar12 = iVar15;
          }
          else {
            iVar12 = iVar12 + iVar5;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *param_1);
      }
    }
    else {
      uVar7 = (ulonglong)(bVar1 >> 3);
      uVar13 = 0;
      _Src = (void *)((uVar2 - 1) * uVar7 + param_2);
      _Dst = (void *)((local_58 - 1) * uVar7 + param_2);
      if (uVar2 != 0) {
        do {
          _guard_xfg_dispatch_icall_nop(local_50,_Src,uVar7);
          uVar6 = uVar4;
          if (0 < (int)uVar3) {
            do {
              _guard_xfg_dispatch_icall_nop(_Dst,local_50,uVar7);
              _Dst = (void *)((longlong)_Dst - uVar7);
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          _Src = (void *)((longlong)_Src - uVar7);
          uVar13 = uVar13 + 1;
        } while (uVar13 < *param_1);
      }
    }
    bVar1 = *(byte *)((longlong)param_1 + 0x13);
    *param_1 = local_58;
    if (bVar1 < 8) {
      uVar4 = (ulonglong)bVar1 * (ulonglong)local_58 + 7 >> 3;
    }
    else {
      uVar4 = (ulonglong)(bVar1 >> 3) * (ulonglong)local_58;
    }
    *(ulonglong *)(param_1 + 2) = uVar4;
  }
  return;
}



// FUNCTION 143698cb0 FUN_143698cb0 body=84 status=ok
// SIG undefined FUN_143698cb0(void)

uint FUN_143698cb0(longlong param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = (((uint)*param_2 * 0x100 + (uint)param_2[1]) * 0x100 + (uint)param_2[2]) * 0x100 +
          (uint)param_2[3];
  if (uVar1 < 0x80000000) {
    return uVar1;
  }
  if (param_1 != 0) {
    FUN_1436941c0(param_1,"PNG fixed point integer out of range");
  }
  return 0xffffffff;
}



// FUNCTION 143698d10 FUN_143698d10 body=70 status=ok
// SIG undefined FUN_143698d10(void)

uint FUN_143698d10(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = (((uint)*param_2 * 0x100 + (uint)param_2[1]) * 0x100 + (uint)param_2[2]) * 0x100 +
          (uint)param_2[3];
  if (uVar1 < 0x80000000) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"PNG unsigned integer out of range");
}



// FUNCTION 143698d60 FUN_143698d60 body=95 status=ok
// SIG undefined FUN_143698d60(void)

void FUN_143698d60(longlong param_1,undefined8 param_2,int param_3)

{
  if (((byte)*(uint *)(param_1 + 0x154) & 5) == 5) {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x18;
    if (param_3 != 0) {
      FUN_1436941c0(param_1,"Incorrect IEND chunk length");
    }
    FUN_143698560(param_1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"No image in file");
}



// FUNCTION 143698dc0 FUN_143698dc0 body=402 status=ok
// SIG undefined FUN_143698dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143698dc0(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_60;
  uint local_58;
  uint local_50;
  uint local_48;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if ((*(uint *)(param_1 + 0x154) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Out of place IHDR");
  }
  if (param_3 == 0xd) {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 1;
    FUN_143698630(param_1,local_38,0xd);
    FUN_143698560(param_1,0);
    uVar1 = FUN_143698d10(param_1,local_38);
    uVar2 = FUN_143698d10(param_1,local_34);
    *(uint *)(param_1 + 0x1f0) = uVar1;
    *(undefined4 *)(param_1 + 500) = uVar2;
    *(byte *)(param_1 + 0x270) = local_30;
    *(byte *)(param_1 + 0x26c) = local_2c;
    *(byte *)(param_1 + 0x26f) = local_2f;
    *(byte *)(param_1 + 0x3fc) = local_2d;
    *(byte *)(param_1 + 0x438) = local_2e;
    if (local_2f == 2) {
      *(undefined1 *)(param_1 + 0x273) = 3;
    }
    else if (local_2f == 4) {
      *(undefined1 *)(param_1 + 0x273) = 2;
    }
    else if (local_2f == 6) {
      *(undefined1 *)(param_1 + 0x273) = 4;
    }
    else {
      *(undefined1 *)(param_1 + 0x273) = 1;
    }
    local_68 = (uint)local_30;
    uVar4 = *(byte *)(param_1 + 0x273) * local_68;
    bVar3 = (byte)uVar4;
    *(byte *)(param_1 + 0x272) = bVar3;
    uVar4 = uVar4 & 0xff;
    if (bVar3 < 8) {
      uVar5 = (ulonglong)uVar4 * (ulonglong)uVar1 + 7 >> 3;
    }
    else {
      uVar5 = (ulonglong)(uVar4 >> 3) * (ulonglong)uVar1;
    }
    local_48 = (uint)local_2d;
    local_50 = (uint)local_2e;
    local_58 = (uint)local_2c;
    local_60 = (uint)local_2f;
    *(ulonglong *)(param_1 + 0x200) = uVar5;
    FUN_143692630(param_1,param_2,uVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Invalid IHDR chunk");
}



// FUNCTION 143698f60 FUN_143698f60 body=525 status=ok
// SIG undefined FUN_143698f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143698f60(longlong param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_368 [32];
  undefined1 local_348;
  undefined1 local_347;
  undefined1 local_346;
  undefined1 local_338 [2];
  undefined1 local_336 [766];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  uVar3 = *(uint *)(param_1 + 0x154);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before PLTE");
  }
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"Duplicate PLTE chunk");
    }
    bVar1 = *(byte *)(param_1 + 0x26f);
    *(uint *)(param_1 + 0x154) = uVar3 | 2;
    if ((bVar1 & 2) == 0) {
      FUN_1436941c0(param_1,"Ignoring PLTE chunk in grayscale PNG");
      FUN_143698560(param_1,param_3);
      return;
    }
    if ((param_3 < 0x301) && (param_3 == (param_3 / 3) * 3)) {
      if (bVar1 == 3) {
        uVar3 = 1 << (*(byte *)(param_1 + 0x270) & 0x1f);
      }
      else {
        uVar3 = 0x100;
      }
      uVar2 = (int)param_3 / 3;
      if ((int)uVar3 < (int)param_3 / 3) {
        uVar2 = uVar3;
      }
      if (0 < (int)uVar2) {
        puVar5 = local_336;
        uVar7 = (ulonglong)uVar2;
        do {
          FUN_143698630(param_1,&local_348,3);
          puVar5[-2] = local_348;
          puVar5[-1] = local_347;
          *puVar5 = local_346;
          uVar7 = uVar7 - 1;
          puVar5 = puVar5 + 3;
        } while (uVar7 != 0);
      }
      FUN_143698560(param_1,param_3 + uVar2 * -3);
      FUN_143692730(param_1,param_2,local_338,(ulonglong)uVar2);
      if (*(char *)(param_1 + 0x26f) != '\x03') {
        return;
      }
      if (param_2 == 0) {
        return;
      }
      if ((*(byte *)(param_2 + 8) & 0x10) == 0) {
        return;
      }
      uVar6 = (ushort)uVar2;
      if (uVar6 < *(ushort *)(param_1 + 0x268)) {
        FUN_1436941c0(param_1,"Truncating incorrect tRNS chunk length");
        *(ushort *)(param_1 + 0x268) = uVar6;
      }
      if (*(ushort *)(param_2 + 0x22) <= uVar6) {
        return;
      }
      FUN_1436941c0(param_1,"Truncating incorrect info tRNS chunk length");
      *(ushort *)(param_2 + 0x22) = uVar6;
      return;
    }
    pcVar4 = "Invalid palette chunk";
    if (bVar1 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"Invalid palette chunk");
    }
  }
  else {
    pcVar4 = "Invalid PLTE after IDAT";
  }
  FUN_1436941c0(param_1,pcVar4);
  FUN_143698560(param_1,param_3);
  return;
}



// FUNCTION 143699170 FUN_143699170 body=515 status=ok
// SIG undefined FUN_143699170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143699170(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined1 auStack_58 [32];
  byte local_38 [2];
  ushort local_36;
  undefined4 local_34;
  ushort local_30;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(param_1 + 0x154);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before bKGD");
  }
  if ((uVar2 & 4) != 0) {
    pcVar4 = "Invalid bKGD after IDAT";
LAB_1436991b1:
    FUN_1436941c0(param_1,pcVar4);
    FUN_143698560(param_1,param_3);
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x26f);
  if ((bVar1 == 3) && ((uVar2 & 2) == 0)) {
    pcVar4 = "Missing PLTE before bKGD";
    goto LAB_1436991b1;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) {
    pcVar4 = "Duplicate bKGD chunk";
    goto LAB_1436991b1;
  }
  if (bVar1 == 3) {
    iVar3 = 1;
  }
  else {
    iVar3 = (bVar1 & 2 | 1) * 2;
  }
  if (param_3 != iVar3) {
    FUN_1436941c0(param_1,"Incorrect bKGD chunk length");
    FUN_143698560(param_1,param_3);
    return;
  }
  FUN_143698630(param_1,&local_28);
  iVar3 = FUN_143698560(param_1,0);
  if (iVar3 != 0) {
    return;
  }
  if (*(byte *)(param_1 + 0x26f) == 3) {
    local_38[0] = local_28;
    if ((param_2 == 0) || (*(ushort *)(param_2 + 0x20) == 0)) {
      local_34 = 0;
      local_36 = 0;
    }
    else {
      if (*(ushort *)(param_2 + 0x20) <= (ushort)local_28) {
        FUN_1436941c0(param_1,"Incorrect bKGD chunk index value");
        return;
      }
      pbVar5 = (byte *)((ulonglong)local_28 * 3 + *(longlong *)(param_1 + 600));
      local_36 = (ushort)*pbVar5;
      local_34 = (uint)CONCAT12(pbVar5[2],(ushort)pbVar5[1]);
    }
  }
  else {
    local_38[0] = 0;
    if ((*(byte *)(param_1 + 0x26f) & 2) == 0) {
      local_36 = (ushort)local_28 * 0x100 + (ushort)local_27;
      local_34 = CONCAT22(local_36,local_36);
      local_30 = local_36;
      goto LAB_14369933c;
    }
    local_36 = (ushort)local_28 * 0x100 + (ushort)local_27;
    local_34 = CONCAT22((ushort)local_24 * 0x100 + (ushort)local_23,
                        (ushort)local_26 * 0x100 + (ushort)local_25);
  }
  local_30 = 0;
LAB_14369933c:
  FUN_143692820(param_1,param_2,local_38);
  return;
}



// FUNCTION 143699380 FUN_143699380 body=1309 status=ok
// SIG undefined FUN_143699380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143699380(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_228 [32];
  int local_208;
  int local_200;
  int local_1f8;
  int local_1f0;
  int local_1e8;
  int local_1e0;
  int local_1d8;
  uint local_1d4;
  uint local_1d0;
  int local_1cc;
  uint local_1c8;
  int local_1c4;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined1 local_160 [4];
  undefined1 local_15c [4];
  undefined1 local_158 [4];
  undefined1 local_154 [12];
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  uVar1 = *(uint *)(param_1 + 0x154);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before cHRM");
  }
  if ((uVar1 & 4) != 0) {
    FUN_1436941c0(param_1,"Invalid cHRM after IDAT");
    FUN_143698560(param_1,param_3);
    return;
  }
  if ((uVar1 & 2) != 0) {
    FUN_1436941c0(param_1,"Out of place cHRM chunk");
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x804) == 4)) {
    FUN_1436941c0(param_1,"Duplicate cHRM chunk");
    FUN_143698560(param_1,param_3);
    return;
  }
  if (param_3 != 0x20) {
    FUN_1436941c0(param_1,"Incorrect cHRM chunk length");
    FUN_143698560(param_1,param_3);
    return;
  }
  FUN_143698630(param_1,local_170,0x20);
  iVar2 = FUN_143698560(param_1,0);
  if (iVar2 != 0) {
    return;
  }
  local_1c4 = FUN_143698cb0(0,local_170);
  iVar2 = FUN_143698cb0(0,local_16c);
  iVar3 = FUN_143698cb0(0,local_168);
  iVar4 = FUN_143698cb0(0,local_164);
  iVar5 = FUN_143698cb0(0,local_160);
  iVar6 = FUN_143698cb0(0,local_15c);
  local_1d8 = FUN_143698cb0(0,local_158);
  local_1cc = FUN_143698cb0(0,local_154);
  if ((((local_1c4 == -1) || (iVar2 == -1)) || (iVar3 == -1)) ||
     (((iVar4 == -1 || (iVar5 == -1)) || ((iVar6 == -1 || ((local_1d8 == -1 || (local_1cc == -1)))))
      ))) {
    FUN_1436941c0(param_1,"Ignoring cHRM chunk with negative chromaticities");
    return;
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
    if ((((local_1c4 - 0x763eU < 0x7d1) &&
         (((iVar2 - 0x7c9cU < 0x7d1 && (iVar3 - 63000U < 0x7d1)) && (iVar4 - 32000U < 0x7d1)))) &&
        (((iVar5 - 29000U < 0x7d1 && (iVar6 - 59000U < 0x7d1)) && (local_1d8 - 14000U < 0x7d1)))) &&
       (local_1cc - 5000U < 0x7d1)) {
      return;
    }
    FUN_143694250(local_148,1,5);
    FUN_143694250(local_148,2,5,iVar2);
    FUN_143694250(local_148,3,5,iVar3);
    FUN_143694250(local_148,4,5,iVar4);
    FUN_143694250(local_148,5,5,iVar5);
    FUN_143694250(local_148,6,5,iVar6);
    FUN_143694250(local_148,7,5,local_1d8);
    FUN_143694250(local_148,8,5,local_1cc);
    FUN_143693fd0(param_1,local_148,
                  "Ignoring incorrect cHRM white(@1,@2) r(@3,@4)g(@5,@6)b(@7,@8) when sRGB is also present"
                 );
    return;
  }
  if (*(char *)(param_1 + 0x3f2) != '\0') goto LAB_1436997f8;
  local_188 = local_1d8;
  iStack_180 = local_1c4;
  local_1a8 = local_1d8;
  iStack_1a0 = local_1c4;
  local_1b8 = iVar3;
  iStack_1b4 = iVar4;
  iStack_1b0 = iVar5;
  iStack_1ac = iVar6;
  iStack_1a4 = local_1cc;
  iStack_19c = iVar2;
  local_198 = iVar3;
  iStack_194 = iVar4;
  iStack_190 = iVar5;
  iStack_18c = iVar6;
  iStack_184 = local_1cc;
  iStack_17c = iVar2;
  iVar7 = FUN_1436891f0(param_1,&local_198,&local_1b8);
  if (iVar7 == 0) goto LAB_1436997f8;
  iVar7 = FUN_14368a760(&local_1d0,iStack_194,0x8000,100000);
  if (((iVar7 == 0) || (0x8000 < local_1d0)) ||
     ((iVar7 = FUN_14368a760(&local_1d4,local_188,0x8000,100000), iVar7 == 0 ||
      ((((0x8000 < local_1d4 ||
         (iVar7 = FUN_14368a760(&local_1c8,iStack_17c,0x8000,100000), iVar7 == 0)) ||
        (0x8000 < local_1c8)) || (iVar7 = local_1c8 + local_1d4 + local_1d0, 0x8001 < iVar7)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"internal error handling cHRM->XYZ");
  }
  if (iVar7 < 0x8001) {
    if (iVar7 < 0x8000) {
      iVar7 = 1;
      goto LAB_1436997a7;
    }
  }
  else {
    iVar7 = -1;
LAB_1436997a7:
    if ((int)local_1d4 < (int)local_1d0) {
LAB_1436997bc:
      if ((int)local_1d0 < (int)local_1c8) {
LAB_1436997c9:
        local_1c8 = local_1c8 + iVar7;
      }
      else {
        local_1d0 = local_1d0 + iVar7;
      }
    }
    else {
      if ((int)local_1d4 < (int)local_1c8) {
        if ((int)local_1d4 <= (int)local_1d0) goto LAB_1436997bc;
        goto LAB_1436997c9;
      }
      local_1d4 = local_1d4 + iVar7;
    }
  }
  if (local_1c8 + local_1d4 + local_1d0 != 0x8000) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"internal error handling cHRM coefficients");
  }
  *(short *)(param_1 + 0x3f4) = (short)local_1d0;
  *(short *)(param_1 + 0x3f6) = (short)local_1d4;
LAB_1436997f8:
  local_1e8 = local_1d8;
  local_208 = iVar3;
  local_200 = iVar4;
  local_1f8 = iVar5;
  local_1f0 = iVar6;
  local_1e0 = local_1cc;
  FUN_143692850(param_1,param_2,local_1c4,iVar2);
  return;
}



// FUNCTION 1436998a0 FUN_1436998a0 body=375 status=ok
// SIG undefined FUN_1436998a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436998a0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar1 = *(uint *)(param_1 + 0x154);
  if ((uVar1 & 1) != 0) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) != 0) {
        FUN_1436941c0(param_1,"Out of place gAMA chunk");
      }
      if ((param_2 == 0) || ((*(uint *)(param_2 + 8) & 0x801) != 1)) {
        if (param_3 == 4) {
          FUN_143698630(param_1,local_138,4);
          iVar2 = FUN_143698560(param_1,0);
          if (iVar2 == 0) {
            iVar2 = FUN_143698cb0(0,local_138);
            if (iVar2 < 1) {
              FUN_1436941c0(param_1,"Ignoring gAMA chunk with out of range gamma");
            }
            else if (((param_2 == 0) || ((*(uint *)(param_2 + 8) & 0x800) == 0)) ||
                    (iVar2 - 45000U < 0x3e9)) {
              *(int *)(param_1 + 0x2b4) = iVar2;
              FUN_143692950(param_1,param_2);
            }
            else {
              FUN_143694250(local_128,1,5,iVar2);
              FUN_143693fd0(param_1,local_128,
                            "Ignoring incorrect gAMA value @1 when sRGB is also present");
            }
          }
        }
        else {
          FUN_1436941c0(param_1,"Incorrect gAMA chunk length");
          FUN_143698560(param_1,param_3);
        }
      }
      else {
        FUN_1436941c0(param_1,"Duplicate gAMA chunk");
        FUN_143698560(param_1,param_3);
      }
    }
    else {
      FUN_1436941c0(param_1,"Invalid gAMA after IDAT");
      FUN_143698560(param_1,param_3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Missing IHDR before gAMA");
}



// FUNCTION 143699a20 FUN_143699a20 body=338 status=ok
// SIG undefined FUN_143699a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143699a20(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  short *psVar4;
  ulonglong uVar5;
  undefined1 auStack_268 [32];
  byte local_248;
  byte local_247;
  short local_238 [256];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  uVar1 = *(uint *)(param_1 + 0x154);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before hIST");
  }
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 2) == 0) {
      pcVar3 = "Missing PLTE before hIST";
    }
    else if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x40) == 0)) {
      if ((param_3 < 0x201) && (param_3 == (uint)*(ushort *)(param_1 + 0x260) * 2)) {
        uVar5 = (ulonglong)(param_3 >> 1);
        if (param_3 >> 1 != 0) {
          psVar4 = local_238;
          do {
            FUN_143698630(param_1,&local_248,2);
            *psVar4 = (ushort)local_248 * 0x100 + (ushort)local_247;
            uVar5 = uVar5 - 1;
            psVar4 = psVar4 + 1;
          } while (uVar5 != 0);
        }
        iVar2 = FUN_143698560(param_1,0);
        if (iVar2 != 0) {
          return;
        }
        FUN_143692980(param_1,param_2,local_238);
        return;
      }
      pcVar3 = "Incorrect hIST chunk length";
    }
    else {
      pcVar3 = "Duplicate hIST chunk";
    }
  }
  else {
    pcVar3 = "Invalid hIST after IDAT";
  }
  FUN_1436941c0(param_1,pcVar3);
  FUN_143698560(param_1,param_3);
  return;
}



// FUNCTION 143699b80 FUN_143699b80 body=776 status=ok
// SIG undefined FUN_143699b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143699b80(longlong param_1,longlong param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  undefined1 auStack_178 [32];
  char **local_158;
  uint local_150;
  char *local_148 [2];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar2 = *(uint *)(param_1 + 0x154);
  uVar7 = (ulonglong)param_3;
  if ((uVar2 & 1) != 0) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 2) != 0) {
        FUN_1436941c0(param_1,"Out of place iCCP chunk");
      }
      if (((*(uint *)(param_1 + 0x154) >> 0xe & 1) == 0) &&
         ((param_2 == 0 || ((*(uint *)(param_2 + 8) & 0x1800) == 0)))) {
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x4000;
        FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
        uVar6 = FUN_1436924c0(param_1,param_3 + 1);
        *(undefined8 *)(param_1 + 0x478) = uVar6;
        FUN_143698630(param_1,uVar6,uVar7);
        iVar5 = FUN_143698560(param_1,0);
        if (iVar5 == 0) {
          *(undefined1 *)(uVar7 + *(longlong *)(param_1 + 0x478)) = 0;
          pcVar3 = *(char **)(param_1 + 0x478);
          cVar1 = *pcVar3;
          pcVar8 = pcVar3;
          while (cVar1 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
          }
          if ((uVar7 == 0) || (pcVar3 + (uVar7 - 1) <= pcVar8 + 1)) {
            FUN_143692480(param_1);
            *(undefined8 *)(param_1 + 0x478) = 0;
            FUN_1436941c0(param_1,"Malformed iCCP chunk");
          }
          else {
            if (pcVar8[1] != '\0') {
              FUN_1436941c0(param_1,"Ignoring nonzero compression type in iCCP chunk");
            }
            pcVar8 = pcVar8 + (2 - *(longlong *)(param_1 + 0x478));
            local_158 = local_148;
            FUN_143698670(param_1,0,uVar7,pcVar8);
            uVar7 = (longlong)local_148[0] - (longlong)pcVar8;
            if ((local_148[0] < pcVar8) || (uVar7 < 4)) {
              FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
              *(undefined8 *)(param_1 + 0x478) = 0;
              FUN_1436941c0(param_1,"Profile size field missing from iCCP chunk");
            }
            else {
              lVar4 = *(longlong *)(param_1 + 0x478);
              pcVar3 = pcVar8 + lVar4;
              local_150 = CONCAT31(CONCAT21(CONCAT11(*pcVar3,pcVar8[lVar4 + 1]),pcVar3[2]),pcVar3[3]
                                  );
              uVar9 = (ulonglong)local_150;
              if (uVar9 < uVar7) {
                uVar7 = uVar9;
              }
              if (uVar7 < uVar9) {
                FUN_143692480(param_1);
                *(undefined8 *)(param_1 + 0x478) = 0;
                FUN_1436942d0(local_138,1,1,local_150);
                FUN_1436942d0(local_138,2,1,uVar7);
                FUN_143693fd0(param_1,local_138,
                              "Ignoring iCCP chunk with declared size = @1 and actual length = @2");
              }
              else {
                local_158 = (char **)pcVar3;
                FUN_143692a70(param_1,param_2,lVar4,0);
                FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
                *(undefined8 *)(param_1 + 0x478) = 0;
              }
            }
          }
        }
        else {
          FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
          *(undefined8 *)(param_1 + 0x478) = 0;
        }
      }
      else {
        FUN_1436941c0(param_1,"Duplicate iCCP chunk");
        FUN_143698560(param_1,uVar7);
      }
    }
    else {
      FUN_1436941c0(param_1,"Invalid iCCP after IDAT");
      FUN_143698560(param_1,uVar7);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Missing IHDR before iCCP");
}



// FUNCTION 143699e90 FUN_143699e90 body=938 status=ok
// SIG undefined FUN_143699e90(void)

void FUN_143699e90(longlong param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulonglong uVar12;
  char *pcVar13;
  char *pcVar14;
  longlong local_res20;
  
  iVar6 = *(int *)(param_1 + 0x444);
  uVar12 = (ulonglong)param_3;
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      FUN_143698560(param_1,uVar12);
      return;
    }
    *(int *)(param_1 + 0x444) = iVar6 + -1;
    if (iVar6 + -1 == 1) {
      FUN_1436941c0(param_1,"No space in chunk cache for iTXt");
      FUN_143698560(param_1,uVar12);
      return;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x154);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before iTXt");
  }
  if ((uVar4 & 4) != 0) {
    *(uint *)(param_1 + 0x154) = uVar4 | 8;
  }
  FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
  lVar7 = FUN_143692540(param_1,param_3 + 1);
  *(longlong *)(param_1 + 0x478) = lVar7;
  if (lVar7 == 0) {
    FUN_1436941c0(param_1,"No memory to process iTXt chunk");
    return;
  }
  FUN_143698630(param_1,lVar7,uVar12);
  iVar6 = FUN_143698560(param_1,0);
  if (iVar6 != 0) {
    FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
    *(undefined8 *)(param_1 + 0x478) = 0;
    return;
  }
  *(undefined1 *)(uVar12 + *(longlong *)(param_1 + 0x478)) = 0;
  pcVar9 = *(char **)(param_1 + 0x478);
  cVar2 = *pcVar9;
  pcVar13 = pcVar9;
  while (cVar2 != '\0') {
    pcVar13 = pcVar13 + 1;
    cVar2 = *pcVar13;
  }
  if ((uVar12 < 3) || (pcVar1 = pcVar9 + uVar12, pcVar1 + -3 <= pcVar13 + 1)) {
    pcVar9 = "Truncated iTXt chunk";
  }
  else {
    cVar2 = pcVar13[1];
    pcVar14 = pcVar13 + 3;
    if (cVar2 == '\0') {
LAB_143699ffa:
      cVar3 = *pcVar14;
      pcVar10 = pcVar14;
      while (cVar3 != '\0') {
        pcVar10 = pcVar10 + 1;
        cVar3 = *pcVar10;
      }
      pcVar10 = pcVar10 + 1;
      if (pcVar10 < pcVar1) {
        cVar3 = *pcVar10;
        pcVar11 = pcVar10;
        while (cVar3 != '\0') {
          pcVar11 = pcVar11 + 1;
          cVar3 = *pcVar11;
        }
        if (pcVar11 + 1 < pcVar1) {
          lVar7 = (longlong)(pcVar11 + 1) - (longlong)pcVar9;
          if (cVar2 == '\0') {
            local_res20 = -1;
            do {
              local_res20 = local_res20 + 1;
            } while (pcVar9[local_res20 + lVar7] != '\0');
          }
          else {
            FUN_143698670(param_1,(int)pcVar13[2],uVar12,lVar7,&local_res20);
          }
          piVar8 = (int *)FUN_143692540(param_1,0x38);
          if (piVar8 == (int *)0x0) {
            FUN_1436941c0(param_1,"Not enough memory to process iTXt chunk");
            FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
            *(undefined8 *)(param_1 + 0x478) = 0;
          }
          else {
            *piVar8 = (cVar2 != '\0') + 1;
            *(char **)(piVar8 + 0xc) = pcVar10 + (*(longlong *)(param_1 + 0x478) - (longlong)pcVar9)
            ;
            lVar5 = *(longlong *)(param_1 + 0x478);
            *(longlong *)(piVar8 + 8) = local_res20;
            piVar8[6] = 0;
            piVar8[7] = 0;
            *(char **)(piVar8 + 10) = pcVar14 + (lVar5 - (longlong)pcVar9);
            *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(param_1 + 0x478);
            *(longlong *)(piVar8 + 4) = *(longlong *)(param_1 + 0x478) + lVar7;
            iVar6 = FUN_1436935e0(param_1,param_2,piVar8,1);
            FUN_143692480(param_1,piVar8);
            FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
            *(undefined8 *)(param_1 + 0x478) = 0;
            if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_143693c80(param_1,"Insufficient memory to store iTXt chunk");
            }
          }
        }
        else {
          FUN_1436941c0(param_1,"Malformed iTXt chunk");
          FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
          *(undefined8 *)(param_1 + 0x478) = 0;
        }
      }
      else {
        FUN_1436941c0(param_1,"Truncated iTXt chunk");
        FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
        *(undefined8 *)(param_1 + 0x478) = 0;
      }
      return;
    }
    if (cVar2 == '\x01') {
      if (pcVar13[2] == 0) goto LAB_143699ffa;
      pcVar9 = "unknown iTXt compression type";
    }
    else {
      pcVar9 = "invalid iTXt compression flag";
    }
  }
  FUN_1436941c0(param_1,pcVar9);
  FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
  *(undefined8 *)(param_1 + 0x478) = 0;
  return;
}



// FUNCTION 14369a240 FUN_14369a240 body=386 status=ok
// SIG undefined FUN_14369a240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14369a240(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if ((*(uint *)(param_1 + 0x154) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x154) & 4) == 0) {
      if ((param_2 == 0) || ((*(uint *)(param_2 + 8) & 0x100) == 0)) {
        if (param_3 == 9) {
          FUN_143698630(param_1,&local_38,9);
          iVar1 = FUN_143698560(param_1,0);
          if (iVar1 == 0) {
            if ((char)local_38 < '\0') {
              iVar1 = -(~((uint)local_38 * 0x1000000 + (uint)local_36 * 0x100 +
                          (uint)local_37 * 0x10000 + (uint)local_35) + 1 & 0x7fffffff);
            }
            else {
              iVar1 = (uint)local_38 * 0x1000000 + (uint)local_36 * 0x100 + (uint)local_37 * 0x10000
                      + (uint)local_35;
            }
            uVar2 = (uint)local_32 * 0x100 + (uint)local_33 * 0x10000 + (uint)local_34 * 0x1000000 +
                    (uint)local_31;
            if ((char)local_34 < '\0') {
              uVar2 = -(~uVar2 + 1 & 0x7fffffff);
            }
            local_48 = (uint)local_30;
            FUN_143692bf0(param_1,param_2,iVar1,uVar2);
          }
        }
        else {
          FUN_1436941c0(param_1,"Incorrect oFFs chunk length");
          FUN_143698560(param_1,param_3);
        }
      }
      else {
        FUN_1436941c0(param_1,"Duplicate oFFs chunk");
        FUN_143698560(param_1,param_3);
      }
    }
    else {
      FUN_1436941c0(param_1,"Invalid oFFs after IDAT");
      FUN_143698560(param_1,param_3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Missing IHDR before oFFs");
}



// FUNCTION 14369a3d0 FUN_14369a3d0 body=904 status=ok
// SIG undefined FUN_14369a3d0(void)

void FUN_14369a3d0(longlong param_1,longlong param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar10 = (ulonglong)param_3;
  if ((*(uint *)(param_1 + 0x154) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before pCAL");
  }
  if ((*(uint *)(param_1 + 0x154) & 4) != 0) {
    FUN_1436941c0(param_1,"Invalid pCAL after IDAT");
    FUN_143698560(param_1,uVar10);
    return;
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x400) != 0)) {
    FUN_1436941c0(param_1,"Duplicate pCAL chunk");
    FUN_143698560(param_1,uVar10);
    return;
  }
  FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
  lVar7 = FUN_143692540(param_1,param_3 + 1);
  *(longlong *)(param_1 + 0x478) = lVar7;
  if (lVar7 == 0) {
    FUN_1436941c0(param_1,"No memory for pCAL purpose");
    return;
  }
  FUN_143698630(param_1,lVar7,uVar10);
  iVar6 = FUN_143698560(param_1,0);
  if (iVar6 != 0) {
    FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
    *(undefined8 *)(param_1 + 0x478) = 0;
    return;
  }
  *(undefined1 *)(uVar10 + *(longlong *)(param_1 + 0x478)) = 0;
  pcVar5 = *(char **)(param_1 + 0x478);
  cVar2 = *pcVar5;
  pcVar9 = pcVar5;
  while (cVar2 != '\0') {
    pcVar9 = pcVar9 + 1;
    cVar2 = *pcVar9;
  }
  if ((longlong)(pcVar5 + uVar10) - (longlong)pcVar9 < 0xd) {
    FUN_1436941c0(param_1,"Invalid pCAL data");
    FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
    *(undefined8 *)(param_1 + 0x478) = 0;
    return;
  }
  uVar12 = (uint)(byte)pcVar9[2] * 0x10000 + (uint)(byte)pcVar9[3] * 0x100 +
           (uint)(byte)pcVar9[1] * 0x1000000 + (uint)(byte)pcVar9[4];
  if (pcVar9[1] < '\0') {
    uVar12 = -(~uVar12 + 1 & 0x7fffffff);
  }
  uVar13 = (uint)(byte)pcVar9[6] * 0x10000 + (uint)(byte)pcVar9[7] * 0x100 +
           (uint)(byte)pcVar9[5] * 0x1000000 + (uint)(byte)pcVar9[8];
  if (pcVar9[5] < '\0') {
    uVar13 = -(~uVar13 + 1 & 0x7fffffff);
  }
  bVar3 = pcVar9[9];
  pcVar1 = pcVar9 + 0xb;
  bVar4 = pcVar9[10];
  uVar11 = (ulonglong)bVar4;
  if (bVar3 == 0) {
    if (bVar4 != 2) {
LAB_14369a5ec:
      FUN_1436941c0(param_1,"Invalid pCAL parameters for equation type");
      FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
      *(undefined8 *)(param_1 + 0x478) = 0;
      return;
    }
  }
  else if ((bVar3 == 1) || (bVar3 == 2)) {
    if (bVar4 != 3) goto LAB_14369a5ec;
  }
  else if (bVar3 == 3) {
    if (bVar4 != 4) goto LAB_14369a5ec;
  }
  else if (3 < bVar3) {
    FUN_1436941c0(param_1,"Unrecognized equation type for pCAL chunk");
  }
  cVar2 = *pcVar1;
  pcVar9 = pcVar1;
  while (cVar2 != '\0') {
    pcVar9 = pcVar9 + 1;
    cVar2 = *pcVar9;
  }
  lVar7 = FUN_143692540(param_1,uVar11 << 3);
  if (lVar7 == 0) {
    FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
    *(undefined8 *)(param_1 + 0x478) = 0;
    FUN_1436941c0(param_1,"No memory for pCAL params");
  }
  else {
    lVar8 = 0;
    if (uVar11 != 0) {
      do {
        pcVar9 = pcVar9 + 1;
        *(char **)(lVar7 + lVar8 * 8) = pcVar9;
        while( true ) {
          if (pcVar5 + uVar10 < pcVar9) {
            FUN_1436941c0(param_1,"Invalid pCAL data");
            goto LAB_14369a703;
          }
          if (*pcVar9 == '\0') break;
          pcVar9 = pcVar9 + 1;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (longlong)uVar11);
    }
    FUN_143692c20(param_1,param_2,*(undefined8 *)(param_1 + 0x478),uVar12,uVar13,bVar3,bVar4,pcVar1,
                  lVar7);
LAB_14369a703:
    FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
    *(undefined8 *)(param_1 + 0x478) = 0;
    FUN_143692480(param_1,lVar7);
  }
  return;
}



// FUNCTION 14369a760 FUN_14369a760 body=314 status=ok
// SIG undefined FUN_14369a760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14369a760(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  uint local_48;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if ((*(uint *)(param_1 + 0x154) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x154) & 4) == 0) {
      if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x80) == 0)) {
        if (param_3 == 9) {
          FUN_143698630(param_1,&local_38,9);
          iVar1 = FUN_143698560(param_1,0);
          if (iVar1 == 0) {
            local_48 = (uint)local_30;
            FUN_143692ee0(param_1,param_2,
                          (((uint)local_38 * 0x100 + (uint)local_37) * 0x100 + (uint)local_36) *
                          0x100 + (uint)local_35,
                          (((uint)local_34 * 0x100 + (uint)local_33) * 0x100 + (uint)local_32) *
                          0x100 + (uint)local_31);
          }
        }
        else {
          FUN_1436941c0(param_1,"Incorrect pHYs chunk length");
          FUN_143698560(param_1,param_3);
        }
      }
      else {
        FUN_1436941c0(param_1,"Duplicate pHYs chunk");
        FUN_143698560(param_1,param_3);
      }
    }
    else {
      FUN_1436941c0(param_1,"Invalid pHYs after IDAT");
      FUN_143698560(param_1,param_3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Missing IHDR before pHYs");
}



// FUNCTION 14369a8a0 FUN_14369a8a0 body=335 status=ok
// SIG undefined FUN_14369a8a0(void)

void FUN_14369a8a0(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 local_res20;
  
  uVar4 = *(uint *)(param_1 + 0x154);
  local_res20 = 0;
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before sBIT");
  }
  if ((uVar4 & 4) == 0) {
    if ((uVar4 & 2) != 0) {
      FUN_1436941c0(param_1,"Out of place sBIT chunk");
    }
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 2) == 0)) {
      uVar4 = 3;
      if (*(char *)(param_1 + 0x26f) != '\x03') {
        uVar4 = (uint)*(byte *)(param_1 + 0x273);
      }
      if ((param_3 == uVar4) && (param_3 < 5)) {
        FUN_143698630(param_1,&local_res20);
        iVar2 = FUN_143698560(param_1,0);
        if (iVar2 != 0) {
          return;
        }
        *(undefined1 *)(param_1 + 0x2f0) = (undefined1)local_res20;
        if ((*(byte *)(param_1 + 0x26f) & 2) == 0) {
          *(undefined1 *)(param_1 + 0x2f3) = (undefined1)local_res20;
          *(undefined1 *)(param_1 + 0x2f1) = (undefined1)local_res20;
          *(undefined1 *)(param_1 + 0x2f2) = (undefined1)local_res20;
          uVar1 = local_res20._1_1_;
        }
        else {
          *(undefined1 *)(param_1 + 0x2f1) = local_res20._1_1_;
          *(undefined1 *)(param_1 + 0x2f2) = local_res20._2_1_;
          uVar1 = local_res20._3_1_;
        }
        *(undefined1 *)(param_1 + 0x2f4) = uVar1;
        FUN_143692f70(param_1,param_2);
        return;
      }
      pcVar3 = "Incorrect sBIT chunk length";
    }
    else {
      pcVar3 = "Duplicate sBIT chunk";
    }
  }
  else {
    pcVar3 = "Invalid sBIT after IDAT";
  }
  FUN_1436941c0(param_1,pcVar3);
  FUN_143698560(param_1,param_3);
  return;
}



// FUNCTION 14369a9f0 FUN_14369a9f0 body=577 status=ok
// SIG undefined FUN_14369a9f0(void)

void FUN_14369a9f0(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  ulonglong local_res20;
  
  uVar5 = (ulonglong)param_3;
  if ((*(uint *)(param_1 + 0x154) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before sCAL");
  }
  if ((*(uint *)(param_1 + 0x154) & 4) != 0) {
    FUN_1436941c0(param_1,"Invalid sCAL after IDAT");
    FUN_143698560(param_1,uVar5);
    return;
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x4000) != 0)) {
    FUN_1436941c0(param_1,"Duplicate sCAL chunk");
    FUN_143698560(param_1,param_3);
    return;
  }
  if (param_3 < 4) {
    FUN_1436941c0(param_1,"sCAL chunk too short");
    FUN_143698560(param_1,param_3);
    return;
  }
  lVar2 = FUN_143692540(param_1,param_3 + 1);
  *(longlong *)(param_1 + 0x478) = lVar2;
  if (lVar2 == 0) {
    FUN_1436941c0(param_1,"Out of memory while processing sCAL chunk");
    FUN_143698560(param_1,param_3);
    return;
  }
  FUN_143698630(param_1,lVar2,uVar5);
  *(undefined1 *)(uVar5 + *(longlong *)(param_1 + 0x478)) = 0;
  iVar1 = FUN_143698560(param_1,0);
  if (iVar1 == 0) {
    if ((byte)(**(char **)(param_1 + 0x478) - 1U) < 2) {
      local_res8[0] = 0;
      local_res20 = 1;
      iVar1 = FUN_143689ca0(*(char **)(param_1 + 0x478),uVar5,local_res8,&local_res20);
      if ((iVar1 == 0) || (uVar5 <= local_res20)) {
LAB_14369abee:
        pcVar3 = "Invalid sCAL chunk ignored: bad width format";
LAB_14369abf5:
        FUN_1436941c0(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)(*(longlong *)(param_1 + 0x478) + local_res20);
        uVar4 = local_res20 + 1;
        local_res20 = uVar4;
        if (*pcVar3 != '\0') goto LAB_14369abee;
        if ((local_res8[0] & 0x188) != 0x108) {
          pcVar3 = "Invalid sCAL chunk ignored: non-positive width";
          goto LAB_14369abf5;
        }
        local_res8[0] = 0;
        iVar1 = FUN_143689ca0(*(longlong *)(param_1 + 0x478),uVar5,local_res8,&local_res20);
        if ((iVar1 == 0) || (local_res20 != uVar5)) {
          pcVar3 = "Invalid sCAL chunk ignored: bad height format";
          goto LAB_14369abf5;
        }
        if ((local_res8[0] & 0x188) != 0x108) {
          pcVar3 = "Invalid sCAL chunk ignored: non-positive height";
          goto LAB_14369abf5;
        }
        pcVar3 = *(char **)(param_1 + 0x478);
        FUN_143692f90(param_1,param_2,(int)*pcVar3,pcVar3 + 1,pcVar3 + uVar4);
      }
      FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
      goto LAB_14369ac11;
    }
    FUN_1436941c0(param_1,"Invalid sCAL ignored: invalid unit");
  }
  FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
LAB_14369ac11:
  *(undefined8 *)(param_1 + 0x478) = 0;
  return;
}



// FUNCTION 14369ac40 FUN_14369ac40 body=814 status=ok
// SIG undefined FUN_14369ac40(void)

void FUN_14369ac40(longlong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 local_28;
  char local_20;
  longlong local_18;
  int local_10;
  
  iVar3 = *(int *)(param_1 + 0x444);
  uVar5 = (ulonglong)param_3;
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      FUN_143698560(param_1,uVar5);
      return;
    }
    *(int *)(param_1 + 0x444) = iVar3 + -1;
    if (iVar3 + -1 == 1) {
      FUN_1436941c0(param_1,"No space in chunk cache for sPLT");
      FUN_143698560(param_1,uVar5);
      return;
    }
  }
  if ((*(uint *)(param_1 + 0x154) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before sPLT");
  }
  if ((*(uint *)(param_1 + 0x154) & 4) != 0) {
    FUN_1436941c0(param_1,"Invalid sPLT after IDAT");
    FUN_143698560(param_1,uVar5);
    return;
  }
  FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
  uVar4 = FUN_1436924c0(param_1,param_3 + 1);
  *(undefined8 *)(param_1 + 0x478) = uVar4;
  FUN_143698630(param_1,uVar4,uVar5);
  iVar3 = FUN_143698560(param_1,0);
  if (iVar3 != 0) {
    FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
    *(undefined8 *)(param_1 + 0x478) = 0;
    return;
  }
  *(undefined1 *)(uVar5 + *(longlong *)(param_1 + 0x478)) = 0;
  pcVar6 = *(char **)(param_1 + 0x478);
  cVar1 = *pcVar6;
  pcVar7 = pcVar6;
  while (cVar1 != '\0') {
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  if ((uVar5 < 2) || (pcVar6 + (uVar5 - 2) < pcVar7 + 1)) {
    FUN_143692480(param_1,pcVar6);
    pcVar6 = "malformed sPLT chunk";
  }
  else {
    local_20 = pcVar7[1];
    pbVar8 = (byte *)(pcVar7 + 2);
    uVar5 = 10;
    if (local_20 == '\b') {
      uVar5 = 6;
    }
    uVar2 = (ulonglong)(((int)pcVar6 - (int)pbVar8) + param_3);
    if ((int)(uVar2 % uVar5) == 0) {
      local_10 = (int)(uVar2 / uVar5);
      local_18 = FUN_143692540(param_1,(longlong)local_10 * 10);
      if (local_18 != 0) {
        iVar3 = 0;
        if (0 < local_10) {
          lVar10 = 0;
          do {
            if (local_20 == '\b') {
              *(ushort *)(lVar10 + local_18) = (ushort)*pbVar8;
              *(ushort *)(lVar10 + 2 + local_18) = (ushort)pbVar8[1];
              *(ushort *)(lVar10 + 4 + local_18) = (ushort)pbVar8[2];
              pbVar9 = pbVar8 + 4;
              *(ushort *)(lVar10 + 6 + local_18) = (ushort)pbVar8[3];
            }
            else {
              *(ushort *)(lVar10 + local_18) = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
              *(ushort *)(lVar10 + 2 + local_18) = (ushort)pbVar8[2] * 0x100 + (ushort)pbVar8[3];
              *(ushort *)(lVar10 + 4 + local_18) = (ushort)pbVar8[4] * 0x100 + (ushort)pbVar8[5];
              *(ushort *)(lVar10 + 6 + local_18) = (ushort)pbVar8[6] * 0x100 + (ushort)pbVar8[7];
              pbVar9 = pbVar8 + 8;
            }
            iVar3 = iVar3 + 1;
            pbVar8 = pbVar9 + 2;
            *(ushort *)(lVar10 + 8 + local_18) = (ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1];
            lVar10 = lVar10 + 10;
          } while (iVar3 < local_10);
        }
        local_28 = *(undefined8 *)(param_1 + 0x478);
        FUN_143693140(param_1,param_2,&local_28,1);
        FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
        *(undefined8 *)(param_1 + 0x478) = 0;
        FUN_143692480(param_1,local_18);
        return;
      }
      pcVar6 = "sPLT chunk requires too much memory";
      local_18 = 0;
      goto LAB_14369af40;
    }
    FUN_143692480(param_1,pcVar6);
    pcVar6 = "sPLT chunk has bad length";
  }
  *(undefined8 *)(param_1 + 0x478) = 0;
LAB_14369af40:
  FUN_1436941c0(param_1,pcVar6);
  return;
}



// FUNCTION 14369af70 FUN_14369af70 body=569 status=ok
// SIG undefined FUN_14369af70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14369af70(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  byte local_138 [16];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar1 = *(uint *)(param_1 + 0x154);
  if ((uVar1 & 1) != 0) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) != 0) {
        FUN_1436941c0(param_1,"Out of place sRGB chunk");
      }
      if ((param_2 == 0) || ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        if (param_3 == 1) {
          FUN_143698630(param_1,local_138,1);
          iVar2 = FUN_143698560(param_1,0);
          if (iVar2 == 0) {
            if (local_138[0] < 4) {
              if (param_2 != 0) {
                if (((*(byte *)(param_2 + 8) & 1) != 0) &&
                   (1000 < *(int *)(param_2 + 0x34) - 45000U)) {
                  FUN_143694250(local_128,1,5);
                  FUN_143693fd0(param_1,local_128,
                                "Ignoring incorrect gAMA value @1 when sRGB is also present");
                }
                if (((*(byte *)(param_2 + 8) & 4) != 0) &&
                   (((((2000 < *(int *)(param_2 + 0xa0) - 0x763eU ||
                       (2000 < *(int *)(param_2 + 0xa4) - 0x7c9cU)) ||
                      (2000 < *(int *)(param_2 + 0xa8) - 63000U)) ||
                     ((2000 < *(int *)(param_2 + 0xac) - 32000U ||
                      (2000 < *(int *)(param_2 + 0xb0) - 29000U)))) ||
                    ((2000 < *(int *)(param_2 + 0xb4) - 59000U ||
                     ((2000 < *(int *)(param_2 + 0xb8) - 14000U ||
                      (2000 < *(int *)(param_2 + 0xbc) - 5000U)))))))) {
                  FUN_1436941c0(param_1,"Ignoring incorrect cHRM value when sRGB is also present");
                }
              }
              *(undefined1 *)(param_1 + 0x3f0) = 1;
              if (*(char *)(param_1 + 0x3f2) == '\0') {
                *(undefined4 *)(param_1 + 0x3f4) = 0x5b8a1b38;
                *(undefined1 *)(param_1 + 0x3f2) = 1;
              }
              FUN_1436933b0(param_1,param_2,local_138[0]);
            }
            else {
              FUN_1436941c0(param_1,"Unknown sRGB intent");
            }
          }
        }
        else {
          FUN_1436941c0(param_1,"Incorrect sRGB chunk length");
          FUN_143698560(param_1,param_3);
        }
      }
      else {
        FUN_1436941c0(param_1,"Duplicate sRGB chunk");
        FUN_143698560(param_1,param_3);
      }
    }
    else {
      FUN_1436941c0(param_1,"Invalid sRGB after IDAT");
      FUN_143698560(param_1,param_3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Missing IHDR before sRGB");
}



// FUNCTION 14369b1b0 FUN_14369b1b0 body=525 status=ok
// SIG undefined FUN_14369b1b0(void)

void FUN_14369b1b0(longlong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  
  iVar4 = *(int *)(param_1 + 0x444);
  uVar8 = (ulonglong)param_3;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      FUN_143698560(param_1,uVar8);
      return;
    }
    *(int *)(param_1 + 0x444) = iVar4 + -1;
    if (iVar4 + -1 == 1) {
      FUN_1436941c0(param_1,"No space in chunk cache for tEXt");
      FUN_143698560(param_1,uVar8);
      return;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x154);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before tEXt");
  }
  if ((uVar2 & 4) != 0) {
    *(uint *)(param_1 + 0x154) = uVar2 | 8;
  }
  FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
  lVar5 = FUN_143692540(param_1,param_3 + 1);
  *(longlong *)(param_1 + 0x478) = lVar5;
  if (lVar5 == 0) {
    FUN_1436941c0(param_1,"No memory to process text chunk");
    return;
  }
  FUN_143698630(param_1,lVar5,uVar8);
  iVar4 = FUN_143698560(param_1,0);
  if (iVar4 == 0) {
    pcVar3 = *(char **)(param_1 + 0x478);
    pcVar3[uVar8] = '\0';
    cVar1 = *pcVar3;
    pcVar6 = pcVar3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar9 = pcVar6 + 1;
    if (pcVar6 == pcVar3 + uVar8) {
      pcVar9 = pcVar6;
    }
    puVar7 = (undefined4 *)FUN_143692540(param_1,0x38);
    if (puVar7 == (undefined4 *)0x0) {
      FUN_1436941c0(param_1,"Not enough memory to process text chunk");
      FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
      *(undefined8 *)(param_1 + 0x478) = 0;
    }
    else {
      lVar5 = -1;
      *(char **)(puVar7 + 2) = pcVar3;
      *puVar7 = 0xffffffff;
      *(undefined8 *)(puVar7 + 10) = 0;
      *(undefined8 *)(puVar7 + 0xc) = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(char **)(puVar7 + 4) = pcVar9;
      do {
        lVar5 = lVar5 + 1;
      } while (pcVar9[lVar5] != '\0');
      *(longlong *)(puVar7 + 6) = lVar5;
      iVar4 = FUN_1436935e0(param_1,param_2,puVar7,1);
      FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
      *(undefined8 *)(param_1 + 0x478) = 0;
      FUN_143692480(param_1,puVar7);
      if (iVar4 != 0) {
        FUN_1436941c0(param_1,"Insufficient memory to process text chunk");
      }
    }
  }
  else {
    FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
    *(undefined8 *)(param_1 + 0x478) = 0;
  }
  return;
}



// FUNCTION 14369b3c0 FUN_14369b3c0 body=283 status=ok
// SIG undefined FUN_14369b3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14369b3c0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  short local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  byte local_30;
  byte local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 0x154);
  if ((uVar1 & 1) != 0) {
    if ((param_2 == 0) || ((*(uint *)(param_2 + 8) & 0x200) == 0)) {
      if ((uVar1 & 4) != 0) {
        *(uint *)(param_1 + 0x154) = uVar1 | 8;
      }
      if (param_3 == 7) {
        FUN_143698630(param_1,&local_30,7);
        iVar2 = FUN_143698560(param_1,0);
        if (iVar2 == 0) {
          local_32 = local_2a;
          local_33 = local_2b;
          local_34 = local_2c;
          local_35 = local_2d;
          local_36 = local_2e;
          local_38 = (ushort)local_30 * 0x100 + (ushort)local_2f;
          FUN_143693440(param_1,param_2,&local_38);
        }
      }
      else {
        FUN_1436941c0(param_1,"Incorrect tIME chunk length");
        FUN_143698560(param_1,param_3);
      }
    }
    else {
      FUN_1436941c0(param_1,"Duplicate tIME chunk");
      FUN_143698560(param_1,param_3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_143693c80(param_1,"Out of place tIME chunk");
}



// FUNCTION 14369b4e0 FUN_14369b4e0 body=548 status=ok
// SIG undefined FUN_14369b4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14369b4e0(longlong param_1,longlong param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_168 [32];
  longlong local_148;
  byte local_138;
  byte local_137;
  byte local_134;
  byte local_133;
  byte local_132;
  byte local_131;
  byte local_130;
  byte local_12f;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar2 = *(uint *)(param_1 + 0x154);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before tRNS");
  }
  if ((uVar2 & 4) == 0) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x10) == 0)) {
      cVar1 = *(char *)(param_1 + 0x26f);
      if (cVar1 == '\0') {
        if (param_3 == 2) {
          FUN_143698630(param_1,&local_138,2);
          *(undefined2 *)(param_1 + 0x268) = 1;
          *(ushort *)(param_1 + 0x310) = (ushort)local_138 * 0x100 + (ushort)local_137;
LAB_14369b679:
          iVar3 = FUN_143698560(param_1,0);
          if (iVar3 != 0) {
            *(undefined2 *)(param_1 + 0x268) = 0;
            return;
          }
          local_148 = param_1 + 0x308;
          FUN_1436934a0(param_1,param_2,local_128,*(undefined2 *)(param_1 + 0x268));
          return;
        }
      }
      else {
        if (cVar1 != '\x02') {
          if (cVar1 == '\x03') {
            if ((uVar2 & 2) == 0) {
              FUN_1436941c0(param_1,"Missing PLTE before tRNS");
            }
            if ((param_3 <= *(ushort *)(param_1 + 0x260)) && (param_3 < 0x101)) {
              if (param_3 != 0) {
                FUN_143698630(param_1,local_128,param_3);
                *(short *)(param_1 + 0x268) = (short)param_3;
                goto LAB_14369b679;
              }
              FUN_1436941c0(param_1,"Zero length tRNS chunk");
              param_3 = 0;
              goto LAB_14369b6d2;
            }
            pcVar4 = "Incorrect tRNS chunk length";
          }
          else {
            pcVar4 = "tRNS chunk not allowed with alpha channel";
          }
          goto LAB_14369b6cb;
        }
        if (param_3 == 6) {
          FUN_143698630(param_1,&local_134,6);
          *(undefined2 *)(param_1 + 0x268) = 1;
          *(ushort *)(param_1 + 0x30a) = (ushort)local_134 * 0x100 + (ushort)local_133;
          *(ushort *)(param_1 + 0x30c) = (ushort)local_132 * 0x100 + (ushort)local_131;
          *(ushort *)(param_1 + 0x30e) = (ushort)local_130 * 0x100 + (ushort)local_12f;
          goto LAB_14369b679;
        }
      }
      pcVar4 = "Incorrect tRNS chunk length";
    }
    else {
      pcVar4 = "Duplicate tRNS chunk";
    }
  }
  else {
    pcVar4 = "Invalid tRNS after IDAT";
  }
LAB_14369b6cb:
  FUN_1436941c0(param_1,pcVar4);
LAB_14369b6d2:
  FUN_143698560(param_1,param_3);
  return;
}



// FUNCTION 14369b710 FUN_14369b710 body=503 status=ok
// SIG undefined FUN_14369b710(void)

void FUN_14369b710(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x444);
  uVar3 = (ulonglong)param_3;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_143698560(param_1,uVar3);
      return;
    }
    *(int *)(param_1 + 0x444) = iVar1 + -1;
    if (iVar1 + -1 == 1) {
      FUN_1436941c0(param_1,"No space in chunk cache for unknown chunk");
      FUN_143698560(param_1,uVar3);
      return;
    }
  }
  if (((*(uint *)(param_1 + 0x154) & 4) != 0) && (*(int *)(param_1 + 0x210) != 0x49444154)) {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 8;
  }
  if ((((*(uint *)(param_1 + 0x210) >> 0x1d & 1) == 0) && (iVar1 = FUN_143689ed0(), iVar1 != 3)) &&
     (*(longlong *)(param_1 + 0x3d8) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_143693b30(param_1,"unknown critical chunk");
  }
  if (((*(uint *)(param_1 + 0x158) & 0x8000) == 0) && (*(longlong *)(param_1 + 0x3d8) == 0))
  goto LAB_14369b8be;
  *(undefined1 *)(param_1 + 0x450) = *(undefined1 *)(param_1 + 0x213);
  *(undefined1 *)(param_1 + 0x451) = *(undefined1 *)(param_1 + 0x212);
  *(char *)(param_1 + 0x452) = (char)((uint)*(undefined4 *)(param_1 + 0x210) >> 8);
  *(undefined1 *)(param_1 + 0x453) = *(undefined1 *)(param_1 + 0x210);
  *(undefined1 *)(param_1 + 0x454) = 0;
  *(ulonglong *)(param_1 + 0x460) = uVar3;
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x458) = 0;
  }
  else {
    uVar2 = FUN_1436924c0(param_1,uVar3);
    *(undefined8 *)(param_1 + 0x458) = uVar2;
    FUN_143698630(param_1,uVar2,uVar3);
  }
  if (*(code **)(param_1 + 0x3d8) == (code *)0x0) {
LAB_14369b893:
    FUN_143693950(param_1,param_2,param_1 + 0x450,1);
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x3d8))(param_1,param_1 + 0x450);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_143693b30(param_1,"error in user chunk");
    }
    if (iVar1 == 0) {
      if (((*(uint *)(param_1 + 0x210) >> 0x1d & 1) == 0) &&
         (iVar1 = FUN_143689ed0(param_1), iVar1 != 3)) {
                    /* WARNING: Subroutine does not return */
        FUN_143693b30(param_1,"unknown critical chunk");
      }
      goto LAB_14369b893;
    }
  }
  FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x458));
  *(undefined8 *)(param_1 + 0x458) = 0;
  param_3 = 0;
LAB_14369b8be:
  FUN_143698560(param_1,param_3);
  return;
}



// FUNCTION 14369b910 FUN_14369b910 body=614 status=ok
// SIG undefined FUN_14369b910(void)

void FUN_14369b910(longlong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined8 local_res8;
  
  iVar5 = *(int *)(param_1 + 0x444);
  uVar8 = (ulonglong)param_3;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      FUN_143698560(param_1,uVar8);
      return;
    }
    *(int *)(param_1 + 0x444) = iVar5 + -1;
    if (iVar5 + -1 == 1) {
      FUN_1436941c0(param_1,"No space in chunk cache for zTXt");
      FUN_143698560(param_1,uVar8);
      return;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x154);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Missing IHDR before zTXt");
  }
  if ((uVar2 & 4) != 0) {
    *(uint *)(param_1 + 0x154) = uVar2 | 8;
  }
  FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
  lVar6 = FUN_143692540(param_1,param_3 + 1);
  *(longlong *)(param_1 + 0x478) = lVar6;
  if (lVar6 != 0) {
    FUN_143698630(param_1,lVar6,uVar8);
    iVar5 = FUN_143698560(param_1,0);
    if (iVar5 == 0) {
      *(undefined1 *)(uVar8 + *(longlong *)(param_1 + 0x478)) = 0;
      pcVar3 = *(char **)(param_1 + 0x478);
      cVar1 = *pcVar3;
      pcVar9 = pcVar3;
      while (cVar1 != '\0') {
        pcVar9 = pcVar9 + 1;
        cVar1 = *pcVar9;
      }
      if ((1 < uVar8) && (pcVar9 < pcVar3 + (uVar8 - 2))) {
        pcVar9 = pcVar9 + 1;
        iVar5 = (int)*pcVar9;
        if (*pcVar9 != '\0') {
          FUN_1436941c0(param_1,"Unknown compression type in zTXt chunk");
          iVar5 = 0;
        }
        lVar6 = *(longlong *)(param_1 + 0x478);
        FUN_143698670(param_1,iVar5,uVar8,pcVar9 + (1 - lVar6),&local_res8);
        piVar7 = (int *)FUN_143692540(param_1,0x38);
        if (piVar7 == (int *)0x0) {
          FUN_1436941c0(param_1,"Not enough memory to process zTXt chunk");
          FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
          *(undefined8 *)(param_1 + 0x478) = 0;
          return;
        }
        *piVar7 = iVar5;
        *(undefined8 *)(piVar7 + 2) = *(undefined8 *)(param_1 + 0x478);
        piVar7[10] = 0;
        piVar7[0xb] = 0;
        piVar7[0xc] = 0;
        piVar7[0xd] = 0;
        piVar7[8] = 0;
        piVar7[9] = 0;
        lVar4 = *(longlong *)(param_1 + 0x478);
        *(undefined8 *)(piVar7 + 6) = local_res8;
        *(char **)(piVar7 + 4) = pcVar9 + (1 - lVar6) + lVar4;
        iVar5 = FUN_1436935e0(param_1,param_2,piVar7,1);
        FUN_143692480(param_1,piVar7);
        FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
        *(undefined8 *)(param_1 + 0x478) = 0;
        if (iVar5 == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1,"Insufficient memory to store zTXt chunk");
      }
      FUN_1436941c0(param_1,"Truncated zTXt chunk");
    }
    FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x478));
    *(undefined8 *)(param_1 + 0x478) = 0;
    return;
  }
  FUN_1436941c0(param_1,"Out of memory processing zTXt chunk");
  return;
}



// FUNCTION 14369bb80 FUN_14369bb80 body=385 status=ok
// SIG undefined FUN_14369bb80(void)

ulonglong FUN_14369bb80(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                       ulonglong param_5)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong _Size;
  
  uVar5 = 0;
  if ((*(uint *)(param_1 + 0x158) & 0x200000) != 0) {
    inflateReset(param_1 + 0x160);
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffdfffff;
  }
  *(undefined8 *)(param_1 + 0x160) = param_2;
  *(undefined4 *)(param_1 + 0x168) = 0;
  do {
    if ((*(int *)(param_1 + 0x168) == 0) && (param_3 != 0)) {
      if (param_3 < 0x100000000) {
        *(int *)(param_1 + 0x168) = (int)param_3;
        param_3 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
        param_3 = param_3 - 0xffffffff;
      }
    }
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1c0);
    uVar1 = FUN_14369eec0(param_1 + 0x160,0);
    iVar2 = *(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x178);
    if ((uVar1 < 2) && (0 < iVar2)) {
      uVar4 = (ulonglong)iVar2;
      if ((param_4 != 0) && (uVar5 < param_5)) {
        _Size = uVar4;
        if (param_5 - uVar5 <= uVar4) {
          _Size = param_5 - uVar5;
        }
        _guard_xfg_dispatch_icall_nop((void *)(uVar5 + param_4),*(void **)(param_1 + 0x1b8),_Size);
      }
      uVar5 = uVar5 + uVar4;
    }
  } while (uVar1 == 0);
  *(undefined4 *)(param_1 + 0x168) = 0;
  inflateReset(param_1 + 0x160);
  if (uVar1 != 1) {
    pcVar3 = *(char **)(param_1 + 0x180);
    if (pcVar3 == (char *)0x0) {
      if (uVar1 == 0xfffffffb) {
        pcVar3 = "Buffer error in compressed datastream";
      }
      else {
        pcVar3 = "Incomplete compressed datastream";
        if (uVar1 == 0xfffffffd) {
          pcVar3 = "Data error in compressed datastream";
        }
      }
    }
    FUN_143693b70(param_1,pcVar3);
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 14369bd10 FUN_14369bd10 body=84 status=ok
// SIG undefined FUN_14369bd10(void)

void FUN_14369bd10(longlong param_1)

{
  code *pcVar1;
  
  *(undefined1 **)(param_1 + 0x490) = &LAB_14369c0a0;
  *(undefined1 **)(param_1 + 0x498) = &LAB_14369c0e0;
  *(undefined1 **)(param_1 + 0x4a0) = &LAB_14369be90;
  pcVar1 = FUN_14369bfc0;
  if (*(byte *)(param_1 + 0x272) + 7 >> 3 == 1) {
    pcVar1 = FUN_14369bef0;
  }
  *(code **)(param_1 + 0x4a8) = pcVar1;
  return;
}



// FUNCTION 14369bd70 FUN_14369bd70 body=187 status=ok
// SIG undefined FUN_14369bd70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14369bd70(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  *(undefined4 *)(param_1 + 0x480) = 0x21;
  FUN_143692280(param_1,local_18,8);
  uVar1 = FUN_143698d10(param_1,local_18);
  *(uint *)(param_1 + 0x210) = CONCAT31(CONCAT21(CONCAT11(local_14,local_13),local_12),local_11);
  FUN_14368a920(param_1);
  FUN_143689850(param_1,&local_14,4);
  FUN_143697ef0(param_1,*(undefined4 *)(param_1 + 0x210));
  *(undefined4 *)(param_1 + 0x480) = 0x41;
  return uVar1;
}



// FUNCTION 14369be30 FUN_14369be30 body=96 status=ok
// SIG undefined FUN_14369be30(void)

void FUN_14369be30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  if (param_5 - 1U < 4) {
    if (*(longlong *)(param_1 + 0x490) == 0) {
      FUN_14369bd10();
    }
    (**(code **)(param_1 + 0x490 + (longlong)(param_5 + -1) * 8))(param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 14369bef0 FUN_14369bef0 body=198 status=ok
// SIG undefined FUN_14369bef0(void)

void FUN_14369bef0(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  ulonglong uVar12;
  
  lVar2 = *(longlong *)(param_1 + 8);
  pbVar10 = param_2 + 1;
  bVar1 = *param_3;
  uVar3 = (uint)*param_2 + (uint)bVar1;
  uVar5 = 0;
  *param_2 = (byte)uVar3;
  uVar12 = (longlong)(param_2 + lVar2) - (longlong)pbVar10;
  if (param_2 + lVar2 < pbVar10) {
    uVar12 = uVar5;
  }
  if (uVar12 != 0) {
    do {
      uVar7 = (uint)bVar1;
      param_3 = param_3 + 1;
      bVar1 = *param_3;
      uVar9 = bVar1 - uVar7;
      uVar8 = (uVar3 & 0xff) - uVar7;
      iVar11 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
      iVar6 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
      uVar4 = (int)(uVar8 + uVar9) >> 0x1f;
      uVar3 = uVar3 & 0xff;
      if (iVar6 < iVar11) {
        uVar3 = (uint)bVar1;
        iVar11 = iVar6;
      }
      if ((int)((uVar8 + uVar9 ^ uVar4) - uVar4) < iVar11) {
        uVar3 = uVar7;
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 + *pbVar10;
      *pbVar10 = (byte)uVar3;
      pbVar10 = pbVar10 + 1;
    } while (uVar5 < uVar12);
  }
  return;
}



// FUNCTION 14369bfc0 FUN_14369bfc0 body=220 status=ok
// SIG undefined FUN_14369bfc0(void)

void FUN_14369bfc0(longlong param_1,char *param_2,byte *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar14;
  
  uVar5 = *(byte *)(param_1 + 0x13) + 7 >> 3;
  pcVar1 = param_2 + uVar5;
  uVar8 = 0;
  uVar12 = (longlong)pcVar1 - (longlong)param_2;
  if (pcVar1 < param_2) {
    uVar12 = uVar8;
  }
  if (uVar12 != 0) {
    do {
      uVar8 = uVar8 + 1;
      *param_2 = *param_2 + *param_3;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar8 < uVar12);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  if (param_2 < pcVar1 + (lVar4 - (ulonglong)uVar5)) {
    lVar14 = -(ulonglong)uVar5;
    do {
      bVar2 = param_3[lVar14];
      bVar3 = *param_3;
      param_3 = param_3 + 1;
      uVar11 = (uint)bVar3 - (uint)bVar2;
      uVar6 = (uint)(byte)param_2[lVar14] - (uint)bVar2;
      iVar9 = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
      iVar10 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
      uVar7 = (int)(uVar6 + uVar11) >> 0x1f;
      bVar13 = param_2[lVar14];
      if (iVar10 < iVar9) {
        iVar9 = iVar10;
        bVar13 = bVar3;
      }
      if ((int)((uVar6 + uVar11 ^ uVar7) - uVar7) < iVar9) {
        bVar13 = bVar2;
      }
      *param_2 = *param_2 + bVar13;
      param_2 = param_2 + 1;
    } while (param_2 < pcVar1 + (lVar4 - (ulonglong)uVar5));
  }
  return;
}



// FUNCTION 14369c170 FUN_14369c170 body=625 status=ok
// SIG undefined FUN_14369c170(void)

void FUN_14369c170(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_res8 [8];
  
  *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
  if (*(uint *)(param_1 + 0x1f8) <= *(uint *)(param_1 + 0x20c)) {
    if (*(char *)(param_1 + 0x26c) != '\0') {
      *(undefined4 *)(param_1 + 0x20c) = 0;
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x218),0,*(longlong *)(param_1 + 0x200) + 1);
      do {
        *(char *)(param_1 + 0x26d) = *(char *)(param_1 + 0x26d) + '\x01';
        bVar1 = *(byte *)(param_1 + 0x26d);
        if (6 < bVar1) goto LAB_14369c262;
        uVar2 = (((byte)(&UNK_145b63c3c)[bVar1] - 1) +
                (*(int *)(param_1 + 0x1f0) - (uint)(byte)(&UNK_145b63c34)[bVar1])) /
                (uint)(byte)(&UNK_145b63c3c)[bVar1];
        *(uint *)(param_1 + 0x208) = uVar2;
      } while (((*(byte *)(param_1 + 0x15c) & 2) == 0) &&
              ((uVar3 = (*(int *)(param_1 + 500) + -1 +
                        ((uint)(byte)(&UNK_145b63c4c)[bVar1] - (uint)(byte)(&UNK_145b63c44)[bVar1]))
                        / (uint)(byte)(&UNK_145b63c4c)[bVar1], *(uint *)(param_1 + 0x1f8) = uVar3,
               uVar3 == 0 || (uVar2 == 0))));
      if (bVar1 < 7) {
        return;
      }
    }
LAB_14369c262:
    if ((*(byte *)(param_1 + 0x158) & 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x178) = 1;
      *(undefined1 **)(param_1 + 0x170) = local_res8;
      do {
        if (*(int *)(param_1 + 0x168) == 0) {
          iVar4 = *(int *)(param_1 + 0x250);
          while (iVar4 == 0) {
            FUN_143698560(param_1,0);
            iVar4 = FUN_14369bd70(param_1);
            *(int *)(param_1 + 0x250) = iVar4;
            if (*(int *)(param_1 + 0x210) != 0x49444154) {
                    /* WARNING: Subroutine does not return */
              FUN_143693c80(param_1,"Not enough image data");
            }
          }
          uVar2 = *(uint *)(param_1 + 0x1c0);
          if (*(uint *)(param_1 + 0x250) < *(uint *)(param_1 + 0x1c0)) {
            uVar2 = *(uint *)(param_1 + 0x250);
          }
          *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x1b8);
          *(uint *)(param_1 + 0x168) = uVar2;
          FUN_143698630(param_1,*(undefined8 *)(param_1 + 0x1b8),uVar2);
          *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x168);
        }
        iVar4 = FUN_14369eec0(param_1 + 0x160);
        if (iVar4 == 1) {
          if (((*(int *)(param_1 + 0x178) != 0) && (*(int *)(param_1 + 0x168) == 0)) &&
             (*(int *)(param_1 + 0x250) == 0)) goto LAB_14369c35e;
          break;
        }
        if (iVar4 != 0) {
          pcVar5 = "Decompression Error";
          if (*(char **)(param_1 + 0x180) != (char *)0x0) {
            pcVar5 = *(char **)(param_1 + 0x180);
          }
                    /* WARNING: Subroutine does not return */
          FUN_143693c80(param_1,pcVar5);
        }
      } while (*(int *)(param_1 + 0x178) != 0);
      FUN_1436941c0(param_1,"Extra compressed data");
LAB_14369c35e:
      *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 8;
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x20;
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    if ((*(int *)(param_1 + 0x250) != 0) || (*(int *)(param_1 + 0x168) != 0)) {
      FUN_1436941c0(param_1,"Extra compression data");
    }
    inflateReset(param_1 + 0x160);
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 8;
  }
  return;
}



// FUNCTION 14369c3f0 FUN_14369c3f0 body=192 status=ok
// SIG undefined FUN_14369c3f0(void)

void FUN_14369c3f0(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x275);
  if (bVar1 < 8) {
    uVar4 = (ulonglong)bVar1;
    lVar3 = -uVar4 + 8;
    *(undefined4 *)(param_1 + 0x480) = 0x11;
    FUN_143692280(param_1,param_2 + 0x2c + uVar4,lVar3);
    *(undefined1 *)(param_1 + 0x275) = 8;
    iVar2 = FUN_14368a980(param_2 + 0x2c,uVar4,lVar3);
    if (iVar2 != 0) {
      if ((uVar4 < 4) && (iVar2 = FUN_14368a980(param_2 + 0x2c,bVar1,-uVar4 + 4), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_143693c80(param_1,"Not a PNG file");
      }
                    /* WARNING: Subroutine does not return */
      FUN_143693c80(param_1,"PNG file corrupted by ASCII conversion");
    }
    if (uVar4 < 3) {
      *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x1000;
    }
  }
  return;
}



// FUNCTION 14369c4c0 FUN_14369c4c0 body=782 status=ok
// SIG undefined FUN_14369c4c0(void)

void FUN_14369c4c0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  *(undefined4 *)(param_1 + 0x168) = 0;
  FUN_143690800();
  uVar2 = *(uint *)(param_1 + 500);
  if (*(char *)(param_1 + 0x26c) == '\0') {
    iVar9 = *(int *)(param_1 + 0x1f0);
    *(int *)(param_1 + 0x208) = iVar9;
    *(uint *)(param_1 + 0x1f8) = uVar2;
  }
  else {
    if ((*(byte *)(param_1 + 0x15c) & 2) == 0) {
      uVar2 = uVar2 + 7 >> 3;
    }
    iVar9 = *(int *)(param_1 + 0x1f0);
    *(uint *)(param_1 + 0x1f8) = uVar2;
    *(uint *)(param_1 + 0x208) =
         (((byte)(&DAT_145b63c5c)[*(byte *)(param_1 + 0x26d)] - 1) +
         (iVar9 - (uint)(byte)(&DAT_145b63c54)[*(byte *)(param_1 + 0x26d)])) /
         (uint)(byte)(&DAT_145b63c5c)[*(byte *)(param_1 + 0x26d)];
  }
  uVar2 = *(uint *)(param_1 + 0x15c);
  uVar7 = (uint)*(byte *)(param_1 + 0x272);
  if (((uVar2 & 4) != 0) && (*(byte *)(param_1 + 0x270) < 8)) {
    uVar7 = 8;
  }
  if ((uVar2 & 0x1000) != 0) {
    cVar1 = *(char *)(param_1 + 0x26f);
    if (cVar1 == '\x03') {
      uVar7 = 0x18;
      if (*(short *)(param_1 + 0x268) != 0) {
        uVar7 = 0x20;
      }
    }
    else if (cVar1 == '\0') {
      if (uVar7 < 8) {
        uVar7 = 8;
      }
      if (*(short *)(param_1 + 0x268) != 0) {
        uVar7 = uVar7 * 2;
      }
    }
    else if ((cVar1 == '\x02') && (*(short *)(param_1 + 0x268) != 0)) {
      uVar7 = (uVar7 * 4) / 3;
    }
  }
  if ((uVar2 >> 9 & 1) != 0) {
    if ((uVar2 & 0x1000) == 0) {
      *(uint *)(param_1 + 0x15c) = uVar2 & 0xfffffdff;
    }
    else if (*(byte *)(param_1 + 0x270) < 0x10) {
      uVar7 = uVar7 * 2;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x15c);
  uVar3 = uVar7;
  if ((uVar2 & 0x8000) != 0) {
    if (*(char *)(param_1 + 0x26f) == '\0') {
      uVar3 = 0x20;
      if (uVar7 < 9) {
        uVar3 = 0x10;
      }
    }
    else if (((byte)(*(char *)(param_1 + 0x26f) - 2U) < 2) && (uVar3 = 0x40, uVar7 < 0x21)) {
      uVar3 = 0x20;
    }
  }
  uVar7 = uVar3;
  if ((uVar2 >> 0xe & 1) != 0) {
    if ((((*(short *)(param_1 + 0x268) == 0) || ((uVar2 >> 0xc & 1) == 0)) &&
        ((uVar2 & 0x8000) == 0)) && (cVar1 = *(char *)(param_1 + 0x26f), cVar1 != '\x04')) {
      if (uVar3 < 9) {
        uVar7 = 0x18;
        if (cVar1 == '\x06') {
          uVar7 = 0x20;
        }
      }
      else {
        uVar7 = 0x30;
        if (cVar1 == '\x06') {
          uVar7 = 0x40;
        }
      }
    }
    else {
      uVar7 = 0x40;
      if (uVar3 < 0x11) {
        uVar7 = 0x20;
      }
    }
  }
  if (((uVar2 >> 0x14 & 1) != 0) &&
     (uVar2 = (uint)*(byte *)(param_1 + 0x151) * (uint)*(byte *)(param_1 + 0x150), uVar7 < uVar2)) {
    uVar7 = uVar2;
  }
  *(char *)(param_1 + 0x276) = (char)uVar7;
  *(undefined1 *)(param_1 + 0x277) = 0;
  uVar4 = (ulonglong)(iVar9 + 7) & 0xfffffff8;
  if (uVar7 < 8) {
    uVar4 = (longlong)(int)uVar7 * uVar4 + 7 >> 3;
  }
  else {
    uVar4 = ((ulonglong)(longlong)(int)uVar7 >> 3) * uVar4;
  }
  uVar4 = uVar4 + 0x31 + (longlong)((int)(uVar7 + 7) >> 3);
  if (*(ulonglong *)(param_1 + 0x470) < uVar4) {
    FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x418));
    FUN_143692480(param_1,*(undefined8 *)(param_1 + 0x488));
    if (*(char *)(param_1 + 0x26c) == '\0') {
      uVar5 = FUN_1436924c0(param_1,uVar4);
    }
    else {
      uVar5 = FUN_143692310();
    }
    *(undefined8 *)(param_1 + 0x418) = uVar5;
    lVar6 = FUN_1436924c0(param_1,uVar4);
    lVar8 = *(longlong *)(param_1 + 0x418) + 0x20;
    *(longlong *)(param_1 + 0x488) = lVar6;
    *(ulonglong *)(param_1 + 0x470) = uVar4;
    *(ulonglong *)(param_1 + 0x220) = (lVar8 - (ulonglong)((uint)lVar8 & 0xf)) + -1;
    *(ulonglong *)(param_1 + 0x218) =
         ((lVar6 + 0x20) - (ulonglong)((uint)(lVar6 + 0x20) & 0xf)) + -1;
  }
  if (*(longlong *)(param_1 + 0x200) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_143693c80(param_1,"Row has too many bytes to allocate in memory");
  }
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x218),0,*(longlong *)(param_1 + 0x200) + 1);
  *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x40;
  return;
}



// FUNCTION 14369c7d0 FUN_14369c7d0 body=676 status=ok
// SIG undefined FUN_14369c7d0(void)

char FUN_14369c7d0(longlong *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = (int)param_1[3] - 5;
  uVar2 = 0xffff;
  if (uVar4 < 0xffff) {
    uVar2 = uVar4;
  }
  lVar6 = 0;
  do {
    uVar4 = *(uint *)((longlong)param_1 + 0x9c);
    if (uVar4 < 2) {
      fill_window(param_1);
      uVar4 = *(uint *)((longlong)param_1 + 0x9c);
      if (uVar4 == 0) {
        if (param_2 == 0) {
          return '\0';
        }
        uVar2 = *(uint *)((longlong)param_1 + 0x84);
        *(undefined4 *)((longlong)param_1 + 0x170c) = 0;
        if (param_2 != 4) {
          if ((int)uVar2 < *(int *)((longlong)param_1 + 0x94)) {
            if (-1 < (int)uVar2) {
              lVar6 = (ulonglong)uVar2 + param_1[10];
            }
            FUN_1436a0f90(param_1,lVar6,*(int *)((longlong)param_1 + 0x94) - uVar2,0);
            *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
            flush_pending(*param_1);
            if (*(int *)(*param_1 + 0x18) == 0) {
              return '\0';
            }
          }
          return '\x01';
        }
        if (-1 < (int)uVar2) {
          lVar6 = (ulonglong)uVar2 + param_1[10];
        }
        FUN_1436a0f90(param_1,lVar6,*(int *)((longlong)param_1 + 0x94) - uVar2,1);
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        flush_pending(*param_1);
        return (*(int *)(*param_1 + 0x18) != 0) + '\x02';
      }
    }
    uVar8 = *(uint *)((longlong)param_1 + 0x84);
    piVar1 = (int *)((longlong)param_1 + 0x94);
    *piVar1 = *piVar1 + uVar4;
    uVar4 = *(uint *)((longlong)param_1 + 0x94);
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
    uVar7 = uVar8 + uVar2;
    if ((*piVar1 == 0) || (uVar7 <= uVar4)) {
      *(uint *)((longlong)param_1 + 0x94) = uVar7;
      *(uint *)((longlong)param_1 + 0x9c) = uVar4 - uVar7;
      lVar5 = lVar6;
      if (-1 < (int)uVar8) {
        lVar5 = (ulonglong)uVar8 + param_1[10];
      }
      FUN_1436a0f90(param_1,lVar5,uVar7 - uVar8,0);
      lVar5 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      lVar3 = *(longlong *)(lVar5 + 0x28);
      _tr_flush_bits(lVar3);
      uVar4 = *(uint *)(lVar3 + 0x28);
      if (*(uint *)(lVar5 + 0x18) < *(uint *)(lVar3 + 0x28)) {
        uVar4 = *(uint *)(lVar5 + 0x18);
      }
      if (uVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar5 + 0x10),*(void **)(lVar3 + 0x20),(ulonglong)uVar4);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + (ulonglong)uVar4;
        *(longlong *)(lVar3 + 0x20) = *(longlong *)(lVar3 + 0x20) + (ulonglong)uVar4;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + uVar4;
        *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) - uVar4;
        piVar1 = (int *)(lVar3 + 0x28);
        *piVar1 = *piVar1 - uVar4;
        if (*piVar1 == 0) {
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return '\0';
      }
    }
    uVar4 = *(uint *)((longlong)param_1 + 0x84);
    uVar8 = *(int *)((longlong)param_1 + 0x94) - uVar4;
    if (*(int *)((longlong)param_1 + 0x44) - 0x106U <= uVar8) {
      lVar5 = lVar6;
      if (-1 < (int)uVar4) {
        lVar5 = (ulonglong)uVar4 + param_1[10];
      }
      FUN_1436a0f90(param_1,lVar5,uVar8,0);
      lVar5 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      lVar3 = *(longlong *)(lVar5 + 0x28);
      _tr_flush_bits(lVar3);
      uVar4 = *(uint *)(lVar3 + 0x28);
      if (*(uint *)(lVar5 + 0x18) < *(uint *)(lVar3 + 0x28)) {
        uVar4 = *(uint *)(lVar5 + 0x18);
      }
      if (uVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar5 + 0x10),*(void **)(lVar3 + 0x20),(ulonglong)uVar4);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + (ulonglong)uVar4;
        *(longlong *)(lVar3 + 0x20) = *(longlong *)(lVar3 + 0x20) + (ulonglong)uVar4;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + uVar4;
        *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) - uVar4;
        piVar1 = (int *)(lVar3 + 0x28);
        *piVar1 = *piVar1 - uVar4;
        if (*piVar1 == 0) {
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return '\0';
      }
    }
  } while( true );
}



// FUNCTION 14369ca80 FUN_14369ca80 body=1118 status=ok
// SIG undefined FUN_14369ca80(void)

char FUN_14369ca80(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  short *psVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  short sVar11;
  ushort uVar12;
  uint uVar13;
  bool bVar14;
  
  lVar10 = 0;
  do {
    uVar13 = *(uint *)((longlong)param_1 + 0x9c);
    if (uVar13 < 0x106) {
      fill_window(param_1);
      uVar13 = *(uint *)((longlong)param_1 + 0x9c);
      if ((uVar13 < 0x106) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar13 == 0) {
        uVar13 = *(uint *)((longlong)param_1 + 0x94);
        uVar6 = 2;
        if (uVar13 < 2) {
          uVar6 = uVar13;
        }
        *(uint *)((longlong)param_1 + 0x170c) = uVar6;
        if (param_2 == 4) {
          uVar6 = *(uint *)((longlong)param_1 + 0x84);
          if (-1 < (int)uVar6) {
            lVar10 = (ulonglong)uVar6 + param_1[10];
          }
          FUN_1436a0f90(param_1,lVar10,uVar13 - uVar6,1);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          flush_pending(*param_1);
          return (*(int *)(*param_1 + 0x18) != 0) + '\x02';
        }
        if (*(int *)((longlong)param_1 + 0x16f4) != 0) {
          uVar6 = *(uint *)((longlong)param_1 + 0x84);
          if (-1 < (int)uVar6) {
            lVar10 = (ulonglong)uVar6 + param_1[10];
          }
          FUN_1436a0f90(param_1,lVar10,uVar13 - uVar6,0);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          flush_pending(*param_1);
          if (*(int *)(*param_1 + 0x18) == 0) {
            return '\0';
          }
        }
        return '\x01';
      }
    }
    if (2 < uVar13) {
      uVar13 = ((uint)*(byte *)((ulonglong)(*(uint *)((longlong)param_1 + 0x94) + 2) + param_1[10])
               ^ (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
               *(uint *)((longlong)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar13;
      *(undefined2 *)
       (param_1[0xc] +
       (ulonglong)(*(uint *)((longlong)param_1 + 0x94) & *(uint *)((longlong)param_1 + 0x4c)) * 2) =
           *(undefined2 *)(param_1[0xd] + (ulonglong)uVar13 * 2);
      uVar12 = *(ushort *)
                (param_1[0xc] +
                (ulonglong)
                (*(uint *)((longlong)param_1 + 0x94) & *(uint *)((longlong)param_1 + 0x4c)) * 2);
      *(undefined2 *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) =
           *(undefined2 *)((longlong)param_1 + 0x94);
      if ((uVar12 != 0) &&
         (*(int *)((longlong)param_1 + 0x94) - (uint)uVar12 <=
          *(int *)((longlong)param_1 + 0x44) - 0x106U)) {
        uVar5 = longest_match(param_1);
        *(undefined4 *)(param_1 + 0x11) = uVar5;
      }
    }
    if (*(uint *)(param_1 + 0x11) < 3) {
      bVar8 = *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10]);
      *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 0;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar8;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar3 = (short *)((longlong)param_1 + (ulonglong)bVar8 * 4 + 0xbc);
      *psVar3 = *psVar3 + 1;
      bVar14 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
LAB_14369cd53:
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
    }
    else {
      sVar11 = *(short *)((longlong)param_1 + 0x94) - (short)param_1[0x13];
      lVar9 = param_1[0x11];
      *(short *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = sVar11;
      bVar8 = (char)lVar9 - 3;
      uVar12 = sVar11 - 1;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar8;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar3 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_145b66910)[bVar8] * 4 + 0x4c0);
      *psVar3 = *psVar3 + 1;
      if (uVar12 < 0x100) {
        uVar7 = (ulonglong)uVar12;
      }
      else {
        uVar7 = (ulonglong)((uVar12 >> 7) + 0x100);
      }
      psVar3 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_145b66a10)[uVar7] * 4 + 0x9b0);
      *psVar3 = *psVar3 + 1;
      bVar14 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1;
      uVar13 = *(uint *)(param_1 + 0x11);
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) - uVar13;
      if ((uVar13 <= *(uint *)(param_1 + 0x15)) && (2 < *(uint *)((longlong)param_1 + 0x9c))) {
        *(uint *)(param_1 + 0x11) = uVar13 - 1;
        do {
          *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
          uVar13 = ((uint)*(byte *)((ulonglong)(*(uint *)((longlong)param_1 + 0x94) + 2) +
                                   param_1[10]) ^
                   (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
                   *(uint *)((longlong)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar13;
          *(undefined2 *)
           (param_1[0xc] +
           (ulonglong)(*(uint *)((longlong)param_1 + 0x94) & *(uint *)((longlong)param_1 + 0x4c)) *
           2) = *(undefined2 *)(param_1[0xd] + (ulonglong)uVar13 * 2);
          *(undefined2 *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) =
               *(undefined2 *)((longlong)param_1 + 0x94);
          plVar2 = param_1 + 0x11;
          *(int *)plVar2 = (int)*plVar2 + -1;
        } while ((int)*plVar2 != 0);
        goto LAB_14369cd53;
      }
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + uVar13;
      *(undefined4 *)(param_1 + 0x11) = 0;
      uVar13 = (uint)*(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10]);
      *(uint *)(param_1 + 0xe) = uVar13;
      *(uint *)(param_1 + 0xe) =
           (uVar13 << ((byte)(int)param_1[0x10] & 0x1f) ^
           (uint)*(byte *)((ulonglong)(*(uint *)((longlong)param_1 + 0x94) + 1) + param_1[10])) &
           *(uint *)((longlong)param_1 + 0x7c);
    }
    if (bVar14) {
      uVar13 = *(uint *)((longlong)param_1 + 0x84);
      lVar9 = lVar10;
      if (-1 < (int)uVar13) {
        lVar9 = (ulonglong)uVar13 + param_1[10];
      }
      FUN_1436a0f90(param_1,lVar9,*(int *)((longlong)param_1 + 0x94) - uVar13,0);
      lVar9 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      lVar4 = *(longlong *)(lVar9 + 0x28);
      _tr_flush_bits(lVar4);
      uVar13 = *(uint *)(lVar4 + 0x28);
      if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar4 + 0x28)) {
        uVar13 = *(uint *)(lVar9 + 0x18);
      }
      if (uVar13 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar9 + 0x10),*(void **)(lVar4 + 0x20),(ulonglong)uVar13);
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + (ulonglong)uVar13;
        *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + (ulonglong)uVar13;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + uVar13;
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) - uVar13;
        piVar1 = (int *)(lVar4 + 0x28);
        *piVar1 = *piVar1 - uVar13;
        if (*piVar1 == 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return '\0';
      }
    }
  } while( true );
}



// FUNCTION 14369cee0 FUN_14369cee0 body=1294 status=ok
// SIG undefined FUN_14369cee0(void)

char FUN_14369cee0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  short sVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar9 = 0;
  do {
    uVar12 = *(uint *)((longlong)param_1 + 0x9c);
    if (uVar12 < 0x106) {
      fill_window(param_1);
      uVar12 = *(uint *)((longlong)param_1 + 0x9c);
      if ((uVar12 < 0x106) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar12 == 0) {
        if ((int)param_1[0x12] != 0) {
          bVar8 = *(byte *)((ulonglong)(*(int *)((longlong)param_1 + 0x94) - 1) + param_1[10]);
          *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 0
          ;
          *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar8;
          *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
          psVar2 = (short *)((longlong)param_1 + (ulonglong)bVar8 * 4 + 0xbc);
          *psVar2 = *psVar2 + 1;
          *(undefined4 *)(param_1 + 0x12) = 0;
        }
        uVar12 = *(uint *)((longlong)param_1 + 0x94);
        uVar13 = 2;
        if (uVar12 < 2) {
          uVar13 = uVar12;
        }
        *(uint *)((longlong)param_1 + 0x170c) = uVar13;
        if (param_2 != 4) {
          if (*(int *)((longlong)param_1 + 0x16f4) != 0) {
            uVar13 = *(uint *)((longlong)param_1 + 0x84);
            if (-1 < (int)uVar13) {
              uVar9 = (ulonglong)uVar13 + param_1[10];
            }
            FUN_1436a0f90(param_1,uVar9,uVar12 - uVar13,0);
            *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
            flush_pending(*param_1);
            if (*(int *)(*param_1 + 0x18) == 0) {
              return '\0';
            }
          }
          return '\x01';
        }
        uVar13 = *(uint *)((longlong)param_1 + 0x84);
        if (-1 < (int)uVar13) {
          uVar9 = (ulonglong)uVar13 + param_1[10];
        }
        FUN_1436a0f90(param_1,uVar9,uVar12 - uVar13,1);
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        flush_pending(*param_1);
        return (*(int *)(*param_1 + 0x18) != 0) + '\x02';
      }
    }
    uVar7 = uVar9;
    if (2 < uVar12) {
      uVar12 = ((uint)*(byte *)((ulonglong)(*(uint *)((longlong)param_1 + 0x94) + 2) + param_1[10])
               ^ (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
               *(uint *)((longlong)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar12;
      *(undefined2 *)
       (param_1[0xc] +
       (ulonglong)(*(uint *)((longlong)param_1 + 0x94) & *(uint *)((longlong)param_1 + 0x4c)) * 2) =
           *(undefined2 *)(param_1[0xd] + (ulonglong)uVar12 * 2);
      uVar7 = (ulonglong)
              *(ushort *)
               (param_1[0xc] +
               (ulonglong)
               (*(uint *)((longlong)param_1 + 0x94) & *(uint *)((longlong)param_1 + 0x4c)) * 2);
      *(undefined2 *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) =
           *(undefined2 *)((longlong)param_1 + 0x94);
    }
    uVar12 = *(uint *)(param_1 + 0x11);
    *(uint *)(param_1 + 0x14) = uVar12;
    *(int *)((longlong)param_1 + 0x8c) = (int)param_1[0x13];
    *(undefined4 *)(param_1 + 0x11) = 2;
    if ((((int)uVar7 != 0) && (uVar12 < *(uint *)(param_1 + 0x15))) &&
       ((uint)(*(int *)((longlong)param_1 + 0x94) - (int)uVar7) <=
        *(int *)((longlong)param_1 + 0x44) - 0x106U)) {
      uVar12 = longest_match(param_1,uVar7);
      *(uint *)(param_1 + 0x11) = uVar12;
      if ((uVar12 < 6) &&
         (((int)param_1[0x16] == 1 ||
          ((uVar12 == 3 &&
           (0x1000 < (uint)(*(int *)((longlong)param_1 + 0x94) - (int)param_1[0x13]))))))) {
        *(undefined4 *)(param_1 + 0x11) = 2;
      }
    }
    uVar12 = *(uint *)(param_1 + 0x14);
    if ((uVar12 < 3) || (uVar12 < *(uint *)(param_1 + 0x11))) {
      if ((int)param_1[0x12] == 0) {
        *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
        *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
        *(undefined4 *)(param_1 + 0x12) = 1;
      }
      else {
        bVar8 = *(byte *)((ulonglong)(*(int *)((longlong)param_1 + 0x94) - 1) + param_1[10]);
        *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 0;
        *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar8;
        *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
        psVar2 = (short *)((longlong)param_1 + (ulonglong)bVar8 * 4 + 0xbc);
        *psVar2 = *psVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1) {
          uVar12 = *(uint *)((longlong)param_1 + 0x84);
          uVar7 = uVar9;
          if (-1 < (int)uVar12) {
            uVar7 = (ulonglong)uVar12 + param_1[10];
          }
          FUN_1436a0f90(param_1,uVar7,*(int *)((longlong)param_1 + 0x94) - uVar12,0);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          flush_pending(*param_1);
        }
        *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
        *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
        if (*(int *)(*param_1 + 0x18) == 0) {
          return '\0';
        }
      }
    }
    else {
      iVar3 = *(int *)((longlong)param_1 + 0x94);
      iVar4 = *(int *)((longlong)param_1 + 0x9c);
      sVar10 = *(short *)((longlong)param_1 + 0x94) - *(short *)((longlong)param_1 + 0x8c);
      bVar8 = (char)uVar12 - 3;
      *(short *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) =
           sVar10 + -1;
      uVar11 = sVar10 - 2;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar8;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar2 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_145b66910)[bVar8] * 4 + 0x4c0);
      *psVar2 = *psVar2 + 1;
      if (uVar11 < 0x100) {
        uVar7 = (ulonglong)uVar11;
      }
      else {
        uVar7 = (ulonglong)((uVar11 >> 7) + 0x100);
      }
      psVar2 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_145b66a10)[uVar7] * 4 + 0x9b0);
      *psVar2 = *psVar2 + 1;
      lVar6 = param_1[0x2de];
      iVar5 = *(int *)((longlong)param_1 + 0x16f4);
      *(int *)((longlong)param_1 + 0x9c) =
           *(int *)((longlong)param_1 + 0x9c) + (1 - (int)param_1[0x14]);
      *(int *)(param_1 + 0x14) = (int)param_1[0x14] + -2;
      do {
        *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
        uVar12 = *(uint *)((longlong)param_1 + 0x94);
        if (uVar12 <= (uint)(iVar4 + iVar3 + -3)) {
          uVar13 = ((uint)*(byte *)((ulonglong)(uVar12 + 2) + param_1[10]) ^
                   (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
                   *(uint *)((longlong)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar13;
          *(undefined2 *)
           (param_1[0xc] + (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & uVar12) * 2) =
               *(undefined2 *)(param_1[0xd] + (ulonglong)uVar13 * 2);
          *(undefined2 *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) =
               *(undefined2 *)((longlong)param_1 + 0x94);
        }
        plVar1 = param_1 + 0x14;
        *(int *)plVar1 = (int)*plVar1 + -1;
      } while ((int)*plVar1 != 0);
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
      *(undefined4 *)(param_1 + 0x12) = 0;
      *(undefined4 *)(param_1 + 0x11) = 2;
      if (iVar5 == (int)lVar6 + -1) {
        uVar12 = *(uint *)((longlong)param_1 + 0x84);
        uVar7 = uVar9;
        if (-1 < (int)uVar12) {
          uVar7 = (ulonglong)uVar12 + param_1[10];
        }
        FUN_1436a0f90(param_1,uVar7,*(int *)((longlong)param_1 + 0x94) - uVar12,0);
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        flush_pending(*param_1);
        if (*(int *)(*param_1 + 0x18) == 0) {
          return '\0';
        }
      }
    }
  } while( true );
}



// FUNCTION 14369d3f0 FUN_14369d3f0 body=2334 status=ok
// SIG undefined FUN_14369d3f0(void)

uint FUN_14369d3f0(longlong *param_1,uint param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  if (((param_1 == (longlong *)0x0) ||
      (puVar5 = (undefined8 *)param_1[5], puVar5 == (undefined8 *)0x0)) || (5 < param_2)) {
    return 0xfffffffe;
  }
  if (((param_1[2] == 0) || ((*param_1 == 0 && ((int)param_1[1] != 0)))) ||
     ((*(int *)(puVar5 + 1) == 0x29a && (param_2 != 4)))) {
    param_1[4] = (longlong)"stream error";
    return 0xfffffffe;
  }
  if ((int)param_1[3] == 0) {
    param_1[4] = (longlong)"buffer error";
    return 0xfffffffb;
  }
  iVar3 = *(int *)(puVar5 + 8);
  *puVar5 = param_1;
  *(uint *)(puVar5 + 8) = param_2;
  iVar13 = 0;
  if (*(int *)(puVar5 + 1) == 0x2a) {
    if (*(int *)((longlong)puVar5 + 0x2c) == 2) {
      uVar8 = crc32(0,0,0);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
      *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0x1f;
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0x8b;
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 8;
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      piVar6 = (int *)puVar5[6];
      uVar11 = 0;
      if (piVar6 == (int *)0x0) {
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        if (*(int *)((longlong)puVar5 + 0xac) == 9) {
          iVar14 = 2;
        }
        else if ((1 < *(int *)(puVar5 + 0x16)) ||
                (iVar14 = iVar13, *(int *)((longlong)puVar5 + 0xac) < 2)) {
          iVar14 = 4;
        }
        *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)iVar14;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0xb;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined4 *)(puVar5 + 1) = 0x71;
      }
      else {
        *(byte *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             (-(*(longlong *)(piVar6 + 0xc) != 0) & 0x10U) + (-(piVar6[0xf] != 0) & 2U) +
             (-(*(longlong *)(piVar6 + 8) != 0) & 8U) + (-(*(longlong *)(piVar6 + 4) != 0) & 4U) +
             (*piVar6 != 0);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             *(undefined1 *)(puVar5[6] + 4);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             *(undefined1 *)(puVar5[6] + 5);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             *(undefined1 *)(puVar5[6] + 6);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             *(undefined1 *)(puVar5[6] + 7);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        if (*(int *)((longlong)puVar5 + 0xac) == 9) {
          uVar11 = 2;
        }
        else if ((1 < *(int *)(puVar5 + 0x16)) || (*(int *)((longlong)puVar5 + 0xac) < 2)) {
          uVar11 = 4;
        }
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = uVar11;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             *(undefined1 *)(puVar5[6] + 0xc);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        uVar12 = (ulonglong)*(uint *)(puVar5 + 5);
        if (*(longlong *)(puVar5[6] + 0x10) != 0) {
          *(undefined1 *)(uVar12 + puVar5[2]) = *(undefined1 *)(puVar5[6] + 0x18);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)(puVar5[6] + 0x19);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          uVar12 = (ulonglong)*(uint *)(puVar5 + 5);
        }
        if (*(int *)(puVar5[6] + 0x3c) != 0) {
          uVar8 = crc32(*(undefined4 *)((longlong)param_1 + 0x4c),puVar5[2],uVar12);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
        }
        *(undefined4 *)(puVar5 + 7) = 0;
        *(undefined4 *)(puVar5 + 1) = 0x45;
      }
    }
    else {
      iVar14 = iVar13;
      if ((*(int *)(puVar5 + 0x16) < 2) && (iVar4 = *(int *)((longlong)puVar5 + 0xac), 1 < iVar4)) {
        if (iVar4 < 6) {
          iVar14 = 1;
        }
        else {
          iVar14 = (iVar4 != 6) + 2;
        }
      }
      uVar9 = *(int *)(puVar5 + 9) * 0x1000 - 0x7800U | iVar14 << 6;
      if (*(int *)((longlong)puVar5 + 0x94) != 0) {
        uVar9 = uVar9 | 0x20;
      }
      *(undefined4 *)(puVar5 + 1) = 0x71;
      iVar14 = (uVar9 / 0x1f + 1) * 0x1f;
      *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)((uint)iVar14 >> 8);
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)iVar14;
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      if (*(int *)((longlong)puVar5 + 0x94) != 0) {
        uVar2 = *(undefined2 *)((longlong)param_1 + 0x4e);
        *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)((ushort)uVar2 >> 8);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)uVar2;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        uVar2 = *(undefined2 *)((longlong)param_1 + 0x4c);
        *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)((ushort)uVar2 >> 8);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)uVar2;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      }
      uVar8 = adler32(0,0,0);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
    }
  }
  if (*(int *)(puVar5 + 1) == 0x45) {
    if (*(longlong *)(puVar5[6] + 0x10) != 0) {
      uVar9 = *(uint *)(puVar5 + 5);
      if (*(uint *)(puVar5 + 7) < (uint)*(ushort *)(puVar5[6] + 0x18)) {
        do {
          uVar10 = *(uint *)(puVar5 + 5);
          if (uVar10 == *(uint *)(puVar5 + 3)) {
            if ((*(int *)(puVar5[6] + 0x3c) != 0) && (uVar9 < uVar10)) {
              uVar8 = crc32(*(undefined4 *)((longlong)param_1 + 0x4c),(ulonglong)uVar9 + puVar5[2],
                            uVar10 - uVar9);
              *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
            }
            flush_pending(param_1);
            uVar9 = *(uint *)(puVar5 + 5);
            uVar10 = uVar9;
            if (uVar9 == *(uint *)(puVar5 + 3)) break;
          }
          *(undefined1 *)((ulonglong)uVar10 + puVar5[2]) =
               *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 7) + *(longlong *)(puVar5[6] + 0x10));
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(int *)(puVar5 + 7) = *(int *)(puVar5 + 7) + 1;
        } while (*(uint *)(puVar5 + 7) < (uint)*(ushort *)(puVar5[6] + 0x18));
      }
      if ((*(int *)(puVar5[6] + 0x3c) != 0) && (uVar9 < *(uint *)(puVar5 + 5))) {
        uVar8 = crc32(*(undefined4 *)((longlong)param_1 + 0x4c),(ulonglong)uVar9 + puVar5[2],
                      *(uint *)(puVar5 + 5) - uVar9);
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
      }
      if (*(int *)(puVar5 + 7) != *(int *)(puVar5[6] + 0x18)) goto LAB_14369d86d;
      *(undefined4 *)(puVar5 + 7) = 0;
    }
    *(undefined4 *)(puVar5 + 1) = 0x49;
  }
LAB_14369d86d:
  if (*(int *)(puVar5 + 1) == 0x49) {
    if (*(longlong *)(puVar5[6] + 0x20) != 0) {
      uVar12 = (ulonglong)*(uint *)(puVar5 + 5);
      do {
        uVar9 = *(uint *)(puVar5 + 5);
        uVar15 = (ulonglong)uVar9;
        if (uVar9 == *(uint *)(puVar5 + 3)) {
          if ((*(int *)(puVar5[6] + 0x3c) != 0) && ((uint)uVar12 < uVar9)) {
            uVar8 = crc32(*(undefined4 *)((longlong)param_1 + 0x4c),uVar12 + puVar5[2],
                          uVar9 - (uint)uVar12);
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
          }
          flush_pending(param_1);
          uVar12 = (ulonglong)*(uint *)(puVar5 + 5);
          uVar15 = uVar12;
          if (*(uint *)(puVar5 + 5) == *(uint *)(puVar5 + 3)) {
            bVar7 = true;
            goto LAB_14369d8ff;
          }
        }
        cVar1 = *(char *)(*(longlong *)(puVar5[6] + 0x20) + (ulonglong)*(uint *)(puVar5 + 7));
        *(uint *)(puVar5 + 7) = *(uint *)(puVar5 + 7) + 1;
        *(char *)(uVar15 + puVar5[2]) = cVar1;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      } while (cVar1 != '\0');
      bVar7 = false;
LAB_14369d8ff:
      if (*(int *)(puVar5[6] + 0x3c) != 0) {
        if ((uint)uVar12 < *(uint *)(puVar5 + 5)) {
          uVar8 = crc32(*(undefined4 *)((longlong)param_1 + 0x4c),uVar12 + puVar5[2],
                        *(uint *)(puVar5 + 5) - (uint)uVar12);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
        }
      }
      if (bVar7) goto LAB_14369d931;
      *(undefined4 *)(puVar5 + 7) = 0;
    }
    *(undefined4 *)(puVar5 + 1) = 0x5b;
  }
LAB_14369d931:
  if (*(int *)(puVar5 + 1) == 0x5b) {
    if (*(longlong *)(puVar5[6] + 0x30) != 0) {
      uVar12 = (ulonglong)*(uint *)(puVar5 + 5);
      do {
        uVar9 = *(uint *)(puVar5 + 5);
        uVar15 = (ulonglong)uVar9;
        if (uVar9 == *(uint *)(puVar5 + 3)) {
          if ((*(int *)(puVar5[6] + 0x3c) != 0) && ((uint)uVar12 < uVar9)) {
            uVar8 = crc32(*(undefined4 *)((longlong)param_1 + 0x4c),uVar12 + puVar5[2],
                          uVar9 - (uint)uVar12);
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
          }
          flush_pending(param_1);
          uVar12 = (ulonglong)*(uint *)(puVar5 + 5);
          uVar15 = uVar12;
          if (*(uint *)(puVar5 + 5) == *(uint *)(puVar5 + 3)) {
            bVar7 = true;
            goto LAB_14369d9bf;
          }
        }
        cVar1 = *(char *)(*(longlong *)(puVar5[6] + 0x30) + (ulonglong)*(uint *)(puVar5 + 7));
        *(uint *)(puVar5 + 7) = *(uint *)(puVar5 + 7) + 1;
        *(char *)(uVar15 + puVar5[2]) = cVar1;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      } while (cVar1 != '\0');
      bVar7 = false;
LAB_14369d9bf:
      if (*(int *)(puVar5[6] + 0x3c) != 0) {
        if ((uint)uVar12 < *(uint *)(puVar5 + 5)) {
          uVar8 = crc32(*(undefined4 *)((longlong)param_1 + 0x4c),uVar12 + puVar5[2],
                        *(uint *)(puVar5 + 5) - (uint)uVar12);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
        }
      }
      if (bVar7) goto LAB_14369d9ee;
    }
    *(undefined4 *)(puVar5 + 1) = 0x67;
  }
LAB_14369d9ee:
  if (*(int *)(puVar5 + 1) == 0x67) {
    if (*(int *)(puVar5[6] + 0x3c) != 0) {
      if (*(uint *)(puVar5 + 3) < *(int *)(puVar5 + 5) + 2U) {
        flush_pending(param_1);
      }
      if (*(uint *)(puVar5 + 3) < *(uint *)(puVar5 + 5) + 2) goto LAB_14369da57;
      *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
           *(undefined1 *)((longlong)param_1 + 0x4c);
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
           *(undefined1 *)((longlong)param_1 + 0x4d);
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      uVar8 = crc32(0,0,0);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
    }
    *(undefined4 *)(puVar5 + 1) = 0x71;
  }
LAB_14369da57:
  if (*(int *)(puVar5 + 5) == 0) {
    if ((int)param_1[1] == 0) {
      iVar14 = iVar13;
      if (4 < iVar3) {
        iVar14 = 9;
      }
      if (4 < (int)param_2) {
        iVar13 = 9;
      }
      if (((int)(param_2 * 2 - iVar13) <= iVar3 * 2 - iVar14) && (param_2 != 4)) goto LAB_14369dac9;
    }
LAB_14369daba:
    if (*(int *)(puVar5 + 1) == 0x29a) {
      if ((int)param_1[1] != 0) {
LAB_14369dac9:
        param_1[4] = (longlong)"buffer error";
        return 0xfffffffb;
      }
LAB_14369dae0:
      if ((*(int *)((longlong)puVar5 + 0x9c) != 0) ||
         ((param_2 != 0 && (*(int *)(puVar5 + 1) != 0x29a)))) goto LAB_14369dafc;
    }
    else {
      if ((int)param_1[1] == 0) goto LAB_14369dae0;
LAB_14369dafc:
      if (*(int *)(puVar5 + 0x16) == 2) {
        uVar9 = FUN_14369e2d0();
      }
      else if (*(int *)(puVar5 + 0x16) == 3) {
        uVar9 = FUN_14369e500();
      }
      else {
        uVar9 = (*(code *)(&PTR_FUN_145b63db8)[(longlong)*(int *)((longlong)puVar5 + 0xac) * 2])
                          (puVar5);
      }
      if (uVar9 - 2 < 2) {
        *(undefined4 *)(puVar5 + 1) = 0x29a;
      }
      if ((uVar9 & 0xfffffffd) == 0) {
        if ((int)param_1[3] != 0) {
          return 0;
        }
        goto LAB_14369da69;
      }
      if (uVar9 == 1) {
        if (param_2 == 1) {
          _tr_align(puVar5);
        }
        else if ((param_2 != 5) && (_tr_stored_block(puVar5,0,0,0), param_2 == 3)) {
          *(undefined2 *)(puVar5[0xd] + (ulonglong)(*(int *)((longlong)puVar5 + 0x74) - 1) * 2) = 0;
          _guard_xfg_dispatch_icall_nop
                    ((void *)puVar5[0xd],0,(ulonglong)(*(int *)((longlong)puVar5 + 0x74) - 1) * 2);
          if (*(int *)((longlong)puVar5 + 0x9c) == 0) {
            *(undefined4 *)((longlong)puVar5 + 0x94) = 0;
            *(undefined4 *)((longlong)puVar5 + 0x84) = 0;
            *(undefined4 *)((longlong)puVar5 + 0x170c) = 0;
          }
        }
        flush_pending(param_1);
        if ((int)param_1[3] == 0) goto LAB_14369da69;
      }
    }
    if (param_2 == 4) {
      if (0 < *(int *)((longlong)puVar5 + 0x2c)) {
        if (*(int *)((longlong)puVar5 + 0x2c) == 2) {
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0x4c);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0x4d);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0x4e);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0x4f);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0xc);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0xd);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0xe);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0xf);
        }
        else {
          uVar2 = *(undefined2 *)((longlong)param_1 + 0x4e);
          *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)((ushort)uVar2 >> 8);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)uVar2;
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          uVar2 = *(undefined2 *)((longlong)param_1 + 0x4c);
          *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)((ushort)uVar2 >> 8);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)uVar2;
        }
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        flush_pending(param_1);
        if (0 < *(int *)((longlong)puVar5 + 0x2c)) {
          *(int *)((longlong)puVar5 + 0x2c) = -*(int *)((longlong)puVar5 + 0x2c);
        }
        return (uint)(*(int *)(puVar5 + 5) == 0);
      }
      return 1;
    }
  }
  else {
    flush_pending(param_1);
    if ((int)param_1[3] != 0) goto LAB_14369daba;
LAB_14369da69:
    *(undefined4 *)(puVar5 + 8) = 0xffffffff;
  }
  return 0;
}



// FUNCTION 14369dd10 FUN_14369dd10 body=270 status=ok
// SIG undefined FUN_14369dd10(void)

int FUN_14369dd10(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (param_2 + 0x3f >> 6) + param_2 + (param_2 + 7 >> 3) + 5;
  if ((param_1 == 0) || (lVar2 = *(longlong *)(param_1 + 0x28), lVar2 == 0)) {
    return iVar6 + 6;
  }
  iVar5 = *(int *)(lVar2 + 0x2c);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else if (iVar5 == 1) {
    iVar5 = 6;
    if (*(int *)(lVar2 + 0x94) != 0) {
      iVar5 = 10;
    }
  }
  else if (iVar5 == 2) {
    lVar3 = *(longlong *)(lVar2 + 0x30);
    iVar5 = 0x12;
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        iVar5 = *(int *)(lVar3 + 0x18) + 0x14;
      }
      pcVar4 = *(char **)(lVar3 + 0x20);
      if (pcVar4 != (char *)0x0) {
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          iVar5 = iVar5 + 1;
        } while (cVar1 != '\0');
      }
      pcVar4 = *(char **)(lVar3 + 0x30);
      if (pcVar4 != (char *)0x0) {
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          iVar5 = iVar5 + 1;
        } while (cVar1 != '\0');
      }
      if (*(int *)(lVar3 + 0x3c) != 0) {
        iVar5 = iVar5 + 2;
      }
    }
  }
  else {
    iVar5 = 6;
  }
  if ((*(int *)(lVar2 + 0x48) == 0xf) && (*(int *)(lVar2 + 0x78) == 0xf)) {
    return (param_2 >> 0xc) + 7 + (param_2 >> 0xe) + iVar5 + (param_2 >> 0x19) + param_2;
  }
  return iVar5 + iVar6;
}



// FUNCTION 14369de20 deflateEnd body=218 status=ok
// SIG undefined deflateEnd(void)

undefined8 deflateEnd(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || (lVar2 = *(longlong *)(param_1 + 0x28), lVar2 == 0)) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(lVar2 + 8);
  if ((((0x3d < iVar1 - 0x2aU) ||
       ((0x2002000088000001U >> ((ulonglong)(iVar1 - 0x2aU) & 0x3f) & 1) == 0)) && (iVar1 != 0x71))
     && (iVar1 != 0x29a)) {
    return 0xfffffffe;
  }
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x68) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x60) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x50) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (iVar1 == 0x71) {
    uVar3 = 0xfffffffd;
  }
  return uVar3;
}



// FUNCTION 14369df00 deflateInit2_ body=643 status=ok
// SIG undefined deflateInit2_(void)

undefined8
deflateInit2_(longlong param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
             char *param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = 1;
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x58)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(code **)(param_1 + 0x30) = FUN_1436a2d70;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(code **)(param_1 + 0x38) = FUN_1436a2d80;
  }
  uVar7 = 6;
  if (param_2 != 0xffffffff) {
    uVar7 = param_2;
  }
  if (param_4 < 0) {
    uVar6 = 0;
    param_4 = -param_4;
  }
  else if (0xf < param_4) {
    uVar6 = 2;
    param_4 = param_4 + -0x10;
  }
  if (((param_5 - 1U < 9) && (param_3 == 8)) &&
     ((param_4 - 8U < 8 && ((uVar7 < 10 && (param_6 < 5)))))) {
    if (param_4 == 8) {
      param_4 = 9;
    }
    plVar3 = (longlong *)(**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x1720);
    if (plVar3 != (longlong *)0x0) {
      *(longlong **)(param_1 + 0x28) = plVar3;
      *(undefined4 *)((longlong)plVar3 + 0x2c) = uVar6;
      iVar8 = 1 << ((byte)param_4 & 0x1f);
      *plVar3 = param_1;
      plVar3[6] = 0;
      *(int *)(plVar3 + 9) = param_4;
      *(int *)((longlong)plVar3 + 0x44) = iVar8;
      *(int *)(plVar3 + 0xf) = param_5 + 7;
      *(int *)((longlong)plVar3 + 0x4c) = iVar8 + -1;
      iVar2 = 1 << ((byte)(param_5 + 7) & 0x1f);
      *(int *)((longlong)plVar3 + 0x74) = iVar2;
      *(int *)((longlong)plVar3 + 0x7c) = iVar2 + -1;
      *(uint *)(plVar3 + 0x10) = (param_5 + 9U) / 3;
      lVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),iVar8,2);
      plVar3[10] = lVar4;
      lVar4 = (**(code **)(param_1 + 0x30))
                        (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar3 + 0x44),2)
      ;
      plVar3[0xc] = lVar4;
      lVar4 = (**(code **)(param_1 + 0x30))
                        (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar3 + 0x74),2)
      ;
      *(undefined4 *)(plVar3 + 0x2e3) = 0;
      iVar2 = 1 << ((char)param_5 + 6U & 0x1f);
      *(int *)(plVar3 + 0x2de) = iVar2;
      plVar3[0xd] = lVar4;
      lVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),iVar2,4);
      plVar3[2] = lVar4;
      uVar1 = *(uint *)(plVar3 + 0x2de);
      *(uint *)(plVar3 + 3) = uVar1 * 4;
      if ((((plVar3[10] != 0) && (plVar3[0xc] != 0)) && (plVar3[0xd] != 0)) && (lVar4 != 0)) {
        *(uint *)((longlong)plVar3 + 0xac) = uVar7;
        *(uint *)(plVar3 + 0x16) = param_6;
        *(undefined1 *)((longlong)plVar3 + 0x3c) = 8;
        plVar3[0x2df] = lVar4 + (ulonglong)(uVar1 >> 1) * 2;
        plVar3[0x2dd] = lVar4 + (ulonglong)uVar1 * 3;
        uVar5 = deflateReset(param_1);
        return uVar5;
      }
      *(undefined4 *)(plVar3 + 1) = 0x29a;
      *(char **)(param_1 + 0x20) = "insufficient memory";
      deflateEnd(param_1);
    }
    uVar5 = 0xfffffffc;
  }
  else {
    uVar5 = 0xfffffffe;
  }
  return uVar5;
}



// FUNCTION 14369e190 deflateInit_ body=50 status=ok
// SIG undefined deflateInit_(void)

void deflateInit_(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  deflateInit2_(param_1,param_2,8,0xf,8,0,param_3,param_4);
  return;
}



// FUNCTION 14369e1d0 deflateReset body=46 status=ok
// SIG undefined deflateReset(void)

ulonglong deflateReset(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = deflateResetKeep();
  if ((int)uVar1 == 0) {
    lm_init(*(undefined8 *)(param_1 + 0x28));
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 14369e200 deflateResetKeep body=195 status=ok
// SIG undefined deflateResetKeep(void)

undefined8 deflateResetKeep(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) &&
      (*(longlong *)(param_1 + 0x30) != 0)) && (*(longlong *)(param_1 + 0x38) != 0)) {
    *(undefined4 *)(param_1 + 0x48) = 2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined4 *)(lVar1 + 0x28) = 0;
    if (*(int *)(lVar1 + 0x2c) < 0) {
      *(int *)(lVar1 + 0x2c) = -*(int *)(lVar1 + 0x2c);
    }
    uVar2 = 0x71;
    if (*(int *)(lVar1 + 0x2c) != 0) {
      uVar2 = 0x2a;
    }
    *(undefined4 *)(lVar1 + 8) = uVar2;
    if (*(int *)(lVar1 + 0x2c) == 2) {
      uVar2 = crc32(0);
    }
    else {
      uVar2 = adler32(0,0,0);
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    *(undefined4 *)(lVar1 + 0x40) = 0;
    _tr_init(lVar1);
    return 0;
  }
  return 0xfffffffe;
}



// FUNCTION 14369e2d0 FUN_14369e2d0 body=547 status=ok
// SIG undefined FUN_14369e2d0(void)

char FUN_14369e2d0(longlong *param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = 0;
  while ((*(int *)((longlong)param_1 + 0x9c) != 0 ||
         (fill_window(param_1), *(int *)((longlong)param_1 + 0x9c) != 0))) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    bVar3 = *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10]);
    *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 0;
    *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar3;
    *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
    psVar2 = (short *)((longlong)param_1 + (ulonglong)bVar3 * 4 + 0xbc);
    *psVar2 = *psVar2 + 1;
    *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
    *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
    if (*(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1) {
      uVar7 = *(uint *)((longlong)param_1 + 0x84);
      lVar5 = lVar6;
      if (-1 < (int)uVar7) {
        lVar5 = (ulonglong)uVar7 + param_1[10];
      }
      FUN_1436a0f90(param_1,lVar5,*(int *)((longlong)param_1 + 0x94) - uVar7,0);
      lVar5 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      lVar4 = *(longlong *)(lVar5 + 0x28);
      _tr_flush_bits(lVar4);
      uVar7 = *(uint *)(lVar4 + 0x28);
      if (*(uint *)(lVar5 + 0x18) < *(uint *)(lVar4 + 0x28)) {
        uVar7 = *(uint *)(lVar5 + 0x18);
      }
      if (uVar7 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar5 + 0x10),*(void **)(lVar4 + 0x20),(ulonglong)uVar7);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + (ulonglong)uVar7;
        *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + (ulonglong)uVar7;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + uVar7;
        *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) - uVar7;
        piVar1 = (int *)(lVar4 + 0x28);
        *piVar1 = *piVar1 - uVar7;
        if (*piVar1 == 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return '\0';
      }
    }
  }
  if (param_2 == 0) {
    return '\0';
  }
  *(undefined4 *)((longlong)param_1 + 0x170c) = 0;
  if (param_2 != 4) {
    if (*(int *)((longlong)param_1 + 0x16f4) != 0) {
      uVar7 = *(uint *)((longlong)param_1 + 0x84);
      if (-1 < (int)uVar7) {
        lVar6 = (ulonglong)uVar7 + param_1[10];
      }
      FUN_1436a0f90(param_1,lVar6,*(int *)((longlong)param_1 + 0x94) - uVar7,0);
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      flush_pending(*param_1);
      if (*(int *)(*param_1 + 0x18) == 0) {
        return '\0';
      }
    }
    return '\x01';
  }
  uVar7 = *(uint *)((longlong)param_1 + 0x84);
  if (-1 < (int)uVar7) {
    lVar6 = (ulonglong)uVar7 + param_1[10];
  }
  FUN_1436a0f90(param_1,lVar6,*(int *)((longlong)param_1 + 0x94) - uVar7,1);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
  flush_pending(*param_1);
  return (*(int *)(*param_1 + 0x18) != 0) + '\x02';
}



// FUNCTION 14369e500 FUN_14369e500 body=948 status=ok
// SIG undefined FUN_14369e500(void)

char FUN_14369e500(longlong *param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  char *pcVar12;
  bool bVar13;
  
  lVar10 = 0;
  do {
    uVar11 = *(uint *)((longlong)param_1 + 0x9c);
    if (uVar11 < 0x103) {
      fill_window(param_1);
      uVar11 = *(uint *)((longlong)param_1 + 0x9c);
      if ((uVar11 < 0x103) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar11 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x170c) = 0;
        if (param_2 == 4) {
          uVar11 = *(uint *)((longlong)param_1 + 0x84);
          if (-1 < (int)uVar11) {
            lVar10 = (ulonglong)uVar11 + param_1[10];
          }
          FUN_1436a0f90(param_1,lVar10,*(int *)((longlong)param_1 + 0x94) - uVar11,1);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          flush_pending(*param_1);
          return (*(int *)(*param_1 + 0x18) != 0) + '\x02';
        }
        if (*(int *)((longlong)param_1 + 0x16f4) != 0) {
          uVar11 = *(uint *)((longlong)param_1 + 0x84);
          if (-1 < (int)uVar11) {
            lVar10 = (ulonglong)uVar11 + param_1[10];
          }
          FUN_1436a0f90(param_1,lVar10,*(int *)((longlong)param_1 + 0x94) - uVar11,0);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          flush_pending(*param_1);
          if (*(int *)(*param_1 + 0x18) == 0) {
            return '\0';
          }
        }
        return '\x01';
      }
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    if ((2 < uVar11) && (*(uint *)((longlong)param_1 + 0x94) != 0)) {
      pcVar12 = (char *)(param_1[10] + (ulonglong)*(uint *)((longlong)param_1 + 0x94));
      cVar3 = pcVar12[-1];
      if ((cVar3 == *pcVar12) && ((cVar3 == pcVar12[1] && (cVar3 == pcVar12[2])))) {
        pcVar5 = pcVar12 + 2;
        do {
          pcVar6 = pcVar5 + 1;
          if (((((cVar3 != pcVar5[1]) || (pcVar6 = pcVar5 + 2, cVar3 != pcVar5[2])) ||
               (pcVar6 = pcVar5 + 3, cVar3 != pcVar5[3])) ||
              ((pcVar6 = pcVar5 + 4, cVar3 != pcVar5[4] || (pcVar6 = pcVar5 + 5, cVar3 != pcVar5[5])
               ))) || ((pcVar6 = pcVar5 + 6, cVar3 != pcVar5[6] ||
                       ((pcVar6 = pcVar5 + 7, cVar3 != pcVar5[7] ||
                        (pcVar6 = pcVar5 + 8, cVar3 != pcVar5[8])))))) break;
          pcVar5 = pcVar6;
        } while (pcVar6 < pcVar12 + 0x102);
        uVar7 = ((int)pcVar6 - (int)(pcVar12 + 0x102)) + 0x102;
        if (uVar11 < uVar7) {
          uVar7 = uVar11;
        }
        *(uint *)(param_1 + 0x11) = uVar7;
      }
    }
    if (*(uint *)(param_1 + 0x11) < 3) {
      bVar8 = *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10]);
      *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 0;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar8;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar2 = (short *)((longlong)param_1 + (ulonglong)bVar8 * 4 + 0xbc);
      *psVar2 = *psVar2 + 1;
      bVar13 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
    }
    else {
      bVar8 = (char)param_1[0x11] - 3;
      *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 1;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar8;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar2 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_145b66910)[bVar8] * 4 + 0x4c0);
      *psVar2 = *psVar2 + 1;
      *(short *)(param_1 + 0x136) = (short)param_1[0x136] + 1;
      bVar13 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1;
      lVar9 = param_1[0x11];
      *(undefined4 *)(param_1 + 0x11) = 0;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) - (int)lVar9;
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + (int)lVar9;
    }
    if (bVar13) {
      uVar11 = *(uint *)((longlong)param_1 + 0x84);
      lVar9 = lVar10;
      if (-1 < (int)uVar11) {
        lVar9 = (ulonglong)uVar11 + param_1[10];
      }
      FUN_1436a0f90(param_1,lVar9,*(int *)((longlong)param_1 + 0x94) - uVar11,0);
      lVar9 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      lVar4 = *(longlong *)(lVar9 + 0x28);
      _tr_flush_bits(lVar4);
      uVar11 = *(uint *)(lVar4 + 0x28);
      if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar4 + 0x28)) {
        uVar11 = *(uint *)(lVar9 + 0x18);
      }
      if (uVar11 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar9 + 0x10),*(void **)(lVar4 + 0x20),(ulonglong)uVar11);
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + (ulonglong)uVar11;
        *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + (ulonglong)uVar11;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + uVar11;
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) - uVar11;
        piVar1 = (int *)(lVar4 + 0x28);
        *piVar1 = *piVar1 - uVar11;
        if (*piVar1 == 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return '\0';
      }
    }
  } while( true );
}



// FUNCTION 14369e8c0 fill_window body=600 status=ok
// SIG undefined fill_window(void)

void fill_window(longlong *param_1)

{
  ushort *puVar1;
  uint uVar2;
  short sVar3;
  short *psVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong _Size;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x44);
  _Size = (ulonglong)uVar2;
  while( true ) {
    iVar6 = ((int)param_1[0xb] - *(int *)((longlong)param_1 + 0x9c)) -
            *(uint *)((longlong)param_1 + 0x94);
    if (*(int *)((longlong)param_1 + 0x44) + -0x106 + uVar2 <= *(uint *)((longlong)param_1 + 0x94))
    {
      _guard_xfg_dispatch_icall_nop((void *)param_1[10],(void *)(param_1[10] + _Size),_Size);
      uVar5 = (ulonglong)*(uint *)((longlong)param_1 + 0x74);
      *(uint *)(param_1 + 0x13) = (int)param_1[0x13] - uVar2;
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) - uVar2;
      *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) - uVar2;
      psVar4 = (short *)(param_1[0xd] + uVar5 * 2);
      do {
        puVar1 = (ushort *)(psVar4 + -1);
        psVar4 = psVar4 + -1;
        if (*puVar1 < uVar2) {
          sVar3 = 0;
        }
        else {
          sVar3 = *puVar1 - (short)uVar2;
        }
        *psVar4 = sVar3;
        uVar7 = (int)uVar5 - 1;
        uVar5 = (ulonglong)uVar7;
      } while (uVar7 != 0);
      psVar4 = (short *)(param_1[0xc] + _Size * 2);
      uVar5 = _Size;
      do {
        puVar1 = (ushort *)(psVar4 + -1);
        psVar4 = psVar4 + -1;
        if (*puVar1 < uVar2) {
          sVar3 = 0;
        }
        else {
          sVar3 = *puVar1 - (short)uVar2;
        }
        *psVar4 = sVar3;
        uVar7 = (int)uVar5 - 1;
        uVar5 = (ulonglong)uVar7;
      } while (uVar7 != 0);
      iVar6 = iVar6 + uVar2;
    }
    if (*(int *)(*param_1 + 8) == 0) break;
    iVar6 = read_buf(*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0x9c) +
                              (ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10],iVar6);
    *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + iVar6;
    iVar6 = *(int *)((longlong)param_1 + 0x170c);
    if (2 < (uint)(*(int *)((longlong)param_1 + 0x9c) + iVar6)) {
      uVar8 = *(int *)((longlong)param_1 + 0x94) - iVar6;
      uVar5 = (ulonglong)uVar8;
      uVar7 = (uint)*(byte *)(uVar5 + param_1[10]);
      *(uint *)(param_1 + 0xe) = uVar7;
      *(uint *)(param_1 + 0xe) =
           ((uint)*(byte *)((ulonglong)(uVar8 + 1) + param_1[10]) ^
           uVar7 << ((byte)(int)param_1[0x10] & 0x1f)) & *(uint *)((longlong)param_1 + 0x7c);
      if (iVar6 != 0) {
        uVar8 = uVar8 + 2;
        do {
          uVar9 = (ulonglong)uVar8;
          uVar8 = uVar8 + 1;
          uVar7 = ((uint)*(byte *)(uVar9 + param_1[10]) ^
                  (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
                  *(uint *)((longlong)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar7;
          *(undefined2 *)(param_1[0xc] + (uVar5 & *(uint *)((longlong)param_1 + 0x4c)) * 2) =
               *(undefined2 *)(param_1[0xd] + (ulonglong)uVar7 * 2);
          *(short *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) = (short)uVar5;
          uVar5 = (ulonglong)((int)uVar5 + 1);
          *(int *)((longlong)param_1 + 0x170c) = *(int *)((longlong)param_1 + 0x170c) + -1;
          if ((uint)(*(int *)((longlong)param_1 + 0x9c) + *(int *)((longlong)param_1 + 0x170c)) < 3)
          break;
        } while (*(int *)((longlong)param_1 + 0x170c) != 0);
      }
    }
    if ((0x105 < *(uint *)((longlong)param_1 + 0x9c)) || (*(int *)(*param_1 + 8) == 0)) break;
  }
  uVar2 = *(uint *)(param_1 + 0x2e3);
  uVar7 = *(uint *)(param_1 + 0xb);
  if (uVar2 < uVar7) {
    uVar8 = *(int *)((longlong)param_1 + 0x9c) + *(int *)((longlong)param_1 + 0x94);
    if (uVar2 < uVar8) {
      uVar7 = uVar7 - uVar8;
      if (0x102 < uVar7) {
        uVar7 = 0x102;
      }
      _guard_xfg_dispatch_icall_nop((void *)((ulonglong)uVar8 + param_1[10]),0,(ulonglong)uVar7);
      *(uint *)(param_1 + 0x2e3) = uVar7 + uVar8;
      return;
    }
    if (uVar2 < uVar8 + 0x102) {
      uVar8 = (uVar8 - uVar2) + 0x102;
      if (uVar7 - uVar2 < uVar8) {
        uVar8 = uVar7 - uVar2;
      }
      _guard_xfg_dispatch_icall_nop((void *)((ulonglong)uVar2 + param_1[10]),0,(ulonglong)uVar8);
      *(uint *)(param_1 + 0x2e3) = (int)param_1[0x2e3] + uVar8;
    }
  }
  return;
}



// FUNCTION 14369eb20 flush_pending body=115 status=ok
// SIG undefined flush_pending(void)

void flush_pending(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  _tr_flush_bits(lVar2);
  uVar3 = *(uint *)(lVar2 + 0x28);
  if (*(uint *)(param_1 + 0x18) < *(uint *)(lVar2 + 0x28)) {
    uVar3 = *(uint *)(param_1 + 0x18);
  }
  if (uVar3 != 0) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x10),*(void **)(lVar2 + 0x20),(ulonglong)uVar3);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar3;
    *(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + (ulonglong)uVar3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar3;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar3;
    piVar1 = (int *)(lVar2 + 0x28);
    *piVar1 = *piVar1 - uVar3;
    if (*piVar1 == 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
    }
  }
  return;
}



// FUNCTION 14369eba0 lm_init body=176 status=ok
// SIG undefined lm_init(void)

void lm_init(longlong param_1)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x44) * 2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(*(int *)(param_1 + 0x74) - 1) * 2) = 0
  ;
  _guard_xfg_dispatch_icall_nop
            (*(void **)(param_1 + 0x68),0,(ulonglong)(*(int *)(param_1 + 0x74) - 1) * 2);
  lVar1 = (longlong)*(int *)(param_1 + 0xac);
  *(uint *)(param_1 + 0xa8) = (uint)*(ushort *)(&DAT_145b63db2 + lVar1 * 0x10);
  *(uint *)(param_1 + 0xb4) = (uint)*(ushort *)(&DAT_145b63db0 + lVar1 * 0x10);
  *(uint *)(param_1 + 0xb8) = (uint)*(ushort *)(&DAT_145b63db4 + lVar1 * 0x10);
  *(uint *)(param_1 + 0xa4) = (uint)*(ushort *)(&DAT_145b63db6 + lVar1 * 0x10);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x170c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 2;
  *(undefined4 *)(param_1 + 0x88) = 2;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 14369ec50 longest_match body=454 status=ok
// SIG undefined longest_match(void)

uint longest_match(longlong param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  char cVar16;
  char cVar17;
  
  uVar10 = *(uint *)(param_1 + 0x94);
  uVar14 = (ulonglong)param_2;
  uVar9 = *(uint *)(param_1 + 0xa4);
  uVar4 = *(uint *)(param_1 + 0xa0);
  uVar13 = (ulonglong)(int)uVar4;
  pcVar2 = (char *)((ulonglong)uVar10 + *(longlong *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x44) - 0x106U < uVar10) {
    uVar10 = (uVar10 - *(int *)(param_1 + 0x44)) + 0x106;
  }
  else {
    uVar10 = 0;
  }
  cVar17 = pcVar2[uVar13];
  cVar16 = pcVar2[(int)(uVar4 - 1)];
  if (*(uint *)(param_1 + 0xb4) <= uVar4) {
    uVar9 = uVar9 >> 2;
  }
  uVar4 = *(uint *)(param_1 + 0x9c);
  uVar15 = *(uint *)(param_1 + 0xb8);
  if (uVar4 < *(uint *)(param_1 + 0xb8)) {
    uVar15 = uVar4;
  }
  do {
    pcVar11 = (char *)(uVar14 + *(longlong *)(param_1 + 0x50));
    iVar12 = (int)uVar13;
    if ((((pcVar11[iVar12] == cVar17) && (pcVar11[iVar12 + -1] == cVar16)) && (*pcVar11 == *pcVar2))
       && (pcVar11[1] == pcVar2[1])) {
      pcVar11 = pcVar11 + 2;
      pcVar7 = pcVar2 + 2;
      while (((((pcVar8 = pcVar7 + 1, *pcVar8 == pcVar11[1] &&
                (pcVar8 = pcVar7 + 2, *pcVar8 == pcVar11[2])) &&
               ((pcVar8 = pcVar7 + 3, *pcVar8 == pcVar11[3] &&
                ((pcVar8 = pcVar7 + 4, *pcVar8 == pcVar11[4] &&
                 (pcVar8 = pcVar7 + 5, *pcVar8 == pcVar11[5])))))) &&
              (pcVar8 = pcVar7 + 6, *pcVar8 == pcVar11[6])) &&
             (pcVar8 = pcVar7 + 7, *pcVar8 == pcVar11[7]))) {
        pcVar1 = pcVar11 + 8;
        pcVar11 = pcVar11 + 8;
        pcVar8 = pcVar7 + 8;
        if ((*pcVar8 != *pcVar1) || (pcVar7 = pcVar8, pcVar2 + 0x102 <= pcVar8)) break;
      }
      iVar5 = (int)pcVar8 - (int)(pcVar2 + 0x102);
      uVar6 = iVar5 + 0x102;
      if (iVar12 < (int)uVar6) {
        *(int *)(param_1 + 0x98) = (int)uVar14;
        uVar13 = (ulonglong)uVar6;
        if ((int)uVar15 <= (int)uVar6) {
LAB_14369edf0:
          if (uVar6 <= uVar4) {
            uVar4 = uVar6;
          }
          return uVar4;
        }
        cVar17 = pcVar2[(int)uVar6];
        cVar16 = pcVar2[iVar5 + 0x101];
      }
    }
    uVar6 = (uint)uVar13;
    uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x60) + (*(uint *)(param_1 + 0x4c) & uVar14) * 2);
    uVar14 = (ulonglong)uVar3;
    if ((uVar3 <= uVar10) || (uVar9 = uVar9 - 1, uVar9 == 0)) goto LAB_14369edf0;
  } while( true );
}



// FUNCTION 14369ee20 read_buf body=160 status=ok
// SIG undefined read_buf(void)

uint read_buf(longlong *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = uVar1;
  if (param_3 < uVar1) {
    uVar3 = param_3;
  }
  if (uVar3 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 1) = uVar1 - uVar3;
  _guard_xfg_dispatch_icall_nop(param_2,(void *)*param_1,(ulonglong)uVar3);
  if (*(int *)(param_1[5] + 0x2c) == 1) {
    uVar2 = adler32(*(undefined4 *)((longlong)param_1 + 0x4c),param_2,uVar3);
  }
  else {
    if (*(int *)(param_1[5] + 0x2c) != 2) goto LAB_14369eea3;
    uVar2 = crc32(*(undefined4 *)((longlong)param_1 + 0x4c),param_2,uVar3);
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
LAB_14369eea3:
  *param_1 = *param_1 + (ulonglong)uVar3;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar3;
  return uVar3;
}



// FUNCTION 14369eec0 FUN_14369eec0 body=5932 status=ok
// SIG undefined FUN_14369eec0(void)

int FUN_14369eec0(longlong *param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined2 uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  byte *_Src;
  uint uVar19;
  uint uVar20;
  int local_res18;
  uint local_res20;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined1 *local_58;
  
  if ((((param_1 == (longlong *)0x0) || (puVar1 = (uint *)param_1[5], puVar1 == (uint *)0x0)) ||
      (param_1[2] == 0)) || ((*param_1 == 0 && ((int)param_1[1] != 0)))) {
    return -2;
  }
  if (*puVar1 == 0xb) {
    *puVar1 = 0xc;
  }
  uVar13 = *(uint *)(param_1 + 3);
  puVar17 = (undefined1 *)param_1[2];
  uVar4 = *puVar1;
  uVar14 = *(uint *)(param_1 + 1);
  _Src = (byte *)*param_1;
  uVar20 = puVar1[0x10];
  uVar12 = puVar1[0x11];
  local_res18 = 0;
  local_res20 = uVar13;
  local_64 = uVar13;
  local_58 = puVar17;
  local_5c = uVar14;
  do {
    if (0x1e < uVar4) {
      return -2;
    }
    uVar18 = 0;
    uVar19 = 0;
    uVar10 = uVar14;
    switch(uVar4) {
    case 0:
      if (puVar1[2] == 0) {
        *puVar1 = 0xc;
      }
      else {
        for (; uVar12 < 0x10; uVar12 = uVar12 + 8) {
          uVar10 = 0;
          if (uVar14 == 0) goto LAB_1436a04aa;
          uVar14 = uVar14 - 1;
          uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
          _Src = _Src + 1;
        }
        if (((puVar1[2] & 2) == 0) || (uVar20 != 0x8b1f)) {
          puVar1[4] = 0;
          if (*(longlong *)(puVar1 + 8) != 0) {
            *(undefined4 *)(*(longlong *)(puVar1 + 8) + 0x40) = 0xffffffff;
          }
          if (((puVar1[2] & 1) == 0) ||
             (uVar4 = (uVar20 & 0xff) * 0x100 + (uVar20 >> 8), uVar4 != (uVar4 / 0x1f) * 0x1f)) {
            param_1[4] = (longlong)"incorrect header check";
            *puVar1 = 0x1d;
          }
          else {
            if (((byte)uVar20 & 0xf) != 8) goto LAB_14369f079;
            uVar12 = uVar12 - 4;
            uVar4 = (uVar20 >> 4 & 0xf) + 8;
            if (puVar1[10] == 0) {
              puVar1[10] = uVar4;
            }
            else if (puVar1[10] < uVar4) {
              param_1[4] = (longlong)"invalid window size";
              *puVar1 = 0x1d;
              uVar20 = uVar20 >> 4;
              break;
            }
            puVar1[5] = 1 << (sbyte)uVar4;
            uVar13 = adler32(0,0,0);
            uVar12 = 0;
            puVar1[6] = uVar13;
            *(uint *)((longlong)param_1 + 0x4c) = uVar13;
            *puVar1 = ~(uVar20 >> 0xc) & 2 | 9;
            uVar20 = 0;
            puVar17 = local_58;
            uVar13 = local_res20;
          }
        }
        else {
          uVar13 = crc32(0,0,0);
          puVar1[6] = uVar13;
          local_68 = 0x8b1f;
          uVar13 = crc32(puVar1[6],&local_68,2);
          puVar1[6] = uVar13;
          uVar20 = 0;
          uVar12 = 0;
          *puVar1 = 1;
          puVar17 = local_58;
          uVar13 = local_res20;
        }
      }
      break;
    case 1:
      for (; uVar12 < 0x10; uVar12 = uVar12 + 8) {
        if (uVar14 == 0) {
          uVar10 = 0;
          goto LAB_1436a04aa;
        }
        uVar14 = uVar14 - 1;
        uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
        _Src = _Src + 1;
      }
      puVar1[4] = uVar20;
      if ((char)uVar20 == '\b') {
        if ((uVar20 & 0xe000) == 0) {
          if (*(uint **)(puVar1 + 8) != (uint *)0x0) {
            **(uint **)(puVar1 + 8) = uVar20 >> 8 & 1;
          }
          if ((puVar1[4] & 0x200) != 0) {
            local_68 = (undefined2)uVar20;
            uVar13 = crc32(puVar1[6],&local_68,2);
            puVar1[6] = uVar13;
          }
          *puVar1 = 2;
          uVar20 = uVar19;
          uVar12 = uVar19;
          do {
            uVar10 = 0;
            if (uVar14 == 0) goto LAB_1436a04aa;
            uVar14 = uVar14 - 1;
            uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
            _Src = _Src + 1;
            uVar12 = uVar12 + 8;
joined_r0x00014369f1ce:
          } while (uVar12 < 0x20);
          if (*(longlong *)(puVar1 + 8) != 0) {
            *(uint *)(*(longlong *)(puVar1 + 8) + 4) = uVar20;
          }
          if ((puVar1[4] & 0x200) != 0) {
            local_68 = (undefined2)uVar20;
            local_66 = (undefined1)(uVar20 >> 0x10);
            local_65 = (undefined1)(uVar20 >> 0x18);
            uVar13 = crc32(puVar1[6],&local_68,4);
            puVar1[6] = uVar13;
          }
          *puVar1 = 3;
          uVar20 = uVar19;
          uVar12 = uVar19;
          do {
            uVar10 = 0;
            if (uVar14 == 0) goto LAB_1436a04aa;
            uVar14 = uVar14 - 1;
            uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
            _Src = _Src + 1;
            uVar12 = uVar12 + 8;
joined_r0x00014369f253:
          } while (uVar12 < 0x10);
          if (*(longlong *)(puVar1 + 8) != 0) {
            *(uint *)(*(longlong *)(puVar1 + 8) + 8) = uVar20 & 0xff;
            *(uint *)(*(longlong *)(puVar1 + 8) + 0xc) = uVar20 >> 8;
          }
          if ((puVar1[4] & 0x200) != 0) {
            local_68 = (undefined2)uVar20;
            uVar13 = crc32(puVar1[6],&local_68,2);
            puVar1[6] = uVar13;
          }
          *puVar1 = 4;
          uVar20 = uVar19;
          uVar12 = uVar19;
          goto switchD_14369ef95_caseD_4;
        }
        param_1[4] = (longlong)"unknown header flags set";
        *puVar1 = 0x1d;
      }
      else {
LAB_14369f079:
        param_1[4] = (longlong)"unknown compression method";
        *puVar1 = 0x1d;
      }
      break;
    case 2:
      goto joined_r0x00014369f1ce;
    case 3:
      goto joined_r0x00014369f253;
    case 4:
switchD_14369ef95_caseD_4:
      if ((puVar1[4] & 0x400) == 0) {
        uVar19 = uVar20;
        if (*(longlong *)(puVar1 + 8) != 0) {
          *(undefined8 *)(*(longlong *)(puVar1 + 8) + 0x10) = 0;
        }
      }
      else {
        for (; uVar12 < 0x10; uVar12 = uVar12 + 8) {
          uVar10 = 0;
          if (uVar14 == 0) goto LAB_1436a04aa;
          uVar14 = uVar14 - 1;
          uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
          _Src = _Src + 1;
        }
        puVar1[0x12] = uVar20;
        if (*(longlong *)(puVar1 + 8) != 0) {
          *(uint *)(*(longlong *)(puVar1 + 8) + 0x18) = uVar20;
        }
        uVar12 = uVar19;
        if ((puVar1[4] & 0x200) != 0) {
          local_68 = (undefined2)uVar20;
          uVar13 = crc32(puVar1[6],&local_68,2);
          puVar1[6] = uVar13;
        }
      }
      uVar20 = uVar19;
      *puVar1 = 5;
    case 5:
      if ((puVar1[4] & 0x400) == 0) {
LAB_14369f3f2:
        puVar1[0x12] = 0;
        *puVar1 = 6;
switchD_14369ef95_caseD_6:
        if ((puVar1[4] & 0x800) == 0) {
          if (*(longlong *)(puVar1 + 8) != 0) {
            *(undefined8 *)(*(longlong *)(puVar1 + 8) + 0x20) = 0;
          }
LAB_14369f49b:
          puVar1[0x12] = 0;
          *puVar1 = 7;
switchD_14369ef95_caseD_7:
          uVar18 = 0;
          if ((puVar1[4] & 0x1000) == 0) {
            if (*(longlong *)(puVar1 + 8) != 0) {
              *(undefined8 *)(*(longlong *)(puVar1 + 8) + 0x30) = 0;
            }
LAB_14369f53b:
            *puVar1 = 8;
            puVar17 = local_58;
            uVar13 = local_res20;
switchD_14369ef95_caseD_8:
            if ((puVar1[4] & 0x200) != 0) {
              for (; uVar12 < 0x10; uVar12 = uVar12 + 8) {
                uVar10 = 0;
                if (uVar14 == 0) goto LAB_1436a04aa;
                uVar14 = uVar14 - 1;
                uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
                _Src = _Src + 1;
              }
              if (uVar20 != (ushort)puVar1[6]) {
                param_1[4] = (longlong)"header crc mismatch";
                *puVar1 = 0x1d;
                break;
              }
              uVar20 = 0;
              uVar12 = uVar20;
            }
            if (*(longlong *)(puVar1 + 8) != 0) {
              *(uint *)(*(longlong *)(puVar1 + 8) + 0x3c) = (int)puVar1[4] >> 9 & 1;
              *(undefined4 *)(*(longlong *)(puVar1 + 8) + 0x40) = 1;
            }
            uVar13 = crc32(0,0,0);
            puVar1[6] = uVar13;
            *(uint *)((longlong)param_1 + 0x4c) = uVar13;
LAB_14369f5de:
            *puVar1 = 0xb;
            puVar17 = local_58;
            uVar13 = local_res20;
            break;
          }
          uVar10 = uVar14;
          if (uVar14 != 0) {
            do {
              uVar13 = (int)uVar18 + 1;
              uVar15 = (ulonglong)uVar13;
              bVar6 = _Src[uVar18];
              lVar11 = *(longlong *)(puVar1 + 8);
              if (((lVar11 != 0) && (*(longlong *)(lVar11 + 0x30) != 0)) &&
                 (puVar1[0x12] < *(uint *)(lVar11 + 0x38))) {
                *(byte *)((ulonglong)puVar1[0x12] + *(longlong *)(lVar11 + 0x30)) = bVar6;
                puVar1[0x12] = puVar1[0x12] + 1;
              }
            } while ((bVar6 != 0) && (uVar18 = uVar15, uVar13 < uVar14));
            if ((puVar1[4] & 0x200) != 0) {
              uVar4 = crc32(puVar1[6],_Src,uVar15);
              puVar1[6] = uVar4;
            }
            uVar14 = uVar14 - uVar13;
            _Src = _Src + uVar15;
            uVar10 = uVar14;
            if (bVar6 == 0) goto LAB_14369f53b;
          }
        }
        else {
          uVar10 = uVar14;
          if (uVar14 != 0) {
            do {
              uVar10 = (int)uVar18 + 1;
              uVar15 = (ulonglong)uVar10;
              bVar6 = _Src[uVar18];
              lVar11 = *(longlong *)(puVar1 + 8);
              if (((lVar11 != 0) && (*(longlong *)(lVar11 + 0x20) != 0)) &&
                 (puVar1[0x12] < *(uint *)(lVar11 + 0x28))) {
                *(byte *)((ulonglong)puVar1[0x12] + *(longlong *)(lVar11 + 0x20)) = bVar6;
                puVar1[0x12] = puVar1[0x12] + 1;
              }
            } while ((bVar6 != 0) && (uVar18 = uVar15, uVar10 < uVar14));
            if ((puVar1[4] & 0x200) != 0) {
              uVar13 = crc32(puVar1[6],_Src,uVar15);
              puVar1[6] = uVar13;
            }
            uVar10 = uVar14 - uVar10;
            _Src = _Src + uVar15;
            uVar14 = uVar10;
            if (bVar6 == 0) goto LAB_14369f49b;
          }
        }
      }
      else {
        uVar13 = puVar1[0x12];
        uVar4 = uVar13;
        if (uVar14 < uVar13) {
          uVar4 = uVar14;
        }
        uVar10 = uVar14;
        if (uVar4 != 0) {
          lVar11 = *(longlong *)(puVar1 + 8);
          if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x10) != 0)) {
            uVar13 = *(int *)(lVar11 + 0x18) - uVar13;
            uVar10 = uVar4;
            if (*(uint *)(lVar11 + 0x1c) < uVar4 + uVar13) {
              uVar10 = *(uint *)(lVar11 + 0x1c) - uVar13;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((ulonglong)uVar13 + *(longlong *)(lVar11 + 0x10)),_Src,
                       (ulonglong)uVar10);
          }
          if ((puVar1[4] & 0x200) != 0) {
            uVar13 = crc32(puVar1[6],_Src,uVar4);
            puVar1[6] = uVar13;
          }
          uVar10 = uVar14 - uVar4;
          _Src = _Src + uVar4;
          puVar1[0x12] = puVar1[0x12] - uVar4;
        }
        uVar14 = uVar10;
        if (puVar1[0x12] == 0) goto LAB_14369f3f2;
      }
LAB_1436a04aa:
      uVar13 = local_64;
      param_1[2] = (longlong)local_58;
      *(uint *)(param_1 + 3) = local_res20;
      *param_1 = (longlong)_Src;
      *(uint *)(param_1 + 1) = uVar10;
      puVar1[0x11] = uVar12;
      puVar1[0x10] = uVar20;
      if (((puVar1[0xb] == 0) &&
          (((local_64 == *(uint *)(param_1 + 3) || (0x1c < (int)*puVar1)) ||
           ((0x19 < (int)*puVar1 && (param_2 == 4)))))) ||
         (iVar3 = FUN_1436a0950(param_1,local_64), iVar3 == 0)) {
        uVar13 = uVar13 - (int)param_1[3];
        local_5c = local_5c - (int)param_1[1];
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + local_5c;
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar13;
        puVar1[7] = puVar1[7] + uVar13;
        if ((puVar1[2] != 0) && (uVar13 != 0)) {
          if (puVar1[4] == 0) {
            uVar4 = adler32(puVar1[6],param_1[2] - (ulonglong)uVar13,uVar13);
          }
          else {
            uVar4 = crc32();
          }
          puVar1[6] = uVar4;
          *(uint *)((longlong)param_1 + 0x4c) = uVar4;
        }
        uVar4 = *puVar1;
        if ((uVar4 == 0x13) || (uVar4 == 0xe)) {
          iVar3 = 0x100;
        }
        else {
          iVar3 = 0;
        }
        iVar9 = 0;
        if (uVar4 == 0xb) {
          iVar9 = 0x80;
        }
        *(uint *)(param_1 + 9) = iVar9 + iVar3 + (-(uint)(puVar1[1] != 0) & 0x40) + puVar1[0x11];
        if (((local_5c != 0) || (uVar13 != 0)) && (param_2 != 4)) {
          return local_res18;
        }
        if (local_res18 != 0) {
          return local_res18;
        }
        return -5;
      }
      *puVar1 = 0x1e;
LAB_1436a0451:
      return -4;
    case 6:
      goto switchD_14369ef95_caseD_6;
    case 7:
      goto switchD_14369ef95_caseD_7;
    case 8:
      goto switchD_14369ef95_caseD_8;
    case 9:
      for (; uVar12 < 0x20; uVar12 = uVar12 + 8) {
        uVar10 = 0;
        if (uVar14 == 0) goto LAB_1436a04aa;
        uVar14 = uVar14 - 1;
        uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
        _Src = _Src + 1;
      }
      uVar4 = (uVar20 >> 8 & 0xff00) + ((uVar20 & 0xff00) + uVar20 * 0x10000) * 0x100 +
              (uVar20 >> 0x18);
      puVar1[6] = uVar4;
      *(uint *)((longlong)param_1 + 0x4c) = uVar4;
      *puVar1 = 10;
      uVar20 = uVar19;
      uVar12 = uVar19;
    case 10:
      if (puVar1[3] == 0) {
        param_1[2] = (longlong)puVar17;
        *(uint *)(param_1 + 3) = uVar13;
        *param_1 = (longlong)_Src;
        *(uint *)(param_1 + 1) = uVar14;
        puVar1[0x10] = uVar20;
        puVar1[0x11] = uVar12;
        return 2;
      }
      uVar13 = adler32(0,0,0);
      puVar1[6] = uVar13;
      *(uint *)((longlong)param_1 + 0x4c) = uVar13;
      *puVar1 = 0xb;
      puVar17 = local_58;
      uVar13 = local_res20;
switchD_14369ef95_caseD_b:
      uVar10 = uVar14;
      if (1 < param_2 - 5U) {
switchD_14369ef95_caseD_c:
        if (puVar1[1] == 0) {
          for (; uVar12 < 3; uVar12 = uVar12 + 8) {
            uVar10 = 0;
            if (uVar14 == 0) goto LAB_1436a04aa;
            uVar14 = uVar14 - 1;
            uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
            _Src = _Src + 1;
          }
          puVar1[1] = uVar20 & 1;
          uVar4 = uVar20 >> 1 & 3;
          if (uVar4 == 0) {
            *puVar1 = 0xd;
          }
          else {
            if (uVar4 != 1) {
              if (uVar4 == 2) {
                uVar12 = uVar12 - 3;
                *puVar1 = 0x10;
                uVar20 = uVar20 >> 3;
              }
              else {
                if (uVar4 != 3) goto LAB_14369f7a7;
                param_1[4] = (longlong)"invalid block type";
                uVar12 = uVar12 - 3;
                *puVar1 = 0x1d;
                uVar20 = uVar20 >> 3;
              }
              break;
            }
            *(undefined **)(puVar1 + 0x16) = &DAT_145b63e50;
            *(undefined **)(puVar1 + 0x18) = &DAT_145b64650;
            puVar1[0x1a] = 9;
            puVar1[0x1b] = 5;
            *puVar1 = 0x13;
            if (param_2 == 6) {
              uVar20 = uVar20 >> 3;
              uVar12 = uVar12 - 3;
              uVar10 = uVar14;
              goto LAB_1436a04aa;
            }
          }
LAB_14369f7a7:
          uVar12 = uVar12 - 3;
          uVar20 = uVar20 >> 3;
        }
        else {
          *puVar1 = 0x1a;
          uVar4 = uVar12 & 7;
          uVar12 = uVar12 - uVar4;
          uVar20 = uVar20 >> (sbyte)uVar4;
        }
        break;
      }
      goto LAB_1436a04aa;
    case 0xb:
      goto switchD_14369ef95_caseD_b;
    case 0xc:
      goto switchD_14369ef95_caseD_c;
    case 0xd:
      uVar20 = uVar20 >> (sbyte)(uVar12 & 7);
      for (uVar12 = uVar12 - (uVar12 & 7); uVar12 < 0x20; uVar12 = uVar12 + 8) {
        uVar10 = 0;
        if (uVar14 == 0) goto LAB_1436a04aa;
        uVar14 = uVar14 - 1;
        uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
        _Src = _Src + 1;
      }
      if ((uVar20 & 0xffff) == ~uVar20 >> 0x10) {
        puVar1[0x12] = uVar20 & 0xffff;
        *puVar1 = 0xe;
        uVar10 = uVar14;
        uVar20 = uVar19;
        uVar12 = uVar19;
        if (param_2 != 6) goto switchD_14369ef95_caseD_e;
        goto LAB_1436a04aa;
      }
      param_1[4] = (longlong)"invalid stored block lengths";
      *puVar1 = 0x1d;
      break;
    case 0xe:
switchD_14369ef95_caseD_e:
      *puVar1 = 0xf;
    case 0xf:
      uVar4 = puVar1[0x12];
      if (uVar4 == 0) {
        *puVar1 = 0xb;
        break;
      }
      if (uVar14 < uVar4) {
        uVar4 = uVar14;
      }
      if (uVar13 < uVar4) {
        uVar4 = uVar13;
      }
      uVar18 = (ulonglong)uVar4;
      uVar10 = uVar14;
      if (uVar4 != 0) {
        _guard_xfg_dispatch_icall_nop(puVar17,_Src,uVar18);
        _Src = _Src + uVar18;
        local_res20 = local_res20 - uVar4;
        local_58 = local_58 + uVar18;
        uVar14 = uVar14 - uVar4;
        puVar1[0x12] = puVar1[0x12] - uVar4;
        puVar17 = local_58;
        uVar13 = local_res20;
        break;
      }
      goto LAB_1436a04aa;
    case 0x10:
      for (; uVar12 < 0xe; uVar12 = uVar12 + 8) {
        uVar10 = 0;
        if (uVar14 == 0) goto LAB_1436a04aa;
        uVar14 = uVar14 - 1;
        uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
        _Src = _Src + 1;
      }
      uVar12 = uVar12 - 0xe;
      uVar10 = uVar20 >> 5;
      uVar4 = (uVar20 & 0x1f) + 0x101;
      uVar19 = uVar20 >> 10;
      puVar1[0x1d] = uVar4;
      uVar20 = uVar20 >> 0xe;
      uVar10 = (uVar10 & 0x1f) + 1;
      puVar1[0x1e] = uVar10;
      puVar1[0x1c] = (uVar19 & 0xf) + 4;
      if ((uVar4 < 0x11f) && (uVar10 < 0x1f)) {
        puVar1[0x1f] = 0;
        *puVar1 = 0x11;
        goto switchD_14369ef95_caseD_11;
      }
      param_1[4] = (longlong)"too many length or distance symbols";
      *puVar1 = 0x1d;
      break;
    case 0x11:
switchD_14369ef95_caseD_11:
      if (puVar1[0x1f] < puVar1[0x1c]) {
        do {
          for (; uVar12 < 3; uVar12 = uVar12 + 8) {
            uVar10 = 0;
            if (uVar14 == 0) goto LAB_1436a04aa;
            uVar14 = uVar14 - 1;
            uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
            _Src = _Src + 1;
          }
          uVar7 = (ushort)uVar20;
          uVar20 = uVar20 >> 3;
          uVar12 = uVar12 - 3;
          *(ushort *)
           ((longlong)puVar1 +
           (ulonglong)*(ushort *)(&DAT_145b646d0 + (ulonglong)puVar1[0x1f] * 2) * 2 + 0x88) =
               uVar7 & 7;
          puVar1[0x1f] = puVar1[0x1f] + 1;
        } while (puVar1[0x1f] < puVar1[0x1c]);
      }
      uVar13 = puVar1[0x1f];
      while (uVar13 < 0x13) {
        *(undefined2 *)
         ((longlong)puVar1 +
         (ulonglong)*(ushort *)(&DAT_145b646d0 + (ulonglong)puVar1[0x1f] * 2) * 2 + 0x88) = 0;
        puVar1[0x1f] = puVar1[0x1f] + 1;
        uVar13 = puVar1[0x1f];
      }
      puVar1[0x1a] = 7;
      *(uint **)(puVar1 + 0x16) = puVar1 + 0x152;
      *(uint **)(puVar1 + 0x20) = puVar1 + 0x152;
      local_res18 = FUN_1436a2d90(0,puVar1 + 0x22,0x13,puVar1 + 0x20,puVar1 + 0x1a,puVar1 + 0xc2);
      if (local_res18 == 0) {
        puVar1[0x1f] = 0;
        *puVar1 = 0x12;
        uVar13 = local_res20;
        goto switchD_14369ef95_caseD_12;
      }
      param_1[4] = (longlong)"invalid code lengths set";
      *puVar1 = 0x1d;
      puVar17 = local_58;
      uVar13 = local_res20;
      break;
    case 0x12:
switchD_14369ef95_caseD_12:
      puVar17 = local_58;
      if (puVar1[0x1f] < puVar1[0x1e] + puVar1[0x1d]) {
        do {
          local_60 = *(uint *)(*(longlong *)(puVar1 + 0x16) +
                              (ulonglong)((1 << ((byte)puVar1[0x1a] & 0x1f)) - 1U & uVar20) * 4);
          if (uVar12 < (local_60 >> 8 & 0xff)) {
            do {
              uVar10 = 0;
              if (uVar14 == 0) goto LAB_1436a04aa;
              uVar14 = uVar14 - 1;
              uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
              _Src = _Src + 1;
              uVar12 = uVar12 + 8;
              local_60 = *(uint *)(*(longlong *)(puVar1 + 0x16) +
                                  (ulonglong)((1 << ((byte)puVar1[0x1a] & 0x1f)) - 1U & uVar20) * 4)
              ;
            } while (uVar12 < (local_60 >> 8 & 0xff));
          }
          uVar7 = (ushort)(local_60 >> 0x10);
          bVar6 = (byte)(local_60 >> 8);
          if (0xf < uVar7) {
            if (uVar7 == 0x10) {
              for (; uVar12 < (local_60 >> 8 & 0xff) + 2; uVar12 = uVar12 + 8) {
                uVar10 = 0;
                if (uVar14 == 0) goto LAB_1436a04aa;
                uVar14 = uVar14 - 1;
                uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
                _Src = _Src + 1;
              }
              uVar12 = uVar12 - bVar6;
              uVar20 = uVar20 >> (bVar6 & 0x1f);
              if (puVar1[0x1f] != 0) {
                uVar4 = uVar20 & 3;
                uVar20 = uVar20 >> 2;
                iVar9 = uVar4 + 3;
                uVar12 = uVar12 - 2;
                uVar16 = *(undefined2 *)
                          ((longlong)puVar1 + (ulonglong)(puVar1[0x1f] - 1) * 2 + 0x88);
                goto LAB_14369fc00;
              }
            }
            else {
              if (uVar7 == 0x11) {
                for (; uVar12 < bVar6 + 3; uVar12 = uVar12 + 8) {
                  uVar10 = 0;
                  if (uVar14 == 0) goto LAB_1436a04aa;
                  uVar14 = uVar14 - 1;
                  uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
                  _Src = _Src + 1;
                }
                iVar3 = -3;
                uVar20 = uVar20 >> (bVar6 & 0x1f);
                iVar9 = (uVar20 & 7) + 3;
                uVar20 = uVar20 >> 3;
              }
              else {
                for (; uVar12 < bVar6 + 7; uVar12 = uVar12 + 8) {
                  uVar10 = 0;
                  if (uVar14 == 0) goto LAB_1436a04aa;
                  uVar14 = uVar14 - 1;
                  uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
                  _Src = _Src + 1;
                }
                iVar3 = -7;
                uVar20 = uVar20 >> (bVar6 & 0x1f);
                iVar9 = (uVar20 & 0x7f) + 0xb;
                uVar20 = uVar20 >> 7;
              }
              uVar12 = uVar12 + (iVar3 - (uint)bVar6);
              uVar16 = 0;
LAB_14369fc00:
              if (puVar1[0x1f] + iVar9 <= puVar1[0x1e] + puVar1[0x1d]) {
                do {
                  *(undefined2 *)((longlong)puVar1 + (ulonglong)puVar1[0x1f] * 2 + 0x88) = uVar16;
                  puVar1[0x1f] = puVar1[0x1f] + 1;
                  uVar4 = puVar1[0x1f];
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
                goto LAB_14369fc42;
              }
            }
            param_1[4] = (longlong)"invalid bit length repeat";
            *puVar1 = 0x1d;
            goto LAB_14369f5ee;
          }
          uVar12 = uVar12 - (local_60 >> 8 & 0xff);
          uVar20 = uVar20 >> (bVar6 & 0x1f);
          *(ushort *)((longlong)puVar1 + (ulonglong)puVar1[0x1f] * 2 + 0x88) = uVar7;
          puVar1[0x1f] = puVar1[0x1f] + 1;
          uVar4 = puVar1[0x1f];
LAB_14369fc42:
        } while (uVar4 < puVar1[0x1e] + puVar1[0x1d]);
      }
      if (*puVar1 != 0x1d) {
        if ((short)puVar1[0xa2] == 0) {
          param_1[4] = (longlong)"invalid code -- missing end-of-block";
          *puVar1 = 0x1d;
        }
        else {
          puVar1[0x1a] = 9;
          *(uint **)(puVar1 + 0x20) = puVar1 + 0x152;
          *(uint **)(puVar1 + 0x16) = puVar1 + 0x152;
          local_res18 = FUN_1436a2d90(1,puVar1 + 0x22,puVar1[0x1d],puVar1 + 0x20,puVar1 + 0x1a,
                                      puVar1 + 0xc2);
          if (local_res18 == 0) {
            *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar1 + 0x20);
            puVar1[0x1b] = 6;
            local_res18 = FUN_1436a2d90(2,(longlong)puVar1 + ((ulonglong)puVar1[0x1d] + 0x44) * 2,
                                        puVar1[0x1e],puVar1 + 0x20,puVar1 + 0x1b,puVar1 + 0xc2);
            if (local_res18 == 0) {
              *puVar1 = 0x13;
              puVar17 = local_58;
              uVar13 = local_res20;
              uVar10 = uVar14;
              if (param_2 != 6) goto switchD_14369ef95_caseD_13;
              goto LAB_1436a04aa;
            }
            pcVar5 = "invalid distances set";
          }
          else {
            pcVar5 = "invalid literal/lengths set";
          }
          param_1[4] = (longlong)pcVar5;
          *puVar1 = 0x1d;
          puVar17 = local_58;
          uVar13 = local_res20;
        }
      }
      break;
    case 0x13:
switchD_14369ef95_caseD_13:
      *puVar1 = 0x14;
    case 0x14:
      if ((5 < uVar14) && (0x101 < uVar13)) {
        param_1[2] = (longlong)puVar17;
        *(uint *)(param_1 + 3) = uVar13;
        *param_1 = (longlong)_Src;
        *(uint *)(param_1 + 1) = uVar14;
        puVar1[0x10] = uVar20;
        puVar1[0x11] = uVar12;
        inflate_fast(param_1,local_64);
        local_58 = (undefined1 *)param_1[2];
        local_res20 = *(uint *)(param_1 + 3);
        _Src = (byte *)*param_1;
        uVar14 = *(uint *)(param_1 + 1);
        uVar12 = puVar1[0x11];
        puVar17 = local_58;
        uVar13 = local_res20;
        uVar20 = puVar1[0x10];
        if (*puVar1 == 0xb) {
          puVar1[0x6f7] = 0xffffffff;
        }
        break;
      }
      puVar1[0x6f7] = 0;
      uVar13 = *(uint *)(*(longlong *)(puVar1 + 0x16) +
                        (ulonglong)((1 << ((byte)puVar1[0x1a] & 0x1f)) - 1U & uVar20) * 4);
      if (uVar12 < (uVar13 >> 8 & 0xff)) {
        do {
          uVar10 = 0;
          if (uVar14 == 0) goto LAB_1436a04aa;
          uVar14 = uVar14 - 1;
          uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
          _Src = _Src + 1;
          uVar12 = uVar12 + 8;
          uVar13 = *(uint *)(*(longlong *)(puVar1 + 0x16) +
                            (ulonglong)((1 << ((byte)puVar1[0x1a] & 0x1f)) - 1U & uVar20) * 4);
        } while (uVar12 < (uVar13 >> 8 & 0xff));
      }
      cVar2 = (char)uVar13;
      uVar4 = uVar13;
      if ((cVar2 != '\0') && ((uVar13 & 0xf0) == 0)) {
        bVar6 = (byte)(uVar13 >> 8);
        uVar4 = *(uint *)(*(longlong *)(puVar1 + 0x16) +
                         (ulonglong)
                         ((((1 << (cVar2 + bVar6 & 0x1f)) - 1U & uVar20) >> (bVar6 & 0x1f)) +
                         (uVar13 >> 0x10)) * 4);
        local_60 = uVar13;
        if (uVar12 < (uVar4 >> 8 & 0xff) + (uVar13 >> 8 & 0xff)) {
          do {
            uVar10 = 0;
            if (uVar14 == 0) goto LAB_1436a04aa;
            uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
            uVar14 = uVar14 - 1;
            _Src = _Src + 1;
            uVar12 = uVar12 + 8;
            uVar4 = *(uint *)(*(longlong *)(puVar1 + 0x16) +
                             (ulonglong)
                             ((((1 << (cVar2 + bVar6 & 0x1f)) - 1U & uVar20) >> (bVar6 & 0x1f)) +
                             (uVar13 >> 0x10)) * 4);
          } while (uVar12 < (uVar4 >> 8 & 0xff) + (uint)bVar6);
        }
        uVar20 = uVar20 >> (bVar6 & 0x1f);
        uVar12 = uVar12 - bVar6;
        puVar1[0x6f7] = (uint)bVar6;
      }
      uVar13 = uVar4 >> 8 & 0xff;
      puVar1[0x6f7] = puVar1[0x6f7] + uVar13;
      uVar12 = uVar12 - uVar13;
      uVar20 = uVar20 >> ((byte)(uVar4 >> 8) & 0x1f);
      puVar1[0x12] = uVar4 >> 0x10;
      puVar17 = local_58;
      if ((char)uVar4 == '\0') {
        *puVar1 = 0x19;
        uVar13 = local_res20;
        break;
      }
      if ((uVar4 & 0x20) != 0) {
        puVar1[0x6f7] = 0xffffffff;
        goto LAB_14369f5de;
      }
      if ((uVar4 & 0x40) != 0) {
        param_1[4] = (longlong)"invalid literal/length code";
        *puVar1 = 0x1d;
        uVar13 = local_res20;
        break;
      }
      *puVar1 = 0x15;
      puVar1[0x14] = uVar4 & 0xf;
switchD_14369ef95_caseD_15:
      uVar13 = puVar1[0x14];
      if (uVar13 != 0) {
        for (; uVar12 < uVar13; uVar12 = uVar12 + 8) {
          uVar10 = 0;
          if (uVar14 == 0) goto LAB_1436a04aa;
          uVar14 = uVar14 - 1;
          uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
          _Src = _Src + 1;
        }
        uVar12 = uVar12 - uVar13;
        uVar4 = (1 << ((byte)uVar13 & 0x1f)) - 1U & uVar20;
        uVar20 = uVar20 >> ((byte)uVar13 & 0x1f);
        puVar1[0x12] = puVar1[0x12] + uVar4;
        puVar1[0x6f7] = puVar1[0x6f7] + uVar13;
      }
      puVar1[0x6f8] = puVar1[0x12];
      *puVar1 = 0x16;
switchD_14369ef95_caseD_16:
      uVar13 = *(uint *)(*(longlong *)(puVar1 + 0x18) +
                        (ulonglong)((1 << ((byte)puVar1[0x1b] & 0x1f)) - 1U & uVar20) * 4);
      if (uVar12 < (uVar13 >> 8 & 0xff)) {
        do {
          uVar10 = 0;
          if (uVar14 == 0) goto LAB_1436a04aa;
          uVar14 = uVar14 - 1;
          uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
          _Src = _Src + 1;
          uVar12 = uVar12 + 8;
          uVar13 = *(uint *)(*(longlong *)(puVar1 + 0x18) +
                            (ulonglong)((1 << ((byte)puVar1[0x1b] & 0x1f)) - 1U & uVar20) * 4);
        } while (uVar12 < (uVar13 >> 8 & 0xff));
      }
      uVar4 = uVar13;
      if ((uVar13 & 0xf0) == 0) {
        bVar6 = (byte)(uVar13 >> 8);
        uVar4 = *(uint *)(*(longlong *)(puVar1 + 0x18) +
                         (ulonglong)
                         ((((1 << ((char)uVar13 + bVar6 & 0x1f)) - 1U & uVar20) >> (bVar6 & 0x1f)) +
                         (uVar13 >> 0x10)) * 4);
        local_60 = uVar13;
        if (uVar12 < (uVar4 >> 8 & 0xff) + (uVar13 >> 8 & 0xff)) {
          do {
            uVar10 = 0;
            if (uVar14 == 0) goto LAB_1436a04aa;
            uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
            uVar14 = uVar14 - 1;
            _Src = _Src + 1;
            uVar12 = uVar12 + 8;
            uVar4 = *(uint *)(*(longlong *)(puVar1 + 0x18) +
                             (ulonglong)
                             ((((1 << ((char)uVar13 + bVar6 & 0x1f)) - 1U & uVar20) >>
                              (bVar6 & 0x1f)) + (uVar13 >> 0x10)) * 4);
          } while (uVar12 < (uVar4 >> 8 & 0xff) + (uint)bVar6);
        }
        uVar20 = uVar20 >> (bVar6 & 0x1f);
        uVar12 = uVar12 - bVar6;
        puVar1[0x6f7] = puVar1[0x6f7] + (uint)bVar6;
      }
      uVar13 = uVar4 >> 8 & 0xff;
      puVar1[0x6f7] = puVar1[0x6f7] + uVar13;
      uVar12 = uVar12 - uVar13;
      uVar20 = uVar20 >> ((byte)(uVar4 >> 8) & 0x1f);
      puVar17 = local_58;
      if ((uVar4 & 0x40) != 0) {
        param_1[4] = (longlong)"invalid distance code";
        *puVar1 = 0x1d;
        uVar13 = local_res20;
        break;
      }
      puVar1[0x13] = uVar4 >> 0x10;
      *puVar1 = 0x17;
      puVar1[0x14] = uVar4 & 0xf;
      uVar13 = local_res20;
switchD_14369ef95_caseD_17:
      uVar4 = puVar1[0x14];
      if (uVar4 != 0) {
        for (; uVar12 < uVar4; uVar12 = uVar12 + 8) {
          uVar10 = 0;
          if (uVar14 == 0) goto LAB_1436a04aa;
          uVar14 = uVar14 - 1;
          uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
          _Src = _Src + 1;
        }
        uVar12 = uVar12 - uVar4;
        uVar10 = (1 << ((byte)uVar4 & 0x1f)) - 1U & uVar20;
        uVar20 = uVar20 >> ((byte)uVar4 & 0x1f);
        puVar1[0x13] = puVar1[0x13] + uVar10;
        puVar1[0x6f7] = puVar1[0x6f7] + uVar4;
      }
      *puVar1 = 0x18;
switchD_14369ef95_caseD_18:
      uVar10 = uVar14;
      if (uVar13 != 0) {
        uVar4 = puVar1[0x13];
        if (local_64 - uVar13 < uVar4) {
          uVar4 = uVar4 - (local_64 - uVar13);
          if ((puVar1[0xc] < uVar4) && (puVar1[0x6f6] != 0)) {
            param_1[4] = (longlong)"invalid distance too far back";
            *puVar1 = 0x1d;
            break;
          }
          uVar10 = puVar1[0xd];
          if (uVar10 < uVar4) {
            uVar4 = uVar4 - uVar10;
            uVar10 = puVar1[0xb] - uVar4;
          }
          else {
            uVar10 = uVar10 - uVar4;
          }
          lVar11 = (ulonglong)uVar10 + *(longlong *)(puVar1 + 0xe);
          uVar10 = puVar1[0x12];
          if (uVar10 < uVar4) goto LAB_1436a0281;
        }
        else {
          lVar11 = (longlong)puVar17 - (ulonglong)uVar4;
          uVar10 = puVar1[0x12];
LAB_1436a0281:
          uVar4 = uVar10;
          uVar10 = uVar4;
        }
        if (uVar13 < uVar4) {
          uVar4 = uVar13;
        }
        local_res20 = uVar13 - uVar4;
        lVar11 = lVar11 - (longlong)puVar17;
        puVar1[0x12] = uVar10 - uVar4;
        do {
          *puVar17 = puVar17[lVar11];
          puVar17 = puVar17 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        uVar13 = local_res20;
        local_58 = puVar17;
        if (puVar1[0x12] == 0) {
          *puVar1 = 0x14;
        }
        break;
      }
      goto LAB_1436a04aa;
    case 0x15:
      goto switchD_14369ef95_caseD_15;
    case 0x16:
      goto switchD_14369ef95_caseD_16;
    case 0x17:
      goto switchD_14369ef95_caseD_17;
    case 0x18:
      goto switchD_14369ef95_caseD_18;
    case 0x19:
      if (uVar13 == 0) goto LAB_1436a04aa;
      *puVar17 = (char)puVar1[0x12];
      puVar17 = puVar17 + 1;
      local_res20 = uVar13 - 1;
      *puVar1 = 0x14;
      uVar13 = local_res20;
      local_58 = puVar17;
      break;
    case 0x1a:
      uVar4 = uVar20;
      uVar10 = uVar12;
      if (puVar1[2] != 0) {
        for (; uVar12 < 0x20; uVar12 = uVar12 + 8) {
          uVar10 = 0;
          if (uVar14 == 0) goto LAB_1436a04aa;
          uVar14 = uVar14 - 1;
          uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
          _Src = _Src + 1;
        }
        uVar4 = local_64 - uVar13;
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar4;
        puVar1[7] = puVar1[7] + uVar4;
        if (uVar4 != 0) {
          if (puVar1[4] == 0) {
            uVar13 = adler32(puVar1[6],(longlong)puVar17 - (ulonglong)uVar4,uVar4);
          }
          else {
            uVar13 = crc32();
          }
          puVar1[6] = uVar13;
          *(uint *)((longlong)param_1 + 0x4c) = uVar13;
          puVar17 = local_58;
          uVar13 = local_res20;
        }
        uVar8 = uVar20;
        if (puVar1[4] == 0) {
          uVar8 = ((uVar20 & 0xff00) + uVar20 * 0x10000) * 0x100 + (uVar20 >> 8 & 0xff00) +
                  (uVar20 >> 0x18);
        }
        uVar4 = uVar19;
        uVar10 = uVar19;
        local_64 = uVar13;
        if (uVar8 != puVar1[6]) {
          param_1[4] = (longlong)"incorrect data check";
          *puVar1 = 0x1d;
          break;
        }
      }
      uVar12 = uVar10;
      uVar20 = uVar4;
      *puVar1 = 0x1b;
    case 0x1b:
      uVar4 = uVar20;
      uVar10 = uVar12;
      if ((puVar1[2] != 0) && (puVar1[4] != 0)) {
        for (; uVar12 < 0x20; uVar12 = uVar12 + 8) {
          uVar10 = 0;
          if (uVar14 == 0) goto LAB_1436a04aa;
          uVar14 = uVar14 - 1;
          uVar20 = uVar20 + ((uint)*_Src << ((byte)uVar12 & 0x1f));
          _Src = _Src + 1;
        }
        uVar4 = uVar19;
        uVar10 = uVar19;
        if (uVar20 != puVar1[7]) {
          param_1[4] = (longlong)"incorrect length check";
          *puVar1 = 0x1d;
          break;
        }
      }
      uVar12 = uVar10;
      uVar20 = uVar4;
      *puVar1 = 0x1c;
switchD_14369ef95_caseD_1c:
      local_res18 = 1;
      uVar10 = uVar14;
      goto LAB_1436a04aa;
    case 0x1c:
      goto switchD_14369ef95_caseD_1c;
    case 0x1d:
      local_res18 = -3;
      goto LAB_1436a04aa;
    case 0x1e:
      goto LAB_1436a0451;
    }
LAB_14369f5ee:
    uVar4 = *puVar1;
  } while( true );
}



// FUNCTION 1436a0670 inflateEnd body=86 status=ok
// SIG undefined inflateEnd(void)

undefined8 inflateEnd(longlong param_1)

{
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (*(code **)(param_1 + 0x38) != (code *)0x0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) != 0) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
    }
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    return 0;
  }
  return 0xfffffffe;
}



// FUNCTION 1436a06d0 inflateInit2_ body=225 status=ok
// SIG undefined inflateInit2_(void)

int inflateInit2_(longlong param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (((param_3 != (char *)0x0) && (*param_3 == '1')) && (param_4 == 0x58)) {
    if (param_1 != 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (*(longlong *)(param_1 + 0x30) == 0) {
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(code **)(param_1 + 0x30) = FUN_1436a2d70;
      }
      if (*(longlong *)(param_1 + 0x38) == 0) {
        *(code **)(param_1 + 0x38) = FUN_1436a2d80;
      }
      lVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x1be8);
      if (lVar2 == 0) {
        iVar1 = -4;
      }
      else {
        *(longlong *)(param_1 + 0x28) = lVar2;
        *(undefined8 *)(lVar2 + 0x38) = 0;
        iVar1 = FUN_1436a0800(param_1,param_2);
        if (iVar1 != 0) {
          (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),lVar2);
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
      }
      return iVar1;
    }
    return -2;
  }
  return -6;
}



// FUNCTION 1436a07c0 inflateInit_ body=16 status=ok
// SIG undefined inflateInit_(void)

void inflateInit_(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  inflateInit2_(param_1,0xf,param_2,param_3);
  return;
}



// FUNCTION 1436a07d0 inflateReset body=34 status=ok
// SIG undefined inflateReset(void)

undefined8 inflateReset(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x2c) = 0;
    *(undefined4 *)(lVar1 + 0x34) = 0;
    uVar2 = inflateResetKeep();
    return uVar2;
  }
  return 0xfffffffe;
}



// FUNCTION 1436a0800 FUN_1436a0800 body=203 status=ok
// SIG undefined FUN_1436a0800(void)

undefined8 FUN_1436a0800(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 == 0)) {
    return 0xfffffffe;
  }
  iVar3 = 0;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
  }
  else {
    iVar3 = ((int)param_2 >> 4) + 1;
    if ((int)param_2 < 0x30) {
      param_2 = param_2 & 0xf;
    }
  }
  if ((param_2 == 0) || (param_2 - 8 < 8)) {
    if ((*(longlong *)(lVar1 + 0x38) != 0) && (*(uint *)(lVar1 + 0x28) != param_2)) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
      *(undefined8 *)(lVar1 + 0x38) = 0;
    }
    *(int *)(lVar1 + 8) = iVar3;
    *(uint *)(lVar1 + 0x28) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined4 *)(lVar1 + 0x34) = 0;
      uVar2 = inflateResetKeep(param_1);
      return uVar2;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1436a08d0 inflateResetKeep body=119 status=ok
// SIG undefined inflateResetKeep(void)

undefined8 inflateResetKeep(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x28), puVar2 != (undefined8 *)0x0)) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(uint *)(puVar2 + 1) != 0) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(puVar2 + 1) & 1;
    }
    puVar1 = puVar2 + 0xa9;
    *puVar2 = 0;
    puVar2[0x10] = puVar1;
    puVar2[0xc] = puVar1;
    puVar2[0xb] = puVar1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0x8000;
    puVar2[4] = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 0x37b) = 1;
    *(undefined4 *)((longlong)puVar2 + 0x1bdc) = 0xffffffff;
    return 0;
  }
  return 0xfffffffe;
}



// FUNCTION 1436a0950 FUN_1436a0950 body=258 status=ok
// SIG undefined FUN_1436a0950(void)

undefined8 FUN_1436a0950(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    lVar4 = (**(code **)(param_1 + 0x30))
                      (*(undefined8 *)(param_1 + 0x40),
                       1 << ((byte)*(undefined4 *)(lVar1 + 0x28) & 0x1f),1);
    *(longlong *)(lVar1 + 0x38) = lVar4;
    if (lVar4 == 0) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0x2c) == 0) {
    *(int *)(lVar1 + 0x2c) = 1 << ((byte)*(undefined4 *)(lVar1 + 0x28) & 0x1f);
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  uVar6 = param_2 - *(int *)(param_1 + 0x18);
  uVar5 = *(uint *)(lVar1 + 0x2c);
  if (uVar6 < uVar5) {
    uVar5 = uVar5 - *(int *)(lVar1 + 0x34);
    uVar2 = uVar6;
    if (uVar5 <= uVar6) {
      uVar2 = uVar5;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((ulonglong)*(uint *)(lVar1 + 0x34) + *(longlong *)(lVar1 + 0x38)),
               (void *)(*(longlong *)(param_1 + 0x10) - (ulonglong)uVar6),(ulonglong)uVar2);
    uVar6 = uVar6 - uVar2;
    if (uVar6 == 0) {
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + uVar2;
      iVar3 = *(int *)(lVar1 + 0x34);
      if (*(int *)(lVar1 + 0x34) == *(int *)(lVar1 + 0x2c)) {
        iVar3 = 0;
      }
      *(int *)(lVar1 + 0x34) = iVar3;
      if (*(uint *)(lVar1 + 0x2c) <= *(uint *)(lVar1 + 0x30)) {
        return 0;
      }
      iVar3 = *(uint *)(lVar1 + 0x30) + uVar2;
    }
    else {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(lVar1 + 0x38),(void *)(*(longlong *)(param_1 + 0x10) - (ulonglong)uVar6)
                 ,(ulonglong)uVar6);
      iVar3 = *(int *)(lVar1 + 0x2c);
      *(uint *)(lVar1 + 0x34) = uVar6;
    }
  }
  else {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(lVar1 + 0x38),(void *)(*(longlong *)(param_1 + 0x10) - (ulonglong)uVar5),
               (ulonglong)uVar5);
    iVar3 = *(int *)(lVar1 + 0x2c);
    *(undefined4 *)(lVar1 + 0x34) = 0;
  }
  *(int *)(lVar1 + 0x30) = iVar3;
  return 0;
}



// FUNCTION 1436a0a60 compress body=22 status=ok
// SIG undefined compress(void)

void compress(void)

{
  compress2();
  return;
}



// FUNCTION 1436a0a80 compress2 body=172 status=ok
// SIG undefined compress2(void)

ulonglong compress2(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_50 = *param_2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_68 = param_3;
  local_60 = param_4;
  local_58 = param_1;
  uVar2 = deflateInit_(&local_68,param_5,"1.2.7",0x58);
  if ((int)uVar2 == 0) {
    uVar1 = FUN_14369d3f0(&local_68,4);
    uVar2 = (ulonglong)uVar1;
    if (uVar1 != 1) {
      deflateEnd(&local_68);
      if (uVar1 == 0) {
        uVar2 = 0xfffffffb;
      }
      return uVar2;
    }
    *param_2 = local_4c;
    uVar2 = deflateEnd(&local_68);
  }
  return uVar2;
}



// FUNCTION 1436a0b30 compressBound body=23 status=ok
// SIG undefined compressBound(void)

int compressBound(uint param_1)

{
  return (param_1 >> 0xe) + param_1 + (param_1 >> 0x19) + (param_1 >> 0xc) + 0xd;
}



// FUNCTION 1436a0b50 crc32 body=13 status=ok
// SIG undefined crc32(void)

undefined8 crc32(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = crc32_little();
  return uVar1;
}



// FUNCTION 1436a0b60 crc32_little body=758 status=ok
// SIG undefined crc32_little(void)

uint crc32_little(uint param_1,uint *param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  param_1 = ~param_1;
  for (; (uVar3 = (ulonglong)param_3, param_3 != 0 && (((ulonglong)param_2 & 3) != 0));
      param_2 = (uint *)((longlong)param_2 + 1)) {
    param_1 = *(uint *)(&DAT_145b64910 + (ulonglong)(byte)((byte)*param_2 ^ (byte)param_1) * 4) ^
              param_1 >> 8;
    param_3 = param_3 - 1;
  }
  if (0x1f < param_3) {
    uVar1 = (ulonglong)(param_3 >> 5);
    do {
      param_1 = param_1 ^ *param_2;
      uVar2 = *(uint *)(&DAT_145b64d10 + (ulonglong)(byte)(param_1 >> 0x10) * 4) ^
              *(uint *)(&DAT_145b65110 + (ulonglong)(byte)(param_1 >> 8) * 4) ^
              *(uint *)(&DAT_145b64910 + (ulonglong)(param_1 >> 0x18) * 4) ^
              *(uint *)(&DAT_145b65510 + (ulonglong)(param_1 & 0xff) * 4) ^ param_2[1];
      uVar2 = *(uint *)(&DAT_145b64d10 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_145b65110 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_145b64910 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_145b65510 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[2];
      uVar2 = *(uint *)(&DAT_145b64d10 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_145b65110 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_145b64910 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_145b65510 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[3];
      uVar2 = *(uint *)(&DAT_145b64d10 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_145b65110 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_145b64910 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_145b65510 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[4];
      uVar2 = *(uint *)(&DAT_145b64d10 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_145b65110 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_145b64910 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_145b65510 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[5];
      uVar3 = (ulonglong)((int)uVar3 - 0x20);
      uVar2 = *(uint *)(&DAT_145b64d10 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_145b65110 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_145b64910 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_145b65510 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[6];
      uVar2 = *(uint *)(&DAT_145b64d10 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_145b65110 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_145b64910 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_145b65510 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[7];
      param_2 = param_2 + 8;
      param_1 = *(uint *)(&DAT_145b64d10 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
                *(uint *)(&DAT_145b65110 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                *(uint *)(&DAT_145b64910 + (ulonglong)(uVar2 >> 0x18) * 4) ^
                *(uint *)(&DAT_145b65510 + (ulonglong)(uVar2 & 0xff) * 4);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (3 < (uint)uVar3) {
    uVar1 = uVar3 >> 2;
    do {
      param_1 = param_1 ^ *param_2;
      uVar3 = (ulonglong)((int)uVar3 - 4);
      param_2 = param_2 + 1;
      param_1 = *(uint *)(&DAT_145b64d10 + (ulonglong)(byte)(param_1 >> 0x10) * 4) ^
                *(uint *)(&DAT_145b65110 + (ulonglong)(byte)(param_1 >> 8) * 4) ^
                *(uint *)(&DAT_145b64910 + (ulonglong)(param_1 >> 0x18) * 4) ^
                *(uint *)(&DAT_145b65510 + (ulonglong)(param_1 & 0xff) * 4);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  uVar2 = (uint)uVar3;
  while (uVar2 != 0) {
    uVar2 = *param_2;
    param_2 = (uint *)((longlong)param_2 + 1);
    param_1 = *(uint *)(&DAT_145b64910 + (ulonglong)(byte)((byte)uVar2 ^ (byte)param_1) * 4) ^
              param_1 >> 8;
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulonglong)uVar2;
  }
  return ~param_1;
}



// FUNCTION 1436a0e60 _tr_align body=284 status=ok
// SIG undefined _tr_align(void)

void _tr_align(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1714);
  if (iVar2 < 0xe) {
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | 2 << ((byte)iVar2 & 0x1f);
    *(int *)(param_1 + 0x1714) = iVar2 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | 2 << ((byte)iVar2 & 0x1f);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    cVar1 = *(char *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xd;
    *(ushort *)(param_1 + 0x1710) = 2 >> (0x10U - cVar1 & 0x1f);
  }
  iVar2 = *(int *)(param_1 + 0x1714);
  if (9 < iVar2) {
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | 0 << ((byte)iVar2 & 0x1f);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    cVar1 = *(char *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -9;
    *(ushort *)(param_1 + 0x1710) = 0 >> (0x10U - cVar1 & 0x1f);
    bi_flush(param_1);
    return;
  }
  *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | 0 << ((byte)iVar2 & 0x1f);
  *(int *)(param_1 + 0x1714) = iVar2 + 7;
  bi_flush(param_1);
  return;
}



// FUNCTION 1436a0f80 _tr_flush_bits body=5 status=ok
// SIG undefined _tr_flush_bits(void)

void _tr_flush_bits(longlong param_1)

{
  if (*(int *)(param_1 + 0x1714) == 0x10) {
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined4 *)(param_1 + 0x1714) = 0;
    *(undefined2 *)(param_1 + 0x1710) = 0;
    return;
  }
  if (7 < *(int *)(param_1 + 0x1714)) {
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -8;
    *(ushort *)(param_1 + 0x1710) = (ushort)*(byte *)(param_1 + 0x1711);
  }
  return;
}



// FUNCTION 1436a0f90 FUN_1436a0f90 body=646 status=ok
// SIG undefined FUN_1436a0f90(void)

void FUN_1436a0f90(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  short sVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  
  iVar6 = 0;
  if (*(int *)((longlong)param_1 + 0xac) < 1) {
    uVar8 = param_3 + 5;
    uVar10 = uVar8;
  }
  else {
    lVar12 = *param_1;
    if (*(int *)(lVar12 + 0x48) == 2) {
      uVar5 = detect_data_type();
      *(undefined4 *)(lVar12 + 0x48) = uVar5;
    }
    build_tree(param_1,param_1 + 0x168);
    build_tree(param_1,param_1 + 0x16b);
    iVar6 = build_bl_tree(param_1);
    uVar7 = (int)param_1[0x2e0] + 10U >> 3;
    uVar8 = *(int *)((longlong)param_1 + 0x1704) + 10U >> 3;
    uVar10 = uVar8;
    if (uVar7 < uVar8) {
      uVar10 = uVar7;
    }
  }
  if ((uVar10 < param_3 + 4U) || (param_2 == 0)) {
    sVar3 = (short)param_4;
    if (((int)param_1[0x16] == 4) || (uVar8 == uVar10)) {
      iVar6 = *(int *)((longlong)param_1 + 0x1714);
      if (iVar6 < 0xe) {
        *(ushort *)(param_1 + 0x2e2) =
             *(ushort *)(param_1 + 0x2e2) | sVar3 + 2 << ((byte)iVar6 & 0x1f);
        *(int *)((longlong)param_1 + 0x1714) = iVar6 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x2e2) =
             *(ushort *)(param_1 + 0x2e2) | sVar3 + 2U << ((byte)iVar6 & 0x1f);
        *(char *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) = (char)param_1[0x2e2];
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) =
             *(undefined1 *)((longlong)param_1 + 0x1711);
        cVar1 = *(char *)((longlong)param_1 + 0x1714);
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(int *)((longlong)param_1 + 0x1714) = *(int *)((longlong)param_1 + 0x1714) + -0xd;
        *(ushort *)(param_1 + 0x2e2) = (ushort)(sVar3 + 2U) >> (0x10U - cVar1 & 0x1f);
      }
      plVar11 = (longlong *)&DAT_145b671e0;
      puVar9 = &DAT_145b66d60;
    }
    else {
      iVar2 = *(int *)((longlong)param_1 + 0x1714);
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x2e2) =
             *(ushort *)(param_1 + 0x2e2) | sVar3 + 4 << ((byte)iVar2 & 0x1f);
        *(int *)((longlong)param_1 + 0x1714) = iVar2 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x2e2) =
             *(ushort *)(param_1 + 0x2e2) | sVar3 + 4U << ((byte)iVar2 & 0x1f);
        *(char *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) = (char)param_1[0x2e2];
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) =
             *(undefined1 *)((longlong)param_1 + 0x1711);
        cVar1 = *(char *)((longlong)param_1 + 0x1714);
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(int *)((longlong)param_1 + 0x1714) = *(int *)((longlong)param_1 + 0x1714) + -0xd;
        *(ushort *)(param_1 + 0x2e2) = (ushort)(sVar3 + 4U) >> (0x10U - cVar1 & 0x1f);
      }
      send_all_trees(param_1,(int)param_1[0x169] + 1,(int)param_1[0x16c] + 1,iVar6 + 1);
      plVar11 = param_1 + 0x136;
      puVar9 = (undefined *)((longlong)param_1 + 0xbc);
    }
    FUN_1436a16c0(param_1,puVar9,plVar11);
  }
  else {
    _tr_stored_block(param_1,param_2,param_3,param_4);
  }
  init_block(param_1);
  if (param_4 == 0) {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x1714) < 9) {
    if (*(int *)((longlong)param_1 + 0x1714) < 1) goto LAB_1436a11ec;
    uVar4 = (undefined1)param_1[0x2e2];
  }
  else {
    *(char *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) = (char)param_1[0x2e2];
    *(int *)(param_1 + 5) = (int)param_1[5] + 1;
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x1711);
  }
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) = uVar4;
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
LAB_1436a11ec:
  *(undefined2 *)(param_1 + 0x2e2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1714) = 0;
  return;
}



// FUNCTION 1436a1220 _tr_init body=104 status=ok
// SIG undefined _tr_init(void)

void _tr_init(longlong param_1)

{
  *(longlong *)(param_1 + 0xb40) = param_1 + 0xbc;
  *(undefined ***)(param_1 + 0xb50) = &PTR_DAT_1467dcbf8;
  *(longlong *)(param_1 + 0xb58) = param_1 + 0x9b0;
  *(undefined ***)(param_1 + 0xb68) = &PTR_DAT_1467dcc18;
  *(longlong *)(param_1 + 0xb70) = param_1 + 0xaa4;
  *(undefined **)(param_1 + 0xb80) = &DAT_1467dcc38;
  *(undefined2 *)(param_1 + 0x1710) = 0;
  *(undefined4 *)(param_1 + 0x1714) = 0;
  init_block();
  return;
}



// FUNCTION 1436a1290 _tr_stored_block body=151 status=ok
// SIG undefined _tr_stored_block(void)

void _tr_stored_block(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1714);
  if (iVar2 < 0xe) {
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | param_4 << ((byte)iVar2 & 0x1f);
    *(int *)(param_1 + 0x1714) = iVar2 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | param_4 << ((byte)iVar2 & 0x1f);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    cVar1 = *(char *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xd;
    *(ushort *)(param_1 + 0x1710) = param_4 >> (0x10U - cVar1 & 0x1f);
  }
  FUN_1436a1b10(param_1,param_2,param_3,1);
  return;
}



// FUNCTION 1436a1330 bi_flush body=128 status=ok
// SIG undefined bi_flush(void)

void bi_flush(longlong param_1)

{
  if (*(int *)(param_1 + 0x1714) == 0x10) {
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined4 *)(param_1 + 0x1714) = 0;
    *(undefined2 *)(param_1 + 0x1710) = 0;
    return;
  }
  if (7 < *(int *)(param_1 + 0x1714)) {
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -8;
    *(ushort *)(param_1 + 0x1710) = (ushort)*(byte *)(param_1 + 0x1711);
  }
  return;
}



// FUNCTION 1436a13b0 build_bl_tree body=197 status=ok
// SIG undefined build_bl_tree(void)

int build_bl_tree(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  scan_tree(param_1,param_1 + 0xbc,*(undefined4 *)(param_1 + 0xb48));
  scan_tree();
  build_tree();
  iVar2 = 0x12;
  lVar1 = 0x12;
  do {
    if (*(short *)(param_1 + 0xaa6 + (ulonglong)(byte)(&DAT_145b67258)[lVar1] * 4) != 0) break;
    if (*(short *)(param_1 + 0xaa6 + (ulonglong)(byte)(&UNK_145b67257)[lVar1] * 4) != 0) {
      iVar2 = iVar2 + -1;
      break;
    }
    if (*(short *)(param_1 + 0xaa6 + (ulonglong)(byte)(&UNK_145b67256)[lVar1] * 4) != 0) {
      iVar2 = iVar2 + -2;
      break;
    }
    if (*(short *)(param_1 + 0xaa6 + (ulonglong)(byte)(&UNK_145b67255)[lVar1] * 4) != 0) {
      iVar2 = iVar2 + -3;
      break;
    }
    lVar1 = lVar1 + -4;
    iVar2 = iVar2 + -4;
  } while (2 < lVar1);
  *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + iVar2 * 3 + 0x11;
  return iVar2;
}



// FUNCTION 1436a1480 build_tree body=566 status=ok
// SIG undefined build_tree(void)

void build_tree(longlong param_1,longlong *param_2)

{
  short *psVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar2 = *param_2;
  iVar6 = -1;
  iVar8 = 0;
  iVar7 = *(int *)(param_2[2] + 0x14);
  uVar10 = (ulonglong)iVar7;
  lVar5 = *(longlong *)param_2[2];
  *(undefined4 *)(param_1 + 0x149c) = 0;
  *(undefined4 *)(param_1 + 0x14a0) = 0x23d;
  lVar4 = 0;
  if (0 < iVar7) {
    do {
      if (*(short *)(lVar2 + lVar4 * 4) == 0) {
        *(undefined2 *)(lVar2 + 2 + lVar4 * 4) = 0;
      }
      else {
        *(int *)(param_1 + 0x149c) = *(int *)(param_1 + 0x149c) + 1;
        *(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x149c) * 4) = iVar8;
        *(undefined1 *)(lVar4 + 0x14a4 + param_1) = 0;
        iVar6 = iVar8;
      }
      iVar8 = iVar8 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < (longlong)uVar10);
  }
  iVar7 = *(int *)(param_1 + 0x149c);
  while (iVar7 < 2) {
    if (iVar6 < 2) {
      iVar7 = iVar6 + 1;
      iVar6 = iVar7;
    }
    else {
      iVar7 = 0;
    }
    *(int *)(param_1 + 0x149c) = *(int *)(param_1 + 0x149c) + 1;
    *(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x149c) * 4) = iVar7;
    lVar4 = (longlong)iVar7;
    *(undefined2 *)(lVar2 + lVar4 * 4) = 1;
    *(undefined1 *)(lVar4 + 0x14a4 + param_1) = 0;
    *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + -1;
    if (lVar5 != 0) {
      *(int *)(param_1 + 0x1704) =
           *(int *)(param_1 + 0x1704) - (uint)*(ushort *)(lVar5 + 2 + lVar4 * 4);
    }
    iVar7 = *(int *)(param_1 + 0x149c);
  }
  *(int *)(param_2 + 1) = iVar6;
  for (iVar7 = *(int *)(param_1 + 0x149c) / 2; 0 < iVar7; iVar7 = iVar7 + -1) {
    pqdownheap(param_1,lVar2,iVar7);
  }
  do {
    iVar7 = *(int *)(param_1 + 0xbac);
    lVar4 = (longlong)iVar7;
    *(undefined4 *)(param_1 + 0xbac) =
         *(undefined4 *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x149c) * 4);
    *(int *)(param_1 + 0x149c) = *(int *)(param_1 + 0x149c) + -1;
    pqdownheap(param_1,lVar2,1);
    iVar8 = *(int *)(param_1 + 0xbac);
    lVar5 = (longlong)iVar8;
    *(int *)(param_1 + 0x14a0) = *(int *)(param_1 + 0x14a0) + -1;
    psVar1 = (short *)(lVar2 + lVar5 * 4);
    iVar9 = (int)uVar10;
    *(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x14a0) * 4) = iVar7;
    *(int *)(param_1 + 0x14a0) = *(int *)(param_1 + 0x14a0) + -1;
    *(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x14a0) * 4) = iVar8;
    *(short *)(lVar2 + (longlong)iVar9 * 4) = *psVar1 + *(short *)(lVar2 + lVar4 * 4);
    if (*(byte *)(lVar4 + 0x14a4 + param_1) < *(byte *)(lVar5 + 0x14a4 + param_1)) {
      cVar3 = *(char *)(lVar5 + 0x14a4 + param_1);
    }
    else {
      cVar3 = *(char *)(lVar4 + 0x14a4 + param_1);
    }
    *(char *)((longlong)iVar9 + 0x14a4 + param_1) = cVar3 + '\x01';
    psVar1[1] = (short)uVar10;
    *(short *)(lVar2 + 2 + lVar4 * 4) = (short)uVar10;
    *(int *)(param_1 + 0xbac) = iVar9;
    uVar10 = (ulonglong)(iVar9 + 1);
    pqdownheap(param_1,lVar2,1);
  } while (1 < *(int *)(param_1 + 0x149c));
  *(int *)(param_1 + 0x14a0) = *(int *)(param_1 + 0x14a0) + -1;
  *(undefined4 *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x14a0) * 4) =
       *(undefined4 *)(param_1 + 0xbac);
  gen_bitlen();
  FUN_1436a1e90(lVar2,iVar6,param_1 + 0xb88);
  return;
}



// FUNCTION 1436a16c0 FUN_1436a16c0 body=1093 status=ok
// SIG undefined FUN_1436a16c0(void)

void FUN_1436a16c0(longlong param_1,longlong param_2,longlong param_3)

{
  ushort *puVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort uVar11;
  uint uVar12;
  ushort uVar13;
  
  uVar10 = 0;
  if (*(int *)(param_1 + 0x16f4) != 0) {
    do {
      uVar11 = *(ushort *)(*(longlong *)(param_1 + 0x16f8) + uVar10 * 2);
      bVar8 = *(byte *)(uVar10 + *(longlong *)(param_1 + 0x16e8));
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      if (uVar11 == 0) {
        uVar11 = *(ushort *)(param_2 + 2 + (longlong)(int)(uint)bVar8 * 4);
        puVar1 = (ushort *)(param_2 + (longlong)(int)(uint)bVar8 * 4);
        iVar7 = *(int *)(param_1 + 0x1714);
        if ((int)(0x10 - (uint)uVar11) < iVar7) {
          uVar13 = *puVar1;
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | uVar13 << ((byte)iVar7 & 0x1f);
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1710);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          cVar3 = *(char *)(param_1 + 0x1714);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar11 - 0x10);
          *(ushort *)(param_1 + 0x1710) = uVar13 >> (0x10U - cVar3 & 0x1f);
        }
        else {
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | *puVar1 << ((byte)iVar7 & 0x1f);
          iVar7 = iVar7 + (uint)uVar11;
LAB_1436a1a38:
          *(int *)(param_1 + 0x1714) = iVar7;
        }
      }
      else {
        bVar4 = (&DAT_145b66910)[bVar8];
        uVar13 = *(ushort *)(param_2 + 2 + (ulonglong)(bVar4 + 0x101) * 4);
        puVar1 = (ushort *)(param_2 + (ulonglong)(bVar4 + 0x101) * 4);
        iVar6 = *(int *)(param_1 + 0x1714);
        if ((int)(0x10 - (uint)uVar13) < iVar6) {
          uVar5 = *puVar1;
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | uVar5 << ((byte)iVar6 & 0x1f);
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1710);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          cVar3 = *(char *)(param_1 + 0x1714);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar13 - 0x10);
          *(ushort *)(param_1 + 0x1710) = uVar5 >> (0x10U - cVar3 & 0x1f);
        }
        else {
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | *puVar1 << ((byte)iVar6 & 0x1f);
          *(uint *)(param_1 + 0x1714) = iVar6 + (uint)uVar13;
        }
        iVar6 = *(int *)(&DAT_145b66c10 + (ulonglong)bVar4 * 4);
        if (iVar6 != 0) {
          uVar13 = (ushort)bVar8 - (short)*(undefined4 *)(&DAT_145b67270 + (ulonglong)bVar4 * 4);
          iVar7 = *(int *)(param_1 + 0x1714);
          if (0x10 - iVar6 < iVar7) {
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | uVar13 << ((byte)iVar7 & 0x1f);
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1710);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1711);
            cVar3 = *(char *)(param_1 + 0x1714);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + iVar6 + -0x10;
            *(ushort *)(param_1 + 0x1710) = uVar13 >> (0x10U - cVar3 & 0x1f);
          }
          else {
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | uVar13 << ((byte)iVar7 & 0x1f);
            *(int *)(param_1 + 0x1714) = iVar7 + iVar6;
          }
        }
        uVar12 = uVar11 - 1;
        if (uVar12 < 0x100) {
          bVar8 = (&DAT_145b66a10)[uVar12];
        }
        else {
          bVar8 = (&DAT_145b66a10)[(uVar12 >> 7) + 0x100];
        }
        lVar2 = (ulonglong)bVar8 * 4;
        iVar6 = *(int *)(param_1 + 0x1714);
        uVar11 = *(ushort *)(lVar2 + 2 + param_3);
        if ((int)(0x10 - (uint)uVar11) < iVar6) {
          uVar13 = *(ushort *)(lVar2 + param_3);
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | uVar13 << ((byte)iVar6 & 0x1f);
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1710);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          cVar3 = *(char *)(param_1 + 0x1714);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar11 - 0x10);
          *(ushort *)(param_1 + 0x1710) = uVar13 >> (0x10U - cVar3 & 0x1f);
        }
        else {
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | *(short *)(lVar2 + param_3) << ((byte)iVar6 & 0x1f);
          *(uint *)(param_1 + 0x1714) = iVar6 + (uint)uVar11;
        }
        iVar6 = *(int *)(&DAT_145b66c90 + lVar2);
        if (iVar6 != 0) {
          uVar11 = (short)uVar12 - (short)*(undefined4 *)(&DAT_145b672f0 + lVar2);
          iVar7 = *(int *)(param_1 + 0x1714);
          if (iVar7 <= 0x10 - iVar6) {
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | uVar11 << ((byte)iVar7 & 0x1f);
            iVar7 = iVar7 + iVar6;
            goto LAB_1436a1a38;
          }
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | uVar11 << ((byte)iVar7 & 0x1f);
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1710);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          cVar3 = *(char *)(param_1 + 0x1714);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + iVar6 + -0x10;
          *(ushort *)(param_1 + 0x1710) = uVar11 >> (0x10U - cVar3 & 0x1f);
        }
      }
    } while (uVar9 < *(uint *)(param_1 + 0x16f4));
  }
  uVar11 = *(ushort *)(param_2 + 0x402);
  iVar6 = *(int *)(param_1 + 0x1714);
  if (iVar6 <= (int)(0x10 - (uint)uVar11)) {
    *(ushort *)(param_1 + 0x1710) =
         *(ushort *)(param_1 + 0x1710) | *(short *)(param_2 + 0x400) << ((byte)iVar6 & 0x1f);
    *(uint *)(param_1 + 0x1714) = iVar6 + (uint)uVar11;
    return;
  }
  uVar13 = *(ushort *)(param_2 + 0x400);
  *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | uVar13 << ((byte)iVar6 & 0x1f);
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
       *(undefined1 *)(param_1 + 0x1710);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
       *(undefined1 *)(param_1 + 0x1711);
  cVar3 = *(char *)(param_1 + 0x1714);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar11 - 0x10);
  *(ushort *)(param_1 + 0x1710) = uVar13 >> (0x10U - cVar3 & 0x1f);
  return;
}



// FUNCTION 1436a1b10 FUN_1436a1b10 body=230 status=ok
// SIG undefined FUN_1436a1b10(void)

void FUN_1436a1b10(longlong param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  byte bVar2;
  
  if (*(int *)(param_1 + 0x1714) < 9) {
    if (*(int *)(param_1 + 0x1714) < 1) goto LAB_1436a1b64;
    uVar1 = *(undefined1 *)(param_1 + 0x1710);
  }
  else {
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    uVar1 = *(undefined1 *)(param_1 + 0x1711);
  }
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = uVar1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_1436a1b64:
  *(undefined2 *)(param_1 + 0x1710) = 0;
  *(undefined4 *)(param_1 + 0x1714) = 0;
  if (param_4 != 0) {
    *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = (byte)param_3;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    bVar2 = (byte)((uint)param_3 >> 8);
    *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = bVar2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = ~(byte)param_3
    ;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = ~bVar2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = uVar1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}



// FUNCTION 1436a1c00 detect_data_type body=119 status=ok
// SIG undefined detect_data_type(void)

undefined8 detect_data_type(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  psVar1 = (short *)(param_1 + 0xbc);
  lVar2 = 0;
  uVar3 = 0xf3ffc07f;
  while (((uVar3 & 1) == 0 || (*psVar1 == 0))) {
    lVar2 = lVar2 + 1;
    uVar3 = uVar3 >> 1;
    psVar1 = psVar1 + 2;
    if (0x1f < lVar2) {
      if (((*(short *)(param_1 + 0xe0) == 0) && (*(short *)(param_1 + 0xe4) == 0)) &&
         (*(short *)(param_1 + 0xf0) == 0)) {
        lVar2 = 0x20;
        psVar1 = (short *)(param_1 + 0x13c);
        while (*psVar1 == 0) {
          lVar2 = lVar2 + 1;
          psVar1 = psVar1 + 2;
          if (0xff < lVar2) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1436a1c80 gen_bitlen body=515 status=ok
// SIG undefined gen_bitlen(void)

void gen_bitlen(longlong param_1,longlong *param_2)

{
  ushort *puVar1;
  short *psVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  undefined2 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  int *piVar25;
  longlong lVar26;
  
  plVar7 = (longlong *)param_2[2];
  lVar8 = *param_2;
  lVar9 = param_2[1];
  lVar26 = *plVar7;
  iVar23 = 0;
  lVar24 = plVar7[1];
  lVar10 = plVar7[2];
  iVar6 = (int)plVar7[3];
  uVar22 = (ulonglong)iVar6;
  puVar20 = (undefined2 *)(param_1 + 0xb88);
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
  }
  *(undefined2 *)
   (lVar8 + 2 + (longlong)*(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x14a0) * 4) * 4)
       = 0;
  iVar12 = *(int *)(param_1 + 0x14a0) + 1;
  lVar15 = (longlong)iVar12;
  if (lVar15 < 0x23d) {
    lVar18 = 0x23d - lVar15;
    iVar17 = (int)lVar18;
    piVar25 = (int *)(param_1 + 0xba8 + lVar15 * 4);
    do {
      iVar5 = *piVar25;
      lVar15 = (longlong)iVar5 * 4;
      iVar13 = *(ushort *)(lVar8 + 2 + (ulonglong)*(ushort *)(lVar15 + 2 + lVar8) * 4) + 1;
      if (iVar6 < iVar13) {
        iVar23 = iVar23 + 1;
        iVar13 = iVar6;
      }
      *(short *)(lVar15 + 2 + lVar8) = (short)iVar13;
      if (iVar5 <= (int)lVar9) {
        iVar19 = 0;
        psVar2 = (short *)(param_1 + 0xb88 + (longlong)iVar13 * 2);
        *psVar2 = *psVar2 + 1;
        if ((int)lVar10 <= iVar5) {
          iVar19 = *(int *)(lVar24 + (longlong)(iVar5 - (int)lVar10) * 4);
        }
        uVar3 = *(ushort *)(lVar15 + lVar8);
        *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + (iVar19 + iVar13) * (uint)uVar3;
        if (lVar26 != 0) {
          *(int *)(param_1 + 0x1704) =
               *(int *)(param_1 + 0x1704) +
               ((uint)*(ushort *)(lVar15 + 2 + lVar26) + iVar19) * (uint)uVar3;
        }
      }
      piVar25 = piVar25 + 1;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (iVar23 != 0) {
      do {
        uVar16 = (ulonglong)(int)(iVar6 - 1U);
        sVar4 = *(short *)(param_1 + 0xb88 + uVar16 * 2);
        uVar14 = iVar6 - 1U;
        while (sVar4 == 0) {
          uVar14 = (int)uVar16 - 1;
          uVar16 = (ulonglong)uVar14;
          sVar4 = *(short *)(param_1 + 0xb88 + (longlong)(int)uVar14 * 2);
        }
        iVar23 = iVar23 + -2;
        psVar2 = (short *)(param_1 + 0xb88 + (longlong)(int)uVar14 * 2);
        *psVar2 = *psVar2 + -1;
        psVar2 = (short *)(param_1 + 0xb88 + (longlong)(int)(uVar14 + 1) * 2);
        *psVar2 = *psVar2 + 2;
        psVar2 = (short *)(param_1 + uVar22 * 2 + 0xb88);
        *psVar2 = *psVar2 + -1;
      } while (0 < iVar23);
      if (iVar6 != 0) {
        lVar26 = (longlong)(iVar12 + iVar17);
        do {
          uVar21 = (uint)uVar22;
          uVar3 = *(ushort *)(param_1 + 0xb88 + (longlong)(int)uVar21 * 2);
          uVar14 = (uint)uVar3;
          if (uVar3 != 0) {
            lVar24 = param_1 + 0xba8 + lVar26 * 4;
            do {
              iVar6 = *(int *)(lVar24 + -4);
              lVar24 = lVar24 + -4;
              lVar26 = lVar26 + -1;
              if (iVar6 <= (int)lVar9) {
                puVar1 = (ushort *)(lVar8 + (longlong)iVar6 * 4);
                uVar11 = (uint)*(ushort *)(lVar8 + 2 + (longlong)iVar6 * 4);
                if (uVar11 != uVar21) {
                  *(int *)(param_1 + 0x1700) =
                       *(int *)(param_1 + 0x1700) + (uVar21 - uVar11) * (uint)*puVar1;
                  puVar1[1] = (ushort)uVar22;
                }
                uVar14 = uVar14 - 1;
              }
            } while (uVar14 != 0);
          }
          uVar22 = (ulonglong)(uVar21 - 1);
        } while (uVar21 - 1 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1436a1e90 FUN_1436a1e90 body=181 status=ok
// SIG undefined FUN_1436a1e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436a1e90(longlong param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort local_38 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)local_38;
  uVar6 = 0;
  lVar9 = 1;
  do {
    uVar6 = (uVar6 + *(short *)(param_3 + lVar9 * 2 + -2)) * 2;
    local_38[lVar9] = uVar6;
    lVar9 = lVar9 + 1;
  } while (lVar9 < 0x10);
  uVar8 = 0;
  if (-1 < param_2) {
    do {
      uVar6 = *(ushort *)(param_1 + 2 + uVar8 * 4);
      uVar5 = (ulonglong)uVar6;
      if (uVar6 != 0) {
        uVar7 = (uint)local_38[uVar5];
        local_38[uVar5] = local_38[uVar5] + 1;
        uVar1 = 0;
        do {
          uVar2 = uVar1;
          uVar4 = (int)uVar5 - 1;
          uVar5 = (ulonglong)uVar4;
          uVar3 = uVar7 & 1;
          uVar7 = uVar7 >> 1;
          uVar1 = (ulonglong)(((uint)uVar2 | uVar3) * 2);
        } while (0 < (int)uVar4);
        *(ushort *)(param_1 + uVar8 * 4) = (ushort)uVar2 | (ushort)uVar3;
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 <= (longlong)param_2);
  }
  return;
}



// FUNCTION 1436a1f50 init_block body=128 status=ok
// SIG undefined init_block(void)

void init_block(longlong param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined2 *)(param_1 + 0xbc);
  lVar2 = 0x11e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0x9b0);
  lVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0xaa4);
  lVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 0x1700) = 0;
  *(undefined2 *)(param_1 + 0x4bc) = 1;
  *(undefined4 *)(param_1 + 0x1708) = 0;
  *(undefined4 *)(param_1 + 0x16f4) = 0;
  return;
}



// FUNCTION 1436a1fd0 pqdownheap body=265 status=ok
// SIG undefined pqdownheap(void)

void pqdownheap(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  iVar6 = (int)param_3;
  iVar8 = iVar6 * 2;
  iVar3 = *(int *)(param_1 + 0xba8 + (longlong)iVar6 * 4);
  iVar4 = *(int *)(param_1 + 0x149c);
  bVar10 = SBORROW4(iVar8,iVar4);
  iVar7 = iVar8 - iVar4;
  if (iVar4 < iVar8) {
    *(int *)(param_1 + 0xba8 + (longlong)iVar6 * 4) = iVar3;
    return;
  }
  while( true ) {
    if (bVar10 != iVar7 < 0) {
      lVar9 = (longlong)*(int *)(param_1 + 0xba8 + (longlong)(iVar8 + 1) * 4);
      lVar5 = (longlong)*(int *)(param_1 + 0xba8 + (longlong)iVar8 * 4);
      uVar1 = *(ushort *)(param_2 + lVar9 * 4);
      uVar2 = *(ushort *)(param_2 + lVar5 * 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(lVar9 + 0x14a4 + param_1) <= *(byte *)(lVar5 + 0x14a4 + param_1))))) {
        iVar8 = iVar8 + 1;
      }
    }
    iVar4 = *(int *)(param_1 + 0xba8 + (longlong)iVar8 * 4);
    uVar1 = *(ushort *)(param_2 + (longlong)iVar3 * 4);
    uVar2 = *(ushort *)(param_2 + (longlong)iVar4 * 4);
    iVar7 = (int)param_3;
    if ((uVar1 < uVar2) ||
       ((uVar1 == uVar2 &&
        (*(byte *)(param_1 + 0x14a4 + (longlong)iVar3) <=
         *(byte *)((longlong)iVar4 + 0x14a4 + param_1))))) break;
    param_3 = (longlong)iVar8;
    iVar8 = iVar8 * 2;
    *(int *)(param_1 + 0xba8 + (longlong)iVar7 * 4) = iVar4;
    iVar4 = *(int *)(param_1 + 0x149c);
    bVar10 = SBORROW4(iVar8,iVar4);
    iVar7 = iVar8 - iVar4;
    if (iVar4 < iVar8) {
      *(int *)(param_1 + 0xba8 + param_3 * 4) = iVar3;
      return;
    }
  }
  *(int *)(param_1 + 0xba8 + (longlong)iVar7 * 4) = iVar3;
  return;
}



// FUNCTION 1436a20e0 scan_tree body=318 status=ok
// SIG undefined scan_tree(void)

void scan_tree(longlong param_1,longlong param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  longlong lVar11;
  
  uVar2 = *(ushort *)(param_2 + 2);
  uVar6 = 0xffffffff;
  iVar8 = 0;
  *(undefined2 *)(param_2 + 2 + (longlong)(param_3 + 1) * 4) = 0xffff;
  iVar5 = 0x8a;
  if (uVar2 != 0) {
    iVar5 = 7;
  }
  iVar4 = (uVar2 != 0) + 3;
  if (-1 < param_3) {
    puVar10 = (ushort *)(param_2 + 6);
    lVar11 = (longlong)param_3 + 1;
    do {
      iVar8 = iVar8 + 1;
      uVar3 = *puVar10;
      uVar7 = (uint)uVar2;
      uVar9 = (uint)uVar3;
      if ((iVar5 <= iVar8) || (uVar7 != uVar9)) {
        if (iVar8 < iVar4) {
          psVar1 = (short *)(param_1 + 0xaa4 + (ulonglong)uVar2 * 4);
          *psVar1 = *psVar1 + (short)iVar8;
        }
        else if (uVar7 == 0) {
          if (iVar8 < 0xb) {
            *(short *)(param_1 + 0xae8) = *(short *)(param_1 + 0xae8) + 1;
          }
          else {
            *(short *)(param_1 + 0xaec) = *(short *)(param_1 + 0xaec) + 1;
          }
        }
        else {
          if (uVar7 != uVar6) {
            psVar1 = (short *)(param_1 + 0xaa4 + (ulonglong)uVar2 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xae4) = *(short *)(param_1 + 0xae4) + 1;
        }
        iVar8 = 0;
        uVar6 = uVar7;
        if (uVar9 == 0) {
          iVar4 = 3;
          iVar8 = 0;
          iVar5 = 0x8a;
        }
        else if (uVar7 == uVar9) {
          iVar4 = 3;
          iVar8 = 0;
          iVar5 = 6;
        }
        else {
          iVar4 = 4;
          iVar5 = 7;
        }
      }
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      uVar2 = uVar3;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 1436a2220 send_all_trees body=635 status=ok
// SIG undefined send_all_trees(void)

void send_all_trees(longlong param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_4;
  iVar2 = *(int *)(param_1 + 0x1714);
  if (iVar2 < 0xc) {
    *(ushort *)(param_1 + 0x1710) =
         *(ushort *)(param_1 + 0x1710) | (short)param_2 + -0x101 << ((byte)iVar2 & 0x1f);
    *(int *)(param_1 + 0x1714) = iVar2 + 5;
  }
  else {
    uVar3 = (short)param_2 - 0x101;
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | uVar3 << ((byte)iVar2 & 0x1f);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    cVar1 = *(char *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xb;
    *(ushort *)(param_1 + 0x1710) = uVar3 >> (0x10U - cVar1 & 0x1f);
  }
  iVar2 = *(int *)(param_1 + 0x1714);
  if (iVar2 < 0xc) {
    *(ushort *)(param_1 + 0x1710) =
         *(ushort *)(param_1 + 0x1710) | (short)param_3 + -1 << ((byte)iVar2 & 0x1f);
    *(int *)(param_1 + 0x1714) = iVar2 + 5;
  }
  else {
    uVar3 = (short)param_3 - 1;
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | uVar3 << ((byte)iVar2 & 0x1f);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    cVar1 = *(char *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xb;
    *(ushort *)(param_1 + 0x1710) = uVar3 >> (0x10U - cVar1 & 0x1f);
  }
  iVar2 = *(int *)(param_1 + 0x1714);
  if (iVar2 < 0xd) {
    *(ushort *)(param_1 + 0x1710) =
         *(ushort *)(param_1 + 0x1710) | (short)param_4 + -4 << ((byte)iVar2 & 0x1f);
    *(int *)(param_1 + 0x1714) = iVar2 + 4;
  }
  else {
    uVar3 = (short)param_4 - 4;
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | uVar3 << ((byte)iVar2 & 0x1f);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    cVar1 = *(char *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xc;
    *(ushort *)(param_1 + 0x1710) = uVar3 >> (0x10U - cVar1 & 0x1f);
  }
  if (0 < (int)param_4) {
    pbVar4 = &DAT_145b67258;
    do {
      iVar2 = *(int *)(param_1 + 0x1714);
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x1710) =
             *(ushort *)(param_1 + 0x1710) |
             *(short *)(param_1 + 0xaa6 + (ulonglong)*pbVar4 * 4) << ((byte)iVar2 & 0x1f);
        *(int *)(param_1 + 0x1714) = iVar2 + 3;
      }
      else {
        uVar3 = *(ushort *)(param_1 + 0xaa6 + (ulonglong)*pbVar4 * 4);
        *(ushort *)(param_1 + 0x1710) =
             *(ushort *)(param_1 + 0x1710) | uVar3 << ((byte)iVar2 & 0x1f);
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
             *(undefined1 *)(param_1 + 0x1710);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
             *(undefined1 *)(param_1 + 0x1711);
        cVar1 = *(char *)(param_1 + 0x1714);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xd;
        *(ushort *)(param_1 + 0x1710) = uVar3 >> (0x10U - cVar1 & 0x1f);
      }
      pbVar4 = pbVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  send_tree(param_1,param_1 + 0xbc,param_2 + -1);
  send_tree(param_1,param_1 + 0x9b0,param_3 + -1);
  return;
}



// FUNCTION 1436a24a0 send_tree body=1479 status=ok
// SIG undefined send_tree(void)

void send_tree(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  longlong lVar16;
  ushort *puVar17;
  int iVar15;
  
  uVar8 = *(ushort *)(param_2 + 2);
  uVar12 = 0xffffffff;
  iVar15 = 0;
  iVar7 = 0x8a;
  if (uVar8 != 0) {
    iVar7 = 7;
  }
  iVar6 = (uVar8 != 0) + 3;
  if (-1 < (longlong)param_3) {
    lVar16 = (longlong)param_3 + 1;
    puVar17 = (ushort *)(param_2 + 6);
    do {
      uVar11 = (ulonglong)uVar8;
      iVar14 = iVar15 + 1;
      uVar3 = *puVar17;
      uVar10 = (uint)uVar3;
      uVar9 = (uint)uVar8;
      if ((iVar7 <= iVar14) || (uVar9 != uVar10)) {
        if (iVar14 < iVar6) {
          lVar1 = param_1 + uVar11 * 4;
          do {
            uVar8 = *(ushort *)(param_1 + uVar11 * 4 + 0xaa6);
            iVar7 = *(int *)(param_1 + 0x1714);
            if ((int)(0x10 - (uint)uVar8) < iVar7) {
              uVar4 = *(ushort *)(lVar1 + 0xaa4);
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | uVar4 << ((byte)iVar7 & 0x1f);
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1710);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              cVar2 = *(char *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar8 - 0x10);
              *(ushort *)(param_1 + 0x1710) = uVar4 >> (0x10U - cVar2 & 0x1f);
            }
            else {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | *(short *)(lVar1 + 0xaa4) << ((byte)iVar7 & 0x1f)
              ;
              *(uint *)(param_1 + 0x1714) = iVar7 + (uint)uVar8;
            }
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        else if (uVar9 == 0) {
          iVar7 = *(int *)(param_1 + 0x1714);
          sVar13 = (short)iVar14;
          bVar5 = (byte)iVar7;
          if (iVar14 < 0xb) {
            uVar8 = *(ushort *)(param_1 + 0xaea);
            if ((int)(0x10 - (uint)uVar8) < iVar7) {
              uVar4 = *(ushort *)(param_1 + 0xae8);
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | uVar4 << (bVar5 & 0x1f);
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1710);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              cVar2 = *(char *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar8 - 0x10);
              *(ushort *)(param_1 + 0x1710) = uVar4 >> (0x10U - cVar2 & 0x1f);
            }
            else {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | *(short *)(param_1 + 0xae8) << (bVar5 & 0x1f);
              *(uint *)(param_1 + 0x1714) = iVar7 + (uint)uVar8;
            }
            iVar7 = *(int *)(param_1 + 0x1714);
            if (iVar7 < 0xe) {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | sVar13 + -3 << ((byte)iVar7 & 0x1f);
              iVar7 = iVar7 + 3;
LAB_1436a29fd:
              *(int *)(param_1 + 0x1714) = iVar7;
            }
            else {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | sVar13 - 3U << ((byte)iVar7 & 0x1f);
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1710);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              cVar2 = *(char *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xd;
              *(ushort *)(param_1 + 0x1710) = (ushort)(sVar13 - 3U) >> (0x10U - cVar2 & 0x1f);
            }
          }
          else {
            uVar8 = *(ushort *)(param_1 + 0xaee);
            if ((int)(0x10 - (uint)uVar8) < iVar7) {
              uVar4 = *(ushort *)(param_1 + 0xaec);
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | uVar4 << (bVar5 & 0x1f);
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1710);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              cVar2 = *(char *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar8 - 0x10);
              *(ushort *)(param_1 + 0x1710) = uVar4 >> (0x10U - cVar2 & 0x1f);
            }
            else {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | *(short *)(param_1 + 0xaec) << (bVar5 & 0x1f);
              *(uint *)(param_1 + 0x1714) = iVar7 + (uint)uVar8;
            }
            iVar7 = *(int *)(param_1 + 0x1714);
            if (iVar7 < 10) {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | sVar13 + -0xb << ((byte)iVar7 & 0x1f);
              iVar7 = iVar7 + 7;
              goto LAB_1436a29fd;
            }
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | sVar13 - 0xbU << ((byte)iVar7 & 0x1f);
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1710);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1711);
            cVar2 = *(char *)(param_1 + 0x1714);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -9;
            *(ushort *)(param_1 + 0x1710) = (ushort)(sVar13 - 0xbU) >> (0x10U - cVar2 & 0x1f);
          }
        }
        else {
          if (uVar9 != uVar12) {
            uVar8 = *(ushort *)(param_1 + 0xaa6 + uVar11 * 4);
            iVar7 = *(int *)(param_1 + 0x1714);
            iVar14 = iVar15;
            if ((int)(0x10 - (uint)uVar8) < iVar7) {
              uVar4 = *(ushort *)(param_1 + 0xaa4 + uVar11 * 4);
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | uVar4 << ((byte)iVar7 & 0x1f);
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1710);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              cVar2 = *(char *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar8 - 0x10);
              *(ushort *)(param_1 + 0x1710) = uVar4 >> (0x10U - cVar2 & 0x1f);
            }
            else {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) |
                   *(short *)(param_1 + 0xaa4 + uVar11 * 4) << ((byte)iVar7 & 0x1f);
              *(uint *)(param_1 + 0x1714) = iVar7 + (uint)uVar8;
            }
          }
          uVar8 = *(ushort *)(param_1 + 0xae6);
          iVar7 = *(int *)(param_1 + 0x1714);
          if ((int)(0x10 - (uint)uVar8) < iVar7) {
            uVar4 = *(ushort *)(param_1 + 0xae4);
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | uVar4 << ((byte)iVar7 & 0x1f);
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1710);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1711);
            cVar2 = *(char *)(param_1 + 0x1714);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar8 - 0x10);
            *(ushort *)(param_1 + 0x1710) = uVar4 >> (0x10U - cVar2 & 0x1f);
          }
          else {
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | *(short *)(param_1 + 0xae4) << ((byte)iVar7 & 0x1f)
            ;
            *(uint *)(param_1 + 0x1714) = iVar7 + (uint)uVar8;
          }
          iVar7 = *(int *)(param_1 + 0x1714);
          if (iVar7 < 0xf) {
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | (short)iVar14 + -3 << ((byte)iVar7 & 0x1f);
            iVar7 = iVar7 + 2;
            goto LAB_1436a29fd;
          }
          uVar8 = (short)iVar14 - 3;
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | uVar8 << ((byte)iVar7 & 0x1f);
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1710);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          cVar2 = *(char *)(param_1 + 0x1714);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xe;
          *(ushort *)(param_1 + 0x1710) = uVar8 >> (0x10U - cVar2 & 0x1f);
        }
        uVar12 = uVar9;
        iVar14 = 0;
        if (uVar10 == 0) {
          iVar6 = uVar3 + 3;
          iVar7 = 0x8a;
        }
        else if (uVar9 == uVar10) {
          iVar6 = 3;
          iVar7 = 6;
        }
        else {
          iVar6 = 4;
          iVar7 = 7;
          iVar14 = 0;
        }
      }
      iVar15 = iVar14;
      puVar17 = puVar17 + 2;
      lVar16 = lVar16 + -1;
      uVar8 = uVar3;
    } while (lVar16 != 0);
  }
  return;
}



// FUNCTION 1436a2a70 adler32 body=724 status=ok
// SIG undefined adler32(void)

uint adler32(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  
  uVar21 = param_1 >> 0x10;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = param_1 + *param_2;
    uVar19 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar19 = param_1;
    }
    uVar21 = uVar21 + uVar19;
    uVar3 = uVar21 - 0xfff1;
    if (uVar21 < 0xfff1) {
      uVar3 = uVar21;
    }
    return uVar3 << 0x10 | uVar19;
  }
  if (param_2 != (byte *)0x0) {
    if (0xf < param_3) {
      if (0x15af < param_3) {
        uVar22 = (ulonglong)param_3 / 0x15b0;
        do {
          param_3 = param_3 - 0x15b0;
          iVar20 = 0x15b;
          do {
            iVar4 = param_1 + *param_2;
            iVar5 = iVar4 + (uint)param_2[1];
            iVar6 = iVar5 + (uint)param_2[2];
            iVar7 = iVar6 + (uint)param_2[3];
            iVar8 = iVar7 + (uint)param_2[4];
            iVar9 = iVar8 + (uint)param_2[5];
            iVar10 = iVar9 + (uint)param_2[6];
            iVar11 = iVar10 + (uint)param_2[7];
            iVar12 = iVar11 + (uint)param_2[8];
            iVar13 = iVar12 + (uint)param_2[9];
            iVar14 = iVar13 + (uint)param_2[10];
            iVar15 = iVar14 + (uint)param_2[0xb];
            iVar16 = iVar15 + (uint)param_2[0xc];
            iVar17 = iVar16 + (uint)param_2[0xd];
            iVar18 = iVar17 + (uint)param_2[0xe];
            pbVar1 = param_2 + 0xf;
            param_2 = param_2 + 0x10;
            param_1 = iVar18 + (uint)*pbVar1;
            uVar21 = uVar21 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                     iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + param_1;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          param_1 = param_1 % 0xfff1;
          uVar21 = uVar21 % 0xfff1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      if (param_3 != 0) {
        if (0xf < param_3) {
          uVar22 = (ulonglong)(param_3 >> 4);
          do {
            param_3 = param_3 - 0x10;
            iVar20 = param_1 + *param_2;
            iVar4 = iVar20 + (uint)param_2[1];
            iVar5 = iVar4 + (uint)param_2[2];
            iVar6 = iVar5 + (uint)param_2[3];
            iVar7 = iVar6 + (uint)param_2[4];
            iVar8 = iVar7 + (uint)param_2[5];
            iVar9 = iVar8 + (uint)param_2[6];
            iVar10 = iVar9 + (uint)param_2[7];
            iVar11 = iVar10 + (uint)param_2[8];
            iVar12 = iVar11 + (uint)param_2[9];
            iVar13 = iVar12 + (uint)param_2[10];
            iVar14 = iVar13 + (uint)param_2[0xb];
            iVar15 = iVar14 + (uint)param_2[0xc];
            iVar16 = iVar15 + (uint)param_2[0xd];
            iVar17 = iVar16 + (uint)param_2[0xe];
            pbVar1 = param_2 + 0xf;
            param_2 = param_2 + 0x10;
            param_1 = iVar17 + (uint)*pbVar1;
            uVar21 = uVar21 + iVar20 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                     iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + param_1;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        for (; param_3 != 0; param_3 = param_3 - 1) {
          bVar2 = *param_2;
          param_2 = param_2 + 1;
          param_1 = param_1 + bVar2;
          uVar21 = uVar21 + param_1;
        }
        param_1 = param_1 % 0xfff1;
        uVar21 = uVar21 % 0xfff1;
      }
      return uVar21 << 0x10 | param_1;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + bVar2;
      uVar21 = uVar21 + param_1;
    }
    uVar19 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar19 = param_1;
    }
    return ((uVar21 / 0xfff1) * 0xf + uVar21) * 0x10000 | uVar19;
  }
  return 1;
}



// FUNCTION 1436a2d50 zError body=21 status=ok
// SIG undefined zError(void)

undefined * zError(int param_1)

{
  return (&PTR_s_need_dictionary_145b67370)[2 - param_1];
}



// FUNCTION 1436a2d70 FUN_1436a2d70 body=13 status=ok
// SIG undefined FUN_1436a2d70(void)

void FUN_1436a2d70(undefined8 param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001436a2d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  malloc((ulonglong)(uint)(param_2 * param_3));
  return;
}



// FUNCTION 1436a2d80 FUN_1436a2d80 body=10 status=ok
// SIG undefined FUN_1436a2d80(void)

void FUN_1436a2d80(undefined8 param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001436a2d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_2);
  return;
}



// FUNCTION 1436a2d90 FUN_1436a2d90 body=1291 status=ok
// SIG undefined FUN_1436a2d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1436a2d90(int param_1,ushort *param_2,uint param_3,longlong *param_4,uint *param_5,
             undefined *param_6)

{
  ushort uVar1;
  byte bVar2;
  undefined2 uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  int local_c8;
  longlong local_c0;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  longlong *local_98;
  ushort *local_90;
  uint *local_88;
  ushort auStack_80 [16];
  ushort auStack_60 [16];
  ulonglong local_40;
  char cVar3;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar10 = 0;
  uVar8 = (ulonglong)param_3;
  local_88 = param_5;
  local_a0 = param_6;
  uVar18 = uVar10;
  do {
    if (0x1f < uVar18 * 2) {
      local_c8 = param_1;
      local_98 = param_4;
      local_90 = param_2;
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    uVar19 = (int)uVar18 + 1;
    auStack_80[uVar18] = 0;
    uVar18 = (ulonglong)uVar19;
  } while (uVar19 < 0x10);
  puVar6 = param_2;
  if (param_3 != 0) {
    do {
      auStack_80[*puVar6] = auStack_80[*puVar6] + 1;
      uVar8 = uVar8 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 != 0);
  }
  uVar19 = 0xd;
  uVar18 = 0xf;
  do {
    uVar17 = (uint)uVar18;
    uVar15 = 0xffffffff;
    if (auStack_80[uVar18] != 0) goto LAB_1436a2eae;
    if (auStack_80[uVar19 + 1] != 0) {
      uVar17 = uVar17 - 1;
      goto LAB_1436a2eae;
    }
    if (auStack_80[uVar19] != 0) {
      uVar17 = uVar17 - 2;
      goto LAB_1436a2eae;
    }
    if (auStack_80[uVar19 - 1] != 0) {
      uVar17 = uVar17 - 3;
      goto LAB_1436a2eae;
    }
    if (auStack_80[uVar19 - 2] != 0) {
      uVar17 = uVar17 - 4;
      goto LAB_1436a2eae;
    }
    uVar18 = (ulonglong)(uVar17 - 5);
    uVar19 = uVar19 - 5;
  } while (uVar17 - 5 != 0);
  uVar17 = 0;
LAB_1436a2eae:
  uVar19 = *param_5;
  if (uVar17 < *param_5) {
    uVar19 = uVar17;
  }
  if (uVar17 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
LAB_1436a2edf:
    uVar5 = 0;
  }
  else {
    uVar22 = 1;
    if (1 < uVar17) {
      puVar6 = auStack_80;
      do {
        puVar6 = puVar6 + 1;
        if (*puVar6 != 0) break;
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar17);
    }
    uVar18 = 1;
    iVar13 = 1;
    if (uVar19 < uVar22) {
      uVar19 = uVar22;
    }
    do {
      iVar13 = iVar13 * 2 - (uint)auStack_80[uVar18];
      if (iVar13 < 0) goto LAB_1436a328e;
      uVar7 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar7;
    } while (uVar7 < 0x10);
    if ((iVar13 < 1) || ((param_1 != 0 && (uVar17 == 1)))) {
      auStack_60[1] = 0;
      lVar9 = 0xe;
      uVar18 = uVar10;
      do {
        *(short *)((longlong)auStack_60 + uVar18 + 4) =
             *(short *)((longlong)auStack_80 + uVar18 + 2) +
             *(short *)((longlong)auStack_60 + uVar18 + 2);
        uVar18 = uVar18 + 2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      puVar6 = param_2;
      uVar18 = uVar10;
      if (param_3 != 0) {
        do {
          if (*puVar6 != 0) {
            *(short *)(param_6 + (ulonglong)auStack_60[*puVar6] * 2) = (short)uVar18;
            auStack_60[*puVar6] = auStack_60[*puVar6] + 1;
          }
          uVar7 = (int)uVar18 + 1;
          puVar6 = puVar6 + 1;
          uVar18 = (ulonglong)uVar7;
        } while (uVar7 < param_3);
      }
      if (param_1 == 0) {
        local_b0 = param_6;
        iVar13 = 0x13;
        local_a8 = param_6;
      }
      else if (param_1 == 1) {
        iVar13 = 0x100;
        local_a8 = &DAT_145b6727e;
        local_b0 = &DAT_145b672be;
      }
      else {
        iVar13 = -1;
        local_a8 = &DAT_145b67500;
        local_b0 = &DAT_145b67540;
      }
      local_c0 = *param_4;
      local_d0 = 0;
      uVar11 = 1 << ((byte)uVar19 & 0x1f);
      uVar18 = (ulonglong)uVar11;
      local_d4 = 0;
      uVar7 = uVar11 - 1;
      lVar9 = local_c0;
      if (param_1 == 1) {
        uVar8 = uVar10;
        uVar16 = uVar10;
        if (uVar11 < 0x354) {
LAB_1436a3090:
          do {
            do {
              cVar3 = (char)uVar22;
              bVar2 = cVar3 - (char)uVar10;
              uVar1 = *(ushort *)(param_6 + uVar16 * 2);
              if ((int)(uint)uVar1 < iVar13) {
                local_d8 = (uint)CONCAT21(uVar1,bVar2) << 8;
              }
              else {
                if (iVar13 < (int)(uint)uVar1) {
                  local_d8._0_2_ = CONCAT11(bVar2,local_b0[(ulonglong)uVar1 * 2]);
                  uVar4 = *(undefined2 *)(local_a8 + (ulonglong)uVar1 * 2);
                }
                else {
                  local_d8 = CONCAT31((uint3)bVar2,0x60);
                  uVar4 = 0;
                }
                local_d8 = CONCAT22(uVar4,(ushort)local_d8);
              }
              uVar12 = (uint)uVar8;
              iVar20 = 1 << (cVar3 - (char)uVar10 & 0x1fU);
              uVar8 = (ulonglong)((uVar12 >> ((byte)local_d4 & 0x1f)) + (int)uVar18);
              uVar10 = uVar18;
              do {
                uVar8 = (ulonglong)(uint)((int)uVar8 - iVar20);
                *(uint *)(lVar9 + uVar8 * 4) = local_d8;
                uVar14 = (int)uVar10 - iVar20;
                uVar10 = (ulonglong)uVar14;
              } while (uVar14 != 0);
              for (uVar14 = 1 << (cVar3 - 1U & 0x1f); (uVar12 & uVar14) != 0; uVar14 = uVar14 >> 1)
              {
              }
              if (uVar14 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = (ulonglong)((uVar12 & uVar14 - 1) + uVar14);
              }
              local_d0 = local_d0 + 1;
              uVar16 = (ulonglong)local_d0;
              puVar6 = auStack_80 + uVar22;
              *puVar6 = *puVar6 - 1;
              if (*puVar6 == 0) {
                if (uVar22 == uVar17) {
                  if ((uint)uVar8 != 0) {
                    local_d8._0_2_ = CONCAT11(cVar3 - (byte)local_d4,0x40);
                    local_d8 = (uint)(ushort)local_d8;
                    *(uint *)(lVar9 + uVar8 * 4) = local_d8;
                  }
                  *param_4 = *param_4 + (ulonglong)uVar11 * 4;
                  *param_5 = uVar19;
                  goto LAB_1436a2edf;
                }
                uVar22 = (uint)param_2[*(ushort *)(param_6 + uVar16 * 2)];
              }
              uVar10 = (ulonglong)local_d4;
            } while (uVar22 <= uVar19);
            uVar12 = uVar7 & (uint)uVar8;
            lVar9 = local_c0;
          } while (uVar12 == uVar15);
          if (local_d4 == 0) {
            local_d4 = uVar19;
          }
          iVar21 = uVar22 - local_d4;
          local_c0 = local_c0 + uVar18 * 4;
          uVar15 = local_d4 + iVar21;
          for (iVar20 = 1 << ((byte)iVar21 & 0x1f);
              (uVar15 < uVar17 &&
              (uVar10 = (ulonglong)uVar15, 0 < (int)(iVar20 - (uint)auStack_80[uVar10])));
              iVar20 = (iVar20 - (uint)auStack_80[uVar10]) * 2) {
            iVar21 = iVar21 + 1;
            uVar15 = uVar15 + 1;
          }
          uVar15 = 1 << ((byte)iVar21 & 0x1f);
          uVar18 = (ulonglong)uVar15;
          uVar11 = uVar11 + uVar15;
          if (param_1 == 1) {
            bVar23 = uVar11 < 0x354;
LAB_1436a3207:
            if (!bVar23) goto LAB_1436a3077;
          }
          else if (param_1 == 2) {
            bVar23 = uVar11 < 0x250;
            goto LAB_1436a3207;
          }
          lVar9 = (ulonglong)uVar12 * 4;
          *(byte *)(lVar9 + *param_4) = (byte)iVar21;
          *(byte *)(lVar9 + 1 + *param_4) = (byte)uVar19;
          *(short *)(*param_4 + 2 + lVar9) = (short)(local_c0 - *param_4 >> 2);
          uVar10 = (ulonglong)local_d4;
          lVar9 = local_c0;
          uVar16 = (ulonglong)local_d0;
          uVar15 = uVar12;
          goto LAB_1436a3090;
        }
      }
      else {
        uVar10 = 0;
        uVar8 = 0;
        uVar16 = 0;
        uVar15 = 0xffffffff;
        if ((param_1 != 2) || (uVar11 < 0x250)) goto LAB_1436a3090;
      }
LAB_1436a3077:
      uVar5 = 1;
    }
    else {
LAB_1436a328e:
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}



// FUNCTION 1436a32a0 inflate_fast body=1234 status=ok
// SIG undefined inflate_fast(void)

void inflate_fast(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  char *pcVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  longlong lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  byte *pbVar28;
  int local_60;
  
  puVar6 = (undefined4 *)param_1[5];
  pbVar16 = (byte *)(*param_1 + -1);
  lVar9 = param_1[3];
  puVar19 = (undefined1 *)(param_1[2] + -1);
  lVar18 = *(longlong *)(puVar6 + 0x16);
  lVar7 = *(longlong *)(puVar6 + 0x18);
  pbVar28 = pbVar16 + ((int)param_1[1] - 5);
  uVar2 = puVar6[0xd];
  uVar15 = puVar6[0x10];
  uVar3 = puVar6[0x1a];
  uVar26 = puVar6[0x11];
  local_60 = (int)puVar19 - (param_2 - (int)lVar9);
  iVar27 = puVar6[0xb];
  uVar4 = puVar6[0xc];
  lVar8 = *(longlong *)(puVar6 + 0xe);
  uVar5 = puVar6[0x1b];
  puVar21 = puVar19;
LAB_1436a3357:
  if (uVar26 < 0xf) {
    pbVar17 = pbVar16 + 1;
    pbVar16 = pbVar16 + 2;
    uVar15 = uVar15 + ((uint)*pbVar17 << ((byte)uVar26 & 0x1f)) +
             ((uint)*pbVar16 << ((byte)uVar26 + 8 & 0x1f));
    uVar26 = uVar26 + 0x10;
  }
  uVar13 = *(uint *)(lVar18 + (ulonglong)((1 << ((byte)uVar3 & 0x1f)) - 1U & uVar15) * 4);
  uVar15 = uVar15 >> ((byte)(uVar13 >> 8) & 0x1f);
  uVar26 = uVar26 - (uVar13 >> 8 & 0xff);
  cVar24 = (char)uVar13;
  while (cVar24 != '\0') {
    puVar20 = puVar21;
    if ((uVar13 & 0x10) != 0) {
      uVar25 = uVar13 >> 0x10;
      uVar13 = uVar13 & 0xf;
      pbVar17 = pbVar16;
      if (uVar13 != 0) {
        if (uVar26 < uVar13) {
          pbVar17 = pbVar16 + 1;
          pbVar16 = pbVar16 + 1;
          uVar15 = uVar15 + ((uint)*pbVar17 << ((byte)uVar26 & 0x1f));
          uVar26 = uVar26 + 8;
        }
        uVar10 = (1 << (sbyte)uVar13) - 1U & uVar15;
        uVar15 = uVar15 >> (sbyte)uVar13;
        uVar25 = uVar25 + uVar10;
        uVar26 = uVar26 - uVar13;
        pbVar17 = pbVar16;
      }
      if (uVar26 < 0xf) {
        pbVar16 = pbVar17 + 1;
        pbVar17 = pbVar17 + 2;
        uVar15 = uVar15 + ((uint)*pbVar16 << ((byte)uVar26 & 0x1f)) +
                 ((uint)*pbVar17 << ((byte)uVar26 + 8 & 0x1f));
        uVar26 = uVar26 + 0x10;
      }
      uVar13 = *(uint *)(lVar7 + (ulonglong)((1 << ((byte)uVar5 & 0x1f)) - 1U & uVar15) * 4);
      uVar15 = uVar15 >> ((byte)(uVar13 >> 8) & 0x1f);
      uVar26 = uVar26 - (uVar13 >> 8 & 0xff);
      goto joined_r0x0001436a3462;
    }
    if ((uVar13 & 0x40) != 0) {
      if ((uVar13 & 0x20) == 0) {
        param_1[4] = (longlong)"invalid literal/length code";
        *puVar6 = 0x1d;
      }
      else {
        *puVar6 = 0xb;
      }
      goto LAB_1436a3713;
    }
    uVar13 = *(uint *)(lVar18 + (ulonglong)
                                (((1 << ((byte)uVar13 & 0x1f)) - 1U & uVar15) + (uVar13 >> 0x10)) *
                                4);
    uVar15 = uVar15 >> ((byte)(uVar13 >> 8) & 0x1f);
    uVar26 = uVar26 - (uVar13 >> 8 & 0xff);
    cVar24 = (char)uVar13;
  }
  puVar21[1] = (char)(uVar13 >> 0x10);
  puVar20 = puVar21 + 1;
  goto LAB_1436a36a7;
joined_r0x0001436a3462:
  if ((uVar13 & 0x10) != 0) goto LAB_1436a349a;
  if ((uVar13 & 0x40) != 0) {
    pcVar11 = "invalid distance code";
    goto LAB_1436a36ec;
  }
  uVar13 = *(uint *)(lVar7 + (ulonglong)
                             (((1 << ((byte)uVar13 & 0x1f)) - 1U & uVar15) + (uVar13 >> 0x10)) * 4);
  uVar15 = uVar15 >> ((byte)(uVar13 >> 8) & 0x1f);
  uVar26 = uVar26 - (uVar13 >> 8 & 0xff);
  goto joined_r0x0001436a3462;
LAB_1436a349a:
  uVar14 = uVar13 & 0xf;
  pbVar16 = pbVar17;
  uVar10 = uVar26;
  if (uVar26 < uVar14) {
    pbVar16 = pbVar17 + 1;
    uVar10 = uVar26 + 8;
    uVar15 = uVar15 + ((uint)pbVar17[1] << ((byte)uVar26 & 0x1f));
    if (uVar10 < uVar14) {
      pbVar16 = pbVar17 + 2;
      uVar15 = uVar15 + ((uint)pbVar17[2] << ((byte)uVar10 & 0x1f));
      uVar10 = uVar26 + 0x10;
    }
  }
  uVar26 = uVar10 - uVar14;
  uVar10 = (1 << (sbyte)uVar14) - 1U & uVar15;
  uVar15 = uVar15 >> (sbyte)uVar14;
  uVar10 = (uVar13 >> 0x10) + uVar10;
  uVar13 = (int)puVar21 - local_60;
  if (uVar10 <= uVar13) {
    puVar20 = puVar21 + -(ulonglong)uVar10;
    do {
      puVar22 = puVar21;
      puVar23 = puVar20;
      puVar22[1] = puVar23[1];
      uVar25 = uVar25 - 3;
      puVar22[2] = puVar23[2];
      puVar21 = puVar22 + 3;
      *puVar21 = puVar23[3];
      puVar20 = puVar23 + 3;
    } while (2 < uVar25);
    puVar20 = puVar21;
    if (uVar25 != 0) {
      puVar22[4] = puVar23[4];
      puVar20 = puVar22 + 4;
      if (1 < uVar25) {
        puVar22[5] = puVar23[5];
        puVar20 = puVar22 + 5;
      }
    }
    goto LAB_1436a36a7;
  }
  uVar13 = uVar10 - uVar13;
  if ((uVar4 < uVar13) && (puVar6[0x6f6] != 0)) {
    pcVar11 = "invalid distance too far back";
    pbVar17 = pbVar16;
LAB_1436a36ec:
    param_1[4] = (longlong)pcVar11;
    *puVar6 = 0x1d;
    pbVar16 = pbVar17;
LAB_1436a3713:
    lVar18 = (longlong)pbVar16 - (ulonglong)(uVar26 >> 3);
    iVar27 = uVar26 + (uVar26 >> 3) * -8;
    *param_1 = lVar18 + 1;
    param_1[2] = (longlong)(puVar20 + 1);
    *(int *)(param_1 + 1) = ((int)pbVar28 - (int)lVar18) + 5;
    *(int *)(param_1 + 3) = ((int)(puVar19 + ((int)lVar9 - 0x101)) - (int)puVar20) + 0x101;
    puVar6[0x10] = uVar15 & (1 << ((byte)iVar27 & 0x1f)) - 1U;
    puVar6[0x11] = iVar27;
    return;
  }
  lVar1 = lVar8 + -1;
  if (uVar2 == 0) {
    puVar23 = (undefined1 *)(lVar1 + (ulonglong)(iVar27 - uVar13));
    if (uVar13 < uVar25) {
      uVar25 = uVar25 - uVar13;
      do {
        puVar21 = puVar23 + 1;
        puVar23 = puVar23 + 1;
        puVar20 = puVar20 + 1;
        *puVar20 = *puVar21;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
LAB_1436a35c5:
      puVar23 = puVar20 + -(ulonglong)uVar10;
      puVar21 = puVar20;
    }
  }
  else if (uVar2 < uVar13) {
    uVar14 = uVar13 - uVar2;
    puVar23 = (undefined1 *)(lVar1 + (ulonglong)((uVar2 - uVar13) + iVar27));
    if (uVar14 < uVar25) {
      uVar25 = uVar25 - uVar14;
      do {
        puVar22 = puVar20 + (longlong)(puVar23 + (1 - (longlong)puVar21));
        puVar20 = puVar20 + 1;
        *puVar20 = *puVar22;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      puVar23 = (undefined1 *)(lVar8 + -1);
      puVar21 = puVar20;
      if (uVar2 < uVar25) {
        uVar25 = uVar25 - uVar2;
        uVar13 = uVar2;
        do {
          puVar21 = puVar23 + 1;
          puVar23 = puVar23 + 1;
          puVar20 = puVar20 + 1;
          *puVar20 = *puVar21;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        goto LAB_1436a35c5;
      }
    }
  }
  else {
    puVar23 = (undefined1 *)(lVar1 + (ulonglong)(uVar2 - uVar13));
    if (uVar13 < uVar25) {
      uVar25 = uVar25 - uVar13;
      do {
        puVar21 = puVar23 + 1;
        puVar23 = puVar23 + 1;
        puVar20 = puVar20 + 1;
        *puVar20 = *puVar21;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      goto LAB_1436a35c5;
    }
  }
  if (2 < uVar25) {
    uVar12 = (ulonglong)((uVar25 - 3) / 3 + 1);
    do {
      uVar25 = uVar25 - 3;
      puVar21[1] = puVar23[1];
      puVar20 = puVar23 + 2;
      puVar23 = puVar23 + 3;
      puVar21[2] = *puVar20;
      puVar21 = puVar21 + 3;
      *puVar21 = *puVar23;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  puVar20 = puVar21;
  if (uVar25 != 0) {
    puVar21[1] = puVar23[1];
    puVar20 = puVar21 + 1;
    if (1 < uVar25) {
      puVar21[2] = puVar23[2];
      puVar20 = puVar21 + 2;
    }
  }
LAB_1436a36a7:
  if ((pbVar28 <= pbVar16) || (puVar21 = puVar20, puVar19 + ((int)lVar9 - 0x101) <= puVar20))
  goto LAB_1436a3713;
  goto LAB_1436a3357;
}



// FUNCTION 1436a3780 Curl_urldecode body=319 status=ok
// SIG undefined Curl_urldecode(void)

undefined4
Curl_urldecode(undefined8 param_1,byte *param_2,ulonglong param_3,longlong *param_4,
              longlong *param_5,char param_6)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  longlong lVar4;
  longlong lVar5;
  byte local_res18;
  byte local_res19;
  undefined1 local_res1a;
  char *local_38 [2];
  
  if (param_3 == 0) {
    param_3 = 0xffffffffffffffff;
    do {
      param_3 = param_3 + 1;
    } while (param_2[param_3] != 0);
  }
  lVar4 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(param_3 + 1);
  lVar5 = 0;
  if (lVar4 != 0) {
    while( true ) {
      if (param_3 == 0) {
        *(undefined1 *)(lVar5 + lVar4) = 0;
        if (param_5 != (longlong *)0x0) {
          *param_5 = lVar5;
        }
        *param_4 = lVar4;
        return 0;
      }
      bVar1 = *param_2;
      if ((((bVar1 == 0x25) && (2 < param_3)) && (iVar2 = isxdigit((uint)param_2[1]), iVar2 != 0))
         && (iVar2 = isxdigit((uint)param_2[2]), iVar2 != 0)) {
        local_res18 = param_2[1];
        local_res19 = param_2[2];
        local_res1a = 0;
        uVar3 = strtoul((char *)&local_res18,local_38,0x10);
        bVar1 = curlx_ultouc(uVar3);
        param_2 = param_2 + 2;
        param_3 = param_3 - 2;
      }
      if ((param_6 != '\0') && (bVar1 < 0x20)) break;
      *(byte *)(lVar5 + lVar4) = bVar1;
      param_2 = param_2 + 1;
      lVar5 = lVar5 + 1;
      param_3 = param_3 - 1;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
    return 3;
  }
  return 0x1b;
}



// FUNCTION 1436a38c0 curl_easy_unescape body=275 status=ok
// SIG undefined curl_easy_unescape(void)

longlong curl_easy_unescape(undefined8 param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  char *local_res10;
  char local_res18;
  char local_res19;
  undefined1 local_res1a;
  
  uVar5 = (ulonglong)param_3;
  if (param_3 == 0) {
    uVar5 = 0xffffffffffffffff;
    do {
      uVar5 = uVar5 + 1;
    } while (param_2[uVar5] != '\0');
  }
  lVar6 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(uVar5 + 1);
  lVar7 = 0;
  if (lVar6 == 0) {
    return 0;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    cVar1 = *param_2;
    if ((((cVar1 == '%') && (2 < uVar5)) && (iVar2 = isxdigit((uint)(byte)param_2[1]), iVar2 != 0))
       && (iVar2 = isxdigit((uint)(byte)param_2[2]), iVar2 != 0)) {
      local_res18 = param_2[1];
      local_res19 = param_2[2];
      local_res1a = 0;
      uVar3 = strtoul(&local_res18,&local_res10,0x10);
      cVar1 = curlx_ultouc(uVar3);
      param_2 = param_2 + 2;
      uVar5 = uVar5 - 2;
    }
    *(char *)(lVar7 + lVar6) = cVar1;
    param_2 = param_2 + 1;
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + lVar6) = 0;
  if (param_4 != (undefined4 *)0x0) {
    uVar4 = curlx_sltosi(lVar7);
    *param_4 = uVar4;
  }
  return lVar6;
}



// FUNCTION 1436a39e0 _guard_xfg_dispatch_icall_nop body=7 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void * _Memory)

void __cdecl _guard_xfg_dispatch_icall_nop(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001436a39e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)();
  return;
}



// FUNCTION 1436a39f0 FUN_1436a39f0 body=10 status=ok
// SIG undefined FUN_1436a39f0(void)

undefined8 FUN_1436a39f0(longlong param_1)

{
  undefined8 in_RAX;
  
  if (param_1 == 0) {
    return in_RAX;
  }
  if (param_1 != 0) {
    FUN_1436a4500(param_1,0);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1436a4fd0(*(longlong *)(param_1 + 0x78),param_1);
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1436a4d00();
    }
    if (*(longlong *)(param_1 + 0x89b0) != 0) {
      Curl_llist_destroy(*(longlong *)(param_1 + 0x89b0),0);
      *(undefined8 *)(param_1 + 0x89b0) = 0;
    }
    *(undefined4 *)(param_1 + 0x8b38) = 0;
    if (*(char *)(param_1 + 0x89e2) != '\0') {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x89e8));
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x89d0));
    *(undefined8 *)(param_1 + 0x89d0) = 0;
    *(undefined8 *)(param_1 + 0x89d8) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x198));
    *(undefined8 *)(param_1 + 0x198) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x178));
    *(undefined8 *)(param_1 + 0x178) = 0;
    FUN_1436ad230(param_1);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8800));
    *(undefined8 *)(param_1 + 0x8800) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8838));
    *(undefined8 *)(param_1 + 0x8838) = 0;
    FUN_1436ad590(param_1);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x178));
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (*(char *)(param_1 + 0x688) != '\0') {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x680));
      *(undefined8 *)(param_1 + 0x680) = 0;
      *(undefined1 *)(param_1 + 0x688) = 0;
    }
    *(undefined8 *)(param_1 + 0x680) = 0;
    if (*(char *)(param_1 + 0x678) != '\0') {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x670));
      *(undefined8 *)(param_1 + 0x670) = 0;
      *(undefined1 *)(param_1 + 0x678) = 0;
    }
    *(undefined8 *)(param_1 + 0x670) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x7d8));
    *(undefined8 *)(param_1 + 0x7d8) = 0;
    FUN_1436aaf80(param_1,1);
    FUN_1436d58b0(param_1);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8aa0));
    *(undefined8 *)(param_1 + 0x8aa0) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8aa8));
    *(undefined8 *)(param_1 + 0x8aa8) = 0;
    FUN_140447710(*(undefined8 *)(param_1 + 0x8978));
    if (*(longlong *)(param_1 + 0x88) != 0) {
      Curl_share_lock(param_1,1,2);
      *(int *)(*(longlong *)(param_1 + 0x88) + 4) = *(int *)(*(longlong *)(param_1 + 0x88) + 4) + -1
      ;
      Curl_share_unlock(param_1,1);
    }
    if (*(char *)(param_1 + 0x614) != '\0') {
      Curl_wildcard_dtor(param_1 + 0x8a40);
    }
    FUN_1436ae920(param_1);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  }
  return 0;
}



// FUNCTION 1436a3a00 curl_easy_getinfo body=36 status=ok
// SIG undefined curl_easy_getinfo(void)

void curl_easy_getinfo(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  Curl_getinfo(param_1,param_2,param_3);
  return;
}



// FUNCTION 1436a3a30 curl_easy_init body=178 status=ok
// SIG undefined curl_easy_init(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 curl_easy_init(void)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (DAT_146b7b798 != 0) {
LAB_1436a3abc:
    iVar1 = FUN_1436aede0(local_res8);
    if (iVar1 != 0) {
      local_res8[0] = 0;
    }
    return local_res8[0];
  }
  PTR__guard_xfg_dispatch_icall_nop_1467dcc58 = malloc_exref;
  PTR__guard_xfg_dispatch_icall_nop_1467dcc60 = free_exref;
  PTR_realloc_1467dcc68 = realloc_exref;
  PTR__strdup_1467dcc70 = _strdup_exref;
  PTR_calloc_1467dcc78 = calloc_exref;
  DAT_146b7b798 = 1;
  iVar1 = Curl_ssl_init();
  if (iVar1 != 0) {
    iVar1 = FUN_1436a3f00();
    if (iVar1 == 0) {
      iVar1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
              ::GetBoundProgramCounterForTimerManager();
      if (iVar1 == 0) {
        Curl_ipv6works();
        _DAT_146b7b79c = 3;
        FUN_1436a42f0();
        goto LAB_1436a3abc;
      }
    }
  }
  return 0;
}



// FUNCTION 1436a3af0 FUN_1436a3af0 body=7 status=ok
// SIG undefined FUN_1436a3af0(void)

void FUN_1436a3af0(undefined8 param_1)

{
  FUN_1436a3c00(param_1,0);
  return;
}



// FUNCTION 1436a3b00 curl_easy_setopt body=46 status=ok
// SIG undefined curl_easy_setopt(void)

undefined8
curl_easy_setopt(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_1436af080(param_1,param_2,&local_res18);
  return uVar1;
}



// FUNCTION 1436a3b30 FUN_1436a3b30 body=84 status=ok
// SIG undefined FUN_1436a3b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a3b30(void)

{
  if ((DAT_146b7b798 != 0) && (DAT_146b7b798 = DAT_146b7b798 + -1, DAT_146b7b798 == 0)) {
    Curl_global_host_cache_dtor();
    if ((_DAT_146b7b79c & 1) != 0) {
      Curl_ssl_cleanup();
    }
    FUN_140447710();
    if ((_DAT_146b7b79c & 2) != 0) {
      Ordinal_116();
      Curl_sspi_global_cleanup();
    }
    _DAT_146b7b79c = 0;
  }
  return;
}



// FUNCTION 1436a3b90 curl_global_init_mem body=110 status=ok
// SIG undefined curl_global_init_mem(void)

undefined8
curl_global_init_mem
          (undefined4 param_1,undefined *param_2,undefined *param_3,undefined *param_4,
          undefined *param_5,undefined *param_6)

{
  undefined8 uVar1;
  
  if ((((param_2 != (undefined *)0x0) && (param_3 != (undefined *)0x0)) &&
      (param_4 != (undefined *)0x0)) &&
     ((param_5 != (undefined *)0x0 && (param_6 != (undefined *)0x0)))) {
    if (DAT_146b7b798 != 0) {
      DAT_146b7b798 = DAT_146b7b798 + 1;
      return 0;
    }
    PTR_calloc_1467dcc78 = param_6;
    PTR__strdup_1467dcc70 = param_5;
    PTR__guard_xfg_dispatch_icall_nop_1467dcc58 = param_2;
    PTR__guard_xfg_dispatch_icall_nop_1467dcc60 = param_3;
    PTR_realloc_1467dcc68 = param_4;
    uVar1 = global_init(param_1,0);
    return uVar1;
  }
  return 2;
}



// FUNCTION 1436a3c00 FUN_1436a3c00 body=260 status=ok
// SIG undefined FUN_1436a3c00(void)

undefined4 FUN_1436a3c00(longlong param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x80);
    if (lVar3 == 0) {
      lVar3 = FUN_1436a4840(1,3);
      if (lVar3 == 0) {
        return 0x1b;
      }
      *(longlong *)(param_1 + 0x80) = lVar3;
    }
    curl_multi_setopt(lVar3,6,*(undefined8 *)(param_1 + 0x650));
    iVar1 = FUN_1436a4ba0(lVar3,param_1);
    if (iVar1 == 0) {
      *(longlong *)(param_1 + 0x78) = lVar3;
      if (param_2 == '\0') {
        uVar2 = FUN_1436a3d10(lVar3);
      }
      else {
        uVar2 = 4;
      }
      FUN_1436a4fd0(lVar3,param_1);
    }
    else {
      FUN_1436a4d00(lVar3);
      uVar2 = 2;
      if (iVar1 == 3) {
        uVar2 = 0x1b;
      }
    }
    return uVar2;
  }
  FUN_1436b5820(param_1,"easy handle already used in multi handle");
  return 2;
}



// FUNCTION 1436a3d10 FUN_1436a3d10 body=276 status=ok
// SIG undefined FUN_1436a3d10(void)

undefined4 FUN_1436a3d10(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int local_res18 [4];
  
  iVar1 = 0;
  iVar6 = 0;
  do {
    do {
      if (iVar1 != 0) {
        uVar2 = 0x2b;
        if (iVar1 == 3) {
          uVar2 = 0x1b;
        }
        return uVar2;
      }
      uVar3 = curlx_tvnow();
      iVar1 = FUN_1436a5390(param_1,0,0,1000,local_res18);
    } while (iVar1 != 0);
    if (local_res18[0] == 0) {
      uVar4 = curlx_tvnow();
      iVar1 = curlx_tvdiff(uVar4,uVar3);
      if (10 < iVar1) goto LAB_1436a3db4;
      iVar1 = iVar6 + 1;
      if (2 < iVar1) {
        if (iVar1 < 10) {
          Curl_wait_ms(1 << ((byte)iVar6 & 0x1f));
        }
        else {
          Curl_wait_ms(1000);
        }
      }
    }
    else {
LAB_1436a3db4:
      iVar1 = 0;
    }
    iVar6 = iVar1;
    iVar1 = FUN_1436a4ef0(param_1);
    if ((iVar1 == 0) && (lVar5 = curl_multi_info_read(param_1), lVar5 != 0)) {
      return *(undefined4 *)(lVar5 + 0x10);
    }
  } while( true );
}



// FUNCTION 1436a3e30 global_init body=203 status=ok
// SIG undefined global_init(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 global_init(uint param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_146b7b798 + 1;
  bVar2 = DAT_146b7b798 == 0;
  DAT_146b7b798 = iVar1;
  if (bVar2) {
    if (param_2 != '\0') {
      PTR__guard_xfg_dispatch_icall_nop_1467dcc58 = malloc_exref;
      PTR__guard_xfg_dispatch_icall_nop_1467dcc60 = free_exref;
      PTR_realloc_1467dcc68 = realloc_exref;
      PTR__strdup_1467dcc70 = _strdup_exref;
      PTR_calloc_1467dcc78 = calloc_exref;
    }
    if (((param_1 & 1) != 0) && (iVar1 = Curl_ssl_init(), iVar1 == 0)) {
      return 2;
    }
    if (((param_1 & 2) != 0) && (iVar1 = FUN_1436a3f00(), iVar1 != 0)) {
      return 2;
    }
    iVar1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
            ::GetBoundProgramCounterForTimerManager();
    if (iVar1 != 0) {
      return 2;
    }
    Curl_ipv6works();
    if ((param_1 & 4) != 0) {
      DAT_146b7b924 = 1;
    }
    _DAT_146b7b79c = param_1;
    FUN_1436a42f0();
  }
  return 0;
}


