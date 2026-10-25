// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c4ca50 FUN_143c4ca50 body=203 status=ok
// SIG undefined FUN_143c4ca50(void)

ulonglong FUN_143c4ca50(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  int iVar7;
  
  pcVar3 = (char *)*param_1;
  if (*pcVar3 == '\x1e') {
    uVar5 = FUN_143c4cc40(pcVar3,param_1[1],0,param_2);
    return uVar5;
  }
  iVar4 = FUN_143c4cb90(pcVar3,param_1[1]);
  if (iVar4 < 0x8000) {
    *param_2 = 0;
    return (ulonglong)(uint)(iVar4 << 0x10);
  }
  piVar6 = &DAT_145d24c6c;
  iVar7 = 5;
  do {
    if (iVar4 < *piVar6) break;
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 1;
  } while ((longlong)piVar6 < 0x145d24c80);
  iVar1 = *(int *)(&DAT_145d24c44 + (longlong)iVar7 * 4);
  if (0x7fff < iVar4 / iVar1) {
    uVar2 = *(undefined4 *)((longlong)&PTR_FUN_145d24c48 + (longlong)iVar7 * 4);
    *param_2 = iVar7 + -4;
    uVar5 = FUN_143c20070(iVar4,uVar2);
    return uVar5;
  }
  *param_2 = iVar7 + -5;
  uVar5 = FUN_143c20070(iVar4,iVar1);
  return uVar5;
}



// FUNCTION 143c4cb20 FUN_143c4cb20 body=107 status=ok
// SIG undefined FUN_143c4cb20(void)

ulonglong FUN_143c4cb20(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  pcVar1 = (char *)*param_1;
  lVar4 = (longlong)param_2;
  if (*pcVar1 == '\x1e') {
    uVar3 = FUN_143c4cc40(pcVar1,param_1[1],param_2,0);
    return uVar3;
  }
  iVar2 = FUN_143c4cb90(pcVar1,param_1[1]);
  if ((int)lVar4 != 0) {
    iVar2 = iVar2 * *(int *)(&DAT_145d24c58 + lVar4 * 4);
  }
  if (0x7fff < iVar2) {
    return 0x7fffffff;
  }
  if (iVar2 < -0x7fff) {
    return 0x80000001;
  }
  return (ulonglong)(uint)(iVar2 << 0x10);
}



// FUNCTION 143c4cb90 FUN_143c4cb90 body=166 status=ok
// SIG undefined FUN_143c4cb90(void)

uint FUN_143c4cb90(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 == 0x1c) {
    if (param_1 + 3 <= param_2) {
      return (int)(short)((ushort)param_1[1] << 8) | (uint)param_1[2];
    }
  }
  else if (bVar1 == 0x1d) {
    if (param_1 + 5 <= param_2) {
      return CONCAT31(CONCAT21(CONCAT11(param_1[1],param_1[2]),param_1[3]),param_1[4]);
    }
  }
  else {
    if (bVar1 < 0xf7) {
      return bVar1 - 0x8b;
    }
    if (bVar1 < 0xfb) {
      if (param_1 + 2 <= param_2) {
        return (param_1[1] - 0xf694) + (uint)bVar1 * 0x100;
      }
    }
    else if (param_1 + 2 <= param_2) {
      return ((uint)bVar1 * -0x100 + 0xfa94) - (uint)param_1[1];
    }
  }
  return 0;
}



// FUNCTION 143c4cc40 FUN_143c4cc40 body=845 status=ok
// SIG undefined FUN_143c4cc40(void)

int FUN_143c4cc40(byte *param_1,byte *param_2,int param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  
  iVar11 = 0;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  bVar1 = false;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  uVar12 = 0;
  iVar8 = 0;
  iVar15 = 0;
  iVar9 = 0;
  iVar10 = 0;
  iVar6 = 4;
  while( true ) {
    while( true ) {
      if ((iVar6 != 0) && (param_1 = param_1 + 1, iVar14 = 0, param_2 <= param_1))
      goto LAB_143c4cdbe;
      bVar13 = *param_1 >> ((byte)iVar6 & 0x1f);
      iVar6 = 4 - iVar6;
      uVar7 = bVar13 & 0xf;
      if (uVar7 != 0xe) break;
      bVar2 = true;
    }
    if (9 < uVar7) break;
    iVar14 = (int)uVar12;
    if (iVar14 < 0xccccccc) {
      if (((bVar13 & 0xf) != 0) || (iVar14 != 0)) {
        iVar9 = iVar9 + 1;
        uVar12 = (ulonglong)(uVar7 + iVar14 * 10);
      }
    }
    else {
      iVar15 = iVar15 + 1;
    }
  }
  iVar14 = iVar11;
  if (uVar7 == 10) {
    while( true ) {
      if ((iVar6 != 0) && (param_1 = param_1 + 1, param_2 <= param_1)) goto LAB_143c4cdbe;
      bVar13 = *param_1 >> ((byte)iVar6 & 0x1f);
      iVar6 = 4 - iVar6;
      uVar7 = bVar13 & 0xf;
      if (9 < uVar7) break;
      iVar11 = (int)uVar12;
      if (((bVar13 & 0xf) == 0) && (iVar11 == 0)) {
        iVar15 = iVar15 + -1;
      }
      else if ((iVar11 < 0xccccccc) && (iVar10 < 9)) {
        iVar10 = iVar10 + 1;
        uVar12 = (ulonglong)(uVar7 + iVar11 * 10);
      }
    }
  }
  iVar11 = (int)uVar12;
  if (uVar7 == 0xc) {
    bVar3 = true;
    bVar5 = false;
LAB_143c4cd60:
    while( true ) {
      bVar1 = bVar5;
      if ((iVar6 != 0) && (param_1 = param_1 + 1, param_2 <= param_1)) goto LAB_143c4cdbe;
      bVar13 = (byte)iVar6;
      iVar6 = 4 - iVar6;
      uVar7 = *param_1 >> (bVar13 & 0x1f) & 0xf;
      if (9 < uVar7) break;
      if (iVar8 < 0x3e9) {
        iVar8 = uVar7 + iVar8 * 10;
        bVar5 = bVar1;
      }
      else {
        bVar5 = true;
      }
    }
    bVar4 = bVar3;
    if (bVar3) {
      iVar8 = -iVar8;
    }
  }
  else {
    bVar5 = false;
    if (uVar7 == 0xb) goto LAB_143c4cd60;
  }
  if (iVar11 == 0) goto LAB_143c4cdbe;
  if (bVar1) {
    if (bVar4) goto LAB_143c4cdbe;
  }
  else {
    iVar8 = iVar8 + param_3 + iVar15;
    if (param_4 != (int *)0x0) {
      iVar10 = iVar10 + iVar9;
      iVar8 = iVar8 + iVar9;
      if (5 < iVar10) {
        if (iVar11 / *(int *)(&DAT_145d24c44 + (longlong)iVar10 * 4) < 0x8000) {
          iVar14 = FUN_143c20070(uVar12,*(int *)(&DAT_145d24c44 + (longlong)iVar10 * 4));
          *param_4 = iVar8 + -5;
        }
        else {
          iVar14 = FUN_143c20070(uVar12,*(undefined4 *)
                                         ((longlong)&PTR_FUN_145d24c48 + (longlong)iVar10 * 4));
          *param_4 = iVar8 + -4;
        }
        goto LAB_143c4cdbe;
      }
      if (0x7fff < iVar11) {
        iVar14 = FUN_143c20070(uVar12,10);
        *param_4 = (iVar8 - iVar10) + 1;
        goto LAB_143c4cdbe;
      }
      if (iVar8 < 1) {
LAB_143c4ce7b:
        iVar8 = iVar8 - iVar10;
      }
      else {
        iVar6 = 5;
        if (iVar8 < 5) {
          iVar6 = iVar8;
        }
        if (iVar6 - iVar10 < 1) goto LAB_143c4ce7b;
        iVar8 = iVar8 - iVar6;
        iVar11 = iVar11 * *(int *)(&DAT_145d24c58 + (longlong)(iVar6 - iVar10) * 4);
        if (0x7fff < iVar11) {
          *param_4 = iVar8 + 1;
          iVar14 = (iVar11 / 10) * 0x10000;
          goto LAB_143c4cdbe;
        }
      }
      *param_4 = iVar8;
      iVar14 = iVar11 << 0x10;
      goto LAB_143c4cdbe;
    }
    iVar9 = iVar9 + iVar8;
    iVar10 = iVar10 - iVar8;
    if (iVar9 < 6) {
      if (iVar9 < -5) goto LAB_143c4cdbe;
      if (iVar9 < 0) {
        iVar10 = iVar10 + iVar9;
        uVar12 = (longlong)iVar11 / (longlong)*(int *)(&DAT_145d24c58 + (longlong)iVar9 * -4) &
                 0xffffffff;
      }
      if (iVar10 == 10) {
        iVar10 = 9;
        uVar12 = (ulonglong)(uint)((int)uVar12 / 10);
      }
      else if (iVar10 < 1) {
        iVar14 = (int)uVar12 * *(int *)(&DAT_145d24c58 + (longlong)iVar10 * -4);
        if (iVar14 < 0x8000) {
          iVar14 = iVar14 * 0x10000;
          goto LAB_143c4cdbe;
        }
        goto LAB_143c4cdb8;
      }
      if ((int)uVar12 / *(int *)(&DAT_145d24c58 + (longlong)iVar10 * 4) < 0x8000) {
        iVar14 = FUN_143c20070(uVar12,*(int *)(&DAT_145d24c58 + (longlong)iVar10 * 4));
      }
      goto LAB_143c4cdbe;
    }
  }
LAB_143c4cdb8:
  iVar14 = 0x7fffffff;
LAB_143c4cdbe:
  if (bVar2) {
    iVar14 = -iVar14;
  }
  return iVar14;
}



// FUNCTION 143c4cf90 FUN_143c4cf90 body=834 status=ok
// SIG undefined FUN_143c4cf90(void)

ulonglong FUN_143c4cf90(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  *(byte **)(param_1 + 8) = param_2;
  uVar8 = 0;
  *(byte **)(param_1 + 0x10) = param_3;
  *(longlong *)(param_1 + 0x328) = param_1 + 0x20;
  *(byte **)(param_1 + 0x18) = param_2;
  if (param_3 <= param_2) {
    return 0;
  }
LAB_143c4cff0:
  puVar9 = (undefined8 *)(param_1 + 0x20);
  bVar1 = *param_2;
  uVar4 = (uint)bVar1;
  if ((bVar1 < 0x1b) || (bVar1 == 0x1f)) {
    uVar10 = (longlong)*(undefined8 **)(param_1 + 0x328) + (-0x20 - param_1) >> 3;
    **(undefined8 **)(param_1 + 0x328) = param_2;
    if (bVar1 == 0xc) {
      param_2 = param_2 + 1;
      if (param_3 <= param_2) {
        return 6;
      }
      uVar4 = *param_2 | 0x100;
    }
    piVar6 = (int *)&DAT_145d24510;
    do {
      if (piVar6[1] == (uVar4 | *(uint *)(param_1 + 0x330))) {
        piVar7 = (int *)((ulonglong)(uint)piVar6[2] + *(longlong *)(param_1 + 0x338));
        uVar4 = (uint)uVar10;
        if ((*piVar6 != 6) && (uVar4 == 0)) {
          return 6;
        }
        switch(*piVar6) {
        case 1:
        case 4:
        case 5:
          pcVar2 = (char *)*puVar9;
          if (*pcVar2 == '\x1e') {
            iVar5 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x28),0,0);
            iVar5 = iVar5 >> 0x10;
          }
          else {
            iVar5 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x28));
          }
          break;
        case 2:
          pcVar2 = (char *)*puVar9;
          if (*pcVar2 == '\x1e') {
            iVar5 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x28),0,0);
          }
          else {
            iVar5 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x28));
            if (iVar5 < 0x8000) {
LAB_143c4d1bb:
              if (iVar5 < -0x7fff) {
                iVar5 = -0x7fffffff;
              }
              else {
                iVar5 = iVar5 << 0x10;
              }
            }
            else {
              iVar5 = 0x7fffffff;
            }
          }
          break;
        case 3:
          pcVar2 = (char *)*puVar9;
          if (*pcVar2 == '\x1e') {
            iVar5 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x28),3);
          }
          else {
            iVar5 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x28));
            iVar5 = iVar5 * 1000;
            if (iVar5 < 0x8000) goto LAB_143c4d1bb;
            iVar5 = 0x7fffffff;
          }
          break;
        case 6:
          uVar10 = uVar10 & 0xffffffff;
          if ((uint)piVar6[6] < uVar4) {
            uVar10 = (ulonglong)(uint)piVar6[6];
          }
          iVar5 = 0;
          *(char *)((ulonglong)(uint)piVar6[7] + *(longlong *)(param_1 + 0x338)) = (char)uVar10;
          if ((int)uVar10 != 0) goto LAB_143c4d240;
          goto LAB_143c4d1e3;
        default:
          uVar10 = (**(code **)(piVar6 + 4))(param_1);
          uVar8 = uVar10 & 0xffffffff;
          if ((int)uVar10 != 0) {
            return uVar10;
          }
          goto LAB_143c4d1e3;
        }
        if ((char)piVar6[3] == '\x01') {
          *(char *)piVar7 = (char)iVar5;
        }
        else if ((char)piVar6[3] == '\x02') {
          *(short *)piVar7 = (short)iVar5;
        }
        else {
          *piVar7 = iVar5;
        }
        goto LAB_143c4d1d7;
      }
      piVar6 = piVar6 + 8;
    } while (*piVar6 != 0);
    goto LAB_143c4d1e3;
  }
  if (0x2ff < (longlong)
              ((longlong)*(undefined8 **)(param_1 + 0x328) + (-0x20 - param_1) & 0xfffffffffffffff8U
              )) {
    return 6;
  }
  **(undefined8 **)(param_1 + 0x328) = param_2;
  *(longlong *)(param_1 + 0x328) = *(longlong *)(param_1 + 0x328) + 8;
  if (bVar1 == 0x1e) {
    do {
      param_2 = param_2 + 1;
      if (param_3 <= param_2) {
        return uVar8;
      }
    } while (((*param_2 & 0xf0) != 0xf0) && ((*param_2 & 0xf) != 0xf));
  }
  else if (bVar1 == 0x1c) {
    param_2 = param_2 + 2;
  }
  else if (bVar1 == 0x1d) {
    param_2 = param_2 + 4;
  }
  else if (0xf6 < bVar1) {
    param_2 = param_2 + 1;
  }
  goto LAB_143c4d1ea;
LAB_143c4d240:
  do {
    pcVar2 = (char *)*puVar9;
    puVar9 = puVar9 + 1;
    if (*pcVar2 == '\x1e') {
      iVar3 = FUN_143c4cc40(pcVar2,*puVar9,0,0);
      iVar3 = iVar3 >> 0x10;
    }
    else {
      iVar3 = FUN_143c4cb90(pcVar2,*puVar9);
    }
    iVar5 = iVar5 + iVar3;
    if ((char)piVar6[3] == '\x01') {
      *(char *)piVar7 = (char)iVar5;
    }
    else if ((char)piVar6[3] == '\x02') {
      *(short *)piVar7 = (short)iVar5;
    }
    else {
      *piVar7 = iVar5;
    }
    piVar7 = (int *)((longlong)piVar7 + (ulonglong)*(byte *)(piVar6 + 3));
    uVar4 = (int)uVar10 - 1;
    uVar10 = (ulonglong)uVar4;
  } while (uVar4 != 0);
LAB_143c4d1d7:
  uVar8 = 0;
LAB_143c4d1e3:
  *(longlong *)(param_1 + 0x328) = param_1 + 0x20;
LAB_143c4d1ea:
  param_2 = param_2 + 1;
  if (param_3 <= param_2) {
    return uVar8;
  }
  goto LAB_143c4cff0;
}



// FUNCTION 143c4d350 FUN_143c4d350 body=2437 status=ok
// SIG undefined FUN_143c4d350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int FUN_143c4d350(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_508 [32];
  uint *local_4e8;
  undefined8 local_4e0;
  undefined8 *local_4d8;
  undefined2 local_4c8;
  char local_4c4;
  short local_4c0 [2];
  uint local_4bc;
  uint local_4b8;
  uint local_4b4;
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined1 local_498 [16];
  longlong local_488;
  undefined8 *local_478;
  uint local_460;
  undefined4 local_458;
  undefined4 local_454;
  undefined1 local_43e;
  longlong local_438;
  undefined4 local_170;
  undefined1 local_167;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  uint local_80;
  int local_7c;
  undefined8 local_78;
  ushort local_70;
  short local_6e;
  short local_6c;
  ushort local_6a;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_508;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar18 = (ulonglong)param_3;
  local_4c4 = '\0';
  lVar4 = *(longlong *)(lVar3 + 0x380);
  uVar13 = 0;
  if ((*(int *)(lVar4 + 0x64c) == 0xffff) || (*(longlong *)(lVar4 + 0x4d0) == 0)) {
    if (*(uint *)(lVar4 + 0x14) <= param_3) {
      return 6;
    }
  }
  else if (param_3 != 0) {
    if (param_3 <= *(uint *)(lVar4 + 0x4d8)) {
      uVar13 = (uint)*(ushort *)(*(longlong *)(lVar4 + 0x4d0) + uVar18 * 2);
    }
    uVar18 = (ulonglong)uVar13;
    if (uVar13 == 0) {
      return 6;
    }
  }
  if ((param_4 >> 10 & 1) != 0) {
    param_4 = param_4 | 3;
  }
  *(undefined4 *)(param_1 + 0xfc) = 0x10000;
  *(undefined4 *)(param_1 + 0x100) = 0x10000;
  local_4a8 = param_2;
  if (param_2 != (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x100) = (int)param_2[4];
    lVar5 = *(longlong *)(*param_2 + 0x2c0);
    if ((((int)param_2[8] != -1) && (*(longlong *)(lVar5 + 0xc0) != 0)) && ((param_4 & 8) == 0)) {
      local_4d8 = &local_78;
      local_4e0 = param_1 + 0x68;
      local_4e8 = (uint *)*(undefined8 *)(*param_2 + 0xa0);
      iVar11 = (**(code **)(lVar5 + 0x90))(lVar3,(int)param_2[8],uVar18,param_4);
      if (iVar11 == 0) {
        *(uint *)(param_1 + 0x30) = (uint)local_78._2_2_ << 6;
        *(uint *)(param_1 + 0x34) = (uint)(ushort)local_78 << 6;
        *(int *)(param_1 + 0x38) = (int)local_78._4_2_ << 6;
        *(int *)(param_1 + 0x3c) = (int)local_78._6_2_ << 6;
        *(uint *)(param_1 + 0x40) = (uint)local_70 << 6;
        *(int *)(param_1 + 0x44) = (int)local_6e << 6;
        *(int *)(param_1 + 0x48) = (int)local_6c << 6;
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(uint *)(param_1 + 0x4c) = (uint)local_6a << 6;
        *(undefined4 *)(param_1 + 0x60) = 0x62697473;
        if ((param_4 & 0x10) == 0) {
          *(int *)(param_1 + 0x90) = (int)local_78._4_2_;
          *(int *)(param_1 + 0x94) = (int)local_78._6_2_;
        }
        else {
          *(int *)(param_1 + 0x90) = (int)local_6e;
          *(int *)(param_1 + 0x94) = (int)local_6c;
        }
        local_4e8 = (uint *)&local_4c8;
        (**(code **)(*(longlong *)(lVar3 + 0x2c0) + 0xe0))(lVar3,0,uVar18,&local_4bc);
        *(uint *)(param_1 + 0x50) = (uint)local_4c8;
        if ((*(char *)(lVar3 + 400) != '\0') && (*(short *)(lVar3 + 0x1ba) != 0)) {
          local_4e8 = (uint *)&local_4c8;
          (**(code **)(*(longlong *)(lVar3 + 0x2c0) + 0xe0))(lVar3,1,uVar18,&local_4bc);
          *(uint *)(param_1 + 0x54) = (uint)local_4c8;
          return 0;
        }
        if (*(short *)(lVar3 + 0x1f8) == -1) {
          *(int *)(param_1 + 0x54) = (int)*(short *)(lVar3 + 0x13c) - (int)*(short *)(lVar3 + 0x13e)
          ;
          return 0;
        }
        *(int *)(param_1 + 0x54) = (int)*(short *)(lVar3 + 0x23e) - (int)*(short *)(lVar3 + 0x240);
        return 0;
      }
    }
  }
  if ((param_4 >> 0xe & 1) != 0) {
    return 6;
  }
  if (*(int *)(lVar4 + 0x818) == 0) {
    local_68 = *(int *)(lVar4 + 0x5f8);
    iStack_64 = *(int *)(lVar4 + 0x5fc);
    iStack_60 = *(int *)(lVar4 + 0x600);
    iStack_5c = *(int *)(lVar4 + 0x604);
    uVar16 = *(ulonglong *)(lVar4 + 0x610);
    local_4b0 = uVar16;
  }
  else {
    bVar10 = FUN_143c4b6b0(lVar4 + 0x1020,uVar18);
    if (*(uint *)(lVar4 + 0x818) <= (uint)bVar10) {
      bVar10 = *(char *)(lVar4 + 0x818) - 1;
    }
    local_4b8 = *(uint *)(lVar4 + 0x60c);
    lVar5 = lVar4 + (ulonglong)bVar10 * 8;
    lVar6 = *(longlong *)(lVar5 + 0x820);
    local_4b4 = *(uint *)(lVar6 + 0x44);
    local_68 = *(int *)(lVar6 + 0x30);
    iStack_64 = *(int *)(lVar6 + 0x34);
    iStack_60 = *(int *)(lVar6 + 0x38);
    iStack_5c = *(int *)(lVar6 + 0x3c);
    uVar16 = *(ulonglong *)(*(longlong *)(lVar5 + 0x820) + 0x48);
    local_4b0 = uVar16;
    if (local_4b8 != local_4b4) {
      uVar12 = FUN_143c21f00(*(undefined4 *)(param_1 + 0xfc),local_4b8,local_4b4);
      *(undefined4 *)(param_1 + 0xfc) = uVar12;
      uVar12 = FUN_143c21f00(*(undefined4 *)(param_1 + 0x100),local_4b8,local_4b4);
      *(undefined4 *)(param_1 + 0x100) = uVar12;
      local_4c4 = '\x01';
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  local_78 = (undefined2 *)(param_1 + 0x98);
  *local_78 = 0;
  local_4b4 = CONCAT31((uint3)(param_4 >> 9),~(byte)(param_4 >> 1)) & 0xffffff01;
  *(byte *)(param_1 + 0xf9) = ~(byte)param_4 & 1;
  *(char *)(param_1 + 0xf8) = (char)local_4b4;
  local_4e0 = CONCAT44(local_4e0._4_4_,(int)param_4 >> 0x10) & 0xffffffff0000000f;
  local_4e8 = (uint *)CONCAT71(local_4e8._1_7_,(char)local_4b4);
  FUN_143c4b090(local_498,lVar3,param_2,param_1);
  local_43e = 0;
  if ((param_4 & 0x100) != 0) {
    local_167 = 1;
  }
  puVar7 = *(undefined8 **)(*(longlong *)(lVar3 + 0xd0) + 0x48);
  if (puVar7 == (undefined8 *)0x0) {
    iVar11 = FUN_143c4c0e0(*(longlong *)(lVar3 + 0x380) + 0x4e0,uVar18,&local_98,&local_4b8);
    local_4bc = local_4b8;
  }
  else {
    iVar11 = (**(code **)*puVar7)(puVar7[1],uVar18,&local_88);
    local_98 = local_88;
    local_4bc = local_80;
  }
  if (iVar11 != 0) {
    return iVar11;
  }
  iVar11 = FUN_143c4b170(local_498,local_4a8,uVar18);
  if (iVar11 != 0) {
    return iVar11;
  }
  uVar13 = FUN_143c464b0(local_498,local_98,local_4bc);
  if ((char)uVar13 == -0x5c) {
    local_4b4 = local_4b4 & 0xffffff00;
    local_4c4 = '\x01';
    *(undefined1 *)(param_1 + 0xf8) = 0;
    local_4b8 = uVar13;
    uVar13 = FUN_143c464b0(local_498,local_98,local_4bc);
  }
  plVar8 = *(longlong **)(*(longlong *)(lVar3 + 0xd0) + 0x48);
  local_4b8 = uVar13;
  if (plVar8 == (longlong *)0x0) {
    if (*(longlong *)(*(longlong *)(lVar3 + 0x380) + 0x508) == 0) {
      FT_Stream_ReleaseFrame(*(undefined8 *)(*(longlong *)(lVar3 + 0x380) + 0x4e0));
    }
  }
  else {
    local_88 = local_98;
    local_80 = local_4bc;
    (**(code **)(*plVar8 + 8))(plVar8[1]);
  }
  if (uVar13 != 0) {
    return uVar13;
  }
  if (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + 0x48) == 0) {
    if (*(longlong *)(lVar4 + 0x500) != 0) {
      *(ulonglong *)(param_1 + 0xd0) =
           (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x500) + uVar18 * 4) +
           *(longlong *)(lVar4 + 0x508) + -1;
      *(uint *)(param_1 + 0xd8) = local_4bc;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (local_488 != 0) {
    uVar9 = local_478[1];
    *(undefined8 *)(local_488 + 0x98) = *local_478;
    *(undefined8 *)(local_488 + 0xa0) = uVar9;
    uVar9 = local_478[3];
    *(undefined8 *)(local_488 + 0xa8) = local_478[2];
    *(undefined8 *)(local_488 + 0xb0) = uVar9;
    *(undefined8 *)(local_488 + 0xb8) = local_478[4];
  }
  plVar8 = *(longlong **)(*(longlong *)(lVar3 + 0xd0) + 0x48);
  if ((plVar8 != (longlong *)0x0) && (*(longlong *)(*plVar8 + 0x10) != 0)) {
    local_90 = local_458;
    local_98 = (ulonglong)local_460;
    local_8c = local_454;
    local_4b8 = (**(code **)(*plVar8 + 0x10))(plVar8[1],uVar18,0,&local_98);
    local_458 = local_90;
    local_454 = local_8c;
    local_460 = (uint)local_98;
    if (local_4b8 != 0) {
      return local_4b8;
    }
  }
  if ((param_4 >> 10 & 1) == 0) {
    if (*(short *)(lVar3 + 0x15a) == 0) {
      *(undefined4 *)(param_1 + 0x40) = local_170;
      *(undefined4 *)(param_1 + 0x50) = local_170;
    }
    else {
      local_4e8 = (uint *)&local_4c8;
      local_4c0[0] = 0;
      local_4c8 = 0;
      (**(code **)(*(longlong *)(lVar3 + 0x2c0) + 0xe0))(lVar3,0,uVar18,local_4c0);
      *(uint *)(param_1 + 0x40) = (uint)local_4c8;
      *(int *)(param_1 + 0x38) = (int)local_4c0[0];
      *(uint *)(param_1 + 0x50) = (uint)local_4c8;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
    if ((*(char *)(lVar3 + 400) == '\0') || (*(short *)(lVar3 + 0x1ba) == 0)) {
      local_4c8 = (ushort)local_4c8._1_1_ << 8;
      if (*(short *)(lVar3 + 0x1f8) == -1) {
        sVar1 = *(short *)(lVar3 + 0x13e);
        sVar2 = *(short *)(lVar3 + 0x13c);
      }
      else {
        sVar1 = *(short *)(lVar3 + 0x240);
        sVar2 = *(short *)(lVar3 + 0x23e);
      }
      *(int *)(param_1 + 0x4c) = (int)sVar2 - (int)sVar1;
    }
    else {
      local_4e8 = &local_4bc;
      local_4c8 = CONCAT11(local_4c8._1_1_,1);
      local_4c0[0] = 0;
      local_4bc = local_4bc & 0xffff0000;
      (**(code **)(*(longlong *)(lVar3 + 0x2c0) + 0xe0))(lVar3,1,uVar18,local_4c0);
      *(int *)(param_1 + 0x48) = (int)local_4c0[0];
      *(uint *)(param_1 + 0x4c) = local_4bc & 0xffff;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (local_4a8 != (longlong *)0x0) {
      uVar12 = 0;
      if (*(ushort *)((longlong)local_4a8 + 0x1a) < 0x18) {
        uVar12 = 0x100;
      }
      *(undefined4 *)(param_1 + 0xb8) = uVar12;
    }
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 4;
    if ((((local_68 != 0x10000) || (iStack_5c != 0x10000)) || (iStack_64 != 0)) || (iStack_60 != 0))
    {
      FUN_143c234b0(param_1 + 0x98,&local_68);
    }
    iVar11 = local_4b0._4_4_;
    if (((int)uVar16 != 0) || (local_4b0._4_4_ != 0)) {
      FUN_143c23560(param_1 + 0x98,uVar16 & 0xffffffff,local_4b0._4_4_);
    }
    local_98 = (ulonglong)*(uint *)(param_1 + 0x40);
    FUN_143c254f0(&local_98,&local_68);
    local_98._4_4_ = *(int *)(param_1 + 0x4c);
    *(uint *)(param_1 + 0x40) = (uint)local_98 + (int)uVar16;
    local_98._0_4_ = 0;
    FUN_143c254f0(&local_98,&local_68);
    *(int *)(param_1 + 0x4c) = local_98._4_4_ + iVar11;
    if (((param_4 & 1) == 0) || (local_4c4 != '\0')) {
      puVar17 = *(undefined4 **)(param_1 + 0xa0);
      uVar12 = *(undefined4 *)(param_1 + 0x100);
      uVar15 = *(undefined4 *)(param_1 + 0xfc);
      if ((((char)local_4b4 == '\0') || (local_438 == 0)) &&
         (iVar11 = (int)*(short *)(param_1 + 0x9a), 0 < *(short *)(param_1 + 0x9a))) {
        do {
          uVar14 = FUN_143c22100(*puVar17,uVar15);
          *puVar17 = uVar14;
          uVar14 = FUN_143c22100(puVar17[1],uVar12);
          iVar11 = iVar11 + -1;
          puVar17[1] = uVar14;
          puVar17 = puVar17 + 2;
        } while (0 < iVar11);
      }
      uVar15 = FUN_143c22100(*(undefined4 *)(param_1 + 0x40),uVar15);
      *(undefined4 *)(param_1 + 0x40) = uVar15;
      uVar12 = FUN_143c22100(*(undefined4 *)(param_1 + 0x4c),uVar12);
      *(undefined4 *)(param_1 + 0x4c) = uVar12;
    }
    FUN_143c22f00(local_78,&local_88);
    *(int *)(param_1 + 0x30) = local_80 - (int)local_88;
    *(int *)(param_1 + 0x34) = local_7c - local_88._4_4_;
    if (*(short *)(lVar3 + 0x15a) == 0) {
      *(int *)(param_1 + 0x38) = (int)local_88;
    }
    *(int *)(param_1 + 0x3c) = local_7c;
    if ((char)local_4c8 == '\0') {
      if ((param_4 & 0x10) != 0) {
        FUN_143c27730((int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x4c));
        return local_4b8;
      }
      return local_4b8;
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x40) / 2;
    return local_4b8;
  }
  lVar3 = *(longlong *)(param_1 + 0xf0);
  *(uint *)(param_1 + 0x38) = local_460;
  *(undefined4 *)(param_1 + 0x40) = local_170;
  *(ulonglong *)(lVar3 + 0x10) = CONCAT44(iStack_64,local_68);
  *(ulonglong *)(lVar3 + 0x18) = CONCAT44(iStack_5c,iStack_60);
  *(ulonglong *)(lVar3 + 0x20) = uVar16;
  *(undefined1 *)(lVar3 + 0xc) = 1;
  return 0;
}



// FUNCTION 143c4dce0 FUN_143c4dce0 body=917 status=ok
// SIG undefined FUN_143c4dce0(void)

ulonglong FUN_143c4dce0(byte *param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
                       int param_5,undefined8 param_6)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  longlong local_res10;
  undefined8 local_378 [4];
  undefined1 local_358 [776];
  undefined1 *local_50;
  undefined4 local_48;
  byte *local_40;
  
  pbVar1 = param_1 + 0xb0;
  uVar8 = 0;
  local_res10 = 0;
  _guard_xfg_dispatch_icall_nop(local_378,0,0x340);
  local_50 = local_358;
  local_48 = 0x1000;
  local_378[0] = CONCAT44(param_6._4_4_,(uint)param_6);
  local_40 = param_1;
  _guard_xfg_dispatch_icall_nop(param_1,0,0xb0);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x9c;
  param_1[0x23] = 0xff;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x32;
  param_1[0x27] = 0;
  param_1[0x2c] = 2;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 1;
  param_1[0x33] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 1;
  param_1[0x3f] = 0;
  param_1[0x9c] = 0x10;
  param_1[0x9d] = 0x22;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0] = 0xff;
  param_1[1] = 0xff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xff;
  param_1[5] = 0xff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xff;
  param_1[9] = 0xff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xff;
  param_1[0xd] = 0xff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xff;
  param_1[0x11] = 0xff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xff;
  param_1[0x15] = 0xff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x80] = 0xff;
  param_1[0x81] = 0xff;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0xff;
  param_1[0x85] = 0xff;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0xff;
  param_1[0x89] = 0xff;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0xac] = 0xff;
  param_1[0xad] = 0xff;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  uVar4 = FUN_143c4c0e0(param_2,param_3,&local_res10,local_res8);
  if (uVar4 == 0) {
    uVar4 = FUN_143c4cf90(local_378,local_res10,(ulonglong)local_res8[0] + local_res10);
  }
  if (param_2[5] == 0) {
    FT_Stream_ReleaseFrame(*param_2);
  }
  if (uVar4 != 0) {
    return (ulonglong)uVar4;
  }
  if (*(int *)(param_1 + 0x84) != 0xffff) {
    return 0;
  }
  uVar4 = 1;
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    _guard_xfg_dispatch_icall_nop(pbVar1,0,0x168);
    param_1[0x178] = 7;
    param_1[0x179] = 0;
    param_1[0x17a] = 0;
    param_1[0x17b] = 0;
    param_1[0x17c] = 1;
    param_1[0x17d] = 0;
    param_1[0x17e] = 0;
    param_1[0x17f] = 0;
    param_1[0x1fc] = 0xff;
    param_1[0x1fd] = 0xff;
    param_1[0x1fe] = 0xff;
    param_1[0x1ff] = 0xff;
    param_1[0x204] = 0x5c;
    param_1[0x205] = 0xf;
    param_1[0x206] = 0;
    param_1[0x207] = 0;
    param_1[0x174] = 0;
    param_1[0x175] = 0xa0;
    param_1[0x176] = 0x27;
    param_1[0x177] = 0;
    _guard_xfg_dispatch_icall_nop(local_378,0,0x340);
    local_50 = local_358;
    local_378[0] = CONCAT44(param_6._4_4_,(uint)param_6);
    local_48 = 0x2000;
    local_40 = pbVar1;
    uVar5 = FUN_143c251d0(param_4,*(int *)(param_1 + 0x74) + param_5);
    if (uVar5 != 0) {
      return (ulonglong)uVar5;
    }
    uVar5 = FUN_143c24650(param_4,*(undefined4 *)(param_1 + 0x78));
    if (uVar5 != 0) {
      return (ulonglong)uVar5;
    }
    uVar5 = FUN_143c4cf90(local_378,*(undefined8 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x40))
    ;
    FT_Stream_ExitFrame(param_4);
    if (uVar5 != 0) {
      return (ulonglong)uVar5;
    }
    *pbVar1 = *pbVar1 & 0xfe;
  }
  uVar7 = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    uVar5 = FUN_143c251d0(param_4,*(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x20c) + param_5);
    uVar7 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      pbVar1 = param_1 + 0x218;
      uVar5 = FUN_143c4c530(pbVar1,param_4,1);
      uVar7 = (ulonglong)uVar5;
      if (uVar5 == 0) {
        param_6._0_4_ = 0;
        uVar2 = *(undefined8 *)(*(longlong *)pbVar1 + 0x30);
        param_1[0x248] = 0;
        param_1[0x249] = 0;
        param_1[0x24a] = 0;
        param_1[0x24b] = 0;
        param_1[0x24c] = 0;
        param_1[0x24d] = 0;
        param_1[0x24e] = 0;
        param_1[0x24f] = 0;
        uVar7 = uVar8;
        if (*(longlong *)(param_1 + 0x238) == 0) {
          param_6._0_4_ = FUN_143c4c6b0(pbVar1);
          uVar7 = (ulonglong)(uint)param_6;
          if ((uint)param_6 != 0) {
            return uVar7;
          }
        }
        if (*(int *)(param_1 + 0x224) != 0) {
          plVar6 = (longlong *)FUN_143c27410(uVar2,8,0,*(int *)(param_1 + 0x224) + 1,0,&param_6);
          uVar7 = (ulonglong)(uint)param_6;
          if ((uint)param_6 == 0) {
            lVar3 = *(longlong *)(param_1 + 0x240);
            *plVar6 = lVar3;
            if (*(int *)(param_1 + 0x224) != 0) {
              do {
                uVar7 = (ulonglong)uVar4;
                uVar5 = *(int *)(*(longlong *)(param_1 + 0x238) + uVar7 * 4) - 1;
                if ((uint)uVar8 <= uVar5) {
                  if (*(uint *)(param_1 + 0x230) < uVar5) {
                    uVar5 = *(uint *)(param_1 + 0x230);
                  }
                  uVar8 = (ulonglong)uVar5;
                }
                uVar4 = uVar4 + 1;
                plVar6[uVar7] = uVar8 + lVar3;
              } while (uVar4 <= *(uint *)(param_1 + 0x224));
            }
            uVar7 = 0;
            *(longlong **)(param_1 + 0x248) = plVar6;
          }
        }
      }
    }
  }
  return uVar7;
}



// FUNCTION 143c4e080 FUN_143c4e080 body=200 status=ok
// SIG undefined FUN_143c4e080(void)

void FUN_143c4e080(char *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  lVar5 = -1;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_1[lVar2] != '\0');
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(param_2 + lVar5) != '\0');
  iVar4 = (int)lVar5;
  iVar1 = (int)lVar2;
  if (iVar4 < iVar1) {
    iVar6 = 1;
    lVar5 = (longlong)iVar4;
    lVar2 = 1;
    if (0 < lVar5) {
      pcVar3 = (char *)(param_2 + -1 + lVar5);
      do {
        if ((param_1 + ((iVar1 - lVar5) - param_2))[(longlong)pcVar3] != *pcVar3) break;
        iVar6 = iVar6 + 1;
        lVar2 = lVar2 + 1;
        pcVar3 = pcVar3 + -1;
      } while (lVar2 <= lVar5);
    }
    if (iVar4 < iVar6) {
      iVar1 = (iVar1 - iVar4) + -1;
      if (0 < iVar1) {
        pcVar3 = param_1 + iVar1;
        do {
          if ((0x3f < (byte)(*pcVar3 - 0x20U)) ||
             ((0x8000000000002801U >> ((ulonglong)(byte)(*pcVar3 - 0x20U) & 0x3f) & 1) == 0)) break;
          pcVar3 = pcVar3 + -1;
          iVar1 = iVar1 + -1;
        } while (pcVar3 != param_1 && -1 < (longlong)pcVar3 - (longlong)param_1);
        if (0 < iVar1) {
          param_1[(longlong)iVar1 + 1] = '\0';
        }
      }
    }
  }
  return;
}



// FUNCTION 143c4e150 FUN_143c4e150 body=202 status=ok
// SIG undefined FUN_143c4e150(void)

void FUN_143c4e150(char *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (param_1[lVar3] != '\0');
  iVar2 = (int)lVar3 + 1;
  bVar1 = true;
  while( true ) {
    if ((iVar2 < 7) || (param_1[6] != '+')) {
      return;
    }
    if (0x19 < (byte)(*param_1 + 0xbfU)) {
      bVar1 = false;
    }
    if (0x19 < (byte)(param_1[1] + 0xbfU)) {
      bVar1 = false;
    }
    if (0x19 < (byte)(param_1[2] + 0xbfU)) {
      bVar1 = false;
    }
    if (0x19 < (byte)(param_1[3] + 0xbfU)) {
      bVar1 = false;
    }
    if (0x19 < (byte)(param_1[4] + 0xbfU)) {
      bVar1 = false;
    }
    if (0x19 < (byte)(param_1[5] + 0xbfU)) break;
    if (!bVar1) {
      return;
    }
    if (7 < (longlong)iVar2) {
      pcVar4 = param_1 + 7;
      pcVar5 = param_1;
      for (lVar3 = (longlong)iVar2 + -7; lVar3 != 0; lVar3 = lVar3 + -1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
    }
    iVar2 = iVar2 + -7;
  }
  return;
}



// FUNCTION 143c4e220 cid_slot_init body=87 status=ok
// SIG undefined cid_slot_init(void)

undefined8 cid_slot_init(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1d8);
  if (lVar1 != 0) {
    lVar2 = FT_Get_Module(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                          "pshinter");
    if (lVar2 != 0) {
      uVar3 = (**(code **)(lVar1 + 8))(lVar2);
      *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x28) = uVar3;
    }
  }
  return 0;
}



// FUNCTION 143c4e280 cid_size_done body=108 status=ok
// SIG undefined cid_size_done(void)

void cid_size_done(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (param_1[7] != 0) {
    puVar1 = *(undefined8 **)(*param_1 + 0x1d8);
    lVar3 = FT_Get_Module(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
    if (((lVar3 != 0) && (puVar1 != (undefined8 *)0x0)) &&
       (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
      lVar3 = (*pcVar2)(lVar3);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(param_1[7]);
      }
    }
    param_1[7] = 0;
  }
  return;
}



// FUNCTION 143c4e2f0 FUN_143c4e2f0 body=154 status=ok
// SIG undefined FUN_143c4e2f0(void)

ulonglong FUN_143c4e2f0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong local_res8;
  
  puVar3 = *(undefined8 **)(*param_1 + 0x1d8);
  lVar2 = FT_Get_Module(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((((lVar2 != 0) && (puVar3 != (undefined8 *)0x0)) &&
      (pcVar1 = (code *)*puVar3, pcVar1 != (code *)0x0)) &&
     (puVar3 = (undefined8 *)(*pcVar1)(lVar2), puVar3 != (undefined8 *)0x0)) {
    lVar2 = *param_1;
    uVar4 = (*(code *)*puVar3)(*(undefined8 *)(lVar2 + 0x98),
                               (longlong)*(int *)(lVar2 + 4) * 0xfc + *(longlong *)(lVar2 + 0x1b8),
                               &local_res8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    param_1[7] = local_res8;
    return uVar4 & 0xffffffff;
  }
  return 0;
}



// FUNCTION 143c4e390 FUN_143c4e390 body=120 status=ok
// SIG undefined FUN_143c4e390(void)

undefined8 FUN_143c4e390(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  FUN_143c23e60(*param_1);
  puVar1 = *(undefined8 **)(*param_1 + 0x1d8);
  lVar3 = FT_Get_Module(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if (((lVar3 != 0) && (puVar1 != (undefined8 *)0x0)) &&
     (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
    lVar3 = (*pcVar2)(lVar3);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 8))
                (param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
    }
  }
  return 0;
}



// FUNCTION 143c4e410 FUN_143c4e410 body=655 status=ok
// SIG undefined FUN_143c4e410(void)

ulonglong FUN_143c4e410(undefined8 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  
  *param_2 = 1;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    lVar6 = FT_Get_Module_Interface(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
    if (lVar6 == 0) {
      return 0xb;
    }
    *(longlong *)(param_2 + 0x38) = lVar6;
  }
  if (*(longlong *)(param_2 + 0x76) == 0) {
    uVar7 = FT_Get_Module_Interface(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"pshinter");
    *(undefined8 *)(param_2 + 0x76) = uVar7;
  }
  uVar8 = FUN_143c251d0(param_1,0);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  uVar8 = FUN_143c4ef00(param_2,param_3);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  if (param_3 < 0) {
    return uVar8;
  }
  if (param_3 != 0) {
    return 6;
  }
  lVar6 = 0;
  param_2[2] = param_2[2] | 0x811;
  param_2[0xe] = 0;
  param_2[1] = 0;
  param_2[4] = param_2[0x6b];
  if (*(char *)(param_2 + 0x4f) != '\0') {
    param_2[2] = param_2[2] | 4;
  }
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_2 + 0x4a);
  pcVar11 = *(char **)(param_2 + 6);
  *(char **)(param_2 + 8) = "Regular";
  if (pcVar11 == (char *)0x0) {
    lVar10 = *(longlong *)(param_2 + 6);
    if (*(longlong *)(param_2 + 0x3a) != 0) {
      lVar10 = *(longlong *)(param_2 + 0x3a);
    }
    *(longlong *)(param_2 + 6) = lVar10;
  }
  else {
    pcVar9 = *(char **)(param_2 + 0x48);
    if (pcVar9 != (char *)0x0) {
      cVar1 = *pcVar9;
      while (cVar1 != '\0') {
        cVar2 = *pcVar11;
        if (cVar1 == cVar2) {
          pcVar11 = pcVar11 + 1;
LAB_143c4e531:
          pcVar9 = pcVar9 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_143c4e531;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (*pcVar11 == '\0') {
              *(char **)(param_2 + 8) = pcVar9;
            }
            break;
          }
          pcVar11 = pcVar11 + 1;
        }
        cVar1 = *pcVar9;
      }
    }
  }
  param_2[3] = 0;
  param_2[3] = (uint)(param_2[0x4e] != 0);
  lVar10 = *(longlong *)(param_2 + 0x4c);
  lVar13 = lVar6;
  if (lVar10 == 0) goto LAB_143c4e5da;
  do {
    lVar12 = lVar13 + 1;
    if (*(char *)(lVar10 + lVar13) != (&DAT_145d23b60)[lVar13]) goto LAB_143c4e5c2;
    lVar13 = lVar12;
  } while (lVar12 != 5);
  goto LAB_143c4e5d6;
  while (lVar6 = lVar13, lVar13 != 6) {
LAB_143c4e5c2:
    lVar13 = lVar6 + 1;
    if (*(char *)(lVar10 + lVar6) != "Black"[lVar6]) goto LAB_143c4e5da;
  }
LAB_143c4e5d6:
  param_2[3] = param_2[3] | 2;
LAB_143c4e5da:
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0x16] = (int)*(short *)((longlong)param_2 + 0x14a);
  param_2[0x17] = (int)*(short *)((longlong)param_2 + 0x14e);
  param_2[0x18] = param_2[0x54] + 0xffff >> 0x10;
  param_2[0x19] = param_2[0x55] + 0xffff >> 0x10;
  if (*(short *)(param_2 + 0x1a) == 0) {
    *(undefined2 *)(param_2 + 0x1a) = 1000;
  }
  sVar3 = *(short *)(param_2 + 0x19);
  sVar4 = *(short *)(param_2 + 0x17);
  *(short *)((longlong)param_2 + 0x6a) = sVar3;
  *(short *)(param_2 + 0x1b) = sVar4;
  sVar5 = (short)((((uint)*(ushort *)(param_2 + 0x1a) + (uint)*(ushort *)(param_2 + 0x1a) * 2) * 4)
                 / 10);
  *(short *)((longlong)param_2 + 0x6e) = sVar5;
  if ((int)sVar5 < (int)sVar3 - (int)sVar4) {
    *(short *)((longlong)param_2 + 0x6e) = sVar3 - sVar4;
  }
  *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)((longlong)param_2 + 0x13e);
  *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(param_2 + 0x50);
  return uVar8 & 0xffffffff;
}



// FUNCTION 143c4e6a0 FUN_143c4e6a0 body=457 status=ok
// SIG undefined FUN_143c4e6a0(void)

void FUN_143c4e6a0(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      uVar5 = uVar3;
      if (0 < *(int *)(param_1 + 0x1b0)) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x1d0) + uVar5;
          if (*(undefined8 **)(lVar4 + 8) != (undefined8 *)0x0) {
            ft_mem_free(uVar1,**(undefined8 **)(lVar4 + 8));
            **(undefined8 **)(lVar4 + 8) = 0;
            ft_mem_free(uVar1,*(undefined8 *)(lVar4 + 8));
            *(undefined8 *)(lVar4 + 8) = 0;
          }
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          uVar5 = uVar5 + 0x10;
        } while ((int)uVar2 < *(int *)(param_1 + 0x1b0));
      }
      ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1d0));
      *(undefined8 *)(param_1 + 0x1d0) = 0;
    }
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x120));
    *(undefined8 *)(param_1 + 0x120) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1b8));
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 143c4e870 FUN_143c4e870 body=849 status=ok
// SIG undefined FUN_143c4e870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c4e870(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined1 auStack_808 [32];
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined1 local_7d8;
  uint local_7d0;
  code *local_7c8;
  char local_7b8;
  int local_7b0;
  int local_7ac;
  undefined2 *local_7a8;
  undefined8 local_7a0;
  undefined1 local_798 [32];
  longlong local_778;
  undefined4 local_760;
  undefined4 local_758;
  byte local_73b;
  longlong local_738;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulonglong local_100;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_808;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(lVar2 + 0xe0);
  if (param_3 < *(uint *)(lVar2 + 0x10)) {
    if ((param_4 >> 10 & 1) != 0) {
      param_4 = param_4 | 3;
    }
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x1c);
    local_7d8 = (param_4 & 3) == 0;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x20);
    local_7a8 = (undefined2 *)(param_1 + 0x98);
    local_7c8 = FUN_143c4f270;
    *local_7a8 = 0;
    *(undefined2 *)(param_1 + 0x9a) = 0;
    local_7d0 = (int)param_4 >> 0x10 & 0xf;
    *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
    local_7e0 = 0;
    local_7e8 = 0;
    local_7b8 = local_7d8;
    uVar7 = (*(code *)**(undefined8 **)(lVar3 + 0x18))(local_798,lVar2,param_2,param_1);
    if ((int)uVar7 == 0) {
      local_73b = (byte)(param_4 >> 10) & 1;
      uVar7 = FUN_143c4f270(local_798,param_3);
      uVar9 = uVar7 & 0xffffffff;
      if ((int)uVar7 == 0) {
        local_7a0 = local_100;
        local_78 = local_110;
        uStack_74 = uStack_10c;
        uStack_70 = uStack_108;
        uStack_6c = uStack_104;
        (**(code **)(*(longlong *)(lVar3 + 0x18) + 8))(local_798);
        *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 1;
        *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 4;
        uVar7 = uVar9;
        if ((param_4 >> 10 & 1) == 0) {
          iVar4 = FT_RoundFix(local_758);
          *(int *)(param_1 + 0x40) = iVar4 >> 0x10;
          iVar4 = FT_RoundFix(local_758);
          *(int *)(param_1 + 0x50) = iVar4 >> 0x10;
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          iVar4 = *(int *)(lVar2 + 0x154) - *(int *)(lVar2 + 0x14c) >> 0x10;
          *(int *)(param_1 + 0x4c) = iVar4;
          *(int *)(param_1 + 0x54) = iVar4;
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          if (*(ushort *)(param_2 + 0x1a) < 0x18) {
            *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x100;
          }
          puVar10 = (undefined2 *)(param_1 + 0x98);
          FUN_143c234b0(puVar10,&local_78);
          FUN_143c23560(puVar10,local_100 & 0xffffffff,local_7a0._4_4_);
          local_7b0 = *(int *)(param_1 + 0x40);
          local_7ac = 0;
          FUN_143c254f0(&local_7b0,&local_78);
          local_7ac = *(int *)(param_1 + 0x4c);
          *(int *)(param_1 + 0x40) = local_7b0 + (int)local_100;
          local_7b0 = 0;
          FUN_143c254f0(&local_7b0,&local_78);
          *(int *)(param_1 + 0x4c) = local_7ac + local_7a0._4_4_;
          if ((param_4 & 1) == 0) {
            uVar6 = *(undefined4 *)(param_1 + 0xfc);
            uVar1 = *(undefined4 *)(param_1 + 0x100);
            puVar8 = *(undefined4 **)(local_778 + 8);
            if (((local_7b8 == '\0') || (local_738 == 0)) &&
               (iVar4 = (int)*(short *)(local_778 + 2), 0 < *(short *)(local_778 + 2))) {
              do {
                uVar5 = FUN_143c22100(*puVar8,uVar6);
                *puVar8 = uVar5;
                uVar5 = FUN_143c22100(puVar8[1],uVar1);
                iVar4 = iVar4 + -1;
                puVar8[1] = uVar5;
                puVar8 = puVar8 + 2;
              } while (0 < iVar4);
            }
            uVar6 = FUN_143c22100(*(undefined4 *)(param_1 + 0x40),uVar6);
            *(undefined4 *)(param_1 + 0x40) = uVar6;
            uVar6 = FUN_143c22100(*(undefined4 *)(param_1 + 0x4c),uVar1);
            *(undefined4 *)(param_1 + 0x4c) = uVar6;
            puVar10 = local_7a8;
          }
          FUN_143c22f00(puVar10,&local_68);
          *(int *)(param_1 + 0x38) = local_68;
          *(int *)(param_1 + 0x30) = local_60 - local_68;
          *(int *)(param_1 + 0x34) = local_5c - local_64;
          *(int *)(param_1 + 0x3c) = local_5c;
          if ((param_4 & 0x10) != 0) {
            FUN_143c27730((int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x4c));
          }
        }
        else {
          lVar2 = *(longlong *)(param_1 + 0xf0);
          iVar4 = FT_RoundFix(local_760);
          *(int *)(param_1 + 0x38) = iVar4 >> 0x10;
          iVar4 = FT_RoundFix(local_758);
          *(int *)(param_1 + 0x40) = iVar4 >> 0x10;
          *(ulonglong *)(lVar2 + 0x10) = CONCAT44(uStack_74,local_78);
          *(ulonglong *)(lVar2 + 0x18) = CONCAT44(uStack_6c,uStack_70);
          *(ulonglong *)(lVar2 + 0x20) = local_100;
          *(undefined1 *)(lVar2 + 0xc) = 1;
        }
      }
    }
  }
  else {
    uVar7 = 6;
  }
  return uVar7;
}



// FUNCTION 143c4ec80 FUN_143c4ec80 body=342 status=ok
// SIG undefined FUN_143c4ec80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c4ec80(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  iVar2 = *(int *)(param_2 + 0xb8);
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x1b0) <= iVar2)) {
LAB_143c4edb7:
    uVar3 = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0xfc + *(longlong *)(param_1 + 0x1b8);
    iVar2 = (**(code **)(param_2 + 0x68))(param_2,6,&local_28);
    if (5 < iVar2) {
      iVar2 = local_1c;
      if (local_1c < 0) {
        iVar2 = -local_1c;
      }
      if (iVar2 != 0) {
        uVar1 = FUN_143c20070(1000,iVar2);
        *(undefined2 *)(param_1 + 0x68) = uVar1;
        if (iVar2 != 0x10000) {
          local_28 = FUN_143c20070(local_28,iVar2);
          local_24 = FUN_143c20070(local_24,iVar2);
          local_20 = FUN_143c20070(local_20,iVar2);
          local_18 = FUN_143c20070(local_18,iVar2);
          local_14 = FUN_143c20070(local_14,iVar2);
          bVar5 = local_1c < 0;
          local_1c = 0x10000;
          if (bVar5) {
            local_1c = -0x10000;
          }
        }
        *(undefined4 *)(lVar4 + 0xd8) = local_28;
        *(undefined4 *)(lVar4 + 0xe0) = local_24;
        *(undefined4 *)(lVar4 + 0xdc) = local_20;
        *(int *)(lVar4 + 0xe4) = local_1c;
        *(int *)(lVar4 + 0xe8) = local_18 >> 0x10;
        *(int *)(lVar4 + 0xec) = local_14 >> 0x10;
        goto LAB_143c4edb7;
      }
    }
    uVar3 = 3;
  }
  return uVar3;
}



// FUNCTION 143c4edf0 FUN_143c4edf0 body=188 status=ok
// SIG undefined FUN_143c4edf0(void)

int FUN_143c4edf0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int local_res8 [2];
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = 0;
  local_res8[0] = 0;
  iVar1 = (**(code **)(param_2 + 0x48))(param_2);
  if (iVar1 < 0) {
    local_res8[0] = 3;
  }
  else if (*(longlong *)(param_1 + 0x1b8) == 0) {
    uVar2 = FUN_143c27410(uVar2,0xfc,0,iVar1,0,local_res8);
    *(undefined8 *)(param_1 + 0x1b8) = uVar2;
    if ((local_res8[0] == 0) && (*(int *)(param_1 + 0x1b0) = iVar1, uVar5 = uVar3, 0 < iVar1)) {
      do {
        uVar4 = (int)uVar5 + 1;
        *(undefined4 *)(uVar3 + 4 + *(longlong *)(param_1 + 0x1b8)) = 4;
        uVar3 = uVar3 + 0xfc;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(param_1 + 0x1b0));
    }
  }
  return local_res8[0];
}



// FUNCTION 143c4eeb0 FUN_143c4eeb0 body=78 status=ok
// SIG undefined FUN_143c4eeb0(void)

undefined8 FUN_143c4eeb0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0xb8);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1b0))) {
    lVar3 = (longlong)iVar1 * 0xfc + *(longlong *)(param_1 + 0x1b8);
    uVar2 = (**(code **)(param_2 + 0x50))(param_2,0);
    *(undefined4 *)(lVar3 + 0xd0) = uVar2;
    *(undefined4 *)(lVar3 + 0xb4) = uVar2;
  }
  return 0;
}



// FUNCTION 143c4ef00 FUN_143c4ef00 body=451 status=ok
// SIG undefined FUN_143c4ef00(void)

int FUN_143c4ef00(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int local_res8 [2];
  undefined1 local_d8 [48];
  code *local_a8;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  _guard_xfg_dispatch_icall_nop(local_d8,0,200);
  local_res8[0] =
       FUN_143c4f850(local_d8,*(undefined8 *)(param_1 + 0xa0),uVar4,*(undefined8 *)(param_1 + 0xe0))
  ;
  if (local_res8[0] == 0) {
    local_res8[0] = FUN_143c4f6c0(param_1,local_d8,local_40,local_38);
    if ((local_res8[0] == 0) && (-1 < param_2)) {
      puVar3 = (undefined8 *)FUN_143c271e0(uVar4,0x48,local_res8);
      *(undefined8 **)(param_1 + 0x1e8) = puVar3;
      if (local_res8[0] == 0) {
        if (local_30 == 0) {
          puVar1 = *(undefined8 **)(param_1 + 0xa0);
          uVar4 = puVar1[1];
          *puVar3 = *puVar1;
          puVar3[1] = uVar4;
          uVar4 = puVar1[3];
          puVar3[2] = puVar1[2];
          puVar3[3] = uVar4;
          uVar4 = puVar1[5];
          puVar3[4] = puVar1[4];
          puVar3[5] = uVar4;
          uVar4 = puVar1[7];
          puVar3[6] = puVar1[6];
          puVar3[7] = uVar4;
          puVar3[8] = puVar1[8];
          *(undefined4 *)(param_1 + 0x1c0) = local_34;
        }
        else {
          uVar4 = FUN_143c271e0(uVar4,local_30,local_res8);
          *(undefined8 *)(param_1 + 0x1e0) = uVar4;
          if (local_res8[0] != 0) goto LAB_143c4f07e;
          iVar2 = FUN_143c4f0d0(uVar4,local_30,local_34,param_1);
          if (iVar2 != 0) goto LAB_143c4f07e;
          FUN_143c24ac0(*(undefined8 *)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x1e0),local_30);
          *(undefined4 *)(param_1 + 0x1c0) = 0;
        }
        local_res8[0] = FUN_143c4fba0(param_1);
      }
    }
  }
LAB_143c4f07e:
  if (local_40 != 0) {
    FT_Stream_ReleaseFrame(local_48,&local_40);
  }
  (*local_a8)(local_d8);
  return local_res8[0];
}



// FUNCTION 143c4f0d0 FUN_143c4f0d0 body=410 status=ok
// SIG undefined FUN_143c4f0d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c4f0d0(char *param_1,uint param_2,undefined4 param_3,longlong param_4)

{
  char *pcVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auStack_168 [32];
  byte local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(param_4 + 0xa0);
  uVar9 = FUN_143c251d0(lVar3,param_3);
  if ((int)uVar9 == 0) {
    pbVar11 = local_148;
    pcVar1 = param_1 + param_2;
    pbVar12 = local_148;
    cVar7 = '\x01';
    bVar5 = false;
    while (param_1 < pcVar1) {
      if (pbVar11 <= pbVar12) {
        uVar8 = IStreamingManager::GetNumWantingResourcesID(lVar3);
        uVar10 = *(int *)(lVar3 + 8) - uVar8;
        if (uVar10 == 0) {
          return 0xa0;
        }
        uVar4 = 0x100;
        if (uVar10 < 0x100) {
          uVar4 = uVar10;
        }
        uVar9 = FUN_143c24ae0(lVar3,local_148,uVar4);
        if ((int)uVar9 != 0) {
          return uVar9;
        }
        pbVar12 = local_148;
        uVar10 = IStreamingManager::GetNumWantingResourcesID(lVar3);
        pbVar11 = local_148 + ((ulonglong)uVar10 - (ulonglong)uVar8);
      }
      bVar2 = *pbVar12;
      if (bVar2 - 0x30 < 10) {
        cVar6 = bVar2 - 0x30;
LAB_143c4f1f0:
        if (cVar7 == '\0') {
          *param_1 = *param_1 + cVar6;
          param_1 = param_1 + 1;
        }
        else {
          *param_1 = cVar6 << 4;
        }
        cVar7 = '\x01' - cVar7;
        if (bVar5) break;
      }
      else {
        if ((byte)(bVar2 + 0x9f) < 6) {
          cVar6 = bVar2 + 0x9f;
          goto LAB_143c4f1f0;
        }
        if ((byte)(bVar2 + 0xbf) < 6) {
          cVar6 = bVar2 - 0x37;
          goto LAB_143c4f1f0;
        }
        if ((0x20 < bVar2) || ((0x100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
          if (bVar2 != 0x3e) {
            return 0xa0;
          }
          cVar6 = '\0';
          bVar5 = true;
          goto LAB_143c4f1f0;
        }
      }
      pbVar12 = pbVar12 + 1;
    }
    uVar9 = 0;
  }
  return uVar9;
}



// FUNCTION 143c4f270 FUN_143c4f270 body=891 status=ok
// SIG undefined FUN_143c4f270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c4f270(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  void *_Dst;
  byte *pbVar8;
  undefined4 *puVar9;
  longlong lVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_98 [32];
  int local_78 [2];
  undefined8 local_70;
  int local_68;
  byte *local_60;
  int local_58;
  ulonglong local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar10 = *(longlong *)(param_1 + 8);
  _Dst = (void *)0x0;
  uVar15 = 0;
  local_68 = (int)param_2;
  lVar2 = *(longlong *)(lVar10 + 0x1e8);
  local_78[0] = 0;
  local_70 = *(undefined8 *)(lVar10 + 0x98);
  local_50 = *(ulonglong *)(lVar10 + 0xe0);
  plVar3 = *(longlong **)(*(longlong *)(lVar10 + 0xd0) + 0x48);
  local_60 = param_1;
  if (plVar3 == (longlong *)0x0) {
    iVar7 = *(int *)(lVar10 + 0x1a8) + *(int *)(lVar10 + 0x1a4);
    local_78[0] = FUN_143c251d0(lVar2,local_68 * iVar7 + *(int *)(lVar10 + 0x1a0) +
                                      *(int *)(lVar10 + 0x1c0));
    if (local_78[0] != 0) {
      return local_78[0];
    }
    local_78[0] = FUN_143c24650(lVar2,iVar7 * 2);
    if (local_78[0] != 0) {
      return local_78[0];
    }
    uVar13 = 0;
    pbVar8 = *(byte **)(lVar2 + 0x38);
    for (cVar11 = *(char *)(lVar10 + 0x1a4); cVar11 != '\0'; cVar11 = cVar11 + -1) {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar13 = uVar13 << 8 | (uint)bVar1;
    }
    uVar14 = 0;
    cVar11 = *(char *)(lVar10 + 0x1a8);
    for (cVar12 = cVar11; cVar12 != '\0'; cVar12 = cVar12 + -1) {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar14 = uVar14 << 8 | (uint)bVar1;
    }
    pbVar8 = pbVar8 + *(int *)(lVar10 + 0x1a4);
    for (; cVar11 != '\0'; cVar11 = cVar11 + -1) {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar15 = uVar15 << 8 | (uint)bVar1;
    }
    uVar15 = uVar15 - uVar14;
    FT_Stream_ExitFrame(lVar2);
    if (*(uint *)(lVar10 + 0x1b0) <= uVar13) {
      return 9;
    }
    if (uVar15 == 0) {
      return local_78[0];
    }
    _Dst = (void *)FUN_143c271e0(local_70,uVar15,local_78);
    if (local_78[0] != 0) {
      return local_78[0];
    }
    iVar7 = FUN_143c24af0(lVar2,*(int *)(lVar10 + 0x1c0) + uVar14,_Dst,uVar15);
    if (iVar7 != 0) {
      return iVar7;
    }
    local_78[0] = 0;
    param_1 = local_60;
  }
  else {
    local_78[0] = (**(code **)*plVar3)(plVar3[1],param_2,&local_60);
    if (local_78[0] != 0) {
      return local_78[0];
    }
    uVar13 = 0;
    pbVar8 = local_60;
    for (cVar11 = *(char *)(lVar10 + 0x1a4); cVar11 != '\0'; cVar11 = cVar11 + -1) {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar13 = uVar13 << 8 | (uint)bVar1;
    }
    if (local_58 != 0) {
      uVar15 = local_58 - *(int *)(lVar10 + 0x1a4);
      _Dst = (void *)FUN_143c271e0(local_70,uVar15,local_78);
      if (local_78[0] == 0) {
        _guard_xfg_dispatch_icall_nop(_Dst,local_60 + *(int *)(lVar10 + 0x1a4),(ulonglong)uVar15);
      }
    }
    (**(code **)(*plVar3 + 8))(plVar3[1],&local_60);
    if (local_78[0] != 0) {
      return local_78[0];
    }
  }
  puVar9 = (undefined4 *)((ulonglong)uVar13 * 0x10 + *(longlong *)(lVar10 + 0x1d0));
  *(undefined4 *)(param_1 + 0x674) = *puVar9;
  *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(puVar9 + 2);
  param_1[0x680] = 0;
  param_1[0x681] = 0;
  param_1[0x682] = 0;
  param_1[0x683] = 0;
  param_1[0x684] = 0;
  param_1[0x685] = 0;
  param_1[0x686] = 0;
  param_1[0x687] = 0;
  lVar10 = (ulonglong)uVar13 * 0xfc + *(longlong *)(lVar10 + 0x1b8);
  uVar4 = *(undefined4 *)(lVar10 + 0xdc);
  uVar5 = *(undefined4 *)(lVar10 + 0xe0);
  uVar6 = *(undefined4 *)(lVar10 + 0xe4);
  *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(lVar10 + 0xd8);
  *(undefined4 *)(param_1 + 0x68c) = uVar4;
  *(undefined4 *)(param_1 + 0x690) = uVar5;
  *(undefined4 *)(param_1 + 0x694) = uVar6;
  *(undefined8 *)(param_1 + 0x698) = *(undefined8 *)(lVar10 + 0xe8);
  uVar13 = *(uint *)(lVar10 + 4);
  *(uint *)(param_1 + 0x670) = uVar13;
  uVar14 = 0;
  if (-1 < (int)uVar13) {
    (**(code **)(local_50 + 0x20))(_Dst,uVar15,0x10ea);
    uVar14 = uVar13;
  }
  local_78[0] = (**(code **)(param_1 + 0x708))
                          (param_1,(ulonglong)uVar14 + (longlong)_Dst,uVar15 - uVar14);
  ft_mem_free(local_70,_Dst);
  if (((local_78[0] == 0) && (plVar3 != (longlong *)0x0)) && (*(longlong *)(*plVar3 + 0x10) != 0)) {
    iVar7 = FT_RoundFix(*(undefined4 *)(param_1 + 0x38));
    local_50 = (ulonglong)(uint)(iVar7 >> 0x10);
    local_48 = FT_RoundFix(*(undefined4 *)(param_1 + 0x40));
    local_48 = local_48 >> 0x10;
    local_44 = FT_RoundFix(*(undefined4 *)(param_1 + 0x44));
    local_44 = local_44 >> 0x10;
    local_78[0] = (**(code **)(*plVar3 + 0x10))(plVar3[1],local_68,0,&local_50);
    *(int *)(param_1 + 0x38) = (int)local_50 << 0x10;
    *(int *)(param_1 + 0x40) = local_48 << 0x10;
    *(int *)(param_1 + 0x44) = local_44 << 0x10;
  }
  return local_78[0];
}



// FUNCTION 143c4f5f0 FUN_143c4f5f0 body=204 status=ok
// SIG undefined FUN_143c4f5f0(void)

ulonglong FUN_143c4f5f0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong local_res8 [4];
  
  if (*(int *)(param_3 + 0xc) == 0xb) {
    (**(code **)(param_3 + 0x10))(param_1,param_2);
    return (ulonglong)*(uint *)(param_2 + 0x18);
  }
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 0) {
    local_res8[0] = param_1 + 0xe8;
  }
  else if (iVar1 == 2) {
    local_res8[0] = param_1 + 0x1c8;
  }
  else if (iVar1 == 3) {
    local_res8[0] = param_1 + 0x110;
  }
  else if (iVar1 == 5) {
    local_res8[0] = param_1 + 0x148;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xb8);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x1b0) <= iVar1)) {
      return 0xa0;
    }
    local_res8[0] = (longlong)iVar1 * 0xfc + *(longlong *)(param_1 + 0x1b8);
  }
  if (1 < *(int *)(param_3 + 0xc) - 9U) {
    uVar2 = (**(code **)(param_2 + 0x80))();
    return uVar2;
  }
  uVar2 = (**(code **)(param_2 + 0x88))(param_2,param_3,local_res8,0,0);
  return uVar2;
}



// FUNCTION 143c4f6c0 FUN_143c4f6c0 body=388 status=ok
// SIG undefined FUN_143c4f6c0(void)

ulonglong FUN_143c4f6c0(longlong param_1,int *param_2,char *param_3,ulonglong param_4)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  undefined **ppuVar10;
  
  pcVar6 = param_3 + (param_4 & 0xffffffff);
  param_2[6] = 0;
  *(char **)(param_2 + 4) = pcVar6;
  *(char **)param_2 = param_3;
  do {
    while( true ) {
      *(char **)param_2 = param_3;
      (**(code **)(param_2 + 0xe))(param_2);
      if (*(char **)param_2 < pcVar6) {
        pcVar7 = *(char **)param_2 + -0x11;
      }
      else {
        pcVar7 = pcVar6 + -0x12;
      }
      for (; param_3 < pcVar7; param_3 = param_3 + 1) {
        if (((*param_3 == '%') &&
            (iVar1 = _guard_xfg_dispatch_icall_nop(param_3,"%ADOBeginFontDict",0x11), iVar1 == 0))
           && (0 < *(int *)(param_1 + 0x1b0))) {
          param_2[0x2e] = param_2[0x2e] + 1;
        }
      }
      pcVar7 = *(char **)param_2;
      if (((pcVar6 <= pcVar7) || ((**(code **)(param_2 + 0x10))(), pcVar6 <= *(char **)param_2)) ||
         (param_2[6] != 0)) {
        return (ulonglong)(uint)param_2[6];
      }
      if ((*pcVar7 == '/') && (pcVar7 + 2 < pcVar6)) break;
LAB_143c4f80b:
      param_3 = *(char **)param_2;
    }
    pcVar5 = pcVar7 + 1;
    uVar9 = *param_2 - (int)pcVar5;
    if (0x14 < uVar9 - 1) goto LAB_143c4f80b;
    pcVar8 = "CIDFontName";
    ppuVar10 = &PTR_s_CIDFontName_145d24e10;
    do {
      if (*pcVar5 == *pcVar8) {
        uVar3 = 0xffffffffffffffff;
        do {
          uVar3 = uVar3 + 1;
        } while (pcVar8[uVar3] != '\0');
        if (uVar9 == uVar3) {
          uVar4 = 1;
          if (uVar9 < 2) {
LAB_143c4f7f6:
            uVar3 = FUN_143c4f5f0(param_1,param_2,ppuVar10);
            param_2[6] = (int)uVar3;
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            goto LAB_143c4f80b;
          }
          pcVar2 = pcVar7 + 2;
          while (*pcVar2 == pcVar2[(longlong)pcVar8 - (longlong)pcVar5]) {
            uVar4 = uVar4 + 1;
            pcVar2 = pcVar2 + 1;
            if (uVar9 <= uVar4) goto LAB_143c4f7f6;
          }
        }
      }
      pcVar8 = ppuVar10[6];
      ppuVar10 = ppuVar10 + 6;
    } while (pcVar8 != (char *)0x0);
    param_3 = *(char **)param_2;
  } while( true );
}



// FUNCTION 143c4f850 FUN_143c4f850 body=843 status=ok
// SIG undefined FUN_143c4f850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c4f850(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *_Str1;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined1 auStack_198 [32];
  int local_178;
  longlong local_170;
  char local_168 [10];
  char local_15e [262];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_170 = param_2;
  _guard_xfg_dispatch_icall_nop(param_1,0,0xc0);
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = param_2;
  iVar3 = IStreamingManager::GetNumWantingResourcesID(param_2);
  local_178 = iVar3;
  iVar4 = FUN_143c24650(param_2,0x1f);
  if (iVar4 == 0) {
    iVar5 = _guard_xfg_dispatch_icall_nop
                      (*(char **)(param_2 + 0x38),"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
    if (iVar5 != 0) {
      iVar4 = 2;
    }
    FT_Stream_ExitFrame(param_2);
    if (iVar4 == 0) {
LAB_143c4f910:
      pcVar10 = local_168;
      uVar8 = 0x10a;
      iVar4 = IStreamingManager::GetNumWantingResourcesID(param_2);
      while( true ) {
        iVar5 = IStreamingManager::GetNumWantingResourcesID(param_2);
        uVar7 = *(int *)(param_2 + 8) - iVar5;
        if (uVar7 == 0) break;
        if (uVar8 < uVar7) {
          uVar7 = uVar8;
        }
        uVar9 = (ulonglong)uVar7;
        iVar5 = FUN_143c24ae0(param_2,pcVar10,uVar9);
        if (iVar5 != 0) {
          return iVar5;
        }
        if (uVar7 < 0x100) {
          pcVar10[uVar9] = '\0';
        }
        pcVar1 = local_168;
joined_r0x000143c4f976:
        pcVar2 = pcVar1;
        if (pcVar2 < pcVar10 + (uVar9 - 10)) {
          if ((*pcVar2 != 'S') ||
             (iVar5 = _guard_xfg_dispatch_icall_nop(pcVar2,"StartData",9), iVar5 != 0))
          goto LAB_143c4f996;
          iVar5 = ((int)pcVar2 - (int)local_168) + 10;
          goto LAB_143c4f9fd;
        }
        _guard_xfg_dispatch_icall_nop(local_168,pcVar2,10);
        uVar8 = 0x100;
        pcVar10 = local_15e;
        iVar4 = iVar4 + 0x100;
      }
LAB_143c4fb63:
      iVar4 = 3;
    }
  }
  return iVar4;
LAB_143c4f996:
  pcVar1 = pcVar2 + 1;
  if ((pcVar2[1] == 's') && (iVar5 = _guard_xfg_dispatch_icall_nop(pcVar2,"/sfnts",6), iVar5 == 0))
  {
    iVar5 = ((int)pcVar2 - (int)local_168) + 7;
LAB_143c4f9fd:
    iVar5 = iVar5 + iVar4;
    uVar8 = iVar5 - iVar3;
    iVar3 = FUN_143c251d0(param_2,iVar3);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = FT_Stream_ExtractFrame(param_2,uVar8,param_1 + 0x13);
    if (iVar3 != 0) {
      return iVar3;
    }
    pcVar10 = (char *)param_1[0x13];
    *(int *)((longlong)param_1 + 0xa4) = iVar5;
    param_1[2] = (longlong)(pcVar10 + uVar8);
    *(uint *)(param_1 + 0x14) = uVar8;
    param_1[1] = (longlong)pcVar10;
    *param_1 = (longlong)pcVar10;
    *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
    (*(code *)param_1[8])(param_1);
    (*(code *)param_1[7])(param_1);
    pcVar1 = (char *)*param_1;
    (*(code *)param_1[8])(param_1);
    (*(code *)param_1[7])(param_1);
    pcVar2 = (char *)param_1[2];
    _Str1 = (char *)*param_1;
    param_2 = local_170;
    goto joined_r0x000143c4fa92;
  }
  goto joined_r0x000143c4f976;
joined_r0x000143c4fa92:
  local_170 = param_2;
  if (pcVar2 <= _Str1) goto LAB_143c4faf9;
  if ((int)param_1[3] != 0) {
    return (int)param_1[3];
  }
  if ((*_Str1 == 'S') && (iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"StartData",9), iVar3 == 0)) {
    iVar3 = _guard_xfg_dispatch_icall_nop(pcVar10,"(Hex)",5);
    if (iVar3 != 0) {
      return 0;
    }
    lVar6 = _guard_xfg_dispatch_icall_nop(pcVar1);
    if (-1 < lVar6) {
      *(long *)(param_1 + 0x15) = lVar6;
      return 0;
    }
    goto LAB_143c4fb63;
  }
  if ((_Str1[1] == 's') && (iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"/sfnts",6), iVar3 == 0)) {
    return 2;
  }
  (*(code *)param_1[8])(param_1);
  (*(code *)param_1[7])(param_1);
  pcVar10 = pcVar1;
  pcVar1 = _Str1;
  _Str1 = (char *)*param_1;
  param_2 = local_170;
  goto joined_r0x000143c4fa92;
LAB_143c4faf9:
  FT_Stream_ReleaseFrame(param_2,param_1 + 0x13);
  iVar4 = FUN_143c251d0(param_2,iVar5);
  iVar3 = local_178;
  if (iVar4 != 0) {
    return iVar4;
  }
  goto LAB_143c4f910;
}



// FUNCTION 143c4fba0 FUN_143c4fba0 body=1094 status=ok
// SIG undefined FUN_143c4fba0(void)

int FUN_143c4fba0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  longlong lVar18;
  char cVar19;
  ulonglong uVar20;
  int local_res10 [2];
  uint local_res18;
  int local_res20;
  longlong local_68;
  
  lVar4 = *(longlong *)(param_1 + 0xe0);
  puVar13 = (uint *)0x0;
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  lVar6 = *(longlong *)(param_1 + 0x1e8);
  local_res18 = 0;
  puVar8 = (uint *)FUN_143c27410(uVar5,0x10,0,*(undefined4 *)(param_1 + 0x1b0),0,local_res10);
  *(uint **)(param_1 + 0x1d0) = puVar8;
  puVar9 = puVar13;
  if ((local_res10[0] == 0) &&
     (local_res20 = 0, puVar9 = (uint *)0x0, 0 < *(int *)(param_1 + 0x1b0))) {
    local_68 = 0;
    puVar9 = puVar13;
    while( true ) {
      lVar18 = *(longlong *)(param_1 + 0x1b8) + local_68;
      uVar17 = *(uint *)(lVar18 + 0xf0);
      uVar14 = (ulonglong)uVar17;
      iVar2 = *(int *)(lVar18 + 4);
      if (uVar17 == 0xffffffff) break;
      uVar15 = uVar17 + 1;
      uVar12 = local_res18;
      if ((uint)puVar13 < uVar15) {
        uVar12 = uVar17 + 4 & 0xfffffffc;
        if (uVar12 <= local_res18) {
          local_res10[0] = 0xa0;
          goto LAB_143c4ff1c;
        }
        puVar9 = (uint *)FUN_143c27410(uVar5,4,local_res18,uVar12,puVar9,local_res10);
        if (local_res10[0] != 0) goto LAB_143c4ff1c;
      }
      local_res18 = uVar12;
      local_res10[0] = FUN_143c251d0(lVar6,*(int *)(lVar18 + 0xf4) + *(int *)(param_1 + 0x1c0));
      if ((local_res10[0] != 0) ||
         (local_res10[0] = FUN_143c24650(lVar6,*(int *)(lVar18 + 0xf8) * uVar15),
         local_res10[0] != 0)) goto LAB_143c4ff1c;
      pbVar11 = *(byte **)(lVar6 + 0x38);
      uVar20 = (ulonglong)uVar15;
      puVar13 = puVar9;
      do {
        uVar12 = 0;
        for (cVar19 = *(char *)(lVar18 + 0xf8); cVar19 != '\0'; cVar19 = cVar19 + -1) {
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          uVar12 = uVar12 << 8 | (uint)bVar1;
        }
        *puVar13 = uVar12;
        puVar13 = puVar13 + 1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      FT_Stream_ExitFrame(lVar6);
      uVar20 = 1;
      if (uVar17 != 0) {
        do {
          if (puVar9[uVar20] < puVar9[(int)uVar20 - 1]) goto LAB_143c4ff1c;
          uVar12 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar12;
        } while (uVar12 <= uVar17);
      }
      uVar12 = puVar9[uVar14];
      uVar3 = *puVar9;
      uVar10 = FUN_143c27410(uVar5,8,0,uVar15,0,local_res10);
      *(undefined8 *)(puVar8 + 2) = uVar10;
      if (local_res10[0] != 0) goto LAB_143c4ff1c;
      uVar10 = FUN_143c271e0(uVar5,uVar12 - uVar3,local_res10);
      **(undefined8 **)(puVar8 + 2) = uVar10;
      if (((local_res10[0] != 0) ||
          (local_res10[0] = FUN_143c251d0(lVar6,*(int *)(param_1 + 0x1c0) + *puVar9),
          local_res10[0] != 0)) ||
         (local_res10[0] = FUN_143c24ae0(lVar6,**(undefined8 **)(puVar8 + 2),uVar12 - uVar3),
         local_res10[0] != 0)) goto LAB_143c4ff1c;
      uVar12 = 1;
      if (uVar17 != 0) {
        do {
          uVar15 = uVar12 - 1;
          uVar20 = (ulonglong)uVar12;
          uVar12 = uVar12 + 1;
          *(ulonglong *)(*(longlong *)(puVar8 + 2) + uVar20 * 8) =
               (ulonglong)(puVar9[uVar20] - puVar9[uVar15]) +
               *(longlong *)(*(longlong *)(puVar8 + 2) + (ulonglong)uVar15 * 8);
        } while (uVar12 <= uVar17);
      }
      if ((-1 < iVar2) && (uVar17 != 0)) {
        lVar18 = 0;
        puVar13 = puVar9;
        puVar16 = puVar9;
        do {
          puVar16 = puVar16 + 1;
          (**(code **)(lVar4 + 0x20))
                    (*(undefined8 *)(lVar18 + *(longlong *)(puVar8 + 2)),*puVar16 - *puVar13,0x10ea)
          ;
          puVar13 = puVar13 + 1;
          lVar18 = lVar18 + 8;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      local_res20 = local_res20 + 1;
      *puVar8 = uVar17;
      local_68 = local_68 + 0xfc;
      puVar8 = puVar8 + 4;
      if (*(int *)(param_1 + 0x1b0) <= local_res20) goto LAB_143c4ffb5;
      puVar13 = (uint *)(ulonglong)local_res18;
    }
    local_res10[0] = 0xa0;
LAB_143c4ff1c:
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      uVar20 = 0;
      uVar14 = uVar20;
      if (0 < *(int *)(param_1 + 0x1b0)) {
        do {
          puVar7 = *(undefined8 **)(uVar20 + 8 + *(longlong *)(param_1 + 0x1d0));
          if (puVar7 != (undefined8 *)0x0) {
            ft_mem_free(uVar5,*puVar7);
            **(undefined8 **)(uVar20 + 8 + *(longlong *)(param_1 + 0x1d0)) = 0;
          }
          ft_mem_free(uVar5,*(undefined8 *)(uVar20 + 8 + *(longlong *)(param_1 + 0x1d0)));
          uVar17 = (int)uVar14 + 1;
          *(undefined8 *)(uVar20 + 8 + *(longlong *)(param_1 + 0x1d0)) = 0;
          uVar20 = uVar20 + 0x10;
          uVar14 = (ulonglong)uVar17;
        } while ((int)uVar17 < *(int *)(param_1 + 0x1b0));
      }
      ft_mem_free(uVar5,*(undefined8 *)(param_1 + 0x1d0));
      *(undefined8 *)(param_1 + 0x1d0) = 0;
    }
  }
LAB_143c4ffb5:
  ft_mem_free(uVar5,puVar9);
  return local_res10[0];
}



// FUNCTION 143c4fff0 FUN_143c4fff0 body=526 status=ok
// SIG undefined FUN_143c4fff0(void)

int FUN_143c4fff0(longlong param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  ulonglong uVar10;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if ((byte *)(param_1 + 5U) <= param_2) {
    bVar1 = *(byte *)(param_1 + 4);
    uVar10 = (ulonglong)bVar1;
    pbVar6 = (byte *)(param_1 + 5);
    bVar2 = *(byte *)(param_1 + 3);
    uVar3 = *(int *)(param_3 + 0xf) + (uint)bVar1;
    if (*(uint *)((longlong)param_3 + 0x7c) < uVar3) {
      uVar3 = uVar3 + 3 & 0xfffffffc;
      uVar4 = FUN_143c27410(*param_3,0x28,*(int *)(param_3 + 0xf),uVar3,param_3[0x10],local_res8);
      param_3[0x10] = uVar4;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      *(uint *)((longlong)param_3 + 0x7c) = uVar3;
    }
    iVar9 = 8;
    if ((bVar2 & 1) != 0) {
      iVar9 = 9;
    }
    if ((bVar2 & 2) != 0) {
      iVar9 = iVar9 + 1;
    }
    if ((bVar2 & 4) != 0) {
      iVar9 = iVar9 + 1;
    }
    if ((bVar2 & 8) != 0) {
      iVar9 = iVar9 + 1;
    }
    if ((bVar2 & 0x10) != 0) {
      iVar9 = iVar9 + 1;
    }
    puVar5 = (uint *)(param_3[0x10] + (ulonglong)*(uint *)(param_3 + 0xf) * 0x28);
    if (pbVar6 + iVar9 * (uint)bVar1 <= param_2) {
      if (bVar1 != 0) {
        do {
          if ((bVar2 & 1) == 0) {
            uVar3 = (uint)*pbVar6;
            pbVar7 = pbVar6 + 1;
          }
          else {
            pbVar7 = pbVar6 + 2;
            uVar3 = (uint)CONCAT11(*pbVar6,pbVar6[1]);
          }
          *puVar5 = uVar3;
          if ((bVar2 & 2) == 0) {
            uVar3 = (uint)*pbVar7;
            pbVar6 = pbVar7 + 1;
          }
          else {
            pbVar6 = pbVar7 + 2;
            uVar3 = (uint)CONCAT11(*pbVar7,pbVar7[1]);
          }
          puVar5[1] = uVar3;
          puVar5[2] = (uint)*pbVar6;
          if ((bVar2 & 4) == 0) {
            pbVar7 = pbVar6 + 3;
            uVar3 = (uint)pbVar6[1];
          }
          else {
            pbVar7 = pbVar6 + 4;
            uVar3 = (uint)CONCAT11(pbVar6[1],pbVar6[2]);
          }
          puVar5[5] = uVar3 << 8 | (uint)pbVar7[-1];
          if ((bVar2 & 8) == 0) {
            pbVar8 = pbVar7 + 2;
            uVar3 = (uint)*pbVar7;
          }
          else {
            pbVar8 = pbVar7 + 3;
            uVar3 = (uint)CONCAT11(*pbVar7,pbVar7[1]);
          }
          puVar5[6] = uVar3 << 8 | (uint)pbVar8[-1];
          if ((bVar2 & 0x10) == 0) {
            uVar3 = (uint)*pbVar8;
            pbVar6 = pbVar8 + 1;
          }
          else {
            pbVar6 = pbVar8 + 2;
            uVar3 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
          }
          puVar5[7] = uVar3;
          puVar5 = puVar5 + 10;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      *(uint *)(param_3 + 0xf) = *(int *)(param_3 + 0xf) + (uint)bVar1;
      return local_res8[0];
    }
  }
  return 8;
}



// FUNCTION 143c50200 FUN_143c50200 body=129 status=ok
// SIG undefined FUN_143c50200(void)

int FUN_143c50200(void *param_1,int param_2,undefined8 *param_3)

{
  void *_Dst;
  uint uVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  uVar1 = param_2 - (int)param_1;
  if (param_3[0xc] == 0) {
    _Dst = (void *)FUN_143c271e0(*param_3,uVar1 + 1,local_res8);
    param_3[0xc] = _Dst;
    if (local_res8[0] == 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_1,(ulonglong)uVar1);
      *(undefined1 *)((ulonglong)uVar1 + param_3[0xc]) = 0;
      return local_res8[0];
    }
  }
  else {
    local_res8[0] = 0;
  }
  return local_res8[0];
}



// FUNCTION 143c50290 FUN_143c50290 body=238 status=ok
// SIG undefined FUN_143c50290(void)

int FUN_143c50290(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int local_res18 [2];
  
  local_res18[0] = 0;
  if (param_3[0xb] != 0) {
    return 0;
  }
  if (param_1 + 1 <= param_2) {
    uVar4 = *param_1 & 0xf;
    iVar3 = (*param_1 >> 4) + uVar4;
    if (param_1 + 1 + (uint)(iVar3 * 2) <= param_2) {
      puVar2 = (uint *)FUN_143c27410(*param_3,4,0,iVar3,0,local_res18);
      if (local_res18[0] != 0) {
        return local_res18[0];
      }
      param_3[0xb] = puVar2;
      param_3[9] = puVar2 + uVar4;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 2;
        *puVar2 = (int)(short)((ushort)*pbVar1 << 8) | (uint)*param_1;
        puVar2 = puVar2 + 1;
      }
      return 0;
    }
  }
  return 8;
}



// FUNCTION 143c50380 FUN_143c50380 body=466 status=ok
// SIG undefined FUN_143c50380(void)

int FUN_143c50380(undefined1 *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int local_res18 [2];
  
  uVar3 = *param_3;
  local_res18[0] = 0;
  puVar6 = (undefined8 *)FUN_143c271e0(uVar3,0x20,local_res18);
  if (local_res18[0] == 0) {
    if (param_1 + 4 <= param_2) {
      *(undefined1 *)(puVar6 + 1) = *param_1;
      *(ushort *)((longlong)puVar6 + 10) = CONCAT11(param_1[1],param_1[2]);
      bVar1 = param_1[3];
      pbVar9 = param_1 + 4;
      *(byte *)((longlong)puVar6 + 9) = bVar1;
      uVar10 = *(uint *)(param_3 + 1);
      lVar4 = param_3[0x1b];
      *(undefined4 *)((longlong)puVar6 + 0xc) = 3;
      puVar6[2] = pbVar9 + ((ulonglong)uVar10 - lVar4);
      uVar5 = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((bVar1 & 1) != 0) {
        uVar5 = 5;
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = uVar5;
      if ((bVar1 & 2) != 0) {
        *(int *)((longlong)puVar6 + 0xc) = *(int *)((longlong)puVar6 + 0xc) + 1;
      }
      uVar10 = (uint)*(byte *)(puVar6 + 1);
      iVar2 = *(int *)((longlong)puVar6 + 0xc);
      if (pbVar9 + uVar10 * iVar2 <= param_2) {
        if (*(byte *)(puVar6 + 1) != 0) {
          if ((bVar1 & 1) == 0) {
            uVar7 = (ulonglong)((uVar10 - 1) * iVar2);
            *(uint *)(puVar6 + 3) = (uint)*pbVar9 << 0x10 | (uint)(byte)param_1[5];
            *(uint *)((longlong)puVar6 + 0x1c) =
                 (uint)pbVar9[uVar7] << 0x10 | (uint)pbVar9[uVar7 + 1];
          }
          else {
            pbVar8 = pbVar9 + (uVar10 - 1) * iVar2;
            *(uint *)(puVar6 + 3) =
                 CONCAT22(CONCAT11(*pbVar9,param_1[5]),CONCAT11(param_1[6],param_1[7]));
            *(uint *)((longlong)puVar6 + 0x1c) =
                 CONCAT22(CONCAT11(*pbVar8,pbVar8[1]),CONCAT11(pbVar8[2],pbVar8[3]));
          }
          *puVar6 = 0;
          *(undefined8 **)param_3[0x19] = puVar6;
          param_3[0x19] = puVar6;
          *(uint *)(param_3 + 0x17) = *(int *)(param_3 + 0x17) + (uint)*(byte *)(puVar6 + 1);
          return 0;
        }
        ft_mem_free(uVar3,puVar6);
        return local_res18[0];
      }
    }
    ft_mem_free(uVar3,puVar6);
    local_res18[0] = 8;
  }
  return local_res18[0];
}



// FUNCTION 143c50620 FUN_143c50620 body=185 status=ok
// SIG undefined FUN_143c50620(void)

int FUN_143c50620(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  do {
    uVar5 = uVar5 + 1;
    uVar3 = 0;
    uVar2 = *(uint *)(param_1 + 0x18);
    while( true ) {
      uVar4 = uVar2;
      if (uVar4 <= uVar3) {
        if ((uVar3 < *(uint *)(param_1 + 0x18)) && (uVar3 != 0)) {
          *param_2 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 0x10);
          return uVar3 + 1;
        }
        *param_2 = 0;
        return 0;
      }
      uVar2 = (uVar4 - uVar3 >> 1) + uVar3;
      uVar1 = *(uint *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x20));
      if (uVar1 == uVar5) break;
      if (uVar1 < uVar5) {
        uVar3 = uVar2 + 1;
        uVar2 = uVar4;
      }
    }
    if (uVar2 != 0) {
      *param_2 = uVar5;
      return uVar2 + 1;
    }
  } while( true );
}



// FUNCTION 143c506e0 FUN_143c506e0 body=928 status=ok
// SIG undefined FUN_143c506e0(void)

int FUN_143c506e0(undefined8 param_1,uint *param_2,uint param_3,int param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res10 [2];
  int local_res20 [2];
  uint *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_res20[0] = param_4;
  iVar6 = FUN_143c251d0(param_1,0);
  if ((iVar6 == 0) && (iVar6 = FUN_143c24c00(param_1,&DAT_145d259b0,param_2 + 0x36), iVar6 == 0)) {
    param_2[0x3f] = param_2[0x3f] + param_2[0x48] * 0x10000;
  }
  local_res20[0] = iVar6;
  if (local_res20[0] == 0) {
    if ((((param_2[0x36] == 0x50465230) && (param_2[0x37] < 5)) && (0x39 < param_2[0x39])) &&
       (param_2[0x38] == 0xd0a)) {
      uVar12 = 0;
      uVar9 = 0;
      local_res10[0] = FUN_143c251d0(param_1,param_2[0x3b]);
      if ((local_res10[0] == 0) && (uVar5 = FUN_143c25070(param_1,local_res10), local_res10[0] == 0)
         ) {
        uVar9 = (uint)uVar5;
      }
      local_res20[0] = local_res10[0];
      if ((local_res10[0] == 0) && (*param_2 = uVar9, -1 < (int)param_3)) {
        if ((int)param_3 < (int)uVar9) {
          local_res20[0] =
               FUN_143c52500(param_2 + 0x51,param_1,param_3,param_2[0x3b],param_2[0x48] != 0);
          if ((local_res20[0] == 0) &&
             (local_res20[0] = FUN_143c52a40(param_2 + 0x5e,param_1,param_2[0x5c],param_2[0x5b]),
             local_res20[0] == 0)) {
            param_2[1] = param_3;
            uVar8 = 0;
            param_2[2] = param_2[2] | 1;
            param_2[4] = param_2[0x86] + 1;
            uVar9 = param_2[0x86];
            if (uVar9 != 0) {
              uVar13 = uVar12;
              do {
                uVar8 = (uint)uVar13;
                if (*(int *)(*(longlong *)(param_2 + 0x8a) + 0xc + uVar13 * 0x10) != 0) break;
                uVar8 = uVar8 + 1;
                uVar13 = (ulonglong)uVar8;
              } while (uVar8 < uVar9);
            }
            if (uVar8 == uVar9) {
              if (param_2[0x7c] == 0) {
                return 3;
              }
              param_2[2] = 0;
            }
            if ((param_2[0x68] & 4) == 0) {
              param_2[2] = param_2[2] | 4;
            }
            if ((param_2[0x68] & 1) == 0) {
              param_2[2] = param_2[2] | 0x10;
            }
            else {
              param_2[2] = param_2[2] | 0x20;
            }
            if (param_2[0x7c] != 0) {
              param_2[2] = param_2[2] | 2;
            }
            if (param_2[0x8c] != 0) {
              param_2[2] = param_2[2] | 0x40;
            }
            *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x78);
            if (*(longlong *)(param_2 + 0x78) == 0) {
              *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_2 + 0x76);
            }
            *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x7a);
            param_2[10] = 0;
            param_2[0xc] = 0;
            param_2[0xd] = 0;
            param_2[0x16] = param_2[100];
            param_2[0x17] = param_2[0x65];
            param_2[0x18] = param_2[0x66];
            param_2[0x19] = param_2[0x67];
            uVar5 = (ushort)param_2[0x62];
            *(ushort *)(param_2 + 0x1a) = uVar5;
            sVar1 = (short)param_2[0x67];
            *(short *)((longlong)param_2 + 0x6a) = sVar1;
            sVar2 = (short)param_2[0x65];
            *(short *)(param_2 + 0x1b) = sVar2;
            sVar4 = (short)((((uint)uVar5 + (uint)uVar5 * 2) * 4) / 10);
            *(short *)((longlong)param_2 + 0x6e) = sVar4;
            if ((int)sVar4 < (int)sVar1 - (int)sVar2) {
              *(short *)((longlong)param_2 + 0x6e) = sVar1 - sVar2;
            }
            uVar9 = param_2[0x7c];
            if (uVar9 != 0) {
              puVar7 = (undefined2 *)
                       FUN_143c27410(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x30),0x10,0,
                                     uVar9,0,local_res20);
              *(undefined2 **)(param_2 + 0xc) = puVar7;
              if (local_res20[0] != 0) {
                return local_res20[0];
              }
              if (uVar9 != 0) {
                uVar13 = (ulonglong)uVar9;
                piVar10 = *(int **)(param_2 + 0x7e);
                do {
                  *puVar7 = (short)piVar10[1];
                  puVar7[1] = (short)*piVar10;
                  *(int *)(puVar7 + 2) = piVar10[1] << 6;
                  *(int *)(puVar7 + 4) = *piVar10 << 6;
                  *(int *)(puVar7 + 6) = piVar10[1] << 6;
                  uVar13 = uVar13 - 1;
                  puVar7 = puVar7 + 8;
                  piVar10 = piVar10 + 10;
                } while (uVar13 != 0);
              }
              param_2[10] = uVar9;
            }
            if ((param_2[0x68] & 4) == 0) {
              *(short *)(param_2 + 0x1c) = (short)param_2[0x69];
            }
            else {
              uVar9 = param_2[0x86];
              if (uVar9 != 0) {
                puVar11 = (uint *)(*(longlong *)(param_2 + 0x8a) + 4);
                do {
                  if ((int)uVar12 < (int)*puVar11) {
                    uVar12 = (ulonglong)*puVar11;
                  }
                  puVar11 = puVar11 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              *(short *)(param_2 + 0x1c) = (short)uVar12;
            }
            uVar5 = (ushort)param_2[0x1a];
            *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)((longlong)param_2 + 0x6e);
            lVar3 = (longlong)(int)(uint)uVar5 * -0x66666667;
            local_1c = 0x10003;
            local_20 = 0x756e6963;
            *(short *)(param_2 + 0x1d) = (short)(int)(lVar3 >> 0x22) - (short)(lVar3 >> 0x3f);
            iVar6 = (int)((ulonglong)((longlong)(int)(uint)uVar5 * -0x77777777) >> 0x20) +
                    (uint)uVar5;
            *(short *)((longlong)param_2 + 0x76) = (short)(iVar6 >> 4) - (short)(iVar6 >> 0x1f);
            local_28 = param_2;
            local_res20[0] = FUN_143c1ff20(&DAT_145d25910,0,&local_28,0);
            if (param_2[0x8c] != 0) {
              param_2[2] = param_2[2] | 0x40;
            }
          }
        }
        else {
          local_res20[0] = 6;
        }
      }
    }
    else {
      local_res20[0] = 2;
    }
  }
  return local_res20[0];
}



// FUNCTION 143c50a80 pfr_face_done body=95 status=ok
// SIG undefined pfr_face_done(void)

void pfr_face_done(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_143c52930(param_1 + 0x178,*(undefined8 *)(param_1 + 0x98));
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 143c50ae0 FUN_143c50ae0 body=602 status=ok
// SIG undefined FUN_143c50ae0(void)

ulonglong FUN_143c50ae0(longlong param_1,uint param_2,uint param_3,int *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar15;
  ulonglong uVar14;
  
  param_4[0] = 0;
  param_4[1] = 0;
  if (param_2 != 0) {
    param_2 = param_2 - 1;
  }
  if (param_3 != 0) {
    param_3 = param_3 - 1;
  }
  if ((*(uint *)(param_1 + 0x218) < param_2) || (*(uint *)(param_1 + 0x218) < param_3)) {
    return 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x238);
  lVar3 = *(longlong *)(param_1 + 0xa0);
  uVar12 = *(int *)(*(longlong *)(param_1 + 0x228) + (ulonglong)param_2 * 0x10) << 0x10 |
           (uint)*(ushort *)(*(longlong *)(param_1 + 0x228) + (ulonglong)param_3 * 0x10);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    if ((*(uint *)(puVar2 + 3) <= uVar12) && (uVar12 <= *(uint *)((longlong)puVar2 + 0x1c))) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  uVar7 = FUN_143c251d0(lVar3,*(undefined4 *)(puVar2 + 2));
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uVar7 = FUN_143c24650(lVar3,(uint)*(byte *)(puVar2 + 1) * *(int *)((longlong)puVar2 + 0xc));
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uVar11 = *(uint *)((longlong)puVar2 + 0xc);
  bVar1 = *(byte *)(puVar2 + 1);
  bVar5 = FUN_143c21b70(bVar1);
  pbVar4 = *(byte **)(lVar3 + 0x38);
  bVar15 = *(byte *)((longlong)puVar2 + 9) & 1;
  iVar6 = 1 << (bVar5 & 0x1f);
  bVar5 = *(byte *)((longlong)puVar2 + 9) & 2;
  uVar13 = iVar6 * uVar11;
  uVar14 = (ulonglong)uVar13;
  iVar6 = (uint)bVar1 - iVar6;
  if (iVar6 == 0) {
joined_r0x000143c50c43:
    while (uVar11 < uVar13) {
      uVar14 = uVar14 >> 1;
      uVar13 = (uint)uVar14;
      pbVar8 = pbVar4 + uVar14;
      if (bVar15 == 0) {
        pbVar9 = pbVar8 + 2;
        uVar10 = (uint)*pbVar8 << 0x10;
      }
      else {
        pbVar9 = pbVar8 + 4;
        uVar10 = (uint)CONCAT21(CONCAT11(*pbVar8,pbVar8[1]),pbVar8[2]) << 8;
      }
      if ((uVar10 | pbVar9[-1]) == uVar12) goto LAB_143c50cd7;
      if ((uVar10 | pbVar9[-1]) < uVar12) {
        pbVar4 = pbVar8;
      }
    }
    if (bVar15 == 0) {
      pbVar9 = pbVar4 + 2;
      uVar11 = (uint)*pbVar4 << 0x10;
    }
    else {
      pbVar9 = pbVar4 + 4;
      uVar11 = (uint)CONCAT21(CONCAT11(*pbVar4,pbVar4[1]),pbVar4[2]) << 8;
    }
    if ((uVar11 | pbVar9[-1]) != uVar12) goto LAB_143c50cfb;
  }
  else {
    pbVar8 = pbVar4 + iVar6 * uVar11;
    if (bVar15 == 0) {
      pbVar9 = pbVar8 + 2;
      uVar10 = (uint)*pbVar8 << 0x10;
    }
    else {
      pbVar9 = pbVar8 + 4;
      uVar10 = (uint)CONCAT21(CONCAT11(*pbVar8,pbVar8[1]),pbVar8[2]) << 8;
    }
    if ((uVar10 | pbVar9[-1]) != uVar12) {
      if ((uVar10 | pbVar9[-1]) < uVar12) {
        pbVar4 = pbVar9 + 1;
        if (bVar5 != 0) {
          pbVar4 = pbVar9 + 2;
        }
      }
      goto joined_r0x000143c50c43;
    }
  }
LAB_143c50cd7:
  if (bVar5 == 0) {
    uVar12 = (uint)*pbVar9;
  }
  else {
    uVar12 = (int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar9[1];
  }
  *param_4 = (int)*(short *)((longlong)puVar2 + 10) + uVar12;
LAB_143c50cfb:
  FT_Stream_ExitFrame(lVar3);
  return uVar7 & 0xffffffff;
}



// FUNCTION 143c50d40 pfr_slot_init body=86 status=ok
// SIG undefined pfr_slot_init(void)

undefined8 pfr_slot_init(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  *(undefined1 *)(param_1 + 0x128) = 0;
  FT_GlyphLoader_Rewind();
  return 0;
}



// FUNCTION 143c50da0 FUN_143c50da0 body=124 status=ok
// SIG undefined FUN_143c50da0(void)

void FUN_143c50da0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0x120);
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  return;
}



// FUNCTION 143c50e20 FUN_143c50e20 body=632 status=ok
// SIG undefined FUN_143c50e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c50e20(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60 = *(longlong *)(param_1 + 8);
  puVar1 = (undefined8 *)(param_1 + 0x98);
  if (param_3 != 0) {
    param_3 = param_3 - 1;
  }
  if ((local_60 != 0) && (param_3 < *(uint *)(local_60 + 0x218))) {
    local_68 = param_4;
    local_58 = param_2;
    if (((param_4 & 9) == 0) && (uVar9 = FUN_143c52fc0(param_1,param_2,param_3), (int)uVar9 == 0)) {
      return uVar9;
    }
    if ((param_4 >> 0xe & 1) == 0) {
      local_50 = (ulonglong)param_3 * 0x10 + *(longlong *)(local_60 + 0x228);
      *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
      iVar11 = 0;
      *(undefined4 *)puVar1 = 0;
      uVar7 = *(undefined4 *)(local_50 + 8);
      uVar2 = *(undefined4 *)(local_50 + 0xc);
      uVar3 = *(undefined8 *)(local_60 + 0xa0);
      uVar8 = *(undefined4 *)(local_60 + 0x110);
      FT_GlyphLoader_Rewind(*(undefined8 *)(param_1 + 0x120));
      *(undefined4 *)(param_1 + 0x110) = 0;
      local_78 = uVar7;
      uVar9 = FUN_143c51910(param_1 + 0xf8,uVar3,uVar8,uVar2);
      lVar5 = local_60;
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      lVar4 = *(longlong *)(param_1 + 0x120);
      local_68 = CONCAT31((int3)(local_68 >> 8),~(byte)local_68) & 0xffffff01;
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      *puVar1 = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(param_1 + 0xa0) = uVar3;
      uVar7 = *(undefined4 *)(lVar4 + 0x2c);
      uVar2 = *(undefined4 *)(lVar4 + 0x30);
      uVar8 = *(undefined4 *)(lVar4 + 0x34);
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(lVar4 + 0x28);
      *(undefined4 *)(param_1 + 0xac) = uVar7;
      *(undefined4 *)(param_1 + 0xb0) = uVar2;
      *(undefined4 *)(param_1 + 0xb4) = uVar8;
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar4 + 0x38);
      uVar6 = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
      *(uint *)(param_1 + 0xb8) = uVar6 | 4;
      if ((local_58 != 0) && (*(ushort *)(local_58 + 0x1a) < 0x18)) {
        *(uint *)(param_1 + 0xb8) = uVar6 | 0x104;
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      uVar7 = *(undefined4 *)(local_50 + 4);
      if (*(int *)(local_60 + 0x18c) != *(int *)(local_60 + 0x188)) {
        uVar7 = FUN_143c21f00(uVar7,*(int *)(local_60 + 0x188));
      }
      if ((*(byte *)(lVar5 + 0x1a0) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x40) = uVar7;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = uVar7;
      }
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined8 *)(param_1 + 0x44) = 0;
      if ((char)local_68 != '\0') {
        uVar7 = *(undefined4 *)(local_58 + 0x1c);
        uVar2 = *(undefined4 *)(local_58 + 0x20);
        puVar10 = *(undefined4 **)(param_1 + 0xa0);
        if (0 < *(short *)(param_1 + 0x9a)) {
          do {
            uVar8 = FUN_143c22100(*puVar10,uVar7);
            *puVar10 = uVar8;
            uVar8 = FUN_143c22100(puVar10[1],uVar2);
            puVar10[1] = uVar8;
            puVar10 = puVar10 + 2;
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(short *)(param_1 + 0x9a));
        }
        uVar7 = FUN_143c22100(*(undefined4 *)(param_1 + 0x40),uVar7);
        *(undefined4 *)(param_1 + 0x40) = uVar7;
        uVar7 = FUN_143c22100(*(undefined4 *)(param_1 + 0x4c),uVar2);
        *(undefined4 *)(param_1 + 0x4c) = uVar7;
      }
      FUN_143c22f00(puVar1,&local_50);
      *(int *)(param_1 + 0x38) = (int)local_50;
      *(int *)(param_1 + 0x30) = local_48 - (int)local_50;
      *(int *)(param_1 + 0x34) = local_44 - local_50._4_4_;
      *(int *)(param_1 + 0x3c) = local_44 - (local_44 - local_50._4_4_);
      return uVar9 & 0xffffffff;
    }
  }
  return 6;
}



// FUNCTION 143c510a0 FUN_143c510a0 body=93 status=ok
// SIG undefined FUN_143c510a0(void)

undefined8 FUN_143c510a0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  
  FUN_143c50ae0();
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x18c)) {
    if (*param_4 != 0) {
      iVar1 = FUN_143c21f00();
      *param_4 = iVar1;
    }
    if (param_4[1] != 0) {
      iVar1 = FUN_143c21f00(param_4[1],*(undefined4 *)(param_1 + 0x188),
                            *(undefined4 *)(param_1 + 0x18c));
      param_4[1] = iVar1;
    }
  }
  return 0;
}



// FUNCTION 143c51140 FUN_143c51140 body=152 status=ok
// SIG undefined FUN_143c51140(void)

undefined8
FUN_143c51140(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x188);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x18c);
  }
  uVar2 = 0x10000;
  uVar3 = 0x10000;
  if (lVar1 != 0) {
    uVar2 = FUN_143c20070((ulonglong)*(ushort *)(lVar1 + 0x18) << 6,*(undefined4 *)(param_1 + 0x18c)
                         );
    uVar3 = FUN_143c20070((ulonglong)*(ushort *)(lVar1 + 0x1a) << 6,*(undefined4 *)(param_1 + 0x18c)
                         );
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar2;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar3;
  }
  return 0;
}



// FUNCTION 143c511f0 FUN_143c511f0 body=189 status=ok
// SIG undefined FUN_143c511f0(void)

int FUN_143c511f0(char *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  void *_Dst;
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int local_res10 [2];
  ulonglong _Size;
  
  uVar2 = 0;
  local_res10[0] = 0;
  _Size = (ulonglong)param_2;
  if ((param_2 != 0) && (param_1[param_2 - 1] == '\0')) {
    _Size = (ulonglong)(param_2 - 1);
  }
  uVar3 = (uint)_Size;
  pcVar1 = param_1;
  if (uVar3 != 0) {
    do {
      if (0x5f < (byte)(*pcVar1 - 0x20U)) goto LAB_143c51297;
      uVar2 = uVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar2 < uVar3);
  }
  if (uVar3 != 0) {
    _Dst = (void *)FUN_143c271e0(param_3,uVar3 + 1,local_res10);
    if (local_res10[0] == 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_1,_Size);
      *(undefined1 *)(_Size + (longlong)_Dst) = 0;
    }
    *param_4 = _Dst;
    return local_res10[0];
  }
LAB_143c51297:
  *param_4 = 0;
  return 0;
}



// FUNCTION 143c512b0 FUN_143c512b0 body=232 status=ok
// SIG undefined FUN_143c512b0(void)

void FUN_143c512b0(longlong *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  iVar11 = *(int *)((longlong)param_1 + 0x14);
  uVar5 = 0;
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  uVar8 = 0;
  puVar7 = (undefined1 *)*param_1;
  uVar4 = 0;
  bVar3 = true;
  bVar2 = true;
  uVar9 = 0x80;
  if (iVar11 != 0) {
    do {
      if (bVar2) {
        do {
          if (bVar3) {
            if (param_3 <= param_2) break;
            bVar1 = *param_2;
            param_2 = param_2 + 1;
            uVar8 = bVar1 & 0xf;
            bVar3 = false;
            uVar4 = (int)(uint)bVar1 >> 4;
          }
          else {
            bVar3 = true;
            uVar4 = uVar8;
          }
        } while (uVar4 == 0);
      }
      if (bVar3) {
        uVar5 = uVar5 | uVar9;
      }
      uVar10 = uVar9 >> 1;
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        *puVar7 = (char)uVar5;
        *param_1 = *param_1 + (longlong)(int)param_1[1];
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        puVar7 = (undefined1 *)*param_1;
LAB_143c5135d:
        uVar5 = 0;
        uVar10 = 0x80;
      }
      else if (uVar9 >> 1 == 0) {
        *puVar7 = (char)uVar5;
        puVar7 = puVar7 + 1;
        goto LAB_143c5135d;
      }
      uVar4 = uVar4 - 1;
      bVar2 = (int)uVar4 < 1;
      iVar11 = iVar11 + -1;
      uVar9 = uVar10;
    } while (iVar11 != 0);
    if (uVar10 != 0x80) {
      *puVar7 = (char)uVar5;
    }
  }
  return;
}



// FUNCTION 143c513a0 FUN_143c513a0 body=186 status=ok
// SIG undefined FUN_143c513a0(void)

void FUN_143c513a0(longlong *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  uVar4 = 0;
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  uVar8 = 0;
  puVar7 = (undefined1 *)*param_1;
  bVar3 = true;
  bVar2 = true;
  uVar9 = 0x80;
  if (iVar5 != 0) {
    do {
      if (bVar2) {
        do {
          if (param_3 <= param_2) break;
          bVar1 = *param_2;
          uVar8 = (uint)bVar1;
          bVar3 = (bool)(bVar3 ^ 1);
          param_2 = param_2 + 1;
        } while (bVar1 == 0);
      }
      if (bVar3) {
        uVar4 = uVar4 | uVar9;
      }
      uVar10 = uVar9 >> 1;
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        *puVar7 = (char)uVar4;
        *param_1 = *param_1 + (longlong)(int)param_1[1];
        puVar7 = (undefined1 *)*param_1;
        iVar6 = *(int *)((longlong)param_1 + 0xc);
LAB_143c51424:
        uVar4 = 0;
        uVar10 = 0x80;
      }
      else if (uVar9 >> 1 == 0) {
        *puVar7 = (char)uVar4;
        puVar7 = puVar7 + 1;
        goto LAB_143c51424;
      }
      uVar8 = uVar8 - 1;
      bVar2 = (int)uVar8 < 1;
      iVar5 = iVar5 + -1;
      uVar9 = uVar10;
    } while (iVar5 != 0);
    if (uVar10 != 0x80) {
      *puVar7 = (char)uVar4;
    }
  }
  return;
}



// FUNCTION 143c51460 FUN_143c51460 body=208 status=ok
// SIG undefined FUN_143c51460(void)

ulonglong FUN_143c51460(ulonglong *param_1,byte *param_2,uint *param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  
  pbVar6 = (byte *)*param_1;
  uVar5 = 0;
  pbVar8 = pbVar6 + 1;
  if (param_2 < pbVar8) {
LAB_143c51509:
    uVar5 = 8;
  }
  else {
    uVar7 = (uint)*pbVar6;
    if (*pbVar6 == 0) {
      *param_1 = (ulonglong)pbVar8;
      return 0;
    }
    do {
      pbVar6 = pbVar8;
      if (param_2 < pbVar8 + 2) goto LAB_143c51509;
      pbVar1 = pbVar8 + 1;
      pbVar6 = pbVar8 + 2;
      pbVar8 = pbVar6 + *pbVar8;
      if (param_2 < pbVar8) goto LAB_143c51509;
      uVar4 = uVar5;
      if (param_3 != (uint *)0x0) {
        lVar2 = *(longlong *)(param_3 + 2);
        puVar3 = param_3;
        while (lVar2 != 0) {
          if (*puVar3 == (uint)*pbVar1) {
            uVar5 = (**(code **)(puVar3 + 2))(pbVar6,pbVar8,param_4);
            uVar4 = uVar5 & 0xffffffff;
            if ((int)uVar5 != 0) goto LAB_143c5150e;
            break;
          }
          lVar2 = *(longlong *)(puVar3 + 6);
          puVar3 = puVar3 + 4;
        }
      }
      uVar5 = uVar4;
      uVar7 = uVar7 - 1;
      pbVar6 = pbVar8;
    } while (uVar7 != 0);
  }
LAB_143c5150e:
  *param_1 = (ulonglong)pbVar6;
  return uVar5;
}



// FUNCTION 143c51530 FUN_143c51530 body=141 status=ok
// SIG undefined FUN_143c51530(void)

void FUN_143c51530(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) != '\0') {
    sVar3 = *(short *)(lVar4 + 0x62);
    iVar7 = 0;
    iVar6 = sVar3 + -1;
    if (0 < *(short *)(lVar4 + 0x60)) {
      iVar7 = (int)*(short *)(*(longlong *)(lVar4 + 0x78) + -2 +
                             (longlong)*(short *)(lVar4 + 0x60) * 2);
    }
    iVar5 = iVar6 - iVar7;
    if (iVar7 < iVar6) {
      piVar1 = (int *)(*(longlong *)(lVar4 + 0x68) + (longlong)iVar7 * 8);
      piVar2 = (int *)(*(longlong *)(lVar4 + 0x68) + (longlong)iVar6 * 8);
      if ((*piVar1 == *piVar2) && (piVar1[1] == piVar2[1])) {
        *(short *)(lVar4 + 0x62) = sVar3 + -1;
        iVar6 = sVar3 + -2;
      }
      iVar5 = iVar6 - iVar7;
    }
    if (SBORROW4(iVar6,iVar7) == iVar5 < 0) {
      *(short *)(*(longlong *)(lVar4 + 0x78) + (longlong)*(short *)(lVar4 + 0x60) * 2) =
           (short)iVar6;
      *(short *)(lVar4 + 0x60) = *(short *)(lVar4 + 0x60) + 1;
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 143c515c0 FUN_143c515c0 body=840 status=ok
// SIG undefined FUN_143c515c0(void)

int FUN_143c515c0(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  int local_res8 [2];
  
  pbVar9 = param_2 + 1;
  local_res8[0] = 0;
  if ((param_3 < pbVar9) || (bVar1 = *param_2, -1 < (char)bVar1)) {
LAB_143c518ec:
    local_res8[0] = 8;
  }
  else {
    pbVar5 = pbVar9;
    if ((bVar1 & 8) != 0) {
      pbVar5 = param_2 + 2;
      if (param_3 < pbVar5) {
LAB_143c51642:
        pbVar5 = pbVar9;
        local_res8[0] = 8;
      }
      else {
        uVar6 = (uint)*pbVar9;
        local_res8[0] = 0;
        if (*pbVar9 != 0) {
          do {
            pbVar15 = pbVar5 + 2;
            pbVar9 = pbVar5;
            if ((param_3 < pbVar15) ||
               (pbVar5 = pbVar15 + *pbVar5, pbVar9 = pbVar15, param_3 < pbVar5)) goto LAB_143c51642;
            uVar6 = uVar6 - 1;
            local_res8[0] = 0;
          } while (uVar6 != 0);
        }
      }
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
    }
    uVar6 = *(uint *)(param_1 + 0x18);
    uVar10 = uVar6 + (bVar1 & 0x3f);
    if (*(uint *)(param_1 + 0x1c) < uVar10) {
      uVar10 = uVar10 + 3 & 0xfffffffc;
      if (0x40 < uVar10) goto LAB_143c518ec;
      uVar4 = FUN_143c27410(**(undefined8 **)(param_1 + 0x28),0x18,*(uint *)(param_1 + 0x1c),uVar10,
                            *(undefined8 *)(param_1 + 0x20),local_res8);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      *(uint *)(param_1 + 0x1c) = uVar10;
    }
    uVar10 = 0;
    piVar16 = (int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar6 * 0x18);
    if ((bVar1 & 0x3f) != 0) {
      pbVar9 = pbVar5 + 2;
      pbVar15 = pbVar5 + 3;
      pbVar13 = pbVar5 + 1;
      do {
        uVar11 = 0;
        uVar6 = 0;
        if (param_3 < pbVar13) goto LAB_143c518ec;
        bVar2 = *pbVar5;
        pbVar12 = pbVar13 + 1;
        pbVar8 = pbVar5 + 1;
        *piVar16 = 0x10000;
        pbVar14 = pbVar15 + 1;
        pbVar7 = pbVar9 + 1;
        if ((bVar2 & 0x10) != 0) {
          if (param_3 < pbVar7) goto LAB_143c518ec;
          bVar3 = *pbVar8;
          pbVar8 = pbVar5 + 3;
          pbVar12 = pbVar13 + 3;
          pbVar14 = pbVar15 + 3;
          pbVar7 = pbVar9 + 3;
          *piVar16 = ((int)(short)((ushort)bVar3 << 8) | (uint)pbVar5[2]) << 4;
        }
        piVar16[1] = 0x10000;
        pbVar9 = pbVar8;
        if ((bVar2 & 0x20) != 0) {
          if (param_3 < pbVar7) goto LAB_143c518ec;
          pbVar9 = pbVar8 + 2;
          pbVar12 = pbVar12 + 2;
          pbVar14 = pbVar14 + 2;
          pbVar7 = pbVar7 + 2;
          piVar16[1] = ((int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1]) << 4;
        }
        if ((bVar2 & 3) == 1) {
          if (param_3 < pbVar7) goto LAB_143c518ec;
          pbVar5 = pbVar9 + 2;
          pbVar12 = pbVar12 + 2;
          pbVar14 = pbVar14 + 2;
          pbVar7 = pbVar7 + 2;
          uVar11 = (int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar9[1];
        }
        else {
          pbVar5 = pbVar9;
          if ((bVar2 & 3) == 2) {
            if (param_3 < pbVar12) goto LAB_143c518ec;
            uVar11 = (uint)(char)*pbVar9;
            pbVar12 = pbVar12 + 1;
            pbVar5 = pbVar9 + 1;
            pbVar14 = pbVar14 + 1;
            pbVar7 = pbVar7 + 1;
          }
        }
        bVar3 = bVar2 >> 2 & 3;
        if (bVar3 == 1) {
          if (param_3 < pbVar7) goto LAB_143c518ec;
          pbVar9 = pbVar5 + 2;
          pbVar12 = pbVar12 + 2;
          pbVar14 = pbVar14 + 2;
          pbVar7 = pbVar7 + 2;
          uVar6 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
        }
        else {
          pbVar9 = pbVar5;
          if (bVar3 == 2) {
            if (param_3 < pbVar12) goto LAB_143c518ec;
            uVar6 = (uint)(char)*pbVar5;
            pbVar12 = pbVar12 + 1;
            pbVar9 = pbVar5 + 1;
            pbVar14 = pbVar14 + 1;
            pbVar7 = pbVar7 + 1;
          }
        }
        piVar16[2] = uVar11;
        piVar16[3] = uVar6;
        if ((bVar2 & 0x40) == 0) {
          if (param_3 < pbVar12) goto LAB_143c518ec;
          pbVar12 = pbVar12 + 1;
          pbVar8 = pbVar9 + 1;
          piVar16[5] = (uint)*pbVar9;
          pbVar14 = pbVar14 + 1;
          pbVar7 = pbVar7 + 1;
        }
        else {
          if (param_3 < pbVar7) goto LAB_143c518ec;
          pbVar8 = pbVar9 + 2;
          pbVar12 = pbVar12 + 2;
          pbVar14 = pbVar14 + 2;
          pbVar7 = pbVar7 + 2;
          piVar16[5] = (uint)CONCAT11(*pbVar9,pbVar9[1]);
        }
        if ((char)bVar2 < '\0') {
          if (param_3 < pbVar14) goto LAB_143c518ec;
          pbVar5 = pbVar8 + 3;
          pbVar13 = pbVar12 + 3;
          pbVar15 = pbVar14 + 3;
          pbVar9 = pbVar7 + 3;
          uVar6 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
        }
        else {
          if (param_3 < pbVar7) goto LAB_143c518ec;
          pbVar5 = pbVar8 + 2;
          pbVar13 = pbVar12 + 2;
          pbVar15 = pbVar14 + 2;
          pbVar9 = pbVar7 + 2;
          uVar6 = (uint)*pbVar8;
        }
        uVar10 = uVar10 + 1;
        piVar16[4] = uVar6 << 8 | (uint)pbVar5[-1];
        piVar16 = piVar16 + 6;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      } while (uVar10 < (bVar1 & 0x3f));
    }
  }
  return local_res8[0];
}



// FUNCTION 143c51910 FUN_143c51910 body=477 status=ok
// SIG undefined FUN_143c51910(void)

ulonglong FUN_143c51910(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5)

{
  short sVar1;
  uint uVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  uint local_res20;
  
  uVar8 = FUN_143c251d0(param_2,param_3 + param_4);
  if ((int)uVar8 == 0) {
    uVar8 = FUN_143c24650(param_2,(ulonglong)param_5);
    if ((int)uVar8 == 0) {
      pbVar3 = *(byte **)(param_2 + 0x38);
      if ((param_5 == 0) || ((*pbVar3 & 0x80) == 0)) {
        uVar7 = FUN_143c51af0(param_1,pbVar3,pbVar3 + param_5);
        FT_Stream_ExitFrame(param_2);
        return (ulonglong)uVar7;
      }
      lVar4 = *(longlong *)(param_1 + 0x28);
      uVar7 = *(uint *)(param_1 + 0x18);
      uVar5 = FUN_143c515c0(param_1);
      FT_Stream_ExitFrame(param_2);
      if ((uVar5 != 0) || (uVar2 = *(uint *)(param_1 + 0x18), uVar2 == uVar7)) {
        return (ulonglong)uVar5;
      }
      lVar12 = (ulonglong)uVar7 * 0x18;
      local_res20 = 0;
      do {
        sVar1 = *(short *)(lVar4 + 0x1a);
        uVar8 = FUN_143c51910(param_1,param_2,param_3,
                              *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar12),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14 + lVar12));
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        piVar11 = (int *)(*(longlong *)(param_1 + 0x20) + lVar12);
        uVar5 = (int)*(short *)(lVar4 + 0x1a) - (int)sVar1;
        uVar10 = (ulonglong)uVar5;
        if ((*piVar11 == 0x10000) && (piVar11[1] == 0x10000)) {
          piVar9 = (int *)(*(longlong *)(lVar4 + 0x20) + (longlong)sVar1 * 8);
          if (0 < (int)uVar5) {
            do {
              *piVar9 = *piVar9 + piVar11[2];
              piVar9[1] = piVar9[1] + piVar11[3];
              uVar10 = uVar10 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar10 != 0);
          }
        }
        else {
          piVar9 = (int *)(*(longlong *)(lVar4 + 0x20) + (longlong)sVar1 * 8);
          if (0 < (int)uVar5) {
            uVar10 = (ulonglong)uVar5;
            do {
              iVar6 = FUN_143c22100(*piVar9,*piVar11);
              *piVar9 = iVar6 + piVar11[2];
              iVar6 = FUN_143c22100(piVar9[1],piVar11[1]);
              piVar9[1] = iVar6 + piVar11[3];
              piVar9 = piVar9 + 2;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        uVar8 = uVar8 & 0xffffffff;
        lVar12 = lVar12 + 0x18;
        local_res20 = local_res20 + 1;
      } while (local_res20 < uVar2 - uVar7);
    }
  }
  return uVar8;
}



// FUNCTION 143c51af0 FUN_143c51af0 body=1497 status=ok
// SIG undefined FUN_143c51af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c51af0(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  longlong lVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  int local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  pbVar8 = param_2 + 1;
  local_68 = 0;
  if (param_3 < pbVar8) {
    return 8;
  }
  bVar1 = *param_2;
  if ((char)bVar1 < '\0') {
    return 8;
  }
  uVar19 = 0;
  local_64 = 0;
  if ((bVar1 & 4) == 0) {
    pbVar13 = pbVar8;
    if ((bVar1 & 2) != 0) {
      pbVar13 = param_2 + 2;
      if (param_3 < pbVar13) {
        return 8;
      }
      local_64 = (uint)*pbVar8;
    }
    if ((bVar1 & 1) == 0) goto LAB_143c51bad;
    param_2 = pbVar13 + 1;
    if (param_3 < param_2) {
      return 8;
    }
    bVar2 = *pbVar13;
  }
  else {
    param_2 = param_2 + 2;
    if (param_3 < param_2) {
      return 8;
    }
    local_64 = *pbVar8 & 0xf;
    bVar2 = *pbVar8 >> 4;
  }
  uVar19 = (uint)bVar2;
  pbVar13 = param_2;
LAB_143c51bad:
  uVar10 = uVar19 + local_64;
  if (*(uint *)(param_1 + 4) < uVar10) {
    local_70 = &local_68;
    local_78 = *(undefined8 *)(param_1 + 8);
    uVar7 = FUN_143c27410(**(undefined8 **)(param_1 + 0x28),4);
    *(undefined8 *)(param_1 + 8) = uVar7;
    if (local_68 != 0) {
      return local_68;
    }
    *(uint *)(param_1 + 4) = uVar10 + 7 & 0xfffffff8;
  }
  uVar17 = 0;
  uVar14 = 0;
  uVar16 = 0;
  *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8) + (ulonglong)local_64 * 4;
  if (uVar10 != 0) {
    lVar18 = 0;
    pbVar8 = pbVar13 + 1;
    pbVar11 = pbVar13 + 2;
    do {
      pbVar12 = pbVar13;
      if ((uVar16 & 7) == 0) {
        if (param_3 < pbVar8) {
          return 8;
        }
        uVar17 = (ulonglong)*pbVar13;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar13 + 1;
        pbVar8 = pbVar8 + 1;
      }
      if ((uVar17 & 1) == 0) {
        if (param_3 < pbVar8) {
          return 8;
        }
        pbVar11 = pbVar11 + 1;
        uVar14 = uVar14 + *pbVar12;
        pbVar13 = pbVar12 + 1;
        pbVar8 = pbVar8 + 1;
      }
      else {
        if (param_3 < pbVar11) {
          return 8;
        }
        pbVar13 = pbVar12 + 2;
        pbVar11 = pbVar11 + 2;
        pbVar8 = pbVar8 + 2;
        uVar14 = (int)(short)((ushort)*pbVar12 << 8) | (uint)pbVar12[1];
      }
      uVar16 = uVar16 + 1;
      uVar17 = uVar17 >> 1;
      *(uint *)(lVar18 + *(longlong *)(param_1 + 8)) = uVar14;
      lVar18 = lVar18 + 4;
    } while (uVar16 < uVar10);
  }
  pbVar8 = pbVar13;
  if ((bVar1 & 8) != 0) {
    local_68 = 0;
    pbVar8 = pbVar13 + 1;
    if (param_3 < pbVar8) {
LAB_143c51ce1:
      pbVar8 = pbVar13;
      local_68 = 8;
    }
    else {
      uVar10 = (uint)*pbVar13;
      if (*pbVar13 != 0) {
        do {
          pbVar11 = pbVar8 + 2;
          pbVar13 = pbVar8;
          if ((param_3 < pbVar11) ||
             (pbVar8 = pbVar11 + *pbVar8, pbVar13 = pbVar11, param_3 < pbVar8)) goto LAB_143c51ce1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    if (local_68 != 0) {
      return local_68;
    }
  }
  local_60 = 0;
  uVar7 = 0;
  local_48 = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  do {
    pbVar13 = pbVar8 + 1;
    if (param_3 < pbVar13) {
      return 8;
    }
    bVar1 = *pbVar8 >> 4;
    uVar10 = *pbVar8 & 0xf;
    uVar17 = (ulonglong)uVar10;
    switch(bVar1) {
    case 0:
      goto switchD_143c51d4f_caseD_0;
    case 1:
    case 4:
    case 5:
      uVar10 = 1;
      break;
    case 2:
      if (local_64 <= uVar10) {
        return 8;
      }
      local_60 = CONCAT44((int)((ulonglong)local_48 >> 0x20),
                          *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar17 * 4));
      local_48 = local_60;
      uVar7 = local_60;
      goto switchD_143c51d4f_caseD_0;
    case 3:
      if (uVar19 <= uVar10) {
        return 8;
      }
      local_60 = CONCAT44(*(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar17 * 4),(int)local_48)
      ;
      local_48 = local_60;
      uVar7 = local_60;
      goto switchD_143c51d4f_caseD_0;
    case 6:
      uVar10 = 3;
      uVar17 = 0xb8e;
      break;
    case 7:
      uVar10 = 3;
      uVar17 = 0xe2b;
      break;
    default:
      uVar10 = 4;
    }
    puVar15 = (uint *)&local_60;
    uVar14 = 0;
    pbVar8 = pbVar13 + 1;
    pbVar11 = pbVar13 + 2;
    do {
      uVar16 = (uint)uVar17 & 3;
      if ((uVar17 & 3) == 0) {
        if (param_3 < pbVar8) {
          return 8;
        }
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar13 + 1;
        pbVar8 = pbVar8 + 1;
        if (local_64 <= *pbVar13) {
          return 8;
        }
        uVar16 = *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)*pbVar13 * 4);
LAB_143c51e5a:
        *puVar15 = uVar16;
      }
      else {
        if (uVar16 == 1) {
          if (param_3 < pbVar11) {
            return 8;
          }
          pbVar12 = pbVar13 + 2;
          pbVar11 = pbVar11 + 2;
          pbVar8 = pbVar8 + 2;
          uVar16 = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1];
          goto LAB_143c51e5a;
        }
        if (uVar16 == 2) {
          if (param_3 < pbVar8) {
            return 8;
          }
          pbVar11 = pbVar11 + 1;
          pbVar12 = pbVar13 + 1;
          pbVar8 = pbVar8 + 1;
          uVar16 = (int)(char)*pbVar13 + (uint)local_48;
          goto LAB_143c51e5a;
        }
        *puVar15 = (uint)local_48;
        pbVar12 = pbVar13;
      }
      uVar16 = (uint)(uVar17 >> 2) & 3;
      if ((uVar17 >> 2 & 3) == 0) {
        if (param_3 < pbVar8) {
          return 8;
        }
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar12 + 1;
        pbVar8 = pbVar8 + 1;
        if (uVar19 <= *pbVar12) {
          return 8;
        }
        local_48._4_4_ = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uint)*pbVar12 * 4);
LAB_143c51ee3:
        puVar15[1] = local_48._4_4_;
      }
      else {
        if (uVar16 == 1) {
          if (param_3 < pbVar11) {
            return 8;
          }
          pbVar13 = pbVar12 + 2;
          pbVar11 = pbVar11 + 2;
          pbVar8 = pbVar8 + 2;
          local_48._4_4_ = (int)(short)((ushort)*pbVar12 << 8) | (uint)pbVar12[1];
          goto LAB_143c51ee3;
        }
        if (uVar16 == 2) {
          if (param_3 < pbVar8) {
            return 8;
          }
          pbVar11 = pbVar11 + 1;
          pbVar13 = pbVar12 + 1;
          pbVar8 = pbVar8 + 1;
          local_48._4_4_ = (int)(char)*pbVar12 + local_48._4_4_;
          goto LAB_143c51ee3;
        }
        puVar15[1] = local_48._4_4_;
        pbVar13 = pbVar12;
      }
      if ((uVar14 == 0) && (uVar10 == 4)) {
        if (param_3 < pbVar8) {
          return 8;
        }
        uVar17 = (ulonglong)*pbVar13;
        uVar10 = 3;
        pbVar13 = pbVar13 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar8 = pbVar8 + 1;
      }
      else {
        uVar17 = uVar17 >> 4;
      }
      local_48 = *(undefined8 *)puVar15;
      uVar14 = uVar14 + 1;
      puVar15 = puVar15 + 2;
      uVar7 = local_60;
    } while (uVar14 < uVar10);
switchD_143c51d4f_caseD_0:
    if (bVar1 == 0) {
      FUN_143c51530(param_1);
      FUN_143c20ca0(*(undefined8 *)(param_1 + 0x28));
      return local_68;
    }
    if (bVar1 < 4) {
LAB_143c51f90:
      lVar18 = *(longlong *)(param_1 + 0x28);
      if (*(char *)(param_1 + 0x30) == '\0') {
        iVar6 = 8;
      }
      else {
        if (*(uint *)(lVar18 + 8) <
            (uint)(*(short *)(lVar18 + 0x62) + 1 + (int)*(short *)(lVar18 + 0x1a))) {
          iVar6 = FUN_143c20e90(lVar18,1);
          if (iVar6 != 0) goto LAB_143c52064;
        }
        else {
          iVar6 = 0;
        }
        sVar3 = *(short *)(lVar18 + 0x62);
        *(undefined8 *)(*(longlong *)(lVar18 + 0x68) + (longlong)sVar3 * 8) = uVar7;
        *(undefined1 *)((longlong)sVar3 + *(longlong *)(lVar18 + 0x70)) = 1;
        *(short *)(lVar18 + 0x62) = *(short *)(lVar18 + 0x62) + 1;
      }
    }
    else {
      lVar18 = *(longlong *)(param_1 + 0x28);
      if (bVar1 < 6) {
        FUN_143c51530(param_1);
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((((uint)(*(short *)(lVar18 + 0x62) + 1 + (int)*(short *)(lVar18 + 0x1a)) <=
              *(uint *)(lVar18 + 8)) &&
            ((uint)(*(short *)(lVar18 + 0x60) + 1 + (int)*(short *)(lVar18 + 0x18)) <=
             *(uint *)(lVar18 + 0xc))) || (iVar6 = FUN_143c20e90(lVar18), iVar6 == 0))
        goto LAB_143c51f90;
      }
      else if (*(char *)(param_1 + 0x30) == '\0') {
        iVar6 = 8;
      }
      else {
        if (*(uint *)(lVar18 + 8) <
            (uint)(*(short *)(lVar18 + 0x62) + 3 + (int)*(short *)(lVar18 + 0x1a))) {
          iVar6 = FUN_143c20e90(lVar18,3);
          if (iVar6 != 0) goto LAB_143c52064;
        }
        else {
          iVar6 = 0;
        }
        lVar9 = (longlong)*(short *)(lVar18 + 0x62);
        lVar4 = *(longlong *)(lVar18 + 0x68);
        lVar5 = *(longlong *)(lVar18 + 0x70);
        *(undefined8 *)(lVar4 + lVar9 * 8) = uVar7;
        lVar4 = lVar4 + lVar9 * 8;
        *(undefined8 *)(lVar4 + 8) = local_58;
        *(undefined8 *)(lVar4 + 0x10) = local_50;
        *(undefined2 *)(lVar5 + lVar9) = 0x202;
        *(undefined1 *)(lVar5 + 2 + lVar9) = 1;
        *(short *)(lVar18 + 0x62) = *(short *)(lVar18 + 0x62) + 3;
      }
    }
LAB_143c52064:
    local_68 = 0;
    pbVar8 = pbVar13;
    if (iVar6 != 0) {
      return iVar6;
    }
  } while( true );
}



// FUNCTION 143c520f0 FUN_143c520f0 body=382 status=ok
// SIG undefined FUN_143c520f0(void)

undefined8 FUN_143c520f0(char *param_1,int param_2,int param_3,char param_4,int *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined1 *local_28;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_18 = *param_5;
  if (local_18 == 0) {
    return 0;
  }
  local_1c = param_5[1];
  if (local_1c == 0) {
    return 0;
  }
  local_28 = *(undefined1 **)(param_5 + 4);
  local_14 = local_18 * local_1c;
  local_20 = param_5[2];
  if (param_4 == '\0') {
    local_28 = local_28 + (local_18 + -1) * local_20;
    local_20 = -local_20;
  }
  if (param_3 == 0) {
    uVar7 = (param_2 - (int)param_1) * 8;
    cVar9 = '\0';
    uVar4 = 0;
    if (local_14 < uVar7) {
      uVar7 = local_14;
    }
    uVar5 = uVar7 & 7;
    puVar8 = local_28;
    iVar6 = local_1c;
    uVar2 = 0x80;
    if (uVar7 != 0) {
      do {
        if ((uVar7 & 7) == uVar5) {
          cVar9 = *param_1;
          param_1 = param_1 + 1;
        }
        if (cVar9 < '\0') {
          uVar4 = uVar4 | uVar2;
        }
        cVar9 = cVar9 * '\x02';
        uVar3 = uVar2 >> 1;
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          *puVar8 = (char)uVar4;
          local_28 = local_28 + local_20;
          puVar8 = local_28;
          iVar6 = local_1c;
LAB_143c52221:
          uVar4 = 0;
          uVar3 = 0x80;
        }
        else if (uVar2 >> 1 == 0) {
          *puVar8 = (char)uVar4;
          puVar8 = puVar8 + 1;
          goto LAB_143c52221;
        }
        uVar7 = uVar7 - 1;
        uVar2 = uVar3;
      } while (uVar7 != 0);
      if (uVar3 != 0x80) {
        *puVar8 = (char)uVar4;
      }
    }
    uVar1 = 0;
  }
  else if (param_3 == 1) {
    FUN_143c512b0(&local_28,param_1);
    uVar1 = 0;
  }
  else if (param_3 == 2) {
    FUN_143c513a0(&local_28,param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}



// FUNCTION 143c52270 FUN_143c52270 body=648 status=ok
// SIG undefined FUN_143c52270(void)

undefined8
FUN_143c52270(ulonglong *param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5,
             uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pbVar2 = (byte *)*param_1;
  pbVar10 = pbVar2 + 1;
  if (param_2 < pbVar10) {
LAB_143c524da:
    uVar3 = 8;
  }
  else {
    bVar1 = *pbVar2;
    uVar5 = 0;
    uVar8 = 0;
    uVar7 = 0;
    bVar4 = bVar1 & 3;
    if ((bVar1 & 3) == 0) {
      pbVar9 = pbVar2 + 2;
      if (param_2 < pbVar9) goto LAB_143c524da;
      uVar5 = (int)(char)*pbVar10 >> 4;
      uVar8 = (int)(char)(*pbVar10 << 4) >> 4;
    }
    else if (bVar4 == 1) {
      if (param_2 < pbVar2 + 3) goto LAB_143c524da;
      uVar5 = (uint)(char)*pbVar10;
      uVar8 = (uint)(char)pbVar2[2];
      pbVar9 = pbVar2 + 3;
    }
    else if (bVar4 == 2) {
      if (param_2 < pbVar2 + 5) goto LAB_143c524da;
      pbVar9 = pbVar2 + 5;
      uVar5 = (int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar2[2];
      uVar8 = (int)(short)((ushort)pbVar2[3] << 8) | (uint)pbVar2[4];
    }
    else {
      pbVar9 = pbVar10;
      if (bVar4 == 3) {
        if (param_2 < pbVar2 + 7) goto LAB_143c524da;
        pbVar9 = pbVar2 + 7;
        uVar5 = (uint)CONCAT21(CONCAT11(*pbVar10,pbVar2[2]),pbVar2[3]);
        uVar8 = (uint)CONCAT21(CONCAT11(pbVar2[4],pbVar2[5]),pbVar2[6]);
      }
    }
    bVar4 = bVar1 >> 2 & 3;
    pbVar10 = pbVar9;
    uVar6 = 0;
    if ((bVar1 >> 2 & 3) != 0) {
      if (bVar4 == 1) {
        pbVar10 = pbVar9 + 1;
        if (param_2 < pbVar10) goto LAB_143c524da;
        uVar6 = (uint)(*pbVar9 >> 4);
        uVar7 = *pbVar9 & 0xf;
      }
      else if (bVar4 == 2) {
        if (param_2 < pbVar9 + 2) goto LAB_143c524da;
        uVar6 = (uint)*pbVar9;
        uVar7 = (uint)pbVar9[1];
        pbVar10 = pbVar9 + 2;
      }
      else {
        uVar6 = 0;
        if (bVar4 == 3) {
          if (param_2 < pbVar9 + 4) goto LAB_143c524da;
          pbVar10 = pbVar9 + 4;
          uVar6 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
          uVar7 = (uint)CONCAT11(pbVar9[2],pbVar9[3]);
        }
      }
    }
    bVar4 = bVar1 >> 4 & 3;
    if ((bVar1 >> 4 & 3) != 0) {
      if (bVar4 == 1) {
        if (param_2 < pbVar10 + 1) goto LAB_143c524da;
        param_3 = (int)(char)*pbVar10 << 8;
        pbVar10 = pbVar10 + 1;
      }
      else if (bVar4 == 2) {
        if (param_2 < pbVar10 + 2) goto LAB_143c524da;
        param_3 = (int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar10[1];
        pbVar10 = pbVar10 + 2;
      }
      else {
        param_3 = 0;
        if (bVar4 == 3) {
          if (param_2 < pbVar10 + 3) goto LAB_143c524da;
          param_3 = (uint)CONCAT21(CONCAT11(*pbVar10,pbVar10[1]),pbVar10[2]);
          pbVar10 = pbVar10 + 3;
        }
      }
    }
    *param_4 = uVar5;
    uVar3 = 0;
    *param_5 = uVar8;
    *param_6 = uVar6;
    *param_7 = uVar7;
    *param_8 = param_3;
    *param_9 = (uint)(bVar1 >> 6);
    *param_1 = (ulonglong)pbVar10;
  }
  return uVar3;
}



// FUNCTION 143c52500 FUN_143c52500 body=744 status=ok
// SIG undefined FUN_143c52500(void)

ulonglong FUN_143c52500(uint *param_1,longlong param_2,uint param_3,undefined4 param_4,char param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 *puVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint local_18 [4];
  
  uVar7 = FUN_143c251d0(param_2,param_4);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar5 = FUN_143c25070(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  if (uVar5 <= param_3) {
    return 6;
  }
  uVar7 = FUN_143c25220(param_2,param_3 * 5);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar5 = FUN_143c25070(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  uVar6 = FUN_143c24fe0(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  *param_1 = (uint)uVar5;
  param_1[1] = uVar6;
  uVar7 = FUN_143c251d0(param_2);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar7 = FUN_143c24650(param_2,(uint)uVar5);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  pbVar2 = puVar4 + uVar5;
  if (puVar4 + 0xd <= pbVar2) {
    param_1[2] = (uint)CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]);
    param_1[3] = (uint)CONCAT21(CONCAT11(puVar4[3],puVar4[4]),puVar4[5]);
    param_1[4] = (uint)CONCAT21(CONCAT11(puVar4[6],puVar4[7]),puVar4[8]);
    param_1[5] = (uint)CONCAT21(CONCAT11(puVar4[9],puVar4[10]),puVar4[0xb]);
    uVar6 = 0;
    bVar3 = puVar4[0xc];
    pbVar8 = puVar4 + 0xd;
    if ((bVar3 & 4) != 0) {
      uVar6 = 1;
      if ((bVar3 & 8) != 0) {
        uVar6 = 2;
      }
      if ((bVar3 & 3) == 0) {
        uVar6 = uVar6 + 3;
      }
    }
    uVar10 = uVar6;
    if (((bVar3 & 0x10) != 0) && (uVar10 = uVar6 + 1, (bVar3 & 0x20) != 0)) {
      uVar10 = uVar6 + 2;
    }
    if (pbVar8 + uVar10 <= pbVar2) {
      if ((bVar3 & 4) != 0) {
        if ((bVar3 & 8) == 0) {
          uVar6 = (uint)*pbVar8;
          pbVar9 = puVar4 + 0xe;
        }
        else {
          pbVar9 = puVar4 + 0xf;
          uVar6 = (int)(short)((ushort)*pbVar8 << 8) | (uint)(byte)puVar4[0xe];
        }
        param_1[7] = uVar6;
        pbVar8 = pbVar9;
        if ((bVar3 & 3) == 0) {
          pbVar8 = pbVar9 + 3;
          param_1[9] = (uint)CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]);
        }
      }
      pbVar9 = pbVar8;
      if ((bVar3 & 0x10) != 0) {
        if ((bVar3 & 0x20) == 0) {
          uVar6 = (uint)*pbVar8;
          pbVar9 = pbVar8 + 1;
        }
        else {
          pbVar9 = pbVar8 + 2;
          uVar6 = (int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1];
        }
        param_1[8] = uVar6;
      }
      local_18[0] = 0;
      pbVar8 = pbVar9;
      if ((bVar3 & 0x40) != 0) {
        pbVar8 = pbVar9 + 1;
        if (pbVar2 < pbVar8) {
LAB_143c52763:
          pbVar8 = pbVar9;
          local_18[0] = 8;
        }
        else {
          uVar6 = (uint)*pbVar9;
          local_18[0] = 0;
          if (*pbVar9 != 0) {
            do {
              pbVar1 = pbVar8 + 2;
              pbVar9 = pbVar8;
              if ((pbVar2 < pbVar1) || (pbVar8 = pbVar1 + *pbVar8, pbVar9 = pbVar1, pbVar2 < pbVar8)
                 ) goto LAB_143c52763;
              uVar6 = uVar6 - 1;
              local_18[0] = 0;
            } while (uVar6 != 0);
          }
        }
        if (local_18[0] != 0) goto LAB_143c527cc;
      }
      if (pbVar8 + 5 <= pbVar2) {
        param_1[10] = (uint)CONCAT11(*pbVar8,pbVar8[1]);
        param_1[0xb] = (uint)CONCAT21(CONCAT11(pbVar8[2],pbVar8[3]),pbVar8[4]);
        if (param_5 == '\0') goto LAB_143c527cc;
        if (pbVar8 + 6 <= pbVar2) {
          param_1[10] = param_1[10] + (uint)pbVar8[5] * 0x10000;
          goto LAB_143c527cc;
        }
      }
    }
  }
  local_18[0] = 8;
LAB_143c527cc:
  FT_Stream_ExitFrame(param_2);
  return (ulonglong)local_18[0];
}



// FUNCTION 143c527f0 FUN_143c527f0 body=320 status=ok
// SIG undefined FUN_143c527f0(void)

void FUN_143c527f0(longlong param_1,byte *param_2,uint param_3,uint param_4,uint param_5,
                  uint *param_6,uint *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 4;
  if ((param_4 & 1) != 0) {
    uVar6 = 5;
  }
  if ((param_4 & 2) != 0) {
    uVar6 = (ulonglong)((int)uVar6 + 1);
  }
  if ((param_4 & 4) != 0) {
    uVar6 = (ulonglong)((int)uVar6 + 1);
  }
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      uVar5 = param_3 + uVar4 >> 1;
      pbVar1 = (byte *)((ulonglong)(uVar5 * (int)uVar6) + param_1);
      if (param_2 < pbVar1 + uVar6) break;
      if ((param_4 & 1) == 0) {
        uVar3 = (uint)*pbVar1;
        pbVar2 = pbVar1 + 1;
      }
      else {
        pbVar2 = pbVar1 + 2;
        uVar3 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
      }
      if (uVar3 == param_5) {
        if ((param_4 & 2) == 0) {
          uVar4 = (uint)*pbVar2;
          pbVar1 = pbVar2 + 1;
        }
        else {
          pbVar1 = pbVar2 + 2;
          uVar4 = (uint)CONCAT11(*pbVar2,pbVar2[1]);
        }
        *param_7 = uVar4;
        if ((param_4 & 4) != 0) {
          *param_6 = (uint)CONCAT21(CONCAT11(*pbVar1,pbVar1[1]),pbVar1[2]);
          return;
        }
        *param_6 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
        return;
      }
      if (uVar3 < param_5) {
        uVar4 = uVar5;
        uVar5 = param_3;
      }
      param_3 = uVar5;
    } while (uVar4 < param_3);
  }
  *param_7 = 0;
  *param_6 = 0;
  return;
}



// FUNCTION 143c52930 FUN_143c52930 body=268 status=ok
// SIG undefined FUN_143c52930(void)

void FUN_143c52930(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  ft_mem_free(param_2,*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  ft_mem_free(param_2,*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  ft_mem_free(param_2,*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x70) = 0;
  ft_mem_free(param_2,*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  ft_mem_free(param_2,*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  ft_mem_free(param_2,*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  ft_mem_free(param_2,*(undefined8 *)(param_1 + 0x90));
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    ft_mem_free(param_2);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}



// FUNCTION 143c52a40 FUN_143c52a40 body=1401 status=ok
// SIG undefined FUN_143c52a40(void)

ulonglong FUN_143c52a40(undefined8 *param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  short sVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  uint local_res8 [2];
  longlong local_res10;
  uint local_res18;
  byte *local_40;
  
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar9;
  param_1[0x19] = param_1 + 0x18;
  *(uint *)(param_1 + 1) = param_3;
  param_1[0x18] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  uVar7 = FUN_143c251d0(param_2,param_3);
  local_res8[0] = (uint)uVar7;
  if (local_res8[0] != 0) {
    return uVar7;
  }
  uVar7 = FUN_143c24650(param_2,param_4 & 0xffffffff);
  local_res8[0] = (uint)uVar7;
  if (local_res8[0] != 0) {
    return uVar7;
  }
  param_1[0x1b] = *(undefined8 *)(param_2 + 0x38);
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  pbVar13 = puVar4 + (param_4 & 0xffffffff);
  pbVar14 = local_40;
  if (puVar4 + 0xf <= pbVar13) {
    *(uint *)((longlong)param_1 + 0xc) = (uint)CONCAT11(*puVar4,puVar4[1]);
    *(uint *)(param_1 + 2) = (uint)CONCAT11(puVar4[2],puVar4[3]);
    *(uint *)((longlong)param_1 + 0x14) = (uint)CONCAT11(puVar4[4],puVar4[5]);
    *(uint *)(param_1 + 3) = (int)(short)((ushort)(byte)puVar4[6] << 8) | (uint)(byte)puVar4[7];
    *(uint *)((longlong)param_1 + 0x1c) =
         (int)(short)((ushort)(byte)puVar4[8] << 8) | (uint)(byte)puVar4[9];
    *(uint *)(param_1 + 4) = (int)(short)((ushort)(byte)puVar4[10] << 8) | (uint)(byte)puVar4[0xb];
    *(uint *)((longlong)param_1 + 0x24) =
         (int)(short)((ushort)(byte)puVar4[0xc] << 8) | (uint)(byte)puVar4[0xd];
    bVar1 = puVar4[0xe];
    *(uint *)(param_1 + 5) = (uint)bVar1;
    local_40 = puVar4 + 0xf;
    if ((bVar1 & 4) == 0) {
      local_40 = puVar4 + 0x11;
      pbVar14 = puVar4 + 0xf;
      if (pbVar13 < local_40) goto LAB_143c52f5b;
      *(uint *)((longlong)param_1 + 0x2c) =
           (int)(short)((ushort)(byte)puVar4[0xf] << 8) | (uint)(byte)puVar4[0x10];
    }
    uVar16 = 0;
    if (((char)bVar1 < '\0') &&
       (local_res8[0] = FUN_143c51460(&local_40,pbVar13,&DAT_145d25960,param_1),
       uVar16 = local_res8[0], local_res8[0] != 0)) goto LAB_143c52f66;
    local_res8[0] = uVar16;
    pbVar12 = local_40 + 3;
    pbVar14 = local_40;
    if (pbVar12 <= pbVar13) {
      uVar16 = (uint)CONCAT21(CONCAT11(*local_40,local_40[1]),local_40[2]);
      pbVar15 = pbVar12;
      if (uVar16 != 0) {
        pbVar15 = pbVar12 + uVar16;
        if (pbVar13 < pbVar15) goto LAB_143c52f5b;
        do {
          if (((pbVar15 < pbVar12 + 4) || (uVar11 = (uint)CONCAT11(*pbVar12,pbVar12[1]), uVar11 < 4)
              ) || (uVar16 < uVar11)) break;
          sVar5 = CONCAT11(pbVar12[2],pbVar12[3]);
          if (sVar5 == 1) {
            puVar19 = param_1 + 0xd;
LAB_143c52cc9:
            uVar7 = FUN_143c511f0(pbVar12 + 4,uVar11 - 4,uVar9,puVar19);
            local_res8[0] = (uint)uVar7;
            if (local_res8[0] != 0) {
              return uVar7;
            }
          }
          else if (sVar5 == 2) {
            if (pbVar12 + 0x24 <= pbVar12 + uVar11) {
              *(uint *)(param_1 + 6) = (int)(short)((ushort)pbVar12[0xe] << 8) | (uint)pbVar12[0xf];
              *(uint *)((longlong)param_1 + 0x34) =
                   (int)(short)((ushort)pbVar12[0x10] << 8) | (uint)pbVar12[0x11];
              *(uint *)(param_1 + 7) =
                   (int)(short)((ushort)pbVar12[0x12] << 8) | (uint)pbVar12[0x13];
            }
          }
          else if (sVar5 == 3) {
            puVar19 = param_1 + 0xe;
            goto LAB_143c52cc9;
          }
          uVar16 = uVar16 - uVar11;
          pbVar12 = pbVar12 + uVar11;
        } while (uVar16 != 0);
      }
      pbVar12 = pbVar15 + 1;
      pbVar14 = local_40;
      if (pbVar12 <= pbVar13) {
        bVar2 = *pbVar15;
        *(uint *)(param_1 + 0x11) = (uint)bVar2;
        if (pbVar12 + ((uint)bVar2 + (uint)bVar2) <= pbVar13) {
          uVar8 = FUN_143c27410(uVar9,4,0,(uint)bVar2,0,local_res8);
          param_1[0x12] = uVar8;
          if (local_res8[0] != 0) goto LAB_143c52f66;
          if (bVar2 != 0) {
            uVar7 = (ulonglong)(uint)bVar2;
            lVar18 = 0;
            pbVar14 = pbVar12;
            do {
              pbVar12 = pbVar14 + 2;
              *(uint *)(lVar18 + param_1[0x12]) =
                   (int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1];
              uVar7 = uVar7 - 1;
              lVar18 = lVar18 + 4;
              pbVar14 = pbVar12;
            } while (uVar7 != 0);
          }
          pbVar14 = local_40;
          if (pbVar12 + 8 <= pbVar13) {
            *(uint *)(param_1 + 0x13) = (uint)*pbVar12;
            *(uint *)((longlong)param_1 + 0x9c) = (uint)pbVar12[1];
            *(uint *)(param_1 + 10) = (uint)CONCAT11(pbVar12[2],pbVar12[3]);
            pbVar15 = pbVar12 + 8;
            *(uint *)(param_1 + 8) = (uint)CONCAT11(pbVar12[4],pbVar12[5]);
            bVar2 = pbVar12[6];
            bVar3 = pbVar12[7];
            uVar16 = (uint)CONCAT11(bVar2,bVar3);
            *(uint *)(param_1 + 0x14) = uVar16;
            param_1[0x15] = pbVar15 + ((ulonglong)local_res18 - *(longlong *)(local_res10 + 0x38));
            uVar9 = FUN_143c27410(uVar9,0x10,0,uVar16,0,local_res8);
            param_1[0x16] = uVar9;
            if (local_res8[0] != 0) goto LAB_143c52f66;
            iVar17 = 4;
            if ((bVar1 & 2) != 0) {
              iVar17 = 5;
            }
            if ((bVar1 & 4) != 0) {
              iVar17 = iVar17 + 2;
            }
            if ((bVar1 & 8) != 0) {
              iVar17 = iVar17 + 1;
            }
            if ((bVar1 & 0x10) != 0) {
              iVar17 = iVar17 + 1;
            }
            if ((bVar1 & 0x20) != 0) {
              iVar17 = iVar17 + 1;
            }
            pbVar14 = local_40;
            if (pbVar15 + iVar17 * uVar16 <= pbVar13) {
              if (CONCAT11(bVar2,bVar3) != 0) {
                lVar18 = 0;
                uVar7 = (ulonglong)uVar16;
                do {
                  puVar10 = (uint *)(param_1[0x16] + lVar18);
                  if ((bVar1 & 2) == 0) {
                    uVar16 = (uint)*pbVar15;
                    pbVar13 = pbVar15 + 1;
                  }
                  else {
                    pbVar13 = pbVar15 + 2;
                    uVar16 = (uint)CONCAT11(*pbVar15,pbVar15[1]);
                  }
                  *puVar10 = uVar16;
                  if ((bVar1 & 4) == 0) {
                    uVar16 = *(uint *)((longlong)param_1 + 0x2c);
                  }
                  else {
                    uVar16 = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1];
                    pbVar13 = pbVar13 + 2;
                  }
                  puVar10[1] = uVar16;
                  if ((bVar1 & 8) != 0) {
                    pbVar13 = pbVar13 + 1;
                  }
                  if ((bVar1 & 0x10) == 0) {
                    uVar16 = (uint)*pbVar13;
                    pbVar14 = pbVar13 + 1;
                  }
                  else {
                    pbVar14 = pbVar13 + 2;
                    uVar16 = (uint)CONCAT11(*pbVar13,pbVar13[1]);
                  }
                  puVar10[2] = uVar16;
                  if ((bVar1 & 0x20) == 0) {
                    pbVar15 = pbVar14 + 2;
                    uVar16 = (uint)*pbVar14;
                  }
                  else {
                    pbVar15 = pbVar14 + 3;
                    uVar16 = (uint)CONCAT11(*pbVar14,pbVar14[1]);
                  }
                  lVar18 = lVar18 + 0x10;
                  puVar10[3] = uVar16 << 8 | (uint)pbVar15[-1];
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              goto LAB_143c52f66;
            }
          }
        }
      }
    }
  }
LAB_143c52f5b:
  local_40 = pbVar14;
  local_res8[0] = 8;
LAB_143c52f66:
  FT_Stream_ExitFrame(local_res10);
  uVar6 = IStreamingManager::GetNumWantingResourcesID(local_res10);
  *(undefined4 *)(param_1 + 0x1a) = uVar6;
  param_1[0x1b] = 0;
  return (ulonglong)local_res8[0];
}



// FUNCTION 143c52fc0 FUN_143c52fc0 body=813 status=ok
// SIG undefined FUN_143c52fc0(void)

int FUN_143c52fc0(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  longlong local_res8;
  int local_res18 [2];
  uint local_res20 [2];
  undefined8 in_stack_ffffffffffffff78;
  int local_58;
  int local_54;
  undefined4 local_50 [2];
  undefined8 local_48 [2];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar8 = 0;
  puVar9 = (undefined4 *)((ulonglong)param_3 * 0x10 + *(longlong *)(lVar1 + 0x228));
  lVar2 = *(longlong *)(lVar1 + 0xa0);
  puVar6 = *(uint **)(lVar1 + 0x1f8);
  if (*(uint *)(lVar1 + 0x1f0) != 0) {
    do {
      if ((*puVar6 == (uint)*(ushort *)(param_2 + 0x18)) &&
         (puVar6[1] == (uint)*(ushort *)(param_2 + 0x1a))) {
        uVar8 = puVar6[2];
        iVar7 = 4;
        if ((uVar8 & 1) != 0) {
          iVar7 = 5;
        }
        if ((uVar8 & 2) != 0) {
          iVar7 = iVar7 + 1;
        }
        if ((uVar8 & 4) != 0) {
          iVar7 = iVar7 + 1;
        }
        local_res8 = param_1;
        iVar4 = FUN_143c251d0(lVar2,*(int *)(lVar1 + 0x248) + puVar6[6]);
        if ((iVar4 == 0) && (iVar4 = FUN_143c24650(lVar2,iVar7 * puVar6[7]), iVar4 == 0)) {
          FUN_143c527f0(*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40),puVar6[7],
                        puVar6[2],CONCAT44(uVar5,*puVar9),local_48,local_res18);
          FT_Stream_ExitFrame(lVar2);
          iVar7 = local_res18[0];
          if (local_res18[0] == 0) {
            return 6;
          }
          local_res18[0] = 0;
          local_58 = 0;
          local_54 = 0;
          local_res20[0] = 0;
          local_50[0] = 0;
          uVar5 = puVar9[1];
          if (*(int *)(lVar1 + 0x18c) != *(int *)(lVar1 + 0x188)) {
            uVar5 = FUN_143c21f00(uVar5);
          }
          lVar3 = local_res8;
          *(undefined4 *)(local_res8 + 0x50) = uVar5;
          uVar5 = FUN_143c21f00((ulonglong)*(ushort *)(param_2 + 0x18) << 8,puVar9[1],
                                *(undefined4 *)(lVar1 + 0x18c));
          local_res8 = CONCAT44(local_res8._4_4_,uVar5);
          iVar4 = FUN_143c251d0(lVar2,(int)local_48[0] + *(int *)(lVar1 + 0x110));
          if ((iVar4 == 0) && (iVar4 = FUN_143c24650(lVar2,iVar7), iVar4 == 0)) {
            local_48[0] = *(undefined8 *)(lVar2 + 0x38);
            iVar4 = FUN_143c52270(local_48,*(undefined8 *)(lVar2 + 0x40),uVar5,local_res18,&local_58
                                  ,&local_54,local_res20,&local_res8,local_50);
            if ((local_res20[0] < 0x80000000) &&
               ((local_58 <= (int)(0x7fffffff - local_res20[0]) &&
                (-0x80000000 <= (int)(local_res20[0] + local_58))))) {
              if (iVar4 == 0) {
                *(int *)(lVar3 + 0x6c) = local_54;
                *(uint *)(lVar3 + 0x34) = local_res20[0] << 6;
                *(int *)(lVar3 + 0x38) = local_res18[0] << 6;
                *(int *)(lVar3 + 0x30) = local_54 * 0x40;
                iVar7 = local_54 + 7 >> 3;
                *(int *)(lVar3 + 0x70) = iVar7;
                *(int *)(lVar3 + 0x44) = local_54 * -0x40 >> 1;
                *(uint *)(lVar3 + 0x40) = ((int)local_res8 >> 2) + 0x20U & 0xffffffc0;
                *(undefined4 *)(lVar3 + 0x60) = 0x62697473;
                *(uint *)(lVar3 + 0x68) = local_res20[0];
                *(undefined1 *)(lVar3 + 0x82) = 1;
                *(int *)(lVar3 + 0x3c) = local_58 << 6;
                *(undefined4 *)(lVar3 + 0x48) = 0;
                *(undefined4 *)(lVar3 + 0x4c) = *(undefined4 *)(param_2 + 0x2c);
                *(int *)(lVar3 + 0x90) = local_res18[0];
                *(uint *)(lVar3 + 0x94) = local_res20[0] + local_58;
                iVar4 = FUN_143c26a10(lVar3,iVar7 * local_res20[0]);
                if (iVar4 == 0) {
                  iVar4 = FUN_143c520f0(local_48[0],*(undefined8 *)(lVar2 + 0x40),local_50[0],
                                        *(byte *)(lVar1 + 0x124) & 2,(uint *)(lVar3 + 0x68));
                }
              }
            }
            else {
              iVar4 = 0x17;
            }
            FT_Stream_ExitFrame(lVar2);
          }
        }
        return iVar4;
      }
      puVar6 = puVar6 + 10;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(lVar1 + 0x1f0));
  }
  return 6;
}



// FUNCTION 143c532f0 FUN_143c532f0 body=162 status=ok
// SIG undefined FUN_143c532f0(void)

long FUN_143c532f0(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x238)) {
    puVar6 = *(undefined8 **)(param_1 + 0x240);
    uVar7 = uVar5;
    do {
      if (*param_2 == *(char *)*puVar6) {
        pcVar4 = param_2;
        do {
          cVar1 = *pcVar4;
          cVar2 = pcVar4[(longlong)*puVar6 - (longlong)param_2];
          if (cVar1 != cVar2) break;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          lVar3 = _guard_xfg_dispatch_icall_nop
                            (*(char **)(*(longlong *)(param_1 + 0x248) + (longlong)(int)uVar7 * 8));
          return lVar3;
        }
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x238));
  }
  return 0;
}



// FUNCTION 143c533b0 FUN_143c533b0 body=869 status=ok
// SIG undefined FUN_143c533b0(void)

int FUN_143c533b0(undefined8 param_1,undefined4 *param_2,int param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  char *pcVar13;
  int iVar14;
  undefined4 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  
  plVar5 = (longlong *)(param_2 + 0xac);
  *plVar5 = 0;
  *param_2 = 1;
  lVar9 = ft_module_get_service(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps");
  *(longlong *)(param_2 + 0xa4) = lVar9;
  lVar10 = FT_Get_Module_Interface(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
  *(longlong *)(param_2 + 0xa6) = lVar10;
  if (lVar10 == 0) {
    iVar14 = 0xb;
  }
  else {
    iVar14 = FUN_143c54830(param_2);
    if ((iVar14 == 0) && (-1 < param_3)) {
      if (param_3 < 1) {
        param_2[4] = param_2[0x8e];
        uVar3 = param_2[2];
        param_2[0xe] = 0;
        param_2[2] = uVar3 | 0x211;
        param_2[1] = 0;
        if (*(char *)(param_2 + 0x41) != '\0') {
          param_2[2] = uVar3 | 0x215;
        }
        param_2[2] = param_2[2] | 0x800;
        pcVar13 = *(char **)(param_2 + 0x3c);
        *(char **)(param_2 + 6) = pcVar13;
        *(char **)(param_2 + 8) = "Regular";
        if (pcVar13 == (char *)0x0) {
          lVar12 = *(longlong *)(param_2 + 6);
          if (*(longlong *)(param_2 + 0x76) != 0) {
            lVar12 = *(longlong *)(param_2 + 0x76);
          }
          *(longlong *)(param_2 + 6) = lVar12;
        }
        else {
          pcVar11 = *(char **)(param_2 + 0x3a);
          if (pcVar11 != (char *)0x0) {
            cVar1 = *pcVar11;
            while (cVar1 != '\0') {
              cVar2 = *pcVar13;
              if (cVar1 == cVar2) {
                pcVar13 = pcVar13 + 1;
LAB_143c534cc:
                pcVar11 = pcVar11 + 1;
              }
              else {
                if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_143c534cc;
                if ((cVar2 != ' ') && (cVar2 != '-')) {
                  if (*pcVar13 == '\0') {
                    *(char **)(param_2 + 8) = pcVar11;
                  }
                  break;
                }
                pcVar13 = pcVar13 + 1;
              }
              cVar1 = *pcVar11;
            }
          }
        }
        param_2[10] = 0;
        *(undefined8 *)(param_2 + 0xc) = 0;
        local_68[0] = 9;
        local_40 = FT_Get_Module(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"truetype");
        local_60 = *(undefined8 *)(param_2 + 0xa8);
        local_58 = param_2[0xaa];
        if (param_4 != 0) {
          local_68[0] = local_68[0] | 0x10;
          local_30 = param_5;
          local_38 = param_4;
        }
        iVar14 = FUN_143c224d0(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),local_68,0,plVar5)
        ;
        if (iVar14 == 0) {
          FUN_143c20490(*(undefined8 *)(*plVar5 + 0x80));
          lVar12 = *plVar5;
          uVar6 = *(undefined4 *)(lVar12 + 0x5c);
          uVar7 = *(undefined4 *)(lVar12 + 0x60);
          uVar8 = *(undefined4 *)(lVar12 + 100);
          param_2[0x16] = *(undefined4 *)(lVar12 + 0x58);
          param_2[0x17] = uVar6;
          param_2[0x18] = uVar7;
          param_2[0x19] = uVar8;
          *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(*plVar5 + 0x68);
          *(undefined2 *)((longlong)param_2 + 0x6a) = *(undefined2 *)(*plVar5 + 0x6a);
          *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(*plVar5 + 0x6c);
          *(undefined2 *)((longlong)param_2 + 0x6e) = *(undefined2 *)(*plVar5 + 0x6e);
          *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(*plVar5 + 0x70);
          *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)(*plVar5 + 0x72);
          *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)((longlong)param_2 + 0x106);
          *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(param_2 + 0x42);
          param_2[3] = 0;
          param_2[3] = (uint)(param_2[0x40] != 0);
          if ((*(byte *)(*plVar5 + 0xc) & 2) != 0) {
            param_2[3] = param_2[3] | 2;
          }
          if ((*(byte *)(*plVar5 + 8) & 0x20) != 0) {
            param_2[2] = param_2[2] | 0x20;
          }
          if (lVar9 != 0) {
            plVar5 = *(longlong **)(lVar10 + 0x28);
            local_6c = 0x10003;
            local_70 = 0x756e6963;
            local_78 = param_2;
            iVar14 = FUN_143c1ff20(plVar5[3],0,&local_78,0);
            if ((iVar14 == 0) || ((char)iVar14 == -0x5d)) {
              iVar4 = param_2[0x78];
              iVar14 = 0;
              if (iVar4 == 1) {
                local_70 = 0x41444243;
                local_6c = 0x20007;
                lVar9 = plVar5[2];
              }
              else if (iVar4 == 2) {
                local_70 = 0x41444f42;
                local_6c = 7;
                lVar9 = *plVar5;
              }
              else if (iVar4 == 3) {
                local_70 = 0x6c617431;
                local_6c = 0x30007;
                lVar9 = plVar5[3];
              }
              else {
                if (iVar4 != 4) {
                  return 0;
                }
                local_70 = 0x41444245;
                local_6c = 0x10007;
                lVar9 = plVar5[1];
              }
              if (lVar9 != 0) {
                iVar14 = FUN_143c1ff20(lVar9,0,&local_78,0);
              }
            }
          }
        }
      }
      else {
        iVar14 = 6;
      }
    }
  }
  return iVar14;
}



// FUNCTION 143c53720 FUN_143c53720 body=413 status=ok
// SIG undefined FUN_143c53720(void)

void FUN_143c53720(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      FUN_143c20100();
    }
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x248));
    *(undefined8 *)(param_1 + 0x248) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x240));
    *(undefined8 *)(param_1 + 0x240) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x210));
    *(undefined8 *)(param_1 + 0x210) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x218) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x200) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1d8));
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x2a0));
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x308));
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 143c538c0 FUN_143c538c0 body=62 status=ok
// SIG undefined FUN_143c538c0(void)

undefined4 FUN_143c538c0(longlong *param_1)

{
  undefined4 uVar1;
  longlong local_res8;
  
  uVar1 = FUN_143c22390(*(undefined8 *)(*param_1 + 0x2b0),&local_res8);
  param_1[8] = local_res8;
  FUN_143c1fbf0();
  return uVar1;
}



// FUNCTION 143c53900 T42_Size_Request body=109 status=ok
// SIG undefined T42_Size_Request(void)

void T42_Size_Request(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  FUN_143c1fbf0(param_1[8]);
  iVar3 = FT_Request_Size(*(undefined8 *)(lVar1 + 0x2b0),param_2);
  if (iVar3 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x2b0) + 0x80);
    lVar2 = *(longlong *)(lVar1 + 0x20);
    param_1[3] = *(longlong *)(lVar1 + 0x18);
    param_1[4] = lVar2;
    param_1[5] = *(longlong *)(lVar1 + 0x28);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar1 + 0x30);
  }
  return;
}



// FUNCTION 143c53970 T42_Size_Select body=107 status=ok
// SIG undefined T42_Size_Select(void)

void T42_Size_Select(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  FUN_143c1fbf0(param_1[8]);
  iVar3 = FT_Select_Size(*(undefined8 *)(lVar1 + 0x2b0),param_2);
  if (iVar3 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x2b0) + 0x80);
    lVar2 = *(longlong *)(lVar1 + 0x20);
    param_1[3] = *(longlong *)(lVar1 + 0x18);
    param_1[4] = lVar2;
    param_1[5] = *(longlong *)(lVar1 + 0x28);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar1 + 0x30);
  }
  return;
}



// FUNCTION 143c539e0 T42_Size_Done body=63 status=ok
// SIG undefined T42_Size_Done(void)

void T42_Size_Done(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_143c21680(*(longlong *)(*param_1 + 0x2b0) + 0xa8,param_1[8]);
  if (lVar1 != 0) {
    FUN_143c20490(param_1[8]);
    param_1[8] = 0;
  }
  return;
}



// FUNCTION 143c53a20 T42_GlyphSlot_Init body=81 status=ok
// SIG undefined T42_GlyphSlot_Init(void)

undefined8 T42_GlyphSlot_Init(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar1 + 0x78) == 0) {
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(*(longlong *)(lVar1 + 0x2b0) + 0x78);
    return 0;
  }
  uVar2 = FUN_143c22190(*(undefined8 *)(lVar1 + 0x2b0),local_res8);
  *(undefined8 *)(param_1 + 0xf8) = local_res8[0];
  return uVar2;
}



// FUNCTION 143c53a80 FUN_143c53a80 body=337 status=ok
// SIG undefined FUN_143c53a80(void)

ulonglong FUN_143c53a80(longlong param_1,longlong param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 0x38);
  t42_glyphslot_clear(*(undefined8 *)(param_1 + 0xf8));
  uVar3 = (**(code **)(lVar1 + 0x78))
                    (*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_2 + 0x40),param_3,
                     param_4 | 8);
  if ((int)uVar3 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xf8);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar1 + 0x60);
    uVar2 = *(undefined8 *)(lVar1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar1 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar1 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0xb8);
    uVar2 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar1 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar1 + 0x94);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar1 + 0xc0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar1 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0xd0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar1 + 0xd8);
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143c53bf0 FUN_143c53bf0 body=56 status=ok
// SIG undefined FUN_143c53bf0(void)

undefined8 FUN_143c53bf0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FT_Get_Module(*(undefined8 *)(param_1 + 8),"truetype");
  if (puVar1 == (undefined8 *)0x0) {
    return 0xb;
  }
  *(undefined8 *)(param_1 + 0x38) = *puVar1;
  return 0;
}



// FUNCTION 143c53c30 FUN_143c53c30 body=915 status=ok
// SIG undefined FUN_143c53c30(void)

void FUN_143c53c30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  byte *_Str1;
  uint uVar11;
  int iVar12;
  bool bVar13;
  int local_res18 [2];
  
  puVar4 = *(undefined8 **)(param_1 + 0x298);
  pbVar5 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  _Str1 = (byte *)*param_2;
  if (pbVar5 <= _Str1) {
    *(undefined4 *)(param_2 + 3) = 3;
    return;
  }
  bVar2 = *_Str1;
  if ((9 < bVar2 - 0x30) && (bVar2 != 0x5b)) {
    if ((_Str1 + 0x11 < pbVar5) &&
       (iVar7 = _guard_xfg_dispatch_icall_nop((char *)_Str1,"StandardEncoding",0x10), iVar7 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 2;
      return;
    }
    if ((_Str1 + 0xf < pbVar5) &&
       (iVar7 = _guard_xfg_dispatch_icall_nop((char *)_Str1,"ExpertEncoding",0xe), iVar7 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 4;
      return;
    }
    if ((_Str1 + 0x12 < pbVar5) &&
       (iVar7 = _guard_xfg_dispatch_icall_nop((char *)_Str1,"ISOLatin1Encoding",0x11), iVar7 == 0))
    {
      *(undefined4 *)(param_1 + 0x1e0) = 3;
      return;
    }
    *(undefined4 *)(param_2 + 3) = 0xa2;
    return;
  }
  lVar6 = param_2[4];
  plVar1 = param_2 + 0x16;
  bVar13 = bVar2 != 0x5b;
  if (bVar13) {
    iVar7 = (*(code *)param_2[9])(param_2);
  }
  else {
    iVar7 = 0x100;
    *param_2 = (longlong)(_Str1 + 1);
  }
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar5) {
    *(int *)(param_1 + 0x1e8) = iVar7;
    *(int *)(param_2 + 0x15) = iVar7;
    iVar12 = 0;
    uVar9 = FUN_143c27410(lVar6,2,0,iVar7,0,local_res18);
    *(undefined8 *)(param_1 + 0x1f8) = uVar9;
    if (local_res18[0] == 0) {
      uVar9 = FUN_143c27410(lVar6,8,0,iVar7,0,local_res18);
      *(undefined8 *)(param_1 + 0x200) = uVar9;
      if ((local_res18[0] == 0) &&
         (local_res18[0] = (**(code **)*puVar4)(plVar1,iVar7,lVar6), local_res18[0] == 0)) {
        local_res18[0] = 0;
        iVar10 = iVar12;
        if (0 < iVar7) {
          do {
            (*(code *)param_2[0x20])(plVar1,iVar10,".notdef",8);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar7);
        }
LAB_143c53e7d:
        do {
          (*(code *)param_2[7])(param_2);
          if (pbVar5 <= (byte *)*param_2) {
LAB_143c53f8f:
            *(undefined4 *)(param_1 + 0x1e0) = 1;
            *param_2 = (longlong)_Str1;
            return;
          }
          _Str1 = (byte *)*param_2;
          bVar2 = *_Str1;
          if (((((bVar2 == 100) && (_Str1 + 3 < pbVar5)) && (_Str1[1] == 0x65)) &&
              ((_Str1[2] == 0x66 && (bVar3 = _Str1[3], bVar3 < 0x21)))) &&
             ((0x100003601U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) {
            _Str1 = _Str1 + 3;
            goto LAB_143c53f8f;
          }
          if (bVar2 == 0x5d) {
            _Str1 = _Str1 + 1;
            goto LAB_143c53f8f;
          }
          iVar10 = iVar12;
          if (bVar2 - 0x30 < 10) {
            if (bVar13) {
              iVar10 = (*(code *)param_2[9])(param_2);
              (*(code *)param_2[7])(param_2);
            }
          }
          else if (bVar13) {
            (*(code *)param_2[8])(param_2);
            if ((int)param_2[3] != 0) {
              return;
            }
            goto LAB_143c53e7d;
          }
          _Str1 = (byte *)*param_2;
          if (((_Str1 + 2 < pbVar5) && (*_Str1 == 0x2f)) && (iVar12 < iVar7)) {
            _Str1 = _Str1 + 1;
            *param_2 = (longlong)_Str1;
            (*(code *)param_2[8])(param_2);
            if (pbVar5 <= (byte *)*param_2) {
              return;
            }
            if ((int)param_2[3] != 0) {
              return;
            }
            uVar11 = (int)*param_2 - (int)_Str1;
            iVar8 = (*(code *)param_2[0x20])(plVar1,iVar10,_Str1,uVar11 + 1);
            *(int *)(param_2 + 3) = iVar8;
            if (iVar8 != 0) {
              return;
            }
            iVar12 = iVar12 + 1;
            *(undefined1 *)((ulonglong)uVar11 + *(longlong *)(param_2[0x1b] + (longlong)iVar10 * 8))
                 = 0;
          }
          else if (!bVar13) {
            *(undefined4 *)(param_2 + 3) = 2;
            return;
          }
        } while( true );
      }
    }
    *(int *)(param_2 + 3) = local_res18[0];
  }
  return;
}



// FUNCTION 143c53fd0 FUN_143c53fd0 body=1052 status=ok
// SIG undefined FUN_143c53fd0(void)

void FUN_143c53fd0(longlong param_1,int *param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  uint uVar18;
  uint local_res10;
  ulonglong uVar19;
  
  puVar7 = *(undefined8 **)(param_1 + 0x298);
  uVar8 = *(undefined8 *)(param_2 + 8);
  piVar1 = param_2 + 0x46;
  pbVar9 = *(byte **)(param_2 + 4);
  uVar15 = 0;
  uVar18 = 0;
  local_res10 = 0;
  bVar10 = false;
  (**(code **)(param_2 + 0xe))(param_2);
  if (*(byte **)param_2 < pbVar9) {
    bVar6 = **(byte **)param_2;
    if (bVar6 - 0x30 < 10) {
      iVar11 = (**(code **)(param_2 + 0x12))(param_2);
      param_2[0x44] = iVar11;
      if (param_2[6] != 0) {
        return;
      }
      if (-1 < iVar11) {
LAB_143c540c8:
        if (*(byte **)param_2 < pbVar9) {
          iVar11 = (**(code **)*puVar7)(param_2 + 0x5e,param_2[0x44],uVar8);
          if (((iVar11 != 0) ||
              (iVar11 = (**(code **)*puVar7)(piVar1,param_2[0x44],uVar8), iVar11 != 0)) ||
             (iVar11 = (**(code **)*puVar7)(param_2 + 0x76,4,uVar8), iVar11 != 0))
          goto LAB_143c5404d;
          (**(code **)(param_2 + 0xe))(param_2);
          pbVar16 = *(byte **)param_2;
          uVar17 = uVar15;
          uVar19 = uVar15;
          while (pbVar16 < pbVar9) {
            uVar18 = (uint)uVar19;
            if (((((*pbVar16 == 0x65) && (pbVar16 + 3 < pbVar9)) &&
                 ((pbVar16[1] == 0x6e && ((pbVar16[2] == 100 && (bVar6 = pbVar16[3], bVar6 < 0x21)))
                  ))) && ((0x100003601U >> ((ulonglong)bVar6 & 0x3f) & 1) != 0)) ||
               (*pbVar16 == 0x3e)) break;
            (**(code **)(param_2 + 0x10))(param_2);
            if (pbVar9 <= *(byte **)param_2) goto LAB_143c54048;
            if (param_2[6] != 0) {
              return;
            }
            if (*pbVar16 == 0x2f) {
              if (pbVar9 <= pbVar16 + 2) goto LAB_143c54048;
              pbVar16 = pbVar16 + 1;
              uVar13 = *param_2 - (int)pbVar16;
              iVar11 = (**(code **)(param_2 + 0x5a))(piVar1,uVar19,pbVar16,uVar13 + 1);
              if (iVar11 != 0) goto LAB_143c5404d;
              *(undefined1 *)
               ((ulonglong)uVar13 + *(longlong *)(uVar17 + *(longlong *)(param_2 + 0x50))) = 0;
              if (*pbVar16 == 0x2e) {
                uVar12 = uVar15;
                do {
                  pcVar2 = ".notdef" + uVar12;
                  uVar12 = uVar12 + 1;
                  if (*pcVar2 !=
                      *(char *)(*(longlong *)(uVar17 + *(longlong *)(param_2 + 0x50)) + -1 + uVar12)
                     ) goto LAB_143c54214;
                } while (uVar12 != 8);
                bVar10 = true;
                local_res10 = uVar18;
              }
LAB_143c54214:
              (**(code **)(param_2 + 0xe))(param_2);
              uVar8 = *(undefined8 *)param_2;
              (**(code **)(param_2 + 0x12))(param_2);
              if (pbVar9 <= *(byte **)param_2) goto LAB_143c54048;
              uVar13 = *param_2 - (int)uVar8;
              iVar11 = (**(code **)(param_2 + 0x72))(param_2 + 0x5e,uVar19,uVar8,uVar13 + 1);
              if (iVar11 != 0) goto LAB_143c5404d;
              uVar18 = uVar18 + 1;
              uVar19 = (ulonglong)uVar18;
              plVar3 = (longlong *)(*(longlong *)(param_2 + 0x68) + uVar17);
              uVar17 = uVar17 + 8;
              *(undefined1 *)((ulonglong)uVar13 + *plVar3) = 0;
              if (param_2[0x44] <= (int)uVar18) break;
            }
            uVar18 = (uint)uVar19;
            (**(code **)(param_2 + 0xe))(param_2);
            pbVar16 = *(byte **)param_2;
          }
          piVar14 = param_2 + 0x76;
          param_2[0x44] = uVar18;
          if (bVar10) {
            while (pcVar2 = ".notdef" + uVar15, uVar15 = uVar15 + 1,
                  *pcVar2 == *(char *)(**(longlong **)(param_2 + 0x50) + -1 + uVar15)) {
              if (uVar15 == 8) {
                return;
              }
            }
            iVar11 = (**(code **)(param_2 + 0x8a))
                               (piVar14,0,**(longlong **)(param_2 + 0x50),
                                **(undefined4 **)(param_2 + 0x52));
            if (iVar11 == 0) {
              iVar11 = (**(code **)(param_2 + 0x8a))
                                 (piVar14,1,**(undefined8 **)(param_2 + 0x68),
                                  **(undefined4 **)(param_2 + 0x6a));
              if (iVar11 == 0) {
                lVar4 = (longlong)(int)local_res10 * 4;
                lVar5 = (longlong)(int)local_res10 * 8;
                iVar11 = (**(code **)(param_2 + 0x8a))
                                   (piVar14,2,*(undefined8 *)(lVar5 + *(longlong *)(param_2 + 0x50))
                                    ,*(undefined4 *)(lVar4 + *(longlong *)(param_2 + 0x52)));
                if (((((iVar11 == 0) &&
                      (iVar11 = (**(code **)(param_2 + 0x8a))
                                          (piVar14,3,
                                           *(undefined8 *)(*(longlong *)(param_2 + 0x68) + lVar5),
                                           *(undefined4 *)(lVar4 + *(longlong *)(param_2 + 0x6a))),
                      iVar11 == 0)) &&
                     (iVar11 = (**(code **)(param_2 + 0x5a))
                                         (piVar1,local_res10,**(undefined8 **)(param_2 + 0x80),
                                          **(undefined4 **)(param_2 + 0x82)), iVar11 == 0)) &&
                    ((iVar11 = (**(code **)(param_2 + 0x72))
                                         (param_2 + 0x5e,local_res10,
                                          *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 8),
                                          *(undefined4 *)(*(longlong *)(param_2 + 0x82) + 4)),
                     iVar11 == 0 &&
                     (iVar11 = (**(code **)(param_2 + 0x5a))
                                         (piVar1,0,*(undefined8 *)
                                                    (*(longlong *)(param_2 + 0x80) + 0x10),
                                          *(undefined4 *)(*(longlong *)(param_2 + 0x82) + 8)),
                     iVar11 == 0)))) &&
                   (iVar11 = (**(code **)(param_2 + 0x72))
                                       (param_2 + 0x5e,0,
                                        *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x18),
                                        *(undefined4 *)(*(longlong *)(param_2 + 0x82) + 0xc)),
                   iVar11 == 0)) {
                  return;
                }
              }
            }
            goto LAB_143c5404d;
          }
        }
      }
    }
    else if (bVar6 == 0x3c) {
      (**(code **)(param_2 + 0x10))(param_2);
      if (param_2[6] != 0) {
        return;
      }
      (**(code **)(param_2 + 0xe))(param_2);
      pbVar16 = *(byte **)param_2;
      uVar17 = uVar15;
      if (pbVar16 < pbVar9) {
        do {
          if (**(char **)param_2 == '/') {
            uVar17 = (ulonglong)((int)uVar17 + 1);
          }
          else if (**(char **)param_2 == '>') {
            param_2[0x44] = (int)uVar17;
            *(byte **)param_2 = pbVar16;
            break;
          }
          (**(code **)(param_2 + 0x10))(param_2);
          if (param_2[6] != 0) {
            return;
          }
          (**(code **)(param_2 + 0xe))(param_2);
        } while (*(byte **)param_2 < pbVar9);
        goto LAB_143c540c8;
      }
    }
  }
LAB_143c54048:
  iVar11 = 3;
LAB_143c5404d:
  param_2[6] = iVar11;
  return;
}



// FUNCTION 143c543f0 FUN_143c543f0 body=1074 status=ok
// SIG undefined FUN_143c543f0(void)

void FUN_143c543f0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  char *pcVar15;
  longlong lVar16;
  int iVar17;
  undefined1 *puVar18;
  int local_res18 [2];
  uint local_res20;
  uint local_68;
  int local_64;
  uint local_60 [2];
  undefined1 *local_58;
  char *local_50;
  longlong local_48;
  
  local_48 = param_2[4];
  pcVar15 = (char *)param_2[2];
  iVar11 = 0;
  puVar18 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  bVar6 = false;
  local_50 = pcVar15;
  (*(code *)param_2[7])(param_2);
  pcVar4 = (char *)*param_2;
  if ((pcVar4 < pcVar15) && (cVar2 = *pcVar4, *param_2 = (longlong)(pcVar4 + 1), cVar2 == '[')) {
    (*(code *)param_2[7])(param_2);
    iVar17 = 0;
    local_res20 = 0;
    iVar12 = 0;
    local_64 = 0;
    if ((char *)*param_2 < pcVar15) {
      lVar13 = 0;
      do {
        pbVar5 = (byte *)*param_2;
        bVar3 = *pbVar5;
        if (bVar3 == 0x5d) {
          *param_2 = *param_2 + 1;
          puVar18 = local_58;
          goto LAB_143c547f3;
        }
        if (bVar3 == 0x3c) {
          (*(code *)param_2[8])(param_2);
          puVar18 = local_58;
          if ((int)param_2[3] == 0) {
            uVar8 = ((*param_2 - (longlong)pbVar5) + -1) / 2;
            if ((int)uVar8 == 0) {
LAB_143c547bf:
              local_res18[0] = 3;
LAB_143c547cb:
              *(int *)(param_2 + 3) = local_res18[0];
              puVar18 = local_58;
            }
            else {
              local_58 = (undefined1 *)
                         FUN_143c27410(local_48,1,local_64,uVar8 & 0xffffffff,local_58,local_res18);
              if (local_res18[0] == 0) {
                bVar6 = true;
                *param_2 = (longlong)pbVar5;
                (*(code *)param_2[0xb])(param_2,local_58,uVar8 & 0xffffffff,local_60,1);
                local_res20 = local_60[0];
                pcVar15 = local_50;
                uVar7 = local_60[0];
                local_64 = (int)uVar8;
                goto LAB_143c545bb;
              }
LAB_143c547e2:
              *(int *)(param_2 + 3) = local_res18[0];
              puVar18 = local_58;
            }
          }
          goto LAB_143c547f3;
        }
        uVar7 = local_res20;
        if (bVar3 - 0x30 < 10) {
          if ((bVar6) ||
             (uVar7 = (*(code *)param_2[9])(param_2), local_res20 = uVar7, (int)uVar7 < 0))
          goto LAB_143c547bf;
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) {
            return;
          }
          lVar16 = *param_2;
          local_58 = (undefined1 *)(lVar16 + 1);
          puVar18 = local_58;
          if ((uint)((int)local_50 - (int)lVar16) < uVar7) break;
          *param_2 = (ulonglong)(uVar7 + 1) + lVar16;
          pcVar15 = local_50;
        }
LAB_143c545bb:
        if (local_58 == (undefined1 *)0x0) {
          local_res18[0] = 3;
          goto LAB_143c547e2;
        }
        if (((uVar7 & 1) != 0) && (uVar1 = uVar7 - 1, local_res20 = uVar7, local_58[uVar1] == '\0'))
        {
          uVar7 = uVar1;
          local_res20 = uVar1;
        }
        if (uVar7 == 0) goto LAB_143c547bf;
        local_68 = 0;
        puVar18 = local_58;
        if (uVar7 != 0) {
          do {
            if (iVar17 == 0) {
              lVar16 = *(longlong *)(param_1 + 0x2a0);
              if (0xb < lVar13) {
                iVar17 = 1;
                iVar11 = (uint)*(byte *)(lVar16 + 4) * 0x10 + (uint)*(byte *)(lVar16 + 5);
                iVar14 = iVar11 * 0x10 + 0xc;
                *(int *)(param_1 + 0x2a8) = iVar14;
                if (iVar14 <= (int)pcVar15 - (int)*param_2) {
                  uVar10 = FUN_143c27410(local_48,1,0xc,iVar14,lVar16,local_res18);
                  *(undefined8 *)(param_1 + 0x2a0) = uVar10;
                  if (local_res18[0] == 0) goto LAB_143c546a3;
                  goto LAB_143c547cb;
                }
                goto LAB_143c547bf;
              }
LAB_143c54770:
              iVar12 = iVar12 + 1;
              *(undefined1 *)(lVar13 + lVar16) = *puVar18;
              lVar13 = lVar13 + 1;
            }
            else {
              if (iVar17 == 1) {
LAB_143c546a3:
                iVar14 = *(int *)(param_1 + 0x2a8);
                if (iVar12 < iVar14) {
LAB_143c54769:
                  lVar16 = *(longlong *)(param_1 + 0x2a0);
                  goto LAB_143c54770;
                }
                lVar16 = (longlong)iVar11;
                if (iVar11 != 0) {
                  puVar9 = (undefined1 *)(*(longlong *)(param_1 + 0x2a0) + 0x1a);
                  do {
                    iVar14 = iVar14 + (CONCAT31(CONCAT21(CONCAT11(puVar9[-2],puVar9[-1]),*puVar9),
                                                puVar9[1]) + 3U & 0xfffffffc);
                    *(int *)(param_1 + 0x2a8) = iVar14;
                    lVar16 = lVar16 + -1;
                    puVar9 = puVar9 + 0x10;
                  } while (lVar16 != 0);
                }
                iVar17 = 2;
                uVar10 = FUN_143c27410(local_48,1,iVar11 * 0x10 + 0xc,*(int *)(param_1 + 0x2a8) + 1,
                                       *(undefined8 *)(param_1 + 0x2a0),local_res18);
                *(undefined8 *)(param_1 + 0x2a0) = uVar10;
                if (local_res18[0] == 0) goto LAB_143c54761;
                goto LAB_143c547cb;
              }
              if (iVar17 == 2) {
LAB_143c54761:
                if (iVar12 < *(int *)(param_1 + 0x2a8)) goto LAB_143c54769;
                goto LAB_143c547bf;
              }
            }
            local_68 = local_68 + 1;
            pcVar15 = local_50;
            puVar18 = puVar18 + 1;
          } while (local_68 < uVar7);
        }
        (*(code *)param_2[7])(param_2);
        pcVar15 = local_50;
        puVar18 = local_58;
      } while ((char *)*param_2 < local_50);
    }
  }
  local_res18[0] = 3;
  *(undefined4 *)(param_2 + 3) = 3;
LAB_143c547f3:
  if (bVar6) {
    ft_mem_free(local_48,puVar18);
  }
  return;
}



// FUNCTION 143c54830 FUN_143c54830 body=892 status=ok
// SIG undefined FUN_143c54830(void)

int FUN_143c54830(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  int local_res8 [2];
  uint local_res10;
  undefined1 local_278 [32];
  undefined8 local_258;
  code *local_248;
  undefined8 local_1e0;
  undefined4 local_1d8;
  char local_1d4;
  undefined4 local_1d0;
  undefined1 local_1c8 [24];
  undefined4 local_1b0;
  int local_1ac;
  longlong local_1a0;
  code *local_170;
  undefined4 local_168;
  undefined8 local_160 [3];
  undefined4 local_148;
  undefined8 local_138;
  code *local_108;
  undefined8 local_100 [3];
  int local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  code *local_a8;
  undefined1 local_a0 [88];
  code *local_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0x298);
  _guard_xfg_dispatch_icall_nop(local_278,0,0x238);
  uVar10 = 0;
  local_168 = 0;
  local_1d0 = 0;
  local_1b0 = 0;
  local_e8 = 0;
  local_148 = 0;
  uVar7 = FUN_143c271e0(uVar3,0xc,local_res8);
  *(undefined8 *)(param_1 + 0x2a0) = uVar7;
  if (local_res8[0] == 0) {
    *(undefined4 *)(param_1 + 0x2a8) = 0xc;
    local_res8[0] = FUN_143c54ec0(local_278,*(undefined8 *)(param_1 + 0xa0),uVar3,uVar4);
    if ((local_res8[0] == 0) &&
       (local_res8[0] = FUN_143c54ce0(param_1,local_278,local_1e0,local_1d8), local_res8[0] == 0)) {
      if (*(char *)(param_1 + 0x259) == '*') {
        uVar17 = 0;
        *(undefined4 *)(param_1 + 0x238) = local_168;
        if (local_e8 == 0) {
          local_res8[0] = 3;
        }
        local_e8 = 0;
        *(undefined8 *)(param_1 + 0x210) = local_100[0];
        *(undefined8 *)(param_1 + 0x248) = local_d8;
        *(undefined8 *)(param_1 + 0x250) = local_d0;
        *(undefined8 *)(param_1 + 0x218) = local_160[0];
        *(undefined8 *)(param_1 + 0x240) = local_138;
        local_160[0] = 0;
        local_138 = 0;
        if (*(int *)(param_1 + 0x1e0) == 1) {
          local_res10 = 0;
          uVar13 = uVar10;
          uVar15 = uVar10;
          uVar16 = uVar10;
          uVar18 = uVar10;
          uVar9 = uVar17;
          if (0 < local_1ac) {
LAB_143c549e0:
            iVar14 = 0;
            *(undefined2 *)(uVar16 + *(longlong *)(param_1 + 0x1f8)) = 0;
            *(char **)(uVar15 + *(longlong *)(param_1 + 0x200)) = ".notdef";
            pcVar5 = *(char **)(uVar15 + local_1a0);
            iVar12 = (int)uVar13;
            if ((pcVar5 != (char *)0x0) && (0 < *(int *)(param_1 + 0x238))) {
              do {
                lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar14 * 8);
                pcVar8 = pcVar5;
                do {
                  cVar1 = *pcVar8;
                  cVar2 = pcVar8[lVar6 - (longlong)pcVar5];
                  if (cVar1 != cVar2) break;
                  pcVar8 = pcVar8 + 1;
                } while (cVar2 != '\0');
                if (cVar1 == cVar2) {
                  lVar11 = 0;
                  *(short *)(uVar16 + *(longlong *)(param_1 + 0x1f8)) = (short)iVar14;
                  *(longlong *)(uVar15 + *(longlong *)(param_1 + 0x200)) = lVar6;
                  goto LAB_143c54aa0;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < *(int *)(param_1 + 0x238));
              uVar10 = (ulonglong)local_res10;
            }
            goto LAB_143c54ad6;
          }
LAB_143c54af9:
          *(undefined4 *)(param_1 + 0x1ec) = uVar17;
          *(undefined4 *)(param_1 + 0x1e8) = local_1d0;
          *(undefined4 *)(param_1 + 0x1f0) = uVar9;
        }
      }
      else {
        local_res8[0] = 2;
      }
    }
  }
  if (local_170 != (code *)0x0) {
    (*local_170)(local_1c8);
  }
  if (local_a8 != (code *)0x0) {
    (*local_a8)(local_100);
  }
  if (local_108 != (code *)0x0) {
    (*local_108)(local_160);
  }
  if (local_48 != (code *)0x0) {
    (*local_48)(local_a0);
  }
  if (local_1d4 == '\0') {
    ft_mem_free(local_258,local_1e0);
    local_1e0 = 0;
  }
  (*local_248)(local_278);
  return local_res8[0];
  while (lVar11 != 8) {
LAB_143c54aa0:
    pcVar5 = ".notdef" + lVar11;
    lVar11 = lVar11 + 1;
    if (*pcVar5 != *(char *)(lVar6 + -1 + lVar11)) {
      uVar10 = (ulonglong)local_res10;
      if (iVar12 < (int)uVar18) {
        uVar18 = uVar13;
      }
      if ((int)local_res10 <= iVar12) {
        local_res10 = iVar12 + 1;
        uVar10 = (ulonglong)local_res10;
      }
      goto LAB_143c54ad6;
    }
  }
  uVar10 = (ulonglong)local_res10;
LAB_143c54ad6:
  uVar9 = (undefined4)uVar10;
  uVar17 = (undefined4)uVar18;
  uVar13 = (ulonglong)(iVar12 + 1U);
  uVar15 = uVar15 + 8;
  uVar16 = uVar16 + 2;
  if (local_1ac <= (int)(iVar12 + 1U)) goto LAB_143c54af9;
  goto LAB_143c549e0;
}



// FUNCTION 143c54bb0 t42_glyphslot_clear body=146 status=ok
// SIG undefined t42_glyphslot_clear(void)

void t42_glyphslot_clear(longlong param_1)

{
  ft_glyphslot_free_bitmap();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 143c54c50 FUN_143c54c50 body=144 status=ok
// SIG undefined FUN_143c54c50(void)

ulonglong FUN_143c54c50(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong local_res18 [2];
  
  if (*(int *)(param_3 + 0xc) == 0xb) {
    (**(code **)(param_3 + 0x10))(param_1,param_2);
    return (ulonglong)*(uint *)(param_2 + 0x18);
  }
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 2) {
    local_res18[0] = param_1 + 0x110;
  }
  else if ((iVar1 == 3) || (iVar1 != 5)) {
    local_res18[0] = param_1 + 0xd8;
  }
  else {
    local_res18[0] = param_1 + 0x274;
  }
  if (1 < *(int *)(param_3 + 0xc) - 9U) {
    uVar2 = (**(code **)(param_2 + 0x80))();
    return uVar2;
  }
  uVar2 = (**(code **)(param_2 + 0x88))(param_2,param_3,local_res18,0,0);
  return uVar2;
}



// FUNCTION 143c54ce0 FUN_143c54ce0 body=480 status=ok
// SIG undefined FUN_143c54ce0(void)

ulonglong FUN_143c54ce0(undefined8 param_1,ulonglong *param_2,ulonglong param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined1 local_48 [16];
  int local_38;
  
  pcVar4 = (char *)((longlong)param_4 + param_3);
  *param_2 = param_3;
  param_2[2] = (ulonglong)pcVar4;
  *(int *)(param_2 + 3) = 0;
  (*(code *)param_2[7])(param_2);
  pcVar5 = (char *)*param_2;
  while (pcVar5 < pcVar4) {
    pcVar5 = (char *)*param_2;
    if (((*pcVar5 == 'F') && (pcVar5 + 0x19 < pcVar4)) &&
       (iVar2 = _guard_xfg_dispatch_icall_nop(pcVar5,"FontDirectory",0xd), iVar2 == 0)) {
      (*(code *)param_2[8])(param_2);
      (*(code *)param_2[7])(param_2);
      pcVar5 = (char *)*param_2;
      pcVar1 = pcVar5;
      while ((pcVar1 < pcVar4 &&
             (((*pcVar1 != 'k' || (pcVar4 <= pcVar1 + 5)) ||
              (iVar2 = _guard_xfg_dispatch_icall_nop(pcVar1,"known",5), iVar2 != 0))))) {
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) goto LAB_143c54e9d;
        (*(code *)param_2[7])(param_2);
        pcVar1 = (char *)*param_2;
      }
      if (pcVar1 < pcVar4) {
        (*(code *)param_2[8])(param_2);
        (*(code *)param_2[0xe])(param_2,local_48);
        if (local_38 == 3) {
          pcVar5 = (char *)*param_2;
        }
      }
      *param_2 = (ulonglong)pcVar5;
    }
    else if ((*pcVar5 == '/') && (pcVar5 + 2 < pcVar4)) {
      pcVar5 = pcVar5 + 1;
      *param_2 = (ulonglong)pcVar5;
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) break;
      uVar7 = (int)*param_2 - (int)pcVar5;
      if ((uVar7 - 1 < 0x15) && ((char *)*param_2 < pcVar4)) {
        ppuVar6 = &PTR_s_version_145d25c80;
        do {
          pcVar1 = *ppuVar6;
          if ((pcVar1 != (char *)0x0) && (*pcVar5 == *pcVar1)) {
            uVar3 = 0xffffffffffffffff;
            do {
              uVar3 = uVar3 + 1;
            } while (pcVar1[uVar3] != '\0');
            if ((uVar7 == uVar3) &&
               (iVar2 = _guard_xfg_dispatch_icall_nop(pcVar5,pcVar1,(ulonglong)uVar7), iVar2 == 0))
            {
              uVar3 = FUN_143c54c50(param_1,param_2,ppuVar6);
              *(int *)(param_2 + 3) = (int)uVar3;
              if ((int)uVar3 != 0) {
                return uVar3;
              }
              break;
            }
          }
          ppuVar6 = ppuVar6 + 6;
        } while ((longlong)ppuVar6 < 0x145d26040);
      }
    }
    else {
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) break;
    }
    (*(code *)param_2[7])(param_2);
    pcVar5 = (char *)*param_2;
  }
LAB_143c54e9d:
  return (ulonglong)(uint)param_2[3];
}



// FUNCTION 143c54ec0 FUN_143c54ec0 body=417 status=ok
// SIG undefined FUN_143c54ec0(void)

uint FUN_143c54ec0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = (longlong)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  local_res8[0] = FUN_143c251d0(param_2,0);
  if ((local_res8[0] == 0) && (local_res8[0] = FUN_143c24650(param_2,0x11), local_res8[0] == 0)) {
    plVar2 = (longlong *)param_2[7];
    lVar3 = *plVar2 + -0x7572542d53502125;
    if ((lVar3 == 0) && (lVar3 = plVar2[1] + -0x6e6f466570795465, lVar3 == 0)) {
      lVar3 = (ulonglong)*(byte *)(plVar2 + 2) - 0x74;
    }
    if (lVar3 != 0) {
      local_res8[0] = 2;
    }
    FT_Stream_ExitFrame(param_2);
    if ((local_res8[0] == 0) && (local_res8[0] = FUN_143c251d0(param_2), local_res8[0] == 0)) {
      uVar1 = (undefined4)param_2[1];
      if (param_2[4] == 0) {
        param_1[0x13] = (ulonglong)*(uint *)((longlong)param_2 + 0xc) + *param_2;
        *(undefined4 *)(param_1 + 0x14) = uVar1;
        *(undefined1 *)((longlong)param_1 + 0xa4) = 1;
        local_res8[0] = FUN_143c25220(param_2);
        if (local_res8[0] == 0) {
LAB_143c55030:
          lVar3 = param_1[0x13];
          param_1[1] = lVar3;
          param_1[2] = (int)param_1[0x14] + lVar3;
          *param_1 = lVar3;
          return 0;
        }
      }
      else {
        lVar3 = FUN_143c271e0(param_3,uVar1,local_res8);
        param_1[0x13] = lVar3;
        if ((local_res8[0] == 0) &&
           (local_res8[0] = FUN_143c24ae0(param_2,lVar3,uVar1), local_res8[0] == 0)) {
          *(undefined4 *)(param_1 + 0x14) = uVar1;
          goto LAB_143c55030;
        }
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0xa4) == '\0') {
    ft_mem_free(param_3,param_1[0x13]);
    param_1[0x13] = 0;
  }
  return local_res8[0];
}



// FUNCTION 143c550e0 FUN_143c550e0 body=62 status=ok
// SIG undefined FUN_143c550e0(void)

void FUN_143c550e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_143c55fe0();
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 143c55120 FUN_143c55120 body=906 status=ok
// SIG undefined FUN_143c55120(void)

ulonglong FUN_143c55120(longlong param_1,undefined4 *param_2,int param_3,uint param_4)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  short *psVar8;
  void *_Dst;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  short sVar12;
  uint local_res20 [2];
  undefined4 *local_38;
  undefined8 local_30;
  
  uVar10 = *(undefined8 *)(param_2 + 0x26);
  local_res20[0] = param_4;
  uVar6 = FUN_143c558e0(param_2,param_3);
  local_res20[0] = (uint)uVar6;
  if ((local_res20[0] == 0) && (param_3 < 0)) {
    return uVar6;
  }
  if ((char)uVar6 == '\x02') {
    puVar7 = (undefined4 *)FUN_143c271e0(uVar10,0xb8,local_res20);
    *(undefined4 **)(param_2 + 0x36) = puVar7;
    if (local_res20[0] != 0) {
      return (ulonglong)local_res20[0];
    }
    *param_2 = 1;
    *puVar7 = 0;
    puVar7[0x2a] = *(undefined4 *)(param_1 + 8);
    uVar6 = FUN_143c56060(puVar7,param_1);
    local_res20[0] = (uint)uVar6;
    if (local_res20[0] != 0) goto LAB_143c551d9;
    if (0 < param_3) {
      local_res20[0] = 6;
      goto LAB_143c551d9;
    }
    if (param_3 < 0) {
      return uVar6;
    }
  }
  else if (local_res20[0] != 0) goto LAB_143c551d9;
  lVar1 = *(longlong *)(param_2 + 0x36);
  param_2[2] = param_2[2] | 0x12;
  param_2[1] = param_3;
  if (*(short *)(lVar1 + 100) == *(short *)(lVar1 + 0x66)) {
    param_2[2] = param_2[2] | 4;
  }
  if (*(char *)(lVar1 + 0x56) != '\0') {
    param_2[3] = param_2[3] | 1;
  }
  if (799 < *(ushort *)(lVar1 + 0x5a)) {
    param_2[3] = param_2[3] | 2;
  }
  psVar8 = (short *)FUN_143c27410(uVar10,0x10,0,1,0,local_res20);
  *(short **)(param_2 + 0xc) = psVar8;
  if (local_res20[0] == 0) {
    param_2[10] = 1;
    psVar8[1] = *(short *)(lVar1 + 100);
    *psVar8 = *(short *)(lVar1 + 0x54) + *(short *)(lVar1 + 0x60);
    iVar3 = (uint)*(ushort *)(lVar1 + 0x4a) << 6;
    *(int *)(psVar8 + 2) = iVar3;
    sVar12 = *(short *)(lVar1 + 0x4e);
    if (sVar12 == 0) {
      sVar12 = 0x48;
    }
    sVar2 = *(short *)(lVar1 + 0x4c);
    if (sVar2 == 0) {
      sVar2 = 0x48;
    }
    iVar3 = FUN_143c21f00(iVar3,sVar2,0x48);
    uVar4 = iVar3 + 0x20U & 0xffffffc0;
    *(uint *)(psVar8 + 6) = uVar4;
    iVar3 = (uint)*(ushort *)(lVar1 + 0x60) << 6;
    if (iVar3 < (int)uVar4) {
      *(int *)(psVar8 + 6) = iVar3;
      uVar5 = FUN_143c21f00(iVar3,0x48,sVar2);
      *(undefined4 *)(psVar8 + 2) = uVar5;
    }
    iVar3 = FUN_143c21f00(*(undefined4 *)(psVar8 + 2),sVar12,0x48);
    local_30 = 0;
    *(uint *)(psVar8 + 4) = iVar3 + 0x20U & 0xffffffc0;
    if (*(char *)(lVar1 + 0x5c) == 'M') {
      local_30 = 0x161726d6e;
    }
    local_38 = param_2;
    local_res20[0] = FUN_143c1ff20(&DAT_145d26070,0,&local_38,0);
    if (local_res20[0] == 0) {
      if (param_2[0xe] != 0) {
        *(undefined8 *)(param_2 + 0x22) = **(undefined8 **)(param_2 + 0x10);
      }
      if (*(byte *)(lVar1 + 0x68) <= *(byte *)(lVar1 + 0x69)) {
        param_2[4] = ((uint)*(byte *)(lVar1 + 0x69) - (uint)*(byte *)(lVar1 + 0x68)) + 2;
        if (*(uint *)(lVar1 + 0x74) < *(uint *)(lVar1 + 8)) {
          uVar4 = *(uint *)(lVar1 + 8) - *(uint *)(lVar1 + 0x74);
          _Dst = (void *)FUN_143c271e0(uVar10,uVar4 + 1,local_res20);
          *(void **)(lVar1 + 0xb0) = _Dst;
          if (local_res20[0] == 0) {
            _guard_xfg_dispatch_icall_nop
                      (_Dst,(void *)((ulonglong)*(uint *)(lVar1 + 0x74) +
                                    *(longlong *)(lVar1 + 0xa0)),(ulonglong)uVar4);
            *(undefined1 *)((ulonglong)uVar4 + *(longlong *)(lVar1 + 0xb0)) = 0;
            lVar9 = -1;
            do {
              pcVar11 = (char *)(*(longlong *)(lVar1 + 0xb0) + 1 + lVar9);
              lVar9 = lVar9 + 1;
            } while (*pcVar11 != '\0');
            uVar10 = FUN_143c27410(uVar10,1,uVar4,(int)lVar9 + 1,*(longlong *)(lVar1 + 0xb0),
                                   local_res20);
            *(undefined8 *)(lVar1 + 0xb0) = uVar10;
            if (local_res20[0] == 0) {
              uVar4 = param_2[3];
              *(undefined8 *)(param_2 + 6) = uVar10;
              *(char **)(param_2 + 8) = "Regular";
              if ((uVar4 & 2) != 0) {
                pcVar11 = "Bold Italic";
                if ((uVar4 & 1) == 0) {
                  pcVar11 = "Bold";
                }
                *(char **)(param_2 + 8) = pcVar11;
                return 0;
              }
              pcVar11 = "Italic";
              if ((uVar4 & 1) == 0) {
                pcVar11 = *(char **)(param_2 + 8);
              }
              *(char **)(param_2 + 8) = pcVar11;
              return 0;
            }
          }
          goto LAB_143c551d9;
        }
      }
      local_res20[0] = 3;
    }
  }
LAB_143c551d9:
  uVar10 = *(undefined8 *)(param_2 + 0x26);
  FUN_143c55fe0(param_2);
  ft_mem_free(uVar10,*(undefined8 *)(param_2 + 0xc));
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[10] = 0;
  return (ulonglong)local_res20[0];
}



// FUNCTION 143c554b0 FUN_143c554b0 body=79 status=ok
// SIG undefined FUN_143c554b0(void)

undefined8 FUN_143c554b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xd8);
  FUN_143c241f0(*param_1,0);
  *(uint *)((longlong)param_1 + 0x24) = (uint)*(ushort *)(lVar1 + 0x50) << 6;
  *(uint *)(param_1 + 5) =
       ((uint)*(ushort *)(lVar1 + 0x50) - (uint)*(ushort *)(lVar1 + 0x60)) * 0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar1 + 0x66) << 6;
  return 0;
}



// FUNCTION 143c55500 FUN_143c55500 body=230 status=ok
// SIG undefined FUN_143c55500(void)

undefined8 FUN_143c55500(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0xd8);
  if (param_2[4] == 0) {
    iVar4 = param_2[2];
  }
  else {
    iVar4 = (param_2[2] * param_2[4] + 0x24) / 0x48;
  }
  if (*param_2 == 0) {
    uVar3 = *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6;
  }
  else {
    if (*param_2 != 1) {
      return 7;
    }
    uVar3 = (uint)*(ushort *)(lVar2 + 0x60);
  }
  if (iVar4 + 0x20 >> 6 == uVar3) {
    FUN_143c241f0(lVar1,0);
    *(uint *)((longlong)param_1 + 0x24) = (uint)*(ushort *)(lVar2 + 0x50) << 6;
    *(uint *)(param_1 + 5) =
         ((uint)*(ushort *)(lVar2 + 0x50) - (uint)*(ushort *)(lVar2 + 0x60)) * 0x40;
    *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar2 + 0x66) << 6;
    return 0;
  }
  return 0x17;
}



// FUNCTION 143c555f0 FUN_143c555f0 body=595 status=ok
// SIG undefined FUN_143c555f0(void)

int FUN_143c555f0(longlong param_1,longlong *param_2,uint param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  int local_res20 [2];
  
  lVar2 = *param_2;
  local_res20[0] = 0;
  if (lVar2 == 0) {
    return 0x23;
  }
  lVar3 = *(longlong *)(lVar2 + 0xd8);
  if ((lVar3 != 0) && (param_3 < *(uint *)(lVar2 + 0x10))) {
    if (param_3 == 0) {
      param_3 = (uint)*(byte *)(lVar3 + 0x6a);
    }
    else {
      param_3 = param_3 - 1;
    }
    bVar16 = *(short *)(lVar3 + 4) != 0x300;
    iVar7 = 4;
    if (!bVar16) {
      iVar7 = 6;
    }
    iVar5 = 0x76;
    if (!bVar16) {
      iVar5 = 0x94;
    }
    uVar8 = iVar7 * param_3 + iVar5;
    iVar7 = 2;
    if (!bVar16) {
      iVar7 = 4;
    }
    if (uVar8 < (*(int *)(lVar3 + 8) - iVar7) - 2U) {
      puVar9 = (ushort *)((ulonglong)uVar8 + *(longlong *)(lVar3 + 0xa0));
      *(uint *)(param_1 + 0x6c) = (uint)*puVar9;
      if (bVar16) {
        uVar8 = (uint)*(byte *)((longlong)puVar9 + 3);
      }
      else {
        uVar8 = (uint)*(uint3 *)((longlong)puVar9 + 3);
      }
      uVar8 = uVar8 << 8 | (uint)(byte)puVar9[1];
      if (uVar8 < *(uint *)(lVar3 + 8)) {
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98);
        uVar12 = *(int *)(param_1 + 0x6c) + 7;
        uVar13 = uVar12 >> 3;
        puVar11 = (undefined1 *)((ulonglong)uVar8 + *(longlong *)(lVar3 + 0xa0));
        *(uint *)(param_1 + 0x70) = uVar13;
        uVar1 = *(ushort *)(lVar3 + 0x60);
        *(uint *)(param_1 + 0x68) = (uint)uVar1;
        *(undefined1 *)(param_1 + 0x82) = 1;
        if (*(uint *)(lVar3 + 8) < uVar1 * uVar13 + uVar8) {
          local_res20[0] = 3;
        }
        else {
          puVar6 = (undefined1 *)FUN_143c27410(uVar4,uVar1,0,uVar13,0,local_res20);
          *(undefined1 **)(param_1 + 0x78) = puVar6;
          if (local_res20[0] == 0) {
            for (uVar12 = uVar12 >> 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              uVar15 = (longlong)(puVar11 + *(uint *)(param_1 + 0x68)) - (longlong)puVar11;
              if (puVar11 + *(uint *)(param_1 + 0x68) < puVar11) {
                uVar15 = 0;
              }
              puVar10 = puVar6;
              uVar14 = 0;
              if (uVar15 != 0) {
                do {
                  uVar14 = uVar14 + 1;
                  *puVar10 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar10 = puVar10 + *(int *)(param_1 + 0x70);
                } while (uVar14 < uVar15);
              }
              puVar6 = puVar6 + 1;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 8) = 1;
            *(undefined4 *)(param_1 + 0x90) = 0;
            uVar1 = *(ushort *)(lVar3 + 0x50);
            *(uint *)(param_1 + 0x94) = (uint)uVar1;
            *(undefined4 *)(param_1 + 0x60) = 0x62697473;
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x6c) << 6;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x68) << 6;
            *(uint *)(param_1 + 0x3c) = (uint)uVar1 << 6;
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x6c) << 6;
            *(undefined4 *)(param_1 + 0x38) = 0;
            FUN_143c27730((int *)(param_1 + 0x30),*(int *)(param_1 + 0x68) << 6);
          }
        }
        return local_res20[0];
      }
    }
    return 3;
  }
  return 6;
}



// FUNCTION 143c558e0 FUN_143c558e0 body=1787 status=ok
// SIG undefined FUN_143c558e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c558e0(uint *param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  ushort uVar11;
  uint uVar12;
  undefined1 auStack_108 [32];
  int local_e8;
  ushort local_e4;
  short local_e0;
  ushort local_de;
  short local_dc;
  ushort local_da;
  ushort local_d8;
  int local_d4;
  undefined1 local_d0 [4];
  uint local_cc;
  int local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined1 local_b8 [4];
  int local_b4;
  undefined1 local_b0 [8];
  int local_a8;
  int local_a0;
  int local_98;
  short local_94;
  ushort local_92;
  short local_90;
  short local_8e;
  int local_8c;
  undefined1 local_80 [12];
  ushort local_74;
  ushort local_72;
  undefined1 local_70 [12];
  ushort local_64;
  ushort local_62;
  undefined1 local_60 [12];
  ushort local_54;
  ushort local_52;
  int local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_c0 = *(undefined8 *)(param_1 + 0x26);
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar12 = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  local_e8 = FUN_143c251d0(lVar1,0);
  if (local_e8 != 0) {
    return local_e8;
  }
  iVar5 = FUN_143c24c00(lVar1,&DAT_145d260f8,&local_e0);
  if (iVar5 != 0) {
    return iVar5;
  }
  local_e8 = 2;
  if (local_e0 == 0x5a4d) {
    local_e8 = FUN_143c251d0(lVar1,local_de);
    if (local_e8 != 0) {
      return local_e8;
    }
    iVar5 = FUN_143c24c00(lVar1,&DAT_145d261b8,&local_dc);
    if (iVar5 != 0) {
      return iVar5;
    }
    local_e8 = 2;
    if (local_dc == 0x454e) {
      local_e8 = FUN_143c251d0(lVar1,(uint)local_da + (uint)local_de);
      if (local_e8 != 0) {
        return local_e8;
      }
      local_e8 = FUN_143c24650(lVar1,(uint)local_d8 - (uint)local_da);
      if (local_e8 != 0) {
        return local_e8;
      }
      bVar2 = FUN_143c24950(lVar1);
      sVar3 = FUN_143c24950(lVar1);
      while (uVar6 = uVar12, sVar3 != 0) {
        uVar6 = FUN_143c24950(lVar1);
        if (sVar3 == -0x7ff8) {
          uVar6 = uVar6 & 0xffff;
          iVar5 = IStreamingManager::GetNumWantingResourcesID(lVar1);
          uVar12 = (*(int *)(lVar1 + 0x38) - *(int *)(lVar1 + 0x40)) + 4 + iVar5;
          break;
        }
        *(longlong *)(lVar1 + 0x38) =
             *(longlong *)(lVar1 + 0x38) + (longlong)(int)((uVar6 & 0xffff) * 0xc + 4);
        sVar3 = FUN_143c24950(lVar1);
      }
      FT_Stream_ExitFrame(lVar1);
      if ((short)uVar6 == 0) {
        return 3;
      }
      if (uVar12 == 0) {
        return 3;
      }
      if (*(uint *)(lVar1 + 8) < uVar6 * 0x76) {
        return 3;
      }
      *param_1 = uVar6;
      if ((int)uVar6 <= (int)param_2) {
        return 6;
      }
      if ((int)param_2 < 0) {
        return local_e8;
      }
      uVar9 = FUN_143c271e0(local_c0,0xb8,&local_e8);
      *(undefined8 *)(param_1 + 0x36) = uVar9;
      if (local_e8 != 0) {
        return local_e8;
      }
      local_e8 = FUN_143c251d0(lVar1,uVar12 + param_2 * 0xc);
      if ((local_e8 != 0) || (local_e8 = FUN_143c24650(lVar1,0xc), local_e8 != 0))
      goto LAB_143c55f9a;
      uVar4 = FUN_143c24950(lVar1);
      **(int **)(param_1 + 0x36) = (uint)uVar4 << (bVar2 & 0x1f);
      uVar4 = FUN_143c24950(lVar1);
      *(uint *)(*(longlong *)(param_1 + 0x36) + 0xa8) = (uint)uVar4 << (bVar2 & 0x1f);
      *(longlong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + 8;
      FT_Stream_ExitFrame(lVar1);
      local_e8 = FUN_143c56060(*(undefined8 *)(param_1 + 0x36),lVar1);
    }
    else if (local_dc == 0x4550) {
      local_e8 = FUN_143c251d0(lVar1,local_de);
      if (local_e8 != 0) {
        return local_e8;
      }
      iVar5 = FUN_143c24c00(lVar1,&DAT_145d261d0,&local_98);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (local_98 != 0x4550) {
        return 3;
      }
      if (local_94 != 0x14c) {
        return 3;
      }
      if (local_90 != 0xe0) {
        return 3;
      }
      if (local_8e != 0x10b) {
        return 3;
      }
      uVar4 = 0;
      *param_1 = 0;
      if (local_92 == 0) {
        return 3;
      }
      while( true ) {
        local_e8 = 0;
        local_e8 = FUN_143c24c00(lVar1,&DAT_145d26208,local_b0);
        if (local_e8 != 0) {
          return local_e8;
        }
        if (local_8c == local_a8) break;
        uVar4 = uVar4 + 1;
        if (local_92 <= uVar4) {
          return 3;
        }
      }
      local_e8 = FUN_143c251d0(lVar1,local_a0);
      if (local_e8 != 0) {
        return local_e8;
      }
      iVar7 = FUN_143c24c00(lVar1,&DAT_145d26228,local_80);
      iVar5 = local_a0;
      if (iVar7 != 0) {
        return iVar7;
      }
      uVar12 = 0;
      local_e4 = 0;
      local_e8 = 0;
      if ((uint)local_72 + (uint)local_74 != 0) {
        local_e8 = 0;
        do {
          uVar6 = 0;
          local_e8 = FUN_143c251d0(lVar1,iVar5 + 0x10 + uVar12 * 8);
          if (local_e8 != 0) {
            return local_e8;
          }
          local_e8 = FUN_143c24c00(lVar1,&DAT_145d26248,&local_c8);
          if (local_e8 != 0) {
            return local_e8;
          }
          if (-1 < (int)local_c4) {
            return 3;
          }
          local_c4 = local_c4 & 0x7fffffff;
          iVar7 = local_a0 + local_c4;
          local_d4 = iVar7;
          local_e8 = FUN_143c251d0(lVar1,iVar7);
          if (local_e8 != 0) {
            return local_e8;
          }
          iVar8 = FUN_143c24c00(lVar1,&DAT_145d26228,local_70);
          if (iVar8 != 0) {
            return iVar8;
          }
          uVar4 = 0;
          local_e8 = 0;
          if ((uint)local_62 + (uint)local_64 != 0) {
            local_e8 = 0;
            do {
              uVar11 = 0;
              local_e8 = FUN_143c251d0(lVar1,iVar7 + (uVar6 + 2) * 8);
              if (local_e8 != 0) {
                return local_e8;
              }
              local_e8 = FUN_143c24c00(lVar1,&DAT_145d26248,local_d0);
              if (local_e8 != 0) {
                return local_e8;
              }
              if (-1 < (int)local_cc) {
                return 3;
              }
              local_cc = local_cc & 0x7fffffff;
              iVar7 = local_a0 + local_cc;
              local_e8 = FUN_143c251d0(lVar1,iVar7);
              if (local_e8 != 0) {
                return local_e8;
              }
              iVar8 = FUN_143c24c00(lVar1,&DAT_145d26228,local_60);
              if (iVar8 != 0) {
                return iVar8;
              }
              local_e8 = 0;
              if ((uint)local_52 + (uint)local_54 != 0) {
                uVar12 = 0;
                local_e8 = 0;
                do {
                  local_e8 = FUN_143c251d0(lVar1,iVar7 + 0x10 + uVar12 * 8);
                  if (local_e8 != 0) {
                    return local_e8;
                  }
                  local_e8 = FUN_143c24c00(lVar1,&DAT_145d26248,local_b8);
                  if (local_e8 != 0) {
                    return local_e8;
                  }
                  if ((local_cc & 0x80000000) != 0) {
                    return 3;
                  }
                  iVar8 = 0;
                  if (local_c8 == 8) {
                    local_e8 = FUN_143c251d0(lVar1,local_b4 + iVar5);
                    if (local_e8 != 0) {
                      return local_e8;
                    }
                    local_e8 = FUN_143c24c00(lVar1,&DAT_145d26258,&local_50);
                    if (local_e8 != 0) {
                      return local_e8;
                    }
                    iVar8 = 0;
                    if (param_2 == *param_1) {
                      piVar10 = (int *)FUN_143c271e0(local_c0,0xb8,&local_e8);
                      *(int **)(param_1 + 0x36) = piVar10;
                      if (local_e8 != 0) {
                        return local_e8;
                      }
                      *piVar10 = (local_50 - local_a8) + local_a0;
                      *(undefined4 *)(*(longlong *)(param_1 + 0x36) + 0xa8) = local_4c;
                      local_e8 = FUN_143c56060(*(undefined8 *)(param_1 + 0x36),lVar1);
                      iVar8 = local_e8;
                      if (local_e8 != 0) goto LAB_143c55f9a;
                    }
                    local_e8 = iVar8;
                    *param_1 = *param_1 + 1;
                    iVar8 = local_e8;
                  }
                  local_e8 = iVar8;
                  uVar11 = uVar11 + 1;
                  uVar12 = (uint)uVar11;
                } while ((uint)uVar11 < (uint)local_52 + (uint)local_54);
              }
              uVar4 = uVar4 + 1;
              uVar6 = (uint)uVar4;
              iVar7 = local_d4;
            } while ((uint)uVar4 < (uint)local_62 + (uint)local_64);
          }
          local_e4 = local_e4 + 1;
          uVar12 = (uint)local_e4;
        } while ((uint)local_e4 < (uint)local_72 + (uint)local_74);
      }
    }
    if (*param_1 == 0) {
      return 3;
    }
    if ((int)*param_1 <= (int)param_2) {
      return 6;
    }
    if (local_e8 == 0) {
      return 0;
    }
  }
LAB_143c55f9a:
  FUN_143c55fe0(param_1);
  return local_e8;
}



// FUNCTION 143c55fe0 FUN_143c55fe0 body=126 status=ok
// SIG undefined FUN_143c55fe0(void)

void FUN_143c55fe0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0xa0) != 0) {
      FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xa0));
    }
    ft_mem_free(uVar2,*(undefined8 *)(lVar1 + 0xb0));
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    ft_mem_free(uVar2,lVar1);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 143c56060 FUN_143c56060 body=218 status=ok
// SIG undefined FUN_143c56060(void)

undefined8 FUN_143c56060(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_143c251d0(param_2,*param_1);
  if (((int)uVar2 != 0) ||
     (uVar2 = FUN_143c24c00(param_2,&DAT_145d26270,param_1 + 1), (int)uVar2 != 0)) {
    return uVar2;
  }
  if ((*(short *)(param_1 + 1) - 0x200U & 0xfeff) == 0) {
    uVar1 = 0x76;
    if (*(short *)(param_1 + 1) == 0x300) {
      uVar1 = 0x94;
    }
    if (uVar1 <= (uint)param_1[2]) {
      if (*(short *)(param_1 + 1) == 0x200) {
        *(undefined8 *)(param_1 + 0x21) = 0;
        param_1[0x23] = 0;
      }
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        uVar2 = FUN_143c251d0(param_2,*param_1);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FT_Stream_ExtractFrame(param_2,param_1[2],param_1 + 0x28);
        return uVar2;
      }
    }
  }
  return 2;
}



// FUNCTION 143c561b0 FUN_143c561b0 body=160 status=ok
// SIG undefined FUN_143c561b0(void)

/* WARNING: Removing unreachable block (ram,0x000143c56219) */

int FUN_143c561b0(longlong param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  iVar9 = 0;
  uVar6 = 0;
  lVar4 = *(longlong *)(param_1 + 0x20);
  uVar7 = *param_2 + 1;
  uVar8 = uVar2;
  if (uVar2 != 0) {
    do {
      uVar5 = uVar8 + (int)uVar6 >> 1;
      uVar3 = *(uint *)(lVar4 + (ulonglong)uVar5 * 8);
      if (uVar7 == uVar3) {
        uVar1 = *(ushort *)(lVar4 + 4 + (ulonglong)uVar5 * 8);
        goto LAB_143c56210;
      }
      if (uVar3 <= uVar7) {
        uVar6 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while ((uint)uVar6 < uVar8);
  }
  uVar7 = 0;
  if ((uint)uVar6 < uVar2) {
    uVar7 = *(uint *)(lVar4 + uVar6 * 8);
    uVar1 = *(ushort *)(lVar4 + 4 + uVar6 * 8);
LAB_143c56210:
    iVar9 = uVar1 + 1;
  }
  *param_2 = uVar7;
  return iVar9;
}



// FUNCTION 143c56250 FUN_143c56250 body=392 status=ok
// SIG undefined FUN_143c56250(void)

void FUN_143c56250(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1c0));
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1b0));
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      uVar5 = uVar4;
      if (0 < *(int *)(param_1 + 0x19c)) {
        do {
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x1a0) + uVar5);
          if (puVar2 != (undefined8 *)0x0) {
            ft_mem_free(uVar1,*puVar2);
            *puVar2 = 0;
            if (*(char *)(puVar2 + 1) != '\0') {
              ft_mem_free(uVar1,puVar2[2]);
              puVar2[2] = 0;
            }
          }
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          uVar5 = uVar5 + 0x18;
        } while ((int)uVar3 < *(int *)(param_1 + 0x19c));
      }
      ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1a0));
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (*(longlong *)(param_1 + 0xa0) == param_1 + 0xd8) {
      FT_Stream_Close();
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x120);
    }
  }
  return;
}



// FUNCTION 143c563e0 FUN_143c563e0 body=395 status=ok
// SIG undefined FUN_143c563e0(void)

undefined8 FUN_143c563e0(undefined8 param_1,longlong param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_18 [2];
  
  iVar4 = FUN_143c57a40();
  if (iVar4 != 0) {
    FUN_143c56250(param_2);
    lVar7 = param_2 + 0xd8;
    iVar4 = FUN_143c72cd0(lVar7,param_1);
    if (((char)iVar4 == '\a') ||
       ((iVar4 != 0 && ((iVar4 = FUN_143c75800(lVar7,param_1), (char)iVar4 == '\a' || (iVar4 != 0)))
        ))) {
LAB_143c56458:
      FUN_143c56250(param_2);
      return 2;
    }
    *(undefined8 *)(param_2 + 0x120) = param_1;
    *(longlong *)(param_2 + 0xa0) = lVar7;
    iVar4 = FUN_143c57a40(lVar7,param_2);
    if (iVar4 != 0) goto LAB_143c56458;
  }
  if (0 < param_3) {
    FUN_143c56250(param_2);
    return 6;
  }
  pcVar1 = *(char **)(param_2 + 0x130);
  bVar3 = false;
  lVar7 = 0;
  if ((((pcVar1 == (char *)0x0) || (pcVar2 = *(char **)(param_2 + 0x128), pcVar2 == (char *)0x0)) ||
      ((*pcVar1 + 0xb7U & 0xdf) != 0)) ||
     (((pcVar1[1] + 0xadU & 0xdf) != 0 || (lVar8 = lVar7, (pcVar1[2] + 0xb1U & 0xdf) != 0))))
  goto LAB_143c56521;
  do {
    lVar6 = lVar8 + 1;
    if (pcVar1[lVar8 + 3] != (&DAT_145d26674)[lVar8]) goto LAB_143c564f1;
    lVar8 = lVar6;
  } while (lVar6 != 6);
  goto LAB_143c5651e;
  while (lVar7 = lVar8, lVar8 != 5) {
LAB_143c564f1:
    lVar8 = lVar7 + 1;
    if (pcVar1[lVar7 + 3] != (&DAT_145d2667c)[lVar7]) goto LAB_143c56521;
  }
  if ((*pcVar2 != '1') || (pcVar2[1] != '\0')) goto LAB_143c56521;
LAB_143c5651e:
  bVar3 = true;
LAB_143c56521:
  local_18[1] = 0;
  if (bVar3) {
    local_18[1] = 0x10003756e6963;
  }
  local_18[0] = param_2;
  uVar5 = FUN_143c1ff20(&DAT_145d26470,0,local_18,0);
  return uVar5;
}



// FUNCTION 143c56570 PCF_Size_Select body=76 status=ok
// SIG undefined PCF_Size_Select(void)

undefined8 PCF_Size_Select(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_143c241f0(lVar1);
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x150) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x154) * -0x40;
  *(int *)(param_1 + 6) = (int)*(short *)(lVar1 + 0x170) << 6;
  return 0;
}



// FUNCTION 143c565c0 FUN_143c565c0 body=215 status=ok
// SIG undefined FUN_143c565c0(void)

undefined8 FUN_143c565c0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  if (param_2[4] == 0) {
    iVar3 = param_2[2];
  }
  else {
    iVar3 = (param_2[2] * param_2[4] + 0x24) / 0x48;
  }
  if (*param_2 == 0) {
    iVar2 = *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6;
  }
  else {
    if (*param_2 != 1) {
      return 7;
    }
    iVar2 = *(int *)(lVar1 + 0x154) + *(int *)(lVar1 + 0x150);
  }
  if (iVar3 + 0x20 >> 6 == iVar2) {
    FUN_143c241f0(lVar1,0);
    *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x150) << 6;
    *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x154) * -0x40;
    *(int *)(param_1 + 6) = (int)*(short *)(lVar1 + 0x170) << 6;
    return 0;
  }
  return 0x17;
}



// FUNCTION 143c566a0 FUN_143c566a0 body=700 status=ok
// SIG undefined FUN_143c566a0(void)

int FUN_143c566a0(longlong param_1,longlong *param_2,uint param_3)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  short *psVar8;
  int iVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    iVar9 = 0x23;
  }
  else if (param_3 < *(uint *)(lVar4 + 0x10)) {
    uVar5 = *(undefined8 *)(lVar4 + 0xa0);
    if (param_3 != 0) {
      param_3 = param_3 - 1;
    }
    psVar8 = (short *)((ulonglong)param_3 * 0x10 + *(longlong *)(lVar4 + 0x1b0));
    *(int *)(param_1 + 0x68) = (int)psVar8[4] + (int)psVar8[3];
    sVar2 = psVar8[1];
    sVar3 = *psVar8;
    *(undefined2 *)(param_1 + 0x80) = 1;
    *(int *)(param_1 + 0x6c) = (int)sVar2 - (int)sVar3;
    *(undefined1 *)(param_1 + 0x82) = 1;
    iVar9 = 1 << ((byte)*(undefined4 *)(lVar4 + 0x1cc) & 3);
    if (iVar9 == 1) {
      uVar6 = *(int *)(param_1 + 0x6c) + 7U >> 3;
    }
    else if (iVar9 == 2) {
      uVar6 = *(int *)(param_1 + 0x6c) + 0xfU >> 3 & 0x1ffffffe;
    }
    else if (iVar9 == 4) {
      uVar6 = *(int *)(param_1 + 0x6c) + 0x1fU >> 3 & 0x1ffffffc;
    }
    else {
      if (iVar9 != 8) {
        return 3;
      }
      uVar6 = *(int *)(param_1 + 0x6c) + 0x3fU >> 3 & 0x1ffffff8;
    }
    uVar12 = *(int *)(param_1 + 0x68) * uVar6;
    *(uint *)(param_1 + 0x70) = uVar6;
    iVar9 = FUN_143c26a10(param_1,uVar12);
    if (((iVar9 == 0) && (iVar9 = FUN_143c251d0(uVar5,*(undefined4 *)(psVar8 + 6)), iVar9 == 0)) &&
       (iVar9 = FUN_143c24ae0(uVar5,*(undefined8 *)(param_1 + 0x78),uVar12), iVar9 == 0)) {
      if ((*(byte *)(lVar4 + 0x1cc) & 8) == 0) {
        pbVar11 = *(byte **)(param_1 + 0x78);
        uVar10 = (ulonglong)uVar12;
        if (uVar12 != 0) {
          do {
            uVar6 = *pbVar11 >> 1 & 0x55 | (*pbVar11 & 0x55) * 2;
            uVar6 = uVar6 >> 2 & 0x33 | (uVar6 & 0x33) << 2;
            *pbVar11 = (byte)(uVar6 >> 4) | (char)uVar6 << 4;
            uVar10 = uVar10 - 1;
            pbVar11 = pbVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      uVar6 = *(uint *)(lVar4 + 0x1cc);
      if (((uVar6 >> 1 ^ uVar6) & 4) != 0) {
        iVar13 = 1 << ((byte)(uVar6 >> 4) & 3);
        if (iVar13 == 2) {
          puVar7 = *(undefined1 **)(param_1 + 0x78);
          if (1 < uVar12) {
            uVar10 = (ulonglong)(uVar12 >> 1);
            do {
              uVar1 = *puVar7;
              *puVar7 = puVar7[1];
              puVar7[1] = uVar1;
              puVar7 = puVar7 + 2;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        else if ((iVar13 == 4) && (puVar7 = *(undefined1 **)(param_1 + 0x78), 3 < uVar12)) {
          uVar10 = (ulonglong)(uVar12 >> 2);
          do {
            uVar1 = *puVar7;
            *puVar7 = puVar7[3];
            puVar7[3] = uVar1;
            uVar1 = puVar7[1];
            puVar7[1] = puVar7[2];
            puVar7[2] = uVar1;
            puVar7 = puVar7 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      *(undefined4 *)(param_1 + 0x60) = 0x62697473;
      *(int *)(param_1 + 0x90) = (int)*psVar8;
      *(int *)(param_1 + 0x94) = (int)psVar8[3];
      *(int *)(param_1 + 0x40) = (int)psVar8[2] << 6;
      *(int *)(param_1 + 0x38) = (int)*psVar8 << 6;
      *(int *)(param_1 + 0x3c) = (int)psVar8[3] << 6;
      *(int *)(param_1 + 0x30) = ((int)psVar8[1] - (int)*psVar8) * 0x40;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x68) << 6;
      FUN_143c27730((int *)(param_1 + 0x30),
                    (*(int *)(lVar4 + 0x154) + *(int *)(lVar4 + 0x150)) * 0x40);
    }
  }
  else {
    iVar9 = 6;
  }
  return iVar9;
}



// FUNCTION 143c56960 pcf_get_bdf_property body=78 status=ok
// SIG undefined pcf_get_bdf_property(void)

undefined8 pcf_get_bdf_property(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_143c569e0();
  if (lVar1 == 0) {
    return 6;
  }
  if (*(char *)(lVar1 + 8) != '\0') {
    *param_3 = 1;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar1 + 0x10);
    return 0;
  }
  *param_3 = 2;
  param_3[2] = *(undefined4 *)(lVar1 + 0x10);
  return 0;
}



// FUNCTION 143c569e0 FUN_143c569e0 body=171 status=ok
// SIG undefined FUN_143c569e0(void)

undefined8 * FUN_143c569e0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar4 = 0;
  bVar9 = false;
  puVar6 = *(undefined8 **)(param_1 + 0x1a0);
  uVar8 = uVar4;
  if (0 < (longlong)*(int *)(param_1 + 0x19c)) {
    do {
      uVar7 = (uint)uVar8;
      if (bVar9) goto LAB_143c56a61;
      pcVar3 = (char *)*puVar6;
      lVar5 = param_2 - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar5];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      bVar9 = cVar1 == cVar2;
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 3;
      uVar8 = (ulonglong)uVar7;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x19c));
    if (bVar9) {
LAB_143c56a61:
      return *(undefined8 **)(param_1 + 0x1a0) + (longlong)(int)uVar7 * 3 + -3;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143c56a90 FUN_143c56a90 body=369 status=ok
// SIG undefined FUN_143c56a90(void)

void FUN_143c56a90(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int local_res10 [2];
  
  uVar6 = 0;
  local_res10[0] = 3;
  piVar2 = *(int **)(param_2 + 0x140);
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*piVar2 == param_3) {
        uVar5 = (*(int **)(param_2 + 0x140))[uVar6 * 4 + 3];
        if ((*(uint *)(param_1 + 0xc) <= uVar5) &&
           (iVar1 = FUN_143c25220(param_1,uVar5 - *(uint *)(param_1 + 0xc)), iVar1 == 0)) {
          local_res10[0] = 0;
          goto LAB_143c56b0a;
        }
        local_res10[0] = 0x53;
        break;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      piVar2 = piVar2 + 4;
    } while (uVar5 < *(uint *)(param_2 + 0x13c));
  }
  if (local_res10[0] == 0) {
LAB_143c56b0a:
    uVar5 = FUN_143c24f40(param_1,local_res10);
    if ((local_res10[0] == 0) && ((uVar5 & 0xfffffe00) == 0)) {
      puVar3 = &DAT_145d26378;
      if ((uVar5 & 4) == 0) {
        puVar3 = &DAT_145d26340;
      }
      local_res10[0] = FUN_143c24c00(param_1,puVar3,param_2 + 0x148);
      if (local_res10[0] == 0) {
        uVar4 = uVar5 & 0xff;
        local_res10[0] = FUN_143c571a0(param_1,uVar4,param_2 + 0x15c);
        if ((local_res10[0] == 0) &&
           (local_res10[0] = FUN_143c571a0(param_1,uVar4,param_2 + 0x16c), local_res10[0] == 0)) {
          if ((uVar5 & 0xffffff00) == 0x100) {
            local_res10[0] = FUN_143c571a0(param_1,uVar4,param_2 + 0x17c);
            if (local_res10[0] == 0) {
              FUN_143c571a0(param_1,uVar4,param_2 + 0x18c);
            }
          }
          else {
            *(undefined8 *)(param_2 + 0x17c) = *(undefined8 *)(param_2 + 0x15c);
            *(undefined8 *)(param_2 + 0x184) = *(undefined8 *)(param_2 + 0x164);
            *(undefined8 *)(param_2 + 0x18c) = *(undefined8 *)(param_2 + 0x16c);
            *(undefined8 *)(param_2 + 0x194) = *(undefined8 *)(param_2 + 0x174);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143c56c10 FUN_143c56c10 body=580 status=ok
// SIG undefined FUN_143c56c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c56c10(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint *local_80;
  uint local_78 [2];
  uint *local_70;
  uint local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar9 = 0;
  piVar2 = *(int **)(param_2 + 0x140);
  local_78[0] = 3;
  uVar8 = 0;
  piVar5 = piVar2;
  uVar6 = uVar9;
  local_60 = uVar1;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*piVar5 == 8) {
        if ((*(uint *)(param_1 + 0xc) <= (uint)piVar2[uVar6 * 4 + 3]) &&
           (iVar3 = FUN_143c25220(param_1,piVar2[uVar6 * 4 + 3] - *(uint *)(param_1 + 0xc)),
           iVar3 == 0)) {
          uVar8 = piVar2[uVar6 * 4 + 2];
          local_78[0] = 0;
          goto LAB_143c56c9f;
        }
        local_78[0] = 0x53;
        break;
      }
      uVar11 = (int)uVar6 + 1;
      piVar5 = piVar5 + 4;
      uVar6 = (ulonglong)uVar11;
    } while (uVar11 < *(uint *)(param_2 + 0x13c));
  }
  if (local_78[0] != 0) {
    return (ulonglong)local_78[0];
  }
LAB_143c56c9f:
  uVar6 = FUN_143c24650(param_1,8);
  local_78[0] = (uint)uVar6;
  if (local_78[0] != 0) {
    return uVar6;
  }
  uVar11 = FUN_143c248c0(param_1);
  uVar12 = uVar11 >> 2 & 1;
  local_68 = uVar11;
  if (uVar12 == 0) {
    uVar4 = FUN_143c248c0(param_1);
  }
  else {
    uVar4 = FUN_143c24870();
  }
  FT_Stream_ExitFrame(param_1);
  if (((uVar11 & 0xffffff00) != 0) || (uVar4 != *(uint *)(param_2 + 0x1a8))) {
    return 3;
  }
  local_80 = local_78;
  local_88 = 0;
  puVar7 = (uint *)FUN_143c27410(uVar1,4,0,uVar4);
  if (local_78[0] != 0) {
    return (ulonglong)local_78[0];
  }
  uVar6 = uVar9;
  local_70 = puVar7;
  if (uVar4 != 0) {
    uVar10 = (ulonglong)uVar4;
    do {
      if (uVar12 == 0) {
        uVar11 = FUN_143c24f40(param_1,local_78);
      }
      else {
        uVar11 = FUN_143c24ea0();
      }
      *puVar7 = uVar11;
      puVar7 = puVar7 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (local_78[0] != 0) goto LAB_143c56e1c;
  }
  do {
    if (uVar12 == 0) {
      FUN_143c24f40(param_1,local_78);
    }
    else {
      FUN_143c24ea0();
    }
    if (local_78[0] != 0) goto LAB_143c56e1c;
    uVar11 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar11;
  } while (uVar11 < 4);
  if (uVar4 != 0) {
    uVar6 = (ulonglong)uVar4;
    puVar7 = local_70;
    do {
      uVar11 = *puVar7;
      if ((-1 < (int)uVar11) && (uVar11 <= uVar8)) {
        *(uint *)(*(longlong *)(param_2 + 0x1b0) + 0xc + uVar9) = *(int *)(param_1 + 0xc) + uVar11;
      }
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(uint *)(param_2 + 0x1cc) = local_68;
LAB_143c56e1c:
  ft_mem_free(local_60,local_70);
  return (ulonglong)local_78[0];
}



// FUNCTION 143c56e60 FUN_143c56e60 body=817 status=ok
// SIG undefined FUN_143c56e60(void)

ulonglong FUN_143c56e60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  uint local_res18 [2];
  int local_res20;
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar14 = 3;
  uVar7 = 0;
  piVar9 = *(int **)(param_2 + 0x140);
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*piVar9 == 0x20) {
        uVar6 = (*(int **)(param_2 + 0x140))[uVar7 * 4 + 3];
        if ((*(uint *)(param_1 + 0xc) <= uVar6) &&
           (iVar13 = FUN_143c25220(param_1,uVar6 - *(uint *)(param_1 + 0xc)), iVar13 == 0)) {
          local_res18[0] = 0;
          goto LAB_143c56ee1;
        }
        uVar14 = 0x53;
        break;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      piVar9 = piVar9 + 4;
    } while (uVar6 < *(uint *)(param_2 + 0x13c));
  }
  local_res18[0] = (uint)uVar14;
  if (local_res18[0] != 0) {
    return uVar14;
  }
LAB_143c56ee1:
  uVar7 = FUN_143c24650(param_1,0xe);
  local_res18[0] = (uint)uVar7;
  if (local_res18[0] == 0) {
    uVar6 = FUN_143c248c0(param_1);
    uVar11 = uVar6 >> 2 & 1;
    if (uVar11 == 0) {
      sVar2 = FUN_143c24950(param_1);
      iVar13 = (int)sVar2;
      local_res20 = iVar13;
      sVar2 = FUN_143c24950(param_1);
      sVar3 = FUN_143c24950(param_1);
      sVar4 = FUN_143c24950(param_1);
      uVar5 = FUN_143c24950(param_1);
    }
    else {
      sVar2 = FUN_143c24910();
      iVar13 = (int)sVar2;
      local_res20 = iVar13;
      sVar2 = FUN_143c24910(param_1);
      sVar3 = FUN_143c24910(param_1);
      sVar4 = FUN_143c24910(param_1);
      uVar5 = FUN_143c24910(param_1);
    }
    iVar10 = (int)sVar4;
    iVar15 = (int)sVar3;
    iVar16 = (int)sVar2;
    *(undefined2 *)(param_2 + 0x1c8) = uVar5;
    FT_Stream_ExitFrame(param_1);
    if ((uVar6 & 0xffffff00) == 0) {
      if ((((iVar13 < 0) || (iVar16 < iVar13)) || (0xff < iVar16)) ||
         (((iVar15 < 0 || (iVar10 < iVar15)) || (0xff < iVar10)))) {
        uVar7 = 8;
      }
      else {
        uVar6 = (iVar10 - iVar15) + 1;
        iVar13 = ((iVar16 - iVar13) + 1) * uVar6;
        lVar8 = FUN_143c27410(uVar1,8,0,iVar13,0,local_res18);
        if (local_res18[0] == 0) {
          local_res18[0] = FUN_143c24650(param_1,iVar13 * 2);
          if (local_res18[0] == 0) {
            iVar15 = iVar15 << 8;
            uVar14 = (ulonglong)uVar6;
            uVar7 = 0;
            iVar10 = local_res20;
            do {
              do {
                if (uVar11 == 0) {
                  sVar2 = FUN_143c24950(param_1);
                }
                else {
                  sVar2 = FUN_143c24910();
                }
                uVar12 = uVar7;
                if (-1 < sVar2) {
                  uVar12 = (ulonglong)((int)uVar7 + 1);
                  piVar9 = (int *)(lVar8 + uVar7 * 8);
                  *(short *)(piVar9 + 1) = sVar2;
                  *piVar9 = iVar15 + iVar10;
                }
                iVar10 = iVar10 + 1;
                uVar7 = uVar12;
              } while (iVar10 <= iVar16);
              iVar15 = iVar15 + 0x100;
              uVar14 = uVar14 - 1;
              iVar10 = local_res20;
            } while (uVar14 != 0);
            FT_Stream_ExitFrame(param_1);
            lVar8 = FUN_143c27410(uVar1,8,iVar13,uVar12,lVar8,local_res18);
            if (local_res18[0] == 0) {
              *(int *)(param_2 + 0x1b8) = (int)uVar12;
              *(longlong *)(param_2 + 0x1c0) = lVar8;
              return 0;
            }
          }
          ft_mem_free(uVar1,lVar8);
          uVar7 = (ulonglong)local_res18[0];
        }
        else {
          uVar7 = 0x40;
        }
      }
    }
    else {
      uVar7 = 3;
    }
  }
  return uVar7;
}



// FUNCTION 143c571a0 FUN_143c571a0 body=159 status=ok
// SIG undefined FUN_143c571a0(void)

ulonglong FUN_143c571a0(undefined8 param_1,uint param_2,short *param_3)

{
  ulonglong uVar1;
  undefined *puVar2;
  byte local_res20;
  byte local_res21;
  byte local_res22;
  byte local_res23;
  byte local_res24;
  
  if ((param_2 & 0xffffff00) == 0) {
    puVar2 = &DAT_145d264d8;
    if ((param_2 & 4) != 0) {
      puVar2 = &DAT_145d264f8;
    }
    uVar1 = FUN_143c24c00(param_1,puVar2,param_3);
    return uVar1;
  }
  uVar1 = FUN_143c24c00(param_1,&DAT_145d26518,&local_res20);
  if ((int)uVar1 == 0) {
    *param_3 = local_res20 - 0x80;
    param_3[3] = local_res23 - 0x80;
    param_3[1] = local_res21 - 0x80;
    param_3[4] = local_res24 - 0x80;
    param_3[2] = local_res22 - 0x80;
    param_3[5] = 0;
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143c57240 FUN_143c57240 body=545 status=ok
// SIG undefined FUN_143c57240(void)

int FUN_143c57240(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  short *psVar8;
  uint uVar9;
  int *piVar11;
  int local_res10 [2];
  ulonglong uVar10;
  
  uVar10 = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  piVar2 = *(int **)(param_2 + 0x140);
  local_res10[0] = 3;
  uVar9 = 0;
  uVar7 = uVar10;
  piVar11 = piVar2;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*piVar11 == 4) {
        if ((*(uint *)(param_1 + 0xc) <= (uint)piVar2[uVar7 * 4 + 3]) &&
           (iVar5 = FUN_143c25220(param_1,piVar2[uVar7 * 4 + 3] - *(uint *)(param_1 + 0xc)),
           iVar5 == 0)) {
          uVar9 = piVar2[uVar7 * 4 + 2];
          local_res10[0] = 0;
          goto LAB_143c572c0;
        }
        local_res10[0] = 0x53;
        break;
      }
      uVar4 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar4;
      piVar11 = piVar11 + 4;
    } while (uVar4 < *(uint *)(param_2 + 0x13c));
  }
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
LAB_143c572c0:
  uVar4 = FUN_143c24f40(param_1,local_res10);
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  if ((uVar4 & 0xfffffe00) == 0) {
    if ((uVar4 & 0xffffff00) == 0) {
      if ((uVar4 & 4) == 0) {
        uVar6 = FUN_143c24f40();
      }
      else {
        uVar6 = FUN_143c24ea0();
      }
    }
    else {
      if ((uVar4 & 4) == 0) {
        uVar3 = FUN_143c25100(param_1,local_res10);
      }
      else {
        uVar3 = FUN_143c25070();
      }
      uVar6 = (uint)uVar3;
    }
    if (local_res10[0] == 0) {
      *(uint *)(param_2 + 0x1a8) = uVar6;
      if (uVar6 == 0) {
        return 8;
      }
      if ((uVar4 & 0xffffff00) == 0) {
        if (uVar9 / 0xc < uVar6) {
          return 8;
        }
      }
      else if (uVar9 / 5 < uVar6) {
        return 8;
      }
      psVar8 = (short *)FUN_143c27410(uVar1,0x10,0,uVar6,0,local_res10);
      *(short **)(param_2 + 0x1b0) = psVar8;
      if (local_res10[0] == 0) {
        if (uVar6 == 0) {
          return 0;
        }
        do {
          local_res10[0] = FUN_143c571a0(param_1,uVar4,psVar8);
          psVar8[6] = 0;
          psVar8[7] = 0;
          if (local_res10[0] != 0) {
            ft_mem_free(uVar1,*(undefined8 *)(param_2 + 0x1b0));
            *(undefined8 *)(param_2 + 0x1b0) = 0;
            return local_res10[0];
          }
          if ((psVar8[1] < *psVar8) || ((int)psVar8[4] + (int)psVar8[3] < 0)) {
            psVar8[1] = 0;
            psVar8[2] = 0;
            psVar8[3] = 0;
            psVar8[4] = 0;
            *psVar8 = 0;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          psVar8 = psVar8 + 8;
          local_res10[0] = 0;
        } while (uVar9 < uVar6);
        return 0;
      }
      return 0x40;
    }
  }
  return 3;
}



// FUNCTION 143c57470 FUN_143c57470 body=855 status=ok
// SIG undefined FUN_143c57470(void)

int FUN_143c57470(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  int local_res18 [2];
  longlong local_res20;
  longlong local_48;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  piVar2 = *(int **)(param_2 + 0x140);
  local_res20 = 0;
  local_48 = 0;
  local_res18[0] = 3;
  piVar10 = piVar2;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*piVar10 == 1) {
        if ((*(uint *)(param_1 + 0xc) <= (uint)piVar2[uVar7 * 4 + 3]) &&
           (iVar4 = FUN_143c25220(param_1,piVar2[uVar7 * 4 + 3] - *(uint *)(param_1 + 0xc)),
           iVar4 == 0)) {
          uVar3 = piVar2[uVar7 * 4 + 2];
          local_res18[0] = 0;
          goto LAB_143c57512;
        }
        local_res18[0] = 0x53;
        break;
      }
      uVar3 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar3;
      piVar10 = piVar10 + 4;
    } while (uVar3 < *(uint *)(param_2 + 0x13c));
  }
  uVar3 = 0;
  if (local_res18[0] == 0) {
LAB_143c57512:
    uVar5 = FUN_143c24f40(param_1,local_res18);
    if ((local_res18[0] == 0) && ((uVar5 & 0xffffff00) == 0)) {
      uVar5 = uVar5 >> 2 & 1;
      if (uVar5 == 0) {
        uVar6 = FUN_143c24f40(param_1,local_res18);
      }
      else {
        uVar6 = FUN_143c24ea0();
      }
      if (local_res18[0] == 0) {
        if (uVar6 <= uVar3 / 9) {
          *(uint *)(param_2 + 0x19c) = uVar6;
          lVar8 = FUN_143c27410(uVar1,0xc,0,uVar6,0,local_res18);
          local_res20 = lVar8;
          if (local_res18[0] != 0) goto LAB_143c57794;
          uVar7 = 0;
          iVar4 = local_res18[0];
          if (uVar6 != 0) {
            do {
              local_res18[0] = iVar4;
              if (uVar5 == 0) {
                local_res18[0] = FUN_143c24c00(param_1,&DAT_145d26538,local_res20 + uVar7 * 0xc);
                lVar8 = local_res20;
              }
              else {
                local_res18[0] = FUN_143c24c00(param_1,&DAT_145d26550,lVar8 + uVar7 * 0xc);
              }
              if (local_res18[0] != 0) goto LAB_143c57794;
              uVar11 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar11;
              iVar4 = 0;
            } while (uVar11 < uVar6);
          }
          if (((uVar6 & 3) != 0) &&
             (local_res18[0] = FUN_143c25220(param_1,4 - (uVar6 & 3)), local_res18[0] != 0)) {
            local_res18[0] = 0x53;
            goto LAB_143c57794;
          }
          if (uVar5 == 0) {
            uVar5 = FUN_143c24f40(param_1,local_res18);
          }
          else {
            uVar5 = FUN_143c24ea0();
          }
          if (local_res18[0] != 0) goto LAB_143c57794;
          if (uVar5 <= uVar3 + uVar6 * -9) {
            uVar3 = 0;
            local_48 = FUN_143c27410(uVar1,1,0,uVar5 + 1,0,local_res18);
            if (((local_res18[0] == 0) &&
                (local_res18[0] = FUN_143c24ae0(param_1,local_48,uVar5), local_res18[0] == 0)) &&
               (lVar8 = FUN_143c27410(uVar1,0x18,0,uVar6,0,local_res18), local_res18[0] == 0)) {
              *(longlong *)(param_2 + 0x1a0) = lVar8;
              if (uVar6 != 0) {
                puVar13 = (uint *)(lVar8 + 0x10);
                puVar12 = (uint *)(local_res20 + 8);
                do {
                  uVar11 = puVar12[-2];
                  if (((int)uVar11 < 0) || (uVar5 < uVar11)) {
LAB_143c577be:
                    local_res18[0] = 9;
                    goto LAB_143c57794;
                  }
                  uVar9 = ft_mem_strdup(uVar1,local_48 + (int)uVar11,local_res18);
                  *(undefined8 *)(puVar13 + -4) = uVar9;
                  if (local_res18[0] != 0) goto LAB_143c57794;
                  *(char *)(puVar13 + -2) = (char)puVar12[-1];
                  if ((char)puVar12[-1] == '\0') {
                    *puVar13 = *puVar12;
                  }
                  else {
                    uVar11 = *puVar12;
                    if (((int)uVar11 < 0) || (uVar5 < uVar11)) goto LAB_143c577be;
                    uVar9 = ft_mem_strdup(uVar1,local_48 + (int)uVar11,local_res18);
                    *(undefined8 *)puVar13 = uVar9;
                    if (local_res18[0] != 0) goto LAB_143c57794;
                  }
                  uVar3 = uVar3 + 1;
                  puVar12 = puVar12 + 3;
                  puVar13 = puVar13 + 6;
                } while (uVar3 < uVar6);
              }
              local_res18[0] = 0;
            }
            goto LAB_143c57794;
          }
        }
        local_res18[0] = 8;
      }
    }
  }
LAB_143c57794:
  ft_mem_free(uVar1,local_res20);
  ft_mem_free(uVar1,local_48);
  return local_res18[0];
}



// FUNCTION 143c577d0 FUN_143c577d0 body=619 status=ok
// SIG undefined FUN_143c577d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c577d0(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  size_t _Size;
  size_t sVar3;
  longlong lVar4;
  char *_Dst;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  int local_58 [2];
  char *local_50 [4];
  size_t local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar7 = 0;
  local_58[0] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_50[0] = (char *)0x0;
  local_50[1] = (undefined1 *)0x0;
  local_50[2] = (char *)0x0;
  local_50[3] = (char *)0x0;
  lVar4 = FUN_143c569e0(0,"SLANT");
  if ((((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) &&
      (bVar5 = **(char **)(lVar4 + 0x10) + 0xb7, bVar5 < 0x27)) &&
     ((0x4100000041U >> ((ulonglong)bVar5 & 0x3f) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    local_50[2] = "Italic";
    if ((**(char **)(lVar4 + 0x10) + 0xb1U & 0xdf) == 0) {
      local_50[2] = "Oblique";
    }
  }
  lVar4 = FUN_143c569e0(param_1,"WEIGHT_NAME",lVar4);
  if (((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) &&
     ((**(char **)(lVar4 + 0x10) + 0xbeU & 0xdf) == 0)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
    local_50[1] = "Bold";
  }
  lVar4 = FUN_143c569e0(param_1,"SETWIDTH_NAME");
  if ((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) {
    cVar1 = **(char **)(lVar4 + 0x10);
    if ((cVar1 != '\0') && ((cVar1 != 'N' && (cVar1 != 'n')))) {
      local_50[3] = *(char **)(lVar4 + 0x10);
    }
  }
  lVar4 = FUN_143c569e0(param_1,"ADD_STYLE_NAME");
  uVar6 = uVar7;
  uVar8 = uVar7;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) {
    cVar1 = **(char **)(lVar4 + 0x10);
    if ((cVar1 != '\0') && (cVar1 != 'N')) {
      if (cVar1 != 'n') {
        local_50[0] = *(char **)(lVar4 + 0x10);
      }
    }
  }
  do {
    *(undefined8 *)((longlong)local_30 + uVar6) = 0;
    if (*(longlong *)((longlong)local_50 + uVar6) != 0) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*(longlong *)((longlong)local_50 + uVar6) + lVar4) != '\0');
      *(longlong *)((longlong)local_30 + uVar6) = lVar4;
      uVar8 = uVar8 + 1 + lVar4;
    }
    uVar6 = uVar6 + 8;
  } while (uVar6 < 0x20);
  if (uVar8 == 0) {
    local_30[0] = 7;
    local_50[0] = "Regular";
    uVar8 = 8;
  }
  _Dst = (char *)FUN_143c271e0(*(undefined8 *)(param_1 + 0x98),uVar8 & 0xffffffff,local_58);
  *(char **)(param_1 + 0x20) = _Dst;
  if (local_58[0] == 0) {
    do {
      pcVar2 = local_50[uVar7];
      _Size = local_30[uVar7];
      if (pcVar2 != (char *)0x0) {
        if (_Dst != *(char **)(param_1 + 0x20)) {
          *_Dst = ' ';
          _Dst = _Dst + 1;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,pcVar2,_Size);
        sVar3 = _Size;
        pcVar2 = _Dst;
        if ((uVar7 == 0) || (uVar7 == 3)) {
          for (; sVar3 != 0; sVar3 = sVar3 - 1) {
            if (*pcVar2 == ' ') {
              *pcVar2 = '-';
            }
            pcVar2 = pcVar2 + 1;
          }
        }
        _Dst = _Dst + _Size;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    *_Dst = '\0';
  }
  return local_58[0];
}



// FUNCTION 143c57a40 FUN_143c57a40 body=896 status=ok
// SIG undefined FUN_143c57a40(void)

undefined4 FUN_143c57a40(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  short *psVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  short sVar10;
  ulonglong uVar11;
  short sVar12;
  int local_res10 [2];
  ulonglong uVar9;
  
  uVar7 = param_2[0x13];
  local_res10[0] = FUN_143c57dc0();
  if ((local_res10[0] == 0) &&
     (local_res10[0] = FUN_143c57470(param_1,param_2), local_res10[0] == 0)) {
    uVar11 = 0;
    if (*(uint *)((longlong)param_2 + 0x13c) != 0) {
      uVar9 = uVar11;
      do {
        if (*(int *)(param_2[0x28] + uVar9 * 0x10) == 0x100) {
          bVar1 = true;
          local_res10[0] = 0;
          goto LAB_143c57ad9;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)((longlong)param_2 + 0x13c));
    }
    bVar1 = false;
    local_res10[0] = FUN_143c56a90(param_1,param_2,2);
    if (local_res10[0] == 0) {
LAB_143c57ad9:
      local_res10[0] = FUN_143c57240(param_1,param_2);
      if ((((local_res10[0] == 0) &&
           (local_res10[0] = FUN_143c56c10(param_1,param_2), local_res10[0] == 0)) &&
          (local_res10[0] = FUN_143c56e60(param_1,param_2), local_res10[0] == 0)) &&
         ((iVar2 = 0, !bVar1 || (iVar2 = FUN_143c56a90(param_1,param_2,0x100), iVar2 == 0)))) {
        local_res10[0] = iVar2;
        *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x92;
        *param_2 = 1;
        if (*(char *)((longlong)param_2 + 0x14b) != '\0') {
          *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 4;
        }
        local_res10[0] = FUN_143c577d0(param_2);
        if (local_res10[0] == 0) {
          lVar3 = FUN_143c569e0(param_2,"FAMILY_NAME");
          if ((lVar3 == 0) || (*(char *)(lVar3 + 8) == '\0')) {
            param_2[3] = 0;
          }
          else {
            uVar4 = ft_mem_strdup(uVar7,*(undefined8 *)(lVar3 + 0x10),local_res10);
            param_2[3] = uVar4;
            if (local_res10[0] != 0) {
              return 3;
            }
          }
          *(undefined4 *)(param_2 + 5) = 1;
          *(int *)(param_2 + 2) = *(int *)(param_2 + 0x35) + 1;
          psVar5 = (short *)FUN_143c27410(uVar7,0x10,0,1,0,local_res10);
          param_2[6] = psVar5;
          if (local_res10[0] == 0) {
            psVar5[0] = 0;
            psVar5[1] = 0;
            psVar5[2] = 0;
            psVar5[3] = 0;
            psVar5[4] = 0;
            psVar5[5] = 0;
            psVar5[6] = 0;
            psVar5[7] = 0;
            sVar10 = 0;
            sVar12 = *(short *)((longlong)param_2 + 0x154) + *(short *)(param_2 + 0x2a);
            *psVar5 = sVar12;
            lVar3 = FUN_143c569e0(param_2,"AVERAGE_WIDTH");
            if (lVar3 == 0) {
              iVar2 = sVar12 * 2;
              iVar2 = iVar2 / 3 + (iVar2 >> 0x1f);
            }
            else {
              iVar2 = *(int *)(lVar3 + 0x10) + 5;
              iVar2 = iVar2 / 10 + (iVar2 >> 0x1f);
            }
            psVar5[1] = (short)iVar2 - (short)(iVar2 >> 0x1f);
            lVar3 = FUN_143c569e0(param_2,"POINT_SIZE");
            if (lVar3 != 0) {
              *(int *)(psVar5 + 2) = (*(int *)(lVar3 + 0x10) * 0x70800 + 0x8d27) / 0x11a4e;
            }
            lVar3 = FUN_143c569e0(param_2,"PIXEL_SIZE");
            if (lVar3 != 0) {
              *(int *)(psVar5 + 6) = (int)*(short *)(lVar3 + 0x10) << 6;
            }
            lVar3 = FUN_143c569e0(param_2,"RESOLUTION_X");
            if (lVar3 != 0) {
              uVar11 = (ulonglong)*(ushort *)(lVar3 + 0x10);
            }
            lVar3 = FUN_143c569e0(param_2,"RESOLUTION_Y");
            if (lVar3 != 0) {
              sVar10 = *(short *)(lVar3 + 0x10);
            }
            if (*(int *)(psVar5 + 6) == 0) {
              *(int *)(psVar5 + 6) = *(int *)(psVar5 + 2);
              if (sVar10 != 0) {
                *(int *)(psVar5 + 6) = ((int)sVar10 * *(int *)(psVar5 + 2)) / 0x48;
              }
            }
            if (((short)uVar11 == 0) || (sVar10 == 0)) {
              iVar2 = *(int *)(psVar5 + 6);
            }
            else {
              iVar2 = ((int)(short)uVar11 * *(int *)(psVar5 + 6)) / (int)sVar10;
            }
            *(int *)(psVar5 + 4) = iVar2;
            lVar3 = FUN_143c569e0(param_2,"CHARSET_REGISTRY");
            lVar6 = FUN_143c569e0(param_2,"CHARSET_ENCODING");
            if ((((lVar3 != 0) && (*(char *)(lVar3 + 8) != '\0')) && (lVar6 != 0)) &&
               (*(char *)(lVar6 + 8) != '\0')) {
              uVar4 = ft_mem_strdup(uVar7,*(undefined8 *)(lVar6 + 0x10),local_res10);
              param_2[0x25] = uVar4;
              if (local_res10[0] != 0) {
                return 3;
              }
              uVar7 = ft_mem_strdup(uVar7,*(undefined8 *)(lVar3 + 0x10),local_res10);
              param_2[0x26] = uVar7;
            }
            if (local_res10[0] == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 3;
}



// FUNCTION 143c57dc0 FUN_143c57dc0 body=568 status=ok
// SIG undefined FUN_143c57dc0(void)

int FUN_143c57dc0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  int local_res10 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  local_res10[0] = FUN_143c251d0(param_1,0);
  if ((local_res10[0] != 0) ||
     (local_res10[0] = FUN_143c24c00(param_1,&DAT_145d26458), local_res10[0] != 0)) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x138) != 0x70636601) || (0x7fffffe < *(int *)(param_2 + 0x13c) - 1U)) {
    return 3;
  }
  uVar7 = FUN_143c27410(uVar1,0x10,0,*(int *)(param_2 + 0x13c),0,local_res10);
  *(undefined8 *)(param_2 + 0x140) = uVar7;
  if (local_res10[0] == 0) {
    uVar13 = 0;
    if (*(int *)(param_2 + 0x13c) != 0) {
      do {
        local_res10[0] = FUN_143c24c00(param_1,&DAT_145d264c0);
        if (local_res10[0] != 0) goto LAB_143c57f81;
        uVar13 = uVar13 + 1;
        local_res10[0] = 0;
      } while (uVar13 < *(uint *)(param_2 + 0x13c));
    }
    iVar11 = *(int *)(param_2 + 0x13c);
    uVar13 = 0;
    lVar10 = *(longlong *)(param_2 + 0x140);
    if (iVar11 != 1) {
      do {
        bVar6 = false;
        uVar8 = 0;
        if (iVar11 - uVar13 == 1) break;
        do {
          uVar14 = (int)uVar8 + 1;
          puVar9 = (undefined8 *)(uVar8 * 0x10 + lVar10);
          puVar12 = (undefined8 *)((ulonglong)uVar14 * 0x10 + lVar10);
          if (*(uint *)((longlong)puVar12 + 0xc) < *(uint *)((longlong)puVar9 + 0xc)) {
            uVar7 = puVar9[1];
            bVar6 = true;
            uVar2 = *(undefined4 *)puVar12;
            uVar3 = *(undefined4 *)((longlong)puVar12 + 4);
            uVar4 = *(undefined4 *)(puVar12 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0xc);
            *puVar12 = *puVar9;
            puVar12[1] = uVar7;
            *(undefined4 *)puVar9 = uVar2;
            *(undefined4 *)((longlong)puVar9 + 4) = uVar3;
            *(undefined4 *)(puVar9 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar9 + 0xc) = uVar5;
          }
          if ((*(uint *)((longlong)puVar12 + 0xc) < *(uint *)(puVar9 + 1)) ||
             (*(uint *)((longlong)puVar12 + 0xc) - *(uint *)(puVar9 + 1) <
              *(uint *)((longlong)puVar9 + 0xc))) {
            local_res10[0] = 9;
            goto LAB_143c57f81;
          }
          uVar8 = (ulonglong)uVar14;
        } while (uVar14 < (*(int *)(param_2 + 0x13c) - uVar13) - 1);
        if (!bVar6) break;
        iVar11 = *(int *)(param_2 + 0x13c);
        uVar13 = uVar13 + 1;
      } while (uVar13 < iVar11 - 1U);
    }
    uVar14 = 0;
    lVar10 = *(longlong *)(param_2 + 0x140);
    uVar13 = *(uint *)(param_1 + 8);
    if (*(int *)(param_2 + 0x13c) != 1) {
      do {
        if ((uVar13 < *(uint *)(lVar10 + 8)) ||
           (uVar13 - *(uint *)(lVar10 + 8) < *(uint *)(lVar10 + 0xc))) goto LAB_143c57f79;
        lVar10 = lVar10 + 0x10;
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(int *)(param_2 + 0x13c) - 1U);
    }
    if (uVar13 < *(uint *)(lVar10 + 0xc)) {
LAB_143c57f79:
      local_res10[0] = 8;
LAB_143c57f81:
      ft_mem_free(uVar1,*(undefined8 *)(param_2 + 0x140));
      *(undefined8 *)(param_2 + 0x140) = 0;
    }
    else {
      uVar13 = uVar13 - *(uint *)(lVar10 + 0xc);
      if (uVar13 < *(uint *)(lVar10 + 8)) {
        *(uint *)(lVar10 + 8) = uVar13;
      }
      local_res10[0] = 0;
    }
  }
  else {
    local_res10[0] = 0x40;
  }
  return local_res10[0];
}



// FUNCTION 143c58000 FUN_143c58000 body=3881 status=ok
// SIG undefined FUN_143c58000(void)

ulonglong FUN_143c58000(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  int *piVar7;
  uint *puVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  undefined8 *puVar26;
  ulonglong *puVar27;
  uint *puVar28;
  bool bVar29;
  longlong local_res8;
  byte *local_res10;
  uint local_res18;
  uint local_res20;
  uint local_94;
  uint local_90;
  uint local_8c;
  byte *local_88;
  uint local_80;
  byte *local_78;
  uint local_70 [2];
  ulonglong *local_68;
  longlong local_60;
  undefined8 *local_58;
  
  uVar20 = 0;
  local_8c = 0;
  uVar13 = (uint)local_70 ^ (uint)&local_res8 ^ (uint)&local_res10;
  local_70[0] = ((int)((int)uVar13 >> 10 ^ uVar13) >> 10 ^ uVar13) & 0xffff;
  if (local_70[0] == 0) {
    local_70[0] = 0x7384;
  }
  *(longlong *)(param_1 + 0x4b0) = param_1 + 0xb0;
  *(longlong *)(param_1 + 0x650) = param_1 + 0x4b8;
  puVar26 = *(undefined8 **)(param_1 + 0x60);
  puVar27 = (ulonglong *)(param_1 + 0x4b8);
  *(undefined4 *)(param_1 + 0x58) = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_68 = puVar27;
  local_60 = param_1;
  local_58 = puVar26;
  if ((*(void **)(param_1 + 0x710) != (void *)0x0) && (*(uint *)(param_1 + 0x718) != 0)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x710),0,(ulonglong)*(uint *)(param_1 + 0x718) << 2);
  }
  local_88 = local_res10;
  uVar19 = 0;
  *(byte **)(param_1 + 0x4c0) = local_res10;
  local_78 = local_res10 + (param_3 & 0xffffffff);
  *(byte **)(param_1 + 0x4c8) = local_78;
  *puVar27 = (ulonglong)local_res10;
  uVar13 = *(uint *)(param_1 + 0x30);
  local_res20 = *(uint *)(param_1 + 0x34);
  local_90 = 0;
  if (puVar26 != (undefined8 *)0x0) {
    (*(code *)puVar26[1])(*puVar26);
  }
  bVar29 = false;
  bVar9 = false;
  uVar16 = uVar20;
  local_94 = uVar13;
  local_80 = uVar13;
  if (local_88 < local_78) {
    do {
      uVar12 = local_res20;
      iVar23 = 0;
      iVar14 = 0;
      piVar7 = *(int **)(local_res8 + 0x4b0);
      pbVar17 = local_88 + 1;
      iVar11 = iVar14;
      switch(*local_88) {
      case 1:
        iVar11 = 0x10;
        local_88 = pbVar17;
        break;
      case 2:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
      case 0x98:
      case 0x99:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
      case 0xa7:
      case 0xa8:
      case 0xa9:
      case 0xaa:
      case 0xab:
      case 0xac:
      case 0xad:
      case 0xae:
      case 0xaf:
      case 0xb0:
      case 0xb1:
      case 0xb2:
      case 0xb3:
      case 0xb4:
      case 0xb5:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbc:
      case 0xbd:
      case 0xbe:
      case 0xbf:
      case 0xc0:
      case 0xc1:
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
      case 0xe0:
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xef:
      case 0xf0:
      case 0xf1:
      case 0xf2:
      case 0xf3:
      case 0xf4:
      case 0xf5:
      case 0xf6:
      case 0xf7:
      case 0xf8:
      case 0xf9:
      case 0xfa:
      case 0xfb:
      case 0xfc:
      case 0xfd:
      case 0xfe:
      default:
        bVar2 = *local_88;
        if (bVar2 < 0x20) {
          return 0xa0;
        }
        if (bVar2 < 0xf7) {
          iVar21 = bVar2 - 0x8b;
          local_88 = pbVar17;
        }
        else {
          pbVar17 = local_88 + 2;
          if (local_78 < pbVar17) {
            return 0xa0;
          }
          bVar2 = *local_88;
          if (bVar2 < 0xfb) {
            iVar21 = (local_88[1] - 0xf694) + (uint)bVar2 * 0x100;
            local_88 = pbVar17;
          }
          else {
            iVar21 = ((uint)bVar2 * -0x100 - (uint)local_88[1]) + 0xfa94;
            local_88 = pbVar17;
          }
        }
LAB_143c58374:
        iVar11 = iVar23;
        iVar23 = iVar21;
        if (!bVar29) {
          iVar11 = iVar14;
          iVar23 = iVar21 << 0x10;
        }
        break;
      case 3:
        iVar11 = 0x12;
        local_88 = pbVar17;
        break;
      case 4:
        iVar11 = 0xe;
        local_88 = pbVar17;
        break;
      case 5:
        iVar11 = 9;
        local_88 = pbVar17;
        break;
      case 6:
        iVar11 = 6;
        local_88 = pbVar17;
        break;
      case 7:
        iVar11 = 0xd;
        local_88 = pbVar17;
        break;
      case 8:
        iVar11 = 0xb;
        local_88 = pbVar17;
        break;
      case 9:
        iVar11 = 5;
        local_88 = pbVar17;
        break;
      case 10:
        iVar11 = 0x16;
        local_88 = pbVar17;
        break;
      case 0xb:
        iVar11 = 0x18;
        local_88 = pbVar17;
        break;
      case 0xc:
        if (local_78 < pbVar17) {
          return 0xa0;
        }
        local_88 = local_88 + 2;
        switch(*pbVar17) {
        case 0:
          iVar11 = 0xf;
          break;
        case 1:
          iVar11 = 0x13;
          break;
        case 2:
          iVar11 = 0x11;
          break;
        default:
          goto LAB_143c58520;
        case 6:
          iVar11 = 3;
          break;
        case 7:
          iVar11 = 4;
          break;
        case 0xc:
          iVar11 = 0x14;
          break;
        case 0x10:
          iVar11 = 0x15;
          break;
        case 0x11:
          iVar11 = 0x17;
          break;
        case 0x21:
          iVar11 = 0x19;
        }
        break;
      case 0xd:
        iVar11 = 2;
        local_88 = pbVar17;
        break;
      case 0xe:
        iVar11 = 1;
        local_88 = pbVar17;
        break;
      case 0xf:
        iVar11 = 0x1a;
        local_88 = pbVar17;
        break;
      case 0x15:
        iVar11 = 10;
        local_88 = pbVar17;
        break;
      case 0x16:
        iVar11 = 7;
        local_88 = pbVar17;
        break;
      case 0x1e:
        iVar11 = 0xc;
        local_88 = pbVar17;
        break;
      case 0x1f:
        iVar11 = 8;
        local_88 = pbVar17;
        break;
      case 0xff:
        pbVar1 = local_88 + 5;
        if (local_78 < pbVar1) {
          return 0xa0;
        }
        iVar21 = CONCAT31(CONCAT21(CONCAT11(*pbVar17,local_88[2]),local_88[3]),local_88[4]);
        local_88 = pbVar1;
        if (iVar21 + 32000U < 0xfa01) goto LAB_143c58374;
        iVar23 = iVar21;
        if (!bVar29) {
          bVar29 = true;
          bVar9 = true;
        }
      }
      if ((0 < (int)uVar20) && (iVar11 != 0)) {
        if (2 < iVar11 - 0x16U) {
          uVar20 = 0;
        }
        local_8c = (uint)uVar20;
      }
      if (bVar29) {
        if (iVar11 != 0) {
          bVar29 = iVar11 == 0x14;
          bVar9 = bVar29;
          goto LAB_143c583b2;
        }
LAB_143c583b6:
        if (0x3ff < (longlong)((longlong)piVar7 + (-0xb0 - local_res8) & 0xfffffffffffffffcU)) {
          return 0xa0;
        }
        *piVar7 = iVar23;
        *(int **)(local_res8 + 0x4b0) = piVar7 + 1;
        goto LAB_143c58e7f;
      }
LAB_143c583b2:
      if (iVar11 == 0) goto LAB_143c583b6;
      if (iVar11 == 0x15) {
        if ((longlong)((longlong)piVar7 + (-0xb0 - local_res8) & 0xfffffffffffffffcU) < 8) {
          return 0xa1;
        }
        sVar4 = *(short *)((longlong)piVar7 + -6);
        uVar16 = (ulonglong)sVar4;
        uVar5 = *(ushort *)((longlong)piVar7 + -2);
        if ((longlong)piVar7 + (-0xb8 - local_res8) >> 2 < (longlong)uVar16) {
          return 0xa1;
        }
        uVar18 = 0;
        uVar12 = 0;
        local_res18 = 0;
        uVar20 = 0;
        local_8c = 0;
        puVar24 = (uint *)(piVar7 + (-2 - uVar16));
        uVar15 = (uint)sVar4;
        uVar10 = (uint)sVar4;
        if (uVar5 < 0x1d) {
          switch(uVar5) {
          case 0:
            if (uVar15 != 3) {
              return 0xa0;
            }
            if (*(int *)(local_res8 + 0x6a0) == 0) {
              return 0xa0;
            }
            if (*(int *)(local_res8 + 0x6a4) != 7) {
              return 0xa0;
            }
            uVar12 = 2;
            *puVar24 = uVar13;
            local_res18 = 2;
            puVar24[1] = local_res20;
            uVar18 = uVar19;
            break;
          case 1:
            if (uVar10 != 0) {
              return 0xa0;
            }
            *(undefined4 *)(local_res8 + 0x6a0) = 1;
            *(undefined4 *)(local_res8 + 0x6a4) = 0;
            uVar10 = t1_builder_start_point(param_1,uVar13);
            if (uVar10 != 0) {
              return (ulonglong)uVar10;
            }
            lVar22 = *(longlong *)(param_1 + 0x18);
            if (*(uint *)(lVar22 + 8) <
                (uint)(*(short *)(lVar22 + 0x62) + 6 + (int)*(short *)(lVar22 + 0x1a))) {
              local_90 = FUN_143c20e90(lVar22,6);
              uVar18 = (ulonglong)local_90;
              if (local_90 != 0) {
                return uVar18;
              }
            }
            else {
              local_90 = 0;
            }
            break;
          case 2:
            if (uVar10 != 0) {
              return 0xa0;
            }
            if (*(int *)(local_res8 + 0x6a0) == 0) {
              return 0xa0;
            }
            iVar11 = *(int *)(local_res8 + 0x6a4);
            *(int *)(local_res8 + 0x6a4) = iVar11 + 1;
            uVar18 = uVar19;
            if (iVar11 - 1U < 6) {
              if ((iVar11 == 3) || (iVar11 == 6)) {
                FUN_143c5a940(param_1,uVar13,local_res20,1);
              }
              else {
                FUN_143c5a940(param_1,uVar13,local_res20,0);
              }
            }
            break;
          case 3:
            if (uVar10 != 1) {
              return 0xa0;
            }
            uVar18 = uVar19;
            uVar12 = (int)sVar4;
            local_res18 = uVar10;
            if (puVar26 != (undefined8 *)0x0) {
              (*(code *)puVar26[5])(*puVar26,(int)*(short *)(*(longlong *)(param_1 + 0x28) + 2));
              uVar12 = local_res18;
            }
            break;
          default:
            goto switchD_143c58468_caseD_4;
          case 0xc:
          case 0xd:
            puVar24 = (uint *)(local_res8 + 0xb0);
            uVar18 = uVar19;
            break;
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
            puVar8 = *(uint **)(local_res8 + 0x6e0);
            if (puVar8 == (uint *)0x0) {
              return 0xa0;
            }
            local_res18 = (short)uVar5 + -0xd + (uint)(uVar5 == 0x12);
            uVar20 = (ulonglong)local_res18;
            if (uVar10 != local_res18 * *puVar8) {
              return 0xa0;
            }
            puVar25 = puVar24 + uVar20;
            puVar28 = puVar24;
            if (local_res18 != 0) {
              do {
                uVar13 = *puVar28;
                uVar19 = 1;
                if (1 < *puVar8) {
                  do {
                    iVar11 = FUN_143c22100(*puVar25,*(undefined4 *)
                                                     (*(longlong *)(puVar8 + 0x42) + uVar19 * 4));
                    uVar13 = uVar13 + iVar11;
                    puVar25 = puVar25 + 1;
                    uVar12 = (int)uVar19 + 1;
                    uVar19 = (ulonglong)uVar12;
                  } while (uVar12 < *puVar8);
                }
                *puVar28 = uVar13;
                puVar28 = puVar28 + 1;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            param_1 = local_60;
            uVar20 = 0;
            puVar26 = local_58;
            uVar18 = (ulonglong)local_90;
            uVar13 = local_94;
            uVar12 = local_res18;
            break;
          case 0x13:
            puVar8 = *(uint **)(local_res8 + 0x6e0);
            if (uVar10 != 1) {
              return 0xa0;
            }
            if (puVar8 == (uint *)0x0) {
              return 0xa0;
            }
            sVar4 = *(short *)((longlong)puVar24 + 2);
            if (sVar4 < 0) {
              return 0xa0;
            }
            if (*(uint *)(local_res8 + 0x718) < *puVar8 + (int)sVar4) {
              return 0xa0;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(local_res8 + 0x710) + (longlong)sVar4 * 4),
                       *(void **)(puVar8 + 0x42),(ulonglong)*puVar8 << 2);
            uVar18 = uVar19;
            break;
          case 0x14:
            if (uVar10 != 2) {
              return 0xa0;
            }
            *puVar24 = *puVar24 + puVar24[1];
            local_res18 = 1;
            uVar18 = uVar19;
            uVar12 = 1;
            break;
          case 0x15:
            if (uVar10 != 2) {
              return 0xa0;
            }
            *puVar24 = *puVar24 - puVar24[1];
            local_res18 = 1;
            uVar18 = uVar19;
            uVar12 = 1;
            break;
          case 0x16:
            if (uVar10 != 2) {
              return 0xa0;
            }
            uVar12 = FUN_143c22100(*puVar24,puVar24[1]);
            *puVar24 = uVar12;
            local_res18 = 1;
            uVar18 = uVar19;
            uVar12 = 1;
            break;
          case 0x17:
            if (uVar10 != 2) {
              return 0xa0;
            }
            if (puVar24[1] == 0) {
              return 0xa0;
            }
            uVar12 = FUN_143c20070(*puVar24);
            *puVar24 = uVar12;
            local_res18 = 1;
            uVar18 = uVar19;
            uVar12 = 1;
            break;
          case 0x18:
            if (uVar10 != 2) {
              return 0xa0;
            }
            if (*(longlong *)(local_res8 + 0x6e0) == 0) {
              return 0xa0;
            }
            sVar4 = *(short *)((longlong)puVar24 + 6);
            if (sVar4 < 0) {
              return 0xa0;
            }
            if (*(uint *)(local_res8 + 0x718) <= (uint)(int)sVar4) {
              return 0xa0;
            }
            *(uint *)(*(longlong *)(local_res8 + 0x710) + (longlong)sVar4 * 4) = *puVar24;
            uVar20 = uVar18;
            uVar18 = uVar19;
            break;
          case 0x19:
            if (uVar10 != 1) {
              return 0xa0;
            }
            if (*(longlong *)(local_res8 + 0x6e0) == 0) {
              return 0xa0;
            }
            sVar6 = *(short *)((longlong)puVar24 + 2);
            if (sVar6 < 0) {
              return 0xa0;
            }
            if (*(uint *)(local_res8 + 0x718) <= (uint)(int)sVar6) {
              return 0xa0;
            }
            *puVar24 = *(uint *)(*(longlong *)(local_res8 + 0x710) + (longlong)sVar6 * 4);
            uVar18 = uVar19;
            uVar12 = (int)sVar4;
            local_res18 = uVar15;
            break;
          case 0x1b:
            if (uVar10 != 4) {
              return 0xa0;
            }
            if ((int)puVar24[3] < (int)puVar24[2]) {
              *puVar24 = puVar24[1];
            }
            local_res18 = 1;
            uVar18 = uVar19;
            uVar12 = 1;
            break;
          case 0x1c:
            if (uVar15 != 0) {
              return 0xa0;
            }
            uVar12 = local_70[0];
            if (0x7fff < (int)local_70[0]) {
              uVar12 = local_70[0] + 1;
            }
            *puVar24 = uVar12;
            local_70[0] = FUN_143c22100(local_70[0],0x10000 - local_70[0]);
            if (local_70[0] == 0) {
              local_70[0] = 0x2873;
            }
            local_res18 = 1;
            uVar20 = uVar18;
            uVar18 = uVar19;
            uVar12 = 1;
          }
        }
        else {
switchD_143c58468_caseD_4:
          if ((int)uVar15 < 0) {
            return 0xa0;
          }
          if ((short)uVar5 < 0) {
            return 0xa0;
          }
          uVar20 = uVar16 & 0xffffffff;
          uVar18 = uVar19;
          local_8c = uVar10;
        }
        uVar16 = (ulonglong)local_res18;
        *(uint **)(local_res8 + 0x4b0) = puVar24 + (int)uVar12;
        uVar19 = uVar18;
        bVar29 = bVar9;
        goto LAB_143c58e7f;
      }
      if ((longlong)piVar7 + (-0xb0 - local_res8) >> 2 <
          (longlong)*(int *)(&UNK_145d26960 + (longlong)iVar11 * 4)) {
        return 0xa1;
      }
      puVar24 = (uint *)(piVar7 + -(longlong)*(int *)(&UNK_145d26960 + (longlong)iVar11 * 4));
      switch(iVar11) {
      case 1:
        FUN_143c4aab0(param_1);
        if (puVar26 != (undefined8 *)0x0) {
          iVar11 = (*(code *)puVar26[2])
                             (*puVar26,(int)*(short *)(*(longlong *)(param_1 + 0x28) + 2));
          if (iVar11 != 0) {
            return 0xa0;
          }
          uVar13 = (*(code *)puVar26[6])
                             (*puVar26,*(undefined8 *)(param_1 + 0x28),
                              *(undefined8 *)(param_1 + 0x68),*(undefined4 *)(local_res8 + 0x6e8));
          if (uVar13 != 0) {
            return (ulonglong)uVar13;
          }
        }
        FUN_143c20ca0(*(undefined8 *)(param_1 + 0x18));
        return 0;
      case 2:
        *(undefined4 *)(param_1 + 0x58) = 1;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *puVar24;
        *(uint *)(param_1 + 0x40) = puVar24[1];
        local_res20 = *(uint *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x44) = 0;
        uVar13 = *puVar24 + *(int *)(param_1 + 0x30);
        cVar3 = *(char *)(param_1 + 0x5e);
        local_80 = uVar13;
        goto joined_r0x000143c58971;
      case 3:
        uVar20 = FUN_143c5caa0(local_res8,*puVar24,puVar24[1],puVar24[2],
                               (int)*(short *)((longlong)puVar24 + 0xe),
                               (int)*(short *)((longlong)puVar24 + 0x12));
        return uVar20;
      case 4:
        *(undefined4 *)(param_1 + 0x58) = 1;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *puVar24;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + puVar24[1];
        *(uint *)(param_1 + 0x40) = puVar24[2];
        *(uint *)(param_1 + 0x44) = puVar24[3];
        uVar13 = *puVar24 + *(int *)(param_1 + 0x30);
        local_res20 = puVar24[1] + *(int *)(param_1 + 0x34);
        cVar3 = *(char *)(param_1 + 0x5e);
joined_r0x000143c58971:
        local_94 = uVar13;
        if (cVar3 != '\0') {
          return 0;
        }
        break;
      case 5:
        if (*(int *)(param_1 + 0x58) - 2U < 2) {
          FUN_143c4aab0(param_1);
          bVar29 = bVar9;
        }
        *(undefined4 *)(param_1 + 0x58) = 1;
        break;
      case 6:
        uVar12 = t1_builder_start_point(param_1,uVar13,local_res20);
        if (uVar12 != 0) {
          return (ulonglong)uVar12;
        }
        uVar13 = uVar13 + *puVar24;
        local_94 = uVar13;
        goto LAB_143c58c3b;
      case 7:
        uVar12 = *puVar24;
        goto LAB_143c589ca;
      case 8:
        uVar10 = t1_builder_start_point(param_1,uVar13,local_res20);
        if (uVar10 != 0) {
          return (ulonglong)uVar10;
        }
        lVar22 = *(longlong *)(param_1 + 0x18);
        if (*(uint *)(lVar22 + 8) <
            (uint)(*(short *)(lVar22 + 0x62) + 3 + (int)*(short *)(lVar22 + 0x1a))) {
          local_90 = FUN_143c20e90(lVar22,3);
          uVar19 = (ulonglong)local_90;
          if (local_90 != 0) {
            return uVar19;
          }
        }
        else {
          local_90 = 0;
          uVar19 = 0;
        }
        uVar10 = *puVar24;
        FUN_143c5a940(param_1,uVar13 + uVar10,uVar12,0);
        uVar13 = uVar13 + uVar10 + puVar24[1];
        uVar10 = puVar24[2];
        FUN_143c5a940(param_1,uVar13,uVar12 + uVar10,0);
        uVar10 = uVar12 + uVar10 + puVar24[3];
        local_res20 = uVar10;
        goto LAB_143c58a83;
      case 9:
        uVar10 = t1_builder_start_point(param_1,uVar13,local_res20);
        if (uVar10 != 0) {
          return (ulonglong)uVar10;
        }
        uVar13 = uVar13 + *puVar24;
        local_res20 = puVar24[1];
        local_94 = uVar13;
        goto LAB_143c58c38;
      case 10:
        uVar12 = *puVar24;
        local_res20 = local_res20 + puVar24[1];
LAB_143c589ca:
        uVar13 = uVar13 + uVar12;
        local_94 = uVar13;
LAB_143c589ce:
        if (*(int *)(local_res8 + 0x6a0) == 0) {
          if (*(int *)(param_1 + 0x58) == 0) {
LAB_143c58520:
            return 0xa0;
          }
          *(undefined4 *)(param_1 + 0x58) = 2;
        }
        break;
      case 0xb:
        uVar10 = t1_builder_start_point(param_1,uVar13,local_res20);
        if (uVar10 != 0) {
          return (ulonglong)uVar10;
        }
        lVar22 = *(longlong *)(param_1 + 0x18);
        if (*(uint *)(lVar22 + 8) <
            (uint)(*(short *)(lVar22 + 0x62) + 3 + (int)*(short *)(lVar22 + 0x1a))) {
          local_90 = FUN_143c20e90(lVar22,3);
          uVar19 = (ulonglong)local_90;
          if (local_90 != 0) {
            return uVar19;
          }
        }
        else {
          local_90 = 0;
          uVar19 = 0;
        }
        uVar10 = *puVar24;
        uVar15 = puVar24[1];
        FUN_143c5a940(param_1,uVar13 + uVar10,uVar12 + uVar15,0);
        iVar23 = uVar13 + uVar10 + puVar24[2];
        iVar11 = uVar12 + uVar15 + puVar24[3];
        FUN_143c5a940(param_1,iVar23,iVar11,0);
        uVar13 = iVar23 + puVar24[4];
        local_res20 = iVar11 + puVar24[5];
        FUN_143c5a940(param_1,uVar13,local_res20,1);
        local_94 = uVar13;
        bVar29 = bVar9;
        break;
      case 0xc:
        uVar10 = t1_builder_start_point(param_1,uVar13,local_res20);
        if (uVar10 != 0) {
          return (ulonglong)uVar10;
        }
        lVar22 = *(longlong *)(param_1 + 0x18);
        if (*(uint *)(lVar22 + 8) <
            (uint)(*(short *)(lVar22 + 0x62) + 3 + (int)*(short *)(lVar22 + 0x1a))) {
          local_90 = FUN_143c20e90(lVar22,3);
          uVar19 = (ulonglong)local_90;
          if (local_90 != 0) {
            return uVar19;
          }
        }
        else {
          local_90 = 0;
          uVar19 = 0;
        }
        uVar10 = *puVar24;
        FUN_143c5a940(param_1,uVar13,uVar12 + uVar10,0);
        uVar10 = uVar12 + uVar10 + puVar24[2];
        uVar12 = puVar24[1];
        local_res20 = uVar10;
        FUN_143c5a940(param_1,uVar13 + uVar12,uVar10,0);
        uVar13 = uVar13 + uVar12 + puVar24[3];
LAB_143c58a83:
        FUN_143c5a940(param_1,uVar13,uVar10,1);
        local_94 = uVar13;
        bVar29 = bVar9;
        break;
      case 0xd:
        uVar10 = t1_builder_start_point(param_1,uVar13,local_res20);
        if (uVar10 != 0) {
          return (ulonglong)uVar10;
        }
        local_res20 = *puVar24;
LAB_143c58c38:
        local_res20 = uVar12 + local_res20;
LAB_143c58c3b:
        uVar12 = FUN_143c5a9d0(param_1,uVar13);
        if (uVar12 != 0) {
          return (ulonglong)uVar12;
        }
        local_90 = 0;
        uVar19 = 0;
        bVar29 = bVar9;
        break;
      case 0xe:
        local_res20 = local_res20 + *puVar24;
        goto LAB_143c589ce;
      case 0xf:
      case 0x1a:
        break;
      case 0x10:
        if (puVar26 != (undefined8 *)0x0) {
          (*(code *)puVar26[3])(*puVar26,1);
          bVar29 = bVar9;
        }
        break;
      case 0x11:
        if (puVar26 != (undefined8 *)0x0) {
          (*(code *)puVar26[4])(*puVar26,1);
          bVar29 = bVar9;
        }
        break;
      case 0x12:
        if (puVar26 != (undefined8 *)0x0) {
          *puVar24 = *puVar24 + local_80;
          (*(code *)puVar26[3])(*puVar26,0);
          bVar29 = bVar9;
        }
        break;
      case 0x13:
        if (puVar26 != (undefined8 *)0x0) {
          *puVar24 = *puVar24 + local_80;
          puVar24[2] = puVar24[2] + local_80;
          puVar24[4] = puVar24[4] + local_80;
          (*(code *)puVar26[4])(*puVar26,0);
          bVar29 = bVar9;
        }
        break;
      case 0x14:
        uVar12 = FUN_143c20070(*puVar24,puVar24[1]);
        *puVar24 = uVar12;
        puVar24 = puVar24 + 1;
        bVar9 = false;
        bVar29 = false;
        break;
      default:
        goto LAB_143c58520;
      case 0x16:
        sVar4 = *(short *)((longlong)puVar24 + 2);
        lVar22 = (longlong)sVar4;
        if (sVar4 < 0) {
          return 0xa0;
        }
        if (*(int *)(local_res8 + 0x674) <= (int)sVar4) {
          return 0xa0;
        }
        if (0xf < ((longlong)local_68 + (-0x4b8 - local_res8)) / 0x18) {
          return 0xa0;
        }
        *local_68 = (ulonglong)local_88;
        puVar27 = local_68 + 3;
        uVar20 = *(ulonglong *)(*(longlong *)(local_res8 + 0x678) + lVar22 * 8);
        local_68[4] = uVar20;
        if (*(longlong *)(local_res8 + 0x680) == 0) {
          iVar11 = 0;
          if (-1 < *(int *)(local_res8 + 0x670)) {
            iVar11 = *(int *)(local_res8 + 0x670);
          }
          local_68[4] = (longlong)iVar11 + uVar20;
          uVar20 = *(ulonglong *)(*(longlong *)(local_res8 + 0x678) + 8 + lVar22 * 8);
        }
        else {
          uVar20 = *(uint *)(*(longlong *)(local_res8 + 0x680) + lVar22 * 4) + uVar20;
        }
        local_68[5] = uVar20;
        *puVar27 = local_68[4];
        if (local_68[4] == 0) {
          return 0xa0;
        }
        *(ulonglong **)(local_res8 + 0x650) = puVar27;
        local_88 = (byte *)local_68[4];
        local_78 = (byte *)local_68[5];
        local_68 = puVar27;
        bVar29 = bVar9;
        break;
      case 0x17:
        if ((int)uVar16 < 1) {
          if (local_8c == 0) {
            return 0xa0;
          }
          local_8c = local_8c - 1;
          puVar24 = puVar24 + 1;
        }
        else {
          uVar16 = (ulonglong)((int)uVar16 - 1);
        }
        break;
      case 0x18:
        if (local_68 <= (ulonglong *)(local_res8 + 0x4b8)) {
          return 0xa0;
        }
        local_88 = (byte *)local_68[-3];
        local_78 = (byte *)local_68[-1];
        *(ulonglong **)(local_res8 + 0x650) = local_68 + -3;
        local_68 = local_68 + -3;
        bVar29 = bVar9;
        break;
      case 0x19:
        local_res20 = puVar24[1];
        uVar13 = *puVar24;
        *(undefined4 *)(local_res8 + 0x6a0) = 0;
        local_94 = uVar13;
      }
      *(uint **)(local_res8 + 0x4b0) = puVar24;
      uVar20 = (ulonglong)local_8c;
LAB_143c58e7f:
    } while (local_88 < local_78);
  }
  return uVar19;
}



// FUNCTION 143c591b0 FUN_143c591b0 body=209 status=ok
// SIG undefined FUN_143c591b0(void)

int FUN_143c591b0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_res8 [2];
  
  param_1[7] = param_3;
  uVar1 = FUN_143c27410(param_3,8,0,param_2,0,local_res8);
  param_1[5] = uVar1;
  if (local_res8[0] == 0) {
    uVar1 = FUN_143c27410(param_3,4,0,param_2,0,local_res8);
    param_1[6] = uVar1;
    if (local_res8[0] == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = param_2;
      *(undefined4 *)(param_1 + 3) = 0xdeadbeef;
      *(undefined4 *)(param_1 + 4) = 0;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[8] = FUN_143c591b0;
      param_1[9] = FUN_143c59490;
      param_1[10] = FUN_143c59370;
      param_1[0xb] = FUN_143c59530;
      return 0;
    }
  }
  ft_mem_free(param_3,param_1[5]);
  param_1[5] = 0;
  return local_res8[0];
}



// FUNCTION 143c59290 FUN_143c59290 body=220 status=ok
// SIG undefined FUN_143c59290(void)

undefined8
FUN_143c59290(void *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  
  _guard_xfg_dispatch_icall_nop(param_1,0,0x720);
  lVar1 = ft_module_get_service(*(undefined8 *)(param_2 + 0x90),"postscript-cmaps");
  if (lVar1 == 0) {
    uVar2 = 7;
  }
  else {
    *(longlong *)((longlong)param_1 + 0x658) = lVar1;
    FUN_143c5a830(param_1,param_2,param_3,param_4,param_7);
    *(undefined4 *)((longlong)param_1 + 0x660) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x668) = param_5;
    *(undefined4 *)((longlong)param_1 + 0x6e8) = param_8;
    *(undefined8 *)((longlong)param_1 + 0x6e0) = param_6;
    *(undefined8 *)((longlong)param_1 + 0x6f0) = param_9;
    uVar2 = 0;
    *(code **)((longlong)param_1 + 0x6f8) = FUN_143c59290;
    *(undefined1 **)((longlong)param_1 + 0x700) = &LAB_143c59460;
    *(code **)((longlong)param_1 + 0x708) = FUN_143c58000;
  }
  return uVar2;
}



// FUNCTION 143c59370 FUN_143c59370 body=238 status=ok
// SIG undefined FUN_143c59370(void)

undefined8 FUN_143c59370(longlong *param_1,int param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong _Size;
  
  _Size = (ulonglong)param_4;
  if ((param_2 < 0) || (*(int *)((longlong)param_1 + 0x1c) <= param_2)) {
    return 6;
  }
  uVar2 = param_1[2];
  if (uVar2 < param_1[1] + _Size) {
    uVar3 = (longlong)param_3 - *param_1;
    if (((longlong)uVar3 < 0) || (uVar2 <= uVar3)) {
      uVar3 = 0xffffffffffffffff;
    }
    for (; uVar2 < param_1[1] + _Size; uVar2 = uVar2 + 0x400 + (uVar2 >> 2) & 0xfffffffffffffc00) {
    }
    uVar1 = FUN_143c5c680(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (-1 < (longlong)uVar3) {
      param_3 = (void *)(*param_1 + uVar3);
    }
  }
  *(longlong *)(param_1[5] + (longlong)param_2 * 8) = *param_1 + param_1[1];
  *(uint *)(param_1[6] + (longlong)param_2 * 4) = param_4;
  _guard_xfg_dispatch_icall_nop((void *)(*param_1 + param_1[1]),param_3,_Size);
  param_1[1] = param_1[1] + _Size;
  return 0;
}



// FUNCTION 143c59490 FUN_143c59490 body=154 status=ok
// SIG undefined FUN_143c59490(void)

void FUN_143c59490(longlong *param_1)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  longlong *plVar4;
  int local_res8 [2];
  
  _Src = (void *)*param_1;
  lVar2 = param_1[7];
  if (_Src != (void *)0x0) {
    _Dst = (void *)FUN_143c271e0(lVar2,(int)param_1[1],local_res8);
    *param_1 = (longlong)_Dst;
    if (local_res8[0] == 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,param_1[1]);
      plVar4 = (longlong *)param_1[5];
      lVar3 = *param_1;
      plVar1 = plVar4 + *(int *)((longlong)param_1 + 0x1c);
      for (; plVar4 < plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 != 0) {
          *plVar4 = *plVar4 + (lVar3 - (longlong)_Src);
        }
      }
      param_1[2] = param_1[1];
      ft_mem_free(lVar2,_Src);
    }
  }
  return;
}



// FUNCTION 143c59530 FUN_143c59530 body=98 status=ok
// SIG undefined FUN_143c59530(void)

void FUN_143c59530(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[7];
  if (*(int *)(param_1 + 3) == -0x21524111) {
    ft_mem_free(uVar1,*param_1);
    *param_1 = 0;
    ft_mem_free(uVar1,param_1[5]);
    param_1[5] = 0;
    ft_mem_free(uVar1,param_1[6]);
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 143c595a0 FUN_143c595a0 body=101 status=ok
// SIG undefined FUN_143c595a0(void)

void FUN_143c595a0(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)param_1[2];
  pbVar3 = (byte *)*param_1;
  if (pbVar2 <= pbVar3) {
    *param_1 = pbVar3;
    return;
  }
  do {
    bVar1 = *pbVar3;
    if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (bVar1 != 0x25) break;
      for (; ((pbVar3 < pbVar2 && (*pbVar3 != 0xd)) && (*pbVar3 != 10)); pbVar3 = pbVar3 + 1) {
      }
    }
    pbVar3 = pbVar3 + 1;
  } while (pbVar3 < pbVar2);
  *param_1 = pbVar3;
  return;
}



// FUNCTION 143c59610 FUN_143c59610 body=380 status=ok
// SIG undefined FUN_143c59610(void)

void FUN_143c59610(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  byte *local_res8;
  
  pbVar2 = (byte *)param_1[2];
  uVar3 = 0;
  for (pbVar4 = (byte *)*param_1; pbVar4 < pbVar2; pbVar4 = pbVar4 + 1) {
    bVar1 = *pbVar4;
    if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (bVar1 != 0x25) break;
      for (; ((pbVar4 < pbVar2 && (*pbVar4 != 0xd)) && (*pbVar4 != 10)); pbVar4 = pbVar4 + 1) {
      }
    }
  }
  local_res8 = pbVar4;
  uVar5 = 0;
  if (pbVar4 < pbVar2) {
    bVar1 = *pbVar4;
    if ((bVar1 + 0xa5 & 0xfd) == 0) {
      local_res8 = pbVar4 + 1;
    }
    else if (bVar1 == 0x7b) {
      uVar3 = FUN_143c5c850(&local_res8,pbVar2);
    }
    else if (bVar1 == 0x28) {
      uVar3 = FUN_143c5c730(&local_res8,pbVar2);
    }
    else if (bVar1 == 0x3c) {
      if ((pbVar4 + 1 < pbVar2) && (pbVar4[1] == 0x3c)) {
        local_res8 = pbVar4 + 2;
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_143c5c950(&local_res8,pbVar2);
      }
    }
    else {
      if (bVar1 != 0x3e) {
        if (bVar1 == 0x2f) {
          local_res8 = pbVar4 + 1;
        }
        for (; uVar5 = 0, local_res8 < pbVar2; local_res8 = local_res8 + 1) {
          bVar1 = *local_res8;
          if (((bVar1 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
             (((byte)(bVar1 - 0x3e) < 0x40 &&
              ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) != 0))))
          goto LAB_143c59769;
        }
        goto LAB_143c5977a;
      }
      local_res8 = pbVar4 + 1;
      if ((local_res8 < pbVar2) && (*local_res8 == 0x3e)) {
        local_res8 = pbVar4 + 2;
      }
      else {
        uVar3 = 3;
      }
    }
LAB_143c59769:
    uVar5 = uVar3;
    if ((local_res8 < pbVar2) && (local_res8 == (byte *)*param_1)) {
      uVar5 = 3;
    }
  }
LAB_143c5977a:
  *(undefined4 *)(param_1 + 3) = uVar5;
  *param_1 = local_res8;
  return;
}



// FUNCTION 143c59790 FUN_143c59790 body=322 status=ok
// SIG undefined FUN_143c59790(void)

void FUN_143c59790(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  char *local_res8;
  
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_143c595a0();
  local_res8 = (char *)*param_1;
  pcVar2 = (char *)param_1[2];
  if (pcVar2 <= local_res8) {
    return;
  }
  cVar1 = *local_res8;
  *param_2 = local_res8;
  if (cVar1 == '(') {
    *(undefined4 *)(param_2 + 2) = 2;
    iVar5 = FUN_143c5c730(&local_res8,pcVar2);
    bVar7 = iVar5 == 0;
  }
  else {
    if (cVar1 == '[') {
      *(undefined4 *)(param_2 + 2) = 3;
      *param_1 = local_res8 + 1;
      iVar5 = 1;
      FUN_143c595a0(param_1);
      pcVar4 = (char *)*param_1;
      pcVar3 = local_res8;
      while ((local_res8 = pcVar4, local_res8 < pcVar2 && (*(int *)(param_1 + 3) == 0))) {
        if (*local_res8 == '[') {
          iVar5 = iVar5 + 1;
        }
        else if ((*local_res8 == ']') && (iVar5 = iVar5 + -1, iVar5 < 1)) {
          local_res8 = local_res8 + 1;
          goto LAB_143c59809;
        }
        local_res8 = pcVar3;
        FUN_143c59610(param_1);
        FUN_143c595a0(param_1);
        pcVar4 = (char *)*param_1;
        pcVar3 = local_res8;
      }
      goto LAB_143c5980d;
    }
    if (cVar1 == '{') {
      *(undefined4 *)(param_2 + 2) = 3;
      iVar5 = FUN_143c5c850(&local_res8,pcVar2);
      bVar7 = iVar5 == 0;
    }
    else {
      uVar6 = 1;
      if (*local_res8 == '/') {
        uVar6 = 4;
      }
      *(undefined4 *)(param_2 + 2) = uVar6;
      FUN_143c59610(param_1);
      local_res8 = (char *)*param_1;
      bVar7 = *(int *)(param_1 + 3) == 0;
    }
  }
  if (bVar7) {
LAB_143c59809:
    param_2[1] = local_res8;
  }
LAB_143c5980d:
  if (param_2[1] == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
  *param_1 = local_res8;
  return;
}



// FUNCTION 143c598e0 FUN_143c598e0 body=753 status=ok
// SIG undefined FUN_143c598e0(void)

void FUN_143c598e0(ulonglong *param_1,undefined8 *param_2,ulonglong param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *local_68;
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  byte *local_48;
  byte *pbStack_40;
  int local_38;
  undefined4 uStack_34;
  
  *param_4 = 0xffffffff;
  FUN_143c59790(param_1,&local_48);
  if (local_38 == 3) {
    local_58 = *param_1;
    local_50 = param_1[2];
    puVar7 = param_2 + (param_3 & 0xffffffff) * 3;
    *param_1 = (ulonglong)(local_48 + 1);
    param_1[2] = (longlong)pbStack_40 - 1U;
    puVar8 = param_2;
    local_60 = puVar7;
    if (local_48 + 1 < (byte *)((longlong)pbStack_40 - 1U)) {
      do {
        pbVar2 = (byte *)param_1[2];
        local_68 = (byte *)*param_1;
        pbStack_40 = (byte *)0x0;
        for (; local_68 < pbVar2; local_68 = local_68 + 1) {
          bVar1 = *local_68;
          if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
            if (bVar1 != 0x25) break;
            for (; ((local_68 < pbVar2 && (*local_68 != 0xd)) && (*local_68 != 10));
                local_68 = local_68 + 1) {
            }
          }
        }
        *param_1 = (ulonglong)local_68;
        if (pbVar2 <= local_68) break;
        bVar1 = *local_68;
        local_48 = local_68;
        if (bVar1 == 0x28) {
          iVar6 = 2;
          local_38 = 2;
          iVar4 = FUN_143c5c730(&local_68,pbVar2);
LAB_143c59b1e:
          if (iVar4 != 0) goto LAB_143c59b29;
LAB_143c59b20:
          pbStack_40 = local_68;
          if (local_68 == (byte *)0x0) goto LAB_143c59b29;
        }
        else {
          if (bVar1 != 0x5b) {
            if (bVar1 == 0x7b) {
              iVar6 = 3;
              local_38 = 3;
              iVar4 = FUN_143c5c850(&local_68,pbVar2);
            }
            else {
              iVar6 = 1;
              if (bVar1 == 0x2f) {
                iVar6 = 4;
              }
              local_38 = iVar6;
              FUN_143c59610(param_1);
              local_68 = (byte *)*param_1;
              iVar4 = (int)param_1[3];
            }
            goto LAB_143c59b1e;
          }
          iVar6 = 3;
          local_38 = 3;
          *param_1 = (ulonglong)(local_68 + 1);
          iVar4 = 1;
          FUN_143c595a0(param_1);
          pbVar5 = (byte *)*param_1;
          pbVar3 = local_68;
          while ((local_68 = pbVar5, local_68 < pbVar2 && ((int)param_1[3] == 0))) {
            if (*local_68 == 0x5b) {
              iVar4 = iVar4 + 1;
            }
            else if ((*local_68 == 0x5d) && (iVar4 = iVar4 + -1, iVar4 < 1)) {
              local_68 = local_68 + 1;
              goto LAB_143c59b20;
            }
            local_68 = pbVar3;
            FUN_143c59610(param_1);
            for (pbVar5 = (byte *)*param_1; pbVar5 < (byte *)param_1[2]; pbVar5 = pbVar5 + 1) {
              bVar1 = *pbVar5;
              puVar7 = local_60;
              if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
                if (bVar1 != 0x25) break;
                for (; ((pbVar5 < (byte *)param_1[2] && (*pbVar5 != 0xd)) && (*pbVar5 != 10));
                    pbVar5 = pbVar5 + 1) {
                }
              }
            }
            *param_1 = (ulonglong)pbVar5;
            pbVar3 = local_68;
          }
LAB_143c59b29:
          iVar6 = 0;
          local_48 = (byte *)0x0;
          local_38 = 0;
        }
        *param_1 = (ulonglong)local_68;
        if (iVar6 == 0) break;
        if ((param_2 != (undefined8 *)0x0) && (puVar8 < puVar7)) {
          *puVar8 = local_48;
          puVar8[1] = pbStack_40;
          puVar8[2] = CONCAT44(uStack_34,local_38);
        }
        puVar8 = puVar8 + 3;
      } while (*param_1 < param_1[2]);
    }
    *param_4 = (int)(((longlong)puVar8 - (longlong)param_2) / 0x18);
    *param_1 = local_58;
    param_1[2] = local_50;
  }
  return;
}



// FUNCTION 143c59be0 FUN_143c59be0 body=118 status=ok
// SIG undefined FUN_143c59be0(void)

int FUN_143c59be0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int local_18 [4];
  
  puVar1 = (undefined8 *)FUN_143c271e0(param_2,0x20,local_18);
  if (local_18[0] == 0) {
    puVar1[1] = param_3;
    *puVar1 = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = 2;
    param_1[1] = puVar1;
    local_18[0] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2;
  }
  return local_18[0];
}



// FUNCTION 143c59c60 afm_parser_done body=35 status=ok
// SIG undefined afm_parser_done(void)

void afm_parser_done(undefined8 *param_1)

{
  ft_mem_free(*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}



// FUNCTION 143c59c90 FUN_143c59c90 body=753 status=ok
// SIG undefined FUN_143c59c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c59c90(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *_Str1;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_88 [2];
  uint local_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined1 *)param_1[2];
  uVar2 = *param_1;
  uVar5 = 0xa0;
  if (puVar1 == (undefined1 *)0x0) {
    uVar7 = 6;
  }
  else {
    plVar9 = (longlong *)param_1[1];
    lVar10 = 0;
    while( true ) {
      if ((int)plVar9[3] < 2) {
        afm_stream_read_string(plVar9);
      }
      *(undefined4 *)(plVar9 + 3) = 0;
      _Str1 = (char *)afm_stream_read_one(plVar9);
      if (_Str1 != (char *)0x0) break;
      lVar6 = lVar10;
      if ((2 < (int)plVar9[3]) || ((int)plVar9[3] < 2)) goto LAB_143c59d29;
    }
    lVar6 = (*plVar9 - (longlong)_Str1) + -1;
LAB_143c59d29:
    if ((_Str1 != (char *)0x0) &&
       ((lVar6 == 0x10 &&
        (iVar3 = _guard_xfg_dispatch_icall_nop(_Str1,"StartFontMetrics",0x10), iVar3 == 0)))) {
switchD_143c59dce_caseD_1:
      plVar9 = (longlong *)param_1[1];
      while( true ) {
        if ((int)plVar9[3] < 2) {
          afm_stream_read_string(plVar9);
        }
        *(undefined4 *)(plVar9 + 3) = 0;
        lVar6 = afm_stream_read_one(plVar9);
        if (lVar6 != 0) break;
        lVar8 = lVar10;
        if ((2 < (int)plVar9[3]) || ((int)plVar9[3] < 2)) goto LAB_143c59da9;
      }
      lVar8 = (*plVar9 - lVar6) + -1;
LAB_143c59da9:
      if (lVar6 == 0) goto LAB_143c59dfe;
      uVar4 = FUN_143c5c330(lVar6,lVar8);
      switch(uVar4) {
      case 0:
        local_78[0] = 2;
        iVar3 = FUN_143c5bc40(param_1,local_78,1);
        if (iVar3 == 1) {
          *(undefined4 *)(puVar1 + 0x14) = local_70;
          goto switchD_143c59dce_caseD_1;
        }
        break;
      default:
        goto switchD_143c59dce_caseD_1;
      case 0xe:
        local_78[0] = 2;
        iVar3 = FUN_143c5bc40(param_1,local_78,1);
        if (iVar3 == 1) {
          *(undefined4 *)(puVar1 + 0x18) = local_70;
          goto switchD_143c59dce_caseD_1;
        }
        break;
      case 0x14:
        goto LAB_143c59e3b;
      case 0x1a:
        local_78[0] = 2;
        local_68 = 2;
        local_58 = 2;
        local_48 = 2;
        iVar3 = FUN_143c5bc40(param_1,local_78,4);
        if (iVar3 == 4) {
          *(undefined4 *)(puVar1 + 4) = local_70;
          *(undefined4 *)(puVar1 + 8) = local_60;
          *(undefined4 *)(puVar1 + 0xc) = local_50;
          *(undefined4 *)(puVar1 + 0x10) = local_40;
          goto switchD_143c59dce_caseD_1;
        }
        break;
      case 0x1e:
        local_78[0] = 4;
        iVar3 = FUN_143c5bc40(param_1,local_78,1);
        if (iVar3 == 1) {
          *puVar1 = (undefined1)local_70;
          goto switchD_143c59dce_caseD_1;
        }
        break;
      case 0x28:
        local_88[0] = 3;
        iVar3 = FUN_143c5bc40(param_1,local_88,1);
        if (iVar3 == 1) {
          if ((local_80 & 0xfffffffd) == 0) goto switchD_143c59dce_caseD_1;
          uVar5 = 7;
        }
        break;
      case 0x2d:
        local_98[0] = 3;
        iVar3 = FUN_143c5bc40(param_1,local_98,1);
        if (iVar3 == 1) {
          uVar7 = FUN_143c5be50(param_1,local_90,0x11);
          uVar5 = (uint)uVar7;
          if (uVar5 != 0) {
            return uVar7;
          }
          goto switchD_143c59dce_caseD_1;
        }
        break;
      case 0x31:
        uVar5 = FUN_143c5b450(param_1);
        if (uVar5 == 0) {
          return 0;
        }
      }
LAB_143c59dfe:
      ft_mem_free(uVar2,*(undefined8 *)(puVar1 + 0x20));
      *(undefined8 *)(puVar1 + 0x20) = 0;
      *(undefined4 *)(puVar1 + 0x28) = 0;
      ft_mem_free(uVar2,*(undefined8 *)(puVar1 + 0x30));
      *(undefined8 *)(puVar1 + 0x30) = 0;
      *(undefined4 *)(puVar1 + 0x38) = 0;
      *puVar1 = 0;
      return (ulonglong)uVar5;
    }
    uVar7 = 2;
  }
  return uVar7;
LAB_143c59e3b:
  return 0;
}



// FUNCTION 143c59ff0 FUN_143c59ff0 body=1236 status=ok
// SIG undefined FUN_143c59ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c59ff0(longlong *param_1,longlong param_2,longlong *param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  void *_Dst;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte *pbVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  int *local_e0;
  int local_d8;
  byte *local_d0;
  uint local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  byte *local_a0;
  undefined4 *local_98;
  byte *local_90;
  longlong local_88;
  byte *local_80;
  byte *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar14 = (ulonglong)param_4;
  local_bc = param_4;
  local_b8 = param_2;
  local_b0 = param_3;
  local_a8 = param_1;
  FUN_143c59790(param_1,&local_80);
  if (local_70 == 0) {
    return 3;
  }
  uVar7 = 0;
  iVar4 = *(int *)(param_2 + 0xc);
  local_c8 = 1;
  local_c4 = 0;
  local_90 = local_78;
  pbVar9 = local_80;
  pbVar15 = local_78;
  if (iVar4 == 7) {
    lVar13 = *param_1;
    lVar2 = param_1[2];
    *param_1 = (longlong)(local_80 + 1);
    param_1[2] = (longlong)(local_78 + -1);
    FUN_143c59790(param_1,&local_68);
    *param_1 = lVar13;
    param_1[2] = lVar2;
    if (local_58 != 3) {
      uVar7 = (ulonglong)local_c4;
      goto LAB_143c5a0d9;
    }
    iVar4 = 8;
    uVar11 = local_c8;
  }
  else {
    uVar11 = param_4;
    if (local_70 != 3) goto LAB_143c5a0d9;
  }
  local_c8 = uVar11;
  if (param_4 == 0) {
switchD_143c5a16a_default:
    return 3;
  }
  pbVar9 = local_80 + 1;
  uVar7 = 1;
  pbVar15 = local_78 + -1;
  local_c4 = 1;
  local_90 = pbVar15;
  if (local_c8 == 0) {
    return 0;
  }
LAB_143c5a0d9:
  local_d8 = iVar4 + -1;
  lVar13 = local_b8;
  iVar4 = local_d8;
  do {
    plVar16 = (longlong *)((ulonglong)*(uint *)(lVar13 + 0x18) + local_b0[uVar7]);
    for (local_d0 = pbVar9; local_d0 < pbVar15; local_d0 = local_d0 + 1) {
      bVar1 = *local_d0;
      if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 != 0x25) break;
        for (; ((local_d0 < pbVar15 && (*local_d0 != 0xd)) && (*local_d0 != 10));
            local_d0 = local_d0 + 1) {
        }
      }
    }
    switch(iVar4) {
    case 0:
      pbVar9 = local_d0 + 3;
      if ((((pbVar9 < pbVar15) && (*local_d0 == 0x74)) && (local_d0[1] == 0x72)) &&
         ((local_d0[2] == 0x75 && (*pbVar9 == 0x65)))) {
        local_d0 = local_d0 + 5;
        uVar6 = 1;
      }
      else {
        if ((((local_d0 + 4 < pbVar15) && ((*local_d0 == 0x66 && (local_d0[1] == 0x61)))) &&
            (local_d0[2] == 0x6c)) && ((*pbVar9 == 0x73 && (local_d0[4] == 0x65)))) {
          local_d0 = local_d0 + 6;
        }
        uVar6 = 0;
      }
      break;
    case 1:
      uVar6 = FUN_143c5b3c0(&local_d0,pbVar15);
      break;
    case 2:
      uVar6 = FUN_143c5b0e0(&local_d0,pbVar15,0);
      break;
    case 3:
      uVar6 = FUN_143c5b0e0(&local_d0,pbVar15,3);
      break;
    case 4:
    case 5:
      lVar2 = param_1[4];
      iVar10 = (int)pbVar15 - (int)local_d0;
      pbVar9 = local_d0;
      lVar13 = local_b8;
      if (local_d0 < pbVar15) {
        if (local_70 == 4) {
          uVar11 = iVar10 - 1;
        }
        else {
          if (local_70 != 2) {
            return 3;
          }
          uVar11 = iVar10 - 2;
        }
        pbVar9 = local_d0 + 1;
        if (*plVar16 != 0) {
          ft_mem_free(lVar2);
          *plVar16 = 0;
        }
        _Dst = (void *)FUN_143c271e0(lVar2,uVar11 + 1,&local_c0);
        if (local_c0 != 0) {
          return local_c0;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,pbVar9,(ulonglong)uVar11);
        *(undefined1 *)((ulonglong)uVar11 + (longlong)_Dst) = 0;
        *plVar16 = (longlong)_Dst;
        lVar13 = local_b8;
        iVar4 = local_d8;
      }
      goto LAB_143c5a483;
    case 6:
      local_e8 = local_e8 & 0xffffffff00000000;
      iVar4 = FUN_143c5c510(&local_d0,pbVar15,4,&local_68);
      if (iVar4 < 4) {
        return 3;
      }
      uVar6 = FT_RoundFix(local_68);
      *(undefined4 *)plVar16 = uVar6;
      uVar6 = FT_RoundFix(local_64);
      *(undefined4 *)((longlong)plVar16 + 4) = uVar6;
      uVar6 = FT_RoundFix(local_60);
      *(undefined4 *)(plVar16 + 1) = uVar6;
      uVar6 = FT_RoundFix(local_5c);
      *(undefined4 *)((longlong)plVar16 + 0xc) = uVar6;
      pbVar9 = local_d0;
      iVar4 = local_d8;
      goto LAB_143c5a483;
    case 7:
      local_88 = param_1[4];
      local_e0 = &local_c0;
      uVar11 = (uint)uVar14;
      local_e8 = 0;
      puVar8 = (undefined4 *)FUN_143c27410(local_88,4,0,uVar11 * 4);
      if (local_c0 != 0) {
        return local_c0;
      }
      uVar12 = 0;
      uVar7 = 0;
      local_98 = puVar8;
      do {
        local_e8 = local_e8 & 0xffffffff00000000;
        uVar5 = FUN_143c5c510(&local_d0,pbVar15,uVar14,puVar8 + uVar7);
        if ((int)uVar5 < 0) {
          return 3;
        }
        if (uVar5 < uVar11) {
          return 3;
        }
        for (; local_d0 < pbVar15; local_d0 = local_d0 + 1) {
          bVar1 = *local_d0;
          param_1 = local_a8;
          if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
            if (bVar1 != 0x25) break;
            for (; ((local_d0 < pbVar15 && (*local_d0 != 0xd)) && (*local_d0 != 10));
                local_d0 = local_d0 + 1) {
            }
          }
        }
        uVar12 = uVar12 + 1;
        uVar7 = (ulonglong)((int)uVar7 + uVar11);
        local_a0 = local_d0;
      } while (uVar12 < 4);
      if (uVar11 != 0) {
        uVar12 = uVar11 * 2;
        plVar16 = local_b0;
        puVar17 = puVar8;
        do {
          puVar3 = (undefined4 *)*plVar16;
          uVar6 = FT_RoundFix(*puVar17);
          *puVar3 = uVar6;
          uVar6 = FT_RoundFix(puVar8[uVar12 - uVar11]);
          puVar3[1] = uVar6;
          uVar6 = FT_RoundFix(puVar8[uVar12]);
          puVar3[2] = uVar6;
          uVar6 = FT_RoundFix(puVar8[local_bc + uVar12]);
          uVar12 = uVar12 + 1;
          puVar3[3] = uVar6;
          plVar16 = plVar16 + 1;
          puVar17 = puVar17 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        uVar14 = (ulonglong)local_bc;
        param_1 = local_a8;
        pbVar15 = local_90;
        puVar8 = local_98;
      }
      pbVar9 = local_a0;
      ft_mem_free(local_88,puVar8);
      lVar13 = local_b8;
      iVar4 = local_d8;
      goto LAB_143c5a483;
    default:
      goto switchD_143c5a16a_default;
    }
    pbVar9 = local_d0;
    iVar4 = local_d8;
    if (*(char *)(lVar13 + 0x1c) == '\x01') {
      *(char *)plVar16 = (char)uVar6;
    }
    else if (*(char *)(lVar13 + 0x1c) == '\x02') {
      *(short *)plVar16 = (short)uVar6;
    }
    else {
      *(undefined4 *)plVar16 = uVar6;
    }
LAB_143c5a483:
    local_c8 = local_c8 - 1;
    local_c4 = local_c4 + 1;
    uVar7 = (ulonglong)local_c4;
    if (local_c8 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 143c5a4f0 FUN_143c5a4f0 body=332 status=ok
// SIG undefined FUN_143c5a4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c5a4f0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  uint local_398 [2];
  undefined8 local_390;
  undefined8 uStack_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  int iStack_378;
  uint uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_358 [96];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  local_390 = *param_2;
  iVar3 = 0;
  local_380 = *(undefined4 *)(param_2 + 2);
  uStack_37c = *(undefined4 *)((longlong)param_2 + 0x14);
  iStack_378 = *(int *)(param_2 + 3);
  uStack_374 = *(uint *)((longlong)param_2 + 0x1c);
  uStack_388._0_4_ = (undefined4)param_2[1];
  uStack_388 = CONCAT44(2,(undefined4)uStack_388);
  local_370 = *(undefined4 *)(param_2 + 4);
  uStack_36c = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_368 = *(undefined4 *)(param_2 + 5);
  uStack_364 = *(undefined4 *)((longlong)param_2 + 0x2c);
  if ((*(int *)((longlong)param_2 + 0xc) == 10) || (*(int *)((longlong)param_2 + 0xc) == 7)) {
    uStack_388 = CONCAT44(3,(undefined4)uStack_388);
  }
  FUN_143c598e0(local_370,local_358,0x20,local_398);
  if ((int)local_398[0] < 0) {
    iVar3 = 0xa2;
  }
  else {
    uVar4 = local_398[0];
    if (*(uint *)(param_2 + 4) < local_398[0]) {
      uVar4 = *(uint *)(param_2 + 4);
    }
    uVar1 = *param_1;
    uVar2 = param_1[2];
    if ((*(int *)((longlong)param_2 + 0xc) != 7) && (*(uint *)((longlong)param_2 + 0x24) != 0)) {
      *(char *)((ulonglong)*(uint *)((longlong)param_2 + 0x24) + *param_3) = (char)uVar4;
    }
    puVar5 = local_358;
    for (; 0 < (int)uVar4; uVar4 = uVar4 - 1) {
      *param_1 = *puVar5;
      param_1[2] = puVar5[1];
      local_3a8 = 0;
      iVar3 = FUN_143c59ff0(param_1,&local_390,param_3,param_4);
      if (iVar3 != 0) break;
      iStack_378 = iStack_378 + (uStack_374 & 0xff);
      puVar5 = puVar5 + 3;
    }
    *param_1 = uVar1;
    param_1[2] = uVar2;
  }
  return iVar3;
}



// FUNCTION 143c5a640 ps_parser_to_int body=31 status=ok
// SIG undefined ps_parser_to_int(void)

void ps_parser_to_int(longlong param_1)

{
  FUN_143c595a0();
  FUN_143c5b3c0(param_1,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 143c5a660 FUN_143c5a660 body=153 status=ok
// SIG undefined FUN_143c5a660(void)

undefined8
FUN_143c5a660(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             char param_5)

{
  undefined4 uVar1;
  char *local_res8;
  
  FUN_143c595a0();
  local_res8 = (char *)*param_1;
  if (local_res8 < (char *)param_1[2]) {
    if (param_5 != '\0') {
      if (*local_res8 != '<') {
        return 3;
      }
      local_res8 = local_res8 + 1;
    }
    uVar1 = FUN_143c5aee0(&local_res8,(char *)param_1[2],param_2,param_3);
    *param_4 = uVar1;
    if (param_5 != '\0') {
      if ((local_res8 < (char *)param_1[2]) && (*local_res8 != '>')) {
        return 3;
      }
      local_res8 = local_res8 + 1;
    }
    *param_1 = local_res8;
  }
  return 0;
}



// FUNCTION 143c5a700 ps_parser_to_fixed body=45 status=ok
// SIG undefined ps_parser_to_fixed(void)

void ps_parser_to_fixed(longlong param_1,undefined4 param_2)

{
  FUN_143c595a0();
  FUN_143c5b0e0(param_1,*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}



// FUNCTION 143c5a730 ps_parser_to_coord_array body=61 status=ok
// SIG undefined ps_parser_to_coord_array(void)

void ps_parser_to_coord_array(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_143c595a0();
  FUN_143c5c3d0(param_1,*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return;
}



// FUNCTION 143c5a770 FUN_143c5a770 body=79 status=ok
// SIG undefined FUN_143c5a770(void)

void FUN_143c5a770(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_143c595a0();
  FUN_143c5c510(param_1,*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}



// FUNCTION 143c5a830 FUN_143c5a830 body=216 status=ok
// SIG undefined FUN_143c5a830(void)

void FUN_143c5a830(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  longlong lVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0x98);
  if (param_4 != 0) {
    lVar1 = **(longlong **)(param_4 + 0xf0);
    param_1[3] = lVar1;
    param_1[4] = lVar1 + 0x18;
    param_1[5] = lVar1 + 0x60;
    FT_GlyphLoader_Rewind();
    param_1[0xd] = *(undefined8 *)(param_3 + 0x38);
    param_1[0xc] = 0;
    if (param_5 != '\0') {
      param_1[0xc] = *(undefined8 *)(*(longlong *)(param_4 + 0xf0) + 0x28);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xe] = FUN_143c5a830;
  param_1[0xf] = &LAB_143c59460;
  param_1[0x10] = &LAB_143c5a910;
  param_1[0x11] = FUN_143c5a940;
  param_1[0x12] = FUN_143c5a9d0;
  param_1[0x13] = FUN_143c5aa80;
  param_1[0x14] = t1_builder_start_point;
  param_1[0x15] = FUN_143c4aab0;
  return;
}



// FUNCTION 143c5a940 FUN_143c5a940 body=130 status=ok
// SIG undefined FUN_143c5a940(void)

void FUN_143c5a940(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    sVar2 = *(short *)(lVar3 + 2);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar3 + 8) + (longlong)sVar2 * 8);
    iVar5 = FT_RoundFix(param_2);
    *piVar1 = iVar5 >> 0x10;
    iVar5 = FT_RoundFix(param_3);
    piVar1[1] = iVar5 >> 0x10;
    *(char *)(lVar4 + sVar2) = (param_4 == '\0') + '\x01';
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return;
}



// FUNCTION 143c5a9d0 FUN_143c5a9d0 body=171 status=ok
// SIG undefined FUN_143c5a9d0(void)

ulonglong FUN_143c5a9d0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar3 + 8) < (uint)(*(short *)(lVar3 + 0x62) + 1 + (int)*(short *)(lVar3 + 0x1a))) {
    uVar6 = FUN_143c20e90(lVar3,1);
    uVar7 = uVar6 & 0xffffffff;
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  else {
    uVar7 = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    sVar2 = *(short *)(lVar3 + 2);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar3 + 8) + (longlong)sVar2 * 8);
    iVar5 = FT_RoundFix(param_2);
    *piVar1 = iVar5 >> 0x10;
    iVar5 = FT_RoundFix(param_3);
    piVar1[1] = iVar5 >> 0x10;
    *(undefined1 *)(lVar4 + sVar2) = 1;
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return uVar7;
}



// FUNCTION 143c5aa80 FUN_143c5aa80 body=127 status=ok
// SIG undefined FUN_143c5aa80(void)

undefined8 FUN_143c5aa80(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  psVar1 = *(short **)(param_1 + 0x28);
  if (psVar1 == (short *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(uint *)(lVar2 + 0xc) <
        (uint)(*(short *)(lVar2 + 0x60) + 1 + (int)*(short *)(lVar2 + 0x18))) {
      uVar3 = FUN_143c20e90(lVar2,0,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    else {
      uVar3 = 0;
    }
    if (0 < *psVar1) {
      *(short *)(*(longlong *)(psVar1 + 0xc) + -2 + (longlong)*psVar1 * 2) = psVar1[1] + -1;
    }
    *psVar1 = *psVar1 + 1;
    return uVar3;
  }
  *psVar1 = *psVar1 + 1;
  return 0;
}



// FUNCTION 143c5ab00 t1_builder_start_point body=92 status=ok
// SIG undefined t1_builder_start_point(void)

undefined8 t1_builder_start_point(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x58) == 3) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x58) = 3;
  uVar1 = FUN_143c5aa80();
  if ((int)uVar1 == 0) {
    uVar1 = FUN_143c5a9d0(param_1,param_2,param_3);
  }
  return uVar1;
}



// FUNCTION 143c5abe0 t1_cmap_std_char_index body=128 status=ok
// SIG undefined t1_cmap_std_char_index(void)

ulonglong t1_cmap_std_char_index(longlong param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 < 0x100) {
    pcVar3 = (char *)(**(code **)(param_1 + 0x20))
                               (*(undefined2 *)
                                 (*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 2));
    uVar7 = 0;
    if (*(uint *)(param_1 + 0x28) != 0) {
      do {
        pcVar4 = *(char **)(*(longlong *)(param_1 + 0x30) + uVar7 * 8);
        if ((pcVar4 != (char *)0x0) && (*pcVar4 == *pcVar3)) {
          lVar5 = (longlong)pcVar3 - (longlong)pcVar4;
          do {
            cVar1 = *pcVar4;
            cVar2 = pcVar4[lVar5];
            if (cVar1 != cVar2) break;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            return uVar7;
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0x28));
    }
  }
  return 0;
}



// FUNCTION 143c5ac60 FUN_143c5ac60 body=219 status=ok
// SIG undefined FUN_143c5ac60(void)

ulonglong FUN_143c5ac60(longlong param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar3 = *param_2;
  uVar6 = 0;
  do {
    uVar3 = uVar3 + 1;
    if (0xff < uVar3) {
      *param_2 = 0;
      return uVar6;
    }
    uVar7 = 0;
    uVar6 = uVar7;
    if (uVar3 < 0x100) {
      pcVar4 = (char *)(**(code **)(param_1 + 0x20))
                                 (*(undefined2 *)
                                   (*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 2));
      uVar10 = 0;
      if (*(uint *)(param_1 + 0x28) != 0) {
        do {
          pcVar5 = *(char **)(*(longlong *)(param_1 + 0x30) + uVar10 * 8);
          if ((pcVar5 != (char *)0x0) && (*pcVar5 == *pcVar4)) {
            lVar8 = (longlong)pcVar4 - (longlong)pcVar5;
            do {
              cVar1 = *pcVar5;
              cVar2 = pcVar5[lVar8];
              if (cVar1 != cVar2) break;
              pcVar5 = pcVar5 + 1;
            } while (cVar2 != '\0');
            uVar6 = uVar10;
            if (cVar1 == cVar2) break;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          uVar6 = uVar7;
        } while (uVar9 < *(uint *)(param_1 + 0x28));
      }
    }
    if ((int)uVar6 != 0) {
      *param_2 = uVar3;
      return uVar6;
    }
  } while( true );
}



// FUNCTION 143c5ae20 FUN_143c5ae20 body=91 status=ok
// SIG undefined FUN_143c5ae20(void)

short FUN_143c5ae20(longlong param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar2 = *param_2 + 1;
  if (*param_2 + 1 < uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = *(int *)(param_1 + 0x1c) + uVar3;
  if (uVar2 < uVar3) {
    do {
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 2);
      if (sVar1 != 0) {
        *param_2 = uVar2;
        return sVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  *param_2 = 0;
  return 0;
}



// FUNCTION 143c5ae80 FUN_143c5ae80 body=61 status=ok
// SIG undefined FUN_143c5ae80(void)

void FUN_143c5ae80(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  (**(code **)(*(longlong *)(lVar1 + 0x290) + 8))
            (*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar1 + 0x238),&LAB_143c5c670,0,
             lVar1);
  return;
}



// FUNCTION 143c5aee0 FUN_143c5aee0 body=220 status=ok
// SIG undefined FUN_143c5aee0(void)

ulonglong FUN_143c5aee0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_1;
  uVar4 = 0;
  uVar6 = 1;
  if (param_2 <= uVar2) {
    return 0;
  }
  uVar3 = (ulonglong)(uint)((int)param_2 - (int)uVar2);
  uVar5 = param_4 * 2;
  if (uVar3 < (ulonglong)(param_4 * 2)) {
    uVar5 = uVar3;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      bVar1 = *(byte *)(uVar4 + uVar2);
      uVar7 = uVar3;
      if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if ((0x7f < bVar1) || (0xf < (uint)(int)(char)(&DAT_145d26c20)[bVar1 & 0x7f])) break;
        uVar6 = uVar6 << 4 | (int)(char)(&DAT_145d26c20)[bVar1 & 0x7f];
        if ((uVar6 >> 8 & 1) != 0) {
          uVar7 = (ulonglong)((int)uVar3 + 1);
          *(char *)(uVar3 + param_3) = (char)uVar6;
          uVar6 = 1;
        }
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar7;
    } while (uVar4 < uVar5);
    uVar3 = uVar7;
    if (uVar6 != 1) {
      uVar3 = (ulonglong)((int)uVar7 + 1);
      *(char *)(uVar7 + param_3) = (char)uVar6 << 4;
    }
  }
  *param_1 = uVar4 + uVar2;
  return uVar3;
}



// FUNCTION 143c5afc0 FUN_143c5afc0 body=276 status=ok
// SIG undefined FUN_143c5afc0(void)

int FUN_143c5afc0(undefined8 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  pbVar6 = (byte *)*param_1;
  iVar5 = 0;
  bVar7 = false;
  bVar3 = false;
  if ((param_2 <= pbVar6) || (0x22 < param_3 - 2U)) {
    return 0;
  }
  if ((*pbVar6 - 0x2b & 0xfd) == 0) {
    bVar7 = *pbVar6 == 0x2d;
    pbVar6 = pbVar6 + 1;
    if (pbVar6 == param_2) {
      return 0;
    }
  }
  for (; pbVar6 < param_2; pbVar6 = pbVar6 + 1) {
    bVar1 = *pbVar6;
    if ((((bVar1 < 0x21) && ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
        (0x7f < bVar1)) ||
       ((cVar2 = (&DAT_145d26c20)[bVar1 & 0x7f], cVar2 < '\0' || (param_3 <= cVar2)))) break;
    iVar4 = (int)(0x7fffffff / (longlong)param_3);
    if ((iVar4 < iVar5) || ((iVar5 == iVar4 && ((char)(0x7fffffff % (longlong)param_3) < cVar2)))) {
      bVar3 = true;
    }
    else {
      iVar5 = iVar5 * param_3 + (int)cVar2;
    }
  }
  *param_1 = pbVar6;
  if (bVar3) {
    iVar5 = 0x7fffffff;
  }
  if (bVar7) {
    iVar5 = -iVar5;
  }
  return iVar5;
}



// FUNCTION 143c5b0e0 FUN_143c5b0e0 body=727 status=ok
// SIG undefined FUN_143c5b0e0(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_143c5b0e0(ulonglong *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  byte *local_res20;
  
  pbVar7 = (byte *)*param_1;
  iVar5 = 0;
  bVar3 = false;
  bVar10 = false;
  iVar6 = 1;
  if (param_2 <= pbVar7) {
    return 0;
  }
  if ((*pbVar7 - 0x2b & 0xfd) == 0) {
    bVar10 = *pbVar7 == 0x2d;
    pbVar7 = pbVar7 + 1;
    if (pbVar7 == param_2) {
      return 0;
    }
  }
  local_res20 = pbVar7;
  if (*pbVar7 != 0x2e) {
    iVar5 = FUN_143c5b3c0(&local_res20,param_2);
    if (local_res20 == pbVar7) {
      return 0;
    }
    if (iVar5 < 0x8000) {
      iVar5 = iVar5 << 0x10;
    }
    else {
      bVar3 = true;
    }
  }
  pbVar7 = local_res20;
  iVar9 = 0;
  if ((local_res20 < param_2) && (iVar9 = 0, iVar8 = 0, *local_res20 == 0x2e)) {
    while ((iVar9 = iVar8, pbVar7 = pbVar7 + 1, pbVar7 < param_2 &&
           ((((bVar2 = *pbVar7, 0x20 < bVar2 ||
              ((0x100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) && (bVar2 < 0x80)) &&
            ((byte)(&DAT_145d26c20)[bVar2 & 0x7f] < 10))))) {
      iVar8 = iVar9;
      if ((iVar6 < 0xccccccc) && (iVar9 < 0xccccccc)) {
        iVar8 = (int)(char)(&DAT_145d26c20)[bVar2 & 0x7f] + iVar9 * 10;
        if ((iVar5 == 0) && (0 < param_3)) {
          param_3 = param_3 + -1;
        }
        else {
          iVar6 = iVar6 * 10;
        }
      }
    }
  }
  pbVar1 = pbVar7 + 1;
  if ((pbVar1 < param_2) && ((*pbVar7 + 0xbb & 0xdf) == 0)) {
    local_res20 = pbVar1;
    iVar8 = FUN_143c5afc0(&local_res20,param_2,10);
    if (local_res20 == pbVar1) {
      return 0;
    }
    if ((local_res20 < param_2) && (*local_res20 == 0x23)) {
      pbVar7 = local_res20 + 1;
      local_res20 = pbVar7;
      iVar8 = FUN_143c5afc0(&local_res20,param_2,iVar8);
      if (local_res20 == pbVar7) {
        return 0;
      }
    }
    if (pbVar1 == local_res20) {
      return 0;
    }
    pbVar7 = local_res20;
    if (iVar8 < 0x3e9) {
      if (iVar8 < -1000) {
        bVar4 = true;
        goto LAB_143c5b2a1;
      }
      param_3 = param_3 + iVar8;
    }
    else {
      bVar3 = true;
    }
  }
  bVar4 = false;
LAB_143c5b2a1:
  *param_1 = (ulonglong)pbVar7;
  if ((iVar5 == 0) && (iVar9 == 0)) {
    return 0;
  }
  if (bVar3) {
LAB_143c5b395:
    iVar5 = 0x7fffffff;
  }
  else {
    if (bVar4) {
      return 0;
    }
    for (; 0 < param_3; param_3 = param_3 + -1) {
      if (0xccccccb < iVar5) goto LAB_143c5b395;
      iVar5 = iVar5 * 10;
      if (iVar9 < 0xccccccc) {
        iVar9 = iVar9 * 10;
      }
      else {
        if (iVar6 == 1) goto LAB_143c5b395;
        iVar6 = iVar6 / 10;
      }
    }
    for (; param_3 < 0; param_3 = param_3 + 1) {
      iVar5 = iVar5 / 10;
      if (iVar6 < 0xccccccc) {
        iVar6 = iVar6 * 10;
      }
      else {
        iVar9 = iVar9 / 10;
      }
      if ((iVar5 == 0) && (iVar9 == 0)) {
        return 0;
      }
    }
    if (iVar9 != 0) {
      iVar6 = FUN_143c20070(iVar9,iVar6);
      iVar5 = iVar5 + iVar6;
    }
  }
  if (bVar10) {
    return -iVar5;
  }
  return iVar5;
}



// FUNCTION 143c5b3c0 FUN_143c5b3c0 body=140 status=ok
// SIG undefined FUN_143c5b3c0(void)

ulonglong FUN_143c5b3c0(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  char *local_res8;
  
  pcVar2 = (char *)*param_1;
  local_res8 = pcVar2;
  uVar1 = FUN_143c5afc0(&local_res8,param_2,10);
  if (local_res8 == pcVar2) {
    return 0;
  }
  if ((local_res8 < param_2) && (*local_res8 == '#')) {
    pcVar2 = local_res8 + 1;
    local_res8 = pcVar2;
    uVar1 = FUN_143c5afc0(&local_res8,param_2,uVar1 & 0xffffffff);
    if (local_res8 == pcVar2) {
      return 0;
    }
  }
  *param_1 = local_res8;
  return uVar1;
}



// FUNCTION 143c5b450 FUN_143c5b450 body=534 status=ok
// SIG undefined FUN_143c5b450(void)

undefined8 FUN_143c5b450(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar8 = (byte *)0x0;
  do {
    plVar2 = *(longlong **)(param_1 + 8);
    pbVar3 = (byte *)plVar2[2];
LAB_143c5b478:
    if ((int)plVar2[3] < 2) {
      if ((int)plVar2[3] < 1) {
        do {
          pbVar9 = (byte *)*plVar2;
          if (pbVar3 <= pbVar9) goto LAB_143c5b4e5;
          bVar1 = *pbVar9;
          *plVar2 = (longlong)(pbVar9 + 1);
        } while ((bVar1 == 0x20) || (bVar1 == 9));
        if ((bVar1 == 0xd) || (bVar1 == 10)) {
LAB_143c5b532:
          *(undefined4 *)(plVar2 + 3) = 2;
          goto LAB_143c5b4ec;
        }
        if (bVar1 != 0x3b) goto LAB_143c5b4db;
        *(undefined4 *)(plVar2 + 3) = 1;
      }
      while (pbVar9 = (byte *)*plVar2, pbVar9 < pbVar3) {
        bVar1 = *pbVar9;
        *plVar2 = (longlong)(pbVar9 + 1);
        if ((bVar1 == 0xd) || (bVar1 == 10)) goto LAB_143c5b532;
LAB_143c5b4db:
        if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
      }
LAB_143c5b4e5:
      *(undefined4 *)(plVar2 + 3) = 3;
    }
LAB_143c5b4ec:
    *(undefined4 *)(plVar2 + 3) = 0;
    do {
      pbVar9 = (byte *)*plVar2;
      if (pbVar3 <= pbVar9) goto LAB_143c5b5b6;
      bVar1 = *pbVar9;
      *plVar2 = (longlong)(pbVar9 + 1);
    } while ((bVar1 == 0x20) || (bVar1 == 9));
    uVar6 = (uint)bVar1;
    if ((uVar6 == 0xd) || (uVar6 == 10)) {
      *(undefined4 *)(plVar2 + 3) = 2;
      pbVar9 = pbVar8;
LAB_143c5b5c0:
      pbVar7 = pbVar8;
      if ((2 < (int)plVar2[3]) || ((int)plVar2[3] < 2)) goto LAB_143c5b5d4;
      goto LAB_143c5b478;
    }
    if (uVar6 == 0x3b) {
      *(undefined4 *)(plVar2 + 3) = 1;
      pbVar9 = pbVar8;
      goto LAB_143c5b5c0;
    }
    if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) {
LAB_143c5b5b6:
      *(undefined4 *)(plVar2 + 3) = 3;
      pbVar9 = pbVar8;
      goto LAB_143c5b5c0;
    }
    while (pbVar7 = (byte *)*plVar2, pbVar7 < pbVar3) {
      bVar1 = *pbVar7;
      *plVar2 = (longlong)(pbVar7 + 1);
      if ((bVar1 == 0x20) || (bVar1 == 9)) goto LAB_143c5b58b;
      uVar6 = (uint)bVar1;
      if ((uVar6 == 0xd) || (uVar6 == 10)) {
        *(undefined4 *)(plVar2 + 3) = 2;
        goto LAB_143c5b58b;
      }
      if (uVar6 == 0x3b) {
        *(undefined4 *)(plVar2 + 3) = 1;
        goto LAB_143c5b58b;
      }
      if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) break;
    }
    *(undefined4 *)(plVar2 + 3) = 3;
LAB_143c5b58b:
    if (pbVar9 == (byte *)0x0) goto LAB_143c5b5c0;
    pbVar7 = (byte *)((*plVar2 - (longlong)pbVar9) + -1);
LAB_143c5b5d4:
    if (pbVar9 == (byte *)0x0) {
      return 0xa0;
    }
    uVar4 = FUN_143c5c330(pbVar9,pbVar7);
    switch(uVar4) {
    case 0x14:
    case 0x15:
      return 0;
    default:
      return 0xa0;
    case 0x32:
    case 0x33:
      uVar5 = FUN_143c5b6c0(param_1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      break;
    case 0x35:
      uVar5 = FUN_143c5b9c0(param_1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      break;
    case 0x4b:
      break;
    }
  } while( true );
}



// FUNCTION 143c5b6c0 FUN_143c5b6c0 body=679 status=ok
// SIG undefined FUN_143c5b6c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c5b6c0(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int *local_a0;
  int local_98 [2];
  undefined4 local_90 [2];
  int local_88;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar2 = param_1[2];
  iVar13 = -1;
  local_90[0] = 3;
  iVar4 = FUN_143c5bc40(param_1,local_90,1);
  if ((iVar4 == 1) && (-1 < local_88)) {
    *(int *)(lVar2 + 0x38) = local_88;
    if (local_88 != 0) {
      local_a0 = local_98;
      local_a8 = 0;
      uVar7 = FUN_143c27410(*param_1,0x10,0);
      *(undefined8 *)(lVar2 + 0x30) = uVar7;
      if (local_98[0] != 0) {
        return local_98[0];
      }
    }
    lVar14 = -0x10;
    do {
      plVar12 = (longlong *)param_1[1];
LAB_143c5b780:
      if ((int)plVar12[3] < 2) {
        if (0 < (int)plVar12[3]) goto LAB_143c5b7d4;
        do {
          pbVar3 = (byte *)*plVar12;
          if ((byte *)plVar12[2] <= pbVar3) goto LAB_143c5b7fd;
          bVar1 = *pbVar3;
          *plVar12 = (longlong)(pbVar3 + 1);
        } while ((bVar1 == 0x20) || (bVar1 == 9));
        uVar9 = (uint)bVar1;
        if ((uVar9 == 0xd) || (uVar9 == 10)) {
LAB_143c5b82d:
          *(undefined4 *)(plVar12 + 3) = 2;
          goto LAB_143c5b805;
        }
        if (uVar9 == 0x3b) {
          *(undefined4 *)(plVar12 + 3) = 1;
LAB_143c5b7d4:
          while (pbVar3 = (byte *)*plVar12, pbVar3 < (byte *)plVar12[2]) {
            bVar1 = *pbVar3;
            *plVar12 = (longlong)(pbVar3 + 1);
            if ((bVar1 == 0xd) || (bVar1 == 10)) goto LAB_143c5b82d;
            if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
          }
        }
        else if ((uVar9 != 0xffffffff) && (bVar1 != 0x1a)) goto LAB_143c5b7d4;
LAB_143c5b7fd:
        *(undefined4 *)(plVar12 + 3) = 3;
      }
LAB_143c5b805:
      *(undefined4 *)(plVar12 + 3) = 0;
      lVar8 = afm_stream_read_one(plVar12);
      if (lVar8 == 0) {
        lVar10 = 0;
        if ((2 < (int)plVar12[3]) || ((int)plVar12[3] < 2)) goto LAB_143c5b849;
        goto LAB_143c5b780;
      }
      lVar10 = (*plVar12 - lVar8) + -1;
LAB_143c5b849:
      if (lVar8 == 0) {
        return 0xa0;
      }
      iVar4 = FUN_143c5c330(lVar8,lVar10);
      switch(iVar4) {
      case 0x14:
      case 0x15:
      case 0x16:
        *(uint *)(lVar2 + 0x38) = iVar13 + 1U;
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar2 + 0x30),(ulonglong)(iVar13 + 1U),0x10,
                   (_PtFuncCompare *)&LAB_143c42e40);
        return 0;
      default:
        goto switchD_143c5b87f_caseD_17;
      case 0x22:
      case 0x24:
      case 0x25:
        iVar13 = iVar13 + 1;
        lVar14 = lVar14 + 0x10;
        if (*(int *)(lVar2 + 0x38) <= iVar13) {
          return 0xa0;
        }
        local_78[0] = 5;
        local_68 = 5;
        puVar11 = (undefined4 *)(*(longlong *)(lVar2 + 0x30) + lVar14);
        local_58 = 3;
        local_48 = 3;
        iVar5 = FUN_143c5bc40(param_1,local_78,4);
        if (iVar5 < 3) {
          return 0xa0;
        }
        *puVar11 = local_70;
        puVar11[1] = local_60;
        if (iVar4 == 0x25) {
          puVar11[2] = 0;
          puVar11[3] = local_50;
        }
        else {
          puVar11[2] = local_50;
          if ((iVar4 != 0x22) || (uVar6 = local_40, iVar5 != 4)) {
            uVar6 = 0;
          }
          puVar11[3] = uVar6;
        }
        break;
      case 0x4b:
        break;
      }
    } while( true );
  }
switchD_143c5b87f_caseD_17:
  return 0xa0;
}



// FUNCTION 143c5b9c0 FUN_143c5b9c0 body=618 status=ok
// SIG undefined FUN_143c5b9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c5b9c0(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int *local_a0;
  int local_98 [2];
  undefined4 local_90 [2];
  int local_88;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar2 = param_1[2];
  iVar11 = -1;
  local_90[0] = 3;
  iVar4 = FUN_143c5bc40(param_1,local_90,1);
  if ((iVar4 == 1) && (-1 < local_88)) {
    *(int *)(lVar2 + 0x28) = local_88;
    if (local_88 != 0) {
      local_a0 = local_98;
      local_a8 = 0;
      uVar5 = FUN_143c27410(*param_1,0x14,0);
      *(undefined8 *)(lVar2 + 0x20) = uVar5;
      if (local_98[0] != 0) {
        return local_98[0];
      }
    }
    lVar10 = -0x14;
LAB_143c5ba70:
    do {
      plVar12 = (longlong *)param_1[1];
LAB_143c5ba74:
      if ((int)plVar12[3] < 2) {
        if (0 < (int)plVar12[3]) goto LAB_143c5bac4;
        do {
          pbVar3 = (byte *)*plVar12;
          if ((byte *)plVar12[2] <= pbVar3) goto LAB_143c5baed;
          bVar1 = *pbVar3;
          *plVar12 = (longlong)(pbVar3 + 1);
        } while ((bVar1 == 0x20) || (bVar1 == 9));
        uVar7 = (uint)bVar1;
        if ((uVar7 == 0xd) || (uVar7 == 10)) {
LAB_143c5bb1d:
          *(undefined4 *)(plVar12 + 3) = 2;
          goto LAB_143c5baf5;
        }
        if (uVar7 == 0x3b) {
          *(undefined4 *)(plVar12 + 3) = 1;
LAB_143c5bac4:
          while (pbVar3 = (byte *)*plVar12, pbVar3 < (byte *)plVar12[2]) {
            bVar1 = *pbVar3;
            *plVar12 = (longlong)(pbVar3 + 1);
            if ((bVar1 == 0xd) || (bVar1 == 10)) goto LAB_143c5bb1d;
            if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
          }
        }
        else if ((uVar7 != 0xffffffff) && (bVar1 != 0x1a)) goto LAB_143c5bac4;
LAB_143c5baed:
        *(undefined4 *)(plVar12 + 3) = 3;
      }
LAB_143c5baf5:
      *(undefined4 *)(plVar12 + 3) = 0;
      lVar6 = afm_stream_read_one(plVar12);
      if (lVar6 == 0) {
        lVar8 = 0;
        if ((2 < (int)plVar12[3]) || ((int)plVar12[3] < 2)) goto LAB_143c5bb39;
        goto LAB_143c5ba74;
      }
      lVar8 = (*plVar12 - lVar6) + -1;
LAB_143c5bb39:
      if (lVar6 == 0) {
        return 0xa0;
      }
      iVar4 = FUN_143c5c330(lVar6,lVar8);
      if (iVar4 < 0x14) {
        return 0xa0;
      }
      if ((iVar4 < 0x16) || (iVar4 == 0x17)) {
        *(int *)(lVar2 + 0x28) = iVar11 + 1;
        return 0;
      }
      if (iVar4 == 0x38) {
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 0x14;
        if (*(int *)(lVar2 + 0x28) <= iVar11) {
          return 0xa0;
        }
        local_78[0] = 3;
        local_68 = 2;
        puVar9 = (undefined4 *)(*(longlong *)(lVar2 + 0x20) + lVar10);
        local_58 = 2;
        local_48 = 2;
        local_38 = 2;
        iVar4 = FUN_143c5bc40(param_1,local_78,5);
        if (iVar4 != 5) {
          return 0xa0;
        }
        *puVar9 = local_70;
        puVar9[1] = local_60;
        puVar9[2] = local_50;
        puVar9[3] = local_40;
        puVar9[4] = local_30;
        goto LAB_143c5ba70;
      }
    } while (iVar4 == 0x4b);
  }
  return 0xa0;
}



// FUNCTION 143c5bc40 FUN_143c5bc40 body=320 status=ok
// SIG undefined FUN_143c5bc40(void)

ulonglong FUN_143c5bc40(longlong param_1,uint *param_2,int param_3)

{
  byte bVar1;
  longlong *plVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  IMAGE_DOS_HEADER *pIVar7;
  uint uVar8;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (5 < param_3) {
    return 0;
  }
  uVar8 = 0;
  if (0 < param_3) {
    lVar5 = 0;
    do {
      pIVar7 = &IMAGE_DOS_HEADER_140000000;
      if (*param_2 == 0) {
        afm_stream_skip_spaces();
        if ((int)plVar2[3] < 2) {
          lVar6 = *plVar2 + -1;
          while (pbVar3 = (byte *)*plVar2, pbVar3 < (byte *)plVar2[2]) {
            bVar1 = *pbVar3;
            *plVar2 = (longlong)(pbVar3 + 1);
            if ((bVar1 == 0xd) || (bVar1 == 10)) {
              *(undefined4 *)(plVar2 + 3) = 2;
              goto LAB_143c5bd15;
            }
            if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
          }
          *(undefined4 *)(plVar2 + 3) = 3;
        }
        else {
          lVar6 = 0;
        }
      }
      else {
        lVar6 = afm_stream_read_one(plVar2);
        pIVar7 = &IMAGE_DOS_HEADER_140000000;
      }
LAB_143c5bd15:
      if (lVar6 == 0) break;
      if (*param_2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x000143c5bd3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(pIVar7->e_magic +
                          *(uint *)(pIVar7[0x1d43d].e_program + (longlong)(int)*param_2 * 4 + 0x24))
                )(pIVar7->e_magic +
                  *(uint *)(pIVar7[0x1d43d].e_program + (longlong)(int)*param_2 * 4 + 0x24));
        return uVar4;
      }
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + 1;
      param_2 = param_2 + 4;
    } while (lVar5 < param_3);
  }
  return (ulonglong)uVar8;
}



// FUNCTION 143c5be50 FUN_143c5be50 body=853 status=ok
// SIG undefined FUN_143c5be50(void)

undefined8 FUN_143c5be50(longlong param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar8 = (byte *)0x0;
joined_r0x000143c5be6c:
  if (0 < param_2) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    param_2 = param_2 + -1;
    pbVar3 = (byte *)puVar2[2];
LAB_143c5be80:
    do {
      if (*(int *)(puVar2 + 3) < 2) {
        if (*(int *)(puVar2 + 3) < 1) {
          do {
            pbVar9 = (byte *)*puVar2;
            if (pbVar3 <= pbVar9) goto LAB_143c5befd;
            bVar1 = *pbVar9;
            *puVar2 = pbVar9 + 1;
          } while ((bVar1 == 0x20) || (bVar1 == 9));
          if ((bVar1 == 0xd) || (bVar1 == 10)) {
LAB_143c5bfc6:
            *(undefined4 *)(puVar2 + 3) = 2;
            goto LAB_143c5bf04;
          }
          if (bVar1 != 0x3b) goto LAB_143c5bef3;
          *(undefined4 *)(puVar2 + 3) = 1;
        }
        while (pbVar9 = (byte *)*puVar2, pbVar9 < pbVar3) {
          bVar1 = *pbVar9;
          *puVar2 = pbVar9 + 1;
          if ((bVar1 == 0xd) || (bVar1 == 10)) goto LAB_143c5bfc6;
LAB_143c5bef3:
          if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
        }
LAB_143c5befd:
        *(undefined4 *)(puVar2 + 3) = 3;
      }
LAB_143c5bf04:
      *(undefined4 *)(puVar2 + 3) = 0;
      do {
        pbVar9 = (byte *)*puVar2;
        if (pbVar3 <= pbVar9) goto LAB_143c5c0ce;
        bVar1 = *pbVar9;
        *puVar2 = pbVar9 + 1;
      } while ((bVar1 == 0x20) || (bVar1 == 9));
      uVar6 = (uint)bVar1;
      if ((uVar6 == 0xd) || (uVar6 == 10)) {
        *(undefined4 *)(puVar2 + 3) = 2;
        goto LAB_143c5be80;
      }
      if (uVar6 == 0x3b) {
        *(undefined4 *)(puVar2 + 3) = 1;
        return 0xa0;
      }
      if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) {
LAB_143c5c0ce:
        *(undefined4 *)(puVar2 + 3) = 3;
        return 0xa0;
      }
      while (pbVar7 = (byte *)*puVar2, pbVar7 < pbVar3) {
        bVar1 = *pbVar7;
        *puVar2 = pbVar7 + 1;
        if ((bVar1 == 0x20) || (bVar1 == 9)) goto LAB_143c5bf9b;
        uVar6 = (uint)bVar1;
        if ((uVar6 == 0xd) || (uVar6 == 10)) {
          *(undefined4 *)(puVar2 + 3) = 2;
          goto LAB_143c5bf9b;
        }
        if (uVar6 == 0x3b) {
          *(undefined4 *)(puVar2 + 3) = 1;
          goto LAB_143c5bf9b;
        }
        if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) break;
      }
      *(undefined4 *)(puVar2 + 3) = 3;
LAB_143c5bf9b:
      if (pbVar9 != (byte *)0x0) goto joined_r0x000143c5be6c;
      if (2 < *(int *)(puVar2 + 3)) {
        return 0xa0;
      }
      if (*(int *)(puVar2 + 3) < 2) {
        return 0xa0;
      }
    } while( true );
  }
  do {
    plVar4 = *(longlong **)(param_1 + 8);
    pbVar3 = (byte *)plVar4[2];
LAB_143c5c008:
    if ((int)plVar4[3] < 2) {
      if ((int)plVar4[3] < 1) {
        do {
          pbVar9 = (byte *)*plVar4;
          if (pbVar3 <= pbVar9) goto LAB_143c5c075;
          bVar1 = *pbVar9;
          *plVar4 = (longlong)(pbVar9 + 1);
        } while ((bVar1 == 0x20) || (bVar1 == 9));
        if ((bVar1 == 0xd) || (bVar1 == 10)) {
LAB_143c5c0da:
          *(undefined4 *)(plVar4 + 3) = 2;
          goto LAB_143c5c07c;
        }
        if (bVar1 != 0x3b) goto LAB_143c5c06b;
        *(undefined4 *)(plVar4 + 3) = 1;
      }
      while (pbVar9 = (byte *)*plVar4, pbVar9 < pbVar3) {
        bVar1 = *pbVar9;
        *plVar4 = (longlong)(pbVar9 + 1);
        if ((bVar1 == 0xd) || (bVar1 == 10)) goto LAB_143c5c0da;
LAB_143c5c06b:
        if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
      }
LAB_143c5c075:
      *(undefined4 *)(plVar4 + 3) = 3;
    }
LAB_143c5c07c:
    *(undefined4 *)(plVar4 + 3) = 0;
    do {
      pbVar9 = (byte *)*plVar4;
      if (pbVar3 <= pbVar9) goto LAB_143c5c157;
      bVar1 = *pbVar9;
      *plVar4 = (longlong)(pbVar9 + 1);
    } while ((bVar1 == 0x20) || (bVar1 == 9));
    uVar6 = (uint)bVar1;
    if ((uVar6 == 0xd) || (uVar6 == 10)) {
      *(undefined4 *)(plVar4 + 3) = 2;
      pbVar9 = pbVar8;
LAB_143c5c161:
      pbVar7 = pbVar8;
      if ((2 < (int)plVar4[3]) || ((int)plVar4[3] < 2)) goto LAB_143c5c175;
      goto LAB_143c5c008;
    }
    if (uVar6 == 0x3b) {
      *(undefined4 *)(plVar4 + 3) = 1;
      pbVar9 = pbVar8;
      goto LAB_143c5c161;
    }
    if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) {
LAB_143c5c157:
      *(undefined4 *)(plVar4 + 3) = 3;
      pbVar9 = pbVar8;
      goto LAB_143c5c161;
    }
    while (pbVar7 = (byte *)*plVar4, pbVar7 < pbVar3) {
      bVar1 = *pbVar7;
      *plVar4 = (longlong)(pbVar7 + 1);
      if ((bVar1 == 0x20) || (bVar1 == 9)) goto LAB_143c5c12c;
      uVar6 = (uint)bVar1;
      if ((uVar6 == 0xd) || (uVar6 == 10)) {
        *(undefined4 *)(plVar4 + 3) = 2;
        goto LAB_143c5c12c;
      }
      if (uVar6 == 0x3b) {
        *(undefined4 *)(plVar4 + 3) = 1;
        goto LAB_143c5c12c;
      }
      if ((uVar6 == 0xffffffff) || (bVar1 == 0x1a)) break;
    }
    *(undefined4 *)(plVar4 + 3) = 3;
LAB_143c5c12c:
    if (pbVar9 == (byte *)0x0) goto LAB_143c5c161;
    pbVar7 = (byte *)((*plVar4 - (longlong)pbVar9) + -1);
LAB_143c5c175:
    if (pbVar9 == (byte *)0x0) {
      return 0xa0;
    }
    iVar5 = FUN_143c5c330(pbVar9,pbVar7);
    if ((iVar5 == param_3) || (iVar5 == 0x14)) {
      return 0;
    }
  } while( true );
}



// FUNCTION 143c5c1b0 afm_stream_read_one body=136 status=ok
// SIG undefined afm_stream_read_one(void)

longlong afm_stream_read_one(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  
  afm_stream_skip_spaces();
  if (0 < (int)param_1[3]) {
    return 0;
  }
  lVar2 = *param_1;
  while (pbVar3 = (byte *)*param_1, pbVar3 < (byte *)param_1[2]) {
    bVar1 = *pbVar3;
    *param_1 = (longlong)(pbVar3 + 1);
    if ((bVar1 == 0x20) || (bVar1 == 9)) goto LAB_143c5c20d;
    uVar4 = (uint)bVar1;
    if ((uVar4 == 0xd) || (uVar4 == 10)) {
      *(undefined4 *)(param_1 + 3) = 2;
      return lVar2 + -1;
    }
    if (uVar4 == 0x3b) {
      *(undefined4 *)(param_1 + 3) = 1;
      return lVar2 + -1;
    }
    if ((uVar4 == 0xffffffff) || (bVar1 == 0x1a)) break;
  }
  *(undefined4 *)(param_1 + 3) = 3;
LAB_143c5c20d:
  return lVar2 + -1;
}



// FUNCTION 143c5c240 afm_stream_read_string body=104 status=ok
// SIG undefined afm_stream_read_string(void)

longlong afm_stream_read_string(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  
  afm_stream_skip_spaces();
  if (1 < (int)param_1[3]) {
    return 0;
  }
  lVar2 = *param_1;
  while (pbVar3 = (byte *)*param_1, pbVar3 < (byte *)param_1[2]) {
    bVar1 = *pbVar3;
    *param_1 = (longlong)(pbVar3 + 1);
    if ((bVar1 == 0xd) || (bVar1 == 10)) {
      *(undefined4 *)(param_1 + 3) = 2;
      return lVar2 + -1;
    }
    if ((bVar1 == 0xffffffff) || (bVar1 == 0x1a)) break;
  }
  *(undefined4 *)(param_1 + 3) = 3;
  return lVar2 + -1;
}



// FUNCTION 143c5c2b0 afm_stream_skip_spaces body=114 status=ok
// SIG undefined afm_stream_skip_spaces(void)

uint afm_stream_skip_spaces(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0 < *(int *)(param_1 + 3)) {
    return 0x3b;
  }
  do {
    pbVar2 = (byte *)*param_1;
    if ((byte *)param_1[2] <= pbVar2) {
      uVar3 = 0xffffffff;
      goto LAB_143c5c318;
    }
    bVar1 = *pbVar2;
    uVar3 = (uint)bVar1;
    *param_1 = pbVar2 + 1;
  } while ((bVar1 == 0x20) || (bVar1 == 9));
  uVar4 = (uint)bVar1;
  uVar5 = (uint)bVar1;
  if ((uVar4 == 0xd) || (uVar4 == 10)) {
    *(undefined4 *)(param_1 + 3) = 2;
    return uVar5;
  }
  if (uVar4 == 0x3b) {
    *(undefined4 *)(param_1 + 3) = 1;
    return uVar5;
  }
  if (uVar4 == 0xffffffff) {
LAB_143c5c318:
    *(undefined4 *)(param_1 + 3) = 3;
  }
  else if (uVar5 == 0x1a) {
    *(undefined4 *)(param_1 + 3) = 3;
    return 0x1a;
  }
  return uVar3;
}



// FUNCTION 143c5c330 FUN_143c5c330 body=147 status=ok
// SIG undefined FUN_143c5c330(void)

int FUN_143c5c330(char *param_1,size_t param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = 0;
  do {
    if (*(&PTR_s_Ascender_145d269d0)[lVar3] == *param_1) {
      for (; iVar2 < 0x4a; iVar2 = iVar2 + 1) {
        if (*(&PTR_s_Ascender_145d269d0)[lVar3] != *param_1) {
          return 0x4b;
        }
        iVar1 = _guard_xfg_dispatch_icall_nop((&PTR_s_Ascender_145d269d0)[lVar3],param_1,param_2);
        if (iVar1 == 0) {
          return iVar2;
        }
        lVar3 = lVar3 + 1;
      }
    }
    iVar2 = iVar2 + 1;
    lVar3 = lVar3 + 1;
    if (0x49 < iVar2) {
      return 0x4b;
    }
  } while( true );
}



// FUNCTION 143c5c3d0 FUN_143c5c3d0 body=316 status=ok
// SIG undefined FUN_143c5c3d0(void)

int FUN_143c5c3d0(longlong *param_1,byte *param_2,int param_3,longlong param_4)

{
  byte bVar1;
  undefined2 extraout_var;
  byte *pbVar2;
  int iVar3;
  undefined2 *puVar4;
  byte bVar5;
  undefined2 local_res8 [4];
  byte *local_res10;
  
  pbVar2 = (byte *)*param_1;
  iVar3 = 0;
  local_res10 = pbVar2;
  if (param_2 <= pbVar2) goto LAB_143c5c4f9;
  bVar5 = 0;
  if (*pbVar2 == 0x5b) {
    bVar5 = 0x5d;
LAB_143c5c414:
    pbVar2 = pbVar2 + 1;
  }
  else if (*pbVar2 == 0x7b) {
    bVar5 = 0x7d;
    goto LAB_143c5c414;
  }
  local_res10 = pbVar2;
  if (pbVar2 < param_2) {
    do {
      for (; pbVar2 < param_2; pbVar2 = pbVar2 + 1) {
        bVar1 = *pbVar2;
        if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
          if (bVar1 != 0x25) break;
          for (; ((pbVar2 < param_2 && (*pbVar2 != 0xd)) && (*pbVar2 != 10)); pbVar2 = pbVar2 + 1) {
          }
        }
      }
      local_res10 = pbVar2;
      if (param_2 <= pbVar2) break;
      if (*pbVar2 == bVar5) {
        local_res10 = pbVar2 + 1;
        break;
      }
      if (param_4 == 0) {
        puVar4 = local_res8;
      }
      else {
        if (param_3 <= iVar3) break;
        puVar4 = (undefined2 *)(param_4 + (longlong)iVar3 * 2);
      }
      FUN_143c5b0e0(&local_res10,param_2,0);
      *puVar4 = extraout_var;
      if (pbVar2 == local_res10) {
        iVar3 = -1;
        break;
      }
      iVar3 = iVar3 + 1;
      if ((bVar5 == 0) || (pbVar2 = local_res10, param_2 <= local_res10)) break;
    } while( true );
  }
LAB_143c5c4f9:
  *param_1 = (longlong)local_res10;
  return iVar3;
}



// FUNCTION 143c5c510 FUN_143c5c510 body=338 status=ok
// SIG undefined FUN_143c5c510(void)

int FUN_143c5c510(longlong *param_1,byte *param_2,int param_3,longlong param_4,undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 local_res10 [2];
  byte *local_48 [2];
  
  pbVar3 = (byte *)*param_1;
  iVar4 = 0;
  local_48[0] = pbVar3;
  if (param_2 <= pbVar3) goto LAB_143c5c64d;
  bVar6 = 0;
  if (*pbVar3 == 0x5b) {
    bVar6 = 0x5d;
LAB_143c5c553:
    pbVar3 = pbVar3 + 1;
  }
  else if (*pbVar3 == 0x7b) {
    bVar6 = 0x7d;
    goto LAB_143c5c553;
  }
  local_48[0] = pbVar3;
  if (pbVar3 < param_2) {
    do {
      for (; pbVar3 < param_2; pbVar3 = pbVar3 + 1) {
        bVar1 = *pbVar3;
        if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
          if (bVar1 != 0x25) break;
          for (; ((pbVar3 < param_2 && (*pbVar3 != 0xd)) && (*pbVar3 != 10)); pbVar3 = pbVar3 + 1) {
          }
        }
      }
      local_48[0] = pbVar3;
      if (param_2 <= pbVar3) break;
      if (*pbVar3 == bVar6) {
        local_48[0] = pbVar3 + 1;
        break;
      }
      if (param_4 == 0) {
        puVar5 = local_res10;
      }
      else {
        if (param_3 <= iVar4) break;
        puVar5 = (undefined4 *)(param_4 + (longlong)iVar4 * 4);
      }
      uVar2 = FUN_143c5b0e0(local_48,param_2,param_5);
      *puVar5 = uVar2;
      if (pbVar3 == local_48[0]) {
        iVar4 = -1;
        break;
      }
      iVar4 = iVar4 + 1;
      if ((bVar6 == 0) || (pbVar3 = local_48[0], param_2 <= local_48[0])) break;
    } while( true );
  }
LAB_143c5c64d:
  *param_1 = (longlong)local_48[0];
  return iVar4;
}



// FUNCTION 143c5c680 FUN_143c5c680 body=173 status=ok
// SIG undefined FUN_143c5c680(void)

int FUN_143c5c680(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  void *_Dst;
  longlong *plVar4;
  int local_res8 [2];
  
  lVar2 = param_1[7];
  _Src = (void *)*param_1;
  _Dst = (void *)FUN_143c271e0(lVar2,param_2,local_res8);
  *param_1 = (longlong)_Dst;
  if (local_res8[0] == 0) {
    if (_Src != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,param_1[2]);
      plVar4 = (longlong *)param_1[5];
      lVar3 = *param_1;
      plVar1 = plVar4 + *(int *)((longlong)param_1 + 0x1c);
      for (; plVar4 < plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 != 0) {
          *plVar4 = *plVar4 + (lVar3 - (longlong)_Src);
        }
      }
      ft_mem_free(lVar2,_Src);
    }
    param_1[2] = param_2;
    local_res8[0] = 0;
  }
  else {
    *param_1 = (longlong)_Src;
  }
  return local_res8[0];
}



// FUNCTION 143c5c730 FUN_143c5c730 body=199 status=ok
// SIG undefined FUN_143c5c730(void)

undefined4 FUN_143c5c730(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar3 = (char *)*param_1;
  iVar5 = 0;
  uVar6 = 3;
  pcVar2 = pcVar3;
  if (param_2 <= pcVar3) {
LAB_143c5c7ec:
    *param_1 = pcVar3;
    return uVar6;
  }
  do {
    cVar1 = *pcVar2;
    pcVar3 = pcVar2 + 1;
    if (cVar1 == '\\') {
      if (pcVar3 == param_2) goto LAB_143c5c7ec;
      switch(*pcVar3) {
      case '(':
      case ')':
      case '\\':
      case 'b':
      case 'f':
      case 'n':
      case 'r':
      case 't':
        pcVar3 = pcVar2 + 2;
        break;
      default:
        uVar4 = 0;
        do {
          if (param_2 <= pcVar3) goto LAB_143c5c7ec;
          if (7 < (byte)(*pcVar3 - 0x30U)) break;
          pcVar3 = pcVar3 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 3);
      }
    }
    else if (cVar1 == '(') {
      iVar5 = iVar5 + 1;
    }
    else if ((cVar1 == ')') && (iVar5 = iVar5 + -1, iVar5 == 0)) {
      uVar6 = 0;
      goto LAB_143c5c7ec;
    }
    pcVar2 = pcVar3;
    if (param_2 <= pcVar3) {
      *param_1 = pcVar3;
      return 3;
    }
  } while( true );
}



// FUNCTION 143c5c850 FUN_143c5c850 body=256 status=ok
// SIG undefined FUN_143c5c850(void)

int FUN_143c5c850(undefined8 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *local_res8;
  
  local_res8 = (char *)*param_1;
  iVar3 = 0;
  iVar2 = 0;
  if (param_2 <= local_res8) {
    *param_1 = local_res8;
    return 0;
  }
  do {
    if (iVar2 != 0) break;
    cVar1 = *local_res8;
    if (cVar1 == '%') {
      for (; ((local_res8 < param_2 && (*local_res8 != '\r')) && (*local_res8 != '\n'));
          local_res8 = local_res8 + 1) {
      }
    }
    else if (cVar1 == '(') {
      iVar2 = FUN_143c5c730(&local_res8,param_2);
    }
    else if (cVar1 == '<') {
      iVar2 = FUN_143c5c950(&local_res8,param_2);
    }
    else if (cVar1 == '{') {
      iVar3 = iVar3 + 1;
    }
    else if ((cVar1 == '}') && (iVar3 = iVar3 + -1, iVar3 == 0)) {
      *param_1 = local_res8 + 1;
      return 0;
    }
    local_res8 = local_res8 + 1;
  } while (local_res8 < param_2);
  *param_1 = local_res8;
  if (iVar3 != 0) {
    iVar2 = 3;
  }
  return iVar2;
}



// FUNCTION 143c5c950 FUN_143c5c950 body=169 status=ok
// SIG undefined FUN_143c5c950(void)

undefined8 FUN_143c5c950(longlong *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(*param_1 + 1);
  do {
    if (param_2 <= pbVar2) {
LAB_143c5c9e2:
      *param_1 = (longlong)(pbVar2 + 1);
      return 0;
    }
    for (; pbVar2 < param_2; pbVar2 = pbVar2 + 1) {
      bVar1 = *pbVar2;
      if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 != 0x25) break;
        for (; ((pbVar2 < param_2 && (*pbVar2 != 0xd)) && (*pbVar2 != 10)); pbVar2 = pbVar2 + 1) {
        }
      }
    }
    if (param_2 <= pbVar2) goto LAB_143c5c9e2;
    if ((0x36 < (byte)(*pbVar2 - 0x30)) ||
       ((0x7e0000007e03ffU >> ((ulonglong)(byte)(*pbVar2 - 0x30) & 0x3f) & 1) == 0)) {
      if (*pbVar2 != 0x3e) {
        *param_1 = (longlong)pbVar2;
        return 3;
      }
      goto LAB_143c5c9e2;
    }
    pbVar2 = pbVar2 + 1;
  } while( true );
}



// FUNCTION 143c5ca00 t1_lookup_glyph_by_stdcharcode body=145 status=ok
// SIG undefined t1_lookup_glyph_by_stdcharcode(void)

ulonglong t1_lookup_glyph_by_stdcharcode(longlong param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 < 0x100) {
    pcVar3 = (char *)(**(code **)(*(longlong *)(param_1 + 0x658) + 0x28))
                               (*(undefined2 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x658) + 0x30) +
                                 (longlong)(int)param_2 * 2));
    uVar7 = 0;
    if (*(uint *)(param_1 + 0x660) != 0) {
      do {
        pcVar4 = *(char **)(*(longlong *)(param_1 + 0x668) + uVar7 * 8);
        if ((pcVar4 != (char *)0x0) && (*pcVar4 == *pcVar3)) {
          lVar5 = (longlong)pcVar3 - (longlong)pcVar4;
          do {
            cVar1 = *pcVar4;
            cVar2 = pcVar4[lVar5];
            if (cVar1 != cVar2) break;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            return uVar7;
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0x660));
    }
  }
  return 0xffffffff;
}



// FUNCTION 143c5caa0 FUN_143c5caa0 body=505 status=ok
// SIG undefined FUN_143c5caa0(void)

int FUN_143c5caa0(longlong param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  if (((*(char *)(param_1 + 0x71c) == '\0') && (*(char *)(param_1 + 0x5e) == '\0')) &&
     ((param_3 = param_3 + *(int *)(param_1 + 0x38), *(longlong *)(param_1 + 0x668) != 0 ||
      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x48) != 0)))) {
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x48) == 0) {
      param_5 = t1_lookup_glyph_by_stdcharcode(param_1,param_5);
      param_6 = t1_lookup_glyph_by_stdcharcode(param_1,param_6);
    }
    if ((param_5 < 0) || (param_6 < 0)) {
      iVar6 = 0xa0;
    }
    else if (*(char *)(param_1 + 0x5d) == '\0') {
      FT_GlyphLoader_Prepare(*(undefined8 *)(param_1 + 0x18));
      *(undefined1 *)(param_1 + 0x71c) = 1;
      iVar6 = (**(code **)(param_1 + 0x6f0))(param_1,param_5);
      *(undefined1 *)(param_1 + 0x71c) = 0;
      if (iVar6 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(int *)(param_1 + 0x30) = param_3 - param_2;
        *(undefined4 *)(param_1 + 0x34) = param_4;
        *(undefined1 *)(param_1 + 0x71c) = 1;
        iVar6 = (**(code **)(param_1 + 0x6f0))(param_1,param_6);
        *(undefined1 *)(param_1 + 0x71c) = 0;
        if (iVar6 == 0) {
          *(undefined8 *)(param_1 + 0x38) = uVar4;
          *(undefined8 *)(param_1 + 0x40) = uVar5;
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
      }
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x10);
      lVar2 = **(longlong **)(lVar1 + 0xf0);
      iVar6 = FUN_143c211d0(lVar2,2);
      if (iVar6 == 0) {
        piVar3 = *(int **)(lVar2 + 0xa0);
        *piVar3 = param_5;
        *(undefined2 *)(piVar3 + 1) = 0x202;
        piVar3[2] = 0;
        piVar3[3] = 0;
        *(undefined2 *)(piVar3 + 9) = 2;
        piVar3[8] = param_6;
        iVar7 = FT_RoundFix(param_3 - param_2);
        piVar3[10] = iVar7 >> 0x10;
        iVar7 = FT_RoundFix(param_4);
        piVar3[0xb] = iVar7 >> 0x10;
        *(undefined4 *)(lVar1 + 0xc0) = 2;
        *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(lVar2 + 0x58);
        *(undefined4 *)(lVar1 + 0x60) = 0x636f6d70;
        *(undefined4 *)(lVar2 + 0x98) = 2;
      }
    }
    return iVar6;
  }
  return 0xa0;
}



// FUNCTION 143c5cca0 FUN_143c5cca0 body=284 status=ok
// SIG undefined FUN_143c5cca0(void)

ulonglong FUN_143c5cca0(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  
  cVar1 = *param_1;
  pcVar3 = param_1;
  if (cVar1 == 'u') {
    pbVar9 = (byte *)(param_1 + 1);
    uVar6 = 0;
    if ((*pbVar9 == 0x6e) && (param_1[2] == 'i')) {
      pbVar7 = (byte *)(param_1 + 3);
      iVar8 = 4;
      uVar5 = 0;
      do {
        bVar2 = *pbVar7;
        uVar4 = bVar2 - 0x30;
        if (9 < uVar4) {
          if (5 < bVar2 - 0x41) break;
          uVar4 = bVar2 - 0x37;
        }
        if (0xf < uVar4) break;
        iVar8 = iVar8 + -1;
        uVar5 = (ulonglong)((int)uVar5 * 0x10 + uVar4);
        pbVar7 = pbVar7 + 1;
      } while (0 < iVar8);
      if (iVar8 == 0) {
        if (*pbVar7 == 0) {
          return uVar5;
        }
        if (*pbVar7 == 0x2e) {
          return (ulonglong)((uint)uVar5 | 0x80000000);
        }
      }
    }
    iVar8 = 6;
    do {
      bVar2 = *pbVar9;
      uVar4 = bVar2 - 0x30;
      if (9 < uVar4) {
        if (5 < bVar2 - 0x41) break;
        uVar4 = bVar2 - 0x37;
      }
      if (0xf < uVar4) break;
      iVar8 = iVar8 + -1;
      uVar6 = uVar6 * 0x10 + uVar4;
      pbVar9 = pbVar9 + 1;
    } while (0 < iVar8);
    if (iVar8 < 3) {
      if (*pbVar9 != 0) {
        if (*pbVar9 != 0x2e) goto joined_r0x000143c5cd83;
        uVar6 = uVar6 | 0x80000000;
      }
      return (ulonglong)uVar6;
    }
  }
joined_r0x000143c5cd83:
  while( true ) {
    if (cVar1 == '\0') {
      uVar5 = FUN_143c5d2a0(param_1);
      return uVar5;
    }
    if ((cVar1 == '.') && (param_1 < pcVar3)) break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  }
  uVar6 = FUN_143c5d2a0(param_1);
  return (ulonglong)(uVar6 | 0x80000000);
}



// FUNCTION 143c5cdc0 FUN_143c5cdc0 body=752 status=ok
// SIG undefined FUN_143c5cdc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c5cdc0(undefined8 param_1,longlong param_2,uint param_3,code *param_4,code *param_5,
                 undefined8 param_6)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  uint *puVar4;
  longlong lVar5;
  char *pcVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int *local_d0;
  int local_c8 [2];
  undefined8 local_c0;
  code *local_b8;
  longlong local_b0;
  uint local_a8 [14];
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d0 = local_c8;
  uVar11 = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_d8 = 0;
  local_c0 = param_1;
  local_b8 = param_4;
  local_b0 = param_2;
  puVar4 = (uint *)FUN_143c27410(param_1,8,0);
  pcVar3 = local_b8;
  *(uint **)(param_2 + 0x20) = puVar4;
  if (local_c8[0] == 0) {
    if (param_3 != 0) {
      do {
        lVar5 = (*pcVar3)(param_6,uVar11);
        if (lVar5 != 0) {
          uVar10 = 0;
          piVar14 = &DAT_145d36288;
          do {
            pcVar6 = "Delta" + *piVar14;
            lVar12 = lVar5 - (longlong)pcVar6;
            do {
              cVar1 = *pcVar6;
              cVar2 = pcVar6[lVar12];
              if (cVar1 != cVar2) break;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) {
              if (local_a8[uVar10] == 0) {
                local_a8[uVar10] = 1;
                local_a8[uVar10 + 10] = uVar11;
              }
              break;
            }
            uVar13 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar13;
            piVar14 = piVar14 + 1;
          } while (uVar13 < 10);
          uVar13 = FUN_143c5cca0();
          if ((uVar13 & 0x7fffffff) != 0) {
            uVar10 = 0;
            puVar7 = &DAT_145d36260;
            do {
              if (uVar13 == *puVar7) {
                local_a8[uVar10] = 2;
                break;
              }
              uVar9 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
              puVar7 = puVar7 + 1;
            } while (uVar9 < 10);
            *puVar4 = uVar13;
            puVar4[1] = uVar11;
            puVar4 = puVar4 + 2;
          }
          if (param_5 != (code *)0x0) {
            (*param_5)(param_6,lVar5);
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_3);
      if (local_a8[0] == 1) {
        puVar4[1] = local_a8[10];
        *puVar4 = 0x394;
        puVar4 = puVar4 + 2;
      }
      if (local_a8[1] == 1) {
        *puVar4 = 0x3a9;
        puVar4[1] = local_a8[0xb];
        puVar4 = puVar4 + 2;
      }
      if (local_a8[2] == 1) {
        *puVar4 = 0x2215;
        puVar4[1] = local_a8[0xc];
        puVar4 = puVar4 + 2;
      }
      if (local_a8[3] == 1) {
        *puVar4 = 0xad;
        puVar4[1] = local_a8[0xd];
        puVar4 = puVar4 + 2;
      }
      if (local_a8[4] == 1) {
        *puVar4 = 0x2c9;
        puVar4[1] = local_70;
        puVar4 = puVar4 + 2;
      }
      if (local_a8[5] == 1) {
        *puVar4 = 0x3bc;
        puVar4[1] = local_6c;
        puVar4 = puVar4 + 2;
      }
      if (local_a8[6] == 1) {
        *puVar4 = 0x2219;
        puVar4[1] = local_68;
        puVar4 = puVar4 + 2;
      }
      if (local_a8[7] == 1) {
        *puVar4 = 0xa0;
        puVar4[1] = local_64;
        puVar4 = puVar4 + 2;
      }
      if (local_a8[8] == 1) {
        *puVar4 = 0x21a;
        puVar4[1] = local_60;
        puVar4 = puVar4 + 2;
      }
      param_1 = local_c0;
      param_2 = local_b0;
      if (local_a8[9] == 1) {
        *puVar4 = 0x21b;
        puVar4[1] = local_5c;
        puVar4 = puVar4 + 2;
      }
    }
    uVar10 = (longlong)puVar4 - *(longlong *)(param_2 + 0x20) >> 3;
    uVar11 = (uint)uVar10;
    if (uVar11 == 0) {
      ft_mem_free(param_1);
      *(undefined8 *)(param_2 + 0x20) = 0;
      if (local_c8[0] == 0) {
        local_c8[0] = 0xa3;
      }
    }
    else {
      if (uVar11 < param_3 >> 1) {
        local_d0 = local_c8;
        local_d8 = *(longlong *)(param_2 + 0x20);
        uVar8 = FUN_143c27410(param_1,8,param_3,uVar10 & 0xffffffff);
        *(undefined8 *)(param_2 + 0x20) = uVar8;
        local_c8[0] = 0;
      }
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_2 + 0x20),uVar10 & 0xffffffff,8,(_PtFuncCompare *)&LAB_143c5d270);
    }
    *(uint *)(param_2 + 0x18) = uVar11;
  }
  return local_c8[0];
}



// FUNCTION 143c5d120 FUN_143c5d120 body=220 status=ok
// SIG undefined FUN_143c5d120(void)

int FUN_143c5d120(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar5 = *param_2 + 1;
  uVar4 = 0;
  if (uVar6 != 0) {
    do {
      uVar3 = (uVar6 - (int)uVar4 >> 1) + (int)uVar4;
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 8);
      lVar1 = *(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 8;
      if (uVar2 == uVar5) {
        iVar7 = *(int *)(lVar1 + 4);
        *param_2 = uVar5;
        return iVar7;
      }
      uVar2 = uVar2 & 0x7fffffff;
      if (uVar2 == uVar5) {
        iVar7 = *(int *)(lVar1 + 4);
      }
      if (uVar2 < uVar5) {
        uVar4 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
    } while ((uint)uVar4 < uVar6);
    if (iVar7 != 0) {
      *param_2 = uVar5;
      return iVar7;
    }
  }
  if (*(uint *)(param_1 + 0x18) <= (uint)uVar4) {
    *param_2 = 0;
    return 0;
  }
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + uVar4 * 8);
  *param_2 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) & 0x7fffffff;
  return iVar7;
}



// FUNCTION 143c5d2a0 FUN_143c5d2a0 body=300 status=ok
// SIG undefined FUN_143c5d2a0(void)

undefined2 FUN_143c5d2a0(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 <= param_1) {
    return 0;
  }
  iVar4 = 0;
  iVar6 = 0x34;
  while( true ) {
    iVar3 = iVar6 + iVar4 >> 1;
    pbVar1 = &DAT_145d281c0 +
             ((longlong)(int)((uint)(byte)(&DAT_145d281c2)[iVar3 * 2] << 8) |
             (ulonglong)(byte)(&UNK_145d281c3)[iVar3 * 2]);
    if ((*pbVar1 & 0x7f) == (int)*param_1) break;
    if ((int)(*pbVar1 & 0x7f) < (int)*param_1) {
      iVar4 = iVar3 + 1;
      iVar3 = iVar6;
    }
    iVar6 = iVar3;
    if (iVar6 <= iVar4) {
      return 0;
    }
  }
  while (param_1 = param_1 + 1, param_1 < param_2) {
    if ((*pbVar1 & 0x80) == 0) {
      pbVar2 = pbVar1 + 1;
      uVar5 = pbVar1[1] & 0x7f;
      if ((char)pbVar1[1] < '\0') {
        pbVar2 = pbVar1 + 3;
      }
      pbVar2 = pbVar2 + 1;
      while( true ) {
        if ((int)uVar5 < 1) {
          return 0;
        }
        pbVar1 = &DAT_145d281c0 + ((longlong)(int)((uint)*pbVar2 << 8) | (ulonglong)pbVar2[1]);
        if ((int)*param_1 == (*pbVar1 & 0x7f)) break;
        uVar5 = uVar5 - 1;
        pbVar2 = pbVar2 + 2;
      }
    }
    else {
      pbVar2 = pbVar1 + 1;
      pbVar1 = pbVar1 + 1;
      if ((int)*param_1 != (*pbVar2 & 0x7f)) {
        return 0;
      }
    }
  }
  if ((*pbVar1 & 0x80) != 0) {
    return 0;
  }
  if ((pbVar1[1] & 0x80) == 0) {
    return 0;
  }
  return CONCAT11(pbVar1[2],pbVar1[3]);
}



// FUNCTION 143c5d3f0 FUN_143c5d3f0 body=271 status=ok
// SIG undefined FUN_143c5d3f0(void)

undefined8 FUN_143c5d3f0(longlong param_1)

{
  undefined8 *_Dst;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _Dst = (undefined8 *)(param_1 + 0x18);
  _guard_xfg_dispatch_icall_nop(_Dst,0,0x78);
  *_Dst = uVar1;
  *(code **)(param_1 + 0x90) = FUN_143c5efb0;
  *(code **)(param_1 + 0x98) = FUN_143c5f2e0;
  *(undefined1 **)(param_1 + 0xa0) = &LAB_143c5ef70;
  *(undefined1 **)(param_1 + 0xb0) = &LAB_143c610b0;
  *(code **)(param_1 + 0xc0) = FUN_143c610d0;
  *(code **)(param_1 + 200) = FUN_143c5e1f0;
  *(code **)(param_1 + 0xd0) = ps_hints_t1reset;
  *(code **)(param_1 + 0xb8) = ps_hints_close;
  *(code **)(param_1 + 0xd8) = FUN_143c5da70;
  *(undefined8 **)(param_1 + 0xa8) = _Dst;
  *(undefined1 **)(param_1 + 0xe8) = &LAB_143c61130;
  *(code **)(param_1 + 0xf8) = FUN_143c61150;
  *(code **)(param_1 + 0x100) = FUN_143c5e3b0;
  *(code **)(param_1 + 0x108) = FUN_143c5e310;
  *(code **)(param_1 + 0xf0) = ps_hints_close;
  *(code **)(param_1 + 0x110) = FUN_143c5da70;
  *(undefined8 **)(param_1 + 0xe0) = _Dst;
  return 0;
}



// FUNCTION 143c5d530 FUN_143c5d530 body=622 status=ok
// SIG undefined FUN_143c5d530(void)

/* WARNING: Removing unreachable block (ram,0x000143c5d780) */

int FUN_143c5d530(longlong param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int local_res8 [2];
  
  puVar6 = *(uint **)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x20);
  if (iVar8 != 0) {
    do {
      uVar9 = *puVar6;
      if ((((param_2 < uVar9) &&
           (((uint)*(byte *)(((longlong)(int)param_2 >> 3) + *(longlong *)(puVar6 + 2)) &
            0x80 >> ((byte)param_2 & 7)) != 0)) ||
          ((param_3 < uVar9 &&
           (((uint)*(byte *)(((longlong)(int)param_3 >> 3) + *(longlong *)(puVar6 + 2)) &
            0x80 >> ((byte)param_3 & 7)) != 0)))) ||
         ((param_4 < uVar9 &&
          (((uint)*(byte *)(((longlong)(int)param_4 >> 3) + *(longlong *)(puVar6 + 2)) &
           0x80 >> ((byte)param_4 & 7)) != 0)))) break;
      puVar6 = puVar6 + 6;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar2 = 0;
  if (iVar8 == 0) {
    uVar9 = *(int *)(param_1 + 0x20) + 1;
    if (*(uint *)(param_1 + 0x24) < uVar9) {
      local_res8[0] = 0;
      uVar4 = *(int *)(param_1 + 0x20) + 8U & 0xfffffff8;
      uVar3 = FUN_143c27410(param_5,0x18,*(uint *)(param_1 + 0x24),uVar4,
                            *(undefined8 *)(param_1 + 0x28),local_res8);
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      *(uint *)(param_1 + 0x24) = uVar4;
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    lVar7 = (ulonglong)uVar9 * 3 + -3;
    *(undefined4 *)(lVar1 + lVar7 * 8) = 0;
    puVar6 = (uint *)(lVar1 + lVar7 * 8);
    puVar6[4] = 0;
    *(uint *)(param_1 + 0x20) = uVar9;
  }
  if (-1 < (int)param_2) {
    iVar8 = iVar2;
    if (param_2 < *puVar6) {
LAB_143c5d6db:
      pbVar5 = (byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(puVar6 + 2));
      *pbVar5 = *pbVar5 | (byte)(0x80 >> ((byte)param_2 & 7));
    }
    else {
      iVar8 = FUN_143c5e450(puVar6,param_2 + 1,param_5);
      if (iVar8 == 0) {
        *puVar6 = param_2 + 1;
        goto LAB_143c5d6db;
      }
    }
    if (iVar8 != 0) {
      return iVar8;
    }
  }
  if ((int)param_3 < 0) goto LAB_143c5d73f;
  if (param_3 < *puVar6) {
LAB_143c5d721:
    pbVar5 = (byte *)((ulonglong)(param_3 >> 3) + *(longlong *)(puVar6 + 2));
    *pbVar5 = *pbVar5 | (byte)(0x80 >> ((byte)param_3 & 7));
  }
  else {
    iVar2 = FUN_143c5e450(puVar6,param_3 + 1,param_5);
    if (iVar2 == 0) {
      *puVar6 = param_3 + 1;
      goto LAB_143c5d721;
    }
  }
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_143c5d73f:
  if (-1 < (int)param_4) {
    if (*puVar6 <= param_4) {
      iVar8 = FUN_143c5e450(puVar6,param_4 + 1,param_5);
      if (iVar8 != 0) {
        return iVar8;
      }
      *puVar6 = param_4 + 1;
    }
    pbVar5 = (byte *)((ulonglong)(param_4 >> 3) + *(longlong *)(puVar6 + 2));
    *pbVar5 = *pbVar5 | (byte)(0x80 >> ((byte)param_4 & 7));
  }
  return 0;
}



// FUNCTION 143c5d7a0 FUN_143c5d7a0 body=578 status=ok
// SIG undefined FUN_143c5d7a0(void)

/* WARNING: Removing unreachable block (ram,0x000143c5d9d0) */

int * FUN_143c5d7a0(uint *param_1,int param_2,int param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar12;
  longlong lVar13;
  uint *puVar14;
  uint local_res18 [2];
  undefined8 local_res20;
  int *piVar11;
  
  puVar4 = param_5;
  piVar8 = (int *)0x0;
  uVar10 = 0;
  local_res18[0] = 0;
  iVar9 = param_3;
  if ((param_3 < 0) && (local_res18[0] = 1, iVar9 = 0, param_3 == -0x15)) {
    local_res18[0] = 3;
    param_2 = param_2 + -0x15;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0xffffffff;
  }
  uVar5 = *param_1;
  piVar6 = *(int **)(param_1 + 2);
  piVar11 = piVar8;
  local_res20 = param_4;
  if (uVar5 != 0) {
    do {
      uVar10 = (uint)piVar11;
      if ((*piVar6 == param_2) && (piVar6[1] == iVar9)) {
        if (uVar10 < uVar5) goto LAB_143c5d8e4;
        break;
      }
      uVar10 = uVar10 + 1;
      piVar11 = (int *)(ulonglong)uVar10;
      piVar6 = piVar6 + 3;
    } while (uVar10 < uVar5);
  }
  uVar2 = param_1[1];
  uVar1 = uVar5 + 1;
  piVar6 = piVar8;
  if (uVar1 < uVar2) {
LAB_143c5d8a3:
    lVar3 = *(longlong *)(param_1 + 2);
    lVar13 = (ulonglong)uVar1 * 3 + -3;
    *(undefined8 *)(lVar3 + lVar13 * 4) = 0;
    piVar11 = (int *)(lVar3 + lVar13 * 4);
    piVar11[2] = 0;
    *param_1 = uVar1;
  }
  else {
    param_5._0_4_ = 0;
    piVar11 = piVar8;
    if (uVar2 < uVar1) {
      uVar5 = uVar5 + 8 & 0xfffffff8;
      uVar7 = FUN_143c27410(param_4,0xc,uVar2,uVar5,*(int **)(param_1 + 2),&param_5);
      piVar6 = (int *)(ulonglong)(uint)param_5;
      *(undefined8 *)(param_1 + 2) = uVar7;
      if ((uint)param_5 == 0) {
        param_1[1] = uVar5;
        goto LAB_143c5d89f;
      }
    }
    else {
LAB_143c5d89f:
      if ((int)piVar6 == 0) goto LAB_143c5d8a3;
    }
  }
  if ((int)piVar6 != 0) {
    return piVar6;
  }
  piVar11[2] = local_res18[0];
  *piVar11 = param_2;
  piVar11[1] = iVar9;
LAB_143c5d8e4:
  if (param_1[4] == 0) {
    if (param_1[5] == 0) {
      local_res18[0] = 0;
      uVar7 = FUN_143c27410(local_res20,0x18,0,8,*(undefined8 *)(param_1 + 6),local_res18);
      *(undefined8 *)(param_1 + 6) = uVar7;
      if (local_res18[0] != 0) {
        return (int *)(ulonglong)local_res18[0];
      }
      param_1[5] = 8;
    }
    puVar14 = *(uint **)(param_1 + 6);
    *puVar14 = 0;
    puVar14[4] = 0;
    param_1[4] = 1;
  }
  else {
    puVar14 = (uint *)(*(longlong *)(param_1 + 6) + ((ulonglong)param_1[4] * 3 + -3) * 8);
  }
  if (*puVar14 <= uVar10) {
    uVar5 = FUN_143c5e450(puVar14,uVar10 + 1,local_res20);
    piVar8 = (int *)(ulonglong)uVar5;
    if (uVar5 != 0) goto LAB_143c5d9bd;
    *puVar14 = uVar10 + 1;
  }
  pbVar12 = (byte *)((ulonglong)(uVar10 >> 3) + *(longlong *)(puVar14 + 2));
  *pbVar12 = *pbVar12 | (byte)(0x80 >> ((byte)uVar10 & 7));
LAB_143c5d9bd:
  if (((int)piVar8 == 0) && (puVar4 != (uint *)0x0)) {
    *puVar4 = uVar10;
  }
  return piVar8;
}



// FUNCTION 143c5d9f0 FUN_143c5d9f0 body=121 status=ok
// SIG undefined FUN_143c5d9f0(void)

void FUN_143c5d9f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 local_res8 [8];
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)
     (*(longlong *)(param_1 + 0x18) + -8 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18) = param_5;
  }
  iVar1 = FUN_143c5e4e0(param_1 + 0x10,param_6,local_res8);
  if (iVar1 == 0) {
    FUN_143c5e8a0(param_1 + 0x10,param_2,param_3,param_4,param_6);
  }
  return;
}



// FUNCTION 143c5da70 FUN_143c5da70 body=713 status=ok
// SIG undefined FUN_143c5da70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c5da70(undefined8 param_1,short *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  int local_138;
  int local_134;
  uint local_128 [2];
  longlong local_120;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [156];
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((param_2[1] == 0) || (*param_2 == 0)) {
    local_138 = 0;
  }
  else {
    local_138 = FUN_143c5fa30(local_128,param_2,param_1,param_3);
    if (local_138 == 0) {
      iVar14 = *(int *)(local_100 + 0xcc);
      bVar5 = false;
      uVar2 = *(undefined4 *)(local_100 + 0x198);
      local_134 = iVar14;
      uVar7 = FUN_143c22100(*(undefined4 *)(param_3 + 0x1a4),uVar2);
      uVar13 = uVar7 + 0x20 & 0xffffffc0;
      if ((uVar13 != 0) && (uVar7 != uVar13)) {
        bVar5 = true;
        uVar8 = FUN_143c21f00(uVar2,uVar13,uVar7);
        if ((int)uVar13 < (int)uVar7) {
          iVar11 = (int)((ulonglong)((longlong)iVar14 * -0x51eb851f) >> 0x20);
          iVar14 = iVar14 + ((iVar11 >> 4) - (iVar11 >> 0x1f));
        }
        local_148 = 0;
        FUN_143c5f2e0(local_100,iVar14,uVar8,0);
      }
      iVar14 = local_134;
      local_5c = 0x101;
      local_5a = param_4 - 2U < 2;
      local_59 = (param_4 - 2U & 0xfffffffd) == 0;
      local_58 = param_4 != 1;
      uVar12 = 0;
      do {
        puVar10 = *(undefined4 **)(local_108 + 8);
        iVar11 = (int)uVar12;
        if (local_128[0] != 0) {
          puVar9 = (undefined4 *)(local_120 + 0x30);
          uVar7 = local_128[0];
          do {
            puVar9[-5] = 0;
            *(undefined8 *)(puVar9 + -2) = 0;
            if (iVar11 == 0) {
              *puVar9 = *puVar10;
              uVar8 = puVar10[1];
            }
            else {
              *puVar9 = puVar10[1];
              uVar8 = *puVar10;
            }
            puVar9[1] = uVar8;
            puVar10 = puVar10 + 2;
            puVar9 = puVar9 + 0x10;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        FUN_143c5f370(local_128);
        FUN_143c607d0(local_f8 + (longlong)iVar11 * 0x48,local_100,uVar12,local_128);
        FUN_143c5f8a0(local_128,uVar12);
        if (iVar11 == 1) {
          FUN_143c5f770(param_3 + 0x1a0,local_128);
        }
        FUN_143c602a0(local_128,uVar12);
        FUN_143c5fdf0(local_128,uVar12);
        FUN_143c60060(local_128,uVar12);
        lVar3 = *(longlong *)(local_108 + 8);
        lVar4 = *(longlong *)(local_108 + 0x10);
        if (local_128[0] != 0) {
          puVar10 = (undefined4 *)(local_120 + 0x38);
          uVar12 = 0;
          do {
            if (iVar11 == 0) {
              *(undefined4 *)(lVar3 + uVar12 * 8) = *puVar10;
            }
            else {
              *(undefined4 *)(lVar3 + 4 + uVar12 * 8) = *puVar10;
            }
            if ((*(byte *)(puVar10 + -7) & 0x10) != 0) {
              bVar6 = 0x40;
              if (iVar11 == 0) {
                bVar6 = 0x20;
              }
              pbVar1 = (byte *)(uVar12 + lVar4);
              *pbVar1 = *pbVar1 | bVar6;
            }
            puVar10 = puVar10 + 0x10;
            uVar7 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar7;
          } while (uVar7 < local_128[0]);
        }
        if (bVar5) {
          local_148 = 0;
          FUN_143c5f2e0(local_100,iVar14,uVar2,0);
        }
        uVar12 = (ulonglong)(iVar11 + 1U);
      } while ((int)(iVar11 + 1U) < 2);
    }
    FUN_143c5f680(local_128);
  }
  return local_138;
}



// FUNCTION 143c5dd40 ps_hints_close body=113 status=ok
// SIG undefined ps_hints_close(void)

void ps_hints_close(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = *param_1;
    if (*(uint *)(param_1 + 5) != 0) {
      *(undefined4 *)(param_1[6] + -8 + (ulonglong)*(uint *)(param_1 + 5) * 0x18) = param_2;
    }
    iVar2 = FUN_143c5e790(param_1 + 7,uVar1);
    if (iVar2 == 0) {
      if (*(uint *)(param_1 + 0xb) != 0) {
        *(undefined4 *)(param_1[0xc] + -8 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18) = param_2;
      }
      FUN_143c5e790(param_1 + 0xd,uVar1);
    }
  }
  return;
}



// FUNCTION 143c5ddc0 FUN_143c5ddc0 body=133 status=ok
// SIG undefined FUN_143c5ddc0(void)

void FUN_143c5ddc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_143c5e5a0(param_1 + 7,uVar1);
  FUN_143c5e5a0(param_1 + 5,uVar1);
  ft_mem_free(uVar1,param_1[4]);
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_143c5e5a0(param_1 + 0xd,uVar1);
  FUN_143c5e5a0(param_1 + 0xb,uVar1);
  ft_mem_free(uVar1,param_1[10]);
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 143c5de50 FUN_143c5de50 body=766 status=ok
// SIG undefined FUN_143c5de50(void)

void FUN_143c5de50(undefined8 *param_1,uint param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_58;
  int local_54;
  int local_50 [2];
  undefined8 local_48;
  
  if (*(int *)(param_1 + 1) == 0) {
    if (1 < param_2) {
      param_2 = (uint)(param_2 != 0);
    }
    for (; 0 < param_3; param_3 = param_3 + -1) {
      local_48 = *param_1;
      iVar13 = 0;
      iVar9 = param_4[1];
      iVar14 = *param_4;
      if (iVar9 < 0) {
        iVar13 = 1;
        if (iVar9 == -0x15) {
          iVar13 = 3;
          iVar14 = iVar14 + -0x15;
        }
        iVar9 = 0;
      }
      uVar12 = *(uint *)(param_1 + (ulonglong)param_2 * 6 + 3);
      uVar8 = 0;
      piVar4 = (int *)param_1[(ulonglong)param_2 * 6 + 4];
      if (uVar12 != 0) {
        do {
          if ((*piVar4 == iVar14) && (piVar4[1] == iVar9)) {
            if (uVar8 < uVar12) goto LAB_143c5dfc5;
            break;
          }
          uVar8 = uVar8 + 1;
          piVar4 = piVar4 + 3;
        } while (uVar8 < uVar12);
      }
      uVar2 = *(uint *)((longlong)param_1 + (ulonglong)param_2 * 0x30 + 0x1c);
      uVar6 = uVar12 + 1;
      iVar11 = 0;
      if (uVar2 <= uVar6) {
        local_58 = 0;
        if (uVar2 < uVar6) {
          uVar12 = uVar12 + 8 & 0xfffffff8;
          uVar5 = FUN_143c27410(local_48,0xc,uVar2,uVar12,(int *)param_1[(ulonglong)param_2 * 6 + 4]
                                ,&local_58);
          param_1[(ulonglong)param_2 * 6 + 4] = uVar5;
          if (local_58 == 0) {
            *(uint *)((longlong)param_1 + (ulonglong)param_2 * 0x30 + 0x1c) = uVar12;
          }
        }
        iVar11 = local_58;
        if (local_58 != 0) goto LAB_143c5e118;
      }
      lVar3 = param_1[(ulonglong)param_2 * 6 + 4];
      lVar1 = (ulonglong)uVar6 - 1;
      *(undefined8 *)(lVar3 + lVar1 * 0xc) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar1 * 0xc) = 0;
      piVar4 = (int *)(lVar3 + lVar1 * 0xc);
      *(uint *)(param_1 + (ulonglong)param_2 * 6 + 3) = uVar6;
      if (iVar11 != 0) {
LAB_143c5e118:
        *(int *)(param_1 + 1) = iVar11;
        return;
      }
      *piVar4 = iVar14;
      piVar4[1] = iVar9;
      piVar4[2] = iVar13;
LAB_143c5dfc5:
      iVar11 = 0;
      if (*(uint *)(param_1 + (ulonglong)param_2 * 6 + 5) == 0) {
        if (*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x30 + 0x2c) == 0) {
          local_54 = 0;
          uVar5 = FUN_143c27410(local_48,0x18,0,8,param_1[(ulonglong)param_2 * 6 + 6],&local_54);
          param_1[(ulonglong)param_2 * 6 + 6] = uVar5;
          iVar11 = local_54;
          if (local_54 != 0) goto LAB_143c5e118;
          *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 0x30 + 0x2c) = 8;
        }
        puVar10 = (uint *)param_1[(ulonglong)param_2 * 6 + 6];
        *puVar10 = 0;
        puVar10[4] = 0;
        *(undefined4 *)(param_1 + (ulonglong)param_2 * 6 + 5) = 1;
      }
      else {
        puVar10 = (uint *)(param_1[(ulonglong)param_2 * 6 + 6] +
                          ((ulonglong)*(uint *)(param_1 + (ulonglong)param_2 * 6 + 5) * 3 + -3) * 8)
        ;
      }
      if (iVar11 != 0) goto LAB_143c5e118;
      if (*puVar10 <= uVar8) {
        uVar12 = uVar8 + 8 >> 3;
        uVar6 = puVar10[1] + 7 >> 3;
        local_50[0] = iVar11;
        if (uVar6 < uVar12) {
          uVar12 = uVar12 + 7 & 0xfffffff8;
          uVar5 = FUN_143c27410(local_48,1,uVar6,uVar12,*(undefined8 *)(puVar10 + 2),local_50);
          *(undefined8 *)(puVar10 + 2) = uVar5;
          iVar11 = local_50[0];
          if (local_50[0] != 0) goto LAB_143c5e118;
          puVar10[1] = uVar12 * 8;
        }
        iVar11 = local_50[0];
        if (local_50[0] != 0) goto LAB_143c5e118;
        *puVar10 = uVar8 + 1;
      }
      pbVar7 = (byte *)((ulonglong)(uVar8 >> 3) + *(longlong *)(puVar10 + 2));
      *pbVar7 = *pbVar7 | (byte)(0x80 >> ((byte)uVar8 & 7));
      if (iVar11 != 0) goto LAB_143c5e118;
      param_4 = param_4 + 2;
    }
  }
  return;
}



// FUNCTION 143c5e150 ps_hints_t1reset body=159 status=ok
// SIG undefined ps_hints_t1reset(void)

void ps_hints_t1reset(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_res8 [8];
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = *param_1;
    if (*(int *)(param_1 + 2) == 1) {
      if (*(uint *)(param_1 + 5) != 0) {
        *(undefined4 *)(param_1[6] + -8 + (ulonglong)*(uint *)(param_1 + 5) * 0x18) = param_2;
      }
      iVar2 = FUN_143c5e4e0(param_1 + 5,uVar1,local_res8);
      if (iVar2 == 0) {
        if (*(uint *)(param_1 + 0xb) != 0) {
          *(undefined4 *)(param_1[0xc] + -8 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18) = param_2;
        }
        iVar2 = FUN_143c5e4e0(param_1 + 0xb,uVar1,local_res8);
        if (iVar2 == 0) {
          return;
        }
        *(int *)(param_1 + 1) = iVar2;
        return;
      }
    }
    else {
      iVar2 = 6;
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return;
}



// FUNCTION 143c5e1f0 FUN_143c5e1f0 body=284 status=ok
// SIG undefined FUN_143c5e1f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c5e1f0(undefined8 *param_1,uint param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 1) == 0) {
    iVar4 = 0;
    uVar1 = *param_1;
    if (1 < param_2) {
      param_2 = (uint)(param_2 != 0);
    }
    if (*(int *)(param_1 + 2) == 1) {
      do {
        iVar2 = FT_RoundFix(param_3[1]);
        iVar3 = FT_RoundFix(*param_3);
        local_68 = local_58 + iVar4;
        iVar2 = FUN_143c5d7a0(param_1 + (ulonglong)param_2 * 6 + 3,iVar3 >> 0x10,iVar2 >> 0x10,uVar1
                             );
        if (iVar2 != 0) goto LAB_143c5e2d9;
        iVar4 = iVar4 + 1;
        param_3 = param_3 + 2;
      } while (iVar4 < 3);
      local_68 = (undefined4 *)uVar1;
      iVar2 = FUN_143c5d530(param_1 + (ulonglong)param_2 * 6 + 3,local_58[0],local_58[1],local_58[2]
                           );
      if (iVar2 == 0) {
        return;
      }
    }
    else {
      iVar2 = 6;
    }
LAB_143c5e2d9:
    *(int *)(param_1 + 1) = iVar2;
  }
  return;
}



// FUNCTION 143c5e310 FUN_143c5e310 body=158 status=ok
// SIG undefined FUN_143c5e310(void)

void FUN_143c5e310(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = *(int *)(param_1 + 9);
    iVar2 = *(int *)(param_1 + 3);
    uVar3 = *param_1;
    if ((param_2 == iVar1 + iVar2) &&
       ((iVar4 = FUN_143c5d9f0(param_1 + 3,param_3,0,iVar2,0,uVar3), iVar4 != 0 ||
        (iVar4 = FUN_143c5d9f0(param_1 + 9,param_3,iVar2,iVar1,0,uVar3), iVar4 != 0)))) {
      *(int *)(param_1 + 1) = iVar4;
    }
  }
  return;
}



// FUNCTION 143c5e3b0 FUN_143c5e3b0 body=147 status=ok
// SIG undefined FUN_143c5e3b0(void)

void FUN_143c5e3b0(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = *(int *)(param_1 + 9);
    uVar2 = *param_1;
    if ((param_3 == iVar1 + *(int *)(param_1 + 3)) &&
       ((iVar3 = FUN_143c5d9f0(param_1 + 3,param_4,iVar1,*(int *)(param_1 + 3),param_2,uVar2),
        iVar3 != 0 || (iVar3 = FUN_143c5d9f0(param_1 + 9,param_4,0,iVar1,param_2,uVar2), iVar3 != 0)
        ))) {
      *(int *)(param_1 + 1) = iVar3;
    }
  }
  return;
}



// FUNCTION 143c5e450 FUN_143c5e450 body=130 status=ok
// SIG undefined FUN_143c5e450(void)

int FUN_143c5e450(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int local_res10 [6];
  
  local_res10[0] = 0;
  uVar2 = param_2 + 7U >> 3;
  uVar3 = *(int *)(param_1 + 4) + 7U >> 3;
  if (uVar3 < uVar2) {
    uVar2 = uVar2 + 7 & 0xfffffff8;
    uVar1 = FUN_143c27410(param_3,1,uVar3,uVar2,*(undefined8 *)(param_1 + 8),local_res10);
    *(undefined8 *)(param_1 + 8) = uVar1;
    if (local_res10[0] == 0) {
      *(uint *)(param_1 + 4) = uVar2 * 8;
    }
    return local_res10[0];
  }
  return 0;
}



// FUNCTION 143c5e4e0 FUN_143c5e4e0 body=185 status=ok
// SIG undefined FUN_143c5e4e0(void)

int FUN_143c5e4e0(uint *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int local_res8 [2];
  
  uVar5 = *param_1 + 1;
  if (param_1[1] < uVar5) {
    uVar4 = *param_1 + 8 & 0xfffffff8;
    local_res8[0] = 0;
    uVar3 = FUN_143c27410(param_2,0x18,param_1[1],uVar4,*(undefined8 *)(param_1 + 2),local_res8);
    *(undefined8 *)(param_1 + 2) = uVar3;
    if (local_res8[0] != 0) {
      *param_3 = 0;
      return local_res8[0];
    }
    param_1[1] = uVar4;
  }
  lVar2 = *(longlong *)(param_1 + 2);
  lVar1 = (ulonglong)uVar5 - 1;
  *(undefined4 *)(lVar2 + lVar1 * 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x10 + lVar1 * 0x18) = 0;
  *param_1 = uVar5;
  *param_3 = lVar2 + lVar1 * 0x18;
  return 0;
}



// FUNCTION 143c5e5a0 FUN_143c5e5a0 body=126 status=ok
// SIG undefined FUN_143c5e5a0(void)

void FUN_143c5e5a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  for (iVar2 = *(int *)((longlong)param_1 + 4); iVar2 != 0; iVar2 = iVar2 + -1) {
    ft_mem_free(param_2,puVar1[1]);
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 3;
  }
  ft_mem_free(param_2,param_1[1]);
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 143c5e620 FUN_143c5e620 body=360 status=ok
// SIG undefined FUN_143c5e620(void)

ulonglong FUN_143c5e620(uint *param_1,uint param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined8 *_Dst;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  
  uVar10 = 0;
  uVar12 = param_3;
  if (param_3 < param_2) {
    uVar12 = param_2;
    param_2 = param_3;
  }
  if ((param_2 < uVar12) && (uVar12 < *param_1)) {
    lVar5 = *(longlong *)(param_1 + 2);
    uVar11 = *(uint *)(lVar5 + (ulonglong)param_2 * 0x18);
    puVar1 = (uint *)(lVar5 + (ulonglong)param_2 * 0x18);
    uVar4 = *(uint *)(lVar5 + (ulonglong)uVar12 * 0x18);
    _Dst = (undefined8 *)(lVar5 + (ulonglong)uVar12 * 0x18);
    if (uVar4 != 0) {
      if (uVar11 < uVar4) {
        uVar9 = FUN_143c5e450(puVar1,uVar4,param_4);
        uVar10 = uVar9 & 0xffffffff;
        if ((int)uVar9 != 0) {
          return uVar9;
        }
        if (uVar11 < uVar4) {
          uVar9 = (ulonglong)uVar11;
          do {
            if (uVar11 < *puVar1) {
              pbVar13 = (byte *)((uVar9 >> 3) + *(longlong *)(puVar1 + 2));
              *pbVar13 = *pbVar13 & ~(byte)(0x80 >> ((byte)uVar11 & 7));
            }
            uVar11 = uVar11 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar11 < uVar4);
        }
      }
      pbVar13 = (byte *)_Dst[1];
      pbVar6 = *(byte **)(puVar1 + 2);
      for (uVar11 = uVar4 + 7 >> 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        bVar3 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        *pbVar6 = *pbVar6 | bVar3;
        pbVar6 = pbVar6 + 1;
      }
    }
    *(undefined4 *)_Dst = 0;
    *(undefined4 *)(_Dst + 2) = 0;
    uVar12 = (*param_1 - uVar12) - 1;
    if (0 < (int)uVar12) {
      uVar7 = *_Dst;
      uVar8 = _Dst[1];
      uVar2 = _Dst[2];
      _guard_xfg_dispatch_icall_nop(_Dst,_Dst + 3,(ulonglong)uVar12 * 0x18);
      _Dst[(longlong)(int)uVar12 * 3] = uVar7;
      (_Dst + (longlong)(int)uVar12 * 3)[1] = uVar8;
      _Dst[(longlong)(int)uVar12 * 3 + 2] = uVar2;
    }
    *param_1 = *param_1 - 1;
  }
  return uVar10;
}



// FUNCTION 143c5e790 FUN_143c5e790 body=257 status=ok
// SIG undefined FUN_143c5e790(void)

ulonglong FUN_143c5e790(int *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar9 = 0;
  uVar11 = *param_1 - 1;
  if ((int)uVar11 < 1) {
    return 0;
  }
  do {
    uVar1 = uVar11 - 1;
    if (0 < (int)uVar11) {
      lVar4 = *(longlong *)(param_1 + 2);
      pbVar5 = *(byte **)(lVar4 + 8 + (ulonglong)uVar11 * 0x18);
      uVar2 = *(uint *)(lVar4 + (ulonglong)uVar11 * 0x18);
      uVar10 = uVar1;
      do {
        uVar7 = (ulonglong)uVar10;
        pbVar8 = *(byte **)(lVar4 + 8 + uVar7 * 0x18);
        uVar3 = *(uint *)(lVar4 + uVar7 * 0x18);
        pbVar6 = pbVar5;
        if (uVar2 < uVar3) {
          uVar3 = uVar2;
        }
        for (; 7 < uVar3; uVar3 = uVar3 - 8) {
          if ((*pbVar6 & *pbVar8) != 0) goto LAB_143c5e848;
          pbVar8 = pbVar8 + 1;
          pbVar6 = pbVar6 + 1;
        }
        if ((uVar3 != 0) && (((uint)(*pbVar8 & *pbVar6) & ~(0xff >> ((byte)uVar3 & 0x1f))) != 0)) {
LAB_143c5e848:
          uVar7 = FUN_143c5e620(param_1,uVar7,uVar11,param_2);
          uVar9 = uVar7 & 0xffffffff;
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          break;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    uVar11 = uVar1;
    if ((int)uVar1 < 1) {
      return uVar9;
    }
  } while( true );
}



// FUNCTION 143c5e8a0 FUN_143c5e8a0 body=241 status=ok
// SIG undefined FUN_143c5e8a0(void)

ulonglong FUN_143c5e8a0(uint *param_1,longlong param_2,ulonglong param_3,int param_4,
                       undefined8 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  int *local_res8;
  
  uVar2 = 0;
  if (*param_1 == 0) {
    uVar1 = FUN_143c5e4e0(param_1,param_5,&local_res8);
    uVar2 = (ulonglong)uVar1;
    if (uVar1 == 0) goto LAB_143c5e8f9;
  }
  else {
    local_res8 = (int *)(*(longlong *)(param_1 + 2) + ((ulonglong)*param_1 * 3 + -3) * 8);
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
LAB_143c5e8f9:
  uVar2 = FUN_143c5e450(local_res8,param_4,param_5);
  uVar8 = uVar2 & 0xffffffff;
  if ((int)uVar2 == 0) {
    pbVar6 = *(byte **)(local_res8 + 2);
    *local_res8 = param_4;
    pbVar7 = (byte *)(((param_3 & 0xffffffff) >> 3) + param_2);
    iVar5 = 0x80 >> ((byte)param_3 & 7);
    iVar4 = 0x80;
    for (; param_4 != 0; param_4 = param_4 + -1) {
      bVar3 = *pbVar6 & ~(byte)iVar4;
      if ((*pbVar7 & (byte)iVar5) != 0) {
        bVar3 = bVar3 | (byte)iVar4;
      }
      iVar5 = iVar5 >> 1;
      *pbVar6 = bVar3;
      if (iVar5 == 0) {
        pbVar7 = pbVar7 + 1;
        iVar5 = 0x80;
      }
      iVar4 = iVar4 >> 1;
      if (iVar4 == 0) {
        pbVar6 = pbVar6 + 1;
        iVar4 = 0x80;
      }
      uVar2 = uVar8;
    }
  }
  return uVar2;
}



// FUNCTION 143c5e9a0 FUN_143c5e9a0 body=501 status=ok
// SIG undefined FUN_143c5e9a0(void)

void FUN_143c5e9a0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint local_res10;
  
  if (param_2 < 0x20c49ba) {
    *(bool *)(param_1 + 0x208) = param_2 * 0x7d < param_1[0x204] << 3;
  }
  else {
    *(bool *)(param_1 + 0x208) = param_2 < (param_1[0x204] << 3) / 0x7d;
  }
  iVar5 = param_1[0x205];
  while ((0 < iVar5 && (iVar1 = FUN_143c22100(iVar5,param_2), 0x20 < iVar1))) {
    iVar5 = iVar5 + -1;
  }
  param_1[0x206] = iVar5;
  local_res10 = 0;
  uVar6 = 0;
  do {
    piVar2 = param_1;
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        piVar2 = param_1 + 0x81;
      }
      else if (uVar6 == 2) {
        piVar2 = param_1 + 0x102;
      }
      else {
        piVar2 = param_1 + 0x183;
      }
    }
    iVar5 = *piVar2;
    piVar2 = piVar2 + 1;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      iVar1 = FUN_143c22100(piVar2[2],param_2);
      piVar2[7] = iVar1 + param_3;
      iVar1 = FUN_143c22100(piVar2[3],param_2);
      piVar2[6] = iVar1 + param_3;
      iVar1 = FUN_143c22100(*piVar2,param_2);
      piVar2[4] = iVar1 + param_3;
      iVar1 = FUN_143c22100(piVar2[1],param_2);
      piVar2[5] = iVar1;
      piVar2[4] = piVar2[4] + 0x20U & 0xffffffc0;
      piVar2 = piVar2 + 8;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  do {
    if (local_res10 == 0) {
      piVar2 = param_1 + 0x102;
      piVar3 = param_1;
    }
    else {
      piVar2 = param_1 + 0x183;
      piVar3 = param_1 + 0x81;
    }
    piVar7 = piVar3 + 1;
    for (iVar5 = *piVar3; iVar5 != 0; iVar5 = iVar5 + -1) {
      piVar3 = piVar2 + 1;
      for (iVar1 = *piVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar4 = *piVar7 - *piVar3;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        iVar4 = FUN_143c22100(iVar4,param_2);
        if (iVar4 < 0x40) {
          piVar7[7] = piVar3[7];
          piVar7[6] = piVar3[6];
          piVar7[4] = piVar3[4];
          piVar7[5] = piVar3[5];
          break;
        }
        piVar3 = piVar3 + 8;
      }
      piVar7 = piVar7 + 8;
    }
    local_res10 = local_res10 + 1;
    if (1 < local_res10) {
      return;
    }
  } while( true );
}



// FUNCTION 143c5eba0 FUN_143c5eba0 body=369 status=ok
// SIG undefined FUN_143c5eba0(void)

void FUN_143c5eba0(uint *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  
  if (param_7 == 0) {
    puVar7 = param_1 + 0x81;
    puVar4 = param_1;
  }
  else {
    puVar7 = param_1 + 0x183;
    puVar4 = param_1 + 0x102;
  }
  *puVar4 = 0;
  *puVar7 = 0;
  FUN_143c5ed20(param_1,0,param_2,param_3,puVar4,puVar7);
  FUN_143c5ed20(param_1,1,param_4,param_5,puVar4,puVar7);
  uVar3 = *puVar4;
  uVar1 = *puVar7;
  if (uVar3 != 0) {
    puVar5 = puVar4 + 1;
    uVar8 = uVar3;
    do {
      if ((1 < uVar8) && ((int)(puVar5[8] - *puVar5) < (int)puVar5[1])) {
        puVar5[1] = puVar5[8] - *puVar5;
      }
      puVar5[3] = *puVar5;
      puVar5[2] = *puVar5 + puVar5[1];
      puVar5 = puVar5 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (uVar1 != 0) {
    puVar5 = puVar7 + 1;
    uVar8 = uVar1;
    do {
      if ((1 < uVar8) && ((int)puVar5[1] < (int)(*puVar5 - puVar5[8]))) {
        puVar5[1] = *puVar5 - puVar5[8];
      }
      puVar5[2] = *puVar5;
      puVar5[3] = *puVar5 + puVar5[1];
      puVar5 = puVar5 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  iVar6 = 1;
  do {
    puVar5 = puVar4 + 1;
    if (uVar3 != 0) {
      puVar4[4] = puVar4[4] - param_6;
      uVar8 = puVar4[3];
      iVar9 = uVar3 - 1;
      if (iVar9 != 0) {
        puVar4 = puVar5;
        do {
          iVar2 = puVar4[0xb] - uVar8;
          if (iVar2 < param_6 * 2) {
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            uVar3 = (iVar2 >> 1) + uVar8;
            puVar4[2] = uVar3;
          }
          else {
            uVar3 = puVar4[0xb] - param_6;
            puVar4[2] = uVar8 + param_6;
          }
          puVar4[0xb] = uVar3;
          puVar5 = puVar4 + 8;
          uVar8 = puVar4[10];
          iVar9 = iVar9 + -1;
          puVar4 = puVar5;
        } while (iVar9 != 0);
      }
      puVar5[2] = uVar8 + param_6;
    }
    iVar6 = iVar6 + -1;
    uVar3 = uVar1;
    puVar4 = puVar7;
  } while (-1 < iVar6);
  return;
}



// FUNCTION 143c5ed20 FUN_143c5ed20 body=311 status=ok
// SIG undefined FUN_143c5ed20(void)

void FUN_143c5ed20(undefined8 param_1,char param_2,uint param_3,short *param_4,uint *param_5,
                  uint *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  
  bVar1 = true;
  uVar9 = *param_5;
  uVar11 = *param_6;
  if (1 < param_3) {
    uVar10 = (ulonglong)((param_3 - 2 >> 1) + 1);
    do {
      bVar5 = false;
      if ((bVar1) || (param_2 != '\0')) {
        uVar12 = (uint)param_4[1];
        uVar13 = (int)*param_4 - uVar12;
        bVar1 = false;
        uVar6 = uVar11;
        puVar8 = param_6;
      }
      else {
        uVar12 = (uint)*param_4;
        uVar13 = (int)param_4[1] - uVar12;
        bVar5 = true;
        uVar6 = uVar9;
        puVar8 = param_5;
      }
      puVar8 = puVar8 + 1;
      if (uVar6 != 0) {
        while( true ) {
          uVar7 = (ulonglong)uVar6;
          if ((int)uVar12 < (int)*puVar8) break;
          if (uVar12 == *puVar8) {
            if ((int)uVar13 < 0) {
              if ((int)uVar13 < (int)puVar8[1]) {
                puVar8[1] = uVar13;
              }
            }
            else if ((int)puVar8[1] < (int)uVar13) {
              puVar8[1] = uVar13;
            }
            goto LAB_143c5ee25;
          }
          puVar8 = puVar8 + 8;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_143c5ee13;
        }
        if (uVar6 != 0) {
          puVar14 = puVar8 + uVar7 * 8;
          do {
            uVar6 = (int)uVar7 - 1;
            uVar7 = (ulonglong)uVar6;
            uVar2 = *(undefined8 *)(puVar8 + (ulonglong)uVar6 * 8 + 2);
            uVar3 = *(undefined8 *)(puVar8 + (ulonglong)uVar6 * 8 + 4);
            uVar4 = *(undefined8 *)(puVar8 + (ulonglong)uVar6 * 8 + 4 + 2);
            *(undefined8 *)puVar14 = *(undefined8 *)(puVar8 + (ulonglong)uVar6 * 8);
            *(undefined8 *)(puVar14 + 2) = uVar2;
            *(undefined8 *)(puVar14 + 4) = uVar3;
            *(undefined8 *)(puVar14 + 6) = uVar4;
            puVar14 = puVar14 + -8;
          } while (uVar6 != 0);
        }
      }
LAB_143c5ee13:
      *puVar8 = uVar12;
      puVar8[1] = uVar13;
      if (bVar5) {
        uVar9 = uVar9 + 1;
      }
      else {
        uVar11 = uVar11 + 1;
      }
LAB_143c5ee25:
      param_4 = param_4 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  *param_5 = uVar9;
  *param_6 = uVar11;
  return;
}



// FUNCTION 143c5ee60 FUN_143c5ee60 body=258 status=ok
// SIG undefined FUN_143c5ee60(void)

void FUN_143c5ee60(int *param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  *param_4 = 0;
  piVar2 = param_1 + 1;
  iVar4 = *param_1;
  iVar1 = param_1[0x208];
  if (iVar4 != 0) {
    while (-param_1[0x207] <= param_2 - piVar2[3]) {
      if (param_2 <= piVar2[2] + param_1[0x207]) {
        if (((char)iVar1 != '\0') || (param_2 - piVar2[3] <= param_1[0x206])) {
          *param_4 = 1;
          param_4[1] = piVar2[4];
        }
        break;
      }
      piVar2 = piVar2 + 8;
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) break;
    }
  }
  uVar3 = param_1[0x81];
  piVar2 = param_1 + (ulonglong)uVar3 * 8 + 0x7a;
  if (uVar3 != 0) {
    while (-param_1[0x207] <= piVar2[2] - param_3) {
      if (piVar2[3] - param_1[0x207] <= param_3) {
        if (((char)iVar1 == '\0') && (param_1[0x206] <= piVar2[2] - param_3)) {
          return;
        }
        *param_4 = *param_4 | 2;
        param_4[2] = piVar2[4];
        return;
      }
      piVar2 = piVar2 + -8;
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c5efb0 FUN_143c5efb0 body=652 status=ok
// SIG undefined FUN_143c5efb0(void)

int FUN_143c5efb0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  short *psVar5;
  short sVar6;
  uint uVar7;
  short sVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  int local_res20 [2];
  
  puVar4 = (undefined8 *)FUN_143c271e0(param_1,0x9c8,local_res20);
  if (local_res20[0] != 0) {
    *param_3 = (longlong)puVar4;
    return local_res20[0];
  }
  *puVar4 = param_1;
  *(uint *)(puVar4 + 0x1b) = (uint)*(ushort *)(param_2 + 0x78);
  piVar10 = (int *)((longlong)puVar4 + 0xe4);
  uVar7 = (uint)*(byte *)(param_2 + 0x7c);
  psVar5 = (short *)(param_2 + 0x80);
  if (*(byte *)(param_2 + 0x7c) != 0) {
    do {
      sVar8 = *psVar5;
      psVar5 = psVar5 + 1;
      *piVar10 = (int)sVar8;
      piVar10 = piVar10 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  psVar5 = (short *)(param_2 + 0x9a);
  *(uint *)((longlong)puVar4 + 0xd4) = *(byte *)(param_2 + 0x7c) + 1;
  *(uint *)((longlong)puVar4 + 0xc) = (uint)*(ushort *)(param_2 + 0x7a);
  piVar10 = (int *)(puVar4 + 3);
  uVar7 = (uint)*(byte *)(param_2 + 0x7d);
  if (*(byte *)(param_2 + 0x7d) != 0) {
    do {
      sVar8 = *psVar5;
      psVar5 = psVar5 + 1;
      *piVar10 = (int)sVar8;
      piVar10 = piVar10 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar1 = param_2 + 0x28;
  *(uint *)(puVar4 + 1) = *(byte *)(param_2 + 0x7d) + 1;
  FUN_143c5eba0(puVar4 + 0x34,*(undefined1 *)(param_2 + 8),param_2 + 0xc,
                *(undefined1 *)(param_2 + 9),lVar1,*(undefined4 *)(param_2 + 0x74),0);
  lVar2 = param_2 + 0x58;
  sVar8 = 1;
  FUN_143c5eba0(puVar4 + 0x34,*(undefined1 *)(param_2 + 10),param_2 + 0x3c,
                *(undefined1 *)(param_2 + 0xb),lVar2,*(undefined4 *)(param_2 + 0x74),1);
  uVar9 = 0;
  uVar11 = uVar9;
  if (*(byte *)(param_2 + 8) != 0) {
    do {
      sVar6 = *(short *)(param_2 + 0xc + (ulonglong)((int)uVar11 + 1) * 2) -
              *(short *)(param_2 + 0xc + uVar11 * 2);
      if (sVar8 < sVar6) {
        sVar8 = sVar6;
      }
      uVar7 = (int)uVar11 + 2;
      uVar11 = (ulonglong)uVar7;
    } while (uVar7 < *(byte *)(param_2 + 8));
  }
  uVar11 = uVar9;
  if (*(byte *)(param_2 + 9) != 0) {
    do {
      sVar6 = *(short *)(lVar1 + (ulonglong)((int)uVar11 + 1) * 2) - *(short *)(lVar1 + uVar11 * 2);
      if (sVar8 < sVar6) {
        sVar8 = sVar6;
      }
      uVar7 = (int)uVar11 + 2;
      uVar11 = (ulonglong)uVar7;
    } while (uVar7 < *(byte *)(param_2 + 9));
  }
  uVar11 = uVar9;
  if (*(byte *)(param_2 + 10) != 0) {
    do {
      sVar6 = *(short *)(param_2 + 0x3c + (ulonglong)((int)uVar11 + 1) * 2) -
              *(short *)(param_2 + 0x3c + uVar11 * 2);
      if (sVar8 < sVar6) {
        sVar8 = sVar6;
      }
      uVar7 = (int)uVar11 + 2;
      uVar11 = (ulonglong)uVar7;
    } while (uVar7 < *(byte *)(param_2 + 10));
  }
  if (*(byte *)(param_2 + 0xb) != 0) {
    do {
      sVar6 = *(short *)(lVar2 + (ulonglong)((int)uVar9 + 1) * 2) - *(short *)(lVar2 + uVar9 * 2);
      if (sVar8 < sVar6) {
        sVar8 = sVar6;
      }
      uVar7 = (int)uVar9 + 2;
      uVar9 = (ulonglong)uVar7;
    } while (uVar7 < *(byte *)(param_2 + 0xb));
  }
  iVar3 = FUN_143c20070(1000,(int)sVar8);
  if (*(int *)(param_2 + 0x6c) < iVar3) {
    iVar3 = *(int *)(param_2 + 0x6c);
  }
  *(int *)(puVar4 + 0x136) = iVar3;
  *(undefined4 *)((longlong)puVar4 + 0x9b4) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)puVar4 + 0x9bc) = *(undefined4 *)(param_2 + 0x74);
  *(undefined8 *)((longlong)puVar4 + 0xcc) = 0;
  puVar4[0x33] = 0;
  *param_3 = (longlong)puVar4;
  return local_res20[0];
}



// FUNCTION 143c5f240 FUN_143c5f240 body=154 status=ok
// SIG undefined FUN_143c5f240(void)

void FUN_143c5f240(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  
  lVar7 = (param_2 & 0xffffffff) * 0xcc;
  iVar2 = *(int *)(lVar7 + 8 + param_1);
  lVar1 = lVar7 + param_1;
  uVar3 = *(undefined4 *)(lVar7 + 0xcc + param_1);
  if (iVar2 != 0) {
    iVar4 = FUN_143c22100(*(undefined4 *)(lVar1 + 0xc),uVar3);
    *(int *)(lVar1 + 0x10) = iVar4;
    *(uint *)(lVar1 + 0x14) = iVar4 + 0x20U & 0xffffffc0;
    puVar8 = (undefined4 *)(lVar1 + 0x18);
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      iVar5 = FUN_143c22100(*puVar8,uVar3);
      iVar4 = *(int *)(lVar1 + 0x10);
      iVar6 = iVar5 - iVar4;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (iVar6 < 0x80) {
        iVar5 = iVar4;
      }
      puVar8[1] = iVar5;
      puVar8[2] = iVar5 + 0x20U & 0xffffffc0;
      puVar8 = puVar8 + 3;
    }
  }
  return;
}



// FUNCTION 143c5f2e0 FUN_143c5f2e0 body=136 status=ok
// SIG undefined FUN_143c5f2e0(void)

void FUN_143c5f2e0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_2 != *(int *)(param_1 + 0xcc)) || (param_4 != *(int *)(param_1 + 0xd0))) {
    *(int *)(param_1 + 0xcc) = param_2;
    *(int *)(param_1 + 0xd0) = param_4;
    FUN_143c5f240(param_1,0);
  }
  if ((param_3 != *(int *)(param_1 + 0x198)) || (param_5 != *(int *)(param_1 + 0x19c))) {
    *(int *)(param_1 + 0x198) = param_3;
    *(int *)(param_1 + 0x19c) = param_5;
    FUN_143c5f240(param_1,1);
    FUN_143c5e9a0(param_1 + 0x1a0,param_3,param_5);
  }
  return;
}



// FUNCTION 143c5f370 FUN_143c5f370 body=305 status=ok
// SIG undefined FUN_143c5f370(void)

void FUN_143c5f370(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1[1] != 0) {
    do {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 4) + (ulonglong)uVar7 * 0x10);
      plVar5 = plVar6;
      if (*(int *)(*(longlong *)(param_1 + 4) + 8 + (ulonglong)uVar7 * 0x10) != 0) {
        do {
          plVar5 = (longlong *)*plVar5;
          if (plVar5 == plVar6) goto LAB_143c5f496;
        } while (*(int *)(plVar5 + 6) == (int)plVar6[6]);
        plVar6 = (longlong *)plVar5[1];
        plVar4 = plVar6;
        plVar3 = plVar6;
LAB_143c5f3d3:
        do {
          plVar4 = (longlong *)plVar4[1];
          if (plVar4 == plVar6) break;
          iVar2 = (int)plVar3[6];
          if ((int)plVar4[6] != iVar2) {
            if (*(int *)((longlong)plVar5 + 0x30) < iVar2) {
              if (iVar2 <= (int)plVar4[6]) {
                plVar5 = (longlong *)*plVar4;
                plVar3 = plVar4;
                goto LAB_143c5f3d3;
              }
LAB_143c5f400:
              do {
                *(uint *)((longlong)plVar3 + 0x1c) = *(uint *)((longlong)plVar3 + 0x1c) | 0x40;
                plVar3 = (longlong *)plVar3[1];
              } while (plVar3 != plVar4);
            }
            else if (iVar2 < (int)plVar4[6]) goto LAB_143c5f400;
            plVar5 = (longlong *)*plVar4;
            plVar3 = plVar4;
          }
        } while( true );
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_1[1]);
  }
  uVar7 = 0;
  do {
    if (*param_1 <= uVar7) {
      return;
    }
    plVar4 = (longlong *)((ulonglong)uVar7 * 0x40 + *(longlong *)(param_1 + 2));
    uVar1 = *(uint *)((longlong)plVar4 + 0x1c);
    plVar5 = plVar4;
    plVar6 = plVar4;
    if ((uVar1 & 0x40) != 0) {
      do {
        plVar6 = (longlong *)*plVar6;
        if (plVar6 == plVar4) goto LAB_143c5f496;
      } while (*(int *)((longlong)plVar6 + 0x34) == *(int *)((longlong)plVar4 + 0x34));
      do {
        plVar5 = (longlong *)plVar5[1];
        if (plVar5 == plVar4) goto LAB_143c5f496;
      } while (*(int *)((longlong)plVar5 + 0x34) == *(int *)((longlong)plVar4 + 0x34));
    }
    iVar2 = *(int *)((longlong)plVar4 + 0x34);
    if ((*(int *)((longlong)plVar6 + 0x34) < iVar2) && (iVar2 < *(int *)((longlong)plVar5 + 0x34)))
    {
      *(uint *)((longlong)plVar4 + 0x1c) = uVar1 | 0x80;
      uVar7 = uVar7 + 1;
    }
    else {
      if ((iVar2 < *(int *)((longlong)plVar6 + 0x34)) && (*(int *)((longlong)plVar5 + 0x34) < iVar2)
         ) {
        *(uint *)((longlong)plVar4 + 0x1c) = uVar1 | 0x100;
      }
LAB_143c5f496:
      uVar7 = uVar7 + 1;
    }
  } while( true );
}



// FUNCTION 143c5f4b0 FUN_143c5f4b0 body=448 status=ok
// SIG undefined FUN_143c5f4b0(void)

void FUN_143c5f4b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint local_res10;
  uint local_res18;
  
  local_res10 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      bVar2 = false;
      if (3 < *(uint *)(*(longlong *)(param_1 + 0x10) + 8 + (ulonglong)local_res10 * 0x10)) {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x10) + (ulonglong)local_res10 * 0x10);
        plVar7 = plVar8;
        do {
          plVar7 = (longlong *)plVar7[1];
          if (plVar7 == plVar8) goto LAB_143c5f63b;
          iVar3 = (int)plVar7[6] - (int)plVar8[6];
          iVar11 = *(int *)((longlong)plVar7 + 0x34) - *(int *)((longlong)plVar8 + 0x34);
          plVar1 = plVar8;
        } while ((iVar3 == 0) && (iVar11 == 0));
        do {
          plVar5 = plVar1;
          plVar1 = (longlong *)*plVar5;
          if (plVar1 == plVar8) goto LAB_143c5f63b;
          iVar10 = (int)plVar5[6] - *(int *)(plVar1 + 6);
          iVar9 = *(int *)((longlong)plVar5 + 0x34) - *(int *)((longlong)plVar1 + 0x34);
        } while (((iVar10 == 0) && (iVar9 == 0)) ||
                (local_res18 = FUN_143c26820(iVar3,iVar11,iVar10,iVar9), plVar6 = plVar5,
                local_res18 == 0));
        do {
          do {
            plVar8 = plVar7;
            plVar7 = (longlong *)plVar8[1];
            if (plVar7 == plVar5) {
              bVar2 = true;
            }
            iVar11 = (int)plVar7[6] - (int)plVar8[6];
            iVar3 = *(int *)((longlong)plVar7 + 0x34) - *(int *)((longlong)plVar8 + 0x34);
          } while (((iVar11 == 0) && (iVar3 == 0)) ||
                  (uVar4 = FUN_143c26820(iVar10,iVar9,iVar11,iVar3), uVar4 == 0));
          if ((int)(uVar4 ^ local_res18) < 0) {
            do {
              *(uint *)(plVar6 + 3) = *(uint *)(plVar6 + 3) | 4;
              plVar6 = (longlong *)plVar6[1];
            } while (plVar6 != plVar8);
            *(uint *)(plVar6 + 3) = *(uint *)(plVar6 + 3) | 4;
          }
          local_res18 = uVar4;
          iVar10 = iVar11;
          iVar9 = iVar3;
          plVar6 = plVar8;
        } while (!bVar2);
      }
LAB_143c5f63b:
      local_res10 = local_res10 + 1;
    } while (local_res10 < *(uint *)(param_1 + 4));
  }
  return;
}



// FUNCTION 143c5f680 FUN_143c5f680 body=232 status=ok
// SIG undefined FUN_143c5f680(void)

void FUN_143c5f680(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[3];
  ft_mem_free(uVar1,param_1[0x14]);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  ft_mem_free(uVar1,param_1[0x11]);
  param_1[0x11] = 0;
  ft_mem_free(uVar1,param_1[0x10]);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  ft_mem_free(uVar1,param_1[0xb]);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  ft_mem_free(uVar1,param_1[8]);
  param_1[8] = 0;
  ft_mem_free(uVar1,param_1[7]);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  ft_mem_free(uVar1,param_1[1]);
  param_1[1] = 0;
  ft_mem_free(uVar1,param_1[2]);
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 143c5f770 FUN_143c5f770 body=299 status=ok
// SIG undefined FUN_143c5f770(void)

void FUN_143c5f770(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = *param_2;
  if (iVar5 != 0) {
    puVar3 = (uint *)(*(longlong *)(param_2 + 2) + 0x1c);
    do {
      if (((((char)puVar3[1] + 2U & 0xfb) == 0) ||
          ((*(char *)((longlong)puVar3 + 5) + 2U & 0xfb) == 0)) && ((*puVar3 & 0x10) == 0)) {
        iVar7 = *param_1;
        uVar1 = puVar3[5];
        if (iVar7 != 0) {
          piVar4 = param_1 + 3;
          do {
            if ((int)(uVar1 - piVar4[1]) < -param_1[0x207]) break;
            if (((int)uVar1 <= param_1[0x207] + *piVar4) &&
               (((char)param_1[0x208] != '\0' || ((int)(uVar1 - piVar4[1]) <= param_1[0x206])))) {
              uVar6 = piVar4[4];
              *puVar3 = *puVar3 | 0x30;
              puVar3[7] = uVar6;
            }
            piVar4 = piVar4 + 8;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        uVar6 = param_1[0x81];
        if (uVar6 != 0) {
          piVar4 = param_1 + (ulonglong)uVar6 * 8 + 0x7d;
          do {
            if ((int)(piVar4[-1] - uVar1) < -param_1[0x207]) break;
            if ((*piVar4 - param_1[0x207] <= (int)uVar1) &&
               (((char)param_1[0x208] != '\0' || ((int)(piVar4[-1] - uVar1) < param_1[0x206])))) {
              uVar2 = piVar4[4];
              *puVar3 = *puVar3 | 0x30;
              puVar3[7] = uVar2;
            }
            piVar4 = piVar4 + -8;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      puVar3 = puVar3 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 143c5f8a0 FUN_143c5f8a0 body=392 status=ok
// SIG undefined FUN_143c5f8a0(void)

void FUN_143c5f8a0(uint *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  puVar6 = param_1 + ((longlong)param_2 * 9 + 6) * 2;
  cVar7 = (param_2 != 0) + '\x01';
  lVar1 = *(longlong *)(*(uint **)(puVar6 + 0xe) + 2);
  uVar10 = **(uint **)(puVar6 + 0xe);
  iVar5 = FUN_143c20070(0x20,*(undefined4 *)
                              (((longlong)param_2 + 1) * 0xcc + *(longlong *)(param_1 + 10)));
  if (0x1e < iVar5) {
    iVar5 = 0x1e;
  }
  if ((1 < uVar10) && (uVar8 = *param_1, uVar8 != 0)) {
    uVar9 = (ulonglong)(uVar10 - 1);
    uVar4 = *(uint *)(lVar1 + 0x10);
    if (uVar8 < *(uint *)(lVar1 + 0x10)) {
      uVar4 = uVar8;
    }
    do {
      uVar8 = *param_1;
      if (*(uint *)(lVar1 + 0x28) < *param_1) {
        uVar8 = *(uint *)(lVar1 + 0x28);
      }
      if (uVar4 < uVar8) {
        lVar2 = *(longlong *)(param_1 + 2);
        FUN_143c606d0(puVar6,lVar1 + 0x18);
        FUN_143c60b70(puVar6,(ulonglong)uVar4 * 0x40 + lVar2,uVar8 - uVar4,iVar5,cVar7);
      }
      uVar10 = uVar10 - 1;
      uVar9 = uVar9 - 1;
      uVar4 = uVar8;
      lVar1 = lVar1 + 0x18;
    } while (uVar9 != 0);
  }
  if (uVar10 == 1) {
    uVar10 = *param_1;
    uVar3 = *(undefined8 *)(param_1 + 2);
    FUN_143c606d0(puVar6,*(undefined8 *)(*(longlong *)(puVar6 + 0xe) + 8));
    FUN_143c60b70(puVar6,uVar3,uVar10,iVar5,cVar7);
  }
  uVar10 = *param_1;
  if (uVar10 != 0) {
    puVar6 = (uint *)(*(longlong *)(param_1 + 2) + 0x1c);
    do {
      if ((*(longlong *)(puVar6 + 3) != 0) && ((*puVar6 & 0x10) == 0)) {
        *puVar6 = *puVar6 | 0x10;
      }
      puVar6 = puVar6 + 0x10;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 143c5fa30 FUN_143c5fa30 body=950 status=ok
// SIG undefined FUN_143c5fa30(void)

void FUN_143c5fa30(uint *param_1,short *param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  short sVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  char cVar16;
  uint uVar17;
  ulonglong uVar18;
  char cVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  longlong *plVar24;
  uint uVar25;
  int local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  undefined8 *local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  _guard_xfg_dispatch_icall_nop(param_1,0,0xd8);
  uVar3 = *param_4;
  uVar15 = 0;
  *(undefined8 *)(param_1 + 6) = uVar3;
  uVar7 = FUN_143c27410(uVar3,0x40,0,(int)param_2[1],0,local_res8);
  *(undefined8 *)(param_1 + 2) = uVar7;
  if (local_res8[0] == 0) {
    puVar8 = (undefined8 *)FUN_143c27410(uVar3,0x10,0,(int)*param_2,0,local_res8);
    *(undefined8 **)(param_1 + 4) = puVar8;
    if (local_res8[0] == 0) {
      lVar4 = *(longlong *)(param_1 + 2);
      *param_1 = (int)param_2[1];
      sVar2 = *param_2;
      param_1[1] = (int)sVar2;
      uVar22 = uVar15;
      uVar18 = uVar15;
      if (sVar2 != 0) {
        do {
          uVar20 = (int)*(short *)(*(longlong *)(param_2 + 0xc) + uVar22 * 2) + 1;
          uVar17 = uVar20 - (int)uVar18;
          plVar24 = (longlong *)(uVar18 * 0x40 + lVar4);
          *(uint *)(puVar8 + 1) = uVar17;
          *puVar8 = plVar24;
          if (uVar17 != 0) {
            plVar24[2] = (longlong)puVar8;
            *plVar24 = (ulonglong)uVar20 * 0x40 + -0x40 + lVar4;
            plVar10 = plVar24;
            if (1 < uVar17) {
              uVar18 = (ulonglong)(uVar17 - 1);
              plVar9 = plVar24;
              do {
                plVar9[8] = (longlong)plVar9;
                plVar10 = plVar9 + 8;
                plVar9[1] = (longlong)plVar10;
                plVar9[10] = (longlong)puVar8;
                uVar18 = uVar18 - 1;
                plVar9 = plVar10;
              } while (uVar18 != 0);
            }
            plVar10[1] = (longlong)plVar24;
          }
          puVar8 = puVar8 + 2;
          uVar17 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar17;
          uVar18 = (ulonglong)uVar20;
        } while (uVar17 < param_1[1]);
      }
      lVar4 = *(longlong *)(param_1 + 2);
      local_res10 = *(longlong *)(param_2 + 4);
      if (*param_1 != 0) {
        puVar13 = (uint *)(lVar4 + 0x18);
        do {
          if ((*(byte *)(uVar15 + *(longlong *)(param_2 + 8)) & 1) == 0) {
            *puVar13 = 1;
          }
          piVar1 = (int *)(local_res10 + uVar15 * 8);
          lVar11 = (longlong)(int)(*(longlong *)(puVar13 + -6) - lVar4 >> 6);
          uVar17 = *(int *)(local_res10 + uVar15 * 8) - *(int *)(local_res10 + lVar11 * 8);
          uVar20 = piVar1[1] - *(int *)(local_res10 + 4 + lVar11 * 8);
          iVar21 = (uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f);
          iVar23 = (uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f);
          if (iVar23 * 0xc < iVar21) {
            cVar19 = -2;
            if (-1 < (int)uVar17) {
              cVar19 = '\x02';
            }
          }
          else {
            cVar19 = '\x04';
            if ((iVar21 * 0xc < iVar23) && (cVar19 = '\x01', -1 < (int)uVar20)) {
              cVar19 = -1;
            }
          }
          lVar11 = (longlong)(int)(*(longlong *)(puVar13 + -4) - lVar4 >> 6);
          cVar16 = '\x04';
          *(char *)(puVar13 + 2) = cVar19;
          uVar14 = *(int *)(local_res10 + lVar11 * 8) - *piVar1;
          uVar25 = *(int *)(local_res10 + 4 + lVar11 * 8) - piVar1[1];
          iVar21 = (uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f);
          iVar23 = (uVar25 ^ (int)uVar25 >> 0x1f) - ((int)uVar25 >> 0x1f);
          if (iVar23 * 0xc < iVar21) {
            cVar16 = -2;
            cVar6 = '\x02';
            uVar5 = uVar14;
LAB_143c5fcd4:
            if (-1 < (int)uVar5) {
              cVar16 = cVar6;
            }
          }
          else if (iVar21 * 0xc < iVar23) {
            cVar16 = '\x01';
            cVar6 = -1;
            uVar5 = uVar25;
            goto LAB_143c5fcd4;
          }
          *(char *)((longlong)puVar13 + 9) = cVar16;
          if ((*puVar13 & 1) == 0) {
            if ((cVar19 == cVar16) &&
               ((cVar16 != '\x04' ||
                (iVar21 = FUN_143c26760(uVar17,uVar20,uVar14,uVar25), iVar21 != 0)))) {
              *puVar13 = *puVar13 | 2;
            }
          }
          else {
            *puVar13 = *puVar13 | 2;
          }
          uVar17 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar17;
          puVar13 = puVar13 + 0x10;
          param_3 = local_res18;
        } while (uVar17 < *param_1);
      }
      uVar17 = *param_1;
      *(undefined8 **)(param_1 + 10) = local_res20;
      *(short **)(param_1 + 8) = param_2;
      if (uVar17 != 0) {
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 2) + 0x28);
        puVar12 = *(undefined4 **)(param_2 + 4);
        do {
          *(undefined4 *)((longlong)puVar8 + -0xc) = 0;
          *puVar8 = 0;
          *(undefined4 *)(puVar8 + 1) = *puVar12;
          *(undefined4 *)((longlong)puVar8 + 0xc) = puVar12[1];
          uVar17 = uVar17 - 1;
          puVar8 = puVar8 + 8;
          puVar12 = puVar12 + 2;
        } while (uVar17 != 0);
      }
      FUN_143c5f4b0(param_1);
      local_res8[0] =
           FUN_143c60d90(param_1 + 0xc,param_3 + 0x18,param_3 + 0x28,param_3 + 0x38,uVar3);
      if (local_res8[0] == 0) {
        FUN_143c60d90(param_1 + 0x1e,param_3 + 0x48,param_3 + 0x58,param_3 + 0x68,uVar3);
      }
    }
  }
  return;
}



// FUNCTION 143c5fdf0 FUN_143c5fdf0 body=614 status=ok
// SIG undefined FUN_143c5fdf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c5fdf0(uint *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int *local_d0;
  int local_c8 [4];
  ulonglong local_b8 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar9 = *(ulonglong *)(param_1 + 2);
  uVar12 = 0;
  uVar3 = *(undefined8 *)(param_1 + 6);
  uVar13 = (ulonglong)*param_1 * 0x40 + uVar9;
  uVar1 = *(undefined4 *)(((longlong)param_2 + 1) * 0xcc + *(longlong *)(param_1 + 10));
  uVar7 = uVar9;
  if (uVar9 < uVar13) {
    do {
      if ((*(byte *)(uVar7 + 0x1c) & 0x10) != 0) {
        uVar12 = uVar12 + 1;
      }
      uVar7 = uVar7 + 0x40;
    } while (uVar7 < uVar13);
    if (uVar12 != 0) {
      if (uVar12 < 0x11) {
        puVar8 = local_b8;
      }
      else {
        local_d0 = local_c8;
        local_d8 = 0;
        puVar8 = (ulonglong *)FUN_143c27410(uVar3,8);
        if (local_c8[0] != 0) {
          return;
        }
      }
      uVar10 = 0;
      uVar7 = uVar9;
      do {
        if ((*(byte *)(uVar7 + 0x1c) & 0x10) != 0) {
          puVar4 = puVar8 + uVar10;
          while (puVar8 < puVar4) {
            if (*(int *)(puVar4[-1] + 0x30) <= *(int *)(uVar7 + 0x30)) break;
            *puVar4 = puVar4[-1];
            puVar4 = puVar4 + -1;
          }
          *puVar4 = uVar7;
          uVar10 = (ulonglong)((int)uVar10 + 1);
        }
        uVar7 = uVar7 + 0x40;
      } while (uVar7 < uVar13);
      puVar11 = (uint *)(uVar9 + 0x18);
      lVar14 = ((uVar13 - uVar9) - 1 >> 6) + 1;
      do {
        if ((puVar11[1] & 0x10) == 0) {
          uVar12 = *puVar11;
          if ((uVar12 & 2) != 0) {
            if ((((char)puVar11[2] == '\x04') ||
                ((char)puVar11[2] != *(char *)((longlong)puVar11 + 9))) ||
               (((puVar11[1] & 0x40) == 0 && ((uVar12 & 4) == 0)))) goto LAB_143c5fffc;
            *puVar11 = uVar12 & 0xfffffffd;
          }
          uVar9 = 0;
          uVar12 = (uint)uVar10;
          if (uVar12 == 0) {
LAB_143c5ffe1:
            uVar9 = *puVar8;
            iVar6 = puVar11[6] - *(int *)(uVar9 + 0x30);
LAB_143c5ffea:
            iVar6 = FUN_143c22100(iVar6,uVar1);
LAB_143c5fff2:
            uVar12 = iVar6 + *(int *)(uVar9 + 0x38);
          }
          else {
            uVar2 = puVar11[6];
            do {
              if ((int)uVar2 < *(int *)(puVar8[uVar9] + 0x30)) break;
              uVar5 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar5;
            } while (uVar5 < uVar12);
            if ((int)uVar9 == 0) goto LAB_143c5ffe1;
            uVar9 = puVar8[(int)uVar9 - 1];
            uVar5 = 0;
            uVar7 = uVar10;
            if (uVar12 == 0) {
LAB_143c5ffd1:
              uVar9 = puVar8[uVar5 - 1];
              iVar6 = uVar2 - *(int *)(uVar9 + 0x30);
              goto LAB_143c5ffea;
            }
            do {
              uVar5 = (int)uVar7 - 1;
              uVar13 = (ulonglong)uVar5;
              if (*(int *)(puVar8[uVar13] + 0x30) < (int)uVar2) break;
              uVar7 = uVar13;
            } while (uVar5 != 0);
            uVar5 = (uint)uVar7;
            if (uVar5 == uVar12) goto LAB_143c5ffd1;
            uVar7 = puVar8[uVar7];
            uVar12 = *(uint *)(uVar9 + 0x30);
            if (uVar2 != uVar12) {
              if (uVar2 == *(uint *)(uVar7 + 0x30)) {
                uVar12 = *(uint *)(uVar7 + 0x38);
                goto LAB_143c5fff5;
              }
              iVar6 = FUN_143c21f00(uVar2 - uVar12,*(int *)(uVar7 + 0x38) - *(int *)(uVar9 + 0x38),
                                    *(uint *)(uVar7 + 0x30) - uVar12);
              goto LAB_143c5fff2;
            }
            uVar12 = *(uint *)(uVar9 + 0x38);
          }
LAB_143c5fff5:
          puVar11[1] = puVar11[1] | 0x20;
          puVar11[8] = uVar12;
        }
LAB_143c5fffc:
        puVar11 = puVar11 + 0x10;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      if (puVar8 != local_b8) {
        ft_mem_free(uVar3,puVar8);
      }
    }
  }
  return;
}



// FUNCTION 143c60060 FUN_143c60060 body=562 status=ok
// SIG undefined FUN_143c60060(void)

void FUN_143c60060(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int local_res18;
  
  uVar1 = *(undefined4 *)((longlong)param_2 * 0xcc + 0xcc + *(longlong *)(param_1 + 0x28));
  local_res18 = *(int *)((longlong)param_2 * 0xcc + 0xd0 + *(longlong *)(param_1 + 0x28));
  iVar8 = *(int *)(param_1 + 4);
  puVar5 = *(ulonglong **)(param_1 + 0x10);
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar9 = *puVar5;
    uVar6 = 0;
    uVar13 = 0;
    uVar12 = (ulonglong)(uint)puVar5[1] * 0x40 + uVar9;
    uVar4 = uVar9;
    if (uVar9 < uVar12) {
      do {
        if ((*(byte *)(uVar4 + 0x1c) & 0x20) != 0) {
          if (uVar13 == 0) {
            uVar13 = uVar4;
          }
          uVar6 = uVar6 + 1;
        }
        uVar4 = uVar4 + 0x40;
      } while (uVar4 < uVar12);
      uVar4 = uVar13;
      if (uVar6 < 2) {
        if (uVar6 == 1) {
          local_res18 = FUN_143c22100(*(undefined4 *)(uVar13 + 0x30),uVar1);
          local_res18 = *(int *)(uVar13 + 0x38) - local_res18;
        }
        for (; uVar9 < uVar12; uVar9 = uVar9 + 0x40) {
          if (uVar9 != uVar13) {
            iVar2 = FUN_143c22100(*(undefined4 *)(uVar9 + 0x30),uVar1);
            *(int *)(uVar9 + 0x38) = iVar2 + local_res18;
          }
        }
      }
      else {
        do {
          do {
            uVar9 = uVar4;
            uVar4 = *(ulonglong *)(uVar9 + 8);
            if (uVar4 == uVar13) goto LAB_143c60247;
          } while ((*(byte *)(uVar4 + 0x1c) & 0x20) != 0);
          do {
            uVar4 = *(ulonglong *)(uVar4 + 8);
          } while ((*(byte *)(uVar4 + 0x1c) & 0x20) == 0);
          iVar2 = *(int *)(uVar9 + 0x30);
          iVar15 = *(int *)(uVar4 + 0x30);
          if (iVar15 < iVar2) {
            iVar10 = *(int *)(uVar4 + 0x38);
            iVar14 = *(int *)(uVar9 + 0x38);
            iVar11 = iVar2 - iVar15;
          }
          else {
            iVar10 = *(int *)(uVar9 + 0x38);
            iVar14 = *(int *)(uVar4 + 0x38);
            iVar11 = iVar15 - iVar2;
            iVar15 = iVar2;
          }
          uVar3 = 0x10000;
          if (0 < iVar11) {
            uVar3 = FUN_143c20070(iVar14 - iVar10,iVar11);
          }
          uVar9 = *(ulonglong *)(uVar9 + 8);
          do {
            iVar2 = *(int *)(uVar9 + 0x30) - iVar15;
            uVar7 = uVar1;
            if ((iVar2 < 1) || (uVar7 = uVar3, iVar2 < iVar11)) {
              iVar2 = FUN_143c22100(iVar2,uVar7);
            }
            else {
              iVar2 = FUN_143c22100(iVar2 - iVar11,uVar1);
              iVar2 = iVar2 + (iVar14 - iVar10);
            }
            *(int *)(uVar9 + 0x38) = iVar2 + iVar10;
            uVar9 = *(ulonglong *)(uVar9 + 8);
          } while (uVar9 != uVar4);
        } while (uVar4 != uVar13);
      }
    }
LAB_143c60247:
    iVar8 = iVar8 + -1;
    puVar5 = puVar5 + 2;
  } while( true );
}



// FUNCTION 143c602a0 FUN_143c602a0 body=177 status=ok
// SIG undefined FUN_143c602a0(void)

void FUN_143c602a0(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *param_1;
  uVar1 = *(undefined4 *)(((longlong)param_2 + 1) * 0xcc + *(longlong *)(param_1 + 10));
  if (iVar5 != 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 2) + 0x38);
    do {
      piVar2 = *(int **)(piVar4 + -4);
      if (piVar2 != (int *)0x0) {
        if (((uint)piVar4[-7] >> 9 & 1) == 0) {
          if (((uint)piVar4[-7] >> 10 & 1) == 0) {
            iVar3 = piVar4[-2] - *piVar2;
            if (iVar3 < 1) {
              iVar3 = FUN_143c22100(iVar3,uVar1);
            }
            else if (iVar3 < piVar2[1]) {
              iVar3 = FUN_143c21f00(iVar3,piVar2[3]);
            }
            else {
              iVar3 = FUN_143c22100(iVar3 - piVar2[1],uVar1);
              iVar3 = iVar3 + piVar2[3];
            }
          }
          else {
            iVar3 = piVar2[3];
          }
          iVar3 = iVar3 + piVar2[2];
        }
        else {
          iVar3 = piVar2[2];
        }
        piVar4[-7] = piVar4[-7] | 0x20;
        *piVar4 = iVar3;
      }
      piVar4 = piVar4 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 143c60360 FUN_143c60360 body=872 status=ok
// SIG undefined FUN_143c60360(void)

void FUN_143c60360(int *param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  longlong local_38;
  
  local_38 = param_2 + 8 + (longlong)param_3 * 0xcc;
  uVar1 = *(undefined4 *)(local_38 + 0xc4);
  iVar7 = *(int *)(local_38 + 200);
  if ((*(byte *)(param_1 + 4) & 8) != 0) {
    return;
  }
  iVar4 = FUN_143c22100(*param_1,uVar1);
  uVar8 = iVar7 + iVar4;
  uVar5 = FUN_143c22100(param_1[1]);
  local_58 = 0;
  if (param_3 == 0) {
    if (*(char *)(param_4 + 0xcc) == '\0') {
LAB_143c60537:
      param_1[4] = param_1[4] | 8;
      param_1[2] = uVar8;
      param_1[3] = uVar5;
      return;
    }
    if (*(char *)(param_4 + 0xce) == '\0') goto LAB_143c60400;
LAB_143c6055a:
    bVar3 = true;
  }
  else {
    if (param_3 == 1) {
      if (*(char *)(param_4 + 0xcd) == '\0') goto LAB_143c60537;
      if (*(char *)(param_4 + 0xcf) != '\0') goto LAB_143c6055a;
    }
LAB_143c60400:
    bVar3 = false;
  }
  param_1[3] = uVar5;
  local_48 = (int *)0x0;
  local_50 = 0;
  local_40 = 0;
  if (param_3 == 1) {
    FUN_143c5ee60(param_2 + 0x1a0,param_1[1] + *param_1,*param_1,&local_48);
    local_50 = local_48._4_4_;
    local_58 = (int)local_48;
  }
  if (local_58 == 1) {
    iVar7 = local_50 - uVar5;
LAB_143c60659:
    param_1[2] = iVar7;
  }
  else if (local_58 == 2) {
    param_1[2] = local_40;
  }
  else {
    if (local_58 != 3) {
      local_48 = *(int **)(param_1 + 6);
      iVar7 = (int)uVar5 >> 1;
      if (local_48 != (int *)0x0) {
        if ((*(byte *)(local_48 + 4) & 8) == 0) {
          FUN_143c60360(local_48,param_2,param_3,param_4);
        }
        iVar4 = local_48[3];
        iVar2 = local_48[2];
        iVar6 = FUN_143c22100(((param_1[1] >> 1) + *param_1) - ((local_48[1] >> 1) + *local_48),
                              uVar1);
        uVar8 = iVar6 + (((iVar4 >> 1) + iVar2) - iVar7);
      }
      param_1[2] = uVar8;
      param_1[3] = uVar5;
      if (*(char *)(param_4 + 0xd0) != '\0') {
        if ((int)uVar5 < 0x41) {
          if ((int)uVar5 < 0x20) {
            if ((int)uVar5 < 1) {
              uVar8 = uVar8 + 0x20 & 0xffffffc0;
            }
            else {
              uVar9 = uVar5 + 0x20 + uVar8 & 0xffffffc0;
              uVar10 = uVar8 + 0x20 & 0xffffffc0;
              iVar7 = (uVar9 - uVar5) - uVar8;
              iVar4 = uVar10 - uVar8;
              if (iVar4 < 0) {
                iVar4 = -iVar4;
              }
              if (iVar7 < 0) {
                iVar7 = -iVar7;
              }
              uVar8 = uVar9;
              if (iVar4 <= iVar7) {
                uVar8 = uVar10;
              }
            }
          }
          else {
            uVar5 = 0x40;
            uVar8 = uVar8 + iVar7 & 0xffffffc0;
          }
        }
        else {
          uVar10 = *(uint *)(local_38 + 8);
          iVar7 = uVar5 - uVar10;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          if ((iVar7 < 0x28) && (uVar5 = uVar10, (int)uVar10 < 0x30)) {
            uVar5 = 0x30;
          }
          else if (0xbf < (int)uVar5) {
            uVar5 = uVar5 + 0x20 & 0xffffffc0;
            goto LAB_143c605f9;
          }
          uVar10 = uVar5 & 0xffffffc0;
          uVar5 = uVar5 & 0x3f;
          if (uVar5 < 10) {
LAB_143c605db:
            uVar5 = uVar10 + uVar5;
          }
          else if (uVar5 < 0x20) {
            uVar5 = uVar10 + 10;
          }
          else {
            if (0x35 < uVar5) goto LAB_143c605db;
            uVar5 = uVar10 + 0x36;
          }
        }
      }
LAB_143c605f9:
      param_1[3] = uVar5;
      uVar10 = (uVar8 + 0x20 & 0xffffffc0) - uVar8;
      uVar5 = ((uVar8 + 0x20 + uVar5 & 0xffffffc0) - uVar5) - uVar8;
      if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) <=
          (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
        uVar5 = uVar10;
      }
      iVar7 = uVar5 + uVar8;
      goto LAB_143c60659;
    }
    param_1[2] = local_40;
    param_1[3] = local_50 - local_40;
  }
  uVar5 = 0x40;
  if (!bVar3) goto LAB_143c606b7;
  if (0x3f < param_1[3]) {
    uVar5 = param_1[3] + 0x20U & 0xffffffc0;
  }
  if (local_58 == 1) {
    local_50 = local_50 - uVar5;
LAB_143c606b1:
    param_1[2] = local_50;
  }
  else if (local_58 != 2) {
    if (local_58 == 3) goto LAB_143c606b7;
    param_1[3] = uVar5;
    local_50 = (int)uVar5 >> 1;
    if ((uVar5 & 0x40) == 0) {
      local_50 = (param_1[2] + 0x20 + local_50 & 0xffffffc0U) - local_50;
    }
    else {
      local_50 = ((local_50 + param_1[2] & 0xffffffc0U) + 0x20) - local_50;
    }
    goto LAB_143c606b1;
  }
  param_1[3] = uVar5;
LAB_143c606b7:
  param_1[4] = param_1[4] | 8;
  return;
}



// FUNCTION 143c606d0 FUN_143c606d0 body=254 status=ok
// SIG undefined FUN_143c606d0(void)

void FUN_143c606d0(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  
  pbVar9 = *(byte **)(param_2 + 2);
  uVar13 = 0;
  uVar10 = *param_2;
  uVar8 = (ulonglong)uVar10;
  uVar5 = 0;
  uVar11 = *param_1;
  if (uVar11 != 0) {
    puVar3 = (uint *)(*(longlong *)(param_1 + 2) + 0x10);
    do {
      *puVar3 = *puVar3 & 0xfffffffb;
      puVar3[4] = 0xffffffff;
      puVar3 = puVar3 + 10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar4 = uVar13;
  uVar7 = uVar13;
  uVar6 = uVar13;
  uVar14 = uVar13;
  if (uVar10 != 0) {
    do {
      uVar10 = (uint)uVar6;
      if (uVar10 == 0) {
        uVar7 = (ulonglong)*pbVar9;
        uVar10 = 0x80;
        pbVar9 = pbVar9 + 1;
      }
      uVar6 = uVar4;
      if ((uVar10 & (uint)uVar7) != 0) {
        lVar12 = *(longlong *)(param_1 + 2) + uVar14;
        if ((*(uint *)(lVar12 + 0x10) & 4) == 0) {
          *(uint *)(lVar12 + 0x10) = *(uint *)(lVar12 + 0x10) | 4;
          if ((uint)uVar4 < *param_1) {
            uVar6 = (ulonglong)((uint)uVar4 + 1);
            *(longlong *)(*(longlong *)(param_1 + 4) + uVar4 * 8) = lVar12;
          }
        }
      }
      uVar5 = (uint)uVar6;
      uVar8 = uVar8 - 1;
      uVar4 = uVar6;
      uVar6 = (ulonglong)(uint)((int)uVar10 >> 1);
      uVar14 = uVar14 + 0x28;
    } while (uVar8 != 0);
  }
  param_1[1] = uVar5;
  puVar1 = *(undefined8 **)(param_1 + 4);
  if (1 < (int)uVar5) {
    uVar8 = (ulonglong)(uVar5 - 1);
    puVar15 = puVar1;
    do {
      puVar15 = puVar15 + 1;
      piVar2 = (int *)*puVar15;
      for (uVar4 = uVar13; (-1 < (longlong)uVar4 && (*piVar2 <= *(int *)puVar1[uVar4]));
          uVar4 = uVar4 - 1) {
        puVar1[uVar4 + 1] = (int *)puVar1[uVar4];
        puVar1[uVar4] = piVar2;
      }
      uVar13 = uVar13 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 143c607d0 FUN_143c607d0 body=926 status=ok
// SIG undefined FUN_143c607d0(void)

void FUN_143c607d0(int *param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined8 local_58;
  int local_50;
  
  iVar16 = *param_1;
  piVar12 = *(int **)(param_1 + 2);
  if (iVar16 != 0) {
    lVar9 = param_2 + 8 + (longlong)param_3 * 0xcc;
    do {
      uVar1 = *(undefined4 *)(lVar9 + 0xc4);
      iVar11 = *(int *)(lVar9 + 200);
      if ((*(byte *)(piVar12 + 4) & 8) == 0) {
        iVar5 = FUN_143c22100(*piVar12,uVar1);
        uVar15 = iVar11 + iVar5;
        uVar6 = FUN_143c22100(piVar12[1]);
        if (param_3 == 0) {
          if (*(char *)(param_4 + 0xcc) != '\0') {
            if (*(char *)(param_4 + 0xce) == '\0') goto LAB_143c6088d;
LAB_143c609c1:
            bVar4 = true;
            goto LAB_143c60898;
          }
LAB_143c609a8:
          piVar12[2] = uVar15;
          piVar12[3] = uVar6;
        }
        else {
          if (param_3 == 1) {
            if (*(char *)(param_4 + 0xcd) == '\0') goto LAB_143c609a8;
            if (*(char *)(param_4 + 0xcf) != '\0') goto LAB_143c609c1;
          }
LAB_143c6088d:
          bVar4 = false;
LAB_143c60898:
          iVar11 = 0;
          piVar12[3] = uVar6;
          local_58 = 0;
          local_50 = 0;
          iVar5 = 0;
          if (param_3 == 1) {
            FUN_143c5ee60(param_2 + 0x1a0,piVar12[1] + *piVar12,*piVar12,&local_58);
            iVar11 = (int)local_58;
            iVar5 = local_58._4_4_;
          }
          if (iVar11 == 1) {
            iVar8 = iVar5 - uVar6;
LAB_143c60ac2:
            piVar12[2] = iVar8;
          }
          else if (iVar11 == 2) {
            piVar12[2] = local_50;
          }
          else {
            if (iVar11 != 3) {
              piVar3 = *(int **)(piVar12 + 6);
              iVar8 = (int)uVar6 >> 1;
              if (piVar3 != (int *)0x0) {
                if ((*(byte *)(piVar3 + 4) & 8) == 0) {
                  FUN_143c60360(piVar3,param_2,param_3,param_4);
                }
                iVar10 = piVar3[3];
                iVar2 = piVar3[2];
                iVar7 = FUN_143c22100(((piVar12[1] >> 1) + *piVar12) - ((piVar3[1] >> 1) + *piVar3),
                                      uVar1);
                uVar15 = iVar7 + (((iVar10 >> 1) + iVar2) - iVar8);
              }
              piVar12[2] = uVar15;
              piVar12[3] = uVar6;
              if (*(char *)(param_4 + 0xd0) != '\0') {
                if ((int)uVar6 < 0x41) {
                  if ((int)uVar6 < 0x20) {
                    if ((int)uVar6 < 1) {
                      uVar15 = uVar15 + 0x20 & 0xffffffc0;
                    }
                    else {
                      uVar13 = uVar15 + 0x20 + uVar6 & 0xffffffc0;
                      uVar14 = uVar15 + 0x20 & 0xffffffc0;
                      iVar8 = (uVar13 - uVar6) - uVar15;
                      iVar10 = uVar14 - uVar15;
                      if (iVar10 < 0) {
                        iVar10 = -iVar10;
                      }
                      if (iVar8 < 0) {
                        iVar8 = -iVar8;
                      }
                      uVar15 = uVar13;
                      if (iVar10 <= iVar8) {
                        uVar15 = uVar14;
                      }
                    }
                  }
                  else {
                    uVar6 = 0x40;
                    uVar15 = uVar15 + iVar8 & 0xffffffc0;
                  }
                }
                else {
                  uVar14 = *(uint *)(lVar9 + 8);
                  iVar8 = uVar6 - uVar14;
                  if (iVar8 < 0) {
                    iVar8 = -iVar8;
                  }
                  if ((iVar8 < 0x28) && (uVar6 = uVar14, (int)uVar14 < 0x30)) {
                    uVar6 = 0x30;
                  }
                  else if (0xbf < (int)uVar6) {
                    uVar6 = uVar6 + 0x20 & 0xffffffc0;
                    goto LAB_143c60a69;
                  }
                  uVar14 = uVar6 & 0xffffffc0;
                  uVar6 = uVar6 & 0x3f;
                  if (uVar6 < 10) {
LAB_143c60a4b:
                    uVar6 = uVar14 + uVar6;
                  }
                  else if (uVar6 < 0x20) {
                    uVar6 = uVar14 + 10;
                  }
                  else {
                    if (0x35 < uVar6) goto LAB_143c60a4b;
                    uVar6 = uVar14 + 0x36;
                  }
                }
              }
LAB_143c60a69:
              piVar12[3] = uVar6;
              uVar6 = ((uVar15 + 0x20 + uVar6 & 0xffffffc0) - uVar6) - uVar15;
              uVar14 = (uVar15 + 0x20 & 0xffffffc0) - uVar15;
              if ((int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)) <=
                  (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
                uVar6 = uVar14;
              }
              iVar8 = uVar15 + uVar6;
              goto LAB_143c60ac2;
            }
            piVar12[2] = local_50;
            piVar12[3] = iVar5 - local_50;
          }
          if (bVar4) {
            if (piVar12[3] < 0x40) {
              uVar6 = 0x40;
            }
            else {
              uVar6 = piVar12[3] + 0x20U & 0xffffffc0;
            }
            if (iVar11 == 1) {
              piVar12[2] = iVar5 - uVar6;
            }
            else if (iVar11 != 2) {
              if (iVar11 == 3) goto LAB_143c60b2e;
              piVar12[3] = uVar6;
              iVar11 = (int)uVar6 >> 1;
              if ((uVar6 & 0x40) == 0) {
                piVar12[2] = (piVar12[2] + 0x20 + iVar11 & 0xffffffc0U) - iVar11;
              }
              else {
                piVar12[2] = ((iVar11 + piVar12[2] & 0xffffffc0U) + 0x20) - iVar11;
              }
            }
            piVar12[3] = uVar6;
          }
        }
LAB_143c60b2e:
        piVar12[4] = piVar12[4] | 8;
      }
      iVar16 = iVar16 + -1;
      piVar12 = piVar12 + 10;
    } while (iVar16 != 0);
  }
  return;
}



// FUNCTION 143c60b70 FUN_143c60b70 body=542 status=ok
// SIG undefined FUN_143c60b70(void)

void FUN_143c60b70(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  
  if (param_3 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 4);
    puVar8 = (uint *)(param_2 + 0x1c);
    do {
      uVar9 = *puVar8;
      uVar2 = puVar8[5];
      if ((uVar9 & 0x10) == 0) {
        iVar4 = (int)(char)puVar8[1];
        if (((((iVar4 == param_5) || (iVar4 == -param_5)) ||
             (iVar4 = (int)*(char *)((longlong)puVar8 + 5), iVar4 == param_5)) ||
            (iVar4 == -param_5)) && (iVar4 != 0)) {
          if (iVar4 == param_5) {
            uVar5 = 0;
            puVar7 = puVar3;
            if (uVar1 != 0) {
              do {
                iVar4 = uVar2 - *(int *)*puVar7;
                if ((iVar4 < param_4) && (-iVar4 < param_4)) {
                  *(int **)(puVar8 + 3) = (int *)*puVar7;
                  *puVar8 = uVar9 | 0x210;
                  break;
                }
                uVar5 = uVar5 + 1;
                puVar7 = puVar7 + 1;
              } while (uVar5 < uVar1);
            }
          }
          else if ((iVar4 == -param_5) && (uVar5 = 0, puVar7 = puVar3, uVar1 != 0)) {
            do {
              piVar10 = (int *)*puVar7;
              iVar4 = (uVar2 - piVar10[1]) - *piVar10;
              if ((iVar4 < param_4) && (-iVar4 < param_4)) {
                *(int **)(puVar8 + 3) = piVar10;
                *puVar8 = uVar9 | 0x410;
                break;
              }
              uVar5 = uVar5 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar5 < uVar1);
          }
        }
        else if ((uVar9 & 0x40) != 0) {
          if (param_5 == 2) {
            uVar5 = 0x80;
            uVar6 = 0x100;
          }
          else {
            uVar5 = 0x100;
            uVar6 = 0x80;
          }
          if ((uVar5 & uVar9) == 0) {
            if (((uVar6 & uVar9) != 0) && (uVar5 = 0, puVar7 = puVar3, uVar1 != 0)) {
              do {
                piVar10 = (int *)*puVar7;
                iVar4 = (uVar2 - piVar10[1]) - *piVar10;
                if ((iVar4 < param_4) && (-iVar4 < param_4)) {
                  uVar9 = uVar9 | 0x410;
                  goto LAB_143c60d2c;
                }
                uVar5 = uVar5 + 1;
                puVar7 = puVar7 + 1;
              } while (uVar5 < uVar1);
            }
          }
          else {
            uVar5 = 0;
            puVar7 = puVar3;
            if (uVar1 != 0) {
LAB_143c60cc0:
              piVar10 = (int *)*puVar7;
              if ((param_4 <= (int)(uVar2 - *piVar10)) || (param_4 <= (int)-(uVar2 - *piVar10)))
              goto LAB_143c60cd4;
              uVar9 = uVar9 | 0x210;
LAB_143c60d2c:
              *puVar8 = uVar9;
              *(int **)(puVar8 + 3) = piVar10;
            }
          }
LAB_143c60d33:
          if ((*(longlong *)(puVar8 + 3) == 0) && (uVar9 = 0, puVar7 = puVar3, uVar1 != 0)) {
            do {
              piVar10 = (int *)*puVar7;
              if ((*piVar10 <= (int)uVar2) && ((int)uVar2 <= *piVar10 + piVar10[1])) {
                *(int **)(puVar8 + 3) = piVar10;
                break;
              }
              uVar9 = uVar9 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar9 < uVar1);
          }
        }
      }
      puVar8 = puVar8 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
LAB_143c60cd4:
  uVar5 = uVar5 + 1;
  puVar7 = puVar7 + 1;
  if (uVar1 <= uVar5) goto LAB_143c60d33;
  goto LAB_143c60cc0;
}



// FUNCTION 143c60d90 FUN_143c60d90 body=388 status=ok
// SIG undefined FUN_143c60d90(void)

ulonglong FUN_143c60d90(uint *param_1,uint *param_2,int *param_3,ulonglong param_4,
                       undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong local_res20;
  
  uVar7 = *param_2;
  uVar9 = (ulonglong)uVar7;
  uVar5 = 0;
  local_res20 = param_4;
  uVar3 = FUN_143c27410(param_5,8,0,uVar7 * 2,0,&local_res20);
  *(undefined8 *)(param_1 + 4) = uVar3;
  uVar4 = local_res20 & 0xffffffff;
  if ((uint)local_res20 == 0) {
    uVar3 = FUN_143c27410(param_5,0x28,0,uVar7,0,&local_res20);
    *(undefined8 *)(param_1 + 2) = uVar3;
    uVar4 = local_res20 & 0xffffffff;
    if ((uint)local_res20 == 0) {
      uVar3 = FUN_143c27410(param_5,0x10,0,uVar7 * 2 + 1,0,&local_res20);
      *(undefined8 *)(param_1 + 10) = uVar3;
      if ((uint)local_res20 == 0) {
        *param_1 = uVar7;
        param_1[1] = 0;
        param_1[8] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *(ulonglong *)(param_1 + 6) = *(longlong *)(param_1 + 4) + uVar9 * 8;
        puVar1 = *(undefined4 **)(param_1 + 2);
        puVar2 = *(undefined4 **)(param_2 + 2);
        while (uVar7 != 0) {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[4] = puVar2[2];
          uVar7 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar7;
          puVar1 = puVar1 + 10;
          puVar2 = puVar2 + 3;
        }
        if (param_3 != (int *)0x0) {
          iVar8 = *param_3;
          lVar6 = *(longlong *)(param_3 + 2);
          *(int **)(param_1 + 0xe) = param_3;
          if (iVar8 != 0) {
            do {
              FUN_143c60fc0(param_1,lVar6);
              lVar6 = lVar6 + 0x18;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        uVar7 = *param_1;
        if ((param_1[1] != uVar7) && (uVar7 != 0)) {
          do {
            FUN_143c60f20(param_1,uVar5);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar7);
          return local_res20 & 0xffffffff;
        }
      }
      uVar4 = (ulonglong)(uint)local_res20;
    }
  }
  return uVar4;
}



// FUNCTION 143c60f20 FUN_143c60f20 body=150 status=ok
// SIG undefined FUN_143c60f20(void)

void FUN_143c60f20(uint *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 2) + (ulonglong)param_2 * 0x28);
  if ((param_2 < *param_1) && ((piVar1[4] & 4U) == 0)) {
    piVar1[4] = piVar1[4] | 4;
    uVar3 = param_1[1];
    puVar4 = *(undefined8 **)(param_1 + 6);
    piVar1[6] = 0;
    piVar1[7] = 0;
    if (uVar3 != 0) {
      do {
        piVar2 = (int *)*puVar4;
        if ((*piVar2 <= piVar1[1] + *piVar1) && (*piVar1 <= *piVar2 + piVar2[1])) {
          *(int **)(piVar1 + 6) = piVar2;
          break;
        }
        puVar4 = puVar4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (param_1[1] < *param_1) {
      *(int **)(*(longlong *)(param_1 + 6) + (ulonglong)param_1[1] * 8) = piVar1;
      param_1[1] = param_1[1] + 1;
    }
  }
  return;
}



// FUNCTION 143c60fc0 FUN_143c60fc0 body=234 status=ok
// SIG undefined FUN_143c60fc0(void)

void FUN_143c60fc0(uint *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  longlong lVar10;
  
  uVar1 = *param_2;
  uVar4 = 0;
  pbVar9 = *(byte **)(param_2 + 2);
  uVar8 = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    lVar10 = 0;
    do {
      if (uVar4 == 0) {
        uVar8 = (uint)*pbVar9;
        uVar4 = 0x80;
        pbVar9 = pbVar9 + 1;
      }
      if ((((uVar4 & uVar8) != 0) &&
          (piVar7 = (int *)(*(longlong *)(param_1 + 2) + lVar10), uVar5 < *param_1)) &&
         ((piVar7[4] & 4U) == 0)) {
        piVar7[4] = piVar7[4] | 4;
        uVar3 = param_1[1];
        puVar6 = *(undefined8 **)(param_1 + 6);
        piVar7[6] = 0;
        piVar7[7] = 0;
        if (uVar3 != 0) {
          do {
            piVar2 = (int *)*puVar6;
            if ((*piVar2 <= piVar7[1] + *piVar7) && (*piVar7 <= *piVar2 + piVar2[1])) {
              *(int **)(piVar7 + 6) = piVar2;
              break;
            }
            puVar6 = puVar6 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        if (param_1[1] < *param_1) {
          *(int **)(*(longlong *)(param_1 + 6) + (ulonglong)param_1[1] * 8) = piVar7;
          param_1[1] = param_1[1] + 1;
        }
      }
      uVar4 = (int)uVar4 >> 1;
      uVar5 = uVar5 + 1;
      lVar10 = lVar10 + 0x28;
    } while (uVar5 < uVar1);
  }
  return;
}



// FUNCTION 143c610d0 FUN_143c610d0 body=90 status=ok
// SIG undefined FUN_143c610d0(void)

void FUN_143c610d0(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int local_res18;
  int local_res1c;
  
  local_res18 = FT_RoundFix(*param_3);
  local_res18 = local_res18 >> 0x10;
  local_res1c = FT_RoundFix(param_3[1]);
  local_res1c = local_res1c >> 0x10;
  FUN_143c5de50(param_1,param_2,1,&local_res18);
  return;
}



// FUNCTION 143c61150 FUN_143c61150 body=379 status=ok
// SIG undefined FUN_143c61150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c61150(undefined8 *param_1,uint param_2,int param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_d8;
  int local_c8 [32];
  ulonglong local_48;
  
  if (0 < param_3) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
    iVar6 = 0;
    local_d8 = param_4;
    do {
      lVar4 = local_d8;
      iVar9 = param_3;
      if (0x10 < param_3) {
        iVar9 = 0x10;
      }
      lVar5 = 0;
      lVar7 = (longlong)(iVar9 * 2);
      if (0 < iVar9 * 2) {
        do {
          iVar6 = iVar6 + *(int *)(lVar4 + lVar5 * 4);
          iVar1 = FT_RoundFix(iVar6);
          local_c8[lVar5] = iVar1 >> 0x10;
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar7);
      }
      lVar4 = 0;
      if (0 < lVar7) {
        do {
          local_c8[lVar4 + 1] = local_c8[lVar4 + 1] - local_c8[lVar4];
          lVar4 = lVar4 + 2;
        } while (lVar4 < lVar7);
      }
      piVar8 = local_c8;
      if (*(int *)(param_1 + 1) == 0) {
        uVar2 = param_2;
        if (1 < param_2) {
          uVar2 = (uint)(param_2 != 0);
        }
        for (iVar1 = iVar9; 0 < iVar1; iVar1 = iVar1 + -1) {
          local_e8 = 0;
          iVar3 = FUN_143c5d7a0(param_1 + (ulonglong)uVar2 * 6 + 3,*piVar8,piVar8[1],*param_1);
          if (iVar3 != 0) {
            *(int *)(param_1 + 1) = iVar3;
            break;
          }
          piVar8 = piVar8 + 2;
        }
      }
      param_3 = param_3 - iVar9;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 143c612d0 FUN_143c612d0 body=83 status=ok
// SIG undefined FUN_143c612d0(void)

int FUN_143c612d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int local_res10 [6];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)FUN_143c271e0(param_1,8,local_res10);
  if (local_res10[0] == 0) {
    *puVar1 = param_1;
    *param_2 = puVar1;
    return 0;
  }
  return local_res10[0];
}



// FUNCTION 143c61340 FUN_143c61340 body=414 status=ok
// SIG undefined FUN_143c61340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c61340(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_44a8 [32];
  undefined1 local_4488 [32];
  undefined1 *local_4468;
  ulonglong *local_4460;
  undefined8 local_43e8;
  undefined8 uStack_43e0;
  int local_43d8;
  int iStack_43d4;
  int iStack_43d0;
  int iStack_43cc;
  undefined8 local_43c8;
  undefined8 local_43c0;
  undefined8 uStack_43b8;
  undefined8 local_43b0;
  undefined8 uStack_43a8;
  undefined8 local_43a0;
  undefined1 local_4018 [16384];
  ulonglong local_18 [2];
  undefined8 uStack_8;
  
  uStack_8 = 0x143c6134a;
  local_18[0] = DAT_1468387a8 ^ (ulonglong)auStack_44a8;
  psVar1 = (short *)param_2[1];
  piVar2 = (int *)*param_2;
  if (param_1 == 0) {
    return 0x60;
  }
  if (psVar1 != (short *)0x0) {
    if ((psVar1[1] == 0) || (*psVar1 < 1)) {
      return 0;
    }
    if (((*(longlong *)(psVar1 + 0xc) != 0) && (*(longlong *)(psVar1 + 4) != 0)) &&
       ((int)psVar1[1] == *(short *)(*(longlong *)(psVar1 + 0xc) + -2 + (longlong)*psVar1 * 2) + 1))
    {
      if (((*(uint *)(param_2 + 2) & 2) != 0) || ((*(uint *)(param_2 + 2) & 1) != 0)) {
        return 0x13;
      }
      if (piVar2 != (int *)0x0) {
        if (piVar2[1] == 0) {
          return 0;
        }
        if (*piVar2 == 0) {
          return 0;
        }
        if (*(longlong *)(piVar2 + 4) != 0) {
          local_43c0 = *(undefined8 *)psVar1;
          uStack_43b8 = *(undefined8 *)(psVar1 + 4);
          local_4468 = local_4018;
          local_43b0 = *(undefined8 *)(psVar1 + 8);
          uStack_43a8 = *(undefined8 *)(psVar1 + 0xc);
          local_43a0 = *(undefined8 *)(psVar1 + 0x10);
          local_43e8 = *(undefined8 *)piVar2;
          uStack_43e0 = *(undefined8 *)(piVar2 + 2);
          local_43d8 = piVar2[4];
          iStack_43d4 = piVar2[5];
          iStack_43d0 = piVar2[6];
          iStack_43cc = piVar2[7];
          local_43c8 = *(undefined8 *)(piVar2 + 8);
          local_4460 = local_18;
          uVar3 = FUN_143c633f0(local_4488);
          return uVar3;
        }
      }
    }
  }
  return 0x14;
}



// FUNCTION 143c614e0 ft_smooth_init body=45 status=ok
// SIG undefined ft_smooth_init(void)

undefined8 ft_smooth_init(longlong param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x10))
            (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x138),
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x140));
  return 0;
}



// FUNCTION 143c61520 FUN_143c61520 body=96 status=ok
// SIG undefined FUN_143c61520(void)

undefined8 FUN_143c61520(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  if (*(int *)(param_2 + 0x60) != *(int *)(param_1 + 0x20)) {
    return 6;
  }
  if (param_3 != 0) {
    FUN_143c234b0(param_2 + 0x98,param_3);
  }
  if (param_4 != (undefined4 *)0x0) {
    FUN_143c23560(param_2 + 0x98,*param_4,param_4[1]);
  }
  return 0;
}



// FUNCTION 143c615b0 FUN_143c615b0 body=650 status=ok
// SIG undefined FUN_143c615b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c615b0(longlong param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int *local_d0;
  int local_c8 [2];
  longlong local_c0;
  undefined8 local_b8;
  uint *local_a8;
  longlong local_a0;
  undefined4 local_98;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (param_3 == 2) {
      lVar2 = param_2 + 0x98;
      local_c0 = param_1;
      if (param_4 != (undefined4 *)0x0) {
        FUN_143c23560(lVar2,*param_4,param_4[1]);
      }
      FUN_143c22f00(lVar2,&local_58);
      uVar8 = local_58 + 0x20 & 0xffffffc0;
      iVar6 = (local_50 + 0x20U & 0xffffffc0) - uVar8;
      uVar9 = local_54 + 0x20 & 0xffffffc0;
      uVar5 = local_4c + 0x20U & 0xffffffc0;
      if (iVar6 >> 6 == 0) {
        uVar8 = local_58 & 0xffffffc0;
        iVar6 = (local_50 + 0x3fU & 0xffffffc0) - uVar8;
      }
      uVar7 = iVar6 >> 6;
      iVar6 = uVar5 - uVar9;
      if (iVar6 >> 6 == 0) {
        uVar5 = local_4c + 0x3fU & 0xffffffc0;
        uVar9 = local_54 & 0xffffffc0;
        iVar6 = uVar5 - uVar9;
      }
      uVar4 = iVar6 >> 6;
      if ((uVar7 < 0x10000) && (uVar4 < 0x10000)) {
        local_b8 = *(undefined8 *)(local_c0 + 0x10);
        if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
          ft_mem_free(local_b8,*(undefined8 *)(param_2 + 0x78));
          *(undefined8 *)(param_2 + 0x78) = 0;
          puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        *(undefined1 *)(param_2 + 0x82) = 1;
        local_d0 = local_c8;
        *(uint *)(param_2 + 0x70) = uVar7 + 0xf >> 3 & 0x1ffffffe;
        *(uint *)(param_2 + 0x6c) = uVar7;
        *(uint *)(param_2 + 0x68) = uVar4;
        local_d8 = 0;
        uVar3 = FUN_143c27410(local_b8,uVar4,0);
        *(undefined8 *)(param_2 + 0x78) = uVar3;
        if (local_c8[0] == 0) {
          puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
          *puVar1 = *puVar1 | 1;
          FUN_143c23560(lVar2,-uVar8,-uVar9);
          local_98 = 0;
          local_a8 = (uint *)(param_2 + 0x68);
          local_a0 = lVar2;
          local_c8[0] = (**(code **)(local_c0 + 0x68))(*(undefined8 *)(local_c0 + 0x60),&local_a8);
          FUN_143c23560(lVar2,uVar8,uVar9);
          if (local_c8[0] == 0) {
            *(int *)(param_2 + 0x94) = (int)uVar5 >> 6;
            *(undefined4 *)(param_2 + 0x60) = 0x62697473;
            *(int *)(param_2 + 0x90) = (int)uVar8 >> 6;
          }
        }
      }
      else {
        local_c8[0] = 6;
      }
    }
    else {
      local_c8[0] = 0x13;
    }
  }
  else {
    local_c8[0] = 6;
  }
  return local_c8[0];
}



// FUNCTION 143c61840 FUN_143c61840 body=382 status=ok
// SIG undefined FUN_143c61840(void)

ulonglong FUN_143c61840(undefined4 *param_1,int param_2,code *param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar1 = *(uint **)(param_1 + 0x12);
  uVar4 = (ulonglong)param_2;
  puVar9 = *(uint **)(param_1 + 0xe);
  uVar3 = puVar1[uVar4 * 2 + 1];
  uVar5 = uVar4;
  if (((int)param_4 <= (int)puVar1[1]) && (uVar5 = (ulonglong)param_5, (int)uVar3 <= (int)param_5))
  {
    iVar2 = param_1[1];
    uVar7 = -iVar2 & puVar1[1];
    if ((int)param_5 < (int)uVar7) {
      uVar7 = param_5;
    }
    uVar8 = param_4;
    if ((int)param_4 <= (int)uVar3) {
      uVar5 = (ulonglong)(iVar2 - 1U);
      param_4 = iVar2 + -1 + uVar3 & -iVar2;
      uVar8 = param_4;
      if ((ushort)((ushort)uVar3 & (ushort)(iVar2 - 1U)) == 0) {
        if (*(char *)((longlong)param_1 + 0x7b) != '\0') {
          puVar9 = puVar9 + -1;
          *(undefined1 *)((longlong)param_1 + 0x7b) = 0;
        }
        uVar5 = (ulonglong)puVar1[uVar4 * 2];
        *puVar9 = puVar1[uVar4 * 2];
        puVar9 = puVar9 + 1;
        uVar8 = param_4 + param_1[1];
      }
    }
    if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
      uVar5 = *(ulonglong *)(param_1 + 0x20);
      *(int *)(uVar5 + 0x20) = (int)param_4 >> ((byte)*param_1 & 0x1f);
      *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
    }
    if ((int)uVar8 <= (int)uVar7) {
      iVar2 = (int)(uVar7 - uVar8) >> ((byte)*param_1 & 0x1f);
      uVar5 = (ulonglong)iVar2;
      puVar6 = puVar1;
      if (*(uint **)(param_1 + 0xc) <= puVar9 + uVar5 + 1) {
        param_1[0x10] = 0x62;
        uVar5 = CONCAT71((int7)(int3)((uint)iVar2 >> 8),1);
        goto LAB_143c619a3;
      }
      do {
        if ((int)uVar7 < (int)uVar8) break;
        *(undefined1 *)((longlong)param_1 + 0x7b) = 0;
        uVar3 = puVar6[1];
        if ((int)uVar8 < (int)uVar3) {
          iVar2 = uVar3 - puVar6[uVar4 * 2 + 1];
          if (iVar2 < (int)param_1[4]) {
            uVar3 = (int)((*puVar6 - puVar6[uVar4 * 2]) * (uVar8 - puVar6[uVar4 * 2 + 1])) / iVar2 +
                    puVar6[uVar4 * 2];
            uVar5 = (ulonglong)uVar3;
            puVar6 = puVar6 + uVar4 * -2;
            *puVar9 = uVar3;
            puVar9 = puVar9 + 1;
            uVar8 = uVar8 + param_1[1];
          }
          else {
            uVar5 = (*param_3)(puVar6);
            puVar6 = puVar6 + uVar4 * 2;
          }
        }
        else {
          if (uVar3 == uVar8) {
            *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
            uVar5 = (ulonglong)*puVar6;
            *puVar9 = *puVar6;
            puVar9 = puVar9 + 1;
            uVar8 = uVar8 + param_1[1];
          }
          puVar6 = puVar6 + uVar4 * -2;
        }
      } while (puVar1 <= puVar6);
    }
  }
  *(ulonglong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + uVar4 * -8;
  uVar5 = uVar5 & 0xffffffffffffff00;
LAB_143c619a3:
  *(uint **)(param_1 + 0xe) = puVar9;
  return uVar5;
}



// FUNCTION 143c619c0 FUN_143c619c0 body=565 status=ok
// SIG undefined FUN_143c619c0(void)

undefined8
FUN_143c619c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar14;
  ulonglong uVar13;
  
  *(ulonglong *)(param_1 + 0x48) = param_1 + 0x124U;
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x14) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 8) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0xc) = param_3;
  **(undefined4 **)(param_1 + 0x48) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 4) = param_5;
  do {
    piVar4 = *(int **)(param_1 + 0x48);
    uVar1 = piVar4[5];
    uVar2 = piVar4[1];
    iVar3 = *piVar4;
    uVar12 = uVar2;
    uVar10 = uVar1;
    if ((int)uVar1 <= (int)uVar2) {
      uVar12 = uVar1;
      uVar10 = uVar2;
    }
    if ((piVar4[3] < (int)uVar12) || ((int)uVar10 < piVar4[3])) {
      piVar4[8] = piVar4[4];
      iVar9 = (piVar4[4] + piVar4[2]) / 2;
      piVar4[6] = iVar9;
      iVar8 = (piVar4[2] + iVar3) / 2;
      piVar4[2] = iVar8;
      piVar4[4] = (iVar8 + iVar9) / 2;
      piVar4[9] = piVar4[5];
      iVar9 = (piVar4[5] + piVar4[3]) / 2;
      piVar4[7] = iVar9;
      iVar8 = (int)(piVar4[3] + uVar2) / 2;
      piVar4[3] = iVar8;
      piVar4[5] = (iVar8 + iVar9) / 2;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0x10;
    }
    else if (uVar1 == uVar2) {
      *(int **)(param_1 + 0x48) = piVar4 + -4;
    }
    else {
      uVar12 = ((int)uVar2 <= (int)uVar1) + 1;
      uVar13 = (ulonglong)uVar12;
      if (*(uint *)(param_1 + 0x98) != uVar12) {
        iVar9 = *(int *)(param_1 + 4);
        if (uVar12 == 1) {
          iVar9 = (iVar9 + -1 + uVar1 & -iVar9) - uVar1;
          bVar14 = SBORROW4(iVar9,*(int *)(param_1 + 8));
          iVar9 = iVar9 - *(int *)(param_1 + 8);
        }
        else {
          iVar9 = uVar1 - (-iVar9 & uVar1);
          bVar14 = SBORROW4(iVar9,*(int *)(param_1 + 8));
          iVar9 = iVar9 - *(int *)(param_1 + 8);
        }
        bVar14 = bVar14 == iVar9 < 0;
        uVar11 = (ulonglong)bVar14;
        if ((*(uint *)(param_1 + 0x98) != 0) &&
           (cVar6 = FUN_143c62aa0(param_1,bVar14), cVar6 != '\0')) {
          return 1;
        }
        uVar12 = (uint)uVar13;
        cVar6 = FUN_143c632e0(param_1,uVar13 & 0xffffffff,uVar11 & 0xff);
        if (cVar6 != '\0') {
          return 1;
        }
      }
      if (uVar12 == 1) {
        cVar7 = FUN_143c61840(param_1,2,&LAB_143c63700,*(undefined4 *)(param_1 + 0x70),
                              *(undefined4 *)(param_1 + 0x74));
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x48);
        iVar9 = *(int *)(param_1 + 0x70);
        iVar8 = *(int *)(param_1 + 0x74);
        *(int *)(lVar5 + 4) = -*(int *)(lVar5 + 4);
        *(int *)(lVar5 + 0xc) = -*(int *)(lVar5 + 0xc);
        *(int *)(lVar5 + 0x14) = -*(int *)(lVar5 + 0x14);
        cVar6 = *(char *)(param_1 + 0x7a);
        cVar7 = FUN_143c61840(param_1,2,&LAB_143c63700,-iVar8,-iVar9);
        if ((cVar6 != '\0') && (*(char *)(param_1 + 0x7a) == '\0')) {
          *(int *)(*(longlong *)(param_1 + 0x80) + 0x20) =
               -*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
        }
        *(int *)(lVar5 + 4) = -*(int *)(lVar5 + 4);
      }
      if (cVar7 != '\0') {
        return 1;
      }
    }
    if (*(ulonglong *)(param_1 + 0x48) < param_1 + 0x124U) {
      *(int *)(param_1 + 0x68) = iVar3;
      *(uint *)(param_1 + 0x6c) = uVar2;
      return 0;
    }
  } while( true );
}



// FUNCTION 143c61c00 FUN_143c61c00 body=398 status=ok
// SIG undefined FUN_143c61c00(void)

bool FUN_143c61c00(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar4 = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x28) + -0x34;
  lVar6 = *(longlong *)(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(longlong *)(param_1 + 0x80) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined2 *)(param_1 + 0x78) = 0;
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (0 < *(short *)(param_1 + 200)) {
    do {
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      cVar1 = FUN_143c62050(param_1,uVar7 & 0xffff,
                            *(undefined2 *)(*(longlong *)(param_1 + 0xe0) + uVar5),param_2);
      if (cVar1 != '\0') goto LAB_143c61d8a;
      iVar2 = *(int *)(param_1 + 4);
      uVar3 = *(uint *)(param_1 + 0x6c);
      uVar7 = (ulonglong)(*(ushort *)(*(longlong *)(param_1 + 0xe0) + uVar5) + 1);
      if (((((uVar3 & iVar2 - 1U) == 0) && (*(int *)(param_1 + 0x70) <= (int)uVar3)) &&
          ((int)uVar3 <= *(int *)(param_1 + 0x74))) &&
         ((*(longlong *)(param_1 + 0x90) != 0 &&
          (((*(byte *)(*(longlong *)(param_1 + 0x80) + 0x18) ^
            *(byte *)(*(longlong *)(param_1 + 0x90) + 0x18)) & 8) == 0)))) {
        *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + -4;
      }
      lVar6 = *(longlong *)(param_1 + 0x80);
      if ((*(longlong *)(param_1 + 0x38) == *(longlong *)(lVar6 + 0x10)) ||
         ((*(byte *)(lVar6 + 0x18) & 8) == 0)) {
        iVar2 = (iVar2 + -1 + uVar3 & -iVar2) - uVar3;
        bVar8 = SBORROW4(iVar2,*(int *)(param_1 + 8));
        iVar2 = iVar2 - *(int *)(param_1 + 8);
      }
      else {
        uVar3 = uVar3 - (-iVar2 & uVar3);
        bVar8 = SBORROW4(uVar3,*(int *)(param_1 + 8));
        iVar2 = uVar3 - *(int *)(param_1 + 8);
      }
      cVar1 = FUN_143c62aa0(param_1,CONCAT31((int3)(uVar3 >> 8),bVar8 == iVar2 < 0));
      if (cVar1 != '\0') goto LAB_143c61d8a;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        *(longlong *)(lVar6 + 0x28) = *(longlong *)(param_1 + 0x90);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 2;
    } while ((int)uVar3 < (int)*(short *)(param_1 + 200));
  }
  cVar1 = FUN_143c62b50(param_1);
  if (cVar1 == '\0') {
    bVar8 = *(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x38);
  }
  else {
LAB_143c61d8a:
    bVar8 = true;
  }
  return bVar8;
}



// FUNCTION 143c61d90 FUN_143c61d90 body=698 status=ok
// SIG undefined FUN_143c61d90(void)

undefined8
FUN_143c61d90(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar17;
  ulonglong uVar16;
  
  *(ulonglong *)(param_1 + 0x48) = param_1 + 0x124U;
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x1c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x10) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x14) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 8) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0xc) = param_5;
  **(undefined4 **)(param_1 + 0x48) = param_6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 4) = param_7;
  do {
    piVar4 = *(int **)(param_1 + 0x48);
    uVar1 = piVar4[7];
    uVar2 = piVar4[1];
    iVar8 = piVar4[5];
    iVar12 = piVar4[3];
    iVar3 = *piVar4;
    uVar14 = uVar1;
    uVar15 = uVar2;
    if ((int)uVar1 <= (int)uVar2) {
      uVar14 = uVar2;
      uVar15 = uVar1;
    }
    iVar9 = iVar8;
    if (iVar8 <= iVar12) {
      iVar9 = iVar12;
      iVar12 = iVar8;
    }
    if ((iVar12 < (int)uVar15) || ((int)uVar14 < iVar9)) {
      iVar8 = piVar4[2];
      iVar9 = iVar3 + 1 + iVar8 >> 1;
      piVar4[2] = iVar9;
      piVar4[0xc] = piVar4[6];
      iVar12 = piVar4[3];
      iVar8 = iVar8 + 1 + piVar4[4] >> 1;
      iVar11 = piVar4[6] + 1 + piVar4[4] >> 1;
      iVar9 = iVar9 + 1 + iVar8 >> 1;
      piVar4[4] = iVar9;
      piVar4[10] = iVar11;
      iVar10 = (int)(uVar2 + 1 + iVar12) >> 1;
      iVar8 = iVar8 + iVar11 + 1 >> 1;
      piVar4[8] = iVar8;
      piVar4[6] = iVar8 + iVar9 + 1 >> 1;
      piVar4[0xd] = piVar4[7];
      piVar4[3] = iVar10;
      iVar8 = piVar4[5] + 1 + iVar12 >> 1;
      iVar12 = piVar4[5] + 1 + piVar4[7] >> 1;
      piVar4[0xb] = iVar12;
      iVar12 = iVar8 + 1 + iVar12 >> 1;
      piVar4[9] = iVar12;
      iVar8 = iVar8 + 1 + iVar10 >> 1;
      piVar4[5] = iVar8;
      piVar4[7] = iVar12 + 1 + iVar8 >> 1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0x18;
    }
    else if (uVar1 == uVar2) {
      *(int **)(param_1 + 0x48) = piVar4 + -6;
    }
    else {
      uVar15 = ((int)uVar2 < (int)uVar1) + 1;
      uVar16 = (ulonglong)uVar15;
      if (*(uint *)(param_1 + 0x98) != uVar15) {
        iVar8 = *(int *)(param_1 + 4);
        if (uVar15 == 1) {
          iVar8 = (iVar8 + -1 + uVar1 & -iVar8) - uVar1;
          bVar17 = SBORROW4(iVar8,*(int *)(param_1 + 8));
          iVar8 = iVar8 - *(int *)(param_1 + 8);
        }
        else {
          iVar8 = uVar1 - (-iVar8 & uVar1);
          bVar17 = SBORROW4(iVar8,*(int *)(param_1 + 8));
          iVar8 = iVar8 - *(int *)(param_1 + 8);
        }
        bVar17 = bVar17 == iVar8 < 0;
        uVar13 = (ulonglong)bVar17;
        if ((*(uint *)(param_1 + 0x98) != 0) &&
           (cVar6 = FUN_143c62aa0(param_1,bVar17), cVar6 != '\0')) {
          return 1;
        }
        uVar15 = (uint)uVar16;
        cVar6 = FUN_143c632e0(param_1,uVar16 & 0xffffffff,uVar13 & 0xff);
        if (cVar6 != '\0') {
          return 1;
        }
      }
      if (uVar15 == 1) {
        cVar7 = FUN_143c61840(param_1,3,FUN_143c63760,*(undefined4 *)(param_1 + 0x70),
                              *(undefined4 *)(param_1 + 0x74));
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x48);
        iVar8 = *(int *)(param_1 + 0x70);
        iVar12 = *(int *)(param_1 + 0x74);
        *(int *)(lVar5 + 4) = -*(int *)(lVar5 + 4);
        *(int *)(lVar5 + 0xc) = -*(int *)(lVar5 + 0xc);
        *(int *)(lVar5 + 0x14) = -*(int *)(lVar5 + 0x14);
        *(int *)(lVar5 + 0x1c) = -*(int *)(lVar5 + 0x1c);
        cVar6 = *(char *)(param_1 + 0x7a);
        cVar7 = FUN_143c61840(param_1,3,FUN_143c63760,-iVar12,-iVar8);
        if ((cVar6 != '\0') && (*(char *)(param_1 + 0x7a) == '\0')) {
          *(int *)(*(longlong *)(param_1 + 0x80) + 0x20) =
               -*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
        }
        *(int *)(lVar5 + 4) = -*(int *)(lVar5 + 4);
      }
      if (cVar7 != '\0') {
        return 1;
      }
    }
    if (*(ulonglong *)(param_1 + 0x48) < param_1 + 0x124U) {
      *(int *)(param_1 + 0x68) = iVar3;
      *(uint *)(param_1 + 0x6c) = uVar2;
      return 0;
    }
  } while( true );
}



// FUNCTION 143c62050 FUN_143c62050 body=895 status=ok
// SIG undefined FUN_143c62050(void)

undefined1 FUN_143c62050(longlong param_1,ushort param_2,ushort param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  int *piVar18;
  int local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  uVar13 = (ulonglong)param_2;
  piVar8 = (int *)(lVar1 + uVar13 * 8);
  uVar14 = (ulonglong)param_3;
  piVar18 = (int *)(lVar1 + uVar14 * 8);
  iVar10 = *(int *)(param_1 + 8);
  bVar4 = (byte)*(undefined4 *)(param_1 + 0x18);
  iVar15 = (*piVar8 << (bVar4 & 0x1f)) - iVar10;
  local_res10 = (piVar8[1] << (bVar4 & 0x1f)) - iVar10;
  iVar5 = (*(int *)(lVar1 + uVar14 * 8) << (bVar4 & 0x1f)) - iVar10;
  iVar10 = (piVar18[1] << (bVar4 & 0x1f)) - iVar10;
  iVar3 = iVar15;
  iVar12 = iVar5;
  if (param_4 != 0) {
    iVar3 = local_res10;
    iVar12 = iVar10;
    local_res10 = iVar15;
    iVar10 = iVar5;
  }
  lVar1 = *(longlong *)(param_1 + 0xd8);
  pbVar16 = (byte *)(lVar1 + uVar13);
  if ((*(byte *)(lVar1 + uVar13) & 4) != 0) {
    *(byte *)(param_1 + 0x120) = *(byte *)(lVar1 + uVar13) >> 5;
  }
  if ((*pbVar16 & 3) == 2) {
LAB_143c623aa:
    *(undefined4 *)(param_1 + 0x40) = 0x14;
  }
  else {
    if ((*pbVar16 & 3) == 0) {
      if ((*(byte *)(lVar1 + uVar14) & 3) == 1) {
        piVar18 = piVar18 + -2;
        iVar3 = iVar12;
      }
      else {
        iVar3 = (iVar12 + iVar3) / 2;
        iVar10 = (iVar10 + local_res10) / 2;
      }
      piVar8 = piVar8 + -2;
      pbVar16 = pbVar16 + -1;
      local_res10 = iVar10;
    }
    *(int *)(param_1 + 0x68) = iVar3;
    *(int *)(param_1 + 0x6c) = local_res10;
    do {
      if (piVar18 <= piVar8) {
        cVar2 = FUN_143c62f40(param_1,iVar3,local_res10);
LAB_143c6236b:
        if (cVar2 != '\0') {
          return 1;
        }
        return 0;
      }
      pbVar17 = pbVar16 + 1;
      piVar9 = piVar8 + 2;
      if ((pbVar16[1] & 3) == 0) {
        bVar4 = (byte)*(undefined4 *)(param_1 + 0x18);
        iVar5 = (*piVar9 << (bVar4 & 0x1f)) - *(int *)(param_1 + 8);
        iVar12 = (piVar8[3] << (bVar4 & 0x1f)) - *(int *)(param_1 + 8);
        piVar8 = piVar9;
        iVar10 = iVar5;
        if (param_4 != 0) {
          iVar10 = iVar12;
          iVar12 = iVar5;
        }
        while( true ) {
          if (piVar18 <= piVar8) {
            cVar2 = FUN_143c619c0(param_1,iVar10,iVar12,iVar3,local_res10);
            goto LAB_143c6236b;
          }
          piVar9 = piVar8 + 2;
          pbVar17 = pbVar17 + 1;
          bVar4 = (byte)*(undefined4 *)(param_1 + 0x18);
          iVar11 = (*piVar9 << (bVar4 & 0x1f)) - *(int *)(param_1 + 8);
          iVar15 = (piVar8[3] << (bVar4 & 0x1f)) - *(int *)(param_1 + 8);
          iVar5 = iVar11;
          if (param_4 != 0) {
            iVar5 = iVar15;
            iVar15 = iVar11;
          }
          if ((*pbVar17 & 3) == 1) break;
          if ((*pbVar17 & 3) != 0) goto LAB_143c623aa;
          cVar2 = FUN_143c619c0(param_1,iVar10,iVar12,(iVar5 + iVar10) / 2,(iVar15 + iVar12) / 2);
          piVar8 = piVar9;
          iVar10 = iVar5;
          iVar12 = iVar15;
          if (cVar2 != '\0') {
            return 1;
          }
        }
        cVar2 = FUN_143c619c0(param_1,iVar10,iVar12,iVar5,iVar15);
      }
      else if ((pbVar16[1] & 3) == 1) {
        bVar4 = (byte)*(undefined4 *)(param_1 + 0x18);
        iVar5 = (*piVar9 << (bVar4 & 0x1f)) - *(int *)(param_1 + 8);
        iVar12 = (piVar8[3] << (bVar4 & 0x1f)) - *(int *)(param_1 + 8);
        iVar10 = iVar5;
        if (param_4 != 0) {
          iVar10 = iVar12;
          iVar12 = iVar5;
        }
        cVar2 = FUN_143c62f40(param_1,iVar10,iVar12);
      }
      else {
        if ((piVar18 < piVar8 + 4) || ((pbVar16[2] & 3) != 2)) goto LAB_143c623aa;
        piVar9 = piVar8 + 6;
        iVar10 = *(int *)(param_1 + 8);
        pbVar17 = pbVar16 + 3;
        bVar4 = (byte)*(undefined4 *)(param_1 + 0x18);
        iVar6 = (piVar8[2] << (bVar4 & 0x1f)) - iVar10;
        iVar11 = (piVar8[3] << (bVar4 & 0x1f)) - iVar10;
        iVar12 = (piVar8[4] << (bVar4 & 0x1f)) - iVar10;
        iVar7 = (piVar8[5] << (bVar4 & 0x1f)) - iVar10;
        iVar5 = iVar7;
        iVar15 = iVar6;
        if (param_4 != 0) {
          iVar5 = iVar12;
          iVar12 = iVar7;
          iVar15 = iVar11;
          iVar11 = iVar6;
        }
        if (piVar18 < piVar9) {
          cVar2 = FUN_143c61d90(param_1,iVar15,iVar11,iVar12,iVar5,iVar3,local_res10);
          goto LAB_143c6236b;
        }
        iVar7 = (*piVar9 << (bVar4 & 0x1f)) - iVar10;
        iVar10 = (piVar8[7] << (bVar4 & 0x1f)) - iVar10;
        iVar6 = iVar7;
        if (param_4 != 0) {
          iVar6 = iVar10;
          iVar10 = iVar7;
        }
        cVar2 = FUN_143c61d90(param_1,iVar15,iVar11,iVar12,iVar5,iVar6,iVar10);
      }
      piVar8 = piVar9;
      pbVar16 = pbVar17;
    } while (cVar2 == '\0');
  }
  return 1;
}



// FUNCTION 143c623d0 FUN_143c623d0 body=1739 status=ok
// SIG undefined FUN_143c623d0(void)

undefined8 FUN_143c623d0(undefined4 *param_1)

{
  int iVar1;
  uint *puVar2;
  uint **ppuVar3;
  ushort uVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  ushort uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  uint uVar15;
  uint **ppuVar16;
  short sVar17;
  uint *puVar18;
  short sVar19;
  ushort local_res8 [4];
  ushort local_res10 [4];
  ushort local_res18;
  short local_res20;
  uint *local_70;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  
  puVar8 = *(uint **)(param_1 + 0x22);
  puVar11 = (uint *)0x0;
  local_58 = (uint *)0x0;
  local_60 = (uint *)0x0;
  local_70 = (uint *)0x0;
  uVar12 = (int)param_1[0x1c] >> ((byte)*param_1 & 0x1f);
  uVar15 = (int)param_1[0x1d] >> ((byte)*param_1 & 0x1f);
  local_68 = (uint *)0x0;
  local_res10[0] = (ushort)uVar12;
  local_res8[0] = (ushort)uVar15;
  if (puVar8 != (uint *)0x0) {
    while( true ) {
      uVar10 = (ushort)puVar8[8];
      puVar18 = *(uint **)(puVar8 + 2);
      uVar4 = (short)puVar8[7] + -1 + uVar10;
      local_res8[0] = (ushort)uVar15;
      if ((short)uVar10 < (short)(ushort)uVar15) {
        local_res8[0] = uVar10;
      }
      ppuVar3 = &local_60;
      local_res10[0] = (ushort)uVar12;
      if ((short)(ushort)uVar12 < (short)uVar4) {
        local_res10[0] = uVar4;
      }
      *puVar8 = 0;
      for (puVar9 = local_60; (puVar9 != (uint *)0x0 && ((int)*puVar9 < 1));
          puVar9 = *(uint **)(puVar9 + 2)) {
        ppuVar3 = (uint **)(puVar9 + 2);
      }
      *(uint **)(puVar8 + 2) = puVar9;
      *ppuVar3 = puVar8;
      if (puVar18 == (uint *)0x0) break;
      uVar12 = (uint)local_res10[0];
      uVar15 = (uint)local_res8[0];
      puVar8 = puVar18;
    }
    local_58 = local_60;
  }
  puVar8 = local_58;
  if (param_1[0x11] == 0) {
    param_1[0x10] = 0x14;
    return 1;
  }
  local_60 = local_58;
  (**(code **)(param_1 + 0x40))(param_1,local_res8,local_res10);
  for (puVar18 = puVar8; puVar18 != (uint *)0x0; puVar18 = *(uint **)(puVar18 + 2)) {
    puVar18[9] = puVar18[8] - (int)(short)local_res8[0];
  }
  iVar1 = param_1[0x11];
  sVar14 = 0;
  if ((0 < iVar1) &&
     (*(int *)(*(longlong *)(param_1 + 10) + (longlong)iVar1 * -4) == (int)(short)local_res8[0])) {
    param_1[0x11] = iVar1 + -1;
  }
  iVar1 = param_1[0x11];
  puVar18 = puVar11;
  local_res18 = local_res8[0];
  uVar10 = local_res8[0];
  do {
    if (iVar1 < 1) {
      if ((short)uVar10 <= (short)local_res10[0]) {
        do {
          (**(code **)(param_1 + 0x46))(param_1);
          uVar10 = uVar10 + 1;
        } while ((short)uVar10 <= (short)local_res10[0]);
      }
      return 0;
    }
    puVar9 = puVar11;
    if (puVar8 != (uint *)0x0) {
      puVar5 = puVar8;
      do {
        puVar9 = puVar5 + 9;
        *puVar9 = *puVar9 - (int)sVar14;
        puVar2 = *(uint **)(puVar5 + 2);
        if (*puVar9 == 0) {
          ppuVar3 = &local_60;
          for (puVar9 = puVar8; puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 2)) {
            if (puVar9 == puVar5) {
              *ppuVar3 = *(uint **)(puVar9 + 2);
              puVar8 = local_60;
              break;
            }
            ppuVar3 = (uint **)(puVar9 + 2);
          }
          if ((puVar5[6] & 8) == 0) {
            ppuVar3 = &local_68;
            for (; (puVar18 != (uint *)0x0 && ((int)*puVar18 <= (int)*puVar5));
                puVar18 = *(uint **)(puVar18 + 2)) {
              ppuVar3 = (uint **)(puVar18 + 2);
            }
            *(uint **)(puVar5 + 2) = puVar18;
            *ppuVar3 = puVar5;
            puVar18 = local_68;
          }
          else {
            ppuVar3 = &local_70;
            for (; (puVar11 != (uint *)0x0 && ((int)*puVar11 <= (int)*puVar5));
                puVar11 = *(uint **)(puVar11 + 2)) {
              ppuVar3 = (uint **)(puVar11 + 2);
            }
            *(uint **)(puVar5 + 2) = puVar11;
            *ppuVar3 = puVar5;
            puVar11 = local_70;
          }
        }
        puVar5 = puVar2;
        local_58 = puVar8;
        puVar9 = puVar11;
      } while (puVar2 != (uint *)0x0);
    }
    for (; puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 2)) {
      lVar6 = -1;
      *puVar11 = **(uint **)(puVar11 + 4);
      if ((puVar11[6] & 8) != 0) {
        lVar6 = 1;
      }
      puVar11[7] = puVar11[7] - 1;
      *(uint **)(puVar11 + 4) = *(uint **)(puVar11 + 4) + lVar6;
    }
    puVar11 = puVar18;
    puVar8 = puVar9;
    if (puVar9 != (uint *)0x0) {
      puVar5 = *(uint **)(puVar9 + 2);
      ppuVar3 = &local_70;
      while (puVar5 != (uint *)0x0) {
        ppuVar16 = (uint **)(puVar9 + 2);
        if ((int)*puVar5 < (int)*puVar9) {
          *ppuVar3 = puVar5;
          *ppuVar16 = *(uint **)(puVar5 + 2);
          *(uint **)(puVar5 + 2) = puVar9;
          puVar9 = local_70;
          puVar8 = local_70;
          ppuVar16 = &local_70;
        }
        else {
          puVar9 = *ppuVar16;
          if (puVar9 == (uint *)0x0) break;
        }
        ppuVar3 = ppuVar16;
        puVar5 = *(uint **)(puVar9 + 2);
      }
    }
    for (; puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 2)) {
      lVar6 = -1;
      *puVar11 = **(uint **)(puVar11 + 4);
      if ((puVar11[6] & 8) != 0) {
        lVar6 = 1;
      }
      puVar11[7] = puVar11[7] - 1;
      *(uint **)(puVar11 + 4) = *(uint **)(puVar11 + 4) + lVar6;
    }
    if (puVar18 != (uint *)0x0) {
      puVar11 = *(uint **)(puVar18 + 2);
      ppuVar3 = &local_68;
      puVar9 = puVar18;
      while (puVar11 != (uint *)0x0) {
        ppuVar16 = (uint **)(puVar9 + 2);
        if ((int)*puVar11 < (int)*puVar9) {
          *ppuVar3 = puVar11;
          *ppuVar16 = *(uint **)(puVar11 + 2);
          *(uint **)(puVar11 + 2) = puVar9;
          puVar9 = local_68;
          ppuVar16 = &local_68;
          puVar18 = local_68;
        }
        else {
          puVar9 = *ppuVar16;
          if (puVar9 == (uint *)0x0) break;
        }
        ppuVar3 = ppuVar16;
        puVar11 = *(uint **)(puVar9 + 2);
      }
    }
    sVar17 = *(short *)(*(longlong *)(param_1 + 10) + (longlong)(int)param_1[0x11] * -4);
    sVar14 = sVar17 - uVar10;
    param_1[0x11] = param_1[0x11] + -1;
    local_res20 = sVar17;
    puVar11 = puVar8;
    if ((short)uVar10 < sVar17) {
LAB_143c62760:
      uVar10 = local_res18;
      sVar19 = 0;
      puVar11 = puVar8;
      puVar9 = puVar18;
      if (puVar8 != (uint *)0x0) {
        do {
          uVar12 = *puVar11;
          uVar15 = *puVar9;
          uVar13 = uVar12;
          if ((int)uVar15 < (int)uVar12) {
            uVar13 = uVar15;
            uVar15 = uVar12;
          }
          iVar1 = param_1[1];
          uVar12 = -iVar1 & uVar13;
          uVar7 = iVar1 + -1 + uVar15 & -iVar1;
          if ((((iVar1 < (int)(uVar15 - uVar13)) || (uVar12 == uVar13)) || (uVar7 == uVar15)) ||
             (((int)uVar12 <= (int)uVar7 && (uVar7 != iVar1 + uVar12)))) {
            (**(code **)(param_1 + 0x42))(param_1,uVar10,uVar13,uVar15,puVar11,puVar9);
          }
          else if ((puVar11[6] & 7) != 2) {
            *puVar11 = uVar13;
            sVar19 = sVar19 + 1;
            *puVar9 = uVar15;
            puVar11[9] = 1;
          }
          sVar17 = local_res20;
          uVar4 = local_res18;
          puVar5 = puVar11 + 2;
          puVar11 = *(uint **)puVar5;
          puVar9 = *(uint **)(puVar9 + 2);
        } while (*(uint **)puVar5 != (uint *)0x0);
        puVar11 = puVar8;
        puVar9 = puVar18;
        if (0 < sVar19) {
          do {
            if (puVar11[9] != 0) {
              puVar11[9] = 0;
              (**(code **)(param_1 + 0x44))(param_1,uVar4,*puVar11,*puVar9,puVar11,puVar9);
            }
            puVar5 = puVar11 + 2;
            puVar11 = *(uint **)puVar5;
            puVar9 = *(uint **)(puVar9 + 2);
          } while (*(uint **)puVar5 != (uint *)0x0);
        }
      }
      (**(code **)(param_1 + 0x46))();
      local_res18 = local_res18 + 1;
      puVar11 = puVar8;
      uVar10 = local_res18;
      if ((short)local_res18 < sVar17) {
        for (; puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 2)) {
          lVar6 = -1;
          *puVar11 = **(uint **)(puVar11 + 4);
          if ((puVar11[6] & 8) != 0) {
            lVar6 = 1;
          }
          puVar11[7] = puVar11[7] - 1;
          *(uint **)(puVar11 + 4) = *(uint **)(puVar11 + 4) + lVar6;
        }
        puVar9 = puVar18;
        puVar11 = puVar8;
        if (puVar8 != (uint *)0x0) {
          puVar5 = *(uint **)(puVar8 + 2);
          ppuVar3 = &local_70;
          while (puVar5 != (uint *)0x0) {
            ppuVar16 = (uint **)(puVar8 + 2);
            if ((int)*puVar5 < (int)*puVar8) {
              *ppuVar3 = puVar5;
              *ppuVar16 = *(uint **)(puVar5 + 2);
              *(uint **)(puVar5 + 2) = puVar8;
              puVar8 = local_70;
              puVar11 = local_70;
              ppuVar16 = &local_70;
            }
            else {
              puVar8 = *ppuVar16;
              if (puVar8 == (uint *)0x0) break;
            }
            ppuVar3 = ppuVar16;
            puVar5 = *(uint **)(puVar8 + 2);
          }
        }
        for (; puVar8 = puVar11, puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 2)) {
          lVar6 = -1;
          *puVar9 = **(uint **)(puVar9 + 4);
          if ((puVar9[6] & 8) != 0) {
            lVar6 = 1;
          }
          puVar9[7] = puVar9[7] - 1;
          *(uint **)(puVar9 + 4) = *(uint **)(puVar9 + 4) + lVar6;
          puVar11 = puVar8;
        }
        if (puVar18 != (uint *)0x0) {
          puVar11 = *(uint **)(puVar18 + 2);
          ppuVar3 = &local_68;
          puVar9 = puVar18;
          while (puVar11 != (uint *)0x0) {
            ppuVar16 = (uint **)(puVar9 + 2);
            if ((int)*puVar11 < (int)*puVar9) {
              *ppuVar3 = puVar11;
              *ppuVar16 = *(uint **)(puVar11 + 2);
              *(uint **)(puVar11 + 2) = puVar9;
              puVar9 = local_68;
              ppuVar16 = &local_68;
              puVar18 = local_68;
            }
            else {
              puVar9 = *ppuVar16;
              if (puVar9 == (uint *)0x0) break;
            }
            ppuVar3 = ppuVar16;
            puVar11 = *(uint **)(puVar9 + 2);
          }
        }
        goto LAB_143c62760;
      }
    }
joined_r0x000143c629cd:
    puVar9 = puVar8;
    puVar8 = puVar18;
    if (puVar9 != (uint *)0x0) {
      puVar8 = *(uint **)(puVar9 + 2);
      if (puVar9[7] == 0) {
        ppuVar3 = &local_70;
        for (puVar5 = puVar11; puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 2)) {
          if (puVar5 == puVar9) {
            *ppuVar3 = *(uint **)(puVar5 + 2);
            puVar11 = local_70;
            break;
          }
          ppuVar3 = (uint **)(puVar5 + 2);
        }
      }
      goto joined_r0x000143c629cd;
    }
joined_r0x000143c62a13:
    puVar9 = puVar8;
    if (puVar9 != (uint *)0x0) {
      puVar8 = *(uint **)(puVar9 + 2);
      if (puVar9[7] == 0) {
        ppuVar3 = &local_68;
        for (puVar5 = puVar18; puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 2)) {
          if (puVar5 == puVar9) {
            *ppuVar3 = *(uint **)(puVar5 + 2);
            puVar18 = local_68;
            break;
          }
          ppuVar3 = (uint **)(puVar5 + 2);
        }
      }
      goto joined_r0x000143c62a13;
    }
    iVar1 = param_1[0x11];
    puVar8 = local_58;
  } while( true );
}



// FUNCTION 143c62aa0 FUN_143c62aa0 body=168 status=ok
// SIG undefined FUN_143c62aa0(void)

longlong FUN_143c62aa0(longlong param_1,char param_2)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  uint7 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x38) - *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
  iVar3 = (int)(lVar4 >> 2);
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x40) = 99;
    return CONCAT71((int7)(lVar4 >> 10),1);
  }
  if (0 < iVar3) {
    *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c) = iVar3;
    if (param_2 != '\0') {
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x80) + 0x18);
      if ((uVar2 & 8) == 0) {
        uVar2 = uVar2 | 0x20;
      }
      else {
        uVar2 = uVar2 | 0x10;
      }
      *(ushort *)(*(longlong *)(param_1 + 0x80) + 0x18) = uVar2;
    }
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar1 = *(longlong *)(param_1 + 0x80);
    *(longlong *)(param_1 + 0x80) = lVar4;
    *(longlong *)(param_1 + 0x38) = lVar4 + 0x34;
    *(undefined4 *)(lVar4 + 0x1c) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x80);
    *(short *)(param_1 + 0x78) = *(short *)(param_1 + 0x78) + 1;
  }
  uVar5 = (uint7)(*(ulonglong *)(param_1 + 0x30) >> 8);
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x40) = 0x62;
    return CONCAT71(uVar5,1);
  }
  *(undefined1 *)(param_1 + 0x7b) = 0;
  return (ulonglong)uVar5 << 8;
}



// FUNCTION 143c62b50 FUN_143c62b50 body=220 status=ok
// SIG undefined FUN_143c62b50(void)

undefined8 FUN_143c62b50(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  
  uVar6 = *(ushort *)(param_1 + 0x78);
  lVar3 = *(longlong *)(param_1 + 0x88);
  if ((uVar6 < 2) || (lVar3 == 0)) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  else {
    do {
      plVar1 = (longlong *)(lVar3 + 8);
      if (uVar6 < 2) {
        *plVar1 = 0;
      }
      else {
        *plVar1 = *(longlong *)(lVar3 + 0x10) + (longlong)*(int *)(lVar3 + 0x1c) * 4;
      }
      if ((*(byte *)(lVar3 + 0x18) & 8) == 0) {
        iVar5 = *(int *)(lVar3 + 0x20);
        iVar4 = (iVar5 - *(int *)(lVar3 + 0x1c)) + 1;
        *(int *)(lVar3 + 0x20) = iVar4;
        *(longlong *)(lVar3 + 0x10) =
             *(longlong *)(lVar3 + 0x10) + (longlong)(*(int *)(lVar3 + 0x1c) + -1) * 4;
      }
      else {
        iVar4 = *(int *)(lVar3 + 0x20);
        iVar5 = iVar4 + -1 + *(int *)(lVar3 + 0x1c);
      }
      cVar2 = FUN_143c62ea0(param_1,iVar4);
      if ((cVar2 != '\0') || (cVar2 = FUN_143c62ea0(param_1,iVar5 + 1), cVar2 != '\0')) {
        return 1;
      }
      lVar3 = *plVar1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return 0;
}



// FUNCTION 143c62c30 FUN_143c62c30 body=480 status=ok
// SIG undefined FUN_143c62c30(void)

void FUN_143c62c30(undefined4 *param_1,short param_2,int param_3,uint param_4,longlong param_5,
                  longlong param_6)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = param_1[1];
  uVar5 = -iVar2;
  uVar9 = param_3 + -1 + iVar2 & uVar5;
  uVar4 = uVar5 & param_4;
  uVar8 = uVar9;
  if ((int)uVar9 <= (int)uVar4) goto LAB_143c62da1;
  uVar1 = *(ushort *)(param_5 + 0x18);
  uVar6 = uVar1 & 7;
  if (uVar9 != iVar2 + uVar4) {
    return;
  }
  uVar7 = uVar4;
  if ((uVar1 & 7) != 0) {
    if (uVar6 == 1) {
LAB_143c62cb4:
      if ((*(longlong *)(param_5 + 0x28) == param_6) && (*(int *)(param_5 + 0x1c) < 1)) {
        if ((uVar1 & 0x10) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if ((*(longlong *)(param_6 + 0x28) == param_5) && (*(int *)(param_5 + 0x20) == (int)param_2))
      {
        if ((uVar1 & 0x20) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if (uVar6 == 1) goto LAB_143c62d23;
    }
    else if (uVar6 != 4) {
      if (uVar6 != 5) {
        return;
      }
      goto LAB_143c62cb4;
    }
    uVar7 = (int)((param_4 - 1) + param_3) / 2 + param_1[2] & uVar5;
  }
LAB_143c62d23:
  if ((-1 < (int)uVar7) &&
     (uVar8 = uVar7, (uint)param_1[0x28] <= (uint)((int)uVar7 >> ((byte)*param_1 & 0x1f)))) {
    uVar8 = uVar4;
  }
  if (uVar8 == uVar9) {
    uVar9 = uVar4;
  }
  iVar2 = param_1[0x2a];
  uVar9 = (int)uVar9 >> ((byte)*param_1 & 0x1f);
  pbVar3 = (byte *)((((longlong)param_2 >> 3) - (longlong)(int)(iVar2 * uVar9)) +
                   *(longlong *)(param_1 + 0x16));
  if (0 < iVar2) {
    pbVar3 = pbVar3 + (param_1[0x28] + -1) * iVar2;
  }
  if (((-1 < (int)uVar9) && (uVar9 < (uint)param_1[0x28])) &&
     ((*pbVar3 & (byte)(0x80 >> ((byte)param_2 & 7))) != 0)) {
    return;
  }
LAB_143c62da1:
  uVar8 = (int)uVar8 >> ((byte)*param_1 & 0x1f);
  if ((-1 < (int)uVar8) && (uVar8 < (uint)param_1[0x28])) {
    iVar2 = param_1[0x2a];
    pbVar3 = (byte *)((((longlong)param_2 >> 3) - (longlong)(int)(iVar2 * uVar8)) +
                     *(longlong *)(param_1 + 0x16));
    if (0 < iVar2) {
      pbVar3 = pbVar3 + (int)((param_1[0x28] - 1) * iVar2);
    }
    *pbVar3 = *pbVar3 | (byte)(0x80 >> ((byte)param_2 & 7));
  }
  return;
}



// FUNCTION 143c62ea0 FUN_143c62ea0 body=151 status=ok
// SIG undefined FUN_143c62ea0(void)

ulonglong FUN_143c62ea0(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x44) * -4;
  iVar4 = *(int *)(param_1 + 0x44) + -1;
  puVar1 = (uint *)(longlong)iVar4;
  if (-1 < iVar4) {
    do {
      if (*(int *)(lVar5 + (longlong)puVar1 * 4) <= (int)param_2) break;
      iVar4 = iVar4 + -1;
      puVar1 = (uint *)((longlong)puVar1 + -1);
    } while (-1 < (longlong)puVar1);
    if (-1 < iVar4) {
      lVar2 = (longlong)iVar4;
      if (*(int *)(lVar5 + lVar2 * 4) < (int)param_2) {
        if (iVar4 < 0) goto LAB_143c62f05;
        iVar4 = -1;
        uVar3 = param_2;
        do {
          param_2 = *(uint *)(lVar5 + lVar2 * 4);
          puVar1 = (uint *)(ulonglong)param_2;
          *(uint *)(lVar5 + lVar2 * 4) = uVar3;
          lVar2 = lVar2 + -1;
          uVar3 = param_2;
        } while (-1 < lVar2);
      }
      if (-1 < iVar4) goto LAB_143c62f34;
    }
  }
LAB_143c62f05:
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -4;
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x40) = 0x62;
    return CONCAT71((int7)(*(ulonglong *)(param_1 + 0x30) >> 8),1);
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x44) * -4);
  *puVar1 = param_2;
LAB_143c62f34:
  return (ulonglong)puVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c62f40 FUN_143c62f40 body=484 status=ok
// SIG undefined FUN_143c62f40(void)

ulonglong FUN_143c62f40(longlong param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  iVar4 = *(int *)(param_1 + 0x98);
  if (iVar4 == 0) {
    uVar2 = *(uint *)(param_1 + 0x6c);
    if ((int)uVar2 < param_3) {
      uVar6 = 1;
      cVar3 = FUN_143c632e0(param_1,1,
                            *(int *)(param_1 + 8) <=
                            (int)(((uVar2 - 1) + *(int *)(param_1 + 4) & -*(int *)(param_1 + 4)) -
                                 uVar2));
      if (cVar3 != '\0') {
        return uVar6 & 0xff;
      }
    }
    else if (param_3 < (int)uVar2) {
      iVar4 = uVar2 - (-*(int *)(param_1 + 4) & uVar2);
      bVar7 = SBORROW4(iVar4,*(int *)(param_1 + 8));
      iVar4 = iVar4 - *(int *)(param_1 + 8);
      goto LAB_143c6304c;
    }
  }
  else if (iVar4 == 1) {
    uVar2 = *(uint *)(param_1 + 0x6c);
    if (param_3 < (int)uVar2) {
      cVar3 = FUN_143c62aa0(param_1,*(int *)(param_1 + 8) <=
                                    (int)(uVar2 - (-*(int *)(param_1 + 4) & uVar2)));
      if (cVar3 != '\0') {
        return 1;
      }
      iVar4 = *(uint *)(param_1 + 0x6c) - (-*(int *)(param_1 + 4) & *(uint *)(param_1 + 0x6c));
      bVar7 = SBORROW4(iVar4,*(int *)(param_1 + 8));
      iVar4 = iVar4 - *(int *)(param_1 + 8);
LAB_143c6304c:
      uVar5 = 2;
      goto LAB_143c63051;
    }
  }
  else if ((iVar4 == 2) && (iVar4 = *(int *)(param_1 + 0x6c), iVar4 < param_3)) {
    cVar3 = FUN_143c62aa0(param_1,CONCAT31((int3)((uint)iVar4 >> 8),
                                           *(int *)(param_1 + 8) <=
                                           (iVar4 + -1 + *(int *)(param_1 + 4) &
                                           -*(int *)(param_1 + 4)) - iVar4));
    if (cVar3 != '\0') {
      return 1;
    }
    iVar4 = (*(int *)(param_1 + 0x6c) + -1 + *(int *)(param_1 + 4) & -*(int *)(param_1 + 4)) -
            *(int *)(param_1 + 0x6c);
    uVar5 = 1;
    bVar7 = SBORROW4(iVar4,*(int *)(param_1 + 8));
    iVar4 = iVar4 - *(int *)(param_1 + 8);
LAB_143c63051:
    cVar3 = FUN_143c632e0(param_1,uVar5,bVar7 == iVar4 < 0);
    if (cVar3 != '\0') {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x98) == 1) {
    cVar3 = FUN_143c63130(param_1,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                          param_2,param_3,*(undefined4 *)(param_1 + 0x70),
                          *(undefined4 *)(param_1 + 0x74));
  }
  else {
    if (*(int *)(param_1 + 0x98) != 2) goto LAB_143c6310c;
    cVar1 = *(char *)(param_1 + 0x7a);
    cVar3 = FUN_143c63130(param_1,*(undefined4 *)(param_1 + 0x68),-*(int *)(param_1 + 0x6c),param_2,
                          -param_3,-*(int *)(param_1 + 0x74),-*(int *)(param_1 + 0x70));
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x7a) == '\0')) {
      *(int *)(*(longlong *)(param_1 + 0x80) + 0x20) =
           -*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
    }
  }
  if (cVar3 != '\0') {
    return 1;
  }
LAB_143c6310c:
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(int *)(param_1 + 0x6c) = param_3;
  return 0;
}



// FUNCTION 143c63130 FUN_143c63130 body=427 status=ok
// SIG undefined FUN_143c63130(void)

ulonglong FUN_143c63130(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5,
                       int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  param_4 = param_4 - param_2;
  iVar8 = param_5 - param_3;
  if (((iVar8 < 1) || ((int)param_5 < param_6)) || (param_7 < (int)param_3)) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar4 = 0;
  uVar3 = 0;
  if ((int)param_3 < param_6) {
    iVar1 = FUN_143c21f00(param_4,param_6 - param_3,iVar8);
    param_2 = param_2 + iVar1;
    bVar5 = (byte)*param_1;
    param_6 = param_6 >> (bVar5 & 0x1f);
  }
  else {
    bVar5 = (byte)*param_1;
    param_6 = (int)param_3 >> (bVar5 & 0x1f);
    uVar4 = (ulonglong)(param_1[1] - 1 & param_3);
  }
  if (param_7 < (int)param_5) {
    param_7 = param_7 >> (bVar5 & 0x1f);
  }
  else {
    param_7 = (int)param_5 >> (bVar5 & 0x1f);
    uVar3 = param_1[1] - 1 & param_5;
  }
  if ((int)uVar4 < 1) {
    if (*(char *)((longlong)param_1 + 0x7b) != '\0') {
      *(longlong *)(param_1 + 0xe) = *(longlong *)(param_1 + 0xe) + -4;
      *(undefined1 *)((longlong)param_1 + 0x7b) = 0;
    }
  }
  else {
    if (param_6 == param_7) goto LAB_143c632cd;
    iVar1 = FUN_143c21f00(param_4,param_1[1] - (int)uVar4,iVar8);
    param_2 = param_2 + iVar1;
    param_6 = param_6 + 1;
  }
  *(bool *)((longlong)param_1 + 0x7b) = uVar3 == 0;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    *(int *)(*(longlong *)(param_1 + 0x20) + 0x20) = param_6;
    *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  }
  iVar1 = (param_7 - param_6) + 1;
  if (*(ulonglong *)(param_1 + 0xc) <=
      (ulonglong)(*(longlong *)(param_1 + 0xe) + (longlong)iVar1 * 4)) {
    param_1[0x10] = 0x62;
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xe) >> 8),1);
  }
  if (param_4 < 1) {
    iVar2 = FUN_143c22010(param_1[1],-param_4,iVar8);
    iVar2 = -iVar2;
    param_4 = -(param_4 * param_1[1]);
    iVar7 = -1;
  }
  else {
    iVar2 = FUN_143c22010(param_1[1],param_4,iVar8);
    param_4 = param_4 * param_1[1];
    iVar7 = 1;
  }
  piVar6 = *(int **)(param_1 + 0xe);
  uVar3 = -iVar8;
  for (; uVar4 = (ulonglong)uVar3, 0 < iVar1; iVar1 = iVar1 + -1) {
    *piVar6 = param_2;
    piVar6 = piVar6 + 1;
    param_2 = param_2 + iVar2;
    uVar3 = uVar3 + param_4 % iVar8;
    if (-1 < (int)uVar3) {
      uVar3 = uVar3 - iVar8;
      param_2 = param_2 + iVar7;
    }
  }
  *(int **)(param_1 + 0xe) = piVar6;
LAB_143c632cd:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143c632e0 FUN_143c632e0 body=263 status=ok
// SIG undefined FUN_143c632e0(void)

ulonglong FUN_143c632e0(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    *(longlong *)(param_1 + 0x80) = lVar1;
    *(longlong *)(param_1 + 0x88) = lVar1;
    *(longlong *)(param_1 + 0x38) = lVar1 + 0x34;
  }
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x40) = 0x62;
    return CONCAT71((int7)(*(ulonglong *)(param_1 + 0x30) >> 8),1);
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x80) + 0x18) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x20) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x1c) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x28) = 0;
  uVar2 = *(ulonglong *)(param_1 + 0x80);
  *(ushort *)(uVar2 + 0x18) = (ushort)*(byte *)(param_1 + 0x120);
  if (param_2 == 1) {
    uVar2 = *(ulonglong *)(param_1 + 0x80);
    *(ushort *)(uVar2 + 0x18) = *(ushort *)(uVar2 + 0x18) | 8;
    if (param_3 != '\0') {
      uVar2 = *(ulonglong *)(param_1 + 0x80);
      *(ushort *)(uVar2 + 0x18) = *(ushort *)(uVar2 + 0x18) | 0x20;
    }
  }
  else {
    if (param_2 != 2) {
      *(undefined4 *)(param_1 + 0x40) = 0x14;
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    if (param_3 != '\0') {
      uVar2 = *(ulonglong *)(param_1 + 0x80);
      *(ushort *)(uVar2 + 0x18) = *(ushort *)(uVar2 + 0x18) | 0x10;
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x80);
    *(ulonglong *)(param_1 + 0x90) = uVar2;
  }
  *(int *)(param_1 + 0x98) = param_2;
  *(undefined2 *)(param_1 + 0x7a) = 1;
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143c633f0 FUN_143c633f0 body=420 status=ok
// SIG undefined FUN_143c633f0(void)

undefined8 FUN_143c633f0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[0x3a];
  if ((uVar1 >> 8 & 1) == 0) {
    *param_1 = 6;
    param_1[4] = 0x20;
    param_1[5] = 2;
  }
  else {
    *param_1 = 0xc;
    param_1[4] = 0x100;
    param_1[5] = 0x1e;
  }
  iVar2 = 1 << ((byte)*param_1 & 0x1f);
  param_1[1] = iVar2;
  param_1[2] = iVar2 / 2;
  iVar2 = *param_1 + -6;
  param_1[3] = iVar2;
  param_1[6] = iVar2;
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) == 0) {
      *(undefined1 *)(param_1 + 0x48) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 4;
    }
    if ((uVar1 & 0x20) == 0) {
      *(char *)(param_1 + 0x48) = (char)param_1[0x48] + '\x01';
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 2;
  }
  *(undefined1 **)(param_1 + 0x40) = &LAB_143c639d0;
  *(code **)(param_1 + 0x42) = FUN_143c63a20;
  *(byte *)((longlong)param_1 + 0x121) = ~(byte)(uVar1 >> 9) & 1;
  *(code **)(param_1 + 0x44) = FUN_143c63820;
  param_1[0x11b] = 0;
  *(undefined1 **)(param_1 + 0x46) = &LAB_143c63b20;
  *(undefined2 *)(param_1 + 0x10b) = 0;
  *(short *)((longlong)param_1 + 0x42e) = (short)param_1[0x28] + -1;
  *(short *)(param_1 + 0x14) = (short)param_1[0x29];
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x2c);
  uVar3 = FUN_143c635a0(param_1,0);
  if ((int)uVar3 == 0) {
    if ((*(char *)((longlong)param_1 + 0x121) != '\0') && ((char)param_1[0x48] != '\x02')) {
      param_1[0x11b] = 0;
      *(code **)(param_1 + 0x40) = FUN_140447710;
      *(undefined1 **)(param_1 + 0x42) = &LAB_143c62e10;
      *(code **)(param_1 + 0x44) = FUN_143c62c30;
      *(code **)(param_1 + 0x46) = FUN_140447710;
      *(undefined2 *)(param_1 + 0x10b) = 0;
      *(short *)((longlong)param_1 + 0x42e) = (short)param_1[0x29] + -1;
      uVar3 = FUN_143c635a0(param_1,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143c635a0 FUN_143c635a0 body=349 status=ok
// SIG undefined FUN_143c635a0(void)

undefined4 FUN_143c635a0(longlong param_1,char param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = *(int *)(param_1 + 0x46c);
  if (-1 < iVar5) {
    do {
      *(int *)(param_1 + 0x74) =
           (int)*(short *)(param_1 + 0x42e + (longlong)iVar5 * 4) * *(int *)(param_1 + 4);
      sVar1 = *(short *)(param_1 + 0x42c + (longlong)iVar5 * 4);
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(int *)(param_1 + 0x70) = (int)sVar1 * *(int *)(param_1 + 4);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x20);
      cVar3 = FUN_143c61c00(param_1,(int)param_2);
      if (cVar3 == '\0') {
        if (*(longlong *)(param_1 + 0x88) != 0) {
          cVar3 = FUN_143c623d0(param_1);
          if (cVar3 != '\0') {
            return *(undefined4 *)(param_1 + 0x40);
          }
        }
        *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + -1;
      }
      else {
        if (*(int *)(param_1 + 0x40) != 0x62) {
          return 1;
        }
        lVar6 = (longlong)*(int *)(param_1 + 0x46c);
        *(undefined4 *)(param_1 + 0x40) = 0;
        sVar1 = *(short *)(param_1 + 0x42c + lVar6 * 4);
        sVar2 = *(short *)(param_1 + 0x42e + lVar6 * 4);
        if ((6 < *(int *)(param_1 + 0x46c)) ||
           (sVar4 = (short)(((int)sVar1 + (int)sVar2) / 2), sVar4 < sVar1)) {
          *(undefined4 *)(param_1 + 0x46c) = 0;
          *(undefined4 *)(param_1 + 0x40) = 0x14;
          return 0x14;
        }
        *(short *)(param_1 + 0x430 + lVar6 * 4) = sVar4;
        *(short *)(param_1 + 0x432 + (longlong)*(int *)(param_1 + 0x46c) * 4) = sVar2;
        *(short *)(param_1 + 0x42e + (longlong)*(int *)(param_1 + 0x46c) * 4) = sVar4 + -1;
        *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + 1;
      }
      iVar5 = *(int *)(param_1 + 0x46c);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 143c63760 FUN_143c63760 body=180 status=ok
// SIG undefined FUN_143c63760(void)

void FUN_143c63760(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_1[0xc] = param_1[6];
  iVar1 = param_1[4] + 1 + param_1[2] >> 1;
  iVar3 = *param_1 + 1 + param_1[2] >> 1;
  param_1[2] = iVar3;
  iVar4 = param_1[6] + 1 + param_1[4] >> 1;
  param_1[10] = iVar4;
  param_1[0xd] = param_1[7];
  iVar2 = iVar3 + 1 + iVar1 >> 1;
  param_1[4] = iVar2;
  iVar3 = param_1[3];
  iVar1 = iVar1 + iVar4 + 1 >> 1;
  param_1[8] = iVar1;
  param_1[6] = iVar1 + iVar2 + 1 >> 1;
  iVar2 = param_1[1] + 1 + iVar3 >> 1;
  param_1[3] = iVar2;
  iVar3 = param_1[5] + 1 + iVar3 >> 1;
  iVar1 = param_1[5] + 1 + param_1[7] >> 1;
  param_1[0xb] = iVar1;
  iVar1 = iVar3 + 1 + iVar1 >> 1;
  param_1[9] = iVar1;
  iVar3 = iVar3 + 1 + iVar2 >> 1;
  param_1[5] = iVar3;
  param_1[7] = iVar1 + 1 + iVar3 >> 1;
  return;
}



// FUNCTION 143c63820 FUN_143c63820 body=429 status=ok
// SIG undefined FUN_143c63820(void)

void FUN_143c63820(undefined4 *param_1,short param_2,int param_3,uint param_4,longlong param_5,
                  longlong param_6)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = param_1[1];
  uVar4 = -iVar9;
  uVar8 = param_3 + -1 + iVar9 & uVar4;
  uVar3 = uVar4 & param_4;
  uVar7 = uVar8;
  if ((int)uVar8 <= (int)uVar3) goto LAB_143c6397b;
  uVar2 = *(ushort *)(param_5 + 0x18);
  uVar5 = uVar2 & 7;
  if (uVar8 != iVar9 + uVar3) {
    return;
  }
  uVar6 = uVar3;
  if ((uVar2 & 7) != 0) {
    if (uVar5 == 1) {
LAB_143c638a4:
      if ((*(longlong *)(param_5 + 0x28) == param_6) && (*(int *)(param_5 + 0x1c) < 1)) {
        if ((uVar2 & 0x10) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if ((*(longlong *)(param_6 + 0x28) == param_5) && (*(int *)(param_5 + 0x20) == (int)param_2))
      {
        if ((uVar2 & 0x20) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if (uVar5 == 1) goto LAB_143c63913;
    }
    else if (uVar5 != 4) {
      if (uVar5 != 5) {
        return;
      }
      goto LAB_143c638a4;
    }
    uVar6 = (int)((param_4 - 1) + param_3) / 2 + param_1[2] & uVar4;
  }
LAB_143c63913:
  if ((-1 < (int)uVar6) &&
     (uVar7 = uVar6, (int)(uint)*(ushort *)(param_1 + 0x14) <= (int)uVar6 >> ((byte)*param_1 & 0x1f)
     )) {
    uVar7 = uVar3;
  }
  if (uVar7 == uVar8) {
    uVar8 = uVar3;
  }
  iVar9 = (int)uVar8 >> ((byte)*param_1 & 0x1f);
  if (((-1 < iVar9) && (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x14))) &&
     (((byte)(0x80 >> ((byte)iVar9 & 7)) &
      *(byte *)((longlong)(short)(iVar9 >> 3) + (longlong)(int)param_1[0x3c] +
               *(longlong *)(param_1 + 0x16))) != 0)) {
    return;
  }
LAB_143c6397b:
  iVar9 = (int)uVar7 >> ((byte)*param_1 & 0x1f);
  if ((-1 < iVar9) && (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x14))) {
    pbVar1 = (byte *)((longlong)(int)param_1[0x3c] + *(longlong *)(param_1 + 0x16) +
                     (longlong)(short)(iVar9 >> 3));
    *pbVar1 = *pbVar1 | (byte)(0x80 >> ((byte)iVar9 & 7));
  }
  return;
}



// FUNCTION 143c63a20 FUN_143c63a20 body=252 status=ok
// SIG undefined FUN_143c63a20(void)

void FUN_143c63a20(undefined4 *param_1,undefined8 param_2,int param_3,uint param_4,longlong param_5)

{
  ushort uVar1;
  short sVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = param_1[1];
  iVar8 = (param_3 + -1 + iVar4 & -iVar4) >> ((byte)*param_1 & 0x1f);
  if (((*(byte *)(param_5 + 0x18) & 7) == 2) ||
     (iVar7 = iVar8, (int)param_1[5] < (int)((param_4 - iVar4) - param_3))) {
    iVar7 = (int)(-iVar4 & param_4) >> ((byte)*param_1 & 0x1f);
  }
  if (-1 < iVar7) {
    uVar1 = *(ushort *)(param_1 + 0x14);
    if (iVar8 < (int)(uint)uVar1) {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if ((int)(uint)uVar1 <= iVar7) {
        iVar7 = uVar1 - 1;
      }
      sVar2 = (short)(iVar8 >> 3);
      pbVar3 = (byte *)((longlong)(int)param_1[0x3c] + *(longlong *)(param_1 + 0x16) +
                       (longlong)sVar2);
      bVar5 = ~(byte)(0x7f >> ((byte)iVar7 & 7));
      iVar4 = (int)(short)(iVar7 >> 3) - (int)sVar2;
      bVar6 = (byte)(0xff >> ((byte)iVar8 & 7));
      if (0 < iVar4) {
        *pbVar3 = *pbVar3 | bVar6;
        while (iVar4 = iVar4 + -1, 0 < iVar4) {
          pbVar3 = pbVar3 + 1;
          *pbVar3 = 0xff;
        }
        pbVar3[1] = pbVar3[1] | bVar5;
        return;
      }
      *pbVar3 = *pbVar3 | bVar5 & bVar6;
    }
  }
  return;
}



// FUNCTION 143c63b30 FUN_143c63b30 body=49 status=ok
// SIG undefined FUN_143c63b30(void)

void FUN_143c63b30(longlong param_1)

{
  FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  return;
}



// FUNCTION 143c63b80 FUN_143c63b80 body=487 status=ok
// SIG undefined FUN_143c63b80(void)

undefined8 FUN_143c63b80(longlong param_1,uint param_2,ushort *param_3)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint local_res10 [2];
  
  if (*(uint *)(param_1 + 0x400) <= param_2) {
    return 6;
  }
  uVar9 = *(uint *)(param_1 + 0x3fc);
  if (uVar9 != 0) {
    if (uVar9 < 3) {
      lVar7 = (ulonglong)(param_2 * 0x30) + *(longlong *)(param_1 + 0x3f0);
      *param_3 = (ushort)*(byte *)(lVar7 + 0x34);
      param_3[1] = (ushort)*(byte *)(lVar7 + 0x35);
      iVar8 = *(char *)(lVar7 + 0x18) * 0x40;
      *(int *)(param_3 + 6) = iVar8;
      cVar1 = *(char *)(lVar7 + 0x19);
      *(int *)(param_3 + 8) = cVar1 * 0x40;
      *(int *)(param_3 + 10) = iVar8 + cVar1 * -0x40;
      *(uint *)(param_3 + 0xc) =
           ((int)*(char *)(lVar7 + 0x1f) + (int)*(char *)(lVar7 + 0x1e) +
           (uint)*(byte *)(lVar7 + 0x1a)) * 0x40;
      return 0;
    }
    if (uVar9 == 3) {
      lVar7 = (ulonglong)(param_2 * 4) + *(longlong *)(param_1 + 0x3f0);
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      iVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar7 + 8),*(undefined1 *)(lVar7 + 9)),
                                *(undefined1 *)(lVar7 + 10)),*(undefined1 *)(lVar7 + 0xb));
      uVar6 = (**(code **)(param_1 + 0x290))(param_1,0x73626978,uVar3,local_res10);
      if ((int)uVar6 == 0) {
        if (local_res10[0] < iVar8 + 4U) {
          uVar6 = 3;
        }
        else {
          iVar5 = IStreamingManager::GetNumWantingResourcesID(uVar3);
          uVar6 = FUN_143c251d0(uVar3,iVar8 + iVar5);
          if ((int)uVar6 == 0) {
            uVar6 = FUN_143c24650(uVar3,4);
            if ((int)uVar6 == 0) {
              uVar4 = FUN_143c24910(uVar3);
              FUN_143c24910(uVar3);
              FT_Stream_ExitFrame(uVar3);
              uVar2 = *(ushort *)(param_1 + 0x112);
              *param_3 = uVar4;
              param_3[1] = uVar4;
              uVar9 = (uint)uVar4;
              *(int *)(param_3 + 6) =
                   (int)((int)*(short *)(param_1 + 0x13c) * uVar9 * 0x40) / (int)(uint)uVar2;
              *(int *)(param_3 + 8) =
                   (int)((int)*(short *)(param_1 + 0x13e) * uVar9 * 0x40) / (int)(uint)uVar2;
              *(int *)(param_3 + 10) =
                   (int)((((int)*(short *)(param_1 + 0x140) - (int)*(short *)(param_1 + 0x13e)) +
                         (int)*(short *)(param_1 + 0x13c)) * uVar9 * 0x40) / (int)(uint)uVar2;
              *(int *)(param_3 + 0xc) =
                   (int)(*(ushort *)(param_1 + 0x142) * uVar9 * 0x40) / (int)(uint)uVar2;
              uVar6 = 0;
            }
          }
        }
      }
      return uVar6;
    }
  }
  return 2;
}



// FUNCTION 143c63d70 FUN_143c63d70 body=324 status=ok
// SIG undefined FUN_143c63d70(void)

ulonglong FUN_143c63d70(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                       undefined8 param_5,longlong param_6,undefined8 param_7)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  
  uVar3 = *(uint *)(param_1 + 0x3fc);
  if (uVar3 == 0) {
LAB_143c63e96:
    uVar4 = 2;
  }
  else {
    if (uVar3 < 3) {
      uVar4 = FUN_143c6b8e0(local_58,param_1,param_2,param_7);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_143c6c270(local_58,param_3,0,0);
    }
    else {
      if (uVar3 != 3) goto LAB_143c63e96;
      uVar4 = FUN_143c6b410();
    }
    if ((((int)uVar4 == 0) && ((param_4 >> 0x14 & 1) == 0)) && (*(char *)(param_6 + 0x1a) == '\a'))
    {
      uVar2 = **(undefined8 **)(param_1 + 0x78);
      FUN_143c29300(local_58);
      uVar3 = FUN_143c28bf0(uVar2,param_6,local_58,1);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        *(undefined1 *)(param_6 + 0x1a) = local_3e;
        *(undefined4 *)(param_6 + 8) = local_50;
        *(undefined2 *)(param_6 + 0x18) = local_40;
        ft_glyphslot_set_bitmap(*(undefined8 *)(param_1 + 0x78),local_48);
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0xf0) + 8);
        *puVar1 = *puVar1 | 1;
      }
      else {
        FUN_143c29290(uVar2,local_58);
      }
    }
  }
  return uVar4;
}



// FUNCTION 143c63ec0 FUN_143c63ec0 body=318 status=ok
// SIG undefined FUN_143c63ec0(void)

undefined4 FUN_143c63ec0(longlong param_1,uint param_2,undefined8 *param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(ushort *)(param_1 + 0x174) <= param_2) {
    return 0x10;
  }
  lVar2 = *(longlong *)(param_1 + 0x2c8);
  if (lVar2 == 0) {
    return 7;
  }
  uVar4 = (**(code **)(lVar2 + 0x20))(0);
  *param_3 = uVar4;
  iVar3 = *(int *)(param_1 + 0x260);
  if (iVar3 == 0x10000) {
    if (0x101 < param_2) {
      return 0;
    }
  }
  else if (iVar3 == 0x20000) {
    if ((*(char *)(param_1 + 0x328) == '\0') && (iVar3 = FUN_143c696f0(param_1), iVar3 != 0)) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x330) <= param_2) {
      return 0;
    }
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x338) + uVar5 * 2);
    if (0x101 < uVar1) {
      *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0x340) + -0x810 + (ulonglong)uVar1 * 8);
      return 0;
    }
    uVar5 = (ulonglong)uVar1;
  }
  else {
    if (iVar3 != 0x28000) {
      return 0;
    }
    if ((*(char *)(param_1 + 0x328) == '\0') && (iVar3 = FUN_143c696f0(param_1), iVar3 != 0)) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x330) <= param_2) {
      return 0;
    }
    uVar5 = (ulonglong)((int)*(char *)(*(longlong *)(param_1 + 0x338) + uVar5) + param_2);
  }
  uVar4 = (**(code **)(lVar2 + 0x20))(uVar5);
  *param_3 = uVar4;
  return 0;
}



// FUNCTION 143c64040 FUN_143c64040 body=333 status=ok
// SIG undefined FUN_143c64040(void)

void FUN_143c64040(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ushort uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  if (*(char *)(param_1 + 0x328) == '\0') {
    *(undefined1 *)(param_1 + 0x328) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x260) != 0x20000) {
    if (*(int *)(param_1 + 0x260) != 0x28000) {
      *(undefined1 *)(param_1 + 0x328) = 0;
      return;
    }
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x338));
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined2 *)(param_1 + 0x330) = 0;
    *(undefined1 *)(param_1 + 0x328) = 0;
    return;
  }
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x338));
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined2 *)(param_1 + 0x330) = 0;
  if (*(short *)(param_1 + 0x332) != 0) {
    do {
      uVar2 = (ulonglong)uVar3;
      ft_mem_free(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x340) + uVar2 * 8));
      uVar3 = uVar3 + 1;
      *(undefined8 *)(uVar2 * 8 + *(longlong *)(param_1 + 0x340)) = 0;
    } while (uVar3 < *(ushort *)(param_1 + 0x332));
  }
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x340));
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined2 *)(param_1 + 0x332) = 0;
  *(undefined1 *)(param_1 + 0x328) = 0;
  return;
}



// FUNCTION 143c64190 FUN_143c64190 body=1123 status=ok
// SIG undefined FUN_143c64190(void)

uint FUN_143c64190(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_res10;
  uint local_res18;
  ulonglong local_68;
  
  local_res18 = 0;
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_143c27ac0(param_2);
  }
  uVar6 = CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  local_68 = (ulonglong)uVar6;
  uVar15 = (uint)uVar6;
  if (*(ulonglong *)(param_2 + 0x108) < local_68 + param_1) {
    if (0 < *(int *)(param_2 + 0x110)) {
      FUN_143c27ac0(param_2);
    }
    uVar15 = (int)*(undefined8 *)(param_2 + 0x108) - (int)param_1;
    local_68 = (ulonglong)uVar15;
  }
  if (uVar15 < 0x10) {
    FUN_143c27ac0(param_2);
  }
  uVar3 = *(undefined1 *)(param_1 + 6);
  bVar4 = *(byte *)(param_1 + 7);
  if ((1 < *(int *)(param_2 + 0x110)) && ((bVar4 & 1) != 0)) {
    FUN_143c27ac0(param_2);
  }
  uVar6 = CONCAT11(uVar3,bVar4) >> 1;
  uVar21 = (uint)uVar6;
  if (uVar15 < uVar21 * 8 + 0x10) {
    FUN_143c27ac0(param_2);
  }
  if (1 < *(int *)(param_2 + 0x110)) {
    uVar7 = CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
    bVar4 = *(byte *)(param_1 + 0xb);
    uVar8 = CONCAT11(*(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd));
    if (((uVar8 | uVar7) & 1) != 0) {
      FUN_143c27ac0(param_2);
    }
    uVar15 = (uint)(uVar7 >> 1);
    if ((((uVar21 < uVar15) || (uVar15 * 2 < uVar21)) || ((uVar8 >> 1) + uVar15 != uVar21)) ||
       (uVar15 != 1 << (bVar4 & 0x1f))) {
      FUN_143c27ac0(param_2);
    }
  }
  uVar17 = (ulonglong)(uVar21 * 2);
  lVar14 = param_1 + 0x10 + (ulonglong)(uVar21 * 2);
  lVar1 = param_1 + 0xe;
  lVar2 = uVar17 + lVar14;
  puVar9 = (undefined1 *)(uVar17 + uVar17 + lVar2);
  if ((1 < *(int *)(param_2 + 0x110)) &&
     (uVar10 = (ulonglong)(uVar21 * 2 - 2),
     CONCAT11(*(undefined1 *)(uVar10 + lVar1),*(undefined1 *)(uVar10 + 1 + lVar1)) != -1)) {
    FUN_143c27ac0(param_2);
  }
  local_res10 = 0;
  uVar15 = 0;
  if (uVar6 != 0) {
    puVar12 = (undefined1 *)(lVar14 + -1);
    lVar14 = (uVar17 + lVar2) - lVar2;
    puVar18 = (undefined1 *)(lVar2 + -1);
    uVar20 = 0;
    uVar16 = 0;
    do {
      puVar11 = puVar12 + 1;
      puVar12 = puVar12 + 2;
      puVar19 = puVar18 + 2;
      uVar13 = (uint)CONCAT11(*puVar11,*puVar12);
      uVar22 = (uint)CONCAT11(puVar18[(lVar1 - lVar2) + 1],puVar19[lVar1 - lVar2]);
      uVar3 = puVar18[1];
      uVar5 = *puVar19;
      uVar6 = CONCAT11(puVar18[lVar14 + 1],puVar19[lVar14]);
      if (uVar22 < uVar13) {
        FUN_143c27ac0(param_2,8);
      }
      if ((uVar13 <= uVar16) && (local_res10 != 0)) {
        if (*(int *)(param_2 + 0x110) < 1) {
          if ((uVar13 < uVar20) || (uVar22 < uVar16)) {
            local_res18 = local_res18 | 1;
          }
          else {
            local_res18 = local_res18 | 2;
          }
        }
        else {
          FUN_143c27ac0(param_2,8);
        }
      }
      if (uVar6 != 0) {
        if (uVar6 == 0xffff) {
          if ((((1 < *(int *)(param_2 + 0x110)) || (local_res10 != uVar21 - 1)) ||
              (uVar13 != 0xffff)) || (uVar22 != 0xffff)) {
            FUN_143c27ac0(param_2,8);
          }
        }
        else {
          puVar18 = puVar18 + (ulonglong)(uint)uVar6 + lVar14 + 1;
          if (*(int *)(param_2 + 0x110) < 1) {
            if (((local_res10 != uVar21 - 1) || (uVar13 != 0xffff)) || (uVar22 != 0xffff)) {
              if (puVar9 <= puVar18) {
                puVar11 = *(undefined1 **)(param_2 + 0x108);
                goto LAB_143c64504;
              }
              goto LAB_143c6450c;
            }
          }
          else {
            if (puVar9 <= puVar18) {
              puVar11 = (undefined1 *)(local_68 + param_1);
LAB_143c64504:
              if (puVar18 + ((uVar22 - uVar13) * 2 + 2) <= puVar11) goto LAB_143c64519;
            }
LAB_143c6450c:
            FUN_143c27ac0(param_2,8);
          }
LAB_143c64519:
          if ((0 < *(int *)(param_2 + 0x110)) && (uVar13 < uVar22)) {
            puVar18 = puVar18 + -1;
            uVar17 = (ulonglong)(uVar22 - uVar13);
            do {
              puVar11 = puVar18 + 1;
              puVar18 = puVar18 + 2;
              if ((CONCAT11(*puVar11,*puVar18) != 0) &&
                 (*(uint *)(param_2 + 0x120) <=
                  (uint)(ushort)(CONCAT11(*puVar11,*puVar18) + CONCAT11(uVar3,uVar5)))) {
                FUN_143c27ac0(param_2,0x10);
              }
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
      }
      local_res10 = local_res10 + 1;
      puVar18 = puVar19;
      uVar15 = local_res18;
      uVar20 = uVar13;
      uVar16 = uVar22;
    } while (local_res10 < uVar21);
  }
  return uVar15;
}



// FUNCTION 143c64600 FUN_143c64600 body=518 status=ok
// SIG undefined FUN_143c64600(void)

undefined8 FUN_143c64600(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 0x10U) {
    FUN_143c27ac0(param_2,8);
  }
  puVar14 = (undefined1 *)(param_1 + 0xc);
  puVar13 = (undefined1 *)(param_1 + 0xd);
  puVar12 = (undefined1 *)(param_1 + 0xe);
  puVar15 = (undefined1 *)(param_1 + 0xf);
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  uVar16 = CONCAT31(CONCAT21(CONCAT11(*puVar14,*puVar13),*puVar12),*puVar15);
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar8) || (uVar8 < 0x10)) ||
     ((uVar8 - 0x10) / 0xc < uVar16)) {
    FUN_143c27ac0(param_2,8);
  }
  uVar8 = 0;
  uVar11 = 0;
  if (uVar16 != 0) {
    do {
      puVar1 = puVar14 + 4;
      puVar2 = puVar14 + 8;
      puVar14 = puVar14 + 0xc;
      uVar4 = *puVar14;
      uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar13[4]),puVar12[4]),puVar15[4]);
      puVar1 = puVar13 + 8;
      puVar13 = puVar13 + 0xc;
      puVar3 = puVar12 + 8;
      puVar12 = puVar12 + 0xc;
      uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar2,*puVar1),*puVar3),puVar15[8]);
      uVar5 = *puVar13;
      uVar6 = *puVar12;
      uVar7 = puVar15[0xc];
      if (uVar9 < uVar10) {
        FUN_143c27ac0(param_2,8);
      }
      if ((uVar11 != 0) && (uVar10 <= uVar8)) {
        FUN_143c27ac0(param_2,8);
      }
      if (0 < *(int *)(param_2 + 0x110)) {
        if ((*(uint *)(param_2 + 0x120) < uVar9 - uVar10) ||
           (*(uint *)(param_2 + 0x120) - (uVar9 - uVar10) <=
            CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6),uVar7))) {
          FUN_143c27ac0(param_2,0x10);
        }
      }
      uVar11 = uVar11 + 1;
      puVar15 = puVar15 + 0xc;
      uVar8 = uVar9;
    } while (uVar11 < uVar16);
  }
  return 0;
}



// FUNCTION 143c64910 FUN_143c64910 body=865 status=ok
// SIG undefined FUN_143c64910(void)

longlong FUN_143c64910(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int *piVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 *puVar24;
  uint uVar25;
  
  lVar10 = *(longlong *)(param_1 + 0x18);
  puVar9 = (undefined1 *)FUN_143c6a0e0(lVar10 + 6,param_3);
  if (puVar9 != (undefined1 *)0x0) {
    uVar13 = CONCAT31(CONCAT21(CONCAT11(*puVar9,puVar9[1]),puVar9[2]),puVar9[3]);
    uVar11 = CONCAT31(CONCAT21(CONCAT11(puVar9[4],puVar9[5]),puVar9[6]),puVar9[7]);
    if (uVar13 != 0) {
      if (uVar11 == 0) {
        lVar10 = FUN_143c6a170(param_1,(ulonglong)uVar13 + lVar10,param_2);
        return lVar10;
      }
      puVar24 = (undefined1 *)((ulonglong)uVar11 + lVar10);
      puVar22 = (undefined1 *)((ulonglong)uVar13 + lVar10);
      uVar13 = CONCAT31(CONCAT21(CONCAT11(*puVar24,puVar24[1]),puVar24[2]),puVar24[3]);
      puVar9 = puVar22;
      puVar15 = puVar24;
      iVar7 = FUN_143c6a020(puVar22);
      uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar9,puVar9[1]),puVar9[2]),puVar9[3]);
      if (uVar13 == 0) {
        lVar10 = FUN_143c6a170(param_1,puVar9);
      }
      else if (iVar7 == 0) {
        lVar10 = FUN_143c6a2b0(param_1,puVar15);
      }
      else {
        iVar7 = FUN_143c6a070(param_1,iVar7 + 1 + uVar13);
        if (iVar7 == 0) {
          iVar7 = 0;
          lVar10 = *(longlong *)(param_1 + 0x30);
          uVar18 = (uint)(byte)puVar22[7];
          puVar15 = puVar22 + 8;
          uVar14 = (uint)CONCAT21(CONCAT11(puVar22[4],puVar22[5]),puVar22[6]);
          uVar25 = 1;
          uVar17 = 1;
          puVar9 = puVar24 + 9;
          uVar21 = (uint)CONCAT21(CONCAT11(puVar24[4],puVar24[5]),puVar24[6]);
          lVar19 = 0;
          while( true ) {
            while (uVar21 <= uVar14 + uVar18) {
              if (uVar21 < uVar14) {
                iVar7 = iVar7 + 1;
                *(uint *)(lVar10 + lVar19 * 4) = uVar21;
                lVar19 = lVar19 + 1;
              }
              uVar17 = uVar17 + 1;
              if (uVar13 < uVar17) goto LAB_143c64bc6;
              puVar22 = puVar9 + 1;
              uVar3 = *puVar9;
              puVar24 = puVar9 + 2;
              puVar9 = puVar9 + 5;
              uVar21 = (uint)CONCAT21(CONCAT11(uVar3,*puVar22),*puVar24);
            }
            uVar12 = 0;
            iVar7 = iVar7 + 1 + uVar18;
            do {
              iVar8 = uVar12 + uVar14;
              uVar12 = uVar12 + 1;
              *(int *)(lVar10 + lVar19 * 4) = iVar8;
              lVar19 = lVar19 + 1;
            } while (uVar12 <= uVar18);
            uVar25 = uVar25 + 1;
            if (uVar11 < uVar25) break;
            uVar18 = (uint)(byte)puVar15[3];
            uVar14 = (uint)CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]);
            puVar15 = puVar15 + 4;
          }
          if (uVar17 <= uVar13) {
            lVar19 = (longlong)iVar7;
            iVar7 = iVar7 + 1;
            *(uint *)(lVar10 + lVar19 * 4) = uVar21;
            if (uVar17 < uVar13) {
              lVar19 = (longlong)iVar7;
              puVar15 = puVar9 + -1;
              puVar22 = puVar9 + -2;
              puVar9 = puVar9 + -3;
              uVar16 = (ulonglong)(uVar13 - uVar17);
              iVar7 = iVar7 + (uVar13 - uVar17);
              puVar23 = (uint *)(lVar10 + lVar19 * 4);
              do {
                puVar24 = puVar22 + 3;
                puVar1 = puVar9 + 3;
                puVar9 = puVar9 + 5;
                puVar22 = puVar22 + 5;
                puVar2 = puVar15 + 3;
                puVar15 = puVar15 + 5;
                *puVar23 = (uint)CONCAT21(CONCAT11(*puVar1,*puVar24),*puVar2);
                uVar16 = uVar16 - 1;
                puVar23 = puVar23 + 1;
              } while (uVar16 != 0);
            }
            goto LAB_143c64c47;
          }
LAB_143c64bc6:
          if (uVar25 <= uVar11) {
            lVar19 = (longlong)iVar7;
            uVar13 = 0;
            iVar7 = iVar7 + 1 + uVar18;
            piVar20 = (int *)(lVar10 + lVar19 * 4);
            do {
              iVar8 = uVar13 + uVar14;
              uVar13 = uVar13 + 1;
              *piVar20 = iVar8;
              piVar20 = piVar20 + 1;
            } while (uVar13 <= uVar18);
            if (uVar25 < uVar11) {
              lVar19 = (longlong)iVar7;
              uVar16 = (ulonglong)(uVar11 - uVar25);
              do {
                uVar3 = puVar15[1];
                uVar11 = 0;
                uVar4 = *puVar15;
                uVar5 = puVar15[2];
                bVar6 = puVar15[3];
                iVar7 = iVar7 + 1 + (uint)bVar6;
                do {
                  iVar8 = uVar11 + CONCAT21(CONCAT11(uVar4,uVar3),uVar5);
                  uVar11 = uVar11 + 1;
                  *(int *)(lVar10 + lVar19 * 4) = iVar8;
                  lVar19 = lVar19 + 1;
                } while (uVar11 <= bVar6);
                uVar16 = uVar16 - 1;
                puVar15 = puVar15 + 4;
              } while (uVar16 != 0);
            }
          }
LAB_143c64c47:
          *(undefined4 *)(lVar10 + (longlong)iVar7 * 4) = 0;
        }
        else {
          lVar10 = 0;
        }
      }
      return lVar10;
    }
    if (uVar11 != 0) {
      lVar10 = FUN_143c6a2b0(param_1,(ulonglong)uVar11 + lVar10,param_2);
      return lVar10;
    }
  }
  return 0;
}



// FUNCTION 143c64c80 FUN_143c64c80 body=434 status=ok
// SIG undefined FUN_143c64c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c64c80(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  uint *local_40;
  uint local_38 [2];
  int local_30;
  ushort local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  local_24 = IStreamingManager::GetNumWantingResourcesID(param_2);
  local_30 = FUN_143c24ea0(param_2,local_38);
  uVar4 = (ulonglong)local_38[0];
  if (local_38[0] == 0) {
    uVar4 = FUN_143c24c00(param_2,&DAT_145d365e8,&local_30);
    local_38[0] = (uint)uVar4;
    if ((local_38[0] == 0) &&
       ((local_30 == 0x4f54544f || (uVar4 = FUN_143c69110(&local_30,param_2), (int)uVar4 == 0)))) {
      local_38[0] = 0;
      *(ushort *)(param_1 + 0xf4) = local_2c;
      local_40 = local_38;
      *(int *)(param_1 + 0xf0) = local_30;
      iVar7 = 0;
      local_48 = 0;
      uVar5 = FUN_143c27410(uVar5,0x10,0,local_2c);
      *(undefined8 *)(param_1 + 0xf8) = uVar5;
      uVar4 = (ulonglong)local_38[0];
      if (local_38[0] == 0) {
        uVar4 = FUN_143c251d0(param_2,local_24 + 0xc);
        local_38[0] = (uint)uVar4;
        if ((local_38[0] == 0) &&
           (uVar4 = FUN_143c24650(param_2,(ulonglong)*(ushort *)(param_1 + 0xf4) << 4),
           (int)uVar4 == 0)) {
          piVar6 = *(int **)(param_1 + 0xf8);
          local_38[0] = 0;
          if (local_2c != 0) {
            do {
              iVar1 = FUN_143c24870(param_2);
              *piVar6 = iVar1;
              iVar1 = FUN_143c24870(param_2);
              piVar6[1] = iVar1;
              iVar1 = FUN_143c24870(param_2);
              piVar6[2] = iVar1;
              uVar2 = FUN_143c24870(param_2);
              piVar6[3] = uVar2;
              if ((uint)piVar6[2] <= *(uint *)(param_2 + 8)) {
                uVar3 = *(uint *)(param_2 + 8) - piVar6[2];
                if (uVar3 < uVar2) {
                  if ((*piVar6 != 0x686d7478) && (*piVar6 != 0x766d7478)) goto LAB_143c64dfe;
                  piVar6[3] = uVar3 & 0xfffffffc;
                }
                piVar6 = piVar6 + 4;
              }
LAB_143c64dfe:
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)(uint)local_2c);
          }
          FT_Stream_ExitFrame(param_2);
          uVar4 = (ulonglong)local_38[0];
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 143c64e40 tt_face_load_any body=167 status=ok
// SIG undefined tt_face_load_any(void)

undefined8
tt_face_load_any(longlong param_1,int param_2,int param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + 8);
  }
  else {
    piVar3 = *(int **)(param_1 + 0xf8);
    piVar5 = piVar3 + (ulonglong)*(ushort *)(param_1 + 0xf4) * 4;
    while( true ) {
      if (piVar5 <= piVar3) {
        return 0x8e;
      }
      if ((*piVar3 == param_2) && (piVar3[3] != 0)) break;
      piVar3 = piVar3 + 4;
    }
    param_3 = param_3 + piVar3[2];
    iVar1 = piVar3[3];
  }
  iVar2 = iVar1;
  if ((param_5 != (int *)0x0) && (iVar2 = *param_5, iVar2 == 0)) {
    *param_5 = iVar1;
    return 0;
  }
  uVar4 = FUN_143c24af0(*(undefined8 *)(param_1 + 0xa0),param_3,param_4,iVar2);
  return uVar4;
}



// FUNCTION 143c64f60 FUN_143c64f60 body=70 status=ok
// SIG undefined FUN_143c64f60(void)

void FUN_143c64f60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x290))(param_1,0x68656164,param_2,0);
  if (iVar1 == 0) {
    FUN_143c24c00(param_2,&DAT_145d369a0,param_1 + 0x100);
  }
  return;
}



// FUNCTION 143c64fb0 FUN_143c64fb0 body=97 status=ok
// SIG undefined FUN_143c64fb0(void)

void FUN_143c64fb0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x290))(param_1,0x636d6170,param_2,param_1 + 0x288);
  if (iVar1 == 0) {
    iVar1 = FT_Stream_ExtractFrame(param_2,*(undefined4 *)(param_1 + 0x288),param_1 + 0x280);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x288) = 0;
    }
  }
  return;
}



// FUNCTION 143c65020 FUN_143c65020 body=169 status=ok
// SIG undefined FUN_143c65020(void)

void FUN_143c65020(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x170);
  iVar2 = (**(code **)(param_1 + 0x290))(param_1,0x6d617870,param_2,0);
  if (iVar2 == 0) {
    iVar2 = FUN_143c24c00(param_2,&DAT_145d36ad8,piVar1);
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x176) = 0;
      *(undefined8 *)(param_1 + 0x17e) = 0;
      *(undefined8 *)(param_1 + 0x186) = 0;
      *(undefined2 *)(param_1 + 0x18e) = 0;
      if (0xffff < *piVar1) {
        iVar2 = FUN_143c24c00(param_2,&DAT_145d36ae8,piVar1);
        if (iVar2 == 0) {
          if (*(ushort *)(param_1 + 0x184) < 0x40) {
            *(undefined2 *)(param_1 + 0x184) = 0x40;
          }
          if (0xfffb < *(ushort *)(param_1 + 0x180)) {
            *(undefined2 *)(param_1 + 0x180) = 0xfffb;
          }
          if (100 < *(ushort *)(param_1 + 0x18e)) {
            *(undefined2 *)(param_1 + 0x18e) = 100;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143c650d0 FUN_143c650d0 body=450 status=ok
// SIG undefined FUN_143c650d0(void)

ulonglong FUN_143c650d0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint local_res10 [2];
  int local_res18 [2];
  
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x1f0) = param_2;
  uVar2 = (**(code **)(param_1 + 0x290))(param_1,0x6e616d65,param_2,local_res18);
  local_res10[0] = (uint)uVar2;
  if (local_res10[0] == 0) {
    iVar1 = IStreamingManager::GetNumWantingResourcesID(param_2);
    uVar2 = FUN_143c24c00(param_2,&DAT_145d36668,param_1 + 0x1d8);
    local_res10[0] = (uint)uVar2;
    if (local_res10[0] == 0) {
      iVar5 = *(int *)(param_1 + 0x1dc);
      uVar6 = iVar5 * 0xc + 6 + iVar1;
      if ((uint)(local_res18[0] + iVar1) < uVar6) {
        uVar2 = 0x91;
      }
      else {
        *(undefined4 *)(param_1 + 0x1dc) = 0;
        uVar3 = FUN_143c27410(uVar3,0x18,0,iVar5,0,local_res10);
        *(undefined8 *)(param_1 + 0x1e8) = uVar3;
        uVar2 = (ulonglong)local_res10[0];
        if ((local_res10[0] == 0) && (uVar2 = FUN_143c24650(param_2,iVar5 * 0xc), (int)uVar2 == 0))
        {
          lVar4 = *(longlong *)(param_1 + 0x1e8);
          local_res10[0] = 0;
          if (iVar5 != 0) {
            local_res10[0] = 0;
            do {
              local_res10[0] = FUN_143c24c00(param_2,&DAT_145d36b98,lVar4);
              if ((local_res10[0] == 0) && (*(ushort *)(lVar4 + 8) != 0)) {
                *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + *(int *)(param_1 + 0x1e0) + iVar1;
                if ((*(uint *)(lVar4 + 0xc) < uVar6) ||
                   ((uint)(local_res18[0] + iVar1) <
                    (uint)*(ushort *)(lVar4 + 8) + *(uint *)(lVar4 + 0xc))) {
                  *(undefined4 *)(lVar4 + 0xc) = 0;
                  *(undefined2 *)(lVar4 + 8) = 0;
                }
                else {
                  lVar4 = lVar4 + 0x18;
                }
              }
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          *(int *)(param_1 + 0x1dc) = (int)((lVar4 - *(longlong *)(param_1 + 0x1e8)) / 0x18);
          FT_Stream_ExitFrame(param_2);
          *(undefined2 *)(param_1 + 0x1d0) = *(undefined2 *)(param_1 + 0x1dc);
          uVar2 = (ulonglong)local_res10[0];
        }
      }
    }
  }
  return uVar2;
}



// FUNCTION 143c652a0 FUN_143c652a0 body=71 status=ok
// SIG undefined FUN_143c652a0(void)

ulonglong FUN_143c652a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined8 local_18 [2];
  
  uVar1 = FUN_143c63ec0(param_1,param_2,local_18);
  if ((int)uVar1 == 0) {
    FUN_143c274a0(param_3,local_18[0],param_4);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143c652f0 FUN_143c652f0 body=183 status=ok
// SIG undefined FUN_143c652f0(void)

void FUN_143c652f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = (**(code **)(param_1 + 0x290))(param_1,0x4f532f32,param_2,0);
  if (iVar1 == 0) {
    puVar2 = (ushort *)(param_1 + 0x1f8);
    iVar1 = FUN_143c24c00(param_2,&DAT_145d36bc0,puVar2);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x248) = 0;
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined4 *)(param_1 + 600) = 0;
      *(undefined2 *)(param_1 + 0x25c) = 0xffff;
      if (*puVar2 != 0) {
        iVar1 = FUN_143c24c00(param_2,&DAT_145d36418,puVar2);
        if ((iVar1 == 0) && (1 < *puVar2)) {
          iVar1 = FUN_143c24c00(param_2,&DAT_145d36428,puVar2);
          if ((iVar1 == 0) && (4 < *puVar2)) {
            FUN_143c24c00(param_2,&DAT_145d36448,puVar2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143c653b0 FUN_143c653b0 body=70 status=ok
// SIG undefined FUN_143c653b0(void)

void FUN_143c653b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x290))(param_1,0x706f7374,param_2,0);
  if (iVar1 == 0) {
    FUN_143c24c00(param_2,&DAT_145d364f8,param_1 + 0x260);
  }
  return;
}



// FUNCTION 143c65400 FUN_143c65400 body=398 status=ok
// SIG undefined FUN_143c65400(void)

uint FUN_143c65400(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((int)uVar9 < 0) {
    return 0;
  }
  uVar11 = 0xffffffff;
  if (uVar9 != 0xffffffff) {
    uVar11 = uVar9;
  }
  uVar9 = 0;
  if (uVar11 != 0) {
    lVar10 = 0;
    do {
      if ((uVar9 < *(ushort *)(param_1 + 0x174)) &&
         (lVar4 = *(longlong *)(param_1 + 0x2c8), lVar4 != 0)) {
        lVar6 = (**(code **)(lVar4 + 0x20))(0);
        iVar5 = *(int *)(param_1 + 0x260);
        if (iVar5 == 0x10000) {
          uVar8 = uVar9;
          if (uVar9 < 0x102) {
LAB_143c6552c:
            lVar6 = (**(code **)(lVar4 + 0x20))(uVar8);
          }
        }
        else if (iVar5 == 0x20000) {
          if (((*(char *)(param_1 + 0x328) != '\0') || (iVar5 = FUN_143c696f0(param_1), iVar5 == 0))
             && (uVar9 < *(ushort *)(param_1 + 0x330))) {
            uVar3 = *(ushort *)(lVar10 + *(longlong *)(param_1 + 0x338));
            if (uVar3 < 0x102) {
              uVar8 = (uint)uVar3;
              goto LAB_143c6552c;
            }
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x340) + -0x810 + (ulonglong)uVar3 * 8);
          }
        }
        else if ((iVar5 == 0x28000) &&
                (((*(char *)(param_1 + 0x328) != '\0' ||
                  (iVar5 = FUN_143c696f0(param_1), iVar5 == 0)) &&
                 (uVar9 < *(ushort *)(param_1 + 0x330))))) {
          uVar8 = (int)*(char *)(*(longlong *)(param_1 + 0x338) + (ulonglong)uVar9) + uVar9;
          goto LAB_143c6552c;
        }
        pcVar7 = param_2;
        do {
          cVar1 = *pcVar7;
          cVar2 = pcVar7[lVar6 - (longlong)param_2];
          if (cVar1 != cVar2) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          return uVar9;
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 2;
    } while (uVar9 < uVar11);
  }
  return 0;
}



// FUNCTION 143c65590 FUN_143c65590 body=70 status=ok
// SIG undefined FUN_143c65590(void)

void FUN_143c65590(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x290))(param_1,0x50434c54,param_2,0);
  if (iVar1 == 0) {
    FUN_143c24c00(param_2,&DAT_145d36590,param_1 + 0x2e0);
  }
  return;
}



// FUNCTION 143c655e0 FUN_143c655e0 body=161 status=ok
// SIG undefined FUN_143c655e0(void)

void FUN_143c655e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1dc);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x10);
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    if (iVar3 != 0) {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x1e8) + 0x10);
      do {
        ft_mem_free(uVar1,*puVar2);
        *puVar2 = 0;
        *(undefined2 *)(puVar2 + -1) = 0;
        puVar2 = puVar2 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  return;
}



// FUNCTION 143c65690 FUN_143c65690 body=322 status=ok
// SIG undefined FUN_143c65690(void)

ulonglong FUN_143c65690(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = (**(code **)(param_1 + 0x290))(param_1,0x67617370,param_2,0);
  local_res8[0] = (uint)uVar3;
  if (local_res8[0] == 0) {
    uVar3 = FUN_143c24650(param_2,4);
    local_res8[0] = (uint)uVar3;
    if (local_res8[0] == 0) {
      uVar2 = FUN_143c24910(param_2);
      *(undefined2 *)(param_1 + 0x2d0) = uVar2;
      uVar2 = FUN_143c24910(param_2);
      *(undefined2 *)(param_1 + 0x2d2) = uVar2;
      FT_Stream_ExitFrame(param_2);
      if (1 < *(ushort *)(param_1 + 0x2d0)) {
        *(undefined2 *)(param_1 + 0x2d2) = 0;
        return 8;
      }
      uVar1 = *(ushort *)(param_1 + 0x2d2);
      uVar6 = (ulonglong)uVar1;
      uVar4 = FUN_143c27410(uVar4,4,0,uVar1,0,local_res8);
      *(undefined8 *)(param_1 + 0x2d8) = uVar4;
      uVar3 = (ulonglong)local_res8[0];
      if ((local_res8[0] == 0) && (uVar3 = FUN_143c24650(param_2,(uint)uVar1 * 4), (int)uVar3 == 0))
      {
        puVar5 = *(undefined2 **)(param_1 + 0x2d8);
        local_res8[0] = 0;
        if (uVar1 != 0) {
          do {
            uVar2 = FUN_143c24910(param_2);
            *puVar5 = uVar2;
            uVar2 = FUN_143c24910(param_2);
            puVar5[1] = uVar2;
            puVar5 = puVar5 + 2;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        FT_Stream_ExitFrame(param_2);
        uVar3 = (ulonglong)local_res8[0];
      }
    }
  }
  return uVar3;
}



// FUNCTION 143c657e0 FUN_143c657e0 body=70 status=ok
// SIG undefined FUN_143c657e0(void)

void FUN_143c657e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x290))(param_1,0x62686564,param_2,0);
  if (iVar1 == 0) {
    FUN_143c24c00(param_2,&DAT_145d369a0,param_1 + 0x100);
  }
  return;
}



// FUNCTION 143c65830 FUN_143c65830 body=594 status=ok
// SIG undefined FUN_143c65830(void)

char * FUN_143c65830(longlong param_1)

{
  ushort uVar1;
  short *psVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  short *psVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  int local_res8 [2];
  
  pcVar8 = *(char **)(param_1 + 0x390);
  pcVar9 = (char *)0x0;
  if (pcVar8 == (char *)0x0) {
    pcVar12 = (char *)0xffffffff;
    pcVar11 = (char *)0xffffffff;
    pcVar8 = pcVar9;
    if (*(ushort *)(param_1 + 0x1d0) != 0) {
      psVar2 = *(short **)(param_1 + 0x1e8);
      psVar6 = psVar2;
      do {
        if ((psVar6[3] == 6) && (psVar6[4] != 0)) {
          if ((*psVar6 == 3) && ((psVar6[1] == 1 && (psVar6[2] == 0x409)))) {
            pcVar12 = pcVar9;
          }
          if (((*psVar6 == 1) && (psVar6[1] == 0)) && (psVar6[2] == 0)) {
            pcVar11 = pcVar9;
          }
        }
        uVar10 = (int)pcVar9 + 1;
        pcVar9 = (char *)(ulonglong)uVar10;
        psVar6 = psVar6 + 0xc;
      } while ((int)uVar10 < (int)(uint)*(ushort *)(param_1 + 0x1d0));
      if ((int)pcVar12 == -1) {
        pcVar8 = (char *)0x0;
        if ((int)pcVar11 != -1) {
          uVar3 = *(undefined8 *)(param_1 + 0x98);
          lVar7 = (longlong)(int)pcVar11;
          uVar1 = psVar2[lVar7 * 0xc + 4];
          local_res8[0] = 0;
          pcVar8 = (char *)FUN_143c271e0(uVar3,uVar1 + 1,local_res8);
          if (local_res8[0] == 0) {
            uVar5 = *(undefined8 *)(param_1 + 0x1f0);
            local_res8[0] = FUN_143c251d0(uVar5,*(undefined4 *)(psVar2 + lVar7 * 0xc + 6));
            if ((local_res8[0] == 0) &&
               (local_res8[0] = FUN_143c24ae0(uVar5,pcVar8,uVar1), local_res8[0] == 0)) {
              pcVar8[uVar1] = '\0';
            }
            else {
              uVar5 = *(undefined8 *)(psVar2 + lVar7 * 0xc + 8);
              (psVar2 + lVar7 * 0xc + 6)[0] = 0;
              (psVar2 + lVar7 * 0xc + 6)[1] = 0;
              psVar2[lVar7 * 0xc + 4] = 0;
              ft_mem_free(uVar3,uVar5);
              psVar2 = psVar2 + lVar7 * 0xc + 8;
              psVar2[0] = 0;
              psVar2[1] = 0;
              psVar2[2] = 0;
              psVar2[3] = 0;
              ft_mem_free(uVar3,pcVar8);
              pcVar8 = (char *)0x0;
            }
          }
        }
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x98);
        lVar7 = (longlong)(int)pcVar12;
        uVar1 = psVar2[lVar7 * 0xc + 4];
        local_res8[0] = 0;
        uVar10 = (uint)(uVar1 >> 1);
        pcVar8 = (char *)FUN_143c271e0(uVar3,(ushort)psVar2[lVar7 * 0xc + 4] + 1,local_res8);
        if (local_res8[0] == 0) {
          lVar4 = *(longlong *)(param_1 + 0x1f0);
          local_res8[0] = FUN_143c251d0(lVar4,*(undefined4 *)(psVar2 + lVar7 * 0xc + 6));
          if ((local_res8[0] == 0) &&
             (local_res8[0] = FUN_143c24650(lVar4,psVar2[lVar7 * 0xc + 4]), local_res8[0] == 0)) {
            pcVar9 = *(char **)(lVar4 + 0x38);
            pcVar11 = pcVar8;
            if (uVar1 >> 1 != 0) {
              do {
                if ((*pcVar9 == '\0') && ('\x1f' < pcVar9[1])) {
                  *pcVar11 = pcVar9[1];
                  pcVar11 = pcVar11 + 1;
                }
                pcVar9 = pcVar9 + 2;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            *pcVar11 = '\0';
            FT_Stream_ExitFrame(lVar4);
          }
          else {
            ft_mem_free(uVar3,pcVar8);
            uVar5 = *(undefined8 *)(psVar2 + lVar7 * 0xc + 8);
            psVar2[lVar7 * 0xc + 4] = 0;
            (psVar2 + lVar7 * 0xc + 6)[0] = 0;
            (psVar2 + lVar7 * 0xc + 6)[1] = 0;
            ft_mem_free(uVar3,uVar5);
            psVar2 = psVar2 + lVar7 * 0xc + 8;
            psVar2[0] = 0;
            psVar2[1] = 0;
            psVar2[2] = 0;
            psVar2[3] = 0;
            pcVar8 = (char *)0x0;
          }
        }
      }
    }
    *(char **)(param_1 + 0x390) = pcVar8;
  }
  return pcVar8;
}



// FUNCTION 143c65a90 FUN_143c65a90 body=26 status=ok
// SIG undefined FUN_143c65a90(void)

void FUN_143c65a90(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_143c699f0(param_1,local_res10,0);
  return;
}



// FUNCTION 143c65ab0 FUN_143c65ab0 body=121 status=ok
// SIG undefined FUN_143c65ab0(void)

int FUN_143c65ab0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) == -1) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x28) == '\0') || (*(int *)(param_1 + 0x2c) != *param_2)) {
    iVar2 = FUN_143c699f0(param_1,param_2,1);
  }
  else {
    FUN_143c69b60();
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



// FUNCTION 143c65b70 FUN_143c65b70 body=136 status=ok
// SIG undefined FUN_143c65b70(void)

undefined8 FUN_143c65b70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_28 [2];
  undefined8 local_20;
  int local_18 [2];
  undefined8 local_10;
  
  uVar1 = FUN_143c68880(param_1,"CHARSET_REGISTRY",local_18);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_143c68880(param_1,"CHARSET_ENCODING",local_28);
    if ((int)uVar1 == 0) {
      if ((local_18[0] == 1) && (local_28[0] == 1)) {
        *param_2 = local_20;
        *param_3 = local_10;
        return uVar1;
      }
      uVar1 = 6;
    }
  }
  return uVar1;
}



// FUNCTION 143c65c10 FUN_143c65c10 body=116 status=ok
// SIG undefined FUN_143c65c10(void)

void FUN_143c65c10(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  
  if (param_3 == '\0') {
    iVar1 = (**(code **)(param_1 + 0x290))(param_1,0x68686561,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    param_1 = param_1 + 0x138;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x290))(param_1,0x76686561);
    if (iVar1 != 0) {
      return;
    }
    param_1 = param_1 + 0x198;
  }
  iVar1 = FUN_143c24c00(param_2,&DAT_145d368d0,param_1);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 143c65c90 FUN_143c65c90 body=127 status=ok
// SIG undefined FUN_143c65c90(void)

ulonglong FUN_143c65c90(longlong param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_res18 [2];
  
  if (param_3 == '\0') {
    uVar3 = 0x686d7478;
    puVar5 = (undefined4 *)(param_1 + 0x448);
    puVar4 = (undefined4 *)(param_1 + 0x3b0);
  }
  else {
    uVar3 = 0x766d7478;
    puVar5 = (undefined4 *)(param_1 + 0x44c);
    puVar4 = (undefined4 *)(param_1 + 0x3c0);
  }
  uVar2 = (**(code **)(param_1 + 0x290))(param_1,uVar3,param_2,local_res18);
  if ((int)uVar2 == 0) {
    *puVar4 = local_res18[0];
    uVar1 = IStreamingManager::GetNumWantingResourcesID(param_2);
    *puVar5 = uVar1;
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143c65d10 FUN_143c65d10 body=506 status=ok
// SIG undefined FUN_143c65d10(void)

undefined8 FUN_143c65d10(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 0x10U) {
    FUN_143c27ac0(param_2,8);
  }
  puVar14 = (undefined1 *)(param_1 + 0xc);
  puVar13 = (undefined1 *)(param_1 + 0xd);
  puVar12 = (undefined1 *)(param_1 + 0xe);
  puVar15 = (undefined1 *)(param_1 + 0xf);
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  uVar16 = CONCAT31(CONCAT21(CONCAT11(*puVar14,*puVar13),*puVar12),*puVar15);
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar8) || (uVar8 < 0x10)) ||
     ((uVar8 - 0x10) / 0xc < uVar16)) {
    FUN_143c27ac0(param_2,8);
  }
  uVar8 = 0;
  uVar11 = 0;
  if (uVar16 != 0) {
    do {
      puVar1 = puVar14 + 4;
      puVar2 = puVar14 + 8;
      puVar14 = puVar14 + 0xc;
      uVar4 = *puVar14;
      uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar13[4]),puVar12[4]),puVar15[4]);
      puVar1 = puVar13 + 8;
      puVar13 = puVar13 + 0xc;
      puVar3 = puVar12 + 8;
      puVar12 = puVar12 + 0xc;
      uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar2,*puVar1),*puVar3),puVar15[8]);
      uVar5 = *puVar13;
      uVar6 = *puVar12;
      uVar7 = puVar15[0xc];
      if (uVar9 < uVar10) {
        FUN_143c27ac0(param_2,8);
      }
      if ((uVar11 != 0) && (uVar10 <= uVar8)) {
        FUN_143c27ac0(param_2,8);
      }
      if ((0 < *(int *)(param_2 + 0x110)) &&
         (*(uint *)(param_2 + 0x120) <= CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6),uVar7))) {
        FUN_143c27ac0(param_2,0x10);
      }
      uVar11 = uVar11 + 1;
      puVar15 = puVar15 + 0xc;
      uVar8 = uVar9;
    } while (uVar11 < uVar16);
  }
  return 0;
}



// FUNCTION 143c65f10 FUN_143c65f10 body=336 status=ok
// SIG undefined FUN_143c65f10(void)

void FUN_143c65f10(longlong param_1,char param_2,uint param_3,undefined2 *param_4,
                  undefined2 *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int local_res10 [2];
  
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  if (param_2 == '\0') {
    iVar5 = *(int *)(param_1 + 0x448);
    lVar6 = param_1 + 0x138;
    iVar2 = *(int *)(param_1 + 0x3b0);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x44c);
    lVar6 = param_1 + 0x198;
    iVar2 = *(int *)(param_1 + 0x3c0);
  }
  uVar1 = *(ushort *)(lVar6 + 0x22);
  uVar7 = iVar2 + iVar5;
  if (uVar1 != 0) {
    if (param_3 < uVar1) {
      if ((iVar5 + param_3 * 4 + 4 <= uVar7) &&
         (local_res10[0] = FUN_143c251d0(uVar3), local_res10[0] == 0)) {
        uVar4 = FUN_143c25070(uVar3,local_res10);
        *param_5 = uVar4;
        if (local_res10[0] == 0) {
          uVar4 = FUN_143c25070(uVar3,local_res10);
          *param_4 = uVar4;
          if (local_res10[0] == 0) {
            return;
          }
        }
      }
    }
    else {
      iVar5 = iVar5 + -4 + (uint)uVar1 * 4;
      if ((iVar5 + 4U <= uVar7) &&
         (local_res10[0] = FUN_143c251d0(uVar3,iVar5), local_res10[0] == 0)) {
        uVar4 = FUN_143c25070(uVar3,local_res10);
        *param_5 = uVar4;
        if (local_res10[0] == 0) {
          if (uVar7 < (param_3 - uVar1) * 2 + iVar5 + 6) {
            *param_4 = 0;
            return;
          }
          local_res10[0] = FUN_143c251d0(uVar3);
          if (local_res10[0] != 0) {
            return;
          }
          uVar4 = FUN_143c25070(uVar3,local_res10);
          *param_4 = uVar4;
          return;
        }
      }
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  return;
}



// FUNCTION 143c66060 FUN_143c66060 body=610 status=ok
// SIG undefined FUN_143c66060(void)

ulonglong FUN_143c66060(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_res18 [4];
  
  uVar16 = 0;
  uVar13 = 0;
  uVar2 = (**(code **)(param_1 + 0x290))(param_1,0x6b65726e,param_2,local_res18);
  if ((int)uVar2 == 0) {
    if (local_res18[0] < 4) {
      return 0x8e;
    }
    uVar2 = FT_Stream_ExtractFrame(param_2,local_res18[0],param_1 + 0x408);
    if ((int)uVar2 == 0) {
      lVar9 = *(longlong *)(param_1 + 0x408);
      *(uint *)(param_1 + 0x410) = local_res18[0];
      uVar1 = lVar9 + (ulonglong)local_res18[0];
      uVar15 = 0;
      uVar14 = (uint)CONCAT11(*(undefined1 *)(lVar9 + 2),*(undefined1 *)(lVar9 + 3));
      if (0x20 < uVar14) {
        uVar14 = 0x20;
      }
      if (uVar14 != 0) {
        uVar7 = 1;
        uVar4 = lVar9 + 4;
        do {
          if (uVar1 < uVar4 + 6) break;
          uVar8 = (uint)CONCAT11(*(undefined1 *)(uVar4 + 2),*(undefined1 *)(uVar4 + 3));
          if (uVar8 < 0xf) break;
          uVar6 = uVar4 + uVar8;
          if (uVar1 < uVar6) {
            uVar6 = uVar1;
          }
          if (((CONCAT11(*(undefined1 *)(uVar4 + 4),*(undefined1 *)(uVar4 + 5)) & 0xfff7) == 1) &&
             (uVar4 + 0xe <= uVar1)) {
            uVar8 = (uint)CONCAT11(*(undefined1 *)(uVar4 + 6),*(undefined1 *)(uVar4 + 7));
            lVar9 = uVar6 - (longlong)(uVar4 + 0xe);
            if (lVar9 < (int)(uVar8 * 6)) {
              uVar8 = (uint)(lVar9 / 6);
            }
            uVar16 = uVar16 | uVar7;
            if (uVar8 != 0) {
              iVar5 = uVar8 - 1;
              if (iVar5 != 0) {
                lVar9 = uVar4 + 0x13;
                lVar10 = uVar4 + 0x12;
                lVar11 = uVar4 + 0x11;
                lVar12 = uVar4 + 0x10;
                uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar4 + 0xe),
                                                   *(undefined1 *)(uVar4 + 0xf)),
                                          *(undefined1 *)(uVar4 + 0x10)),
                                 *(undefined1 *)(uVar4 + 0x11));
                do {
                  uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar12 + 4),
                                                     *(undefined1 *)(lVar11 + 4)),
                                            *(undefined1 *)(lVar10 + 4)),*(undefined1 *)(lVar9 + 4))
                  ;
                  if (uVar3 <= uVar8) break;
                  lVar12 = lVar12 + 6;
                  lVar11 = lVar11 + 6;
                  lVar10 = lVar10 + 6;
                  lVar9 = lVar9 + 6;
                  iVar5 = iVar5 + -1;
                  uVar8 = uVar3;
                } while (iVar5 != 0);
                if (iVar5 != 0) goto LAB_143c66270;
              }
              uVar13 = uVar13 | uVar7;
            }
          }
LAB_143c66270:
          uVar15 = uVar15 + 1;
          uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
          uVar4 = uVar6;
        } while (uVar15 < uVar14);
      }
      uVar2 = uVar2 & 0xffffffff;
      *(uint *)(param_1 + 0x414) = uVar15;
      *(uint *)(param_1 + 0x418) = uVar16;
      *(uint *)(param_1 + 0x41c) = uVar13;
    }
  }
  return uVar2;
}



// FUNCTION 143c662d0 FUN_143c662d0 body=541 status=ok
// SIG undefined FUN_143c662d0(void)

uint FUN_143c662d0(longlong param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar4;
  
  uVar8 = 0;
  iVar15 = *(int *)(param_1 + 0x414);
  uVar14 = (ulonglong)*(uint *)(param_1 + 0x410) + *(longlong *)(param_1 + 0x408);
  uVar10 = *(longlong *)(param_1 + 0x408) + 4;
  uVar6 = 1;
  if (iVar15 == 0) {
    return 0;
  }
  do {
    if (uVar14 < uVar10 + 6) {
      return uVar8;
    }
    uVar7 = CONCAT11(*(undefined1 *)(uVar10 + 2),*(undefined1 *)(uVar10 + 3)) + uVar10;
    if (uVar14 < uVar7) {
      uVar7 = uVar14;
    }
    if (((*(uint *)(param_1 + 0x418) & uVar6) != 0) && (uVar10 + 0xe <= uVar7)) {
      puVar11 = (undefined1 *)(uVar10 + 0xe);
      uVar3 = (uint)CONCAT11(*(undefined1 *)(uVar10 + 6),*(undefined1 *)(uVar10 + 7));
      uVar4 = (ulonglong)uVar3;
      if ((longlong)(uVar7 - (longlong)puVar11) < (longlong)(int)(uVar3 * 6)) {
        uVar4 = (longlong)(uVar7 - (longlong)puVar11) / 6;
      }
      if (*(char *)(uVar10 + 4) == '\0') {
        uVar12 = param_2 << 0x10 | param_3;
        uVar3 = (uint)uVar4;
        if ((*(uint *)(param_1 + 0x41c) & uVar6) == 0) {
          while (uVar3 != 0) {
            if (CONCAT31(CONCAT21(CONCAT11(*puVar11,puVar11[1]),puVar11[2]),puVar11[3]) == uVar12) {
              bVar1 = puVar11[4];
              bVar2 = puVar11[5];
              goto LAB_143c66493;
            }
            puVar11 = puVar11 + 6;
            uVar3 = (int)uVar4 - 1;
            uVar4 = (ulonglong)uVar3;
          }
        }
        else {
          uVar13 = 0;
          if (uVar3 != 0) {
LAB_143c663f0:
            uVar9 = (int)uVar4 + uVar13 >> 1;
            puVar5 = puVar11 + uVar9 * 6;
            uVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
            if (uVar3 != uVar12) break;
            bVar1 = puVar5[4];
            bVar2 = puVar5[5];
LAB_143c66493:
            uVar3 = (int)(short)((ushort)bVar1 << 8) | (uint)bVar2;
            uVar8 = uVar8 + uVar3;
            if ((*(byte *)(uVar10 + 5) & 8) != 0) {
              uVar8 = uVar3;
            }
          }
        }
      }
    }
LAB_143c664a3:
    uVar6 = uVar6 * 2;
    iVar15 = iVar15 + -1;
    uVar10 = uVar7;
    if (iVar15 == 0) {
      return uVar8;
    }
  } while( true );
  if (uVar3 < uVar12) {
    uVar13 = uVar9 + 1;
  }
  else {
    uVar4 = (ulonglong)uVar9;
  }
  if ((uint)uVar4 <= uVar13) goto LAB_143c664a3;
  goto LAB_143c663f0;
}



// FUNCTION 143c664f0 FUN_143c664f0 body=57 status=ok
// SIG undefined FUN_143c664f0(void)

undefined8 FUN_143c664f0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint local_res10 [6];
  
  if (0xffff < param_2) {
    return 0;
  }
  local_res10[0] = param_2;
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    uVar1 = FUN_143c6a890();
    return uVar1;
  }
  uVar1 = FUN_143c6a3c0(param_1,local_res10,0);
  return uVar1;
}


