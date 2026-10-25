// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c66530 tt_cmap4_char_next body=123 status=ok
// SIG undefined tt_cmap4_char_next(void)

ulonglong tt_cmap4_char_next(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (0xfffe < *param_2) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    uVar3 = FUN_143c6a890(param_1,param_2,1);
    return uVar3;
  }
  if (*param_2 == *(uint *)(param_1 + 0x28)) {
    tt_cmap4_next();
    uVar1 = *(uint *)(param_1 + 0x2c);
    uVar2 = 0;
    if (uVar1 != 0) {
      *param_2 = *(uint *)(param_1 + 0x28);
      return (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = FUN_143c6a3c0(param_1,param_2,1);
  }
  return (ulonglong)uVar2;
}



// FUNCTION 143c665e0 FUN_143c665e0 body=229 status=ok
// SIG undefined FUN_143c665e0(void)

undefined8 FUN_143c665e0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 10U) {
    FUN_143c27ac0(param_2,8);
  }
  puVar3 = (undefined1 *)(param_1 + 9);
  uVar5 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  uVar2 = CONCAT11(*(undefined1 *)(param_1 + 8),*puVar3);
  uVar4 = (uint)uVar2;
  if ((*(ulonglong *)(param_2 + 0x108) < (ulonglong)uVar5 + param_1) || (uVar5 < uVar4 * 2 + 10)) {
    FUN_143c27ac0(param_2,8);
  }
  if ((0 < *(int *)(param_2 + 0x110)) && (uVar2 != 0)) {
    do {
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 2;
      if (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(*puVar1,*puVar3)) {
        FUN_143c27ac0(param_2,0x10);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 143c666d0 FUN_143c666d0 body=26 status=ok
// SIG undefined FUN_143c666d0(void)

void FUN_143c666d0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_143c69c70(param_1,local_res10,0);
  return;
}



// FUNCTION 143c666f0 FUN_143c666f0 body=121 status=ok
// SIG undefined FUN_143c666f0(void)

int FUN_143c666f0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) == -1) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x28) == '\0') || (*(int *)(param_1 + 0x2c) != *param_2)) {
    iVar2 = FUN_143c69c70(param_1,param_2,1);
  }
  else {
    FUN_143c69de0();
    if (*(char *)(param_1 + 0x28) == '\0') {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = 0;
    if (iVar1 != 0) {
      *param_2 = *(int *)(param_1 + 0x2c);
      return iVar1;
    }
  }
  return iVar2;
}



// FUNCTION 143c668b0 tt_cmap14_done body=53 status=ok
// SIG undefined tt_cmap14_done(void)

void tt_cmap14_done(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    ft_mem_free();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 143c66980 FUN_143c66980 body=181 status=ok
// SIG undefined FUN_143c66980(void)

undefined8 FUN_143c66980(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_143c27ac0(param_2,8);
  }
  uVar4 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  if ((*(ulonglong *)(param_2 + 0x108) < (ulonglong)uVar4 + param_1) || (uVar4 < 0x106)) {
    FUN_143c27ac0(param_2,8);
  }
  if (0 < *(int *)(param_2 + 0x110)) {
    pbVar3 = (byte *)(param_1 + 6);
    lVar2 = 0x100;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      if (*(uint *)(param_2 + 0x120) <= (uint)bVar1) {
        FUN_143c27ac0(param_2,0x10);
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 143c66a40 FUN_143c66a40 body=995 status=ok
// SIG undefined FUN_143c66a40(void)

undefined8 FUN_143c66a40(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong local_58;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 10U) {
    FUN_143c27ac0(param_2,8);
  }
  puVar14 = (undefined1 *)(param_1 + 7);
  puVar13 = (undefined1 *)(param_1 + 8);
  puVar12 = (undefined1 *)(param_1 + 9);
  puVar17 = (undefined1 *)(param_1 + 6);
  uVar11 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)),
                             *(undefined1 *)(param_1 + 4)),*(undefined1 *)(param_1 + 5));
  uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 6),*puVar14),*puVar13),*puVar12);
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar11) || (uVar11 < 10)) ||
     ((uVar11 - 10) / 0xb < uVar6)) {
    FUN_143c27ac0(param_2,8);
  }
  uVar16 = 1;
  if (uVar6 != 0) {
    local_58 = (ulonglong)uVar6;
    do {
      puVar9 = puVar17 + 7;
      puVar17 = puVar17 + 0xb;
      uVar8 = (uint)CONCAT21(CONCAT11(puVar14[3],puVar13[3]),puVar12[3]);
      puVar10 = puVar14 + 7;
      puVar14 = puVar14 + 0xb;
      puVar1 = puVar13 + 7;
      puVar13 = puVar13 + 0xb;
      puVar2 = puVar12 + 7;
      puVar12 = puVar12 + 0xb;
      uVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar9,*puVar10),*puVar1),*puVar2);
      uVar15 = CONCAT31(CONCAT21(CONCAT11(*puVar17,*puVar14),*puVar13),*puVar12);
      if ((uVar11 <= uVar6) || (uVar11 <= uVar15)) {
        FUN_143c27ac0(param_2,8);
      }
      if (uVar8 < uVar16) {
        FUN_143c27ac0(param_2,8);
      }
      uVar16 = uVar8 + 1;
      if (uVar6 != 0) {
        uVar8 = 0;
        puVar9 = (undefined1 *)((ulonglong)uVar6 + 4 + param_1);
        uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar9[-4],puVar9[-3]),puVar9[-2]),puVar9[-1]);
        if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)puVar9) >> 2 < uVar6) {
          FUN_143c27ac0(param_2,8);
        }
        if (uVar6 != 0) {
          uVar18 = (ulonglong)uVar6;
          do {
            uVar6 = (uint)CONCAT21(CONCAT11(*puVar9,puVar9[1]),puVar9[2]);
            uVar7 = (byte)puVar9[3] + uVar6;
            if (0x10ffff < uVar7) {
              FUN_143c27ac0(param_2,8);
            }
            if (uVar6 < uVar8) {
              FUN_143c27ac0(param_2,8);
            }
            uVar8 = uVar7 + 1;
            uVar18 = uVar18 - 1;
            puVar9 = puVar9 + 4;
          } while (uVar18 != 0);
        }
      }
      if (uVar15 != 0) {
        uVar6 = 0;
        lVar5 = (ulonglong)uVar15 + 4 + param_1;
        lVar19 = lVar5 + -3;
        puVar9 = (undefined1 *)(lVar5 + -2);
        uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + -4),*(undefined1 *)(lVar5 + -3)),
                                  *puVar9),*(undefined1 *)(lVar5 + -1));
        if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)lVar5) >> 2 < uVar8) {
          FUN_143c27ac0(param_2,8);
        }
        if (uVar8 != 0) {
          uVar18 = (ulonglong)uVar8;
          puVar10 = (undefined1 *)(lVar5 + -1);
          do {
            puVar1 = puVar9 + 3;
            puVar9 = puVar9 + 5;
            puVar2 = (undefined1 *)(lVar19 + 3);
            lVar19 = lVar19 + 5;
            uVar8 = (uint)CONCAT21(CONCAT11(*puVar2,*puVar1),puVar10[3]);
            uVar3 = *puVar9;
            uVar4 = puVar10[5];
            if (0x10ffff < uVar8) {
              FUN_143c27ac0(param_2,8);
            }
            if (uVar8 < uVar6) {
              FUN_143c27ac0(param_2,8);
            }
            uVar6 = uVar8 + 1;
            if ((0 < *(int *)(param_2 + 0x110)) &&
               (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(uVar3,uVar4))) {
              FUN_143c27ac0(param_2,0x10);
            }
            uVar18 = uVar18 - 1;
            puVar10 = puVar10 + 5;
          } while (uVar18 != 0);
        }
      }
      local_58 = local_58 - 1;
    } while (local_58 != 0);
  }
  return 0;
}



// FUNCTION 143c66e30 FUN_143c66e30 body=805 status=ok
// SIG undefined FUN_143c66e30(void)

undefined8 FUN_143c66e30(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 0x2010U) {
    FUN_143c27ac0(param_2,8);
  }
  uVar11 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                             *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  if (((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar11) || (uVar11 < 0x2010))
  {
    FUN_143c27ac0(param_2,8);
  }
  puVar18 = (undefined1 *)(param_1 + 0x200c);
  puVar17 = (undefined1 *)(param_1 + 0x200d);
  puVar16 = (undefined1 *)(param_1 + 0x200e);
  puVar15 = (undefined1 *)(param_1 + 0x200f);
  uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar18,*(undefined1 *)(param_1 + 0x200d)),*puVar16),*puVar15
                   );
  if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - ((int)param_1 + 0x2010)) / 0xc < uVar11) {
    FUN_143c27ac0(param_2,8);
  }
  uVar13 = 0;
  uVar19 = 0;
  if (uVar11 != 0) {
    do {
      uVar3 = puVar17[4];
      uVar4 = puVar18[4];
      uVar5 = puVar18[8];
      puVar18 = puVar18 + 0xc;
      uVar6 = *puVar18;
      uVar12 = CONCAT31(CONCAT21(CONCAT11(uVar4,uVar3),puVar16[4]),puVar15[4]);
      uVar7 = puVar17[8];
      puVar17 = puVar17 + 0xc;
      puVar1 = puVar16 + 8;
      puVar16 = puVar16 + 0xc;
      puVar2 = puVar15 + 8;
      puVar15 = puVar15 + 0xc;
      uVar20 = CONCAT31(CONCAT21(CONCAT11(uVar5,uVar7),*puVar1),*puVar2);
      uVar8 = *puVar17;
      uVar9 = *puVar16;
      uVar10 = *puVar15;
      if (uVar20 < uVar12) {
        FUN_143c27ac0(param_2,8);
      }
      if ((uVar19 != 0) && (uVar12 <= uVar13)) {
        FUN_143c27ac0(param_2,8);
      }
      if (0 < *(int *)(param_2 + 0x110)) {
        uVar13 = uVar20 - uVar12;
        if ((*(uint *)(param_2 + 0x120) < uVar13) ||
           (*(uint *)(param_2 + 0x120) - uVar13 <=
            CONCAT31(CONCAT21(CONCAT11(uVar6,uVar8),uVar9),uVar10))) {
          FUN_143c27ac0(param_2,0x10);
        }
        iVar14 = uVar13 + 1;
        if (CONCAT11(uVar4,uVar3) == 0) {
          if (CONCAT11(uVar5,uVar7) != 0) {
            FUN_143c27ac0(param_2,8);
          }
          for (; iVar14 != 0; iVar14 = iVar14 + -1) {
            if ((*(byte *)((ulonglong)((uVar12 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar12 & 0xffff) & 7))) != 0) {
              FUN_143c27ac0(param_2,8);
            }
            uVar12 = uVar12 + 1;
          }
        }
        else {
          for (; iVar14 != 0; iVar14 = iVar14 + -1) {
            if ((*(byte *)((ulonglong)(uVar12 >> 0x13) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar12 >> 0x10) & 7))) == 0) {
              FUN_143c27ac0(param_2,8);
            }
            if ((*(byte *)((ulonglong)((uVar12 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar12 & 0xffff) & 7))) == 0) {
              FUN_143c27ac0(param_2,8);
            }
            uVar12 = uVar12 + 1;
          }
        }
      }
      uVar19 = uVar19 + 1;
      uVar13 = uVar20;
    } while (uVar19 < uVar11);
  }
  return 0;
}



// FUNCTION 143c67200 FUN_143c67200 body=544 status=ok
// SIG undefined FUN_143c67200(void)

undefined8 FUN_143c67200(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_143c27ac0(param_2,8);
  }
  uVar7 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  puVar13 = (undefined1 *)((ulonglong)uVar7 + param_1);
  if ((*(undefined1 **)(param_2 + 0x108) < puVar13) || (uVar7 < 0x206)) {
    FUN_143c27ac0(param_2,8);
  }
  lVar14 = 0x100;
  uVar7 = 0;
  puVar12 = (undefined1 *)(param_1 + 6);
  do {
    uVar2 = *puVar12;
    puVar8 = puVar12 + 2;
    bVar3 = puVar12[1];
    if ((1 < *(int *)(param_2 + 0x110)) && ((bVar3 & 7) != 0)) {
      FUN_143c27ac0(param_2,8);
    }
    uVar11 = (uint)(ushort)(CONCAT11(uVar2,bVar3) >> 3);
    if (uVar7 < uVar11) {
      uVar7 = uVar11;
    }
    lVar14 = lVar14 + -1;
    puVar12 = puVar8;
  } while (lVar14 != 0);
  if (*(undefined1 **)(param_2 + 0x108) < puVar8 + (uVar7 * 8 + 8)) {
    FUN_143c27ac0(param_2,8);
  }
  uVar15 = (ulonglong)(uVar7 + 1);
  do {
    uVar11 = (uint)CONCAT11(puVar12[2],puVar12[3]);
    uVar2 = puVar12[4];
    uVar4 = puVar12[5];
    puVar9 = puVar12 + 8;
    uVar5 = puVar12[6];
    uVar6 = puVar12[7];
    if (CONCAT11(puVar12[2],puVar12[3]) != 0) {
      if ((1 < *(int *)(param_2 + 0x110)) &&
         ((0xff < CONCAT11(*puVar12,puVar12[1]) || (0x100 < uVar11 + CONCAT11(*puVar12,puVar12[1])))
         )) {
        FUN_143c27ac0(param_2,8);
      }
      if (CONCAT11(uVar5,uVar6) != 0) {
        if ((puVar9 + ((ulonglong)CONCAT11(uVar5,uVar6) - 2) < puVar8 + (uVar7 * 8 + 8)) ||
           (puVar13 < puVar9 + ((ulonglong)CONCAT11(uVar5,uVar6) - 2) + uVar11 * 2)) {
          FUN_143c27ac0(param_2,9);
        }
        if (0 < *(int *)(param_2 + 0x110)) {
          puVar12 = puVar9 + uVar11 * 2;
          while (puVar9 < puVar12) {
            uVar5 = *puVar9;
            puVar10 = puVar9 + 2;
            puVar1 = puVar9 + 1;
            puVar9 = puVar10;
            if ((CONCAT11(uVar5,*puVar1) != 0) &&
               (*(uint *)(param_2 + 0x120) <=
                (uint)(ushort)(CONCAT11(uVar5,*puVar1) + CONCAT11(uVar2,uVar4)))) {
              FUN_143c27ac0(param_2,0x10);
            }
          }
        }
      }
    }
    uVar15 = uVar15 - 1;
    puVar12 = puVar9;
  } while (uVar15 != 0);
  return 0;
}



// FUNCTION 143c67420 FUN_143c67420 body=274 status=ok
// SIG undefined FUN_143c67420(void)

int FUN_143c67420(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined1 *)(lVar4 + 0x200c);
  iVar8 = CONCAT31(CONCAT21(CONCAT11(*puVar3,*(undefined1 *)(lVar4 + 0x200d)),
                            *(undefined1 *)(lVar4 + 0x200e)),*(undefined1 *)(lVar4 + 0x200f));
  puVar5 = (undefined1 *)(lVar4 + 0x200d);
  puVar6 = (undefined1 *)(lVar4 + 0x200e);
  puVar7 = (undefined1 *)(lVar4 + 0x200f);
  while( true ) {
    if (iVar8 == 0) {
      return 0;
    }
    puVar1 = puVar3 + 4;
    puVar2 = puVar3 + 8;
    puVar3 = puVar3 + 0xc;
    uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar5[4]),puVar6[4]),puVar7[4]);
    if (param_2 < uVar9) break;
    if (param_2 <= CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar5[8]),puVar6[8]),puVar7[8])) {
      return param_2 + (CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar5[0xc]),puVar6[0xc]),puVar7[0xc]) -
                       uVar9);
    }
    iVar8 = iVar8 + -1;
    puVar5 = puVar5 + 0xc;
    puVar6 = puVar6 + 0xc;
    puVar7 = puVar7 + 0xc;
  }
  return 0;
}



// FUNCTION 143c67560 FUN_143c67560 body=317 status=ok
// SIG undefined FUN_143c67560(void)

void FUN_143c67560(longlong param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar10 = *param_2 + 1;
  iVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x200c),*(undefined1 *)(lVar3 + 0x200d)
                                    ),*(undefined1 *)(lVar3 + 0x200e)),
                   *(undefined1 *)(lVar3 + 0x200f));
  if (iVar8 == 0) {
    *param_2 = 0;
    return;
  }
  puVar5 = (undefined1 *)(lVar3 + 0x200c);
  puVar4 = (undefined1 *)(lVar3 + 0x200f);
  puVar6 = (undefined1 *)(lVar3 + 0x200d);
  puVar7 = (undefined1 *)(lVar3 + 0x200e);
  while( true ) {
    puVar1 = puVar5 + 4;
    puVar2 = puVar5 + 8;
    puVar5 = puVar5 + 0xc;
    uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar6[4]),puVar7[4]),puVar4[4]);
    if (uVar10 < uVar9) {
      uVar10 = uVar9;
    }
    if ((uVar10 <= CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar6[8]),puVar7[8]),puVar4[8])) &&
       ((CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar6[0xc]),puVar7[0xc]),puVar4[0xc]) - uVar9) + uVar10
        != 0)) break;
    iVar8 = iVar8 + -1;
    puVar4 = puVar4 + 0xc;
    puVar6 = puVar6 + 0xc;
    puVar7 = puVar7 + 0xc;
    if (iVar8 == 0) {
      *param_2 = 0;
      return;
    }
  }
  *param_2 = uVar10;
  return;
}



// FUNCTION 143c676a0 FUN_143c676a0 body=240 status=ok
// SIG undefined FUN_143c676a0(void)

undefined8 FUN_143c676a0(undefined8 param_1,undefined4 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(param_2 + 0xb0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)
             FT_Get_Module_Interface
                       (*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),&DAT_145d22d6c);
    if (puVar2 == (undefined8 *)0x0) {
      return 0xb;
    }
    *(undefined8 **)(param_2 + 0xb0) = puVar2;
    *(undefined8 *)(param_2 + 0xa4) = *puVar2;
  }
  uVar3 = ft_module_get_service(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps");
  *(undefined8 *)(param_2 + 0xb2) = uVar3;
  uVar3 = FUN_143c697a0(param_1,param_2);
  if ((int)uVar3 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    if (param_3 < 0) {
      param_3 = 0;
    }
    if (param_3 < (int)param_2[0x38]) {
      uVar3 = FUN_143c251d0(uVar1,*(undefined4 *)
                                   (*(longlong *)(param_2 + 0x3a) + (longlong)param_3 * 4));
      if (((int)uVar3 == 0) && (uVar3 = (*(code *)puVar2[0x16])(param_2,uVar1), (int)uVar3 == 0)) {
        *param_2 = param_2[0x38];
        uVar3 = 0;
        param_2[1] = param_3;
      }
    }
    else {
      uVar3 = 6;
    }
  }
  return uVar3;
}



// FUNCTION 143c67790 FUN_143c67790 body=2240 status=ok
// SIG undefined FUN_143c67790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c67790(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,
                       int *param_5)

{
  short sVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  short sVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  char cVar19;
  longlong lVar20;
  ushort uVar21;
  bool bVar22;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint *local_80;
  uint local_78;
  char local_74;
  longlong local_70;
  ushort local_68;
  ushort local_66;
  int local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_70 = *(longlong *)(param_2 + 0x2c0);
  bVar3 = false;
  bVar4 = false;
  if (0 < (int)param_4) {
    uVar15 = (ulonglong)param_4;
    bVar4 = false;
    do {
      if (*param_5 == 0x69677066) {
        bVar3 = true;
      }
      else if (*param_5 == 0x69677073) {
        bVar4 = true;
      }
      param_5 = param_5 + 4;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x48) == 0) {
    piVar9 = *(int **)(param_2 + 0xf8);
    for (piVar12 = piVar9; piVar12 < piVar9 + (ulonglong)*(ushort *)(param_2 + 0xf4) * 4;
        piVar12 = piVar12 + 4) {
      if ((*piVar12 == 0x676c7966) && (piVar12[3] != 0)) goto LAB_143c6787c;
    }
    piVar12 = piVar9 + (ulonglong)*(ushort *)(param_2 + 0xf4) * 4;
    for (; piVar9 < piVar12; piVar9 = piVar9 + 4) {
      if ((*piVar9 == 0x43464620) && (piVar9[3] != 0)) goto LAB_143c6787c;
    }
    cVar19 = '\0';
  }
  else {
LAB_143c6787c:
    cVar19 = '\x01';
  }
  bVar22 = false;
  local_74 = cVar19;
  iVar6 = (**(code **)(param_2 + 0x290))(param_2,0x73626978,param_1,0);
  if (iVar6 != 0) {
    if (cVar19 == '\0') goto LAB_143c678b0;
LAB_143c678db:
    lVar20 = local_70;
    uVar7 = (**(code **)(local_70 + 0x30))(param_2,param_1);
    if (uVar7 != 0) {
      return (ulonglong)uVar7;
    }
  }
  else {
    local_74 = '\0';
LAB_143c678b0:
    if (*(code **)(local_70 + 0x88) == (code *)0x0) goto LAB_143c678db;
    local_78 = (**(code **)(local_70 + 0x88))(param_2,param_1);
    bVar22 = local_78 == 0;
    if ((!bVar22) || (lVar20 = local_70, iVar6 == 0)) goto LAB_143c678db;
  }
  local_78 = 0;
  if (*(short *)(param_2 + 0x112) == 0) {
    return 8;
  }
  local_78 = (**(code **)(lVar20 + 0x48))(param_2,param_1);
  local_78 = (**(code **)(lVar20 + 0x40))(param_2,param_1);
  local_78 = (**(code **)(lVar20 + 0x60))(param_2,param_1);
  uVar7 = (**(code **)(lVar20 + 0x58))(param_2,param_1);
  lVar20 = local_70;
  local_78 = uVar7;
  if (!bVar22) {
    local_78 = (**(code **)(local_70 + 0x38))(param_2,param_1,0);
    uVar15 = (ulonglong)local_78;
    if (local_78 == 0) {
      local_78 = (**(code **)(lVar20 + 0xb8))(param_2,param_1);
      uVar15 = (ulonglong)local_78;
      if ((char)local_78 == -0x72) {
        uVar15 = 0x93;
LAB_143c6798d:
        plVar2 = *(longlong **)(*(longlong *)(param_2 + 0xd0) + 0x48);
        if (plVar2 == (longlong *)0x0) {
          return uVar15;
        }
        if (*(longlong *)(*plVar2 + 0x10) == 0) {
          return uVar15;
        }
        *(undefined2 *)(param_2 + 0x15a) = 0;
        local_78 = 0;
      }
      else {
LAB_143c679e2:
        if ((int)uVar15 != 0) {
          return uVar15;
        }
      }
    }
    else {
      if ((char)local_78 != -0x72) goto LAB_143c679e2;
      if (*(int *)(param_2 + 0xf0) != 0x74727565) {
        uVar15 = 0x8f;
        goto LAB_143c6798d;
      }
      local_74 = '\0';
      local_78 = 0;
    }
    local_78 = (**(code **)(lVar20 + 0x38))(param_2,param_1,CONCAT71((int7)(uVar15 >> 8),1));
    if ((local_78 == 0) &&
       (local_78 = (**(code **)(lVar20 + 0xb8))(param_2,param_1,1), local_78 == 0)) {
      *(undefined1 *)(param_2 + 400) = 1;
    }
    else if ((char)local_78 != -0x72) {
      return (ulonglong)local_78;
    }
    local_78 = (**(code **)(lVar20 + 0x50))(param_2,param_1);
    if (local_78 != 0) {
      *(undefined2 *)(param_2 + 0x1f8) = 0xffff;
    }
  }
  if (*(code **)(lVar20 + 0xc0) != (code *)0x0) {
    local_78 = (**(code **)(lVar20 + 0xc0))(param_2,param_1);
    if (local_78 != 0) {
      if ((char)local_78 != -0x72) {
        return (ulonglong)local_78;
      }
      local_78 = 0;
    }
  }
  local_78 = (**(code **)(lVar20 + 0x80))(param_2,param_1);
  if (local_78 != 0) {
    if ((char)local_78 != -0x72) {
      return (ulonglong)local_78;
    }
    *(undefined4 *)(param_2 + 0x2e0) = 0;
  }
  local_78 = (**(code **)(lVar20 + 0x78))(param_2,param_1);
  local_78 = (**(code **)(lVar20 + 0x70))(param_2,param_1);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(uint *)(param_2 + 0x10) = (uint)*(ushort *)(param_2 + 0x174);
  *(undefined8 *)(param_2 + 0x20) = 0;
  if ((*(short *)(param_2 + 0x1f8) == -1) || ((*(ushort *)(param_2 + 0x238) & 0x100) == 0)) {
    local_78 = FUN_143c6afa0(param_2,0x15,param_2 + 0x18);
    if (local_78 != 0) {
      return (ulonglong)local_78;
    }
    uVar8 = 0;
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (!bVar3) {
        uVar8 = FUN_143c6afa0(param_2,0x10,param_2 + 0x18);
        if (uVar8 != 0) {
          return (ulonglong)uVar8;
        }
      }
      local_78 = uVar8;
      uVar8 = local_78;
      if (*(longlong *)(param_2 + 0x18) == 0) {
        uVar8 = FUN_143c6afa0(param_2,1,param_2 + 0x18);
        if (uVar8 != 0) {
          return (ulonglong)uVar8;
        }
        uVar8 = 0;
      }
    }
    local_78 = uVar8;
    uVar8 = FUN_143c6afa0(param_2,0x16,param_2 + 0x20);
    if (uVar8 != 0) {
      return (ulonglong)uVar8;
    }
    local_78 = 0;
    if (*(longlong *)(param_2 + 0x20) != 0) goto LAB_143c67c23;
  }
  else {
    if (!bVar3) {
      local_78 = FUN_143c6afa0(param_2,0x10,param_2 + 0x18);
      if (local_78 != 0) {
        return (ulonglong)local_78;
      }
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      uVar8 = FUN_143c6afa0(param_2,1,param_2 + 0x18);
      if (uVar8 != 0) {
        return (ulonglong)uVar8;
      }
      local_78 = 0;
    }
  }
  if (!bVar4) {
    local_78 = FUN_143c6afa0(param_2,0x11,param_2 + 0x20);
    if (local_78 != 0) {
      return (ulonglong)local_78;
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    local_78 = FUN_143c6afa0(param_2,2,param_2 + 0x20);
    if (local_78 != 0) {
      return (ulonglong)local_78;
    }
  }
LAB_143c67c23:
  uVar8 = *(uint *)(param_2 + 8);
  if (*(int *)(param_2 + 0x3fc) - 2U < 2) {
    uVar8 = uVar8 | 0x4000;
  }
  if (local_74 == '\x01') {
    uVar8 = uVar8 | 1;
  }
  uVar14 = uVar8 | 0x18;
  if ((uVar7 == 0) && (*(int *)(param_2 + 0x260) != 0x30000)) {
    uVar14 = uVar8 | 0x218;
  }
  if (*(int *)(param_2 + 0x26c) != 0) {
    uVar14 = uVar14 | 4;
  }
  if (*(char *)(param_2 + 400) != '\0') {
    uVar14 = uVar14 | 0x20;
  }
  if (*(int *)(param_2 + 0x418) != 0) {
    uVar14 = uVar14 | 0x40;
  }
  piVar9 = *(int **)(param_2 + 0xf8);
  uVar15 = (ulonglong)*(ushort *)(param_2 + 0xf4);
  for (piVar12 = piVar9; piVar12 < piVar9 + uVar15 * 4; piVar12 = piVar12 + 4) {
    if ((*piVar12 == 0x676c7966) && (piVar12[3] != 0)) {
      piVar12 = piVar9;
      goto joined_r0x000143c67cc8;
    }
  }
LAB_143c67d0f:
  *(uint *)(param_2 + 8) = uVar14;
  if ((local_74 == '\x01') && (*(short *)(param_2 + 0x1f8) != -1)) {
    uVar21 = *(ushort *)(param_2 + 0x238);
    uVar7 = 0;
    if ((uVar21 & 0x200) == 0) {
      if ((uVar21 & 1) != 0) {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 1;
    }
    if ((uVar21 & 0x20) != 0) {
      uVar7 = uVar7 | 2;
    }
  }
  else {
    uVar7 = 0;
    if ((*(ushort *)(param_2 + 300) & 1) != 0) {
      uVar7 = 2;
    }
    if ((*(ushort *)(param_2 + 300) & 2) != 0) {
      uVar7 = uVar7 | 1;
    }
  }
  uVar16 = 0;
  *(uint *)(param_2 + 0xc) = uVar7;
  FUN_143c6acc0(param_2);
  uVar15 = uVar16;
  uVar18 = uVar16;
  if (0 < *(int *)(param_2 + 0x38)) {
    do {
      puVar13 = &DAT_145d36470;
      lVar20 = *(longlong *)(uVar18 + *(longlong *)(param_2 + 0x40));
      do {
        if ((*puVar13 == (uint)*(ushort *)(lVar20 + 0xc)) &&
           ((puVar13[1] == (uint)*(ushort *)(lVar20 + 0xe) || (puVar13[1] == 0xffffffff)))) {
          uVar7 = puVar13[2];
          goto LAB_143c67dda;
        }
        puVar13 = puVar13 + 3;
      } while (puVar13 < &DAT_145d364f4);
      uVar7 = 0;
LAB_143c67dda:
      uVar8 = (int)uVar15 + 1;
      *(uint *)(lVar20 + 8) = uVar7;
      uVar15 = (ulonglong)uVar8;
      uVar18 = uVar18 + 8;
    } while ((int)uVar8 < *(int *)(param_2 + 0x38));
  }
  uVar7 = *(uint *)(param_2 + 0x400);
  if (uVar7 == 0) {
    uVar15 = (ulonglong)local_78;
  }
  else {
    uVar21 = *(ushort *)(param_2 + 0x112);
    sVar11 = *(short *)(param_2 + 0x1fa);
    if ((uVar21 == 0) || (*(short *)(param_2 + 0x1f8) == -1)) {
      sVar11 = 1;
      uVar21 = 1;
    }
    local_80 = &local_78;
    local_88 = 0;
    uVar10 = FUN_143c27410(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x30),0x10,0,uVar7);
    *(undefined8 *)(param_2 + 0x30) = uVar10;
    if (local_78 != 0) {
      return (ulonglong)local_78;
    }
    uVar15 = uVar16;
    if (uVar7 != 0) {
      do {
        puVar17 = (undefined2 *)(*(longlong *)(param_2 + 0x30) + uVar16);
        uVar8 = (**(code **)(local_70 + 0xd8))(param_2,uVar15,&local_68);
        if (uVar8 != 0) {
          return (ulonglong)uVar8;
        }
        uVar8 = (int)uVar15 + 1;
        uVar16 = uVar16 + 0x10;
        *puVar17 = (short)(local_54 >> 6);
        puVar17[1] = (short)((int)((uint)local_68 * (int)sVar11 + (uint)(uVar21 >> 1)) /
                            (int)(uint)uVar21);
        *(uint *)(puVar17 + 4) = (uint)local_68 << 6;
        *(uint *)(puVar17 + 6) = (uint)local_66 << 6;
        *(uint *)(puVar17 + 2) = (uint)local_66 << 6;
        local_78 = 0;
        uVar15 = (ulonglong)uVar8;
      } while (uVar8 < uVar7);
    }
    uVar15 = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
    *(uint *)(param_2 + 0x28) = uVar7;
  }
  if ((*(uint *)(param_2 + 8) & 3) == 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
  }
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    *(int *)(param_2 + 0x58) = (int)*(short *)(param_2 + 0x124);
    *(int *)(param_2 + 0x5c) = (int)*(short *)(param_2 + 0x126);
    *(int *)(param_2 + 0x60) = (int)*(short *)(param_2 + 0x128);
    *(int *)(param_2 + 100) = (int)*(short *)(param_2 + 0x12a);
    *(undefined2 *)(param_2 + 0x68) = *(undefined2 *)(param_2 + 0x112);
    sVar11 = *(short *)(param_2 + 0x13c);
    *(short *)(param_2 + 0x6a) = sVar11;
    sVar1 = *(short *)(param_2 + 0x13e);
    *(short *)(param_2 + 0x6c) = sVar1;
    *(short *)(param_2 + 0x6e) = (*(short *)(param_2 + 0x140) - sVar1) + sVar11;
    if (((sVar11 == 0) && (sVar1 == 0)) && (*(short *)(param_2 + 0x1f8) != -1)) {
      sVar11 = *(short *)(param_2 + 0x23e);
      if ((sVar11 == 0) && (*(short *)(param_2 + 0x240) == 0)) {
        *(short *)(param_2 + 0x6a) = *(short *)(param_2 + 0x244);
        *(short *)(param_2 + 0x6c) = -*(short *)(param_2 + 0x246);
        sVar11 = *(short *)(param_2 + 0x244) + *(short *)(param_2 + 0x246);
      }
      else {
        *(short *)(param_2 + 0x6a) = sVar11;
        *(short *)(param_2 + 0x6c) = *(short *)(param_2 + 0x240);
        sVar11 = (*(short *)(param_2 + 0x242) - *(short *)(param_2 + 0x240)) + sVar11;
      }
      *(short *)(param_2 + 0x6e) = sVar11;
    }
    *(undefined2 *)(param_2 + 0x70) = *(undefined2 *)(param_2 + 0x142);
    if (*(char *)(param_2 + 400) == '\0') {
      uVar5 = *(undefined2 *)(param_2 + 0x6e);
    }
    else {
      uVar5 = *(undefined2 *)(param_2 + 0x1a2);
    }
    *(undefined2 *)(param_2 + 0x72) = uVar5;
    *(short *)(param_2 + 0x74) = *(short *)(param_2 + 0x268) - *(short *)(param_2 + 0x26a) / 2;
    *(undefined2 *)(param_2 + 0x76) = *(undefined2 *)(param_2 + 0x26a);
  }
  return uVar15;
joined_r0x000143c67cc8:
  if (piVar9 + uVar15 * 4 <= piVar12) goto LAB_143c67d0f;
  if ((*piVar12 == 0x66766172) && (piVar12[3] != 0)) {
    piVar12 = piVar9 + uVar15 * 4;
    goto joined_r0x000143c67cf0;
  }
  piVar12 = piVar12 + 4;
  goto joined_r0x000143c67cc8;
joined_r0x000143c67cf0:
  if (piVar12 <= piVar9) goto LAB_143c67d0f;
  if ((*piVar9 == 0x67766172) && (piVar9[3] != 0)) {
    uVar14 = uVar14 | 0x100;
    goto LAB_143c67d0f;
  }
  piVar9 = piVar9 + 4;
  goto joined_r0x000143c67cf0;
}



// FUNCTION 143c68150 FUN_143c68150 body=512 status=ok
// SIG undefined FUN_143c68150(void)

void FUN_143c68150(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    lVar2 = *(longlong *)(param_1 + 0x2c0);
    if (lVar2 != 0) {
      if (*(code **)(lVar2 + 0xa0) != (code *)0x0) {
        (**(code **)(lVar2 + 0xa0))();
      }
      if (*(code **)(lVar2 + 200) != (code *)0x0) {
        (**(code **)(lVar2 + 200))(param_1);
      }
    }
    if (*(char *)(param_1 + 0x440) != '\0') {
      if (*(longlong *)(param_1 + 0x420) != 0) {
        FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xa0),(longlong *)(param_1 + 0x420));
      }
      *(undefined8 *)(param_1 + 0x428) = 0;
      *(undefined8 *)(param_1 + 0x430) = 0;
      *(undefined4 *)(param_1 + 0x438) = 0;
    }
    FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x408);
    *(undefined8 *)(param_1 + 0x410) = 0;
    *(undefined8 *)(param_1 + 0x418) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined2 *)(param_1 + 0xf4) = 0;
    FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x280);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x288) = 0;
    FT_Stream_ReleaseFrame(uVar3,param_1 + 0x3a8);
    FT_Stream_ReleaseFrame(uVar3,param_1 + 0x3b8);
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    if (*(char *)(param_1 + 400) != '\0') {
      ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1c0));
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1c8));
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined1 *)(param_1 + 400) = 0;
    }
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x2d8));
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined2 *)(param_1 + 0x2d2) = 0;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x68))(param_1);
    }
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x390));
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 143c68390 FUN_143c68390 body=391 status=ok
// SIG undefined FUN_143c68390(void)

short FUN_143c68390(longlong param_1,uint *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  short sVar10;
  bool bVar11;
  
  sVar10 = 0;
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar3 = *param_2 + 1;
  if (0xffff < uVar3) {
    *param_2 = 0;
    return 0;
  }
  do {
    puVar8 = (undefined1 *)(lVar2 + 0x206);
    if (uVar3 >> 8 == 0) {
      uVar4 = (ulonglong)((uVar3 & 0xff) * 2);
      if (CONCAT11(*(undefined1 *)(lVar2 + 6 + uVar4),*(undefined1 *)(lVar2 + 7 + uVar4)) == 0) {
LAB_143c68419:
        if (puVar8 != (undefined1 *)0x0) {
          uVar5 = (uint)CONCAT11(*puVar8,puVar8[1]);
          uVar6 = uVar3 & 0xff;
          if (CONCAT11(puVar8[6],puVar8[7]) != 0) {
            if (uVar6 < uVar5) {
              uVar7 = 0;
              uVar6 = uVar5;
            }
            else {
              uVar7 = uVar6 - uVar5;
            }
            uVar3 = (uVar3 & 0xffffff00) + uVar6;
            if (uVar7 < CONCAT11(puVar8[2],puVar8[3])) {
              puVar9 = puVar8 + (ulonglong)((uint)CONCAT11(puVar8[6],puVar8[7]) + uVar7 * 2) + 5;
              do {
                puVar1 = puVar9 + 1;
                puVar9 = puVar9 + 2;
                if ((CONCAT11(*puVar1,*puVar9) != 0) &&
                   (sVar10 = CONCAT11(*puVar1,*puVar9) + CONCAT11(puVar8[4],puVar8[5]), sVar10 != 0)
                   ) {
                  *param_2 = uVar3;
                  return sVar10;
                }
                uVar7 = uVar7 + 1;
                uVar3 = uVar3 + 1;
              } while (uVar7 < CONCAT11(puVar8[2],puVar8[3]));
            }
          }
        }
      }
    }
    else {
      uVar6 = (uVar3 >> 8) * 2;
      bVar11 = puVar8 + ((ulonglong)
                         CONCAT11(*(undefined1 *)(lVar2 + 6 + (ulonglong)uVar6),
                                  *(undefined1 *)(lVar2 + 7 + (ulonglong)uVar6)) &
                        0xfffffffffffffff8) != puVar8;
      puVar8 = puVar8 + ((ulonglong)
                         CONCAT11(*(undefined1 *)(lVar2 + 6 + (ulonglong)uVar6),
                                  *(undefined1 *)(lVar2 + 7 + (ulonglong)uVar6)) &
                        0xfffffffffffffff8);
      if (bVar11) goto LAB_143c68419;
    }
    uVar3 = (uVar3 & 0xffffff00) + 0x100;
    if (0xffff < uVar3) {
      *param_2 = 0;
      return sVar10;
    }
  } while( true );
}



// FUNCTION 143c68520 FUN_143c68520 body=267 status=ok
// SIG undefined FUN_143c68520(void)

undefined8 FUN_143c68520(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 0x14U) {
    FUN_143c27ac0(param_2,8);
  }
  puVar1 = (undefined1 *)(param_1 + 0x13);
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)
                                    ),*(undefined1 *)(param_1 + 0x12)),*puVar1);
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar3) || (uVar3 < 0x14)) ||
     (uVar3 - 0x14 >> 1 < uVar4)) {
    FUN_143c27ac0(param_2,8);
  }
  if (0 < *(int *)(param_2 + 0x110)) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar2 = puVar1 + 1;
      puVar1 = puVar1 + 2;
      if (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(*puVar2,*puVar1)) {
        FUN_143c27ac0(param_2,0x10);
      }
    }
  }
  return 0;
}



// FUNCTION 143c68630 FUN_143c68630 body=206 status=ok
// SIG undefined FUN_143c68630(void)

undefined8 FUN_143c68630(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined1 *)FUN_143c6a0e0(lVar1 + 6,param_4);
  if (puVar3 == (undefined1 *)0x0) {
    return 0;
  }
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
  if ((uVar5 != 0) && (iVar2 = FUN_143c69ee0((ulonglong)uVar5 + lVar1,param_3), iVar2 != 0)) {
    uVar4 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))(param_2,param_3);
    return uVar4;
  }
  if (uVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_143c69f80((ulonglong)uVar6 + lVar1,param_3);
  }
  return uVar4;
}



// FUNCTION 143c687a0 FUN_143c687a0 body=214 status=ok
// SIG undefined FUN_143c687a0(void)

undefined8 FUN_143c687a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined1 *)FUN_143c6a0e0(lVar1 + 6,param_3);
  if (puVar3 == (undefined1 *)0x0) {
    return 0xffffffff;
  }
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
  uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
  if (uVar4 != 0) {
    iVar2 = FUN_143c69ee0((ulonglong)uVar4 + lVar1,param_2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  if (uVar5 != 0) {
    iVar2 = FUN_143c69f80((ulonglong)uVar5 + lVar1,param_2);
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143c68880 FUN_143c68880 body=567 status=ok
// SIG undefined FUN_143c68880(void)

int FUN_143c68880(longlong param_1,char *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulonglong _MaxCount;
  ulonglong uVar15;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x440) == '\0') &&
     (iVar5 = FUN_143c6b1e0(param_1,*(undefined8 *)(param_1 + 0xa0)), iVar5 != 0)) {
    return iVar5;
  }
  iVar5 = *(int *)(param_1 + 0x43c);
  lVar3 = *(longlong *)(param_1 + 0x420);
  lVar11 = (ulonglong)(uint)(iVar5 * 4) + lVar3 + 8;
  if (lVar2 == 0) {
    return 6;
  }
  if (param_2 != (char *)0x0) {
    uVar15 = 0xffffffffffffffff;
    do {
      uVar15 = uVar15 + 1;
    } while (param_2[uVar15] != '\0');
    if (uVar15 == 0) {
      return 6;
    }
    if (iVar5 == 0) {
      return 6;
    }
    puVar14 = (undefined1 *)(lVar3 + 6);
    puVar8 = (undefined1 *)(lVar3 + 7);
    while( true ) {
      puVar1 = puVar14 + 2;
      puVar14 = puVar14 + 4;
      uVar4 = CONCAT11(*puVar14,puVar8[4]);
      uVar13 = (uint)uVar4;
      if (CONCAT11(*puVar1,puVar8[2]) == *(short *)(lVar2 + 0x1a)) break;
      lVar11 = lVar11 + (ulonglong)(uVar13 * 10);
      iVar5 = iVar5 + -1;
      puVar8 = puVar8 + 4;
      if (iVar5 == 0) {
        return 6;
      }
    }
    if (uVar4 == 0) {
      return 6;
    }
    pbVar12 = (byte *)(lVar11 + 5);
    do {
      bVar9 = *pbVar12;
      if ((bVar9 & 0x10) != 0) {
        uVar7 = CONCAT31(CONCAT21(CONCAT11(pbVar12[-5],pbVar12[-4]),pbVar12[-3]),pbVar12[-2]);
        uVar10 = CONCAT31(CONCAT21(CONCAT11(pbVar12[1],pbVar12[2]),pbVar12[3]),pbVar12[4]);
        if (((uVar7 < *(uint *)(param_1 + 0x438)) &&
            (_MaxCount = (ulonglong)(*(uint *)(param_1 + 0x438) - uVar7), uVar15 < _MaxCount)) &&
           (iVar5 = _guard_xfg_dispatch_icall_nop
                              (param_2,(char *)((ulonglong)uVar7 + *(longlong *)(param_1 + 0x430)),
                               _MaxCount), iVar5 == 0)) {
          bVar9 = bVar9 & 0xf;
          if (bVar9 < 2) {
            if ((uVar10 < *(uint *)(param_1 + 0x438)) &&
               (pvVar6 = _guard_xfg_dispatch_icall_nop
                                   ((void *)((ulonglong)uVar10 + *(longlong *)(param_1 + 0x430)),0,
                                    (ulonglong)*(uint *)(param_1 + 0x438)), pvVar6 != (void *)0x0))
            {
              *param_3 = 1;
              *(ulonglong *)(param_3 + 2) = (ulonglong)uVar10 + *(longlong *)(param_1 + 0x430);
              return 0;
            }
          }
          else {
            if (bVar9 == 2) {
              *param_3 = 2;
              param_3[2] = uVar10;
              return 0;
            }
            if (bVar9 == 3) {
              *param_3 = 3;
              param_3[2] = uVar10;
              return 0;
            }
          }
        }
      }
      pbVar12 = pbVar12 + 10;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        return 6;
      }
    } while( true );
  }
  return 6;
}



// FUNCTION 143c68b90 FUN_143c68b90 body=240 status=ok
// SIG undefined FUN_143c68b90(void)

uint * FUN_143c68b90(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  int local_res8 [2];
  
  uVar4 = *(uint *)(param_1 + 0x28);
  lVar12 = *(longlong *)(param_1 + 0x18);
  local_res8[0] = 0;
  uVar9 = uVar4 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar9) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    uVar6 = FUN_143c27410(param_2,4,*(uint *)(param_1 + 0x2c),uVar9,*(undefined8 *)(param_1 + 0x30),
                          local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    if (local_res8[0] != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x2c) = uVar9;
  }
  puVar5 = *(uint **)(param_1 + 0x30);
  uVar8 = 0;
  if (uVar4 != 0) {
    lVar10 = lVar12 + 9;
    lVar11 = lVar12 + 8;
    lVar12 = lVar12 + 7;
    uVar7 = (ulonglong)uVar4;
    puVar13 = puVar5;
    do {
      puVar1 = (undefined1 *)(lVar12 + 3);
      puVar2 = (undefined1 *)(lVar11 + 3);
      lVar12 = lVar12 + 0xb;
      puVar3 = (undefined1 *)(lVar10 + 3);
      lVar11 = lVar11 + 0xb;
      lVar10 = lVar10 + 0xb;
      *puVar13 = (uint)CONCAT21(CONCAT11(*puVar1,*puVar2),*puVar3);
      uVar7 = uVar7 - 1;
      uVar8 = (ulonglong)uVar4;
      puVar13 = puVar13 + 1;
    } while (uVar7 != 0);
  }
  puVar5[uVar8] = 0;
  return puVar5;
}



// FUNCTION 143c68c80 FUN_143c68c80 body=407 status=ok
// SIG undefined FUN_143c68c80(void)

undefined8 FUN_143c68c80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *local_res8;
  
  iVar10 = *(int *)(param_1 + 0x28);
  lVar6 = *(longlong *)(param_1 + 0x18);
  local_res8 = (undefined1 *)((ulonglong)local_res8 & 0xffffffff00000000);
  uVar9 = iVar10 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar9) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    uVar8 = FUN_143c27410(param_2,4,*(uint *)(param_1 + 0x2c),uVar9,*(undefined8 *)(param_1 + 0x30),
                          &local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    if ((int)local_res8 != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar9;
  }
  puVar11 = *(uint **)(param_1 + 0x30);
  if (iVar10 != 0) {
    local_res8 = (undefined1 *)(lVar6 + 7);
    puVar13 = (undefined1 *)(lVar6 + 6);
    puVar14 = (undefined1 *)(lVar6 + 9);
    puVar15 = (undefined1 *)(lVar6 + 8);
    do {
      uVar3 = puVar15[3];
      uVar4 = local_res8[3];
      puVar1 = puVar13 + 7;
      puVar13 = puVar13 + 0xb;
      uVar5 = puVar14[3];
      puVar2 = local_res8 + 7;
      local_res8 = local_res8 + 0xb;
      uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar1,*puVar2),puVar15[7]),puVar14[7]);
      uVar12 = CONCAT31(CONCAT21(CONCAT11(*puVar13,*local_res8),puVar15[0xb]),puVar14[0xb]);
      if (((uVar9 != 0) &&
          (iVar7 = FUN_143c69ee0((ulonglong)uVar9 + *(longlong *)(param_1 + 0x18),param_3),
          iVar7 != 0)) ||
         ((uVar12 != 0 &&
          (iVar7 = FUN_143c69f80((ulonglong)uVar12 + *(longlong *)(param_1 + 0x18),param_3),
          iVar7 != 0)))) {
        *puVar11 = (uint)CONCAT21(CONCAT11(uVar4,uVar3),uVar5);
        puVar11 = puVar11 + 1;
      }
      iVar10 = iVar10 + -1;
      puVar14 = puVar14 + 0xb;
      puVar15 = puVar15 + 0xb;
    } while (iVar10 != 0);
  }
  *puVar11 = 0;
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 143c68e20 FUN_143c68e20 body=681 status=ok
// SIG undefined FUN_143c68e20(void)

int FUN_143c68e20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint local_res8 [2];
  
  plVar1 = (longlong *)(param_1 + 0x3f0);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  iVar5 = (**(code **)(param_1 + 0x290))(param_1,0x43424c43,param_2,local_res8);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x3fc) = 2;
  }
  else {
    iVar5 = (**(code **)(param_1 + 0x290))(param_1,0x45424c43,param_2,local_res8);
    if ((iVar5 == 0) ||
       (iVar5 = (**(code **)(param_1 + 0x290))(param_1,0x626c6f63,param_2,local_res8), iVar5 == 0))
    {
      *(undefined4 *)(param_1 + 0x3fc) = 1;
    }
    else {
      iVar5 = (**(code **)(param_1 + 0x290))(param_1,0x73626978,param_2,local_res8);
      if (iVar5 != 0) goto LAB_143c690ab;
      *(undefined4 *)(param_1 + 0x3fc) = 3;
    }
  }
  if (7 < local_res8[0]) {
    uVar6 = *(uint *)(param_1 + 0x3fc);
    if (uVar6 == 0) {
      return 0;
    }
    if (uVar6 < 3) {
      iVar5 = FT_Stream_ExtractFrame(param_2,local_res8[0],plVar1);
      if (iVar5 != 0) goto LAB_143c690ab;
      puVar2 = (undefined1 *)*plVar1;
      *(uint *)(param_1 + 0x3f8) = local_res8[0];
      uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar2[4],puVar2[5]),puVar2[6]),puVar2[7]);
      if (CONCAT11(*puVar2,puVar2[1]) != 2) {
        iVar5 = 2;
        goto LAB_143c690ab;
      }
      if (uVar6 < 0x10000) {
        if (local_res8[0] < uVar6 * 0x30 + 8) {
          uVar6 = (local_res8[0] - 8) / 0x30;
        }
        *(uint *)(param_1 + 0x400) = uVar6;
        return 0;
      }
    }
    else {
      if (uVar6 != 3) {
        return 0;
      }
      iVar5 = FUN_143c24650(param_2,8);
      if (iVar5 != 0) goto LAB_143c690ab;
      sVar3 = FUN_143c24910(param_2);
      sVar4 = FUN_143c24910(param_2);
      uVar6 = FUN_143c24870(param_2);
      FT_Stream_ExitFrame(param_2);
      if (sVar3 == 0) {
        iVar5 = 2;
        goto LAB_143c690ab;
      }
      if (((sVar4 - 1U & 0xfffd) == 0) && (uVar6 < 0x10000)) {
        if (local_res8[0] < uVar6 * 4 + 8) {
          uVar6 = local_res8[0] - 8 >> 2;
        }
        iVar5 = IStreamingManager::GetNumWantingResourcesID(param_2);
        iVar5 = FUN_143c251d0(param_2,iVar5 + -8);
        if (iVar5 == 0) {
          iVar5 = uVar6 * 4 + 8;
          *(int *)(param_1 + 0x3f8) = iVar5;
          iVar5 = FT_Stream_ExtractFrame(param_2,iVar5,plVar1);
          if (iVar5 == 0) {
            *(uint *)(param_1 + 0x400) = uVar6;
            return 0;
          }
        }
        goto LAB_143c690ab;
      }
    }
  }
  iVar5 = 3;
LAB_143c690ab:
  if (*plVar1 != 0) {
    FT_Stream_ReleaseFrame(param_2,plVar1);
  }
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  return iVar5;
}



// FUNCTION 143c69110 FUN_143c69110 body=400 status=ok
// SIG undefined FUN_143c69110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c69110(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  uint local_58 [2];
  int local_50 [2];
  uint local_48;
  uint local_44;
  ulonglong local_40;
  uint uVar3;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  iVar6 = *(int *)(param_1 + 0xc) + 0xc;
  sVar4 = 0;
  uVar5 = 0;
  uVar9 = 0;
  uVar7 = 0;
  uVar1 = FUN_143c251d0(param_2,iVar6);
  if ((int)uVar1 == 0) {
    local_58[0] = 0;
    uVar10 = uVar3;
    uVar8 = uVar3;
    if ((ushort)uVar1 < *(ushort *)(param_1 + 4)) {
      do {
        local_58[0] = FUN_143c24c00(param_2,&DAT_145d36578,local_50);
        if (local_58[0] != 0) {
          *(short *)(param_1 + 4) = (short)uVar3 + -1;
          uVar8 = uVar7;
          uVar10 = uVar9;
          break;
        }
        uVar10 = 0;
        if ((local_48 <= *(uint *)(param_2 + 8)) &&
           (((local_44 <= *(uint *)(param_2 + 8) - local_48 || (local_50[0] == 0x686d7478)) ||
            (local_50[0] == 0x766d7478)))) {
          sVar4 = sVar4 + 1;
          if ((local_50[0] == 0x68656164) || (local_50[0] == 0x62686564)) {
            uVar5 = 1;
            if (local_44 < 0x36) goto LAB_143c69276;
            uVar1 = FUN_143c251d0(param_2,local_48 + 0xc);
            local_58[0] = (uint)uVar1;
            if (local_58[0] != 0) {
              return uVar1;
            }
            FUN_143c24ea0(param_2,local_58);
            if (local_58[0] != 0) {
              return (ulonglong)local_58[0];
            }
            uVar1 = FUN_143c251d0(param_2,(uVar3 + 1) * 0x10 + iVar6);
            uVar10 = (uint)uVar1;
            if ((uint)uVar1 != 0) {
              return uVar1;
            }
          }
          else if (local_50[0] == 0x53494e47) {
            uVar9 = 1;
          }
          else if (local_50[0] == 0x4d455441) {
            uVar7 = 1;
          }
        }
        local_58[0] = uVar10;
        uVar2 = (short)uVar3 + 1;
        uVar3 = (uint)uVar2;
        uVar8 = uVar7;
        uVar10 = uVar9;
      } while (uVar2 < *(ushort *)(param_1 + 4));
      uVar3 = uVar5;
      uVar1 = 0;
    }
    *(short *)(param_1 + 4) = sVar4;
    if (sVar4 == 0) {
      uVar1 = 2;
    }
    else if ((uVar3 == 0) && ((uVar10 == 0 || (uVar8 == 0)))) {
LAB_143c69276:
      uVar1 = 0x8e;
    }
  }
  return uVar1;
}



// FUNCTION 143c692c0 FUN_143c692c0 body=788 status=ok
// SIG undefined FUN_143c692c0(void)

int FUN_143c692c0(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int local_res10 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  puVar15 = (undefined8 *)0x0;
  uVar3 = FUN_143c25070(param_2,local_res10);
  uVar16 = (ulonglong)uVar3;
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  if (*(ushort *)(param_1 + 0x174) < uVar3) {
    return 3;
  }
  puVar6 = (ushort *)FUN_143c27410(uVar1,2,0,uVar3,0,local_res10);
  puVar7 = puVar15;
  if ((local_res10[0] == 0) &&
     (local_res10[0] = FUN_143c24650(param_2,(uint)uVar3 + (uint)uVar3), puVar7 = (undefined8 *)0x0,
     local_res10[0] == 0)) {
    puVar11 = puVar6;
    uVar14 = uVar16;
    if (uVar3 != 0) {
      do {
        uVar4 = FUN_143c24910(param_2);
        *puVar11 = uVar4;
        uVar14 = uVar14 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar14 != 0);
    }
    FT_Stream_ExitFrame(param_2);
    puVar11 = puVar6;
    if (uVar3 != 0) {
      do {
        if ((0x101 < *puVar11) && (iVar10 = *puVar11 - 0x101, (int)puVar15 < iVar10)) {
          puVar15 = (undefined8 *)(ulonglong)(ushort)iVar10;
        }
        uVar16 = uVar16 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar16 != 0);
    }
    uVar4 = (ushort)puVar15;
    puVar7 = (undefined8 *)FUN_143c27410(uVar1,8,0,puVar15,0,local_res10);
    if (local_res10[0] == 0) {
      uVar13 = 0;
      if (uVar4 != 0) {
        do {
          uVar5 = IStreamingManager::GetNumWantingResourcesID(param_2);
          puVar12 = puVar7;
          if (param_3 <= uVar5) {
            if (uVar13 < uVar4) goto LAB_143c69531;
            break;
          }
          bVar2 = FUN_143c24b80(param_2,local_res10);
          uVar16 = (ulonglong)bVar2;
          if (local_res10[0] != 0) goto LAB_143c69580;
          if ((param_3 < bVar2) ||
             (uVar5 = IStreamingManager::GetNumWantingResourcesID(param_2), param_3 - bVar2 < uVar5)
             ) {
            iVar10 = IStreamingManager::GetNumWantingResourcesID(param_2);
            uVar16 = (ulonglong)(param_3 - iVar10);
            if ((int)(param_3 - iVar10) < 0) {
              uVar16 = 0;
            }
          }
          uVar8 = FUN_143c27410(uVar1,1,0,(int)uVar16 + 1,0,local_res10);
          puVar7[uVar13] = uVar8;
          if ((local_res10[0] != 0) ||
             (local_res10[0] = FUN_143c24ae0(param_2,uVar8), local_res10[0] != 0))
          goto LAB_143c69580;
          uVar14 = (ulonglong)uVar13;
          uVar13 = uVar13 + 1;
          *(undefined1 *)(uVar16 + puVar7[uVar14]) = 0;
        } while (uVar13 < uVar4);
      }
      goto LAB_143c694f9;
    }
  }
LAB_143c6959d:
  ft_mem_free(uVar1,puVar7);
  ft_mem_free(uVar1,puVar6);
  return local_res10[0];
LAB_143c69580:
  do {
    ft_mem_free(uVar1,*puVar12);
    *puVar12 = 0;
    puVar15 = (undefined8 *)((longlong)puVar15 + -1);
    puVar12 = puVar12 + 1;
  } while (puVar15 != (undefined8 *)0x0);
  goto LAB_143c6959d;
  while( true ) {
    uVar13 = uVar13 + 1;
    *puVar9 = 0;
    if (uVar4 <= uVar13) break;
LAB_143c69531:
    puVar9 = (undefined1 *)FUN_143c27410(uVar1,1,0,1,0,local_res10);
    puVar7[uVar13] = puVar9;
    if (local_res10[0] != 0) goto LAB_143c69580;
  }
LAB_143c694f9:
  *(ushort *)(param_1 + 0x330) = uVar3;
  *(ushort *)(param_1 + 0x332) = uVar4;
  *(ushort **)(param_1 + 0x338) = puVar6;
  *(undefined8 **)(param_1 + 0x340) = puVar7;
  return 0;
}



// FUNCTION 143c695e0 FUN_143c695e0 body=260 status=ok
// SIG undefined FUN_143c695e0(void)

int FUN_143c695e0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int local_res18 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  local_res18[0] = param_3;
  uVar2 = FUN_143c25070(param_2,local_res18);
  if (local_res18[0] == 0) {
    if ((*(ushort *)(param_1 + 0x174) < uVar2) || (0x102 < uVar2)) {
      local_res18[0] = 3;
    }
    else {
      iVar5 = 0;
      pcVar3 = (char *)FUN_143c27410(uVar1,1,0,uVar2,0,local_res18);
      if ((local_res18[0] == 0) &&
         (local_res18[0] = FUN_143c24ae0(param_2,pcVar3,uVar2), local_res18[0] == 0)) {
        pcVar4 = pcVar3;
        if (uVar2 != 0) {
          do {
            if ((*pcVar4 + iVar5 < 0) || ((int)(uint)uVar2 < *pcVar4 + iVar5)) {
              local_res18[0] = 3;
              goto LAB_143c696b5;
            }
            iVar5 = iVar5 + 1;
            pcVar4 = pcVar4 + 1;
          } while (iVar5 < (int)(uint)uVar2);
        }
        *(ushort *)(param_1 + 0x330) = uVar2;
        local_res18[0] = 0;
        *(char **)(param_1 + 0x338) = pcVar3;
      }
      else {
LAB_143c696b5:
        ft_mem_free(uVar1,pcVar3);
      }
    }
  }
  return local_res18[0];
}



// FUNCTION 143c696f0 FUN_143c696f0 body=171 status=ok
// SIG undefined FUN_143c696f0(void)

undefined8 FUN_143c696f0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_res8 [2];
  
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = (**(code **)(param_1 + 0x290))(param_1,0x706f7374,uVar2,local_res8);
  if ((int)uVar4 == 0) {
    iVar3 = IStreamingManager::GetNumWantingResourcesID(uVar2);
    iVar1 = *(int *)(param_1 + 0x260);
    uVar4 = FUN_143c25220(uVar2,0x20);
    if ((int)uVar4 == 0) {
      if (iVar1 == 0x20000) {
        uVar4 = FUN_143c692c0(param_1,uVar2,iVar3 + local_res8[0]);
      }
      else if (iVar1 == 0x28000) {
        uVar4 = FUN_143c695e0(param_1,uVar2,iVar3 + local_res8[0]);
      }
      else {
        uVar4 = 3;
      }
      *(undefined1 *)(param_1 + 0x328) = 1;
    }
  }
  return uVar4;
}



// FUNCTION 143c697a0 FUN_143c697a0 body=541 status=ok
// SIG undefined FUN_143c697a0(void)

ulonglong FUN_143c697a0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0xe0) = 0;
  uVar1 = IStreamingManager::GetNumWantingResourcesID();
  iVar2 = FUN_143c24ea0(param_1,local_res8);
  while( true ) {
    if (local_res8[0] != 0) {
      return (ulonglong)local_res8[0];
    }
    if (iVar2 != 0x774f4646) break;
    uVar3 = FUN_143c251d0(param_1,uVar1);
    local_res8[0] = (uint)uVar3;
    if (local_res8[0] != 0) {
      return uVar3;
    }
    uVar3 = FUN_143c6c780(param_1,param_2);
    local_res8[0] = (uint)uVar3;
    if (local_res8[0] != 0) {
      return uVar3;
    }
    param_1 = *(longlong *)(param_2 + 0xa0);
    uVar1 = IStreamingManager::GetNumWantingResourcesID(param_1);
    iVar2 = FUN_143c24ea0(param_1,local_res8);
  }
  if ((((iVar2 != 0x10000) && (iVar2 != 0x74746366)) && (iVar2 != 0x4f54544f)) &&
     (((iVar2 != 0x74727565 && (iVar2 != 0x74797031)) && (iVar2 != 0x20000)))) {
    return 2;
  }
  *(undefined4 *)(param_2 + 0xd8) = 0x74746366;
  if (iVar2 != 0x74746366) {
    *(undefined4 *)(param_2 + 0xdc) = 0x10000;
    *(undefined4 *)(param_2 + 0xe0) = 1;
    puVar5 = (undefined4 *)FUN_143c271e0(uVar4,4,local_res8);
    *(undefined4 **)(param_2 + 0xe8) = puVar5;
    if (local_res8[0] != 0) {
      return (ulonglong)local_res8[0];
    }
    *puVar5 = uVar1;
    return 0;
  }
  uVar3 = FUN_143c24c00(param_1,&DAT_145d36920,param_2 + 0xd8);
  local_res8[0] = (uint)uVar3;
  if (local_res8[0] != 0) {
    return uVar3;
  }
  uVar6 = *(uint *)(param_2 + 0xe0);
  if (uVar6 == 0) {
    return 8;
  }
  if (*(uint *)(param_1 + 8) >> 5 < uVar6) {
    return 10;
  }
  uVar4 = FUN_143c27410(uVar4,4,0,uVar6,0,local_res8);
  *(undefined8 *)(param_2 + 0xe8) = uVar4;
  if (local_res8[0] != 0) {
    return (ulonglong)local_res8[0];
  }
  uVar3 = FUN_143c24650(param_1,*(int *)(param_2 + 0xe0) << 2);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  local_res8[0] = 0;
  uVar3 = uVar7;
  if (0 < *(int *)(param_2 + 0xe0)) {
    do {
      uVar1 = FUN_143c24870(param_1);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *(undefined4 *)(uVar3 + *(longlong *)(param_2 + 0xe8)) = uVar1;
      uVar3 = uVar3 + 4;
    } while ((int)uVar6 < *(int *)(param_2 + 0xe0));
  }
  FT_Stream_ExitFrame(param_1);
  return (ulonglong)local_res8[0];
}



// FUNCTION 143c699c0 FUN_143c699c0 body=39 status=ok
// SIG undefined FUN_143c699c0(void)

void FUN_143c699c0(undefined8 *param_1)

{
  ft_mem_free(param_1[6],*param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 143c699f0 FUN_143c699f0 body=368 status=ok
// SIG undefined FUN_143c699f0(void)

int FUN_143c699f0(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar4 = 0;
  uVar9 = *param_2;
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0xc),*(undefined1 *)(lVar1 + 0xd)),
                            *(undefined1 *)(lVar1 + 0xe)),*(undefined1 *)(lVar1 + 0xf));
  if (uVar8 != 0) {
    uVar3 = 0xffffffff;
    if (param_3 != '\0') {
      uVar9 = uVar9 + 1;
    }
    uVar7 = 0;
    uVar2 = 0;
    uVar10 = uVar8;
    if (uVar8 != 0) {
      do {
        uVar2 = uVar10 + uVar7 >> 1;
        lVar6 = (ulonglong)(uVar2 * 0xc) + lVar1;
        uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar6 + 0x10),
                                           *(undefined1 *)(lVar6 + 0x11)),
                                  *(undefined1 *)(lVar6 + 0x12)),*(undefined1 *)(lVar6 + 0x13));
        uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar6 + 0x14),
                                           *(undefined1 *)(lVar6 + 0x15)),
                                  *(undefined1 *)(lVar6 + 0x16)),*(undefined1 *)(lVar6 + 0x17));
        uVar11 = uVar2;
        if (uVar5 <= uVar9) {
          if (uVar9 <= uVar3) {
            iVar4 = (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar6 + 0x18),
                                                *(undefined1 *)(lVar6 + 0x19)),
                                       *(undefined1 *)(lVar6 + 0x1a)),*(undefined1 *)(lVar6 + 0x1b))
                    - uVar5) + uVar9;
            break;
          }
          uVar7 = uVar2 + 1;
          uVar11 = uVar10;
        }
        uVar10 = uVar11;
      } while (uVar7 < uVar11);
    }
    if (param_3 == '\0') {
      return iVar4;
    }
    if ((uVar9 <= uVar3) || (uVar2 = uVar2 + 1, uVar2 != uVar8)) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(uint *)(param_1 + 0x2c) = uVar9;
      *(uint *)(param_1 + 0x34) = uVar2;
      if (iVar4 == 0) {
        FUN_143c69b60(param_1);
        if (*(char *)(param_1 + 0x28) == '\0') {
          return 0;
        }
        iVar4 = *(int *)(param_1 + 0x30);
      }
      else {
        *(int *)(param_1 + 0x30) = iVar4;
      }
      if (iVar4 == 0) {
        return 0;
      }
      *param_2 = *(uint *)(param_1 + 0x2c);
      return iVar4;
    }
  }
  return 0;
}



// FUNCTION 143c69b60 FUN_143c69b60 body=260 status=ok
// SIG undefined FUN_143c69b60(void)

void FUN_143c69b60(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x2c) != -1) {
    uVar6 = *(uint *)(param_1 + 0x34);
    uVar2 = *(int *)(param_1 + 0x2c) + 1;
    if (uVar6 < *(uint *)(param_1 + 0x38)) {
      uVar7 = uVar6 * 0xc;
      do {
        lVar3 = (ulonglong)uVar7 + *(longlong *)(param_1 + 0x18);
        uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x10),
                                           *(undefined1 *)(lVar3 + 0x11)),
                                  *(undefined1 *)(lVar3 + 0x12)),*(undefined1 *)(lVar3 + 0x13));
        uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x14),
                                           *(undefined1 *)(lVar3 + 0x15)),
                                  *(undefined1 *)(lVar3 + 0x16)),*(undefined1 *)(lVar3 + 0x17));
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        if (uVar2 <= uVar5) {
          do {
            iVar1 = (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x18),
                                                *(undefined1 *)(lVar3 + 0x19)),
                                       *(undefined1 *)(lVar3 + 0x1a)),*(undefined1 *)(lVar3 + 0x1b))
                    - uVar4) + uVar2;
            if (iVar1 != 0) {
              *(uint *)(param_1 + 0x2c) = uVar2;
              *(int *)(param_1 + 0x30) = iVar1;
              *(uint *)(param_1 + 0x34) = uVar6;
              return;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 <= uVar5);
        }
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 + 0xc;
      } while (uVar6 < *(uint *)(param_1 + 0x38));
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 143c69c70 FUN_143c69c70 body=368 status=ok
// SIG undefined FUN_143c69c70(void)

int FUN_143c69c70(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar3 = 0;
  uVar4 = *param_2;
  uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0xc),*(undefined1 *)(lVar1 + 0xd)),
                            *(undefined1 *)(lVar1 + 0xe)),*(undefined1 *)(lVar1 + 0xf));
  if (uVar7 != 0) {
    uVar6 = 0xffffffff;
    if (param_3 != '\0') {
      uVar4 = uVar4 + 1;
    }
    uVar8 = 0;
    uVar2 = 0;
    uVar9 = uVar7;
    if (uVar7 != 0) {
      do {
        uVar2 = uVar9 + uVar8 >> 1;
        lVar5 = (ulonglong)(uVar2 * 0xc) + lVar1;
        uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + 0x14),
                                           *(undefined1 *)(lVar5 + 0x15)),
                                  *(undefined1 *)(lVar5 + 0x16)),*(undefined1 *)(lVar5 + 0x17));
        uVar10 = uVar2;
        if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + 0x10),*(undefined1 *)(lVar5 + 0x11)),
                              *(undefined1 *)(lVar5 + 0x12)),*(undefined1 *)(lVar5 + 0x13)) <= uVar4
           ) {
          if (uVar4 <= uVar6) {
            iVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + 0x18),
                                               *(undefined1 *)(lVar5 + 0x19)),
                                      *(undefined1 *)(lVar5 + 0x1a)),*(undefined1 *)(lVar5 + 0x1b));
            break;
          }
          uVar8 = uVar2 + 1;
          uVar10 = uVar9;
        }
        uVar9 = uVar10;
      } while (uVar8 < uVar10);
    }
    if (param_3 == '\0') {
      return iVar3;
    }
    if ((uVar4 <= uVar6) || (uVar2 = uVar2 + 1, uVar2 != uVar7)) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(uint *)(param_1 + 0x2c) = uVar4;
      *(uint *)(param_1 + 0x34) = uVar2;
      if (iVar3 == 0) {
        FUN_143c69de0(param_1);
        if (*(char *)(param_1 + 0x28) == '\0') {
          return 0;
        }
        iVar3 = *(int *)(param_1 + 0x30);
      }
      else {
        *(int *)(param_1 + 0x30) = iVar3;
      }
      if (iVar3 == 0) {
        return 0;
      }
      *param_2 = *(uint *)(param_1 + 0x2c);
      return iVar3;
    }
  }
  return 0;
}



// FUNCTION 143c69de0 FUN_143c69de0 body=254 status=ok
// SIG undefined FUN_143c69de0(void)

void FUN_143c69de0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x2c) != -1) {
    uVar1 = *(uint *)(param_1 + 0x34);
    uVar2 = *(int *)(param_1 + 0x2c) + 1;
    if (uVar1 < *(uint *)(param_1 + 0x38)) {
      uVar5 = uVar1 * 0xc;
      do {
        lVar3 = (ulonglong)uVar5 + *(longlong *)(param_1 + 0x18);
        uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x10),
                                           *(undefined1 *)(lVar3 + 0x11)),
                                  *(undefined1 *)(lVar3 + 0x12)),*(undefined1 *)(lVar3 + 0x13));
        iVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x18),
                                           *(undefined1 *)(lVar3 + 0x19)),
                                  *(undefined1 *)(lVar3 + 0x1a)),*(undefined1 *)(lVar3 + 0x1b));
        if (uVar2 < uVar4) {
          uVar2 = uVar4;
        }
        if ((uVar2 <= CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x14),
                                                 *(undefined1 *)(lVar3 + 0x15)),
                                        *(undefined1 *)(lVar3 + 0x16)),*(undefined1 *)(lVar3 + 0x17)
                              )) && (iVar6 != 0)) {
          *(uint *)(param_1 + 0x2c) = uVar2;
          *(int *)(param_1 + 0x30) = iVar6;
          *(uint *)(param_1 + 0x34) = uVar1;
          return;
        }
        uVar1 = uVar1 + 1;
        uVar5 = uVar5 + 0xc;
      } while (uVar1 < *(uint *)(param_1 + 0x38));
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 143c69ee0 FUN_143c69ee0 body=155 status=ok
// SIG undefined FUN_143c69ee0(void)

undefined8 FUN_143c69ee0(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  uVar4 = 0;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 + uVar4 >> 1;
      puVar5 = param_1 + (ulonglong)(uVar2 * 4) + 4;
      uVar1 = (uint)CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]);
      if (uVar1 <= param_2) {
        if (param_2 <= (byte)puVar5[3] + uVar1) {
          return 1;
        }
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar4 < uVar3);
  }
  return 0;
}



// FUNCTION 143c69f80 FUN_143c69f80 body=156 status=ok
// SIG undefined FUN_143c69f80(void)

undefined2 FUN_143c69f80(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  uVar4 = 0;
  uVar1 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  if (uVar1 != 0) {
    do {
      uVar3 = uVar1 + uVar4 >> 1;
      puVar5 = param_1 + (ulonglong)(uVar3 * 5) + 4;
      uVar2 = (uint)CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]);
      if (uVar2 <= param_2) {
        if (param_2 <= uVar2) {
          return CONCAT11(puVar5[3],puVar5[4]);
        }
        uVar4 = uVar3 + 1;
        uVar3 = uVar1;
      }
      uVar1 = uVar3;
    } while (uVar4 < uVar1);
  }
  return 0;
}



// FUNCTION 143c6a020 FUN_143c6a020 body=66 status=ok
// SIG undefined FUN_143c6a020(void)

int FUN_143c6a020(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar3 = param_1 + 7;
  iVar2 = 0;
  for (iVar4 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]); iVar4 != 0;
      iVar4 = iVar4 + -1) {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 4;
    iVar2 = iVar2 + 1 + (uint)bVar1;
  }
  return iVar2;
}



// FUNCTION 143c6a070 FUN_143c6a070 body=102 status=ok
// SIG undefined FUN_143c6a070(void)

int FUN_143c6a070(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar1 = FUN_143c27410(param_3,4,*(uint *)(param_1 + 0x2c),param_2,
                          *(undefined8 *)(param_1 + 0x30),local_res10);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    *(uint *)(param_1 + 0x2c) = param_2;
  }
  return 0;
}



// FUNCTION 143c6a0e0 FUN_143c6a0e0 body=140 status=ok
// SIG undefined FUN_143c6a0e0(void)

undefined1 * FUN_143c6a0e0(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  uVar4 = 0;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 + uVar4 >> 1;
      puVar5 = param_1 + (ulonglong)(uVar2 * 0xb) + 4;
      uVar1 = (uint)CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]);
      if (uVar1 <= param_2) {
        if (param_2 <= uVar1) {
          return puVar5 + 3;
        }
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar4 < uVar3);
  }
  return (undefined1 *)0x0;
}



// FUNCTION 143c6a170 FUN_143c6a170 body=309 status=ok
// SIG undefined FUN_143c6a170(void)

undefined8 FUN_143c6a170(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int local_res8 [2];
  
  pbVar1 = param_2 + 7;
  iVar5 = 0;
  for (iVar7 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]); iVar7 != 0;
      iVar7 = iVar7 + -1) {
    bVar2 = *pbVar1;
    pbVar1 = pbVar1 + 4;
    iVar5 = iVar5 + 1 + (uint)bVar2;
  }
  uVar3 = iVar5 + 1;
  local_res8[0] = 0;
  iVar7 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
  if (*(uint *)(param_1 + 0x2c) < uVar3) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar4 = FUN_143c27410(param_3,4,*(uint *)(param_1 + 0x2c),uVar3,*(undefined8 *)(param_1 + 0x30),
                          local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    if (local_res8[0] != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar3;
  }
  puVar6 = *(uint **)(param_1 + 0x30);
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    uVar3 = (uint)CONCAT21(CONCAT11(param_2[4],param_2[5]),param_2[6]);
    iVar5 = (byte)param_2[7] + 1;
    do {
      *puVar6 = uVar3;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    param_2 = param_2 + 4;
  }
  *puVar6 = 0;
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 143c6a2b0 FUN_143c6a2b0 body=264 status=ok
// SIG undefined FUN_143c6a2b0(void)

uint * FUN_143c6a2b0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res8 [2];
  
  puVar7 = param_2 + 1;
  puVar9 = param_2 + 2;
  puVar10 = param_2 + 3;
  local_res8[0] = 0;
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),*puVar9),*puVar10);
  uVar1 = uVar8 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar1) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar6 = FUN_143c27410(param_3,4,*(uint *)(param_1 + 0x2c),uVar1,*(undefined8 *)(param_1 + 0x30),
                          local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    if (local_res8[0] != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
  }
  puVar5 = *(uint **)(param_1 + 0x30);
  uVar13 = 0;
  if (uVar8 != 0) {
    uVar13 = (ulonglong)uVar8;
    uVar12 = (ulonglong)uVar8;
    puVar11 = puVar5;
    do {
      puVar2 = puVar7 + 3;
      puVar3 = puVar9 + 3;
      puVar7 = puVar7 + 5;
      puVar4 = puVar10 + 3;
      puVar9 = puVar9 + 5;
      puVar10 = puVar10 + 5;
      *puVar11 = (uint)CONCAT21(CONCAT11(*puVar2,*puVar3),*puVar4);
      uVar12 = uVar12 - 1;
      puVar11 = puVar11 + 1;
    } while (uVar12 != 0);
  }
  puVar5[uVar13] = 0;
  return puVar5;
}



// FUNCTION 143c6a3c0 FUN_143c6a3c0 body=1227 status=ok
// SIG undefined FUN_143c6a3c0(void)

uint FUN_143c6a3c0(longlong *param_1,uint *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  
  lVar2 = param_1[3];
  uVar12 = 0;
  uVar11 = *param_2;
  uVar3 = CONCAT11(*(undefined1 *)(lVar2 + 6),*(undefined1 *)(lVar2 + 7));
  uVar18 = uVar3 & 0xfffffffe;
  if ((uVar3 & 0xfffe) == 0) {
    return 0;
  }
  uVar20 = 0xffff;
  uVar22 = (uint)(uVar3 >> 1);
  if (param_3 != '\0') {
    uVar11 = uVar11 + 1;
  }
  uVar9 = 0;
  uVar16 = uVar22;
  if (uVar3 >> 1 != 0) {
    uVar1 = uVar18 + 2;
    lVar14 = lVar2;
    uVar15 = uVar22;
    do {
      uVar16 = uVar15 + uVar9 >> 1;
      puVar5 = (undefined1 *)(lVar14 + 0xe + (ulonglong)(uVar16 * 2));
      puVar6 = puVar5 + uVar1;
      uVar20 = (uint)CONCAT11(*puVar5,puVar5[1]);
      uVar13 = (uint)CONCAT11(*puVar6,puVar6[1]);
      uVar19 = uVar16;
      if (uVar13 <= uVar11) {
        if (uVar11 <= uVar20) {
          pbVar7 = puVar6 + uVar18;
          pbVar8 = pbVar7 + uVar18;
          uVar21 = (int)(short)((ushort)*pbVar7 << 8) | (uint)pbVar7[1];
          uVar19 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
          if ((((uVar22 - 1 <= uVar16) && (uVar13 == 0xffff)) && (uVar20 == 0xffff)) &&
             ((CONCAT11(*pbVar8,pbVar8[1]) != 0 &&
              ((byte *)((ulonglong)*(uint *)(*param_1 + 0x288) + *(longlong *)(*param_1 + 0x280)) <
               pbVar8 + (ulonglong)uVar19 + 2)))) {
            uVar21 = 1;
            uVar19 = 0;
          }
          if ((*(byte *)(param_1 + 4) & 2) != 0) {
            uVar17 = uVar16;
            if (uVar19 == 0xffff) {
              uVar17 = uVar16 + 1;
            }
            uVar10 = uVar16;
            if (uVar15 + uVar9 >> 1 == 0) goto LAB_143c6a60a;
            iVar4 = uVar16 * 2;
            goto LAB_143c6a570;
          }
          uVar12 = 0;
          if (uVar19 != 0xffff) goto LAB_143c6a7c6;
          break;
        }
        uVar9 = uVar16 + 1;
        uVar19 = uVar15;
      }
      lVar14 = param_1[3];
      uVar15 = uVar19;
    } while (uVar9 < uVar19);
  }
  goto LAB_143c6a808;
  while( true ) {
    puVar5 = puVar5 + uVar1;
    pbVar7 = puVar5 + uVar18;
    uVar13 = (uint)CONCAT11(*puVar5,puVar5[1]);
    pbVar8 = pbVar7 + uVar18;
    uVar21 = (int)(short)((ushort)*pbVar7 << 8) | (uint)pbVar7[1];
    uVar19 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
    if (uVar19 != 0xffff) {
      uVar17 = uVar10 - 1;
    }
    iVar4 = iVar4 + -2;
    uVar10 = uVar10 - 1;
    uVar20 = uVar12;
    if (uVar10 == 0) break;
LAB_143c6a570:
    puVar5 = (undefined1 *)(param_1[3] + 0xe + (ulonglong)(iVar4 - 2));
    uVar12 = (uint)CONCAT11(*puVar5,puVar5[1]);
    if (uVar12 < uVar11) break;
  }
LAB_143c6a60a:
  uVar9 = uVar16 + 1;
  if (uVar17 == uVar9) {
    if (uVar10 != uVar16) {
      puVar5 = (undefined1 *)(param_1[3] + 0xe + (ulonglong)(uVar16 * 2));
      puVar6 = puVar5 + uVar1;
      uVar20 = (uint)CONCAT11(*puVar5,puVar5[1]);
      pbVar7 = puVar6 + uVar18;
      uVar13 = (uint)CONCAT11(*puVar6,puVar6[1]);
      pbVar8 = pbVar7 + uVar18;
      uVar21 = (int)(short)((ushort)*pbVar7 << 8) | (uint)pbVar7[1];
      uVar19 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
    }
    uVar17 = uVar16;
    if (uVar9 < uVar22) {
      uVar12 = uVar9 * 2;
      do {
        puVar5 = (undefined1 *)((ulonglong)uVar12 + 0xe + lVar2);
        pbVar8 = puVar5 + uVar1;
        uVar15 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
        if (uVar11 < uVar15) break;
        pbVar7 = pbVar8 + uVar18;
        pbVar8 = pbVar7 + uVar18;
        uVar21 = (int)(short)((ushort)*pbVar7 << 8) | (uint)pbVar7[1];
        uVar19 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
        if (uVar19 != 0xffff) {
          uVar17 = uVar9;
        }
        uVar9 = uVar9 + 1;
        uVar12 = uVar12 + 2;
        uVar20 = (uint)CONCAT11(*puVar5,puVar5[1]);
        uVar13 = uVar15;
      } while (uVar9 < uVar22);
    }
    uVar12 = 0;
    uVar10 = uVar9 - 1;
    bVar23 = uVar17 == uVar16;
    uVar16 = uVar10;
    if (bVar23) goto LAB_143c6a808;
  }
  uVar16 = uVar17;
  if (uVar16 != uVar10) {
    puVar5 = (undefined1 *)(param_1[3] + 0xe + (ulonglong)(uVar16 * 2));
    puVar6 = puVar5 + uVar1;
    uVar20 = (uint)CONCAT11(*puVar5,puVar5[1]);
    pbVar7 = puVar6 + uVar18;
    uVar13 = (uint)CONCAT11(*puVar6,puVar6[1]);
    pbVar8 = pbVar7 + uVar18;
    uVar21 = (int)(short)((ushort)*pbVar7 << 8) | (uint)pbVar7[1];
    uVar19 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
  }
LAB_143c6a7c6:
  uVar18 = uVar11;
  if (uVar19 != 0) {
    uVar19 = uVar19 + (uVar11 - uVar13) * 2;
    uVar18 = (uint)CONCAT11(pbVar8[uVar19],pbVar8[(ulonglong)uVar19 + 1]);
    uVar12 = 0;
    if (uVar18 == 0) goto LAB_143c6a808;
  }
  uVar12 = uVar21 + uVar18 & 0xffff;
LAB_143c6a808:
  if (param_3 != '\0') {
    if ((uVar20 < uVar11) && (uVar16 = uVar16 + 1, uVar16 == uVar22)) {
      return 0;
    }
    iVar4 = FUN_143c6ab70(param_1,uVar16);
    if (iVar4 == 0) {
      *(uint *)(param_1 + 5) = uVar11;
      if (uVar12 == 0) {
        *(uint *)(param_1 + 5) = uVar11;
        tt_cmap4_next(param_1);
        uVar12 = *(uint *)((longlong)param_1 + 0x2c);
      }
      else {
        *(uint *)((longlong)param_1 + 0x2c) = uVar12;
      }
      if (uVar12 != 0) {
        *param_2 = *(uint *)(param_1 + 5);
      }
    }
    else if (uVar12 != 0) {
      *param_2 = uVar11;
    }
  }
  return uVar12;
}



// FUNCTION 143c6a890 FUN_143c6a890 body=488 status=ok
// SIG undefined FUN_143c6a890(void)

uint FUN_143c6a890(longlong *param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  lVar1 = param_1[3];
  uVar15 = 0;
  uVar7 = *param_2;
  uVar2 = CONCAT11(*(undefined1 *)(lVar1 + 6),*(undefined1 *)(lVar1 + 7));
  uVar8 = (uint)(uVar2 >> 1);
  if (uVar8 == 0) {
    return 0;
  }
  if (param_3 != '\0') {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < 0x10000) {
    uVar14 = (ulonglong)(uVar2 & 0xfffffffe);
    do {
      uVar12 = 0;
      pbVar4 = (byte *)(lVar1 + 0xe);
      puVar10 = (undefined1 *)(lVar1 + 0x10 + uVar14);
      if (uVar2 >> 1 != 0) {
        do {
          pbVar5 = pbVar4 + 2;
          uVar13 = (uint)CONCAT11(*puVar10,puVar10[1]);
          if ((uVar13 <= uVar7) && (uVar7 <= CONCAT11(*pbVar4,pbVar4[1]))) {
            pbVar6 = puVar10 + 2 + (uVar14 - 2);
            pbVar5 = pbVar6 + uVar14;
            uVar9 = (int)(short)((ushort)*pbVar6 << 8) | (uint)pbVar6[1];
            uVar3 = CONCAT11(*pbVar5,pbVar5[1]);
            uVar11 = (uint)uVar3;
            if (((uVar12 < uVar8 - 1) ||
                (((uVar13 != 0xffff || (CONCAT11(*pbVar4,pbVar4[1]) != 0xffff)) || (uVar3 == 0))))
               || (pbVar5 + (ulonglong)uVar11 + 2 <=
                   (byte *)((ulonglong)*(uint *)(*param_1 + 0x288) + *(longlong *)(*param_1 + 0x280)
                           ))) {
              if (uVar11 == 0xffff) goto LAB_143c6a9d5;
              if (uVar3 != 0) {
                uVar11 = uVar11 + (uVar7 - uVar13) * 2;
                uVar15 = (uint)CONCAT11(pbVar5[uVar11],pbVar5[(ulonglong)uVar11 + 1]);
                if (uVar15 != 0) {
                  uVar15 = uVar9 + uVar15 & 0xffff;
                }
                break;
              }
            }
            else {
              uVar9 = 1;
            }
            uVar15 = uVar9 + uVar7 & 0xffff;
            break;
          }
LAB_143c6a9d5:
          uVar12 = uVar12 + 1;
          pbVar4 = pbVar5;
          puVar10 = puVar10 + 2;
        } while (uVar12 < uVar8);
      }
      if (param_3 == '\0') {
        return uVar15;
      }
    } while ((uVar15 == 0) && (uVar7 = uVar7 + 1, uVar7 < 0x10000));
  }
  if ((param_3 != '\0') && (uVar15 != 0)) {
    *param_2 = uVar7;
  }
  return uVar15;
}



// FUNCTION 143c6aa80 tt_cmap4_next body=233 status=ok
// SIG undefined tt_cmap4_next(void)

void tt_cmap4_next(longlong param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  if (*(uint *)(param_1 + 0x28) < 0xffff) {
    uVar4 = *(uint *)(param_1 + 0x38);
    uVar6 = *(uint *)(param_1 + 0x28) + 1;
    if (uVar6 < uVar4) {
      uVar6 = uVar4;
    }
LAB_143c6aab0:
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (uVar6 <= uVar2) {
      if (*(longlong *)(param_1 + 0x48) == 0) {
        do {
          uVar4 = *(int *)(param_1 + 0x40) + uVar6 & 0xffff;
          if (uVar4 != 0) goto LAB_143c6ab45;
          uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar2);
      }
      else {
        puVar5 = (undefined1 *)
                 (*(longlong *)(param_1 + 0x48) + -1 + (ulonglong)((uVar6 - uVar4) * 2));
        do {
          puVar1 = puVar5 + 1;
          puVar5 = puVar5 + 2;
          if ((CONCAT11(*puVar1,*puVar5) != 0) &&
             (uVar4 = (uint)CONCAT11(*puVar1,*puVar5) + *(int *)(param_1 + 0x40) & 0xffff,
             uVar4 != 0)) {
LAB_143c6ab45:
            *(uint *)(param_1 + 0x28) = uVar6;
            *(uint *)(param_1 + 0x2c) = uVar4;
            return;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar2);
      }
    }
    iVar3 = FUN_143c6ab70(param_1,*(int *)(param_1 + 0x34) + 1);
    if (-1 < iVar3) {
      uVar4 = *(uint *)(param_1 + 0x38);
      if (uVar6 < uVar4) {
        uVar6 = uVar4;
      }
      goto LAB_143c6aab0;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 143c6ab70 FUN_143c6ab70 body=321 status=ok
// SIG undefined FUN_143c6ab70(void)

undefined8 FUN_143c6ab70(longlong *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  
  uVar5 = *(uint *)(param_1 + 6);
  if (param_2 < uVar5) {
    uVar7 = uVar5 * 2;
    uVar8 = param_2 * 2;
    do {
      puVar9 = (undefined1 *)(param_1[3] + 0xe + (ulonglong)uVar8);
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      puVar9 = puVar9 + (uVar7 + 2);
      *(uint *)((longlong)param_1 + 0x3c) = (uint)CONCAT11(uVar1,uVar2);
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      pbVar10 = puVar9 + uVar7;
      *(uint *)(param_1 + 7) = (uint)CONCAT11(uVar3,uVar4);
      pbVar11 = pbVar10 + uVar7;
      *(uint *)(param_1 + 8) = (int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar10[1];
      uVar6 = CONCAT11(*pbVar11,pbVar11[1]);
      uVar12 = (uint)uVar6;
      if ((((uVar5 - 1 <= param_2) && (CONCAT11(uVar3,uVar4) == 0xffff)) &&
          (CONCAT11(uVar1,uVar2) == 0xffff)) &&
         ((uVar6 != 0 &&
          ((byte *)((ulonglong)*(uint *)(*param_1 + 0x288) + *(longlong *)(*param_1 + 0x280)) <
           pbVar11 + (ulonglong)uVar12 + 2)))) {
        *(undefined4 *)(param_1 + 8) = 1;
LAB_143c6ac8e:
        *(uint *)((longlong)param_1 + 0x34) = param_2;
        param_1[9] = 0;
        return 0;
      }
      if (uVar12 != 0xffff) {
        if (uVar6 != 0) {
          *(uint *)((longlong)param_1 + 0x34) = param_2;
          param_1[9] = (longlong)(pbVar11 + uVar12);
          return 0;
        }
        goto LAB_143c6ac8e;
      }
      param_2 = param_2 + 1;
      uVar8 = uVar8 + 2;
    } while (param_2 < uVar5);
  }
  return 0xffffffff;
}



// FUNCTION 143c6acc0 FUN_143c6acc0 body=723 status=ok
// SIG undefined FUN_143c6acc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c6acc0(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_1e8 [32];
  undefined1 *local_1c8;
  uint local_1c0;
  undefined **local_1b8;
  undefined4 local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  longlong local_198;
  undefined *local_190;
  uint local_188;
  longlong local_180;
  undefined4 local_178;
  undefined2 local_174;
  undefined2 local_172;
  undefined1 *local_170;
  uint local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148 [276];
  int local_34;
  uint local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_170 = *(undefined1 **)(param_1 + 0x280);
  local_1a0 = local_170 + *(uint *)(param_1 + 0x288);
  local_158 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8);
  if (((local_170 == (undefined1 *)0x0) || (local_1a0 < local_170 + 4)) ||
     (CONCAT11(*local_170,local_170[1]) != 0)) {
    uVar3 = 8;
  }
  else {
    local_1c0 = (uint)CONCAT11(local_170[2],local_170[3]);
    puVar1 = local_170 + 4;
    local_198 = param_1;
    while ((local_1c0 != 0 && (puVar1 + 8 <= local_1a0))) {
      local_174 = CONCAT11(*puVar1,puVar1[1]);
      local_172 = CONCAT11(puVar1[2],puVar1[3]);
      local_178 = 0;
      local_1c8 = puVar1 + 8;
      local_168 = CONCAT31(CONCAT21(CONCAT11(puVar1[4],puVar1[5]),puVar1[6]),puVar1[7]);
      if ((local_168 != 0) && (local_168 <= *(int *)(local_198 + 0x288) - 2U)) {
        local_1a8 = local_170 + local_168;
        local_188 = (uint)CONCAT11(*local_1a8,local_1a8[1]);
        local_1b8 = &PTR_DAT_145d36790;
        do {
          local_190 = *local_1b8;
          if (*(uint *)(local_190 + 0x50) == local_188) {
            local_1b0 = 0;
            local_180 = local_198;
            FUN_143c27ae0(local_148,local_1a8,local_1a0,0);
            local_28 = (uint)*(ushort *)(local_198 + 0x174);
            iVar2 = _guard_xfg_dispatch_icall_nop(local_148,auStack_1e8);
            if (iVar2 == 0) {
              local_1b0 = (**(code **)(local_190 + 0x58))(local_1a8,local_148);
            }
            if ((local_34 == 0) &&
               (iVar2 = FUN_143c1ff20(local_190,local_1a8,&local_180), iVar2 == 0)) {
              *(undefined4 *)(local_160 + 0x20) = local_1b0;
            }
            break;
          }
          local_1b8 = local_1b8 + 1;
        } while (*local_1b8 != (undefined *)0x0);
      }
      local_1c0 = local_1c0 - 1;
      puVar1 = local_1c8;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143c6afa0 FUN_143c6afa0 body=563 status=ok
// SIG undefined FUN_143c6afa0(void)

int FUN_143c6afa0(longlong param_1,short param_2,undefined8 *param_3)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  short *psVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int local_res8 [2];
  
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  uVar11 = 0xffffffff;
  bVar15 = false;
  local_res8[0] = 0;
  uVar9 = 0xffffffff;
  uVar12 = 0xffffffff;
  uVar13 = 0xffffffff;
  psVar2 = *(short **)(param_1 + 0x1e8);
  uVar7 = 0;
  psVar8 = psVar2;
  uVar14 = 0xffffffff;
  if (*(ushort *)(param_1 + 0x1d0) != 0) {
    do {
      uVar13 = uVar14;
      if ((psVar8[3] == param_2) && (psVar8[4] != 0)) {
        sVar1 = *psVar8;
        if (sVar1 == 0) {
LAB_143c6b078:
          uVar13 = (uint)uVar7;
        }
        else if (sVar1 == 1) {
          if (psVar8[2] == 0) {
            uVar9 = (uint)uVar7;
          }
          else if (psVar8[1] == 0) {
            uVar11 = (uint)uVar7;
          }
        }
        else {
          if (sVar1 == 2) goto LAB_143c6b078;
          if (((sVar1 == 3) && ((uVar12 == 0xffffffff || ((psVar8[2] & 0x3ffU) == 9)))) &&
             (((ushort)psVar8[1] < 2 || (psVar8[1] == 10)))) {
            uVar12 = (uint)uVar7;
            bVar15 = (psVar8[2] & 0x3ffU) == 9;
          }
        }
      }
      uVar7 = uVar7 + 1;
      psVar8 = psVar8 + 0xc;
      uVar14 = uVar13;
    } while (uVar7 < *(ushort *)(param_1 + 0x1d0));
  }
  pcVar10 = (code *)0x0;
  if (-1 < (int)uVar9) {
    uVar11 = uVar9;
  }
  if (((int)uVar12 < 0) || ((-1 < (int)uVar11 && (!bVar15)))) {
    if (-1 < (int)uVar11) {
      pcVar10 = FUN_143c6b690;
      psVar8 = psVar2 + (longlong)(int)uVar11 * 0xc;
      goto LAB_143c6b103;
    }
    if ((int)uVar13 < 0) goto LAB_143c6b103;
    psVar8 = psVar2 + (longlong)(int)uVar13 * 0xc;
  }
  else {
    psVar8 = psVar2 + (longlong)(int)uVar12 * 0xc;
    if (1 < (ushort)psVar2[(longlong)(int)uVar12 * 0xc + 1]) {
      if (psVar2[(longlong)(int)uVar12 * 0xc + 1] == 10) {
        pcVar10 = FUN_143c6b730;
      }
      goto LAB_143c6b103;
    }
  }
  pcVar10 = FUN_143c6b730;
LAB_143c6b103:
  iVar4 = 0;
  if ((psVar8 == (short *)0x0) || (pcVar10 == (code *)0x0)) {
    *param_3 = 0;
  }
  else {
    if (*(longlong *)(psVar8 + 8) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x1f0);
      uVar5 = FUN_143c27410(uVar6,1,0,psVar8[4],0,local_res8);
      *(undefined8 *)(psVar8 + 8) = uVar5;
      if (((local_res8[0] != 0) ||
          (local_res8[0] = FUN_143c251d0(uVar3,*(undefined4 *)(psVar8 + 6)), local_res8[0] != 0)) ||
         (local_res8[0] = FUN_143c24ae0(uVar3,*(undefined8 *)(psVar8 + 8),psVar8[4]),
         local_res8[0] != 0)) {
        ft_mem_free(uVar6,*(undefined8 *)(psVar8 + 8));
        psVar8[8] = 0;
        psVar8[9] = 0;
        psVar8[10] = 0;
        psVar8[0xb] = 0;
        psVar8[4] = 0;
        *param_3 = 0;
        return local_res8[0];
      }
    }
    uVar6 = (*pcVar10)(psVar8,uVar6);
    *param_3 = uVar6;
    iVar4 = local_res8[0];
  }
  return iVar4;
}



// FUNCTION 143c6b1e0 FUN_143c6b1e0 body=545 status=ok
// SIG undefined FUN_143c6b1e0(void)

undefined4 FUN_143c6b1e0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  
  puVar3 = (undefined8 *)(param_1 + 0x420);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  piVar7 = *(int **)(param_1 + 0xf8);
  piVar11 = piVar7 + (ulonglong)*(ushort *)(param_1 + 0xf4) * 4;
  while( true ) {
    if (piVar11 <= piVar7) {
      return 8;
    }
    if ((*piVar7 == 0x42444620) && (piVar7[3] != 0)) break;
    piVar7 = piVar7 + 4;
  }
  uVar4 = piVar7[3];
  iVar6 = FUN_143c251d0(param_2,piVar7[2]);
  if (iVar6 != 0) {
    return 8;
  }
  if (uVar4 < 8) {
    return 8;
  }
  iVar6 = FT_Stream_ExtractFrame(param_2,uVar4,puVar3);
  if (iVar6 != 0) {
    return 8;
  }
  puVar5 = (undefined1 *)*puVar3;
  *(undefined1 **)(param_1 + 0x428) = puVar5 + uVar4;
  uVar13 = (uint)CONCAT11(puVar5[2],puVar5[3]);
  uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar5[4],puVar5[5]),puVar5[6]),puVar5[7]);
  if ((((CONCAT11(*puVar5,puVar5[1]) == 1) && (7 < uVar8)) && (uVar13 <= uVar8 - 8 >> 2)) &&
     (uVar8 + 1 <= uVar4)) {
    puVar9 = puVar5 + 8;
    lVar12 = 0;
    *(uint *)(param_1 + 0x43c) = uVar13;
    *(undefined1 **)(param_1 + 0x430) = puVar5 + uVar8;
    *(uint *)(param_1 + 0x438) = uVar4 - uVar8;
    puVar15 = puVar9 + uVar13 * 4;
    lVar14 = 0;
    if (1 < uVar13) {
      uVar10 = (ulonglong)((uVar13 - 2 >> 1) + 1);
      do {
        uVar13 = uVar13 - 2;
        lVar12 = lVar12 + (ulonglong)((uint)CONCAT11(puVar9[2],puVar9[3]) * 10);
        puVar1 = puVar9 + 6;
        puVar2 = puVar9 + 7;
        puVar9 = puVar9 + 8;
        lVar14 = lVar14 + (ulonglong)((uint)CONCAT11(*puVar1,*puVar2) * 10);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar13 != 0) {
      puVar15 = puVar15 + (uint)CONCAT11(puVar9[2],puVar9[3]) * 10;
    }
    if (puVar15 + lVar14 + lVar12 <= puVar5 + uVar8) {
      *(undefined1 *)(param_1 + 0x440) = 1;
      return 0;
    }
  }
  FT_Stream_ReleaseFrame(param_2,puVar3);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  return 8;
}



// FUNCTION 143c6b410 FUN_143c6b410 body=638 status=ok
// SIG undefined FUN_143c6b410(void)

ulonglong FUN_143c6b410(longlong param_1,int param_2,uint param_3,undefined8 param_4,
                       undefined8 param_5,short *param_6)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ushort local_res10 [4];
  uint local_48 [4];
  
  iVar11 = 0;
  param_6[0] = 0;
  param_6[1] = 0;
  lVar10 = (ulonglong)(uint)(param_2 * 4) + *(longlong *)(param_1 + 0x3f0);
  uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar10 + 8),*(undefined1 *)(lVar10 + 9)),
                            *(undefined1 *)(lVar10 + 10)),*(undefined1 *)(lVar10 + 0xb));
  uVar8 = (**(code **)(param_1 + 0x290))(param_1,0x73626978,param_4,local_48);
  if ((int)uVar8 == 0) {
    iVar4 = IStreamingManager::GetNumWantingResourcesID(param_4);
    if (param_3 <= *(uint *)(param_1 + 0x10)) {
      do {
        if ((local_48[0] <= uVar9) || (local_48[0] - uVar9 < param_3 * 4 + 0xc)) {
          return 3;
        }
        uVar8 = FUN_143c251d0(param_4,iVar4 + 4 + param_3 * 4 + uVar9);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        uVar8 = FUN_143c24650(param_4,8);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        uVar5 = FUN_143c24870(param_4);
        uVar6 = FUN_143c24870(param_4);
        FT_Stream_ExitFrame(param_4);
        if (uVar5 == uVar6) break;
        if (uVar6 < uVar5) {
          return 3;
        }
        if (uVar6 - uVar5 < 8) {
          return 3;
        }
        if (local_48[0] - uVar9 < uVar6) {
          return 3;
        }
        uVar8 = FUN_143c251d0(param_4,uVar5 + iVar4 + uVar9);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        uVar8 = FUN_143c24650(param_4,uVar6 - uVar5);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        sVar1 = FUN_143c24910(param_4);
        sVar2 = FUN_143c24910(param_4);
        iVar7 = FUN_143c24870(param_4);
        if (iVar7 != 0x64757065) {
          if ((iVar7 == 0x6a706720) ||
             ((iVar7 != 0x706e6720 && ((iVar7 == 0x7267626c || (iVar7 == 0x74696666)))))) {
            uVar9 = 2;
          }
          else {
            uVar9 = 7;
          }
LAB_143c6b609:
          FT_Stream_ExitFrame(param_4);
          if (uVar9 == 0) {
            FUN_143c65f10(param_1,0,param_3,&param_5,local_res10);
            param_6[2] = sVar1;
            param_6[3] = *param_6 - sVar2;
            param_6[4] = (short)((int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x80) + 0x18) *
                                      (uint)local_res10[0]) /
                                (int)(uint)*(ushort *)(param_1 + 0x112));
          }
          return (ulonglong)uVar9;
        }
        if (3 < iVar11) {
          uVar9 = 3;
          goto LAB_143c6b609;
        }
        uVar3 = FUN_143c24910(param_4);
        param_3 = (uint)uVar3;
        FT_Stream_ExitFrame(param_4);
        iVar11 = iVar11 + 1;
      } while ((uint)uVar3 <= *(uint *)(param_1 + 0x10));
    }
    uVar8 = 6;
  }
  return uVar8;
}



// FUNCTION 143c6b690 FUN_143c6b690 body=159 status=ok
// SIG undefined FUN_143c6b690(void)

byte * FUN_143c6b690(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_res8 [2];
  
  uVar1 = *(ushort *)(param_1 + 8);
  pbVar5 = *(byte **)(param_1 + 0x10);
  uVar7 = 0;
  pbVar3 = (byte *)FUN_143c27410(param_2,1,0,uVar1 + 1,0,local_res8);
  if (local_res8[0] != 0) {
    return (byte *)0x0;
  }
  pbVar4 = pbVar3;
  if (uVar1 != 0) {
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      if (bVar2 == 0) break;
      if (0x5f < bVar2 - 0x20) {
        bVar2 = 0x3f;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *pbVar4 = bVar2;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 < uVar1);
  }
  pbVar3[uVar7] = 0;
  return pbVar3;
}



// FUNCTION 143c6b730 FUN_143c6b730 body=182 status=ok
// SIG undefined FUN_143c6b730(void)

undefined1 * FUN_143c6b730(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  int local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar8 = 0;
  uVar3 = *(ushort *)(param_1 + 8) >> 1;
  puVar5 = (undefined1 *)FUN_143c27410(param_2,1,0,uVar3 + 1,0,local_res8);
  if (local_res8[0] != 0) {
    return (undefined1 *)0x0;
  }
  if (uVar3 != 0) {
    puVar6 = (undefined1 *)(lVar2 + -1);
    puVar9 = puVar5;
    do {
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 2;
      uVar4 = (uint)CONCAT11(*puVar1,*puVar6);
      if (uVar4 == 0) break;
      if (0x5f < uVar4 - 0x20) {
        uVar4 = 0x3f;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      *puVar9 = (char)uVar4;
      puVar9 = puVar9 + 1;
    } while (uVar7 < uVar3);
  }
  puVar5[uVar8] = 0;
  return puVar5;
}



// FUNCTION 143c6b7f0 FUN_143c6b7f0 body=226 status=ok
// SIG undefined FUN_143c6b7f0(void)

undefined8 FUN_143c6b7f0(longlong *param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  
  puVar4 = (uint *)param_1[2];
  if ((char)param_1[4] == '\0') {
    return 6;
  }
  uVar2 = *(ushort *)param_1[3];
  uVar3 = ((ushort *)param_1[3])[1];
  puVar4[1] = (uint)uVar3;
  uVar8 = (uint)uVar2;
  *puVar4 = uVar8;
  cVar1 = *(char *)((longlong)param_1 + 0x22);
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)puVar4 + 0x1a) = 1;
    puVar4[2] = uVar3 + 7 >> 3;
    uVar5 = 2;
  }
  else {
    uVar6 = (uint)uVar3;
    if (cVar1 == '\x02') {
      *(undefined1 *)((longlong)puVar4 + 0x1a) = 3;
      puVar4[2] = uVar6 + 3 >> 2;
      uVar5 = 4;
    }
    else if (cVar1 == '\x04') {
      *(undefined1 *)((longlong)puVar4 + 0x1a) = 4;
      puVar4[2] = uVar6 + 1 >> 1;
      uVar5 = 0x10;
    }
    else if (cVar1 == '\b') {
      puVar4[2] = uVar6;
      uVar5 = 0x100;
      *(undefined1 *)((longlong)puVar4 + 0x1a) = 2;
    }
    else {
      if (cVar1 != ' ') {
        return 3;
      }
      puVar4[2] = (uint)uVar3 << 2;
      uVar5 = 0x100;
      *(undefined1 *)((longlong)puVar4 + 0x1a) = 7;
    }
  }
  iVar9 = uVar8 * puVar4[2];
  *(undefined2 *)(puVar4 + 6) = uVar5;
  if (iVar9 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_143c26a10(*(undefined8 *)(*param_1 + 0x78),iVar9);
    if ((int)uVar7 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x21) = 1;
      return uVar7;
    }
  }
  return uVar7;
}



// FUNCTION 143c6b8e0 FUN_143c6b8e0 body=365 status=ok
// SIG undefined FUN_143c6b8e0(void)

ulonglong FUN_143c6b8e0(longlong *param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 local_res10 [2];
  
  lVar5 = *(longlong *)(param_2 + 0xa0);
  uVar2 = (**(code **)(param_2 + 0x290))(param_2,0x43424454,lVar5,local_res10);
  uVar6 = (ulonglong)uVar2;
  if (uVar2 != 0) {
    uVar2 = (**(code **)(param_2 + 0x290))(param_2,0x45424454,lVar5,local_res10);
    uVar6 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(param_2 + 0x290))(param_2,0x62646174,lVar5,local_res10);
      uVar6 = uVar4 & 0xffffffff;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
  *param_1 = param_2;
  param_1[1] = lVar5;
  lVar1 = *(longlong *)(param_2 + 0x78);
  param_1[3] = param_4;
  param_1[2] = lVar1 + 0x68;
  *(undefined2 *)(param_1 + 4) = 0;
  uVar3 = IStreamingManager::GetNumWantingResourcesID(lVar5);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = local_res10[0];
  param_1[7] = *(longlong *)(param_2 + 0x3f0);
  param_1[8] = (ulonglong)*(uint *)(param_2 + 0x3f8) + *(longlong *)(param_2 + 0x3f0);
  if (param_3 * 0x30 + 0x37U <= *(uint *)(param_2 + 0x3f8)) {
    lVar5 = (ulonglong)(uint)(param_3 * 0x30) + param_1[7];
    uVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + 8),*(undefined1 *)(lVar5 + 9)),
                              *(undefined1 *)(lVar5 + 10)),*(undefined1 *)(lVar5 + 0xb));
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + 0x10),*(undefined1 *)(lVar5 + 0x11)),
                              *(undefined1 *)(lVar5 + 0x12)),*(undefined1 *)(lVar5 + 0x13));
    *(uint *)(param_1 + 6) = uVar7;
    *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)(lVar5 + 0x36);
    if ((uVar2 <= *(uint *)(param_2 + 0x3f8)) && (uVar7 <= *(uint *)(param_2 + 0x3f8) - uVar2 >> 3))
    {
      return uVar6;
    }
  }
  return 3;
}



// FUNCTION 143c6ba50 FUN_143c6ba50 body=550 status=ok
// SIG undefined FUN_143c6ba50(void)

undefined8 FUN_143c6ba50(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar11 = (uint)(*(ushort **)(param_1 + 0x18))[1];
  uVar6 = **(ushort **)(param_1 + 0x18);
  uVar14 = (uint)uVar6;
  uVar2 = puVar3[2];
  uVar15 = *(byte *)(param_1 + 0x22) * uVar11;
  if ((((-1 < (int)param_4) && (uVar11 + param_4 <= puVar3[1])) && (-1 < param_5)) &&
     ((uVar14 + param_5 <= *puVar3 && (param_2 + ((int)(uVar15 * uVar14 + 7) >> 3) <= param_3)))) {
    uVar9 = param_4 & 7;
    uVar7 = 0;
    uVar5 = 0;
    pbVar8 = (byte *)((longlong)(int)(uVar2 * param_5 + ((int)param_4 >> 3)) +
                     *(longlong *)(puVar3 + 4));
    uVar11 = uVar14;
    if (uVar6 != 0) {
      do {
        pbVar13 = pbVar8;
        uVar12 = uVar15;
        if (uVar9 != 0) {
          uVar12 = 8 - uVar9;
          if ((int)uVar15 < (int)(8 - uVar9)) {
            uVar12 = uVar15;
          }
          if (uVar11 == uVar14) {
            uVar5 = (ushort)*param_2;
            param_2 = param_2 + 1;
            uVar7 = uVar9;
          }
          else if ((int)uVar7 < (int)uVar12) {
            if (param_2 < param_3) {
              uVar5 = uVar5 | *param_2;
              param_2 = param_2 + 1;
            }
            uVar7 = uVar7 + (8 - uVar12);
          }
          else {
            uVar5 = uVar5 >> 8;
            uVar7 = uVar7 - uVar12;
          }
          pbVar13 = pbVar8 + 1;
          uVar6 = uVar5 >> ((byte)uVar7 & 0x1f);
          uVar5 = uVar5 << 8;
          *pbVar8 = *pbVar8 | ~(-1 << ((byte)uVar12 & 0x1f)) <<
                              (((char)-uVar12 - (char)uVar9) + 8U & 0x1f) & (byte)uVar6;
          uVar12 = -uVar12 + uVar15;
        }
        bVar4 = (byte)uVar7;
        if (7 < (int)uVar12) {
          uVar10 = (ulonglong)(uVar12 >> 3);
          uVar12 = uVar12 + (uVar12 >> 3) * -8;
          do {
            bVar1 = *param_2;
            param_2 = param_2 + 1;
            uVar6 = uVar5 | bVar1;
            uVar5 = (ushort)bVar1 << 8;
            *pbVar13 = *pbVar13 | (byte)(uVar6 >> (bVar4 & 0x1f));
            pbVar13 = pbVar13 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (0 < (int)uVar12) {
          if ((int)uVar7 < (int)uVar12) {
            if (param_2 < param_3) {
              uVar5 = uVar5 | *param_2;
              param_2 = param_2 + 1;
            }
            *pbVar13 = *pbVar13 |
                       (byte)(uVar5 >> (bVar4 & 0x1f)) & (byte)(0xff00 >> ((byte)uVar12 & 0x1f));
            uVar7 = uVar7 + (8 - uVar12);
            uVar5 = uVar5 << 8;
          }
          else {
            *pbVar13 = *pbVar13 |
                       (byte)(uVar5 >> (bVar4 & 0x1f)) & (byte)(0xff00 >> ((byte)uVar12 & 0x1f));
            uVar7 = uVar7 - uVar12;
          }
        }
        uVar11 = uVar11 - 1;
        pbVar8 = pbVar8 + (int)uVar2;
      } while (0 < (int)uVar11);
    }
    return 0;
  }
  return 3;
}



// FUNCTION 143c6bc80 FUN_143c6bc80 body=539 status=ok
// SIG undefined FUN_143c6bc80(void)

ulonglong FUN_143c6bc80(longlong param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                       undefined4 param_6)

{
  byte *pbVar1;
  ushort uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  uint uVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte *pbVar8;
  uint uVar9;
  byte *local_res8;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x28) < param_3 + param_4) {
    return 6;
  }
  uVar6 = FUN_143c251d0(uVar3,*(int *)(param_1 + 0x24) + param_3);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  uVar6 = FT_Stream_ExtractFrame(uVar3,(ulonglong)param_4,&local_res8);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  pbVar1 = local_res8 + param_4;
  pbVar8 = local_res8;
  switch(param_2 + -1) {
  case 0:
  case 1:
  case 7:
  case 0x10:
    puVar4 = *(ushort **)(param_1 + 0x18);
    pbVar8 = local_res8 + 5;
    if (pbVar1 < pbVar8) goto LAB_143c6bd65;
    *puVar4 = (ushort)*local_res8;
    puVar4[1] = (ushort)local_res8[1];
    puVar4[2] = (short)(char)local_res8[2];
    puVar4[3] = (short)(char)local_res8[3];
    puVar4[4] = (ushort)local_res8[4];
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined1 *)(param_1 + 0x20) = 1;
    break;
  default:
switchD_143c6bd1e_caseD_2:
    break;
  case 5:
  case 6:
  case 8:
  case 0x11:
    puVar4 = *(ushort **)(param_1 + 0x18);
    if (local_res8 + 5 <= pbVar1) {
      *puVar4 = (ushort)*local_res8;
      puVar4[1] = (ushort)local_res8[1];
      puVar4[2] = (short)(char)local_res8[2];
      puVar4[3] = (short)(char)local_res8[3];
      pbVar8 = local_res8 + 8;
      puVar4[4] = (ushort)local_res8[4];
      if (pbVar8 <= pbVar1) {
        puVar4[5] = (short)(char)local_res8[5];
        puVar4[6] = (short)(char)local_res8[6];
        puVar4[7] = (ushort)local_res8[7];
        *(undefined1 *)(param_1 + 0x20) = 1;
        goto switchD_143c6bd1e_caseD_2;
      }
    }
LAB_143c6bd65:
    uVar5 = 6;
    goto LAB_143c6be74;
  }
  uVar5 = 0;
  switch(param_2 + -1) {
  case 0:
  case 5:
    pcVar7 = FUN_143c6bf10;
    break;
  case 1:
  case 6:
    uVar2 = (*(ushort **)(param_1 + 0x18))[1];
    uVar5 = (uint)**(ushort **)(param_1 + 0x18);
    uVar9 = (uVar2 + 7 >> 3) * uVar5;
    if ((uVar9 <= uVar5 * uVar2 + 7 >> 3) || (uVar9 - ((int)pbVar1 - (int)pbVar8) != 0))
    goto switchD_143c6bddd_caseD_4;
    pcVar7 = FUN_143c6bf10;
    break;
  default:
    uVar5 = 8;
    goto LAB_143c6be74;
  case 4:
switchD_143c6bddd_caseD_4:
    pcVar7 = FUN_143c6ba50;
    break;
  case 7:
    pbVar8 = pbVar8 + 1;
    if (pbVar1 < pbVar8) goto LAB_143c6be74;
  case 8:
    pcVar7 = FUN_143c6c0f0;
    break;
  case 0x10:
  case 0x11:
  case 0x12:
    uVar5 = 7;
    goto LAB_143c6be74;
  }
  if ((*(char *)(param_1 + 0x21) != '\0') || (uVar5 = FUN_143c6b7f0(param_1), uVar5 == 0)) {
    uVar5 = (*pcVar7)(param_1,pbVar8,pbVar1,param_5,param_6);
  }
LAB_143c6be74:
  FT_Stream_ReleaseFrame(uVar3,&local_res8);
  return (ulonglong)uVar5;
}



// FUNCTION 143c6bf10 FUN_143c6bf10 body=472 status=ok
// SIG undefined FUN_143c6bf10(void)

undefined8 FUN_143c6bf10(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  sbyte sVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar6 = (uint)(*(ushort **)(param_1 + 0x18))[1];
  uVar3 = puVar4[2];
  uVar2 = **(ushort **)(param_1 + 0x18);
  uVar13 = (uint)uVar2;
  uVar8 = *(byte *)(param_1 + 0x22) * uVar6;
  if ((((-1 < (int)param_4) && (uVar6 + param_4 <= puVar4[1])) && (-1 < param_5)) &&
     ((uVar13 + param_5 <= *puVar4 && (param_2 + (int)(((int)(uVar8 + 7) >> 3) * uVar13) <= param_3)
      ))) {
    pbVar7 = (byte *)((longlong)(int)(uVar3 * param_5 + ((int)param_4 >> 3)) +
                     *(longlong *)(puVar4 + 4));
    param_4 = param_4 & 7;
    if (param_4 == 0) {
      if (uVar2 != 0) {
        do {
          pbVar12 = pbVar7;
          uVar6 = uVar8;
          if (7 < uVar8) {
            uVar9 = (ulonglong)(uVar8 >> 3);
            uVar6 = uVar8 + (uVar8 >> 3) * -8;
            do {
              bVar1 = *param_2;
              param_2 = param_2 + 1;
              *pbVar12 = *pbVar12 | bVar1;
              pbVar12 = pbVar12 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          if (0 < (int)uVar6) {
            *pbVar12 = *pbVar12 | (byte)(0xff00 >> ((byte)uVar6 & 0x1f)) & *param_2;
            param_2 = param_2 + 1;
          }
          uVar13 = uVar13 - 1;
          pbVar7 = pbVar7 + (int)uVar3;
        } while (0 < (int)uVar13);
      }
    }
    else if (uVar2 != 0) {
      do {
        uVar11 = 0;
        sVar5 = (sbyte)param_4;
        pbVar12 = pbVar7;
        uVar6 = uVar8;
        if (7 < uVar8) {
          uVar9 = (ulonglong)(uVar8 >> 3);
          uVar6 = uVar8 + (uVar8 >> 3) * -8;
          do {
            uVar10 = uVar11 | *param_2;
            param_2 = param_2 + 1;
            uVar11 = uVar10 << 8;
            *pbVar12 = *pbVar12 | (byte)(uVar10 >> sVar5);
            pbVar12 = pbVar12 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (0 < (int)uVar6) {
          uVar11 = uVar11 | 0xff00U >> ((byte)uVar6 & 0x1f) & (uint)*param_2;
          param_2 = param_2 + 1;
        }
        *pbVar12 = *pbVar12 | (byte)(uVar11 >> sVar5);
        if (8 < (int)(uVar6 + param_4)) {
          pbVar12[1] = pbVar12[1] | (byte)((uVar11 << 8) >> sVar5);
        }
        uVar13 = uVar13 - 1;
        pbVar7 = pbVar7 + (int)uVar3;
      } while (0 < (int)uVar13);
      return 0;
    }
    return 0;
  }
  return 3;
}



// FUNCTION 143c6c0f0 FUN_143c6c0f0 body=375 status=ok
// SIG undefined FUN_143c6c0f0(void)

int FUN_143c6c0f0(longlong param_1,undefined1 *param_2,undefined1 *param_3,int param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  ushort uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  
  lVar7 = *(longlong *)(param_1 + 0x18);
  puVar10 = param_2 + 2;
  iVar9 = 0;
  bVar1 = *(byte *)(lVar7 + 8);
  cVar2 = *(char *)(lVar7 + 4);
  cVar3 = *(char *)(lVar7 + 6);
  cVar4 = *(char *)(lVar7 + 10);
  cVar5 = *(char *)(lVar7 + 0xc);
  bVar6 = *(byte *)(lVar7 + 0xe);
  if (puVar10 <= param_3) {
    uVar8 = CONCAT11(*param_2,param_2[1]);
    if (puVar10 + (uint)uVar8 * 4 <= param_3) {
      uVar11 = 0;
      if (uVar8 != 0) {
        do {
          iVar9 = FUN_143c6c270(param_1,CONCAT11(*puVar10,puVar10[1]),
                                (uint)(byte)puVar10[2] + param_4,(uint)(byte)puVar10[3] + param_5);
          if (iVar9 != 0) break;
          uVar11 = uVar11 + 1;
          puVar10 = puVar10 + 4;
        } while (uVar11 < uVar8);
      }
      *(short *)(*(longlong *)(param_1 + 0x18) + 4) = (short)cVar2;
      *(short *)(*(longlong *)(param_1 + 0x18) + 6) = (short)cVar3;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 8) = (ushort)bVar1;
      *(short *)(*(longlong *)(param_1 + 0x18) + 10) = (short)cVar4;
      *(short *)(*(longlong *)(param_1 + 0x18) + 0xc) = (short)cVar5;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 0xe) = (ushort)bVar6;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 2) =
           (ushort)*(byte *)(*(longlong *)(param_1 + 0x10) + 4);
      **(ushort **)(param_1 + 0x18) = (ushort)**(byte **)(param_1 + 0x10);
      return iVar9;
    }
  }
  return 3;
}



// FUNCTION 143c6c270 FUN_143c6c270 body=1219 status=ok
// SIG undefined FUN_143c6c270(void)

undefined8 FUN_143c6c270(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char *pcVar7;
  ushort *puVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  
  puVar16 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x2c) + *(longlong *)(param_1 + 0x38));
  iVar13 = *(int *)(param_1 + 0x30);
  pcVar7 = *(char **)(param_1 + 0x40);
  puVar12 = puVar16;
  while( true ) {
    if (iVar13 == 0) {
      return 6;
    }
    uVar14 = (uint)CONCAT11(*puVar12,puVar12[1]);
    if ((uVar14 <= param_2) && (param_2 <= CONCAT11(puVar12[2],puVar12[3]))) break;
    puVar12 = puVar12 + 8;
    iVar13 = iVar13 + -1;
  }
  uVar10 = CONCAT31(CONCAT21(CONCAT11(puVar12[4],puVar12[5]),puVar12[6]),puVar12[7]);
  if ((uint)((int)pcVar7 - (int)puVar16) < uVar10) {
    return 8;
  }
  puVar16 = puVar16 + uVar10;
  if (pcVar7 < puVar16 + 8) {
    return 6;
  }
  uVar1 = puVar16[4];
  uVar2 = puVar16[2];
  uVar3 = puVar16[3];
  puVar12 = puVar16 + 8;
  uVar4 = puVar16[5];
  uVar5 = puVar16[6];
  uVar6 = puVar16[7];
  switch(CONCAT11(*puVar16,puVar16[1])) {
  case 1:
    puVar12 = puVar12 + (param_2 - uVar14) * 4;
    if (pcVar7 < puVar12 + 8) {
      return 6;
    }
    uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar12,puVar12[1]),puVar12[2]),puVar12[3]);
    uVar14 = CONCAT31(CONCAT21(CONCAT11(puVar12[4],puVar12[5]),puVar12[6]),puVar12[7]);
    if (uVar10 == uVar14) {
      return 6;
    }
    break;
  case 2:
    if (pcVar7 < puVar16 + 0x14) {
      return 6;
    }
    puVar8 = *(ushort **)(param_1 + 0x18);
    iVar13 = CONCAT31(CONCAT21(CONCAT11(*puVar12,puVar16[9]),puVar16[10]),puVar16[0xb]);
    if (pcVar7 < puVar16 + 0x11) {
      return 6;
    }
    *puVar8 = (ushort)(byte)puVar16[0xc];
    puVar8[1] = (ushort)(byte)puVar16[0xd];
    puVar8[2] = (short)(char)puVar16[0xe];
    puVar8[3] = (short)(char)puVar16[0xf];
    puVar8[4] = (ushort)(byte)puVar16[0x10];
    if (pcVar7 < puVar16 + 0x14) {
      return 6;
    }
    puVar8[5] = (short)(char)puVar16[0x11];
    puVar8[6] = (short)(char)puVar16[0x12];
    uVar10 = (param_2 - uVar14) * iVar13;
    puVar8[7] = (ushort)(byte)puVar16[0x13];
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar14 = iVar13 + uVar10;
    break;
  case 3:
    puVar12 = puVar12 + (param_2 - uVar14) * 2;
    if (pcVar7 < puVar12 + 4) {
      return 6;
    }
    uVar10 = (uint)CONCAT11(*puVar12,puVar12[1]);
    uVar14 = (uint)CONCAT11(puVar12[2],puVar12[3]);
    if (uVar10 == uVar14) {
      return 6;
    }
    break;
  case 4:
    pcVar17 = puVar16 + 0xc;
    if (pcVar7 < pcVar17) {
      return 6;
    }
    uVar15 = CONCAT31(CONCAT21(CONCAT11(puVar16[8],puVar16[9]),puVar16[10]),puVar16[0xb]);
    if (pcVar7 < puVar16 + 0x10) {
      return 6;
    }
    if ((int)((longlong)pcVar7 - (longlong)pcVar17 >> 2) - 1U < uVar15) {
      return 6;
    }
    uVar11 = 0;
    if (uVar15 == 0) {
      return 6;
    }
    while (CONCAT11(*pcVar17,pcVar17[1]) != param_2) {
      pcVar17 = pcVar17 + 4;
      uVar11 = uVar11 + 1;
      if (uVar15 <= uVar11) {
        return 6;
      }
    }
    uVar10 = (uint)CONCAT11(pcVar17[2],pcVar17[3]);
    uVar14 = (uint)CONCAT11(pcVar17[6],pcVar17[7]);
    if (uVar15 <= uVar11) {
      return 6;
    }
    break;
  case 5:
  case 0x13:
    if (pcVar7 < puVar16 + 0x18) {
      return 6;
    }
    puVar8 = *(ushort **)(param_1 + 0x18);
    iVar13 = CONCAT31(CONCAT21(CONCAT11(*puVar12,puVar16[9]),puVar16[10]),puVar16[0xb]);
    if (pcVar7 < puVar16 + 0x11) {
      return 6;
    }
    *puVar8 = (ushort)(byte)puVar16[0xc];
    puVar8[1] = (ushort)(byte)puVar16[0xd];
    puVar8[2] = (short)(char)puVar16[0xe];
    puVar8[3] = (short)(char)puVar16[0xf];
    puVar8[4] = (ushort)(byte)puVar16[0x10];
    if (pcVar7 < puVar16 + 0x14) {
      return 6;
    }
    puVar8[5] = (short)(char)puVar16[0x11];
    puVar8[6] = (short)(char)puVar16[0x12];
    puVar8[7] = (ushort)(byte)puVar16[0x13];
    *(undefined1 *)(param_1 + 0x20) = 1;
    puVar12 = puVar16 + 0x17;
    uVar14 = CONCAT31(CONCAT21(CONCAT11(puVar16[0x14],puVar16[0x15]),puVar16[0x16]),*puVar12);
    if ((uint)((longlong)pcVar7 - (longlong)(puVar16 + 0x18) >> 1) < uVar14) {
      return 6;
    }
    uVar10 = 0;
    if (uVar14 == 0) {
      return 6;
    }
    while (puVar16 = puVar12 + 1, puVar12 = puVar12 + 2, CONCAT11(*puVar16,*puVar12) != param_2) {
      uVar10 = uVar10 + 1;
      if (uVar14 <= uVar10) {
        return 6;
      }
    }
    if (uVar14 <= uVar10) {
      return 6;
    }
    uVar10 = uVar10 * iVar13;
    uVar14 = iVar13 + uVar10;
    break;
  default:
    return 6;
  }
  if (uVar14 < uVar10) {
    return 6;
  }
  uVar9 = FUN_143c6bc80(param_1,CONCAT11(uVar2,uVar3),
                        CONCAT31(CONCAT21(CONCAT11(uVar1,uVar4),uVar5),uVar6) + uVar10,
                        uVar14 - uVar10,param_3,param_4);
  return uVar9;
}



// FUNCTION 143c6c780 FUN_143c6c780 body=1524 status=ok
// SIG undefined FUN_143c6c780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c6c780(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint *local_b0;
  uint local_a8 [2];
  longlong *local_a0;
  uint local_98 [2];
  longlong *local_90;
  uint *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_70 [4];
  int local_6c;
  uint local_68;
  ushort local_64;
  uint local_60;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  ulonglong local_40;
  longlong *plVar9;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  plVar17 = (longlong *)0x0;
  local_a8[0] = 0;
  local_88 = (uint *)0x0;
  local_98[0] = 0;
  local_80 = uVar16;
  local_78 = param_2;
  uVar4 = FUN_143c24c00(param_1,&DAT_145d36528,local_70);
  local_a8[0] = (uint)uVar4;
  if (local_a8[0] != 0) {
    return uVar4;
  }
  if (((((local_6c == 0x774f4646) || (local_6c == 0x74746366)) ||
       (local_68 != *(uint *)(param_1 + 8))) ||
      ((local_64 == 0 || (local_68 <= ((uint)local_64 + (uint)local_64 * 4) * 4 + 0x2c)))) ||
     ((local_60 <= (uint)local_64 * 0x10 + 0xc || ((local_60 & 3) != 0)))) {
    return 8;
  }
  if (local_58 == 0) {
    if (local_54 != 0) {
      return 8;
    }
    if (local_50 != 0) {
      return 8;
    }
  }
  else if ((local_54 != 0) && (local_50 == 0)) {
    return 8;
  }
  if ((local_4c == 0) && (local_48 != 0)) {
    return 8;
  }
  puVar5 = (undefined1 *)FUN_143c271e0(uVar16,local_60,local_a8);
  plVar9 = plVar17;
  plVar6 = plVar17;
  if ((local_a8[0] != 0) ||
     (local_a0 = (longlong *)FUN_143c271e0(uVar16,0x48,local_a8), plVar9 = local_a0,
     plVar6 = (longlong *)0x0, local_a8[0] != 0)) goto LAB_143c6cd1c;
  uVar3 = (uint)local_64;
  uVar8 = 0;
  plVar9 = plVar17;
  if (local_64 != 0) {
    do {
      uVar8 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar8;
      uVar3 = uVar3 >> 1;
    } while (uVar3 != 0);
  }
  *puVar5 = (char)((uint)local_6c >> 0x18);
  puVar5[1] = (char)((uint)local_6c >> 0x10);
  puVar5[2] = (char)((uint)local_6c >> 8);
  puVar5[3] = (undefined1)local_6c;
  puVar5[4] = (char)(local_64 >> 8);
  puVar5[5] = (undefined1)local_64;
  bVar7 = (byte)(uVar8 - 1);
  iVar10 = 1 << (bVar7 & 0x1f);
  iVar11 = iVar10 * 0x10;
  iVar10 = (uint)local_64 * 0x10 + iVar10 * -0x10;
  puVar5[6] = (char)((uint)iVar11 >> 8);
  puVar5[7] = (char)iVar11;
  puVar5[8] = (char)(uVar8 - 1 >> 8);
  puVar5[9] = bVar7;
  puVar5[10] = (char)((uint)iVar10 >> 8);
  local_b0 = local_a8;
  puVar5[0xb] = (char)iVar10;
  local_b8 = 0;
  local_88 = (uint *)FUN_143c27410(uVar16,0x18,0,local_64);
  plVar9 = local_a0;
  plVar6 = plVar17;
  if (local_a8[0] != 0) goto LAB_143c6cd1c;
  local_b0 = local_a8;
  local_b8 = 0;
  plVar6 = (longlong *)FUN_143c27410(uVar16,8,0,local_64);
  plVar9 = local_a0;
  local_90 = plVar6;
  if ((local_a8[0] != 0) ||
     (local_a8[0] = FUN_143c24650(param_1,((uint)local_64 + (uint)local_64 * 4) * 4),
     plVar9 = local_a0, local_a8[0] != 0)) goto LAB_143c6cd1c;
  plVar9 = plVar6;
  puVar13 = local_88;
  plVar15 = plVar17;
  if (local_64 != 0) {
    do {
      uVar3 = FUN_143c24870(param_1);
      *puVar13 = uVar3;
      uVar3 = FUN_143c24870(param_1);
      puVar13[1] = uVar3;
      uVar3 = FUN_143c24870(param_1);
      puVar13[2] = uVar3;
      uVar3 = FUN_143c24870(param_1);
      puVar13[3] = uVar3;
      uVar3 = FUN_143c24870(param_1);
      puVar13[4] = uVar3;
      uVar3 = *puVar13;
      if (uVar3 <= local_98[0]) {
        FT_Stream_ExitFrame(param_1);
        local_a8[0] = 8;
        plVar9 = local_a0;
        plVar6 = local_90;
        goto LAB_143c6cd1c;
      }
      *plVar6 = (longlong)puVar13;
      uVar8 = (int)plVar15 + 1;
      plVar6 = plVar6 + 1;
      plVar9 = local_90;
      puVar13 = puVar13 + 6;
      uVar16 = local_80;
      plVar15 = (longlong *)(ulonglong)uVar8;
      local_98[0] = uVar3;
    } while ((int)uVar8 < (int)(uint)local_64);
  }
  FT_Stream_ExitFrame(param_1);
  _guard_xfg_dispatch_icall_nop(plVar9,(ulonglong)local_64,8,(_PtFuncCompare *)&LAB_143c692a0);
  plVar6 = local_90;
  uVar8 = (uint)local_64 * 0x10 + 0xc;
  uVar3 = ((uint)local_64 + (uint)local_64 * 4) * 4 + 0x2c;
  plVar9 = plVar17;
  plVar15 = local_90;
  if (local_64 != 0) {
    do {
      lVar2 = *plVar15;
      if ((((*(uint *)(lVar2 + 4) != uVar3) || (uVar12 = *(uint *)(lVar2 + 8), local_68 < uVar12))
          || (local_68 - uVar12 < *(uint *)(lVar2 + 4))) ||
         (((uVar1 = *(uint *)(lVar2 + 0xc), local_60 < uVar1 || (local_60 - uVar1 < uVar8)) ||
          (uVar1 < uVar12)))) goto LAB_143c6cc4b;
      *(uint *)(lVar2 + 0x14) = uVar8;
      uVar3 = uVar3 + (uVar12 + 3 & 0xfffffffc);
      uVar12 = (int)plVar9 + 1;
      uVar8 = uVar8 + (uVar1 + 3 & 0xfffffffc);
      plVar9 = (longlong *)(ulonglong)uVar12;
      plVar15 = plVar15 + 1;
    } while ((int)uVar12 < (int)(uint)local_64);
  }
  if (local_58 == 0) {
LAB_143c6cb17:
    if (local_4c != 0) {
      uVar3 = uVar3 + 3 & 0xfffffffc;
      if ((local_4c != uVar3) || (local_68 < local_4c + local_48)) goto LAB_143c6cc4b;
      uVar3 = uVar3 + local_48;
    }
    if ((uVar8 == local_60) && (uVar3 == local_68)) {
      if (local_64 != 0) {
        puVar13 = local_88 + 4;
        puVar14 = puVar5 + 0xc;
        do {
          *puVar14 = *(undefined1 *)((longlong)puVar13 + -0xd);
          puVar14[1] = *(undefined1 *)((longlong)puVar13 + -0xe);
          puVar14[2] = (char)(puVar13[-4] >> 8);
          puVar14[3] = (char)puVar13[-4];
          puVar14[4] = *(undefined1 *)((longlong)puVar13 + 3);
          puVar14[5] = *(undefined1 *)((longlong)puVar13 + 2);
          puVar14[6] = (char)(*puVar13 >> 8);
          puVar14[7] = (char)*puVar13;
          puVar14[8] = *(undefined1 *)((longlong)puVar13 + 7);
          puVar14[9] = *(undefined1 *)((longlong)puVar13 + 6);
          puVar14[10] = (char)(puVar13[1] >> 8);
          puVar14[0xb] = (char)puVar13[1];
          puVar14[0xc] = *(undefined1 *)((longlong)puVar13 + -1);
          puVar14[0xd] = *(undefined1 *)((longlong)puVar13 + -2);
          puVar14[0xe] = (char)(puVar13[-1] >> 8);
          puVar14[0xf] = (char)puVar13[-1];
          local_a8[0] = FUN_143c251d0(param_1,puVar13[-3]);
          plVar9 = local_a0;
          if ((local_a8[0] != 0) ||
             (local_a8[0] = FUN_143c24650(param_1,puVar13[-2]), plVar9 = local_a0, local_a8[0] != 0)
             ) goto LAB_143c6cd1c;
          uVar3 = puVar13[-1];
          if (puVar13[-2] == uVar3) {
            _guard_xfg_dispatch_icall_nop
                      (puVar5 + puVar13[1],*(void **)(param_1 + 0x38),(ulonglong)uVar3);
          }
          else {
            local_b8 = CONCAT44(local_b8._4_4_,puVar13[-2]);
            local_98[0] = uVar3;
            local_a8[0] = FUN_143c72b00(uVar16,puVar5 + puVar13[1],local_98,
                                        *(undefined8 *)(param_1 + 0x38));
            plVar9 = local_a0;
            if (local_a8[0] != 0) goto LAB_143c6cd1c;
            if (local_98[0] != puVar13[-1]) goto LAB_143c6cc4b;
          }
          FT_Stream_ExitFrame(param_1);
          for (uVar3 = puVar13[-1] + puVar13[1]; (uVar3 & 3) != 0; uVar3 = uVar3 + 1) {
            puVar5[uVar3] = 0;
          }
          uVar3 = (int)plVar17 + 1;
          plVar17 = (longlong *)(ulonglong)uVar3;
          puVar13 = puVar13 + 6;
          puVar14 = puVar14 + 0x10;
        } while ((int)uVar3 < (int)(uint)local_64);
      }
      plVar9 = local_a0;
      FUN_143c24ac0(local_a0,puVar5,local_60);
      lVar2 = local_78;
      plVar9[6] = *(longlong *)(param_1 + 0x30);
      plVar9[5] = (longlong)FUN_143c699c0;
      FUN_143c24800(*(undefined8 *)(local_78 + 0xa0),*(uint *)(local_78 + 8) >> 10 & 1);
      puVar13 = (uint *)(lVar2 + 8);
      *puVar13 = *puVar13 & 0xfffffbff;
      *(longlong **)(lVar2 + 0xa0) = plVar9;
      goto LAB_143c6cd1c;
    }
  }
  else if ((local_58 == uVar3) && (local_58 + local_54 <= local_68)) {
    uVar3 = uVar3 + local_54;
    goto LAB_143c6cb17;
  }
LAB_143c6cc4b:
  local_a8[0] = 8;
  plVar9 = local_a0;
LAB_143c6cd1c:
  uVar16 = local_80;
  ft_mem_free(local_80,local_88);
  ft_mem_free(uVar16,plVar6);
  if (local_a8[0] != 0) {
    ft_mem_free(uVar16,puVar5);
    FT_Stream_Close(plVar9);
    ft_mem_free(uVar16,plVar9);
  }
  return (ulonglong)local_a8[0];
}



// FUNCTION 143c6cd80 FUN_143c6cd80 body=28 status=ok
// SIG undefined FUN_143c6cd80(void)

void FUN_143c6cd80(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  if (param_3 == 1) {
    param_3 = 0;
  }
  FUN_143c6d180(param_1,param_2,param_3,param_4,0);
  return;
}



// FUNCTION 143c6cda0 ft_smooth_render_lcd body=39 status=ok
// SIG undefined ft_smooth_render_lcd(void)

void ft_smooth_render_lcd(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_143c6d180();
  if (iVar1 == 0) {
    *(undefined1 *)(param_2 + 0x82) = 5;
  }
  return;
}



// FUNCTION 143c6cdd0 ft_smooth_render_lcd_v body=39 status=ok
// SIG undefined ft_smooth_render_lcd_v(void)

void ft_smooth_render_lcd_v(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_143c6d180();
  if (iVar1 == 0) {
    *(undefined1 *)(param_2 + 0x82) = 6;
  }
  return;
}



// FUNCTION 143c6ce00 FUN_143c6ce00 body=209 status=ok
// SIG undefined FUN_143c6ce00(void)

undefined8 FUN_143c6ce00(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_2 + 0x128) == 0) &&
     (*(int *)(param_2 + 0x120) != 0 || *(int *)(param_2 + 0x124) != 0)) {
    lVar4 = FUN_143c6dae0(param_2);
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + *(int *)(param_2 + 0x120);
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + *(int *)(param_2 + 0x124);
  }
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = *(int *)(param_2 + 0x108);
  iVar6 = (iVar2 << 2) >> 8;
  iVar5 = (iVar1 << 2) >> 8;
  if (*(int *)(param_2 + 0x10c) < iVar5) {
    iVar5 = *(int *)(param_2 + 0x10c);
  }
  if (iVar5 < iVar3) {
    iVar5 = iVar3 + -1;
  }
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(int *)(param_2 + 0x100) = iVar5 - iVar3;
  *(undefined4 *)(param_2 + 0x128) = 0;
  *(int *)(param_2 + 0x104) = iVar6 - *(int *)(param_2 + 0x110);
  *(int *)(param_2 + 0x158) = iVar6 << 8;
  FUN_143c6e680(param_2);
  *(int *)(param_2 + 0x154) = iVar2 << 2;
  *(int *)(param_2 + 0x150) = iVar1 << 2;
  return 0;
}



// FUNCTION 143c6cee0 FUN_143c6cee0 body=35 status=ok
// SIG undefined FUN_143c6cee0(void)

undefined8 FUN_143c6cee0(int *param_1,undefined8 param_2)

{
  FUN_143c6e070(param_2,*param_1 << 2,param_1[1] << 2);
  return 0;
}



// FUNCTION 143c6cf10 gray_conic_to body=28 status=ok
// SIG undefined gray_conic_to(void)

undefined8 gray_conic_to(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143c6dce0(param_3,param_1,param_2);
  return 0;
}



// FUNCTION 143c6cf30 gray_cubic_to body=31 status=ok
// SIG undefined gray_cubic_to(void)

undefined8
gray_cubic_to(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143c6de80(param_4,param_1,param_2,param_3);
  return 0;
}



// FUNCTION 143c6cf50 FUN_143c6cf50 body=546 status=ok
// SIG undefined FUN_143c6cf50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c6cf50(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  short *psVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_4678 [32];
  undefined1 local_4658 [288];
  undefined8 local_4538;
  undefined4 local_4530;
  undefined8 local_4528;
  undefined8 uStack_4520;
  undefined8 local_4518;
  undefined8 local_4170;
  undefined8 uStack_4168;
  undefined4 local_4160;
  undefined4 uStack_415c;
  undefined4 uStack_4158;
  undefined4 uStack_4154;
  undefined8 local_4150;
  undefined8 local_4148;
  undefined8 uStack_4140;
  int local_4138;
  int iStack_4134;
  int iStack_4130;
  int iStack_412c;
  undefined8 local_4128;
  undefined8 local_4120;
  undefined8 uStack_4118;
  undefined4 local_4050;
  code *local_4048;
  undefined1 *local_4040;
  undefined4 local_4038;
  undefined4 local_4034;
  undefined1 *local_4028;
  undefined4 local_4020;
  undefined1 *local_4018;
  undefined1 local_4008 [16368];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143c6cf64;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_4678;
  psVar2 = (short *)param_2[1];
  piVar3 = (int *)*param_2;
  if (param_1 == 0) {
    return 6;
  }
  if (psVar2 != (short *)0x0) {
    if ((psVar2[1] == 0) || (*psVar2 < 1)) {
      return 0;
    }
    if (((*(longlong *)(psVar2 + 0xc) != 0) && (*(longlong *)(psVar2 + 4) != 0)) &&
       ((int)psVar2[1] == *(short *)(*(longlong *)(psVar2 + 0xc) + -2 + (longlong)*psVar2 * 2) + 1))
    {
      uVar1 = *(uint *)(param_2 + 2);
      uVar5 = uVar1 & 2;
      if (uVar5 != 0) {
LAB_143c6d009:
        if ((uVar1 & 1) != 0) {
          if (uVar5 == 0) {
            local_4120 = 0;
            uStack_4118 = CONCAT44(*piVar3,piVar3[1]);
          }
          else if ((uVar1 & 4) == 0) {
            local_4120 = 0xffff8000ffff8000;
            uStack_4118 = 0x7fff00007fff;
          }
          else {
            local_4120 = param_2[8];
            uStack_4118 = param_2[9];
          }
          local_4028 = local_4008;
          local_4018 = local_4008;
          local_4020 = 0x3ff0;
          local_4528 = 0;
          uStack_4520 = 0;
          local_4538 = 0;
          local_4170 = *(undefined8 *)psVar2;
          uStack_4168 = *(undefined8 *)(psVar2 + 4);
          local_4160 = *(undefined4 *)(psVar2 + 8);
          uStack_415c = *(undefined4 *)(psVar2 + 10);
          uStack_4158 = *(undefined4 *)(psVar2 + 0xc);
          uStack_4154 = *(undefined4 *)(psVar2 + 0xe);
          local_4150 = *(undefined8 *)(psVar2 + 0x10);
          local_4518 = 0;
          local_4530 = 1;
          local_4034 = 0x55;
          local_4050 = 0;
          local_4038 = 0;
          if (uVar5 == 0) {
            local_4148 = *(undefined8 *)piVar3;
            uStack_4140 = *(undefined8 *)(piVar3 + 2);
            local_4138 = piVar3[4];
            iStack_4134 = piVar3[5];
            iStack_4130 = piVar3[6];
            iStack_412c = piVar3[7];
            local_4128 = *(undefined8 *)(piVar3 + 8);
            local_4048 = FUN_143c6e570;
            local_4040 = local_4658;
          }
          else {
            local_4048 = (code *)param_2[3];
            local_4040 = (undefined1 *)param_2[7];
          }
          uVar4 = FUN_143c6d660(local_4658);
          return uVar4;
        }
        return 0x13;
      }
      if (piVar3 != (int *)0x0) {
        if (piVar3[1] == 0) {
          return 0;
        }
        if (*piVar3 == 0) {
          return 0;
        }
        if (*(longlong *)(piVar3 + 4) != 0) goto LAB_143c6d009;
      }
      return 6;
    }
  }
  return 0x14;
}



// FUNCTION 143c6d180 FUN_143c6d180 body=1002 status=ok
// SIG undefined FUN_143c6d180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c6d180(longlong param_1,longlong param_2,int param_3,int *param_4,int param_5)

{
  uint *puVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  void *pvVar10;
  void *_Src;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  size_t _Size;
  undefined1 auStack_108 [32];
  char local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  uint *local_a8;
  longlong local_a0;
  undefined4 local_98;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  iVar18 = 0;
  local_e8 = '\0';
  iVar17 = 0;
  local_c8 = param_2 + 0x98;
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  local_d0 = (uint)(param_3 == 3);
  local_dc = (uint)(param_3 == 4);
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (param_3 == param_5) {
      if (param_4 != (int *)0x0) {
        iVar17 = *param_4;
        iVar18 = param_4[1];
      }
      local_b8 = param_2;
      FUN_143c22f00(local_c8,&local_58);
      uVar9 = local_58 + iVar17;
      local_58 = uVar9 & 0xffffffc0;
      uVar11 = local_4c + 0x3f + iVar18;
      local_4c = uVar11 & 0xffffffc0;
      local_cc = iVar17 - local_58;
      local_50 = local_50 + 0x3f + iVar17 & 0xffffffc0;
      local_54 = local_54 + iVar18 & 0xffffffc0;
      local_d4 = iVar18 - local_54;
      iVar17 = (int)uVar11 >> 6;
      local_d8 = local_50 - local_58 >> 6;
      uVar12 = local_4c - local_54;
      uVar11 = uVar12 >> 6;
      iVar18 = (int)uVar9 >> 6;
      uVar9 = local_d8;
      local_e0 = local_d8;
      if (local_d0 != 0) {
        uVar9 = local_d8 * 3;
        local_e0 = uVar9 + 3 & 0xfffffffc;
      }
      uVar13 = uVar11;
      if (local_dc != 0) {
        uVar13 = uVar11 * 3;
      }
      if ((iVar18 < -0x80000000) || (iVar17 < -0x80000000)) {
        uVar6 = 0x17;
      }
      else if ((uVar9 < 0x8000) && (uVar13 < 0x8000)) {
        if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
          ft_mem_free(local_c0,*(undefined8 *)(param_2 + 0x78));
          *(undefined8 *)(param_2 + 0x78) = 0;
          puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        uVar7 = FUN_143c271e0(local_c0,local_e0 * uVar13,&local_e4);
        iVar5 = local_d4;
        uVar4 = local_e0;
        *(undefined8 *)(param_2 + 0x78) = uVar7;
        uVar6 = (ulonglong)local_e4;
        if (local_e4 == 0) {
          bVar3 = true;
          puVar1 = (uint *)(*(longlong *)(local_b8 + 0xf0) + 8);
          *puVar1 = *puVar1 | 1;
          *(int *)(local_b8 + 0x90) = iVar18;
          _Size = (size_t)(int)local_e0;
          *(int *)(local_b8 + 0x94) = iVar17;
          *(undefined4 *)(local_b8 + 0x60) = 0x62697473;
          *(uint *)(param_2 + 0x70) = local_e0;
          *(undefined1 *)(param_2 + 0x82) = 2;
          *(undefined2 *)(param_2 + 0x80) = 0x100;
          *(uint *)(param_2 + 0x6c) = uVar9;
          *(uint *)(param_2 + 0x68) = uVar13;
          if ((local_cc != 0) || (local_d4 != 0)) {
            FUN_143c23560(local_c8,local_cc,local_d4);
            local_e8 = '\x01';
          }
          local_a0 = local_c8;
          local_98 = 1;
          local_a8 = (uint *)(param_2 + 0x68);
          uVar6 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8);
          local_e4 = (uint)uVar6;
          if (local_e4 == 0) {
            if ((local_d0 != 0) && (lVar15 = *(longlong *)(param_2 + 0x78), uVar12 != 0)) {
              uVar16 = uVar11;
              do {
                uVar6 = (ulonglong)local_d8;
                if (local_d8 != 0) {
                  puVar8 = (undefined1 *)(lVar15 + -2 + (longlong)(int)uVar9);
                  do {
                    uVar14 = (int)uVar6 - 1;
                    uVar6 = (ulonglong)uVar14;
                    uVar2 = *(undefined1 *)(uVar6 + lVar15);
                    puVar8[-1] = uVar2;
                    *puVar8 = uVar2;
                    puVar8[1] = uVar2;
                    puVar8 = puVar8 + -3;
                  } while (uVar14 != 0);
                }
                lVar15 = lVar15 + _Size;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            if (local_dc != 0) {
              pvVar10 = *(void **)(param_2 + 0x78);
              _Src = (void *)((longlong)(int)((uVar13 - uVar11) * uVar4) + (longlong)pvVar10);
              local_e4 = 0;
              while (uVar12 != 0) {
                _guard_xfg_dispatch_icall_nop(pvVar10,_Src,_Size);
                _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar10 + _Size),_Src,_Size);
                pvVar10 = (void *)((longlong)((longlong)pvVar10 + _Size) + _Size);
                _guard_xfg_dispatch_icall_nop(pvVar10,_Src,_Size);
                pvVar10 = (void *)((longlong)pvVar10 + _Size);
                _Src = (void *)((longlong)_Src + _Size);
                uVar11 = uVar11 - 1;
                uVar12 = uVar11;
              }
            }
            bVar3 = false;
            uVar6 = 0;
            local_e4 = 0;
          }
          if (local_e8 != '\0') {
            FUN_143c23560(local_c8,-local_cc,-iVar5);
            uVar6 = (ulonglong)local_e4;
          }
          if (bVar3) {
            ft_mem_free(local_c0,*(undefined8 *)(param_2 + 0x78));
            *(undefined8 *)(param_2 + 0x78) = 0;
            puVar1 = (uint *)(*(longlong *)(local_b8 + 0xf0) + 8);
            *puVar1 = *puVar1 & 0xfffffffe;
            uVar6 = (ulonglong)local_e4;
          }
        }
      }
      else {
        uVar6 = 0x62;
      }
    }
    else {
      uVar6 = 0x13;
    }
  }
  else {
    uVar6 = 6;
  }
  return uVar6;
}



// FUNCTION 143c6d570 FUN_143c6d570 body=226 status=ok
// SIG undefined FUN_143c6d570(void)

void FUN_143c6d570(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar4 = *(int **)(param_1 + 0x4f0);
  piVar1 = piVar4 + (longlong)*(short *)(param_1 + 0x4ea) * 2;
  if (0 < *(short *)(param_1 + 0x4ea)) {
    iVar7 = *piVar4;
    *(int *)(param_1 + 0x10c) = iVar7;
    *(int *)(param_1 + 0x108) = iVar7;
    iVar8 = piVar4[1];
    *(int *)(param_1 + 0x114) = iVar8;
    *(int *)(param_1 + 0x110) = iVar8;
    iVar6 = iVar7;
    iVar5 = iVar8;
    while (piVar4 = piVar4 + 2, piVar4 < piVar1) {
      iVar2 = *piVar4;
      iVar3 = piVar4[1];
      if (iVar2 < iVar6) {
        *(int *)(param_1 + 0x108) = iVar2;
        iVar6 = iVar2;
      }
      if (iVar7 < iVar2) {
        *(int *)(param_1 + 0x10c) = iVar2;
        iVar7 = iVar2;
      }
      if (iVar3 < iVar8) {
        *(int *)(param_1 + 0x110) = iVar3;
        iVar8 = iVar3;
      }
      if (iVar5 < iVar3) {
        *(int *)(param_1 + 0x114) = iVar3;
        iVar5 = iVar3;
      }
    }
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) >> 6;
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) >> 6;
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 0x3f >> 6;
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 0x3f >> 6;
    return;
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 143c6d660 FUN_143c6d660 body=997 status=ok
// SIG undefined FUN_143c6d660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c6d660(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_198 [32];
  int *local_178;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_158;
  int local_154;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar2 = param_1;
  FUN_143c6d570();
  iVar5 = *(int *)(lVar2 + 0x10c);
  iVar7 = *(int *)(lVar2 + 0x538);
  if ((((iVar7 < iVar5) && (*(int *)(lVar2 + 0x108) < *(int *)(param_1 + 0x540))) &&
      (*(int *)(param_1 + 0x53c) < *(int *)(param_1 + 0x114))) &&
     (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0x544))) {
    if (*(int *)(lVar2 + 0x108) < iVar7) {
      *(int *)(param_1 + 0x108) = iVar7;
    }
    if (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0x53c)) {
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x53c);
    }
    if (*(int *)(param_1 + 0x540) < iVar5) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x540);
    }
    if (*(int *)(param_1 + 0x544) < *(int *)(param_1 + 0x114)) {
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x544);
    }
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108);
    local_170 = *(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110);
    *(int *)(param_1 + 0x11c) = local_170;
    local_170 = local_170 / *(int *)(param_1 + 0x624);
    if (local_170 == 0) {
      local_170 = 1;
    }
    if (0x26 < local_170) {
      local_170 = 0x27;
    }
    local_158 = *(int *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x628) = 0;
    local_164 = *(int *)(param_1 + 0x114);
    local_16c = 0;
    if (0 < local_170) {
      do {
        local_168 = local_158 + *(int *)(param_1 + 0x624);
        if ((local_16c == local_170 + -1) || (local_164 < local_168)) {
          local_168 = local_164;
        }
        local_154 = local_168;
        local_178 = &local_158;
        do {
          *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_1 + 0x630);
          iVar7 = local_178[1] - *local_178;
          *(int *)(param_1 + 0x648) = iVar7;
          iVar5 = iVar7 * 8;
          if (0 < iVar5 % 0x18) {
            iVar5 = iVar5 + (0x18 - iVar5 % 0x18);
          }
          uVar6 = (longlong)iVar5 + *(longlong *)(param_1 + 0x630);
          *(ulonglong *)(param_1 + 0x130) = uVar6;
          uVar4 = (longlong)((*(int *)(param_1 + 0x638) / 0x18) * 0x18) +
                  *(longlong *)(param_1 + 0x630);
          if ((uVar6 < uVar4) &&
             (lVar2 = (longlong)(uVar4 - uVar6) / 0x18, *(longlong *)(param_1 + 0x138) = lVar2,
             1 < lVar2)) {
            uVar4 = 0;
            uVar6 = 0;
            if (0 < iVar7) {
              do {
                uVar3 = (int)uVar6 + 1;
                *(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0x640)) = 0;
                uVar4 = uVar4 + 8;
                uVar6 = (ulonglong)uVar3;
              } while ((int)uVar3 < *(int *)(param_1 + 0x648));
            }
            *(undefined8 *)(param_1 + 0x140) = 0;
            *(undefined4 *)(param_1 + 0x128) = 1;
            *(int *)(param_1 + 0x110) = *local_178;
            *(int *)(param_1 + 0x114) = local_178[1];
            *(int *)(param_1 + 0x11c) = local_178[1] - *local_178;
            iVar5 = FUN_143c6da50(param_1);
            if (iVar5 != 0) {
              if (iVar5 != 0x40) {
                return 1;
              }
              goto LAB_143c6d967;
            }
            FUN_143c6e750(param_1,param_1 + 0x510);
            local_178 = local_178 + -2;
          }
          else {
LAB_143c6d967:
            iVar5 = *local_178;
            iVar7 = local_178[1];
            iVar1 = (iVar7 - iVar5 >> 1) + iVar5;
            if (iVar1 == iVar5) {
              return 1;
            }
            if (*(int *)(param_1 + 0x624) <= iVar5 - iVar7) {
              *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
            }
            local_178[2] = iVar5;
            local_178[3] = iVar1;
            *local_178 = iVar1;
            local_178[1] = iVar7;
            local_178 = local_178 + 2;
          }
        } while (&local_158 <= local_178);
        local_16c = local_16c + 1;
        local_158 = local_168;
      } while (local_16c < local_170);
    }
    if ((8 < *(int *)(param_1 + 0x628)) && (0x10 < *(int *)(param_1 + 0x624))) {
      *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) / 2;
    }
  }
  return 0;
}



// FUNCTION 143c6da50 FUN_143c6da50 body=138 status=ok
// SIG undefined FUN_143c6da50(void)

undefined4 FUN_143c6da50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  
  local_18 = 0;
  iVar1 = _guard_xfg_dispatch_icall_nop(param_1,auStack_38);
  if (iVar1 == 0) {
    local_18 = FUN_143c22aa0(param_1 + 0x4e8,&PTR_FUN_145d36df8,param_1);
    if ((*(int *)(param_1 + 0x128) == 0) &&
       (*(int *)(param_1 + 0x120) != 0 || *(int *)(param_1 + 0x124) != 0)) {
      lVar2 = FUN_143c6dae0(param_1);
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + *(int *)(param_1 + 0x120);
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + *(int *)(param_1 + 0x124);
      return local_18;
    }
  }
  else {
    local_18 = 0x40;
  }
  return local_18;
}



// FUNCTION 143c6dae0 FUN_143c6dae0 body=155 status=ok
// SIG undefined FUN_143c6dae0(void)

void FUN_143c6dae0(_JBTYPE *param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[0x11].Part[1];
  iVar5 = (int)param_1[0x10].Part[0];
  lVar6 = (longlong)*(int *)((longlong)param_1[0x10].Part + 4);
  if (iVar2 < iVar5) {
    iVar5 = iVar2;
  }
  plVar1 = (longlong *)(param_1[100].Part[0] + lVar6 * 8);
  for (piVar3 = *(int **)(param_1[100].Part[0] + lVar6 * 8);
      (piVar3 != (int *)0x0 && (*piVar3 <= iVar5)); piVar3 = *(int **)(piVar3 + 4)) {
    if (*piVar3 == iVar5) {
      return;
    }
    plVar1 = (longlong *)(piVar3 + 4);
  }
  uVar4 = param_1[0x14].Part[0];
  if ((longlong)uVar4 < (longlong)param_1[0x13].Part[1]) {
    piVar3 = (int *)(param_1[0x13].Part[0] + uVar4 * 0x18);
    param_1[0x14].Part[0] = uVar4 + 1;
    piVar3[1] = 0;
    piVar3[2] = 0;
    *piVar3 = iVar5;
    *(longlong *)(piVar3 + 4) = *plVar1;
    *plVar1 = (longlong)piVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(param_1,1);
}



// FUNCTION 143c6db80 FUN_143c6db80 body=340 status=ok
// SIG undefined FUN_143c6db80(void)

void FUN_143c6db80(longlong param_1,int param_2,int param_3,int param_4,short param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_4 >> 9;
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  if ((*(byte *)(param_1 + 0x508) & 2) == 0) {
    if (0xff < (int)uVar3) {
      uVar3 = 0xff;
    }
  }
  else {
    uVar3 = uVar3 & 0x1ff;
    if (uVar3 < 0x101) {
      if (uVar3 == 0x100) {
        uVar3 = 0xff;
      }
    }
    else {
      uVar3 = 0x200 - uVar3;
    }
  }
  param_3 = param_3 + *(int *)(param_1 + 0x110);
  param_2 = param_2 + *(int *)(param_1 + 0x108);
  if (0x7ffe < param_2) {
    param_2 = 0x7fff;
  }
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  if (uVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x608);
    lVar1 = param_1 + (longlong)iVar2 * 6;
    if ((((iVar2 < 1) || (*(int *)(param_1 + 0x620) != param_3)) ||
        ((int)*(short *)(lVar1 + 0x542) + (uint)*(ushort *)(lVar1 + 0x544) != param_2)) ||
       (*(byte *)(lVar1 + 0x546) != uVar3)) {
      if ((*(int *)(param_1 + 0x620) != param_3) || (0x1f < iVar2)) {
        if ((*(code **)(param_1 + 0x610) != (code *)0x0) && (0 < iVar2)) {
          (**(code **)(param_1 + 0x610))
                    (*(int *)(param_1 + 0x620),iVar2,param_1 + 0x548,
                     *(undefined8 *)(param_1 + 0x618));
        }
        *(undefined4 *)(param_1 + 0x608) = 0;
        *(int *)(param_1 + 0x620) = param_3;
        lVar1 = param_1;
      }
      *(short *)(lVar1 + 0x54a) = param_5;
      *(short *)(lVar1 + 0x548) = (short)param_2;
      *(char *)(lVar1 + 0x54c) = (char)uVar3;
      *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + 1;
    }
    else {
      *(ushort *)(lVar1 + 0x544) = *(ushort *)(lVar1 + 0x544) + param_5;
    }
  }
  return;
}



// FUNCTION 143c6dce0 FUN_143c6dce0 body=409 status=ok
// SIG undefined FUN_143c6dce0(void)

void FUN_143c6dce0(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  piVar6 = (int *)(param_1 + 0x15c);
  iVar2 = *param_3;
  iVar5 = iVar2 * 4;
  *piVar6 = iVar5;
  *(int *)(param_1 + 0x160) = param_3[1] << 2;
  iVar8 = *param_2;
  *(int *)(param_1 + 0x164) = iVar8 * 4;
  iVar3 = param_2[1];
  iVar1 = iVar3 * 4;
  *(int *)(param_1 + 0x168) = iVar1;
  iVar4 = *(int *)(param_1 + 0x150);
  iVar7 = iVar5 + iVar8 * -8 + iVar4;
  *(int *)(param_1 + 0x16c) = iVar4;
  iVar5 = *(int *)(param_1 + 0x154);
  *(int *)(param_1 + 0x170) = iVar5;
  if (iVar7 < 0) {
    iVar7 = (iVar8 * 8 + iVar2 * -4) - iVar4;
  }
  iVar2 = *(int *)(param_1 + 0x160);
  iVar8 = iVar2 + iVar3 * -8 + iVar5;
  if (iVar8 < 0) {
    iVar8 = (iVar3 * 8 - iVar2) - iVar5;
  }
  if (iVar7 < iVar8) {
    iVar7 = iVar8;
  }
  iVar8 = 0;
  if (iVar7 < 0x40) goto LAB_143c6ddc4;
  iVar3 = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar1;
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar5 < iVar3) {
    iVar3 = iVar5;
  }
  if (iVar2 < iVar5) {
    iVar2 = iVar5;
  }
  iVar8 = 0;
  if (*(int *)(param_1 + 0x114) <= iVar3 >> 8) goto LAB_143c6ddc4;
  if (iVar2 >> 8 < *(int *)(param_1 + 0x110)) goto LAB_143c6ddc4;
  iVar2 = 0;
  do {
    iVar7 = iVar7 >> 2;
    iVar2 = iVar2 + 1;
  } while (0x40 < iVar7);
  *(int *)(param_1 + 0x464) = iVar2;
  iVar8 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x464 + (longlong)iVar8 * 4);
    if (iVar2 < 1) {
LAB_143c6ddc4:
      FUN_143c6e070(param_1,*piVar6,piVar6[1]);
      iVar8 = iVar8 + -1;
      piVar6 = piVar6 + -4;
    }
    else {
      iVar2 = iVar2 + -1;
      piVar6[8] = piVar6[4];
      iVar3 = (piVar6[4] + piVar6[2]) / 2;
      piVar6[6] = iVar3;
      iVar4 = (*piVar6 + piVar6[2]) / 2;
      piVar6[2] = iVar4;
      piVar6[4] = (iVar4 + iVar3) / 2;
      piVar6[9] = piVar6[5];
      iVar3 = (piVar6[5] + piVar6[3]) / 2;
      piVar6[7] = iVar3;
      iVar4 = (piVar6[1] + piVar6[3]) / 2;
      piVar6[3] = iVar4;
      piVar6[5] = (iVar4 + iVar3) / 2;
      piVar6 = piVar6 + 4;
      iVar8 = iVar8 + 1;
      *(int *)(param_1 + 0x460 + (longlong)iVar8 * 4) = iVar2;
      *(int *)(param_1 + 0x464 + (longlong)iVar8 * 4) = iVar2;
    }
  } while (-1 < iVar8);
  return;
}



// FUNCTION 143c6de80 FUN_143c6de80 body=481 status=ok
// SIG undefined FUN_143c6de80(void)

void FUN_143c6de80(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  piVar1 = (int *)(param_1 + 0x15c);
  *piVar1 = *param_4 << 2;
  iVar10 = param_4[1] * 4;
  *(int *)(param_1 + 0x160) = iVar10;
  *(int *)(param_1 + 0x164) = *param_3 << 2;
  iVar3 = param_3[1] * 4;
  *(int *)(param_1 + 0x168) = iVar3;
  *(int *)(param_1 + 0x16c) = *param_2 << 2;
  iVar7 = param_2[1] << 2;
  *(int *)(param_1 + 0x170) = iVar7;
  iVar8 = iVar10;
  if (iVar3 < iVar10) {
    iVar8 = iVar3;
  }
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x150);
  iVar6 = *(int *)(param_1 + 0x154);
  if (iVar10 < iVar3) {
    iVar10 = iVar3;
  }
  *(int *)(param_1 + 0x178) = iVar6;
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  if (iVar10 < iVar7) {
    iVar10 = iVar7;
  }
  if (iVar6 < iVar8) {
    iVar8 = iVar6;
  }
  if (iVar10 < iVar6) {
    iVar10 = iVar6;
  }
  piVar5 = piVar1;
  if ((iVar8 >> 8 < *(int *)(param_1 + 0x114)) && (*(int *)(param_1 + 0x110) <= iVar10 >> 8))
  goto LAB_143c6df61;
LAB_143c6df46:
  FUN_143c6e070(param_1,*piVar5,piVar5[1]);
  if (piVar5 == piVar1) {
    return;
  }
  piVar5 = piVar5 + -6;
LAB_143c6df61:
  do {
    iVar8 = *piVar5;
    uVar9 = piVar5[6] - iVar8;
    iVar10 = piVar5[1];
    uVar11 = piVar5[7] - iVar10;
    iVar3 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
    iVar7 = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
    if (iVar7 < iVar3) {
      iVar3 = (iVar7 * 3 >> 3) + iVar3;
    }
    else {
      iVar3 = (iVar3 * 3 >> 3) + iVar7;
    }
    if (iVar3 < 0x8000) {
      iVar6 = piVar5[2] - iVar8;
      iVar7 = piVar5[3] - iVar10;
      uVar2 = iVar6 * uVar11 - iVar7 * uVar9;
      uVar4 = (int)uVar2 >> 0x1f;
      if ((int)((uVar2 ^ uVar4) - uVar4) <= iVar3 * 0x2a) {
        iVar8 = piVar5[4] - iVar8;
        iVar10 = piVar5[5] - iVar10;
        uVar2 = iVar8 * uVar11 - iVar10 * uVar9;
        uVar4 = (int)uVar2 >> 0x1f;
        if ((((int)((uVar2 ^ uVar4) - uVar4) <= iVar3 * 0x2a) &&
            ((int)((iVar7 - uVar11) * iVar7 + (iVar6 - uVar9) * iVar6) < 1)) &&
           ((int)((iVar10 - uVar11) * iVar10 + (iVar8 - uVar9) * iVar8) < 1)) goto LAB_143c6df46;
      }
    }
    FUN_143c2aad0(piVar5);
    piVar5 = piVar5 + 6;
  } while( true );
}



// FUNCTION 143c6e070 FUN_143c6e070 body=779 status=ok
// SIG undefined FUN_143c6e070(void)

void FUN_143c6e070(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_res8;
  int local_res20;
  uint local_58;
  
  iVar8 = *(int *)(param_1 + 0x158) >> 8;
  iVar11 = param_3 >> 8;
  iVar13 = *(int *)(param_1 + 0x150);
  iVar10 = *(int *)(param_1 + 0x154) - *(int *)(param_1 + 0x158);
  iVar6 = param_2 - iVar13;
  iVar12 = param_3 - *(int *)(param_1 + 0x154);
  iVar9 = param_3 + iVar11 * -0x100;
  iVar4 = iVar11;
  iVar2 = iVar8;
  if (iVar11 < iVar8) {
    iVar4 = iVar8;
    iVar2 = iVar11;
  }
  if ((iVar2 < *(int *)(param_1 + 0x114)) && (*(int *)(param_1 + 0x110) <= iVar4)) {
    if (iVar8 == iVar11) {
      FUN_143c6e380(param_1,iVar8,iVar13,iVar10,param_2,iVar9);
    }
    else {
      iVar4 = 1;
      if (iVar6 == 0) {
        iVar2 = 0x100;
        iVar6 = iVar13 >> 8;
        iVar13 = (iVar13 + iVar6 * -0x100) * 2;
        if (iVar12 < 0) {
          iVar2 = 0;
          iVar4 = -1;
        }
        iVar8 = iVar8 + iVar4;
        *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + (iVar2 - iVar10);
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + (iVar2 - iVar10) * iVar13;
        FUN_143c6e680(param_1,iVar6,iVar8);
        if (iVar8 != iVar11) {
          do {
            *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + (iVar2 * 2 + -0x100) * iVar13;
            iVar8 = iVar8 + iVar4;
            *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + iVar2 * 2 + -0x100;
            FUN_143c6e680(param_1,iVar6,iVar8);
          } while (iVar8 != iVar11);
        }
        iVar2 = iVar9 + -0x100 + iVar2;
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + iVar2 * iVar13;
        *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + iVar2;
      }
      else {
        uVar5 = 0x100;
        local_res20 = 0x100;
        iVar2 = 0x100 - iVar10;
        if (iVar12 < 0) {
          uVar5 = 0;
          iVar4 = -1;
          iVar12 = -iVar12;
          local_res20 = 0;
          iVar2 = iVar10;
        }
        iVar3 = (iVar2 * iVar6) / iVar12;
        iVar2 = (iVar2 * iVar6) % iVar12;
        if (iVar2 < 0) {
          iVar3 = iVar3 + -1;
          iVar2 = iVar2 + iVar12;
        }
        iVar3 = iVar3 + iVar13;
        FUN_143c6e380(param_1,iVar8,iVar13,iVar10,iVar3,uVar5);
        iVar8 = iVar8 + iVar4;
        FUN_143c6e680(param_1,iVar3 >> 8,iVar8);
        if (iVar8 != iVar11) {
          iVar13 = (iVar6 * 0x100) / iVar12;
          uVar1 = (longlong)(iVar6 * 0x100) % (longlong)iVar12;
          uVar7 = uVar1 & 0xffffffff;
          local_58 = (uint)uVar1;
          if ((int)local_58 < 0) {
            iVar13 = iVar13 + -1;
            local_58 = local_58 + iVar12;
            uVar7 = (ulonglong)local_58;
          }
          iVar2 = iVar2 - iVar12;
          local_res8 = iVar3;
          do {
            iVar2 = iVar2 + (int)uVar7;
            iVar3 = iVar13;
            if (-1 < iVar2) {
              iVar2 = iVar2 - iVar12;
              iVar3 = iVar13 + 1;
            }
            iVar3 = local_res8 + iVar3;
            FUN_143c6e380(param_1,iVar8,local_res8,0x100 - local_res20,iVar3,local_res20);
            iVar8 = iVar8 + iVar4;
            FUN_143c6e680(param_1,iVar3 >> 8,iVar8);
            uVar7 = (ulonglong)local_58;
            local_res8 = iVar3;
          } while (iVar8 != iVar11);
        }
        FUN_143c6e380(param_1,iVar8,iVar3,0x100 - local_res20,param_2,iVar9);
      }
    }
  }
  *(int *)(param_1 + 0x154) = param_3;
  *(int *)(param_1 + 0x158) = iVar11 * 0x100;
  *(int *)(param_1 + 0x150) = param_2;
  return;
}



// FUNCTION 143c6e380 FUN_143c6e380 body=485 status=ok
// SIG undefined FUN_143c6e380(void)

void FUN_143c6e380(longlong param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_res18;
  int local_res20;
  int local_44;
  
  iVar5 = param_3 >> 8;
  iVar4 = param_5 - param_3;
  iVar3 = param_5 >> 8;
  param_3 = param_3 + iVar5 * -0x100;
  param_5 = param_5 + iVar3 * -0x100;
  if (param_4 != param_6) {
    if (iVar5 == iVar3) {
      param_6 = param_6 - param_4;
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + (param_5 + param_3) * param_6;
    }
    else {
      iVar6 = 0x100;
      local_44 = 0x100;
      iVar7 = 1;
      local_res20 = 1;
      iVar1 = 0x100 - param_3;
      if (iVar4 < 0) {
        iVar6 = 0;
        iVar7 = -1;
        local_44 = 0;
        iVar4 = -iVar4;
        local_res20 = -1;
        iVar1 = param_3;
      }
      iVar1 = iVar1 * (param_6 - param_4);
      iVar2 = iVar1 / iVar4;
      iVar1 = iVar1 % iVar4;
      if (iVar1 < 0) {
        iVar2 = iVar2 + -1;
        iVar1 = iVar1 + iVar4;
      }
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + iVar2;
      iVar5 = iVar5 + iVar7;
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + (iVar6 + param_3) * iVar2;
      FUN_143c6e680(param_1,iVar5,param_2);
      param_4 = param_4 + iVar2;
      if (iVar5 != iVar3) {
        local_res18 = (param_6 + (iVar2 - param_4)) * 0x100;
        iVar7 = local_res18 / iVar4;
        local_res18 = local_res18 % iVar4;
        if (local_res18 < 0) {
          iVar7 = iVar7 + -1;
          local_res18 = local_res18 + iVar4;
        }
        iVar1 = iVar1 - iVar4;
        do {
          iVar1 = iVar1 + local_res18;
          iVar6 = iVar7;
          if (-1 < iVar1) {
            iVar1 = iVar1 - iVar4;
            iVar6 = iVar7 + 1;
          }
          *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + iVar6;
          iVar5 = iVar5 + local_res20;
          param_4 = param_4 + iVar6;
          *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + iVar6 * 0x100;
          FUN_143c6e680(param_1,iVar5,param_2);
        } while (iVar5 != iVar3);
      }
      param_6 = param_6 - param_4;
      *(int *)(param_1 + 0x120) =
           *(int *)(param_1 + 0x120) + ((param_5 - local_44) + 0x100) * param_6;
    }
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + param_6;
    return;
  }
  FUN_143c6e680(param_1,iVar3,param_2);
  return;
}



// FUNCTION 143c6e570 FUN_143c6e570 body=230 status=ok
// SIG undefined FUN_143c6e570(void)

void FUN_143c6e570(int param_1,int param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_4 + 0x518);
  lVar6 = *(longlong *)(param_4 + 0x520) - (longlong)(iVar3 * param_1);
  if (-1 < iVar3) {
    lVar6 = lVar6 + (ulonglong)(uint)((*(int *)(param_4 + 0x510) + -1) * iVar3);
  }
  if (0 < param_2) {
    puVar5 = (ushort *)(param_3 + 2);
    do {
      bVar1 = (byte)puVar5[1];
      if (bVar1 != 0) {
        uVar2 = *puVar5;
        if (uVar2 < 8) {
          pbVar4 = (byte *)((short)puVar5[-1] + lVar6);
          switch(uVar2) {
          case 7:
            *pbVar4 = bVar1;
            pbVar4 = pbVar4 + 1;
          case 6:
            *pbVar4 = bVar1;
            pbVar4 = pbVar4 + 1;
          case 5:
            *pbVar4 = bVar1;
            pbVar4 = pbVar4 + 1;
          case 4:
            *pbVar4 = bVar1;
            pbVar4 = pbVar4 + 1;
          case 3:
            *pbVar4 = bVar1;
            pbVar4 = pbVar4 + 1;
          case 2:
            *pbVar4 = bVar1;
            pbVar4 = pbVar4 + 1;
          case 1:
            *pbVar4 = bVar1;
          }
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((short)puVar5[-1] + lVar6),(uint)bVar1,(ulonglong)uVar2);
        }
      }
      param_2 = param_2 + -1;
      puVar5 = puVar5 + 3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 143c6e680 FUN_143c6e680 body=207 status=ok
// SIG undefined FUN_143c6e680(void)

void FUN_143c6e680(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = param_3 - *(int *)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x10c) < param_2) {
    param_2 = *(int *)(param_1 + 0x10c);
  }
  param_2 = param_2 - *(int *)(param_1 + 0x108);
  if (param_2 < 0) {
    param_2 = -1;
  }
  if ((param_2 != *(int *)(param_1 + 0x100)) || (uVar2 != *(uint *)(param_1 + 0x104))) {
    if ((*(int *)(param_1 + 0x128) == 0) &&
       (*(int *)(param_1 + 0x120) != 0 || *(int *)(param_1 + 0x124) != 0)) {
      lVar1 = FUN_143c6dae0();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + *(int *)(param_1 + 0x120);
      *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + *(int *)(param_1 + 0x124);
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(int *)(param_1 + 0x100) = param_2;
    *(uint *)(param_1 + 0x104) = uVar2;
  }
  if ((uVar2 < *(uint *)(param_1 + 0x11c)) && (param_2 < *(int *)(param_1 + 0x118))) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x128) = 1;
  return;
}



// FUNCTION 143c6e750 FUN_143c6e750 body=321 status=ok
// SIG undefined FUN_143c6e750(void)

void FUN_143c6e750(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x140) != 0) {
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x608) = 0;
    if (0 < *(int *)(param_1 + 0x648)) {
      lVar6 = 0;
      do {
        iVar4 = 0;
        iVar1 = 0;
        piVar2 = *(int **)(lVar6 + *(longlong *)(param_1 + 0x640));
        if (piVar2 != (int *)0x0) {
          iVar3 = 0;
          do {
            if ((iVar1 < *piVar2) && (iVar4 != 0)) {
              FUN_143c6db80(param_1,iVar1,iVar5,iVar3,*piVar2 - iVar1);
            }
            iVar4 = iVar4 + piVar2[1];
            iVar3 = iVar4 * 0x200;
            if ((iVar3 - piVar2[2] != 0) && (-1 < *piVar2)) {
              FUN_143c6db80(param_1,*piVar2,iVar5,iVar3 - piVar2[2],1);
            }
            iVar1 = *piVar2;
            piVar2 = *(int **)(piVar2 + 4);
            iVar1 = iVar1 + 1;
          } while (piVar2 != (int *)0x0);
          if (iVar4 != 0) {
            FUN_143c6db80(param_1,iVar1,iVar5,iVar4 * 0x200,*(int *)(param_1 + 0x118) - iVar1);
          }
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (iVar5 < *(int *)(param_1 + 0x648));
    }
    if ((*(code **)(param_1 + 0x610) != (code *)0x0) && (0 < *(int *)(param_1 + 0x608))) {
                    /* WARNING: Could not recover jumptable at 0x000143c6e888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x610))
                (*(undefined4 *)(param_1 + 0x620),*(int *)(param_1 + 0x608),param_1 + 0x548,
                 *(undefined8 *)(param_1 + 0x618));
      return;
    }
  }
  return;
}



// FUNCTION 143c6e8a0 FUN_143c6e8a0 body=200 status=ok
// SIG undefined FUN_143c6e8a0(void)

void FUN_143c6e8a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_143c71e40(*(undefined8 *)(param_1 + 0xe8));
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 143c6e970 FUN_143c6e970 body=1355 status=ok
// SIG undefined FUN_143c6e970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c6e970(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  short *psVar8;
  longlong lVar9;
  char *pcVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  int local_68 [2];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar1 = param_2[0x13];
  sVar16 = 0;
  local_68[0] = 0;
  local_60 = (undefined8 *)0x0;
  local_68[0] = FUN_143c251d0(param_1,0);
  if (local_68[0] != 0) {
    return local_68[0];
  }
  local_50 = 0x100000001;
  uStack_48 = 0x800000000;
  local_68[0] = FUN_143c72470(param_1,uVar1,&local_50,&local_60);
  puVar3 = local_60;
  if ((char)local_68[0] == -0x50) {
    FUN_143c6e8a0(param_2);
    return 2;
  }
  if (local_68[0] != 0) {
    return local_68[0];
  }
  param_2[0x1d] = local_60;
  if (0 < param_3) {
    FUN_143c6e8a0(param_2);
    return 6;
  }
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x92;
  *param_2 = 1;
  lVar6 = FUN_143c720d0(local_60,"SPACING");
  if ((((lVar6 != 0) && (*(int *)(lVar6 + 8) == 1)) && (*(char **)(lVar6 + 0x10) != (char *)0x0)) &&
     ((bVar4 = **(char **)(lVar6 + 0x10) + 0xbd, bVar4 < 0x2b &&
      ((0x40100000401U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0)))) {
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 4;
  }
  lVar6 = FUN_143c720d0(puVar3,"FAMILY_NAME");
  if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x10) == 0)) {
    param_2[3] = 0;
  }
  else {
    uVar7 = ft_mem_strdup(uVar1,*(longlong *)(lVar6 + 0x10),local_68);
    param_2[3] = uVar7;
    if (local_68[0] != 0) {
      return local_68[0];
    }
  }
  local_68[0] = FUN_143c72130(param_2);
  if (local_68[0] != 0) {
    return local_68[0];
  }
  iVar11 = *(int *)((longlong)puVar3 + 0x34);
  *(undefined4 *)(param_2 + 5) = 1;
  *(int *)(param_2 + 2) = iVar11 + 1;
  local_70 = local_68;
  local_78 = 0;
  psVar8 = (short *)FUN_143c27410(uVar1,0x10,0,1);
  param_2[6] = psVar8;
  if (local_68[0] != 0) {
    return local_68[0];
  }
  psVar8[0] = 0;
  psVar8[1] = 0;
  psVar8[2] = 0;
  psVar8[3] = 0;
  psVar8[4] = 0;
  psVar8[5] = 0;
  psVar8[6] = 0;
  psVar8[7] = 0;
  sVar15 = 0;
  sVar17 = *(short *)(puVar3 + 6) + *(short *)((longlong)puVar3 + 0x2c);
  *psVar8 = sVar17;
  lVar6 = FUN_143c720d0(puVar3,"AVERAGE_WIDTH");
  if (lVar6 == 0) {
    iVar11 = sVar17 * 2;
    iVar11 = iVar11 / 3 + (iVar11 >> 0x1f);
  }
  else {
    iVar11 = *(int *)(lVar6 + 0x10) + 5;
    iVar11 = iVar11 / 10 + (iVar11 >> 0x1f);
  }
  psVar8[1] = (short)iVar11 - (short)(iVar11 >> 0x1f);
  lVar6 = FUN_143c720d0(puVar3,"POINT_SIZE");
  if (lVar6 == 0) {
    *(int *)(psVar8 + 2) = (int)psVar8[1] << 6;
  }
  else {
    *(int *)(psVar8 + 2) = (*(int *)(lVar6 + 0x10) * 0x70800 + 0x8d27) / 0x11a4e;
  }
  lVar6 = FUN_143c720d0(puVar3,"PIXEL_SIZE");
  if (lVar6 != 0) {
    *(int *)(psVar8 + 6) = (int)*(short *)(lVar6 + 0x10) << 6;
  }
  lVar6 = FUN_143c720d0(puVar3,"RESOLUTION_X");
  if (lVar6 != 0) {
    sVar15 = *(short *)(lVar6 + 0x10);
  }
  lVar6 = FUN_143c720d0(puVar3,"RESOLUTION_Y");
  if (lVar6 != 0) {
    sVar16 = *(short *)(lVar6 + 0x10);
  }
  if (*(int *)(psVar8 + 6) == 0) {
    *(int *)(psVar8 + 6) = *(int *)(psVar8 + 2);
    if (sVar16 != 0) {
      *(int *)(psVar8 + 6) = ((int)sVar16 * *(int *)(psVar8 + 2)) / 0x48;
    }
  }
  if ((sVar15 == 0) || (sVar16 == 0)) {
    iVar11 = *(int *)(psVar8 + 6);
  }
  else {
    iVar11 = ((int)sVar15 * *(int *)(psVar8 + 6)) / (int)sVar16;
  }
  *(int *)(psVar8 + 4) = iVar11;
  uVar13 = 0;
  local_70 = local_68;
  lVar6 = puVar3[8];
  local_78 = 0;
  uVar7 = FUN_143c27410(uVar1,8,0,*(undefined4 *)((longlong)puVar3 + 0x34));
  param_2[0x1e] = uVar7;
  if (local_68[0] != 0) {
    return local_68[0];
  }
  *(undefined4 *)(param_2 + 0x22) = 0;
  uVar14 = uVar13;
  if (*(int *)((longlong)puVar3 + 0x34) != 0) {
    do {
      iVar11 = (int)uVar14;
      *(undefined4 *)(uVar14 * 8 + param_2[0x1e]) = *(undefined4 *)(lVar6 + 8 + uVar14 * 0x30);
      *(short *)(uVar14 * 8 + 4 + param_2[0x1e]) = (short)uVar14;
      if (*(int *)(lVar6 + 8 + uVar14 * 0x30) == *(int *)(puVar3 + 5)) {
        iVar5 = *(int *)(param_2 + 0x22);
        if (iVar11 != -1) {
          iVar5 = iVar11;
        }
        *(int *)(param_2 + 0x22) = iVar5;
      }
      uVar14 = (ulonglong)(iVar11 + 1U);
    } while (iVar11 + 1U < *(uint *)((longlong)puVar3 + 0x34));
  }
  bVar2 = false;
  lVar6 = FUN_143c720d0(puVar3,"CHARSET_REGISTRY");
  lVar9 = FUN_143c720d0(puVar3,"CHARSET_ENCODING");
  if ((((lVar6 == 0) || (lVar9 == 0)) || (*(int *)(lVar6 + 8) != 1)) ||
     (((*(int *)(lVar9 + 8) != 1 || (*(longlong *)(lVar6 + 0x10) == 0)) ||
      (*(longlong *)(lVar9 + 0x10) == 0)))) {
    local_58 = 0x741444f42;
    local_60 = param_2;
    iVar11 = FUN_143c1ff20(&DAT_145d37840,0,&local_60,0);
    if (*(int *)(param_2 + 7) == 0) {
      return iVar11;
    }
    param_2[0x11] = *(undefined8 *)param_2[8];
    return iVar11;
  }
  uVar7 = ft_mem_strdup(uVar1,*(longlong *)(lVar9 + 0x10),local_68);
  param_2[0x1b] = uVar7;
  if (local_68[0] != 0) {
    return local_68[0];
  }
  pcVar10 = (char *)ft_mem_strdup(uVar1,*(undefined8 *)(lVar6 + 0x10),local_68);
  param_2[0x1c] = pcVar10;
  if (local_68[0] != 0) {
    return local_68[0];
  }
  if ((((*pcVar10 + 0xb7U & 0xdf) != 0) || ((pcVar10[1] + 0xadU & 0xdf) != 0)) ||
     (uVar14 = uVar13, (pcVar10[2] + 0xb1U & 0xdf) != 0)) goto LAB_143c6ee27;
  do {
    uVar12 = uVar14 + 1;
    if (pcVar10[uVar14 + 3] != (&DAT_145d26674)[uVar14]) goto LAB_143c6edf1;
    uVar14 = uVar12;
  } while (uVar12 != 6);
  goto LAB_143c6ee24;
  while (uVar13 = uVar14, uVar14 != 5) {
LAB_143c6edf1:
    uVar14 = uVar13 + 1;
    if (pcVar10[uVar13 + 3] != (&DAT_145d2667c)[uVar13]) goto LAB_143c6ee27;
  }
  if ((*(char *)param_2[0x1b] != '1') || (((char *)param_2[0x1b])[1] != '\0')) goto LAB_143c6ee27;
LAB_143c6ee24:
  bVar2 = true;
LAB_143c6ee27:
  local_58 = 0;
  if (bVar2) {
    local_58 = 0x10003756e6963;
  }
  local_60 = param_2;
  iVar11 = FUN_143c1ff20(&DAT_145d37840,0,&local_60,0);
  return iVar11;
}



// FUNCTION 143c6eec0 BDF_Size_Select body=71 status=ok
// SIG undefined BDF_Size_Select(void)

undefined8 BDF_Size_Select(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xe8);
  FUN_143c241f0();
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x2c) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x30) * -0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar1 + 8) << 6;
  return 0;
}



// FUNCTION 143c6ef10 FUN_143c6ef10 body=226 status=ok
// SIG undefined FUN_143c6ef10(void)

undefined8 FUN_143c6ef10(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  if (param_2[4] == 0) {
    iVar4 = param_2[2];
  }
  else {
    iVar4 = (param_2[2] * param_2[4] + 0x24) / 0x48;
  }
  if (*param_2 == 0) {
    iVar3 = *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6;
  }
  else {
    if (*param_2 != 1) {
      return 7;
    }
    iVar3 = *(int *)(lVar2 + 0x30) + *(int *)(lVar2 + 0x2c);
  }
  if (iVar4 + 0x20 >> 6 == iVar3) {
    FUN_143c241f0(lVar1,0);
    *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar2 + 0x2c) << 6;
    *(int *)(param_1 + 5) = *(int *)(lVar2 + 0x30) * -0x40;
    *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar2 + 8) << 6;
    return 0;
  }
  return 0x17;
}



// FUNCTION 143c6f000 FUN_143c6f000 body=347 status=ok
// SIG undefined FUN_143c6f000(void)

undefined8 FUN_143c6f000(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ushort uStack_2a;
  short sStack_24;
  short sStack_20;
  
  lVar4 = *param_2;
  sVar3 = *(short *)(*(longlong *)(lVar4 + 0xe8) + 0x440b2);
  if (*(uint *)(lVar4 + 0x10) <= param_3) {
    return 6;
  }
  if (param_3 == 0) {
    param_3 = *(uint *)(lVar4 + 0x110);
  }
  else {
    param_3 = param_3 - 1;
  }
  uVar10 = (ulonglong)param_3;
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x40);
  auVar2 = *(undefined1 (*) [16])(lVar5 + 0x10 + uVar10 * 0x30);
  puVar1 = (undefined8 *)(lVar5 + uVar10 * 0x30);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar10 * 0x30);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  *(uint *)(param_1 + 0x68) = auVar2._2_4_ & 0xffff;
  *(uint *)(param_1 + 0x6c) = auVar2._0_4_ & 0xffff;
  *(int *)(param_1 + 0x70) = (int)uVar7;
  ft_glyphslot_set_bitmap(param_1,uVar6,auVar2._0_4_,param_4,uVar8);
  if (sVar3 == 1) {
    *(undefined1 *)(param_1 + 0x82) = 1;
  }
  else if (sVar3 == 2) {
    *(undefined1 *)(param_1 + 0x82) = 3;
  }
  else if (sVar3 == 4) {
    *(undefined1 *)(param_1 + 0x82) = 4;
  }
  else if (sVar3 == 8) {
    *(undefined1 *)(param_1 + 0x82) = 2;
    *(undefined2 *)(param_1 + 0x80) = 0x100;
  }
  sStack_24 = auVar2._4_2_;
  sStack_20 = auVar2._8_2_;
  uStack_2a = (ushort)((ulonglong)uVar9 >> 0x30);
  *(int *)(param_1 + 0x94) = (int)sStack_20;
  *(int *)(param_1 + 0x3c) = (int)sStack_20 << 6;
  *(int *)(param_1 + 0x90) = (int)sStack_24;
  *(undefined4 *)(param_1 + 0x60) = 0x62697473;
  *(int *)(param_1 + 0x38) = (int)sStack_24 << 6;
  *(uint *)(param_1 + 0x40) = (uint)uStack_2a << 6;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x6c) << 6;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x68) << 6;
  FUN_143c27730((int *)(param_1 + 0x30),
                (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0xe8) + 10) << 6);
  return 0;
}



// FUNCTION 143c6f160 FUN_143c6f160 body=215 status=ok
// SIG undefined FUN_143c6f160(void)

undefined8 FUN_143c6f160(longlong param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xe8);
  if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x58) != 0)) && (param_2 != (char *)0x0)) &&
     (*param_2 != '\0')) {
    plVar3 = (longlong *)FUN_143c72760(param_2,*(undefined8 *)(lVar2 + 0xa8));
    if ((*plVar3 != 0) &&
       (lVar2 = *(longlong *)(lVar2 + 0x60) + *(longlong *)(*plVar3 + 8) * 0x18, lVar2 != 0)) {
      iVar1 = *(int *)(lVar2 + 8);
      if (iVar1 == 1) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar2 + 0x10);
        return 0;
      }
      if (iVar1 == 2) {
        *param_3 = 2;
        param_3[2] = *(undefined4 *)(lVar2 + 0x10);
        return 0;
      }
      if (iVar1 == 3) {
        *param_3 = 3;
        param_3[2] = *(undefined4 *)(lVar2 + 0x10);
        return 0;
      }
    }
  }
  return 6;
}



// FUNCTION 143c6f290 FUN_143c6f290 body=90 status=ok
// SIG undefined FUN_143c6f290(void)

short FUN_143c6f290(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 + uVar4 >> 1;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 8);
      if (param_2 == uVar1) {
        return *(short *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)uVar2 * 8) + 1;
      }
      if (uVar1 <= param_2) {
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar4 < uVar3);
  }
  return 0;
}



// FUNCTION 143c6f2f0 FUN_143c6f2f0 body=165 status=ok
// SIG undefined FUN_143c6f2f0(void)

/* WARNING: Removing unreachable block (ram,0x000143c6f36d) */

short FUN_143c6f2f0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar6 = 0;
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar7 = *param_2 + 1;
  sVar9 = 0;
  uVar5 = 0;
  uVar8 = uVar1;
  if (uVar1 != 0) {
    do {
      uVar4 = uVar8 + uVar5 >> 1;
      uVar2 = *(uint *)(lVar3 + (ulonglong)uVar4 * 8);
      if (uVar7 == uVar2) {
        sVar9 = *(short *)(lVar3 + 4 + (ulonglong)uVar4 * 8);
        goto LAB_143c6f363;
      }
      uVar6 = uVar5;
      if (uVar2 <= uVar7) {
        uVar6 = uVar4 + 1;
        uVar4 = uVar8;
      }
      uVar8 = uVar4;
      uVar5 = uVar6;
    } while (uVar6 < uVar4);
  }
  uVar7 = 0;
  if (uVar6 < uVar1) {
    uVar7 = *(uint *)(lVar3 + (ulonglong)uVar6 * 8);
    sVar9 = *(short *)(lVar3 + 4 + (ulonglong)uVar6 * 8);
LAB_143c6f363:
    sVar9 = sVar9 + 1;
  }
  *param_2 = uVar7;
  return sVar9;
}



// FUNCTION 143c6f3a0 FUN_143c6f3a0 body=152 status=ok
// SIG undefined FUN_143c6f3a0(void)

int FUN_143c6f3a0(longlong param_1,void *param_2,uint param_3)

{
  longlong lVar1;
  void *_Dst;
  int local_res18 [4];
  
  local_res18[0] = 0;
  lVar1 = FUN_143c27410(*(undefined8 *)(param_1 + 0x440b8),1,*(int *)(param_1 + 0x70),
                        param_3 + 1 + *(int *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
                        local_res18);
  *(longlong *)(param_1 + 0x68) = lVar1;
  if (local_res18[0] == 0) {
    _Dst = (void *)((ulonglong)*(uint *)(param_1 + 0x70) + lVar1);
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,(ulonglong)param_3);
    *(undefined1 *)((ulonglong)param_3 + (longlong)_Dst) = 10;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + param_3 + 1;
  }
  return local_res18[0];
}



// FUNCTION 143c6f440 FUN_143c6f440 body=1147 status=ok
// SIG undefined FUN_143c6f440(void)

int FUN_143c6f440(longlong param_1,char *param_2,byte *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  longlong lVar14;
  int local_res20 [2];
  undefined8 uVar15;
  
  uVar8 = *(undefined8 *)(param_1 + 0x440b8);
  iVar11 = 0;
  local_res20[0] = 0;
  plVar6 = (longlong *)FUN_143c72760(param_2,*(undefined8 *)(param_1 + 0xa8));
  if (*plVar6 == 0) {
    plVar6 = (longlong *)FUN_143c72760(param_2,param_1 + 0x440d0);
    lVar14 = *plVar6;
    if (lVar14 == 0) {
      local_res20[0] = FUN_143c71cf0(param_2,1,param_1);
      if (local_res20[0] != 0) {
        return local_res20[0];
      }
      plVar6 = (longlong *)FUN_143c72760(param_2,param_1 + 0x440d0);
      lVar14 = *plVar6;
    }
    iVar11 = *(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x5c) == iVar11) {
      if (iVar11 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(param_1 + 0x60);
      }
      uVar15 = FUN_143c27410(uVar8,0x18,iVar11,iVar11 + 1,uVar15,local_res20);
      *(undefined8 *)(param_1 + 0x60) = uVar15;
      if (local_res20[0] != 0) {
        return local_res20[0];
      }
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x58);
      lVar7 = *(longlong *)(param_1 + 0x60);
      *(undefined8 *)(lVar7 + uVar9 * 0x18) = 0;
      *(undefined8 *)(lVar7 + 8 + uVar9 * 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x10 + uVar9 * 0x18) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    }
    uVar9 = *(ulonglong *)(lVar14 + 8);
    if (uVar9 < 0x53) {
      ppuVar10 = &PTR_s_ADD_STYLE_NAME_145d36f60 + uVar9 * 3;
    }
    else {
      ppuVar10 = (undefined **)(*(longlong *)(param_1 + 0x440c0) + (uVar9 - 0x53) * 0x18);
    }
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x18);
    *puVar1 = *ppuVar10;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(ppuVar10 + 1);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)ppuVar10 + 0xc);
    iVar11 = *(int *)(ppuVar10 + 1);
    if (iVar11 == 1) {
      puVar1[2] = 0;
      if ((param_3 != (byte *)0x0) && (*param_3 != 0)) {
        uVar15 = ft_mem_strdup(uVar8,param_3,local_res20);
        puVar1[2] = uVar15;
        if (local_res20[0] != 0) {
          return local_res20[0];
        }
      }
    }
    else if (iVar11 == 2) {
      uVar5 = FUN_143c6f8c0(param_3,0,10);
      *(undefined4 *)(puVar1 + 2) = uVar5;
    }
    else if (iVar11 == 3) {
      uVar5 = FUN_143c6faf0(param_3,0,10);
      *(undefined4 *)(puVar1 + 2) = uVar5;
    }
    iVar11 = _guard_xfg_dispatch_icall_nop(param_2,"COMMENT",7);
    if ((((iVar11 == 0) && ((byte)param_2[7] < 0x21)) &&
        ((0x100002601U >> ((longlong)param_2[7] & 0x3fU) & 1) != 0)) ||
       (local_res20[0] =
             FUN_143c728f0(*puVar1,*(undefined4 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + 0xa8),
                           uVar8), local_res20[0] == 0)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      iVar11 = _guard_xfg_dispatch_icall_nop(param_2,"DEFAULT_CHAR",0xc);
      if (((iVar11 == 0) && ((byte)param_2[0xc] < 0x21)) &&
         ((0x100002601U >> ((longlong)param_2[0xc] & 0x3fU) & 1) != 0)) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(puVar1 + 2);
      }
      else {
        iVar11 = _guard_xfg_dispatch_icall_nop(param_2,"FONT_ASCENT",0xb);
        if (((iVar11 == 0) && ((byte)param_2[0xb] < 0x21)) &&
           ((0x100002601U >> ((longlong)param_2[0xb] & 0x3fU) & 1) != 0)) {
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(puVar1 + 2);
        }
        else {
          iVar11 = _guard_xfg_dispatch_icall_nop(param_2,"FONT_DESCENT",0xc);
          if (((iVar11 == 0) && ((byte)param_2[0xc] < 0x21)) &&
             ((0x100002601U >> ((longlong)param_2[0xc] & 0x3fU) & 1) != 0)) {
            *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar1 + 2);
          }
          else {
            iVar11 = _guard_xfg_dispatch_icall_nop(param_2,"SPACING",7);
            if (((iVar11 == 0) && ((byte)param_2[7] < 0x21)) &&
               ((0x100002601U >> ((longlong)param_2[7] & 0x3fU) & 1) != 0)) {
              if ((char *)puVar1[2] == (char *)0x0) {
                local_res20[0] = 3;
              }
              else {
                cVar3 = *(char *)puVar1[2];
                if ((cVar3 + 0xb0U & 0xdf) == 0) {
                  *(undefined4 *)(param_1 + 0x20) = 8;
                }
                else if ((cVar3 + 0xb3U & 0xdf) == 0) {
                  *(undefined4 *)(param_1 + 0x20) = 0x10;
                }
                else if ((cVar3 + 0xbdU & 0xdf) == 0) {
                  *(undefined4 *)(param_1 + 0x20) = 0x20;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar7 = *(longlong *)(*plVar6 + 8);
    lVar14 = *(longlong *)(param_1 + 0x60) + lVar7 * 0x18;
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x60) + 8 + lVar7 * 0x18);
    if (iVar12 == 1) {
      ft_mem_free(uVar8,*(undefined8 *)(lVar14 + 0x10));
      *(undefined8 *)(lVar14 + 0x10) = 0;
      if ((param_3 != (byte *)0x0) && (*param_3 != 0)) {
        uVar8 = ft_mem_strdup(uVar8,param_3,local_res20);
        *(undefined8 *)(lVar14 + 0x10) = uVar8;
        return local_res20[0];
      }
    }
    else {
      if (iVar12 == 2) {
        uVar5 = FUN_143c6f8c0(param_3,0,10);
        *(undefined4 *)(lVar14 + 0x10) = uVar5;
        return local_res20[0];
      }
      if (iVar12 == 3) {
        if ((param_3 != (byte *)0x0) && (*param_3 != 0)) {
          iVar12 = 10;
          puVar13 = &DAT_145d377f8;
          if ((*param_3 == 0x30) && ((param_3[1] + 0xa8 & 0xdf) == 0)) {
            iVar12 = 0x10;
            param_3 = param_3 + 2;
            puVar13 = &DAT_145d37818;
          }
          bVar2 = *param_3;
          bVar4 = puVar13[bVar2 >> 3] & (byte)(1 << (bVar2 & 7));
          while (bVar4 != 0) {
            lVar7 = (longlong)(char)bVar2;
            param_3 = param_3 + 1;
            bVar2 = *param_3;
            iVar11 = iVar11 * iVar12 + (uint)(byte)(&DAT_145d37890)[lVar7];
            bVar4 = puVar13[bVar2 >> 3] & (byte)(1 << (bVar2 & 7));
          }
        }
        *(int *)(lVar14 + 0x10) = iVar11;
        return local_res20[0];
      }
    }
  }
  return local_res20[0];
}



// FUNCTION 143c6f8c0 FUN_143c6f8c0 body=262 status=ok
// SIG undefined FUN_143c6f8c0(void)

int FUN_143c6f8c0(byte *param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((param_1 != (byte *)0x0) && (bVar1 = *param_1, bVar1 != 0)) {
    if (param_3 == 8) {
      puVar6 = &DAT_145d377d8;
    }
    else if (param_3 == 0x10) {
      puVar6 = &DAT_145d37818;
    }
    else {
      param_3 = 10;
      puVar6 = &DAT_145d377f8;
    }
    iVar5 = 0;
    if (bVar1 == 0x2d) {
      param_1 = param_1 + 1;
    }
    if ((*param_1 == 0x30) && ((param_1[1] + 0xa8 & 0xdf) == 0)) {
      param_3 = 0x10;
      puVar6 = &DAT_145d37818;
      param_1 = param_1 + 2;
    }
    bVar2 = *param_1;
    bVar3 = puVar6[bVar2 >> 3] & (byte)(1 << (bVar2 & 7));
    while (bVar3 != 0) {
      lVar4 = (longlong)(char)bVar2;
      param_1 = param_1 + 1;
      bVar2 = *param_1;
      iVar5 = iVar5 * param_3 + (uint)(byte)(&DAT_145d37890)[lVar4];
      bVar3 = puVar6[bVar2 >> 3] & (byte)(1 << (bVar2 & 7));
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    if (bVar1 == 0x2d) {
      iVar5 = -iVar5;
    }
    return iVar5;
  }
  return 0;
}



// FUNCTION 143c6f9d0 FUN_143c6f9d0 body=277 status=ok
// SIG undefined FUN_143c6f9d0(void)

int FUN_143c6f9d0(byte *param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  undefined *puVar8;
  
  sVar7 = (short)param_3;
  if ((param_1 == (byte *)0x0) || (bVar1 = *param_1, bVar1 == 0)) {
    iVar4 = 0;
  }
  else {
    if (param_3 == 8) {
      puVar8 = &DAT_145d377d8;
    }
    else if (param_3 == 0x10) {
      puVar8 = &DAT_145d37818;
    }
    else {
      sVar7 = 10;
      puVar8 = &DAT_145d377f8;
    }
    sVar6 = 0;
    if (bVar1 == 0x2d) {
      param_1 = param_1 + 1;
    }
    if ((*param_1 == 0x30) && ((param_1[1] + 0xa8 & 0xdf) == 0)) {
      sVar7 = 0x10;
      puVar8 = &DAT_145d37818;
      param_1 = param_1 + 2;
    }
    bVar2 = *param_1;
    bVar3 = puVar8[bVar2 >> 3] & (byte)(1 << (bVar2 & 7));
    while (bVar3 != 0) {
      lVar5 = (longlong)(char)bVar2;
      param_1 = param_1 + 1;
      bVar2 = *param_1;
      sVar6 = sVar7 * sVar6 + (ushort)(byte)(&DAT_145d37890)[lVar5];
      bVar3 = puVar8[bVar2 >> 3] & (byte)(1 << (bVar2 & 7));
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    iVar4 = (int)sVar6;
    if (bVar1 == 0x2d) {
      return -iVar4;
    }
  }
  return iVar4;
}



// FUNCTION 143c6faf0 FUN_143c6faf0 body=240 status=ok
// SIG undefined FUN_143c6faf0(void)

int FUN_143c6faf0(byte *param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    if (param_3 == 8) {
      puVar5 = &DAT_145d377d8;
    }
    else if (param_3 == 0x10) {
      puVar5 = &DAT_145d37818;
    }
    else {
      param_3 = 10;
      puVar5 = &DAT_145d377f8;
    }
    if ((*param_1 == 0x30) && ((param_1[1] + 0xa8 & 0xdf) == 0)) {
      param_3 = 0x10;
      puVar5 = &DAT_145d37818;
      param_1 = param_1 + 2;
    }
    bVar1 = *param_1;
    iVar4 = 0;
    bVar2 = puVar5[bVar1 >> 3] & (byte)(1 << (bVar1 & 7));
    while (bVar2 != 0) {
      lVar3 = (longlong)(char)bVar1;
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      iVar4 = iVar4 * param_3 + (uint)(byte)(&DAT_145d37890)[lVar3];
      bVar2 = puVar5[bVar1 >> 3] & (byte)(1 << (bVar1 & 7));
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return iVar4;
  }
  return 0;
}



// FUNCTION 143c6fbe0 FUN_143c6fbe0 body=249 status=ok
// SIG undefined FUN_143c6fbe0(void)

short FUN_143c6fbe0(byte *param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  short sVar4;
  undefined *puVar5;
  short sVar6;
  
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
    sVar6 = 0;
  }
  else {
    if (param_3 == 8) {
      puVar5 = &DAT_145d377d8;
    }
    else if (param_3 == 0x10) {
      puVar5 = &DAT_145d37818;
    }
    else {
      param_3 = 10;
      puVar5 = &DAT_145d377f8;
    }
    sVar4 = (short)param_3;
    if ((*param_1 == 0x30) && ((param_1[1] + 0xa8 & 0xdf) == 0)) {
      sVar4 = 0x10;
      puVar5 = &DAT_145d37818;
      param_1 = param_1 + 2;
    }
    bVar1 = *param_1;
    sVar6 = 0;
    bVar2 = puVar5[bVar1 >> 3] & (byte)(1 << (bVar1 & 7));
    while (bVar2 != 0) {
      lVar3 = (longlong)(char)bVar1;
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      sVar6 = sVar4 * sVar6 + (ushort)(byte)(&DAT_145d37890)[lVar3];
      bVar2 = puVar5[bVar1 >> 3] & (byte)(1 << (bVar1 & 7));
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
      return sVar6;
    }
  }
  return sVar6;
}



// FUNCTION 143c6fce0 FUN_143c6fce0 body=338 status=ok
// SIG undefined FUN_143c6fce0(void)

undefined8
FUN_143c6fce0(char *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,longlong param_5)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined **ppuVar5;
  char *pcVar6;
  char cVar7;
  
  *param_3 = param_1;
  cVar2 = *param_1;
  pcVar6 = param_1;
  while (((cVar2 != '\0' && (*pcVar6 != ' ')) && (*pcVar6 != '\t'))) {
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar6;
  }
  cVar2 = *pcVar6;
  cVar7 = -1;
  if (cVar2 != '\0') {
    *pcVar6 = '\0';
    cVar7 = cVar2;
  }
  if (*param_1 != '\0') {
    plVar4 = (longlong *)FUN_143c72760(param_1,param_5 + 0x440d0);
    if (*plVar4 != 0) {
      uVar3 = *(ulonglong *)(*plVar4 + 8);
      if (uVar3 < 0x53) {
        ppuVar5 = &PTR_s_ADD_STYLE_NAME_145d36f60 + uVar3 * 3;
      }
      else {
        ppuVar5 = (undefined **)(*(longlong *)(param_5 + 0x440c0) + (uVar3 - 0x53) * 0x18);
      }
      goto LAB_143c6fd7f;
    }
  }
  ppuVar5 = (undefined **)0x0;
LAB_143c6fd7f:
  if (cVar7 != -1) {
    *pcVar6 = cVar7;
  }
  if ((ppuVar5 != (undefined **)0x0) && (*(int *)(ppuVar5 + 1) != 1)) {
    return 0;
  }
  if (*pcVar6 != '\0') {
    *pcVar6 = '\0';
    pcVar6 = pcVar6 + 1;
  }
  cVar2 = *pcVar6;
  while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar1;
  }
  if (*pcVar6 == '\"') {
    pcVar6 = pcVar6 + 1;
  }
  *param_4 = pcVar6;
  pcVar1 = param_1 + param_2;
  while( true ) {
    if (pcVar1 <= pcVar6) {
      return 1;
    }
    if ((pcVar1[-1] != ' ') && (pcVar1[-1] != '\t')) break;
    pcVar1[-1] = '\0';
    pcVar1 = pcVar1 + -1;
  }
  if (pcVar1 <= pcVar6) {
    return 1;
  }
  if (pcVar1[-1] != '\"') {
    return 1;
  }
  pcVar1[-1] = '\0';
  return 1;
}



// FUNCTION 143c6fe40 FUN_143c6fe40 body=153 status=ok
// SIG undefined FUN_143c6fe40(void)

int FUN_143c6fe40(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int local_res10 [6];
  
  uVar1 = *(uint *)(param_1 + 1);
  local_res10[0] = 0;
  if (param_2 <= uVar1) {
    return 0;
  }
  uVar3 = uVar1 + 5 + (uVar1 >> 1);
  if (uVar1 == 0xfffffff) {
    local_res10[0] = 0x40;
  }
  else {
    if ((uVar3 < uVar1) || (0xfffffff < uVar3)) {
      uVar3 = 0xfffffff;
    }
    uVar2 = FUN_143c27410(param_1[2],8,uVar1,uVar3,*param_1,local_res10);
    *param_1 = uVar2;
    if (local_res10[0] == 0) {
      *(uint *)(param_1 + 1) = uVar3;
      return 0;
    }
  }
  return local_res10[0];
}



// FUNCTION 143c6fee0 FUN_143c6fee0 body=167 status=ok
// SIG undefined FUN_143c6fee0(void)

undefined * FUN_143c6fee0(longlong *param_1,undefined1 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  *param_3 = 0;
  if ((param_1 == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0xc) == 0)) {
    return (undefined *)0x0;
  }
  puVar2 = *(undefined **)*param_1;
  uVar6 = uVar4;
  do {
    pcVar3 = *(char **)(*param_1 + uVar6 * 8);
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      puVar2[uVar4] = cVar1;
      pcVar3 = pcVar3 + 1;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      cVar1 = *pcVar3;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar5) break;
    puVar2[uVar4] = param_2;
    uVar4 = (ulonglong)((int)uVar4 + 1);
  } while (uVar5 < *(uint *)((longlong)param_1 + 0xc));
  if (puVar2 != &DAT_145d37728) {
    puVar2[uVar4] = 0;
  }
  *param_3 = (int)uVar4;
  return puVar2;
}



// FUNCTION 143c6ff90 FUN_143c6ff90 body=597 status=ok
// SIG undefined FUN_143c6ff90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c6ff90(longlong *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  if ((int)param_1[1] != 0) {
    *(undefined **)*param_1 = &DAT_145d37728;
    *(undefined **)(*param_1 + 8) = &DAT_145d37728;
    *(undefined **)(*param_1 + 0x10) = &DAT_145d37728;
    *(undefined **)(*param_1 + 0x18) = &DAT_145d37728;
    *(undefined **)(*param_1 + 0x20) = &DAT_145d37728;
  }
  if ((param_4 == 0) || (*param_3 == 0)) {
    uVar4 = 0;
  }
  else {
    if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
      bVar3 = false;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      do {
        bVar1 = *param_2;
        if (bVar1 == 0) break;
        if ((bVar1 == 0x2b) && (param_2[1] == 0)) {
          bVar3 = true;
        }
        else {
          pbVar7 = (byte *)((longlong)&local_68 + (ulonglong)(bVar1 >> 3));
          *pbVar7 = *pbVar7 | (byte)(1 << ((int)(char)bVar1 & 7U));
        }
        param_2 = param_2 + 1;
      } while (param_2 != (byte *)0x0);
      iVar8 = 0;
      pbVar7 = param_3;
      do {
        while( true ) {
          if ((param_3 + param_4 <= pbVar7) || (*pbVar7 == 0)) {
            uVar5 = *(int *)((longlong)param_1 + 0xc) + iVar8;
            if ((*(uint *)(param_1 + 1) <= uVar5) &&
               (uVar4 = FUN_143c6fe40(param_1,uVar5 + 1), (int)uVar4 != 0)) {
              return uVar4;
            }
            if (iVar8 != 0) {
              *(undefined **)(*param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 8) =
                   &DAT_145d37728;
              *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
            }
            *(undefined8 *)(*param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 8) = 0;
            return 0;
          }
          bVar1 = *pbVar7;
          pbVar6 = pbVar7;
          while ((bVar1 != 0 &&
                 (((uint)(int)*(char *)((longlong)&local_68 + (ulonglong)(*pbVar6 >> 3)) >>
                   ((int)(char)*pbVar6 & 7U) & 1) == 0))) {
            pbVar6 = pbVar6 + 1;
            bVar1 = *pbVar6;
          }
          if ((*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) &&
             (uVar4 = FUN_143c6fe40(param_1,*(int *)((longlong)param_1 + 0xc) + 1), (int)uVar4 != 0)
             ) {
            return uVar4;
          }
          pbVar9 = &DAT_145d37728;
          if (pbVar7 < pbVar6) {
            pbVar9 = pbVar7;
          }
          *(byte **)(*param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 8) = pbVar9;
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
          if (bVar3) break;
          if (*pbVar6 != 0) {
            *pbVar6 = 0;
            pbVar7 = pbVar6 + 1;
            goto LAB_143c7014f;
          }
LAB_143c70160:
          iVar8 = 0;
          pbVar7 = pbVar6;
        }
        pbVar7 = pbVar6;
        if (*pbVar6 == 0) goto LAB_143c70160;
        do {
          if (((uint)(int)*(char *)((longlong)&local_68 + (ulonglong)(*pbVar7 >> 3)) >>
               ((int)(char)*pbVar7 & 7U) & 1) == 0) break;
          *pbVar7 = 0;
          pbVar7 = pbVar7 + 1;
        } while (*pbVar7 != 0);
LAB_143c7014f:
        bVar2 = pbVar7 <= pbVar6;
        pbVar6 = pbVar7;
        if ((bVar2) || (*pbVar7 != 0)) goto LAB_143c70160;
        iVar8 = 1;
      } while( true );
    }
    uVar4 = 6;
  }
  return uVar4;
}



// FUNCTION 143c701f0 FUN_143c701f0 body=2861 status=ok
// SIG undefined FUN_143c701f0(void)

uint FUN_143c701f0(byte *param_1,int param_2,undefined8 param_3,undefined8 param_4,uint *param_5)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  void *_Src;
  void *_Dst;
  longlong lVar10;
  short sVar11;
  undefined8 *puVar12;
  uint uVar13;
  byte *pbVar14;
  ulonglong uVar15;
  byte *pbVar16;
  uint uVar17;
  uint local_res18 [2];
  undefined8 local_res20;
  
  local_res18[0] = 0;
  lVar3 = *(longlong *)(param_5 + 10);
  uVar4 = *(undefined8 *)(lVar3 + 0x440b8);
  local_res20 = param_4;
  iVar7 = _guard_xfg_dispatch_icall_nop((char *)param_1,"COMMENT",7);
  if (iVar7 == 0) {
    pbVar14 = param_1 + 7;
    if ((0x20 < param_1[7]) || ((0x100002601U >> ((longlong)(char)param_1[7] & 0x3fU) & 1) == 0))
    goto LAB_143c7028d;
    iVar7 = param_2 + -7;
    if (*pbVar14 != 0) {
      pbVar14 = param_1 + 8;
      iVar7 = param_2 + -8;
    }
    local_res18[0] = FUN_143c6f3a0(*(undefined8 *)(param_5 + 10),pbVar14,iVar7);
  }
  else {
LAB_143c7028d:
    if ((*param_5 & 0x20) == 0) {
      iVar7 = _guard_xfg_dispatch_icall_nop((char *)param_1,"CHARS",5);
      if (((iVar7 == 0) && (param_1[5] < 0x21)) &&
         ((0x100002601U >> ((longlong)(char)param_1[5] & 0x3fU) & 1) != 0)) {
        local_res18[0] = FUN_143c6ff90(param_5 + 0x880e,&DAT_145d37e28,param_1,param_2);
        if (local_res18[0] == 0) {
          uVar8 = FUN_143c6faf0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 8),0,10);
          *(uint *)(lVar3 + 0x34) = uVar8;
          param_5[1] = uVar8;
          if (uVar8 == 0) {
            *(undefined4 *)(lVar3 + 0x34) = 0x40;
          }
          if (param_5[1] < 0x110000) {
            uVar9 = FUN_143c27410(uVar4,0x30,0,*(undefined4 *)(lVar3 + 0x34),0,local_res18);
            *(undefined8 *)(lVar3 + 0x40) = uVar9;
            if (local_res18[0] == 0) {
              *param_5 = *param_5 | 0x20;
              return 0;
            }
          }
          else {
            local_res18[0] = 6;
          }
        }
      }
      else {
        local_res18[0] = 0xb4;
      }
      goto LAB_143c70cf7;
    }
    iVar7 = _guard_xfg_dispatch_icall_nop((char *)param_1,"ENDFONT",7);
    if (((iVar7 == 0) && (param_1[7] < 0x21)) &&
       ((0x100002601U >> ((longlong)(char)param_1[7] & 0x3fU) & 1) != 0)) {
      if ((*param_5 & 0xfc0) != 0) {
        local_res18[0] = 0xba;
        goto LAB_143c70cf7;
      }
      _guard_xfg_dispatch_icall_nop
                (*(void **)(lVar3 + 0x40),(ulonglong)*(uint *)(lVar3 + 0x38),0x30,
                 (_PtFuncCompare *)&LAB_143c72740);
      *param_5 = *param_5 & 0xfffffffe;
    }
    else {
      iVar7 = _guard_xfg_dispatch_icall_nop((char *)param_1,"ENDCHAR",7);
      if (((iVar7 == 0) && (param_1[7] < 0x21)) &&
         ((0x100002601U >> ((longlong)(char)param_1[7] & 0x3fU) & 1) != 0)) {
        *param_5 = *param_5 & 0xfffff03f;
        param_5[8] = 0;
      }
      else if ((((*param_5 & 0x40) == 0) || (param_5[8] != 0xffffffff)) ||
              (*(int *)(*(longlong *)(param_5 + 0xc) + 4) != 0)) {
        iVar7 = _guard_xfg_dispatch_icall_nop((char *)param_1,"STARTCHAR",9);
        if (((iVar7 == 0) && (param_1[9] < 0x21)) &&
           ((0x100002601U >> ((longlong)(char)param_1[9] & 0x3fU) & 1) != 0)) {
          ft_mem_free(uVar4,*(undefined8 *)(param_5 + 6));
          puVar1 = param_5 + 0x880e;
          param_5[6] = 0;
          param_5[7] = 0;
          local_res18[0] = FUN_143c6ff90(puVar1,&DAT_145d37e28,param_1,param_2);
          if (local_res18[0] != 0) goto LAB_143c70cf7;
          uVar8 = 1;
          if ((puVar1 != (uint *)0x0) && (param_5[0x8811] != 0)) {
            if (param_5[0x8811] < 2) {
              param_5[0x8811] = 0;
            }
            else {
              do {
                uVar13 = uVar8 - 1;
                uVar15 = (ulonglong)uVar8;
                uVar8 = uVar8 + 1;
                *(undefined8 *)(*(longlong *)puVar1 + (ulonglong)uVar13 * 8) =
                     *(undefined8 *)(*(longlong *)puVar1 + uVar15 * 8);
              } while (uVar8 < param_5[0x8811]);
              param_5[0x8811] = param_5[0x8811] - 1;
            }
          }
          _Src = (void *)FUN_143c6fee0(puVar1,0x20,&local_res20);
          if (_Src == (void *)0x0) {
LAB_143c70cef:
            local_res18[0] = 3;
            goto LAB_143c70cf7;
          }
          uVar8 = (int)local_res20 + 1;
          _Dst = (void *)FUN_143c27410(uVar4,1,0,uVar8,0,local_res18);
          *(void **)(param_5 + 6) = _Dst;
          if (local_res18[0] != 0) goto LAB_143c70cf7;
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar8);
          *param_5 = *param_5 | 0x40;
        }
        else {
          iVar7 = _guard_xfg_dispatch_icall_nop((char *)param_1,"ENCODING",8);
          if (((iVar7 == 0) && (param_1[8] < 0x21)) &&
             ((0x100002601U >> ((longlong)(char)param_1[8] & 0x3fU) & 1) != 0)) {
            if ((*param_5 & 0x40) == 0) {
              local_res18[0] = 0xb5;
              goto LAB_143c70cf7;
            }
            local_res18[0] = FUN_143c6ff90(param_5 + 0x880e,&DAT_145d37e28,param_1,param_2);
            if (local_res18[0] != 0) goto LAB_143c70cf7;
            uVar8 = FUN_143c6f8c0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 8),0,10);
            param_5[8] = uVar8;
            if ((int)uVar8 < -1) {
              param_5[8] = 0xffffffff;
            }
            uVar8 = param_5[8];
            if (uVar8 == 0xffffffff) {
              if (2 < param_5[0x8811]) {
                uVar8 = FUN_143c6f8c0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 0x10),0,10);
                param_5[8] = uVar8;
              }
              uVar8 = param_5[8];
            }
            if ((int)uVar8 < -1) {
              param_5[8] = 0xffffffff;
            }
            uVar8 = param_5[8];
            if ((0 < (int)uVar8) && (0x10ffff < (ulonglong)(longlong)(int)uVar8))
            goto LAB_143c70cef;
            if (-1 < (int)uVar8) {
              lVar10 = (longlong)(int)uVar8 >> 5;
              uVar8 = 1 << ((byte)uVar8 & 0x1f);
              if ((uVar8 & param_5[lVar10 + 0xe]) == 0) {
                param_5[lVar10 + 0xe] = param_5[lVar10 + 0xe] | uVar8;
              }
              else {
                param_5[8] = 0xffffffff;
                *(undefined2 *)(lVar3 + 0x440b0) = 1;
              }
            }
            if ((int)param_5[8] < 0) {
              if (*(int *)(*(longlong *)(param_5 + 0xc) + 4) == 0) {
                ft_mem_free(uVar4,*(undefined8 *)(param_5 + 6));
                param_5[6] = 0;
                param_5[7] = 0;
              }
              else {
                iVar7 = *(int *)(lVar3 + 0x48);
                if (*(int *)(lVar3 + 0x4c) == iVar7) {
                  uVar9 = FUN_143c27410(uVar4,0x30,iVar7,iVar7 + 4,*(undefined8 *)(lVar3 + 0x50),
                                        local_res18);
                  *(undefined8 *)(lVar3 + 0x50) = uVar9;
                  if (local_res18[0] != 0) goto LAB_143c70cf7;
                  *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 4;
                }
                puVar12 = (undefined8 *)
                          ((ulonglong)*(uint *)(lVar3 + 0x4c) * 0x30 + *(longlong *)(lVar3 + 0x50));
                *puVar12 = *(undefined8 *)(param_5 + 6);
                *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(lVar3 + 0x4c);
                *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + 1;
              }
            }
            else {
              iVar7 = *(int *)(lVar3 + 0x34);
              if (*(int *)(lVar3 + 0x38) == iVar7) {
                uVar9 = FUN_143c27410(uVar4,0x30,iVar7,iVar7 + 0x40,*(undefined8 *)(lVar3 + 0x40),
                                      local_res18);
                *(undefined8 *)(lVar3 + 0x40) = uVar9;
                if (local_res18[0] != 0) goto LAB_143c70cf7;
                *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 0x40;
              }
              puVar12 = (undefined8 *)
                        ((ulonglong)*(uint *)(lVar3 + 0x38) * 0x30 + *(longlong *)(lVar3 + 0x40));
              *(uint *)(lVar3 + 0x38) = *(uint *)(lVar3 + 0x38) + 1;
              *puVar12 = *(undefined8 *)(param_5 + 6);
              *(uint *)(puVar12 + 1) = param_5[8];
            }
            *param_5 = *param_5 & 0x3fffff7f;
            *param_5 = *param_5 | 0x80;
            param_5[6] = 0;
            param_5[7] = 0;
          }
          else {
            if (param_5[8] == 0xffffffff) {
              lVar10 = (ulonglong)(*(int *)(lVar3 + 0x4c) - 1) * 0x30 + *(longlong *)(lVar3 + 0x50);
            }
            else {
              lVar10 = (ulonglong)(*(int *)(lVar3 + 0x38) - 1) * 0x30 + *(longlong *)(lVar3 + 0x40);
            }
            uVar8 = *param_5;
            if ((uVar8 >> 0xb & 1) == 0) {
              iVar7 = _guard_xfg_dispatch_icall_nop((char *)param_1,"SWIDTH",6);
              if (((iVar7 == 0) && (param_1[6] < 0x21)) &&
                 ((0x100002601U >> ((ulonglong)param_1[6] & 0x3f) & 1) != 0)) {
                if ((*param_5 & 0x80) == 0) {
LAB_143c70a57:
                  local_res18[0] = 0xb6;
                  goto LAB_143c70cf7;
                }
                local_res18[0] = FUN_143c6ff90(param_5 + 0x880e,&DAT_145d37e28,param_1,param_2);
                if (local_res18[0] != 0) goto LAB_143c70cf7;
                uVar5 = FUN_143c6faf0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 8),0,10);
                *(undefined2 *)(lVar10 + 0xc) = uVar5;
                *param_5 = *param_5 | 0x100;
              }
              else {
                iVar7 = _guard_xfg_dispatch_icall_nop((char *)param_1,"DWIDTH",6);
                if (((iVar7 == 0) && (param_1[6] < 0x21)) &&
                   ((0x100002601U >> ((ulonglong)param_1[6] & 0x3f) & 1) != 0)) {
                  if ((*param_5 & 0x80) == 0) goto LAB_143c70a57;
                  local_res18[0] = FUN_143c6ff90(param_5 + 0x880e,&DAT_145d37e28,param_1,param_2);
                  if (local_res18[0] != 0) goto LAB_143c70cf7;
                  uVar5 = FUN_143c6faf0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 8),0,10);
                  *(undefined2 *)(lVar10 + 0xe) = uVar5;
                  if ((*param_5 & 0x100) == 0) {
                    uVar5 = FUN_143c21f00(uVar5,72000,
                                          *(int *)(lVar3 + 0x18) * *(int *)(lVar3 + 0x14));
                    *(undefined2 *)(lVar10 + 0xc) = uVar5;
                  }
                  *param_5 = *param_5 | 0x200;
                }
                else {
                  iVar7 = _guard_xfg_dispatch_icall_nop((char *)param_1,"BBX",3);
                  if (((iVar7 != 0) || (0x20 < param_1[3])) ||
                     ((0x100002601U >> ((ulonglong)param_1[3] & 0x3f) & 1) == 0)) {
                    iVar7 = _guard_xfg_dispatch_icall_nop((char *)param_1,"BITMAP",6);
                    if (((iVar7 == 0) && (param_1[6] < 0x21)) &&
                       ((0x100002601U >> ((ulonglong)param_1[6] & 0x3f) & 1) != 0)) {
                      if ((*param_5 & 0x400) == 0) {
                        local_res18[0] = 0xb7;
                      }
                      else {
                        uVar13 = (int)((uint)*(ushort *)(lVar10 + 0x10) *
                                       (uint)*(ushort *)(*(longlong *)(param_5 + 10) + 0x440b2) + 7)
                                 >> 3;
                        uVar8 = *(ushort *)(lVar10 + 0x12) * uVar13;
                        *(uint *)(lVar10 + 0x28) = uVar13;
                        if ((uVar13 < 0x10000) && (uVar8 < 0x10000)) {
                          *(short *)(lVar10 + 0x2c) = (short)uVar8;
                          uVar9 = FUN_143c27410(uVar4,1,0,uVar8 & 0xffff,0,local_res18);
                          *(undefined8 *)(lVar10 + 0x20) = uVar9;
                          if (local_res18[0] == 0) {
                            *param_5 = *param_5 | 0x800;
                            param_5[2] = 0;
                            return 0;
                          }
                        }
                        else {
                          local_res18[0] = 0xb8;
                        }
                      }
                      goto LAB_143c70cf7;
                    }
                    goto LAB_143c70cef;
                  }
                  if ((*param_5 & 0x80) == 0) goto LAB_143c70a57;
                  local_res18[0] = FUN_143c6ff90(param_5 + 0x880e,&DAT_145d37e28,param_1,param_2);
                  if (local_res18[0] != 0) goto LAB_143c70cf7;
                  uVar5 = FUN_143c6fbe0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 8),0,10);
                  *(undefined2 *)(lVar10 + 0x10) = uVar5;
                  uVar5 = FUN_143c6fbe0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 0x10),0,10
                                       );
                  *(undefined2 *)(lVar10 + 0x12) = uVar5;
                  uVar5 = FUN_143c6f9d0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 0x18),0,10
                                       );
                  *(undefined2 *)(lVar10 + 0x14) = uVar5;
                  sVar6 = FUN_143c6f9d0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 0x20),0,10
                                       );
                  *(short *)(lVar10 + 0x16) = sVar6;
                  sVar11 = sVar6 + *(short *)(lVar10 + 0x12);
                  *(short *)(lVar10 + 0x18) = sVar11;
                  *(short *)(lVar10 + 0x1a) = -sVar6;
                  sVar6 = *(short *)((longlong)param_5 + 0x12);
                  if (sVar6 < sVar11) {
                    sVar6 = sVar11;
                  }
                  *(short *)((longlong)param_5 + 0x12) = sVar6;
                  sVar6 = *(short *)(lVar10 + 0x1a);
                  if (*(short *)(lVar10 + 0x1a) <= (short)param_5[5]) {
                    sVar6 = (short)param_5[5];
                  }
                  sVar11 = (short)param_5[4];
                  *(short *)(param_5 + 5) = sVar6;
                  sVar6 = *(short *)(lVar10 + 0x14) + *(short *)(lVar10 + 0x10);
                  *(short *)((longlong)param_5 + 0x16) = sVar6;
                  if (sVar11 < sVar6) {
                    sVar11 = sVar6;
                  }
                  *(short *)(param_5 + 4) = sVar11;
                  sVar6 = *(short *)(lVar10 + 0x14);
                  if ((short)param_5[3] <= *(short *)(lVar10 + 0x14)) {
                    sVar6 = (short)param_5[3];
                  }
                  *(short *)(param_5 + 3) = sVar6;
                  sVar6 = *(short *)(lVar10 + 0x14);
                  if (*(short *)(lVar10 + 0x14) <= *(short *)((longlong)param_5 + 0xe)) {
                    sVar6 = *(short *)((longlong)param_5 + 0xe);
                  }
                  *(short *)((longlong)param_5 + 0xe) = sVar6;
                  if ((*param_5 & 0x200) == 0) {
                    *(undefined2 *)(lVar10 + 0xe) = *(undefined2 *)(lVar10 + 0x10);
                  }
                  if ((**(int **)(param_5 + 0xc) != 0) &&
                     (sVar6 = FUN_143c21f00(*(undefined2 *)(lVar10 + 0xe),72000,
                                            *(int *)(lVar3 + 0x18) * *(int *)(lVar3 + 0x14)),
                     sVar6 != *(short *)(lVar10 + 0xc))) {
                    *(short *)(lVar10 + 0xc) = sVar6;
                    if (param_5[8] == 0xffffffff) {
                      uVar8 = *(int *)(lVar3 + 0x4c) - 1;
                      puVar1 = (uint *)(lVar3 + (ulonglong)(uVar8 >> 5) * 4 + 0x220b0);
                      *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
                    }
                    else {
                      puVar1 = (uint *)(lVar3 + ((longlong)*(int *)(lVar10 + 8) >> 5) * 4 + 0xb0);
                      *puVar1 = *puVar1 | 1 << ((byte)*(int *)(lVar10 + 8) & 0x1f);
                    }
                    *param_5 = *param_5 | 0x1000;
                    *(undefined2 *)(lVar3 + 0x440b0) = 1;
                  }
                  *param_5 = *param_5 | 0x400;
                }
              }
            }
            else if (param_5[2] < (uint)*(ushort *)(lVar10 + 0x12)) {
              uVar17 = 0;
              uVar13 = *(int *)(lVar10 + 0x28) * 2;
              pbVar16 = (byte *)((ulonglong)(*(int *)(lVar10 + 0x28) * param_5[2]) +
                                *(longlong *)(lVar10 + 0x20));
              pbVar14 = param_1;
              uVar8 = uVar17;
              if (uVar13 != 0) {
                do {
                  bVar2 = *pbVar14;
                  if (((&DAT_145d37818)[bVar2 >> 3] & (byte)(1 << (bVar2 & 7))) == 0) {
                    uVar8 = uVar17;
                    if ((uVar17 < uVar13) && ((*param_5 >> 0x1e & 1) == 0)) {
                      *param_5 = *param_5 | 0x40000000;
                      *(undefined2 *)(lVar3 + 0x440b0) = 1;
                    }
                    break;
                  }
                  *pbVar16 = (&DAT_145d37890)[(char)bVar2] + *pbVar16 * '\x10';
                  uVar8 = uVar17 + 1;
                  if ((uVar8 < uVar13) && ((uVar17 & 1) != 0)) {
                    pbVar16 = pbVar16 + 1;
                    *pbVar16 = 0;
                  }
                  pbVar14 = pbVar14 + 1;
                  uVar17 = uVar8;
                } while (uVar8 < uVar13);
              }
              if (*(ushort *)(lVar10 + 0x10) != 0) {
                *pbVar16 = *pbVar16 &
                           (&DAT_145d37910)
                           [(uint)*(ushort *)(*(longlong *)(param_5 + 10) + 0x440b2) *
                            (uint)*(ushort *)(lVar10 + 0x10) & 7];
              }
              if (((uVar8 == uVar13) &&
                  (((&DAT_145d37818)[param_1[uVar13] >> 3] & (byte)(1 << (param_1[uVar13] & 7))) !=
                   0)) && ((*param_5 >> 0x1e & 1) == 0)) {
                *param_5 = *param_5 | 0x40000000;
                *(undefined2 *)(lVar3 + 0x440b0) = 1;
              }
              param_5[2] = param_5[2] + 1;
            }
            else if (-1 < (int)uVar8) {
              *param_5 = uVar8 | 0x80000000;
              *(undefined2 *)(lVar3 + 0x440b0) = 1;
            }
          }
        }
      }
    }
  }
  if (local_res18[0] == 0) {
    return 0;
  }
LAB_143c70cf7:
  if ((*param_5 & 0x40) != 0) {
    ft_mem_free(uVar4,*(undefined8 *)(param_5 + 6));
    param_5[6] = 0;
    param_5[7] = 0;
  }
  return local_res18[0];
}



// FUNCTION 143c70d20 FUN_143c70d20 body=769 status=ok
// SIG undefined FUN_143c70d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143c70d20(char *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,uint *param_5)

{
  uint *puVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  char *local_d8;
  char *local_d0;
  char local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  iVar4 = _guard_xfg_dispatch_icall_nop(param_1,"ENDPROPERTIES",0xd);
  if (((iVar4 != 0) || (0x20 < (byte)param_1[0xd])) ||
     ((0x100002601U >> ((longlong)param_1[0xd] & 0x3fU) & 1) == 0)) {
    iVar4 = _guard_xfg_dispatch_icall_nop(param_1,"_XFREE86_GLYPH_RANGES",0x15);
    if (((iVar4 == 0) && ((byte)param_1[0x15] < 0x21)) &&
       ((0x100002601U >> ((longlong)param_1[0x15] & 0x3fU) & 1) != 0)) {
      return 0;
    }
    iVar4 = _guard_xfg_dispatch_icall_nop(param_1,"COMMENT",7);
    if (iVar4 == 0) {
      pcVar9 = param_1 + 7;
      if (((byte)param_1[7] < 0x21) && ((0x100002601U >> ((longlong)param_1[7] & 0x3fU) & 1) != 0))
      {
        local_d0 = param_1;
        if (*pcVar9 != '\0') {
          *pcVar9 = '\0';
          pcVar9 = param_1 + 8;
        }
        goto LAB_143c70ff3;
      }
    }
    local_e8 = *(undefined8 *)(param_5 + 10);
    iVar4 = FUN_143c6fce0(param_1,param_2,&local_d0,&local_d8);
    pcVar9 = local_d8;
    if (iVar4 == 0) {
      puVar1 = param_5 + 0x880e;
      uVar6 = FUN_143c6ff90(puVar1,&DAT_145d37e28,param_1,param_2);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      pcVar3 = (char *)**(undefined8 **)puVar1;
      if ((puVar1 != (uint *)0x0) && (param_5[0x8811] != 0)) {
        if (param_5[0x8811] < 2) {
          param_5[0x8811] = 0;
        }
        else {
          uVar8 = 1;
          do {
            uVar7 = uVar8 - 1;
            uVar10 = (ulonglong)uVar8;
            uVar8 = uVar8 + 1;
            *(undefined8 *)(*(longlong *)puVar1 + (ulonglong)uVar7 * 8) =
                 *(undefined8 *)(*(longlong *)puVar1 + uVar10 * 8);
          } while (uVar8 < param_5[0x8811]);
          param_5[0x8811] = param_5[0x8811] - 1;
        }
      }
      pcVar9 = (char *)FUN_143c6fee0(puVar1,0x20,&local_d8);
      local_d0 = pcVar3;
    }
LAB_143c70ff3:
    uVar6 = FUN_143c6f440(*(undefined8 *)(param_5 + 10),local_d0,pcVar9,param_3);
    return uVar6;
  }
  lVar2 = *(longlong *)(param_5 + 10);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x58) == 0)) {
LAB_143c70de0:
    *(int *)(lVar2 + 0x2c) = (int)*(short *)(lVar2 + 0x10);
    sprintf(local_c8,"%hd",(ulonglong)(uint)(int)*(short *)(*(longlong *)(param_5 + 10) + 0x10));
    uVar6 = FUN_143c6f440(*(undefined8 *)(param_5 + 10),"FONT_ASCENT",local_c8,param_3);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *(undefined2 *)(*(longlong *)(param_5 + 10) + 0x440b0) = 1;
  }
  else {
    plVar5 = (longlong *)FUN_143c72760("FONT_ASCENT",*(undefined8 *)(lVar2 + 0xa8));
    if ((*plVar5 == 0) || (*(longlong *)(lVar2 + 0x60) + *(longlong *)(*plVar5 + 8) * 0x18 == 0))
    goto LAB_143c70de0;
  }
  lVar2 = *(longlong *)(param_5 + 10);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x58) != 0)) {
    plVar5 = (longlong *)FUN_143c72760("FONT_DESCENT",*(undefined8 *)(lVar2 + 0xa8));
    if ((*plVar5 != 0) && (*(longlong *)(lVar2 + 0x60) + *(longlong *)(*plVar5 + 8) * 0x18 != 0))
    goto LAB_143c70ec4;
  }
  *(int *)(lVar2 + 0x30) = (int)*(short *)(lVar2 + 0x12);
  sprintf(local_c8,"%hd",(ulonglong)(uint)(int)*(short *)(*(longlong *)(param_5 + 10) + 0x12));
  uVar6 = FUN_143c6f440(*(undefined8 *)(param_5 + 10),"FONT_DESCENT",local_c8,param_3);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  *(undefined2 *)(*(longlong *)(param_5 + 10) + 0x440b0) = 1;
LAB_143c70ec4:
  *param_5 = *param_5 & 0xffffffef;
  *param_4 = FUN_143c701f0;
  return 0;
}



// FUNCTION 143c71030 FUN_143c71030 body=2041 status=ok
// SIG undefined FUN_143c71030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c71030(char *param_1,int param_2,undefined4 param_3,undefined8 *param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *_Src;
  ushort uVar11;
  ushort uVar12;
  char *pcVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint *local_e0;
  uint local_d8;
  int local_d4;
  undefined4 local_d0;
  char local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar15 = 0;
  local_d8 = 0;
  uVar16 = uVar15;
  if (*(longlong *)(param_5 + 10) != 0) {
    uVar16 = *(ulonglong *)(*(longlong *)(param_5 + 10) + 0x440b8);
  }
  local_d0 = param_3;
  iVar5 = _guard_xfg_dispatch_icall_nop(param_1,"COMMENT",7);
  if (iVar5 == 0) {
    pcVar13 = param_1 + 7;
    if (((byte)param_1[7] < 0x21) &&
       ((0x100002601U >> ((ulonglong)(byte)param_1[7] & 0x3f) & 1) != 0)) {
      if (*(int *)(*(longlong *)(param_5 + 0xc) + 8) == 0) {
        return local_d8;
      }
      if (*(longlong *)(param_5 + 10) != 0) {
        iVar5 = param_2 + -7;
        if (*pcVar13 != '\0') {
          pcVar13 = param_1 + 8;
          iVar5 = param_2 + -8;
        }
        iVar5 = FUN_143c6f3a0(*(longlong *)(param_5 + 10),pcVar13,iVar5);
        return iVar5;
      }
      return local_d8;
    }
  }
  if ((*param_5 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_5 + 0x8814);
    iVar5 = _guard_xfg_dispatch_icall_nop(param_1,"STARTFONT",9);
    if (((iVar5 != 0) || (0x20 < (byte)param_1[9])) ||
       ((0x100002601U >> ((ulonglong)(byte)param_1[9] & 0x3f) & 1) == 0)) {
      return 0xb0;
    }
    param_5[10] = 0;
    param_5[0xb] = 0;
    *param_5 = 1;
    lVar8 = FUN_143c271e0(uVar10,0x440e8,&local_d8);
    if (local_d8 != 0) {
      return local_d8;
    }
    *(longlong *)(param_5 + 10) = lVar8;
    *(undefined8 *)(lVar8 + 0x440b8) = *(undefined8 *)(param_5 + 0x8814);
    param_5[0x8814] = 0;
    param_5[0x8815] = 0;
    iVar5 = FUN_143c72890(lVar8 + 0x440d0,uVar10);
    if (iVar5 == 0) {
      ppuVar14 = &PTR_s_ADD_STYLE_NAME_145d36f60;
      do {
        local_d8 = 0;
        local_d8 = FUN_143c728f0(*ppuVar14,uVar15,lVar8 + 0x440d0,uVar10);
        if (local_d8 != 0) {
          return local_d8;
        }
        uVar15 = uVar15 + 1;
        ppuVar14 = ppuVar14 + 3;
      } while (uVar15 < 0x53);
      uVar9 = FUN_143c271e0(uVar10,0x18,&local_d8);
      *(undefined8 *)(*(longlong *)(param_5 + 10) + 0xa8) = uVar9;
      if (local_d8 == 0) {
        iVar5 = FUN_143c72890(*(undefined8 *)(*(longlong *)(param_5 + 10) + 0xa8),uVar10);
        if (iVar5 == 0) {
          *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x20) =
               *(undefined4 *)(*(longlong *)(param_5 + 0xc) + 0xc);
          *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x28) = 0xffffffff;
          return 0;
        }
        return iVar5;
      }
      return local_d8;
    }
    return iVar5;
  }
  iVar5 = _guard_xfg_dispatch_icall_nop(param_1,"STARTPROPERTIES",0xf);
  if (((iVar5 == 0) && ((byte)param_1[0xf] < 0x21)) &&
     ((0x100002601U >> ((ulonglong)(byte)param_1[0xf] & 0x3f) & 1) != 0)) {
    if ((*param_5 & 8) == 0) {
      return 0xb3;
    }
    local_d8 = FUN_143c6ff90(param_5 + 0x880e,&DAT_145d37e28,param_1,param_2);
    if (local_d8 == 0) {
      uVar6 = FUN_143c6faf0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 8),0,10);
      local_e0 = &local_d8;
      local_e8 = 0;
      *(uint *)(*(longlong *)(param_5 + 10) + 0x58) = uVar6;
      param_5[1] = uVar6;
      uVar10 = FUN_143c27410(uVar16,0x18,0,uVar6);
      *(undefined8 *)(*(longlong *)(param_5 + 10) + 0x60) = uVar10;
      if (local_d8 == 0) {
        *param_5 = *param_5 | 0x10;
        *param_4 = FUN_143c70d20;
        return 0;
      }
      *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x58) = 0;
      return local_d8;
    }
    return local_d8;
  }
  iVar5 = _guard_xfg_dispatch_icall_nop(param_1,"FONTBOUNDINGBOX",0xf);
  if (((iVar5 == 0) && ((byte)param_1[0xf] < 0x21)) &&
     ((0x100002601U >> ((ulonglong)(byte)param_1[0xf] & 0x3f) & 1) != 0)) {
    if ((*param_5 & 4) == 0) {
      return 0xb2;
    }
    local_d8 = FUN_143c6ff90(param_5 + 0x880e,&DAT_145d37e28,param_1,param_2);
    if (local_d8 == 0) {
      uVar4 = FUN_143c6fbe0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 8),0,10);
      *(undefined2 *)(*(longlong *)(param_5 + 10) + 8) = uVar4;
      uVar4 = FUN_143c6fbe0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 0x10),0,10);
      *(undefined2 *)(*(longlong *)(param_5 + 10) + 10) = uVar4;
      uVar4 = FUN_143c6f9d0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 0x18),0,10);
      *(undefined2 *)(*(longlong *)(param_5 + 10) + 0xc) = uVar4;
      uVar4 = FUN_143c6f9d0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 0x20),0,10);
      *(undefined2 *)(*(longlong *)(param_5 + 10) + 0xe) = uVar4;
      lVar8 = *(longlong *)(param_5 + 10);
      *(short *)(lVar8 + 0x10) = *(short *)(lVar8 + 0xe) + *(short *)(lVar8 + 10);
      *(short *)(*(longlong *)(param_5 + 10) + 0x12) =
           -*(short *)(*(longlong *)(param_5 + 10) + 0xe);
      *param_5 = *param_5 | 8;
      return local_d8;
    }
    return local_d8;
  }
  iVar5 = _guard_xfg_dispatch_icall_nop(param_1,"FONT",4);
  if (((iVar5 == 0) && ((byte)param_1[4] < 0x21)) &&
     ((0x100002601U >> ((ulonglong)(byte)param_1[4] & 0x3f) & 1) != 0)) {
    puVar2 = param_5 + 0x880e;
    local_d8 = FUN_143c6ff90(puVar2,&DAT_145d37e28,param_1,param_2);
    if (local_d8 != 0) {
      return local_d8;
    }
    uVar6 = 1;
    if ((puVar2 != (uint *)0x0) && (param_5[0x8811] != 0)) {
      if (param_5[0x8811] < 2) {
        param_5[0x8811] = 0;
      }
      else {
        do {
          uVar1 = uVar6 - 1;
          uVar15 = (ulonglong)uVar6;
          uVar6 = uVar6 + 1;
          *(undefined8 *)(*(longlong *)puVar2 + (ulonglong)uVar1 * 8) =
               *(undefined8 *)(*(longlong *)puVar2 + uVar15 * 8);
        } while (uVar6 < param_5[0x8811]);
        param_5[0x8811] = param_5[0x8811] - 1;
      }
    }
    _Src = (void *)FUN_143c6fee0(puVar2,0x20,&local_d4);
    if (_Src == (void *)0x0) {
      return 3;
    }
    ft_mem_free(uVar16,**(undefined8 **)(param_5 + 10));
    **(undefined8 **)(param_5 + 10) = 0;
    local_e0 = &local_d8;
    local_e8 = 0;
    uVar10 = FUN_143c27410(uVar16,1,0,local_d4 + 1U);
    **(undefined8 **)(param_5 + 10) = uVar10;
    if (local_d8 != 0) {
      return local_d8;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)**(undefined8 **)(param_5 + 10),_Src,(ulonglong)(local_d4 + 1U));
    iVar5 = FUN_143c71b60(*(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc),local_d0);
    if (iVar5 == 0) {
      *param_5 = *param_5 | 2;
      return 0;
    }
    return iVar5;
  }
  iVar5 = _guard_xfg_dispatch_icall_nop(param_1,"SIZE",4);
  if (((iVar5 != 0) || (0x20 < (byte)param_1[4])) ||
     ((0x100002601U >> ((longlong)param_1[4] & 0x3fU) & 1) == 0)) {
    iVar5 = _guard_xfg_dispatch_icall_nop(param_1,"CHARS",5);
    if (iVar5 != 0) {
      return 3;
    }
    if (0x20 < (byte)param_1[5]) {
      return 3;
    }
    if ((0x100002601U >> ((longlong)param_1[5] & 0x3fU) & 1) == 0) {
      return 3;
    }
    if ((*param_5 & 8) == 0) {
      return 0xb3;
    }
    *(int *)(*(longlong *)(param_5 + 10) + 0x2c) =
         (int)*(short *)(*(longlong *)(param_5 + 10) + 0x10);
    sprintf(local_c8,"%hd",(ulonglong)(uint)(int)*(short *)(*(longlong *)(param_5 + 10) + 0x10));
    local_d8 = FUN_143c6f440(*(undefined8 *)(param_5 + 10),"FONT_ASCENT",local_c8,param_3);
    if (local_d8 != 0) {
      return local_d8;
    }
    *(int *)(*(longlong *)(param_5 + 10) + 0x30) =
         (int)*(short *)(*(longlong *)(param_5 + 10) + 0x12);
    sprintf(local_c8,"%hd",(ulonglong)(uint)(int)*(short *)(*(longlong *)(param_5 + 10) + 0x12));
    iVar5 = FUN_143c6f440(*(undefined8 *)(param_5 + 10),"FONT_DESCENT",local_c8,param_3);
    if (iVar5 == 0) {
      *(undefined2 *)(*(longlong *)(param_5 + 10) + 0x440b0) = 1;
      *param_4 = FUN_143c701f0;
      return -1;
    }
    return iVar5;
  }
  if ((*param_5 & 2) == 0) {
    return 0xb1;
  }
  local_d8 = FUN_143c6ff90(param_5 + 0x880e,&DAT_145d37e28,param_1,param_2);
  if (local_d8 != 0) {
    return local_d8;
  }
  uVar7 = FUN_143c6faf0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 8),0,10);
  *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x14) = uVar7;
  uVar7 = FUN_143c6faf0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 0x10),0,10);
  *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x18) = uVar7;
  uVar7 = FUN_143c6faf0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 0x18),0,10);
  *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x1c) = uVar7;
  if (param_5[0x8811] != 5) {
    *(undefined2 *)(*(longlong *)(param_5 + 10) + 0x440b2) = 1;
    goto LAB_143c71709;
  }
  uVar4 = FUN_143c6f9d0(*(undefined8 *)(*(longlong *)(param_5 + 0x880e) + 0x20),0,10);
  uVar12 = 0;
  *(undefined2 *)(*(longlong *)(param_5 + 10) + 0x440b2) = uVar4;
  uVar3 = *(ushort *)(*(longlong *)(param_5 + 10) + 0x440b2);
  uVar11 = uVar3;
  if (uVar3 == 0) {
LAB_143c716ce:
    uVar11 = 1 << ((byte)uVar15 & 0x1f);
  }
  else {
    do {
      if ((uVar11 & 1) != 0) {
        uVar15 = (ulonglong)uVar12;
      }
      uVar12 = uVar12 + 1;
      uVar11 = uVar11 >> 1;
    } while (uVar11 != 0);
    if ((ushort)uVar15 < 4) goto LAB_143c716ce;
    uVar11 = 8;
  }
  if ((uVar11 < uVar3) || (uVar3 != uVar11)) {
    *(ushort *)(*(longlong *)(param_5 + 10) + 0x440b2) = uVar11 * 2;
    *param_5 = *param_5 | 4;
    return local_d8;
  }
LAB_143c71709:
  *param_5 = *param_5 | 4;
  return local_d8;
}



// FUNCTION 143c71830 FUN_143c71830 body=801 status=ok
// SIG undefined FUN_143c71830(void)

int FUN_143c71830(longlong param_1,code *param_2,undefined8 param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  size_t sVar5;
  uint uVar6;
  undefined1 *_Dst;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong _Size;
  uint uVar11;
  int iVar12;
  int local_res10 [2];
  undefined8 local_res18;
  int *local_res20;
  int local_78;
  uint local_70;
  size_t local_68;
  code *local_60;
  undefined8 local_58;
  
  local_58 = *(undefined8 *)(param_1 + 0x30);
  _Dst = (undefined1 *)0x0;
  local_res10[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_2 == (code *)0x0) {
    local_res10[0] = 6;
  }
  else {
    uVar11 = 0x400;
    local_70 = 0x400;
    _Dst = (undefined1 *)FUN_143c27410(local_58,1,0,0x400,0,local_res10);
    if (local_res10[0] == 0) {
      iVar7 = 1;
      lVar9 = 0;
      lVar10 = 0;
      _Size = 0;
      *_Dst = 0;
      local_68 = 0;
      local_78 = 1;
      bVar3 = true;
      local_60 = param_2;
      do {
        iVar12 = 0x100;
LAB_143c71901:
        sVar5 = local_68;
        if (bVar3) {
          uVar6 = FUN_143c252a0(param_1,_Dst + local_68,uVar11 - (int)local_68);
          _Size = (ulonglong)uVar6;
          local_68 = 0;
          bVar3 = false;
          lVar9 = _Size + sVar5;
          iVar7 = local_78;
        }
        uVar4 = local_res18;
        if (lVar9 <= lVar10) goto LAB_143c7197c;
        pcVar1 = _Dst + lVar10;
        lVar8 = lVar10;
        if ((char)_Dst[lVar10] != iVar12) goto LAB_143c71960;
        lVar10 = lVar10 + 1;
      } while( true );
    }
  }
LAB_143c71b38:
  ft_mem_free(local_58,_Dst);
  return local_res10[0];
LAB_143c71960:
  do {
    if ((_Dst[lVar8] == '\n') || (_Dst[lVar8] == '\r')) {
      if (lVar8 < lVar9) {
        cVar2 = _Dst[lVar8];
        _Dst[lVar8] = 0;
        if (((*pcVar1 != '#') && (*pcVar1 != '\x1a')) && (lVar10 < lVar8)) {
          iVar12 = (int)lVar8 - (int)lVar10;
          local_res10[0] = (*local_60)(pcVar1,iVar12,iVar7,&local_60,local_res18);
          if (local_res10[0] == -1) {
            local_res10[0] = (*local_60)(pcVar1,iVar12,local_78,&local_60,uVar4);
          }
          iVar7 = local_78;
          if (local_res10[0] != 0) goto LAB_143c71b07;
        }
        lVar10 = lVar8 + 1;
        iVar7 = iVar7 + 1;
        _Dst[lVar8] = cVar2;
        uVar11 = local_70;
        local_78 = iVar7;
        if (cVar2 == '\n') {
          iVar12 = 0xd;
        }
        else {
          iVar12 = 0x100;
          if (cVar2 == '\r') {
            iVar12 = 10;
          }
        }
        goto LAB_143c71901;
      }
      break;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 < lVar9);
LAB_143c7197c:
  if (_Size == 0) {
LAB_143c71b07:
    *local_res20 = local_78;
    goto LAB_143c71b38;
  }
  if (lVar10 == 0) {
    if (0xffff < uVar11) {
      local_res10[0] = 6;
      goto LAB_143c71b38;
    }
    local_70 = uVar11 * 2;
    _Dst = (undefined1 *)FUN_143c27410(local_58,1,uVar11,local_70,_Dst,local_res10);
    if (local_res10[0] != 0) goto LAB_143c71b38;
    local_68 = (size_t)uVar11;
    bVar3 = true;
    uVar11 = local_70;
    iVar7 = local_78;
  }
  else {
    _Size = lVar9 - lVar10;
    _guard_xfg_dispatch_icall_nop(_Dst,_Dst + lVar10,_Size);
    lVar9 = lVar9 - _Size;
    bVar3 = true;
    lVar10 = 0;
    iVar7 = local_78;
    local_68 = _Size;
  }
  goto LAB_143c71901;
}



// FUNCTION 143c71b60 FUN_143c71b60 body=332 status=ok
// SIG undefined FUN_143c71b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c71b60(undefined8 *param_1,longlong param_2)

{
  char *_Src;
  int iVar1;
  longlong lVar2;
  ulonglong _Size;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_130;
  int iStack_12c;
  longlong local_128;
  undefined1 local_118 [256];
  ulonglong local_18;
  longlong lVar3;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (((param_1 == (undefined8 *)0x0) || (_Src = (char *)*param_1, _Src == (char *)0x0)) ||
     (*_Src == '\0')) {
    iVar1 = 6;
  }
  else {
    local_138 = 0;
    local_130 = 0;
    local_128 = param_1[0x8817];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0xc);
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (_Src[lVar2] != '\0');
    _Size = lVar3 + 2;
    if (_Size < 0x100) {
      _guard_xfg_dispatch_icall_nop(local_118,_Src,_Size);
      iVar1 = FUN_143c6ff90(&local_138,&DAT_145b69768,local_118,_Size & 0xffffffff);
      if ((iVar1 == 0) && (iStack_12c == 0xf)) {
        switch(**(undefined1 **)(local_138 + 0x58)) {
        case 0x43:
        case 99:
          *(undefined4 *)(param_1 + 4) = 0x20;
          break;
        case 0x4d:
        case 0x6d:
          *(undefined4 *)(param_1 + 4) = 0x10;
          break;
        case 0x50:
        case 0x70:
          *(undefined4 *)(param_1 + 4) = 8;
        }
      }
      if (local_128 != 0) {
        ft_mem_free(local_128,local_138);
      }
    }
    else {
      iVar1 = 6;
    }
  }
  return iVar1;
}



// FUNCTION 143c71cf0 FUN_143c71cf0 body=333 status=ok
// SIG undefined FUN_143c71cf0(void)

int FUN_143c71cf0(void *param_1,undefined4 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Dst;
  longlong lVar6;
  ulonglong _Size;
  int local_res18 [2];
  
  uVar2 = *(undefined8 *)(param_3 + 0x440b8);
  local_res18[0] = 0;
  plVar4 = (longlong *)FUN_143c72760(param_1,param_3 + 0x440d0);
  iVar3 = 0;
  if (*plVar4 == 0) {
    lVar5 = FUN_143c27410(uVar2,0x18,*(int *)(param_3 + 0x440c8),*(int *)(param_3 + 0x440c8) + 1,
                          *(undefined8 *)(param_3 + 0x440c0),local_res18);
    *(longlong *)(param_3 + 0x440c0) = lVar5;
    iVar3 = local_res18[0];
    if (local_res18[0] == 0) {
      puVar1 = (undefined8 *)(lVar5 + (ulonglong)*(uint *)(param_3 + 0x440c8) * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while (*(char *)(lVar5 + (longlong)param_1) != '\0');
      _Size = lVar6 + 2;
      if (_Size < 0x100000000) {
        _Dst = (void *)FUN_143c27410(uVar2,1,0,_Size & 0xffffffff,0,local_res18);
        *puVar1 = _Dst;
        iVar3 = local_res18[0];
        if (local_res18[0] == 0) {
          _guard_xfg_dispatch_icall_nop(_Dst,param_1,_Size);
          *(undefined4 *)(puVar1 + 1) = param_2;
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          iVar3 = FUN_143c728f0(*puVar1,*(int *)(param_3 + 0x440c8) + 0x53,param_3 + 0x440d0,uVar2);
          if (iVar3 == 0) {
            *(int *)(param_3 + 0x440c8) = *(int *)(param_3 + 0x440c8) + 1;
          }
        }
      }
      else {
        iVar3 = 6;
      }
    }
  }
  return iVar3;
}



// FUNCTION 143c71e40 FUN_143c71e40 body=642 status=ok
// SIG undefined FUN_143c71e40(void)

void FUN_143c71e40(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = param_1[0x8817];
    ft_mem_free(uVar2,*param_1);
    uVar4 = 0;
    *param_1 = 0;
    if (param_1[0x15] != 0) {
      FUN_143c72810(param_1[0x15],uVar2);
      ft_mem_free(uVar2,param_1[0x15]);
      param_1[0x15] = 0;
    }
    ft_mem_free(uVar2,param_1[0xd]);
    param_1[0xd] = 0;
    uVar3 = uVar4;
    if (*(int *)(param_1 + 0xb) != 0) {
      do {
        lVar1 = uVar3 * 0x18;
        if (*(int *)(param_1[0xc] + 8 + lVar1) == 1) {
          ft_mem_free(uVar2,*(undefined8 *)(param_1[0xc] + 0x10 + lVar1));
          *(undefined8 *)(param_1[0xc] + 0x10 + lVar1) = 0;
        }
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0xb));
    }
    ft_mem_free(uVar2,param_1[0xc]);
    puVar6 = (undefined8 *)param_1[8];
    param_1[0xc] = 0;
    uVar3 = uVar4;
    if (*(int *)(param_1 + 7) != 0) {
      do {
        ft_mem_free(uVar2,*puVar6);
        *puVar6 = 0;
        ft_mem_free(uVar2,puVar6[4]);
        puVar6[4] = 0;
        puVar6 = puVar6 + 6;
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 7));
    }
    puVar6 = (undefined8 *)param_1[10];
    uVar3 = uVar4;
    if (*(int *)((longlong)param_1 + 0x4c) != 0) {
      do {
        ft_mem_free(uVar2,*puVar6);
        *puVar6 = 0;
        ft_mem_free(uVar2,puVar6[4]);
        puVar6[4] = 0;
        puVar6 = puVar6 + 6;
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)((longlong)param_1 + 0x4c));
    }
    ft_mem_free(uVar2,param_1[8]);
    param_1[8] = 0;
    ft_mem_free(uVar2,param_1[10]);
    puVar6 = (undefined8 *)param_1[0x11];
    param_1[10] = 0;
    uVar3 = uVar4;
    if (*(int *)((longlong)param_1 + 0x94) != 0) {
      do {
        ft_mem_free(uVar2,*puVar6);
        *puVar6 = 0;
        ft_mem_free(uVar2,puVar6[4]);
        puVar6[4] = 0;
        puVar6 = puVar6 + 6;
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)((longlong)param_1 + 0x94));
    }
    ft_mem_free(uVar2,param_1[0x11]);
    param_1[0x11] = 0;
    if (param_1 != (undefined8 *)0xfffffffffffbbf30) {
      puVar6 = (undefined8 *)param_1[0x881c];
      if (*(uint *)((longlong)param_1 + 0x440d4) != 0) {
        uVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x440d4);
        do {
          ft_mem_free(uVar2,*puVar6);
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      ft_mem_free(uVar2,param_1[0x881c]);
      param_1[0x881c] = 0;
    }
    puVar6 = (undefined8 *)param_1[0x8818];
    if (*(int *)(param_1 + 0x8819) != 0) {
      do {
        ft_mem_free(uVar2,*puVar6);
        *puVar6 = 0;
        if (*(int *)(puVar6 + 1) == 1) {
          ft_mem_free(uVar2,puVar6[2]);
          puVar6[2] = 0;
        }
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
        puVar6 = puVar6 + 3;
      } while (uVar5 < *(uint *)(param_1 + 0x8819));
    }
    ft_mem_free(uVar2,param_1[0x8818]);
    param_1[0x8818] = 0;
  }
  return;
}



// FUNCTION 143c720d0 FUN_143c720d0 body=86 status=ok
// SIG undefined FUN_143c720d0(void)

longlong FUN_143c720d0(longlong param_1,char *param_2)

{
  longlong *plVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x58) != 0)) && (param_2 != (char *)0x0)) &&
     (*param_2 != '\0')) {
    plVar1 = (longlong *)FUN_143c72760(param_2,*(undefined8 *)(param_1 + 0xa8));
    if (*plVar1 != 0) {
      return *(longlong *)(param_1 + 0x60) + *(longlong *)(*plVar1 + 8) * 0x18;
    }
  }
  return 0;
}



// FUNCTION 143c72130 FUN_143c72130 body=823 status=ok
// SIG undefined FUN_143c72130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c72130(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  size_t _Size;
  size_t sVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  int local_58 [2];
  char *local_50 [4];
  size_t local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar8 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  local_58[0] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_50[0] = (char *)0x0;
  local_50[1] = (undefined1 *)0x0;
  local_50[2] = (char *)0x0;
  local_50[3] = (char *)0x0;
  uVar10 = uVar11;
  uVar12 = uVar11;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x58) != 0) {
      plVar7 = (longlong *)FUN_143c72760("SLANT",*(undefined8 *)(lVar8 + 0xa8));
      if ((((*plVar7 != 0) &&
           (lVar1 = *(longlong *)(lVar8 + 0x60) + *(longlong *)(*plVar7 + 8) * 0x18, lVar1 != 0)) &&
          (*(int *)(lVar1 + 8) == 1)) &&
         (((*(char **)(lVar1 + 0x10) != (char *)0x0 &&
           (bVar6 = **(char **)(lVar1 + 0x10) + 0xb7, bVar6 < 0x27)) &&
          ((0x4100000041U >> ((ulonglong)bVar6 & 0x3f) & 1) != 0)))) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        local_50[2] = "Italic";
        if ((**(char **)(lVar1 + 0x10) + 0xb1U & 0xdf) == 0) {
          local_50[2] = "Oblique";
        }
      }
      if (*(int *)(lVar8 + 0x58) != 0) {
        plVar7 = (longlong *)FUN_143c72760("WEIGHT_NAME",*(undefined8 *)(lVar8 + 0xa8));
        if (((*plVar7 != 0) &&
            (lVar1 = *(longlong *)(lVar8 + 0x60) + *(longlong *)(*plVar7 + 8) * 0x18, lVar1 != 0))
           && ((*(int *)(lVar1 + 8) == 1 &&
               ((*(char **)(lVar1 + 0x10) != (char *)0x0 &&
                ((**(char **)(lVar1 + 0x10) + 0xbeU & 0xdf) == 0)))))) {
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
          local_50[1] = "Bold";
        }
      }
    }
    iVar3 = *(int *)(lVar8 + 0x58);
    if (iVar3 != 0) {
      plVar7 = (longlong *)FUN_143c72760("SETWIDTH_NAME",*(undefined8 *)(lVar8 + 0xa8));
      if (((((*plVar7 != 0) &&
            (lVar1 = *(longlong *)(lVar8 + 0x60) + *(longlong *)(*plVar7 + 8) * 0x18, lVar1 != 0))
           && (*(int *)(lVar1 + 8) == 1)) &&
          ((pcVar9 = *(char **)(lVar1 + 0x10), pcVar9 != (char *)0x0 &&
           (cVar2 = *pcVar9, cVar2 != '\0')))) && (cVar2 != 'N')) {
        if (cVar2 != 'n') {
          local_50[3] = pcVar9;
        }
      }
      if (iVar3 != 0) {
        plVar7 = (longlong *)FUN_143c72760("ADD_STYLE_NAME",*(undefined8 *)(lVar8 + 0xa8));
        if (((*plVar7 != 0) &&
            (lVar8 = *(longlong *)(lVar8 + 0x60) + *(longlong *)(*plVar7 + 8) * 0x18, lVar8 != 0))
           && ((*(int *)(lVar8 + 8) == 1 &&
               (((pcVar9 = *(char **)(lVar8 + 0x10), pcVar9 != (char *)0x0 &&
                 (cVar2 = *pcVar9, cVar2 != '\0')) && (cVar2 != 'N')))))) {
          if (cVar2 != 'n') {
            local_50[0] = pcVar9;
          }
        }
      }
    }
  }
  do {
    *(undefined8 *)((longlong)local_30 + uVar10) = 0;
    if (*(longlong *)((longlong)local_50 + uVar10) != 0) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(char *)(*(longlong *)((longlong)local_50 + uVar10) + lVar8) != '\0');
      *(longlong *)((longlong)local_30 + uVar10) = lVar8;
      uVar12 = uVar12 + 1 + lVar8;
    }
    uVar10 = uVar10 + 8;
  } while (uVar10 < 0x20);
  if (uVar12 == 0) {
    local_30[0] = 7;
    local_50[0] = "Regular";
    uVar12 = 8;
  }
  pcVar9 = (char *)FUN_143c271e0(*(undefined8 *)(param_1 + 0x98),uVar12 & 0xffffffff,local_58);
  *(char **)(param_1 + 0x20) = pcVar9;
  if (local_58[0] == 0) {
    do {
      pcVar4 = local_50[uVar11];
      _Size = local_30[uVar11];
      if (pcVar4 != (char *)0x0) {
        if (pcVar9 != *(char **)(param_1 + 0x20)) {
          *pcVar9 = ' ';
          pcVar9 = pcVar9 + 1;
        }
        _guard_xfg_dispatch_icall_nop(pcVar9,pcVar4,_Size);
        sVar5 = _Size;
        pcVar4 = pcVar9;
        if ((uVar11 == 0) || (uVar11 == 3)) {
          for (; sVar5 != 0; sVar5 = sVar5 - 1) {
            if (*pcVar4 == ' ') {
              *pcVar4 = '-';
            }
            pcVar4 = pcVar4 + 1;
          }
        }
        pcVar9 = pcVar9 + _Size;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 4);
    *pcVar9 = '\0';
  }
  return local_58[0];
}



// FUNCTION 143c72470 FUN_143c72470 body=713 status=ok
// SIG undefined FUN_143c72470(void)

int FUN_143c72470(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int local_res10 [2];
  undefined1 local_28 [16];
  
  local_res10[0] = 0;
  puVar3 = (uint *)FUN_143c271e0(param_2,0x22058,local_res10);
  if (local_res10[0] != 0) goto LAB_143c726d8;
  *(undefined8 *)(puVar3 + 0x8814) = param_2;
  puVar5 = &DAT_145d36f50;
  if (param_3 != (undefined *)0x0) {
    puVar5 = param_3;
  }
  *(undefined **)(puVar3 + 0xc) = puVar5;
  *(undefined2 *)(puVar3 + 3) = 0x7fff;
  puVar3[0x880e] = 0;
  puVar3[0x880f] = 0;
  puVar3[0x8810] = 0;
  puVar3[0x8811] = 0;
  *(undefined8 *)(puVar3 + 0x8812) = param_2;
  local_res10[0] = FUN_143c71830(param_1,FUN_143c71030,puVar3,local_28);
  if (local_res10[0] == 0) {
    lVar2 = *(longlong *)(puVar3 + 10);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x20) != 8) {
        *(undefined2 *)(lVar2 + 0x24) = *(undefined2 *)(lVar2 + 8);
      }
      lVar2 = *(longlong *)(puVar3 + 10);
      if (puVar3[1] != *(int *)(lVar2 + 0x4c) + *(int *)(lVar2 + 0x38)) {
        *(undefined2 *)(lVar2 + 0x440b0) = 1;
      }
      if ((**(int **)(puVar3 + 0xc) != 0) &&
         ((lVar2 = *(longlong *)(puVar3 + 10), *(int *)(lVar2 + 0x38) != 0 ||
          (*(int *)(lVar2 + 0x4c) != 0)))) {
        if ((int)(short)puVar3[4] - (int)(short)puVar3[3] != (uint)*(ushort *)(lVar2 + 8)) {
          *(short *)(lVar2 + 8) = (short)puVar3[4] - (short)puVar3[3];
          *(undefined2 *)(*(longlong *)(puVar3 + 10) + 0x440b0) = 1;
        }
        if (*(short *)(*(longlong *)(puVar3 + 10) + 0xc) != (short)puVar3[3]) {
          *(short *)(*(longlong *)(puVar3 + 10) + 0xc) = (short)puVar3[3];
          *(undefined2 *)(*(longlong *)(puVar3 + 10) + 0x440b0) = 1;
        }
        if (*(short *)(*(longlong *)(puVar3 + 10) + 0x10) != *(short *)((longlong)puVar3 + 0x12)) {
          *(short *)(*(longlong *)(puVar3 + 10) + 0x10) = *(short *)((longlong)puVar3 + 0x12);
          *(undefined2 *)(*(longlong *)(puVar3 + 10) + 0x440b0) = 1;
        }
        if (*(short *)(*(longlong *)(puVar3 + 10) + 0x12) != (short)puVar3[5]) {
          *(short *)(*(longlong *)(puVar3 + 10) + 0x12) = (short)puVar3[5];
          *(short *)(*(longlong *)(puVar3 + 10) + 0xe) = -(short)puVar3[5];
          *(undefined2 *)(*(longlong *)(puVar3 + 10) + 0x440b0) = 1;
        }
        if ((int)*(short *)((longlong)puVar3 + 0x12) + (int)(short)puVar3[5] !=
            (uint)*(ushort *)(*(longlong *)(puVar3 + 10) + 10)) {
          *(short *)(*(longlong *)(puVar3 + 10) + 10) =
               (short)puVar3[5] + *(short *)((longlong)puVar3 + 0x12);
        }
      }
    }
    if ((*puVar3 & 1) != 0) {
      local_res10[0] = ((*puVar3 & 0x20) != 0) + 0xb9;
      goto LAB_143c726d8;
    }
    lVar2 = *(longlong *)(puVar3 + 10);
    if (lVar2 == 0) {
      local_res10[0] = 3;
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x70);
      if (iVar1 != 0) {
        uVar4 = FUN_143c27410(*(undefined8 *)(lVar2 + 0x440b8),1,iVar1,iVar1 + 1,
                              *(undefined8 *)(lVar2 + 0x68),local_res10);
        *(undefined8 *)(*(longlong *)(puVar3 + 10) + 0x68) = uVar4;
        if (local_res10[0] == 0) {
          *(undefined1 *)
           ((ulonglong)*(uint *)(*(longlong *)(puVar3 + 10) + 0x70) +
           *(longlong *)(*(longlong *)(puVar3 + 10) + 0x68)) = 0;
          *param_4 = *(undefined8 *)(puVar3 + 10);
          goto LAB_143c726d8;
        }
        goto LAB_143c726bb;
      }
    }
    *param_4 = *(undefined8 *)(puVar3 + 10);
  }
  else {
LAB_143c726bb:
    FUN_143c71e40(*(undefined8 *)(puVar3 + 10));
    ft_mem_free(param_2,*(undefined8 *)(puVar3 + 10));
    puVar3[10] = 0;
    puVar3[0xb] = 0;
  }
LAB_143c726d8:
  if (puVar3 != (uint *)0x0) {
    if (*(longlong *)(puVar3 + 0x8812) != 0) {
      ft_mem_free(*(longlong *)(puVar3 + 0x8812),*(undefined8 *)(puVar3 + 0x880e));
      puVar3[0x880e] = 0;
      puVar3[0x880f] = 0;
      puVar3[0x880e] = 0;
      puVar3[0x880f] = 0;
      puVar3[0x8810] = 0;
      puVar3[0x8811] = 0;
      puVar3[0x8812] = 0;
      puVar3[0x8813] = 0;
    }
    ft_mem_free(param_2,puVar3);
  }
  return local_res10[0];
}



// FUNCTION 143c72760 FUN_143c72760 body=174 status=ok
// SIG undefined FUN_143c72760(void)

undefined8 * FUN_143c72760(char *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  uVar6 = 0;
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  cVar1 = *param_1;
  pcVar7 = param_1;
  while (cVar1 != '\0') {
    pcVar7 = pcVar7 + 1;
    uVar6 = uVar6 * 0x1f + (int)cVar1;
    cVar1 = *pcVar7;
  }
  uVar5 = (ulonglong)uVar6 % (ulonglong)*(uint *)(param_2 + 4);
  puVar4 = (undefined8 *)puVar3[uVar5];
  puVar8 = puVar3 + uVar5;
  do {
    if (puVar4 == (undefined8 *)0x0) {
      return puVar8;
    }
    pcVar7 = (char *)*puVar4;
    if (*pcVar7 == *param_1) {
      lVar9 = (longlong)param_1 - (longlong)pcVar7;
      do {
        cVar1 = *pcVar7;
        cVar2 = pcVar7[lVar9];
        if (cVar1 != cVar2) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return puVar8;
      }
    }
    puVar8 = puVar8 + -1;
    if (puVar8 < puVar3) {
      puVar8 = puVar3 + (*(uint *)(param_2 + 4) - 1);
    }
    puVar4 = (undefined8 *)*puVar8;
  } while( true );
}



// FUNCTION 143c72810 FUN_143c72810 body=118 status=ok
// SIG undefined FUN_143c72810(void)

void FUN_143c72810(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (*(uint *)(param_1 + 4) != 0) {
      uVar2 = (ulonglong)*(uint *)(param_1 + 4);
      do {
        ft_mem_free(param_2,*puVar1);
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    ft_mem_free(param_2,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143c72890 FUN_143c72890 body=84 status=ok
// SIG undefined FUN_143c72890(void)

undefined4 FUN_143c72890(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_res8 [8];
  
  param_1[1] = 0xf1;
  *param_1 = 0x50;
  param_1[2] = 0;
  local_res8[0] = 0;
  uVar1 = FUN_143c27410(param_2,8,0,0xf1,0,local_res8);
  *(undefined8 *)(param_1 + 4) = uVar1;
  return local_res8[0];
}



// FUNCTION 143c728f0 FUN_143c728f0 body=173 status=ok
// SIG undefined FUN_143c728f0(void)

ulonglong FUN_143c728f0(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint local_18 [4];
  
  plVar1 = (longlong *)FUN_143c72760(param_1,param_3);
  local_18[0] = 0;
  if (*plVar1 == 0) {
    puVar2 = (undefined8 *)FUN_143c271e0(param_4,0x10,local_18);
    if (local_18[0] == 0) {
      *plVar1 = (longlong)puVar2;
      *puVar2 = param_1;
      puVar2[1] = param_2;
      if (param_3[2] < *param_3) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_143c729a0(param_3,param_4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      param_3[2] = param_3[2] + 1;
    }
    else {
      uVar3 = (ulonglong)local_18[0];
    }
  }
  else {
    *(undefined8 *)(*plVar1 + 8) = param_2;
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143c729a0 FUN_143c729a0 body=352 status=ok
// SIG undefined FUN_143c729a0(void)

int FUN_143c729a0(uint *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int local_res8 [2];
  
  uVar9 = param_1[1];
  puVar3 = *(undefined8 **)(param_1 + 4);
  local_res8[0] = 0;
  uVar8 = uVar9 * 2;
  param_1[1] = uVar8;
  *param_1 = uVar8 / 3;
  uVar10 = FUN_143c27410(param_2,8,0,uVar8,0,local_res8);
  *(undefined8 *)(param_1 + 4) = uVar10;
  if (local_res8[0] == 0) {
    if (uVar9 != 0) {
      uVar12 = (ulonglong)uVar9;
      puVar15 = puVar3;
      do {
        puVar4 = (undefined8 *)*puVar15;
        if (puVar4 != (undefined8 *)0x0) {
          pcVar5 = (char *)*puVar4;
          uVar9 = 0;
          plVar6 = *(longlong **)(param_1 + 4);
          pcVar11 = pcVar5;
          cVar1 = *pcVar5;
          while (cVar1 != '\0') {
            pcVar11 = pcVar11 + 1;
            uVar9 = uVar9 * 0x1f + (int)cVar1;
            cVar1 = *pcVar11;
          }
          uVar7 = (ulonglong)uVar9 % (ulonglong)param_1[1];
          plVar13 = plVar6 + uVar7;
          lVar14 = plVar6[uVar7];
          while (lVar14 != 0) {
            pcVar11 = *(char **)*plVar13;
            if (*pcVar11 == *pcVar5) {
              lVar14 = (longlong)pcVar5 - (longlong)pcVar11;
              do {
                cVar1 = *pcVar11;
                cVar2 = pcVar11[lVar14];
                if (cVar1 != cVar2) break;
                pcVar11 = pcVar11 + 1;
              } while (cVar2 != '\0');
              if (cVar1 == cVar2) break;
            }
            plVar13 = plVar13 + -1;
            if (plVar13 < plVar6) {
              plVar13 = plVar6 + (param_1[1] - 1);
            }
            lVar14 = *plVar13;
          }
          *plVar13 = (longlong)puVar4;
        }
        puVar15 = puVar15 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    ft_mem_free(param_2,puVar3);
  }
  return local_res8[0];
}



// FUNCTION 143c72b00 FUN_143c72b00 body=454 status=ok
// SIG undefined FUN_143c72b00(void)

/* WARNING: Removing unreachable block (ram,0x000143c72b86) */
/* WARNING: Removing unreachable block (ram,0x000143c72b6b) */
/* WARNING: Removing unreachable block (ram,0x000143c72bc3) */

undefined4
FUN_143c72b00(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  code *local_38;
  code *local_30;
  longlong local_28;
  
  if (((param_1 == 0) || (param_3 == (undefined4 *)0x0)) || (param_2 == 0)) {
    return 6;
  }
  local_60 = param_5;
  local_50 = *param_3;
  local_38 = ft_gzip_alloc;
  local_48 = 0;
  local_30 = ft_mem_free;
  local_68 = param_4;
  local_58 = param_2;
  local_28 = param_1;
  local_40 = ft_gzip_alloc(param_1,1,0x20);
  if (local_40 != 0) {
    *(undefined8 *)(local_40 + 0x18) = 0;
    *(undefined4 *)(local_40 + 0xc) = 0;
    *(undefined4 *)(local_40 + 0x10) = 0xf;
    lVar2 = FUN_143c74d40(&local_68,&LAB_143c72e80,0x8000);
    *(longlong *)(local_40 + 0x18) = lVar2;
    if (lVar2 != 0) {
      FUN_143c741e0(&local_68);
      iVar1 = FUN_143c73be0(&local_68,4);
      if (iVar1 == 1) {
        *param_3 = local_4c;
        if ((local_40 != 0) && (local_30 != (code *)0x0)) {
          if (*(longlong *)(local_40 + 0x18) != 0) {
            FUN_143c74cb0(*(longlong *)(local_40 + 0x18),&local_68);
          }
          (*local_30)(local_28,local_40);
        }
        return 0;
      }
      if ((local_40 != 0) && (local_30 != (code *)0x0)) {
        if (*(longlong *)(local_40 + 0x18) != 0) {
          FUN_143c74cb0(*(longlong *)(local_40 + 0x18),&local_68);
        }
        (*local_30)(local_28,local_40);
      }
      if (iVar1 != 0) {
        if (iVar1 == -4) {
          return 0x40;
        }
        if (iVar1 != -5) {
          if (iVar1 != -3) {
            return 0;
          }
          return 8;
        }
      }
      return 10;
    }
    FUN_143c74050();
  }
  return 6;
}



// FUNCTION 143c72cd0 FUN_143c72cd0 body=432 status=ok
// SIG undefined FUN_143c72cd0(void)

ulonglong FUN_143c72cd0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint local_res8 [2];
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    uVar4 = FUN_143c73010(param_2);
    local_res8[0] = (uint)uVar4;
    if (local_res8[0] == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[6] = uVar1;
      lVar5 = FUN_143c27300(uVar1,0x2088,local_res8);
      if (local_res8[0] == 0) {
        local_res8[0] = FUN_143c73350(lVar5,param_1,param_2);
        if (local_res8[0] != 0) {
          ft_mem_free(uVar1,lVar5);
          return (ulonglong)local_res8[0];
        }
        param_1[2] = lVar5;
        local_res8[0] = 0;
      }
      iVar2 = FUN_143c73640(param_2);
      uVar4 = 0;
      if (iVar2 - 1U < 0x9fff) {
        uVar6 = FUN_143c271e0(uVar1,iVar2,local_res8);
        if (local_res8[0] == 0) {
          iVar3 = FUN_143c73420(lVar5,0,uVar6,iVar2);
          if (iVar3 == iVar2) {
            ft_gzip_file_done(lVar5);
            ft_mem_free(uVar1,lVar5);
            param_1[5] = FUN_143c736c0;
            param_1[2] = 0;
            *(int *)(param_1 + 1) = iVar2;
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            *param_1 = uVar6;
            param_1[4] = 0;
            return (ulonglong)local_res8[0];
          }
          if (*(int *)(lVar5 + 0x2074) != 0) {
            FUN_143c734f0(lVar5);
          }
          ft_mem_free(uVar1,uVar6);
        }
      }
      else {
        uVar4 = (ulonglong)local_res8[0];
      }
      param_1[1] = 0x7fffffff;
      param_1[4] = &LAB_143c73710;
      param_1[5] = FUN_143c736c0;
      *param_1 = 0;
    }
    return uVar4;
  }
  return 0x28;
}



// FUNCTION 143c72ff0 ft_gzip_alloc body=23 status=ok
// SIG undefined ft_gzip_alloc(void)

void ft_gzip_alloc(undefined8 param_1,int param_2,int param_3)

{
  undefined1 local_res10 [24];
  
  FUN_143c271e0(param_1,param_2 * param_3,local_res10);
  return;
}



// FUNCTION 143c73010 FUN_143c73010 body=354 status=ok
// SIG undefined FUN_143c73010(void)

ulonglong FUN_143c73010(undefined8 param_1)

{
  char cVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  uint local_res10 [2];
  char local_res18;
  char local_res19;
  char local_res1a;
  byte local_res1b;
  
  uVar3 = FUN_143c251d0(param_1,0);
  local_res10[0] = (uint)uVar3;
  if (local_res10[0] == 0) {
    uVar3 = FUN_143c24ae0(param_1,&local_res18,4);
    local_res10[0] = (uint)uVar3;
    if (local_res10[0] == 0) {
      if ((((local_res18 == '\x1f') && (local_res19 == -0x75)) && (local_res1a == '\b')) &&
         ((local_res1b & 0xe0) == 0)) {
        uVar3 = FUN_143c25220(param_1,6);
        local_res10[0] = (uint)uVar3;
        if ((local_res1b & 4) != 0) {
          uVar2 = FUN_143c25100(param_1,local_res10);
          if (local_res10[0] != 0) {
            return (ulonglong)local_res10[0];
          }
          uVar3 = FUN_143c25220(param_1,uVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          local_res10[0] = 0;
        }
        if ((local_res1b & 8) != 0) {
          cVar1 = FUN_143c24b80(param_1,local_res10);
          uVar3 = 0;
          if (local_res10[0] != 0) {
            return (ulonglong)local_res10[0];
          }
          while (cVar1 != '\0') {
            cVar1 = FUN_143c24b80(param_1,local_res10);
            uVar3 = (ulonglong)local_res10[0];
            if (local_res10[0] != 0) {
              return uVar3;
            }
          }
        }
        if ((local_res1b & 0x10) != 0) {
          cVar1 = FUN_143c24b80(param_1,local_res10);
          uVar3 = 0;
          if (local_res10[0] != 0) {
            return (ulonglong)local_res10[0];
          }
          while (cVar1 != '\0') {
            cVar1 = FUN_143c24b80(param_1,local_res10);
            uVar3 = (ulonglong)local_res10[0];
            if (local_res10[0] != 0) {
              return uVar3;
            }
          }
        }
        if ((local_res1b & 2) != 0) {
          uVar3 = FUN_143c25220(param_1,2);
          return uVar3;
        }
      }
      else {
        uVar3 = 3;
      }
    }
  }
  return uVar3;
}



// FUNCTION 143c73180 ft_gzip_file_done body=128 status=ok
// SIG undefined ft_gzip_file_done(void)

void ft_gzip_file_done(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = param_1 + 3;
  if (((puVar1 != (undefined8 *)0x0) && (param_1[8] != 0)) && (param_1[10] != 0)) {
    lVar2 = *(longlong *)(param_1[8] + 0x18);
    if (lVar2 != 0) {
      FUN_143c74cb0(lVar2,puVar1);
    }
    (*(code *)param_1[10])(param_1[0xb],param_1[8]);
    param_1[8] = 0;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *puVar1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143c73200 FUN_143c73200 body=150 status=ok
// SIG undefined FUN_143c73200(void)

undefined8 FUN_143c73200(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  
  plVar1 = (longlong *)*param_1;
  if ((code *)plVar1[4] == (code *)0x0) {
    uVar3 = (int)plVar1[1] - *(uint *)((longlong)plVar1 + 0xc);
    _Size = (size_t)uVar3;
    if (uVar3 < 0x1001) {
      if (uVar3 == 0) {
        return 0x55;
      }
    }
    else {
      _Size = 0x1000;
    }
    iVar2 = (int)_Size;
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_1 + 0x74),
               (void *)((ulonglong)*(uint *)((longlong)plVar1 + 0xc) + *plVar1),_Size);
  }
  else {
    iVar2 = (*(code *)plVar1[4])
                      (plVar1,*(undefined4 *)((longlong)plVar1 + 0xc),(longlong)param_1 + 0x74,
                       0x1000);
    if (iVar2 == 0) {
      return 0x55;
    }
  }
  *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + iVar2;
  param_1[3] = (longlong)param_1 + 0x74;
  *(int *)(param_1 + 4) = iVar2;
  return 0;
}



// FUNCTION 143c732a0 FUN_143c732a0 body=175 status=ok
// SIG undefined FUN_143c732a0(void)

ulonglong FUN_143c732a0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *(longlong *)(param_1 + 0x2078) = param_1 + 0x1074;
  uVar3 = 0;
  *(longlong *)(param_1 + 0x28) = param_1 + 0x1074;
  *(undefined4 *)(param_1 + 0x30) = 0x1000;
  do {
    if (*(int *)(param_1 + 0x20) == 0) {
      uVar2 = FUN_143c73200(param_1);
      uVar3 = uVar2 & 0xffffffff;
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    iVar1 = FUN_143c73be0(param_1 + 0x18,0);
    if (iVar1 == 1) {
      *(longlong *)(param_1 + 0x2080) = *(longlong *)(param_1 + 0x28);
      uVar2 = 0x55;
      if (*(longlong *)(param_1 + 0x28) != *(longlong *)(param_1 + 0x2078)) {
        uVar2 = uVar3;
      }
      return uVar2;
    }
    if (iVar1 != 0) {
      return 0x55;
    }
  } while (*(int *)(param_1 + 0x30) != 0);
  return uVar3;
}



// FUNCTION 143c73350 FUN_143c73350 body=199 status=ok
// SIG undefined FUN_143c73350(void)

ulonglong FUN_143c73350(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  param_1[1] = param_2;
  *param_1 = param_3;
  param_1[2] = *(longlong *)(param_2 + 0x30);
  puVar1 = (undefined4 *)((longlong)param_1 + 0x2074);
  param_1[0x410] = (longlong)puVar1;
  param_1[0x40f] = (longlong)puVar1;
  *puVar1 = 0;
  uVar4 = FUN_143c73010(param_3);
  if ((int)uVar4 == 0) {
    uVar2 = IStreamingManager::GetNumWantingResourcesID(param_3);
    *(undefined4 *)(param_1 + 0xe) = uVar2;
    param_1[9] = (longlong)ft_gzip_alloc;
    param_1[10] = (longlong)ft_mem_free;
    param_1[0xb] = *(longlong *)(param_3 + 0x30);
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[3] = (longlong)param_1 + 0x1074;
    iVar3 = FUN_143c740b0(param_1 + 3,0xfffffff1,"1.1.4",0x58);
    if ((iVar3 != 0) || (uVar4 = uVar4 & 0xffffffff, param_1[3] == 0)) {
      uVar4 = 3;
    }
  }
  return uVar4;
}



// FUNCTION 143c73420 FUN_143c73420 body=197 status=ok
// SIG undefined FUN_143c73420(void)

int FUN_143c73420(longlong param_1,uint param_2,void *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 0;
  if ((((*(uint *)(param_1 + 0x2074) <= param_2) ||
       (iVar1 = FUN_143c734f0(), iVar3 = iVar2, iVar1 == 0)) &&
      ((iVar3 = 0, param_2 <= *(uint *)(param_1 + 0x2074) ||
       (iVar1 = FUN_143c73560(param_1,param_2 - *(uint *)(param_1 + 0x2074)), iVar1 == 0)))) &&
     (param_4 != 0)) {
    do {
      uVar4 = *(int *)(param_1 + 0x2080) - *(int *)(param_1 + 0x2078);
      if (param_4 <= uVar4) {
        uVar4 = param_4;
      }
      _guard_xfg_dispatch_icall_nop(param_3,*(void **)(param_1 + 0x2078),(ulonglong)uVar4);
      *(longlong *)(param_1 + 0x2078) = *(longlong *)(param_1 + 0x2078) + (ulonglong)uVar4;
      param_3 = (void *)((longlong)param_3 + (ulonglong)uVar4);
      *(int *)(param_1 + 0x2074) = *(int *)(param_1 + 0x2074) + uVar4;
      iVar2 = iVar2 + uVar4;
      param_4 = param_4 - uVar4;
      iVar3 = iVar2;
    } while ((param_4 != 0) && (iVar1 = FUN_143c732a0(param_1), iVar1 == 0));
  }
  return iVar3;
}



// FUNCTION 143c734f0 FUN_143c734f0 body=112 status=ok
// SIG undefined FUN_143c734f0(void)

ulonglong FUN_143c734f0(undefined8 *param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_143c251d0(*param_1,*(undefined4 *)(param_1 + 0xe));
  if ((int)uVar2 == 0) {
    FUN_143c741e0(param_1 + 3);
    param_1[3] = (longlong)param_1 + 0x74;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[5] = (longlong)param_1 + 0x1074;
    puVar1 = (undefined4 *)((longlong)param_1 + 0x2074);
    *(undefined4 *)(param_1 + 6) = 0;
    *puVar1 = 0;
    param_1[0x410] = puVar1;
    param_1[0x40f] = puVar1;
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143c73560 FUN_143c73560 body=205 status=ok
// SIG undefined FUN_143c73560(void)

int FUN_143c73560(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  do {
    uVar3 = *(int *)(param_1 + 0x2080) - *(int *)(param_1 + 0x2078);
    if (param_2 <= uVar3) {
      uVar3 = param_2;
    }
    *(int *)(param_1 + 0x2074) = *(int *)(param_1 + 0x2074) + uVar3;
    *(longlong *)(param_1 + 0x2078) = *(longlong *)(param_1 + 0x2078) + (ulonglong)uVar3;
    param_2 = param_2 - uVar3;
    if (param_2 == 0) {
      return 0;
    }
    iVar1 = 0;
    *(longlong *)(param_1 + 0x2078) = param_1 + 0x1074;
    *(longlong *)(param_1 + 0x28) = param_1 + 0x1074;
    *(undefined4 *)(param_1 + 0x30) = 0x1000;
    do {
      if ((*(int *)(param_1 + 0x20) == 0) && (iVar1 = FUN_143c73200(param_1), iVar1 != 0)) break;
      iVar2 = FUN_143c73be0(param_1 + 0x18,0);
      if (iVar2 == 1) {
        *(longlong *)(param_1 + 0x2080) = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x2078)) {
LAB_143c73609:
          iVar1 = 0x55;
        }
        break;
      }
      if (iVar2 != 0) goto LAB_143c73609;
    } while (*(int *)(param_1 + 0x30) != 0);
    if (iVar1 != 0) {
      return iVar1;
    }
  } while( true );
}



// FUNCTION 143c73630 ft_mem_free body=5 status=ok
// SIG undefined ft_mem_free(void)

void ft_mem_free(void)

{
  ft_mem_free();
  return;
}



// FUNCTION 143c73640 FUN_143c73640 body=116 status=ok
// SIG undefined FUN_143c73640(void)

undefined4 FUN_143c73640(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_res8 [2];
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  iVar2 = FUN_143c251d0(param_1,*(int *)(param_1 + 8) + -4);
  if (iVar2 == 0) {
    uVar3 = FUN_143c24ea0(param_1,local_res8);
    if (local_res8[0] != 0) {
      uVar3 = 0;
    }
    FUN_143c251d0(param_1,uVar1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 143c736c0 FUN_143c736c0 body=74 status=ok
// SIG undefined FUN_143c736c0(void)

void FUN_143c736c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (lVar1 != 0) {
    ft_gzip_file_done(lVar1);
    ft_mem_free(uVar2,lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143c73720 FUN_143c73720 body=1215 status=ok
// SIG undefined FUN_143c73720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143c73720(uint *param_1,uint param_2,uint param_3,longlong param_4,longlong param_5,
             ulonglong *param_6,uint *param_7,longlong param_8,uint *param_9,uint *param_10)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  byte bVar22;
  int iVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  char local_1a8 [2];
  undefined2 uStack_1a6;
  uint uStack_1a4;
  uint *local_198;
  uint local_148 [29];
  uint uStack_d4;
  ulonglong auStack_d0 [17];
  ulonglong local_48;
  ulonglong uVar17;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)local_1a8;
  uVar17 = 0;
  uStack_1a4 = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_148[2] = 0;
  local_148[3] = 0;
  local_148[4] = 0;
  local_148[5] = 0;
  local_148[6] = 0;
  local_148[7] = 0;
  local_148[8] = 0;
  local_148[9] = 0;
  local_148[10] = 0;
  local_148[0xb] = 0;
  local_148[0xc] = 0;
  local_148[0xd] = 0;
  local_148[0xe] = 0;
  local_148[0xf] = 0;
  puVar7 = param_1;
  uVar10 = param_2;
  do {
    uVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    local_148[uVar11] = local_148[uVar11] + 1;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (local_148[0] == param_2) {
    *param_6 = 0;
    uVar4 = 0;
    *param_7 = 0;
  }
  else {
    uVar8 = 1;
    do {
      if (local_148[uVar8] != 0) break;
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
    } while (uVar10 < 0x10);
    uVar10 = (uint)uVar8;
    uVar14 = 0xf;
    uVar9 = (ulonglong)*param_7;
    if (*param_7 < uVar10) {
      uVar9 = uVar8;
    }
    do {
      uVar11 = (uint)uVar14;
      if (local_148[uVar14] != 0) break;
      uVar12 = uVar11 - 1;
      uVar14 = (ulonglong)uVar12;
      uVar11 = 0;
    } while (uVar12 != 0);
    uVar12 = (uint)uVar9;
    if (uVar11 < (uint)uVar9) {
      uVar12 = uVar11;
    }
    iVar20 = 1 << ((byte)uVar8 & 0x1f);
    *param_7 = uVar12;
    uVar9 = uVar8;
    uVar5 = uVar10;
    while (uVar5 < uVar11) {
      puVar7 = local_148 + uVar9;
      if ((int)(iVar20 - *puVar7) < 0) goto LAB_143c7386f;
      uVar5 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar5;
      iVar20 = (iVar20 - *puVar7) * 2;
    }
    uVar5 = local_148[uVar11];
    iVar20 = iVar20 - uVar5;
    if (iVar20 < 0) {
LAB_143c7386f:
      uVar4 = 0xfffffffd;
    }
    else {
      local_148[uVar11] = uVar5 + iVar20;
      local_148[0x11] = 0;
      uVar9 = uVar17;
      uVar14 = uVar17;
      uVar5 = uVar11;
      while (uVar5 = uVar5 - 1, uVar15 = uVar17, uVar5 != 0) {
        uVar6 = (int)uVar14 + *(int *)((longlong)local_148 + uVar9 + 4);
        uVar14 = (ulonglong)uVar6;
        *(uint *)((longlong)local_148 + uVar9 + 0x48) = uVar6;
        uVar9 = uVar9 + 4;
      }
      do {
        uVar5 = *param_1;
        param_1 = param_1 + 1;
        if (uVar5 != 0) {
          uVar6 = local_148[(ulonglong)uVar5 + 0x10];
          param_10[uVar6] = (uint)uVar15;
          local_148[(ulonglong)uVar5 + 0x10] = uVar6 + 1;
        }
        uVar5 = (uint)uVar15 + 1;
        uVar15 = (ulonglong)uVar5;
      } while (uVar5 < param_2);
      uVar9 = (ulonglong)(int)uVar11;
      iVar26 = -1;
      iVar23 = -uVar12;
      local_198 = param_10;
      uVar5 = local_148[uVar9 + 0x10];
      local_148[0x10] = 0;
      auStack_d0[1] = 0;
      uVar6 = uVar11;
      if ((int)uVar10 <= (int)uVar11) {
        lVar18 = -1;
        puVar7 = param_10;
        uVar14 = uVar17;
        uVar15 = uVar17;
        do {
          iVar25 = (int)uVar8;
          uVar10 = local_148[iVar25];
          if (uVar10 != 0) {
            uVar6 = uVar10 + 1;
            do {
              uVar6 = uVar6 - 1;
              uVar10 = uVar10 - 1;
              uVar16 = (uint)uVar17;
              if ((int)(iVar23 + uVar12) < iVar25) {
                lVar19 = lVar18;
                iVar3 = iVar23 + uVar12;
                do {
                  iVar23 = iVar3;
                  iVar26 = iVar26 + 1;
                  uVar21 = (int)uVar9 - iVar23;
                  lVar18 = lVar19 + 1;
                  if (uVar12 < uVar21) {
                    uVar21 = uVar12;
                  }
                  uVar13 = iVar25 - iVar23;
                  uVar2 = 1 << ((byte)uVar13 & 0x1f);
                  if ((uVar6 < uVar2) &&
                     (iVar3 = uVar2 + (-1 - uVar10), puVar7 = local_148 + iVar25, uVar13 < uVar21))
                  {
                    while (uVar13 = uVar13 + 1, uVar13 < uVar21) {
                      if ((uint)(iVar3 * 2) <= puVar7[1]) break;
                      iVar3 = iVar3 * 2 - puVar7[1];
                      puVar7 = puVar7 + 1;
                    }
                  }
                  uVar2 = 1 << ((byte)uVar13 & 0x1f);
                  uVar15 = (ulonglong)uVar2;
                  uVar21 = *param_9;
                  uVar2 = uVar21 + uVar2;
                  if (0x5a0 < uVar2) {
                    return 0xfffffffd;
                  }
                  *param_9 = uVar2;
                  uVar14 = param_8 + (ulonglong)uVar21 * 8;
                  auStack_d0[lVar19 + 2] = uVar14;
                  if (iVar26 == 0) {
                    *param_6 = uVar14;
                  }
                  else {
                    uVar9 = auStack_d0[lVar18];
                    uVar21 = uVar16 >> ((char)iVar23 - (char)uVar12 & 0x1fU);
                    local_148[lVar19 + 0x11] = uVar16;
                    uStack_1a4 = (int)((longlong)(uVar14 - uVar9) >> 3) - uVar21;
                    *(ulonglong *)(uVar9 + (ulonglong)uVar21 * 8) =
                         CONCAT44(uStack_1a4,
                                  CONCAT22(uStack_1a6,CONCAT11((char)uVar12,(byte)uVar13)));
                  }
                  uVar9 = (ulonglong)uVar11;
                  puVar7 = local_198;
                  lVar19 = lVar18;
                  iVar3 = iVar23 + uVar12;
                } while ((int)(iVar23 + uVar12) < iVar25);
              }
              cVar24 = (char)uVar8;
              bVar22 = (byte)iVar23;
              if (puVar7 < param_10 + uVar5) {
                uStack_1a4 = *puVar7;
                if (uStack_1a4 < param_3) {
                  local_1a8[0] = '`';
                  if (uStack_1a4 < 0x100) {
                    local_1a8[0] = '\0';
                  }
                }
                else {
                  lVar19 = (ulonglong)(uStack_1a4 - param_3) * 4;
                  local_1a8[0] = *(char *)(lVar19 + param_5) + 'P';
                  uStack_1a4 = *(uint *)(lVar19 + param_4);
                }
                local_198 = puVar7 + 1;
              }
              else {
                local_1a8[0] = -0x40;
              }
              uVar21 = uVar16 >> (bVar22 & 0x1f);
              if (uVar21 < (uint)uVar15) {
                do {
                  *(ulonglong *)(uVar14 + (ulonglong)uVar21 * 8) =
                       CONCAT44(uStack_1a4,
                                CONCAT22(uStack_1a6,CONCAT11(cVar24 - bVar22,local_1a8[0])));
                  uVar21 = uVar21 + (1 << (cVar24 - bVar22 & 0x1f));
                } while (uVar21 < (uint)uVar15);
              }
              uVar13 = 1 << (cVar24 - 1U & 0x1f);
              uVar21 = uVar16 & uVar13;
              while (uVar21 != 0) {
                uVar16 = (uint)uVar17 ^ uVar13;
                uVar17 = (ulonglong)uVar16;
                uVar13 = uVar13 >> 1;
                uVar21 = uVar16 & uVar13;
              }
              uVar16 = uVar16 ^ uVar13;
              uVar17 = (ulonglong)uVar16;
              lVar19 = lVar18;
              if (((1 << (bVar22 & 0x1f)) - 1U & uVar16) != local_148[lVar18 + 0x10]) {
                do {
                  iVar23 = iVar23 - uVar12;
                  lVar18 = lVar19 + -1;
                  iVar26 = iVar26 + -1;
                  lVar1 = lVar19 + 0xf;
                  lVar19 = lVar18;
                } while (((1 << ((byte)iVar23 & 0x1f)) - 1U & uVar16) != local_148[lVar1]);
              }
              uVar9 = (ulonglong)uVar11;
              puVar7 = local_198;
            } while (uVar10 != 0);
          }
          uVar8 = (ulonglong)(iVar25 + 1U);
          uVar6 = (uint)uVar9;
        } while ((int)(iVar25 + 1U) <= (int)uVar6);
      }
      uVar4 = 0;
      if ((iVar20 != 0) && (uVar6 != 1)) {
        uVar4 = 0xfffffffb;
      }
    }
  }
  return uVar4;
}



// FUNCTION 143c73be0 FUN_143c73be0 body=1074 status=ok
// SIG undefined FUN_143c73be0(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_143c73be0(longlong *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (((param_1 == (longlong *)0x0) || ((uint *)param_1[5] == (uint *)0x0)) || (*param_1 == 0)) {
    return -2;
  }
  uVar4 = *(uint *)param_1[5];
  iVar5 = 0;
  iVar3 = -5;
  if (param_2 == 4) {
    iVar5 = -5;
  }
joined_r0x000143c73c39:
  if (0xd < uVar4) {
    return -2;
  }
  switch(IMAGE_DOS_HEADER_140000000.e_magic +
         (&switchD_143c73c6e::switchdataD_143c74014)[(int)uVar4]) {
  case (char *)0x143c73c70:
    if ((int)param_1[1] == 0) {
      return iVar3;
    }
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    bVar1 = *(byte *)*param_1;
    *(uint *)(param_1[5] + 4) = (uint)bVar1;
    *param_1 = *param_1 + 1;
    if ((bVar1 & 0xf) == 8) {
      puVar2 = (undefined4 *)param_1[5];
      if (((uint)puVar2[1] >> 4) + 8 <= (uint)puVar2[4]) {
        *puVar2 = 1;
        iVar3 = iVar5;
        goto switchD_143c73c6e_caseD_43c73cd7;
      }
      *puVar2 = 0xd;
      param_1[4] = (longlong)"invalid window size";
    }
    else {
      *(undefined4 *)param_1[5] = 0xd;
      param_1[4] = (longlong)"unknown compression method";
    }
    goto LAB_143c73eaa;
  case (char *)0x143c73cd7:
switchD_143c73c6e_caseD_43c73cd7:
    if ((int)param_1[1] == 0) {
      return iVar3;
    }
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    puVar2 = (undefined4 *)param_1[5];
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    bVar1 = *(byte *)*param_1;
    *param_1 = (longlong)((byte *)*param_1 + 1);
    uVar4 = puVar2[1] * 0x100 + (uint)bVar1;
    if (uVar4 != (uVar4 / 0x1f) * 0x1f) {
      *puVar2 = 0xd;
      param_1[4] = (longlong)"incorrect header check";
      goto LAB_143c73eaa;
    }
    if ((bVar1 & 0x20) != 0) {
      *(undefined4 *)param_1[5] = 2;
      iVar3 = iVar5;
      goto switchD_143c73c6e_caseD_43c73ed8;
    }
    *puVar2 = 7;
    iVar3 = iVar5;
    break;
  case (char *)0x143c73d54:
    iVar3 = FUN_143c742a0(*(undefined8 *)(param_1[5] + 0x18),param_1,iVar3);
    if (iVar3 == -3) {
      *(undefined4 *)param_1[5] = 0xd;
      *(undefined4 *)(param_1[5] + 4) = 0;
      iVar3 = -3;
    }
    else {
      if (iVar3 == 0) {
        iVar3 = iVar5;
      }
      if (iVar3 != 1) {
        return iVar3;
      }
      inflate_blocks_reset(*(undefined8 *)(param_1[5] + 0x18),param_1,param_1[5] + 4);
      puVar2 = (undefined4 *)param_1[5];
      if (puVar2[3] == 0) {
        *puVar2 = 8;
        iVar3 = iVar5;
        goto switchD_143c73c6e_caseD_43c73dd5;
      }
      *puVar2 = 0xc;
      iVar3 = iVar5;
    }
    break;
  case (char *)0x143c73dd5:
switchD_143c73c6e_caseD_43c73dd5:
    if ((int)param_1[1] == 0) {
      return iVar3;
    }
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    *(uint *)(param_1[5] + 8) = (uint)*(byte *)*param_1 << 0x18;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[5] = 9;
    iVar3 = iVar5;
  case (char *)0x143c73e07:
    if ((int)param_1[1] == 0) {
      return iVar3;
    }
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    *(int *)(param_1[5] + 8) = *(int *)(param_1[5] + 8) + (uint)*(byte *)*param_1 * 0x10000;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[5] = 10;
    iVar3 = iVar5;
  case (char *)0x143c73e39:
    goto switchD_143c73c6e_caseD_43c73e39;
  case (char *)0x143c73e6b:
    goto switchD_143c73c6e_caseD_43c73e6b;
  case (char *)0x143c73ed8:
switchD_143c73c6e_caseD_43c73ed8:
    if ((int)param_1[1] == 0) {
      return iVar3;
    }
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    *(uint *)(param_1[5] + 8) = (uint)*(byte *)*param_1 << 0x18;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[5] = 3;
    iVar3 = iVar5;
  case (char *)0x143c73f0a:
    if ((int)param_1[1] == 0) {
      return iVar3;
    }
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    *(int *)(param_1[5] + 8) = *(int *)(param_1[5] + 8) + (uint)*(byte *)*param_1 * 0x10000;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[5] = 4;
    iVar3 = iVar5;
  case (char *)0x143c73f38:
    goto switchD_143c73c6e_caseD_43c73f38;
  case (char *)0x143c73f66:
    goto switchD_143c73c6e_caseD_43c73f66;
  case (char *)0x143c73f9d:
    goto LAB_143c73f6f;
  case (char *)0x143c73fd3:
    *(undefined4 *)param_1[5] = 0xd;
    param_1[4] = (longlong)"need dictionary";
    *(undefined4 *)(param_1[5] + 4) = 0;
    return -2;
  case (char *)0x143c73ffd:
    return -3;
  }
LAB_143c73eb5:
  uVar4 = *(uint *)param_1[5];
  goto joined_r0x000143c73c39;
switchD_143c73c6e_caseD_43c73e39:
  if ((int)param_1[1] == 0) {
    return iVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(int *)(param_1[5] + 8) = *(int *)(param_1[5] + 8) + (uint)*(byte *)*param_1 * 0x100;
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[5] = 0xb;
  iVar3 = iVar5;
switchD_143c73c6e_caseD_43c73e6b:
  if ((int)param_1[1] == 0) {
    return iVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(int *)(param_1[5] + 8) = *(int *)(param_1[5] + 8) + (uint)*(byte *)*param_1;
  puVar2 = (undefined4 *)param_1[5];
  *param_1 = *param_1 + 1;
  if (puVar2[1] == puVar2[2]) {
    *(undefined4 *)param_1[5] = 0xc;
LAB_143c73f6f:
    return 1;
  }
  *puVar2 = 0xd;
  param_1[4] = (longlong)"incorrect data check";
LAB_143c73eaa:
  *(undefined4 *)(param_1[5] + 4) = 5;
  iVar3 = iVar5;
  goto LAB_143c73eb5;
switchD_143c73c6e_caseD_43c73f38:
  if ((int)param_1[1] == 0) {
    return iVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(int *)(param_1[5] + 8) = *(int *)(param_1[5] + 8) + (uint)*(byte *)*param_1 * 0x100;
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[5] = 5;
  iVar3 = iVar5;
switchD_143c73c6e_caseD_43c73f66:
  if ((int)param_1[1] == 0) {
    return iVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(int *)(param_1[5] + 8) = *(int *)(param_1[5] + 8) + (uint)*(byte *)*param_1;
  *param_1 = *param_1 + 1;
  *(undefined4 *)((longlong)param_1 + 0x4c) = ((undefined4 *)param_1[5])[2];
  *(undefined4 *)param_1[5] = 6;
  return 2;
}



// FUNCTION 143c74050 FUN_143c74050 body=85 status=ok
// SIG undefined FUN_143c74050(void)

undefined8 FUN_143c74050(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (*(longlong *)(param_1 + 0x38) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
    if (lVar1 != 0) {
      FUN_143c74cb0(lVar1,param_1);
    }
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    return 0;
  }
  return 0xfffffffe;
}



// FUNCTION 143c740b0 FUN_143c740b0 body=303 status=ok
// SIG undefined FUN_143c740b0(void)

undefined4 FUN_143c740b0(longlong param_1,int param_2,char *param_3,int param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x58)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(code **)(param_1 + 0x30) = ft_gzip_alloc;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(code **)(param_1 + 0x38) = ft_mem_free;
  }
  lVar1 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x20);
  *(longlong *)(param_1 + 0x28) = lVar1;
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc) = 0;
    if (param_2 < 0) {
      param_2 = -param_2;
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc) = 1;
    }
    if (7 < param_2 - 8U) {
      FUN_143c74050(param_1);
      return 0xfffffffe;
    }
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) = param_2;
    puVar2 = &LAB_143c72e80;
    if (*(int *)(*(longlong *)(param_1 + 0x28) + 0xc) != 0) {
      puVar2 = (undefined1 *)0x0;
    }
    lVar1 = FUN_143c74d40(param_1,puVar2,1 << ((byte)param_2 & 0x1f));
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = lVar1;
    if (lVar1 != 0) {
      FUN_143c741e0(param_1);
      return 0;
    }
    FUN_143c74050();
  }
  return 0xfffffffc;
}



// FUNCTION 143c741e0 FUN_143c741e0 body=181 status=ok
// SIG undefined FUN_143c741e0(void)

undefined8 FUN_143c741e0(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 != 0) && (puVar1 = *(uint **)(param_1 + 0x28), puVar1 != (uint *)0x0)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    piVar2 = *(int **)(*(longlong *)(param_1 + 0x28) + 0x18);
    if (*piVar2 - 4U < 2) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(piVar2 + 4));
    }
    if (*piVar2 == 6) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(piVar2 + 2));
    }
    *(undefined8 *)(piVar2 + 0x16) = *(undefined8 *)(piVar2 + 0x10);
    *(undefined8 *)(piVar2 + 0x14) = *(undefined8 *)(piVar2 + 0x10);
    *piVar2 = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    if (*(code **)(piVar2 + 0x18) != (code *)0x0) {
      iVar3 = (**(code **)(piVar2 + 0x18))(0,0,0);
      piVar2[0x1a] = iVar3;
      *(int *)(param_1 + 0x4c) = iVar3;
    }
    return 0;
  }
  return 0xfffffffe;
}



// FUNCTION 143c742a0 FUN_143c742a0 body=2533 status=ok
// SIG undefined FUN_143c742a0(void)

void FUN_143c742a0(uint *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  void *pvVar14;
  ulonglong uVar15;
  byte *_Src;
  uint uVar16;
  uint uVar17;
  uint local_res8 [2];
  int *local_res10;
  undefined4 local_res20 [2];
  void *local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  pvVar14 = *(void **)(param_1 + 0x16);
  _Src = *(byte **)param_2;
  uVar11 = param_2[2];
  uVar16 = param_1[0xc];
  uVar10 = param_1[0xb];
  if (pvVar14 < *(void **)(param_1 + 0x14)) {
    uVar8 = (param_1[0x14] - (int)pvVar14) - 1;
  }
  else {
    uVar8 = param_1[0x12] - (int)pvVar14;
  }
  uVar7 = *param_1;
  pvVar3 = pvVar14;
  local_res10 = param_2;
  local_res8[0] = uVar8;
  while (local_58 = pvVar14, uVar7 < 10) {
    iVar4 = 0;
    uVar17 = 0;
    iVar12 = param_3;
    pvVar14 = local_58;
    switch(uVar7) {
    case 0:
      for (; uVar10 < 3; uVar10 = uVar10 + 8) {
        if (uVar11 == 0) goto LAB_143c74abc;
        uVar11 = uVar11 - 1;
        uVar16 = uVar16 | (uint)*_Src << ((byte)uVar10 & 0x1f);
        _Src = _Src + 1;
        param_3 = iVar4;
      }
      uVar7 = (uVar16 & 7) >> 1;
      param_1[10] = uVar16 & 1;
      iVar4 = param_3;
      if (uVar7 == 0) {
        *param_1 = 1;
        uVar7 = uVar10 - 3 & 7;
        uVar16 = (uVar16 >> 3) >> (sbyte)uVar7;
        uVar10 = (uVar10 - 3) - uVar7;
      }
      else if (uVar7 == 1) {
        lVar5 = FUN_143c753d0(9,5,&DAT_145d380f0,&DAT_145d390f0,param_2);
        *(longlong *)(param_1 + 2) = lVar5;
        if (lVar5 == 0) goto LAB_143c74ad1;
        uVar16 = uVar16 >> 3;
        uVar10 = uVar10 - 3;
        *param_1 = 6;
        pvVar14 = pvVar3;
        uVar8 = local_res8[0];
      }
      else if (uVar7 == 2) {
        uVar16 = uVar16 >> 3;
        uVar10 = uVar10 - 3;
        *param_1 = 3;
      }
      else if (uVar7 == 3) {
        uVar16 = uVar16 >> 3;
        *param_1 = 9;
        uVar10 = uVar10 - 3;
        *(char **)(param_2 + 8) = "invalid block type";
        goto switchD_143c7431d_caseD_9;
      }
      break;
    case 1:
      for (; uVar10 < 0x20; uVar10 = uVar10 + 8) {
        if (uVar11 == 0) goto LAB_143c74abc;
        uVar11 = uVar11 - 1;
        uVar16 = uVar16 | (uint)*_Src << ((byte)uVar10 & 0x1f);
        _Src = _Src + 1;
        param_3 = iVar4;
      }
      uVar7 = uVar16 & 0xffff;
      if (~uVar16 >> 0x10 != uVar7) {
        *param_1 = 9;
        *(char **)(param_2 + 8) = "invalid stored block lengths";
        param_3 = -3;
        goto LAB_143c745e5;
      }
      param_1[2] = uVar7;
      uVar16 = uVar17;
      uVar10 = uVar17;
      iVar4 = param_3;
      if (uVar7 == 0) {
        *param_1 = -(uint)(param_1[10] != 0) & 7;
      }
      else {
        *param_1 = 2;
      }
      break;
    case 2:
      if (uVar11 == 0) {
LAB_143c74abc:
        param_1[0xc] = uVar16;
        param_1[0xb] = uVar10;
        param_2[2] = 0;
        goto LAB_143c745f2;
      }
      if (uVar8 == 0) {
        if (local_58 == *(void **)(param_1 + 0x12)) {
          pvVar3 = *(void **)(param_1 + 0x14);
          pvVar14 = *(void **)(param_1 + 0x10);
          if (pvVar3 != pvVar14) {
            if (pvVar14 < pvVar3) {
              local_res8[0] = ((int)pvVar3 - (int)pvVar14) - 1;
            }
            else {
              local_res8[0] = param_1[0x12] - (int)pvVar14;
            }
            local_58 = pvVar14;
            uVar8 = local_res8[0];
            pvVar3 = pvVar14;
            if (local_res8[0] != 0) goto LAB_143c74566;
          }
        }
        *(void **)(param_1 + 0x16) = local_58;
        param_3 = FUN_143c75440(param_1,param_2,param_3);
        local_58 = *(void **)(param_1 + 0x16);
        pvVar14 = *(void **)(param_1 + 0x14);
        if (local_58 < pvVar14) {
          local_res8[0] = ((int)pvVar14 - (int)local_58) - 1;
        }
        else {
          local_res8[0] = param_1[0x12] - (int)local_58;
        }
        if ((local_58 == *(void **)(param_1 + 0x12)) &&
           (pvVar3 = *(void **)(param_1 + 0x10), pvVar14 != pvVar3)) {
          local_58 = pvVar3;
          if (pvVar3 < pvVar14) {
            local_res8[0] = (param_1[0x14] - (int)pvVar3) - 1;
          }
          else {
            local_res8[0] = param_1[0x12] - (int)pvVar3;
          }
        }
        pvVar14 = local_58;
        uVar8 = local_res8[0];
        pvVar3 = local_58;
        if (local_res8[0] == 0) goto LAB_143c745e5;
      }
LAB_143c74566:
      local_58 = pvVar3;
      uVar7 = param_1[2];
      if (uVar11 < param_1[2]) {
        uVar7 = uVar11;
      }
      if (uVar8 < uVar7) {
        uVar7 = uVar8;
      }
      _guard_xfg_dispatch_icall_nop(pvVar14,_Src,(ulonglong)uVar7);
      _Src = _Src + uVar7;
      pvVar14 = (void *)((longlong)local_58 + (ulonglong)uVar7);
      uVar8 = local_res8[0] - uVar7;
      uVar11 = uVar11 - uVar7;
      puVar1 = param_1 + 2;
      *puVar1 = *puVar1 - uVar7;
      param_2 = local_res10;
      local_res8[0] = uVar8;
      pvVar3 = pvVar14;
      if (*puVar1 == 0) {
        *param_1 = -(uint)(param_1[10] != 0) & 7;
      }
      break;
    case 3:
      for (; uVar10 < 0xe; uVar10 = uVar10 + 8) {
        if (uVar11 == 0) goto LAB_143c74abc;
        uVar11 = uVar11 - 1;
        uVar16 = uVar16 | (uint)*_Src << ((byte)uVar10 & 0x1f);
        _Src = _Src + 1;
        param_3 = iVar4;
      }
      param_1[2] = uVar16 & 0x3fff;
      if (((uVar16 & 0x1f) < 0x1e) && (uVar8 = (uVar16 & 0x3fff) >> 5 & 0x1f, uVar8 < 0x1e)) {
        lVar5 = (**(code **)(param_2 + 0xc))
                          (*(undefined8 *)(param_2 + 0x10),(uVar16 & 0x1f) + 0x102 + uVar8,4);
        *(longlong *)(param_1 + 4) = lVar5;
        if (lVar5 != 0) {
          uVar16 = uVar16 >> 0xe;
          uVar10 = uVar10 - 0xe;
          param_1[3] = 0;
          *param_1 = 4;
          local_58 = pvVar3;
          goto switchD_143c7431d_caseD_4;
        }
        goto LAB_143c74ad1;
      }
      *param_1 = 9;
      *(char **)(param_2 + 8) = "too many length or distance symbols";
      param_3 = -3;
      goto LAB_143c745e5;
    case 4:
switchD_143c7431d_caseD_4:
      if (param_1[3] < (param_1[2] >> 10) + 4) {
        do {
          for (; uVar10 < 3; uVar10 = uVar10 + 8) {
            if (uVar11 == 0) goto LAB_143c74abc;
            uVar11 = uVar11 - 1;
            uVar16 = uVar16 | (uint)*_Src << ((byte)uVar10 & 0x1f);
            _Src = _Src + 1;
            param_3 = iVar4;
          }
          uVar8 = uVar16 & 7;
          uVar16 = uVar16 >> 3;
          uVar10 = uVar10 - 3;
          *(uint *)(*(longlong *)(param_1 + 4) +
                   (ulonglong)*(uint *)(&DAT_145d39240 + (ulonglong)param_1[3] * 4) * 4) = uVar8;
          param_1[3] = param_1[3] + 1;
        } while (param_1[3] < (param_1[2] >> 10) + 4);
      }
      uVar8 = param_1[3];
      while (uVar8 < 0x13) {
        *(undefined4 *)
         (*(longlong *)(param_1 + 4) +
         (ulonglong)*(uint *)(&DAT_145d39240 + (ulonglong)param_1[3] * 4) * 4) = 0;
        param_1[3] = param_1[3] + 1;
        uVar8 = param_1[3];
      }
      param_1[6] = 7;
      iVar4 = FUN_143c75560(*(undefined8 *)(param_1 + 4),param_1 + 6,param_1 + 8,
                            *(undefined8 *)(param_1 + 0xe),param_2);
      if (iVar4 == 0) {
        *param_1 = 5;
        param_1[3] = 0;
        goto switchD_143c7431d_caseD_5;
      }
LAB_143c74b3d:
      if (iVar4 == -3) {
        (**(code **)(param_2 + 0xe))(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 4));
        *param_1 = 9;
      }
      param_1[0xc] = uVar16;
      param_1[0xb] = uVar10;
      param_2[3] = param_2[3] + ((int)_Src - *param_2);
      param_2[2] = uVar11;
      *(byte **)param_2 = _Src;
      *(void **)(param_1 + 0x16) = pvVar3;
      goto LAB_143c74602;
    case 5:
switchD_143c7431d_caseD_5:
      uVar8 = param_1[3];
      iVar4 = param_3;
      if (uVar8 < (param_1[2] >> 5 & 0x1f) + (param_1[2] & 0x1f) + 0x102) {
        do {
          uVar9 = (ulonglong)uVar8;
          for (; uVar10 < param_1[6]; uVar10 = uVar10 + 8) {
            if (uVar11 == 0) {
              param_1[0xc] = uVar16;
              param_1[0xb] = uVar10;
              param_2[3] = param_2[3] + ((int)_Src - *param_2);
              param_2[2] = 0;
              *(byte **)param_2 = _Src;
              *(void **)(param_1 + 0x16) = pvVar3;
              goto LAB_143c74602;
            }
            uVar11 = uVar11 - 1;
            uVar16 = uVar16 | (uint)*_Src << ((byte)uVar10 & 0x1f);
            _Src = _Src + 1;
            iVar4 = 0;
          }
          uVar7 = *(uint *)(*(longlong *)(param_1 + 8) + 4 +
                           (ulonglong)
                           (*(uint *)(&DAT_145d391f0 + (ulonglong)param_1[6] * 4) & uVar16) * 8);
          bVar2 = *(byte *)(*(longlong *)(param_1 + 8) + 1 +
                           (ulonglong)
                           (*(uint *)(&DAT_145d391f0 + (ulonglong)param_1[6] * 4) & uVar16) * 8);
          if (uVar7 < 0x10) {
            uVar16 = uVar16 >> (bVar2 & 0x1f);
            uVar10 = uVar10 - bVar2;
            *(uint *)(*(longlong *)(param_1 + 4) + uVar9 * 4) = uVar7;
            param_1[3] = param_1[3] + 1;
          }
          else {
            uVar15 = 7;
            if (uVar7 != 0x12) {
              uVar15 = (ulonglong)(uVar7 - 0xe);
            }
            iVar12 = 3;
            if (uVar7 == 0x12) {
              iVar12 = 0xb;
            }
            for (; uVar10 < (int)uVar15 + (uint)bVar2; uVar10 = uVar10 + 8) {
              if (uVar11 == 0) {
                param_1[0xc] = uVar16;
                param_1[0xb] = uVar10;
                param_2[3] = param_2[3] + ((int)_Src - *param_2);
                param_2[2] = 0;
                *(byte **)param_2 = _Src;
                *(void **)(param_1 + 0x16) = pvVar3;
                goto LAB_143c74602;
              }
              iVar4 = 0;
              uVar16 = uVar16 | (uint)*_Src << ((byte)uVar10 & 0x1f);
              uVar11 = uVar11 - 1;
              _Src = _Src + 1;
            }
            uVar17 = uVar16 >> (bVar2 & 0x1f);
            uVar16 = uVar17 >> ((byte)uVar15 & 0x1f);
            iVar12 = iVar12 + (*(uint *)(&DAT_145d391f0 + uVar15 * 4) & uVar17);
            uVar10 = uVar10 - ((int)uVar15 + (uint)bVar2);
            if ((param_1[2] & 0x1f) + 0x102 + (param_1[2] >> 5 & 0x1f) < iVar12 + uVar8) {
LAB_143c74bd5:
              (**(code **)(param_2 + 0xe))
                        (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 4));
              *param_1 = 9;
              *(char **)(param_2 + 8) = "invalid bit length repeat";
              iVar4 = -3;
              param_1[0xc] = uVar16;
              param_1[0xb] = uVar10;
              param_2[3] = param_2[3] + ((int)_Src - *param_2);
              param_2[2] = uVar11;
              *(byte **)param_2 = _Src;
              *(void **)(param_1 + 0x16) = pvVar3;
              goto LAB_143c74602;
            }
            if (uVar7 == 0x10) {
              if (uVar8 == 0) goto LAB_143c74bd5;
              uVar13 = *(undefined4 *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar8 - 1) * 4);
            }
            else {
              uVar13 = 0;
            }
            do {
              uVar8 = (int)uVar9 + 1;
              *(undefined4 *)(*(longlong *)(param_1 + 4) + uVar9 * 4) = uVar13;
              iVar12 = iVar12 + -1;
              uVar9 = (ulonglong)uVar8;
            } while (iVar12 != 0);
            param_1[3] = uVar8;
          }
          uVar8 = param_1[3];
          param_3 = iVar4;
        } while (uVar8 < (param_1[2] >> 5 & 0x1f) + (param_1[2] & 0x1f) + 0x102);
      }
      param_1[8] = 0;
      param_1[9] = 0;
      local_res8[0] = 9;
      local_res20[0] = 6;
      iVar4 = FUN_143c75640((param_1[2] & 0x1f) + 0x101,(param_1[2] >> 5 & 0x1f) + 1,
                            *(undefined8 *)(param_1 + 4),local_res8,local_res20,&local_50,local_48,
                            *(undefined8 *)(param_1 + 0xe),param_2);
      if (iVar4 != 0) goto LAB_143c74b3d;
      puVar6 = (undefined4 *)(**(code **)(param_2 + 0xc))(*(undefined8 *)(param_2 + 0x10),1,0x30);
      if (puVar6 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar6 + 6) = (undefined1)local_res8[0];
        *(undefined1 *)((longlong)puVar6 + 0x19) = (undefined1)local_res20[0];
        *(undefined8 *)(puVar6 + 8) = local_50;
        *(undefined8 *)(puVar6 + 10) = local_48[0];
        *puVar6 = 0;
        *(undefined4 **)(param_1 + 2) = puVar6;
        (**(code **)(param_2 + 0xe))(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 4));
        *param_1 = 6;
        local_58 = pvVar3;
        goto switchD_143c7431d_caseD_6;
      }
LAB_143c74ad1:
      param_1[0xc] = uVar16;
      param_1[0xb] = uVar10;
      iVar4 = -4;
      param_2[3] = param_2[3] + ((int)_Src - *param_2);
      param_2[2] = uVar11;
      *(byte **)param_2 = _Src;
      *(void **)(param_1 + 0x16) = pvVar3;
      goto LAB_143c74602;
    case 6:
switchD_143c7431d_caseD_6:
      iVar12 = 0;
      param_1[0xc] = uVar16;
      param_1[0xb] = uVar10;
      param_2[3] = param_2[3] + ((int)_Src - *param_2);
      param_2[2] = uVar11;
      *(byte **)param_2 = _Src;
      *(void **)(param_1 + 0x16) = local_58;
      iVar4 = FUN_143c74ea0(param_1,param_2,param_3);
      if (iVar4 != 1) goto LAB_143c74602;
      (**(code **)(param_2 + 0xe))(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 2));
      local_58 = *(void **)(param_1 + 0x16);
      _Src = *(byte **)param_2;
      uVar11 = param_2[2];
      uVar16 = param_1[0xc];
      uVar10 = param_1[0xb];
      if (local_58 < *(void **)(param_1 + 0x14)) {
        local_res8[0] = (param_1[0x14] - (int)local_58) - 1;
      }
      else {
        local_res8[0] = param_1[0x12] - (int)local_58;
      }
      if (param_1[10] != 0) {
        *param_1 = 7;
        goto switchD_143c7431d_caseD_7;
      }
      *param_1 = 0;
      pvVar14 = local_58;
      uVar8 = local_res8[0];
      pvVar3 = local_58;
      iVar4 = iVar12;
      break;
    case 7:
switchD_143c7431d_caseD_7:
      *(void **)(param_1 + 0x16) = local_58;
      param_3 = FUN_143c75440(param_1,param_2,iVar12);
      local_58 = *(void **)(param_1 + 0x16);
      if (*(void **)(param_1 + 0x14) == local_58) {
        *param_1 = 8;
        goto switchD_143c7431d_caseD_8;
      }
      param_1[0xc] = uVar16;
      param_1[0xb] = uVar10;
      param_2[3] = param_2[3] + ((int)_Src - *param_2);
      param_2[2] = uVar11;
      goto LAB_143c745fa;
    case 8:
switchD_143c7431d_caseD_8:
      param_3 = 1;
      goto LAB_143c745e5;
    case 9:
switchD_143c7431d_caseD_9:
      param_3 = -3;
      goto LAB_143c745e5;
    }
    local_58 = pvVar3;
    pvVar3 = local_58;
    param_3 = iVar4;
    uVar7 = *param_1;
  }
  param_3 = -2;
LAB_143c745e5:
  param_1[0xc] = uVar16;
  param_1[0xb] = uVar10;
  param_2[2] = uVar11;
LAB_143c745f2:
  param_2[3] = param_2[3] + ((int)_Src - *param_2);
LAB_143c745fa:
  *(byte **)param_2 = _Src;
  *(void **)(param_1 + 0x16) = local_58;
  iVar4 = param_3;
LAB_143c74602:
  FUN_143c75440(param_1,param_2,iVar4);
  return;
}



// FUNCTION 143c74cb0 FUN_143c74cb0 body=142 status=ok
// SIG undefined FUN_143c74cb0(void)

undefined8 FUN_143c74cb0(int *param_1,longlong param_2)

{
  int iVar1;
  
  if (*param_1 - 4U < 2) {
    (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 4));
  }
  if (*param_1 == 6) {
    (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 2));
  }
  *param_1 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x10);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x18))(0,0,0);
    param_1[0x1a] = iVar1;
    *(int *)(param_2 + 0x4c) = iVar1;
  }
  (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x10));
  (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0xe));
  (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),param_1);
  return 0;
}



// FUNCTION 143c74d40 FUN_143c74d40 body=213 status=ok
// SIG undefined FUN_143c74d40(void)

undefined4 * FUN_143c74d40(longlong param_1,code *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined4 *)(**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x70);
  if (puVar2 != (undefined4 *)0x0) {
    lVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),8,0x5a0);
    *(longlong *)(puVar2 + 0xe) = lVar3;
    if (lVar3 != 0) {
      lVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,param_3);
      *(longlong *)(puVar2 + 0x10) = lVar3;
      if (lVar3 == 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(puVar2 + 0xe))
        ;
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),puVar2);
        return (undefined4 *)0x0;
      }
      *(code **)(puVar2 + 0x18) = param_2;
      *(ulonglong *)(puVar2 + 0x12) = lVar3 + (ulonglong)param_3;
      *puVar2 = 0;
      *(undefined8 *)(puVar2 + 0xb) = 0;
      *(longlong *)(puVar2 + 0x16) = lVar3;
      *(longlong *)(puVar2 + 0x14) = lVar3;
      if (param_2 == (code *)0x0) {
        return puVar2;
      }
      uVar1 = (*param_2)(0,0,0);
      puVar2[0x1a] = uVar1;
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      return puVar2;
    }
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),puVar2);
  }
  return (undefined4 *)0x0;
}



// FUNCTION 143c74e20 inflate_blocks_reset body=119 status=ok
// SIG undefined inflate_blocks_reset(void)

void inflate_blocks_reset(int *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    *param_3 = param_1[0x1a];
  }
  if (*param_1 - 4U < 2) {
    (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 4));
  }
  if (*param_1 == 6) {
    (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 2));
  }
  *param_1 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x10);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x18))(0,0,0);
    param_1[0x1a] = iVar1;
    *(int *)(param_2 + 0x4c) = iVar1;
  }
  return;
}



// FUNCTION 143c74ea0 FUN_143c74ea0 body=1281 status=ok
// SIG undefined FUN_143c74ea0(void)

void FUN_143c74ea0(longlong param_1,int *param_2,ulonglong param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  uint uVar15;
  
  puVar11 = *(undefined1 **)(param_1 + 0x58);
  puVar4 = *(uint **)(param_1 + 8);
  pbVar9 = *(byte **)param_2;
  iVar8 = param_2[2];
  uVar15 = *(uint *)(param_1 + 0x30);
  uVar10 = *(uint *)(param_1 + 0x2c);
  if (puVar11 < *(undefined1 **)(param_1 + 0x50)) {
    iVar6 = (*(int *)(param_1 + 0x50) - (int)puVar11) + -1;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x48) - (int)puVar11;
  }
  uVar7 = *puVar4;
  while (uVar7 < 10) {
    switch(uVar7) {
    case 0:
      puVar4[4] = (uint)(byte)puVar4[6];
      *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar4 + 8);
      *puVar4 = 1;
    case 1:
      for (; uVar10 < puVar4[4]; uVar10 = uVar10 + 8) {
        if (iVar8 == 0) goto LAB_143c7531b;
        param_3 = 0;
        uVar15 = uVar15 | (uint)*pbVar9 << ((byte)uVar10 & 0x1f);
        iVar8 = iVar8 + -1;
        pbVar9 = pbVar9 + 1;
      }
      pbVar13 = (byte *)(*(longlong *)(puVar4 + 2) +
                        (ulonglong)(*(uint *)(&DAT_145d391f0 + (ulonglong)puVar4[4] * 4) & uVar15) *
                        8);
      bVar2 = *(byte *)(*(longlong *)(puVar4 + 2) + 1 +
                       (ulonglong)(*(uint *)(&DAT_145d391f0 + (ulonglong)puVar4[4] * 4) & uVar15) *
                       8);
      uVar15 = uVar15 >> (bVar2 & 0x1f);
      uVar10 = uVar10 - bVar2;
      bVar2 = *pbVar13;
      uVar7 = (uint)bVar2;
      if (bVar2 == 0) {
        puVar4[2] = *(uint *)(pbVar13 + 4);
        *puVar4 = 6;
      }
      else if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) == 0) {
LAB_143c74fb7:
          puVar4[4] = uVar7;
          *(byte **)(puVar4 + 2) = pbVar13 + (ulonglong)*(uint *)(pbVar13 + 4) * 8;
        }
        else {
          if ((bVar2 & 0x20) == 0) {
            *puVar4 = 9;
            *(char **)(param_2 + 8) = "invalid literal/length code";
switchD_143c74f0e_caseD_9:
            param_3 = 0xfffffffd;
            goto LAB_143c752d6;
          }
          *puVar4 = 7;
        }
      }
      else {
        puVar4[2] = bVar2 & 0xf;
        puVar4[1] = *(uint *)(pbVar13 + 4);
        *puVar4 = 2;
      }
LAB_143c752c3:
      uVar7 = *puVar4;
      break;
    case 2:
      uVar7 = puVar4[2];
      for (; uVar10 < uVar7; uVar10 = uVar10 + 8) {
        if (iVar8 == 0) goto LAB_143c7531b;
        param_3 = 0;
        uVar15 = uVar15 | (uint)*pbVar9 << ((byte)uVar10 & 0x1f);
        iVar8 = iVar8 + -1;
        pbVar9 = pbVar9 + 1;
      }
      uVar3 = *(uint *)(&DAT_145d391f0 + (ulonglong)uVar7 * 4);
      *puVar4 = 3;
      puVar4[1] = puVar4[1] + (uVar3 & uVar15);
      uVar15 = uVar15 >> ((byte)uVar7 & 0x1f);
      uVar10 = uVar10 - uVar7;
      puVar4[4] = (uint)*(byte *)((longlong)puVar4 + 0x19);
      *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar4 + 10);
    case 3:
      for (; uVar10 < puVar4[4]; uVar10 = uVar10 + 8) {
        if (iVar8 == 0) goto LAB_143c7531b;
        param_3 = 0;
        uVar15 = uVar15 | (uint)*pbVar9 << ((byte)uVar10 & 0x1f);
        iVar8 = iVar8 + -1;
        pbVar9 = pbVar9 + 1;
      }
      pbVar13 = (byte *)(*(longlong *)(puVar4 + 2) +
                        (ulonglong)(*(uint *)(&DAT_145d391f0 + (ulonglong)puVar4[4] * 4) & uVar15) *
                        8);
      bVar2 = *(byte *)(*(longlong *)(puVar4 + 2) + 1 +
                       (ulonglong)(*(uint *)(&DAT_145d391f0 + (ulonglong)puVar4[4] * 4) & uVar15) *
                       8);
      uVar15 = uVar15 >> (bVar2 & 0x1f);
      uVar10 = uVar10 - bVar2;
      bVar2 = *pbVar13;
      uVar7 = (uint)bVar2;
      if ((bVar2 & 0x10) != 0) {
        puVar4[2] = uVar7 & 0xf;
        puVar4[3] = *(uint *)(pbVar13 + 4);
        *puVar4 = 4;
        goto LAB_143c752c3;
      }
      if ((bVar2 & 0x40) == 0) goto LAB_143c74fb7;
      *puVar4 = 9;
      *(char **)(param_2 + 8) = "invalid distance code";
      param_3 = 0xfffffffd;
      goto LAB_143c752d6;
    case 4:
      uVar7 = puVar4[2];
      for (; uVar10 < uVar7; uVar10 = uVar10 + 8) {
        if (iVar8 == 0) goto LAB_143c7531b;
        param_3 = 0;
        uVar15 = uVar15 | (uint)*pbVar9 << ((byte)uVar10 & 0x1f);
        iVar8 = iVar8 + -1;
        pbVar9 = pbVar9 + 1;
      }
      uVar3 = *(uint *)(&DAT_145d391f0 + (ulonglong)uVar7 * 4);
      *puVar4 = 5;
      puVar4[3] = puVar4[3] + (uVar3 & uVar15);
      uVar15 = uVar15 >> ((byte)uVar7 & 0x1f);
      uVar10 = uVar10 - uVar7;
    case 5:
      puVar14 = puVar11 + -(ulonglong)puVar4[3];
      puVar12 = *(undefined1 **)(param_1 + 0x40);
      if (puVar14 < puVar12) {
        do {
          puVar14 = puVar14 + (*(longlong *)(param_1 + 0x48) - (longlong)puVar12);
        } while (puVar14 < puVar12);
      }
      uVar7 = puVar4[1];
      puVar12 = puVar11;
      while (puVar11 = puVar12, uVar7 != 0) {
        if (iVar6 == 0) {
          if (puVar12 == *(undefined1 **)(param_1 + 0x48)) {
            puVar5 = *(undefined1 **)(param_1 + 0x50);
            puVar11 = *(undefined1 **)(param_1 + 0x40);
            if (puVar5 != puVar11) {
              if (puVar11 < puVar5) {
                iVar6 = ((int)puVar5 - (int)puVar11) + -1;
              }
              else {
                iVar6 = *(int *)(param_1 + 0x48) - (int)puVar11;
              }
              puVar12 = puVar11;
              if (iVar6 != 0) goto LAB_143c751e4;
            }
          }
          *(undefined1 **)(param_1 + 0x58) = puVar12;
          uVar7 = FUN_143c75440(param_1,param_2);
          puVar11 = *(undefined1 **)(param_1 + 0x58);
          param_3 = (ulonglong)uVar7;
          puVar12 = *(undefined1 **)(param_1 + 0x50);
          if (puVar11 < puVar12) {
            iVar6 = ((int)puVar12 - (int)puVar11) + -1;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x48) - (int)puVar11;
          }
          if ((puVar11 == *(undefined1 **)(param_1 + 0x48)) &&
             (puVar5 = *(undefined1 **)(param_1 + 0x40), puVar12 != puVar5)) {
            puVar11 = puVar5;
            if (puVar5 < puVar12) {
              iVar6 = (*(int *)(param_1 + 0x50) - (int)puVar5) + -1;
            }
            else {
              iVar6 = *(int *)(param_1 + 0x48) - (int)puVar5;
            }
          }
          if (iVar6 == 0) goto LAB_143c752d6;
        }
LAB_143c751e4:
        param_3 = 0;
        *puVar11 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar12 = puVar11 + 1;
        iVar6 = iVar6 + -1;
        if (puVar14 == *(undefined1 **)(param_1 + 0x48)) {
          puVar14 = *(undefined1 **)(param_1 + 0x40);
        }
        puVar1 = puVar4 + 1;
        *puVar1 = *puVar1 - 1;
        uVar7 = *puVar1;
      }
      *puVar4 = 0;
      goto LAB_143c752c3;
    case 6:
      if (iVar6 == 0) {
        if (puVar11 == *(undefined1 **)(param_1 + 0x48)) {
          puVar12 = *(undefined1 **)(param_1 + 0x50);
          puVar14 = *(undefined1 **)(param_1 + 0x40);
          if (puVar12 != puVar14) {
            if (puVar14 < puVar12) {
              iVar6 = ((int)puVar12 - (int)puVar14) + -1;
            }
            else {
              iVar6 = *(int *)(param_1 + 0x48) - (int)puVar14;
            }
            puVar11 = puVar14;
            if (iVar6 != 0) goto LAB_143c752af;
          }
        }
        *(undefined1 **)(param_1 + 0x58) = puVar11;
        uVar7 = FUN_143c75440(param_1,param_2);
        puVar11 = *(undefined1 **)(param_1 + 0x58);
        param_3 = (ulonglong)uVar7;
        puVar12 = *(undefined1 **)(param_1 + 0x50);
        if (puVar11 < puVar12) {
          iVar6 = ((int)puVar12 - (int)puVar11) + -1;
        }
        else {
          iVar6 = *(int *)(param_1 + 0x48) - (int)puVar11;
        }
        if ((puVar11 == *(undefined1 **)(param_1 + 0x48)) &&
           (puVar14 = *(undefined1 **)(param_1 + 0x40), puVar12 != puVar14)) {
          puVar11 = puVar14;
          if (puVar14 < puVar12) {
            iVar6 = (*(int *)(param_1 + 0x50) - (int)puVar14) + -1;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x48) - (int)puVar14;
          }
        }
        if (iVar6 == 0) goto LAB_143c752d6;
      }
LAB_143c752af:
      param_3 = 0;
      *puVar11 = (char)puVar4[2];
      iVar6 = iVar6 + -1;
      *puVar4 = 0;
      puVar11 = puVar11 + 1;
      goto LAB_143c752c3;
    case 7:
      if (7 < uVar10) {
        uVar10 = uVar10 - 8;
        iVar8 = iVar8 + 1;
        pbVar9 = pbVar9 + -1;
      }
      *(undefined1 **)(param_1 + 0x58) = puVar11;
      uVar7 = FUN_143c75440(param_1,param_2);
      puVar11 = *(undefined1 **)(param_1 + 0x58);
      if (*(undefined1 **)(param_1 + 0x50) == puVar11) {
        *puVar4 = 8;
        goto switchD_143c74f0e_caseD_8;
      }
      *(uint *)(param_1 + 0x30) = uVar15;
      *(uint *)(param_1 + 0x2c) = uVar10;
      param_3 = (ulonglong)uVar7;
      param_2[3] = param_2[3] + ((int)pbVar9 - *param_2);
      param_2[2] = iVar8;
      goto LAB_143c752ed;
    case 8:
switchD_143c74f0e_caseD_8:
      param_3 = 1;
      goto LAB_143c752d6;
    case 9:
      goto switchD_143c74f0e_caseD_9;
    }
  }
  param_3 = 0xfffffffe;
LAB_143c752d6:
  *(uint *)(param_1 + 0x30) = uVar15;
  *(uint *)(param_1 + 0x2c) = uVar10;
  param_2[2] = iVar8;
LAB_143c752e2:
  param_2[3] = param_2[3] + ((int)pbVar9 - *param_2);
LAB_143c752ed:
  *(byte **)param_2 = pbVar9;
  *(undefined1 **)(param_1 + 0x58) = puVar11;
  FUN_143c75440(param_1,param_2,param_3);
  return;
LAB_143c7531b:
  *(uint *)(param_1 + 0x30) = uVar15;
  *(uint *)(param_1 + 0x2c) = uVar10;
  param_2[2] = 0;
  goto LAB_143c752e2;
}



// FUNCTION 143c753d0 FUN_143c753d0 body=99 status=ok
// SIG undefined FUN_143c753d0(void)

void FUN_143c753d0(undefined1 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(param_5 + 0x30))(*(undefined8 *)(param_5 + 0x40),1,0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 6) = param_1;
    *(undefined1 *)((longlong)puVar1 + 0x19) = param_2;
    *(undefined8 *)(puVar1 + 8) = param_3;
    *(undefined8 *)(puVar1 + 10) = param_4;
  }
  return;
}



// FUNCTION 143c75440 FUN_143c75440 body=283 status=ok
// SIG undefined FUN_143c75440(void)

int FUN_143c75440(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *pvVar8;
  
  pvVar2 = *(void **)(param_1 + 0x50);
  pvVar5 = *(void **)(param_1 + 0x58);
  pvVar8 = *(void **)(param_2 + 0x10);
  if (pvVar5 < pvVar2) {
    pvVar5 = *(void **)(param_1 + 0x48);
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar4 = (int)pvVar5 - (int)pvVar2;
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  uVar6 = (ulonglong)uVar4;
  if ((uVar4 != 0) && (param_3 == -5)) {
    param_3 = 0;
  }
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + uVar4;
  *(uint *)(param_2 + 0x18) = uVar1 - uVar4;
  if (*(code **)(param_1 + 0x60) != (code *)0x0) {
    uVar3 = (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 0x68),pvVar2,uVar4);
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined4 *)(param_2 + 0x4c) = uVar3;
  }
  _guard_xfg_dispatch_icall_nop(pvVar8,pvVar2,uVar6);
  pvVar8 = (void *)((longlong)pvVar8 + uVar6);
  lVar7 = (longlong)pvVar2 + uVar6;
  if (lVar7 == *(longlong *)(param_1 + 0x48)) {
    pvVar2 = *(void **)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x58) == *(longlong *)(param_1 + 0x48)) {
      *(void **)(param_1 + 0x58) = pvVar2;
    }
    uVar1 = *(uint *)(param_2 + 0x18);
    uVar4 = *(int *)(param_1 + 0x58) - (int)pvVar2;
    if (uVar1 < uVar4) {
      uVar4 = uVar1;
    }
    uVar6 = (ulonglong)uVar4;
    if ((uVar4 != 0) && (param_3 == -5)) {
      param_3 = 0;
    }
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + uVar4;
    *(uint *)(param_2 + 0x18) = uVar1 - uVar4;
    if (*(code **)(param_1 + 0x60) != (code *)0x0) {
      uVar3 = (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 0x68),pvVar2,uVar6);
      *(undefined4 *)(param_1 + 0x68) = uVar3;
      *(undefined4 *)(param_2 + 0x4c) = uVar3;
    }
    _guard_xfg_dispatch_icall_nop(pvVar8,pvVar2,uVar6);
    pvVar8 = (void *)((longlong)pvVar8 + uVar6);
    lVar7 = (longlong)pvVar2 + uVar6;
  }
  *(void **)(param_2 + 0x10) = pvVar8;
  *(longlong *)(param_1 + 0x50) = lVar7;
  return param_3;
}



// FUNCTION 143c75560 FUN_143c75560 body=220 status=ok
// SIG undefined FUN_143c75560(void)

int FUN_143c75560(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 local_28 [4];
  
  local_28[0] = 0;
  lVar2 = (**(code **)(param_5 + 0x30))(*(undefined8 *)(param_5 + 0x40),0x13,4);
  if (lVar2 == 0) {
    return -4;
  }
  iVar1 = FUN_143c73720(param_1,0x13,0x13,0,0,param_3,param_2,param_4,local_28,lVar2);
  if (iVar1 == -3) {
    pcVar3 = "oversubscribed dynamic bit lengths tree";
  }
  else {
    if ((iVar1 != -5) && (*param_2 != 0)) goto LAB_143c75616;
    pcVar3 = "incomplete dynamic bit lengths tree";
    iVar1 = -3;
  }
  *(char **)(param_5 + 0x20) = pcVar3;
LAB_143c75616:
  (**(code **)(param_5 + 0x38))(*(undefined8 *)(param_5 + 0x40),lVar2);
  return iVar1;
}



// FUNCTION 143c75640 FUN_143c75640 body=433 status=ok
// SIG undefined FUN_143c75640(void)

int FUN_143c75640(uint param_1,undefined4 param_2,longlong param_3,int *param_4,int *param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,longlong param_9)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 local_38 [4];
  
  local_38[0] = 0;
  lVar2 = (**(code **)(param_9 + 0x30))(*(undefined8 *)(param_9 + 0x40),0x120,4);
  if (lVar2 == 0) {
    return -4;
  }
  iVar1 = FUN_143c73720(param_3,(ulonglong)param_1,0x101,&DAT_145d37ef0,&DAT_145d37f70,param_6,
                        param_4,param_8,local_38,lVar2);
  if (iVar1 == 0) {
    if (*param_4 == 0) {
LAB_143c757b0:
      pcVar3 = "incomplete literal/length tree";
    }
    else {
      iVar1 = FUN_143c73720(param_3 + (ulonglong)param_1 * 4,param_2,0,&DAT_145d37ff0,&DAT_145d38070
                            ,param_7,param_5,param_8,local_38,lVar2);
      if (iVar1 == 0) {
        if ((*param_5 != 0) || (param_1 < 0x102)) {
          (**(code **)(param_9 + 0x38))(*(undefined8 *)(param_9 + 0x40),lVar2);
          return 0;
        }
LAB_143c75794:
        pcVar3 = "empty distance tree with lengths";
      }
      else {
        if (iVar1 == -3) {
          pcVar3 = "oversubscribed distance tree";
          goto LAB_143c757bc;
        }
        if (iVar1 != -5) {
          if (iVar1 == -4) goto LAB_143c757c0;
          goto LAB_143c75794;
        }
        pcVar3 = "incomplete distance tree";
      }
    }
    iVar1 = -3;
  }
  else {
    if (iVar1 != -3) {
      if (iVar1 == -4) goto LAB_143c757c0;
      goto LAB_143c757b0;
    }
    pcVar3 = "oversubscribed literal/length tree";
  }
LAB_143c757bc:
  *(char **)(param_9 + 0x20) = pcVar3;
LAB_143c757c0:
  (**(code **)(param_9 + 0x38))(*(undefined8 *)(param_9 + 0x40),lVar2);
  return iVar1;
}



// FUNCTION 143c75800 FUN_143c75800 body=295 status=ok
// SIG undefined FUN_143c75800(void)

ulonglong FUN_143c75800(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char local_res8;
  char local_res9;
  uint local_res18 [4];
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    return 0x28;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = FUN_143c251d0(param_2,0);
  if ((((int)uVar2 == 0) && (uVar2 = FUN_143c24ae0(param_2,&local_res8,2), (int)uVar2 == 0)) &&
     ((local_res8 != '\x1f' || (local_res9 != -99)))) {
    uVar2 = 3;
  }
  local_res18[0] = (uint)uVar2;
  if (local_res18[0] != 0) {
    return uVar2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = uVar1;
  uVar3 = FUN_143c271e0(uVar1,0x1108,local_res18);
  uVar2 = (ulonglong)local_res18[0];
  if (local_res18[0] == 0) {
    uVar2 = FUN_143c75930(uVar3,param_1,param_2);
    local_res18[0] = (uint)uVar2;
    if (local_res18[0] != 0) {
      ft_mem_free(uVar1,uVar3);
      return (ulonglong)local_res18[0];
    }
    param_1[2] = uVar3;
  }
  *param_1 = 0;
  param_1[4] = &LAB_143c75ee0;
  param_1[5] = FUN_143c75e80;
  param_1[1] = 0x7fffffff;
  return uVar2;
}



// FUNCTION 143c75930 FUN_143c75930 body=244 status=ok
// SIG undefined FUN_143c75930(void)

ulonglong FUN_143c75930(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  char local_res8;
  char local_res9;
  
  param_1[1] = param_2;
  *param_1 = param_3;
  param_1[2] = *(longlong *)(param_2 + 0x30);
  plVar1 = param_1 + 0x21e;
  param_1[0x220] = (longlong)plVar1;
  param_1[0x21f] = (longlong)plVar1;
  *(undefined4 *)plVar1 = 0;
  uVar2 = FUN_143c251d0(param_3,0);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_143c24ae0(param_3,&local_res8,2);
    if ((int)uVar2 == 0) {
      if ((local_res8 == '\x1f') && (local_res9 == -99)) {
        _guard_xfg_dispatch_icall_nop(param_1 + 3,0,0xd8);
        param_1[0x1c] = param_3;
        param_1[0x1d] = *(longlong *)(param_3 + 0x30);
        param_1[0x11] = (longlong)(param_1 + 0x14);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        param_1[0x13] = 0x40;
        param_1[3] = 0;
        param_1[6] = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        param_1[8] = 0;
        *(undefined4 *)(param_1 + 0x12) = 0;
        *(undefined4 *)((longlong)param_1 + 0x54) = 9;
        uVar2 = uVar2 & 0xffffffff;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}



// FUNCTION 143c75a30 FUN_143c75a30 body=332 status=ok
// SIG undefined FUN_143c75a30(void)

ulonglong FUN_143c75a30(undefined8 *param_1,uint param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar1 = (uint *)(param_1 + 0x21e);
  uVar4 = 0;
  if (param_2 < *puVar1) {
    uVar3 = *puVar1 - param_2;
    if ((*(int *)(param_1 + 0x21f) - (int)param_1) - 0xf0U < uVar3) {
      iVar2 = FUN_143c251d0(*param_1,0);
      if (iVar2 != 0) {
        return 0;
      }
      param_1[3] = 0;
      param_1[6] = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      param_1[8] = 0;
      *(undefined4 *)(param_1 + 0x12) = 0;
      *(undefined4 *)((longlong)param_1 + 0x54) = 9;
      param_1[0x220] = puVar1;
      param_1[0x21f] = puVar1;
      *puVar1 = 0;
    }
    else {
      param_1[0x21f] = param_1[0x21f] - (ulonglong)uVar3;
      *puVar1 = param_2;
    }
  }
  uVar3 = param_4;
  if ((param_2 <= *puVar1) || (iVar2 = FUN_143c75b80(param_1,param_2 - *puVar1), iVar2 == 0)) {
    while (uVar3 != 0) {
      uVar3 = *(int *)(param_1 + 0x220) - *(int *)(param_1 + 0x21f);
      if (param_4 <= (uint)(*(int *)(param_1 + 0x220) - *(int *)(param_1 + 0x21f))) {
        uVar3 = param_4;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(uVar4 + param_3),(void *)param_1[0x21f],(ulonglong)uVar3);
      param_1[0x21f] = param_1[0x21f] + (ulonglong)uVar3;
      uVar4 = (ulonglong)((int)uVar4 + uVar3);
      *puVar1 = *puVar1 + uVar3;
      param_4 = param_4 - uVar3;
      if (param_4 == 0) {
        return uVar4;
      }
      param_1[0x21f] = param_1 + 0x1e;
      uVar3 = FUN_143c760d0(param_1 + 3,param_1 + 0x1e,0x1000);
      param_1[0x220] = (ulonglong)uVar3 + param_1[0x21f];
    }
  }
  return uVar4;
}



// FUNCTION 143c75b80 FUN_143c75b80 body=759 status=ok
// SIG undefined FUN_143c75b80(void)

undefined8 FUN_143c75b80(longlong param_1,uint param_2)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte local_res10 [8];
  
  uVar10 = *(int *)(param_1 + 0x1100) - *(int *)(param_1 + 0x10f8);
  if (param_2 <= uVar10) {
    uVar10 = param_2;
  }
  *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + uVar10;
  *(longlong *)(param_1 + 0x10f8) = *(longlong *)(param_1 + 0x10f8) + (ulonglong)uVar10;
  param_2 = param_2 - uVar10;
  do {
    if (param_2 == 0) {
      return 0;
    }
    uVar10 = *(uint *)(param_1 + 100);
    piVar1 = (int *)(param_1 + 0x18);
    uVar12 = *(uint *)(param_1 + 0x60);
    uVar11 = *(uint *)(param_1 + 0x68);
    uVar7 = 0x1000;
    if (param_2 < 0x1000) {
      uVar7 = param_2;
    }
    uVar8 = 0;
    if (uVar7 != 0) {
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        iVar6 = FUN_143c251d0(*(undefined8 *)(param_1 + 0xe0),2);
        uVar3 = uVar11;
        if ((iVar6 == 0) &&
           (iVar6 = FUN_143c252a0(*(undefined8 *)(param_1 + 0xe0),local_res10,1), iVar6 == 1)) {
          uVar5 = local_res10[0] & 0x1f;
          *(uint *)(param_1 + 0x4c) = local_res10[0] & 0x80;
          iVar6 = 1 << (sbyte)uVar5;
          *(uint *)(param_1 + 0x48) = uVar5;
          *(int *)(param_1 + 0x50) = iVar6 + -0x100;
          uVar8 = 0;
          if (uVar5 < 0x11) {
            *(undefined4 *)(param_1 + 0x54) = 9;
            uVar11 = 0;
            *(uint *)(param_1 + 0x58) = (uint)((local_res10[0] & 0x80) != 0);
            iVar4 = 0x100;
            if (uVar5 < 10) {
              iVar4 = iVar6 + -0xff;
            }
            *(int *)(param_1 + 0x5c) = iVar4;
            uVar5 = FUN_143c75f80(piVar1);
            uVar3 = 0;
            if (uVar5 < 0x100) {
              uVar8 = 1;
              uVar10 = uVar5;
              uVar12 = uVar5;
              if (1 < uVar7) {
                *piVar1 = 1;
                goto LAB_143c75cc5;
              }
              goto LAB_143c75e3b;
            }
          }
        }
LAB_143c75e30:
        uVar11 = uVar3;
        *piVar1 = 3;
      }
      else {
        if (iVar6 == 1) goto LAB_143c75cc5;
        if (iVar6 == 2) {
          do {
            iVar6 = *(int *)(param_1 + 0x90);
            while (iVar6 != 0) {
              *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
              uVar8 = uVar8 + 1;
              if (uVar8 == uVar7) goto LAB_143c75e3b;
              iVar6 = *(int *)(param_1 + 0x90);
            }
            if (*(uint *)(param_1 + 0x58) < *(uint *)(param_1 + 0x50)) {
              if ((*(uint *)(param_1 + 0x80) <= *(uint *)(param_1 + 0x58)) &&
                 (iVar6 = FUN_143c763a0(piVar1), uVar3 = uVar11, iVar6 < 0)) goto LAB_143c75e30;
              *(short *)(*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x58) * 2) =
                   (short)uVar12;
              *(char *)((ulonglong)*(uint *)(param_1 + 0x58) + *(longlong *)(param_1 + 0x78)) =
                   (char)uVar10;
              *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
            }
            *piVar1 = 1;
            uVar12 = uVar11;
LAB_143c75cc5:
            while( true ) {
              uVar5 = FUN_143c75f80(piVar1);
              uVar3 = uVar11;
              if ((int)uVar5 < 0) goto LAB_143c75e30;
              if ((uVar5 != 0x100) || (*(int *)(param_1 + 0x4c) == 0)) break;
              *(undefined4 *)(param_1 + 0x58) = 0;
              *(undefined1 *)(param_1 + 0x38) = 1;
              uVar10 = 0;
              uVar12 = 0;
            }
            uVar11 = uVar5;
            uVar3 = uVar5;
            if (0xff < uVar5) {
              uVar9 = uVar5;
              if (*(uint *)(param_1 + 0x58) <= uVar5 - 0x100) {
                if ((uVar5 - 0x100 != *(uint *)(param_1 + 0x58)) ||
                   ((*(ulonglong *)(param_1 + 0x98) <= (ulonglong)*(uint *)(param_1 + 0x90) &&
                    (iVar6 = FUN_143c76440(piVar1), iVar6 < 0)))) goto LAB_143c75e30;
                *(char *)((ulonglong)*(uint *)(param_1 + 0x90) + *(longlong *)(param_1 + 0x88)) =
                     (char)uVar10;
                *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
                uVar9 = uVar12;
              }
              uVar11 = uVar9;
              if (0xff < uVar9) {
                do {
                  if ((*(longlong *)(param_1 + 0x70) == 0) ||
                     ((*(ulonglong *)(param_1 + 0x98) <= (ulonglong)*(uint *)(param_1 + 0x90) &&
                      (iVar6 = FUN_143c76440(piVar1), iVar6 < 0)))) goto LAB_143c75e30;
                  *(undefined1 *)
                   ((ulonglong)*(uint *)(param_1 + 0x90) + *(longlong *)(param_1 + 0x88)) =
                       *(undefined1 *)((ulonglong)(uVar9 - 0x100) + *(longlong *)(param_1 + 0x78));
                  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
                  uVar2 = *(ushort *)
                           (*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar9 - 0x100) * 2);
                  uVar9 = (uint)uVar2;
                  uVar11 = (uint)uVar2;
                } while (0xff < uVar2);
              }
            }
            uVar10 = uVar11;
            if ((*(ulonglong *)(param_1 + 0x98) <= (ulonglong)*(uint *)(param_1 + 0x90)) &&
               (iVar6 = FUN_143c76440(piVar1), iVar6 < 0)) goto LAB_143c75e30;
            *(char *)((ulonglong)*(uint *)(param_1 + 0x90) + *(longlong *)(param_1 + 0x88)) =
                 (char)uVar10;
            *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
            *piVar1 = 2;
            uVar11 = uVar5;
          } while( true );
        }
      }
    }
LAB_143c75e3b:
    *(uint *)(param_1 + 0x60) = uVar12;
    *(uint *)(param_1 + 100) = uVar10;
    *(uint *)(param_1 + 0x68) = uVar11;
    if (uVar8 < uVar7) {
      return 0x55;
    }
    *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + uVar7;
    param_2 = param_2 - uVar7;
  } while( true );
}



// FUNCTION 143c75e80 FUN_143c75e80 body=94 status=ok
// SIG undefined FUN_143c75e80(void)

void FUN_143c75e80(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_143c75ef0(puVar1 + 3);
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    ft_mem_free(uVar2,puVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143c75ef0 FUN_143c75ef0 body=131 status=ok
// SIG undefined FUN_143c75ef0(void)

void FUN_143c75ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[0x1a];
  *param_1 = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 9;
  if ((undefined8 *)param_1[0xe] != param_1 + 0x11) {
    ft_mem_free(uVar1);
    param_1[0xe] = 0;
  }
  ft_mem_free(uVar1);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0xd8);
  return;
}



// FUNCTION 143c75f80 FUN_143c75f80 body=328 status=ok
// SIG undefined FUN_143c75f80(void)

uint FUN_143c75f80(longlong param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = *(uint *)(param_1 + 0x3c);
  uVar7 = *(uint *)(param_1 + 0x18);
  if (((*(char *)(param_1 + 0x20) == '\0') && (uVar7 < *(uint *)(param_1 + 0x1c))) &&
     (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x44))) {
LAB_143c76040:
    lVar4 = (ulonglong)(uVar7 >> 3) + param_1;
    *(uint *)(param_1 + 0x18) = uVar7 + uVar6;
    iVar2 = -(uVar7 & 7);
    iVar8 = iVar2 + 8;
    uVar6 = uVar6 - iVar8;
    pbVar5 = (byte *)(lVar4 + 9);
    uVar7 = (uint)(*(byte *)(lVar4 + 8) >> (sbyte)(uVar7 & 7));
    if (7 < uVar6) {
      bVar1 = *pbVar5;
      pbVar5 = (byte *)(lVar4 + 10);
      uVar7 = uVar7 | (uint)bVar1 << ((byte)iVar8 & 0x1f);
      iVar8 = iVar2 + 0x10;
      uVar6 = uVar6 - 8;
    }
    if (uVar6 != 0) {
      uVar7 = uVar7 | ((1 << ((byte)uVar6 & 0x1f)) - 1U & (uint)*pbVar5) << ((byte)iVar8 & 0x1f);
    }
    return uVar7;
  }
  if (*(uint *)(param_1 + 0x44) <= *(uint *)(param_1 + 0x40)) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_1 + 0x3c) = uVar6;
    if (uVar6 < *(uint *)(param_1 + 0x30)) {
      iVar2 = (1 << ((byte)uVar6 & 0x1f)) + -0x100;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38) + 1;
    }
    *(int *)(param_1 + 0x44) = iVar2;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    uVar6 = 9;
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined4 *)(param_1 + 0x3c) = 9;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = FUN_143c252a0(*(undefined8 *)(param_1 + 200),param_1 + 8,*(undefined4 *)(param_1 + 0x3c)
                         );
    uVar7 = 0;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (ulonglong)uVar3;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(uint *)(param_1 + 4) = (uint)(uVar3 < *(uint *)(param_1 + 0x3c));
    *(uint *)(param_1 + 0x1c) = (uVar3 * 8 - *(int *)(param_1 + 0x3c)) + 1;
    if (uVar3 != 0) goto LAB_143c76040;
  }
  return 0xffffffff;
}



// FUNCTION 143c760d0 FUN_143c760d0 body=711 status=ok
// SIG undefined FUN_143c760d0(void)

ulonglong FUN_143c760d0(int *param_1,undefined1 *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte local_res18 [8];
  
  uVar6 = param_1[0x13];
  uVar7 = 0;
  uVar10 = param_1[0x12];
  uVar9 = param_1[0x14];
  uVar8 = uVar6;
  if (param_3 != 0) {
    iVar5 = *param_1;
    if (iVar5 == 0) {
      iVar5 = FUN_143c251d0(*(undefined8 *)(param_1 + 0x32),2);
      uVar2 = uVar9;
      if ((iVar5 == 0) &&
         (iVar5 = FUN_143c252a0(*(undefined8 *)(param_1 + 0x32),local_res18,1), iVar5 == 1)) {
        uVar8 = local_res18[0] & 0x1f;
        param_1[0xd] = local_res18[0] & 0x80;
        iVar5 = 1 << (sbyte)uVar8;
        param_1[0xc] = uVar8;
        param_1[0xe] = iVar5 + -0x100;
        if (uVar8 < 0x11) {
          param_1[0xf] = 9;
          uVar9 = 0;
          param_1[0x10] = (uint)((local_res18[0] & 0x80) != 0);
          iVar3 = 0x100;
          if (uVar8 < 10) {
            iVar3 = iVar5 + -0xff;
          }
          param_1[0x11] = iVar3;
          uVar8 = FUN_143c75f80(param_1);
          uVar7 = 0;
          uVar2 = 0;
          if (uVar8 < 0x100) {
            if (param_2 != (undefined1 *)0x0) {
              *param_2 = (char)uVar8;
            }
            uVar7 = 1;
            uVar10 = uVar8;
            if (1 < param_3) {
              *param_1 = 1;
              goto LAB_143c761e5;
            }
            goto LAB_143c76371;
          }
        }
      }
LAB_143c76366:
      uVar9 = uVar2;
      uVar8 = uVar6;
      *param_1 = 3;
    }
    else {
      if (iVar5 == 1) goto LAB_143c761e5;
      if (iVar5 == 2) {
        do {
          iVar5 = param_1[0x1e];
          while (iVar5 != 0) {
            param_1[0x1e] = param_1[0x1e] + -1;
            if (param_2 != (undefined1 *)0x0) {
              param_2[uVar7] =
                   *(undefined1 *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c));
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            if (uVar6 == param_3) goto LAB_143c76371;
            iVar5 = param_1[0x1e];
          }
          if ((uint)param_1[0x10] < (uint)param_1[0xe]) {
            if (((uint)param_1[0x1a] <= (uint)param_1[0x10]) &&
               (iVar5 = FUN_143c763a0(param_1), uVar6 = uVar8, uVar2 = uVar9, iVar5 < 0))
            goto LAB_143c76366;
            *(short *)(*(longlong *)(param_1 + 0x16) + (ulonglong)(uint)param_1[0x10] * 2) =
                 (short)uVar10;
            *(char *)((ulonglong)(uint)param_1[0x10] + *(longlong *)(param_1 + 0x18)) = (char)uVar8;
            param_1[0x10] = param_1[0x10] + 1;
          }
          *param_1 = 1;
          uVar10 = uVar9;
LAB_143c761e5:
          while( true ) {
            uVar4 = FUN_143c75f80(param_1);
            uVar6 = uVar8;
            uVar2 = uVar9;
            if ((int)uVar4 < 0) goto LAB_143c76366;
            if ((uVar4 != 0x100) || (param_1[0xd] == 0)) break;
            param_1[0x10] = 0;
            uVar8 = 0;
            *(undefined1 *)(param_1 + 8) = 1;
            uVar10 = 0;
          }
          uVar6 = uVar4;
          uVar2 = uVar4;
          if (0xff < uVar4) {
            if ((uint)param_1[0x10] <= uVar4 - 0x100) {
              uVar6 = uVar8;
              if ((uVar4 - 0x100 != param_1[0x10]) ||
                 ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e] &&
                  (iVar5 = FUN_143c76440(param_1), iVar5 < 0)))) goto LAB_143c76366;
              *(char *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) =
                   (char)uVar8;
              param_1[0x1e] = param_1[0x1e] + 1;
              uVar6 = uVar10;
            }
            uVar9 = uVar6;
            if (0xff < uVar6) {
              do {
                uVar6 = uVar8;
                if ((*(longlong *)(param_1 + 0x16) == 0) ||
                   ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e] &&
                    (iVar5 = FUN_143c76440(param_1), iVar5 < 0)))) goto LAB_143c76366;
                *(undefined1 *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) =
                     *(undefined1 *)((ulonglong)(uVar9 - 0x100) + *(longlong *)(param_1 + 0x18));
                param_1[0x1e] = param_1[0x1e] + 1;
                uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x16) + (ulonglong)(uVar9 - 0x100) * 2);
                uVar9 = (uint)uVar1;
                uVar6 = (uint)uVar1;
              } while (0xff < uVar1);
            }
          }
          if ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e]) &&
             (iVar5 = FUN_143c76440(param_1), iVar5 < 0)) goto LAB_143c76366;
          *(char *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) = (char)uVar6;
          param_1[0x1e] = param_1[0x1e] + 1;
          *param_1 = 2;
          uVar8 = uVar6;
          uVar9 = uVar4;
        } while( true );
      }
    }
  }
LAB_143c76371:
  param_1[0x12] = uVar10;
  param_1[0x13] = uVar8;
  param_1[0x14] = uVar9;
  return uVar7;
}



// FUNCTION 143c763a0 FUN_143c763a0 body=157 status=ok
// SIG undefined FUN_143c763a0(void)

undefined8 FUN_143c763a0(longlong param_1)

{
  void *_Dst;
  longlong lVar1;
  uint uVar2;
  ulonglong _Size;
  int local_res8 [2];
  
  uVar2 = *(uint *)(param_1 + 0x68);
  _Size = (ulonglong)uVar2;
  if (uVar2 == 0) {
    uVar2 = 0x200;
  }
  else {
    uVar2 = (uVar2 >> 2) + uVar2;
  }
  lVar1 = FUN_143c27410(*(undefined8 *)(param_1 + 0xd0),3,_Size,uVar2,
                        *(undefined8 *)(param_1 + 0x58),local_res8);
  *(longlong *)(param_1 + 0x58) = lVar1;
  if (local_res8[0] != 0) {
    return 0xffffffff;
  }
  _Dst = (void *)(lVar1 + (ulonglong)uVar2 * 2);
  *(void **)(param_1 + 0x60) = _Dst;
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)(lVar1 + _Size * 2),_Size);
  *(uint *)(param_1 + 0x68) = uVar2;
  return 0;
}



// FUNCTION 143c76440 FUN_143c76440 body=166 status=ok
// SIG undefined FUN_143c76440(void)

undefined8 FUN_143c76440(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_res8 [2];
  
  uVar2 = *(ulonglong *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x78) < uVar2) {
    return 0;
  }
  uVar3 = uVar2 + 4 + (uVar2 >> 1);
  if (*(longlong *)(param_1 + 0x70) == param_1 + 0x88) {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if ((uVar3 < 0x10001) || (uVar3 = 0x10000, uVar2 != 0x10000)) {
    uVar1 = FUN_143c27410(*(undefined8 *)(param_1 + 0xd0),1,uVar2 & 0xffffffff,uVar3 & 0xffffffff,
                          *(undefined8 *)(param_1 + 0x70),local_res8);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    if (local_res8[0] == 0) {
      *(ulonglong *)(param_1 + 0x80) = uVar3;
      return 0;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143c76500 finish body=202 status=ok
// SIG undefined finish(void)

void hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::finish
               (uint *param_1,LPCRITICAL_SECTION param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*param_1 == 0) {
    if (*(uint **)(param_1 + 2) != param_1 + 4) {
      FMemory::operator_delete();
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    return;
  }
  EnterCriticalSection(param_2);
  uVar2 = *param_1;
  while (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar2 * 0x18 + 8);
    pcVar1 = *(code **)(*(longlong *)(param_1 + 2) + 0x10 + (ulonglong)uVar2 * 0x18);
    *param_1 = uVar2;
    LeaveCriticalSection(param_2);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
    EnterCriticalSection(param_2);
    uVar2 = *param_1;
  }
  if (*(uint **)(param_1 + 2) != param_1 + 4) {
    FMemory::operator_delete();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x000143c765c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_2);
  return;
}



// FUNCTION 143c765d0 hb_unicode_funcs_destroy body=272 status=ok
// SIG undefined hb_unicode_funcs_destroy(void)

void hb_unicode_funcs_destroy(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *param_1 = -0xdead;
      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::finish
                (param_1 + 0xc,param_1 + 2);
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      if (*(code **)(param_1 + 0x40) != (code *)0x0) {
        (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x30));
      }
      if (*(code **)(param_1 + 0x42) != (code *)0x0) {
        (**(code **)(param_1 + 0x42))(*(undefined8 *)(param_1 + 0x32));
      }
      if (*(code **)(param_1 + 0x44) != (code *)0x0) {
        (**(code **)(param_1 + 0x44))(*(undefined8 *)(param_1 + 0x34));
      }
      if (*(code **)(param_1 + 0x46) != (code *)0x0) {
        (**(code **)(param_1 + 0x46))(*(undefined8 *)(param_1 + 0x36));
      }
      if (*(code **)(param_1 + 0x48) != (code *)0x0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x38));
      }
      if (*(code **)(param_1 + 0x4a) != (code *)0x0) {
        (**(code **)(param_1 + 0x4a))(*(undefined8 *)(param_1 + 0x3a));
      }
      if (*(code **)(param_1 + 0x4c) != (code *)0x0) {
        (**(code **)(param_1 + 0x4c))(*(undefined8 *)(param_1 + 0x3c));
      }
      if (*(code **)(param_1 + 0x4e) != (code *)0x0) {
        (**(code **)(param_1 + 0x4e))(*(undefined8 *)(param_1 + 0x3e));
      }
      hb_unicode_funcs_destroy(*(undefined8 *)(param_1 + 0x1c));
      FMemory::operator_delete(param_1);
    }
  }
  return;
}



// FUNCTION 143c766e0 hb_unicode_funcs_get_default body=5 status=ok
// SIG undefined hb_unicode_funcs_get_default(void)

undefined * hb_unicode_funcs_get_default(void)

{
  longlong lVar1;
  undefined4 auStackX_8 [8];
  
  LOCK();
  UNLOCK();
  if (DAT_146bc8698 == 0) {
    auStackX_8[0] = 0;
    lVar1 = FUN_143b208b0(auStackX_8);
    LOCK();
    if (DAT_146bc8698 != 0) {
      lVar1 = DAT_146bc8698;
    }
    DAT_146bc8698 = lVar1;
    UNLOCK();
  }
  return &DAT_145d39cd0;
}



// FUNCTION 143c766f0 hb_unicode_script body=14 status=ok
// SIG undefined hb_unicode_script(void)

void hb_unicode_script(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143c766f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xa0))(param_1,param_2,*(undefined8 *)(param_1 + 0xe0));
  return;
}



// FUNCTION 143c76700 hb_font_get_font_v_extents_parent body=258 status=ok
// SIG undefined hb_font_get_font_v_extents_parent(void)

ulonglong hb_font_get_font_v_extents_parent(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  uVar4 = (**(code **)(*(longlong *)(lVar1 + 0x98) + 0x160))
                    (lVar1,*(undefined8 *)(lVar1 + 0xa0),param_3,
                     *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x80));
  if ((int)uVar4 != 0) {
    iVar2 = *param_3;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x88);
      if (iVar3 != *(int *)(param_1 + 0x88)) {
        iVar2 = (int)(((longlong)*(int *)(param_1 + 0x88) * (longlong)iVar2) / (longlong)iVar3);
      }
    }
    iVar3 = param_3[1];
    *param_3 = iVar2;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x88);
      if (iVar2 != *(int *)(param_1 + 0x88)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x88) * (longlong)iVar3) / (longlong)iVar2);
      }
    }
    param_3[1] = iVar3;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x88);
      if (iVar2 != *(int *)(param_1 + 0x88)) {
        param_3[2] = (int)(((longlong)*(int *)(param_1 + 0x88) * (longlong)param_3[2]) /
                          (longlong)iVar2);
        return uVar4 & 0xffffffff;
      }
    }
    param_3[2] = param_3[2];
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 143c76890 hb_font_get_glyph_h_advance_parent body=97 status=ok
// SIG undefined hb_font_get_glyph_h_advance_parent(void)

ulonglong hb_font_get_glyph_h_advance_parent(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x98) + 0x178))
                    (lVar2,*(undefined8 *)(lVar2 + 0xa0),param_3,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0x98));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x88);
    if (iVar1 != *(int *)(param_1 + 0x88)) {
      return ((longlong)*(int *)(param_1 + 0x88) * (longlong)(int)uVar3) / (longlong)iVar1;
    }
  }
  return (ulonglong)uVar3;
}



// FUNCTION 143c76910 hb_font_get_glyph_v_advance_parent body=97 status=ok
// SIG undefined hb_font_get_glyph_v_advance_parent(void)

ulonglong hb_font_get_glyph_v_advance_parent(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x98) + 0x180))
                    (lVar2,*(undefined8 *)(lVar2 + 0xa0),param_3,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0xa0));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x8c);
    if (iVar1 != *(int *)(param_1 + 0x8c)) {
      return ((longlong)*(int *)(param_1 + 0x8c) * (longlong)(int)uVar3) / (longlong)iVar1;
    }
  }
  return (ulonglong)uVar3;
}



// FUNCTION 143c76990 hb_font_get_glyph_h_origin_parent body=123 status=ok
// SIG undefined hb_font_get_glyph_h_origin_parent(void)

ulonglong hb_font_get_glyph_h_origin_parent
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                    undefined4 *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  *param_5 = 0;
  *param_4 = 0;
  uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x98) + 0x188))
                    (lVar1,*(undefined8 *)(lVar1 + 0xa0),param_3,param_4,param_5,
                     *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0xa8));
  if ((int)uVar2 != 0) {
    hb_font_t::parent_scale_distance(param_1,param_4,param_5);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143c76a20 hb_font_get_glyph_v_origin_parent body=123 status=ok
// SIG undefined hb_font_get_glyph_v_origin_parent(void)

ulonglong hb_font_get_glyph_v_origin_parent
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                    undefined4 *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  *param_5 = 0;
  *param_4 = 0;
  uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x98) + 400))
                    (lVar1,*(undefined8 *)(lVar1 + 0xa0),param_3,param_4,param_5,
                     *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0xb0));
  if ((int)uVar2 != 0) {
    hb_font_t::parent_scale_distance(param_1,param_4,param_5);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143c76aa0 hb_font_get_glyph_h_kerning_parent body=103 status=ok
// SIG undefined hb_font_get_glyph_h_kerning_parent(void)

ulonglong hb_font_get_glyph_h_kerning_parent
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x98) + 0x198))
                    (lVar2,*(undefined8 *)(lVar2 + 0xa0),param_3,param_4,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0xb8));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x88);
    if (iVar1 != *(int *)(param_1 + 0x88)) {
      return ((longlong)*(int *)(param_1 + 0x88) * (longlong)(int)uVar3) / (longlong)iVar1;
    }
  }
  return (ulonglong)uVar3;
}



// FUNCTION 143c76b10 hb_font_get_glyph_v_kerning_parent body=103 status=ok
// SIG undefined hb_font_get_glyph_v_kerning_parent(void)

ulonglong hb_font_get_glyph_v_kerning_parent
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x98) + 0x1a0))
                    (lVar2,*(undefined8 *)(lVar2 + 0xa0),param_3,param_4,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0xc0));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x8c);
    if (iVar1 != *(int *)(param_1 + 0x8c)) {
      return ((longlong)*(int *)(param_1 + 0x8c) * (longlong)(int)uVar3) / (longlong)iVar1;
    }
  }
  return (ulonglong)uVar3;
}



// FUNCTION 143c76b90 hb_font_get_glyph_extents_parent body=122 status=ok
// SIG undefined hb_font_get_glyph_extents_parent(void)

ulonglong hb_font_get_glyph_extents_parent
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  *param_4 = 0;
  param_4[1] = 0;
  uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x98) + 0x1a8))
                    (lVar1,*(undefined8 *)(lVar1 + 0xa0),param_3,param_4,
                     *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 200));
  if ((int)uVar2 != 0) {
    hb_font_t::parent_scale_distance(param_1,param_4,(longlong)param_4 + 4);
    hb_font_t::parent_scale_distance(param_1,param_4 + 1,(longlong)param_4 + 0xc);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143c76c30 hb_font_get_glyph_contour_point_parent body=129 status=ok
// SIG undefined hb_font_get_glyph_contour_point_parent(void)

ulonglong hb_font_get_glyph_contour_point_parent
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 *param_5,undefined4 *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  *param_6 = 0;
  *param_5 = 0;
  uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x98) + 0x1b0))
                    (lVar1,*(undefined8 *)(lVar1 + 0xa0),param_3,param_4,param_5,param_6,
                     *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0xd0));
  if ((int)uVar2 != 0) {
    hb_font_t::parent_scale_distance(param_1,param_5,param_6);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143c76d70 hb_font_get_font_h_extents_parent body=255 status=ok
// SIG undefined hb_font_get_font_h_extents_parent(void)

ulonglong hb_font_get_font_h_extents_parent(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  uVar4 = (**(code **)(*(longlong *)(lVar1 + 0x98) + 0x158))
                    (lVar1,*(undefined8 *)(lVar1 + 0xa0),param_3,
                     *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x78));
  if ((int)uVar4 != 0) {
    iVar2 = *param_3;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x8c);
      if (iVar3 != *(int *)(param_1 + 0x8c)) {
        iVar2 = (int)(((longlong)*(int *)(param_1 + 0x8c) * (longlong)iVar2) / (longlong)iVar3);
      }
    }
    iVar3 = param_3[1];
    *param_3 = iVar2;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x8c);
      if (iVar2 != *(int *)(param_1 + 0x8c)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x8c) * (longlong)iVar3) / (longlong)iVar2);
      }
    }
    param_3[1] = iVar3;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x8c);
      if (iVar2 != *(int *)(param_1 + 0x8c)) {
        param_3[2] = (int)(((longlong)*(int *)(param_1 + 0x8c) * (longlong)param_3[2]) /
                          (longlong)iVar2);
        return uVar4 & 0xffffffff;
      }
    }
    param_3[2] = param_3[2];
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 143c76e70 has_func body=103 status=ok
// SIG undefined has_func(void)

bool hb_font_t::has_func(longlong param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  
  param_2 = param_2 & 0xffffffff;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar2 = hb_font_get_empty();
    if (*(longlong *)(param_1 + 0x78) != lVar2) {
      cVar1 = has_func(*(undefined8 *)(param_1 + 0x78),param_2);
      if (cVar1 != '\0') {
        return true;
      }
    }
  }
  return *(undefined **)(*(longlong *)(param_1 + 0x98) + 0x158 + param_2 * 8) !=
         (&PTR_hb_font_get_font_h_extents_parent_145d39918)[param_2];
}



// FUNCTION 143c76ee0 parent_scale_distance body=103 status=ok
// SIG undefined parent_scale_distance(void)

void hb_font_t::parent_scale_distance(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x88);
    if (iVar1 != *(int *)(param_1 + 0x88)) {
      iVar2 = (int)(((longlong)*(int *)(param_1 + 0x88) * (longlong)iVar2) / (longlong)iVar1);
    }
  }
  *param_2 = iVar2;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x8c);
    if (iVar2 != *(int *)(param_1 + 0x8c)) {
      *param_3 = (int)(((longlong)*(int *)(param_1 + 0x8c) * (longlong)*param_3) / (longlong)iVar2);
      return;
    }
  }
  *param_3 = *param_3;
  return;
}



// FUNCTION 143c76f50 hb_font_create body=206 status=ok
// SIG undefined hb_font_create(void)

undefined4 * hb_font_create(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    param_1 = hb_face_get_empty();
  }
  puVar2 = (undefined4 *)HarfBuzzCalloc(1,0xb8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 2));
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x12) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x1a) = 0;
    hb_font_funcs_make_immutable(param_1);
    uVar3 = hb_font_get_empty();
    *(undefined8 *)(puVar2 + 0x1e) = uVar3;
    uVar3 = hb_font_funcs_reference(param_1);
    *(undefined8 *)(puVar2 + 0x20) = uVar3;
    uVar3 = hb_font_funcs_get_empty();
    *(undefined8 *)(puVar2 + 0x26) = uVar3;
    uVar1 = hb_face_get_upem(param_1);
    puVar2[0x23] = uVar1;
    puVar2[0x22] = uVar1;
    return puVar2;
  }
  puVar2 = (undefined4 *)hb_font_get_empty();
  return puVar2;
}



// FUNCTION 143c77020 hb_font_create_sub_font body=120 status=ok
// SIG undefined hb_font_create_sub_font(void)

int * hb_font_create_sub_font(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    param_1 = hb_font_get_empty();
  }
  piVar1 = (int *)hb_font_create(*(undefined8 *)(param_1 + 0x80));
  if (*piVar1 != -1) {
    uVar2 = hb_font_funcs_reference(param_1);
    *(undefined8 *)(piVar1 + 0x1e) = uVar2;
    piVar1[0x22] = *(int *)(param_1 + 0x88);
    piVar1[0x23] = *(int *)(param_1 + 0x8c);
    piVar1[0x24] = *(int *)(param_1 + 0x90);
    piVar1[0x25] = *(int *)(param_1 + 0x94);
  }
  return piVar1;
}



// FUNCTION 143c770a0 hb_font_destroy body=167 status=ok
// SIG undefined hb_font_destroy(void)

void hb_font_destroy(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *param_1 = -0xdead;
      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::finish
                (param_1 + 0xc,param_1 + 2);
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      if (*(longlong *)(param_1 + 0x2c) - 2U < 0xfffffffffffffffd) {
        AK::MemoryMgr::StartProfileThreadUsage((long)*(longlong *)(param_1 + 0x2c));
      }
      if (*(code **)(param_1 + 0x2a) != (code *)0x0) {
        (**(code **)(param_1 + 0x2a))(*(undefined8 *)(param_1 + 0x28));
      }
      hb_font_destroy(*(undefined8 *)(param_1 + 0x1e));
      hb_face_destroy(*(undefined8 *)(param_1 + 0x20));
      hb_font_funcs_destroy(*(undefined8 *)(param_1 + 0x26));
      FMemory::operator_delete(param_1);
    }
  }
  return;
}



// FUNCTION 143c77150 hb_font_funcs_create body=210 status=ok
// SIG undefined hb_font_funcs_create(void)

undefined4 * hb_font_funcs_create(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)HarfBuzzCalloc(1,0x1c8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x1a) = 0;
    *(code **)(puVar1 + 0x56) = hb_font_get_font_h_extents_parent;
    *(code **)(puVar1 + 0x58) = hb_font_get_font_v_extents_parent;
    *(undefined1 **)(puVar1 + 0x5a) = &LAB_143c76820;
    *(undefined1 **)(puVar1 + 0x5c) = &LAB_143c76860;
    *(code **)(puVar1 + 0x5e) = hb_font_get_glyph_h_advance_parent;
    *(code **)(puVar1 + 0x60) = hb_font_get_glyph_v_advance_parent;
    *(code **)(puVar1 + 0x62) = hb_font_get_glyph_h_origin_parent;
    *(code **)(puVar1 + 100) = hb_font_get_glyph_v_origin_parent;
    *(code **)(puVar1 + 0x66) = hb_font_get_glyph_h_kerning_parent;
    *(code **)(puVar1 + 0x68) = hb_font_get_glyph_v_kerning_parent;
    *(code **)(puVar1 + 0x6a) = hb_font_get_glyph_extents_parent;
    *(code **)(puVar1 + 0x6c) = hb_font_get_glyph_contour_point_parent;
    *(undefined1 **)(puVar1 + 0x6e) = &LAB_143c76cd0;
    *(undefined1 **)(puVar1 + 0x70) = &LAB_143c76d10;
    return puVar1;
  }
  puVar1 = (undefined4 *)hb_font_funcs_get_empty();
  return puVar1;
}



// FUNCTION 143c77230 hb_font_funcs_destroy body=386 status=ok
// SIG undefined hb_font_funcs_destroy(void)

void hb_font_funcs_destroy(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *param_1 = -0xdead;
      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::finish
                (param_1 + 0xc,param_1 + 2);
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      if (*(code **)(param_1 + 0x3a) != (code *)0x0) {
        (**(code **)(param_1 + 0x3a))(*(undefined8 *)(param_1 + 0x1e));
      }
      if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
        (**(code **)(param_1 + 0x3c))(*(undefined8 *)(param_1 + 0x20));
      }
      if (*(code **)(param_1 + 0x3e) != (code *)0x0) {
        (**(code **)(param_1 + 0x3e))(*(undefined8 *)(param_1 + 0x22));
      }
      if (*(code **)(param_1 + 0x40) != (code *)0x0) {
        (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x24));
      }
      if (*(code **)(param_1 + 0x42) != (code *)0x0) {
        (**(code **)(param_1 + 0x42))(*(undefined8 *)(param_1 + 0x26));
      }
      if (*(code **)(param_1 + 0x44) != (code *)0x0) {
        (**(code **)(param_1 + 0x44))(*(undefined8 *)(param_1 + 0x28));
      }
      if (*(code **)(param_1 + 0x46) != (code *)0x0) {
        (**(code **)(param_1 + 0x46))(*(undefined8 *)(param_1 + 0x2a));
      }
      if (*(code **)(param_1 + 0x48) != (code *)0x0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x2c));
      }
      if (*(code **)(param_1 + 0x4a) != (code *)0x0) {
        (**(code **)(param_1 + 0x4a))(*(undefined8 *)(param_1 + 0x2e));
      }
      if (*(code **)(param_1 + 0x4c) != (code *)0x0) {
        (**(code **)(param_1 + 0x4c))(*(undefined8 *)(param_1 + 0x30));
      }
      if (*(code **)(param_1 + 0x4e) != (code *)0x0) {
        (**(code **)(param_1 + 0x4e))(*(undefined8 *)(param_1 + 0x32));
      }
      if (*(code **)(param_1 + 0x50) != (code *)0x0) {
        (**(code **)(param_1 + 0x50))(*(undefined8 *)(param_1 + 0x34));
      }
      if (*(code **)(param_1 + 0x52) != (code *)0x0) {
        (**(code **)(param_1 + 0x52))(*(undefined8 *)(param_1 + 0x36));
      }
      if (*(code **)(param_1 + 0x54) != (code *)0x0) {
        (**(code **)(param_1 + 0x54))(*(undefined8 *)(param_1 + 0x38));
      }
      FMemory::operator_delete(param_1);
    }
  }
  return;
}



// FUNCTION 143c773c0 hb_font_funcs_get_empty body=8 status=ok
// SIG undefined hb_font_funcs_get_empty(void)

undefined * hb_font_funcs_get_empty(void)

{
  return &DAT_145d397c0;
}



// FUNCTION 143c773d0 hb_font_funcs_make_immutable body=13 status=ok
// SIG undefined hb_font_funcs_make_immutable(void)

void hb_font_funcs_make_immutable(int *param_1)

{
  if (*param_1 != -1) {
    param_1[0x1c] = 1;
  }
  return;
}



// FUNCTION 143c773e0 hb_font_funcs_reference body=23 status=ok
// SIG undefined hb_font_funcs_reference(void)

int * hb_font_funcs_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 143c77400 hb_font_funcs_set_font_h_extents_func body=141 status=ok
// SIG undefined hb_font_funcs_set_font_h_extents_func(void)

void hb_font_funcs_set_font_h_extents_func
               (longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0xe8) != (code *)0x0) {
      (**(code **)(param_1 + 0xe8))(*(undefined8 *)(param_1 + 0x78));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x158) = hb_font_get_font_h_extents_parent;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x158) = param_2;
      *(undefined8 *)(param_1 + 0x78) = param_3;
      *(code **)(param_1 + 0xe8) = param_4;
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c77490 hb_font_funcs_set_glyph_contour_point_func body=150 status=ok
// SIG undefined hb_font_funcs_set_glyph_contour_point_func(void)

void hb_font_funcs_set_glyph_contour_point_func
               (longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0x140) != (code *)0x0) {
      (**(code **)(param_1 + 0x140))(*(undefined8 *)(param_1 + 0xd0));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x1b0) = hb_font_get_glyph_contour_point_parent;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x1b0) = param_2;
      *(undefined8 *)(param_1 + 0xd0) = param_3;
      *(code **)(param_1 + 0x140) = param_4;
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c77530 hb_font_funcs_set_glyph_extents_func body=150 status=ok
// SIG undefined hb_font_funcs_set_glyph_extents_func(void)

void hb_font_funcs_set_glyph_extents_func
               (longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0x138) != (code *)0x0) {
      (**(code **)(param_1 + 0x138))(*(undefined8 *)(param_1 + 200));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x1a8) = hb_font_get_glyph_extents_parent;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x1a8) = param_2;
      *(undefined8 *)(param_1 + 200) = param_3;
      *(code **)(param_1 + 0x138) = param_4;
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c775d0 hb_font_funcs_set_glyph_from_name_func body=150 status=ok
// SIG undefined hb_font_funcs_set_glyph_from_name_func(void)

void hb_font_funcs_set_glyph_from_name_func
               (longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0x150) != (code *)0x0) {
      (**(code **)(param_1 + 0x150))(*(undefined8 *)(param_1 + 0xe0));
    }
    if (param_2 == 0) {
      *(undefined1 **)(param_1 + 0x1c0) = &LAB_143c76d10;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x1c0) = param_2;
      *(undefined8 *)(param_1 + 0xe0) = param_3;
      *(code **)(param_1 + 0x150) = param_4;
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c77670 hb_font_funcs_set_glyph_h_advance_func body=150 status=ok
// SIG undefined hb_font_funcs_set_glyph_h_advance_func(void)

void hb_font_funcs_set_glyph_h_advance_func
               (longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0x108) != (code *)0x0) {
      (**(code **)(param_1 + 0x108))(*(undefined8 *)(param_1 + 0x98));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x178) = hb_font_get_glyph_h_advance_parent;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x178) = param_2;
      *(undefined8 *)(param_1 + 0x98) = param_3;
      *(code **)(param_1 + 0x108) = param_4;
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c77710 hb_font_funcs_set_glyph_h_kerning_func body=150 status=ok
// SIG undefined hb_font_funcs_set_glyph_h_kerning_func(void)

void hb_font_funcs_set_glyph_h_kerning_func
               (longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0x128) != (code *)0x0) {
      (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0xb8));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x198) = hb_font_get_glyph_h_kerning_parent;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x198) = param_2;
      *(undefined8 *)(param_1 + 0xb8) = param_3;
      *(code **)(param_1 + 0x128) = param_4;
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c777b0 hb_font_funcs_set_glyph_name_func body=150 status=ok
// SIG undefined hb_font_funcs_set_glyph_name_func(void)

void hb_font_funcs_set_glyph_name_func
               (longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0x148) != (code *)0x0) {
      (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 0xd8));
    }
    if (param_2 == 0) {
      *(undefined1 **)(param_1 + 0x1b8) = &LAB_143c76cd0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x1b8) = param_2;
      *(undefined8 *)(param_1 + 0xd8) = param_3;
      *(code **)(param_1 + 0x148) = param_4;
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c77850 hb_font_funcs_set_glyph_v_advance_func body=150 status=ok
// SIG undefined hb_font_funcs_set_glyph_v_advance_func(void)

void hb_font_funcs_set_glyph_v_advance_func
               (longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0x110) != (code *)0x0) {
      (**(code **)(param_1 + 0x110))(*(undefined8 *)(param_1 + 0xa0));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x180) = hb_font_get_glyph_v_advance_parent;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x180) = param_2;
      *(undefined8 *)(param_1 + 0xa0) = param_3;
      *(code **)(param_1 + 0x110) = param_4;
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c778f0 hb_font_funcs_set_glyph_v_origin_func body=150 status=ok
// SIG undefined hb_font_funcs_set_glyph_v_origin_func(void)

void hb_font_funcs_set_glyph_v_origin_func
               (longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      (**(code **)(param_1 + 0x120))(*(undefined8 *)(param_1 + 0xb0));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 400) = hb_font_get_glyph_v_origin_parent;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    else {
      *(longlong *)(param_1 + 400) = param_2;
      *(undefined8 *)(param_1 + 0xb0) = param_3;
      *(code **)(param_1 + 0x120) = param_4;
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c77990 hb_font_funcs_set_nominal_glyph_func body=150 status=ok
// SIG undefined hb_font_funcs_set_nominal_glyph_func(void)

void hb_font_funcs_set_nominal_glyph_func
               (longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0xf8) != (code *)0x0) {
      (**(code **)(param_1 + 0xf8))(*(undefined8 *)(param_1 + 0x88));
    }
    if (param_2 == 0) {
      *(undefined1 **)(param_1 + 0x168) = &LAB_143c76820;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x168) = param_2;
      *(undefined8 *)(param_1 + 0x88) = param_3;
      *(code **)(param_1 + 0xf8) = param_4;
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c77a30 hb_font_funcs_set_variation_glyph_func body=150 status=ok
// SIG undefined hb_font_funcs_set_variation_glyph_func(void)

void hb_font_funcs_set_variation_glyph_func
               (longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0x100) != (code *)0x0) {
      (**(code **)(param_1 + 0x100))(*(undefined8 *)(param_1 + 0x90));
    }
    if (param_2 == 0) {
      *(undefined1 **)(param_1 + 0x170) = &LAB_143c76860;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x170) = param_2;
      *(undefined8 *)(param_1 + 0x90) = param_3;
      *(code **)(param_1 + 0x100) = param_4;
    }
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c77ad0 hb_font_get_empty body=8 status=ok
// SIG undefined hb_font_get_empty(void)

undefined * hb_font_get_empty(void)

{
  return &DAT_145d39990;
}



// FUNCTION 143c77ae0 hb_font_get_glyph body=99 status=ok
// SIG undefined hb_font_get_glyph(void)

void hb_font_get_glyph(longlong param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  *param_4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (param_3 != 0) {
    (**(code **)(lVar1 + 0x170))
              (param_1,*(undefined8 *)(param_1 + 0xa0),param_2,param_3,param_4,
               *(undefined8 *)(lVar1 + 0x90));
    return;
  }
  (**(code **)(lVar1 + 0x168))
            (param_1,*(undefined8 *)(param_1 + 0xa0),param_2,param_4,*(undefined8 *)(lVar1 + 0x88));
  return;
}



// FUNCTION 143c77b50 hb_font_get_glyph_h_advance body=31 status=ok
// SIG undefined hb_font_get_glyph_h_advance(void)

void hb_font_get_glyph_h_advance(longlong param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143c77b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x98) + 0x178))
            (param_1,*(undefined8 *)(param_1 + 0xa0),param_2,
             *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x98));
  return;
}



// FUNCTION 143c77b70 hb_font_get_user_data body=22 status=ok
// SIG undefined hb_font_get_user_data(void)

undefined8 hb_font_get_user_data(int *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    uVar1 = hb_user_data_array_t::get(param_1 + 2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 143c77b90 hb_font_set_funcs body=146 status=ok
// SIG undefined hb_font_set_funcs(void)

void hb_font_set_funcs(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
      (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xa0));
    }
    if (param_2 == 0) {
      param_2 = hb_font_funcs_get_empty();
    }
    hb_font_funcs_reference(param_2);
    hb_font_funcs_destroy(*(undefined8 *)(param_1 + 0x98));
    *(longlong *)(param_1 + 0x98) = param_2;
    *(undefined8 *)(param_1 + 0xa0) = param_3;
    *(code **)(param_1 + 0xa8) = param_4;
  }
  else if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}



// FUNCTION 143c77c30 hb_font_set_scale body=20 status=ok
// SIG undefined hb_font_set_scale(void)

void hb_font_set_scale(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    *(undefined4 *)(param_1 + 0x88) = param_2;
    *(undefined4 *)(param_1 + 0x8c) = param_3;
  }
  return;
}



// FUNCTION 143c77c50 hb_font_set_user_data body=49 status=ok
// SIG undefined hb_font_set_user_data(void)

undefined1 hb_font_set_user_data(int *param_1)

{
  undefined1 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    uVar1 = hb_user_data_array_t::set(param_1 + 2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 143c77c90 hb_buffer_add_utf<hb_utf16_t> body=579 status=ok
// SIG undefined hb_buffer_add_utf<hb_utf16_t>(void)

void hb_buffer_add_utf<hb_utf16_t>(int *param_1,short *param_2,int param_3,uint param_4,int param_5)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  short *psVar5;
  ushort *puVar6;
  uint uVar7;
  short *psVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  uVar4 = param_1[0x20];
  if (*param_1 != -1) {
    if (param_3 == -1) {
      param_3 = 0;
      sVar1 = *param_2;
      psVar5 = param_2;
      while (sVar1 != 0) {
        psVar5 = psVar5 + 1;
        param_3 = param_3 + 1;
        sVar1 = *psVar5;
      }
    }
    if (param_5 == -1) {
      param_5 = param_3 - param_4;
    }
    uVar7 = (int)(((longlong)param_5 & 0x7fffffffffffffffU) >> 1) + param_1[0x2e];
    if ((uVar7 != 0) && ((uint)param_1[0x30] <= uVar7)) {
      hb_buffer_t::enlarge(param_1,uVar7);
    }
    if ((param_1[0x2e] == 0) && (param_4 != 0)) {
      param_1[0x43] = 0;
      psVar5 = param_2 + param_4;
      while ((param_2 < psVar5 && ((uint)param_1[0x43] < 5))) {
        uVar2 = psVar5[-1];
        psVar8 = psVar5 + -1;
        uVar7 = (uint)uVar2;
        if ((uVar2 - 0xd800 < 0x800) &&
           (((uVar7 = uVar4, 0xdbff < uVar2 && (param_2 < psVar8)) &&
            ((ushort)psVar5[-2] - 0xd800 < 0x400)))) {
          psVar8 = psVar5 + -2;
          uVar7 = uVar2 + 0xfca02400 + (uint)(ushort)psVar5[-2] * 0x400;
        }
        param_1[(ulonglong)(uint)param_1[0x43] + 0x39] = uVar7;
        param_1[0x43] = param_1[0x43] + 1;
        psVar5 = psVar8;
      }
    }
    puVar10 = (ushort *)(param_2 + param_4);
    puVar6 = puVar10;
    while (puVar6 < puVar10 + param_5) {
      uVar2 = *puVar6;
      puVar9 = puVar6 + 1;
      uVar7 = (uint)uVar2;
      if (((uVar2 - 0xd800 < 0x800) && (uVar7 = uVar4, uVar2 < 0xdc00)) &&
         ((puVar9 < puVar10 + param_5 && (uVar3 = *puVar9, uVar3 - 0xdc00 < 0x400)))) {
        puVar9 = puVar6 + 2;
        uVar7 = (uint)uVar2 * 0x400 + -0x35fdc00 + (uint)uVar3;
      }
      hb_buffer_t::add(param_1,uVar7,(longlong)puVar6 - (longlong)param_2 >> 1 & 0xffffffff);
      puVar6 = puVar9;
    }
    param_1[0x44] = 0;
    while ((puVar6 < param_2 + param_3 && ((uint)param_1[0x44] < 5))) {
      uVar2 = *puVar6;
      puVar10 = puVar6 + 1;
      uVar7 = (uint)uVar2;
      if ((uVar2 - 0xd800 < 0x800) &&
         (((uVar7 = uVar4, uVar2 < 0xdc00 && (puVar10 < param_2 + param_3)) &&
          (uVar3 = *puVar10, uVar3 - 0xdc00 < 0x400)))) {
        puVar10 = puVar6 + 2;
        uVar7 = (uint)uVar2 * 0x400 + -0x35fdc00 + (uint)uVar3;
      }
      param_1[(ulonglong)(uint)param_1[0x44] + 0x3e] = uVar7;
      param_1[0x44] = param_1[0x44] + 1;
      puVar6 = puVar10;
    }
    param_1[0x23] = 1;
  }
  return;
}



// FUNCTION 143c77ee0 add body=120 status=ok
// SIG undefined add(void)

void hb_buffer_t::add(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  
  if (((*(int *)(param_1 + 0xb8) != -1) &&
      (*(uint *)(param_1 + 0xc0) <= *(int *)(param_1 + 0xb8) + 1U)) &&
     (cVar2 = enlarge(), cVar2 == '\0')) {
    return;
  }
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xb8);
  lVar1 = *(longlong *)(param_1 + 200);
  *(undefined8 *)(lVar1 + uVar3 * 0x14) = 0;
  *(undefined8 *)(lVar1 + 8 + uVar3 * 0x14) = 0;
  *(undefined4 *)(lVar1 + 0x10 + uVar3 * 0x14) = 0;
  *(undefined4 *)(lVar1 + uVar3 * 0x14) = param_2;
  *(undefined4 *)(lVar1 + 4 + uVar3 * 0x14) = 1;
  *(undefined4 *)(lVar1 + 8 + uVar3 * 0x14) = param_3;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  return;
}



// FUNCTION 143c77f60 clear body=163 status=ok
// SIG undefined clear(void)

void hb_buffer_t::clear(int *param_1)

{
  if (*param_1 != -1) {
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x32);
    param_1[0x21] = 0;
    param_1[0x23] = 0;
    *(undefined2 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x38] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
  }
  return;
}



// FUNCTION 143c78010 clear_output body=39 status=ok
// SIG undefined clear_output(void)

void hb_buffer_t::clear_output(int *param_1)

{
  if (*param_1 != -1) {
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x32);
    *(undefined2 *)((longlong)param_1 + 0xb1) = 1;
    param_1[0x2f] = 0;
  }
  return;
}



// FUNCTION 143c78040 clear_positions body=67 status=ok
// SIG undefined clear_positions(void)

void hb_buffer_t::clear_positions(int *param_1)

{
  if (*param_1 != -1) {
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x32);
    *(undefined2 *)((longlong)param_1 + 0xb1) = 0x100;
    param_1[0x2f] = 0;
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x36),0,(ulonglong)(uint)param_1[0x2e] * 0x14);
    return;
  }
  return;
}



// FUNCTION 143c78090 enlarge body=304 status=ok
// SIG undefined enlarge(void)

ulonglong hb_buffer_t::enlarge(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0xb0) != '\0') {
LAB_143c780b1:
    return in_RAX & 0xffffffffffffff00;
  }
  if (*(uint *)(param_1 + 0x88) < param_2) {
    *(undefined1 *)(param_1 + 0xb0) = 1;
    goto LAB_143c780b1;
  }
  lVar1 = *(longlong *)(param_1 + 200);
  lVar2 = *(longlong *)(param_1 + 0xd0);
  uVar6 = *(uint *)(param_1 + 0xc0);
  lVar4 = 0;
  lVar3 = 0;
  if (param_2 < 0xccccccc) {
    for (; uVar6 <= param_2; uVar6 = uVar6 + 0x20 + (uVar6 >> 1)) {
    }
    lVar4 = 0;
    lVar3 = 0;
    if (uVar6 < 0xccccccc) {
      lVar3 = HarfBuzzRealloc(*(undefined8 *)(param_1 + 0xd8),(ulonglong)uVar6 * 0x14);
      lVar4 = HarfBuzzRealloc(*(undefined8 *)(param_1 + 200),(ulonglong)uVar6 * 0x14);
      if ((lVar3 != 0) && (lVar4 != 0)) goto LAB_143c7815e;
    }
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
LAB_143c7815e:
  if (lVar3 != 0) {
    *(longlong *)(param_1 + 0xd8) = lVar3;
  }
  if (lVar4 != 0) {
    *(longlong *)(param_1 + 200) = lVar4;
  }
  if (lVar2 == lVar1) {
    uVar5 = *(undefined8 *)(param_1 + 200);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
  }
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  bVar7 = *(char *)(param_1 + 0xb0) == '\0';
  if (bVar7) {
    *(uint *)(param_1 + 0xc0) = uVar6;
  }
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),bVar7);
}



// FUNCTION 143c781c0 make_room_for body=157 status=ok
// SIG undefined make_room_for(void)

undefined1 hb_buffer_t::make_room_for(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = param_3 + *(int *)(param_1 + 0xbc);
  if ((uVar2 != 0) && (*(uint *)(param_1 + 0xc0) <= uVar2)) {
    cVar1 = enlarge();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (*(void **)(param_1 + 0xd0) == *(void **)(param_1 + 200)) {
    if ((uint)(*(int *)(param_1 + 0xb4) + param_2) < *(uint *)(param_1 + 0xbc) + param_3) {
      *(void **)(param_1 + 0xd0) = *(void **)(param_1 + 0xd8);
      ::_guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0xd8),*(void **)(param_1 + 200),
                 (ulonglong)*(uint *)(param_1 + 0xbc) * 0x14);
    }
  }
  return 1;
}



// FUNCTION 143c78260 merge_clusters_impl body=344 status=ok
// SIG undefined merge_clusters_impl(void)

void hb_buffer_t::merge_clusters_impl(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_2;
  if (*(int *)(param_1 + 0x7c) != 2) {
    lVar2 = *(longlong *)(param_1 + 200);
    uVar6 = *(uint *)(lVar2 + 8 + uVar7 * 0x14);
    uVar4 = param_2 + 1;
    if (uVar4 < param_3) {
      uVar1 = (ulonglong)(param_3 - uVar4);
      puVar3 = (uint *)(lVar2 + ((ulonglong)uVar4 * 4 + 2 + (ulonglong)uVar4) * 4);
      do {
        if (*puVar3 <= uVar6) {
          uVar6 = *puVar3;
        }
        puVar3 = puVar3 + 5;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    while ((param_3 < *(uint *)(param_1 + 0xb8) &&
           (*(int *)(lVar2 + 8 + (ulonglong)(param_3 - 1) * 0x14) ==
            *(int *)(lVar2 + 8 + (ulonglong)param_3 * 0x14)))) {
      param_3 = param_3 + 1;
    }
    uVar4 = *(uint *)(param_1 + 0xb4);
    if (uVar4 < param_2) {
      do {
        uVar5 = (int)uVar7 - 1;
        if (*(int *)(lVar2 + 8 + (ulonglong)uVar5 * 0x14) != *(int *)(lVar2 + 8 + uVar7 * 0x14))
        break;
        uVar7 = (ulonglong)uVar5;
      } while (uVar4 < uVar5);
      param_2 = (uint)uVar7;
    }
    if ((uVar4 == param_2) &&
       (uVar1 = (ulonglong)*(uint *)(param_1 + 0xbc), *(uint *)(param_1 + 0xbc) != 0)) {
      do {
        uVar4 = (int)uVar1 - 1;
        uVar1 = (ulonglong)uVar4;
        lVar2 = *(longlong *)(param_1 + 0xd0) + uVar1 * 0x14;
        if (*(int *)(lVar2 + 8) != *(int *)(uVar7 * 0x14 + 8 + *(longlong *)(param_1 + 200))) break;
        *(uint *)(lVar2 + 8) = uVar6;
      } while (uVar4 != 0);
    }
    if ((uint)uVar7 < param_3) {
      uVar1 = (ulonglong)(param_3 - (uint)uVar7);
      lVar2 = uVar7 * 0x14;
      do {
        *(uint *)(lVar2 + 8 + *(longlong *)(param_1 + 200)) = uVar6;
        uVar1 = uVar1 - 1;
        lVar2 = lVar2 + 0x14;
      } while (uVar1 != 0);
    }
  }
  return;
}



// FUNCTION 143c783c0 merge_out_clusters body=360 status=ok
// SIG undefined merge_out_clusters(void)

void hb_buffer_t::merge_out_clusters(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = (ulonglong)param_2;
  if ((*(int *)(param_1 + 0x7c) != 2) && (1 < param_3 - param_2)) {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    uVar7 = *(uint *)(lVar2 + 8 + uVar5 * 0x14);
    uVar6 = param_2 + 1;
    if (uVar6 < param_3) {
      uVar1 = (ulonglong)(param_3 - uVar6);
      puVar4 = (uint *)(lVar2 + ((ulonglong)uVar6 * 4 + 2 + (ulonglong)uVar6) * 4);
      do {
        if (*puVar4 <= uVar7) {
          uVar7 = *puVar4;
        }
        puVar4 = puVar4 + 5;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    while (uVar6 = 0, param_2 != 0) {
      uVar6 = (uint)uVar5;
      param_2 = uVar6 - 1;
      if (*(int *)(lVar2 + 8 + (ulonglong)param_2 * 0x14) != *(int *)(lVar2 + 8 + uVar5 * 0x14))
      break;
      uVar5 = (ulonglong)param_2;
    }
    while ((param_3 < *(uint *)(param_1 + 0xbc) &&
           (*(int *)(lVar2 + 8 + (ulonglong)(param_3 - 1) * 0x14) ==
            *(int *)(lVar2 + 8 + (ulonglong)param_3 * 0x14)))) {
      param_3 = param_3 + 1;
    }
    if ((param_3 == *(uint *)(param_1 + 0xbc)) &&
       (uVar3 = *(uint *)(param_1 + 0xb4), uVar3 < *(uint *)(param_1 + 0xb8))) {
      do {
        lVar2 = *(longlong *)(param_1 + 200) + (ulonglong)uVar3 * 0x14;
        if (*(int *)(lVar2 + 8) !=
            *(int *)(*(longlong *)(param_1 + 0xd0) + 8 + (ulonglong)(param_3 - 1) * 0x14)) break;
        uVar3 = uVar3 + 1;
        *(uint *)(lVar2 + 8) = uVar7;
      } while (uVar3 < *(uint *)(param_1 + 0xb8));
    }
    if (uVar6 < param_3) {
      lVar2 = (ulonglong)uVar6 * 0x14;
      uVar5 = (ulonglong)(param_3 - uVar6);
      do {
        lVar2 = lVar2 + 0x14;
        *(uint *)(*(longlong *)(param_1 + 0xd0) + -0xc + lVar2) = uVar7;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}



// FUNCTION 143c78530 message_impl body=145 status=ok
// SIG undefined message_impl(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool hb_buffer_t::message_impl
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  local_b8 = 0;
  local_b0 = param_4;
  __stdio_common_vsprintf(*puVar2 | 2,local_a8,100,param_3);
  iVar1 = (**(code **)(param_1 + 0x118))(param_1,param_2,local_a8,*(undefined8 *)(param_1 + 0x120));
  return iVar1 != 0;
}



// FUNCTION 143c785d0 move_to body=311 status=ok
// SIG undefined move_to(void)

undefined8 hb_buffer_t::move_to(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xb1) == '\0') {
    *(uint *)(param_1 + 0xb4) = param_2;
    return 1;
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    uVar2 = *(uint *)(param_1 + 0xbc);
    if (uVar2 < param_2) {
      param_2 = param_2 - uVar2;
      cVar1 = make_room_for(param_1,param_2,param_2);
      if (cVar1 == '\0') {
        return 0;
      }
      memmove((void *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)*(uint *)(param_1 + 0xbc) * 0x14),
              (void *)(*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xb4) * 0x14),
              (ulonglong)param_2 * 0x14);
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + param_2;
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + param_2;
      return 1;
    }
    if (param_2 < uVar2) {
      uVar2 = uVar2 - param_2;
      if ((*(uint *)(param_1 + 0xb4) < uVar2) &&
         (cVar1 = shift_forward(param_1,uVar2 + 0x20), cVar1 == '\0')) {
        return 0;
      }
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) - uVar2;
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) - uVar2;
      memmove((void *)(*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xb4) * 0x14),
              (void *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)*(uint *)(param_1 + 0xbc) * 0x14),
              (ulonglong)uVar2 * 0x14);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143c78710 output_glyph body=123 status=ok
// SIG undefined output_glyph(void)

void hb_buffer_t::output_glyph(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  
  cVar8 = make_room_for(param_1,0,1);
  if (cVar8 != '\0') {
    uVar3 = *(uint *)(param_1 + 0xb4);
    lVar5 = *(longlong *)(param_1 + 200);
    uVar4 = *(uint *)(param_1 + 0xbc);
    puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar3 * 0x14);
    uVar7 = puVar1[1];
    lVar6 = *(longlong *)(param_1 + 0xd0);
    puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar4 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(undefined4 *)(lVar6 + (ulonglong)uVar4 * 0x14 + 0x10) =
         *(undefined4 *)(lVar5 + 0x10 + (ulonglong)uVar3 * 0x14);
    *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)*(uint *)(param_1 + 0xbc) * 0x14) =
         param_2;
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  }
  return;
}



// FUNCTION 143c78790 output_info body=83 status=ok
// SIG undefined output_info(void)

void hb_buffer_t::output_info(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  
  cVar5 = make_room_for(param_1,0,1);
  if (cVar5 != '\0') {
    uVar2 = *(uint *)(param_1 + 0xbc);
    uVar4 = param_2[1];
    lVar3 = *(longlong *)(param_1 + 0xd0);
    puVar1 = (undefined8 *)(lVar3 + (ulonglong)uVar2 * 0x14);
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
    *(undefined4 *)(lVar3 + (ulonglong)uVar2 * 0x14 + 0x10) = *(undefined4 *)(param_2 + 2);
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  }
  return;
}



// FUNCTION 143c787f0 remove_output body=39 status=ok
// SIG undefined remove_output(void)

void hb_buffer_t::remove_output(int *param_1)

{
  if (*param_1 != -1) {
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x32);
    *(undefined2 *)((longlong)param_1 + 0xb1) = 0;
    param_1[0x2f] = 0;
  }
  return;
}



// FUNCTION 143c78820 replace_glyph body=161 status=ok
// SIG undefined replace_glyph(void)

void hb_buffer_t::replace_glyph(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  
  if ((*(longlong *)(param_1 + 0xd0) != *(longlong *)(param_1 + 200)) ||
     (*(int *)(param_1 + 0xbc) != *(int *)(param_1 + 0xb4))) {
    cVar8 = make_room_for(param_1,1,1);
    if (cVar8 == '\0') {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0xb4);
    lVar5 = *(longlong *)(param_1 + 200);
    uVar4 = *(uint *)(param_1 + 0xbc);
    puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar3 * 0x14);
    uVar7 = puVar1[1];
    lVar6 = *(longlong *)(param_1 + 0xd0);
    puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar4 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(undefined4 *)(lVar6 + (ulonglong)uVar4 * 0x14 + 0x10) =
         *(undefined4 *)(lVar5 + 0x10 + (ulonglong)uVar3 * 0x14);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)*(uint *)(param_1 + 0xbc) * 0x14) =
       param_2;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  return;
}



// FUNCTION 143c788d0 replace_glyphs body=187 status=ok
// SIG undefined replace_glyphs(void)

void hb_buffer_t::replace_glyphs(longlong param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_3;
  cVar5 = make_room_for();
  if (cVar5 != '\0') {
    if (1 < param_2) {
      merge_clusters_impl(param_1);
    }
    uVar1 = *(undefined4 *)
             (*(longlong *)(param_1 + 200) + 0x10 + (ulonglong)*(uint *)(param_1 + 0xb4) * 0x14);
    puVar6 = (undefined8 *)
             (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xb4) * 0x14);
    uVar3 = *puVar6;
    uVar4 = puVar6[1];
    puVar6 = (undefined8 *)
             (*(longlong *)(param_1 + 0xd0) + (ulonglong)*(uint *)(param_1 + 0xbc) * 0x14);
    if (param_3 != 0) {
      do {
        *puVar6 = uVar3;
        puVar6[1] = uVar4;
        *(undefined4 *)(puVar6 + 2) = uVar1;
        uVar2 = *param_4;
        param_4 = param_4 + 1;
        *(undefined4 *)puVar6 = uVar2;
        uVar7 = uVar7 - 1;
        puVar6 = (undefined8 *)((longlong)puVar6 + 0x14);
      } while (uVar7 != 0);
    }
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + param_2;
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + param_3;
  }
  return;
}



// FUNCTION 143c78990 reset body=68 status=ok
// SIG undefined reset(void)

void hb_buffer_t::reset(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != -1) {
    hb_unicode_funcs_destroy(*(undefined8 *)(param_1 + 0x1c));
    uVar1 = hb_unicode_funcs_get_default();
    *(undefined8 *)(param_1 + 0x1c) = uVar1;
    param_1[0x1e] = 0;
    param_1[0x20] = 0xfffd;
    clear(param_1);
    return;
  }
  return;
}



// FUNCTION 143c789e0 reverse body=20 status=ok
// SIG undefined reverse(void)

void hb_buffer_t::reverse(longlong param_1)

{
  if (*(int *)(param_1 + 0xb8) != 0) {
    reverse_range(param_1,0);
    return;
  }
  return;
}



// FUNCTION 143c78a00 reverse_range body=237 status=ok
// SIG undefined reverse_range(void)

void hb_buffer_t::reverse_range(longlong param_1,uint param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if (1 < param_3 - param_2) {
    uVar12 = param_3 - 1;
    uVar13 = (ulonglong)uVar12;
    uVar8 = uVar13;
    uVar9 = param_2;
    if (param_2 < uVar12) {
      do {
        uVar10 = (ulonglong)uVar9;
        lVar4 = *(longlong *)(param_1 + 200);
        uVar9 = uVar9 + 1;
        puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x14);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar3 = *(undefined4 *)(lVar4 + 0x10 + uVar10 * 0x14);
        puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x14);
        uVar11 = (int)uVar8 - 1;
        puVar2 = (undefined8 *)(lVar4 + uVar8 * 0x14);
        uVar7 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar7;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar4 + 0x10 + uVar8 * 0x14);
        lVar4 = *(longlong *)(param_1 + 200);
        puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x14);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        *(undefined4 *)(lVar4 + 0x10 + uVar8 * 0x14) = uVar3;
        uVar8 = (ulonglong)uVar11;
      } while (uVar9 < uVar11);
    }
    if ((*(char *)(param_1 + 0xb2) != '\0') && (param_2 < uVar12)) {
      do {
        lVar4 = *(longlong *)(param_1 + 0xd8);
        uVar8 = (ulonglong)param_2;
        param_2 = param_2 + 1;
        puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x14);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar3 = *(undefined4 *)(lVar4 + 0x10 + uVar8 * 0x14);
        puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x14);
        uVar12 = (int)uVar13 - 1;
        puVar2 = (undefined8 *)(lVar4 + uVar13 * 0x14);
        uVar7 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar7;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar4 + 0x10 + uVar13 * 0x14);
        lVar4 = *(longlong *)(param_1 + 0xd8);
        puVar1 = (undefined8 *)(lVar4 + uVar13 * 0x14);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        *(undefined4 *)(lVar4 + 0x10 + uVar13 * 0x14) = uVar3;
        uVar13 = (ulonglong)uVar12;
      } while (param_2 < uVar12);
    }
  }
  return;
}



// FUNCTION 143c78af0 set_masks body=178 status=ok
// SIG undefined set_masks(void)

void hb_buffer_t::set_masks(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    if ((param_4 == 0) && (param_5 == 0xffffffff)) {
      if (*(uint *)(param_1 + 0xb8) != 0) {
        lVar3 = 0;
        uVar4 = (ulonglong)*(uint *)(param_1 + 0xb8);
        do {
          lVar3 = lVar3 + 0x14;
          *(uint *)(*(longlong *)(param_1 + 200) + -0x10 + lVar3) =
               *(uint *)(*(longlong *)(param_1 + 200) + -0x10 + lVar3) & ~param_3 |
               param_2 & param_3;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        return;
      }
    }
    else if (*(uint *)(param_1 + 0xb8) != 0) {
      lVar3 = 0;
      uVar4 = (ulonglong)*(uint *)(param_1 + 0xb8);
      do {
        lVar2 = *(longlong *)(param_1 + 200);
        uVar1 = *(uint *)(lVar2 + 8 + lVar3);
        if ((param_4 <= uVar1) && (uVar1 < param_5)) {
          *(uint *)(lVar2 + 4 + lVar3) = *(uint *)(lVar2 + 4 + lVar3) & ~param_3 | param_2 & param_3
          ;
        }
        lVar3 = lVar3 + 0x14;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 143c78bb0 shift_forward body=133 status=ok
// SIG undefined shift_forward(void)

undefined1 hb_buffer_t::shift_forward(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0xb8) + param_2;
  if ((uVar2 != 0) && (*(uint *)(param_1 + 0xc0) <= uVar2)) {
    cVar1 = enlarge();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  uVar2 = *(uint *)(param_1 + 0xb4);
  memmove((void *)(*(longlong *)(param_1 + 200) + ((ulonglong)uVar2 + (ulonglong)param_2) * 0x14),
          (void *)(*(longlong *)(param_1 + 200) + (ulonglong)uVar2 * 0x14),
          (ulonglong)(*(int *)(param_1 + 0xb8) - uVar2) * 0x14);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + param_2;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + param_2;
  return 1;
}



// FUNCTION 143c78c40 sort body=347 status=ok
// SIG undefined sort(void)

void hb_buffer_t::sort(longlong param_1,uint param_2,uint param_3,code *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  uVar11 = (ulonglong)(param_2 + 1);
  if (param_2 + 1 < param_3) {
    lVar14 = uVar11 * 0x14;
    do {
      uVar12 = (uint)uVar11;
      if (param_2 < uVar12) {
        lVar2 = uVar11 * 0x14;
        do {
          uVar10 = (uint)uVar11;
          uVar13 = uVar10 - 1;
          uVar11 = (ulonglong)uVar13;
          iVar9 = (*param_4)(*(longlong *)(param_1 + 200) + uVar11 * 0x14,
                             *(longlong *)(param_1 + 200) + lVar2);
          if (iVar9 < 1) break;
          uVar10 = uVar13;
        } while (param_2 < uVar13);
        if (uVar12 != uVar10) {
          if (1 < (uVar12 - uVar10) + 1) {
            merge_clusters_impl(param_1,uVar10,uVar12 + 1);
          }
          lVar4 = *(longlong *)(param_1 + 200);
          puVar1 = (undefined4 *)(lVar14 + lVar4);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          uVar3 = *(undefined4 *)(lVar14 + 0x10 + lVar4);
          lVar2 = (ulonglong)uVar10 * 0x14;
          memmove((void *)(lVar4 + (ulonglong)(uVar10 + 1) * 0x14),(void *)(lVar2 + lVar4),
                  (ulonglong)(uVar12 - uVar10) * 0x14);
          lVar4 = *(longlong *)(param_1 + 200);
          puVar1 = (undefined4 *)(lVar4 + lVar2);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          puVar1[2] = uVar7;
          puVar1[3] = uVar8;
          *(undefined4 *)(lVar4 + 0x10 + lVar2) = uVar3;
        }
      }
      lVar14 = lVar14 + 0x14;
      uVar11 = (ulonglong)(uVar12 + 1);
    } while (uVar12 + 1 < param_3);
  }
  return;
}



// FUNCTION 143c78da0 swap_buffers body=98 status=ok
// SIG undefined swap_buffers(void)

void hb_buffer_t::swap_buffers(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    *(undefined1 *)(param_1 + 0xb1) = 0;
    lVar2 = *(longlong *)(param_1 + 200);
    if (*(longlong *)(param_1 + 0xd0) != lVar2) {
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xd0);
      *(longlong *)(param_1 + 0xd0) = lVar2;
      *(longlong *)(param_1 + 0xd8) = lVar2;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0xbc) = uVar1;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
}



// FUNCTION 143c78e10 hb_buffer_add_utf<hb_utf16_t> body=5 status=ok
// SIG undefined hb_buffer_add_utf<hb_utf16_t>(void)

void hb_buffer_add_utf<hb_utf16_t>(int *param_1,short *param_2,int param_3,uint param_4,int param_5)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  short *psVar5;
  ushort *puVar6;
  uint uVar7;
  short *psVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  uVar4 = param_1[0x20];
  if (*param_1 != -1) {
    if (param_3 == -1) {
      param_3 = 0;
      sVar1 = *param_2;
      psVar5 = param_2;
      while (sVar1 != 0) {
        psVar5 = psVar5 + 1;
        param_3 = param_3 + 1;
        sVar1 = *psVar5;
      }
    }
    if (param_5 == -1) {
      param_5 = param_3 - param_4;
    }
    uVar7 = (int)(((longlong)param_5 & 0x7fffffffffffffffU) >> 1) + param_1[0x2e];
    if ((uVar7 != 0) && ((uint)param_1[0x30] <= uVar7)) {
      hb_buffer_t::enlarge(param_1,uVar7);
    }
    if ((param_1[0x2e] == 0) && (param_4 != 0)) {
      param_1[0x43] = 0;
      psVar5 = param_2 + param_4;
      while ((param_2 < psVar5 && ((uint)param_1[0x43] < 5))) {
        uVar2 = psVar5[-1];
        psVar8 = psVar5 + -1;
        uVar7 = (uint)uVar2;
        if ((uVar2 - 0xd800 < 0x800) &&
           (((uVar7 = uVar4, 0xdbff < uVar2 && (param_2 < psVar8)) &&
            ((ushort)psVar5[-2] - 0xd800 < 0x400)))) {
          psVar8 = psVar5 + -2;
          uVar7 = uVar2 + 0xfca02400 + (uint)(ushort)psVar5[-2] * 0x400;
        }
        param_1[(ulonglong)(uint)param_1[0x43] + 0x39] = uVar7;
        param_1[0x43] = param_1[0x43] + 1;
        psVar5 = psVar8;
      }
    }
    puVar10 = (ushort *)(param_2 + param_4);
    puVar6 = puVar10;
    while (puVar6 < puVar10 + param_5) {
      uVar2 = *puVar6;
      puVar9 = puVar6 + 1;
      uVar7 = (uint)uVar2;
      if (((uVar2 - 0xd800 < 0x800) && (uVar7 = uVar4, uVar2 < 0xdc00)) &&
         ((puVar9 < puVar10 + param_5 && (uVar3 = *puVar9, uVar3 - 0xdc00 < 0x400)))) {
        puVar9 = puVar6 + 2;
        uVar7 = (uint)uVar2 * 0x400 + -0x35fdc00 + (uint)uVar3;
      }
      hb_buffer_t::add(param_1,uVar7,(longlong)puVar6 - (longlong)param_2 >> 1 & 0xffffffff);
      puVar6 = puVar9;
    }
    param_1[0x44] = 0;
    while ((puVar6 < param_2 + param_3 && ((uint)param_1[0x44] < 5))) {
      uVar2 = *puVar6;
      puVar10 = puVar6 + 1;
      uVar7 = (uint)uVar2;
      if ((uVar2 - 0xd800 < 0x800) &&
         (((uVar7 = uVar4, uVar2 < 0xdc00 && (puVar10 < param_2 + param_3)) &&
          (uVar3 = *puVar10, uVar3 - 0xdc00 < 0x400)))) {
        puVar10 = puVar6 + 2;
        uVar7 = (uint)uVar2 * 0x400 + -0x35fdc00 + (uint)uVar3;
      }
      param_1[(ulonglong)(uint)param_1[0x44] + 0x3e] = uVar7;
      param_1[0x44] = param_1[0x44] + 1;
      puVar6 = puVar10;
    }
    param_1[0x23] = 1;
  }
  return;
}



// FUNCTION 143c78e20 clear body=5 status=ok
// SIG undefined clear(void)

void hb_buffer_t::clear(int *param_1)

{
  if (*param_1 != -1) {
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x32);
    param_1[0x21] = 0;
    param_1[0x23] = 0;
    *(undefined2 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x38] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
  }
  return;
}



// FUNCTION 143c78e30 hb_buffer_create body=126 status=ok
// SIG undefined hb_buffer_create(void)

undefined4 * hb_buffer_create(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)HarfBuzzCalloc(1,0x130);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x1a) = 0;
    puVar1[0x22] = 0x3fffffff;
    hb_buffer_t::reset(puVar1);
    return puVar1;
  }
  puVar1 = (undefined4 *)hb_buffer_get_empty();
  return puVar1;
}



// FUNCTION 143c78eb0 hb_buffer_destroy body=141 status=ok
// SIG undefined hb_buffer_destroy(void)

void hb_buffer_destroy(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *param_1 = -0xdead;
      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::finish
                (param_1 + 0xc,param_1 + 2);
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      hb_unicode_funcs_destroy(*(undefined8 *)(param_1 + 0x1c));
      FMemory::operator_delete(*(undefined8 *)(param_1 + 0x32));
      FMemory::operator_delete(*(undefined8 *)(param_1 + 0x36));
      if (*(code **)(param_1 + 0x4a) != (code *)0x0) {
        (**(code **)(param_1 + 0x4a))(*(undefined8 *)(param_1 + 0x48));
      }
      FMemory::operator_delete(param_1);
    }
  }
  return;
}



// FUNCTION 143c78f40 hb_buffer_get_empty body=8 status=ok
// SIG undefined hb_buffer_get_empty(void)

undefined * hb_buffer_get_empty(void)

{
  return &DAT_145d39a50;
}



// FUNCTION 143c78f50 hb_buffer_get_glyph_infos body=21 status=ok
// SIG undefined hb_buffer_get_glyph_infos(void)

undefined8 hb_buffer_get_glyph_infos(longlong param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xb8);
  }
  return *(undefined8 *)(param_1 + 200);
}



// FUNCTION 143c78f70 hb_buffer_get_glyph_positions body=61 status=ok
// SIG undefined hb_buffer_get_glyph_positions(void)

undefined8 hb_buffer_get_glyph_positions(longlong param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0xb2) == '\0') {
    hb_buffer_t::clear_positions();
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xb8);
  }
  return *(undefined8 *)(param_1 + 0xd8);
}



// FUNCTION 143c78fb0 hb_buffer_reverse body=5 status=ok
// SIG undefined hb_buffer_reverse(void)

void hb_buffer_t::hb_buffer_reverse(longlong param_1)

{
  if (*(int *)(param_1 + 0xb8) != 0) {
    reverse_range(param_1,0);
    return;
  }
  return;
}



// FUNCTION 143c78fc0 hb_buffer_set_cluster_level body=9 status=ok
// SIG undefined hb_buffer_set_cluster_level(void)

void hb_buffer_set_cluster_level(int *param_1,int param_2)

{
  if (*param_1 != -1) {
    param_1[0x1f] = param_2;
  }
  return;
}



// FUNCTION 143c78fd0 hb_buffer_set_direction body=12 status=ok
// SIG undefined hb_buffer_set_direction(void)

void hb_buffer_set_direction(int *param_1,int param_2)

{
  if (*param_1 != -1) {
    param_1[0x24] = param_2;
  }
  return;
}



// FUNCTION 143c78fe0 hb_buffer_set_script body=12 status=ok
// SIG undefined hb_buffer_set_script(void)

void hb_buffer_set_script(int *param_1,int param_2)

{
  if (*param_1 != -1) {
    param_1[0x25] = param_2;
  }
  return;
}



// FUNCTION 143c78ff0 hb_segment_properties_equal body=53 status=ok
// SIG undefined hb_segment_properties_equal(void)

undefined8 hb_segment_properties_equal(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
      (*(longlong *)(param_1 + 2) == *(longlong *)(param_2 + 2))) &&
     ((*(longlong *)(param_1 + 4) == *(longlong *)(param_2 + 4) &&
      (*(longlong *)(param_1 + 6) == *(longlong *)(param_2 + 6))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143c79030 hb_shape body=23 status=ok
// SIG undefined hb_shape(void)

void hb_shape(void)

{
  hb_shape_full();
  return;
}



// FUNCTION 143c79050 hb_shape_full body=145 status=ok
// SIG undefined hb_shape_full(void)

int hb_shape_full(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = hb_shape_plan_create_cached
                    (*(undefined8 *)(param_1 + 0x80),param_2 + 0x90,param_3,param_4,param_5);
  iVar1 = hb_shape_plan_execute(uVar2,param_1,param_2,param_3,param_4 & 0xffffffff);
  hb_shape_plan_destroy(uVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x8c) = 2;
  }
  return iVar1;
}



// FUNCTION 143c790f0 _hb_ft_font_create body=69 status=ok
// SIG undefined _hb_ft_font_create(void)

void _hb_ft_font_create(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)HarfBuzzCalloc(1);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *(undefined1 *)((longlong)puVar1 + 0xc) = param_2;
  *puVar1 = param_1;
  *(undefined4 *)(puVar1 + 1) = 2;
  return;
}



// FUNCTION 143c79140 _hb_ft_font_destroy body=36 status=ok
// SIG undefined _hb_ft_font_destroy(void)

void _hb_ft_font_destroy(undefined8 *param_1)

{
  if (*(char *)((longlong)param_1 + 0xc) != '\0') {
    FUN_143c20100(*param_1);
  }
  FMemory::operator_delete(param_1);
  return;
}



// FUNCTION 143c79170 _hb_ft_font_set_funcs body=393 status=ok
// SIG undefined _hb_ft_font_set_funcs(void)

void _hb_ft_font_set_funcs(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  LOCK();
  UNLOCK();
  lVar2 = DAT_146bc8678;
  while (DAT_146bc8678 = lVar2, lVar2 == 0) {
    lVar2 = hb_font_funcs_create();
    hb_font_funcs_set_font_h_extents_func(lVar2,&LAB_143c79300,0,0);
    hb_font_funcs_set_nominal_glyph_func(lVar2,hb_ft_get_nominal_glyph);
    hb_font_funcs_set_variation_glyph_func(lVar2,hb_ft_get_variation_glyph);
    hb_font_funcs_set_glyph_h_advance_func(lVar2,hb_ft_get_glyph_h_advance);
    hb_font_funcs_set_glyph_v_advance_func(lVar2,hb_ft_get_glyph_v_advance);
    hb_font_funcs_set_glyph_v_origin_func(lVar2,hb_ft_get_glyph_v_origin);
    hb_font_funcs_set_glyph_h_kerning_func(lVar2,hb_ft_get_glyph_h_kerning);
    hb_font_funcs_set_glyph_extents_func(lVar2,hb_ft_get_glyph_extents);
    hb_font_funcs_set_glyph_contour_point_func(lVar2,hb_ft_get_glyph_contour_point);
    hb_font_funcs_set_glyph_name_func(lVar2,hb_ft_get_glyph_name);
    hb_font_funcs_set_glyph_from_name_func(lVar2,hb_ft_get_glyph_from_name);
    hb_font_funcs_make_immutable(lVar2);
    LOCK();
    bVar4 = DAT_146bc8678 == 0;
    lVar1 = lVar2;
    if (!bVar4) {
      lVar1 = DAT_146bc8678;
    }
    DAT_146bc8678 = lVar1;
    UNLOCK();
    if (bVar4) break;
    hb_font_funcs_destroy(lVar2);
    LOCK();
    UNLOCK();
    lVar2 = DAT_146bc8678;
  }
  uVar3 = _hb_ft_font_create(param_2,param_3);
  hb_font_set_funcs(param_1,lVar2,uVar3,_hb_ft_font_destroy);
  return;
}



// FUNCTION 143c79360 hb_ft_get_glyph_contour_point body=137 status=ok
// SIG undefined hb_ft_get_glyph_contour_point(void)

undefined8
hb_ft_get_glyph_contour_point
          (undefined8 param_1,longlong *param_2,undefined4 param_3,uint param_4,undefined4 *param_5,
          undefined4 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_2;
  iVar3 = FUN_143c216b0(lVar1,param_3,(int)param_2[1]);
  if (((iVar3 == 0) && (lVar2 = *(longlong *)(lVar1 + 0x78), *(int *)(lVar2 + 0x60) == 0x6f75746c))
     && (param_4 < (uint)(int)*(short *)(lVar2 + 0x9a))) {
    *param_5 = *(undefined4 *)((ulonglong)param_4 * 8 + *(longlong *)(lVar2 + 0xa0));
    *param_6 = *(undefined4 *)
                (*(longlong *)(*(longlong *)(lVar1 + 0x78) + 0xa0) + 4 + (ulonglong)param_4 * 8);
    return 1;
  }
  return 0;
}



// FUNCTION 143c793f0 hb_ft_get_glyph_extents body=171 status=ok
// SIG undefined hb_ft_get_glyph_extents(void)

undefined8
hb_ft_get_glyph_extents(longlong param_1,longlong *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *param_2;
  iVar4 = FUN_143c216b0(lVar3,param_3,(int)param_2[1]);
  if (iVar4 != 0) {
    return 0;
  }
  iVar4 = *(int *)(*(longlong *)(lVar3 + 0x78) + 0x38);
  *param_4 = iVar4;
  param_4[1] = *(int *)(*(longlong *)(lVar3 + 0x78) + 0x3c);
  iVar1 = *(int *)(*(longlong *)(lVar3 + 0x78) + 0x30);
  param_4[2] = iVar1;
  iVar2 = *(int *)(*(longlong *)(lVar3 + 0x78) + 0x34);
  param_4[3] = -iVar2;
  if (*(int *)(param_1 + 0x88) < 0) {
    *param_4 = -iVar4;
    param_4[2] = -iVar1;
  }
  if (*(int *)(param_1 + 0x8c) < 0) {
    param_4[1] = -param_4[1];
    param_4[3] = iVar2;
  }
  return 1;
}



// FUNCTION 143c794a0 hb_ft_get_glyph_from_name body=263 status=ok
// SIG undefined hb_ft_get_glyph_from_name(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool hb_ft_get_glyph_from_name
               (undefined8 param_1,undefined8 *param_2,byte *param_3,int param_4,int *param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong _Count;
  bool bVar6;
  undefined1 auStack_d8 [32];
  byte local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar2 = *param_2;
  pbVar4 = param_3;
  if (-1 < param_4) {
    if (0x7e < param_4) {
      param_4 = 0x7f;
    }
    _Count = (ulonglong)param_4;
    strncpy((char *)local_b8,(char *)param_3,_Count);
    if (0x7f < _Count) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_b8[_Count] = 0;
    pbVar4 = local_b8;
  }
  iVar3 = FUN_143c20b80(uVar2,pbVar4);
  *param_5 = iVar3;
  bVar6 = false;
  if (iVar3 == 0) {
    iVar3 = FUN_143c208d0(uVar2,0,local_b8,0x80);
    if ((iVar3 == 0) && (param_4 < 0)) {
      pbVar4 = local_b8;
      lVar5 = (longlong)param_3 - (longlong)pbVar4;
      do {
        pbVar1 = pbVar4 + lVar5;
        iVar3 = (uint)*pbVar4 - (uint)*pbVar1;
        if (iVar3 != 0) break;
        pbVar4 = pbVar4 + 1;
      } while (*pbVar1 != 0);
    }
    else {
      iVar3 = strncmp((char *)local_b8,(char *)param_3,(longlong)param_4);
    }
    if (iVar3 == 0) {
      return true;
    }
    bVar6 = *param_5 == 0;
  }
  return !bVar6;
}



// FUNCTION 143c795b0 hb_ft_get_glyph_h_advance body=75 status=ok
// SIG undefined hb_ft_get_glyph_h_advance(void)

int hb_ft_get_glyph_h_advance(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  int local_res10 [6];
  
  iVar1 = FUN_143c20630(*param_2,param_3,*(undefined4 *)(param_2 + 1),local_res10);
  if (iVar1 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x88) < 0) {
    local_res10[0] = -local_res10[0];
  }
  return local_res10[0] + 0x200 >> 10;
}



// FUNCTION 143c79600 hb_ft_get_glyph_h_kerning body=71 status=ok
// SIG undefined hb_ft_get_glyph_h_kerning(void)

undefined4
hb_ft_get_glyph_h_kerning
          (longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_res8 [8];
  
  iVar1 = FUN_143c209b0(*param_2,param_3,param_4,*(int *)(param_1 + 0x90) == 0,local_res8);
  if (iVar1 != 0) {
    local_res8[0] = 0;
  }
  return local_res8[0];
}



// FUNCTION 143c79650 hb_ft_get_glyph_name body=62 status=ok
// SIG undefined hb_ft_get_glyph_name(void)

bool hb_ft_get_glyph_name
               (undefined8 param_1,undefined8 *param_2,undefined4 param_3,char *param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_143c208d0(*param_2,param_3,param_4,param_5);
  bVar2 = iVar1 == 0;
  if (((bVar2) && (param_5 != 0)) && (*param_4 == '\0')) {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 143c79690 hb_ft_get_glyph_v_advance body=81 status=ok
// SIG undefined hb_ft_get_glyph_v_advance(void)

int hb_ft_get_glyph_v_advance(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  int local_res10 [6];
  
  iVar1 = FUN_143c20630(*param_2,param_3,*(uint *)(param_2 + 1) | 0x10,local_res10);
  if (iVar1 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x8c) < 0) {
    local_res10[0] = -local_res10[0];
  }
  return 0x200 - local_res10[0] >> 10;
}



// FUNCTION 143c796f0 hb_ft_get_glyph_v_origin body=143 status=ok
// SIG undefined hb_ft_get_glyph_v_origin(void)

undefined8
hb_ft_get_glyph_v_origin
          (longlong param_1,longlong *param_2,undefined4 param_3,int *param_4,int *param_5)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  iVar2 = FUN_143c216b0(lVar1,param_3,(int)param_2[1]);
  if (iVar2 != 0) {
    return 0;
  }
  *param_4 = *(int *)(*(longlong *)(lVar1 + 0x78) + 0x38) -
             *(int *)(*(longlong *)(lVar1 + 0x78) + 0x44);
  *param_5 = *(int *)(*(longlong *)(lVar1 + 0x78) + 0x48) +
             *(int *)(*(longlong *)(lVar1 + 0x78) + 0x3c);
  if (*(int *)(param_1 + 0x88) < 0) {
    *param_4 = -*param_4;
  }
  if (*(int *)(param_1 + 0x8c) < 0) {
    *param_5 = -*param_5;
  }
  return 1;
}



// FUNCTION 143c79780 hb_ft_get_nominal_glyph body=43 status=ok
// SIG undefined hb_ft_get_nominal_glyph(void)

undefined8
hb_ft_get_nominal_glyph(undefined8 param_1,undefined8 *param_2,undefined4 param_3,int *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FT_Get_Char_Index(*param_2,param_3);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_4 = (int)uVar1;
  return 1;
}



// FUNCTION 143c797b0 hb_ft_get_variation_glyph body=48 status=ok
// SIG undefined hb_ft_get_variation_glyph(void)

undefined8
hb_ft_get_variation_glyph
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,int *param_5
          )

{
  undefined8 uVar1;
  
  uVar1 = FUN_143c205b0(*param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_5 = (int)uVar1;
  return 1;
}



// FUNCTION 143c797e0 reference_table body=183 status=ok
// SIG undefined reference_table(void)

undefined8 reference_table(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  iVar1 = FUN_143c21a80(param_3,param_2,0,0,local_res18);
  if (iVar1 != 0) {
    return 0;
  }
  lVar2 = operator_new(local_res18[0]);
  if (lVar2 != 0) {
    iVar1 = FUN_143c21a80(param_3,param_2 & 0xffffffff,0,lVar2,local_res18);
    if (iVar1 == 0) {
      uVar3 = hb_blob_create(lVar2,local_res18[0],2,lVar2,FMemory::operator_delete);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143c798a0 hb_ft_face_create body=147 status=ok
// SIG undefined hb_ft_face_create(void)

undefined8 hb_ft_face_create(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar1[4] == 0) {
    uVar2 = hb_blob_create(*puVar1,*(undefined4 *)(puVar1 + 1),1,param_1,param_2);
    uVar3 = hb_face_create(uVar2,*(undefined4 *)(param_1 + 4));
    hb_blob_destroy(uVar2);
  }
  else {
    uVar3 = hb_face_create_for_tables(reference_table,param_1,param_2);
  }
  hb_face_set_index(uVar3,*(undefined4 *)(param_1 + 4));
  hb_face_set_upem(uVar3,*(undefined2 *)(param_1 + 0x68));
  return uVar3;
}



// FUNCTION 143c79940 hb_ft_font_create body=135 status=ok
// SIG undefined hb_ft_font_create(void)

undefined8 hb_ft_font_create(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = hb_ft_face_create();
  uVar2 = hb_font_create(uVar1);
  hb_face_destroy(uVar1);
  _hb_ft_font_set_funcs(uVar2,param_1,0);
  hb_font_set_scale(uVar2,(ulonglong)*(ushort *)(param_1 + 0x68) *
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c) + 0x8000 >> 0x10,
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20) *
                    (ulonglong)*(ushort *)(param_1 + 0x68) + 0x8000 >> 0x10);
  return uVar2;
}



// FUNCTION 143c799d0 hb_ft_font_get_face body=30 status=ok
// SIG undefined hb_ft_font_get_face(void)

undefined8 hb_ft_font_get_face(longlong param_1)

{
  if (*(code **)(param_1 + 0xa8) != _hb_ft_font_destroy) {
    return 0;
  }
  return **(undefined8 **)(param_1 + 0xa0);
}



// FUNCTION 143c799f0 hb_ft_font_get_load_flags body=30 status=ok
// SIG undefined hb_ft_font_get_load_flags(void)

undefined4 hb_ft_font_get_load_flags(longlong param_1)

{
  if (*(code **)(param_1 + 0xa8) != _hb_ft_font_destroy) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8);
}



// FUNCTION 143c79a10 hb_ft_font_set_load_flags body=33 status=ok
// SIG undefined hb_ft_font_set_load_flags(void)

void hb_ft_font_set_load_flags(longlong param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x70) == 0) && (*(code **)(param_1 + 0xa8) == _hb_ft_font_destroy)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8) = param_2;
  }
  return;
}



// FUNCTION 143c79a40 remove<hb_user_data_key_t_*___ptr64> body=194 status=ok
// SIG undefined remove<hb_user_data_key_t_*___ptr64>(void)

void hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::
     remove<hb_user_data_key_t_*___ptr64>(uint *param_1,longlong param_2,LPCRITICAL_SECTION param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  EnterCriticalSection(param_3);
  uVar3 = *param_1;
  uVar10 = 0;
  if (uVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 2);
    do {
      if (*(longlong *)(lVar4 + uVar10 * 0x18) == param_2) {
        puVar1 = (undefined4 *)(lVar4 + uVar10 * 0x18);
        if (puVar1 != (undefined4 *)0x0) {
          uVar8 = *(undefined8 *)(puVar1 + 2);
          UNRECOVERED_JUMPTABLE = *(code **)(puVar1 + 4);
          puVar2 = (undefined4 *)(lVar4 + (ulonglong)(uVar3 - 1) * 0x18);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          *(undefined8 *)(puVar1 + 4) =
               *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar3 - 1) * 0x18);
          *param_1 = *param_1 - 1;
          LeaveCriticalSection(param_3);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000143c79aff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(uVar8);
          return;
        }
        break;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < uVar3);
  }
  LeaveCriticalSection(param_3);
  return;
}



// FUNCTION 143c79b10 replace_or_insert<hb_user_data_array_t::hb_user_data_item_t> body=276 status=ok
// SIG undefined replace_or_insert<hb_user_data_array_t::hb_user_data_item_t>(void)

undefined4 *
hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::
replace_or_insert<hb_user_data_array_t::hb_user_data_item_t>
          (uint *param_1,longlong *param_2,LPCRITICAL_SECTION param_3,char param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  
  EnterCriticalSection(param_3);
  uVar8 = 0;
  if (*param_1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 2) + uVar8 * 0x18) == *param_2) {
        puVar6 = (undefined4 *)(*(longlong *)(param_1 + 2) + uVar8 * 0x18);
        if (puVar6 != (undefined4 *)0x0) {
          if (param_4 == '\0') {
            LeaveCriticalSection(param_3);
            return (undefined4 *)0x0;
          }
          uVar4 = *(undefined8 *)(puVar6 + 2);
          pcVar1 = *(code **)(puVar6 + 4);
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar5 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *puVar6 = (int)*param_2;
          puVar6[1] = uVar2;
          puVar6[2] = (int)lVar5;
          puVar6[3] = uVar3;
          *(longlong *)(puVar6 + 4) = param_2[2];
          LeaveCriticalSection(param_3);
          if (pcVar1 == (code *)0x0) {
            return puVar6;
          }
          (*pcVar1)(uVar4);
          return puVar6;
        }
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *param_1);
  }
  puVar6 = (undefined4 *)
           hb_prealloced_array_t<hb_user_data_array_t::hb_user_data_item_t,2>::push(param_1);
  if (puVar6 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar5 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    *puVar6 = (int)*param_2;
    puVar6[1] = uVar2;
    puVar6[2] = (int)lVar5;
    puVar6[3] = uVar3;
    *(longlong *)(puVar6 + 4) = param_2[2];
  }
  LeaveCriticalSection(param_3);
  return puVar6;
}



// FUNCTION 143c79c30 _hb_options_init body=87 status=ok
// SIG undefined _hb_options_init(void)

void _hb_options_init(void)

{
  char *pcVar1;
  
  pcVar1 = getenv("HB_OPTIONS");
  if (pcVar1 != (char *)0x0) {
    pcVar1 = strstr(pcVar1,"uniscribe-bug-compatible");
    if (pcVar1 != (char *)0x0) {
      DAT_146bc8688 = 3;
      return;
    }
  }
  DAT_146bc8688 = 1;
  return;
}


