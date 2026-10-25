// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c2f720 FUN_143c2f720 body=207 status=ok
// SIG undefined FUN_143c2f720(void)

void FUN_143c2f720(longlong param_1,int param_2,undefined4 param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  uVar3 = (longlong)*(int *)(param_1 + 0x1c) * 0x30 + uVar1;
  if (param_2 == 0) {
    if (uVar1 < uVar3) {
      piVar4 = (int *)(uVar1 + 0x10);
      lVar5 = ((uVar3 - uVar1) - 1) / 0x30 + 1;
      do {
        iVar2 = FUN_143c22100((int)(short)piVar4[-1],param_3);
        *piVar4 = iVar2 + param_4;
        piVar4 = piVar4 + 0xc;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  else if (uVar1 < uVar3) {
    piVar4 = (int *)(uVar1 + 0x14);
    lVar5 = ((uVar3 - uVar1) - 1) / 0x30 + 1;
    do {
      iVar2 = FUN_143c22100((int)*(short *)((longlong)piVar4 + -6),param_3);
      *piVar4 = iVar2 + param_4;
      piVar4 = piVar4 + 0xc;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 143c2f7f0 FUN_143c2f7f0 body=457 status=ok
// SIG undefined FUN_143c2f7f0(void)

uint FUN_143c2f7f0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar7 = *(uint *)(param_1 + 0x128c) & 4;
  uVar6 = 0x40;
  if (uVar7 == 0) {
    if (((*(byte *)(param_2 + 0xc) & 1) == 0) || ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
      uVar6 = 0x3b;
      uVar8 = 0x3d;
    }
    else {
      uVar6 = 0x31;
      uVar8 = 0x37;
    }
    if (param_5 == 1) {
      uVar6 = uVar8;
    }
  }
  iVar1 = *(int *)(param_3 + 4);
  iVar2 = *(int *)(param_2 + 4);
  uVar3 = FUN_143c2cae0();
  uVar4 = 0;
  uVar11 = ((iVar2 + iVar1) / 2 - (int)uVar3 / 2) + param_4;
  iVar12 = uVar11 - (uVar11 & 0xffffffc0);
  uVar9 = 0x40 - iVar12;
  iVar5 = (uVar11 + uVar3) - (uVar11 + uVar3 & 0xffffffc0);
  uVar8 = 0;
  if ((iVar12 != 0) && (uVar8 = uVar4, iVar5 != 0)) {
    if ((int)uVar6 < (int)uVar3) {
      if ((0x3f < uVar6) ||
         ((((iVar12 < (int)uVar6 && ((int)uVar9 < (int)uVar6)) && (iVar5 < (int)uVar6)) &&
          (0x40 - iVar5 < (int)uVar6)))) {
        uVar4 = uVar3 & 0x3f;
        if (uVar4 < 0x20) {
          if (((int)uVar9 <= (int)uVar4) || (iVar5 <= (int)uVar4)) goto LAB_143c2f95b;
        }
        else {
          uVar4 = 0x40 - uVar6;
        }
        uVar8 = uVar6 - iVar5;
        uVar10 = uVar9 - uVar4;
        if ((int)(uVar6 - uVar9) <= (int)uVar10) {
          uVar10 = -(uVar6 - uVar9);
        }
        if ((int)(iVar5 - uVar4) <= (int)uVar8) {
          uVar8 = -(iVar5 - uVar4);
        }
        if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) <=
            (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))) {
          uVar8 = uVar10;
        }
      }
    }
    else if ((iVar5 < (int)uVar3) && (uVar8 = uVar9, iVar5 < (int)uVar9)) {
      uVar8 = -iVar5;
    }
  }
LAB_143c2f95b:
  if (uVar7 == 0) {
    if ((int)uVar8 < 0xf) {
      if ((int)uVar8 < -0xe) {
        uVar8 = 0xfffffff2;
      }
    }
    else {
      uVar8 = 0xe;
    }
  }
  iVar5 = uVar11 + uVar8;
  if (iVar2 < iVar1) {
    *(int *)(param_2 + 8) = iVar5;
    *(uint *)(param_3 + 8) = iVar5 + uVar3;
  }
  else {
    *(uint *)(param_2 + 8) = iVar5 + uVar3;
    *(int *)(param_3 + 8) = iVar5;
  }
  return uVar8;
}



// FUNCTION 143c2f9c0 FUN_143c2f9c0 body=321 status=ok
// SIG undefined FUN_143c2f9c0(void)

void FUN_143c2f9c0(ulonglong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_1 <= param_2) {
    lVar8 = param_3;
    if (*(int *)(param_4 + 0x1c) < *(int *)(param_3 + 0x1c)) {
      lVar8 = param_4;
      param_4 = param_3;
    }
    iVar1 = *(int *)(lVar8 + 0x18);
    iVar2 = *(int *)(param_4 + 0x18);
    iVar3 = *(int *)(lVar8 + 0x1c);
    iVar4 = *(int *)(param_4 + 0x1c);
    if ((iVar1 == iVar2) || (iVar3 == iVar4)) {
      piVar7 = (int *)(param_1 + 0x18);
      lVar8 = (param_2 - param_1) / 0x30 + 1;
      do {
        iVar6 = piVar7[1];
        if (iVar3 < iVar6) {
          iVar9 = iVar1;
          if (iVar4 <= iVar6) {
            iVar9 = (iVar2 - iVar4) + iVar6;
          }
        }
        else {
          iVar9 = iVar6 + (iVar1 - iVar3);
        }
        *piVar7 = iVar9;
        piVar7 = piVar7 + 0xc;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else {
      uVar5 = FUN_143c20070(iVar2 - iVar1,iVar4 - iVar3);
      piVar7 = (int *)(param_1 + 0x18);
      lVar8 = (param_2 - param_1) / 0x30 + 1;
      do {
        iVar6 = piVar7[1];
        if (iVar3 < iVar6) {
          if (iVar6 < iVar4) {
            iVar6 = FUN_143c22100(iVar6 - iVar3,uVar5);
            iVar6 = iVar6 + iVar1;
          }
          else {
            iVar6 = iVar6 + (iVar2 - iVar4);
          }
        }
        else {
          iVar6 = iVar6 + (iVar1 - iVar3);
        }
        *piVar7 = iVar6;
        piVar7 = piVar7 + 0xc;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}



// FUNCTION 143c2fb10 FUN_143c2fb10 body=522 status=ok
// SIG undefined FUN_143c2fb10(void)

uint FUN_143c2fb10(longlong param_1,int param_2,uint param_3,ulonglong param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar7 = *(uint *)(param_1 + 0x128c);
  lVar4 = *(longlong *)(param_1 + 0x1290) + (longlong)param_2 * 0x624;
  bVar10 = param_2 != 1;
  if ((uVar7 & 4) == 0) {
    return param_3;
  }
  if (*(char *)(lVar4 + 0x110) != '\0') {
    return param_3;
  }
  bVar11 = (int)param_3 < 0;
  if (bVar11) {
    param_3 = -param_3;
  }
  if (bVar10) {
    uVar9 = uVar7 & 1;
  }
  else {
    uVar9 = uVar7 & 2;
  }
  if (uVar9 == 0) {
    if ((((param_5 & 2) == 0) || (bVar10)) || (uVar7 = param_3, 0xbf < (int)param_3)) {
      if ((param_4 & 1) == 0) {
        if ((int)param_3 < 0x38) {
          param_3 = 0x38;
        }
      }
      else if ((int)param_3 < 0x50) {
        param_3 = 0x40;
      }
      uVar7 = param_3;
      if (*(int *)(lVar4 + 0x44) != 0) {
        uVar7 = *(uint *)(lVar4 + 0x4c);
        iVar3 = param_3 - uVar7;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar3 < 0x28) {
          if ((int)uVar7 < 0x30) {
            uVar7 = 0x30;
          }
        }
        else if ((int)param_3 < 0xc0) {
          uVar7 = param_3 & 0xffffffc0;
          param_3 = param_3 & 0x3f;
          if (9 < param_3) {
            if (param_3 < 0x20) {
              uVar7 = uVar7 + 10;
              goto LAB_143c2fd04;
            }
            if (param_3 < 0x36) {
              uVar7 = uVar7 + 0x36;
              goto LAB_143c2fd04;
            }
          }
          uVar7 = uVar7 + param_3;
        }
        else {
          uVar7 = param_3 + 0x20 & 0xffffffc0;
        }
      }
    }
    goto LAB_143c2fd04;
  }
  iVar3 = 0x62;
  uVar9 = param_3;
  if (*(uint *)(lVar4 + 0x44) != 0) {
    puVar5 = (uint *)(lVar4 + 0x4c);
    uVar8 = (ulonglong)*(uint *)(lVar4 + 0x44);
    do {
      iVar1 = param_3 - *puVar5;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < iVar3) {
        iVar3 = iVar1;
        uVar9 = *puVar5;
      }
      puVar5 = puVar5 + 3;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar2 = uVar9 + 0x20 & 0xffffffc0;
  uVar6 = param_3;
  if ((int)param_3 < (int)uVar9) {
    if ((int)(uVar2 - 0x30) < (int)param_3) {
      uVar6 = uVar9;
    }
  }
  else if ((int)param_3 < (int)(uVar2 + 0x30)) {
    uVar6 = uVar9;
  }
  if (bVar10) {
    if ((uVar7 & 8) == 0) {
      if ((int)uVar6 < 0x30) {
        uVar7 = (int)(uVar6 + 0x40) >> 1;
        goto LAB_143c2fd04;
      }
      if ((int)uVar6 < 0x80) {
        uVar7 = uVar6 + 0x16 & 0xffffffc0;
        iVar3 = uVar7 - param_3;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if ((0xf < iVar3) && (uVar7 = param_3, (int)param_3 < 0x30)) {
          uVar7 = (int)(param_3 + 0x40) >> 1;
        }
        goto LAB_143c2fd04;
      }
    }
    else if ((int)uVar6 < 0x40) goto LAB_143c2fcb0;
    uVar6 = uVar6 + 0x20;
  }
  else {
    if ((int)uVar6 < 0x40) {
LAB_143c2fcb0:
      uVar7 = 0x40;
      goto LAB_143c2fd04;
    }
    uVar6 = uVar6 + 0x10;
  }
  uVar7 = uVar6 & 0xffffffc0;
LAB_143c2fd04:
  if (bVar11) {
    uVar7 = -uVar7;
  }
  return uVar7;
}



// FUNCTION 143c2fd20 FUN_143c2fd20 body=1566 status=ok
// SIG undefined FUN_143c2fd20(void)

void FUN_143c2fd20(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  
  iVar7 = (int)param_2;
  pbVar4 = *(byte **)((longlong)iVar7 * 0x928 + 0x50 + param_1);
  pbVar2 = pbVar4 + (longlong)*(int *)((longlong)iVar7 * 0x928 + 0x48 + param_1) * 0x48;
  pbVar19 = (byte *)0x0;
  iVar17 = 0;
  uVar12 = param_2;
  if (iVar7 == 1) {
    if (pbVar4 < pbVar2) {
      pbVar15 = pbVar4 + 0xc;
      do {
        bVar3 = *pbVar15;
        if ((bVar3 & 4) == 0) {
          pbVar16 = *(byte **)(pbVar15 + 0x14);
          if (((*(longlong *)(pbVar15 + 0xc) != 0) && (pbVar16 != (byte *)0x0)) &&
             (*(longlong *)(pbVar16 + 0x18) != 0)) {
            if ((pbVar16[0xc] & 8) == 0) {
              if ((bVar3 & 8) != 0) {
                pbVar15[0xc] = 0;
                pbVar15[0xd] = 0;
                pbVar15[0xe] = 0;
                pbVar15[0xf] = 0;
                pbVar15[0x10] = 0;
                pbVar15[0x11] = 0;
                pbVar15[0x12] = 0;
                pbVar15[0x13] = 0;
                *pbVar15 = bVar3 & 0xf7;
              }
            }
            else {
              pbVar16[0x18] = 0;
              pbVar16[0x19] = 0;
              pbVar16[0x1a] = 0;
              pbVar16[0x1b] = 0;
              pbVar16[0x1c] = 0;
              pbVar16[0x1d] = 0;
              pbVar16[0x1e] = 0;
              pbVar16[0x1f] = 0;
              pbVar16[0xc] = pbVar16[0xc] & 0xf7;
            }
          }
          lVar11 = *(longlong *)(pbVar15 + 0xc);
          if (lVar11 == 0) {
            if ((pbVar16 == (byte *)0x0) || (lVar11 = *(longlong *)(pbVar16 + 0x18), lVar11 == 0))
            goto LAB_143c2fe58;
            pbVar10 = pbVar15 + -0xc;
            pbVar9 = pbVar16;
          }
          else {
            pbVar9 = pbVar15 + -0xc;
            pbVar10 = pbVar16;
          }
          if (pbVar9 != (byte *)0x0) {
            iVar14 = *(int *)(lVar11 + 8);
            pbVar9[0xc] = pbVar9[0xc] | 4;
            *(int *)(pbVar9 + 8) = iVar14;
            if ((pbVar10 != (byte *)0x0) && (*(longlong *)(pbVar10 + 0x18) == 0)) {
              bVar3 = pbVar10[0xc];
              iVar5 = FUN_143c2fb10(param_1,1,*(int *)(pbVar10 + 4) - *(int *)(pbVar9 + 4),
                                    pbVar9[0xc],bVar3);
              *(int *)(pbVar10 + 8) = iVar5 + iVar14;
              pbVar10[0xc] = bVar3 | 4;
            }
            if (pbVar19 == (byte *)0x0) {
              pbVar19 = pbVar15 + -0xc;
            }
          }
        }
LAB_143c2fe58:
        pbVar16 = pbVar15 + 0x3c;
        pbVar15 = pbVar15 + 0x48;
      } while (pbVar16 < pbVar2);
      uVar12 = param_2 & 0xffffffff;
      goto LAB_143c2fe80;
    }
  }
  else {
LAB_143c2fe80:
    if (pbVar4 < pbVar2) {
      pbVar15 = pbVar4 + 0xc;
      do {
        bVar3 = *pbVar15;
        if ((bVar3 & 4) == 0) {
          lVar11 = *(longlong *)(pbVar15 + 0x14);
          if (lVar11 == 0) {
            iVar17 = iVar17 + 1;
          }
          else if (*(longlong *)(lVar11 + 0x18) == 0) {
            if (pbVar19 == (byte *)0x0) {
              iVar14 = *(int *)(pbVar15 + -8);
              iVar13 = *(int *)(lVar11 + 4) - iVar14;
              iVar5 = FUN_143c2fb10(param_1,uVar12,iVar13,bVar3,*(undefined1 *)(lVar11 + 0xc));
              if (iVar5 < 0x41) {
                iVar20 = 0x20;
                iVar18 = 0x20;
              }
              else {
                iVar20 = 0x26;
                iVar18 = 0x1a;
              }
              if (iVar5 < 0x60) {
                iVar14 = (iVar13 >> 1) + iVar14;
                uVar8 = iVar14 + 0x20U & 0xffffffc0;
                iVar14 = iVar14 - uVar8;
                iVar13 = iVar14 + iVar20;
                if (iVar13 < 0) {
                  iVar13 = -iVar13;
                }
                iVar14 = iVar14 - iVar18;
                if (iVar14 < 0) {
                  iVar14 = -iVar14;
                }
                if (iVar13 < iVar14) {
                  iVar18 = -iVar20;
                }
                iVar14 = (uVar8 + iVar18) - iVar5 / 2;
                *(int *)(pbVar15 + -4) = iVar14;
                *(int *)(lVar11 + 8) = iVar14 + iVar5;
              }
              else {
                *(uint *)(pbVar15 + -4) = iVar14 + 0x20U & 0xffffffc0;
              }
              *pbVar15 = *pbVar15 | 4;
              pbVar19 = pbVar15 + -0xc;
              iVar14 = FUN_143c2fb10(param_1,iVar7,*(int *)(lVar11 + 4) - *(int *)(pbVar15 + -8),
                                     *pbVar15,*(undefined1 *)(lVar11 + 0xc));
              *(int *)(lVar11 + 8) = iVar14 + *(int *)(pbVar15 + -4);
            }
            else {
              iVar14 = (*(int *)(pbVar19 + 8) - *(int *)(pbVar19 + 4)) + *(int *)(pbVar15 + -8);
              iVar18 = *(int *)(lVar11 + 4) - *(int *)(pbVar15 + -8);
              iVar13 = (iVar18 >> 1) + iVar14;
              iVar5 = FUN_143c2fb10(param_1,uVar12,iVar18,bVar3,*(undefined1 *)(lVar11 + 0xc));
              if ((*(byte *)(lVar11 + 0xc) & 4) == 0) {
                if (iVar5 < 0x60) {
                  uVar8 = iVar13 + 0x20U & 0xffffffc0;
                  if (iVar5 < 0x41) {
                    iVar14 = 0x20;
                    iVar20 = 0x20;
                  }
                  else {
                    iVar14 = 0x26;
                    iVar20 = 0x1a;
                  }
                  iVar18 = (iVar14 - uVar8) + iVar13;
                  if (iVar18 < 0) {
                    iVar18 = -iVar18;
                  }
                  iVar13 = (iVar13 - iVar20) - uVar8;
                  if (iVar13 < 0) {
                    iVar13 = -iVar13;
                  }
                  if (iVar18 < iVar13) {
                    iVar20 = -iVar14;
                  }
                  iVar20 = uVar8 + iVar20;
                  uVar6 = iVar5 / 2;
                  *(uint *)(pbVar15 + -4) = iVar20 - uVar6;
                }
                else {
                  iVar20 = FUN_143c2fb10(param_1,iVar7,iVar18,bVar3,*(byte *)(lVar11 + 0xc));
                  uVar8 = iVar14 + 0x20U & 0xffffffc0;
                  iVar13 = (iVar20 >> 1) - ((iVar18 >> 1) + iVar14);
                  iVar5 = iVar13 + uVar8;
                  if (iVar5 < 0) {
                    iVar5 = -iVar5;
                  }
                  uVar6 = (iVar14 + 0x20 + iVar18 & 0xffffffc0U) - iVar20;
                  iVar13 = iVar13 + uVar6;
                  if (iVar13 < 0) {
                    iVar13 = -iVar13;
                  }
                  if (iVar5 < iVar13) {
                    uVar6 = uVar8;
                  }
                  *(uint *)(pbVar15 + -4) = uVar6;
                }
                *(uint *)(lVar11 + 8) = uVar6 + iVar20;
              }
              else {
                *(int *)(pbVar15 + -4) = *(int *)(lVar11 + 8) - iVar5;
              }
              *pbVar15 = *pbVar15 | 4;
              *(byte *)(lVar11 + 0xc) = *(byte *)(lVar11 + 0xc) | 4;
              if (pbVar4 < pbVar15 + -0xc) {
                iVar14 = *(int *)(pbVar15 + -4);
                if (*(int *)(pbVar15 + -4) < *(int *)(pbVar15 + -0x4c)) {
                  iVar14 = *(int *)(pbVar15 + -0x4c);
                }
                goto LAB_143c30101;
              }
            }
          }
          else {
            iVar5 = FUN_143c2fb10(param_1,uVar12,*(int *)(pbVar15 + -8) - *(int *)(lVar11 + 4),
                                  *(undefined1 *)(lVar11 + 0xc),bVar3);
            iVar14 = *(int *)(lVar11 + 8);
            *pbVar15 = bVar3 | 4;
            iVar14 = iVar5 + iVar14;
LAB_143c30101:
            *(int *)(pbVar15 + -4) = iVar14;
          }
        }
        if (pbVar2 <= pbVar15 + 0x3c) break;
        uVar12 = param_2 & 0xffffffff;
        pbVar15 = pbVar15 + 0x48;
      } while( true );
    }
  }
  lVar11 = ((longlong)pbVar2 - (longlong)pbVar4) / 0x48;
  if (iVar7 == 0) {
    if (lVar11 == 6) {
      pbVar15 = pbVar4 + 0x90;
      pbVar16 = pbVar4 + 0x120;
      pbVar10 = pbVar4;
    }
    else {
      if (lVar11 != 0xc) goto LAB_143c301fa;
      pbVar15 = pbVar4 + 0x168;
      pbVar16 = pbVar4 + 0x288;
      pbVar10 = pbVar4 + 0x48;
    }
    iVar7 = (*(int *)(pbVar15 + 4) * 2 - *(int *)(pbVar16 + 4)) - *(int *)(pbVar10 + 4);
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    if (iVar7 < 8) {
      iVar7 = *(int *)(pbVar10 + 8) + *(int *)(pbVar15 + 8) * -2 + *(int *)(pbVar16 + 8);
      *(int *)(pbVar16 + 8) = *(int *)(pbVar16 + 8) - iVar7;
      if (*(longlong *)(pbVar16 + 0x20) != 0) {
        piVar1 = (int *)(*(longlong *)(pbVar16 + 0x20) + 8);
        *piVar1 = *piVar1 - iVar7;
      }
      if (lVar11 == 0xc) {
        *(int *)(pbVar4 + 0x248) = *(int *)(pbVar4 + 0x248) - iVar7;
        *(int *)(pbVar4 + 800) = *(int *)(pbVar4 + 800) - iVar7;
      }
      pbVar16[0xc] = pbVar16[0xc] | 4;
      if (*(longlong *)(pbVar16 + 0x20) != 0) {
        pbVar15 = (byte *)(*(longlong *)(pbVar16 + 0x20) + 0xc);
        *pbVar15 = *pbVar15 | 4;
      }
    }
  }
LAB_143c301fa:
  if (((iVar17 != 0) || (pbVar19 == (byte *)0x0)) && (pbVar4 < pbVar2)) {
    pbVar15 = pbVar4 + 4;
    do {
      if ((pbVar15[8] & 4) == 0) {
        lVar11 = *(longlong *)(pbVar15 + 0x24);
        if (lVar11 == 0) {
LAB_143c30250:
          if (pbVar19 == (byte *)0x0) {
            pbVar19 = pbVar15 + -4;
            uVar8 = *(int *)pbVar15 + 0x20U & 0xffffffc0;
          }
          else {
            for (pbVar16 = pbVar15 + -0x4c; (pbVar4 <= pbVar16 && ((pbVar16[0xc] & 4) == 0));
                pbVar16 = pbVar16 + -0x48) {
            }
            for (pbVar10 = pbVar15 + 0x44; (pbVar10 < pbVar2 && ((pbVar10[0xc] & 4) == 0));
                pbVar10 = pbVar10 + 0x48) {
            }
            if ((((pbVar16 < pbVar4) || (pbVar15 + -4 <= pbVar16)) || (pbVar2 <= pbVar10)) ||
               (pbVar10 <= pbVar15 + -4)) {
              uVar8 = ((*(int *)pbVar15 - *(int *)(pbVar19 + 4)) + 0x10U & 0xffffffe0) +
                      *(int *)(pbVar19 + 8);
            }
            else {
              iVar17 = *(int *)(pbVar16 + 4);
              if (*(int *)(pbVar10 + 4) == iVar17) {
                uVar8 = *(uint *)(pbVar16 + 8);
              }
              else {
                iVar17 = FUN_143c21f00(*(int *)pbVar15 - iVar17,
                                       *(int *)(pbVar10 + 8) - *(int *)(pbVar16 + 8),
                                       *(int *)(pbVar10 + 4) - iVar17);
                uVar8 = iVar17 + *(int *)(pbVar16 + 8);
              }
            }
          }
        }
        else {
          iVar17 = *(int *)(lVar11 + 4) - *(int *)pbVar15;
          if (iVar17 < 0) {
            iVar17 = -iVar17;
          }
          if (0x4f < iVar17) goto LAB_143c30250;
          uVar8 = (*(int *)(lVar11 + 8) - *(int *)(lVar11 + 4)) + *(int *)pbVar15;
        }
        pbVar15[8] = pbVar15[8] | 4;
        *(uint *)(pbVar15 + 4) = uVar8;
        if (pbVar4 < pbVar15 + -4) {
          iVar17 = *(int *)(pbVar15 + 4);
          if (*(int *)(pbVar15 + 4) < *(int *)(pbVar15 + -0x44)) {
            iVar17 = *(int *)(pbVar15 + -0x44);
          }
          *(int *)(pbVar15 + 4) = iVar17;
        }
        if ((pbVar15 + 0x44 < pbVar2) && ((pbVar15[0x50] & 4) != 0)) {
          iVar17 = *(int *)(pbVar15 + 4);
          if (*(int *)(pbVar15 + 0x4c) < *(int *)(pbVar15 + 4)) {
            iVar17 = *(int *)(pbVar15 + 0x4c);
          }
          *(int *)(pbVar15 + 4) = iVar17;
        }
      }
      pbVar16 = pbVar15 + 0x44;
      pbVar15 = pbVar15 + 0x48;
    } while (pbVar16 < pbVar2);
  }
  return;
}



// FUNCTION 143c30340 FUN_143c30340 body=450 status=ok
// SIG undefined FUN_143c30340(void)

void FUN_143c30340(longlong param_1,longlong param_2)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  short *psVar7;
  int *piVar8;
  int *piVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  
  psVar7 = *(short **)(param_1 + 0x978);
  psVar1 = psVar7 + (longlong)*(int *)(param_1 + 0x970) * 0x24;
  uVar2 = *(undefined4 *)(param_2 + 0x660);
  for (; psVar7 < psVar1; psVar7 = psVar7 + 0x24) {
    piVar9 = (int *)0x0;
    bVar10 = 0;
    iVar3 = FUN_143c22100((ulonglong)*(uint *)(param_2 + 0x38) / 0x28,uVar2);
    if (0x20 < iVar3) {
      iVar3 = 0x20;
    }
    uVar12 = 0;
    if (*(int *)(param_2 + 0x738) != 0) {
      do {
        piVar8 = (int *)(param_2 + 0x73c + uVar12 * 0x1c);
        uVar11 = piVar8[6];
        if ((uVar11 & 1) != 0) {
          uVar5 = uVar11 >> 2;
          bVar6 = (bool)((byte)(uVar11 >> 1) & 1);
          if ((((int)*(char *)((longlong)psVar7 + 0xd) == *(int *)(param_1 + 0x980)) != bVar6) ||
             ((uVar5 & 1) != 0)) {
            iVar4 = (int)*psVar7 - *piVar8;
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            iVar4 = FUN_143c22100(iVar4,uVar2);
            if (iVar4 < iVar3) {
              piVar9 = piVar8;
              bVar10 = (byte)uVar5 & 1;
              iVar3 = iVar4;
            }
            if (((((*(byte *)(psVar7 + 6) & 1) != 0) && (iVar4 != 0)) && ((uVar5 & 1) == 0)) &&
               ((int)*psVar7 < *piVar8 != bVar6)) {
              iVar4 = (int)*psVar7 - piVar8[3];
              if (iVar4 < 0) {
                iVar4 = -iVar4;
              }
              iVar4 = FUN_143c22100(iVar4,uVar2);
              if (iVar4 < iVar3) {
                piVar9 = piVar8 + 3;
                bVar10 = 0;
                iVar3 = iVar4;
              }
            }
          }
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(param_2 + 0x738));
      if ((piVar9 != (int *)0x0) && (*(int **)(psVar7 + 0xc) = piVar9, bVar10 != 0)) {
        *(byte *)(psVar7 + 6) = *(byte *)(psVar7 + 6) | 8;
      }
    }
  }
  return;
}



// FUNCTION 143c30510 FUN_143c30510 body=813 status=ok
// SIG undefined FUN_143c30510(void)

ulonglong FUN_143c30510(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  short *psVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  char *pcVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  longlong lVar19;
  byte *pbVar20;
  undefined4 uVar21;
  undefined8 *local_res8;
  uint local_res10;
  undefined8 local_res18;
  
  lVar10 = param_1[0x252];
  uVar17 = *param_1;
  lVar19 = (longlong)param_2;
  iVar6 = 0;
  local_res10 = 0;
  iVar16 = *(int *)(param_1 + lVar19 * 0x125 + 7);
  pcVar3 = (char *)param_1[lVar19 * 0x125 + 8];
  *(undefined4 *)(param_1 + lVar19 * 0x125 + 9) = 0;
  local_res18 = uVar17;
  if (param_2 == 0) {
    uVar21 = *(undefined4 *)(param_1 + 1);
    iVar6 = FUN_143c20070(0x40,*(undefined4 *)(param_1 + 2));
  }
  else {
    uVar21 = *(undefined4 *)(param_1 + 2);
  }
  iVar7 = FUN_143c22100(*(undefined4 *)(lVar10 + lVar19 * 0x624 + 0x108),uVar21);
  if (0x10 < iVar7) {
    iVar7 = 0x10;
  }
  iVar7 = FUN_143c20070(iVar7,uVar21);
  if (pcVar3 < pcVar3 + (longlong)iVar16 * 0x50) {
    pcVar15 = pcVar3 + 1;
    do {
      if ((iVar6 <= *(short *)(pcVar15 + 7)) &&
         ((*(longlong *)(pcVar15 + 0x27) == 0 || (iVar6 * 3 <= *(short *)(pcVar15 + 7) * 2)))) {
        iVar18 = 0;
        if (0 < *(int *)(param_1 + lVar19 * 0x125 + 9)) {
          psVar11 = (short *)param_1[lVar19 * 0x125 + 10];
          do {
            iVar12 = (int)*(short *)(pcVar15 + 1) - (int)*psVar11;
            if (iVar12 < 0) {
              iVar12 = -iVar12;
            }
            if ((iVar12 < iVar7) && (*(char *)((longlong)psVar11 + 0xd) == *pcVar15)) {
              *(undefined8 *)(pcVar15 + 0x17) = *(undefined8 *)(psVar11 + 0x1c);
              *(char **)(*(longlong *)(psVar11 + 0x20) + 0x18) = pcVar15 + -1;
              *(char **)(psVar11 + 0x20) = pcVar15 + -1;
              goto LAB_143c306ac;
            }
            iVar18 = iVar18 + 1;
            psVar11 = psVar11 + 0x24;
          } while (iVar18 < *(int *)(param_1 + lVar19 * 0x125 + 9));
        }
        uVar9 = FUN_143c2c5f0(param_1 + lVar19 * 0x125 + 7,(int)*(short *)(pcVar15 + 1),
                              (int)*pcVar15,uVar17,&local_res8);
        puVar5 = local_res8;
        local_res10 = (uint)uVar9;
        if (local_res10 != 0) {
          return uVar9;
        }
        pcVar1 = pcVar15 + -1;
        *local_res8 = 0;
        local_res8[1] = 0;
        local_res8[2] = 0;
        local_res8[3] = 0;
        local_res8[4] = 0;
        local_res8[5] = 0;
        local_res8[6] = 0;
        local_res8[7] = pcVar1;
        local_res8[8] = pcVar1;
        *(char *)((longlong)local_res8 + 0xd) = *pcVar15;
        *(undefined2 *)local_res8 = *(undefined2 *)(pcVar15 + 1);
        uVar8 = FUN_143c22100((int)*(short *)(pcVar15 + 1),uVar21);
        *(undefined4 *)((longlong)puVar5 + 4) = uVar8;
        *(undefined4 *)(puVar5 + 1) = uVar8;
        *(char **)(pcVar15 + 0x17) = pcVar1;
        uVar17 = local_res18;
      }
LAB_143c306ac:
      pcVar1 = pcVar15 + 0x4f;
      pcVar15 = pcVar15 + 0x50;
    } while (pcVar1 < pcVar3 + (longlong)iVar16 * 0x50);
  }
  puVar14 = (undefined1 *)param_1[lVar19 * 0x125 + 10];
  puVar2 = puVar14 + (longlong)*(int *)(param_1 + lVar19 * 0x125 + 9) * 0x48;
  puVar13 = puVar14;
  if (puVar14 < puVar2) {
    do {
      lVar10 = *(longlong *)(puVar13 + 0x38);
      if (lVar10 != 0) {
        do {
          *(undefined1 **)(lVar10 + 0x10) = puVar13;
          lVar10 = *(longlong *)(lVar10 + 0x18);
        } while (lVar10 != *(longlong *)(puVar13 + 0x38));
      }
      puVar13 = puVar13 + 0x48;
    } while (puVar13 < puVar2);
    if (puVar14 < puVar2) {
      puVar14 = puVar14 + 0xc;
      do {
        pbVar20 = *(byte **)(puVar14 + 0x2c);
        iVar16 = 0;
        iVar6 = 0;
        do {
          if ((*pbVar20 & 1) == 0) {
            iVar6 = iVar6 + 1;
          }
          else {
            iVar16 = iVar16 + 1;
          }
          lVar10 = *(longlong *)(pbVar20 + 0x28);
          if (((lVar10 == 0) || (*(undefined1 **)(lVar10 + 0x10) == (undefined1 *)0x0)) ||
             (*(undefined1 **)(lVar10 + 0x10) == puVar14 + -0xc)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          lVar19 = *(longlong *)(pbVar20 + 0x20);
          if (((lVar19 != 0) && (*(longlong *)(lVar19 + 0x10) != 0)) || (bVar4)) {
            psVar11 = *(short **)(puVar14 + 0x14);
            if (bVar4) {
              psVar11 = *(short **)(puVar14 + 0x1c);
              lVar19 = lVar10;
            }
            if (psVar11 == (short *)0x0) {
LAB_143c307c9:
              psVar11 = *(short **)(lVar19 + 0x10);
            }
            else {
              iVar7 = (int)*(short *)(puVar14 + -0xc) - (int)*psVar11;
              if (iVar7 < 0) {
                iVar7 = -iVar7;
              }
              iVar18 = (int)*(short *)(pbVar20 + 2) - (int)*(short *)(lVar19 + 2);
              if (iVar18 < 0) {
                iVar18 = -iVar18;
              }
              if (iVar18 < iVar7) goto LAB_143c307c9;
            }
            if (bVar4) {
              *(short **)(puVar14 + 0x1c) = psVar11;
              *(byte *)(psVar11 + 6) = *(byte *)(psVar11 + 6) | 2;
            }
            else {
              *(short **)(puVar14 + 0x14) = psVar11;
            }
          }
          pbVar20 = *(byte **)(pbVar20 + 0x18);
        } while (pbVar20 != *(byte **)(puVar14 + 0x2c));
        *puVar14 = 0;
        if (0 < iVar16) {
          *puVar14 = iVar6 <= iVar16;
        }
        if ((*(longlong *)(puVar14 + 0x1c) != 0) && (*(longlong *)(puVar14 + 0x14) != 0)) {
          *(undefined8 *)(puVar14 + 0x1c) = 0;
        }
        puVar13 = puVar14 + 0x3c;
        puVar14 = puVar14 + 0x48;
      } while (puVar13 < puVar2);
    }
  }
  return (ulonglong)local_res10;
}



// FUNCTION 143c30840 FUN_143c30840 body=908 status=ok
// SIG undefined FUN_143c30840(void)

undefined8 FUN_143c30840(undefined8 *param_1,int param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  short *psVar12;
  int iVar13;
  ulonglong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  byte *local_res8;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar20 = (undefined8 *)param_1[6];
  pbVar17 = (byte *)0x0;
  piVar7 = (int *)(param_1 + (longlong)param_2 * 0x125 + 7);
  local_res8 = (byte *)0x0;
  uVar2 = *param_1;
  puVar10 = puVar20 + *(int *)((longlong)param_1 + 0x2c);
  _guard_xfg_dispatch_icall_nop(&local_88,0,0x50);
  uStack_54 = 32000;
  local_88 = 0;
  iVar21 = piVar7[8];
  if (iVar21 < 0) {
    iVar21 = -iVar21;
  }
  *piVar7 = 0;
  uVar11 = param_1[4];
  uVar14 = (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x30 + uVar11;
  iVar22 = iVar21;
  if (param_2 == 0) {
    for (; uVar11 < uVar14; uVar11 = uVar11 + 0x30) {
      *(int *)(uVar11 + 0x18) = (int)*(short *)(uVar11 + 0xc);
      *(int *)(uVar11 + 0x1c) = (int)*(short *)(uVar11 + 0xe);
    }
  }
  else {
    for (; uVar11 < uVar14; uVar11 = uVar11 + 0x30) {
      *(int *)(uVar11 + 0x18) = (int)*(short *)(uVar11 + 0xe);
      *(int *)(uVar11 + 0x1c) = (int)*(short *)(uVar11 + 0xc);
    }
  }
  while( true ) {
    if (puVar10 <= puVar20) {
      uVar11 = *(ulonglong *)(piVar7 + 2);
      uVar14 = (longlong)*piVar7 * 0x50 + uVar11;
      if (uVar11 < uVar14) {
        psVar12 = (short *)(uVar11 + 8);
        lVar19 = ((uVar14 - uVar11) - 1) / 0x50 + 1;
        do {
          lVar3 = *(longlong *)(psVar12 + 0x20);
          iVar21 = *(int *)(*(longlong *)(psVar12 + 0x1c) + 0x1c);
          iVar22 = *(int *)(lVar3 + 0x1c);
          iVar18 = *(int *)(*(longlong *)(*(longlong *)(psVar12 + 0x1c) + 0x28) + 0x1c);
          if (iVar21 < iVar22) {
            if (iVar18 < iVar21) {
              *psVar12 = *psVar12 + (short)(iVar21 - iVar18 >> 1);
            }
            iVar21 = *(int *)(*(longlong *)(lVar3 + 0x20) + 0x1c);
            if (iVar22 < iVar21) {
              *psVar12 = *psVar12 + (short)(iVar21 - iVar22 >> 1);
            }
          }
          else {
            if (iVar21 < iVar18) {
              *psVar12 = *psVar12 + (short)(iVar18 - iVar21 >> 1);
            }
            iVar21 = *(int *)(*(longlong *)(lVar3 + 0x20) + 0x1c);
            if (iVar21 < iVar22) {
              *psVar12 = *psVar12 + (short)(iVar22 - iVar21 >> 1);
            }
          }
          psVar12 = psVar12 + 0x28;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      return 0;
    }
    pbVar16 = (byte *)*puVar20;
    bVar5 = false;
    iVar13 = -32000;
    iVar18 = 32000;
    if (pbVar16 != *(byte **)(pbVar16 + 0x28)) break;
LAB_143c30aef:
    puVar20 = puVar20 + 1;
  }
  bVar1 = (*(byte **)(pbVar16 + 0x28))[3];
  iVar6 = (int)(char)bVar1;
  if ((char)bVar1 < '\0') {
    iVar6 = -iVar6;
  }
  pbVar15 = pbVar16;
  if (iVar6 == iVar21) {
    iVar6 = (int)(char)pbVar16[3];
    if ((char)pbVar16[3] < '\0') {
      iVar6 = -iVar6;
    }
    if (iVar6 == iVar21) {
      do {
        pbVar15 = *(byte **)(pbVar15 + 0x28);
        iVar6 = (int)(char)pbVar15[3];
        if ((char)pbVar15[3] < '\0') {
          iVar6 = -iVar6;
        }
        if (iVar6 != iVar21) {
          pbVar15 = *(byte **)(pbVar15 + 0x20);
          break;
        }
      } while (pbVar15 != pbVar16);
    }
  }
  bVar4 = false;
  pbVar16 = pbVar15;
  do {
    if (bVar5) {
      iVar6 = *(int *)(pbVar16 + 0x18);
      if (iVar6 < iVar18) {
        iVar18 = iVar6;
      }
      if (iVar13 < iVar6) {
        iVar13 = iVar6;
      }
      if (((char)pbVar16[3] != iVar22) || (pbVar16 == pbVar15)) {
        *(byte **)(pbVar17 + 0x48) = pbVar16;
        *(short *)(pbVar17 + 2) = (short)(iVar13 + iVar18 >> 1);
        if (((**(byte **)(pbVar17 + 0x40) | *pbVar16) & 3) != 0) {
          *pbVar17 = *pbVar17 | 1;
        }
        iVar6 = *(int *)(*(byte **)(pbVar17 + 0x40) + 0x1c);
        iVar18 = *(int *)(pbVar16 + 0x1c);
        iVar13 = iVar18;
        if (iVar18 < iVar6) {
          iVar13 = iVar6;
        }
        if (iVar6 < iVar18) {
          iVar18 = iVar6;
        }
        *(short *)(pbVar17 + 4) = (short)iVar18;
        *(short *)(pbVar17 + 6) = (short)iVar13;
        bVar5 = false;
        *(short *)(pbVar17 + 8) = (short)iVar13 - *(short *)(pbVar17 + 4);
        pbVar17 = (byte *)0x0;
        local_res8 = (byte *)0x0;
        goto LAB_143c30a3b;
      }
    }
    else {
LAB_143c30a3b:
      if (pbVar16 == pbVar15) {
        if (bVar4) goto LAB_143c30aef;
        bVar4 = true;
      }
    }
    if (!bVar5) {
      bVar1 = pbVar16[3];
      iVar9 = (int)(char)bVar1;
      iVar6 = iVar9;
      if ((char)bVar1 < '\0') {
        iVar6 = -iVar9;
      }
      if (iVar6 == iVar21) {
        uVar8 = FUN_143c2c840(piVar7,uVar2,&local_res8);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        bVar5 = true;
        *(ulonglong *)local_res8 = CONCAT71(uStack_87,local_88);
        *(undefined8 *)(local_res8 + 8) = uStack_80;
        *(undefined8 *)(local_res8 + 0x10) = local_78;
        *(undefined8 *)(local_res8 + 0x18) = uStack_70;
        *(undefined8 *)(local_res8 + 0x20) = local_68;
        *(undefined8 *)(local_res8 + 0x28) = uStack_60;
        *(ulonglong *)(local_res8 + 0x30) = CONCAT44(uStack_54,local_58);
        *(undefined8 *)(local_res8 + 0x38) = uStack_50;
        *(undefined8 *)(local_res8 + 0x40) = local_48;
        *(undefined8 *)(local_res8 + 0x48) = uStack_40;
        local_res8[1] = bVar1;
        iVar13 = *(int *)(pbVar16 + 0x18);
        *(byte **)(local_res8 + 0x40) = pbVar16;
        *(byte **)(local_res8 + 0x48) = pbVar16;
        pbVar17 = local_res8;
        iVar18 = iVar13;
        iVar22 = iVar9;
      }
    }
    pbVar16 = *(byte **)(pbVar16 + 0x20);
  } while( true );
}



// FUNCTION 143c30bd0 FUN_143c30bd0 body=479 status=ok
// SIG undefined FUN_143c30bd0(void)

void FUN_143c30bd0(longlong param_1,int param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  short *psVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  lVar13 = (longlong)param_4 * 0x928 + param_1;
  plVar6 = *(longlong **)(lVar13 + 0x40);
  plVar7 = plVar6 + (longlong)*(int *)(lVar13 + 0x38) * 10;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_3 + (ulonglong)(param_2 - 1) * 0xc);
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x1290) + 0x38);
  iVar12 = iVar3 * 8;
  iVar12 = (int)((iVar12 >> 0x1f & 0x7ffU) + iVar12) >> 0xb;
  if (iVar12 == 0) {
    iVar12 = 1;
  }
  iVar3 = iVar3 * 6000;
  iVar3 = (iVar3 >> 0x1f & 0x7ffU) + iVar3;
  if (plVar6 < plVar7) {
    pcVar10 = (char *)((longlong)plVar6 + 1);
    do {
      if ((int)*pcVar10 == *(int *)(lVar13 + 0x58)) {
        psVar9 = (short *)((longlong)plVar6 + 4);
        do {
          if (((int)*pcVar10 + (int)*(char *)((longlong)psVar9 + -3) == 0) &&
             ((int)*(short *)(pcVar10 + 1) < (int)psVar9[-1])) {
            iVar2 = (int)*(short *)(pcVar10 + 3);
            if ((int)*(short *)(pcVar10 + 3) < (int)*psVar9) {
              iVar2 = (int)*psVar9;
            }
            iVar11 = (int)*(short *)(pcVar10 + 5);
            if ((int)psVar9[1] < (int)*(short *)(pcVar10 + 5)) {
              iVar11 = (int)psVar9[1];
            }
            if (iVar12 <= iVar11 - iVar2) {
              iVar4 = (int)psVar9[-1] - (int)*(short *)(pcVar10 + 1);
              if (iVar8 != 0) {
                iVar5 = (iVar4 * 0x400) / iVar8 + -0x400;
                if (iVar5 < 0x2711) {
                  iVar4 = 0;
                  if (0 < iVar5) {
                    iVar4 = (iVar5 * iVar5) / 3000;
                  }
                }
                else {
                  iVar4 = 32000;
                }
              }
              iVar4 = (int)(CONCAT44(iVar3 >> 0x1f,iVar3 >> 0xb) / (longlong)(iVar11 - iVar2)) +
                      iVar4;
              if (iVar4 < *(int *)(pcVar10 + 0x33)) {
                *(int *)(pcVar10 + 0x33) = iVar4;
                *(short **)(pcVar10 + 0x1f) = psVar9 + -2;
              }
              if (iVar4 < *(int *)(psVar9 + 0x18)) {
                *(int *)(psVar9 + 0x18) = iVar4;
                *(char **)(psVar9 + 0xe) = pcVar10 + -1;
              }
            }
          }
          plVar1 = (longlong *)(psVar9 + 0x26);
          psVar9 = psVar9 + 0x28;
        } while (plVar1 < plVar7);
      }
      plVar1 = (longlong *)(pcVar10 + 0x4f);
      pcVar10 = pcVar10 + 0x50;
    } while (plVar1 < plVar7);
  }
  if (plVar6 < plVar7) {
    plVar6 = plVar6 + 4;
    do {
      lVar13 = *plVar6;
      if ((lVar13 != 0) && (*(longlong **)(lVar13 + 0x20) != plVar6 + -4)) {
        *plVar6 = 0;
        plVar6[1] = *(longlong *)(lVar13 + 0x20);
      }
      plVar1 = plVar6 + 6;
      plVar6 = plVar6 + 10;
    } while (plVar1 < plVar7);
  }
  return;
}



// FUNCTION 143c30db0 FUN_143c30db0 body=2350 status=ok
// SIG undefined FUN_143c30db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c30db0(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined *puVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auStack_298 [32];
  uint local_278;
  uint local_274;
  ushort local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  undefined *local_250;
  uint local_248;
  longlong *local_240;
  short local_238;
  short sStack_236;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong local_228;
  longlong lStack_220;
  longlong local_210;
  longlong local_208;
  byte *local_200;
  longlong local_1f8;
  longlong *local_1f0;
  int local_1e8 [52];
  int local_118 [52];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_1f0 = param_1 + 0xcc;
  local_250 = &DAT_145d215e0 + (longlong)*(int *)(*param_1 + 0xc) * 8;
  iVar20 = *(int *)(&DAT_145d215e0 + (longlong)*(int *)(*param_1 + 0xc) * 8);
  local_240 = param_1;
  local_208 = param_2;
joined_r0x000143c30e11:
  if (iVar20 == 0x2f7) {
    return;
  }
  uVar18 = 0;
  local_200 = &DAT_145d212e0 + iVar20;
  local_25c = 0;
  local_268 = 0;
  bVar6 = *local_200;
  if (bVar6 != 0) {
LAB_143c30e60:
    puVar4 = local_250;
    local_200 = local_200 + 1;
    uVar15 = (uint)bVar6;
    if (0x7f < bVar6) {
      uVar15 = (uint)bVar6;
      if (bVar6 < 0xe0) {
        iVar20 = 1;
        uVar15 = uVar15 & 0x1f;
      }
      else if (uVar15 < 0xf0) {
        iVar20 = 2;
        uVar15 = uVar15 & 0xf;
      }
      else {
        iVar20 = 3;
        uVar15 = uVar15 & 7;
      }
      do {
        bVar6 = *local_200;
        local_200 = local_200 + 1;
        uVar15 = (int)(char)bVar6 & 0x3fU | uVar15 << 6;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    iVar20 = FT_Get_Char_Index(*(undefined8 *)param_1[6],uVar15);
    if (iVar20 != 0) {
      iVar20 = FUN_143c216b0(param_2);
      lVar24 = *(longlong *)(param_2 + 0x78);
      uStack_234 = *(undefined4 *)(lVar24 + 0x9c);
      plVar3 = (longlong *)(lVar24 + 0xa0);
      uStack_230 = *(undefined4 *)plVar3;
      uStack_22c = *(undefined4 *)(lVar24 + 0xa4);
      lVar12 = *plVar3;
      local_228 = *(longlong *)(lVar24 + 0xa8);
      lStack_220 = *(longlong *)(lVar24 + 0xb0);
      local_238 = (short)*(undefined4 *)(lVar24 + 0x98);
      sStack_236 = (short)((uint)*(undefined4 *)(lVar24 + 0x98) >> 0x10);
      if ((iVar20 != 0) || (sStack_236 < 3)) goto LAB_143c314b5;
      uVar15 = 0;
      uVar11 = 0xffffffff;
      local_274 = 0;
      iVar20 = 0;
      uVar26 = 0;
      uVar18 = 0;
      lVar24 = 0;
      if (0 < (longlong)local_238) {
        do {
          uVar22 = (uint)*(short *)(lStack_220 + lVar24 * 2);
          if ((int)uVar18 < (int)uVar22) {
            uVar21 = uVar11;
            if ((puVar4[4] & 1) == 0) {
              if ((int)uVar18 <= (int)uVar22) {
                piVar14 = (int *)((longlong)(int)uVar18 * 8 + 4 + *plVar3);
                uVar16 = uVar18;
                do {
                  if (((int)uVar21 < 0) || (*piVar14 < iVar20)) {
                    iVar20 = *piVar14;
                    uVar21 = uVar16;
                  }
                  uVar16 = uVar16 + 1;
                  piVar14 = piVar14 + 2;
                } while ((int)uVar16 <= (int)uVar22);
                goto LAB_143c30fd9;
              }
            }
            else {
              uVar15 = local_274;
              if ((int)uVar18 <= (int)uVar22) {
                piVar14 = (int *)(*plVar3 + (longlong)(int)uVar18 * 8 + 4);
                uVar16 = uVar18;
                do {
                  if (((int)uVar21 < 0) || (iVar20 < *piVar14)) {
                    iVar20 = *piVar14;
                    uVar21 = uVar16;
                  }
                  uVar16 = uVar16 + 1;
                  piVar14 = piVar14 + 2;
                } while ((int)uVar16 <= (int)uVar22);
LAB_143c30fd9:
                bVar28 = uVar21 != uVar11;
                uVar11 = uVar21;
                if (bVar28) {
                  uVar15 = uVar18;
                  uVar26 = uVar22;
                  local_274 = uVar18;
                }
              }
            }
          }
          lVar24 = lVar24 + 1;
          uVar18 = uVar22 + 1;
        } while (lVar24 < local_238);
        local_258 = uVar26;
        if ((int)uVar11 < 0) goto LAB_143c31491;
        lVar24 = (longlong)(int)uVar11;
        iVar1 = *(int *)(*plVar3 + lVar24 * 8);
        local_264 = uVar11;
        if ((*(byte *)(lVar24 + local_228) & 3) != 1) {
          local_264 = 0xffffffff;
        }
        local_210 = (longlong)(int)uVar26;
        local_278 = uVar11;
        local_260 = local_264;
        do {
          lVar13 = local_210;
          uVar18 = uVar26;
          if ((int)uVar15 < (int)local_278) {
            lVar13 = lVar24 + -1;
            uVar18 = local_278 - 1;
          }
          iVar10 = *(int *)(lVar12 + 4 + lVar13 * 8);
          iVar7 = iVar10 - iVar20;
          if (iVar7 < 0) {
            iVar7 = iVar20 - iVar10;
          }
          if (5 < iVar7) {
            iVar10 = *(int *)(lVar12 + lVar13 * 8);
            iVar17 = iVar10 - iVar1;
            if (iVar17 < 0) {
              iVar17 = iVar1 - iVar10;
            }
            if (iVar17 <= iVar7 * 0x14) break;
          }
          if (((*(byte *)(lVar13 + local_228) & 3) == 1) && (local_264 = uVar18, (int)local_260 < 0)
             ) {
            local_260 = uVar18;
          }
          lVar24 = lVar13;
          uVar15 = local_274;
          local_278 = uVar18;
        } while (uVar18 != uVar11);
        local_1f8 = (longlong)(int)local_274;
        lVar24 = (longlong)(int)uVar11;
        local_26c = uVar11;
        do {
          lVar13 = local_1f8;
          local_248 = local_274;
          if (lVar24 < local_210) {
            lVar13 = lVar24 + 1;
            local_248 = local_26c + 1;
          }
          iVar10 = *(int *)(lVar12 + 4 + lVar13 * 8);
          iVar7 = iVar10 - iVar20;
          if (iVar7 < 0) {
            iVar7 = iVar20 - iVar10;
          }
          if (5 < iVar7) {
            iVar10 = *(int *)(lVar12 + lVar13 * 8);
            iVar17 = iVar10 - iVar1;
            if (iVar17 < 0) {
              iVar17 = iVar1 - iVar10;
            }
            if (iVar17 <= iVar7 * 0x14) break;
          }
          if (((*(byte *)(lVar13 + local_228) & 3) == 1) &&
             (local_260 = local_248, (int)local_264 < 0)) {
            local_264 = local_248;
          }
          lVar24 = lVar13;
          local_26c = local_248;
        } while (local_248 != uVar11);
        local_270 = *(ushort *)(local_250 + 4);
        uVar15 = local_26c;
        uVar22 = local_278;
        uVar21 = local_264;
        uVar16 = local_260;
        uVar18 = local_25c;
        if ((local_270 & 8) != 0) {
          lVar24 = (longlong)(int)local_26c;
          iVar10 = *(int *)(*plVar3 + lVar24 * 8);
          uVar25 = *(uint *)(local_240 + 7) / 0x19;
          iVar7 = *(int *)(*plVar3 + (longlong)(int)local_278 * 8);
          iVar17 = iVar10 - iVar7;
          if (iVar17 < 0) {
            iVar17 = iVar7 - iVar10;
          }
          local_254 = uVar25;
          if ((iVar17 < (int)uVar25) &&
             ((int)((local_26c - local_278) + 2) <= (int)(uVar26 - local_274))) {
            uVar19 = 0;
            uVar27 = 0;
            lVar12 = (longlong)(int)uVar11;
            uVar5 = uVar11;
            do {
              lVar13 = local_210;
              uVar2 = uVar26;
              if (local_1f8 < lVar12) {
                lVar13 = lVar12 + -1;
                uVar2 = uVar5 - 1;
              }
              iVar10 = *(int *)(*plVar3 + lVar13 * 8);
            } while ((iVar10 == iVar1) && (lVar12 = lVar13, uVar5 = uVar2, lVar13 != (int)uVar11));
            if (uVar2 == uVar11) goto LAB_143c314b5;
            bVar28 = false;
            lVar12 = lVar24;
            uVar11 = local_26c;
            local_254 = local_26c;
            do {
              if (!bVar28) {
                uVar19 = uVar11;
                if ((*(byte *)(lVar12 + local_228) & 3) != 1) {
                  uVar19 = 0xffffffff;
                }
                bVar28 = true;
                lVar24 = lVar12;
                local_254 = uVar11;
                uVar27 = uVar19;
              }
              lVar13 = local_1f8;
              uVar5 = local_274;
              if (lVar12 < local_210) {
                lVar13 = lVar12 + 1;
                uVar5 = uVar11 + 1;
              }
              uVar11 = uVar5;
              iVar7 = *(int *)(*plVar3 + 4 + lVar24 * 8);
              iVar17 = iVar20 - iVar7;
              if (iVar17 < 0) {
                iVar17 = iVar7 - iVar20;
              }
              if ((int)(*(uint *)(local_240 + 7) >> 2) < iVar17) {
                bVar28 = false;
              }
              else {
                iVar17 = *(int *)(*plVar3 + 4 + lVar13 * 8);
                iVar8 = iVar17 - iVar7;
                if (iVar8 < 0) {
                  iVar8 = iVar7 - iVar17;
                }
                if (5 < iVar8) {
                  iVar7 = *(int *)(*plVar3 + lVar13 * 8);
                  iVar17 = *(int *)(*plVar3 + lVar24 * 8);
                  iVar9 = iVar7 - iVar17;
                  if (iVar9 < 0) {
                    iVar9 = iVar17 - iVar7;
                  }
                  if (iVar9 <= iVar8 * 0x14) {
                    bVar28 = false;
                    goto LAB_143c31314;
                  }
                }
                if (((*(byte *)(lVar13 + local_228) & 3) == 1) && (uVar27 = uVar11, (int)uVar19 < 0)
                   ) {
                  uVar19 = uVar11;
                }
                iVar7 = *(int *)(*plVar3 + lVar24 * 8);
                iVar17 = *(int *)(*plVar3 + lVar13 * 8);
                iVar9 = iVar17 - iVar7;
                if (iVar9 < 0) {
                  iVar9 = iVar7 - iVar17;
                }
                if ((iVar7 < iVar17 == iVar10 < iVar1) && ((int)uVar25 <= iVar9)) {
                  piVar14 = (int *)(*plVar3 + (longlong)(int)local_254 * 8);
                  iVar20 = piVar14[1];
                  goto LAB_143c31360;
                }
              }
LAB_143c31314:
              lVar12 = lVar13;
            } while (uVar11 != local_278);
          }
        }
        goto LAB_143c31413;
      }
      goto LAB_143c31491;
    }
    goto LAB_143c314b5;
  }
  goto LAB_143c3167a;
LAB_143c31360:
  do {
    lVar24 = local_1f8;
    uVar15 = local_274;
    if (lVar13 < local_210) {
      lVar24 = lVar13 + 1;
      uVar15 = uVar11 + 1;
    }
    uVar11 = uVar15;
    iVar1 = *(int *)(*plVar3 + 4 + lVar24 * 8);
    iVar10 = iVar1 - iVar20;
    if (iVar10 < 0) {
      iVar10 = iVar20 - iVar1;
    }
    if (5 < iVar10) {
      iVar1 = *(int *)(*plVar3 + (longlong)(int)local_248 * 8);
      iVar10 = *piVar14;
      iVar7 = iVar1 - iVar10;
      if (iVar7 < 0) {
        iVar7 = iVar10 - iVar1;
      }
      if (iVar7 <= iVar8 * 0x14) {
        uVar15 = uVar26;
        uVar22 = local_254;
        uVar21 = uVar19;
        uVar16 = uVar27;
        if ((int)local_274 < (int)uVar11) {
          uVar15 = uVar11 - 1;
          uVar22 = local_254;
        }
        break;
      }
    }
    if (((*(byte *)(lVar24 + local_228) & 3) == 1) && ((int)uVar19 < 0)) {
      uVar19 = uVar11;
    }
    lVar13 = lVar24;
    uVar15 = uVar11;
    uVar22 = local_254;
    uVar21 = uVar19;
    uVar16 = uVar11;
    uVar27 = uVar11;
  } while (uVar11 != local_278);
LAB_143c31413:
  if (((int)uVar21 < 0) || ((int)uVar16 < 0)) {
LAB_143c31448:
    if (((*(byte *)((int)uVar22 + local_228) & 3) != 1) ||
       ((*(byte *)((int)uVar15 + local_228) & 3) != 1)) {
      if ((local_270 & 2) == 0) {
        local_118[local_268] = iVar20;
        local_268 = local_268 + 1;
      }
      goto LAB_143c314b5;
    }
  }
  else {
    iVar1 = *(int *)(*plVar3 + (longlong)(int)uVar16 * 8);
    iVar10 = *(int *)(*plVar3 + (longlong)(int)uVar21 * 8);
    uVar11 = iVar1 - iVar10;
    if ((int)uVar11 < 0) {
      uVar11 = iVar10 - iVar1;
    }
    if (uVar11 <= *(uint *)(local_240 + 7) >> 3) goto LAB_143c31448;
  }
LAB_143c31491:
  local_1e8[local_25c] = iVar20;
  local_25c = local_25c + 1;
  uVar18 = local_25c;
LAB_143c314b5:
  bVar6 = *local_200;
  param_2 = local_208;
  param_1 = local_240;
  if (bVar6 == 0) goto code_r0x000143c314db;
  goto LAB_143c30e60;
code_r0x000143c314db:
  if ((uVar18 != 0) || (local_268 != 0)) {
    uVar23 = 1;
    if (1 < local_268) {
      do {
        iVar20 = (int)uVar23;
        if (iVar20 != 0) {
          piVar14 = local_118 + uVar23;
          do {
            iVar1 = *piVar14;
            uVar15 = (int)uVar23 - 1;
            uVar23 = (ulonglong)uVar15;
            if (local_118[uVar23] <= iVar1) break;
            *piVar14 = local_118[uVar23];
            piVar14 = piVar14 + -1;
            local_118[uVar23] = iVar1;
          } while (uVar15 != 0);
        }
        uVar15 = iVar20 + 1;
        uVar23 = (ulonglong)uVar15;
      } while (uVar15 < local_268);
    }
    uVar23 = 1;
    if (1 < uVar18) {
      do {
        iVar20 = (int)uVar23;
        if (iVar20 != 0) {
          piVar14 = local_1e8 + uVar23;
          do {
            iVar1 = *piVar14;
            uVar15 = (int)uVar23 - 1;
            uVar23 = (ulonglong)uVar15;
            if (local_1e8[uVar23] <= iVar1) break;
            *piVar14 = local_1e8[uVar23];
            piVar14 = piVar14 + -1;
            local_1e8[uVar23] = iVar1;
          } while (uVar15 != 0);
        }
        uVar15 = iVar20 + 1;
        uVar23 = (ulonglong)uVar15;
      } while (uVar15 < uVar18);
    }
    piVar14 = (int *)((longlong)local_1f0 + (ulonglong)*(uint *)(local_1f0 + 0x1b) * 0x1c + 0xdc);
    *(uint *)(local_1f0 + 0x1b) = *(uint *)(local_1f0 + 0x1b) + 1;
    if (uVar18 == 0) {
      iVar20 = local_118[local_268 >> 1];
      piVar14[3] = iVar20;
      *piVar14 = iVar20;
    }
    else if (local_268 == 0) {
      iVar20 = local_1e8[uVar18 >> 1];
      piVar14[3] = iVar20;
      *piVar14 = iVar20;
    }
    else {
      *piVar14 = local_1e8[uVar18 >> 1];
      piVar14[3] = local_118[local_268 >> 1];
    }
    iVar20 = *piVar14;
    if ((piVar14[3] != iVar20) &&
       ((ushort)(iVar20 < piVar14[3]) != (*(ushort *)(local_250 + 4) & 1))) {
      iVar20 = (piVar14[3] + iVar20) / 2;
      piVar14[3] = iVar20;
      *piVar14 = iVar20;
    }
    piVar14[6] = 0;
    iVar20 = piVar14[6];
    if ((local_250[4] & 1) != 0) {
      iVar20 = 2;
    }
    piVar14[6] = iVar20;
    if ((local_250[4] & 2) != 0) {
      piVar14[6] = piVar14[6] | 4;
    }
    if ((local_250[4] & 4) != 0) {
      piVar14[6] = piVar14[6] | 8;
    }
  }
LAB_143c3167a:
  iVar20 = *(int *)(local_250 + 8);
  local_250 = local_250 + 8;
  goto joined_r0x000143c30e11;
}



// FUNCTION 143c316e0 FUN_143c316e0 body=560 status=ok
// SIG undefined FUN_143c316e0(void)

void FUN_143c316e0(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  
  if (param_3 == 0) {
    iVar3 = *(int *)(param_2 + 8);
    iVar13 = *(int *)(param_2 + 0x10);
  }
  else {
    iVar3 = *(int *)(param_2 + 0xc);
    iVar13 = *(int *)(param_2 + 0x14);
  }
  piVar12 = (int *)(param_1 + 0x3c + (longlong)param_3 * 0x624);
  if ((piVar12[0x187] != iVar3) || (piVar12[0x188] != iVar13)) {
    piVar12[0x187] = iVar3;
    uVar6 = 0;
    piVar12[0x188] = iVar13;
    if (*(uint *)(param_1 + 0x738) != 0) {
      pbVar10 = (byte *)(param_1 + 0x754);
      do {
        if ((*pbVar10 & 8) != 0) {
          lVar7 = param_1 + 0x73c + uVar6 * 0x1c;
          if (lVar7 != 0) {
            uVar9 = FUN_143c22100(*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(param_2 + 0xc));
            uVar1 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 0x18);
            uVar2 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x18);
            iVar4 = 0x28;
            if (((uVar2 != 0) && (uVar1 <= uVar2)) && (iVar4 = 0x28, 5 < uVar1)) {
              iVar4 = 0x34;
            }
            uVar2 = iVar4 + uVar9 & 0xffffffc0;
            if ((uVar9 != uVar2) && (param_3 == 1)) {
              iVar3 = FUN_143c21f00(iVar3,uVar2,uVar9);
            }
          }
          break;
        }
        uVar2 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar2;
        pbVar10 = pbVar10 + 0x1c;
      } while (uVar2 < *(uint *)(param_1 + 0x738));
    }
    *piVar12 = iVar3;
    piVar12[1] = iVar13;
    if (param_3 == 0) {
      *(int *)(param_1 + 0x10) = iVar3;
      *(int *)(param_1 + 0x18) = iVar13;
    }
    else {
      *(int *)(param_1 + 0x14) = iVar3;
      *(int *)(param_1 + 0x1c) = iVar13;
    }
    uVar2 = 0;
    if (piVar12[2] != 0) {
      do {
        lVar7 = (ulonglong)uVar2 + 1;
        iVar4 = FUN_143c22100(piVar12[lVar7 * 3],iVar3);
        uVar2 = uVar2 + 1;
        piVar12[lVar7 * 3 + 1] = iVar4;
        piVar12[lVar7 * 3 + 2] = iVar4;
      } while (uVar2 < (uint)piVar12[2]);
    }
    iVar4 = FUN_143c22100(piVar12[0x34],iVar3);
    *(bool *)(piVar12 + 0x35) = iVar4 < 0x28;
    if ((param_3 == 1) && (uVar2 = 0, piVar12[0x36] != 0)) {
      do {
        piVar11 = piVar12 + (ulonglong)uVar2 * 7 + 0x37;
        iVar4 = FUN_143c22100(*piVar11,iVar3);
        piVar11[1] = iVar4 + iVar13;
        piVar11[2] = iVar4 + iVar13;
        iVar4 = FUN_143c22100(piVar11[3],iVar3);
        piVar11[6] = piVar11[6] & 0xfffffffe;
        piVar11[4] = iVar4 + iVar13;
        piVar11[5] = iVar4 + iVar13;
        iVar4 = FUN_143c22100(*piVar11 - piVar11[3],iVar3);
        if (iVar4 + 0x30U < 0x61) {
          iVar8 = iVar4;
          if (iVar4 < 0) {
            iVar8 = -iVar4;
          }
          if (iVar8 < 0x20) {
            iVar5 = 0;
          }
          else {
            iVar5 = 0x40;
            if (iVar8 < 0x30) {
              iVar5 = 0x20;
            }
          }
          if (iVar4 < 0) {
            iVar5 = -iVar5;
          }
          uVar9 = piVar11[1] + 0x20U & 0xffffffc0;
          piVar11[2] = uVar9;
          piVar11[6] = piVar11[6] | 1;
          piVar11[5] = uVar9 - iVar5;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)piVar12[0x36]);
    }
  }
  return;
}



// FUNCTION 143c31910 FUN_143c31910 body=1001 status=ok
// SIG undefined FUN_143c31910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c31910(longlong *param_1,ulonglong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)param_1[3];
  lVar5 = *(longlong *)(*param_1 + 0x78);
  lVar6 = param_1[2];
  plVar7 = *(longlong **)(lVar5 + 0xf0);
  lVar8 = *plVar7;
  local_68 = param_2;
  uVar12 = FUN_143c216b0(*param_1,param_3,param_4 | 0x2000);
  uVar18 = uVar12 & 0xffffffff;
  if ((int)uVar12 == 0) {
    cVar2 = *(char *)((longlong)plVar7 + 0xc);
    *(char *)(param_1 + 4) = cVar2;
    if (cVar2 != '\0') {
      local_58 = (undefined4)plVar7[2];
      uStack_54 = *(undefined4 *)((longlong)plVar7 + 0x14);
      uStack_50 = (undefined4)plVar7[3];
      uStack_4c = *(undefined4 *)((longlong)plVar7 + 0x1c);
      *(undefined4 *)((longlong)param_1 + 0x24) = local_58;
      *(undefined4 *)(param_1 + 5) = uStack_54;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_50;
      *(undefined4 *)(param_1 + 6) = uStack_4c;
      *(longlong *)((longlong)param_1 + 0x34) = plVar7[4];
      iVar10 = FUN_143c21d00(&local_58);
      if (iVar10 == 0) {
        FUN_143c254f0((longlong)param_1 + 0x34,&local_58);
      }
    }
    if (*(int *)(lVar5 + 0x60) == 0x6f75746c) {
      if ((char)param_1[4] != '\0') {
        FUN_143c23560(lVar5 + 0x98,*(undefined4 *)((longlong)param_1 + 0x34),(int)param_1[7]);
      }
      *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(lVar6 + 0xc);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar6 + 0x14);
      iVar10 = FUN_143c22100(*(undefined4 *)(lVar5 + 0x40),*(undefined4 *)(lVar6 + 8));
      *(int *)((longlong)param_1 + 0x44) = iVar10 + *(int *)(lVar6 + 0xc);
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar6 + 0x14);
      uVar12 = uVar18;
      if (*(short *)(lVar5 + 0x9a) != 0) {
        if (*(code **)((&PTR_DAT_145d21758)[*(int *)(*plVar4 + 4)] + 0x30) != (code *)0x0) {
          (**(code **)((&PTR_DAT_145d21758)[*(int *)(*plVar4 + 4)] + 0x30))
                    (lVar6,lVar8 + 0x18,plVar4);
        }
        if (*(int *)(local_68 + 0x18) == 1) {
          iVar10 = *(int *)((longlong)param_1 + 0x3c);
          iVar3 = *(int *)((longlong)param_1 + 0x44);
          uVar16 = iVar10 + 0x20 + *(int *)(lVar6 + 0x1298) & 0xffffffc0;
          *(uint *)((longlong)param_1 + 0x3c) = uVar16;
          *(uint *)((longlong)param_1 + 0x44) = iVar3 + 0x20 + *(int *)(lVar6 + 0x129c) & 0xffffffc0
          ;
          *(uint *)(lVar5 + 0xdc) = uVar16 - iVar10;
          *(int *)(lVar5 + 0xe0) = *(int *)((longlong)param_1 + 0x44) - iVar3;
        }
        else {
          lVar9 = *(longlong *)(lVar6 + 0x50);
          lVar1 = lVar9 + (longlong)*(int *)(lVar6 + 0x48) * 0x48;
          if ((*(int *)(lVar6 + 0x48) < 2) || ((*(byte *)(lVar6 + 0x1288) & 4) != 0)) {
            iVar10 = *(int *)((longlong)param_1 + 0x3c);
            iVar3 = *(int *)((longlong)param_1 + 0x44);
            uVar16 = iVar10 + 0x20U & 0xffffffc0;
            *(uint *)((longlong)param_1 + 0x3c) = uVar16;
            *(uint *)((longlong)param_1 + 0x44) = iVar3 + 0x20U & 0xffffffc0;
            *(uint *)(lVar5 + 0xdc) = uVar16 - iVar10;
            *(int *)(lVar5 + 0xe0) = *(int *)((longlong)param_1 + 0x44) - iVar3;
          }
          else {
            iVar10 = *(int *)(lVar9 + 4);
            iVar3 = *(int *)(lVar9 + 8);
            iVar13 = iVar3 - iVar10;
            iVar15 = *(int *)((longlong)param_1 + 0x44) - *(int *)(lVar1 + -0x44);
            iVar17 = *(int *)(lVar1 + -0x40) + iVar15;
            if (iVar10 < 0x18) {
              iVar13 = iVar13 + -8;
            }
            if (iVar15 < 0x18) {
              iVar17 = iVar17 + 8;
            }
            uVar16 = iVar13 + 0x20U & 0xffffffc0;
            uVar14 = iVar17 + 0x20U & 0xffffffc0;
            *(uint *)((longlong)param_1 + 0x3c) = uVar16;
            *(uint *)((longlong)param_1 + 0x44) = uVar14;
            if ((iVar3 <= (int)uVar16) && (0 < iVar10)) {
              *(uint *)((longlong)param_1 + 0x3c) = uVar16 - 0x40;
            }
            if (((int)uVar14 <= *(int *)(lVar1 + -0x40)) && (0 < iVar15)) {
              *(uint *)((longlong)param_1 + 0x44) = uVar14 + 0x40;
            }
            *(int *)(lVar5 + 0xdc) = *(int *)((longlong)param_1 + 0x3c) - iVar13;
            *(int *)(lVar5 + 0xe0) = *(int *)((longlong)param_1 + 0x44) - iVar17;
          }
        }
      }
    }
    else {
      uVar12 = 7;
    }
    uVar18 = local_68;
    local_78 = *(int *)(lVar5 + 0x44) - *(int *)(lVar5 + 0x38);
    local_74 = *(int *)(lVar5 + 0x48) - *(int *)(lVar5 + 0x3c);
    local_78 = FUN_143c22100(local_78,(int)plVar4[2]);
    local_74 = FUN_143c22100(local_74,*(undefined4 *)((longlong)plVar4 + 0x14));
    if ((char)param_1[4] != '\0') {
      FUN_143c234b0(lVar8 + 0x18,(longlong)param_1 + 0x24);
      FUN_143c254f0(&local_78,(longlong)param_1 + 0x24);
    }
    if (*(int *)((longlong)param_1 + 0x3c) != 0) {
      FUN_143c23560(lVar8 + 0x18,-*(int *)((longlong)param_1 + 0x3c),0);
    }
    FUN_143c22f00(lVar8 + 0x18,&local_68);
    local_60 = local_60 + 0x3f & 0xffffffc0;
    uVar16 = (uint)local_68 & 0xffffffc0;
    *(uint *)(lVar5 + 0x38) = uVar16;
    *(uint *)(lVar5 + 0x30) = local_60 - uVar16;
    local_5c = local_5c + 0x3f & 0xffffffc0;
    *(uint *)(lVar5 + 0x3c) = local_5c;
    *(uint *)(lVar5 + 0x44) = local_78 + uVar16 & 0xffffffc0;
    *(uint *)(lVar5 + 0x34) = local_5c - (local_68._4_4_ & 0xffffffc0);
    local_68 = local_68 & 0xffffffc0ffffffc0;
    *(uint *)(lVar5 + 0x48) = local_74 + local_5c & 0xffffffc0;
    if ((*(int *)(uVar18 + 0x18) == 1) ||
       (((*(byte *)(*(longlong *)(lVar5 + 8) + 8) & 4) == 0 &&
        (((*(uint *)(param_1[1] + 8) <= param_3 ||
          ((*(byte *)((ulonglong)param_3 + *(longlong *)(param_1[1] + 0x10)) & 0x80) == 0)) ||
         ((char)plVar4[5] == '\0')))))) {
      if (*(int *)(lVar5 + 0x40) != 0) {
        *(int *)(lVar5 + 0x40) =
             *(int *)((longlong)param_1 + 0x44) - *(int *)((longlong)param_1 + 0x3c);
      }
    }
    else {
      uVar11 = FUN_143c22100(*(undefined4 *)(lVar5 + 0x40),(int)plVar4[2]);
      *(undefined4 *)(lVar5 + 0x40) = uVar11;
      *(undefined8 *)(lVar5 + 0xdc) = 0;
    }
    iVar10 = FUN_143c22100(*(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)((longlong)plVar4 + 0x14));
    *(undefined4 *)(lVar5 + 0x60) = 0x6f75746c;
    *(uint *)(lVar5 + 0x40) = *(int *)(lVar5 + 0x40) + 0x20U & 0xffffffc0;
    *(uint *)(lVar5 + 0x4c) = iVar10 + 0x20U & 0xffffffc0;
  }
  return uVar12;
}



// FUNCTION 143c31d00 FUN_143c31d00 body=377 status=ok
// SIG undefined FUN_143c31d00(void)

int FUN_143c31d00(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                 uint param_5)

{
  longlong lVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  longlong *local_res18;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  ulonglong uStack_20;
  
  lVar1 = *(longlong *)(param_3 + 0x80);
  if (lVar1 == 0) {
    return 0x24;
  }
  iVar4 = 0;
  uStack_30 = *(undefined4 *)(lVar1 + 0x1c);
  uStack_2c = *(undefined4 *)(lVar1 + 0x20);
  *param_1 = param_3;
  lVar1 = *(longlong *)(param_3 + 0xb8);
  lStack_28 = 0;
  uStack_20 = (ulonglong)((int)param_5 >> 0x10 & 0xf);
  param_1[1] = lVar1;
  local_38 = param_3;
  if ((lVar1 == 0) && (iVar4 = FUN_143c2e810(param_3,param_1 + 1,param_2), iVar4 == 0)) {
    *(longlong *)(param_3 + 0xb8) = param_1[1];
    *(code **)(param_3 + 0xc0) = FUN_143c2e610;
  }
  if ((iVar4 == 0) && (iVar4 = FUN_143c2e6e0(param_1[1],param_4,0x21,&local_res18), iVar4 == 0)) {
    puVar2 = (&PTR_DAT_145d21758)[*(int *)(*local_res18 + 4)];
    param_1[3] = (longlong)local_res18;
    pcVar3 = *(code **)(puVar2 + 0x18);
    if (pcVar3 == (code *)0x0) {
      *(undefined4 *)(local_res18 + 1) = (undefined4)local_38;
      *(undefined4 *)((longlong)local_res18 + 0xc) = local_38._4_4_;
      *(undefined4 *)(local_res18 + 2) = uStack_30;
      *(undefined4 *)((longlong)local_res18 + 0x14) = uStack_2c;
      local_res18[3] = lStack_28;
      local_res18[4] = uStack_20;
    }
    else {
      (*pcVar3)(local_res18,&local_38);
    }
    pcVar3 = *(code **)(puVar2 + 0x28);
    if ((pcVar3 != (code *)0x0) && (iVar4 = (*pcVar3)(param_1[2],local_res18), iVar4 != 0)) {
      return iVar4;
    }
    iVar4 = FUN_143c31910(param_1,&local_38,param_4,param_5 & 0xfffffffb | 0x801);
  }
  return iVar4;
}



// FUNCTION 143c31e80 FUN_143c31e80 body=518 status=ok
// SIG undefined FUN_143c31e80(void)

void FUN_143c31e80(uint *param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (*param_1 != 1) {
    uVar14 = 1;
    uVar13 = 1;
    if (1 < *param_1) {
      do {
        iVar12 = (int)uVar13;
        if (iVar12 != 0) {
          piVar3 = param_2 + uVar13 * 3;
          do {
            uVar9 = (int)uVar13 - 1;
            uVar13 = (ulonglong)uVar9;
            piVar1 = param_2 + uVar13 * 3;
            if (param_2[uVar13 * 3] <= *piVar3) break;
            uVar2 = *(undefined8 *)piVar3;
            iVar7 = piVar3[2];
            iVar11 = piVar1[2];
            *(undefined8 *)piVar3 = *(undefined8 *)piVar1;
            piVar3[2] = iVar11;
            piVar3 = piVar3 + -3;
            *(undefined8 *)piVar1 = uVar2;
            piVar1[2] = iVar7;
          } while (uVar9 != 0);
        }
        uVar9 = iVar12 + 1;
        uVar13 = (ulonglong)uVar9;
      } while (uVar9 < *param_1);
    }
    uVar9 = *param_1;
    uVar8 = 0;
    iVar12 = *param_2;
    uVar5 = 1;
    uVar13 = 1;
    if (1 < uVar9) {
      uVar6 = 2;
      do {
        uVar10 = (uint)uVar13;
        if ((param_3 < param_2[uVar13 * 3] - iVar12) || (uVar10 == uVar9 - 1)) {
          iVar7 = 0;
          if ((param_2[uVar13 * 3] - iVar12 <= param_3) && (uVar10 == uVar9 - 1)) {
            uVar10 = uVar10 + 1;
            uVar6 = uVar6 + 1;
          }
          iVar4 = 0;
          iVar11 = 0;
          uVar9 = uVar8;
          if (uVar8 < uVar10) {
            if (1 < uVar10 - uVar8) {
              piVar3 = param_2 + (ulonglong)uVar8 * 3;
              uVar9 = ((uVar10 - uVar8) - 2 >> 1) + 1;
              uVar13 = (ulonglong)uVar9;
              uVar9 = uVar8 + uVar9 * 2;
              iVar11 = 0;
              do {
                iVar4 = iVar4 + *piVar3;
                iVar11 = iVar11 + piVar3[3];
                *piVar3 = 0;
                piVar3[3] = 0;
                piVar3 = piVar3 + 6;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar13 = (ulonglong)uVar9;
            if (uVar9 < uVar10) {
              uVar9 = uVar9 + 1;
              iVar7 = param_2[uVar13 * 3];
              param_2[uVar13 * 3] = 0;
            }
            iVar7 = iVar7 + iVar11 + iVar4;
          }
          param_2[(ulonglong)uVar8 * 3] = iVar7 / (int)uVar9;
          uVar9 = *param_1;
          if (uVar10 < uVar9 - 1) {
            iVar12 = param_2[(ulonglong)uVar6 * 3];
            uVar8 = uVar6;
          }
        }
        uVar13 = (ulonglong)(uVar10 + 1);
        uVar6 = uVar6 + 1;
      } while (uVar10 + 1 < uVar9);
    }
    uVar13 = uVar14;
    if (1 < *param_1) {
      do {
        uVar14 = uVar13;
        if (param_2[(ulonglong)uVar5 * 3] != 0) {
          uVar14 = (ulonglong)((int)uVar13 + 1);
          *(undefined8 *)(param_2 + uVar13 * 3) = *(undefined8 *)(param_2 + (ulonglong)uVar5 * 3);
          param_2[uVar13 * 3 + 2] = (param_2 + (ulonglong)uVar5 * 3)[2];
        }
        uVar5 = uVar5 + 1;
        uVar13 = uVar14;
      } while (uVar5 < *param_1);
    }
    *param_1 = (uint)uVar14;
  }
  return;
}



// FUNCTION 143c32090 FUN_143c32090 body=811 status=ok
// SIG undefined FUN_143c32090(void)

void FUN_143c32090(uint *param_1,longlong param_2,int param_3,uint *param_4,uint *param_5)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  
  if (param_3 == 1) {
    uVar14 = *(uint *)(param_2 + 0x10);
    uVar11 = *(uint *)(param_2 + 0x14);
  }
  else {
    uVar14 = *(uint *)(param_2 + 8);
    uVar11 = *(uint *)(param_2 + 0xc);
  }
  param_1[0xb] = uVar14;
  param_1[0xc] = uVar11;
  param_1[0xd] = 0x80000000;
  param_1[0xe] = 0;
  uVar1 = *(undefined8 *)((longlong)param_3 * 0x928 + 0x40 + param_2);
  iVar7 = *(int *)((longlong)param_3 * 0x928 + 0x38 + param_2);
  lVar13 = *(longlong *)(param_2 + 0x20);
  iVar18 = *(int *)(param_2 + 0x1c);
  *param_4 = uVar14;
  *param_5 = uVar11;
  if ((0 < iVar7) && (iVar17 = (int)*(short *)(lVar13 + 0xc), 1 < (longlong)iVar18)) {
    psVar10 = (short *)(lVar13 + 0x3c);
    lVar13 = (longlong)iVar18 + -1;
    iVar18 = iVar17;
    do {
      iVar2 = (int)*psVar10;
      psVar10 = psVar10 + 0x18;
      if (iVar2 < iVar18) {
        iVar18 = iVar2;
      }
      if (iVar17 < iVar2) {
        iVar17 = iVar2;
      }
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if (iVar18 < iVar17) {
      iVar2 = FUN_143c22100(iVar18,uVar14);
      *param_1 = iVar2 + uVar11;
      iVar2 = FUN_143c22100(iVar17,uVar14);
      uVar4 = *param_1;
      uVar16 = uVar4 & 0xffffffe0;
      param_1[4] = uVar16;
      uVar11 = iVar2 + uVar11;
      param_1[1] = uVar11;
      param_1[2] = uVar4 & 0xffffffc0;
      uVar8 = uVar11 & 0xffffffe0;
      param_1[3] = uVar11 + 0x3f & 0xffffffc0;
      uVar3 = uVar16 + 0x20;
      if ((int)uVar11 < (int)(uVar16 + 0x20)) {
        uVar3 = uVar11;
      }
      param_1[7] = uVar8 + 0x20;
      param_1[5] = uVar3;
      uVar3 = uVar8;
      if ((int)uVar8 < (int)uVar4) {
        uVar3 = uVar4;
      }
      uVar15 = uVar11 - uVar4;
      param_1[6] = uVar3;
      param_1[8] = uVar15;
      if ((int)uVar15 < 0x41) {
        param_1[5] = uVar4;
        param_1[6] = uVar11;
      }
      uVar16 = (uVar8 + 0x20) - uVar16;
      uVar11 = param_1[6] - param_1[5];
      iVar2 = 0x10;
      param_1[9] = uVar11;
      param_1[10] = uVar16;
      if (((int)uVar15 < 0x81) && (iVar2 = 8, (int)uVar15 < 0x61)) {
        iVar2 = 4;
      }
      if ((int)uVar11 < (int)(uVar15 - iVar2)) {
        uVar11 = uVar15 - iVar2;
      }
      if ((int)(uVar15 + iVar2) < (int)uVar16) {
        uVar16 = uVar15 + iVar2;
      }
      uVar4 = (int)(uVar15 * 3 + ((int)(uVar15 * 3) >> 0x1f & 3U)) >> 2;
      if ((int)uVar11 < (int)uVar4) {
        uVar11 = uVar4;
      }
      param_1[9] = uVar11;
      uVar4 = (int)(uVar15 * 5 + ((int)(uVar15 * 5) >> 0x1f & 3U)) >> 2;
      if ((int)uVar4 < (int)uVar16) {
        uVar16 = uVar4;
      }
      param_1[10] = uVar16;
      if ((int)uVar11 <= (int)uVar16) {
        do {
          uVar4 = param_1[8];
          uVar16 = *param_1;
          uVar3 = param_1[1];
          uVar8 = uVar16 + (uVar4 - uVar11);
          uVar15 = uVar3;
          if ((int)uVar11 < (int)uVar4) {
            uVar12 = param_1[5];
            if ((int)uVar12 < (int)uVar8) goto LAB_143c322be;
          }
          else {
            uVar12 = param_1[4];
            if ((int)uVar8 < (int)uVar12) {
LAB_143c322be:
              iVar2 = uVar12 - uVar8;
              uVar8 = uVar12;
              uVar15 = uVar3 + iVar2;
            }
          }
          if ((int)uVar8 < (int)uVar16) {
            iVar2 = uVar16 - uVar8;
          }
          else {
            iVar2 = uVar8 - uVar16;
          }
          if ((int)uVar15 < (int)uVar3) {
            iVar9 = uVar3 - uVar15;
          }
          else {
            iVar9 = uVar15 - uVar3;
          }
          iVar5 = FUN_143c20070(uVar11 - uVar4,iVar17 - iVar18);
          iVar6 = FUN_143c22100(iVar18,uVar14 + iVar5);
          FUN_143c323c0(param_1,uVar14 + iVar5,uVar8 - iVar6,uVar8,uVar15,(iVar2 + iVar9) * 10,uVar1
                        ,iVar7);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 <= (int)param_1[10]);
      }
      uVar11 = param_1[0xb];
      uVar4 = param_1[0xc];
      iVar2 = uVar11 - uVar14;
      iVar7 = FUN_143c22100(iVar18,iVar2);
      *(uint *)(param_2 + 0x1298) = iVar7 + uVar4;
      iVar7 = FUN_143c22100(iVar17,iVar2);
      *(uint *)(param_2 + 0x129c) = iVar7 + uVar4;
      *param_4 = uVar11;
      *param_5 = uVar4;
    }
  }
  return;
}



// FUNCTION 143c323c0 FUN_143c323c0 body=547 status=ok
// SIG undefined FUN_143c323c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c323c0(longlong param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                  int param_6,longlong param_7,int param_8)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  int iVar12;
  short *psVar13;
  longlong lVar14;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  int local_174;
  int local_170;
  longlong local_160;
  int local_158 [68];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar9 = 4;
  piVar6 = local_158;
  do {
    piVar6[0] = 0;
    piVar6[1] = 0;
    piVar6[2] = 0;
    piVar6[3] = 0;
    piVar6[4] = 0;
    piVar6[5] = 0;
    piVar1 = piVar6 + 0x10;
    piVar6[6] = 0;
    piVar6[7] = 0;
    piVar6[8] = 0;
    piVar6[9] = 0;
    piVar6[10] = 0;
    piVar6[0xb] = 0;
    piVar6[0xc] = 0;
    piVar6[0xd] = 0;
    piVar6[0xe] = 0;
    piVar6[0xf] = 0;
    lVar9 = lVar9 + -1;
    piVar6 = piVar1;
  } while (lVar9 != 0);
  local_170 = *(int *)(param_1 + 0x10);
  iVar12 = *(int *)(param_1 + 8);
  local_174 = param_4 - iVar12;
  iVar8 = *(int *)(param_1 + 0x18);
  *piVar1 = 0;
  param_5 = param_5 - param_4;
  if (param_5 + local_170 < iVar8) {
    local_170 = iVar8 - param_5;
  }
  iVar8 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x1c) < param_5 + iVar8) {
    iVar8 = *(int *)(param_1 + 0x1c) - param_5;
  }
  local_170 = local_170 - iVar12;
  iVar8 = iVar8 - iVar12;
  if (((-1 < local_170) && (local_170 <= iVar8)) && (iVar8 < 0x41)) {
    lVar14 = (longlong)param_8;
    lVar9 = (longlong)iVar8;
    if (0 < lVar14) {
      iVar12 = local_170 - local_174;
      lVar7 = (longlong)local_170;
      psVar13 = (short *)(param_7 + 4);
      local_178 = param_2;
      local_160 = param_1;
      uVar11 = param_2;
      do {
        sVar2 = psVar13[1];
        sVar3 = *psVar13;
        iVar8 = FUN_143c22100((int)psVar13[-1],uVar11);
        uVar5 = iVar8 + iVar12 + param_3;
        for (lVar10 = lVar7; lVar10 <= lVar9; lVar10 = lVar10 + 1) {
          local_158[lVar10] =
               local_158[lVar10] +
               *(int *)(&DAT_145d22540 + (ulonglong)(uVar5 & 0x3f) * 4) * ((int)sVar2 - (int)sVar3);
          uVar5 = uVar5 + 1;
          uVar11 = local_178;
        }
        psVar13 = psVar13 + 0x28;
        lVar14 = lVar14 + -1;
        param_1 = local_160;
        param_2 = local_178;
      } while (lVar14 != 0);
    }
    lVar14 = (longlong)local_170;
    if (lVar14 <= lVar9) {
      iVar12 = *(int *)(param_1 + 0x34);
      iVar8 = (local_170 - local_174) + param_6;
      do {
        iVar4 = local_158[lVar14];
        if ((iVar12 < iVar4) || ((iVar4 == iVar12 && (iVar8 < *(int *)(param_1 + 0x38))))) {
          *(int *)(param_1 + 0x38) = iVar8;
          *(undefined4 *)(param_1 + 0x2c) = param_2;
          *(int *)(param_1 + 0x30) = (param_3 - param_6) + iVar8;
          iVar12 = iVar4;
        }
        iVar8 = iVar8 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 <= lVar9);
      *(int *)(param_1 + 0x34) = iVar12;
    }
  }
  return;
}



// FUNCTION 143c325f0 FUN_143c325f0 body=616 status=ok
// SIG undefined FUN_143c325f0(void)

int FUN_143c325f0(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_res10 [2];
  
  lVar4 = FT_Get_Module_Interface(*(undefined8 *)(*(longlong *)(param_2 + 0x90) + 8),&DAT_145d22d6c)
  ;
  if (lVar4 == 0) {
    return 0xb;
  }
  iVar3 = FUN_143c251d0(param_1,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = (**(code **)(lVar4 + 8))(param_1,param_2,param_3,param_4,param_5);
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = *(int *)(param_2 + 0xf0);
  if (((iVar3 != 0x10000) && (iVar3 != 0x20000)) && (iVar3 != 0x74727565)) {
    return 2;
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
  if (param_3 < 0) {
    return 0;
  }
  iVar3 = (**(code **)(lVar4 + 0x10))(uVar1,param_2,param_3,param_4,param_5);
  if (iVar3 != 0) {
    return iVar3;
  }
  cVar2 = FUN_143c3be50(param_2);
  if (cVar2 != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
  }
  iVar3 = FUN_143c3c5b0(param_2,uVar1);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = 0;
  if ((*(byte *)(param_2 + 8) & 1) == 0) goto LAB_143c327f9;
  if (((*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x48) != 0) ||
      (iVar3 = FUN_143c3c790(param_2,uVar1), iVar3 == 0)) &&
     (iVar3 = FUN_143c3c480(param_2,uVar1), iVar3 == 0)) {
    iVar3 = (**(code **)(param_2 + 0x290))(param_2,0x6670676d,uVar1,local_res10);
    if (iVar3 == 0) {
      *(undefined4 *)(param_2 + 0x348) = local_res10[0];
      iVar3 = FT_Stream_ExtractFrame(uVar1,local_res10[0],param_2 + 0x350);
      if (iVar3 != 0) goto LAB_143c327cb;
    }
    else {
      *(undefined8 *)(param_2 + 0x350) = 0;
      *(undefined4 *)(param_2 + 0x348) = 0;
    }
    iVar3 = (**(code **)(param_2 + 0x290))(param_2,0x70726570,uVar1,local_res10);
    if (iVar3 == 0) {
      *(undefined4 *)(param_2 + 0x358) = local_res10[0];
      iVar3 = FT_Stream_ExtractFrame(uVar1,local_res10[0],param_2 + 0x360);
    }
    else {
      *(undefined8 *)(param_2 + 0x360) = 0;
      iVar3 = 0;
      *(undefined4 *)(param_2 + 0x358) = 0;
    }
  }
LAB_143c327cb:
  if (((*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x48) == 0) && (*(int *)(param_2 + 0x28) != 0)
      ) && ((*(longlong *)(param_2 + 0x3c8) != 0 && (cVar2 = FUN_143c3bc70(param_2), cVar2 != '\0'))
           )) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffe;
  }
LAB_143c327f9:
  *(code **)(param_2 + 0x298) = FUN_143c371e0;
  *(undefined1 **)(param_2 + 0x2a8) = &LAB_143c37ea0;
  *(code **)(param_2 + 0x2b0) = FUN_143c37f40;
  *(code **)(param_2 + 0x2b8) = FUN_143c37590;
  *(undefined1 **)(param_2 + 0x2a0) = &LAB_143c372d0;
  return iVar3;
}



// FUNCTION 143c32860 FUN_143c32860 body=285 status=ok
// SIG undefined FUN_143c32860(void)

void FUN_143c32860(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x2c0);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    if (*(code **)(param_1 + 0x388) != (code *)0x0) {
      (**(code **)(param_1 + 0x388))(*(undefined8 *)(param_1 + 0x380));
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(param_1);
    }
    FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x3c8);
    lVar1 = *(longlong *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x3c4) = 0;
    ft_mem_free(*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(param_1 + 1000));
    *(undefined8 *)(param_1 + 1000) = 0;
    FT_Stream_ReleaseFrame(lVar1,param_1 + 0x3d0);
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x370));
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined4 *)(param_1 + 0x368) = 0;
    FT_Stream_ReleaseFrame(uVar2,param_1 + 0x350);
    FT_Stream_ReleaseFrame(uVar2,param_1 + 0x360);
    *(undefined4 *)(param_1 + 0x348) = 0;
    *(undefined4 *)(param_1 + 0x358) = 0;
    FUN_143c3c310(uVar3,*(undefined8 *)(param_1 + 0x3a0));
    *(undefined8 *)(param_1 + 0x3a0) = 0;
  }
  return;
}



// FUNCTION 143c329a0 FUN_143c329a0 body=27 status=ok
// SIG undefined FUN_143c329a0(void)

void FUN_143c329a0(longlong param_1)

{
  FUN_143c3d5b0();
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 143c329e0 FUN_143c329e0 body=332 status=ok
// SIG undefined FUN_143c329e0(void)

uint FUN_143c329e0(longlong param_1,uint param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x3c4);
  uVar5 = 0;
  uVar4 = 0;
  if (param_2 < uVar1) {
    if (*(short *)(param_1 + 0x132) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x3c8);
      param_2 = param_2 * 2;
      uVar3 = lVar2 + 4 + (ulonglong)param_2;
      uVar5 = (uint)CONCAT11(*(undefined1 *)((ulonglong)param_2 + lVar2),
                             *(undefined1 *)((ulonglong)param_2 + 1 + lVar2));
      uVar4 = uVar5;
      if (uVar3 <= (ulonglong)(uVar1 * 2) + lVar2) {
        uVar4 = (uint)CONCAT11(*(undefined1 *)(uVar3 - 2),*(undefined1 *)(uVar3 - 1));
      }
      uVar5 = uVar5 * 2;
      uVar4 = uVar4 * 2;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x3c8);
      param_2 = param_2 * 4;
      uVar3 = (ulonglong)param_2;
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)param_2 + lVar2),
                                         *(undefined1 *)((ulonglong)param_2 + 1 + lVar2)),
                                *(undefined1 *)(uVar3 + 2 + lVar2)),
                       *(undefined1 *)(uVar3 + 3 + lVar2));
      uVar3 = uVar3 + 8 + lVar2;
      uVar4 = uVar5;
      if (uVar3 <= (ulonglong)(uVar1 * 4) + lVar2) {
        uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar3 - 4),*(undefined1 *)(uVar3 - 3)),
                                  *(undefined1 *)(uVar3 - 2)),*(undefined1 *)(uVar3 - 1));
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x398);
  if (uVar1 < uVar5) {
    *param_3 = 0;
    return 0;
  }
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  if (uVar5 <= uVar4) {
    *param_3 = uVar4 - uVar5;
    return uVar5;
  }
  *param_3 = uVar1 - uVar5;
  return uVar5;
}



// FUNCTION 143c32b30 FUN_143c32b30 body=449 status=ok
// SIG undefined FUN_143c32b30(void)

ulonglong FUN_143c32b30(longlong param_1,uint param_2,int *param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint local_res8 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  local_res8[0] = 0;
  *(undefined1 *)(param_1 + 0x39c) = 0;
  if (*(longlong *)(param_1 + 0x3a0) == 0) {
    uVar5 = FUN_143c32f40();
    local_res8[0] = (uint)uVar5;
    if (local_res8[0] != 0) {
      return uVar5;
    }
  }
  puVar2 = *(uint **)(param_1 + 0x3a0);
  puVar3 = *(uint **)(puVar2 + 4);
  if (*puVar3 < param_2) {
    param_2 = *puVar3;
  }
  uVar8 = 0;
  piVar7 = param_3;
  if (param_2 != 0) {
    do {
      if (0x20000 < *piVar7 + 0x10000U) {
        return 6;
      }
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 < param_2);
  }
  if (*(longlong *)(puVar2 + 0x12) == 0) {
    uVar5 = FUN_143c3aca0(param_1);
    local_res8[0] = (uint)uVar5;
    if (local_res8[0] != 0) {
      return uVar5;
    }
  }
  lVar4 = *(longlong *)(puVar2 + 2);
  if (lVar4 == 0) {
    uVar6 = FUN_143c27410(uVar1,4,0,*puVar3,0,local_res8);
    *(undefined8 *)(puVar2 + 2) = uVar6;
    if (local_res8[0] != 0) {
      return (ulonglong)local_res8[0];
    }
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
    uVar5 = 0;
    if (param_2 != 0) {
      do {
        if (*(int *)(uVar5 * 4 + lVar4) != param_3[uVar5]) {
          iVar9 = 2;
          break;
        }
        uVar8 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar8;
      } while (uVar8 < param_2);
    }
    uVar8 = (uint)uVar5;
    while (uVar8 < *puVar3) {
      if (*(int *)(lVar4 + uVar5 * 4) != 0) {
        iVar9 = 2;
        break;
      }
      uVar8 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar8;
    }
  }
  *puVar2 = *puVar3;
  _guard_xfg_dispatch_icall_nop(*(void **)(puVar2 + 2),param_3,(ulonglong)param_2 << 2);
  *(undefined1 *)(param_1 + 0x39c) = 1;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    if (iVar9 == 1) {
      uVar5 = FUN_143c3c8f0(param_1,*(undefined8 *)(param_1 + 0xa0));
      return uVar5;
    }
    if (iVar9 == 2) {
      ft_mem_free(uVar1);
      *(undefined8 *)(param_1 + 0x370) = 0;
      uVar5 = FUN_143c3c480(param_1,*(undefined8 *)(param_1 + 0xa0));
      return uVar5;
    }
  }
  return (ulonglong)local_res8[0];
}



// FUNCTION 143c32d00 FUN_143c32d00 body=565 status=ok
// SIG undefined FUN_143c32d00(void)

int FUN_143c32d00(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar11;
  ushort *puVar12;
  int *piVar13;
  int *piVar14;
  int local_res20 [2];
  int *piVar10;
  
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  piVar13 = (int *)0x0;
  local_res20[0] = 0;
  if ((*(longlong *)(param_1 + 0x3a0) != 0) ||
     (local_res20[0] = FUN_143c32f40(param_1,0), piVar8 = piVar13, local_res20[0] == 0)) {
    lVar5 = *(longlong *)(param_1 + 0x3a0);
    puVar6 = *(uint **)(lVar5 + 0x10);
    uVar9 = *puVar6;
    if (uVar9 < param_2) {
      param_2 = uVar9;
    }
    piVar8 = (int *)FUN_143c27410(uVar4,4,0,uVar9,0,local_res20);
    if (local_res20[0] == 0) {
      piVar10 = piVar13;
      if (param_2 != 0) {
        piVar14 = (int *)(*(longlong *)(puVar6 + 4) + 0xc);
        piVar11 = piVar8;
        do {
          iVar7 = *(int *)((param_3 - (longlong)piVar8) + (longlong)piVar11);
          iVar2 = piVar14[1];
          if ((iVar2 < iVar7) || (iVar7 < piVar14[-1])) {
            local_res20[0] = 6;
            goto LAB_143c32f15;
          }
          iVar3 = *piVar14;
          if (iVar7 < iVar3) {
            iVar7 = FUN_143c20070(iVar7 - iVar3,piVar14[-1] - iVar3);
            iVar7 = -iVar7;
LAB_143c32e0c:
            *piVar11 = iVar7;
          }
          else {
            if (iVar2 != iVar3) {
              iVar7 = FUN_143c20070(iVar7 - iVar3,iVar2 - iVar3);
              goto LAB_143c32e0c;
            }
            *piVar11 = 0;
          }
          uVar9 = (int)piVar10 + 1;
          piVar10 = (int *)(ulonglong)uVar9;
          piVar11 = piVar11 + 1;
          piVar14 = piVar14 + 8;
        } while (uVar9 < param_2);
      }
      if ((uint)piVar10 < *puVar6) {
        do {
          uVar9 = (int)piVar10 + 1;
          piVar8[(longlong)piVar10] = 0;
          piVar10 = (int *)(ulonglong)uVar9;
        } while (uVar9 < *puVar6);
      }
      if (*(char *)(lVar5 + 0x20) == '\0') {
        FUN_143c3aab0(param_1);
      }
      puVar12 = *(ushort **)(lVar5 + 0x28);
      if ((puVar12 != (ushort *)0x0) && (*puVar6 != 0)) {
        do {
          uVar9 = 1;
          if (1 < *puVar12) {
            lVar5 = *(longlong *)(puVar12 + 4);
            do {
              if (piVar8[(longlong)piVar13] < *(int *)(lVar5 + (ulonglong)uVar9 * 8)) {
                lVar1 = (ulonglong)(uVar9 - 1) * 8;
                iVar7 = FUN_143c21f00(piVar8[(longlong)piVar13] -
                                      *(int *)(lVar5 + (ulonglong)(uVar9 - 1) * 8),
                                      *(int *)(lVar5 + 4 + (ulonglong)uVar9 * 8) -
                                      *(int *)(lVar5 + 4 + lVar1),
                                      *(int *)(lVar5 + (ulonglong)uVar9 * 8) -
                                      *(int *)(lVar5 + lVar1));
                piVar8[(longlong)piVar13] = iVar7 + *(int *)(lVar1 + 4 + *(longlong *)(puVar12 + 4))
                ;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < *puVar12);
          }
          uVar9 = (int)piVar13 + 1;
          piVar13 = (int *)(ulonglong)uVar9;
          puVar12 = puVar12 + 8;
        } while (uVar9 < *puVar6);
      }
      local_res20[0] = FUN_143c32b30(param_1,*puVar6,piVar8);
    }
  }
LAB_143c32f15:
  ft_mem_free(uVar4,piVar8);
  return local_res20[0];
}



// FUNCTION 143c32f40 FUN_143c32f40 body=1255 status=ok
// SIG undefined FUN_143c32f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c32f40(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_84;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  ushort local_6c;
  ushort local_68;
  short local_66;
  ushort local_64;
  ushort local_62;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ushort local_4e;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar17 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  local_88 = 0;
  uVar7 = uVar17;
  local_80 = uVar1;
  local_78 = param_2;
  if (*(longlong *)(param_1 + 0x3a0) == 0) {
    uVar7 = (**(code **)(param_1 + 0x290))(param_1,0x67766172,uVar2,&local_84);
    local_88 = (uint)uVar7;
    if (local_88 != 0) {
      return uVar7;
    }
    uVar7 = (**(code **)(param_1 + 0x290))(param_1,0x66766172,uVar2,&local_84);
    local_88 = (uint)uVar7;
    if (local_88 != 0) {
      return uVar7;
    }
    iVar5 = IStreamingManager::GetNumWantingResourcesID(uVar2);
    uVar7 = FUN_143c24c00(uVar2,&DAT_145d229e8,&local_70);
    local_88 = (uint)uVar7;
    if (local_88 != 0) {
      return uVar7;
    }
    if ((((local_70 != 0x10000) || (local_66 != 0x14)) || (0x3ffe < local_68)) ||
       ((((uint)local_62 != (uint)local_68 * 4 + 4 || (0x7eff < local_64)) ||
        (local_84 <
         (uint)local_64 * (uint)local_62 + ((uint)local_68 + (uint)local_68 * 4) * 4 +
         (uint)local_6c)))) {
      return 8;
    }
    lVar8 = FUN_143c271e0(uVar1,0x50,&local_88);
    *(longlong *)(param_1 + 0x3a0) = lVar8;
    if (local_88 != 0) {
      return (ulonglong)local_88;
    }
    *(ulonglong *)(lVar8 + 0x18) =
         (longlong)(int)((uint)local_68 * 5) +
         ((longlong)(int)((uint)local_64 * (uint)local_68) +
         ((ulonglong)local_64 + ((ulonglong)local_68 + 1) * 2) * 4) * 4;
    puVar9 = (uint *)FUN_143c271e0(uVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x3a0) + 0x18),
                                   &local_88);
    if (local_88 != 0) {
      return (ulonglong)local_88;
    }
    *(uint **)(*(longlong *)(param_1 + 0x3a0) + 0x10) = puVar9;
    *puVar9 = (uint)local_68;
    puVar9[1] = 0xffffffff;
    puVar9[2] = (uint)local_64;
    puVar11 = puVar9 + 8;
    *(uint **)(puVar9 + 4) = puVar11;
    *(uint **)(puVar9 + 6) = puVar11 + (ulonglong)local_68 * 8;
    puVar11 = puVar11 + (ulonglong)local_68 * 8 + (ulonglong)local_64 * 4;
    uVar7 = uVar17;
    uVar14 = uVar17;
    if (local_64 != 0) {
      do {
        uVar16 = (int)uVar14 + 1;
        *(uint **)(uVar7 + *(longlong *)(puVar9 + 6)) = puVar11;
        puVar11 = puVar11 + local_68;
        uVar7 = uVar7 + 0x10;
        uVar14 = (ulonglong)uVar16;
      } while ((int)uVar16 < (int)(uint)local_64);
    }
    uVar7 = uVar17;
    uVar14 = uVar17;
    if (local_68 != 0) {
      do {
        uVar16 = (int)uVar14 + 1;
        *(uint **)(uVar7 + *(longlong *)(puVar9 + 4)) = puVar11;
        puVar11 = (uint *)((longlong)puVar11 + 5);
        uVar7 = uVar7 + 0x20;
        uVar14 = (ulonglong)uVar16;
      } while ((int)uVar16 < (int)(uint)local_68);
    }
    uVar7 = FUN_143c251d0(uVar2,(uint)local_6c + iVar5);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    plVar13 = *(longlong **)(puVar9 + 4);
    uVar14 = uVar17;
    if (local_68 != 0) {
      do {
        local_88 = 0;
        uVar7 = FUN_143c24c00(uVar2,&DAT_145d22a10,&local_60);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        uVar16 = (int)uVar14 + 1;
        *(undefined4 *)(plVar13 + 1) = local_5c;
        *(undefined4 *)((longlong)plVar13 + 0xc) = local_58;
        *(undefined4 *)((longlong)plVar13 + 0x14) = local_60;
        *(undefined4 *)(plVar13 + 2) = local_54;
        *(uint *)(plVar13 + 3) = (uint)local_4e;
        *(char *)*plVar13 = (char)((uint)local_60 >> 0x18);
        *(undefined1 *)(*plVar13 + 1) = *(undefined1 *)((longlong)plVar13 + 0x16);
        *(undefined1 *)(*plVar13 + 2) = *(undefined1 *)((longlong)plVar13 + 0x15);
        *(undefined1 *)(*plVar13 + 3) = *(undefined1 *)((longlong)plVar13 + 0x14);
        lVar8 = *plVar13;
        plVar13 = plVar13 + 4;
        *(undefined1 *)(lVar8 + 4) = 0;
        uVar14 = (ulonglong)uVar16;
      } while ((int)uVar16 < (int)(uint)local_68);
      uVar7 = uVar7 & 0xffffffff;
    }
    local_88 = 0;
    plVar13 = *(longlong **)(puVar9 + 6);
    uVar14 = uVar17;
    if (local_64 != 0) {
      do {
        uVar7 = FUN_143c24650(uVar2,(uint)local_68 * 4 + 4);
        local_88 = (uint)uVar7;
        if (local_88 != 0) {
          return uVar7;
        }
        uVar4 = FUN_143c24910(uVar2);
        *(uint *)(plVar13 + 1) = (uint)uVar4;
        FUN_143c24910(uVar2);
        uVar7 = uVar17;
        uVar15 = uVar17;
        if (local_68 != 0) {
          do {
            uVar6 = FUN_143c24870(uVar2);
            uVar16 = (int)uVar15 + 1;
            *(undefined4 *)(uVar7 + *plVar13) = uVar6;
            uVar7 = uVar7 + 4;
            uVar15 = (ulonglong)uVar16;
          } while ((int)uVar16 < (int)(uint)local_68);
        }
        FT_Stream_ExitFrame(uVar2);
        uVar16 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar16;
        plVar13 = plVar13 + 2;
      } while ((int)uVar16 < (int)(uint)local_64);
      uVar7 = (ulonglong)local_88;
    }
  }
  puVar3 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    puVar9 = (uint *)FUN_143c271e0(local_80,*(undefined4 *)(*(longlong *)(param_1 + 0x3a0) + 0x18),
                                   &local_88);
    uVar7 = (ulonglong)local_88;
    if (local_88 == 0) {
      _guard_xfg_dispatch_icall_nop
                (puVar9,*(void **)(*(longlong *)(param_1 + 0x3a0) + 0x10),
                 *(size_t *)(*(longlong *)(param_1 + 0x3a0) + 0x18));
      puVar11 = puVar9 + 8;
      *(uint **)(puVar9 + 4) = puVar11;
      *(uint **)(puVar9 + 6) = puVar11 + (ulonglong)*puVar9 * 8;
      puVar11 = puVar11 + (ulonglong)*puVar9 * 8 + (ulonglong)puVar9[2] * 4;
      uVar7 = uVar17;
      if (puVar9[2] != 0) {
        do {
          uVar16 = (int)uVar7 + 1;
          *(uint **)(*(longlong *)(puVar9 + 6) + uVar7 * 0x10) = puVar11;
          puVar11 = puVar11 + *puVar9;
          uVar7 = (ulonglong)uVar16;
        } while (uVar16 < puVar9[2]);
      }
      puVar12 = *(undefined8 **)(puVar9 + 4);
      if (*puVar9 != 0) {
        do {
          iVar5 = *(int *)((longlong)puVar12 + 0x14);
          *puVar12 = puVar11;
          if (iVar5 == 0x77676874) {
            *puVar12 = "Weight";
          }
          else if (iVar5 == 0x77647468) {
            *puVar12 = "Width";
          }
          else if (iVar5 == 0x6f70737a) {
            *puVar12 = "OpticalSize";
          }
          else {
            puVar10 = (uint *)"Slant";
            if (iVar5 != 0x736c6e74) {
              puVar10 = puVar11;
            }
            *puVar12 = puVar10;
          }
          puVar11 = (uint *)((longlong)puVar11 + 5);
          puVar12 = puVar12 + 4;
          uVar16 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar16;
        } while (uVar16 < *puVar9);
      }
      uVar7 = (ulonglong)local_88;
      *puVar3 = puVar9;
    }
  }
  return uVar7;
}



// FUNCTION 143c33430 FUN_143c33430 body=119 status=ok
// SIG undefined FUN_143c33430(void)

undefined8 FUN_143c33430(longlong param_1,char *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"interpreter-version");
  if (iVar1 != 0) {
    return 0xc;
  }
  if (*param_3 != 0x23) {
    return 7;
  }
  *(undefined4 *)(param_1 + 0x78) = 0x23;
  return 0;
}



// FUNCTION 143c334b0 FUN_143c334b0 body=72 status=ok
// SIG undefined FUN_143c334b0(void)

undefined8 FUN_143c334b0(longlong param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"interpreter-version");
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x78);
    return 0;
  }
  return 0xc;
}



// FUNCTION 143c33500 cff_get_kerning body=43 status=ok
// SIG undefined cff_get_kerning(void)

undefined8
cff_get_kerning(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  *param_4 = 0;
  if (lVar1 != 0) {
    uVar2 = (**(code **)(lVar1 + 0xa8))();
    *(undefined4 *)param_4 = uVar2;
  }
  return 0;
}



// FUNCTION 143c33530 FUN_143c33530 body=323 status=ok
// SIG undefined FUN_143c33530(void)

undefined8 FUN_143c33530(longlong param_1,int param_2,uint param_3,ulonglong param_4,uint *param_5)

{
  short sVar1;
  uint uVar2;
  short local_res8 [4];
  ushort local_res20 [4];
  
  uVar2 = 0;
  if ((param_4 & 0x10) == 0) {
    if (param_3 != 0) {
      do {
        (**(code **)(*(longlong *)(param_1 + 0x2c0) + 0xe0))
                  (param_1,0,uVar2 + param_2,local_res8,local_res20);
        uVar2 = uVar2 + 1;
        *param_5 = (uint)local_res20[0];
        param_5 = param_5 + 1;
      } while (uVar2 < param_3);
    }
  }
  else if (param_3 != 0) {
    do {
      if (*(char *)(param_1 + 400) == '\0') {
        if (*(short *)(param_1 + 0x1f8) == -1) {
          local_res8[0] = *(short *)(param_1 + 0x13c);
          sVar1 = *(short *)(param_1 + 0x13e);
          if (-1 < (int)local_res8[0] - (int)sVar1) goto LAB_143c335ef;
          local_res20[0] = sVar1 - local_res8[0];
        }
        else {
          local_res8[0] = *(short *)(param_1 + 0x23e);
          sVar1 = *(short *)(param_1 + 0x240);
          if ((int)local_res8[0] - (int)sVar1 < 0) {
            local_res20[0] = sVar1 - local_res8[0];
          }
          else {
LAB_143c335ef:
            local_res20[0] = local_res8[0] - sVar1;
          }
        }
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x2c0) + 0xe0))
                  (param_1,1,uVar2 + param_2,local_res8,local_res20);
      }
      uVar2 = uVar2 + 1;
      *param_5 = (uint)local_res20[0];
      param_5 = param_5 + 1;
      if (param_3 <= uVar2) {
        return 0;
      }
    } while( true );
  }
  return 0;
}



// FUNCTION 143c33680 tt_size_select body=82 status=ok
// SIG undefined tt_size_select(void)

undefined8 tt_size_select(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_2;
  if ((*(byte *)(lVar1 + 8) & 1) != 0) {
    FUN_143c241f0();
    FUN_143c3db30(param_1);
    return 0;
  }
  uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2c0) + 0xd8))(lVar1,param_2,param_1 + 3);
  if ((int)uVar2 != 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143c336e0 FUN_143c336e0 body=223 status=ok
// SIG undefined FUN_143c336e0(void)

int FUN_143c336e0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_res8 [2];
  
  lVar1 = *param_1;
  iVar2 = 0;
  if ((*(byte *)(lVar1 + 8) & 2) != 0) {
    iVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2c0) + 0xd0))(lVar1,param_2,local_res8);
    if (iVar2 == 0) {
      lVar1 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = local_res8[0];
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        FUN_143c241f0();
        FUN_143c3db30(param_1);
        return 0;
      }
      iVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2c0) + 0xd8))(lVar1,local_res8[0],param_1 + 3);
      if (iVar2 == 0) {
        return 0;
      }
      *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
      return iVar2;
    }
    *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  }
  FUN_143c23e60(*param_1,param_2);
  if ((*(byte *)(*param_1 + 8) & 1) != 0) {
    iVar2 = FUN_143c3db30(param_1);
    param_1[3] = param_1[8];
    param_1[4] = param_1[9];
    param_1[5] = param_1[10];
    *(int *)(param_1 + 6) = (int)param_1[0xb];
  }
  return iVar2;
}



// FUNCTION 143c33840 FUN_143c33840 body=109 status=ok
// SIG undefined FUN_143c33840(void)

longlong FUN_143c33840(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = ft_service_list_lookup(&PTR_s_font_format_145d22ac0);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = (longlong *)FT_Get_Module(*(longlong *)(param_1 + 8),&DAT_145d22d6c);
      if ((plVar2 != (longlong *)0x0) && (*(longlong *)(*plVar2 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143c3389c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*(longlong *)(*plVar2 + 0x18) + 0x20))(param_1,param_2);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143c338b0 Compute_Funcs body=356 status=ok
// SIG undefined Compute_Funcs(void)

void Compute_Funcs(longlong param_1)

{
  short sVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  
  sVar1 = *(short *)(param_1 + 0x1ca);
  if (sVar1 == 0x4000) {
    *(int *)(param_1 + 0x318) = (int)*(short *)(param_1 + 0x1c6);
  }
  else if (*(short *)(param_1 + 0x1cc) == 0x4000) {
    *(int *)(param_1 + 0x318) = (int)*(short *)(param_1 + 0x1c8);
  }
  else {
    *(int *)(param_1 + 0x318) =
         (int)*(short *)(param_1 + 0x1c8) * (int)*(short *)(param_1 + 0x1cc) +
         (int)*(short *)(param_1 + 0x1c6) * (int)sVar1 >> 0xe;
  }
  if (*(short *)(param_1 + 0x1c6) == 0x4000) {
    *(undefined1 **)(param_1 + 0x328) = &LAB_143c36ec0;
  }
  else {
    pcVar3 = FUN_143c36e10;
    if (*(short *)(param_1 + 0x1c8) == 0x4000) {
      pcVar3 = FUN_143667d90;
    }
    *(code **)(param_1 + 0x328) = pcVar3;
  }
  if (*(short *)(param_1 + 0x1c2) == 0x4000) {
    *(undefined1 **)(param_1 + 0x330) = &LAB_143c36ec0;
  }
  else {
    pcVar3 = FUN_143c33d50;
    if (*(short *)(param_1 + 0x1c4) == 0x4000) {
      pcVar3 = FUN_143667d90;
    }
    *(code **)(param_1 + 0x330) = pcVar3;
  }
  iVar5 = *(int *)(param_1 + 0x318);
  *(code **)(param_1 + 0x340) = FUN_143c33bb0;
  *(code **)(param_1 + 0x348) = FUN_143c33c50;
  if (iVar5 == 0x4000) {
    if (sVar1 == 0x4000) {
      *(undefined1 **)(param_1 + 0x340) = &LAB_143c33d10;
      puVar4 = &LAB_143c33cf0;
    }
    else {
      if (*(short *)(param_1 + 0x1cc) != 0x4000) goto LAB_143c339ea;
      *(undefined1 **)(param_1 + 0x340) = &LAB_143c33d30;
      puVar4 = &LAB_143c33d00;
    }
    *(undefined1 **)(param_1 + 0x348) = puVar4;
  }
LAB_143c339ea:
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (iVar5 < 0x400) {
    uVar2 = 0x4000;
  }
  *(undefined4 *)(param_1 + 0x318) = uVar2;
  return;
}



// FUNCTION 143c33a20 FUN_143c33a20 body=152 status=ok
// SIG undefined FUN_143c33a20(void)

void FUN_143c33a20(longlong param_1,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    *(undefined1 **)(param_1 + 800) = &LAB_143c37090;
    return;
  case 1:
    *(undefined1 **)(param_1 + 800) = &LAB_143c37060;
    return;
  case 2:
    *(undefined1 **)(param_1 + 800) = &LAB_143c37030;
    return;
  case 3:
    *(undefined1 **)(param_1 + 800) = &LAB_143c36f10;
    return;
  case 4:
    *(undefined1 **)(param_1 + 800) = &LAB_143c370c0;
    return;
  case 5:
    *(undefined1 **)(param_1 + 800) = &LAB_143c36f40;
    return;
  case 6:
    *(undefined1 **)(param_1 + 800) = &LAB_143c36f60;
    return;
  case 7:
    *(undefined1 **)(param_1 + 800) = &LAB_143c36fc0;
  }
  return;
}



// FUNCTION 143c33af0 FUN_143c33af0 body=33 status=ok
// SIG undefined FUN_143c33af0(void)

void FUN_143c33af0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143c33b20();
  FUN_143c22100(*(undefined2 *)(param_1 + 0x19c),uVar1);
  return;
}



// FUNCTION 143c33b20 FUN_143c33b20 body=139 status=ok
// SIG undefined FUN_143c33b20(void)

ulonglong FUN_143c33b20(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x1a0) == 0) {
    if (*(short *)(param_1 + 0x1c8) != 0) {
      if (*(short *)(param_1 + 0x1c6) == 0) {
        *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x198);
        return (ulonglong)*(uint *)(param_1 + 0x198);
      }
      uVar1 = FUN_143c38370(*(undefined4 *)(param_1 + 0x194),(int)*(short *)(param_1 + 0x1c6));
      uVar3 = (ulonglong)uVar1;
      uVar2 = FUN_143c38370(*(undefined4 *)(param_1 + 0x198),(int)*(short *)(param_1 + 0x1c8));
      uVar3 = FUN_143c21590(uVar3 & 0xffffffff,uVar2);
      *(int *)(param_1 + 0x1a0) = (int)uVar3;
      return uVar3;
    }
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x194);
  }
  return (ulonglong)*(uint *)(param_1 + 0x1a0);
}



// FUNCTION 143c33bb0 FUN_143c33bb0 body=159 status=ok
// SIG undefined FUN_143c33bb0(void)

void FUN_143c33bb0(longlong param_1,longlong param_2,ushort param_3,undefined4 param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(short *)(param_1 + 0x1ca) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x18) + (ulonglong)param_3 * 8);
    iVar4 = FUN_143c21f00(param_4,(int)*(short *)(param_1 + 0x1ca),*(undefined4 *)(param_1 + 0x318))
    ;
    *piVar1 = *piVar1 + iVar4;
    pbVar2 = (byte *)(*(longlong *)(param_2 + 0x28) + (ulonglong)param_3);
    *pbVar2 = *pbVar2 | 8;
  }
  if (*(short *)(param_1 + 0x1cc) != 0) {
    lVar3 = *(longlong *)(param_2 + 0x18);
    iVar4 = FUN_143c21f00(param_4,(int)*(short *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x318))
    ;
    piVar1 = (int *)(lVar3 + (ulonglong)param_3 * 8 + 4);
    *piVar1 = *piVar1 + iVar4;
    pbVar2 = (byte *)(*(longlong *)(param_2 + 0x28) + (ulonglong)param_3);
    *pbVar2 = *pbVar2 | 0x10;
  }
  return;
}



// FUNCTION 143c33c50 FUN_143c33c50 body=145 status=ok
// SIG undefined FUN_143c33c50(void)

void FUN_143c33c50(longlong param_1,longlong param_2,ushort param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x1ca) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + (ulonglong)param_3 * 8);
    iVar3 = FUN_143c21f00(param_4,(int)*(short *)(param_1 + 0x1ca),*(undefined4 *)(param_1 + 0x318))
    ;
    *piVar1 = *piVar1 + iVar3;
  }
  if (*(short *)(param_1 + 0x1cc) != 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    iVar3 = FUN_143c21f00(param_4,(int)*(short *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x318))
    ;
    piVar1 = (int *)(lVar2 + (ulonglong)param_3 * 8 + 4);
    *piVar1 = *piVar1 + iVar3;
  }
  return;
}



// FUNCTION 143c33d50 FUN_143c33d50 body=163 status=ok
// SIG undefined FUN_143c33d50(void)

uint FUN_143c33d50(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = (param_2 & 0xffff) * (int)*(short *)(param_1 + 0x1c2);
  iVar4 = ((int)param_2 >> 0x10) * (int)*(short *)(param_1 + 0x1c2);
  uVar6 = iVar4 * 0x10000 + uVar3;
  uVar7 = (param_3 & 0xffff) * (int)*(short *)(param_1 + 0x1c4);
  iVar5 = ((int)param_3 >> 0x10) * (int)*(short *)(param_1 + 0x1c4);
  uVar2 = iVar5 * 0x10000 + uVar7;
  uVar1 = uVar2 + uVar6;
  iVar5 = ((int)uVar7 >> 0x1f) +
          (iVar5 >> 0x10) + (iVar4 >> 0x10) + (uint)(uVar6 < uVar3) + ((int)uVar3 >> 0x1f) +
          (uint)(uVar2 < uVar7) + (uint)(uVar1 < uVar6);
  iVar4 = iVar5 >> 0x1f;
  uVar2 = iVar4 + uVar1;
  return (iVar5 + iVar4 + (uint)(uVar2 < uVar1) + (uint)(uVar2 + 0x2000 < uVar2)) * 0x40000 |
         uVar2 + 0x2000 >> 0xe;
}



// FUNCTION 143c33e00 FUN_143c33e00 body=147 status=ok
// SIG undefined FUN_143c33e00(void)

int FUN_143c33e00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_res8 [2];
  
  param_1[2] = param_2;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x20;
  uVar1 = FUN_143c27410(param_2,0x18,0,0x20,0,local_res8);
  param_1[0x4e] = uVar1;
  if (local_res8[0] != 0) {
    FUN_143c37240(param_1);
    return local_res8[0];
  }
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[5] = 0;
  param_1[0x47] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return 0;
}



// FUNCTION 143c33ea0 FUN_143c33ea0 body=192 status=ok
// SIG undefined FUN_143c33ea0(void)

void FUN_143c33ea0(longlong param_1,ushort *param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[2];
  if ((uVar2 < *(ushort *)(param_1 + 0x84)) && (uVar3 < *(ushort *)(param_1 + 0x44))) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar2 * 8);
    iVar4 = (**(code **)(param_1 + 0x328))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar3 * 8) -
                               *piVar1,
                       *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (ulonglong)uVar3 * 8) -
                       piVar1[1]);
    (**(code **)(param_1 + 0x340))(param_1,param_1 + 0x78,uVar2,iVar4 / 2);
                    /* WARNING: Could not recover jumptable at 0x000143c33f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x340))(param_1,param_1 + 0x38,uVar3,-(iVar4 / 2));
    return;
  }
  if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  return;
}



// FUNCTION 143c33f60 FUN_143c33f60 body=250 status=ok
// SIG undefined FUN_143c33f60(void)

void FUN_143c33f60(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1d0);
  if ((*(int *)(param_1 + 0x1c) < iVar3) ||
     (*(ushort *)(param_1 + 0x44) <= *(ushort *)(param_1 + 0x1bc))) {
    if (*(char *)(param_1 + 0x315) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
    }
  }
  else {
    while (0 < iVar3) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 4);
      if (uVar2 < *(ushort *)(param_1 + 0x84)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(ushort *)(param_1 + 0x1bc) * 8
                        );
        iVar3 = (**(code **)(param_1 + 0x328))
                          (param_1,*(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar2 * 8) -
                                   *piVar1,
                           *(int *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)uVar2 * 8) -
                           piVar1[1]);
        (**(code **)(param_1 + 0x340))(param_1,param_1 + 0x78,uVar2,-iVar3);
      }
      else if (*(char *)(param_1 + 0x315) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
        return;
      }
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
      iVar3 = *(int *)(param_1 + 0x1d0);
    }
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  return;
}



// FUNCTION 143c34060 FUN_143c34060 body=232 status=ok
// SIG undefined FUN_143c34060(void)

void FUN_143c34060(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  uVar5 = *(int *)(param_1 + 0x260) + 1;
  if (uVar1 < uVar5) {
    puVar3 = *(undefined4 **)(param_1 + 0x248);
    puVar4 = puVar3 + (ulonglong)uVar1 * 6;
    if ((uVar5 != *(uint *)(param_1 + 0x240)) || (puVar4[3] != uVar1)) {
      for (puVar4 = puVar3;
          (puVar4 < puVar3 + (ulonglong)*(uint *)(param_1 + 0x240) * 6 && (puVar4[3] != uVar1));
          puVar4 = puVar4 + 6) {
      }
      if (puVar4 == puVar3 + (ulonglong)*(uint *)(param_1 + 0x240) * 6) goto LAB_143c3413b;
    }
    if (*(char *)(puVar4 + 4) != '\0') {
      if (*(int *)(param_1 + 0x26c) <= *(int *)(param_1 + 0x268)) {
        *(undefined4 *)(param_1 + 0x18) = 0x82;
        return;
      }
      puVar3 = (undefined4 *)
               (*(longlong *)(param_1 + 0x270) + (longlong)*(int *)(param_1 + 0x268) * 0x18);
      *puVar3 = *(undefined4 *)(param_1 + 0x200);
      iVar2 = *(int *)(param_1 + 0x210);
      puVar3[2] = 1;
      puVar3[1] = iVar2 + 1;
      *(undefined4 **)(puVar3 + 4) = puVar4;
      *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
      FUN_143c346e0(param_1,*puVar4,puVar4[1]);
      *(undefined1 *)(param_1 + 0x220) = 0;
      return;
    }
  }
LAB_143c3413b:
  *(undefined4 *)(param_1 + 0x18) = 0x86;
  return;
}



// FUNCTION 143c34150 FUN_143c34150 body=272 status=ok
// SIG undefined FUN_143c34150(void)

void FUN_143c34150(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = (**(code **)(param_1 + 0x350))();
  uVar1 = *param_2;
  uVar7 = 1;
  if (uVar1 != 0) {
    do {
      if (*(int *)(param_1 + 0x30) < 2) {
        if (*(char *)(param_1 + 0x315) != '\0') {
          *(undefined4 *)(param_1 + 0x18) = 0x81;
        }
        *(undefined4 *)(param_1 + 0x30) = 0;
        break;
      }
      iVar4 = *(int *)(param_1 + 0x30) + -2;
      *(int *)(param_1 + 0x30) = iVar4;
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) + 4 + (longlong)iVar4 * 4);
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 4);
      if (uVar2 < *(uint *)(param_1 + 0x224)) {
        uVar5 = uVar6 >> 4 & 0xf;
        if (*(char *)(param_1 + 0x218) == 't') {
          uVar5 = uVar5 + 0x10;
        }
        else if (*(char *)(param_1 + 0x218) == 'u') {
          uVar5 = uVar5 + 0x20;
        }
        if (iVar3 == *(ushort *)(param_1 + 0x1ec) + uVar5) {
          uVar6 = uVar6 & 0xf;
          iVar4 = uVar6 - 8;
          if (-1 < iVar4) {
            iVar4 = uVar6 - 7;
          }
          (**(code **)(param_1 + 0x368))
                    (param_1,uVar2,
                     (1 << (6U - (char)*(undefined2 *)(param_1 + 0x1ee) & 0x1f)) * iVar4);
        }
      }
      else if (*(char *)(param_1 + 0x315) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= uVar1);
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  return;
}



// FUNCTION 143c34260 FUN_143c34260 body=273 status=ok
// SIG undefined FUN_143c34260(void)

void FUN_143c34260(longlong param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = (**(code **)(param_1 + 0x350))();
  uVar2 = *param_2;
  uVar7 = 1;
  if (uVar2 != 0) {
    do {
      if (*(int *)(param_1 + 0x30) < 2) {
        if (*(char *)(param_1 + 0x315) != '\0') {
          *(undefined4 *)(param_1 + 0x18) = 0x81;
        }
        *(undefined4 *)(param_1 + 0x30) = 0;
        break;
      }
      iVar4 = *(int *)(param_1 + 0x30) + -2;
      *(int *)(param_1 + 0x30) = iVar4;
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x28) + 4 + (longlong)iVar4 * 4);
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 4);
      if (uVar1 < *(ushort *)(param_1 + 0x44)) {
        uVar5 = uVar6 >> 4 & 0xf;
        if (*(char *)(param_1 + 0x218) == 'q') {
          uVar5 = uVar5 + 0x10;
        }
        else if (*(char *)(param_1 + 0x218) == 'r') {
          uVar5 = uVar5 + 0x20;
        }
        if (iVar3 == *(ushort *)(param_1 + 0x1ec) + uVar5) {
          uVar6 = uVar6 & 0xf;
          iVar4 = uVar6 - 8;
          if (-1 < iVar4) {
            iVar4 = uVar6 - 7;
          }
          (**(code **)(param_1 + 0x340))
                    (param_1,param_1 + 0x38,uVar1,
                     (1 << (6U - (char)*(undefined2 *)(param_1 + 0x1ee) & 0x1f)) * iVar4);
        }
      }
      else if (*(char *)(param_1 + 0x315) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= uVar2);
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  return;
}



// FUNCTION 143c34380 FUN_143c34380 body=203 status=ok
// SIG undefined FUN_143c34380(void)

void FUN_143c34380(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x214);
  iVar4 = 1;
  while( true ) {
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c);
    if (iVar3 <= *(int *)(param_1 + 0x210)) break;
    bVar1 = *(byte *)((longlong)*(int *)(param_1 + 0x210) + *(longlong *)(param_1 + 0x208));
    *(byte *)(param_1 + 0x218) = bVar1;
    cVar2 = (&DAT_145d22c20)[bVar1];
    *(int *)(param_1 + 0x21c) = (int)cVar2;
    if (cVar2 < '\0') {
      if (iVar3 <= *(int *)(param_1 + 0x210) + 1) break;
      *(uint *)(param_1 + 0x21c) =
           2 - (uint)*(byte *)((longlong)*(int *)(param_1 + 0x210) + 1 +
                              *(longlong *)(param_1 + 0x208)) * (int)cVar2;
    }
    if (iVar3 < *(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c)) break;
    if (*(char *)(param_1 + 0x218) == 'X') {
      iVar4 = iVar4 + 1;
    }
    else if (*(char *)(param_1 + 0x218) == 'Y') {
      iVar4 = iVar4 + -1;
    }
    if (iVar4 == 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0x83;
  return;
}



// FUNCTION 143c34450 FUN_143c34450 body=371 status=ok
// SIG undefined FUN_143c34450(void)

void FUN_143c34450(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(param_1 + 0x248);
  uVar4 = *(uint *)(param_1 + 0x240);
  uVar5 = *param_2;
  puVar1 = puVar7 + (ulonglong)uVar4 * 6;
  for (; (puVar7 < puVar1 && (puVar7[3] != uVar5)); puVar7 = puVar7 + 6) {
  }
  if (puVar7 == puVar1) {
    if (*(uint *)(param_1 + 0x244) <= uVar4) goto LAB_143c3448f;
    *(uint *)(param_1 + 0x240) = uVar4 + 1;
  }
  if (uVar5 < 0x10000) {
    *puVar7 = *(undefined4 *)(param_1 + 0x200);
    puVar7[3] = uVar5 & 0xffff;
    iVar6 = *(int *)(param_1 + 0x210);
    *(undefined2 *)(puVar7 + 4) = 1;
    puVar7[1] = iVar6 + 1;
    puVar7[5] = 0;
    if (*(uint *)(param_1 + 0x260) < uVar5) {
      *(uint *)(param_1 + 0x260) = uVar5 & 0xffff;
    }
    iVar6 = *(int *)(param_1 + 0x214);
    do {
      *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c);
      if (iVar6 <= *(int *)(param_1 + 0x210)) {
LAB_143c345b3:
        *(undefined4 *)(param_1 + 0x18) = 0x83;
        return;
      }
      bVar2 = *(byte *)((longlong)*(int *)(param_1 + 0x210) + *(longlong *)(param_1 + 0x208));
      *(byte *)(param_1 + 0x218) = bVar2;
      cVar3 = (&DAT_145d22c20)[bVar2];
      *(int *)(param_1 + 0x21c) = (int)cVar3;
      if (cVar3 < '\0') {
        if (iVar6 <= *(int *)(param_1 + 0x210) + 1) goto LAB_143c345b3;
        *(uint *)(param_1 + 0x21c) =
             2 - (uint)*(byte *)((longlong)*(int *)(param_1 + 0x210) + 1 +
                                *(longlong *)(param_1 + 0x208)) * (int)cVar3;
      }
      if (iVar6 < *(int *)(param_1 + 0x21c) + *(int *)(param_1 + 0x210)) goto LAB_143c345b3;
      cVar3 = *(char *)(param_1 + 0x218);
      if (cVar3 == ',') break;
      if (cVar3 == '-') {
        puVar7[2] = *(undefined4 *)(param_1 + 0x210);
        return;
      }
    } while (cVar3 != -0x77);
    *(undefined4 *)(param_1 + 0x18) = 0x89;
    return;
  }
LAB_143c3448f:
  *(undefined4 *)(param_1 + 0x18) = 0x8c;
  return;
}



// FUNCTION 143c345d0 FUN_143c345d0 body=121 status=ok
// SIG undefined FUN_143c345d0(void)

void FUN_143c345d0(longlong param_1)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1d0);
  if (*(int *)(param_1 + 0x1c) < iVar3) {
    if (*(char *)(param_1 + 0x315) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x81;
    }
  }
  else {
    while (0 < iVar3) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 4);
      if (uVar2 < *(ushort *)(param_1 + 0x104)) {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x120) + (ulonglong)uVar2);
        *pbVar1 = *pbVar1 ^ 1;
      }
      else if (*(char *)(param_1 + 0x315) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
        return;
      }
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
      iVar3 = *(int *)(param_1 + 0x1d0);
    }
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  return;
}



// FUNCTION 143c34650 FUN_143c34650 body=132 status=ok
// SIG undefined FUN_143c34650(void)

void FUN_143c34650(longlong param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_2;
  if ((uint)*(ushort *)(param_1 + 0xc4) <= *param_2) {
    if (*(char *)(param_1 + 0x315) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
    }
    *param_2 = 0;
    return;
  }
  if ((*(byte *)(param_1 + 0x218) & 1) != 0) {
    uVar1 = (**(code **)(param_1 + 0x330))
                      (param_1,*(undefined4 *)(*(longlong *)(param_1 + 200) + uVar2 * 8),
                       *(undefined4 *)(*(longlong *)(param_1 + 200) + 4 + uVar2 * 8));
    *param_2 = uVar1;
    return;
  }
  uVar1 = (**(code **)(param_1 + 0x328))
                    (param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xd0) + uVar2 * 8),
                     *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 4 + uVar2 * 8));
  *param_2 = uVar1;
  return;
}



// FUNCTION 143c346e0 FUN_143c346e0 body=101 status=ok
// SIG undefined FUN_143c346e0(void)

longlong FUN_143c346e0(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (2 < param_2 - 1U) {
    *(undefined4 *)(param_1 + 0x18) = 0x84;
    return CONCAT71((uint7)(uint3)(param_2 - 1U >> 8),1);
  }
  lVar3 = (longlong)(param_2 + -1) + 0x28;
  lVar2 = *(longlong *)(param_1 + lVar3 * 0x10);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0x8a;
    return 1;
  }
  if (*(int *)(param_1 + 8 + lVar3 * 0x10) < param_3) {
    *(undefined4 *)(param_1 + 0x18) = 0x83;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  *(longlong *)(param_1 + 0x208) = lVar2;
  uVar1 = *(undefined4 *)(param_1 + 8 + lVar3 * 0x10);
  *(undefined4 *)(param_1 + 0x214) = uVar1;
  *(int *)(param_1 + 0x210) = param_3;
  *(int *)(param_1 + 0x200) = param_2;
  return (ulonglong)(uint3)((uint)uVar1 >> 8) << 8;
}



// FUNCTION 143c34750 FUN_143c34750 body=324 status=ok
// SIG undefined FUN_143c34750(void)

void FUN_143c34750(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = *(undefined4 **)(param_1 + 600);
  uVar4 = *(uint *)(param_1 + 0x250);
  puVar1 = puVar6 + (ulonglong)uVar4 * 6;
  if (puVar6 < puVar1) {
    do {
      if (puVar6[3] == *param_2) break;
      puVar6 = puVar6 + 6;
    } while (puVar6 < puVar1);
  }
  if (puVar6 == puVar1) {
    if (*(uint *)(param_1 + 0x254) <= uVar4) goto LAB_143c3488c;
    *(uint *)(param_1 + 0x250) = uVar4 + 1;
  }
  if (*param_2 < 0x100) {
    puVar6[3] = (uint)(byte)*param_2;
    puVar6[1] = *(int *)(param_1 + 0x210) + 1;
    *puVar6 = *(undefined4 *)(param_1 + 0x200);
    *(undefined1 *)(puVar6 + 4) = 1;
    if (*(uint *)(param_1 + 0x264) < *param_2) {
      *(uint *)(param_1 + 0x264) = (uint)(byte)*param_2;
    }
    iVar5 = *(int *)(param_1 + 0x214);
    do {
      *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c);
      if (iVar5 <= *(int *)(param_1 + 0x210)) {
LAB_143c34884:
        *(undefined4 *)(param_1 + 0x18) = 0x83;
        return;
      }
      bVar2 = *(byte *)((longlong)*(int *)(param_1 + 0x210) + *(longlong *)(param_1 + 0x208));
      *(byte *)(param_1 + 0x218) = bVar2;
      cVar3 = (&DAT_145d22c20)[bVar2];
      *(int *)(param_1 + 0x21c) = (int)cVar3;
      if (cVar3 < '\0') {
        if (iVar5 <= *(int *)(param_1 + 0x210) + 1) goto LAB_143c34884;
        *(uint *)(param_1 + 0x21c) =
             2 - (uint)*(byte *)((longlong)*(int *)(param_1 + 0x210) + 1 +
                                *(longlong *)(param_1 + 0x208)) * (int)cVar3;
      }
      if (iVar5 < *(int *)(param_1 + 0x21c) + *(int *)(param_1 + 0x210)) goto LAB_143c34884;
      cVar3 = *(char *)(param_1 + 0x218);
      if (cVar3 == ',') break;
      if (cVar3 == '-') {
        return;
      }
    } while (cVar3 != -0x77);
    *(undefined4 *)(param_1 + 0x18) = 0x89;
    return;
  }
LAB_143c3488c:
  *(undefined4 *)(param_1 + 0x18) = 0x8d;
  return;
}



// FUNCTION 143c348a0 FUN_143c348a0 body=245 status=ok
// SIG undefined FUN_143c348a0(void)

void FUN_143c348a0(longlong param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (*param_2 != 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x214);
  iVar4 = 1;
LAB_143c348d0:
  do {
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c);
    if (iVar3 <= *(int *)(param_1 + 0x210)) {
LAB_143c34985:
      *(undefined4 *)(param_1 + 0x18) = 0x83;
      return;
    }
    bVar1 = *(byte *)((longlong)*(int *)(param_1 + 0x210) + *(longlong *)(param_1 + 0x208));
    *(byte *)(param_1 + 0x218) = bVar1;
    cVar2 = (&DAT_145d22c20)[bVar1];
    *(int *)(param_1 + 0x21c) = (int)cVar2;
    if (cVar2 < '\0') {
      if (iVar3 <= *(int *)(param_1 + 0x210) + 1) goto LAB_143c34985;
      *(uint *)(param_1 + 0x21c) =
           2 - (uint)*(byte *)((longlong)*(int *)(param_1 + 0x210) + 1 +
                              *(longlong *)(param_1 + 0x208)) * (int)cVar2;
    }
    if (iVar3 < *(int *)(param_1 + 0x21c) + *(int *)(param_1 + 0x210)) goto LAB_143c34985;
    cVar2 = *(char *)(param_1 + 0x218);
    if (cVar2 == '\x1b') {
      bVar5 = iVar4 == 1;
    }
    else {
      if (cVar2 == 'X') {
        iVar4 = iVar4 + 1;
        goto LAB_143c348d0;
      }
      if (cVar2 != 'Y') goto LAB_143c348d0;
      iVar4 = iVar4 + -1;
      bVar5 = iVar4 == 0;
    }
    if (bVar5) {
      return;
    }
  } while( true );
}



// FUNCTION 143c349a0 FUN_143c349a0 body=709 status=ok
// SIG undefined FUN_143c349a0(void)

void FUN_143c349a0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined4 local_res8;
  
  if (*(int *)(param_1 + 0x1d0) <= *(int *)(param_1 + 0x1c)) {
    if (((*(short *)(param_1 + 0x1f8) == 0) || (*(short *)(param_1 + 0x1fa) == 0)) ||
       (*(short *)(param_1 + 0x1fc) == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (*(ushort *)(param_1 + 0x1be) < *(ushort *)(param_1 + 0x44)) {
      lVar2 = (ulonglong)*(ushort *)(param_1 + 0x1be) * 8;
      if (bVar4) {
        lVar9 = *(longlong *)(param_1 + 0x48);
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x58);
      }
      piVar10 = (int *)(lVar9 + lVar2);
      piVar1 = (int *)(lVar2 + *(longlong *)(param_1 + 0x50));
      if (*(ushort *)(param_1 + 0x1c0) < *(ushort *)(param_1 + 0x84)) {
        uVar5 = (ulonglong)*(ushort *)(param_1 + 0x1c0);
        if (bVar4) {
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + uVar5 * 8) - piVar10[1];
          iVar6 = *(int *)(*(longlong *)(param_1 + 0x88) + uVar5 * 8) - *piVar10;
        }
        else {
          lVar2 = *(longlong *)(param_1 + 0x98);
          if (*(int *)(param_1 + 0x17c) == *(int *)(param_1 + 0x180)) {
            iVar7 = *(int *)(lVar2 + 4 + uVar5 * 8) - piVar10[1];
            iVar6 = *(int *)(lVar2 + uVar5 * 8) - *piVar10;
          }
          else {
            iVar6 = FUN_143c22100(*(int *)(lVar2 + uVar5 * 8) - *piVar10);
            iVar7 = FUN_143c22100(*(int *)(*(longlong *)(param_1 + 0x98) + 4 +
                                          (ulonglong)*(ushort *)(param_1 + 0x1c0) * 8) - piVar10[1],
                                  *(undefined4 *)(param_1 + 0x180));
          }
        }
        iVar6 = (**(code **)(param_1 + 0x330))(param_1,iVar6,iVar7);
        local_res8 = (**(code **)(param_1 + 0x328))
                               (param_1,*(int *)(*(longlong *)(param_1 + 0x90) +
                                                (ulonglong)*(ushort *)(param_1 + 0x1c0) * 8) -
                                        *piVar1,
                                *(int *)(*(longlong *)(param_1 + 0x90) + 4 +
                                        (ulonglong)*(ushort *)(param_1 + 0x1c0) * 8) - piVar1[1]);
      }
      else {
        iVar6 = 0;
        local_res8 = 0;
      }
      iVar7 = *(int *)(param_1 + 0x1d0);
      while (0 < iVar7) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 4);
        if (uVar3 < *(ushort *)(param_1 + 0xc4)) {
          lVar2 = (ulonglong)uVar3 * 8;
          if (bVar4) {
            iVar8 = *(int *)(*(longlong *)(param_1 + 200) + 4 + lVar2) - piVar10[1];
            iVar7 = *(int *)(*(longlong *)(param_1 + 200) + lVar2) - *piVar10;
          }
          else {
            lVar9 = *(longlong *)(param_1 + 0xd8);
            if (*(int *)(param_1 + 0x17c) == *(int *)(param_1 + 0x180)) {
              iVar8 = *(int *)(lVar9 + 4 + lVar2) - piVar10[1];
              iVar7 = *(int *)(lVar9 + lVar2) - *piVar10;
            }
            else {
              iVar7 = FUN_143c22100(*(int *)(lVar9 + lVar2) - *piVar10);
              iVar8 = FUN_143c22100(*(int *)(*(longlong *)(param_1 + 0xd8) + 4 + lVar2) - piVar10[1]
                                    ,*(undefined4 *)(param_1 + 0x180));
            }
          }
          iVar7 = (**(code **)(param_1 + 0x330))(param_1,iVar7,iVar8);
          iVar8 = (**(code **)(param_1 + 0x328))
                            (param_1,*(int *)(*(longlong *)(param_1 + 0xd0) + lVar2) - *piVar1,
                             *(int *)(*(longlong *)(param_1 + 0xd0) + 4 + lVar2) - piVar1[1]);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else if (iVar6 != 0) {
            iVar7 = FUN_143c21f00(iVar7,local_res8,iVar6);
          }
          (**(code **)(param_1 + 0x340))(param_1,param_1 + 0xb8,(short)uVar3,iVar7 - iVar8);
        }
        else if (*(char *)(param_1 + 0x315) != '\0') {
          *(undefined4 *)(param_1 + 0x18) = 0x86;
          return;
        }
        *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
        iVar7 = *(int *)(param_1 + 0x1d0);
      }
      goto LAB_143c349da;
    }
  }
  if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
LAB_143c349da:
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  return;
}



// FUNCTION 143c34c70 FUN_143c34c70 body=723 status=ok
// SIG undefined FUN_143c34c70(void)

void FUN_143c34c70(longlong param_1,ushort *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  
  if ((((param_2[6] < *(ushort *)(param_1 + 0x44)) && (param_2[8] < *(ushort *)(param_1 + 0x44))) &&
      (param_2[2] < *(ushort *)(param_1 + 0x84))) &&
     ((param_2[4] < *(ushort *)(param_1 + 0x84) && (*param_2 < *(ushort *)(param_1 + 0xc4))))) {
    lVar6 = *(longlong *)(param_1 + 0x50);
    lVar2 = (ulonglong)param_2[8] * 8;
    lVar3 = (ulonglong)param_2[6] * 8;
    iVar13 = *(int *)(lVar3 + 4 + lVar6);
    iVar17 = *(int *)(lVar6 + 4 + lVar2) - iVar13;
    iVar12 = *(int *)(lVar3 + lVar6);
    iVar8 = *(int *)(lVar6 + lVar2) - iVar12;
    lVar7 = *(longlong *)(param_1 + 0x90);
    lVar6 = (ulonglong)param_2[4] * 8;
    lVar4 = (ulonglong)param_2[2] * 8;
    iVar14 = *(int *)(lVar4 + lVar7);
    iVar18 = *(int *)(lVar7 + lVar6) - iVar14;
    iVar5 = *(int *)(lVar4 + 4 + lVar7);
    iVar15 = *(int *)(lVar7 + 4 + lVar6) - iVar5;
    uVar19 = (ulonglong)*param_2;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0xe0) + uVar19);
    *pbVar1 = *pbVar1 | 0x18;
    iVar9 = -iVar17;
    iVar10 = FUN_143c21f00(iVar18,iVar9,0x40);
    iVar11 = FUN_143c21f00(iVar15,iVar8,0x40);
    uVar20 = iVar10 + iVar11;
    iVar10 = FUN_143c21f00(iVar15,iVar17,0x40);
    iVar11 = FUN_143c21f00(iVar18,iVar8,0x40);
    uVar16 = iVar11 + iVar10 >> 0x1f;
    if ((int)((iVar11 + iVar10 ^ uVar16) - uVar16) <
        (int)(((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f)) * 0x13)) {
      iVar12 = FUN_143c21f00(iVar12 - iVar14,iVar9,0x40);
      iVar13 = FUN_143c21f00(iVar13 - iVar5,iVar8,0x40);
      iVar14 = FUN_143c21f00(iVar12 + iVar13,iVar18,uVar20);
      iVar13 = FUN_143c21f00(iVar12 + iVar13,iVar15,uVar20);
      *(int *)(*(longlong *)(param_1 + 0xd0) + uVar19 * 8) =
           *(int *)(*(longlong *)(param_1 + 0x90) + lVar4) + iVar14;
      *(int *)(*(longlong *)(param_1 + 0xd0) + 4 + uVar19 * 8) =
           *(int *)(*(longlong *)(param_1 + 0x90) + 4 + lVar4) + iVar13;
    }
    else {
      iVar13 = *(int *)(lVar4 + *(longlong *)(param_1 + 0x90)) +
               *(int *)(*(longlong *)(param_1 + 0x90) + lVar6) +
               *(int *)(lVar3 + *(longlong *)(param_1 + 0x50)) +
               *(int *)(*(longlong *)(param_1 + 0x50) + lVar2);
      *(int *)(*(longlong *)(param_1 + 0xd0) + uVar19 * 8) =
           (int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2;
      iVar13 = *(int *)(lVar4 + 4 + *(longlong *)(param_1 + 0x90)) +
               *(int *)(*(longlong *)(param_1 + 0x90) + 4 + lVar6) +
               *(int *)(lVar3 + 4 + *(longlong *)(param_1 + 0x50)) +
               *(int *)(*(longlong *)(param_1 + 0x50) + 4 + lVar2);
      *(int *)(*(longlong *)(param_1 + 0xd0) + 4 + uVar19 * 8) =
           (int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2;
    }
  }
  else if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
    return;
  }
  return;
}



// FUNCTION 143c34f50 FUN_143c34f50 body=546 status=ok
// SIG undefined FUN_143c34f50(void)

void FUN_143c34f50(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  short local_res8;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  uint local_40;
  
  if (*(short *)(param_1 + 0x106) != 0) {
    if ((*(byte *)(param_1 + 0x218) & 1) == 0) {
      bVar14 = 0x10;
      local_58 = *(longlong *)(param_1 + 0x108) + 4;
      lVar13 = *(longlong *)(param_1 + 0x110) + 4;
      local_48 = *(longlong *)(param_1 + 0x118) + 4;
    }
    else {
      local_58 = *(longlong *)(param_1 + 0x108);
      bVar14 = 8;
      lVar13 = *(longlong *)(param_1 + 0x110);
      local_48 = *(longlong *)(param_1 + 0x118);
    }
    lVar3 = local_58;
    local_40 = (uint)*(ushort *)(param_1 + 0x104);
    local_res8 = 0;
    uVar12 = 0;
    local_50 = lVar13;
    do {
      uVar6 = (uint)uVar12;
      uVar11 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x128) + (longlong)local_res8 * 2) -
               (uint)*(ushort *)(param_1 + 0x130);
      if (*(ushort *)(param_1 + 0x104) <= uVar11) {
        uVar11 = *(ushort *)(param_1 + 0x104) - 1;
      }
      uVar10 = uVar12;
      if (uVar6 <= uVar11) {
        do {
          uVar7 = (uint)uVar10;
          if ((*(byte *)(uVar10 + *(longlong *)(param_1 + 0x120)) & bVar14) != 0) {
            uVar1 = uVar10;
            uVar8 = uVar7;
            if (uVar7 <= uVar11) {
              while( true ) {
                uVar9 = uVar8;
                uVar8 = uVar9 + 1;
                uVar10 = (ulonglong)uVar8;
                uVar2 = (uint)uVar1;
                if (uVar11 < uVar8) break;
                if ((*(byte *)(uVar10 + *(longlong *)(param_1 + 0x120)) & bVar14) != 0) {
                  FUN_143c3a5b0(&local_58,uVar2 + 1,uVar9,uVar1,uVar8);
                  uVar1 = uVar10;
                }
              }
              if (uVar2 == uVar7) {
                iVar5 = *(int *)(lVar13 + uVar1 * 8) - *(int *)(lVar3 + uVar1 * 8);
                if (iVar5 != 0) {
                  if (uVar6 < uVar2) {
                    piVar4 = (int *)(lVar13 + uVar12 * 8);
                    uVar12 = (ulonglong)(uVar2 - uVar6);
                    do {
                      *piVar4 = *piVar4 + iVar5;
                      piVar4 = piVar4 + 2;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                  while (uVar2 = uVar2 + 1, uVar2 <= uVar11) {
                    piVar4 = (int *)(lVar13 + (ulonglong)uVar2 * 8);
                    *piVar4 = *piVar4 + iVar5;
                  }
                }
              }
              else {
                FUN_143c3a5b0(&local_58,uVar2 + 1 & 0xffff,uVar11,uVar1,uVar7);
                if (uVar7 != 0) {
                  FUN_143c3a5b0(&local_58,uVar12,uVar7 - 1,uVar1,uVar7);
                }
              }
            }
            break;
          }
          uVar10 = (ulonglong)(uVar7 + 1);
        } while (uVar7 + 1 <= uVar11);
      }
      local_res8 = local_res8 + 1;
      uVar12 = uVar10;
    } while (local_res8 < *(short *)(param_1 + 0x106));
  }
  return;
}



// FUNCTION 143c35180 FUN_143c35180 body=94 status=ok
// SIG undefined FUN_143c35180(void)

void FUN_143c35180(longlong param_1,int *param_2)

{
  int *piVar1;
  
  if ((*param_2 == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 0x84;
  }
  piVar1 = (int *)(param_1 + 0x210);
  *piVar1 = *piVar1 + *param_2;
  if (-1 < *piVar1) {
    if (*(int *)(param_1 + 0x268) < 1) {
      *(undefined1 *)(param_1 + 0x220) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x210) <=
        *(int *)(*(longlong *)
                  (*(longlong *)(param_1 + 0x270) + -8 + (longlong)*(int *)(param_1 + 0x268) * 0x18)
                + 8)) goto LAB_143c351cd;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x84;
LAB_143c351cd:
  *(undefined1 *)(param_1 + 0x220) = 0;
  return;
}



// FUNCTION 143c351e0 FUN_143c351e0 body=241 status=ok
// SIG undefined FUN_143c351e0(void)

void FUN_143c351e0(longlong param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar1 = param_2[1];
  uVar4 = *(int *)(param_1 + 0x260) + 1;
  if (uVar1 < uVar4) {
    puVar2 = *(undefined4 **)(param_1 + 0x248);
    puVar3 = puVar2 + (ulonglong)uVar1 * 6;
    if ((uVar4 != *(uint *)(param_1 + 0x240)) || (puVar3[3] != uVar1)) {
      for (puVar3 = puVar2;
          (puVar3 < puVar2 + (ulonglong)*(uint *)(param_1 + 0x240) * 6 && (puVar3[3] != uVar1));
          puVar3 = puVar3 + 6) {
      }
      if (puVar3 == puVar2 + (ulonglong)*(uint *)(param_1 + 0x240) * 6) goto LAB_143c352c4;
    }
    if (*(char *)(puVar3 + 4) != '\0') {
      if (*(int *)(param_1 + 0x26c) <= *(int *)(param_1 + 0x268)) {
        *(undefined4 *)(param_1 + 0x18) = 0x82;
        return;
      }
      if (*param_2 < 1) {
        return;
      }
      puVar2 = (undefined4 *)
               (*(longlong *)(param_1 + 0x270) + (longlong)*(int *)(param_1 + 0x268) * 0x18);
      *puVar2 = *(undefined4 *)(param_1 + 0x200);
      puVar2[1] = *(int *)(param_1 + 0x210) + 1;
      puVar2[2] = *param_2;
      *(undefined4 **)(puVar2 + 4) = puVar3;
      *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
      FUN_143c346e0(param_1,*puVar3,puVar3[1]);
      *(undefined1 *)(param_1 + 0x220) = 0;
      return;
    }
  }
LAB_143c352c4:
  *(undefined4 *)(param_1 + 0x18) = 0x86;
  return;
}



// FUNCTION 143c352e0 FUN_143c352e0 body=403 status=ok
// SIG undefined FUN_143c352e0(void)

void FUN_143c352e0(longlong param_1,ushort *param_2)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = param_2[2];
  uVar4 = *param_2;
  if ((*(ushort *)(param_1 + 0x44) <= uVar4) || (*(ushort *)(param_1 + 0x84) <= uVar3)) {
    if (*(char *)(param_1 + 0x315) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
    }
    param_2[0] = 0;
    param_2[1] = 0;
    return;
  }
  if ((*(byte *)(param_1 + 0x218) & 1) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar3 * 8);
    uVar5 = (**(code **)(param_1 + 0x328))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar4 * 8) -
                               *piVar1,
                       *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (ulonglong)uVar4 * 8) -
                       piVar1[1]);
    *(undefined4 *)param_2 = uVar5;
    return;
  }
  if ((*(short *)(param_1 + 0x1f8) != 0) && (*(short *)(param_1 + 0x1fa) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar4 * 8);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x98) + (ulonglong)uVar3 * 8);
    if (*(int *)(param_1 + 0x17c) == *(int *)(param_1 + 0x180)) {
      uVar5 = (**(code **)(param_1 + 0x330))(param_1,*piVar1 - *piVar2,piVar1[1] - piVar2[1]);
      uVar5 = FUN_143c22100(uVar5,*(undefined4 *)(param_1 + 0x17c));
      *(undefined4 *)param_2 = uVar5;
    }
    else {
      uVar5 = FUN_143c22100(*piVar1 - *piVar2);
      uVar6 = FUN_143c22100(piVar1[1] - piVar2[1],*(undefined4 *)(param_1 + 0x180));
      uVar5 = (**(code **)(param_1 + 0x330))(param_1,uVar5,uVar6);
      *(undefined4 *)param_2 = uVar5;
    }
    return;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar4 * 8);
  uVar5 = (**(code **)(param_1 + 0x330))
                    (param_1,*piVar1 - *(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar3 * 8
                                               ),
                     piVar1[1] - *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)uVar3 * 8))
  ;
  *(undefined4 *)param_2 = uVar5;
  return;
}



// FUNCTION 143c35480 Ins_MDAP body=163 status=ok
// SIG undefined Ins_MDAP(void)

void Ins_MDAP(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *param_2;
  if (uVar1 < *(ushort *)(param_1 + 0x44)) {
    if ((*(byte *)(param_1 + 0x218) & 1) == 0) {
      iVar3 = 0;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x328))
                        (param_1,*(undefined4 *)
                                  (*(longlong *)(param_1 + 0x50) + (ulonglong)uVar1 * 8),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 4 + (ulonglong)uVar1 * 8));
      iVar3 = (**(code **)(param_1 + 800))(param_1,iVar2,*(undefined4 *)(param_1 + 0x1a8));
      iVar3 = iVar3 - iVar2;
    }
    (**(code **)(param_1 + 0x340))(param_1,param_1 + 0x38,uVar1,iVar3);
    *(ushort *)(param_1 + 0x1bc) = uVar1;
    *(ushort *)(param_1 + 0x1be) = uVar1;
  }
  else if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
    return;
  }
  return;
}



// FUNCTION 143c35530 FUN_143c35530 body=569 status=ok
// SIG undefined FUN_143c35530(void)

void FUN_143c35530(longlong param_1,ushort *param_2)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  
  uVar3 = *param_2;
  iVar9 = *(int *)(param_1 + 0x1d4);
  if ((*(ushort *)(param_1 + 0x84) <= uVar3) ||
     (uVar4 = *(ushort *)(param_1 + 0x1bc), *(ushort *)(param_1 + 0x44) <= uVar4)) {
    if (*(char *)(param_1 + 0x315) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
    }
    goto LAB_143c35735;
  }
  if ((*(short *)(param_1 + 0x1f8) == 0) || (*(short *)(param_1 + 0x1fa) == 0)) {
    lVar12 = (ulonglong)uVar3 * 8;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar12) -
            *(int *)(*(longlong *)(param_1 + 0x48) + 4 + (ulonglong)uVar4 * 8);
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x88) + lVar12) -
            *(int *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar4 * 8);
LAB_143c35639:
    iVar6 = (**(code **)(param_1 + 0x330))(param_1,iVar7,iVar6);
  }
  else {
    lVar12 = (ulonglong)uVar3 * 8;
    piVar11 = (int *)(*(longlong *)(param_1 + 0x98) + lVar12);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar4 * 8);
    if (*(int *)(param_1 + 0x17c) != *(int *)(param_1 + 0x180)) {
      iVar7 = FUN_143c22100(*piVar11 - *piVar1);
      iVar6 = FUN_143c22100(piVar11[1] - piVar1[1],*(undefined4 *)(param_1 + 0x180));
      goto LAB_143c35639;
    }
    uVar5 = (**(code **)(param_1 + 0x330))(param_1,*piVar11 - *piVar1,piVar11[1] - piVar1[1]);
    iVar6 = FUN_143c22100(uVar5,*(undefined4 *)(param_1 + 0x17c));
  }
  iVar7 = *(int *)(param_1 + 0x1e8);
  iVar8 = iVar6 - iVar7;
  if (iVar8 < 0) {
    iVar8 = iVar7 - iVar6;
  }
  iVar10 = iVar6;
  if ((iVar8 < *(int *)(param_1 + 0x1e4)) && (iVar10 = iVar7, iVar6 < 0)) {
    iVar10 = -iVar7;
  }
  bVar2 = *(byte *)(param_1 + 0x218);
  if ((bVar2 & 4) == 0) {
    iVar6 = *(int *)(param_1 + 0x1a8 + (ulonglong)(bVar2 & 3) * 4);
    if (iVar10 < 0) {
      iVar6 = iVar10 - iVar6;
      if (0 < iVar6) {
        iVar6 = 0;
      }
    }
    else {
      iVar6 = iVar6 + iVar10;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
    }
  }
  else {
    iVar6 = (**(code **)(param_1 + 800))
                      (param_1,iVar10,*(undefined4 *)(param_1 + 0x1a8 + (ulonglong)(bVar2 & 3) * 4))
    ;
  }
  if ((*(byte *)(param_1 + 0x218) & 8) != 0) {
    if (iVar10 < 0) {
      if (-iVar9 < iVar6) {
        iVar6 = -iVar9;
      }
    }
    else if (iVar6 < iVar9) {
      iVar6 = iVar9;
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(ushort *)(param_1 + 0x1bc) * 8);
  iVar9 = (**(code **)(param_1 + 0x328))
                    (param_1,*(int *)(*(longlong *)(param_1 + 0x90) + lVar12) - *piVar1,
                     *(int *)(*(longlong *)(param_1 + 0x90) + 4 + lVar12) - piVar1[1]);
  (**(code **)(param_1 + 0x340))(param_1,param_1 + 0x78,uVar3,iVar6 - iVar9);
LAB_143c35735:
  *(undefined2 *)(param_1 + 0x1be) = *(undefined2 *)(param_1 + 0x1bc);
  *(ushort *)(param_1 + 0x1c0) = uVar3;
  if ((*(byte *)(param_1 + 0x218) & 0x10) != 0) {
    *(ushort *)(param_1 + 0x1bc) = uVar3;
  }
  return;
}



// FUNCTION 143c35770 FUN_143c35770 body=336 status=ok
// SIG undefined FUN_143c35770(void)

void FUN_143c35770(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = *param_2;
  iVar2 = *(int *)(param_1 + 0x1e0);
  if ((uVar1 < *(ushort *)(param_1 + 0x44)) && (*(uint *)(param_2 + 2) < *(uint *)(param_1 + 0x224))
     ) {
    iVar3 = (**(code **)(param_1 + 0x358))(param_1,*(uint *)(param_2 + 2));
    if (*(short *)(param_1 + 0x1f8) == 0) {
      lVar7 = (ulonglong)uVar1 * 8;
      uVar4 = FUN_143c38370(iVar3,(int)*(short *)(param_1 + 0x1ca));
      *(undefined4 *)(lVar7 + *(longlong *)(param_1 + 0x48)) = uVar4;
      uVar4 = FUN_143c38370(iVar3,(int)*(short *)(param_1 + 0x1cc));
      *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 4 + lVar7) = uVar4;
      *(undefined8 *)(lVar7 + *(longlong *)(param_1 + 0x50)) =
           *(undefined8 *)(lVar7 + *(longlong *)(param_1 + 0x48));
    }
    iVar5 = (**(code **)(param_1 + 0x328))
                      (param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar1 * 8)
                       ,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 4 + (ulonglong)uVar1 * 8));
    if ((*(byte *)(param_1 + 0x218) & 1) != 0) {
      uVar6 = iVar3 - iVar5 >> 0x1f;
      if (iVar2 < (int)((iVar3 - iVar5 ^ uVar6) - uVar6)) {
        iVar3 = iVar5;
      }
      iVar3 = (**(code **)(param_1 + 800))(param_1,iVar3,*(undefined4 *)(param_1 + 0x1a8));
    }
    (**(code **)(param_1 + 0x340))(param_1,param_1 + 0x38,uVar1,iVar3 - iVar5);
    *(ushort *)(param_1 + 0x1bc) = uVar1;
    *(ushort *)(param_1 + 0x1be) = uVar1;
    return;
  }
  *(ushort *)(param_1 + 0x1bc) = uVar1;
  *(ushort *)(param_1 + 0x1be) = uVar1;
  if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  return;
}



// FUNCTION 143c358c0 FUN_143c358c0 body=125 status=ok
// SIG undefined FUN_143c358c0(void)

void FUN_143c358c0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  iVar1 = *param_2;
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar1 <= iVar2) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      uVar3 = *(undefined4 *)(lVar4 + ((longlong)iVar2 - (longlong)iVar1) * 4);
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar4 + (longlong)(iVar2 - iVar1) * 4),
                 (void *)(lVar4 + (longlong)((iVar2 - iVar1) + 1) * 4),(longlong)(iVar1 + -1) << 2);
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + -4 + (longlong)*(int *)(param_1 + 0x30) * 4) =
           uVar3;
      return;
    }
  }
  if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  return;
}



// FUNCTION 143c35940 FUN_143c35940 body=667 status=ok
// SIG undefined FUN_143c35940(void)

void FUN_143c35940(longlong param_1,ushort *param_2)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar3 = *param_2;
  iVar5 = *(int *)(param_2 + 2);
  iVar7 = *(int *)(param_1 + 0x1e0);
  iVar4 = *(int *)(param_1 + 0x1d4);
  if (((uVar3 < *(ushort *)(param_1 + 0x84)) && (iVar5 + 1U < *(int *)(param_1 + 0x224) + 1U)) &&
     (*(ushort *)(param_1 + 0x1bc) < *(ushort *)(param_1 + 0x44))) {
    uVar6 = 0;
    if (iVar5 != -1) {
      uVar6 = (**(code **)(param_1 + 0x358))(param_1,iVar5);
    }
    uVar8 = *(uint *)(param_1 + 0x1e8);
    iVar5 = uVar6 - uVar8;
    if (iVar5 < 0) {
      iVar5 = uVar8 - uVar6;
    }
    uVar9 = uVar6;
    if ((iVar5 < *(int *)(param_1 + 0x1e4)) && (uVar9 = uVar8, (int)uVar6 < 0)) {
      uVar9 = -uVar8;
    }
    if (*(short *)(param_1 + 0x1fa) == 0) {
      lVar10 = (ulonglong)uVar3 * 8;
      iVar5 = FUN_143c38370(uVar9,(int)*(short *)(param_1 + 0x1ca));
      *(int *)(lVar10 + *(longlong *)(param_1 + 0x88)) =
           iVar5 + *(int *)(*(longlong *)(param_1 + 0x48) +
                           (ulonglong)*(ushort *)(param_1 + 0x1bc) * 8);
      iVar5 = FUN_143c38370(uVar9,(int)*(short *)(param_1 + 0x1cc));
      *(int *)(lVar10 + 4 + *(longlong *)(param_1 + 0x88)) =
           iVar5 + *(int *)(*(longlong *)(param_1 + 0x48) + 4 +
                           (ulonglong)*(ushort *)(param_1 + 0x1bc) * 8);
      *(undefined8 *)(lVar10 + *(longlong *)(param_1 + 0x90)) =
           *(undefined8 *)(lVar10 + *(longlong *)(param_1 + 0x88));
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + (ulonglong)*(ushort *)(param_1 + 0x1bc) * 8);
    lVar10 = (ulonglong)uVar3 * 8;
    uVar6 = (**(code **)(param_1 + 0x330))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x88) + lVar10) - *piVar1,
                       *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar10) - piVar1[1]);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(ushort *)(param_1 + 0x1bc) * 8);
    iVar5 = (**(code **)(param_1 + 0x328))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x90) + lVar10) - *piVar1,
                       *(int *)(*(longlong *)(param_1 + 0x90) + 4 + lVar10) - piVar1[1]);
    if ((*(char *)(param_1 + 0x1dc) != '\0') && ((int)(uVar6 ^ uVar9) < 0)) {
      uVar9 = -uVar9;
    }
    bVar2 = *(byte *)(param_1 + 0x218);
    if ((bVar2 & 4) == 0) {
      iVar7 = *(int *)(param_1 + 0x1a8 + (ulonglong)(bVar2 & 3) * 4);
      if ((int)uVar9 < 0) {
        iVar7 = uVar9 - iVar7;
        if (0 < iVar7) {
          iVar7 = 0;
        }
      }
      else {
        iVar7 = uVar9 + iVar7;
        if (iVar7 < 0) {
          iVar7 = 0;
        }
      }
    }
    else {
      if ((*(short *)(param_1 + 0x1f8) == *(short *)(param_1 + 0x1fa)) &&
         (uVar8 = (int)(uVar9 - uVar6) >> 0x1f, iVar7 < (int)((uVar9 - uVar6 ^ uVar8) - uVar8))) {
        uVar9 = uVar6;
      }
      iVar7 = (**(code **)(param_1 + 800))
                        (param_1,uVar9,*(undefined4 *)(param_1 + 0x1a8 + (ulonglong)(bVar2 & 3) * 4)
                        );
    }
    if ((*(byte *)(param_1 + 0x218) & 8) != 0) {
      if ((int)uVar6 < 0) {
        if (-iVar4 < iVar7) {
          iVar7 = -iVar4;
        }
      }
      else if (iVar7 < iVar4) {
        iVar7 = iVar4;
      }
    }
    (**(code **)(param_1 + 0x340))(param_1,param_1 + 0x78,uVar3,iVar7 - iVar5);
  }
  else if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  *(undefined2 *)(param_1 + 0x1be) = *(undefined2 *)(param_1 + 0x1bc);
  *(ushort *)(param_1 + 0x1c0) = uVar3;
  if ((*(byte *)(param_1 + 0x218) & 0x10) != 0) {
    *(ushort *)(param_1 + 0x1bc) = uVar3;
  }
  return;
}



// FUNCTION 143c35be0 FUN_143c35be0 body=311 status=ok
// SIG undefined FUN_143c35be0(void)

void FUN_143c35be0(longlong param_1,ushort *param_2)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  
  uVar3 = *param_2;
  if ((uVar3 < *(ushort *)(param_1 + 0x84)) &&
     (*(ushort *)(param_1 + 0x1bc) < *(ushort *)(param_1 + 0x44))) {
    if (*(short *)(param_1 + 0x1fa) == 0) {
      lVar2 = (ulonglong)uVar3 * 8;
      *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x88)) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 0x48) + (ulonglong)*(ushort *)(param_1 + 0x1bc) * 8);
      (**(code **)(param_1 + 0x348))(param_1,param_1 + 0x78,uVar3,*(undefined4 *)(param_2 + 2));
      *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x90)) =
           *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x88));
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(ushort *)(param_1 + 0x1bc) * 8);
    iVar4 = (**(code **)(param_1 + 0x328))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar3 * 8) -
                               *piVar1,
                       *(int *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)uVar3 * 8) -
                       piVar1[1]);
    (**(code **)(param_1 + 0x340))(param_1,param_1 + 0x78,uVar3,*(int *)(param_2 + 2) - iVar4);
    *(undefined2 *)(param_1 + 0x1be) = *(undefined2 *)(param_1 + 0x1bc);
    *(ushort *)(param_1 + 0x1c0) = uVar3;
    if ((*(byte *)(param_1 + 0x218) & 1) != 0) {
      *(ushort *)(param_1 + 0x1bc) = uVar3;
      return;
    }
  }
  else if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  return;
}



// FUNCTION 143c35d20 FUN_143c35d20 body=130 status=ok
// SIG undefined FUN_143c35d20(void)

void FUN_143c35d20(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  bVar1 = *(byte *)((longlong)*(int *)(param_1 + 0x210) + 1 + *(longlong *)(param_1 + 0x208));
  if ((uint)bVar1 < (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) + 1U) {
    uVar3 = 1;
    if (bVar1 != 0) {
      do {
        uVar2 = (short)uVar3 + 1;
        *(uint *)(param_2 + -4 + uVar3 * 4) =
             (uint)*(byte *)((longlong)*(int *)(param_1 + 0x210) + uVar3 + 1 +
                            *(longlong *)(param_1 + 0x208));
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 <= bVar1);
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (uint)bVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x82;
  return;
}



// FUNCTION 143c35db0 FUN_143c35db0 body=156 status=ok
// SIG undefined FUN_143c35db0(void)

void FUN_143c35db0(longlong param_1,int *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *(byte *)((longlong)*(int *)(param_1 + 0x210) + 1 + *(longlong *)(param_1 + 0x208));
  if ((uint)bVar1 < (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) + 1U) {
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 2;
    if (bVar1 != 0) {
      uVar2 = (ulonglong)(ushort)bVar1;
      do {
        *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 2;
        *param_2 = (int)(short)((ushort)*(byte *)((longlong)*(int *)(param_1 + 0x210) + -1 +
                                                 *(longlong *)(param_1 + 0x208)) +
                               (ushort)*(byte *)((longlong)*(int *)(param_1 + 0x210) + -2 +
                                                *(longlong *)(param_1 + 0x208)) * 0x100);
        uVar2 = uVar2 - 1;
        param_2 = param_2 + 1;
      } while (uVar2 != 0);
    }
    *(undefined1 *)(param_1 + 0x220) = 0;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (uint)bVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x82;
  return;
}



// FUNCTION 143c35e50 FUN_143c35e50 body=158 status=ok
// SIG undefined FUN_143c35e50(void)

void FUN_143c35e50(longlong param_1,int *param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar1 = *(byte *)(param_1 + 0x218) - 0xb7;
  if ((uint)uVar1 < (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) + 1U) {
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
    if (uVar1 != 0) {
      uVar2 = (ulonglong)uVar1;
      do {
        *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 2;
        *param_2 = (int)(short)((ushort)*(byte *)((longlong)*(int *)(param_1 + 0x210) + -1 +
                                                 *(longlong *)(param_1 + 0x208)) +
                               (ushort)*(byte *)((longlong)*(int *)(param_1 + 0x210) + -2 +
                                                *(longlong *)(param_1 + 0x208)) * 0x100);
        uVar2 = uVar2 - 1;
        param_2 = param_2 + 1;
      } while (uVar2 != 0);
    }
    *(undefined1 *)(param_1 + 0x220) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x82;
  return;
}



// FUNCTION 143c35ef0 FUN_143c35ef0 body=180 status=ok
// SIG undefined FUN_143c35ef0(void)

void FUN_143c35ef0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  uVar2 = uVar1 & 0xff;
  if (uVar2 == 0xff) {
    *(undefined1 *)(param_1 + 0x1f1) = 1;
    return;
  }
  if ((char)uVar1 != '\0') {
    if (((uVar1 >> 8 & 1) != 0) && (*(ushort *)(param_1 + 0x19c) <= uVar2)) {
      *(undefined1 *)(param_1 + 0x1f1) = 1;
    }
    if (((*param_2 & 0x200) != 0) && (*(char *)(param_1 + 0x1b9) != '\0')) {
      *(undefined1 *)(param_1 + 0x1f1) = 1;
    }
    if (((*param_2 & 0x400) != 0) && (*(char *)(param_1 + 0x1ba) != '\0')) {
      *(undefined1 *)(param_1 + 0x1f1) = 1;
    }
    if (((*param_2 & 0x800) != 0) && (uVar2 < *(ushort *)(param_1 + 0x19c))) {
      *(undefined1 *)(param_1 + 0x1f1) = 0;
    }
    if (((*param_2 & 0x1000) != 0) && (*(char *)(param_1 + 0x1b9) != '\0')) {
      *(undefined1 *)(param_1 + 0x1f1) = 0;
    }
    if ((*param_2 & 0x2000) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x1ba) == '\0') {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  return;
}



// FUNCTION 143c35fb0 Ins_SCFS body=185 status=ok
// SIG undefined Ins_SCFS(void)

void Ins_SCFS(longlong param_1,ushort *param_2)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  
  uVar2 = *param_2;
  if (uVar2 < *(ushort *)(param_1 + 0xc4)) {
    lVar1 = (ulonglong)uVar2 * 8;
    iVar3 = (**(code **)(param_1 + 0x328))
                      (param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xd0) + lVar1),
                       *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 4 + lVar1));
    (**(code **)(param_1 + 0x340))(param_1,param_1 + 0xb8,uVar2,*(int *)(param_2 + 2) - iVar3);
    if (*(short *)(param_1 + 0x1fc) == 0) {
      *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 200)) =
           *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0xd0));
    }
  }
  else if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
    return;
  }
  return;
}



// FUNCTION 143c36070 FUN_143c36070 body=290 status=ok
// SIG undefined FUN_143c36070(void)

void FUN_143c36070(longlong param_1,ushort *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  bVar6 = *(byte *)(param_1 + 0x218);
  if ((*param_2 < *(ushort *)(param_1 + 0x84)) && (param_2[2] < *(ushort *)(param_1 + 0xc4))) {
    lVar1 = (ulonglong)*param_2 * 8;
    lVar2 = (ulonglong)param_2[2] * 8;
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + lVar1) -
            *(int *)(*(longlong *)(param_1 + 200) + lVar2);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar1) -
            *(int *)(*(longlong *)(param_1 + 200) + 4 + lVar2);
    if ((iVar3 == 0) && (iVar5 == 0)) {
      iVar3 = 0x4000;
      bVar6 = 0;
    }
    iVar4 = iVar3;
    if ((bVar6 & 1) != 0) {
      iVar4 = -iVar5;
      iVar5 = iVar3;
    }
    FUN_143c36d80(iVar4,iVar5,param_1 + 0x1c2);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x90) + lVar1) -
            *(int *)(*(longlong *)(param_1 + 0xd0) + lVar2);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x90) + 4 + lVar1) -
            *(int *)(*(longlong *)(param_1 + 0xd0) + 4 + lVar2);
    if ((iVar3 == 0) && (iVar5 == 0)) {
      bVar6 = 0;
      iVar3 = 0x4000;
    }
    iVar4 = iVar3;
    if ((bVar6 & 1) != 0) {
      iVar4 = -iVar5;
      iVar5 = iVar3;
    }
    FUN_143c36d80(iVar4,iVar5,param_1 + 0x1c6);
    Compute_Funcs(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  return;
}



// FUNCTION 143c361a0 FUN_143c361a0 body=518 status=ok
// SIG undefined FUN_143c361a0(void)

void FUN_143c361a0(longlong param_1,ushort *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar10 = *param_2;
  if (*(short *)(param_1 + 0x1fc) == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = *(ushort *)(param_1 + 0xc6);
  }
  if (uVar10 < uVar8) {
    if ((*(byte *)(param_1 + 0x218) & 1) == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x78);
      uVar9 = (ushort)*(undefined4 *)(param_1 + 0x84);
      uVar8 = *(ushort *)(param_1 + 0x1c0);
      uVar11 = *(undefined4 *)(param_1 + 0x88);
      uVar12 = *(undefined4 *)(param_1 + 0x8c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      uVar14 = *(undefined4 *)(param_1 + 0x94);
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x38);
      uVar9 = (ushort)*(undefined4 *)(param_1 + 0x44);
      uVar8 = *(ushort *)(param_1 + 0x1be);
      uVar11 = *(undefined4 *)(param_1 + 0x48);
      uVar12 = *(undefined4 *)(param_1 + 0x4c);
      uVar13 = *(undefined4 *)(param_1 + 0x50);
      uVar14 = *(undefined4 *)(param_1 + 0x54);
    }
    if (uVar8 < uVar9) {
      lVar4 = CONCAT44(uVar14,uVar13);
      lVar3 = (ulonglong)uVar8 * 8;
      uVar5 = (**(code **)(param_1 + 0x328))
                        (param_1,*(int *)(lVar3 + lVar4) - *(int *)(lVar3 + CONCAT44(uVar12,uVar11))
                         ,*(int *)(lVar3 + 4 + lVar4) -
                          *(int *)(lVar3 + 4 + CONCAT44(uVar12,uVar11)),param_4,uVar5);
      iVar6 = FUN_143c21f00(uVar5,(int)*(short *)(param_1 + 0x1ca),*(undefined4 *)(param_1 + 0x318))
      ;
      iVar7 = FUN_143c21f00(uVar5,(int)*(short *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x318))
      ;
      if (uVar10 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (*(short *)(*(longlong *)(param_1 + 0xe8) + -2 + (longlong)(short)uVar10 * 2) -
                *(short *)(param_1 + 0xf0)) + 1;
      }
      if (*(short *)(param_1 + 0x1fc) == 0) {
        uVar10 = *(ushort *)(param_1 + 0xc4);
      }
      else {
        uVar10 = (*(short *)(*(longlong *)(param_1 + 0xe8) + (longlong)(short)uVar10 * 2) -
                 *(short *)(param_1 + 0xf0)) + 1;
      }
      for (; uVar9 < uVar10; uVar9 = uVar9 + 1) {
        if ((lVar4 != *(longlong *)(param_1 + 0xd0)) || (uVar8 != uVar9)) {
          if (*(short *)(param_1 + 0x1ca) != 0) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)uVar9 * 8);
            *piVar1 = *piVar1 + iVar6;
            pbVar2 = (byte *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar9);
            *pbVar2 = *pbVar2 | 8;
          }
          if (*(short *)(param_1 + 0x1cc) != 0) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 4 + (ulonglong)uVar9 * 8);
            *piVar1 = *piVar1 + iVar7;
            pbVar2 = (byte *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar9);
            *pbVar2 = *pbVar2 | 0x10;
          }
        }
      }
    }
    else if (*(char *)(param_1 + 0x315) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
      return;
    }
  }
  else if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
    return;
  }
  return;
}



// FUNCTION 143c363b0 FUN_143c363b0 body=427 status=ok
// SIG undefined FUN_143c363b0(void)

void FUN_143c363b0(longlong param_1)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x1d0)) {
    if (*(char *)(param_1 + 0x315) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x218) & 1) == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x78);
      uVar10 = (ushort)*(undefined4 *)(param_1 + 0x84);
      uVar11 = *(undefined4 *)(param_1 + 0x88);
      uVar12 = *(undefined4 *)(param_1 + 0x8c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      uVar14 = *(undefined4 *)(param_1 + 0x94);
      uVar9 = *(ushort *)(param_1 + 0x1c0);
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 0x38);
      uVar10 = (ushort)*(undefined4 *)(param_1 + 0x44);
      uVar11 = *(undefined4 *)(param_1 + 0x48);
      uVar12 = *(undefined4 *)(param_1 + 0x4c);
      uVar13 = *(undefined4 *)(param_1 + 0x50);
      uVar14 = *(undefined4 *)(param_1 + 0x54);
      uVar9 = *(ushort *)(param_1 + 0x1be);
    }
    if (uVar10 <= uVar9) {
      if (*(char *)(param_1 + 0x315) == '\0') {
        return;
      }
LAB_143c36432:
      *(undefined4 *)(param_1 + 0x18) = 0x86;
      return;
    }
    lVar5 = CONCAT44(uVar12,uVar11);
    lVar3 = (ulonglong)uVar9 * 8;
    uVar6 = (**(code **)(param_1 + 0x328))
                      (param_1,*(int *)(lVar3 + CONCAT44(uVar14,uVar13)) - *(int *)(lVar5 + lVar3),
                       *(int *)(lVar3 + 4 + CONCAT44(uVar14,uVar13)) - *(int *)(lVar5 + 4 + lVar3),
                       lVar5,uVar6);
    iVar7 = FUN_143c21f00(uVar6,(int)*(short *)(param_1 + 0x1ca),*(undefined4 *)(param_1 + 0x318));
    iVar8 = FUN_143c21f00(uVar6,(int)*(short *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x318));
    iVar4 = *(int *)(param_1 + 0x1d0);
    while (0 < iVar4) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 4);
      if (uVar9 < *(ushort *)(param_1 + 0xc4)) {
        if (*(short *)(param_1 + 0x1ca) != 0) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)uVar9 * 8);
          *piVar1 = *piVar1 + iVar7;
          pbVar2 = (byte *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar9);
          *pbVar2 = *pbVar2 | 8;
        }
        if (*(short *)(param_1 + 0x1cc) != 0) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 4 + (ulonglong)uVar9 * 8);
          *piVar1 = *piVar1 + iVar8;
          pbVar2 = (byte *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar9);
          *pbVar2 = *pbVar2 | 0x10;
        }
      }
      else if (*(char *)(param_1 + 0x315) != '\0') goto LAB_143c36432;
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
      iVar4 = *(int *)(param_1 + 0x1d0);
    }
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  return;
}



// FUNCTION 143c36560 FUN_143c36560 body=426 status=ok
// SIG undefined FUN_143c36560(void)

void FUN_143c36560(longlong param_1,uint *param_2)

{
  int *piVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x1d0) + 1) {
    if (*(char *)(param_1 + 0x315) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
    }
  }
  else {
    uVar9 = *param_2;
    uVar7 = (uint)*(short *)(param_1 + 0x1ca);
    uVar6 = uVar9 ^ uVar7;
    uVar8 = uVar9;
    if ((int)uVar9 < 0) {
      uVar8 = -uVar9;
    }
    if (*(short *)(param_1 + 0x1ca) < 0) {
      uVar7 = -uVar7;
    }
    uVar4 = ((int)uVar8 >> 0x10 & 0xffffU) * uVar7;
    uVar5 = uVar4 * 0x10000 + 0x2000;
    uVar4 = uVar4 >> 0x10;
    uVar8 = (uVar8 & 0xffff) * uVar7 + uVar5;
    if (uVar8 < uVar5) {
      uVar4 = uVar4 + 1;
    }
    uVar8 = uVar4 << 0x12 | uVar8 >> 0xe;
    if ((int)uVar6 < 0) {
      uVar8 = -uVar8;
    }
    uVar7 = (uint)*(short *)(param_1 + 0x1cc);
    uVar6 = uVar9 ^ uVar7;
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
    }
    if (*(short *)(param_1 + 0x1cc) < 0) {
      uVar7 = -uVar7;
    }
    uVar4 = ((int)uVar9 >> 0x10 & 0xffffU) * uVar7;
    uVar5 = uVar4 * 0x10000 + 0x2000;
    uVar4 = uVar4 >> 0x10;
    uVar9 = (uVar9 & 0xffff) * uVar7 + uVar5;
    if (uVar9 < uVar5) {
      uVar4 = uVar4 + 1;
    }
    uVar9 = uVar4 << 0x12 | uVar9 >> 0xe;
    if ((int)uVar6 < 0) {
      uVar9 = -uVar9;
    }
    if (0 < *(int *)(param_1 + 0x1d0)) {
      do {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 4);
        if (uVar3 < *(ushort *)(param_1 + 0xc4)) {
          if (*(short *)(param_1 + 0x1ca) != 0) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)uVar3 * 8);
            *piVar1 = *piVar1 + uVar8;
            pbVar2 = (byte *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar3);
            *pbVar2 = *pbVar2 | 8;
          }
          if (*(short *)(param_1 + 0x1cc) != 0) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 4 + (ulonglong)uVar3 * 8);
            *piVar1 = *piVar1 + uVar9;
            pbVar2 = (byte *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar3);
            *pbVar2 = *pbVar2 | 0x10;
          }
        }
        else if (*(char *)(param_1 + 0x315) != '\0') {
          *(undefined4 *)(param_1 + 0x18) = 0x86;
          return;
        }
        *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
      } while (0 < *(int *)(param_1 + 0x1d0));
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x1d0) = 1;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  return;
}



// FUNCTION 143c36710 FUN_143c36710 body=444 status=ok
// SIG undefined FUN_143c36710(void)

void FUN_143c36710(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (*param_2 < 2) {
    if ((*(byte *)(param_1 + 0x218) & 1) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x78);
      uVar7 = (ushort)*(undefined4 *)(param_1 + 0x84);
      uVar8 = *(ushort *)(param_1 + 0x1c0);
      uVar10 = *(undefined4 *)(param_1 + 0x88);
      uVar11 = *(undefined4 *)(param_1 + 0x8c);
      uVar12 = *(undefined4 *)(param_1 + 0x90);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x38);
      uVar7 = (ushort)*(undefined4 *)(param_1 + 0x44);
      uVar8 = *(ushort *)(param_1 + 0x1be);
      uVar10 = *(undefined4 *)(param_1 + 0x48);
      uVar11 = *(undefined4 *)(param_1 + 0x4c);
      uVar12 = *(undefined4 *)(param_1 + 0x50);
      uVar13 = *(undefined4 *)(param_1 + 0x54);
    }
    if (uVar8 < uVar7) {
      lVar3 = CONCAT44(uVar13,uVar12);
      lVar2 = (ulonglong)uVar8 * 8;
      uVar4 = (**(code **)(param_1 + 0x328))
                        (param_1,*(int *)(lVar2 + lVar3) - *(int *)(lVar2 + CONCAT44(uVar11,uVar10))
                         ,*(int *)(lVar2 + 4 + lVar3) -
                          *(int *)(lVar2 + 4 + CONCAT44(uVar11,uVar10)),param_4,uVar4);
      iVar5 = FUN_143c21f00(uVar4,(int)*(short *)(param_1 + 0x1ca),*(undefined4 *)(param_1 + 0x318))
      ;
      iVar6 = FUN_143c21f00(uVar4,(int)*(short *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x318))
      ;
      uVar7 = 0;
      if (*(short *)(param_1 + 0x1fc) == 0) {
        uVar9 = *(ushort *)(param_1 + 0xc4);
      }
      else if ((*(short *)(param_1 + 0x1fc) == 1) && (0 < *(short *)(param_1 + 0xc6))) {
        uVar9 = *(short *)(*(longlong *)(param_1 + 0xe8) + -2 +
                          (longlong)*(short *)(param_1 + 0xc6) * 2) + 1;
      }
      else {
        uVar9 = 0;
      }
      if (uVar9 != 0) {
        do {
          if ((lVar3 != *(longlong *)(param_1 + 0xd0)) || (uVar8 != uVar7)) {
            if (*(short *)(param_1 + 0x1ca) != 0) {
              piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)uVar7 * 8);
              *piVar1 = *piVar1 + iVar5;
            }
            if (*(short *)(param_1 + 0x1cc) != 0) {
              piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 4 + (ulonglong)uVar7 * 8);
              *piVar1 = *piVar1 + iVar6;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar9);
      }
    }
    else if (*(char *)(param_1 + 0x315) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
      return;
    }
  }
  else if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
    return;
  }
  return;
}



// FUNCTION 143c368d0 FUN_143c368d0 body=141 status=ok
// SIG undefined FUN_143c368d0(void)

void FUN_143c368d0(longlong param_1,int *param_2)

{
  if (*param_2 == 0) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x170);
    *(short *)(param_1 + 0x1f8) = (short)*param_2;
  }
  else {
    if (*param_2 == 1) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0xf8);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x108);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x130);
      *(short *)(param_1 + 0x1f8) = (short)*param_2;
      return;
    }
    if (*(char *)(param_1 + 0x315) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
      return;
    }
  }
  return;
}



// FUNCTION 143c36960 FUN_143c36960 body=136 status=ok
// SIG undefined FUN_143c36960(void)

void FUN_143c36960(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*param_2 == 0) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x140);
    uVar1 = *(undefined4 *)(param_1 + 0x158);
    uVar2 = *(undefined4 *)(param_1 + 0x15c);
    uVar3 = *(undefined4 *)(param_1 + 0x160);
    uVar4 = *(undefined4 *)(param_1 + 0x164);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x150);
    uVar5 = *(undefined4 *)(param_1 + 0x168);
    uVar6 = *(undefined4 *)(param_1 + 0x16c);
    uVar7 = *(undefined4 *)(param_1 + 0x170);
    uVar8 = *(undefined4 *)(param_1 + 0x174);
  }
  else {
    if (*param_2 != 1) {
      if (*(char *)(param_1 + 0x315) == '\0') {
        return;
      }
      *(undefined4 *)(param_1 + 0x18) = 0x86;
      return;
    }
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x100);
    uVar1 = *(undefined4 *)(param_1 + 0x118);
    uVar2 = *(undefined4 *)(param_1 + 0x11c);
    uVar3 = *(undefined4 *)(param_1 + 0x120);
    uVar4 = *(undefined4 *)(param_1 + 0x124);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x110);
    uVar5 = *(undefined4 *)(param_1 + 0x128);
    uVar6 = *(undefined4 *)(param_1 + 300);
    uVar7 = *(undefined4 *)(param_1 + 0x130);
    uVar8 = *(undefined4 *)(param_1 + 0x134);
  }
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  *(undefined4 *)(param_1 + 0xa8) = uVar5;
  *(undefined4 *)(param_1 + 0xac) = uVar6;
  *(undefined4 *)(param_1 + 0xb0) = uVar7;
  *(undefined4 *)(param_1 + 0xb4) = uVar8;
  *(short *)(param_1 + 0x1fa) = (short)*param_2;
  return;
}



// FUNCTION 143c369f0 FUN_143c369f0 body=142 status=ok
// SIG undefined FUN_143c369f0(void)

void FUN_143c369f0(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*param_2 == 0) {
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x140);
    uVar1 = *(undefined4 *)(param_1 + 0x158);
    uVar2 = *(undefined4 *)(param_1 + 0x15c);
    uVar3 = *(undefined4 *)(param_1 + 0x160);
    uVar4 = *(undefined4 *)(param_1 + 0x164);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x150);
    uVar5 = *(undefined4 *)(param_1 + 0x168);
    uVar6 = *(undefined4 *)(param_1 + 0x16c);
    uVar7 = *(undefined4 *)(param_1 + 0x170);
    uVar8 = *(undefined4 *)(param_1 + 0x174);
  }
  else {
    if (*param_2 != 1) {
      if (*(char *)(param_1 + 0x315) == '\0') {
        return;
      }
      *(undefined4 *)(param_1 + 0x18) = 0x86;
      return;
    }
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x100);
    uVar1 = *(undefined4 *)(param_1 + 0x118);
    uVar2 = *(undefined4 *)(param_1 + 0x11c);
    uVar3 = *(undefined4 *)(param_1 + 0x120);
    uVar4 = *(undefined4 *)(param_1 + 0x124);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x110);
    uVar5 = *(undefined4 *)(param_1 + 0x128);
    uVar6 = *(undefined4 *)(param_1 + 300);
    uVar7 = *(undefined4 *)(param_1 + 0x130);
    uVar8 = *(undefined4 *)(param_1 + 0x134);
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  *(undefined4 *)(param_1 + 0xe0) = uVar3;
  *(undefined4 *)(param_1 + 0xe4) = uVar4;
  *(undefined4 *)(param_1 + 0xe8) = uVar5;
  *(undefined4 *)(param_1 + 0xec) = uVar6;
  *(undefined4 *)(param_1 + 0xf0) = uVar7;
  *(undefined4 *)(param_1 + 0xf4) = uVar8;
  *(short *)(param_1 + 0x1fc) = (short)*param_2;
  return;
}



// FUNCTION 143c36a80 FUN_143c36a80 body=233 status=ok
// SIG undefined FUN_143c36a80(void)

void FUN_143c36a80(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*param_2 == 0) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x140);
    uVar1 = *(undefined4 *)(param_1 + 0x158);
    uVar2 = *(undefined4 *)(param_1 + 0x15c);
    uVar3 = *(undefined4 *)(param_1 + 0x160);
    uVar4 = *(undefined4 *)(param_1 + 0x164);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x150);
    uVar5 = *(undefined4 *)(param_1 + 0x168);
    uVar6 = *(undefined4 *)(param_1 + 0x16c);
    uVar7 = *(undefined4 *)(param_1 + 0x170);
    uVar8 = *(undefined4 *)(param_1 + 0x174);
  }
  else {
    if (*param_2 != 1) {
      if (*(char *)(param_1 + 0x315) == '\0') {
        return;
      }
      *(undefined4 *)(param_1 + 0x18) = 0x86;
      return;
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x100);
    uVar1 = *(undefined4 *)(param_1 + 0x118);
    uVar2 = *(undefined4 *)(param_1 + 0x11c);
    uVar3 = *(undefined4 *)(param_1 + 0x120);
    uVar4 = *(undefined4 *)(param_1 + 0x124);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x110);
    uVar5 = *(undefined4 *)(param_1 + 0x128);
    uVar6 = *(undefined4 *)(param_1 + 300);
    uVar7 = *(undefined4 *)(param_1 + 0x130);
    uVar8 = *(undefined4 *)(param_1 + 0x134);
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x70);
  *(short *)(param_1 + 0x1f8) = (short)*param_2;
  *(short *)(param_1 + 0x1fa) = (short)*param_2;
  *(short *)(param_1 + 0x1fc) = (short)*param_2;
  return;
}



// FUNCTION 143c36b70 FUN_143c36b70 body=153 status=ok
// SIG undefined FUN_143c36b70(void)

undefined8 FUN_143c36b70(longlong param_1,ushort param_2,ushort param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = *(byte *)(param_1 + 0x218);
  if ((param_2 < *(ushort *)(param_1 + 0xc4)) && (param_3 < *(ushort *)(param_1 + 0x84))) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)param_3 * 8) -
            *(int *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)param_2 * 8);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)param_3 * 8) -
            *(int *)(*(longlong *)(param_1 + 0xd0) + 4 + (ulonglong)param_2 * 8);
    if ((iVar1 == 0) && (iVar3 == 0)) {
      iVar1 = 0x4000;
      bVar4 = 0;
    }
    iVar2 = iVar1;
    if ((bVar4 & 1) != 0) {
      iVar2 = -iVar3;
      iVar3 = iVar1;
    }
    FUN_143c36d80(iVar2,iVar3,param_4);
    return 0;
  }
  if (*(char *)(param_1 + 0x315) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  return 1;
}



// FUNCTION 143c36c10 FUN_143c36c10 body=284 status=ok
// SIG undefined FUN_143c36c10(void)

void FUN_143c36c10(longlong param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar7 = *(int **)(param_1 + 600);
  piVar2 = piVar7 + (ulonglong)*(uint *)(param_1 + 0x250) * 6;
  if (piVar7 < piVar2) {
    do {
      if (((char)piVar7[3] == *(char *)(param_1 + 0x218)) && ((char)piVar7[4] != '\0')) {
        iVar4 = *(int *)(param_1 + 0x268);
        if (*(int *)(param_1 + 0x26c) <= iVar4) {
          *(undefined4 *)(param_1 + 0x18) = 0x82;
          return;
        }
        puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar4 * 0x18);
        *(int *)(param_1 + 0x268) = iVar4 + 1;
        *puVar3 = *(undefined4 *)(param_1 + 0x200);
        iVar4 = *(int *)(param_1 + 0x210);
        *(int **)(puVar3 + 4) = piVar7;
        puVar3[1] = iVar4 + 1;
        puVar3[2] = 1;
        iVar4 = *piVar7;
        iVar5 = piVar7[1];
        uVar1 = iVar4 - 1;
        if (2 < uVar1) {
          *(undefined4 *)(param_1 + 0x18) = 0x84;
          *(undefined1 *)(param_1 + 0x220) = 0;
          return;
        }
        lVar8 = (longlong)(int)uVar1 + 0x28;
        lVar6 = *(longlong *)(param_1 + lVar8 * 0x10);
        if (lVar6 == 0) {
          *(undefined4 *)(param_1 + 0x18) = 0x8a;
          *(undefined1 *)(param_1 + 0x220) = 0;
          return;
        }
        if (*(int *)(param_1 + 8 + lVar8 * 0x10) < iVar5) {
          *(undefined4 *)(param_1 + 0x18) = 0x83;
          *(undefined1 *)(param_1 + 0x220) = 0;
          return;
        }
        *(longlong *)(param_1 + 0x208) = lVar6;
        *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 8 + lVar8 * 0x10);
        *(int *)(param_1 + 0x210) = iVar5;
        *(int *)(param_1 + 0x200) = iVar4;
        *(undefined1 *)(param_1 + 0x220) = 0;
        return;
      }
      piVar7 = piVar7 + 6;
    } while (piVar7 < piVar2);
  }
  *(undefined4 *)(param_1 + 0x18) = 0x80;
  return;
}



// FUNCTION 143c36d40 FUN_143c36d40 body=53 status=ok
// SIG undefined FUN_143c36d40(void)

void FUN_143c36d40(longlong param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x228) + (ulonglong)param_2 * 4);
  uVar2 = FUN_143c33b20();
  iVar3 = FUN_143c20070(param_3,uVar2);
  *piVar1 = *piVar1 + iVar3;
  return;
}



// FUNCTION 143c36d80 FUN_143c36d80 body=137 status=ok
// SIG undefined FUN_143c36d80(void)

ulonglong FUN_143c36d80(uint param_1,uint param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (((int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) < 0x4000) &&
     (uVar2 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f), uVar4 = (ulonglong)uVar2,
     (int)uVar2 < 0x4000)) {
    if ((param_1 == 0) && (param_2 == 0)) goto LAB_143c36df6;
    param_1 = param_1 << 0xe;
    param_2 = param_2 << 0xe;
  }
  iVar3 = FUN_143c21590(param_1,param_2);
  uVar1 = FUN_143c20070(param_1,iVar3 * 4);
  *param_3 = uVar1;
  uVar4 = FUN_143c20070(param_2,iVar3 * 4);
  param_3[1] = (short)uVar4;
LAB_143c36df6:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143c36e10 FUN_143c36e10 body=163 status=ok
// SIG undefined FUN_143c36e10(void)

uint FUN_143c36e10(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = (param_2 & 0xffff) * (int)*(short *)(param_1 + 0x1c6);
  iVar4 = ((int)param_2 >> 0x10) * (int)*(short *)(param_1 + 0x1c6);
  uVar6 = iVar4 * 0x10000 + uVar3;
  uVar7 = (param_3 & 0xffff) * (int)*(short *)(param_1 + 0x1c8);
  iVar5 = ((int)param_3 >> 0x10) * (int)*(short *)(param_1 + 0x1c8);
  uVar2 = iVar5 * 0x10000 + uVar7;
  uVar1 = uVar2 + uVar6;
  iVar5 = ((int)uVar7 >> 0x1f) +
          (iVar5 >> 0x10) + (iVar4 >> 0x10) + (uint)(uVar6 < uVar3) + ((int)uVar3 >> 0x1f) +
          (uint)(uVar2 < uVar7) + (uint)(uVar1 < uVar6);
  iVar4 = iVar5 >> 0x1f;
  uVar2 = iVar4 + uVar1;
  return (iVar5 + iVar4 + (uint)(uVar2 < uVar1) + (uint)(uVar2 + 0x2000 < uVar2)) * 0x40000 |
         uVar2 + 0x2000 >> 0xe;
}



// FUNCTION 143c36ee0 Read_CVT_Stretched body=47 status=ok
// SIG undefined Read_CVT_Stretched(void)

void Read_CVT_Stretched(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143c33b20();
  FUN_143c22100(*(undefined4 *)(*(longlong *)(param_1 + 0x228) + (param_2 & 0xffffffff) * 4),uVar1);
  return;
}



// FUNCTION 143c370f0 FUN_143c370f0 body=228 status=ok
// SIG undefined FUN_143c370f0(void)

void FUN_143c370f0(longlong param_1,short param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 & 0xc0;
  if (uVar3 == 0) {
    iVar1 = (int)param_2 / 2;
  }
  else {
    if (uVar3 != 0x40) {
      if (uVar3 == 0x80) {
        iVar1 = param_2 * 2;
        goto LAB_143c37125;
      }
      if (uVar3 != 0xc0) goto LAB_143c3712b;
    }
    iVar1 = (int)param_2;
  }
LAB_143c37125:
  *(int *)(param_1 + 0x2c0) = iVar1;
LAB_143c3712b:
  uVar3 = param_3 & 0x30;
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0x2c4) = 0;
  }
  else if (uVar3 == 0x10) {
    *(int *)(param_1 + 0x2c4) =
         (int)(*(int *)(param_1 + 0x2c0) + (*(int *)(param_1 + 0x2c0) >> 0x1f & 3U)) >> 2;
  }
  else if (uVar3 == 0x20) {
    *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c0) / 2;
  }
  else if (uVar3 == 0x30) {
    iVar1 = *(int *)(param_1 + 0x2c0) * 3;
    *(int *)(param_1 + 0x2c4) = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  }
  iVar1 = *(int *)(param_1 + 0x2c0);
  if ((param_3 & 0xf) == 0) {
    iVar2 = iVar1 + -1;
  }
  else {
    iVar2 = ((param_3 & 0xf) - 4) * iVar1;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  }
  *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) >> 8;
  *(int *)(param_1 + 0x2c8) = iVar2;
  *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) >> 8;
  *(int *)(param_1 + 0x2c0) = iVar1 >> 8;
  return;
}



// FUNCTION 143c371e0 FUN_143c371e0 body=94 status=ok
// SIG undefined FUN_143c371e0(void)

undefined8 FUN_143c371e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = FUN_143c251d0(lVar1,param_3);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_143c24650(lVar1,param_4);
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(lVar1 + 0x40);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 143c37240 FUN_143c37240 body=139 status=ok
// SIG undefined FUN_143c37240(void)

void FUN_143c37240(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  *(undefined4 *)(param_1 + 0x4f) = 0;
  ft_mem_free(uVar1,param_1[5]);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  ft_mem_free(uVar1,param_1[0x4e]);
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  ft_mem_free(uVar1,param_1[0x47]);
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  ft_mem_free(uVar1,param_1);
  return;
}



// FUNCTION 143c372e0 FUN_143c372e0 body=681 status=ok
// SIG undefined FUN_143c372e0(void)

undefined8 FUN_143c372e0(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xd8);
  if (0 < iVar1) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0xc0),*(void **)(param_1 + 200),
               (ulonglong)*(ushort *)(param_1 + 0xbc) << 3);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0xf0);
  uVar8 = *(undefined8 *)(lVar2 + 0xe8);
  *(undefined8 *)(lVar3 + 0x1bc) = *(undefined8 *)(lVar2 + 0xe0);
  *(undefined8 *)(lVar3 + 0x1c4) = uVar8;
  uVar8 = *(undefined8 *)(lVar2 + 0xf8);
  *(undefined8 *)(lVar3 + 0x1cc) = *(undefined8 *)(lVar2 + 0xf0);
  *(undefined8 *)(lVar3 + 0x1d4) = uVar8;
  uVar8 = *(undefined8 *)(lVar2 + 0x108);
  *(undefined8 *)(lVar3 + 0x1dc) = *(undefined8 *)(lVar2 + 0x100);
  *(undefined8 *)(lVar3 + 0x1e4) = uVar8;
  uVar8 = *(undefined8 *)(lVar2 + 0x118);
  *(undefined8 *)(lVar3 + 0x1ec) = *(undefined8 *)(lVar2 + 0x110);
  *(undefined8 *)(lVar3 + 500) = uVar8;
  *(undefined4 *)(lVar3 + 0x1fc) = *(undefined4 *)(lVar2 + 0x120);
  if (param_2 == '\0') {
    *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0x17c) =
         *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x44);
    *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0x180) =
         *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48);
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0x17c) = 0x10000;
    *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0x180) = 0x10000;
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0xd0),*(void **)(param_1 + 200),
               (ulonglong)*(ushort *)(param_1 + 0xbc) << 3);
  }
  *(uint *)(*(longlong *)(param_1 + 200) + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8 + -0x20) =
       *(int *)(*(longlong *)(param_1 + 200) + -0x20 + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8) +
       0x20U & 0xffffffc0;
  *(uint *)(*(longlong *)(param_1 + 200) + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8 + -0x18) =
       *(int *)(*(longlong *)(param_1 + 200) + -0x18 + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8) +
       0x20U & 0xffffffc0;
  *(uint *)(*(longlong *)(param_1 + 200) + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8 + -0xc) =
       *(int *)(*(longlong *)(param_1 + 200) + -0xc + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8) +
       0x20U & 0xffffffc0;
  *(uint *)(*(longlong *)(param_1 + 200) + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8 + -4) =
       *(int *)(*(longlong *)(param_1 + 200) + -4 + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8) +
       0x20U & 0xffffffc0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0xf0);
    pbVar7 = *(byte **)(*(longlong *)(param_1 + 0x18) + 0x70);
    *(undefined8 *)(lVar2 + 0x2a0) = *(undefined8 *)(lVar2 + 0x238);
    *(int *)(lVar2 + 0x2a8) = iVar1;
    *(char *)(*(longlong *)(param_1 + 0xf0) + 0x314) = param_2;
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    lVar2 = *(longlong *)(param_1 + 0xf0);
    *(undefined8 *)(lVar2 + 0xf8) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(lVar2 + 0x100) = uVar8;
    uVar8 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(lVar2 + 0x108) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(lVar2 + 0x110) = uVar8;
    uVar4 = *(undefined4 *)(param_1 + 0xd4);
    uVar5 = *(undefined4 *)(param_1 + 0xd8);
    uVar6 = *(undefined4 *)(param_1 + 0xdc);
    *(undefined4 *)(lVar2 + 0x118) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(lVar2 + 0x11c) = uVar4;
    *(undefined4 *)(lVar2 + 0x120) = uVar5;
    *(undefined4 *)(lVar2 + 0x124) = uVar6;
    uVar4 = *(undefined4 *)(param_1 + 0xe4);
    uVar5 = *(undefined4 *)(param_1 + 0xe8);
    uVar6 = *(undefined4 *)(param_1 + 0xec);
    *(undefined4 *)(lVar2 + 0x128) = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(lVar2 + 300) = uVar4;
    *(undefined4 *)(lVar2 + 0x130) = uVar5;
    *(undefined4 *)(lVar2 + 0x134) = uVar6;
    uVar8 = FUN_143c39d60(*(undefined8 *)(param_1 + 0xf0));
    if (((int)uVar8 != 0) && (*(char *)(*(longlong *)(param_1 + 0xf0) + 0x315) != '\0')) {
      return uVar8;
    }
    *pbVar7 = *pbVar7 | *(char *)(*(longlong *)(param_1 + 0xf0) + 500) << 5 | 4U;
  }
  *(undefined8 *)(param_1 + 0x58) =
       *(undefined8 *)
        (*(longlong *)(param_1 + 200) + -0x20 + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8);
  *(undefined8 *)(param_1 + 0x60) =
       *(undefined8 *)
        (*(longlong *)(param_1 + 200) + -0x18 + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8);
  *(undefined8 *)(param_1 + 0x118) =
       *(undefined8 *)
        (*(longlong *)(param_1 + 200) + -0x10 + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8);
  *(undefined8 *)(param_1 + 0x120) =
       *(undefined8 *)
        (*(longlong *)(param_1 + 200) + -8 + (ulonglong)*(ushort *)(param_1 + 0xbc) * 8);
  return 0;
}



// FUNCTION 143c37590 FUN_143c37590 body=662 status=ok
// SIG undefined FUN_143c37590(void)

ulonglong FUN_143c37590(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  pbVar14 = *(byte **)(param_1 + 0x128);
  pbVar6 = *(byte **)(param_1 + 0x130);
  lVar7 = *(longlong *)(param_1 + 0x18);
  pbVar16 = pbVar14 + 4;
  uVar18 = 0;
  do {
    uVar15 = uVar18 + 1;
    uVar9 = FUN_143c211d0(lVar7,uVar15);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    if (pbVar6 < pbVar16) {
      return 0x15;
    }
    uVar19 = 0;
    puVar12 = (uint *)((ulonglong)uVar18 * 0x20 + *(longlong *)(lVar7 + 0xa0));
    puVar12[2] = 0;
    puVar12[3] = 0;
    bVar4 = pbVar14[1];
    pbVar13 = pbVar14 + 4;
    *(ushort *)(puVar12 + 1) = CONCAT11(*pbVar14,bVar4);
    *puVar12 = (uint)CONCAT11(pbVar14[2],pbVar14[3]);
    uVar10 = 2;
    if ((bVar4 & 1) != 0) {
      uVar10 = 4;
    }
    iVar8 = (int)uVar10;
    if ((bVar4 & 8) == 0) {
      if ((bVar4 & 0x40) == 0) {
        if ((char)bVar4 < '\0') {
          uVar10 = (ulonglong)(iVar8 + 8);
        }
      }
      else {
        uVar10 = (ulonglong)(iVar8 + 4);
      }
    }
    else {
      uVar10 = (ulonglong)(iVar8 + 2);
    }
    if (pbVar6 < pbVar13 + uVar10) {
      return 0x15;
    }
    if ((bVar4 & 2) == 0) {
      if ((bVar4 & 1) == 0) {
        puVar12[2] = (uint)*pbVar13;
        uVar18 = (uint)pbVar14[5];
        goto LAB_143c376fb;
      }
      pbVar16 = pbVar16 + 8;
      puVar12[2] = (uint)CONCAT11(*pbVar13,pbVar14[5]);
      puVar12[3] = (uint)CONCAT11(pbVar14[6],pbVar14[7]);
      pbVar14 = pbVar14 + 8;
    }
    else if ((bVar4 & 1) == 0) {
      puVar12[2] = (int)(char)*pbVar13;
      uVar18 = (uint)(char)pbVar14[5];
LAB_143c376fb:
      puVar12[3] = uVar18;
      pbVar16 = pbVar16 + 6;
      pbVar14 = pbVar14 + 6;
    }
    else {
      pbVar16 = pbVar16 + 8;
      puVar12[2] = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar14[5];
      puVar12[3] = (int)(short)((ushort)pbVar14[6] << 8) | (uint)pbVar14[7];
      pbVar14 = pbVar14 + 8;
    }
    uVar11 = 0x10000;
    uVar18 = 0;
    uVar17 = 0x10000;
    if ((bVar4 & 8) == 0) {
      if ((bVar4 & 0x40) == 0) {
        if (-1 < (char)bVar4) goto LAB_143c377be;
        uVar11 = (int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1];
        pbVar13 = pbVar14 + 2;
        pbVar1 = pbVar14 + 3;
        pbVar2 = pbVar14 + 4;
        pbVar3 = pbVar14 + 5;
        pbVar14 = pbVar14 + 8;
        uVar18 = ((int)(short)((ushort)*pbVar13 << 8) | (uint)*pbVar1) << 2;
        uVar19 = ((int)(short)((ushort)*pbVar2 << 8) | (uint)*pbVar3) << 2;
        pbVar16 = pbVar16 + 8;
      }
      else {
        bVar5 = *pbVar14;
        pbVar13 = pbVar14 + 1;
        pbVar14 = pbVar14 + 4;
        uVar11 = (int)(short)((ushort)bVar5 << 8) | (uint)*pbVar13;
        pbVar16 = pbVar16 + 4;
        uVar18 = uVar19;
      }
      uVar11 = uVar11 << 2;
      uVar17 = ((int)(short)((ushort)pbVar14[-2] << 8) | (uint)pbVar14[-1]) << 2;
    }
    else {
      pbVar16 = pbVar16 + 2;
      uVar11 = ((int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1]) << 2;
      pbVar14 = pbVar14 + 2;
      uVar17 = uVar11;
    }
LAB_143c377be:
    puVar12[4] = uVar11;
    puVar12[5] = uVar19;
    puVar12[6] = uVar18;
    puVar12[7] = uVar17;
    uVar18 = uVar15;
    if ((bVar4 & 0x20) == 0) {
      *(uint *)(lVar7 + 0x98) = uVar15;
      iVar8 = IStreamingManager::GetNumWantingResourcesID(*(undefined8 *)(param_1 + 0x28));
      *(byte **)(param_1 + 0x128) = pbVar14;
      *(int *)(param_1 + 0x100) = iVar8 + ((int)pbVar14 - (int)pbVar6);
      return uVar9 & 0xffffffff;
    }
  } while( true );
}



// FUNCTION 143c37830 FUN_143c37830 body=951 status=ok
// SIG undefined FUN_143c37830(void)

void FUN_143c37830(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_res8 [2];
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_3 + 0x88);
    *(undefined4 *)((longlong)param_1 + 0x244) = *(undefined4 *)(param_3 + 0x8c);
    *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_3 + 0x98);
    *(undefined4 *)((longlong)param_1 + 0x254) = *(undefined4 *)(param_3 + 0x9c);
    param_1[0x49] = *(longlong *)(param_3 + 0x90);
    param_1[0x4b] = *(longlong *)(param_3 + 0xa0);
    uVar2 = *(undefined8 *)(param_3 + 100);
    *(undefined8 *)((longlong)param_1 + 0x194) = *(undefined8 *)(param_3 + 0x5c);
    *(undefined8 *)((longlong)param_1 + 0x19c) = uVar2;
    uVar2 = *(undefined8 *)(param_3 + 0x74);
    *(undefined8 *)((longlong)param_1 + 0x1a4) = *(undefined8 *)(param_3 + 0x6c);
    *(undefined8 *)((longlong)param_1 + 0x1ac) = uVar2;
    *(undefined8 *)((longlong)param_1 + 0x1b4) = *(undefined8 *)(param_3 + 0x7c);
    lVar4 = *(longlong *)(param_3 + 0x48);
    param_1[0x2f] = *(longlong *)(param_3 + 0x40);
    param_1[0x30] = lVar4;
    param_1[0x31] = *(longlong *)(param_3 + 0x50);
    *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_3 + 0xa8);
    *(undefined4 *)((longlong)param_1 + 0x264) = *(undefined4 *)(param_3 + 0xac);
    lVar4 = *(longlong *)(param_3 + 0xb8);
    param_1[0x50] = *(longlong *)(param_3 + 0xb0);
    param_1[0x51] = lVar4;
    lVar4 = *(longlong *)(param_3 + 200);
    param_1[0x52] = *(longlong *)(param_3 + 0xc0);
    param_1[0x53] = lVar4;
    lVar4 = *(longlong *)(param_3 + 0xd8);
    param_1[0x54] = *(longlong *)(param_3 + 0xd0);
    param_1[0x55] = lVar4;
    uVar2 = *(undefined8 *)(param_3 + 0xe8);
    *(undefined8 *)((longlong)param_1 + 0x1bc) = *(undefined8 *)(param_3 + 0xe0);
    *(undefined8 *)((longlong)param_1 + 0x1c4) = uVar2;
    uVar2 = *(undefined8 *)(param_3 + 0xf8);
    *(undefined8 *)((longlong)param_1 + 0x1cc) = *(undefined8 *)(param_3 + 0xf0);
    *(undefined8 *)((longlong)param_1 + 0x1d4) = uVar2;
    uVar2 = *(undefined8 *)(param_3 + 0x108);
    *(undefined8 *)((longlong)param_1 + 0x1dc) = *(undefined8 *)(param_3 + 0x100);
    *(undefined8 *)((longlong)param_1 + 0x1e4) = uVar2;
    uVar2 = *(undefined8 *)(param_3 + 0x118);
    *(undefined8 *)((longlong)param_1 + 0x1ec) = *(undefined8 *)(param_3 + 0x110);
    *(undefined8 *)((longlong)param_1 + 500) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x120);
    *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)(param_3 + 0x124);
    param_1[0x45] = *(longlong *)(param_3 + 0x128);
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_3 + 0x130);
    param_1[0x57] = *(longlong *)(param_3 + 0x138);
    lVar4 = *(longlong *)(param_3 + 0x148);
    param_1[0x27] = *(longlong *)(param_3 + 0x140);
    param_1[0x28] = lVar4;
    lVar4 = *(longlong *)(param_3 + 0x158);
    param_1[0x29] = *(longlong *)(param_3 + 0x150);
    param_1[0x2a] = lVar4;
    lVar4 = *(longlong *)(param_3 + 0x168);
    param_1[0x2b] = *(longlong *)(param_3 + 0x160);
    param_1[0x2c] = lVar4;
    lVar4 = *(longlong *)(param_3 + 0x178);
    param_1[0x2d] = *(longlong *)(param_3 + 0x170);
    param_1[0x2e] = lVar4;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = param_1[7];
    param_1[0x10] = param_1[8];
    param_1[0x11] = param_1[9];
    param_1[0x12] = param_1[10];
    param_1[0x13] = param_1[0xb];
    param_1[0x14] = param_1[0xc];
    param_1[0x15] = param_1[0xd];
    param_1[0x16] = param_1[0xe];
    param_1[0x17] = param_1[7];
    param_1[0x18] = param_1[8];
    param_1[0x19] = param_1[9];
    param_1[0x1a] = param_1[10];
    *(int *)(param_1 + 0x1b) = (int)param_1[0xb];
    *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_1 + 0x5c);
    *(int *)(param_1 + 0x1c) = (int)param_1[0xc];
    *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_1 + 100);
    *(int *)(param_1 + 0x1d) = (int)param_1[0xd];
    *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_1 + 0x6c);
    *(int *)(param_1 + 0x1e) = (int)param_1[0xe];
    *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_1 + 0x74);
  }
  uVar6 = *(uint *)(param_1 + 4);
  uVar7 = *(ushort *)(param_2 + 0x188) + 0x20;
  uVar5 = uVar6;
  if (uVar6 < uVar7) {
    lVar4 = FUN_143c27410(param_1[2],1,uVar6 * 4,uVar7 * 4,param_1[5],local_res8);
    param_1[5] = lVar4;
    uVar5 = uVar7;
    iVar3 = local_res8[0];
    if (local_res8[0] == 0) goto LAB_143c37abf;
  }
  else {
LAB_143c37abf:
    iVar3 = 0;
    uVar6 = uVar5;
  }
  *(uint *)(param_1 + 4) = uVar6;
  if (iVar3 != 0) {
    return;
  }
  uVar1 = *(ushort *)(param_2 + 0x18a);
  uVar6 = *(uint *)(param_1 + 0x46);
  if (uVar6 < uVar1) {
    lVar4 = FUN_143c27410(param_1[2],1,uVar6,(uint)uVar1,param_1[0x47],local_res8);
    param_1[0x47] = lVar4;
    if (local_res8[0] != 0) goto LAB_143c37b1c;
    uVar6 = (uint)uVar1;
  }
  local_res8[0] = 0;
LAB_143c37b1c:
  *(uint *)(param_1 + 0x46) = uVar6 & 0xffff;
  if (local_res8[0] == 0) {
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
    *(undefined1 *)((longlong)param_1 + 0x2cc) = 0;
    param_1[0xf] = param_1[0x1f];
    param_1[0x10] = param_1[0x20];
    param_1[0x11] = param_1[0x21];
    param_1[0x12] = param_1[0x22];
    param_1[0x13] = param_1[0x23];
    param_1[0x14] = param_1[0x24];
    param_1[0x15] = param_1[0x25];
    param_1[0x16] = param_1[0x26];
    param_1[0x17] = param_1[0x1f];
    param_1[0x18] = param_1[0x20];
    param_1[0x19] = param_1[0x21];
    param_1[0x1a] = param_1[0x22];
    param_1[0x1b] = param_1[0x23];
    param_1[0x1c] = param_1[0x24];
    param_1[0x1d] = param_1[0x25];
    param_1[0x1e] = param_1[0x26];
    param_1[7] = param_1[0x1f];
    param_1[8] = param_1[0x20];
    param_1[9] = param_1[0x21];
    param_1[10] = param_1[0x22];
    param_1[0xb] = param_1[0x23];
    param_1[0xc] = param_1[0x24];
    param_1[0xd] = param_1[0x25];
    param_1[0xe] = param_1[0x26];
  }
  return;
}



// FUNCTION 143c37bf0 FUN_143c37bf0 body=683 status=ok
// SIG undefined FUN_143c37bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c37bf0(longlong param_1,longlong param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  uint local_168;
  undefined8 local_160;
  int local_138;
  int local_130;
  undefined4 local_120;
  longlong local_98;
  undefined4 local_74;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if (((*(int *)(param_1 + 0x84) != -1) && ((param_4 & 8) == 0)) &&
     (iVar5 = FUN_143c3b170(), iVar5 == 0)) {
    lVar1 = *(longlong *)(param_2 + 8);
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa0);
      _guard_xfg_dispatch_icall_nop(&local_188,0,0x138);
      if (*(longlong *)(*(longlong *)(lVar1 + 0xd0) + 0x48) == 0) {
        iVar5 = (**(code **)(lVar1 + 0x290))(lVar1,0x676c7966,uVar2,0);
        if ((char)iVar5 == -0x72) {
          local_120 = 0;
          local_188 = lVar1;
          local_180 = param_1;
          local_178 = param_2;
          local_168 = param_4;
          local_160 = uVar2;
        }
        else if (iVar5 == 0) {
          local_120 = IStreamingManager::GetNumWantingResourcesID(uVar2);
          local_188 = lVar1;
          local_180 = param_1;
          local_178 = param_2;
          local_168 = param_4;
          local_160 = uVar2;
        }
      }
      else {
        local_120 = 0;
        local_188 = lVar1;
        local_180 = param_1;
        local_178 = param_2;
        local_168 = param_4;
        local_160 = uVar2;
      }
      FUN_143c3b280(&local_188,param_3,0,1);
      *(int *)(param_2 + 0x50) = local_138;
      *(undefined4 *)(param_2 + 0x54) = local_74;
      if ((*(int *)(param_2 + 0x40) == 0) && (local_138 != 0)) {
        uVar6 = FUN_143c22100(local_138,*(undefined4 *)(param_1 + 0x1c));
        *(undefined4 *)(param_2 + 0x40) = uVar6;
      }
      if ((*(int *)(param_2 + 0x4c) == 0) && (*(int *)(param_2 + 0x54) != 0)) {
        uVar6 = FUN_143c22100(*(int *)(param_2 + 0x54),*(undefined4 *)(param_1 + 0x20));
        *(undefined4 *)(param_2 + 0x4c) = uVar6;
      }
    }
    return 0;
  }
  if (((param_4 & 1) == 0) && (*(char *)(param_1 + 0x80) == (char)(param_4 & 1))) {
    return (ulonglong)((param_4 & 1) + 0x24);
  }
  if ((param_4 >> 0xe & 1) != 0) {
    return 6;
  }
  local_198 = 0;
  uVar7 = FUN_143c3d350(&local_188,param_1,param_2,param_4);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  *(undefined4 *)(param_2 + 0x60) = 0x6f75746c;
  *(undefined4 *)(param_2 + 0xc0) = 0;
  *(undefined4 *)(param_2 + 0xb8) = 0;
  uVar7 = FUN_143c3b280(&local_188,param_3,0,0);
  if ((int)uVar7 != 0) goto LAB_143c37e68;
  if (*(int *)(param_2 + 0x60) == 0x636f6d70) {
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(local_170 + 0x50);
    *(undefined8 *)(param_2 + 200) = *(undefined8 *)(local_170 + 0x58);
  }
  else {
    uVar2 = *(undefined8 *)(local_170 + 0x20);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(local_170 + 0x18);
    *(undefined8 *)(param_2 + 0xa0) = uVar2;
    uVar6 = *(undefined4 *)(local_170 + 0x2c);
    uVar3 = *(undefined4 *)(local_170 + 0x30);
    uVar4 = *(undefined4 *)(local_170 + 0x34);
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(local_170 + 0x28);
    *(undefined4 *)(param_2 + 0xac) = uVar6;
    *(undefined4 *)(param_2 + 0xb0) = uVar3;
    *(undefined4 *)(param_2 + 0xb4) = uVar4;
    *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(local_170 + 0x38);
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) & 0xfffffdff;
    if (local_130 != 0) {
      FUN_143c23560((undefined8 *)(param_2 + 0x98),-local_130,0);
    }
  }
  if ((param_4 & 2) == 0) {
    if (*(char *)(local_98 + 0x1f1) == '\0') {
LAB_143c37e54:
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 8;
    }
    else {
      iVar5 = *(int *)(local_98 + 500);
      if (iVar5 == 0) {
        *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x20;
      }
      else if (iVar5 != 1) {
        if (iVar5 == 4) {
          *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x30;
        }
        else {
          if (iVar5 != 5) goto LAB_143c37e54;
          *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x10;
        }
      }
    }
  }
  uVar7 = FUN_143c3a790(&local_188,param_3);
LAB_143c37e68:
  if (((param_4 & 1) == 0) && (*(ushort *)(param_1 + 0x1a) < 0x18)) {
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x100;
  }
  return uVar7;
}



// FUNCTION 143c37f40 FUN_143c37f40 body=1060 status=ok
// SIG undefined FUN_143c37f40(void)

int FUN_143c37f40(longlong param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  char *pcVar6;
  byte *pbVar7;
  longlong lVar8;
  short *psVar9;
  bool bVar10;
  char *pcVar11;
  short *psVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  short sVar17;
  ushort uVar18;
  uint uVar19;
  ulonglong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  short sVar25;
  uint uVar26;
  byte *pbVar27;
  byte *pbVar28;
  int *piVar29;
  ulonglong uVar30;
  byte *pbVar31;
  longlong lVar32;
  int local_res8;
  int local_res10 [2];
  int local_res18;
  
  sVar5 = *(short *)(param_1 + 0x34);
  pcVar6 = *(char **)(param_1 + 0x128);
  pbVar7 = *(byte **)(param_1 + 0x130);
  lVar8 = *(longlong *)(param_1 + 0x18);
  local_res18 = (int)sVar5;
  iVar15 = (int)sVar5;
  if (((local_res18 != 0) &&
      (*(uint *)(lVar8 + 0xc) <
       (uint)((int)*(short *)(lVar8 + 0x18) + (int)*(short *)(lVar8 + 0x60) + (int)sVar5))) &&
     (iVar14 = FUN_143c20e90(lVar8,0,iVar15), iVar14 != 0)) {
    return iVar14;
  }
  psVar9 = *(short **)(lVar8 + 0x78);
  if (0xffe < iVar15) {
    return 0x14;
  }
  if (pbVar7 < pcVar6 + (sVar5 * 2 + 2)) {
    return 0x14;
  }
  cVar2 = *pcVar6;
  sVar25 = CONCAT11(cVar2,pcVar6[1]);
  if (0 < sVar5) {
    *psVar9 = sVar25;
  }
  psVar13 = psVar9;
  if (cVar2 < '\0') {
    return 0x14;
  }
  while( true ) {
    psVar12 = psVar13 + 1;
    pcVar11 = pcVar6 + 2;
    if (psVar9 + sVar5 <= psVar12) break;
    sVar17 = CONCAT11(*pcVar11,pcVar6[3]);
    *psVar12 = sVar17;
    bVar10 = sVar17 <= sVar25;
    sVar25 = sVar17;
    pcVar6 = pcVar11;
    psVar13 = psVar12;
    if (bVar10) {
      return 0x14;
    }
  }
  local_res8 = 0;
  if ((0 < iVar15) && (local_res8 = *psVar13 + 1, local_res8 < 0)) {
    return 0x14;
  }
  if ((local_res8 + 4 != 0) &&
     ((*(uint *)(lVar8 + 8) <
       (uint)(*(short *)(lVar8 + 0x1a) + 4 + *(short *)(lVar8 + 0x62) + local_res8) &&
      (iVar15 = FUN_143c20e90(lVar8,local_res8 + 4,0), iVar15 != 0)))) {
    return iVar15;
  }
  pbVar23 = (byte *)(pcVar6 + 4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xd8) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd0) = 0;
  if (pbVar7 < pbVar23) {
    return 0x14;
  }
  uVar18 = CONCAT11(*pcVar11,pcVar6[3]);
  uVar20 = (ulonglong)uVar18;
  if ((longlong)pbVar7 - (longlong)pbVar23 < (longlong)uVar20) {
    return 0x16;
  }
  if ((*(byte *)(param_1 + 0x20) & 2) != 0) goto LAB_143c3818e;
  lVar32 = *(longlong *)(param_1 + 0xf0);
  uVar19 = *(uint *)(lVar32 + 0x230);
  uVar26 = uVar19;
  if (uVar19 < uVar18) {
    uVar16 = FUN_143c27410(*(undefined8 *)(lVar32 + 0x10),1,uVar19,(uint)uVar18,
                           *(undefined8 *)(lVar32 + 0x238),local_res10);
    *(undefined8 *)(lVar32 + 0x238) = uVar16;
    uVar26 = (uint)uVar18;
    if (local_res10[0] == 0) goto LAB_143c3812d;
  }
  else {
LAB_143c3812d:
    local_res10[0] = 0;
    uVar19 = uVar26;
  }
  *(uint *)(*(longlong *)(param_1 + 0xf0) + 0x230) = uVar19 & 0xffff;
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  *(uint *)(*(longlong *)(param_1 + 0x10) + 0xd8) = (uint)uVar18;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd0) =
       *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x238);
  _guard_xfg_dispatch_icall_nop(*(void **)(*(longlong *)(param_1 + 0xf0) + 0x238),pbVar23,uVar20);
LAB_143c3818e:
  pbVar22 = *(byte **)(lVar8 + 0x70);
  pbVar23 = pbVar23 + uVar20;
  lVar32 = (longlong)local_res8;
  pbVar31 = pbVar22 + lVar32;
  if (pbVar22 < pbVar31) {
    pbVar28 = pbVar23;
    pbVar24 = pbVar23 + 1;
    do {
      if (pbVar7 < pbVar24) {
        return 0x14;
      }
      bVar3 = *pbVar28;
      pbVar27 = pbVar24 + 1;
      *pbVar22 = bVar3;
      pbVar23 = pbVar28 + 1;
      pbVar21 = pbVar22 + 1;
      pbVar22 = pbVar21;
      if ((bVar3 & 8) != 0) {
        if (pbVar7 < pbVar27) {
          return 0x14;
        }
        bVar4 = *pbVar23;
        pbVar27 = pbVar24 + 2;
        pbVar23 = pbVar28 + 2;
        uVar20 = (ulonglong)bVar4;
        if (pbVar31 < pbVar21 + bVar4) {
          return 0x14;
        }
        if (bVar4 != 0) {
          pbVar22 = pbVar21 + uVar20;
          for (; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pbVar21 = bVar3;
            pbVar21 = pbVar21 + 1;
          }
        }
      }
      pbVar28 = pbVar23;
      pbVar24 = pbVar27;
    } while (pbVar22 < pbVar31);
  }
  piVar29 = *(int **)(lVar8 + 0x68);
  pbVar31 = *(byte **)(lVar8 + 0x70);
  iVar15 = 0;
  piVar1 = piVar29 + lVar32 * 2;
  if (pbVar7 < pbVar23) {
    return 0x14;
  }
  if (piVar29 < piVar1) {
    pbVar22 = pbVar23 + 2;
    pbVar28 = pbVar23 + 1;
    pbVar24 = pbVar23;
    do {
      bVar3 = *pbVar31;
      uVar19 = 0;
      if ((bVar3 & 2) == 0) {
        pbVar23 = pbVar24;
        if ((bVar3 & 0x10) == 0) {
          if (pbVar7 < pbVar22) {
            return 0x14;
          }
          pbVar23 = pbVar24 + 2;
          pbVar28 = pbVar28 + 2;
          pbVar22 = pbVar22 + 2;
          uVar19 = (int)(short)((ushort)*pbVar24 << 8) | (uint)pbVar24[1];
        }
      }
      else {
        if (pbVar7 < pbVar28) {
          return 0x14;
        }
        uVar19 = (uint)*pbVar24;
        pbVar28 = pbVar28 + 1;
        pbVar22 = pbVar22 + 1;
        pbVar23 = pbVar24 + 1;
        if ((bVar3 & 0x10) == 0) {
          uVar19 = -(uint)*pbVar24;
        }
      }
      iVar15 = iVar15 + uVar19;
      *piVar29 = iVar15;
      piVar29 = piVar29 + 2;
      *pbVar31 = bVar3 & 0xed;
      pbVar31 = pbVar31 + 1;
      pbVar24 = pbVar23;
    } while (piVar29 < piVar1);
  }
  uVar30 = *(ulonglong *)(lVar8 + 0x68);
  iVar15 = 0;
  pbVar31 = *(byte **)(lVar8 + 0x70);
  uVar20 = lVar32 * 8 + uVar30;
  if (uVar30 < uVar20) {
    pbVar22 = pbVar23 + 2;
    pbVar28 = pbVar23 + 1;
    pbVar24 = pbVar23;
    do {
      bVar3 = *pbVar31;
      uVar19 = 0;
      if ((bVar3 & 4) == 0) {
        pbVar23 = pbVar24;
        if ((bVar3 & 0x20) == 0) {
          if (pbVar7 < pbVar22) {
            return 0x14;
          }
          pbVar23 = pbVar24 + 2;
          pbVar28 = pbVar28 + 2;
          pbVar22 = pbVar22 + 2;
          uVar19 = (int)(short)((ushort)*pbVar24 << 8) | (uint)pbVar24[1];
        }
      }
      else {
        if (pbVar7 < pbVar28) {
          return 0x14;
        }
        uVar19 = (uint)*pbVar24;
        pbVar28 = pbVar28 + 1;
        pbVar22 = pbVar22 + 1;
        pbVar23 = pbVar24 + 1;
        if ((bVar3 & 0x20) == 0) {
          uVar19 = -(uint)*pbVar24;
        }
      }
      iVar15 = iVar15 + uVar19;
      *(int *)(uVar30 + 4) = iVar15;
      uVar30 = uVar30 + 8;
      *pbVar31 = bVar3 & 1;
      pbVar31 = pbVar31 + 1;
      pbVar24 = pbVar23;
    } while (uVar30 < uVar20);
  }
  *(short *)(lVar8 + 0x62) = (short)local_res8;
  *(short *)(lVar8 + 0x60) = (short)local_res18;
  *(byte **)(param_1 + 0x128) = pbVar23;
  return 0;
}



// FUNCTION 143c38370 FUN_143c38370 body=84 status=ok
// SIG undefined FUN_143c38370(void)

uint FUN_143c38370(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 ^ param_2;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
  }
  uVar1 = ((int)param_1 >> 0x10 & 0xffffU) * param_2;
  uVar2 = uVar1 * 0x10000 + 0x2000;
  uVar1 = uVar1 >> 0x10;
  uVar3 = (param_1 & 0xffff) * param_2 + uVar2;
  if (uVar3 < uVar2) {
    uVar1 = uVar1 + 1;
  }
  uVar1 = uVar1 << 0x12 | uVar3 >> 0xe;
  if ((int)uVar4 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}



// FUNCTION 143c383d0 FUN_143c383d0 body=451 status=ok
// SIG undefined FUN_143c383d0(void)

undefined8 FUN_143c383d0(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(lVar1 + 0x20);
  uVar13 = (uint)*(short *)(lVar1 + 0x1a);
  bVar12 = *(byte *)(param_2 + 4) & 200;
  if ((bVar12 != 0) && (param_4 < uVar13)) {
    lVar8 = lVar2 + (ulonglong)param_4 * 8;
    uVar10 = (ulonglong)(uVar13 - param_4);
    do {
      FUN_143c254f0(lVar8,param_2 + 0x10);
      lVar8 = lVar8 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if ((*(ushort *)(param_2 + 4) & 2) == 0) {
    uVar7 = *(int *)(param_2 + 8) + param_3;
    uVar11 = *(int *)(param_2 + 0xc) + param_4;
    if ((param_4 <= uVar7) || (uVar13 <= uVar11)) {
      return 0x15;
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    uVar9 = *(int *)(lVar1 + (ulonglong)uVar7 * 8) - *(int *)(lVar1 + (ulonglong)uVar11 * 8);
    uVar7 = *(int *)(lVar1 + (ulonglong)uVar7 * 8 + 4) - *(int *)(lVar1 + 4 + (ulonglong)uVar11 * 8)
    ;
  }
  else {
    uVar9 = *(uint *)(param_2 + 8);
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((uVar9 == 0) && (uVar7 == 0)) {
      return 0;
    }
    if ((bVar12 != 0) && ((*(ushort *)(param_2 + 4) & 0x800) != 0)) {
      uVar3 = FUN_143c21590(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
      uVar4 = FUN_143c21590(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18));
      uVar9 = FUN_143c22100(uVar9,uVar3);
      uVar7 = FUN_143c22100(uVar7,uVar4);
    }
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48);
      uVar9 = FUN_143c22100(uVar9,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x44));
      uVar7 = FUN_143c22100(uVar7,uVar3);
      if ((*(byte *)(param_2 + 4) & 4) != 0) {
        uVar9 = uVar9 + 0x20 & 0xffffffc0;
        uVar7 = uVar7 + 0x20 & 0xffffffc0;
      }
    }
  }
  if ((uVar9 != 0) || (uVar7 != 0)) {
    uVar13 = uVar13 - param_4;
    piVar6 = (int *)(lVar2 + (ulonglong)param_4 * 8);
    if ((uVar9 != 0) && (uVar13 != 0)) {
      uVar10 = (ulonglong)uVar13;
      piVar5 = piVar6;
      do {
        *piVar5 = *piVar5 + uVar9;
        piVar5 = piVar5 + 2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if ((uVar7 != 0) && (uVar13 != 0)) {
      piVar6 = piVar6 + 1;
      uVar10 = (ulonglong)uVar13;
      do {
        *piVar6 = *piVar6 + uVar7;
        piVar6 = piVar6 + 2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  return 0;
}



// FUNCTION 143c385a0 FUN_143c385a0 body=773 status=ok
// SIG undefined FUN_143c385a0(void)

ulonglong FUN_143c385a0(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint local_res8 [2];
  uint local_res20 [2];
  
  lVar1 = param_1[3];
  uVar9 = 0;
  uVar10 = (ulonglong)param_2;
  iVar6 = *(short *)(lVar1 + 0x1a) + 4;
  if ((iVar6 == 0) ||
     ((uint)(*(short *)(lVar1 + 0x1a) + 4 +
            (int)*(short *)(lVar1 + 0x62) + (int)*(short *)(lVar1 + 0x1a)) <= *(uint *)(lVar1 + 8)))
  {
    local_res8[0] = 0;
  }
  else {
    uVar4 = FUN_143c20e90(lVar1,iVar6,0);
    local_res8[0] = (uint)uVar4;
    if (local_res8[0] != 0) {
      return uVar4;
    }
  }
  *(longlong *)(*(longlong *)(lVar1 + 0x20) + (longlong)*(short *)(lVar1 + 0x1a) * 8) = param_1[0xb]
  ;
  *(longlong *)(*(longlong *)(lVar1 + 0x20) + 8 + (longlong)*(short *)(lVar1 + 0x1a) * 8) =
       param_1[0xc];
  *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x10 + (longlong)*(short *)(lVar1 + 0x1a) * 8) =
       param_1[0x23];
  *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18 + (longlong)*(short *)(lVar1 + 0x1a) * 8) =
       param_1[0x24];
  *(undefined1 *)((longlong)*(short *)(lVar1 + 0x1a) + *(longlong *)(lVar1 + 0x28)) = 0;
  *(undefined1 *)((longlong)*(short *)(lVar1 + 0x1a) + 1 + *(longlong *)(lVar1 + 0x28)) = 0;
  *(undefined1 *)((longlong)*(short *)(lVar1 + 0x1a) + 2 + *(longlong *)(lVar1 + 0x28)) = 0;
  *(undefined1 *)((longlong)*(short *)(lVar1 + 0x1a) + 3 + *(longlong *)(lVar1 + 0x28)) = 0;
  lVar1 = param_1[5];
  uVar4 = FUN_143c251d0(lVar1,(int)param_1[0x20]);
  local_res8[0] = (uint)uVar4;
  if (local_res8[0] != 0) {
    return uVar4;
  }
  uVar3 = FUN_143c25070(lVar1,local_res8);
  if (local_res8[0] != 0) {
    return (ulonglong)local_res8[0];
  }
  if (uVar3 <= *(ushort *)(*param_1 + 0x18a)) {
    if (uVar3 == 0) {
      return 0;
    }
    goto LAB_143c38785;
  }
  if ((int)param_1[6] < (int)(uint)uVar3) {
    return 0x16;
  }
  lVar2 = param_1[0x1e];
  uVar8 = *(uint *)(lVar2 + 0x230);
  uVar7 = (uint)uVar3;
  uVar11 = uVar8;
  if (uVar8 < uVar7) {
    uVar5 = FUN_143c27410(*(undefined8 *)(lVar2 + 0x10),1,uVar8,uVar7,*(undefined8 *)(lVar2 + 0x238)
                          ,local_res20);
    *(undefined8 *)(lVar2 + 0x238) = uVar5;
    uVar11 = uVar7;
    if (local_res20[0] == 0) goto LAB_143c38751;
  }
  else {
LAB_143c38751:
    uVar8 = uVar11;
    local_res20[0] = 0;
  }
  *(uint *)(param_1[0x1e] + 0x230) = uVar8 & 0xffff;
  if (local_res20[0] != 0) {
    return (ulonglong)local_res20[0];
  }
  local_res8[0] = 0;
LAB_143c38785:
  uVar4 = FUN_143c24ae0(lVar1,*(undefined8 *)(param_1[0x1e] + 0x238),(uint)uVar3);
  local_res8[0] = (uint)uVar4;
  if (local_res8[0] == 0) {
    *(undefined8 *)(param_1[2] + 0xd0) = *(undefined8 *)(param_1[0x1e] + 0x238);
    *(uint *)(param_1[2] + 0xd8) = (uint)uVar3;
    lVar1 = param_1[3];
    *(short *)((longlong)param_1 + 0xbc) = *(short *)(lVar1 + 0x1a) - (short)param_2;
    *(short *)((longlong)param_1 + 0xbe) = *(short *)(lVar1 + 0x18) - (short)param_3;
    param_1[0x18] = *(longlong *)(lVar1 + 0x40) + uVar10 * 8;
    param_1[0x19] = *(longlong *)(lVar1 + 0x20) + uVar10 * 8;
    param_1[0x1a] = *(longlong *)(lVar1 + 0x48) + uVar10 * 8;
    param_1[0x1b] = *(longlong *)(lVar1 + 0x28) + uVar10;
    lVar1 = *(longlong *)(lVar1 + 0x30);
    *(short *)(param_1 + 0x1d) = (short)param_2;
    param_1[0x1c] = lVar1 + (ulonglong)param_3 * 2;
    if (*(short *)((longlong)param_1 + 0xbc) != 0) {
      do {
        *(byte *)(uVar9 + param_1[0x1b]) = *(byte *)(uVar9 + param_1[0x1b]) & 0xe7;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *(ushort *)((longlong)param_1 + 0xbc));
    }
    *(short *)((longlong)param_1 + 0xbc) = *(short *)((longlong)param_1 + 0xbc) + 4;
    uVar4 = FUN_143c372e0(param_1,1);
  }
  return uVar4;
}



// FUNCTION 143c388b0 FUN_143c388b0 body=499 status=ok
// SIG undefined FUN_143c388b0(void)

ulonglong FUN_143c388b0(longlong *param_1)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  
  lVar5 = param_1[3];
  sVar2 = *(short *)(lVar5 + 0x62);
  lVar11 = (longlong)sVar2;
  *(longlong *)(*(longlong *)(lVar5 + 0x68) + lVar11 * 8) = param_1[0xb];
  *(longlong *)(*(longlong *)(lVar5 + 0x68) + 8 + lVar11 * 8) = param_1[0xc];
  *(longlong *)(*(longlong *)(lVar5 + 0x68) + 0x10 + lVar11 * 8) = param_1[0x23];
  *(longlong *)(*(longlong *)(lVar5 + 0x68) + 0x18 + lVar11 * 8) = param_1[0x24];
  *(undefined1 *)(lVar11 + *(longlong *)(lVar5 + 0x70)) = 0;
  *(undefined1 *)(*(longlong *)(lVar5 + 0x70) + 1 + lVar11) = 0;
  *(undefined1 *)(*(longlong *)(lVar5 + 0x70) + 2 + lVar11) = 0;
  *(undefined1 *)(*(longlong *)(lVar5 + 0x70) + 3 + lVar11) = 0;
  iVar10 = sVar2 + 4;
  if ((*(char *)(*param_1 + 0x39c) == '\0') ||
     (uVar8 = FUN_143c39e80(*param_1,*(undefined4 *)((longlong)param_1 + 0x24),lVar5 + 0x60,iVar10),
     (int)uVar8 == 0)) {
    uVar7 = 0;
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      *(undefined2 *)((longlong)param_1 + 0xbc) = *(undefined2 *)(lVar5 + 0x62);
      *(undefined2 *)((longlong)param_1 + 0xbe) = *(undefined2 *)(lVar5 + 0x60);
      param_1[0x18] = *(longlong *)(lVar5 + 0x88);
      param_1[0x19] = *(longlong *)(lVar5 + 0x68);
      param_1[0x1a] = *(longlong *)(lVar5 + 0x90);
      param_1[0x1b] = *(longlong *)(lVar5 + 0x70);
      param_1[0x1c] = *(longlong *)(lVar5 + 0x78);
      *(undefined2 *)(param_1 + 0x1d) = 0;
      _guard_xfg_dispatch_icall_nop
                ((void *)param_1[0x1a],(void *)param_1[0x19],
                 (longlong)(int)(*(ushort *)((longlong)param_1 + 0xbc) + 4) << 3);
    }
    puVar9 = *(undefined4 **)(lVar5 + 0x68);
    lVar11 = (longlong)iVar10;
    puVar1 = puVar9 + lVar11 * 2;
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      uVar3 = *(undefined4 *)(param_1[1] + 0x44);
      uVar4 = *(undefined4 *)(param_1[1] + 0x48);
      for (; puVar9 < puVar1; puVar9 = puVar9 + 2) {
        uVar6 = FUN_143c22100(*puVar9,uVar3);
        *puVar9 = uVar6;
        uVar6 = FUN_143c22100(puVar9[1],uVar4);
        puVar9[1] = uVar6;
      }
      param_1[0xb] = *(longlong *)(*(longlong *)(lVar5 + 0x68) + -0x20 + lVar11 * 8);
      param_1[0xc] = *(longlong *)(*(longlong *)(lVar5 + 0x68) + -0x18 + lVar11 * 8);
      param_1[0x23] = *(longlong *)(*(longlong *)(lVar5 + 0x68) + -0x10 + lVar11 * 8);
      param_1[0x24] = *(longlong *)(*(longlong *)(lVar5 + 0x68) + -8 + lVar11 * 8);
    }
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      *(short *)((longlong)param_1 + 0xbc) = *(short *)((longlong)param_1 + 0xbc) + 4;
      uVar7 = FUN_143c372e0(param_1,0);
    }
    uVar8 = (ulonglong)uVar7;
  }
  return uVar8;
}



// FUNCTION 143c38ab0 FUN_143c38ab0 body=4202 status=ok
// SIG undefined FUN_143c38ab0(void)

undefined4 FUN_143c38ab0(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  code *pcVar12;
  ulonglong uVar13;
  ushort uVar14;
  undefined4 *puVar15;
  int iVar16;
  ushort uVar17;
  undefined1 *puVar18;
  
  iVar16 = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(short *)(param_1 + 0x178) == *(short *)(param_1 + 0x17a)) {
    *(undefined1 **)(param_1 + 0x350) = &LAB_143c33ae0;
    *(undefined1 **)(param_1 + 0x358) = &LAB_143c36ed0;
    *(undefined1 **)(param_1 + 0x360) = &LAB_143c3a560;
    pcVar12 = (code *)&LAB_143c36d30;
  }
  else {
    *(code **)(param_1 + 0x350) = FUN_143c33af0;
    *(code **)(param_1 + 0x358) = Read_CVT_Stretched;
    *(code **)(param_1 + 0x360) = FUN_143c3a570;
    pcVar12 = FUN_143c36d40;
  }
  *(code **)(param_1 + 0x368) = pcVar12;
  Compute_Funcs();
  FUN_143c33a20(param_1,*(undefined1 *)(param_1 + 0x1d8));
  puVar18 = &LAB_143c37060;
  do {
    bVar6 = *(byte *)((longlong)*(int *)(param_1 + 0x210) + *(longlong *)(param_1 + 0x208));
    *(byte *)(param_1 + 0x218) = bVar6;
    cVar7 = (&DAT_145d22c20)[bVar6];
    *(int *)(param_1 + 0x21c) = (int)cVar7;
    if (cVar7 < '\0') {
      if (*(int *)(param_1 + 0x210) + 1 < *(int *)(param_1 + 0x214)) {
        *(uint *)(param_1 + 0x21c) =
             2 - (uint)*(byte *)((longlong)*(int *)(param_1 + 0x210) + 1 +
                                *(longlong *)(param_1 + 0x208)) * (int)cVar7;
        goto LAB_143c38bea;
      }
      goto LAB_143c39abf;
    }
LAB_143c38bea:
    if (*(int *)(param_1 + 0x214) < *(int *)(param_1 + 0x21c) + *(int *)(param_1 + 0x210))
    goto LAB_143c39abf;
    iVar8 = *(int *)(param_1 + 0x1c) -
            (uint)((byte)(&DAT_145d22b20)[*(byte *)(param_1 + 0x218)] >> 4);
    *(int *)(param_1 + 0x30) = iVar8;
    if (iVar8 < 0) {
      if (*(char *)(param_1 + 0x315) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x81;
        goto LAB_143c39ac6;
      }
      uVar13 = 0;
      if (((&DAT_145d22b20)[*(byte *)(param_1 + 0x218)] & 0xf0) != 0) {
        do {
          uVar14 = (short)uVar13 + 1;
          *(undefined4 *)(*(longlong *)(param_1 + 0x28) + uVar13 * 4) = 0;
          uVar13 = (ulonglong)uVar14;
        } while (uVar14 < (byte)(&DAT_145d22b20)[*(byte *)(param_1 + 0x218)] >> 4);
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    iVar8 = ((byte)(&DAT_145d22b20)[*(byte *)(param_1 + 0x218)] & 0xf) + *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x34) = iVar8;
    if (*(int *)(param_1 + 0x20) < iVar8) {
      *(undefined4 *)(param_1 + 0x18) = 0x82;
      goto LAB_143c39ac6;
    }
    bVar6 = *(byte *)(param_1 + 0x218);
    *(undefined1 *)(param_1 + 0x220) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 4);
    switch(bVar6) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uVar17 = (ushort)(bVar6 & 1) << 0xe;
      uVar14 = uVar17 ^ 0x4000;
      if (bVar6 < 4) {
        *(ushort *)(param_1 + 0x1c6) = uVar17;
        *(ushort *)(param_1 + 0x1c8) = uVar14;
        *(ushort *)(param_1 + 0x1c2) = uVar17;
        *(ushort *)(param_1 + 0x1c4) = uVar14;
      }
      if ((bVar6 & 2) == 0) {
        *(ushort *)(param_1 + 0x1ca) = uVar17;
        *(ushort *)(param_1 + 0x1cc) = uVar14;
      }
      Compute_Funcs(param_1);
      break;
    case 6:
    case 7:
      cVar7 = FUN_143c36b70(param_1,(short)puVar2[1],(short)*puVar2,param_1 + 0x1c6);
      if (cVar7 == '\0') goto LAB_143c38d3b;
      goto LAB_143c38d4f;
    case 8:
    case 9:
      cVar7 = FUN_143c36b70(param_1,(short)puVar2[1],(short)*puVar2,param_1 + 0x1ca);
      if (cVar7 == '\0') {
        Compute_Funcs(param_1);
        puVar18 = &LAB_143c37060;
      }
      else {
LAB_143c3997b:
        puVar18 = &LAB_143c37060;
      }
      break;
    case 10:
      FUN_143c36d80((int)(short)*puVar2,(int)(short)puVar2[1],param_1 + 0x1c6);
LAB_143c38d3b:
      *(undefined4 *)(param_1 + 0x1c2) = *(undefined4 *)(param_1 + 0x1c6);
      Compute_Funcs(param_1);
LAB_143c38d4f:
      puVar18 = &LAB_143c37060;
      break;
    case 0xb:
      FUN_143c36d80((int)(short)*puVar2,(int)(short)puVar2[1],param_1 + 0x1ca);
      Compute_Funcs(param_1);
      puVar18 = &LAB_143c37060;
      break;
    case 0xc:
      *puVar2 = (int)*(short *)(param_1 + 0x1c6);
      puVar2[1] = (int)*(short *)(param_1 + 0x1c8);
      break;
    case 0xd:
      *puVar2 = (int)*(short *)(param_1 + 0x1ca);
      puVar2[1] = (int)*(short *)(param_1 + 0x1cc);
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0x1ca) = *(undefined4 *)(param_1 + 0x1c6);
      Compute_Funcs(param_1);
      break;
    case 0xf:
      FUN_143c34c70(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x10:
      *(short *)(param_1 + 0x1bc) = (short)*puVar2;
      break;
    case 0x11:
      *(short *)(param_1 + 0x1be) = (short)*puVar2;
      break;
    case 0x12:
      *(short *)(param_1 + 0x1c0) = (short)*puVar2;
      break;
    case 0x13:
      FUN_143c368d0(param_1,puVar2);
      break;
    case 0x14:
      FUN_143c36960(param_1,puVar2);
      break;
    case 0x15:
      FUN_143c369f0(param_1,puVar2);
      break;
    case 0x16:
      FUN_143c36a80(param_1,puVar2);
      break;
    case 0x17:
      if ((int)*puVar2 < 0) {
        *(undefined4 *)(param_1 + 0x18) = 0x84;
      }
      else {
        *(uint *)(param_1 + 0x1d0) = *puVar2;
      }
      break;
    case 0x18:
      *(undefined4 *)(param_1 + 0x1d8) = 1;
      *(undefined1 **)(param_1 + 800) = puVar18;
      break;
    case 0x19:
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      *(undefined1 **)(param_1 + 800) = &LAB_143c37090;
      break;
    case 0x1a:
      *(uint *)(param_1 + 0x1d4) = *puVar2;
      break;
    case 0x1b:
      FUN_143c34380(param_1);
      puVar18 = &LAB_143c37060;
      break;
    case 0x1c:
      FUN_143c35180(param_1,puVar2);
      break;
    case 0x1d:
      *(uint *)(param_1 + 0x1e0) = *puVar2;
      break;
    case 0x1e:
      *(uint *)(param_1 + 0x1e4) = *puVar2;
      break;
    case 0x1f:
      uVar10 = FUN_143c22100(*puVar2,*(undefined4 *)(param_1 + 0x1a4));
      *(undefined4 *)(param_1 + 0x1e8) = uVar10;
      puVar18 = &LAB_143c37060;
      break;
    case 0x20:
      puVar2[1] = *puVar2;
      break;
    case 0x21:
    case 0x59:
    case 0x7e:
    case 0x7f:
      break;
    case 0x22:
      *(undefined4 *)(param_1 + 0x34) = 0;
      break;
    case 0x23:
      uVar9 = *puVar2;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar9;
      break;
    case 0x24:
      *puVar2 = *(uint *)(param_1 + 0x1c);
      break;
    case 0x25:
      uVar9 = *puVar2;
      if (((int)uVar9 < 1) || (*(int *)(param_1 + 0x30) < (int)uVar9)) {
        if (*(char *)(param_1 + 0x315) != '\0') {
          *(undefined4 *)(param_1 + 0x18) = 0x86;
        }
LAB_143c38ffa:
        *puVar2 = 0;
      }
      else {
        *puVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) +
                           ((longlong)*(int *)(param_1 + 0x30) - (longlong)(int)uVar9) * 4);
      }
      break;
    case 0x26:
      FUN_143c358c0(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x27:
      FUN_143c33ea0(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x28:
    case 0x7b:
    case 0x83:
    case 0x84:
    case 0x8f:
switchD_143c38ccc_caseD_28:
      FUN_143c36c10(param_1);
      break;
    case 0x29:
      if ((ushort)*puVar2 < *(ushort *)(param_1 + 0x44)) {
        bVar6 = 0xff;
        if (*(short *)(param_1 + 0x1ca) != 0) {
          bVar6 = 0xf7;
        }
        if (*(short *)(param_1 + 0x1cc) != 0) {
          bVar6 = bVar6 & 0xef;
        }
        pbVar3 = (byte *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(ushort)*puVar2);
        *pbVar3 = *pbVar3 & bVar6;
      }
      else {
LAB_143c39046:
        if (*(char *)(param_1 + 0x315) != '\0') {
          *(undefined4 *)(param_1 + 0x18) = 0x86;
        }
      }
      break;
    case 0x2a:
      FUN_143c351e0(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x2b:
      FUN_143c34060(param_1,puVar2);
      break;
    case 0x2c:
      FUN_143c34450(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x2d:
      if (*(int *)(param_1 + 0x268) < 1) {
        *(undefined4 *)(param_1 + 0x18) = 0x88;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x268) + -1;
        *(int *)(param_1 + 0x268) = iVar8;
        lVar5 = *(longlong *)(param_1 + 0x270);
        piVar1 = (int *)(lVar5 + 8 + (longlong)iVar8 * 0x18);
        *piVar1 = *piVar1 + -1;
        puVar4 = (undefined4 *)(lVar5 + (longlong)iVar8 * 0x18);
        *(undefined1 *)(param_1 + 0x220) = 0;
        if ((int)puVar4[2] < 1) {
          FUN_143c346e0(param_1,*puVar4,puVar4[1]);
        }
        else {
          *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
          *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(*(longlong *)(puVar4 + 4) + 4);
        }
      }
      break;
    case 0x2e:
    case 0x2f:
      Ins_MDAP(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x30:
    case 0x31:
      FUN_143c34f50(param_1);
      puVar18 = &LAB_143c37060;
      break;
    case 0x32:
    case 0x33:
      FUN_143c363b0(param_1);
      puVar18 = &LAB_143c37060;
      break;
    case 0x34:
    case 0x35:
      FUN_143c361a0(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x36:
    case 0x37:
      FUN_143c36710(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x38:
      FUN_143c36560(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x39:
      FUN_143c349a0(param_1);
      puVar18 = &LAB_143c37060;
      break;
    case 0x3a:
    case 0x3b:
      FUN_143c35be0(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x3c:
      FUN_143c33f60(param_1);
      puVar18 = &LAB_143c37060;
      break;
    case 0x3d:
      *(undefined4 *)(param_1 + 0x1d8) = 2;
      *(undefined1 **)(param_1 + 800) = &LAB_143c37030;
      break;
    case 0x3e:
    case 0x3f:
      FUN_143c35770(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x40:
      FUN_143c35d20(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x41:
      FUN_143c35db0(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x42:
      if (*puVar2 < (uint)*(ushort *)(param_1 + 0x2b0)) {
        *(uint *)(*(longlong *)(param_1 + 0x2b8) + (ulonglong)*puVar2 * 4) = puVar2[1];
      }
      else if (*(char *)(param_1 + 0x315) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
      }
      break;
    case 0x43:
      if (*puVar2 < (uint)*(ushort *)(param_1 + 0x2b0)) {
        *puVar2 = *(uint *)(*(longlong *)(param_1 + 0x2b8) + (ulonglong)*puVar2 * 4);
      }
      else {
        if (*(char *)(param_1 + 0x315) == '\0') goto LAB_143c38ffa;
        *(undefined4 *)(param_1 + 0x18) = 0x86;
      }
      break;
    case 0x44:
      if (*puVar2 < *(uint *)(param_1 + 0x224)) {
        (**(code **)(param_1 + 0x360))(param_1,*puVar2,puVar2[1]);
        puVar18 = &LAB_143c37060;
      }
      else if (*(char *)(param_1 + 0x315) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
      }
      break;
    case 0x45:
      if (*puVar2 < *(uint *)(param_1 + 0x224)) {
        uVar9 = (**(code **)(param_1 + 0x358))(param_1);
        *puVar2 = uVar9;
        puVar18 = &LAB_143c37060;
      }
      else {
        if (*(char *)(param_1 + 0x315) == '\0') goto LAB_143c38ffa;
        *(undefined4 *)(param_1 + 0x18) = 0x86;
      }
      break;
    case 0x46:
    case 0x47:
      FUN_143c34650(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x48:
      Ins_SCFS(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x49:
    case 0x4a:
      FUN_143c352e0(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x4b:
    case 0x4c:
      uVar9 = (**(code **)(param_1 + 0x350))(param_1);
      *puVar2 = uVar9;
      puVar18 = &LAB_143c37060;
      break;
    case 0x4d:
      *(undefined1 *)(param_1 + 0x1dc) = 1;
      break;
    case 0x4e:
      *(undefined1 *)(param_1 + 0x1dc) = 0;
      break;
    case 0x4f:
      *(undefined4 *)(param_1 + 0x18) = 0x87;
      break;
    case 0x50:
      *puVar2 = (uint)((int)*puVar2 < (int)puVar2[1]);
      break;
    case 0x51:
      *puVar2 = (uint)((int)*puVar2 <= (int)puVar2[1]);
      break;
    case 0x52:
      *puVar2 = (uint)((int)puVar2[1] < (int)*puVar2);
      break;
    case 0x53:
      *puVar2 = (uint)((int)puVar2[1] <= (int)*puVar2);
      break;
    case 0x54:
      *puVar2 = (uint)(*puVar2 == puVar2[1]);
      break;
    case 0x55:
      *puVar2 = (uint)(*puVar2 != puVar2[1]);
      break;
    case 0x56:
      bVar6 = (**(code **)(param_1 + 800))(param_1,*puVar2,0);
      puVar18 = &LAB_143c37060;
      *puVar2 = (uint)((bVar6 & 0x7f) == 0x40);
      break;
    case 0x57:
      uVar13 = (**(code **)(param_1 + 800))(param_1,*puVar2,0);
      puVar18 = &LAB_143c37060;
      *puVar2 = (uint)((uVar13 & 0x7f) == 0);
      break;
    case 0x58:
      FUN_143c348a0(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x5a:
      if ((*puVar2 == 0) || (uVar9 = 1, puVar2[1] == 0)) {
        uVar9 = 0;
      }
      *puVar2 = uVar9;
      break;
    case 0x5b:
      if ((*puVar2 != 0) || (uVar9 = 0, puVar2[1] != 0)) {
        uVar9 = 1;
      }
      *puVar2 = uVar9;
      break;
    case 0x5c:
      *puVar2 = (uint)(*puVar2 == 0);
      break;
    case 0x5d:
    case 0x71:
    case 0x72:
      FUN_143c34260(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x5e:
      *(short *)(param_1 + 0x1ec) = (short)*puVar2;
      break;
    case 0x5f:
      if (*puVar2 < 7) {
        *(short *)(param_1 + 0x1ee) = (short)*puVar2;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0x84;
      }
      break;
    case 0x60:
      *puVar2 = *puVar2 + puVar2[1];
      break;
    case 0x61:
      *puVar2 = *puVar2 - puVar2[1];
      break;
    case 0x62:
      if (puVar2[1] == 0) {
        *(undefined4 *)(param_1 + 0x18) = 0x85;
      }
      else {
        uVar9 = FUN_143c22010(*puVar2,0x40);
        *puVar2 = uVar9;
        puVar18 = &LAB_143c37060;
      }
      break;
    case 99:
      uVar9 = FUN_143c21f00(*puVar2,puVar2[1],0x40);
      *puVar2 = uVar9;
      puVar18 = &LAB_143c37060;
      break;
    case 100:
      uVar9 = *puVar2;
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      *puVar2 = uVar9;
      break;
    case 0x65:
      *puVar2 = -*puVar2;
      break;
    case 0x66:
      *puVar2 = *puVar2 & 0xffffffc0;
      break;
    case 0x67:
      *puVar2 = *puVar2 + 0x3f & 0xffffffc0;
      break;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      uVar9 = (**(code **)(param_1 + 800))
                        (param_1,*puVar2,*(undefined4 *)(param_1 + 8 + (ulonglong)bVar6 * 4));
      *puVar2 = uVar9;
      puVar18 = &LAB_143c37060;
      break;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      iVar8 = *(int *)(param_1 + -8 + (ulonglong)bVar6 * 4);
      uVar9 = *puVar2;
      if ((int)uVar9 < 0) {
        uVar9 = uVar9 - iVar8;
        if (0 < (int)uVar9) {
          uVar9 = 0;
        }
      }
      else {
        uVar9 = uVar9 + iVar8;
        if ((int)uVar9 < 0) {
          *puVar2 = 0;
          break;
        }
      }
      *puVar2 = uVar9;
      break;
    case 0x70:
      uVar9 = *puVar2;
      if (uVar9 < *(uint *)(param_1 + 0x224)) {
        uVar10 = FUN_143c22100(puVar2[1],*(undefined4 *)(param_1 + 0x1a4));
        *(undefined4 *)(*(longlong *)(param_1 + 0x228) + (ulonglong)uVar9 * 4) = uVar10;
        goto LAB_143c38d4f;
      }
      if (*(char *)(param_1 + 0x315) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
      }
      break;
    case 0x73:
    case 0x74:
    case 0x75:
      FUN_143c34150(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x76:
      FUN_143c370f0(param_1,0x4000,*puVar2);
      *(undefined4 *)(param_1 + 0x1d8) = 6;
      *(undefined1 **)(param_1 + 800) = &LAB_143c36f60;
      break;
    case 0x77:
      FUN_143c370f0(param_1,0x2d41,*puVar2);
      *(undefined4 *)(param_1 + 0x1d8) = 7;
      *(undefined1 **)(param_1 + 800) = &LAB_143c36fc0;
      break;
    case 0x78:
      if (puVar2[1] != 0) {
LAB_143c396ae:
        if ((*puVar2 == 0) && (*(int *)(param_1 + 0x30) == 0)) {
          *(undefined4 *)(param_1 + 0x18) = 0x84;
        }
        piVar1 = (int *)(param_1 + 0x210);
        *piVar1 = *piVar1 + *puVar2;
        if ((*piVar1 < 0) ||
           ((0 < *(int *)(param_1 + 0x268) &&
            (*(int *)(*(longlong *)
                       (*(longlong *)(param_1 + 0x270) + -8 +
                       (longlong)*(int *)(param_1 + 0x268) * 0x18) + 8) < *(int *)(param_1 + 0x210))
            ))) {
          *(undefined4 *)(param_1 + 0x18) = 0x84;
        }
        *(undefined1 *)(param_1 + 0x220) = 0;
      }
      break;
    case 0x79:
      if (puVar2[1] == 0) goto LAB_143c396ae;
      break;
    case 0x7a:
      *(undefined4 *)(param_1 + 0x1d8) = 5;
      *(undefined1 **)(param_1 + 800) = &LAB_143c36f40;
      break;
    case 0x7c:
      *(undefined4 *)(param_1 + 0x1d8) = 4;
      *(undefined1 **)(param_1 + 800) = &LAB_143c370c0;
      break;
    case 0x7d:
      *(undefined4 *)(param_1 + 0x1d8) = 3;
      *(undefined1 **)(param_1 + 800) = &LAB_143c36f10;
      break;
    case 0x80:
      FUN_143c345d0(param_1);
      break;
    case 0x81:
      uVar9 = puVar2[1];
      uVar14 = (ushort)*puVar2;
      if ((*(ushort *)(param_1 + 0x104) <= (ushort)uVar9) ||
         (*(ushort *)(param_1 + 0x104) <= uVar14)) goto LAB_143c39046;
      for (; uVar14 <= (ushort)uVar9; uVar14 = uVar14 + 1) {
        pbVar3 = (byte *)((ulonglong)uVar14 + *(longlong *)(param_1 + 0x120));
        *pbVar3 = *pbVar3 | 1;
      }
      break;
    case 0x82:
      uVar9 = puVar2[1];
      uVar14 = (ushort)*puVar2;
      if ((*(ushort *)(param_1 + 0x104) <= (ushort)uVar9) ||
         (*(ushort *)(param_1 + 0x104) <= uVar14)) goto LAB_143c39046;
      for (; uVar14 <= (ushort)uVar9; uVar14 = uVar14 + 1) {
        pbVar3 = (byte *)((ulonglong)uVar14 + *(longlong *)(param_1 + 0x120));
        *pbVar3 = *pbVar3 & 0xfe;
      }
      break;
    case 0x85:
      FUN_143c35ef0(param_1,puVar2);
      break;
    case 0x86:
    case 0x87:
      FUN_143c36070(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x88:
      uVar9 = *puVar2;
      uVar11 = 0;
      if ((uVar9 & 1) != 0) {
        uVar11 = 0x23;
      }
      if (((uVar9 & 2) != 0) && (*(char *)(param_1 + 0x1b9) != '\0')) {
        uVar11 = uVar11 | 0x80;
      }
      if (((uVar9 & 4) != 0) && (*(char *)(param_1 + 0x1ba) != '\0')) {
        uVar11 = uVar11 | 0x100;
      }
      if (((uVar9 & 0x20) != 0) && (*(char *)(param_1 + 0x370) != '\0')) {
        uVar11 = uVar11 | 0x1000;
      }
      *puVar2 = uVar11;
      break;
    case 0x89:
      FUN_143c34750(param_1,puVar2);
      puVar18 = &LAB_143c37060;
      break;
    case 0x8a:
      uVar9 = puVar2[2];
      uVar11 = puVar2[1];
      puVar2[2] = *puVar2;
      puVar2[1] = uVar9;
      *puVar2 = uVar11;
      break;
    case 0x8b:
      if ((int)*puVar2 < (int)puVar2[1]) {
        *puVar2 = puVar2[1];
      }
      break;
    case 0x8c:
      if ((int)puVar2[1] < (int)*puVar2) {
        *puVar2 = puVar2[1];
      }
      break;
    case 0x8d:
      if (-1 < (int)*puVar2) {
        *(uint *)(param_1 + 500) = *puVar2;
      }
      break;
    case 0x8e:
      uVar9 = *puVar2;
      if (2 < puVar2[1] - 1) goto LAB_143c39046;
      uVar11 = 1 << ((byte)(puVar2[1] - 1) & 0x1f);
      if ((uVar9 == 0) || (uVar9 == uVar11)) {
        *(byte *)(param_1 + 0x1f0) = ~(byte)uVar11 & *(byte *)(param_1 + 0x1f0) | (byte)uVar9;
      }
      else if (*(char *)(param_1 + 0x315) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
      }
      break;
    default:
      if (bVar6 < 0xe0) {
        if (bVar6 < 0xc0) {
          if (0xb7 < bVar6) {
            FUN_143c35e50(param_1,puVar2);
            goto LAB_143c3997b;
          }
          if (bVar6 < 0xb0) goto switchD_143c38ccc_caseD_28;
          uVar14 = bVar6 - 0xaf;
          if ((uint)uVar14 < (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) + 1U) {
            uVar17 = 1;
            if (uVar14 != 0) {
              do {
                uVar13 = (ulonglong)uVar17;
                uVar17 = uVar17 + 1;
                puVar2[uVar13 - 1] =
                     (uint)*(byte *)((longlong)*(int *)(param_1 + 0x210) + uVar13 +
                                    *(longlong *)(param_1 + 0x208));
              } while (uVar17 <= uVar14);
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x18) = 0x82;
          }
        }
        else {
          FUN_143c35530(param_1,puVar2);
          puVar18 = &LAB_143c37060;
        }
      }
      else {
        FUN_143c35940(param_1,puVar2);
        puVar18 = &LAB_143c37060;
      }
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x34);
      if (*(char *)(param_1 + 0x220) != '\0') {
        *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c);
      }
      iVar16 = iVar16 + 1;
      if (1000000 < iVar16) {
        return 0x8b;
      }
    }
    else {
      if (*(int *)(param_1 + 0x18) != 0x80) goto LAB_143c39ac6;
      puVar15 = *(undefined4 **)(param_1 + 600);
      puVar4 = puVar15 + (ulonglong)*(uint *)(param_1 + 0x250) * 6;
      while( true ) {
        if (puVar4 <= puVar15) {
          *(undefined4 *)(param_1 + 0x18) = 0x80;
          goto LAB_143c39ac6;
        }
        if ((*(char *)(puVar15 + 4) != '\0') &&
           (*(char *)(param_1 + 0x218) == *(char *)(puVar15 + 3))) break;
        puVar15 = puVar15 + 6;
      }
      if (*(int *)(param_1 + 0x26c) <= *(int *)(param_1 + 0x268)) {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
        goto LAB_143c39ac6;
      }
      puVar4 = (undefined4 *)
               (*(longlong *)(param_1 + 0x270) + (longlong)*(int *)(param_1 + 0x268) * 0x18);
      *puVar4 = *(undefined4 *)(param_1 + 0x200);
      iVar8 = *(int *)(param_1 + 0x210);
      puVar4[2] = 1;
      puVar4[1] = iVar8 + 1;
      *(undefined4 **)(puVar4 + 4) = puVar15;
      cVar7 = FUN_143c346e0(param_1,*puVar15,puVar15[1]);
      if (cVar7 == '\x01') goto LAB_143c39ac6;
    }
    if (*(int *)(param_1 + 0x214) <= *(int *)(param_1 + 0x210)) {
      if (*(int *)(param_1 + 0x268) < 1) {
        return 0;
      }
LAB_143c39abf:
      *(undefined4 *)(param_1 + 0x18) = 0x83;
LAB_143c39ac6:
      if (((*(int *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x2cc) == '\0')) &&
         (*(int *)(param_1 + 0x200) == 3)) {
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x188) = 0xffffffff;
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x18c) = 0xffffffff;
      }
      return *(undefined4 *)(param_1 + 0x18);
    }
    if (*(char *)(param_1 + 0x2cc) != '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 143c39d60 FUN_143c39d60 body=282 status=ok
// SIG undefined FUN_143c39d60(void)

void FUN_143c39d60(longlong *param_1)

{
  param_1[0x41] = param_1[0x54];
  *(int *)((longlong)param_1 + 0x214) = (int)param_1[0x55];
  param_1[7] = param_1[0x1f];
  param_1[8] = param_1[0x20];
  *(undefined4 *)((longlong)param_1 + 0x1c6) = 0x4000;
  *(undefined4 *)((longlong)param_1 + 0x1ca) = *(undefined4 *)((longlong)param_1 + 0x1c6);
  param_1[9] = param_1[0x21];
  param_1[10] = param_1[0x22];
  *(undefined4 *)((longlong)param_1 + 0x1c2) = *(undefined4 *)((longlong)param_1 + 0x1c6);
  param_1[0xb] = param_1[0x23];
  param_1[0xc] = param_1[0x24];
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x40) = 3;
  param_1[0xd] = param_1[0x25];
  param_1[0xe] = param_1[0x26];
  *(undefined4 *)(param_1 + 0x3f) = 0x10001;
  *(undefined2 *)((longlong)param_1 + 0x1fc) = 1;
  param_1[0xf] = param_1[0x1f];
  param_1[0x10] = param_1[0x20];
  *(undefined4 *)(param_1 + 0x3b) = 1;
  *(undefined4 *)(param_1 + 0x3a) = 1;
  param_1[0x11] = param_1[0x21];
  param_1[0x12] = param_1[0x22];
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x13] = param_1[0x23];
  param_1[0x14] = param_1[0x24];
  param_1[0x15] = param_1[0x25];
  param_1[0x16] = param_1[0x26];
  param_1[0x17] = param_1[0x1f];
  param_1[0x18] = param_1[0x20];
  param_1[0x19] = param_1[0x21];
  param_1[0x1a] = param_1[0x22];
  *(int *)(param_1 + 0x1b) = (int)param_1[0x23];
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_1 + 0x11c);
  *(int *)(param_1 + 0x1c) = (int)param_1[0x24];
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_1 + 0x124);
  *(int *)(param_1 + 0x1d) = (int)param_1[0x25];
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_1 + 300);
  *(int *)(param_1 + 0x1e) = (int)param_1[0x26];
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_1 + 0x134);
                    /* WARNING: Could not recover jumptable at 0x000143c39e73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))();
  return;
}



// FUNCTION 143c39e80 FUN_143c39e80 body=1746 status=ok
// SIG undefined FUN_143c39e80(void)

int FUN_143c39e80(longlong param_1,uint param_2,longlong param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  void *_Dst;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  longlong lVar18;
  int local_res8 [2];
  uint local_b4;
  undefined1 *local_b0;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  uint local_64;
  longlong local_60;
  short *local_58;
  uint *local_50;
  longlong *local_48;
  short *local_40;
  
  uVar14 = (uint)param_4;
  plVar12 = *(longlong **)(param_1 + 0xa0);
  puVar17 = *(uint **)(param_1 + 0x3a0);
  lVar16 = plVar12[6];
  local_b0 = (undefined1 *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_9c = 0;
  local_60 = 0;
  local_80 = 0;
  if ((*(char *)(param_1 + 0x39c) == '\0') || (puVar17 == (uint *)0x0)) {
    return 6;
  }
  if (param_2 < puVar17[0x10]) {
    lVar18 = (ulonglong)(param_2 + 1) * 4;
    lVar2 = (ulonglong)param_2 * 4;
    if (*(int *)(lVar2 + *(longlong *)(puVar17 + 0x12)) !=
        *(int *)(*(longlong *)(puVar17 + 0x12) + lVar18)) {
      local_70 = lVar16;
      local_50 = puVar17;
      local_48 = plVar12;
      lVar8 = FUN_143c27410(lVar16,8,0,param_4,0,local_res8);
      local_78 = lVar8;
      if ((((local_res8[0] == 0) &&
           (local_b0 = (undefined1 *)FUN_143c27410(lVar16,1,0,param_4 & 0xffffffff,0,local_res8),
           local_res8[0] == 0)) &&
          (local_res8[0] =
                FUN_143c251d0(plVar12,*(undefined4 *)(lVar2 + *(longlong *)(puVar17 + 0x12))),
          local_res8[0] == 0)) &&
         (local_res8[0] =
               FUN_143c24650(plVar12,*(int *)(*(longlong *)(puVar17 + 0x12) + lVar18) -
                                     *(int *)(*(longlong *)(puVar17 + 0x12) + lVar2)),
         local_res8[0] == 0)) {
        lVar18 = plVar12[7];
        lVar2 = *plVar12;
        _Dst = (void *)FUN_143c27410(lVar16,4,0,*puVar17,0,local_res8);
        if (((local_res8[0] == 0) &&
            (local_90 = FUN_143c27410(lVar16,4,0,*puVar17,0,local_res8), local_res8[0] == 0)) &&
           (local_88 = FUN_143c27410(lVar16,4,0,*puVar17,0,local_res8), local_res8[0] == 0)) {
          uVar3 = FUN_143c24910(plVar12);
          uVar4 = FUN_143c24910(plVar12);
          local_b4 = (uint)uVar4 + ((int)lVar18 - (int)lVar2);
          if ((short)uVar3 < 0) {
            lVar18 = plVar12[7];
            lVar2 = *plVar12;
            plVar12[7] = (ulonglong)local_b4 + *plVar12;
            local_60 = FUN_143c3b020(plVar12,&local_9c);
            local_b4 = (int)plVar12[7] - (int)*plVar12;
            plVar12[7] = (ulonglong)(uint)((int)lVar18 - (int)lVar2) + *plVar12;
          }
          local_a0 = 0;
          lVar8 = local_78;
          if ((uVar3 & 0xfff) != 0) {
            do {
              uVar4 = FUN_143c24910(plVar12);
              local_98 = (uint)uVar4;
              uVar4 = FUN_143c24910(plVar12);
              if ((short)uVar4 < 0) {
                uVar15 = 0;
                if (*puVar17 != 0) {
                  do {
                    sVar5 = FUN_143c24910(plVar12);
                    *(int *)((longlong)_Dst + uVar15 * 4) = (int)sVar5 << 2;
                    uVar11 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar11;
                  } while (uVar11 < *puVar17);
                }
              }
              else {
                if (puVar17[0xc] <= (uVar4 & 0xfff)) {
                  local_res8[0] = 8;
                  lVar8 = local_78;
                  break;
                }
                _guard_xfg_dispatch_icall_nop
                          (_Dst,(void *)(*(longlong *)(puVar17 + 0xe) +
                                        (ulonglong)((uVar4 & 0xfff) * *puVar17) * 4),
                           (ulonglong)*puVar17 << 2);
              }
              lVar16 = local_90;
              if ((uVar4 >> 0xe & 1) != 0) {
                uVar15 = 0;
                if (*puVar17 != 0) {
                  do {
                    sVar5 = FUN_143c24910(plVar12);
                    *(int *)(lVar16 + uVar15 * 4) = (int)sVar5 << 2;
                    uVar11 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar11;
                  } while (uVar11 < *puVar17);
                }
                lVar16 = local_88;
                uVar15 = 0;
                if (*puVar17 != 0) {
                  do {
                    sVar5 = FUN_143c24910(plVar12);
                    *(int *)(lVar16 + uVar15 * 4) = (int)sVar5 << 2;
                    uVar11 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar11;
                  } while (uVar11 < *puVar17);
                }
              }
              iVar6 = FUN_143c3a9b0(puVar17,uVar4,_Dst,local_90,local_88);
              lVar16 = local_70;
              local_68 = iVar6;
              if (iVar6 != 0) {
                local_64 = (int)plVar12[7] - (int)*plVar12;
                if ((uVar4 >> 0xd & 1) == 0) {
                  local_94 = local_9c;
                  lVar16 = local_60;
                }
                else {
                  plVar12[7] = (ulonglong)local_b4 + *plVar12;
                  local_80 = FUN_143c3b020(plVar12,&local_94);
                  lVar16 = local_80;
                }
                uVar11 = local_94;
                uVar15 = (ulonglong)local_94;
                if (local_94 == 0) {
                  uVar15 = param_4 & 0xffffffff;
                }
                psVar9 = (short *)FUN_143c3af00(plVar12,uVar15);
                local_40 = psVar9;
                psVar10 = (short *)FUN_143c3af00(plVar12);
                iVar7 = local_68;
                local_58 = psVar10;
                if (((lVar16 != 0) && (psVar10 != (short *)0x0)) && (psVar9 != (short *)0x0)) {
                  uVar15 = param_4 & 0xffffffff;
                  if (lVar16 == -1) {
                    if (uVar14 != 0) {
                      lVar16 = 0;
                      lVar18 = (longlong)psVar9 - (longlong)psVar10;
                      do {
                        lVar2 = *(longlong *)(param_3 + 8);
                        iVar7 = FUN_143c22100((int)*(short *)(lVar18 + (longlong)psVar10),iVar6);
                        piVar1 = (int *)(lVar2 + lVar16);
                        *piVar1 = *piVar1 + iVar7;
                        lVar2 = *(longlong *)(param_3 + 8);
                        iVar7 = FUN_143c22100((int)*psVar10,iVar6);
                        piVar1 = (int *)(lVar2 + 4 + lVar16);
                        *piVar1 = *piVar1 + iVar7;
                        psVar10 = psVar10 + 1;
                        lVar16 = lVar16 + 8;
                        uVar15 = uVar15 - 1;
                        puVar17 = local_50;
                      } while (uVar15 != 0);
                    }
                  }
                  else {
                    if (uVar14 != 0) {
                      lVar16 = 0;
                      puVar13 = local_b0;
                      do {
                        *(undefined8 *)(lVar16 + local_78) =
                             *(undefined8 *)(lVar16 + *(longlong *)(param_3 + 8));
                        *puVar13 = 0;
                        uVar15 = uVar15 - 1;
                        lVar16 = lVar16 + 8;
                        puVar13 = puVar13 + 1;
                      } while (uVar15 != 0);
                    }
                    if (uVar11 != 0) {
                      lVar16 = local_80 - (longlong)psVar9;
                      lVar18 = (longlong)psVar10 - (longlong)psVar9;
                      uVar15 = (ulonglong)uVar11;
                      do {
                        uVar4 = *(ushort *)(lVar16 + (longlong)psVar9);
                        if (uVar4 < uVar14) {
                          local_b0[uVar4] = 1;
                          lVar2 = (ulonglong)uVar4 * 8;
                          lVar8 = *(longlong *)(param_3 + 8);
                          iVar6 = FUN_143c22100((int)*psVar9,iVar7);
                          piVar1 = (int *)(lVar8 + lVar2);
                          *piVar1 = *piVar1 + iVar6;
                          lVar8 = *(longlong *)(param_3 + 8);
                          iVar6 = FUN_143c22100((int)*(short *)(lVar18 + (longlong)psVar9),iVar7);
                          piVar1 = (int *)(lVar8 + 4 + lVar2);
                          *piVar1 = *piVar1 + iVar6;
                        }
                        psVar9 = psVar9 + 1;
                        uVar15 = uVar15 - 1;
                        plVar12 = local_48;
                        puVar17 = local_50;
                      } while (uVar15 != 0);
                    }
                    FUN_143c3d170(param_3,local_78,local_b0);
                  }
                }
                lVar16 = local_70;
                if (local_80 != -1) {
                  ft_mem_free(local_70,local_80);
                  local_80 = 0;
                }
                ft_mem_free(lVar16,local_40);
                ft_mem_free(lVar16,local_58);
                plVar12[7] = (ulonglong)local_64 + *plVar12;
              }
              local_b4 = local_b4 + local_98;
              local_a0 = local_a0 + 1;
              lVar8 = local_78;
            } while (local_a0 < (uVar3 & 0xfff));
          }
        }
        ft_mem_free(lVar16,_Dst);
        ft_mem_free(lVar16,local_90);
        ft_mem_free(lVar16,local_88);
        FT_Stream_ExitFrame(plVar12);
      }
      ft_mem_free(lVar16,lVar8);
      ft_mem_free(lVar16,local_b0);
      return local_res8[0];
    }
  }
  return 0;
}



// FUNCTION 143c3a570 FUN_143c3a570 body=63 status=ok
// SIG undefined FUN_143c3a570(void)

void FUN_143c3a570(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143c33b20();
  uVar1 = FUN_143c20070(param_3,uVar1);
  *(undefined4 *)(*(longlong *)(param_1 + 0x228) + (param_2 & 0xffffffff) * 4) = uVar1;
  return;
}



// FUNCTION 143c3a5b0 FUN_143c3a5b0 body=466 status=ok
// SIG undefined FUN_143c3a5b0(void)

void FUN_143c3a5b0(longlong *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 local_res10;
  
  if (param_2 <= param_3) {
    uVar10 = (ulonglong)param_2;
    if ((param_4 < *(uint *)(param_1 + 3)) &&
       (uVar12 = (ulonglong)param_5, param_5 < *(uint *)(param_1 + 3))) {
      iVar2 = *(int *)(param_1[2] + uVar12 * 8);
      iVar11 = *(int *)(param_1[2] + (ulonglong)param_4 * 8);
      iVar13 = iVar2;
      if (iVar2 < iVar11) {
        uVar12 = (ulonglong)param_4;
        param_4 = param_5;
        iVar13 = iVar11;
        iVar11 = iVar2;
      }
      iVar2 = *(int *)(*param_1 + (ulonglong)param_4 * 8);
      iVar3 = *(int *)(*param_1 + uVar12 * 8);
      iVar4 = *(int *)(param_1[1] + (ulonglong)param_4 * 8);
      iVar5 = *(int *)(param_1[1] + uVar12 * 8);
      if ((iVar4 == iVar5) || (iVar11 == iVar13)) {
        do {
          lVar1 = uVar10 * 8;
          iVar11 = *(int *)(lVar1 + *param_1);
          if (iVar2 < iVar11) {
            iVar13 = iVar4;
            if (iVar3 <= iVar11) {
              iVar13 = (iVar5 - iVar3) + iVar11;
            }
          }
          else {
            iVar13 = iVar11 + (iVar4 - iVar2);
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          *(int *)(lVar1 + param_1[1]) = iVar13;
        } while (uVar9 <= param_3);
      }
      else {
        uVar8 = 0;
        bVar6 = false;
        local_res10 = 0;
        do {
          lVar1 = uVar10 * 8;
          iVar7 = *(int *)(lVar1 + *param_1);
          if (iVar2 < iVar7) {
            if (iVar7 < iVar3) {
              if (!bVar6) {
                bVar6 = true;
                local_res10 = FUN_143c20070(iVar5 - iVar4,iVar13 - iVar11);
                uVar8 = local_res10;
              }
              iVar7 = FUN_143c22100(*(int *)(lVar1 + param_1[2]) - iVar11,uVar8);
              iVar7 = iVar7 + iVar4;
              uVar8 = local_res10;
            }
            else {
              iVar7 = iVar7 + (iVar5 - iVar3);
            }
          }
          else {
            iVar7 = iVar7 + (iVar4 - iVar2);
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          *(int *)(lVar1 + param_1[1]) = iVar7;
        } while (uVar9 <= param_3);
      }
    }
  }
  return;
}



// FUNCTION 143c3a790 FUN_143c3a790 body=544 status=ok
// SIG undefined FUN_143c3a790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c3a790(longlong *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 auStack_78 [32];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar3 = param_1[2];
  lVar4 = param_1[1];
  uVar13 = 0x10000;
  lVar5 = *param_1;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uVar13 = *(undefined4 *)(lVar4 + 0x20);
  }
  if (*(int *)(lVar3 + 0x60) == 0x636f6d70) {
    local_58 = (int)param_1[7];
    iStack_54 = *(int *)((longlong)param_1 + 0x3c);
    iStack_50 = (int)param_1[8];
    iStack_4c = *(int *)((longlong)param_1 + 0x44);
  }
  else {
    FUN_143c22f00(lVar3 + 0x98,&local_58);
  }
  *(int *)(lVar3 + 0x50) = (int)param_1[10];
  *(int *)(lVar3 + 0x38) = local_58;
  *(int *)(lVar3 + 0x3c) = iStack_4c;
  *(int *)(lVar3 + 0x40) = (int)param_1[0xc] - (int)param_1[0xb];
  if (((*(int *)(lVar5 + 0x26c) == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) &&
     (pbVar10 = (byte *)FUN_143c3c3f0(lVar5,*(undefined2 *)(lVar4 + 0x18),param_2),
     pbVar10 != (byte *)0x0)) {
    *(uint *)(lVar3 + 0x40) = (uint)*pbVar10 << 6;
  }
  *(int *)(lVar3 + 0x30) = iStack_50 - local_58;
  *(int *)(lVar3 + 0x34) = iStack_4c - iStack_54;
  if ((*(char *)(lVar5 + 400) == '\0') || (*(short *)(lVar5 + 0x1ba) == 0)) {
    sVar7 = FUN_143c20070(iStack_4c - iStack_54,uVar13);
    if (*(short *)(lVar5 + 0x1f8) == -1) {
      sVar1 = *(short *)(lVar5 + 0x13e);
      sVar2 = *(short *)(lVar5 + 0x13c);
    }
    else {
      sVar1 = *(short *)(lVar5 + 0x240);
      sVar2 = *(short *)(lVar5 + 0x23e);
    }
    uVar9 = (int)sVar2 - (int)sVar1;
    iVar12 = (int)(uVar9 - (int)sVar7) / 2;
  }
  else {
    sVar7 = FUN_143c20070(*(int *)((longlong)param_1 + 0x11c) - iStack_4c,uVar13);
    iVar12 = (int)sVar7;
    if (*(int *)((longlong)param_1 + 0x124) < *(int *)((longlong)param_1 + 0x11c)) {
      uVar8 = FUN_143c20070(*(int *)((longlong)param_1 + 0x11c) -
                            *(int *)((longlong)param_1 + 0x124),uVar13);
      uVar9 = (uint)uVar8;
    }
    else {
      uVar9 = 0;
    }
  }
  plVar6 = *(longlong **)(*(longlong *)(lVar5 + 0xd0) + 0x48);
  if ((plVar6 != (longlong *)0x0) && (*(longlong *)(*plVar6 + 0x10) != 0)) {
    local_48 = 0;
    local_44 = iVar12;
    local_40 = uVar9;
    uVar11 = (**(code **)(*plVar6 + 0x10))
                       (plVar6[1],param_2,CONCAT71((int7)((ulonglong)*plVar6 >> 8),1),&local_48);
    iVar12 = local_44;
    uVar9 = local_40;
    if ((int)uVar11 != 0) {
      return uVar11;
    }
  }
  *(uint *)(lVar3 + 0x54) = uVar9;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    iVar12 = FUN_143c22100(iVar12,uVar13);
    uVar9 = FUN_143c22100(uVar9,uVar13);
  }
  *(int *)(lVar3 + 0x48) = iVar12;
  *(uint *)(lVar3 + 0x4c) = uVar9;
  *(int *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x38) - *(int *)(lVar3 + 0x40) / 2;
  return 0;
}



// FUNCTION 143c3a9b0 FUN_143c3a9b0 body=248 status=ok
// SIG undefined FUN_143c3a9b0(void)

undefined4
FUN_143c3a9b0(uint *param_1,ushort param_2,longlong param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar5 = 0x10000;
  if (*param_1 == 0) {
    uVar5 = 0x10000;
  }
  else {
    do {
      lVar1 = uVar8 * 4;
      iVar6 = *(int *)(lVar1 + param_3);
      if (iVar6 != 0) {
        iVar4 = *(int *)(lVar1 + *(longlong *)(param_1 + 2));
        if (((iVar4 == 0) || ((iVar4 < 0 && (0 < iVar6)))) || ((0 < iVar4 && (iVar6 < 0)))) {
          return 0;
        }
        if ((param_2 & 0x4000) == 0) {
          if (iVar4 < 1) {
            iVar4 = -iVar4;
          }
          uVar5 = FUN_143c22100(uVar5,iVar4);
        }
        else {
          iVar2 = *(int *)(lVar1 + param_4);
          if (iVar4 < iVar2) {
            return 0;
          }
          iVar3 = *(int *)(lVar1 + param_5);
          if (iVar3 < iVar4) {
            return 0;
          }
          if (iVar4 < iVar6) {
            iVar6 = iVar6 - iVar2;
            iVar4 = iVar4 - iVar2;
          }
          else {
            iVar6 = iVar3 - iVar6;
            iVar4 = iVar3 - iVar4;
          }
          uVar5 = FUN_143c21f00(uVar5,iVar4,iVar6);
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *param_1);
  }
  return uVar5;
}



// FUNCTION 143c3aab0 FUN_143c3aab0 body=482 status=ok
// SIG undefined FUN_143c3aab0(void)

void FUN_143c3aab0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int local_res8 [2];
  undefined4 local_res10 [2];
  ulonglong uVar12;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  lVar2 = *(longlong *)(param_1 + 0x3a0);
  iVar15 = 0;
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  local_res8[0] = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  local_res8[0] = (**(code **)(param_1 + 0x290))(param_1,0x61766172,lVar1,local_res10);
  if ((local_res8[0] == 0) &&
     (local_res8[0] = FUN_143c24650(lVar1,local_res10[0]), local_res8[0] == 0)) {
    iVar6 = FUN_143c24870(lVar1);
    iVar7 = FUN_143c24870(lVar1);
    if ((iVar6 == 0x10000) && (iVar7 == **(int **)(lVar2 + 0x10))) {
      puVar8 = (ushort *)FUN_143c27410(uVar3,0x10,0,iVar7,0,local_res8);
      *(ushort **)(lVar2 + 0x28) = puVar8;
      if ((local_res8[0] == 0) && (0 < iVar7)) {
LAB_143c3ab90:
        uVar12 = 0;
        uVar4 = FUN_143c24910(lVar1);
        *puVar8 = uVar4;
        uVar9 = FUN_143c27410(uVar3,8,0,uVar4,0,local_res8);
        *(undefined8 *)(puVar8 + 4) = uVar9;
        if (local_res8[0] == 0) goto code_r0x000143c3abc9;
        lVar14 = (longlong)(iVar15 + -1);
        if (-1 < iVar15 + -1) {
          lVar10 = lVar14 << 4;
          do {
            ft_mem_free(uVar3,*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 8 + lVar10));
            lVar14 = lVar14 + -1;
            lVar10 = lVar10 + -0x10;
            *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x18 + lVar10) = 0;
          } while (-1 < lVar14);
        }
        ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x28));
        *(undefined8 *)(lVar2 + 0x28) = 0;
      }
    }
LAB_143c3ac72:
    FT_Stream_ExitFrame(lVar1);
  }
  return;
code_r0x000143c3abc9:
  uVar13 = uVar12;
  if (*puVar8 != 0) {
    do {
      sVar5 = FUN_143c24910(lVar1);
      *(int *)(uVar13 + *(longlong *)(puVar8 + 4)) = (int)sVar5 << 2;
      sVar5 = FUN_143c24910(lVar1);
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      *(int *)(uVar13 + 4 + *(longlong *)(puVar8 + 4)) = (int)sVar5 << 2;
      uVar13 = uVar13 + 8;
    } while ((int)uVar11 < (int)(uint)*puVar8);
  }
  iVar15 = iVar15 + 1;
  puVar8 = puVar8 + 8;
  if (iVar7 <= iVar15) goto LAB_143c3ac72;
  goto LAB_143c3ab90;
}



// FUNCTION 143c3aca0 FUN_143c3aca0 body=607 status=ok
// SIG undefined FUN_143c3aca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c3aca0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint *local_60;
  uint local_58;
  undefined1 local_54 [4];
  int local_50;
  ushort local_4c;
  ushort local_4a;
  int local_48;
  ushort local_44;
  byte local_42;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  lVar2 = *(longlong *)(param_1 + 0x3a0);
  uVar9 = *(undefined8 *)(lVar1 + 0x30);
  uVar7 = (**(code **)(param_1 + 0x290))(param_1,0x67766172,lVar1,local_54);
  local_58 = (uint)uVar7;
  if (local_58 == 0) {
    iVar5 = IStreamingManager::GetNumWantingResourcesID(lVar1);
    uVar7 = FUN_143c24c00(lVar1,&DAT_145d22768,&local_50);
    local_58 = (uint)uVar7;
    if (local_58 == 0) {
      *(uint *)(lVar2 + 0x30) = (uint)local_4a;
      *(uint *)(lVar2 + 0x40) = (uint)local_44;
      if ((local_50 == 0x10000) && (local_4c == **(ushort **)(lVar2 + 0x10))) {
        local_60 = &local_58;
        local_68 = 0;
        uVar8 = FUN_143c27410(uVar9,4,0,local_44 + 1);
        *(undefined8 *)(lVar2 + 0x48) = uVar8;
        uVar7 = (ulonglong)local_58;
        if (local_58 == 0) {
          if ((local_42 & 1) == 0) {
            uVar7 = FUN_143c24650(lVar1,*(int *)(lVar2 + 0x40) * 2 + 2);
            if ((int)uVar7 != 0) {
              return uVar7;
            }
            uVar7 = 0;
            local_58 = 0;
            do {
              uVar3 = FUN_143c24910(lVar1);
              *(uint *)(*(longlong *)(lVar2 + 0x48) + uVar7 * 4) =
                   local_40 + iVar5 + (uint)uVar3 * 2;
              uVar11 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar11;
            } while (uVar11 <= *(uint *)(lVar2 + 0x40));
          }
          else {
            uVar7 = FUN_143c24650(lVar1,*(int *)(lVar2 + 0x40) * 4 + 4);
            if ((int)uVar7 != 0) {
              return uVar7;
            }
            uVar7 = 0;
            local_58 = 0;
            do {
              iVar6 = FUN_143c24870(lVar1);
              *(int *)(*(longlong *)(lVar2 + 0x48) + uVar7 * 4) = iVar6 + local_40 + iVar5;
              uVar11 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar11;
            } while (uVar11 <= *(uint *)(lVar2 + 0x40));
          }
          FT_Stream_ExitFrame(lVar1);
          if (*(int *)(lVar2 + 0x30) != 0) {
            local_60 = &local_58;
            local_68 = 0;
            uVar9 = FUN_143c27410(uVar9,4,0,(uint)local_4c * *(int *)(lVar2 + 0x30));
            *(undefined8 *)(lVar2 + 0x38) = uVar9;
            if (local_58 != 0) {
              return (ulonglong)local_58;
            }
            uVar7 = FUN_143c251d0(lVar1,local_48 + iVar5);
            local_58 = (uint)uVar7;
            if (local_58 != 0) {
              return uVar7;
            }
            uVar7 = FUN_143c24650(lVar1,(uint)local_4c * *(int *)(lVar2 + 0x30) * 2);
            if ((int)uVar7 != 0) {
              return uVar7;
            }
            uVar11 = 0;
            local_58 = 0;
            if (*(int *)(lVar2 + 0x30) != 0) {
              uVar10 = (uint)local_4c;
              do {
                uVar12 = 0;
                if (uVar10 != 0) {
                  do {
                    sVar4 = FUN_143c24910(lVar1);
                    uVar10 = local_4c * uVar11 + uVar12;
                    uVar12 = uVar12 + 1;
                    *(int *)(*(longlong *)(lVar2 + 0x38) + (ulonglong)uVar10 * 4) = (int)sVar4 << 2;
                    uVar10 = (uint)local_4c;
                  } while (uVar12 < uVar10);
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < *(uint *)(lVar2 + 0x30));
            }
            FT_Stream_ExitFrame(lVar1);
          }
          uVar7 = (ulonglong)local_58;
        }
      }
      else {
        uVar7 = 8;
      }
    }
  }
  return uVar7;
}



// FUNCTION 143c3af00 FUN_143c3af00 body=276 status=ok
// SIG undefined FUN_143c3af00(void)

longlong FUN_143c3af00(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res8 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = 0;
  local_res8[0] = 0;
  lVar5 = FUN_143c27410(uVar1,2,0,param_2,0,local_res8);
  if (local_res8[0] != 0) {
    return 0;
  }
  uVar6 = uVar11;
  if (param_2 == 0) {
    return lVar5;
  }
LAB_143c3af70:
  bVar2 = FT_Stream_GetChar(param_1);
  uVar8 = bVar2 & 0x3f;
  uVar7 = uVar6;
  uVar10 = uVar11;
  if ((char)bVar2 < '\0') {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = uVar7;
      if (param_2 <= (uint)uVar7) goto LAB_143c3afe0;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar6 = (ulonglong)((uint)uVar7 + 1);
      *(undefined2 *)(lVar5 + uVar7 * 2) = 0;
      uVar7 = uVar6;
    } while (uVar9 + 1 <= uVar8);
  }
  else if ((bVar2 & 0x40) == 0) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = uVar7;
      if (param_2 <= (uint)uVar7) goto LAB_143c3afe0;
      cVar3 = FT_Stream_GetChar(param_1);
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar6 = (ulonglong)((uint)uVar7 + 1);
      *(short *)(lVar5 + uVar7 * 2) = (short)cVar3;
      uVar7 = uVar6;
    } while (uVar9 + 1 <= uVar8);
  }
  else {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = uVar7;
      if (param_2 <= (uint)uVar7) goto LAB_143c3afe0;
      uVar4 = FUN_143c24910(param_1);
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar6 = (ulonglong)((uint)uVar7 + 1);
      *(undefined2 *)(lVar5 + uVar7 * 2) = uVar4;
      uVar7 = uVar6;
    } while (uVar9 + 1 <= uVar8);
  }
  goto LAB_143c3afe4;
LAB_143c3afe0:
  if (uVar9 <= uVar8) {
    ft_mem_free(uVar1,lVar5);
    return 0;
  }
LAB_143c3afe4:
  if (param_2 <= (uint)uVar6) {
    return lVar5;
  }
  goto LAB_143c3af70;
}



// FUNCTION 143c3b020 FUN_143c3b020 body=335 status=ok
// SIG undefined FUN_143c3b020(void)

longlong FUN_143c3b020(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int local_res8 [2];
  ulonglong uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_res8[0] = 0;
  *param_2 = 0;
  bVar2 = FT_Stream_GetChar();
  uVar13 = (uint)bVar2;
  if (bVar2 == 0) {
    lVar6 = -1;
  }
  else {
    if ((char)bVar2 < '\0') {
      bVar3 = FT_Stream_GetChar(param_1);
      uVar13 = (bVar2 & 0x7f) << 8 | (uint)bVar3;
    }
    lVar6 = FUN_143c27410(uVar1,2,0,uVar13,0,local_res8);
    if (local_res8[0] == 0) {
      *param_2 = uVar13;
      uVar8 = 0;
      if (uVar13 != 0) {
        do {
          bVar2 = FT_Stream_GetChar(param_1);
          uVar12 = (ulonglong)bVar2;
          uVar11 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            uVar12 = (ulonglong)(uVar11 & 0x7f);
            sVar4 = FUN_143c24910();
            uVar7 = (int)uVar8 + 1;
            uVar9 = (ulonglong)uVar7;
            *(short *)(lVar6 + uVar8 * 2) = sVar4;
            if ((bVar2 & 0x7f) == 0) {
              return lVar6;
            }
            if (uVar13 < (uVar11 & 0x7f) + uVar7) {
              return lVar6;
            }
            if ((bVar2 & 0x7f) != 0) {
              do {
                sVar5 = FUN_143c24910(param_1);
                sVar4 = sVar4 + sVar5;
                *(short *)(lVar6 + uVar9 * 2) = sVar4;
                uVar9 = (ulonglong)((int)uVar9 + 1);
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          else {
            bVar3 = FT_Stream_GetChar(param_1);
            uVar10 = (ushort)bVar3;
            uVar7 = (int)uVar8 + 1;
            uVar9 = (ulonglong)uVar7;
            *(ushort *)(lVar6 + uVar8 * 2) = (ushort)bVar3;
            if (uVar11 == 0) {
              return lVar6;
            }
            if (uVar13 < bVar2 + uVar7) {
              return lVar6;
            }
            if (uVar11 != 0) {
              do {
                bVar2 = FT_Stream_GetChar(param_1);
                uVar10 = uVar10 + bVar2;
                *(ushort *)(lVar6 + uVar9 * 2) = uVar10;
                uVar9 = (ulonglong)((int)uVar9 + 1);
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          uVar8 = uVar9;
        } while ((uint)uVar9 < uVar13);
      }
    }
    else {
      lVar6 = 0;
    }
  }
  return lVar6;
}



// FUNCTION 143c3b170 FUN_143c3b170 body=268 status=ok
// SIG undefined FUN_143c3b170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c3b170(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  ushort *local_48;
  ushort local_38;
  ushort local_36;
  short local_34;
  short local_32;
  ushort local_30;
  short local_2e;
  short local_2c;
  ushort local_2a;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_48 = &local_38;
  lVar1 = *(longlong *)(param_2 + 8);
  local_50 = param_2 + 0x68;
  local_58 = *(undefined8 *)(lVar1 + 0xa0);
  uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2c0) + 0x90))
                    (lVar1,*(undefined4 *)(param_1 + 0x84),param_3,param_4);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(param_2 + 0x98) = 0;
    *(uint *)(param_2 + 0x30) = (uint)local_36 << 6;
    *(uint *)(param_2 + 0x34) = (uint)local_38 << 6;
    *(undefined4 *)(param_2 + 0x60) = 0x62697473;
    *(int *)(param_2 + 0x38) = (int)local_34 << 6;
    *(int *)(param_2 + 0x3c) = (int)local_32 << 6;
    *(uint *)(param_2 + 0x40) = (uint)local_30 << 6;
    *(int *)(param_2 + 0x44) = (int)local_2e << 6;
    *(int *)(param_2 + 0x48) = (int)local_2c << 6;
    *(uint *)(param_2 + 0x4c) = (uint)local_2a << 6;
    if ((param_4 & 0x10) == 0) {
      *(int *)(param_2 + 0x90) = (int)local_34;
      *(int *)(param_2 + 0x94) = (int)local_32;
      uVar2 = uVar2 & 0xffffffff;
    }
    else {
      *(int *)(param_2 + 0x90) = (int)local_2e;
      *(int *)(param_2 + 0x94) = (int)local_2c;
      uVar2 = uVar2 & 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 143c3b280 FUN_143c3b280 body=2542 status=ok
// SIG undefined FUN_143c3b280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c3b280(longlong *param_1,undefined8 param_2,uint param_3,char param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  short *psVar12;
  short *psVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined2 *puVar18;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  uint *local_150;
  uint local_148;
  char local_144;
  char local_143;
  char local_142;
  longlong local_140;
  int local_138;
  uint local_134;
  ulonglong local_130;
  uint local_128;
  ulonglong local_120;
  short *local_118;
  uint local_110;
  longlong local_108;
  uint local_100;
  undefined2 *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78 [2];
  undefined4 *local_70;
  ulonglong *local_68;
  undefined1 **local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar14 = 0;
  iVar5 = 0;
  local_140 = *param_1;
  local_130 = CONCAT44(local_130._4_4_,(int)param_2);
  local_148 = 0;
  lVar1 = param_1[3];
  local_143 = '\0';
  local_144 = '\0';
  if ((1 < param_3) && (*(ushort *)(local_140 + 0x18e) < param_3)) {
    return 0x15;
  }
  *(int *)((longlong)param_1 + 0x24) = (int)param_2;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_138 = *(int *)(param_1[1] + 0x44);
    uVar6 = *(undefined4 *)(param_1[1] + 0x48);
  }
  else {
    uVar6 = 0x10000;
    local_138 = 0x10000;
  }
  local_120 = CONCAT44(local_120._4_4_,uVar6);
  puVar2 = *(undefined8 **)(*(longlong *)(local_140 + 0xd0) + 0x48);
  local_142 = param_4;
  local_100 = param_3;
  if (puVar2 == (undefined8 *)0x0) {
    iVar5 = FUN_143c329e0(local_140,param_2,param_1 + 6);
  }
  else {
    uVar7 = (**(code **)*puVar2)(puVar2[1],param_2,&local_e8);
    local_148 = (uint)uVar7;
    if (local_148 != 0) {
      return uVar7;
    }
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_144 = '\x01';
    *(undefined4 *)(param_1 + 6) = local_e0;
    FUN_143c24ac0(&local_c8,local_e8);
    param_1[5] = (longlong)&local_c8;
  }
  uVar15 = local_148;
  if ((int)param_1[6] < 1) {
LAB_143c3b42b:
    local_148 = uVar15;
    uVar16 = local_130;
    if (((int)param_1[6] == 0) || (*(short *)((longlong)param_1 + 0x34) == 0)) {
      param_1[7] = 0;
      param_1[8] = 0;
      local_148 = FUN_143c3cd70(param_1,local_130 & 0xffffffff);
      uVar7 = (ulonglong)local_148;
      if ((local_148 == 0) && (local_142 == '\0')) {
        iVar9 = (int)param_1[7] - (int)param_1[9];
        iVar5 = (int)param_1[0x22] + *(int *)((longlong)param_1 + 0x44);
        *(int *)(param_1 + 0xb) = iVar9;
        *(int *)((longlong)param_1 + 0x11c) = iVar5;
        *(int *)(param_1 + 0xc) = iVar9 + *(int *)((longlong)param_1 + 0x4c);
        *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
        *(undefined4 *)((longlong)param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x23) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(int *)((longlong)param_1 + 0x124) = iVar5 - *(int *)((longlong)param_1 + 0x114);
        FUN_143c3ced0(param_1,uVar16 & 0xffffffff);
        if (*(char *)(*param_1 + 0x39c) != '\0') {
          local_50 = (undefined4)param_1[0xb];
          local_4c = *(undefined4 *)((longlong)param_1 + 0x5c);
          local_48 = (short *)param_1[0xc];
          local_40 = (undefined1 *)param_1[0x23];
          local_38 = (undefined2 *)param_1[0x24];
          local_70 = &local_50;
          local_68 = &local_130;
          local_60 = &local_28;
          local_130 = CONCAT44(local_130._4_4_,0x1010101);
          local_28 = (undefined1 *)0x3000200010000;
          local_78[0] = 0x40004;
          local_148 = FUN_143c39e80(*param_1,uVar16 & 0xffffffff,local_78,4);
          uVar7 = (ulonglong)local_148;
          if (local_148 != 0) goto LAB_143c3bc09;
          *(undefined4 *)(param_1 + 0xb) = local_50;
          *(undefined4 *)((longlong)param_1 + 0x5c) = local_4c;
          *(undefined4 *)(param_1 + 0xc) = (undefined4)local_48;
          *(undefined4 *)((longlong)param_1 + 100) = local_48._4_4_;
          *(undefined4 *)(param_1 + 0x23) = (undefined4)local_40;
          *(undefined4 *)((longlong)param_1 + 0x11c) = local_40._4_4_;
          *(undefined4 *)(param_1 + 0x24) = (undefined4)local_38;
          *(undefined4 *)((longlong)param_1 + 0x124) = local_38._4_4_;
          local_148 = 0;
        }
        iVar5 = local_138;
        if ((*(byte *)(param_1 + 4) & 1) == 0) {
          uVar6 = FUN_143c22100((int)param_1[0xb],local_138);
          *(undefined4 *)(param_1 + 0xb) = uVar6;
          uVar6 = FUN_143c22100((int)param_1[0xc],iVar5);
          *(undefined4 *)(param_1 + 0xc) = uVar6;
          uVar6 = FUN_143c22100((int)param_1[0x23],iVar5);
          *(undefined4 *)(param_1 + 0x23) = uVar6;
          uVar6 = FUN_143c22100(*(undefined4 *)((longlong)param_1 + 0x11c),local_120 & 0xffffffff);
          *(undefined4 *)((longlong)param_1 + 0x11c) = uVar6;
          uVar6 = FUN_143c22100((int)param_1[0x24],iVar5);
          *(undefined4 *)(param_1 + 0x24) = uVar6;
          uVar6 = FUN_143c22100(*(undefined4 *)((longlong)param_1 + 0x124),local_120 & 0xffffffff);
          *(undefined4 *)((longlong)param_1 + 0x124) = uVar6;
        }
LAB_143c3bc05:
        local_148 = (uint)uVar14;
        uVar7 = uVar14;
      }
LAB_143c3bc09:
      lVar8 = local_140;
      if (local_143 == '\0') goto LAB_143c3bc27;
      goto LAB_143c3bc10;
    }
    iVar9 = (int)param_1[7] - (int)param_1[9];
    iVar5 = (int)param_1[0x22] + *(int *)((longlong)param_1 + 0x44);
    *(int *)(param_1 + 0xb) = iVar9;
    *(int *)((longlong)param_1 + 0x11c) = iVar5;
    *(int *)(param_1 + 0xc) = iVar9 + *(int *)((longlong)param_1 + 0x4c);
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    *(undefined4 *)((longlong)param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(int *)((longlong)param_1 + 0x124) = iVar5 - *(int *)((longlong)param_1 + 0x114);
    FUN_143c3ced0(param_1,local_130 & 0xffffffff);
    lVar8 = local_140;
    if (0 < *(short *)((longlong)param_1 + 0x34)) {
      local_148 = (**(code **)(local_140 + 0x2b0))(param_1);
      uVar7 = (ulonglong)local_148;
      if (local_148 == 0) {
        (**(code **)(lVar8 + 0x2a0))(param_1);
        local_148 = FUN_143c388b0(param_1);
        if (local_148 == 0) {
          FUN_143c20ca0(lVar1);
        }
        uVar7 = (ulonglong)local_148;
        goto LAB_143c3bc27;
      }
      goto LAB_143c3bc09;
    }
    if (*(short *)((longlong)param_1 + 0x34) != -1) {
      uVar14 = 0x14;
      goto LAB_143c3bc05;
    }
    local_110 = (uint)*(short *)(lVar1 + 0x1a);
    local_f0 = (int)*(short *)(lVar1 + 0x18);
    local_148 = (**(code **)(local_140 + 0x2b8))(param_1);
    uVar7 = (ulonglong)local_148;
    if (local_148 != 0) goto LAB_143c3bc09;
    local_ec = (undefined4)param_1[0x20];
    (**(code **)(local_140 + 0x2a0))(param_1);
    if (*(char *)(local_140 + 0x39c) != '\0') {
      local_108 = *(longlong *)(local_140 + 0x98);
      local_150 = &local_148;
      local_134 = *(uint *)(lVar1 + 0x98);
      sVar4 = (short)local_134 + 4;
      local_50 = CONCAT22(sVar4,sVar4);
      local_128 = (uint)sVar4;
      local_158 = 0;
      local_118 = (short *)FUN_143c27410(local_108,8,0,local_128);
      if (local_148 == 0) {
        local_150 = &local_148;
        local_158 = 0;
        local_28 = (undefined1 *)FUN_143c27410(local_108,1,0,local_128);
        if (local_148 != 0) goto LAB_143c3b7aa;
        local_150 = &local_148;
        local_158 = 0;
        local_f8 = (undefined2 *)FUN_143c27410(local_108,2,0,local_128);
        if (local_148 != 0) goto LAB_143c3b7aa;
        uVar7 = uVar14;
        if (local_134 != 0) {
          puVar10 = (undefined4 *)
                    ((ulonglong)*(uint *)(lVar1 + 0x50) * 0x20 + 0xc + *(longlong *)(lVar1 + 0xa0));
          psVar13 = local_118;
          puVar17 = local_28;
          puVar18 = local_f8;
          do {
            *(undefined4 *)psVar13 = puVar10[-1];
            *(undefined4 *)(psVar13 + 2) = *puVar10;
            puVar10 = puVar10 + 8;
            *puVar17 = 1;
            *puVar18 = (short)uVar7;
            uVar15 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar15;
            psVar13 = psVar13 + 4;
            puVar17 = puVar17 + 1;
            puVar18 = puVar18 + 1;
          } while (uVar15 < local_134);
        }
        iVar5 = (int)uVar7;
        local_48 = local_118;
        local_40 = local_28;
        *(int *)(local_118 + uVar7 * 4) = (int)param_1[0xb];
        *(undefined4 *)(local_118 + uVar7 * 4 + 2) = *(undefined4 *)((longlong)param_1 + 0x5c);
        local_28[uVar7] = 1;
        local_f8[uVar7] = (short)uVar7;
        uVar7 = (ulonglong)(iVar5 + 1U);
        *(int *)(local_118 + uVar7 * 4) = (int)param_1[0xc];
        *(undefined4 *)(local_118 + uVar7 * 4 + 2) = *(undefined4 *)((longlong)param_1 + 100);
        local_28[uVar7] = 1;
        local_f8[uVar7] = (short)(iVar5 + 1U);
        uVar7 = (ulonglong)(iVar5 + 2U);
        *(int *)(local_118 + uVar7 * 4) = (int)param_1[0x23];
        *(undefined4 *)(local_118 + uVar7 * 4 + 2) = *(undefined4 *)((longlong)param_1 + 0x11c);
        local_28[uVar7] = 1;
        local_f8[uVar7] = (short)(iVar5 + 2U);
        uVar7 = (ulonglong)(iVar5 + 3U);
        *(int *)(local_118 + uVar7 * 4) = (int)param_1[0x24];
        *(undefined4 *)(local_118 + uVar7 * 4 + 2) = *(undefined4 *)((longlong)param_1 + 0x124);
        local_28[uVar7] = 1;
        local_f8[uVar7] = (short)(iVar5 + 3U);
        local_38 = local_f8;
        local_148 = FUN_143c39e80(local_140,local_130 & 0xffffffff,&local_50,local_128);
        psVar13 = local_118;
        if (local_148 == 0) {
          uVar7 = uVar14;
          if (local_134 != 0) {
            uVar7 = (ulonglong)local_134;
            uVar16 = (ulonglong)local_134;
            piVar11 = (int *)((ulonglong)*(uint *)(lVar1 + 0x50) * 0x20 + 0xc +
                             *(longlong *)(lVar1 + 0xa0));
            psVar12 = local_118;
            do {
              piVar11[-1] = (int)*psVar12;
              *piVar11 = (int)psVar12[2];
              uVar16 = uVar16 - 1;
              piVar11 = piVar11 + 8;
              psVar12 = psVar12 + 4;
            } while (uVar16 != 0);
          }
          *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(local_118 + uVar7 * 4);
          *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(local_118 + uVar7 * 4 + 2);
          iVar5 = (int)uVar7;
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(local_118 + (ulonglong)(iVar5 + 1U) * 4);
          *(undefined4 *)((longlong)param_1 + 100) =
               *(undefined4 *)(local_118 + (ulonglong)(iVar5 + 1U) * 4 + 2);
          *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(local_118 + (ulonglong)(iVar5 + 2U) * 4)
          ;
          *(undefined4 *)((longlong)param_1 + 0x11c) =
               *(undefined4 *)(local_118 + (ulonglong)(iVar5 + 2U) * 4 + 2);
          *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(local_118 + (ulonglong)(iVar5 + 3U) * 4)
          ;
          *(undefined4 *)((longlong)param_1 + 0x124) =
               *(undefined4 *)(local_118 + (ulonglong)(iVar5 + 3U) * 4 + 2);
        }
      }
      else {
LAB_143c3b7aa:
        local_f8 = local_38;
        local_28 = local_40;
        psVar13 = local_48;
      }
      ft_mem_free(local_108,psVar13);
      ft_mem_free(local_108,local_28);
      ft_mem_free(local_108,local_f8);
      uVar7 = (ulonglong)local_148;
      lVar8 = local_140;
      if (local_148 != 0) goto LAB_143c3bc27;
    }
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      uVar6 = FUN_143c22100((int)param_1[0xb],local_138);
      *(undefined4 *)(param_1 + 0xb) = uVar6;
      uVar6 = FUN_143c22100((int)param_1[0xc],local_138);
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      uVar6 = FUN_143c22100((int)param_1[0x23],local_138);
      *(undefined4 *)(param_1 + 0x23) = uVar6;
      uVar6 = FUN_143c22100(*(undefined4 *)((longlong)param_1 + 0x11c),local_120 & 0xffffffff);
      *(undefined4 *)((longlong)param_1 + 0x11c) = uVar6;
      uVar6 = FUN_143c22100((int)param_1[0x24],local_138);
      *(undefined4 *)(param_1 + 0x24) = uVar6;
      uVar6 = FUN_143c22100(*(undefined4 *)((longlong)param_1 + 0x124),local_120 & 0xffffffff);
      *(undefined4 *)((longlong)param_1 + 0x124) = uVar6;
    }
    if ((*(uint *)(param_1 + 4) & 0x400) == 0) {
      local_120 = CONCAT44(local_120._4_4_,local_110);
      local_128 = *(uint *)(lVar1 + 0x98);
      local_130 = CONCAT44(local_130._4_4_,*(undefined4 *)(lVar1 + 0x50));
      local_d8 = param_1[5];
      local_118 = (short *)CONCAT44(local_118._4_4_,(int)param_1[6]);
      FUN_143c20ca0(lVar1);
      local_134 = 0;
      if (local_128 == 0) {
        uVar7 = (ulonglong)local_148;
      }
      else {
        local_138 = local_100 + 1;
        local_f8 = (undefined2 *)((local_130 & 0xffffffff) << 5);
        do {
          local_28 = (undefined1 *)param_1[0xb];
          local_108 = param_1[0xc];
          local_120 = param_1[0x23];
          local_130 = param_1[0x24];
          local_100 = (uint)*(short *)(lVar1 + 0x1a);
          local_148 = FUN_143c3b280(param_1,*(undefined4 *)
                                             ((longlong)local_f8 + *(longlong *)(lVar1 + 0x58)),
                                    local_138,0);
          uVar7 = (ulonglong)local_148;
          lVar8 = local_140;
          if (local_148 != 0) goto LAB_143c3bc27;
          uVar14 = *(longlong *)(lVar1 + 0x58) + (longlong)local_f8;
          if ((*(ushort *)(uVar14 + 4) & 0x200) == 0) {
            param_1[0xb] = (longlong)local_28;
            param_1[0xc] = local_108;
            param_1[0x23] = local_120;
            param_1[0x24] = local_130;
          }
          local_120 = CONCAT44(local_120._4_4_,(int)*(short *)(lVar1 + 0x1a));
          if ((int)*(short *)(lVar1 + 0x1a) != local_100) {
            local_148 = FUN_143c383d0(param_1,uVar14,local_110);
            uVar7 = (ulonglong)local_148;
            lVar8 = local_140;
            if (local_148 != 0) goto LAB_143c3bc27;
          }
          local_f8 = local_f8 + 0x10;
          local_134 = local_134 + 1;
        } while (local_134 < local_128);
      }
      param_1[5] = local_d8;
      *(undefined4 *)(param_1 + 6) = local_118._0_4_;
      *(undefined4 *)(param_1 + 0x20) = local_ec;
      lVar8 = local_140;
      if ((((*(byte *)(param_1 + 4) & 2) == 0) && ((*(ushort *)(uVar14 + 4) & 0x100) != 0)) &&
         (local_110 < (uint)local_120)) {
        local_148 = FUN_143c385a0(param_1,local_110,local_f0);
        uVar7 = (ulonglong)local_148;
        lVar8 = local_140;
      }
      goto LAB_143c3bc27;
    }
    FUN_143c20ca0(lVar1);
    *(undefined4 *)(param_1[2] + 0x60) = 0x636f6d70;
  }
  else {
    if (((int)param_1[0xd] == 0) && (*(longlong *)(*(longlong *)(local_140 + 0xd0) + 0x48) == 0)) {
      uVar7 = 8;
      local_148 = 8;
      lVar8 = local_140;
      goto LAB_143c3bc27;
    }
    local_148 = (**(code **)(local_140 + 0x298))
                          (param_1,local_130 & 0xffffffff,iVar5 + (int)param_1[0xd]);
    uVar7 = (ulonglong)local_148;
    lVar8 = local_140;
    if (local_148 != 0) goto LAB_143c3bc27;
    local_143 = '\x01';
    local_148 = (**(code **)(local_140 + 0x2a8))(param_1);
    if (((local_148 == 0) &&
        (local_148 = FUN_143c3cd70(param_1,local_130 & 0xffffffff), local_148 == 0)) &&
       (uVar15 = 0, local_142 == '\0')) goto LAB_143c3b42b;
LAB_143c3bc10:
    (**(code **)(local_140 + 0x2a0))(param_1);
  }
  uVar7 = (ulonglong)local_148;
  lVar8 = local_140;
LAB_143c3bc27:
  if (local_144 != '\0') {
    plVar3 = *(longlong **)(*(longlong *)(lVar8 + 0xd0) + 0x48);
    (**(code **)(*plVar3 + 8))(plVar3[1],&local_e8);
    uVar7 = (ulonglong)local_148;
  }
  return uVar7;
}



// FUNCTION 143c3bc70 FUN_143c3bc70 body=471 status=ok
// SIG undefined FUN_143c3bc70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_143c3bc70(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_58 [32];
  char local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 0x3c4);
  uVar12 = 0;
  uVar8 = 0;
  uVar10 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x398);
    uVar13 = 0;
    uVar14 = 0;
    do {
      uVar9 = 0;
      uVar5 = 0;
      uVar4 = uVar12;
      if (uVar10 < uVar1) {
        lVar3 = *(longlong *)(param_1 + 0x3c8);
        if (*(short *)(param_1 + 0x132) == 0) {
          uVar9 = (uint)CONCAT11(*(undefined1 *)(uVar13 + lVar3),*(undefined1 *)(uVar13 + 1 + lVar3)
                                );
          uVar11 = lVar3 + 4 + uVar13;
          uVar5 = uVar9;
          if (uVar11 <= (ulonglong)(uVar1 * 2) + lVar3) {
            uVar5 = (uint)CONCAT11(*(undefined1 *)(uVar11 - 2),*(undefined1 *)(uVar11 - 1));
          }
          uVar9 = uVar9 * 2;
          uVar5 = uVar5 * 2;
        }
        else {
          puVar7 = (undefined1 *)(uVar14 + lVar3);
          uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
          uVar5 = uVar9;
          if (puVar7 + 8 <= (undefined1 *)((ulonglong)(uVar1 * 4) + lVar3)) {
            uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar7[4],puVar7[5]),puVar7[6]),puVar7[7]);
          }
        }
        if (uVar9 <= uVar2) {
          if (uVar2 < uVar5) {
            uVar5 = uVar2;
          }
          if (uVar5 < uVar9) {
            uVar5 = uVar2;
          }
          goto LAB_143c3bd9d;
        }
      }
      else {
LAB_143c3bd9d:
        if ((uVar5 != uVar9) && (uVar8 = uVar8 + 1, uVar4 = uVar10, 1 < uVar8)) break;
      }
      uVar12 = uVar4;
      uVar10 = uVar10 + 1;
      uVar14 = (ulonglong)((int)uVar14 + 4);
      uVar13 = (ulonglong)((int)uVar13 + 2);
    } while (uVar10 < uVar1);
    if (uVar8 == 1) {
      if (uVar12 == 0) {
        return true;
      }
      iVar6 = FUN_143c208d0(param_1,uVar12,local_38,8);
      if ((iVar6 == 0) && (local_38[0] == '.')) {
        iVar6 = _guard_xfg_dispatch_icall_nop(local_38,".notdef",8);
        return iVar6 == 0;
      }
    }
  }
  return false;
}



// FUNCTION 143c3be50 FUN_143c3be50 body=133 status=ok
// SIG undefined FUN_143c3be50(void)

bool FUN_143c3be50(longlong param_1)

{
  char *_Str;
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return false;
  }
  _Str = *(char **)(param_1 + 0x18);
  if (_Str != (char *)0x0) {
    iVar3 = 0;
    do {
      pcVar2 = _guard_xfg_dispatch_icall_nop(_Str,"DFKaiSho-SB" + (longlong)iVar3 * 0x14);
      if (pcVar2 != (char *)0x0) {
        return true;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
  }
  cVar1 = FUN_143c3bee0(param_1);
  return cVar1 != '\0';
}



// FUNCTION 143c3bee0 FUN_143c3bee0 body=500 status=ok
// SIG undefined FUN_143c3bee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c3bee0(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  int *piVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  int local_88 [20];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_88[1] = 0;
  bVar1 = false;
  bVar2 = false;
  local_88[2] = 0;
  local_88[3] = 0;
  bVar3 = false;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  uVar11 = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = 0;
  bVar4 = false;
  bVar5 = false;
  if (*(short *)(param_1 + 0xf4) != 0) {
    do {
      bVar3 = bVar5;
      bVar1 = bVar4;
      uVar7 = 0;
      uVar12 = (ulonglong)uVar11;
      iVar6 = *(int *)(*(longlong *)(param_1 + 0xf8) + uVar12 * 0x10);
      if (iVar6 == 0x63767420) {
        bVar1 = true;
        uVar10 = uVar7;
LAB_143c3bfac:
        piVar8 = (int *)(&DAT_145d22850 + uVar10 * 8);
        uVar10 = uVar7;
        do {
          if (*(int *)(*(longlong *)(param_1 + 0xf8) + 0xc + uVar12 * 0x10) == piVar8[1]) {
            if (((int)uVar7 == 0) && (uVar7 = 0, *(code **)(param_1 + 0x290) != (code *)0x0)) {
              iVar6 = (**(code **)(param_1 + 0x290))
                                (param_1,*(undefined4 *)
                                          (*(longlong *)(param_1 + 0xf8) + uVar12 * 0x10),
                                 *(undefined8 *)(param_1 + 0xa0),0);
              if (iVar6 == 0) {
                uVar7 = FUN_143c3dfc0(*(undefined8 *)(param_1 + 0xa0),
                                      *(undefined4 *)
                                       (*(longlong *)(param_1 + 0xf8) + 0xc + uVar12 * 0x10));
                uVar7 = uVar7 & 0xffffffff;
              }
              else {
                uVar7 = 0;
              }
            }
            if (*piVar8 == (int)uVar7) {
              local_88[uVar10] = local_88[uVar10] + 1;
            }
            if (local_88[uVar10] == 3) {
              return 1;
            }
          }
          uVar10 = uVar10 + 1;
          piVar8 = piVar8 + 6;
        } while ((longlong)uVar10 < 0x11);
      }
      else {
        if (iVar6 == 0x6670676d) {
          bVar2 = true;
          uVar10 = 1;
          goto LAB_143c3bfac;
        }
        if (iVar6 == 0x70726570) {
          bVar3 = true;
          uVar10 = 2;
          goto LAB_143c3bfac;
        }
      }
      uVar11 = uVar11 + 1;
      bVar4 = bVar1;
      bVar5 = bVar3;
    } while (uVar11 < *(ushort *)(param_1 + 0xf4));
  }
  piVar8 = local_88;
  piVar9 = &DAT_145d2285c;
  while( true ) {
    if ((!bVar1) && (piVar9[-2] == 0)) {
      *piVar8 = *piVar8 + 1;
    }
    if ((!bVar2) && (*piVar9 == 0)) {
      *piVar8 = *piVar8 + 1;
    }
    if ((!bVar3) && (piVar9[2] == 0)) {
      *piVar8 = *piVar8 + 1;
    }
    if (*piVar8 == 3) break;
    piVar9 = piVar9 + 6;
    piVar8 = piVar8 + 1;
    if (0x145d229f3 < (longlong)piVar9) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143c3c0e0 FUN_143c3c0e0 body=560 status=ok
// SIG undefined FUN_143c3c0e0(void)

void FUN_143c3c0e0(int param_1,int param_2,int param_3,int param_4,longlong param_5,longlong param_6
                  )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong local_78;
  longlong local_70;
  longlong local_58;
  
  if (param_1 <= param_2) {
    lVar13 = (longlong)param_4;
    lVar9 = (longlong)param_3;
    lVar14 = (longlong)param_1;
    lVar8 = (longlong)param_2;
    local_58 = 0;
    local_78 = lVar9;
    local_70 = lVar13;
    do {
      param_5 = param_5 + local_58;
      param_6 = param_6 + local_58;
      lVar11 = lVar9;
      lVar12 = lVar13;
      if (*(int *)(param_5 + lVar13 * 8) < *(int *)(param_5 + lVar9 * 8)) {
        lVar11 = lVar13;
        lVar12 = lVar9;
        local_78 = lVar13;
        local_70 = lVar9;
      }
      iVar1 = *(int *)(param_6 + lVar11 * 8);
      iVar2 = *(int *)(param_6 + lVar12 * 8);
      iVar3 = *(int *)(param_5 + lVar11 * 8);
      iVar4 = *(int *)(param_5 + lVar12 * 8);
      lVar9 = local_78;
      lVar13 = local_70;
      if ((iVar1 == iVar2) || (iVar3 == iVar4)) {
        lVar9 = lVar11;
        lVar13 = lVar12;
        if (lVar14 <= lVar8) {
          piVar10 = (int *)(param_6 + lVar14 * 8);
          lVar11 = (lVar8 - lVar14) + 1;
          do {
            iVar6 = *(int *)((longlong)piVar10 + (param_5 - param_6));
            if (iVar3 < iVar6) {
              iVar7 = iVar1;
              if (iVar4 <= iVar6) {
                iVar7 = iVar6 + (iVar2 - iVar4);
              }
            }
            else {
              iVar7 = iVar6 + (iVar1 - iVar3);
            }
            *piVar10 = iVar7;
            piVar10 = piVar10 + 2;
            lVar11 = lVar11 + -1;
            lVar9 = local_78;
            lVar13 = local_70;
          } while (lVar11 != 0);
        }
      }
      else {
        uVar5 = FUN_143c20070(iVar2 - iVar1,iVar4 - iVar3);
        if (lVar14 <= lVar8) {
          piVar10 = (int *)(param_6 + lVar14 * 8);
          lVar11 = (lVar8 - lVar14) + 1;
          do {
            iVar6 = *(int *)((param_5 - param_6) + (longlong)piVar10);
            if (iVar3 < iVar6) {
              if (iVar6 < iVar4) {
                iVar6 = FUN_143c22100(iVar6 - iVar3,uVar5);
                iVar6 = iVar6 + iVar1;
              }
              else {
                iVar6 = iVar6 + (iVar2 - iVar4);
              }
            }
            else {
              iVar6 = iVar6 + (iVar1 - iVar3);
            }
            *piVar10 = iVar6;
            piVar10 = piVar10 + 2;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      local_58 = local_58 + 4;
    } while (local_58 < 5);
  }
  return;
}



// FUNCTION 143c3c310 FUN_143c3c310 body=218 status=ok
// SIG undefined FUN_143c3c310(void)

void FUN_143c3c310(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 != (uint *)0x0) {
    ft_mem_free(param_1,*(undefined8 *)(param_2 + 2));
    uVar2 = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    ft_mem_free(param_1,*(undefined8 *)(param_2 + 4));
    param_2[4] = 0;
    param_2[5] = 0;
    if (*(longlong *)(param_2 + 10) != 0) {
      if (*param_2 != 0) {
        do {
          ft_mem_free(param_1,*(undefined8 *)(*(longlong *)(param_2 + 10) + 8 + uVar2 * 0x10));
          uVar1 = (int)uVar2 + 1;
          *(undefined8 *)(*(longlong *)(param_2 + 10) + 8 + uVar2 * 0x10) = 0;
          uVar2 = (ulonglong)uVar1;
        } while (uVar1 < *param_2);
      }
      ft_mem_free(param_1,*(undefined8 *)(param_2 + 10));
      param_2[10] = 0;
      param_2[0xb] = 0;
    }
    ft_mem_free(param_1,*(undefined8 *)(param_2 + 0xe));
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    ft_mem_free(param_1,*(undefined8 *)(param_2 + 0x12));
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    ft_mem_free(param_1,param_2);
  }
  return;
}



// FUNCTION 143c3c3f0 FUN_143c3c3f0 body=140 status=ok
// SIG undefined FUN_143c3c3f0(void)

longlong FUN_143c3c3f0(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x3dc) != 0) {
    do {
      if (*(byte *)(uVar2 + *(longlong *)(param_1 + 1000)) == param_2) {
        if (*(uint *)(param_1 + 0x3e0) <= param_3 + 2U) {
          return 0;
        }
        return (ulonglong)(param_3 + 2U) +
               (ulonglong)((int)uVar2 * *(uint *)(param_1 + 0x3e0)) +
               *(longlong *)(param_1 + 0x3d0) + 8;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x3dc));
  }
  return 0;
}



// FUNCTION 143c3c480 FUN_143c3c480 body=299 status=ok
// SIG undefined FUN_143c3c480(void)

ulonglong FUN_143c3c480(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  uint local_res8 [2];
  uint local_res10 [2];
  
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  local_res8[0] = (**(code **)(param_1 + 0x290))(param_1,0x63767420,param_2,local_res10);
  uVar4 = 0;
  if (local_res8[0] != 0) {
    *(undefined4 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    return 0;
  }
  *(uint *)(param_1 + 0x368) = local_res10[0] >> 1;
  uVar2 = FUN_143c27410(uVar2,2,0,local_res10[0] >> 1,0,local_res8);
  *(undefined8 *)(param_1 + 0x370) = uVar2;
  uVar3 = (ulonglong)local_res8[0];
  if (local_res8[0] == 0) {
    uVar3 = FUN_143c24650(param_2,*(int *)(param_1 + 0x368) * 2);
    if ((int)uVar3 == 0) {
      puVar5 = *(undefined2 **)(param_1 + 0x370);
      uVar3 = (ulonglong)((longlong)(puVar5 + *(uint *)(param_1 + 0x368)) + (1 - (longlong)puVar5))
              >> 1;
      if (puVar5 + *(uint *)(param_1 + 0x368) < puVar5) {
        uVar3 = uVar4;
      }
      local_res8[0] = 0;
      if (uVar3 != 0) {
        do {
          uVar1 = FUN_143c24910(param_2);
          uVar4 = uVar4 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (uVar4 < uVar3);
      }
      FT_Stream_ExitFrame(param_2);
      if (*(char *)(param_1 + 0x39c) != '\0') {
        uVar4 = FUN_143c3c8f0(param_1,param_2);
        return uVar4;
      }
      uVar3 = (ulonglong)local_res8[0];
    }
  }
  return uVar3;
}



// FUNCTION 143c3c5b0 FUN_143c3c5b0 body=468 status=ok
// SIG undefined FUN_143c3c5b0(void)

int FUN_143c3c5b0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_res18;
  ulonglong uVar7;
  
  local_res18 = *(undefined8 *)(param_2 + 0x30);
  local_res8[0] = (**(code **)(param_1 + 0x290))(param_1,0x68646d78,param_2,local_res10);
  if ((local_res8[0] != 0) || (local_res10[0] < 8)) {
    return 0;
  }
  local_res8[0] = FT_Stream_ExtractFrame(param_2,local_res10[0],param_1 + 0x3d0);
  if (local_res8[0] == 0) {
    puVar3 = *(undefined1 **)(param_1 + 0x3d0);
    uVar9 = (ulonglong)local_res10[0];
    uVar1 = puVar3[2];
    uVar2 = puVar3[3];
    uVar10 = (uint)CONCAT11(uVar1,uVar2);
    uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
    uVar7 = (ulonglong)uVar6;
    if (0xfffeffff < uVar6) {
      uVar7 = (ulonglong)(ushort)uVar6;
    }
    uVar6 = 0;
    if (((CONCAT11(*puVar3,puVar3[1]) == 0) && (uVar10 < 0x100)) && ((int)uVar7 - 4U < 0xfffe)) {
      uVar4 = FUN_143c27410(local_res18,1,0,uVar10,0,local_res8);
      *(undefined8 *)(param_1 + 1000) = uVar4;
      if (local_res8[0] == 0) {
        uVar5 = 0;
        puVar8 = puVar3 + 8;
        if (CONCAT11(uVar1,uVar2) != 0) {
          do {
            uVar6 = (uint)uVar5;
            if (puVar3 + uVar9 < puVar8 + uVar7) break;
            uVar6 = uVar6 + 1;
            *(undefined1 *)(uVar5 + *(longlong *)(param_1 + 1000)) = *puVar8;
            uVar5 = (ulonglong)uVar6;
            puVar8 = puVar8 + uVar7;
          } while (uVar6 < uVar10);
        }
        *(uint *)(param_1 + 0x3d8) = local_res10[0];
        *(uint *)(param_1 + 0x3dc) = uVar6;
        *(int *)(param_1 + 0x3e0) = (int)uVar7;
        return 0;
      }
    }
    else {
      local_res8[0] = 3;
    }
    FT_Stream_ReleaseFrame(param_2,param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x3d8) = 0;
  }
  return local_res8[0];
}



// FUNCTION 143c3c790 FUN_143c3c790 body=348 status=ok
// SIG undefined FUN_143c3c790(void)

undefined8 FUN_143c3c790(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  sbyte sVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  
  uVar3 = (**(code **)(param_1 + 0x290))(param_1,0x676c7966,param_2,param_1 + 0x398);
  if ((char)uVar3 == -0x72) {
    *(undefined4 *)(param_1 + 0x398) = 0;
  }
  else if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar1 = (**(code **)(param_1 + 0x290))(param_1,0x6c6f6361,param_2,local_res8);
  if (iVar1 == 0) {
    if (*(short *)(param_1 + 0x132) == 0) {
      sVar4 = 1;
      if (0x1ffff < local_res8[0]) {
        return 8;
      }
      uVar2 = local_res8[0] >> 1;
    }
    else {
      sVar4 = 2;
      if (0x3ffff < local_res8[0]) {
        return 8;
      }
      uVar2 = local_res8[0] >> 2;
    }
    *(uint *)(param_1 + 0x3c4) = uVar2;
    uVar2 = *(uint *)(param_1 + 0x10) + 1;
    if ((*(uint *)(param_1 + 0x3c4) != uVar2) &&
       (*(uint *)(param_1 + 0x3c4) <= *(uint *)(param_1 + 0x10))) {
      uVar7 = *(ulonglong *)(param_1 + 0xf8);
      uVar2 = uVar2 << sVar4;
      uVar8 = (ulonglong)*(ushort *)(param_1 + 0xf4) * 0x10 + uVar7;
      iVar1 = IStreamingManager::GetNumWantingResourcesID(param_2);
      uVar6 = 0x7fffffff;
      for (; uVar7 < uVar8; uVar7 = uVar7 + 0x10) {
        uVar5 = *(int *)(uVar7 + 8) - iVar1;
        if ((0 < (int)uVar5) && ((int)uVar5 < (int)uVar6)) {
          uVar6 = uVar5;
        }
      }
      if (uVar7 == uVar8) {
        uVar6 = *(int *)(param_2 + 8) - iVar1;
      }
      if (uVar2 <= uVar6) {
        *(int *)(param_1 + 0x3c4) = *(int *)(param_1 + 0x10) + 1;
        local_res8[0] = uVar2;
      }
    }
    uVar3 = FT_Stream_ExtractFrame(param_2,local_res8[0],param_1 + 0x3c8);
    return uVar3;
  }
  return 0x90;
}



// FUNCTION 143c3c8f0 FUN_143c3c8f0 body=1141 status=ok
// SIG undefined FUN_143c3c8f0(void)

int FUN_143c3c8f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  short *psVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  int local_res18 [2];
  uint local_res20;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  uint *local_70;
  longlong local_68;
  short *local_60;
  longlong local_58;
  
  puVar18 = *(uint **)(param_1 + 0x3a0);
  lVar1 = param_2[6];
  lVar10 = 0;
  lVar11 = 0;
  lVar12 = 0;
  local_70 = puVar18;
  if ((((puVar18 == (uint *)0x0) || (*(longlong *)(param_1 + 0x370) == 0)) ||
      (local_res18[0] = (**(code **)(param_1 + 0x290))(param_1,0x63766172,param_2,&local_80),
      local_res18[0] != 0)) ||
     (local_res18[0] = FUN_143c24650(param_2,local_80), local_res18[0] != 0)) {
    local_res18[0] = 0;
  }
  else {
    lVar2 = param_2[7];
    lVar3 = *param_2;
    iVar9 = FUN_143c24870(param_2);
    if (iVar9 == 0x10000) {
      lVar10 = FUN_143c27410(lVar1,4,0,*puVar18,0,local_res18);
      local_68 = lVar10;
      if (((local_res18[0] == 0) &&
          (lVar11 = FUN_143c27410(lVar1,4,0,*puVar18,0,local_res18), local_58 = lVar11,
          local_res18[0] == 0)) &&
         (lVar12 = FUN_143c27410(lVar1,4,0,*puVar18,0,local_res18), local_res18[0] == 0)) {
        uVar5 = FUN_143c24910(param_2);
        uVar6 = FUN_143c24910(param_2);
        uVar15 = (uint)uVar6 + ((int)lVar2 - (int)lVar3);
        local_res20 = uVar15;
        if ((uVar5 & 0xfff) != 0) {
          uVar17 = (ulonglong)(uVar5 & 0xfff);
          do {
            local_res20 = uVar15;
            uVar5 = FUN_143c24910(param_2);
            uVar6 = FUN_143c24910(param_2);
            if ((short)uVar6 < 0) {
              uVar14 = 0;
              if (*puVar18 != 0) {
                do {
                  sVar7 = FUN_143c24910(param_2);
                  *(int *)(lVar10 + uVar14 * 4) = (int)sVar7 << 2;
                  uVar16 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar16;
                } while (uVar16 < *puVar18);
              }
              if ((uVar6 >> 0xe & 1) != 0) {
                uVar14 = 0;
                if (*puVar18 != 0) {
                  do {
                    sVar7 = FUN_143c24910(param_2);
                    *(int *)(lVar11 + uVar14 * 4) = (int)sVar7 << 2;
                    uVar16 = (int)uVar14 + 1;
                    uVar14 = (ulonglong)uVar16;
                  } while (uVar16 < *puVar18);
                }
                uVar14 = 0;
                if (*puVar18 != 0) {
                  do {
                    sVar7 = FUN_143c24910(param_2);
                    *(int *)(lVar12 + uVar14 * 4) = (int)sVar7 << 2;
                    uVar16 = (int)uVar14 + 1;
                    uVar14 = (ulonglong)uVar16;
                  } while (uVar16 < *puVar18);
                }
              }
              iVar9 = FUN_143c3a9b0(puVar18,uVar6,lVar10,lVar11,lVar12);
              if ((iVar9 != 0) && ((uVar6 >> 0xd & 1) != 0)) {
                local_78 = (int)param_2[7] - (int)*param_2;
                param_2[7] = (ulonglong)uVar15 + *param_2;
                lVar11 = FUN_143c3b020(param_2,&local_7c);
                uVar4 = local_7c;
                uVar14 = (ulonglong)local_7c;
                uVar16 = local_7c;
                if (local_7c == 0) {
                  uVar16 = *(uint *)(param_1 + 0x368);
                }
                psVar13 = (short *)FUN_143c3af00(param_2,uVar16);
                local_60 = psVar13;
                if ((lVar11 == 0) || (psVar13 == (short *)0x0)) {
LAB_143c3ccba:
                  psVar13 = local_60;
                  if (lVar11 != -1) {
                    ft_mem_free(lVar1,lVar11);
                  }
                }
                else {
                  if (lVar11 != -1) {
                    if (uVar4 != 0) {
                      lVar10 = lVar11 - (longlong)psVar13;
                      do {
                        lVar2 = (ulonglong)*(ushort *)(lVar10 + (longlong)psVar13) * 2;
                        sVar7 = *(short *)(*(longlong *)(param_1 + 0x370) + lVar2);
                        sVar8 = FUN_143c22100((int)*psVar13,iVar9);
                        psVar13 = psVar13 + 1;
                        *(short *)(lVar2 + *(longlong *)(param_1 + 0x370)) = sVar8 + sVar7;
                        uVar14 = uVar14 - 1;
                        puVar18 = local_70;
                        uVar15 = local_res20;
                      } while (uVar14 != 0);
                    }
                    goto LAB_143c3ccba;
                  }
                  uVar14 = 0;
                  uVar15 = local_res20;
                  if (*(int *)(param_1 + 0x368) != 0) {
                    do {
                      lVar11 = uVar14 * 2;
                      sVar7 = *(short *)(*(longlong *)(param_1 + 0x370) + lVar11);
                      sVar8 = FUN_143c22100((int)psVar13[uVar14],iVar9);
                      uVar16 = (int)uVar14 + 1;
                      uVar14 = (ulonglong)uVar16;
                      *(short *)(lVar11 + *(longlong *)(param_1 + 0x370)) = sVar8 + sVar7;
                      uVar15 = local_res20;
                    } while (uVar16 < *(uint *)(param_1 + 0x368));
                  }
                }
                ft_mem_free(lVar1,psVar13);
                param_2[7] = (ulonglong)local_78 + *param_2;
                lVar11 = local_58;
                lVar10 = local_68;
              }
            }
            else if (((uVar6 >> 0xe & 1) != 0) && (uVar16 = 0, (*puVar18 & 0x7fffffff) != 0)) {
              do {
                FUN_143c24910(param_2);
                uVar16 = uVar16 + 1;
              } while (uVar16 < *puVar18 * 2);
            }
            uVar15 = uVar15 + uVar5;
            uVar17 = uVar17 - 1;
            local_res20 = uVar15;
          } while (uVar17 != 0);
        }
      }
    }
    else {
      local_res18[0] = 0;
    }
    FT_Stream_ExitFrame(param_2);
  }
  ft_mem_free(lVar1,lVar10);
  ft_mem_free(lVar1,lVar11);
  ft_mem_free(lVar1,lVar12);
  return local_res18[0];
}



// FUNCTION 143c3cd70 FUN_143c3cd70 body=349 status=ok
// SIG undefined FUN_143c3cd70(void)

undefined8 FUN_143c3cd70(longlong *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ushort local_res8 [8];
  short local_res18 [4];
  short local_res20 [4];
  ushort local_38 [8];
  
  lVar3 = param_1[5];
  lVar4 = *param_1;
  local_res20[0] = 0;
  local_res18[0] = 0;
  local_38[0] = 0;
  local_res8[0] = 0;
  uVar5 = IStreamingManager::GetNumWantingResourcesID(lVar3);
  (**(code **)(*(longlong *)(lVar4 + 0x2c0) + 0xe0))(lVar4,0,param_2,local_res20,local_38);
  if (*(char *)(lVar4 + 400) == '\0') {
    local_res18[0] = (short)*(undefined4 *)((longlong)param_1 + 0x44);
    if (*(short *)(lVar4 + 0x1f8) == -1) {
      local_res18[0] = *(short *)(lVar4 + 0x13c) - local_res18[0];
      sVar1 = *(short *)(lVar4 + 0x13e);
      sVar2 = *(short *)(lVar4 + 0x13c);
    }
    else {
      local_res18[0] = *(short *)(lVar4 + 0x23e) - local_res18[0];
      sVar1 = *(short *)(lVar4 + 0x240);
      sVar2 = *(short *)(lVar4 + 0x23e);
    }
    if ((int)sVar2 - (int)sVar1 < 0) {
      local_res8[0] = sVar1 - sVar2;
    }
    else {
      local_res8[0] = sVar2 - sVar1;
    }
  }
  else {
    (**(code **)(*(longlong *)(lVar4 + 0x2c0) + 0xe0))(lVar4,1,param_2,local_res18,local_res8);
  }
  uVar6 = FUN_143c251d0(lVar3,uVar5);
  if ((int)uVar6 == 0) {
    *(int *)(param_1 + 9) = (int)local_res20[0];
    *(int *)(param_1 + 0x22) = (int)local_res18[0];
    *(uint *)((longlong)param_1 + 0x114) = (uint)local_res8[0];
    *(uint *)((longlong)param_1 + 0x4c) = (uint)local_38[0];
    if (*(char *)((longlong)param_1 + 0x54) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x54) = 1;
      *(uint *)(param_1 + 10) = (uint)local_38[0];
    }
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 143c3ced0 FUN_143c3ced0 body=168 status=ok
// SIG undefined FUN_143c3ced0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c3ced0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0xd0) + 0x48);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(*plVar1 + 0x10) != 0)) {
    local_28 = (undefined4)param_1[9];
    local_20 = *(uint *)((longlong)param_1 + 0x4c);
    local_24 = 0;
    local_1c = 0;
    iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1[1],param_2,0,&local_28);
    if (iVar2 == 0) {
      *(int *)(param_1 + 9) = (int)(short)local_28;
      *(uint *)((longlong)param_1 + 0x4c) = local_20 & 0xffff;
      param_1[0x22] = 0;
      if (*(char *)((longlong)param_1 + 0x54) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x54) = 1;
        *(uint *)(param_1 + 10) = local_20 & 0xffff;
      }
    }
  }
  return;
}



// FUNCTION 143c3cf80 tt_glyphzone_done body=131 status=ok
// SIG undefined tt_glyphzone_done(void)

void tt_glyphzone_done(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    ft_mem_free(lVar1,param_1[6]);
    param_1[6] = 0;
    ft_mem_free(lVar1,param_1[5]);
    param_1[5] = 0;
    ft_mem_free(lVar1,param_1[3]);
    param_1[3] = 0;
    ft_mem_free(lVar1,param_1[2]);
    param_1[2] = 0;
    ft_mem_free(lVar1,param_1[4]);
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143c3d010 FUN_143c3d010 body=352 status=ok
// SIG undefined FUN_143c3d010(void)

int FUN_143c3d010(undefined8 param_1,undefined2 param_2,short param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int local_res10 [2];
  
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  *param_4 = param_1;
  uVar1 = FUN_143c27410(param_1,8,0,param_2,0,local_res10);
  param_4[2] = uVar1;
  if (local_res10[0] == 0) {
    uVar1 = FUN_143c27410(param_1,8,0,param_2,0,local_res10);
    param_4[3] = uVar1;
    if (local_res10[0] == 0) {
      uVar1 = FUN_143c27410(param_1,8,0,param_2,0,local_res10);
      param_4[4] = uVar1;
      if (local_res10[0] == 0) {
        uVar1 = FUN_143c27410(param_1,1,0,param_2,0,local_res10);
        param_4[5] = uVar1;
        if (local_res10[0] == 0) {
          uVar1 = FUN_143c27410(param_1,2,0,(int)param_3,0,local_res10);
          param_4[6] = uVar1;
          if (local_res10[0] == 0) {
            *(undefined2 *)(param_4 + 1) = param_2;
            *(short *)((longlong)param_4 + 10) = param_3;
            return 0;
          }
        }
      }
    }
  }
  tt_glyphzone_done(param_4);
  return local_res10[0];
}



// FUNCTION 143c3d170 FUN_143c3d170 body=470 status=ok
// SIG undefined FUN_143c3d170(void)

void FUN_143c3d170(short *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  
  if (*param_1 != 0) {
    uVar11 = 0;
    lVar1 = *(longlong *)(param_1 + 4);
    uVar17 = uVar11;
    do {
      uVar7 = (uint)uVar11;
      uVar13 = (uint)*(short *)(*(longlong *)(param_1 + 0xc) + (longlong)(short)uVar17 * 2);
      uVar15 = uVar11;
      uVar8 = uVar7;
      while (uVar11 = uVar15, uVar8 <= uVar13) {
        uVar8 = (uint)uVar15;
        if (*(char *)(uVar15 + param_3) != '\0') {
          uVar3 = uVar15;
          uVar9 = uVar8;
          if (uVar8 <= uVar13) {
            while( true ) {
              uVar10 = uVar9;
              uVar9 = uVar10 + 1;
              uVar11 = (ulonglong)uVar9;
              uVar2 = (uint)uVar3;
              if (uVar13 < uVar9) break;
              if (*(char *)(uVar11 + param_3) != '\0') {
                FUN_143c3c0e0(uVar2 + 1,uVar10,uVar3,uVar11,param_2,lVar1);
                uVar3 = uVar11;
              }
            }
            if (uVar2 == uVar8) {
              lVar4 = (longlong)(int)uVar2;
              iVar14 = *(int *)(lVar1 + lVar4 * 8) - *(int *)(param_2 + lVar4 * 8);
              iVar6 = *(int *)(lVar1 + 4 + lVar4 * 8) - *(int *)(param_2 + 4 + lVar4 * 8);
              if ((iVar14 != 0) || (iVar6 != 0)) {
                if ((int)uVar7 < (int)uVar2) {
                  uVar15 = (ulonglong)(uVar2 - uVar7);
                  piVar5 = (int *)(lVar1 + (longlong)(int)uVar7 * 8);
                  do {
                    *piVar5 = *piVar5 + iVar14;
                    piVar5[1] = piVar5[1] + iVar6;
                    piVar5 = piVar5 + 2;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                iVar12 = uVar2 + 1;
                if (iVar12 <= (int)uVar13) {
                  piVar5 = (int *)(lVar1 + (longlong)iVar12 * 8);
                  uVar15 = (ulonglong)((uVar13 - iVar12) + 1);
                  do {
                    *piVar5 = *piVar5 + iVar14;
                    piVar5[1] = piVar5[1] + iVar6;
                    piVar5 = piVar5 + 2;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
              }
            }
            else {
              FUN_143c3c0e0(uVar2 + 1,uVar13,uVar3,uVar15,param_2,lVar1);
              if (uVar8 != 0) {
                FUN_143c3c0e0(uVar7,uVar8 - 1,uVar3,uVar15,param_2,lVar1);
              }
            }
          }
          break;
        }
        uVar8 = uVar8 + 1;
        uVar15 = (ulonglong)uVar8;
      }
      uVar16 = (short)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while ((short)uVar16 < *param_1);
  }
  return;
}



// FUNCTION 143c3d350 FUN_143c3d350 body=608 status=ok
// SIG undefined FUN_143c3d350(void)

ulonglong FUN_143c3d350(longlong *param_1,longlong param_2,longlong param_3,uint param_4,
                       char param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  
  lVar2 = *(longlong *)(param_3 + 8);
  lVar3 = *(longlong *)(lVar2 + 0xa0);
  bVar7 = (byte)param_4 & 0x80;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x138);
  if (((param_4 & 2) == 0) && (param_5 == '\0')) {
    uVar8 = *(uint *)(param_2 + 0x188);
    if (((int)uVar8 < 0) || (uVar1 = *(uint *)(param_2 + 0x18c), (int)uVar1 < 0)) {
      uVar6 = FUN_143c3d990(param_2,bVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    else {
      if (uVar8 != 0) {
        return (ulonglong)uVar8;
      }
      if (uVar1 != 0) {
        return (ulonglong)uVar1;
      }
    }
    lVar4 = *(longlong *)(param_2 + 0x180);
    if (lVar4 == 0) {
      return 0x99;
    }
    bVar9 = (param_4 & 0xf0000) != 0x20000;
    uVar6 = FUN_143c37830(lVar4,lVar2,param_2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if (bVar9 != (bool)*(char *)(lVar4 + 0x370)) {
      uVar6 = 0;
      *(bool *)(lVar4 + 0x370) = bVar9;
      if (*(int *)(param_2 + 0x124) != 0) {
        do {
          uVar5 = FUN_143c22100((int)*(short *)(*(longlong *)(lVar2 + 0x370) + uVar6 * 2),
                                *(undefined4 *)(param_2 + 0x6c));
          *(undefined4 *)(*(longlong *)(param_2 + 0x128) + uVar6 * 4) = uVar5;
          uVar8 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(param_2 + 0x124));
      }
      uVar6 = FUN_143c3ddf0(param_2,bVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    if ((*(byte *)(lVar4 + 0x1f0) & 1) != 0) {
      param_4 = param_4 | 2;
    }
    if ((*(byte *)(lVar4 + 0x1f0) & 2) != 0) {
      *(undefined8 *)(lVar4 + 0x1bc) = 0x4000000000000000;
      *(undefined8 *)(lVar4 + 0x1c4) = 0x4000000040000000;
      *(undefined8 *)(lVar4 + 0x1cc) = 0x100000000;
      *(undefined8 *)(lVar4 + 0x1d4) = 0x100000040;
      *(undefined8 *)(lVar4 + 0x1dc) = 0x4400000001;
      *(undefined8 *)(lVar4 + 0x1e4) = 0;
      *(undefined8 *)(lVar4 + 0x1ec) = 0x30009;
      *(undefined8 *)(lVar4 + 500) = 0x1000100000000;
      *(undefined4 *)(lVar4 + 0x1fc) = 1;
    }
    *(byte *)(lVar4 + 0x315) = (byte)param_4 & 0x80;
    param_1[0x1e] = lVar4;
    param_1[0x1f] = *(longlong *)(lVar4 + 0x238);
  }
  if (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + 0x48) == 0) {
    uVar6 = (**(code **)(lVar2 + 0x290))(lVar2,0x676c7966,lVar3,0);
    if ((char)uVar6 == -0x72) {
      *(undefined4 *)(param_1 + 0xd) = 0;
    }
    else {
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar5 = IStreamingManager::GetNumWantingResourcesID(lVar3);
      *(undefined4 *)(param_1 + 0xd) = uVar5;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  if (param_5 == '\0') {
    lVar4 = **(longlong **)(param_3 + 0xf0);
    FT_GlyphLoader_Rewind(lVar4);
    param_1[3] = lVar4;
  }
  *(uint *)(param_1 + 4) = param_4;
  *param_1 = lVar2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[5] = lVar3;
  return 0;
}



// FUNCTION 143c3d5b0 FUN_143c3d5b0 body=215 status=ok
// SIG undefined FUN_143c3d5b0(void)

void FUN_143c3d5b0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + 0x98);
  if (param_1[0x30] != 0) {
    FUN_143c37240();
    param_1[0x30] = 0;
  }
  ft_mem_free(uVar1,param_1[0x25]);
  param_1[0x25] = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  ft_mem_free(uVar1,param_1[0x27]);
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  tt_glyphzone_done(param_1 + 0x28);
  ft_mem_free(uVar1,param_1[0x12]);
  param_1[0x12] = 0;
  ft_mem_free(uVar1,param_1[0x14]);
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x31] = -1;
  return;
}



// FUNCTION 143c3d690 FUN_143c3d690 body=763 status=ok
// SIG undefined FUN_143c3d690(void)

ulonglong FUN_143c3d690(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  short sVar8;
  uint local_res8 [2];
  int local_res18 [4];
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  ft_mem_free(uVar2,param_1[0x12]);
  param_1[0x12] = 0;
  ft_mem_free(uVar2,param_1[0x14]);
  param_1[0x14] = 0;
  ft_mem_free(uVar2,param_1[0x25]);
  param_1[0x25] = 0;
  ft_mem_free(uVar2,param_1[0x27]);
  param_1[0x27] = 0;
  if (param_1[0x30] != 0) {
    FUN_143c37240();
  }
  tt_glyphzone_done(param_1 + 0x28);
  param_1[0x31] = -1;
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x90) + 0x10);
    lVar5 = FUN_143c271e0(uVar3,0x378,local_res18);
    if ((local_res18[0] == 0) && (iVar4 = FUN_143c33e00(lVar5,uVar3), iVar4 == 0))
    goto LAB_143c3d77c;
  }
  lVar5 = 0;
LAB_143c3d77c:
  param_1[0x30] = lVar5;
  *(uint *)((longlong)param_1 + 0x8c) = (uint)*(ushort *)(lVar1 + 0x184);
  *(uint *)((longlong)param_1 + 0x9c) = (uint)*(ushort *)(lVar1 + 0x186);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(lVar1 + 0x368);
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(lVar1 + 0x182);
  *(undefined2 *)((longlong)param_1 + 0x81) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar5 = FUN_143c27410(uVar2,0x18,0,*(undefined4 *)((longlong)param_1 + 0x8c),0,local_res8);
  param_1[0x12] = lVar5;
  if (local_res8[0] == 0) {
    lVar5 = FUN_143c27410(uVar2,0x18,0,*(undefined4 *)((longlong)param_1 + 0x9c),0,local_res8);
    param_1[0x14] = lVar5;
    if (local_res8[0] == 0) {
      lVar5 = FUN_143c27410(uVar2,4,0,*(undefined4 *)((longlong)param_1 + 0x124),0,local_res8);
      param_1[0x25] = lVar5;
      if (local_res8[0] == 0) {
        lVar5 = FUN_143c27410(uVar2,4,0,(short)param_1[0x26],0,local_res8);
        param_1[0x27] = lVar5;
        if (local_res8[0] == 0) {
          sVar8 = *(short *)(lVar1 + 0x180) + 4;
          local_res8[0] = FUN_143c3d010(uVar2,sVar8,0,param_1 + 0x28);
          if (local_res8[0] == 0) {
            *(short *)((longlong)param_1 + 0x14c) = sVar8;
            param_1[0x1c] = 0x4000000000000000;
            param_1[0x1d] = 0x4000000040000000;
            param_1[0x1e] = 0x100000000;
            param_1[0x1f] = 0x100000040;
            *(undefined4 *)(param_1 + 0x20) = 1;
            *(undefined4 *)((longlong)param_1 + 0x104) = 0x44;
            *(undefined4 *)(param_1 + 0x21) = 0;
            *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
            *(undefined4 *)(param_1 + 0x22) = 0x30009;
            *(undefined4 *)((longlong)param_1 + 0x114) = 0;
            *(undefined4 *)(param_1 + 0x23) = 0;
            *(undefined4 *)((longlong)param_1 + 0x11c) = 0x10001;
            *(undefined4 *)(param_1 + 0x24) = 1;
            pcVar6 = *(code **)(*(longlong *)(*(longlong *)(lVar1 + 0x90) + 8) + 0x148);
            if (pcVar6 == (code *)0x0) {
              pcVar6 = FUN_143c38ab0;
            }
            *(code **)(lVar1 + 0x378) = pcVar6;
            uVar7 = FUN_143c3dc80(param_1,param_2);
            local_res8[0] = (uint)uVar7;
            if (local_res8[0] == 0) {
              return uVar7;
            }
          }
        }
      }
    }
  }
  FUN_143c3d5b0(param_1);
  return (ulonglong)local_res8[0];
}



// FUNCTION 143c3d990 FUN_143c3d990 body=404 status=ok
// SIG undefined FUN_143c3d990(void)

void FUN_143c3d990(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if ((((-1 < (int)param_1[0x31]) || (iVar2 = FUN_143c3d690(), iVar2 == 0)) &&
      ((int)param_1[0x31] == 0)) && (*(int *)((longlong)param_1 + 0x18c) < 0)) {
    lVar1 = *param_1;
    uVar4 = 0;
    if (*(int *)((longlong)param_1 + 0x124) != 0) {
      do {
        uVar3 = FUN_143c22100((int)*(short *)(*(longlong *)(lVar1 + 0x370) + uVar4 * 2),
                              *(undefined4 *)((longlong)param_1 + 0x6c));
        uVar5 = (int)uVar4 + 1;
        *(undefined4 *)(param_1[0x25] + uVar4 * 4) = uVar3;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)((longlong)param_1 + 0x124));
    }
    uVar5 = 0;
    if (*(short *)((longlong)param_1 + 0x14c) != 0) {
      do {
        uVar4 = (ulonglong)uVar5;
        uVar5 = uVar5 + 1;
        lVar1 = uVar4 * 8;
        *(undefined4 *)(lVar1 + param_1[0x2a]) = 0;
        *(undefined4 *)(lVar1 + 4 + param_1[0x2a]) = 0;
        *(undefined4 *)(lVar1 + param_1[0x2b]) = 0;
        *(undefined4 *)(param_1[0x2b] + 4 + lVar1) = 0;
      } while (uVar5 < *(ushort *)((longlong)param_1 + 0x14c));
    }
    uVar4 = 0;
    if ((short)param_1[0x26] != 0) {
      do {
        uVar5 = (int)uVar4 + 1;
        *(undefined4 *)(param_1[0x27] + uVar4 * 4) = 0;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < *(ushort *)(param_1 + 0x26));
    }
    param_1[0x1c] = 0x4000000000000000;
    param_1[0x1d] = 0x4000000040000000;
    param_1[0x1e] = 0x100000000;
    param_1[0x1f] = 0x100000040;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined4 *)((longlong)param_1 + 0x104) = 0x44;
    *(undefined4 *)(param_1 + 0x21) = 0;
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x22) = 0x30009;
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0x10001;
    *(undefined4 *)(param_1 + 0x24) = 1;
    FUN_143c3ddf0(param_1,param_2);
  }
  return;
}



// FUNCTION 143c3db30 FUN_143c3db30 body=333 status=ok
// SIG undefined FUN_143c3db30(void)

undefined8 FUN_143c3db30(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  lVar1 = *param_1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 8) = (int)param_1[3];
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(int *)(param_1 + 9) = (int)param_1[4];
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x24);
  param_1[10] = param_1[5];
  *(int *)(param_1 + 0xb) = (int)param_1[6];
  if ((*(ushort *)(param_1 + 8) != 0) && (*(short *)((longlong)param_1 + 0x42) != 0)) {
    if ((*(byte *)(lVar1 + 0x110) & 8) != 0) {
      uVar2 = FUN_143c20070((ulonglong)*(ushort *)(param_1 + 8) << 6,*(undefined2 *)(lVar1 + 0x68));
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
      uVar2 = FUN_143c20070((ulonglong)*(ushort *)((longlong)param_1 + 0x42) << 6,
                            *(undefined2 *)(lVar1 + 0x68));
      *(undefined4 *)(param_1 + 9) = uVar2;
      iVar3 = FUN_143c22100((int)*(short *)(lVar1 + 0x6a),uVar2);
      *(uint *)((longlong)param_1 + 0x4c) = iVar3 + 0x20U & 0xffffffc0;
      iVar3 = FUN_143c22100((int)*(short *)(lVar1 + 0x6c),(int)param_1[9]);
      *(uint *)(param_1 + 10) = iVar3 + 0x20U & 0xffffffc0;
      iVar3 = FUN_143c22100((int)*(short *)(lVar1 + 0x6e),(int)param_1[9]);
      *(uint *)((longlong)param_1 + 0x54) = iVar3 + 0x20U & 0xffffffc0;
      iVar3 = FUN_143c22100((int)*(short *)(lVar1 + 0x70),*(undefined4 *)((longlong)param_1 + 0x44))
      ;
      *(uint *)(param_1 + 0xb) = iVar3 + 0x20U & 0xffffffc0;
    }
    if (*(ushort *)(param_1 + 8) < *(ushort *)((longlong)param_1 + 0x42)) {
      *(int *)((longlong)param_1 + 0x6c) = (int)param_1[9];
      *(undefined2 *)((longlong)param_1 + 100) = *(undefined2 *)((longlong)param_1 + 0x42);
      uVar2 = FUN_143c20070((short)param_1[8],*(undefined2 *)((longlong)param_1 + 0x42));
      *(undefined4 *)((longlong)param_1 + 0x5c) = uVar2;
      *(undefined4 *)(param_1 + 0xc) = 0x10000;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_1 + 0x44);
      *(short *)((longlong)param_1 + 100) = (short)param_1[8];
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0x10000;
      uVar2 = FUN_143c20070(*(undefined2 *)((longlong)param_1 + 0x42),(short)param_1[8]);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    }
    *(undefined4 *)((longlong)param_1 + 0x18c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x10) = 1;
    return 0;
  }
  return 0x97;
}



// FUNCTION 143c3dc80 FUN_143c3dc80 body=363 status=ok
// SIG undefined FUN_143c3dc80(void)

ulonglong FUN_143c3dc80(longlong *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  lVar3 = param_1[0x30];
  uVar6 = FUN_143c37830(lVar3,lVar2,param_1);
  if ((int)uVar6 == 0) {
    *(undefined8 *)(lVar3 + 0x2c0) = 0x40;
    uVar6 = 0;
    *(undefined4 *)(lVar3 + 0x268) = 0;
    *(undefined4 *)(lVar3 + 0x1c) = 0;
    *(undefined4 *)(lVar3 + 0x2c8) = 0;
    *(undefined1 *)(lVar3 + 0x2cc) = 0;
    *(undefined4 *)(lVar3 + 0x318) = 0x4000;
    *(undefined1 *)(lVar3 + 0x315) = param_2;
    *(undefined8 *)(lVar3 + 0x178) = 0;
    *(undefined4 *)(lVar3 + 0x180) = 0;
    *(undefined2 *)(lVar3 + 0x19c) = 0;
    *(undefined8 *)(lVar3 + 0x1a0) = 0x10000;
    uVar4 = *(undefined8 *)(lVar2 + 0x350);
    uVar1 = *(undefined4 *)(lVar2 + 0x348);
    *(undefined8 *)(lVar3 + 0x280) = uVar4;
    *(undefined4 *)(lVar3 + 0x288) = uVar1;
    *(undefined8 *)(lVar3 + 0x290) = 0;
    *(undefined4 *)(lVar3 + 0x298) = 0;
    *(undefined8 *)(lVar3 + 0x2a0) = 0;
    *(undefined4 *)(lVar3 + 0x2a8) = 0;
    if (*(int *)(lVar2 + 0x348) != 0) {
      *(undefined4 *)(lVar3 + 0x214) = uVar1;
      *(undefined8 *)(lVar3 + 0x208) = uVar4;
      *(undefined4 *)(lVar3 + 0x210) = 0;
      *(undefined4 *)(lVar3 + 0x200) = 1;
      uVar5 = (**(code **)(lVar2 + 0x378))(lVar3);
      uVar6 = (ulonglong)uVar5;
    }
    *(int *)(param_1 + 0x31) = (int)uVar6;
    if ((int)uVar6 == 0) {
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(lVar3 + 0x240);
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(lVar3 + 0x250);
      *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(lVar3 + 0x260);
      *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(lVar3 + 0x264);
      lVar2 = *(longlong *)(lVar3 + 0x288);
      param_1[0x16] = *(longlong *)(lVar3 + 0x280);
      param_1[0x17] = lVar2;
      lVar2 = *(longlong *)(lVar3 + 0x298);
      param_1[0x18] = *(longlong *)(lVar3 + 0x290);
      param_1[0x19] = lVar2;
      lVar2 = *(longlong *)(lVar3 + 0x2a8);
      param_1[0x1a] = *(longlong *)(lVar3 + 0x2a0);
      param_1[0x1b] = lVar2;
    }
  }
  return uVar6;
}



// FUNCTION 143c3ddf0 FUN_143c3ddf0 body=451 status=ok
// SIG undefined FUN_143c3ddf0(void)

ulonglong FUN_143c3ddf0(longlong *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  lVar3 = param_1[0x30];
  uVar6 = FUN_143c37830(lVar3,lVar2,param_1);
  if ((int)uVar6 == 0) {
    *(undefined1 *)(lVar3 + 0x315) = param_2;
    uVar5 = 0;
    *(undefined4 *)(lVar3 + 0x268) = 0;
    *(undefined4 *)(lVar3 + 0x1c) = 0;
    *(undefined1 *)(lVar3 + 0x2cc) = 0;
    uVar4 = *(undefined8 *)(lVar2 + 0x360);
    uVar1 = *(undefined4 *)(lVar2 + 0x358);
    *(undefined8 *)(lVar3 + 0x290) = uVar4;
    *(undefined4 *)(lVar3 + 0x298) = uVar1;
    *(undefined8 *)(lVar3 + 0x2a0) = 0;
    *(undefined4 *)(lVar3 + 0x2a8) = 0;
    if (*(int *)(lVar2 + 0x358) != 0) {
      *(undefined4 *)(lVar3 + 0x214) = uVar1;
      *(undefined8 *)(lVar3 + 0x208) = uVar4;
      *(undefined4 *)(lVar3 + 0x210) = 0;
      *(undefined4 *)(lVar3 + 0x200) = 2;
      uVar5 = (**(code **)(lVar2 + 0x378))(lVar3);
    }
    *(uint *)((longlong)param_1 + 0x18c) = uVar5;
    *(undefined2 *)(lVar3 + 0x1fc) = 1;
    *(undefined4 *)(lVar3 + 0x1d0) = 1;
    *(undefined4 *)(lVar3 + 0x1bc) = 0;
    *(undefined2 *)(lVar3 + 0x1c0) = 0;
    *(undefined4 *)(lVar3 + 0x1c2) = 0x4000;
    *(undefined4 *)(lVar3 + 0x1c6) = 0x4000;
    *(undefined4 *)(lVar3 + 0x1ca) = 0x4000;
    *(undefined4 *)(lVar3 + 0x1f8) = 0x10001;
    lVar2 = *(longlong *)(lVar3 + 0x1c4);
    param_1[0x1c] = *(longlong *)(lVar3 + 0x1bc);
    param_1[0x1d] = lVar2;
    lVar2 = *(longlong *)(lVar3 + 0x1d4);
    param_1[0x1e] = *(longlong *)(lVar3 + 0x1cc);
    param_1[0x1f] = lVar2;
    lVar2 = *(longlong *)(lVar3 + 0x1e4);
    param_1[0x20] = *(longlong *)(lVar3 + 0x1dc);
    param_1[0x21] = lVar2;
    lVar2 = *(longlong *)(lVar3 + 500);
    param_1[0x22] = *(longlong *)(lVar3 + 0x1ec);
    param_1[0x23] = lVar2;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar3 + 0x1fc);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(lVar3 + 0x240);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(lVar3 + 0x250);
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(lVar3 + 0x260);
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(lVar3 + 0x264);
    uVar6 = (ulonglong)uVar5;
    lVar2 = *(longlong *)(lVar3 + 0x288);
    param_1[0x16] = *(longlong *)(lVar3 + 0x280);
    param_1[0x17] = lVar2;
    lVar2 = *(longlong *)(lVar3 + 0x298);
    param_1[0x18] = *(longlong *)(lVar3 + 0x290);
    param_1[0x19] = lVar2;
    lVar2 = *(longlong *)(lVar3 + 0x2a8);
    param_1[0x1a] = *(longlong *)(lVar3 + 0x2a0);
    param_1[0x1b] = lVar2;
  }
  return uVar6;
}



// FUNCTION 143c3dfc0 FUN_143c3dfc0 body=152 status=ok
// SIG undefined FUN_143c3dfc0(void)

int FUN_143c3dfc0(undefined8 param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar3 = FUN_143c24650();
  if (iVar3 != 0) {
    return 0;
  }
  if (3 < param_2) {
    uVar5 = (ulonglong)((param_2 - 4 >> 2) + 1);
    do {
      iVar3 = FUN_143c24870(param_1);
      iVar6 = iVar6 + iVar3;
      param_2 = param_2 - 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_2 != 0) {
    bVar4 = 0x18;
    do {
      bVar2 = FT_Stream_GetChar(param_1);
      bVar1 = bVar4 & 0x1f;
      bVar4 = bVar4 - 8;
      iVar6 = iVar6 + ((uint)bVar2 << bVar1);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  FT_Stream_ExitFrame(param_1);
  return iVar6;
}



// FUNCTION 143c3e060 FUN_143c3e060 body=332 status=ok
// SIG undefined FUN_143c3e060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c3e060(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined1 auStack_1f8 [32];
  int local_1d8 [4];
  undefined8 local_1c8 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  piVar8 = *(int **)(param_1 + 0x2d8);
  uVar6 = 0;
  (*(code *)param_2[0xf])(param_2,local_1c8,0x10,local_1d8);
  if (local_1d8[0] < 0) {
    *(undefined4 *)(param_2 + 3) = 0xa2;
    return;
  }
  if ((local_1d8[0] == 0) || (0x10 < local_1d8[0])) {
LAB_143c3e0cd:
    *(undefined4 *)(param_2 + 3) = 3;
  }
  else {
    if ((piVar8 == (int *)0x0) || (*piVar8 == 0)) {
      iVar3 = FUN_143c433b0(param_1,local_1d8[0],0);
      if (iVar3 != 0) {
        *(int *)(param_2 + 3) = iVar3;
        return;
      }
      piVar8 = *(int **)(param_1 + 0x2d8);
    }
    else if (*piVar8 != local_1d8[0]) goto LAB_143c3e0cd;
    uVar1 = *param_2;
    uVar2 = param_2[2];
    if (0 < local_1d8[0]) {
      puVar9 = local_1c8;
      uVar7 = uVar6;
      do {
        *param_2 = *puVar9;
        param_2[2] = puVar9[1];
        uVar4 = (*(code *)param_2[10])(param_2,0);
        puVar9 = puVar9 + 3;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        *(undefined4 *)(uVar7 + *(longlong *)(piVar8 + 0x42)) = uVar4;
        *(undefined4 *)(uVar7 + *(longlong *)(piVar8 + 0x44)) = uVar4;
        uVar7 = uVar7 + 4;
      } while ((int)uVar5 < local_1d8[0]);
    }
    *param_2 = uVar1;
    param_2[2] = uVar2;
    *(undefined4 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 143c3e1b0 parse_buildchar body=38 status=ok
// SIG undefined parse_buildchar(void)

void parse_buildchar(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(param_2 + 0x68))(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x2e8) = uVar1;
  return;
}



// FUNCTION 143c3e1f0 FUN_143c3e1f0 body=308 status=ok
// SIG undefined FUN_143c3e1f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c3e1f0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  iVar2 = (**(code **)(param_2 + 0x68))(param_2,6,&local_28);
  if (iVar2 < 6) {
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
  else {
    iVar2 = local_1c;
    if (local_1c < 0) {
      iVar2 = -local_1c;
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_2 + 0x18) = 3;
    }
    else {
      uVar1 = FUN_143c20070(1000,iVar2);
      *(undefined2 *)(param_1 + 0x68) = uVar1;
      iVar3 = local_1c;
      if (iVar2 != 0x10000) {
        local_28 = FUN_143c20070(local_28,iVar2);
        local_24 = FUN_143c20070(local_24,iVar2);
        local_20 = FUN_143c20070(local_20,iVar2);
        local_18 = FUN_143c20070(local_18,iVar2);
        local_14 = FUN_143c20070(local_14,iVar2);
        iVar3 = 0x10000;
        if (local_1c < 0) {
          iVar3 = -0x10000;
        }
      }
      *(undefined4 *)(param_1 + 0x25c) = local_28;
      *(undefined4 *)(param_1 + 0x264) = local_24;
      *(undefined4 *)(param_1 + 0x260) = local_20;
      *(int *)(param_1 + 0x268) = iVar3;
      *(int *)(param_1 + 0x270) = local_14 >> 0x10;
      *(int *)(param_1 + 0x26c) = local_18 >> 0x10;
    }
  }
  return;
}



// FUNCTION 143c3e330 FUN_143c3e330 body=965 status=ok
// SIG undefined FUN_143c3e330(void)

void FUN_143c3e330(longlong param_1,longlong *param_2)

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
  bool bVar14;
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
  plVar1 = param_2 + 0x18;
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
    *(int *)(param_2 + 0x17) = iVar7;
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
            (*(code *)param_2[0x22])(plVar1,iVar10,".notdef",8);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar7);
        }
LAB_143c3e57d:
        do {
          (*(code *)param_2[7])(param_2);
          if (pbVar5 <= (byte *)*param_2) {
LAB_143c3e6c1:
            *(undefined4 *)(param_1 + 0x1e0) = 1;
            *param_2 = (longlong)_Str1;
            return;
          }
          _Str1 = (byte *)*param_2;
          bVar2 = *_Str1;
          if (((((bVar2 == 100) && (_Str1 + 3 < pbVar5)) && (_Str1[1] == 0x65)) &&
              (_Str1[2] == 0x66)) &&
             (((bVar3 = _Str1[3], bVar3 < 0x3d &&
               ((0x1000832100003601U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) ||
              (((byte)(bVar3 - 0x3e) < 0x40 &&
               ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar3 - 0x3e) & 0x3f) & 1) != 0)))))) {
            _Str1 = _Str1 + 3;
            goto LAB_143c3e6c1;
          }
          if (bVar2 == 0x5d) {
            _Str1 = _Str1 + 1;
            goto LAB_143c3e6c1;
          }
          iVar10 = iVar12;
          if (bVar2 - 0x30 < 10) {
            if (bVar13) {
              iVar10 = (*(code *)param_2[9])(param_2);
              (*(code *)param_2[7])(param_2);
              bVar14 = _Str1 == (byte *)*param_2;
              _Str1 = (byte *)*param_2;
              if (bVar14) goto LAB_143c3e6af;
            }
          }
          else if (bVar13) {
            (*(code *)param_2[8])(param_2);
            if ((int)param_2[3] != 0) {
              return;
            }
            goto LAB_143c3e57d;
          }
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
            iVar8 = (*(code *)param_2[0x22])(plVar1,iVar10,_Str1,uVar11 + 1);
            *(int *)(param_2 + 3) = iVar8;
            if (iVar8 != 0) {
              return;
            }
            iVar12 = iVar12 + 1;
            *(undefined1 *)((ulonglong)uVar11 + *(longlong *)(param_2[0x1d] + (longlong)iVar10 * 8))
                 = 0;
          }
          else if (!bVar13) {
LAB_143c3e6af:
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



// FUNCTION 143c3e700 FUN_143c3e700 body=746 status=ok
// SIG undefined FUN_143c3e700(void)

void FUN_143c3e700(longlong param_1,longlong *param_2)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  void *_Dst;
  int local_res8 [2];
  undefined4 local_res10;
  longlong local_res18;
  undefined8 *local_res20;
  
  puVar1 = *(undefined8 **)(param_1 + 0x298);
  lVar2 = param_2[4];
  local_res18 = lVar2;
  local_res20 = puVar1;
  (*(code *)param_2[7])(param_2);
  if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == '[')) {
    (*(code *)param_2[8])(param_2);
    (*(code *)param_2[7])(param_2);
    if (((char *)param_2[2] <= (char *)*param_2) || (*(char *)*param_2 != ']')) {
      *(undefined4 *)(param_2 + 3) = 3;
      return;
    }
  }
  else {
    uVar4 = (*(code *)param_2[9])(param_2);
    local_res10 = uVar4;
    (*(code *)param_2[8])(param_2);
    if ((int)param_2[3] == 0) {
      (*(code *)param_2[7])(param_2);
      if (((int)param_2[0x49] == 0) &&
         (local_res8[0] = (**(code **)*puVar1)(param_2 + 0x4a,uVar4,lVar2), local_res8[0] != 0)) {
LAB_143c3e9d7:
        *(int *)(param_2 + 3) = local_res8[0];
      }
      else {
        if (*param_2 + 4U < (ulonglong)param_2[2]) {
          do {
            iVar5 = _guard_xfg_dispatch_icall_nop((char *)*param_2,"dup",3);
            uVar4 = local_res10;
            if (iVar5 != 0) break;
            (*(code *)param_2[8])(param_2);
            uVar4 = (*(code *)param_2[9])(param_2);
            pbVar3 = (byte *)param_2[2];
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x48);
            (*(code *)param_2[7])(param_2);
            if ((pbVar3 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_143c3e9dc:
              if (lVar2 != 0) {
                return;
              }
              *(undefined4 *)(param_2 + 3) = 3;
              return;
            }
            uVar6 = (*(code *)param_2[9])(param_2);
            (*(code *)param_2[8])(param_2);
            _Src = (void *)(*param_2 + 1);
            if (((int)uVar6 < 0) || ((longlong)pbVar3 - (longlong)_Src <= (longlong)(int)uVar6))
            goto LAB_143c3e9dc;
            *param_2 = (longlong)(int)(uVar6 + 1) + *param_2;
            if ((int)param_2[3] != 0) {
              return;
            }
            (*(code *)param_2[8])(param_2);
            if ((int)param_2[3] != 0) {
              return;
            }
            (*(code *)param_2[7])(param_2);
            if (((char *)*param_2 + 4 < (char *)param_2[2]) &&
               (iVar5 = _guard_xfg_dispatch_icall_nop((char *)*param_2,"put",3), iVar5 == 0)) {
              (*(code *)param_2[8])(param_2);
              (*(code *)param_2[7])(param_2);
            }
            if ((int)param_2[0x49] == 0) {
              if ((int)*(uint *)(param_1 + 0x118) < 0) {
                local_res8[0] = (*(code *)param_2[0x54])(param_2 + 0x4a,uVar4,_Src,uVar6);
              }
              else {
                if (uVar6 < *(uint *)(param_1 + 0x118)) {
                  local_res8[0] = 3;
                  goto LAB_143c3e9d7;
                }
                _Dst = (void *)FUN_143c271e0(local_res18,uVar6,local_res8);
                if (local_res8[0] != 0) goto LAB_143c3e9d7;
                _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar6);
                (*(code *)local_res20[4])(_Dst,(ulonglong)uVar6,0x10ea);
                local_res8[0] =
                     (*(code *)param_2[0x54])
                               (param_2 + 0x4a,uVar4,
                                (longlong)_Dst + (longlong)*(int *)(param_1 + 0x118),
                                uVar6 - *(int *)(param_1 + 0x118));
                ft_mem_free(local_res18,_Dst);
              }
              if (local_res8[0] != 0) goto LAB_143c3e9d7;
            }
            uVar4 = local_res10;
          } while (*param_2 + 4U < (ulonglong)param_2[2]);
        }
        if ((int)param_2[0x49] == 0) {
          *(undefined4 *)(param_2 + 0x49) = uVar4;
        }
      }
    }
  }
  return;
}



// FUNCTION 143c3e9f0 FUN_143c3e9f0 body=1569 status=ok
// SIG undefined FUN_143c3e9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c3e9f0(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  void *_Dst;
  int iVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_a8 [32];
  int local_88;
  char local_84;
  char local_83;
  int local_80;
  undefined8 *local_78;
  longlong local_70;
  byte *local_68;
  longlong local_60;
  longlong local_58;
  void *local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar4 = param_2[4];
  local_78 = *(undefined8 **)(param_1 + 0x298);
  local_68 = (byte *)param_2[2];
  uVar10 = 0;
  local_80 = 0;
  local_84 = '\0';
  local_60 = param_1;
  local_58 = lVar4;
  local_48 = (*(code *)param_2[9])(param_2);
  if (local_48 < 0) {
LAB_143c3eddc:
    local_88 = 3;
  }
  else {
    if (local_48 == 0) {
      return;
    }
    if ((int)param_2[3] != 0) {
      return;
    }
    if ((int)param_2[0x24] == 0) {
      iVar8 = local_48 + 6;
      local_88 = (**(code **)*local_78)(param_2 + 0x31,iVar8,lVar4);
      if (((local_88 != 0) ||
          (local_88 = (**(code **)*local_78)(param_2 + 0x25,iVar8,lVar4), local_88 != 0)) ||
         (local_88 = (**(code **)*local_78)(param_2 + 0x3d,4,lVar4), local_88 != 0))
      goto LAB_143c3ede1;
    }
    iVar8 = 0;
    (*(code *)param_2[7])(param_2);
    pbVar9 = (byte *)*param_2;
    if (pbVar9 < local_68) {
      local_70 = 0;
      uVar11 = uVar10;
LAB_143c3eaf9:
      iVar8 = (int)uVar11;
      if (((pbVar9 + 3 < local_68) &&
          (((bVar3 = pbVar9[3], bVar3 < 0x3d &&
            ((0x1000832100003601U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) ||
           (((byte)(bVar3 - 0x3e) < 0x40 &&
            ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar3 - 0x3e) & 0x3f) & 1) != 0)))))) &&
         (((((*pbVar9 == 100 && (pbVar9[1] == 0x65)) && (pbVar9[2] == 0x66)) && (iVar8 != 0)) ||
          (((*pbVar9 == 0x65 && (pbVar9[1] == 0x6e)) && (pbVar9[2] == 100)))))) goto LAB_143c3eda0;
      (*(code *)param_2[8])(param_2);
      if (local_68 <= (byte *)*param_2) goto LAB_143c3eddc;
      if ((int)param_2[3] != 0) {
        return;
      }
      if (*pbVar9 == 0x2f) {
        if (local_68 <= pbVar9 + 2) goto LAB_143c3eddc;
        pbVar9 = pbVar9 + 1;
        uVar12 = (int)*param_2 - (int)pbVar9;
        pbVar5 = (byte *)param_2[2];
        local_83 = *(longlong *)(*(longlong *)(local_60 + 0xd0) + 0x48) != 0;
        (*(code *)param_2[7])(param_2);
        if (((byte *)*param_2 < pbVar5) && (*(byte *)*param_2 - 0x30 < 10)) {
          uVar6 = (*(code *)param_2[9])(param_2);
          (*(code *)param_2[8])(param_2);
          local_50 = (void *)(*param_2 + 1);
          if ((-1 < (int)uVar6) && ((longlong)(int)uVar6 < (longlong)pbVar5 - (longlong)local_50)) {
            *param_2 = (longlong)(int)(uVar6 + 1) + *param_2;
            if ((int)param_2[3] != 0) {
              return;
            }
            if ((int)param_2[0x24] == 0) {
              local_88 = (*(code *)param_2[0x2f])(param_2 + 0x25,uVar11,pbVar9,uVar12 + 1);
              if (local_88 == 0) {
                *(undefined1 *)((ulonglong)uVar12 + *(longlong *)(param_2[0x2a] + local_70)) = 0;
                if (*pbVar9 == 0x2e) {
                  uVar7 = uVar10;
                  do {
                    pcVar1 = ".notdef" + uVar7;
                    uVar7 = uVar7 + 1;
                    if (*pcVar1 != *(char *)(*(longlong *)(param_2[0x2a] + local_70) + -1 + uVar7))
                    goto LAB_143c3eca2;
                  } while (uVar7 != 8);
                  local_84 = '\x01';
                  local_80 = iVar8;
                }
LAB_143c3eca2:
                if (((int)*(uint *)(local_60 + 0x118) < 0) || (local_48 + 5 <= iVar8)) {
                  local_88 = (*(code *)param_2[0x3b])(param_2 + 0x31,uVar11,local_50,uVar6);
                }
                else {
                  if (uVar6 <= *(uint *)(local_60 + 0x118)) goto LAB_143c3eddc;
                  _Dst = (void *)FUN_143c271e0(local_58,uVar6,&local_88);
                  if (local_88 != 0) goto LAB_143c3ede1;
                  _guard_xfg_dispatch_icall_nop(_Dst,local_50,(ulonglong)uVar6);
                  (*(code *)local_78[4])(_Dst,(ulonglong)uVar6,0x10ea);
                  local_88 = (*(code *)param_2[0x3b])
                                       (param_2 + 0x31,uVar11,
                                        (longlong)*(int *)(local_60 + 0x118) + (longlong)_Dst,
                                        uVar6 - *(int *)(local_60 + 0x118));
                  ft_mem_free(local_58,_Dst);
                }
                if (local_88 == 0) {
                  uVar11 = (ulonglong)(iVar8 + 1);
                  local_70 = local_70 + 8;
                  goto LAB_143c3ed7c;
                }
              }
              goto LAB_143c3ede1;
            }
            goto LAB_143c3ed7c;
          }
        }
        if (local_83 != '\0') {
          return;
        }
        goto LAB_143c3eddc;
      }
LAB_143c3ed7c:
      iVar8 = (int)uVar11;
      (*(code *)param_2[7])(param_2);
      pbVar9 = (byte *)*param_2;
      if (local_68 <= pbVar9) goto LAB_143c3eda0;
      goto LAB_143c3eaf9;
    }
LAB_143c3eda0:
    plVar14 = param_2 + 0x3d;
    plVar15 = param_2 + 0x25;
    plVar13 = param_2 + 0x31;
    *(int *)(param_2 + 0x24) = iVar8;
    if (local_84 == '\0') {
      local_48 = 0xde1f78b;
      local_44 = 0xe;
      local_88 = (*(code *)param_2[0x47])
                           (plVar14,0,*(undefined8 *)param_2[0x2a],*(undefined4 *)param_2[0x2b]);
      if (((local_88 == 0) &&
          (local_88 = (*(code *)param_2[0x47])
                                (plVar14,1,*(undefined8 *)param_2[0x36],*(undefined4 *)param_2[0x37]
                                ), local_88 == 0)) &&
         ((local_88 = (*(code *)param_2[0x2f])(plVar15,0,".notdef",8), local_88 == 0 &&
          (((local_88 = (*(code *)param_2[0x3b])(plVar13,0,&local_48,5), local_88 == 0 &&
            (local_88 = (*(code *)param_2[0x2f])
                                  (plVar15,iVar8,*(undefined8 *)param_2[0x42],
                                   *(undefined4 *)param_2[0x43]), local_88 == 0)) &&
           (local_88 = (*(code *)param_2[0x3b])
                                 (plVar13,iVar8,*(undefined8 *)(param_2[0x42] + 8),
                                  *(undefined4 *)(param_2[0x43] + 4)), local_88 == 0)))))) {
        *(int *)(param_2 + 0x24) = (int)param_2[0x24] + 1;
        return;
      }
    }
    else {
      while (pcVar1 = ".notdef" + uVar10, uVar10 = uVar10 + 1,
            *pcVar1 == *(char *)(*(longlong *)param_2[0x2a] + -1 + uVar10)) {
        if (uVar10 == 8) {
          return;
        }
      }
      local_88 = (*(code *)param_2[0x47])
                           (plVar14,0,*(longlong *)param_2[0x2a],*(undefined4 *)param_2[0x2b]);
      if ((local_88 == 0) &&
         (local_88 = (*(code *)param_2[0x47])
                               (plVar14,1,*(undefined8 *)param_2[0x36],*(undefined4 *)param_2[0x37])
         , iVar8 = local_80, local_88 == 0)) {
        lVar4 = (longlong)local_80 * 4;
        lVar2 = (longlong)local_80 * 8;
        local_88 = (*(code *)param_2[0x47])
                             (plVar14,2,*(undefined8 *)(lVar2 + param_2[0x2a]),
                              *(undefined4 *)(lVar4 + param_2[0x2b]));
        if ((local_88 == 0) &&
           ((((local_88 = (*(code *)param_2[0x47])
                                    (plVar14,3,*(undefined8 *)(lVar2 + param_2[0x36]),
                                     *(undefined4 *)(lVar4 + param_2[0x37])), local_88 == 0 &&
              (local_88 = (*(code *)param_2[0x2f])
                                    (plVar15,iVar8,*(undefined8 *)param_2[0x42],
                                     *(undefined4 *)param_2[0x43]), local_88 == 0)) &&
             (local_88 = (*(code *)param_2[0x3b])
                                   (plVar13,iVar8,*(undefined8 *)(param_2[0x42] + 8),
                                    *(undefined4 *)(param_2[0x43] + 4)), local_88 == 0)) &&
            ((local_88 = (*(code *)param_2[0x2f])
                                   (plVar15,0,*(undefined8 *)(param_2[0x42] + 0x10),
                                    *(undefined4 *)(param_2[0x43] + 8)), local_88 == 0 &&
             (local_88 = (*(code *)param_2[0x3b])
                                   (plVar13,0,*(undefined8 *)(param_2[0x42] + 0x18),
                                    *(undefined4 *)(param_2[0x43] + 0xc)), local_88 == 0)))))) {
          return;
        }
      }
    }
  }
LAB_143c3ede1:
  *(int *)(param_2 + 3) = local_88;
  return;
}



// FUNCTION 143c3f020 FUN_143c3f020 body=38 status=ok
// SIG undefined FUN_143c3f020(void)

undefined8 FUN_143c3f020(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_143c274a0(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x240) + (param_2 & 0xffffffff) * 8)
                ,param_4);
  return 0;
}



// FUNCTION 143c3f050 FUN_143c3f050 body=129 status=ok
// SIG undefined FUN_143c3f050(void)

ulonglong FUN_143c3f050(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x238)) {
    plVar5 = *(longlong **)(param_1 + 0x240);
    uVar6 = uVar4;
    do {
      pcVar3 = param_2;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[*plVar5 - (longlong)param_2];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return uVar6;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x238));
  }
  return 0;
}



// FUNCTION 143c3f1b0 FUN_143c3f1b0 body=2339 status=ok
// SIG undefined FUN_143c3f1b0(void)

uint FUN_143c3f1b0(longlong param_1,undefined4 param_2,uint param_3,undefined4 *param_4,uint param_5
                  )

{
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar3 = 0;
  if ((int)param_5 < 0) {
    param_5 = 0;
  }
  uVar4 = 0;
  switch(param_2) {
  case 0:
    uVar4 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x259);
    }
    break;
  case 1:
    uVar4 = uVar3;
    if (param_3 < 4) {
      uVar2 = 0;
      uVar4 = 4;
      if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
        if (param_3 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x25c);
        }
        else {
          if (param_3 == 1) {
            *param_4 = *(undefined4 *)(param_1 + 0x260);
            break;
          }
          if (param_3 == 2) {
            *param_4 = *(undefined4 *)(param_1 + 0x264);
            break;
          }
          if (param_3 == 3) {
            *param_4 = *(undefined4 *)(param_1 + 0x268);
            break;
          }
        }
        *param_4 = uVar2;
      }
    }
    break;
  case 2:
    uVar4 = uVar3;
    if (param_3 < 4) {
      uVar2 = 0;
      uVar4 = 4;
      if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
        if (param_3 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x274);
        }
        else {
          if (param_3 == 1) {
            *param_4 = *(undefined4 *)(param_1 + 0x278);
            break;
          }
          if (param_3 == 2) {
            *param_4 = *(undefined4 *)(param_1 + 0x27c);
            break;
          }
          if (param_3 == 3) {
            *param_4 = *(undefined4 *)(param_1 + 0x280);
            break;
          }
        }
        *param_4 = uVar2;
      }
    }
    break;
  case 3:
    uVar4 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 600);
    }
    break;
  case 4:
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)*(void **)(param_1 + 0x1d8) + lVar6) != '\0');
    uVar4 = (int)lVar6 + 1;
    if ((param_4 != (undefined4 *)0x0) && (uVar4 <= param_5)) {
      _guard_xfg_dispatch_icall_nop(param_4,*(void **)(param_1 + 0x1d8),(ulonglong)uVar4);
    }
    break;
  case 5:
    uVar4 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x114);
    }
    break;
  case 6:
    uVar4 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x238);
    }
    break;
  case 7:
    uVar4 = uVar3;
    if (param_3 < *(uint *)(param_1 + 0x238)) {
      uVar5 = 0xffffffffffffffff;
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x240) + (ulonglong)param_3 * 8);
      do {
        uVar5 = uVar5 + 1;
      } while (*(char *)((longlong)pvVar1 + uVar5) != '\0');
      uVar4 = (int)uVar5 + 1;
      if ((param_4 != (undefined4 *)0x0) && (uVar4 <= param_5)) {
        _guard_xfg_dispatch_icall_nop(param_4,pvVar1,(ulonglong)uVar4);
        *(undefined1 *)((uVar5 & 0xffffffff) + (longlong)param_4) = 0;
      }
    }
    break;
  case 8:
    uVar4 = uVar3;
    if (((*(uint *)(param_1 + 0x238) <= param_3) ||
        (uVar4 = *(int *)(*(longlong *)(param_1 + 0x250) + (ulonglong)param_3 * 4) + 1,
        param_4 == (undefined4 *)0x0)) || (param_5 < uVar4)) break;
    lVar6 = *(longlong *)(param_1 + 0x248);
    goto LAB_143c3f43e;
  case 9:
    uVar4 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x1e0);
    }
    break;
  case 10:
    uVar4 = uVar3;
    if ((*(int *)(param_1 + 0x1e0) == 1) && (param_3 < *(uint *)(param_1 + 0x1e8))) {
      uVar5 = 0xffffffffffffffff;
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_3 * 8);
      do {
        uVar5 = uVar5 + 1;
      } while (*(char *)((longlong)pvVar1 + uVar5) != '\0');
      uVar4 = (int)uVar5 + 1;
      if ((param_4 != (undefined4 *)0x0) && (uVar4 <= param_5)) {
        _guard_xfg_dispatch_icall_nop(param_4,pvVar1,uVar5 & 0xffffffff);
        *(undefined1 *)((uVar5 & 0xffffffff) + (longlong)param_4) = 0;
      }
    }
    break;
  case 0xb:
    uVar4 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x220);
    }
    break;
  case 0xc:
    uVar4 = uVar3;
    if (((*(uint *)(param_1 + 0x220) <= param_3) ||
        (uVar4 = *(int *)(*(longlong *)(param_1 + 0x230) + (ulonglong)param_3 * 4) + 1,
        param_4 == (undefined4 *)0x0)) || (param_5 < uVar4)) break;
    lVar6 = *(longlong *)(param_1 + 0x228);
LAB_143c3f43e:
    _guard_xfg_dispatch_icall_nop
              (param_4,*(void **)(lVar6 + (ulonglong)param_3 * 8),(ulonglong)(uVar4 - 1));
    *(undefined1 *)((ulonglong)(uVar4 - 1) + (longlong)param_4) = 0;
    break;
  case 0xd:
    uVar4 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x18c);
    }
    break;
  case 0xe:
    uVar4 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x18e);
    }
    break;
  case 0xf:
    uVar4 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11c);
    }
    break;
  case 0x10:
    uVar4 = uVar3;
    if (((param_3 < *(byte *)(param_1 + 0x11c)) && (uVar4 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x120 + (ulonglong)param_3 * 2);
    }
    break;
  case 0x11:
    uVar4 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x188);
    }
    break;
  case 0x12:
    uVar4 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11d);
    }
    break;
  case 0x13:
    uVar4 = uVar3;
    if (((param_3 < *(byte *)(param_1 + 0x11d)) && (uVar4 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x13c + (ulonglong)param_3 * 2);
    }
    break;
  case 0x14:
    uVar4 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11e);
    }
    break;
  case 0x15:
    uVar4 = uVar3;
    if (((param_3 < *(byte *)(param_1 + 0x11e)) && (uVar4 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x150 + (ulonglong)param_3 * 2);
    }
    break;
  case 0x16:
    uVar4 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11f);
    }
    break;
  case 0x17:
    uVar4 = uVar3;
    if (((param_3 < *(byte *)(param_1 + 0x11f)) && (uVar4 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x16c + (ulonglong)param_3 * 2);
    }
    break;
  case 0x18:
    uVar4 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x180);
    }
    break;
  case 0x19:
    uVar4 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x184);
    }
    break;
  case 0x1a:
    uVar4 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 400);
    }
    break;
  case 0x1b:
    uVar4 = uVar3;
    if (((param_3 < *(byte *)(param_1 + 400)) && (uVar4 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x194 + (ulonglong)param_3 * 2);
    }
    break;
  case 0x1c:
    uVar4 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x191);
    }
    break;
  case 0x1d:
    uVar4 = uVar3;
    if (((param_3 < *(byte *)(param_1 + 0x191)) && (uVar4 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1ae + (ulonglong)param_3 * 2);
    }
    break;
  case 0x1e:
    uVar4 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x192);
    }
    break;
  case 0x1f:
    uVar4 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x193);
    }
    break;
  case 0x20:
    uVar4 = uVar3;
    if (((param_3 < 2) && (uVar4 = 2, param_4 != (undefined4 *)0x0)) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1d4 + (ulonglong)param_3 * 2);
    }
    break;
  case 0x21:
    uVar4 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x118);
    }
    break;
  case 0x22:
    uVar4 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x1d0);
    }
    break;
  case 0x23:
    uVar4 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x1cc);
    }
    break;
  case 0x24:
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)*(void **)(param_1 + 0xd8) + lVar6) != '\0');
    uVar4 = (int)lVar6 + 1;
    if ((param_4 != (undefined4 *)0x0) && (uVar4 <= param_5)) {
      _guard_xfg_dispatch_icall_nop(param_4,*(void **)(param_1 + 0xd8),(ulonglong)uVar4);
    }
    break;
  case 0x25:
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)*(void **)(param_1 + 0xe0) + lVar6) != '\0');
    uVar4 = (int)lVar6 + 1;
    if ((param_4 != (undefined4 *)0x0) && (uVar4 <= param_5)) {
      _guard_xfg_dispatch_icall_nop(param_4,*(void **)(param_1 + 0xe0),(ulonglong)uVar4);
    }
    break;
  case 0x26:
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)*(void **)(param_1 + 0xe8) + lVar6) != '\0');
    uVar4 = (int)lVar6 + 1;
    if ((param_4 != (undefined4 *)0x0) && (uVar4 <= param_5)) {
      _guard_xfg_dispatch_icall_nop(param_4,*(void **)(param_1 + 0xe8),(ulonglong)uVar4);
    }
    break;
  case 0x27:
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)*(void **)(param_1 + 0xf0) + lVar6) != '\0');
    uVar4 = (int)lVar6 + 1;
    if ((param_4 != (undefined4 *)0x0) && (uVar4 <= param_5)) {
      _guard_xfg_dispatch_icall_nop(param_4,*(void **)(param_1 + 0xf0),(ulonglong)uVar4);
    }
    break;
  case 0x28:
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)*(void **)(param_1 + 0xf8) + lVar6) != '\0');
    uVar4 = (int)lVar6 + 1;
    if ((param_4 != (undefined4 *)0x0) && (uVar4 <= param_5)) {
      _guard_xfg_dispatch_icall_nop(param_4,*(void **)(param_1 + 0xf8),(ulonglong)uVar4);
    }
    break;
  case 0x29:
    uVar4 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x104);
    }
    break;
  case 0x2a:
    uVar4 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x106);
    }
    break;
  case 0x2b:
    uVar4 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x108);
    }
    break;
  case 0x2c:
    uVar4 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x110);
    }
    break;
  case 0x2d:
    uVar4 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x100);
    }
  }
  if (uVar4 == 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 143c3fc00 FUN_143c3fc00 body=727 status=ok
// SIG undefined FUN_143c3fc00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c3fc00(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  longlong lVar3;
  char *_Str1;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  undefined8 *puVar12;
  longlong **pplVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_d8 [32];
  uint local_b8 [4];
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  int local_98 [16];
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  puVar16 = *(uint **)(param_1 + 0x2d8);
  uVar14 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar15 = 6;
  local_58[0] = param_2;
  if (puVar16 != (uint *)0x0) {
    local_a8 = puVar16[1];
    local_a4 = *puVar16;
    uVar15 = uVar14;
    if (local_a8 != 0) {
      uVar18 = (ulonglong)local_a8;
      piVar11 = local_98 + 1;
      puVar17 = puVar16 + 0x2c;
      puVar7 = puVar16;
      do {
        puVar7 = puVar7 + 2;
        piVar2 = *(int **)puVar17;
        *(undefined8 *)(piVar11 + -3) = *(undefined8 *)puVar7;
        piVar11[-1] = *piVar2;
        *piVar11 = piVar2[(ulonglong)(byte)puVar17[-2] - 1];
        uVar18 = uVar18 - 1;
        piVar11 = piVar11 + 4;
        puVar17 = puVar17 + 6;
      } while (uVar18 != 0);
    }
  }
  uVar4 = local_a8;
  uVar18 = (ulonglong)local_a8;
  local_b8[0] = (uint)uVar15;
  if (local_b8[0] == 0) {
    puVar7 = (uint *)FUN_143c271e0(uVar1,(local_a8 + 1) * 0x20,local_b8);
    if (local_b8[0] == 0) {
      puVar7[1] = local_a4;
      *(uint **)(puVar7 + 4) = puVar7 + 8;
      *puVar7 = uVar4;
      puVar7[2] = 0xffffffff;
      puVar7[6] = 0;
      puVar7[7] = 0;
      if (uVar4 != 0) {
        piVar11 = local_98;
        uVar15 = uVar14;
        uVar19 = uVar18;
LAB_143c3fd40:
        *(undefined8 *)(uVar15 + *(longlong *)(puVar7 + 4)) = *(undefined8 *)(piVar11 + -2);
        *(int *)(uVar15 + 8 + *(longlong *)(puVar7 + 4)) = *piVar11 << 0x10;
        *(int *)(uVar15 + 0x10 + *(longlong *)(puVar7 + 4)) = piVar11[1] << 0x10;
        lVar3 = *(longlong *)(puVar7 + 4);
        *(int *)(lVar3 + 0xc + uVar15) =
             (*(int *)(lVar3 + 0x10 + uVar15) + *(int *)(lVar3 + 8 + uVar15)) / 2;
        *(undefined4 *)(uVar15 + 0x18 + *(longlong *)(puVar7 + 4)) = 0xffffffff;
        *(undefined4 *)(uVar15 + 0x14 + *(longlong *)(puVar7 + 4)) = 0xffffffff;
        puVar12 = (undefined8 *)(*(longlong *)(puVar7 + 4) + uVar15);
        _Str1 = (char *)*puVar12;
        uVar9 = uVar14;
        do {
          uVar10 = uVar9 + 1;
          uVar8 = uVar14;
          if (_Str1[uVar9] != "Weight"[uVar9]) goto LAB_143c3fdd1;
          uVar9 = uVar10;
        } while (uVar10 != 7);
        *(undefined4 *)((longlong)puVar12 + 0x14) = 0x77676874;
        goto LAB_143c3fe17;
      }
LAB_143c3fe39:
      if ((*puVar16 == 1 << ((byte)puVar16[1] & 0x1f)) &&
         (mm_weights_unmap(*(undefined8 *)(puVar16 + 0x44),local_58,puVar16[1]), uVar4 != 0)) {
        pplVar13 = local_58;
        puVar16 = puVar16 + 0x2a;
        do {
          uVar6 = FUN_143c42e60(puVar16,*(undefined4 *)pplVar13);
          pplVar13 = (longlong **)((longlong)pplVar13 + 4);
          puVar16 = puVar16 + 6;
          *(undefined4 *)(uVar14 + 0xc + *(longlong *)(puVar7 + 4)) = uVar6;
          uVar18 = uVar18 - 1;
          uVar14 = uVar14 + 0x20;
        } while (uVar18 != 0);
      }
      *param_2 = (longlong)puVar7;
    }
    uVar15 = (ulonglong)local_b8[0];
  }
  return uVar15;
  while (uVar8 = uVar9, uVar9 != 6) {
LAB_143c3fdd1:
    uVar9 = uVar8 + 1;
    if (_Str1[uVar8] != "Width"[uVar8]) {
      iVar5 = _guard_xfg_dispatch_icall_nop(_Str1,"OpticalSize");
      if (iVar5 == 0) {
        *(undefined4 *)((longlong)puVar12 + 0x14) = 0x6f70737a;
      }
      goto LAB_143c3fe17;
    }
  }
  *(undefined4 *)((longlong)puVar12 + 0x14) = 0x77647468;
LAB_143c3fe17:
  piVar11 = piVar11 + 4;
  uVar15 = uVar15 + 0x20;
  uVar19 = uVar19 - 1;
  param_2 = local_58[0];
  if (uVar19 == 0) goto LAB_143c3fe39;
  goto LAB_143c3fd40;
}



// FUNCTION 143c3fee0 FUN_143c3fee0 body=199 status=ok
// SIG undefined FUN_143c3fee0(void)

undefined4 FUN_143c3fee0(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  puVar1 = *(uint **)(param_1 + 0x2d8);
  if (puVar1 != (uint *)0x0) {
    if (puVar1[1] < param_2) {
      param_2 = puVar1[1];
    }
    uVar6 = 0;
    if (*puVar1 != 0) {
      do {
        uVar4 = 0;
        uVar7 = 0x10000;
        uVar3 = 0x10000;
        if (puVar1[1] != 0) {
          do {
            uVar5 = (uint)uVar4;
            if (uVar5 < param_2) {
              iVar2 = *(int *)(param_3 + uVar4 * 4);
              if (iVar2 < 0) {
                iVar2 = 0;
              }
              else if (0x10000 < iVar2) {
                iVar2 = 0x10000;
              }
            }
            else {
              iVar2 = 0x8000;
            }
            if (((uint)uVar6 >> (uVar5 & 0x1f) & 1) == 0) {
              iVar2 = 0x10000 - iVar2;
            }
            uVar3 = FUN_143c22100(uVar7,iVar2);
            uVar4 = (ulonglong)(uVar5 + 1);
            uVar7 = uVar3;
          } while (uVar5 + 1 < puVar1[1]);
        }
        *(undefined4 *)(*(longlong *)(puVar1 + 0x42) + uVar6 * 4) = uVar3;
        uVar5 = (uint)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *puVar1);
    }
    return 0;
  }
  return 6;
}



// FUNCTION 143c3ffb0 FUN_143c3ffb0 body=366 status=ok
// SIG undefined FUN_143c3ffb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c3ffb0(longlong param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  int *piVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0x2d8);
  if (lVar3 == 0) {
    uVar9 = 6;
  }
  else {
    uVar10 = *(uint *)(lVar3 + 4);
    if (uVar10 < param_2) {
      param_2 = uVar10;
    }
    uVar13 = 0;
    if (uVar10 != 0) {
      do {
        uVar17 = 0xffffffff;
        piVar4 = *(int **)(lVar3 + 8 + (uVar13 + 7) * 0x18);
        pbVar1 = (byte *)(lVar3 + (uVar13 + 7) * 0x18);
        puVar5 = *(undefined4 **)(pbVar1 + 0x10);
        if ((uint)uVar13 < param_2) {
          iVar7 = *(int *)(param_3 + uVar13 * 4);
        }
        else {
          iVar7 = (piVar4[(ulonglong)*pbVar1 - 1] - *piVar4) / 2;
        }
        bVar2 = *pbVar1;
        uVar6 = 0;
        piVar12 = piVar4;
        if (bVar2 == 0) {
LAB_143c400c3:
          uVar8 = *puVar5;
        }
        else {
          do {
            uVar11 = uVar6;
            if (iVar7 == *piVar12) {
              uVar8 = puVar5[uVar11];
              goto LAB_143c400c6;
            }
            uVar15 = uVar11;
            if (iVar7 < *piVar12) break;
            uVar10 = (int)uVar11 + 1;
            uVar6 = (ulonglong)uVar10;
            piVar12 = piVar12 + 1;
            uVar15 = 0xffffffff;
            uVar17 = uVar11;
          } while (uVar10 < bVar2);
          iVar16 = (int)uVar17;
          if (iVar16 < 0) goto LAB_143c400c3;
          iVar14 = (int)uVar15;
          if (iVar14 < 0) {
            uVar8 = puVar5[(ulonglong)bVar2 - 1];
          }
          else {
            uVar8 = FUN_143c21f00(iVar7 - piVar4[iVar16],puVar5[iVar14] - puVar5[iVar16],
                                  piVar4[iVar14] - piVar4[iVar16]);
          }
        }
LAB_143c400c6:
        local_88[uVar13] = uVar8;
        uVar10 = (uint)uVar13 + 1;
        uVar13 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(lVar3 + 4));
    }
    uVar9 = FUN_143c3fee0(param_1,*(undefined4 *)(lVar3 + 4),local_88);
  }
  return uVar9;
}



// FUNCTION 143c40120 FUN_143c40120 body=546 status=ok
// SIG undefined FUN_143c40120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143c40120(longlong param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_b8 [32];
  int local_98 [4];
  int aiStack_88 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (4 < param_2) {
    param_2 = 4;
  }
  if (param_2 != 0) {
    uVar14 = (ulonglong)param_2;
    piVar13 = local_98;
    do {
      iVar7 = FT_RoundFix(*(undefined4 *)((param_3 - (longlong)local_98) + (longlong)piVar13));
      *piVar13 = iVar7 >> 0x10;
      piVar13 = piVar13 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  lVar3 = *(longlong *)(param_1 + 0x2d8);
  if (lVar3 == 0) {
    uVar8 = 6;
  }
  else {
    uVar16 = *(uint *)(lVar3 + 4);
    if (uVar16 < param_2) {
      param_2 = uVar16;
    }
    uVar8 = 0;
    uVar12 = 0;
    if (uVar16 != 0) {
      do {
        uVar16 = 0xffffffff;
        uVar14 = (ulonglong)uVar12;
        piVar13 = *(int **)(lVar3 + 8 + (uVar14 + 7) * 0x18);
        pbVar1 = (byte *)(lVar3 + (uVar14 + 7) * 0x18);
        piVar4 = *(int **)(pbVar1 + 0x10);
        if (uVar12 < param_2) {
          iVar7 = local_98[uVar14];
        }
        else {
          iVar7 = (piVar13[(ulonglong)*pbVar1 - 1] - *piVar13) / 2;
        }
        bVar2 = *pbVar1;
        piVar11 = piVar13;
        uVar6 = 0;
        if (bVar2 == 0) {
LAB_143c40271:
          iVar7 = *piVar4;
        }
        else {
          do {
            uVar10 = uVar6;
            if (iVar7 == *piVar11) {
              iVar7 = piVar4[uVar10];
              goto LAB_143c40274;
            }
            uVar17 = uVar10;
            if (iVar7 < *piVar11) break;
            piVar11 = piVar11 + 1;
            uVar6 = uVar10 + 1;
            uVar17 = 0xffffffff;
            uVar16 = uVar10;
          } while (uVar10 + 1 < (uint)bVar2);
          if ((int)uVar16 < 0) goto LAB_143c40271;
          if ((int)uVar17 < 0) {
            iVar7 = piVar4[(ulonglong)bVar2 - 1];
          }
          else {
            iVar7 = FUN_143c21f00(iVar7 - piVar13[(int)uVar16],
                                  piVar4[(int)uVar17] - piVar4[(int)uVar16],
                                  piVar13[(int)uVar17] - piVar13[(int)uVar16]);
          }
        }
LAB_143c40274:
        uVar12 = uVar12 + 1;
        aiStack_88[uVar14] = iVar7;
      } while (uVar12 < *(uint *)(lVar3 + 4));
    }
    puVar5 = *(uint **)(param_1 + 0x2d8);
    if (puVar5 == (uint *)0x0) {
      uVar8 = 6;
    }
    else {
      uVar14 = 0;
      uVar16 = *(uint *)(lVar3 + 4);
      if (puVar5[1] < *(uint *)(lVar3 + 4)) {
        uVar16 = puVar5[1];
      }
      if (*puVar5 != 0) {
        do {
          uVar12 = 0;
          uVar15 = 0x10000;
          uVar9 = 0x10000;
          if (puVar5[1] != 0) {
            do {
              if (uVar12 < uVar16) {
                iVar7 = aiStack_88[uVar12];
                if (iVar7 < 0) {
                  iVar7 = 0;
                }
                else if (0x10000 < iVar7) {
                  iVar7 = 0x10000;
                }
              }
              else {
                iVar7 = 0x8000;
              }
              if (((uint)uVar14 >> (uVar12 & 0x1f) & 1) == 0) {
                iVar7 = 0x10000 - iVar7;
              }
              uVar9 = FUN_143c22100(uVar15,iVar7);
              uVar12 = uVar12 + 1;
              uVar15 = uVar9;
            } while (uVar12 < puVar5[1]);
          }
          uVar12 = (uint)uVar14 + 1;
          *(undefined4 *)(*(longlong *)(puVar5 + 0x42) + uVar14 * 4) = uVar9;
          uVar14 = (ulonglong)uVar12;
        } while (uVar12 < *puVar5);
      }
    }
  }
  return uVar8;
}



// FUNCTION 143c403f0 T1_Size_Done body=108 status=ok
// SIG undefined T1_Size_Done(void)

void T1_Size_Done(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (param_1[7] != 0) {
    puVar1 = *(undefined8 **)(*param_1 + 0x2f8);
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



// FUNCTION 143c40460 FUN_143c40460 body=143 status=ok
// SIG undefined FUN_143c40460(void)

undefined8 FUN_143c40460(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x2f8);
  lVar3 = FT_Get_Module(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if (((lVar3 == 0) || (puVar1 == (undefined8 *)0x0)) ||
     (pcVar2 = (code *)*puVar1, pcVar2 == (code *)0x0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = (*pcVar2)(lVar3);
  }
  FUN_143c23e60(*param_1,param_2);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 8))
              (param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
  }
  return 0;
}



// FUNCTION 143c404f0 FUN_143c404f0 body=139 status=ok
// SIG undefined FUN_143c404f0(void)

ulonglong FUN_143c404f0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong local_res8;
  
  puVar3 = *(undefined8 **)(*param_1 + 0x2f8);
  lVar2 = FT_Get_Module(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((((lVar2 != 0) && (puVar3 != (undefined8 *)0x0)) &&
      (pcVar1 = (code *)*puVar3, pcVar1 != (code *)0x0)) &&
     (puVar3 = (undefined8 *)(*pcVar1)(lVar2), puVar3 != (undefined8 *)0x0)) {
    uVar4 = (*(code *)*puVar3)(*(undefined8 *)(*param_1 + 0x98),*param_1 + 0x114,&local_res8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    param_1[7] = local_res8;
    return uVar4 & 0xffffffff;
  }
  return 0;
}



// FUNCTION 143c40580 FUN_143c40580 body=985 status=ok
// SIG undefined FUN_143c40580(void)

int FUN_143c40580(undefined8 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  longlong *plVar6;
  short sVar7;
  int iVar8;
  undefined2 extraout_var;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 local_res20 [2];
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  *param_2 = 1;
  local_res20[0] = param_4;
  lVar9 = ft_module_get_service(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps");
  *(longlong *)(param_2 + 0xa4) = lVar9;
  lVar10 = FT_Get_Module_Interface(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
  *(longlong *)(param_2 + 0xa6) = lVar10;
  if (lVar10 == 0) {
    return 0xb;
  }
  uVar11 = FT_Get_Module_Interface(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"pshinter");
  *(undefined8 *)(param_2 + 0xbe) = uVar11;
  iVar8 = FUN_143c424e0(param_2);
  if (iVar8 != 0) {
    return iVar8;
  }
  if (param_3 < 0) {
    return 0;
  }
  if (0 < param_3) {
    return 6;
  }
  param_2[2] = param_2[2] | 0xa11;
  lVar16 = 0;
  param_2[1] = 0;
  param_2[4] = param_2[0x8e];
  if (*(char *)(param_2 + 0x41) != '\0') {
    param_2[2] = param_2[2] | 4;
  }
  if (*(longlong *)(param_2 + 0xb6) != 0) {
    param_2[2] = param_2[2] | 0x100;
  }
  pcVar14 = *(char **)(param_2 + 0x3c);
  *(char **)(param_2 + 6) = pcVar14;
  *(undefined8 *)(param_2 + 8) = 0;
  if (pcVar14 == (char *)0x0) {
    lVar13 = 0;
    if (*(longlong *)(param_2 + 0x76) != 0) {
      lVar13 = *(longlong *)(param_2 + 0x76);
    }
    *(longlong *)(param_2 + 6) = lVar13;
  }
  else {
    pcVar12 = *(char **)(param_2 + 0x3a);
    if (pcVar12 != (char *)0x0) {
      cVar1 = *pcVar12;
      while (cVar1 != '\0') {
        cVar2 = *pcVar14;
        if (cVar1 == cVar2) {
          pcVar14 = pcVar14 + 1;
LAB_143c406ac:
          pcVar12 = pcVar12 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_143c406ac;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (*pcVar14 == '\0') {
              *(char **)(param_2 + 8) = pcVar12;
            }
            goto LAB_143c406f4;
          }
          pcVar14 = pcVar14 + 1;
        }
        cVar1 = *pcVar12;
      }
      *(char **)(param_2 + 8) = "Regular";
    }
  }
LAB_143c406f4:
  if (*(longlong *)(param_2 + 8) == 0) {
    pcVar14 = "Regular";
    if (*(char **)(param_2 + 0x3e) != (char *)0x0) {
      pcVar14 = *(char **)(param_2 + 0x3e);
    }
    *(char **)(param_2 + 8) = pcVar14;
  }
  param_2[3] = 0;
  param_2[3] = (uint)(param_2[0x40] != 0);
  lVar13 = *(longlong *)(param_2 + 0x3e);
  lVar17 = lVar16;
  if (lVar13 == 0) goto LAB_143c40787;
  do {
    lVar15 = lVar17 + 1;
    if (*(char *)(lVar13 + lVar17) != (&DAT_145d23b60)[lVar17]) goto LAB_143c40770;
    lVar17 = lVar15;
  } while (lVar15 != 5);
  goto LAB_143c40783;
  while (lVar16 = lVar17, lVar17 != 6) {
LAB_143c40770:
    lVar17 = lVar16 + 1;
    if (*(char *)(lVar13 + lVar16) != "Black"[lVar16]) goto LAB_143c40787;
  }
LAB_143c40783:
  param_2[3] = param_2[3] | 2;
LAB_143c40787:
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0x16] = (int)*(short *)((longlong)param_2 + 0x276);
  param_2[0x17] = (int)*(short *)((longlong)param_2 + 0x27a);
  param_2[0x18] = param_2[0x9f] + 0xffff >> 0x10;
  param_2[0x19] = param_2[0xa0] + 0xffff >> 0x10;
  if (*(short *)(param_2 + 0x1a) == 0) {
    *(undefined2 *)(param_2 + 0x1a) = 1000;
  }
  sVar3 = *(short *)(param_2 + 0x19);
  sVar4 = *(short *)(param_2 + 0x17);
  *(short *)((longlong)param_2 + 0x6a) = sVar3;
  *(short *)(param_2 + 0x1b) = sVar4;
  sVar7 = (short)((((uint)*(ushort *)(param_2 + 0x1a) + (uint)*(ushort *)(param_2 + 0x1a) * 2) * 4)
                 / 10);
  *(short *)((longlong)param_2 + 0x6e) = sVar7;
  if ((int)sVar7 < (int)sVar3 - (int)sVar4) {
    *(short *)((longlong)param_2 + 0x6e) = sVar3 - sVar4;
  }
  *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(param_2 + 0x18);
  iVar8 = FUN_143c41b20(param_2,local_res20);
  if (iVar8 == 0) {
    FT_RoundFix(local_res20[0]);
    *(undefined2 *)(param_2 + 0x1c) = extraout_var;
  }
  iVar8 = 0;
  *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)((longlong)param_2 + 0x6e);
  *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)((longlong)param_2 + 0x106);
  *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(param_2 + 0x42);
  if (lVar9 != 0) {
    plVar6 = *(longlong **)(lVar10 + 0x28);
    local_2c = 0x10003;
    local_30 = 0x756e6963;
    local_38 = param_2;
    iVar8 = FUN_143c1ff20(plVar6[3],0,&local_38,0);
    if ((iVar8 == 0) || ((char)iVar8 == -0x5d)) {
      iVar5 = param_2[0x78];
      iVar8 = 0;
      if (iVar5 == 1) {
        local_30 = 0x41444243;
        local_2c = 0x20007;
        lVar9 = plVar6[2];
      }
      else if (iVar5 == 2) {
        local_30 = 0x41444f42;
        local_2c = 7;
        lVar9 = *plVar6;
      }
      else if (iVar5 == 3) {
        local_30 = 0x6c617431;
        local_2c = 0x30007;
        lVar9 = plVar6[3];
      }
      else {
        if (iVar5 != 4) {
          return 0;
        }
        local_30 = 0x41444245;
        local_2c = 0x10007;
        lVar9 = plVar6[1];
      }
      if (lVar9 != 0) {
        iVar8 = FUN_143c1ff20(lVar9,0,&local_38,0);
      }
    }
  }
  return iVar8;
}



// FUNCTION 143c40960 FUN_143c40960 body=531 status=ok
// SIG undefined FUN_143c40960(void)

void FUN_143c40960(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      ft_mem_free(uVar1);
      *(undefined8 *)(param_1 + 0x2f0) = 0;
      *(undefined4 *)(param_1 + 0x2e8) = 0;
    }
    FUN_143c41c90(param_1);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
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
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x228));
    *(undefined8 *)(param_1 + 0x228) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x230));
    *(undefined8 *)(param_1 + 0x230) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x208));
    *(undefined8 *)(param_1 + 0x208) = 0;
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
    lVar2 = *(longlong *)(param_1 + 0x2a0);
    if (lVar2 != 0) {
      ft_mem_free(uVar1,*(undefined8 *)(lVar2 + 0x30));
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined4 *)(lVar2 + 0x38) = 0;
      ft_mem_free(uVar1,*(undefined8 *)(lVar2 + 0x20));
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x28) = 0;
      ft_mem_free(uVar1,lVar2);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 143c40b80 T1_GlyphSlot_Init body=87 status=ok
// SIG undefined T1_GlyphSlot_Init(void)

undefined8 T1_GlyphSlot_Init(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x2f8);
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



// FUNCTION 143c40bf0 FUN_143c40bf0 body=408 status=ok
// SIG undefined FUN_143c40bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c40bf0(longlong param_1,int param_2,uint param_3,ulonglong param_4,int *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_7a8 [32];
  undefined8 local_788;
  undefined8 local_780;
  undefined1 local_778;
  undefined4 local_770;
  code *local_768;
  undefined1 local_758 [16];
  undefined1 local_748 [8];
  longlong local_740;
  undefined4 local_708;
  undefined1 local_6ec;
  undefined1 local_6ea;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_7a8;
  if ((param_4 & 0x10) == 0) {
    local_768 = FUN_143c42980;
    local_780 = *(undefined8 *)(param_1 + 0x2d8);
    local_770 = 0;
    local_778 = 0;
    local_788 = *(undefined8 *)(param_1 + 0x240);
    uVar3 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x298) + 0x18))
                      (local_748,param_1,0,0);
    if ((int)uVar3 == 0) {
      local_d4 = *(undefined4 *)(param_1 + 0x220);
      local_d0 = *(undefined8 *)(param_1 + 0x228);
      local_c8 = *(undefined8 *)(param_1 + 0x230);
      local_38 = *(undefined8 *)(param_1 + 0x2f0);
      local_30 = *(undefined4 *)(param_1 + 0x2e8);
      uVar5 = 0;
      local_6ea = 1;
      local_6ec = 0;
      if (param_3 != 0) {
        do {
          iVar2 = FUN_143c429d0(local_748,param_2 + uVar5,local_758);
          if (iVar2 == 0) {
            plVar1 = *(longlong **)(*(longlong *)(local_740 + 0xd0) + 0x48);
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 8))(plVar1[1],local_758);
            }
            iVar2 = FT_RoundFix(local_708);
            *param_5 = iVar2 >> 0x10;
          }
          else {
            *param_5 = 0;
          }
          uVar5 = uVar5 + 1;
          param_5 = param_5 + 1;
        } while (uVar5 < param_3);
      }
      uVar3 = 0;
    }
  }
  else {
    if (param_3 != 0) {
      for (uVar4 = (ulonglong)param_3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_5 = 0;
        param_5 = param_5 + 1;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143c40d90 FUN_143c40d90 body=1121 status=ok
// SIG undefined FUN_143c40d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c40d90(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined1 auStack_818 [32];
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined1 local_7e8;
  uint local_7e0;
  code *local_7d8;
  char local_7c8;
  int local_7c0;
  int local_7bc;
  uint local_7b8;
  uint local_7b4;
  undefined8 local_7b0;
  undefined8 local_7a8;
  undefined4 local_7a0;
  undefined1 local_798 [32];
  longlong local_778;
  undefined4 local_760;
  undefined4 local_758;
  undefined4 local_754;
  byte local_73b;
  longlong local_738;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  ulonglong local_100;
  undefined8 local_88;
  undefined4 local_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_818;
  lVar2 = *(longlong *)(param_1 + 8);
  puVar3 = *(undefined8 **)(*(longlong *)(lVar2 + 0x298) + 0x18);
  if ((param_3 < *(uint *)(lVar2 + 0x10)) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + 0x48) != 0)) {
    if ((param_4 >> 10 & 1) != 0) {
      param_4 = param_4 | 3;
    }
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x104) = 0x10000;
      *(undefined4 *)(param_1 + 0x108) = 0x10000;
    }
    else {
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
    *(undefined4 *)(param_1 + 0x98) = 0;
    local_7d8 = FUN_143c42980;
    local_7e8 = (param_4 & 3) == 0;
    local_7e0 = (int)param_4 >> 0x10 & 0xf;
    local_7f0 = *(undefined8 *)(lVar2 + 0x2d8);
    local_7f8 = *(undefined8 *)(lVar2 + 0x240);
    local_7c8 = local_7e8;
    uVar9 = (*(code *)*puVar3)(local_798,lVar2,param_2,param_1);
    if ((int)uVar9 == 0) {
      local_73b = (byte)(param_4 >> 10) & 1;
      local_124 = *(undefined4 *)(lVar2 + 0x220);
      local_120 = *(undefined8 *)(lVar2 + 0x228);
      local_118 = *(undefined8 *)(lVar2 + 0x230);
      local_88 = *(undefined8 *)(lVar2 + 0x2f0);
      local_80 = *(undefined4 *)(lVar2 + 0x2e8);
      local_7b8 = FUN_143c429d0(local_798,param_3,&local_7a8);
      uVar9 = (ulonglong)local_7b8;
      if (local_7b8 == 0) {
        local_7b0 = local_100;
        local_78 = local_110;
        iStack_74 = iStack_10c;
        iStack_70 = iStack_108;
        iStack_6c = iStack_104;
        (*(code *)puVar3[1])();
        *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 1;
        *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 4;
        if ((param_4 >> 10 & 1) == 0) {
          iVar6 = FT_RoundFix(local_758);
          *(int *)(param_1 + 0x40) = iVar6 >> 0x10;
          iVar6 = FT_RoundFix(local_758);
          *(int *)(param_1 + 0x50) = iVar6 >> 0x10;
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          local_7b4 = param_4 & 0x10;
          if ((param_4 & 0x10) == 0) {
            iVar6 = FT_RoundFix(local_754);
            *(int *)(param_1 + 0x4c) = iVar6 >> 0x10;
            iVar6 = FT_RoundFix(local_754);
            iVar6 = iVar6 >> 0x10;
          }
          else {
            iVar6 = *(int *)(lVar2 + 0x280) - *(int *)(lVar2 + 0x278) >> 0x10;
            *(int *)(param_1 + 0x4c) = iVar6;
          }
          *(int *)(param_1 + 0x54) = iVar6;
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          if ((param_2 != 0) && (*(ushort *)(param_2 + 0x1a) < 0x18)) {
            *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x100;
          }
          if ((((local_78 != 0x10000) || (iStack_6c != 0x10000)) || (iStack_74 != 0)) ||
             (iStack_70 != 0)) {
            FUN_143c234b0(param_1 + 0x98,&local_78);
          }
          iVar6 = local_7b0._4_4_;
          if (((int)local_100 != 0) || (local_7b0._4_4_ != 0)) {
            FUN_143c23560(param_1 + 0x98,local_100 & 0xffffffff,local_7b0._4_4_);
          }
          local_7c0 = *(int *)(param_1 + 0x40);
          local_7bc = 0;
          FUN_143c254f0(&local_7c0,&local_78);
          local_7bc = *(int *)(param_1 + 0x4c);
          *(int *)(param_1 + 0x40) = local_7c0 + (int)local_100;
          local_7c0 = 0;
          FUN_143c254f0(&local_7c0,&local_78);
          *(int *)(param_1 + 0x4c) = local_7bc + iVar6;
          if ((param_4 & 1) == 0) {
            uVar8 = *(undefined4 *)(param_1 + 0x104);
            uVar1 = *(undefined4 *)(param_1 + 0x108);
            puVar10 = *(undefined4 **)(local_778 + 8);
            if (((local_7c8 == '\0') || (local_738 == 0)) &&
               (iVar6 = (int)*(short *)(local_778 + 2), 0 < *(short *)(local_778 + 2))) {
              do {
                uVar7 = FUN_143c22100(*puVar10,uVar8);
                *puVar10 = uVar7;
                uVar7 = FUN_143c22100(puVar10[1],uVar1);
                iVar6 = iVar6 + -1;
                puVar10[1] = uVar7;
                puVar10 = puVar10 + 2;
              } while (0 < iVar6);
            }
            uVar8 = FUN_143c22100(*(undefined4 *)(param_1 + 0x40),uVar8);
            *(undefined4 *)(param_1 + 0x40) = uVar8;
            uVar8 = FUN_143c22100(*(undefined4 *)(param_1 + 0x4c),uVar1);
            *(undefined4 *)(param_1 + 0x4c) = uVar8;
          }
          FUN_143c22f00(param_1 + 0x98,&local_68);
          *(int *)(param_1 + 0x38) = local_68;
          *(int *)(param_1 + 0x30) = local_60 - local_68;
          *(int *)(param_1 + 0x34) = local_5c - local_64;
          *(int *)(param_1 + 0x3c) = local_5c;
          if (local_7b4 != 0) {
            FUN_143c27730(param_1 + 0x30,*(undefined4 *)(param_1 + 0x4c));
          }
          uVar9 = (ulonglong)local_7b8;
        }
        else {
          lVar4 = *(longlong *)(param_1 + 0xf0);
          iVar6 = FT_RoundFix(local_760);
          *(int *)(param_1 + 0x38) = iVar6 >> 0x10;
          iVar6 = FT_RoundFix(local_758);
          *(int *)(param_1 + 0x40) = iVar6 >> 0x10;
          *(int *)(lVar4 + 0x10) = local_78;
          *(int *)(lVar4 + 0x14) = iStack_74;
          *(int *)(lVar4 + 0x18) = iStack_70;
          *(int *)(lVar4 + 0x1c) = iStack_6c;
          *(ulonglong *)(lVar4 + 0x20) = local_100;
          *(undefined1 *)(lVar4 + 0xc) = 1;
        }
        *(undefined8 *)(param_1 + 0xd0) = local_7a8;
        *(undefined4 *)(param_1 + 0xd8) = local_7a0;
        plVar5 = *(longlong **)(*(longlong *)(lVar2 + 0xd0) + 0x48);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5[1],&local_7a8);
          *(undefined8 *)(param_1 + 0xd0) = 0;
          *(undefined4 *)(param_1 + 0xd8) = 0;
        }
      }
      else {
        (*(code *)puVar3[1])(local_798);
      }
    }
  }
  else {
    uVar9 = 6;
  }
  return uVar9;
}



// FUNCTION 143c41200 FUN_143c41200 body=378 status=ok
// SIG undefined FUN_143c41200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c41200(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4 [3];
  int local_98 [24];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar6 = 0;
  local_a8 = 0;
  (**(code **)(param_2 + 0x78))(param_2,local_98,4,local_a4);
  if (local_a4[0] < 0) {
    *(undefined4 *)(param_2 + 0x18) = 0xa2;
  }
  else if ((local_a4[0] == 0) || (4 < local_a4[0])) {
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
  else {
    iVar2 = FUN_143c433b0(param_1,0);
    if (iVar2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x98);
      puVar5 = *(undefined8 **)(param_1 + 0x2d8);
      if (local_a4[0] < 1) {
        *(undefined4 *)(param_2 + 0x18) = 0;
      }
      else {
        piVar4 = local_98;
        local_a8 = 0;
        do {
          puVar5 = puVar5 + 1;
          if (**(char **)piVar4 == '/') {
            *(char **)piVar4 = *(char **)piVar4 + 1;
          }
          uVar3 = piVar4[2] - *piVar4;
          if (uVar3 == 0) {
            *(undefined4 *)(param_2 + 0x18) = 3;
            return;
          }
          _Dst = (void *)FUN_143c271e0(uVar1,uVar3 + 1,&local_a8);
          *puVar5 = _Dst;
          if (local_a8 != 0) break;
          _guard_xfg_dispatch_icall_nop(_Dst,*(void **)piVar4,(ulonglong)uVar3);
          iVar6 = iVar6 + 1;
          *(undefined1 *)((ulonglong)uVar3 + (longlong)_Dst) = 0;
          piVar4 = piVar4 + 6;
        } while (iVar6 < local_a4[0]);
        *(int *)(param_2 + 0x18) = local_a8;
      }
    }
    else {
      *(int *)(param_2 + 0x18) = iVar2;
    }
  }
  return;
}



// FUNCTION 143c41380 FUN_143c41380 body=566 status=ok
// SIG undefined FUN_143c41380(void)

ulonglong FUN_143c41380(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  undefined1 local_58 [16];
  longlong local_48;
  code *local_40;
  longlong local_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  local_res8[0] = 2;
  lVar6 = FUN_143c271e0(uVar1,0x40,local_res8);
  uVar7 = (ulonglong)local_res8[0];
  if (local_res8[0] == 0) {
    uVar7 = FUN_143c24650(param_2,*(undefined4 *)(param_2 + 8));
    local_res8[0] = (uint)uVar7;
    if (local_res8[0] == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x278);
      uVar4 = *(undefined4 *)(param_1 + 0x27c);
      uVar5 = *(undefined4 *)(param_1 + 0x280);
      *(undefined4 *)(lVar6 + 4) = *(undefined4 *)(param_1 + 0x274);
      *(undefined4 *)(lVar6 + 8) = uVar3;
      *(undefined4 *)(lVar6 + 0xc) = uVar4;
      *(undefined4 *)(lVar6 + 0x10) = uVar5;
      *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(param_1 + 0x280);
      *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(param_1 + 0x278);
      lVar2 = *(longlong *)(param_1 + 0x298);
      if ((*(undefined8 **)(lVar2 + 0x30) != (undefined8 *)0x0) &&
         (local_res8[0] =
               (*(code *)**(undefined8 **)(lVar2 + 0x30))
                         (local_58,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                          *(undefined8 *)(param_2 + 0x40)), local_res8[0] == 0)) {
        local_40 = FUN_143c43720;
        local_48 = lVar6;
        local_38 = param_1 + 0xd8;
        local_res8[0] = (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x10))(local_58);
        (**(code **)(*(longlong *)(lVar2 + 0x30) + 8))(local_58);
      }
      if ((char)local_res8[0] == '\x02') {
        if (((6 < *(uint *)(param_2 + 8)) && (*(byte *)(*(longlong *)(param_2 + 0x38) + 1) < 4)) &&
           (*(uint *)(*(longlong *)(param_2 + 0x38) + 2) == *(uint *)(param_2 + 8))) {
          local_res8[0] = FUN_143c42b00(param_1,param_2,lVar6);
        }
      }
      if (local_res8[0] == 0) {
        uVar3 = *(undefined4 *)(lVar6 + 8);
        uVar4 = *(undefined4 *)(lVar6 + 0xc);
        uVar5 = *(undefined4 *)(lVar6 + 0x10);
        *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(lVar6 + 4);
        *(undefined4 *)(param_1 + 0x278) = uVar3;
        *(undefined4 *)(param_1 + 0x27c) = uVar4;
        *(undefined4 *)(param_1 + 0x280) = uVar5;
        *(int *)(param_1 + 0x58) = (int)*(short *)(lVar6 + 6);
        *(int *)(param_1 + 0x5c) = (int)*(short *)(lVar6 + 10);
        *(int *)(param_1 + 0x60) = *(int *)(lVar6 + 0xc) + 0xffff >> 0x10;
        *(int *)(param_1 + 100) = *(int *)(lVar6 + 0x10) + 0xffff >> 0x10;
        *(short *)(param_1 + 0x6a) = (short)((uint)(*(int *)(lVar6 + 0x14) + 0x8000) >> 0x10);
        *(short *)(param_1 + 0x6c) = (short)((uint)(*(int *)(lVar6 + 0x18) + 0x8000) >> 0x10);
        if (*(int *)(lVar6 + 0x38) != 0) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
          *(longlong *)(param_1 + 0x2a0) = lVar6;
          lVar6 = 0;
        }
      }
      FT_Stream_ExitFrame(param_2);
      uVar7 = (ulonglong)local_res8[0];
    }
  }
  if (lVar6 != 0) {
    ft_mem_free(uVar1,*(undefined8 *)(lVar6 + 0x30));
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined4 *)(lVar6 + 0x38) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(lVar6 + 0x20));
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined4 *)(lVar6 + 0x28) = 0;
    ft_mem_free(uVar1,lVar6);
    uVar7 = (ulonglong)local_res8[0];
  }
  return uVar7;
}



// FUNCTION 143c415c0 FUN_143c415c0 body=193 status=ok
// SIG undefined FUN_143c415c0(void)

undefined4 FUN_143c415c0(longlong param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x2a0);
  if (lVar2 != 0) {
    uVar6 = 0;
    if (*(int *)(lVar2 + 0x28) != 0) {
      do {
        lVar3 = *(longlong *)(lVar2 + 0x20);
        if (*(int *)(lVar3 + uVar6 * 0x14) == param_3) {
          iVar4 = *(int *)(lVar3 + 4 + uVar6 * 0x14);
          if (param_2 < iVar4) {
            iVar4 = *(int *)(lVar3 + 8 + uVar6 * 0x14);
          }
          else {
            iVar1 = *(int *)(lVar3 + 0xc + uVar6 * 0x14);
            if (iVar1 < param_2) {
              iVar4 = *(int *)(lVar3 + 0x10 + uVar6 * 0x14);
            }
            else {
              iVar4 = FUN_143c21f00(param_2 - iVar4,
                                    *(int *)(lVar3 + 0x10 + uVar6 * 0x14) -
                                    *(int *)(lVar3 + 8 + uVar6 * 0x14),iVar1 - iVar4);
              iVar4 = iVar4 + *(int *)(lVar3 + 8 + uVar6 * 0x14);
            }
          }
          *param_4 = iVar4;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar2 + 0x28));
    }
    return 0;
  }
  return 6;
}



// FUNCTION 143c41690 FUN_143c41690 body=545 status=ok
// SIG undefined FUN_143c41690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c41690(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_278 [32];
  int local_258;
  int local_254;
  int local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228 [12];
  undefined8 local_1c8 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_240 = param_1;
  (*(code *)param_2[0xf])(param_2,local_1c8,0x10,&local_254);
  if (local_254 < 0) {
    *(undefined4 *)(param_2 + 3) = 0xa2;
  }
  else if ((local_254 == 0) || (0x10 < local_254)) {
    *(undefined4 *)(param_2 + 3) = 3;
  }
  else {
    local_230 = *param_2;
    iVar2 = 0;
    local_238 = param_2[2];
    local_248 = *(longlong *)(param_1 + 0x2d8);
    local_250 = 0;
    if (0 < local_254) {
      lVar8 = 0;
      do {
        iVar6 = local_250;
        *param_2 = local_1c8[lVar8 * 3];
        param_2[2] = local_1c8[lVar8 * 3 + 1];
        (*(code *)param_2[0xf])(param_2,local_228,4,&local_258);
        iVar4 = local_258;
        if (lVar8 == 0) {
          if ((local_258 < 1) || (4 < local_258)) {
LAB_143c41888:
            *(undefined4 *)(param_2 + 3) = 3;
            return;
          }
          iVar2 = FUN_143c433b0(param_1,local_254,local_258);
          if (iVar2 != 0) {
            *(int *)(param_2 + 3) = iVar2;
            return;
          }
          local_248 = *(longlong *)(param_1 + 0x2d8);
          iVar2 = iVar4;
        }
        else if (local_258 != iVar2) goto LAB_143c41888;
        lVar1 = local_248;
        iVar4 = 0;
        if (0 < local_258) {
          puVar5 = local_228;
          lVar7 = 0;
          do {
            *param_2 = *puVar5;
            param_2[2] = puVar5[1];
            uVar3 = (*(code *)param_2[10])(param_2,0);
            puVar5 = puVar5 + 3;
            iVar4 = iVar4 + 1;
            *(undefined4 *)(lVar7 + *(longlong *)(lVar1 + 0x28 + lVar8 * 8)) = uVar3;
            lVar7 = lVar7 + 4;
            iVar6 = local_250;
          } while (iVar4 < local_258);
        }
        local_250 = iVar6 + 1;
        lVar8 = lVar8 + 1;
        param_1 = local_240;
      } while (local_250 < local_254);
    }
    *param_2 = local_230;
    param_2[2] = local_238;
    *(undefined4 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 143c418c0 FUN_143c418c0 body=606 status=ok
// SIG undefined FUN_143c418c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c418c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong alStack_340 [10];
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  int *local_2c0;
  int local_2b8;
  int local_2b4;
  int local_2b0 [2];
  undefined8 local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined1 local_288 [96];
  longlong local_228 [60];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  local_2b8 = 0;
  uStack_2f0 = 0x143c4190d;
  local_2a8 = uVar5;
  (*(code *)param_2[0xf])(param_2,local_288,4,local_2b0);
  if (local_2b0[0] < 0) {
    *(undefined4 *)(param_2 + 3) = 0xa2;
  }
  else if ((local_2b0[0] == 0) || (4 < local_2b0[0])) {
    *(undefined4 *)(param_2 + 3) = 3;
  }
  else {
    local_298 = *param_2;
    local_2a0 = param_2[2];
    uStack_2f0 = 0x143c4194e;
    local_2b8 = FUN_143c433b0(param_1,0);
    if (local_2b8 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x2d8);
      iVar8 = 0;
      if (0 < local_2b0[0]) {
        plVar6 = (longlong *)(lVar1 + 0xb8);
        do {
          *param_2 = *(longlong *)(((longlong)alStack_340 - lVar1) + (longlong)plVar6);
          param_2[2] = *(longlong *)((longlong)alStack_340 + (8 - lVar1) + (longlong)plVar6);
          uStack_2f0 = 0x143c419e0;
          (*(code *)param_2[0xf])(param_2,local_228,0x14,&local_2b4);
          if ((local_2b4 < 1) || (0x14 < local_2b4)) {
            *(undefined4 *)(param_2 + 3) = 3;
            return;
          }
          local_2c0 = &local_2b8;
          local_2c8 = 0;
          uStack_2f0 = 0x143c41a1d;
          lVar3 = FUN_143c27410(uVar5,4,0,local_2b4 * 2);
          plVar6[-1] = lVar3;
          if (local_2b8 != 0) {
            *(int *)(param_2 + 3) = local_2b8;
            return;
          }
          iVar4 = 0;
          *(char *)(plVar6 + -2) = (char)local_2b4;
          *plVar6 = lVar3 + (longlong)local_2b4 * 4;
          if (0 < local_2b4) {
            plVar7 = local_228;
            lVar3 = 0;
            do {
              *param_2 = *plVar7 + 1;
              param_2[2] = plVar7[1] + -1;
              uStack_2f0 = 0x143c41a6a;
              uVar2 = (*(code *)param_2[9])(param_2);
              *(undefined4 *)(lVar3 + plVar6[-1]) = uVar2;
              uStack_2f0 = 0x143c41a79;
              uVar2 = (*(code *)param_2[10])(param_2,0);
              plVar7 = plVar7 + 3;
              iVar4 = iVar4 + 1;
              *(undefined4 *)(lVar3 + *plVar6) = uVar2;
              uVar5 = local_2a8;
              lVar3 = lVar3 + 4;
            } while (iVar4 < local_2b4);
          }
          iVar8 = iVar8 + 1;
          plVar6 = plVar6 + 3;
        } while (iVar8 < local_2b0[0]);
      }
      *param_2 = local_298;
      param_2[2] = local_2a0;
      *(int *)(param_2 + 3) = local_2b8;
    }
    else {
      *(int *)(param_2 + 3) = local_2b8;
    }
  }
  return;
}



// FUNCTION 143c41b20 FUN_143c41b20 body=357 status=ok
// SIG undefined FUN_143c41b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c41b20(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_7a8 [32];
  undefined8 local_788;
  undefined8 local_780;
  undefined1 local_778;
  undefined4 local_770;
  code *local_768;
  undefined1 local_758 [16];
  undefined1 local_748 [8];
  longlong local_740;
  int local_708;
  undefined1 local_6ec;
  undefined1 local_6ea;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_7a8;
  lVar1 = *(longlong *)(param_1 + 0x298);
  local_768 = FUN_143c42980;
  iVar5 = 0;
  *param_2 = 0;
  local_780 = *(undefined8 *)(param_1 + 0x2d8);
  local_770 = 0;
  local_778 = 0;
  local_788 = *(undefined8 *)(param_1 + 0x240);
  uVar4 = (*(code *)**(undefined8 **)(lVar1 + 0x18))(local_748,param_1,0,0);
  if ((int)uVar4 == 0) {
    local_d4 = *(undefined4 *)(param_1 + 0x220);
    local_d0 = *(undefined8 *)(param_1 + 0x228);
    local_c8 = *(undefined8 *)(param_1 + 0x230);
    local_38 = *(undefined8 *)(param_1 + 0x2f0);
    local_30 = *(undefined4 *)(param_1 + 0x2e8);
    *param_2 = 0;
    local_6ea = 1;
    local_6ec = 0;
    if (0 < *(int *)(param_1 + 0x238)) {
      do {
        iVar3 = FUN_143c429d0(local_748,iVar5,local_758);
        if ((iVar3 == 0) &&
           (plVar2 = *(longlong **)(*(longlong *)(local_740 + 0xd0) + 0x48),
           plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 8))(plVar2[1],local_758);
        }
        if ((iVar5 == 0) || (*param_2 < local_708)) {
          *param_2 = local_708;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x238));
    }
    (**(code **)(*(longlong *)(lVar1 + 0x18) + 8))(local_748);
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143c41c90 FUN_143c41c90 body=363 status=ok
// SIG undefined FUN_143c41c90(void)

void FUN_143c41c90(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  
  puVar8 = *(uint **)(param_1 + 0x2d8);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  if (puVar8 != (uint *)0x0) {
    uVar1 = *puVar8;
    uVar6 = (ulonglong)uVar1;
    uVar2 = puVar8[1];
    uVar7 = (ulonglong)uVar2;
    ft_mem_free(uVar3,*(undefined8 *)(puVar8 + 10));
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    if (1 < uVar1) {
      puVar4 = puVar8 + 0xc;
      for (uVar5 = (ulonglong)(uVar1 - 1); uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      }
    }
    ft_mem_free(uVar3,*(undefined8 *)(puVar8 + 0x6a));
    puVar8[0x6a] = 0;
    puVar8[0x6b] = 0;
    ft_mem_free(uVar3,*(undefined8 *)(puVar8 + 0x48));
    puVar8[0x48] = 0;
    puVar8[0x49] = 0;
    ft_mem_free(uVar3,*(undefined8 *)(puVar8 + 0x8e));
    puVar8[0x8e] = 0;
    puVar8[0x8f] = 0;
    if (uVar1 != 0) {
      puVar4 = puVar8 + 0x46;
      do {
        puVar4[0x22] = 0;
        puVar4[0x23] = 0;
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4[0x46] = 0;
        puVar4[0x47] = 0;
        puVar4 = puVar4 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    ft_mem_free(uVar3,*(undefined8 *)(puVar8 + 0x42));
    puVar8[0x42] = 0;
    puVar8[0x43] = 0;
    puVar8[0x44] = 0;
    puVar8[0x45] = 0;
    uVar6 = uVar7;
    puVar4 = puVar8;
    if (uVar2 != 0) {
      do {
        puVar4 = puVar4 + 2;
        ft_mem_free(uVar3,*(undefined8 *)puVar4);
        puVar4[0] = 0;
        puVar4[1] = 0;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (uVar2 != 0) {
      puVar8 = puVar8 + 0x2c;
      do {
        ft_mem_free(uVar3,*(undefined8 *)puVar8);
        puVar8[0] = 0;
        puVar8[1] = 0;
        *(undefined1 *)(puVar8 + -2) = 0;
        puVar8 = puVar8 + 6;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x2d8));
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  return;
}



// FUNCTION 143c41e00 FUN_143c41e00 body=1210 status=ok
// SIG undefined FUN_143c41e00(void)

uint FUN_143c41e00(longlong *param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  void *pvVar11;
  longlong lVar12;
  char *_Str1;
  char *pcVar13;
  byte *_Buf;
  short sVar14;
  int iVar15;
  uint local_res8 [2];
  uint local_res18 [4];
  
  lVar12 = param_1[0x12];
  lVar9 = param_1[4];
  local_res8[0] = 0;
  if (*(char *)((longlong)param_1 + 0xb4) != '\0') {
    uVar5 = IStreamingManager::GetNumWantingResourcesID(lVar12);
    *(undefined4 *)(param_1 + 0x16) = 0;
    while( true ) {
      iVar15 = 0;
      sVar4 = FUN_143c25070(lVar12,local_res18);
      sVar14 = 0;
      if (((local_res18[0] == 0) && (sVar14 = sVar4, (ushort)(sVar4 + 0x7fffU) < 2)) &&
         (iVar6 = FUN_143c24f40(lVar12,local_res18), local_res18[0] == 0)) {
        iVar15 = iVar6;
      }
      if (local_res18[0] != 0) {
        return local_res18[0];
      }
      if (sVar14 != -0x7ffe) break;
      *(int *)(param_1 + 0x16) = (int)param_1[0x16] + iVar15;
      uVar7 = FUN_143c25220(lVar12,iVar15);
      if (uVar7 != 0) {
        return uVar7;
      }
      local_res8[0] = 0;
    }
    if ((int)param_1[0x16] == 0) {
      return 3;
    }
    local_res8[0] = FUN_143c251d0(lVar12,uVar5);
    if (local_res8[0] == 0) {
      lVar9 = FUN_143c271e0(lVar9,(int)param_1[0x16],local_res8);
      param_1[0x15] = lVar9;
      if (local_res8[0] == 0) {
        iVar15 = 0;
        *(undefined4 *)(param_1 + 0x16) = 0;
        while( true ) {
          sVar4 = FUN_143c25070(lVar12,local_res18);
          iVar6 = iVar15;
          sVar14 = 0;
          if (((local_res18[0] == 0) && (sVar14 = sVar4, (ushort)(sVar4 + 0x7fffU) < 2)) &&
             (iVar8 = FUN_143c24f40(lVar12,local_res18), local_res18[0] == 0)) {
            iVar6 = iVar8;
          }
          if ((local_res18[0] != 0) || (sVar14 != -0x7ffe)) break;
          uVar7 = FUN_143c24ae0(lVar12,(ulonglong)*(uint *)(param_1 + 0x16) + param_1[0x15],iVar6);
          if (uVar7 != 0) {
            return uVar7;
          }
          *(int *)(param_1 + 0x16) = (int)param_1[0x16] + iVar6;
          local_res8[0] = 0;
        }
        local_res8[0] = 0;
LAB_143c42247:
        (**(code **)(param_2 + 0x20))(param_1[0x15],(int)param_1[0x16],0xd971);
        if (*(uint *)(param_1 + 0x16) < 4) {
          return 3;
        }
        *(undefined1 *)param_1[0x15] = 0x20;
        *(undefined1 *)(param_1[0x15] + 1) = 0x20;
        *(undefined1 *)(param_1[0x15] + 2) = 0x20;
        *(undefined1 *)(param_1[0x15] + 3) = 0x20;
        lVar12 = param_1[0x15];
        param_1[1] = lVar12;
        param_1[2] = (ulonglong)*(uint *)(param_1 + 0x16) + lVar12;
        *param_1 = lVar12;
        return local_res8[0];
      }
    }
    return local_res8[0];
  }
  _Str1 = (char *)param_1[0x13];
  pcVar13 = _Str1;
  do {
    while (((((*pcVar13 != 'e' || (_Str1 + *(uint *)(param_1 + 0x14) <= pcVar13 + 9)) ||
             (pcVar13[1] != 'e')) || ((pcVar13[2] != 'x' || (pcVar13[3] != 'e')))) ||
           (pcVar13[4] != 'c'))) {
      pcVar13 = pcVar13 + 1;
      if (_Str1 + *(uint *)(param_1 + 0x14) <= pcVar13) {
        return 3;
      }
    }
    pcVar13 = pcVar13 + 10;
    *param_1 = (longlong)_Str1;
    param_1[2] = (longlong)pcVar13;
    while (_Str1 < pcVar13) {
      if ((*_Str1 == 'e') && (iVar15 = _guard_xfg_dispatch_icall_nop(_Str1,"eexec",5), iVar15 == 0))
      {
        param_1[2] = (ulonglong)*(uint *)(param_1 + 0x14) + param_1[0x13];
        (*(code *)param_1[8])(param_1);
        _Buf = (byte *)*param_1;
        pbVar2 = (byte *)param_1[2];
        pvVar10 = _guard_xfg_dispatch_icall_nop(_Buf,10,(longlong)pbVar2 - (longlong)_Buf);
        if ((pvVar10 == (void *)0x0) ||
           (pvVar11 = _guard_xfg_dispatch_icall_nop(_Buf,0xd,(longlong)pbVar2 - (longlong)_Buf),
           pvVar11 < pvVar10)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        while( true ) {
          if (pbVar2 <= _Buf) {
            return 3;
          }
          bVar1 = *_Buf;
          if ((((bVar1 != 0x20) && (bVar1 != 9)) && ((!bVar3 || (bVar1 != 0xd)))) && (bVar1 != 10))
          break;
          _Buf = _Buf + 1;
        }
        if (pbVar2 <= _Buf) {
          return 3;
        }
        uVar7 = ((int)param_1[0x14] - (int)_Buf) + (int)param_1[0x13];
        if (*(char *)((longlong)param_1 + 0xb5) == '\0') {
          param_1[0x15] = param_1[0x13];
          param_1[0x13] = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
        }
        else {
          lVar12 = FUN_143c271e0(lVar9,uVar7 + 1,local_res8);
          param_1[0x15] = lVar12;
          if (local_res8[0] != 0) {
            return local_res8[0];
          }
        }
        *(uint *)(param_1 + 0x16) = uVar7;
        if (((((_Buf + 3 < pbVar2) &&
              (((bVar1 = *_Buf, bVar1 - 0x30 < 10 || (bVar1 - 0x61 < 6)) || (bVar1 - 0x41 < 6)))) &&
             (((bVar1 = _Buf[1], bVar1 - 0x30 < 10 || (bVar1 - 0x61 < 6)) || (bVar1 - 0x41 < 6))))
            && (((bVar1 = _Buf[2], bVar1 - 0x30 < 10 || (bVar1 - 0x61 < 6)) || (bVar1 - 0x41 < 6))))
           && (((bVar1 = _Buf[3], bVar1 - 0x30 < 10 || (bVar1 - 0x61 < 6)) || (bVar1 - 0x41 < 6))))
        {
          *param_1 = (longlong)_Buf;
          (**(code **)(*(longlong *)(param_2 + 8) + 0x30))
                    (param_1,param_1[0x15],uVar7,local_res18,0);
          *(uint *)(param_1 + 0x16) = local_res18[0];
          *(undefined1 *)((ulonglong)local_res18[0] + param_1[0x15]) = 0;
        }
        else {
          _guard_xfg_dispatch_icall_nop((void *)param_1[0x15],_Buf,(ulonglong)uVar7);
        }
        goto LAB_143c42247;
      }
      (*(code *)param_1[8])(param_1);
      if ((int)param_1[3] != 0) break;
      (*(code *)param_1[7])(param_1);
      _Str1 = (char *)*param_1;
    }
    _Str1 = (char *)param_1[0x13];
  } while( true );
}



// FUNCTION 143c422c0 FUN_143c422c0 body=530 status=ok
// SIG undefined FUN_143c422c0(void)

int FUN_143c422c0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  short sVar5;
  undefined4 uVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = (longlong)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 0;
  local_res8[0] = FUN_143c42d60(param_2,"%!PS-AdobeFont",0xe);
  if (((local_res8[0] == 0) ||
      (((char)local_res8[0] == '\x02' &&
       (local_res8[0] = FUN_143c42d60(param_2,"%!FontType",10), local_res8[0] == 0)))) &&
     (local_res8[0] = FUN_143c251d0(param_2,0), local_res8[0] == 0)) {
    sVar2 = FUN_143c25070(param_2,local_res10);
    sVar5 = 0;
    iVar1 = local_res10[0];
    uVar6 = 0;
    if ((local_res10[0] == 0) &&
       (sVar5 = sVar2, iVar1 = local_res10[0], (ushort)(sVar2 + 0x7fffU) < 2)) {
      uVar3 = FUN_143c24f40(param_2,local_res10);
      iVar1 = local_res10[0];
      uVar6 = 0;
      if (local_res10[0] == 0) {
        iVar1 = local_res10[0];
        uVar6 = uVar3;
      }
    }
    local_res8[0] = iVar1;
    if (local_res8[0] == 0) {
      if (sVar5 == -0x7fff) {
        *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
      }
      else {
        local_res8[0] = FUN_143c251d0(param_2);
        if (local_res8[0] != 0) goto LAB_143c42432;
        uVar6 = (undefined4)param_2[1];
      }
      if (param_2[4] == 0) {
        param_1[0x13] = (ulonglong)*(uint *)((longlong)param_2 + 0xc) + *param_2;
        *(undefined4 *)(param_1 + 0x14) = uVar6;
        *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
        local_res8[0] = FUN_143c25220(param_2);
        if (local_res8[0] == 0) {
LAB_143c424a4:
          lVar4 = param_1[0x13];
          param_1[1] = lVar4;
          param_1[2] = (ulonglong)*(uint *)(param_1 + 0x14) + lVar4;
          *param_1 = lVar4;
          return 0;
        }
      }
      else {
        lVar4 = FUN_143c271e0(param_3,uVar6,local_res8);
        param_1[0x13] = lVar4;
        if ((local_res8[0] == 0) &&
           (local_res8[0] = FUN_143c24ae0(param_2,lVar4,uVar6), local_res8[0] == 0)) {
          *(undefined4 *)(param_1 + 0x14) = uVar6;
          goto LAB_143c424a4;
        }
      }
    }
  }
LAB_143c42432:
  if (*(char *)((longlong)param_1 + 0xb5) != '\0') {
    return local_res8[0];
  }
  ft_mem_free(param_3,param_1[0x13]);
  param_1[0x13] = 0;
  return local_res8[0];
}



// FUNCTION 143c424e0 FUN_143c424e0 body=1180 status=ok
// SIG undefined FUN_143c424e0(void)

int FUN_143c424e0(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  int local_res8 [2];
  uint local_res10;
  undefined1 local_2f8 [152];
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_220;
  int local_21c;
  longlong local_210;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 local_170;
  int local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_f8;
  undefined4 local_b0;
  undefined8 local_a8;
  int local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar6 = *(undefined8 *)(param_1 + 0x298);
  _guard_xfg_dispatch_icall_nop(local_2f8,0,0x2b8);
  uVar11 = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0xffffffffffffffff;
  uVar17 = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x184) = 7;
  *(undefined4 *)(param_1 + 0x188) = 1;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x1c8) = 0xf5c;
  *(undefined4 *)(param_1 + 0x180) = 0x27a000;
  local_1d8 = 0;
  local_240 = 0;
  local_220 = 0;
  local_158 = 0;
  local_1b8 = 0;
  local_90 = 0;
  local_f8 = 0;
  local_48 = 0;
  local_44 = 0;
  local_res8[0] =
       FUN_143c422c0(local_2f8,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98),uVar6
                    );
  if ((((local_res8[0] == 0) &&
       (local_res8[0] = FUN_143c42fe0(param_1,local_2f8,local_260,local_258), local_res8[0] == 0))
      && (local_res8[0] = FUN_143c41e00(local_2f8,uVar6), local_res8[0] == 0)) &&
     (local_res8[0] = FUN_143c42fe0(param_1,local_2f8,local_250,local_248), local_res8[0] == 0)) {
    *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xfe;
    lVar3 = *(longlong *)(param_1 + 0x2d8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x2f8) != 0)) &&
       (*(int *)(lVar3 + 0x2f8) != *(int *)(lVar3 + 4))) {
      *(undefined4 *)(lVar3 + 0x2f8) = 0;
    }
    piVar4 = *(int **)(param_1 + 0x2d8);
    if ((piVar4 != (int *)0x0) && ((*piVar4 == 0 || (piVar4[1] == 0)))) {
      FUN_143c41c90(param_1);
    }
    lVar3 = *(longlong *)(param_1 + 0x2d8);
    if ((lVar3 != 0) && (uVar10 = uVar11, *(uint *)(lVar3 + 4) != 0)) {
      do {
        if (*(char *)(lVar3 + (uVar10 + 7) * 0x18) == '\0') {
          FUN_143c41c90(param_1);
          break;
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(lVar3 + 4));
    }
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      *(undefined4 *)(param_1 + 0x2e8) = 0;
    }
    else if (*(int *)(param_1 + 0x2e8) != 0) {
      uVar6 = FUN_143c27410(*(undefined8 *)(param_1 + 0x98),4,0,*(int *)(param_1 + 0x2e8),0,
                            local_res8);
      *(undefined8 *)(param_1 + 0x2f0) = uVar6;
      if (local_res8[0] != 0) {
        *(undefined4 *)(param_1 + 0x2e8) = 0;
        goto LAB_143c4295f;
      }
    }
    *(undefined4 *)(param_1 + 0x238) = local_1d8;
    if (local_90 != 0) {
      *(undefined4 *)(param_1 + 0x220) = local_b0;
      *(undefined8 *)(param_1 + 0x208) = local_a8;
      *(undefined8 *)(param_1 + 0x228) = local_80;
      *(undefined8 *)(param_1 + 0x230) = local_78;
      local_90 = 0;
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x48) == 0) && (local_158 == 0)) {
      local_res8[0] = 3;
    }
    *(undefined8 *)(param_1 + 0x210) = local_170;
    *(undefined8 *)(param_1 + 0x248) = local_148;
    *(undefined8 *)(param_1 + 0x250) = local_140;
    *(undefined8 *)(param_1 + 0x218) = local_1d0;
    *(undefined8 *)(param_1 + 0x240) = local_1a8;
    local_158 = 0;
    local_1d0 = 0;
    local_1a8 = 0;
    if (*(int *)(param_1 + 0x1e0) == 1) {
      uVar9 = 0;
      local_res10 = 0;
      uVar10 = uVar11;
      uVar15 = uVar11;
      uVar16 = uVar11;
      uVar18 = uVar11;
      if (0 < local_21c) {
LAB_143c42820:
        iVar14 = 0;
        *(undefined2 *)(uVar16 + *(longlong *)(param_1 + 0x1f8)) = 0;
        *(char **)(uVar15 + *(longlong *)(param_1 + 0x200)) = ".notdef";
        pcVar5 = *(char **)(uVar15 + local_210);
        iVar13 = (int)uVar10;
        if ((pcVar5 != (char *)0x0) && (0 < *(int *)(param_1 + 0x238))) {
          do {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar14 * 8);
            pcVar7 = pcVar5;
            do {
              cVar1 = *pcVar7;
              cVar2 = pcVar7[lVar3 - (longlong)pcVar5];
              if (cVar1 != cVar2) break;
              pcVar7 = pcVar7 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) {
              lVar12 = 0;
              *(short *)(uVar16 + *(longlong *)(param_1 + 0x1f8)) = (short)iVar14;
              *(longlong *)(uVar15 + *(longlong *)(param_1 + 0x200)) = lVar3;
              goto LAB_143c428e0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)(param_1 + 0x238));
          uVar11 = (ulonglong)local_res10;
        }
        goto LAB_143c42916;
      }
LAB_143c42941:
      *(undefined4 *)(param_1 + 0x1ec) = uVar17;
      *(undefined4 *)(param_1 + 0x1e8) = local_240;
      *(undefined4 *)(param_1 + 0x1f0) = uVar9;
    }
  }
LAB_143c4295f:
  t1_done_loader(local_2f8);
  return local_res8[0];
  while (lVar12 != 8) {
LAB_143c428e0:
    pcVar5 = ".notdef" + lVar12;
    lVar12 = lVar12 + 1;
    if (*pcVar5 != *(char *)(lVar3 + -1 + lVar12)) {
      uVar11 = (ulonglong)local_res10;
      if (iVar13 < (int)uVar18) {
        uVar18 = uVar10;
      }
      if ((int)local_res10 <= iVar13) {
        local_res10 = iVar13 + 1;
        uVar11 = (ulonglong)local_res10;
      }
      goto LAB_143c42916;
    }
  }
  uVar11 = (ulonglong)local_res10;
LAB_143c42916:
  uVar9 = (undefined4)uVar11;
  uVar17 = (undefined4)uVar18;
  uVar10 = (ulonglong)(iVar13 + 1U);
  uVar15 = uVar15 + 8;
  uVar16 = uVar16 + 2;
  if (local_21c <= (int)(iVar13 + 1U)) goto LAB_143c42941;
  goto LAB_143c42820;
}



// FUNCTION 143c42980 FUN_143c42980 body=78 status=ok
// SIG undefined FUN_143c42980(void)

ulonglong FUN_143c42980(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 local_18 [16];
  
  uVar2 = FUN_143c429d0(param_1,param_2,local_18);
  if (((int)uVar2 == 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x48),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1[1],local_18);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143c429d0 FUN_143c429d0 body=298 status=ok
// SIG undefined FUN_143c429d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c429d0(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  int local_38 [3];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar7 = (ulonglong)param_2;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = *(undefined4 *)(lVar1 + 0x260);
  uVar4 = *(undefined4 *)(lVar1 + 0x264);
  uVar5 = *(undefined4 *)(lVar1 + 0x268);
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xd0) + 0x48);
  *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(lVar1 + 0x25c);
  *(undefined4 *)(param_1 + 0x68c) = uVar3;
  *(undefined4 *)(param_1 + 0x690) = uVar4;
  *(undefined4 *)(param_1 + 0x694) = uVar5;
  *(undefined8 *)(param_1 + 0x698) = *(undefined8 *)(lVar1 + 0x26c);
  if (plVar2 == (longlong *)0x0) {
    *param_3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x248) + uVar7 * 8);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(*(longlong *)(lVar1 + 0x250) + uVar7 * 4);
  }
  else {
    iVar6 = (**(code **)*plVar2)(plVar2[1],uVar7,param_3);
    if (iVar6 != 0) {
      return;
    }
  }
  iVar6 = (**(code **)(param_1 + 0x708))(param_1,*param_3,*(undefined4 *)(param_3 + 1));
  if (((iVar6 == 0) && (plVar2 != (longlong *)0x0)) && (*(longlong *)(*plVar2 + 0x10) != 0)) {
    local_38[0] = FT_RoundFix(*(undefined4 *)(param_1 + 0x38));
    local_38[0] = local_38[0] >> 0x10;
    local_38[1] = 0;
    local_38[2] = FT_RoundFix(*(undefined4 *)(param_1 + 0x40));
    local_38[2] = local_38[2] >> 0x10;
    local_2c = FT_RoundFix(*(undefined4 *)(param_1 + 0x44));
    local_2c = local_2c >> 0x10;
    (**(code **)(*plVar2 + 0x10))(plVar2[1],uVar7,0,local_38);
    *(int *)(param_1 + 0x38) = local_38[0] << 0x10;
    *(int *)(param_1 + 0x40) = local_38[2] << 0x10;
    *(int *)(param_1 + 0x44) = local_2c << 0x10;
  }
  return;
}



// FUNCTION 143c42b00 FUN_143c42b00 body=593 status=ok
// SIG undefined FUN_143c42b00(void)

int FUN_143c42b00(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  int local_res10 [2];
  
  puVar12 = *(ushort **)(param_2 + 0x40);
  lVar8 = 0;
  puVar10 = *(ushort **)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  local_res10[0] = 0;
  if ((ushort *)((longlong)puVar10 + 0x65U) <= puVar12) {
    puVar9 = (ushort *)
             ((longlong)puVar10 + 99 + (longlong)(int)(*(ushort *)((longlong)puVar10 + 99) + 0x12));
    if (((puVar12 < puVar9 + 9) || (*puVar9 < 0x12)) ||
       (puVar9 = (ushort *)((ulonglong)*(uint *)(puVar9 + 7) + (longlong)puVar10), puVar9 == puVar10
       )) {
      return 0;
    }
    puVar10 = puVar9 + 1;
    if (puVar10 <= puVar12) {
      uVar4 = *puVar9;
      uVar11 = (uint)uVar4;
      *(uint *)(param_3 + 0x38) = uVar11;
      if ((ushort *)((ulonglong)(uVar11 * 4) + (longlong)puVar10) <= puVar12) {
        if (uVar4 == 0) {
          return 0;
        }
        puVar6 = (undefined4 *)FUN_143c27410(uVar2,0x10,0,uVar11,0,local_res10);
        *(undefined4 **)(param_3 + 0x30) = puVar6;
        if (local_res10[0] == 0) {
          lVar3 = *(longlong *)(param_1 + 0x88);
          puVar12 = (ushort *)((ulonglong)(uint)(*(int *)(param_3 + 0x38) << 2) + (longlong)puVar10)
          ;
          if (0 < *(int *)(param_1 + 0x38)) {
            plVar7 = *(longlong **)(param_1 + 0x40);
            do {
              if (*(short *)(*plVar7 + 0xc) == 7) {
                local_res10[0] = FUN_143c244d0(param_1);
                if (local_res10[0] != 0) goto LAB_143c42d17;
                break;
              }
              lVar8 = lVar8 + 1;
              plVar7 = plVar7 + 1;
            } while (lVar8 < *(int *)(param_1 + 0x38));
          }
          for (; puVar10 < puVar12; puVar10 = puVar10 + 2) {
            uVar5 = FT_Get_Char_Index(param_1,(char)*puVar10);
            *puVar6 = uVar5;
            uVar5 = FT_Get_Char_Index(param_1,*(undefined1 *)((longlong)puVar10 + 1));
            puVar6[1] = uVar5;
            bVar1 = *(byte *)((longlong)puVar10 + 3);
            uVar4 = puVar10[1];
            puVar6[3] = 0;
            puVar6[2] = (int)(short)((ushort)bVar1 << 8) | (uint)(byte)uVar4;
            puVar6 = puVar6 + 4;
          }
          if (lVar3 != 0) {
            local_res10[0] = FUN_143c244d0(param_1,lVar3);
          }
          if ((local_res10[0] == 0) &&
             (_guard_xfg_dispatch_icall_nop
                        (*(void **)(param_3 + 0x30),(ulonglong)*(uint *)(param_3 + 0x38),0x10,
                         (_PtFuncCompare *)&LAB_143c42e40), local_res10[0] == 0)) {
            return 0;
          }
        }
        goto LAB_143c42d17;
      }
    }
  }
  local_res10[0] = 2;
LAB_143c42d17:
  ft_mem_free(uVar2,*(undefined8 *)(param_3 + 0x30));
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined4 *)(param_3 + 0x38) = 0;
  return local_res10[0];
}



// FUNCTION 143c42d60 FUN_143c42d60 body=214 status=ok
// SIG undefined FUN_143c42d60(void)

ulonglong FUN_143c42d60(longlong param_1,void *param_2,ulonglong param_3)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  short sVar5;
  uint local_res20 [2];
  
  uVar3 = FUN_143c251d0(param_1,0);
  if ((int)uVar3 == 0) {
    sVar1 = FUN_143c25070(param_1,local_res20);
    uVar3 = (ulonglong)local_res20[0];
    sVar5 = 0;
    if ((local_res20[0] == 0) && (sVar5 = sVar1, (ushort)(sVar1 + 0x7fffU) < 2)) {
      FUN_143c24f40(param_1,local_res20);
      uVar3 = (ulonglong)local_res20[0];
    }
    if (((int)uVar3 == 0) &&
       (((sVar5 == -0x7fff || (uVar3 = FUN_143c251d0(param_1,0), (int)uVar3 == 0)) &&
        (uVar3 = FUN_143c24650(param_1,param_3 & 0xffffffff), (int)uVar3 == 0)))) {
      iVar2 = _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x38),param_2,param_3);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = 2;
      }
      FT_Stream_ExitFrame(param_1);
      uVar3 = (ulonglong)uVar4;
    }
  }
  return uVar3;
}



// FUNCTION 143c42e60 FUN_143c42e60 body=189 status=ok
// SIG undefined FUN_143c42e60(void)

int FUN_143c42e60(byte *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (param_2 <= *piVar2) {
    return **(int **)(param_1 + 8) << 0x10;
  }
  bVar1 = *param_1;
  iVar7 = 1;
  if (1 < bVar1) {
    lVar6 = 1;
    piVar4 = piVar2;
    do {
      piVar4 = piVar4 + 1;
      if (param_2 <= *piVar4) {
        lVar5 = (longlong)iVar7;
        lVar6 = *(longlong *)(param_1 + 8);
        iVar7 = *(int *)(lVar6 + -4 + lVar5 * 4);
        iVar3 = FUN_143c20070(param_2 - piVar2[lVar5 + -1],piVar2[lVar5] - piVar2[lVar5 + -1]);
        return iVar3 * (*(int *)(lVar6 + lVar5 * 4) - iVar7) + iVar7 * 0x10000;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)(uint)bVar1);
  }
  return *(int *)(*(longlong *)(param_1 + 8) + -4 + (ulonglong)bVar1 * 4) << 0x10;
}



// FUNCTION 143c42f20 mm_weights_unmap body=186 status=ok
// SIG undefined mm_weights_unmap(void)

void mm_weights_unmap(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_3 == 1) {
    *param_2 = iVar1;
    return;
  }
  if (param_3 == 2) {
    *param_2 = iVar1 + *(int *)(param_1 + 0xc);
    param_2[1] = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
    return;
  }
  if (param_3 == 3) {
    *param_2 = iVar1 + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x1c)
    ;
    param_2[1] = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x1c) +
                 *(int *)(param_1 + 0x18);
    param_2[2] = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) +
                 *(int *)(param_1 + 0x18);
    return;
  }
  *param_2 = iVar1 + *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc) +
             *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2c) +
             *(int *)(param_1 + 0x24);
  param_2[1] = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x38) +
               *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x1c) +
               *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x18);
  param_2[2] = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34) +
               *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x3c) +
               *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18);
  param_2[3] = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x38) +
               *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x3c) +
               *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24);
  return;
}



// FUNCTION 143c42fe0 FUN_143c42fe0 body=962 status=ok
// SIG undefined FUN_143c42fe0(void)

/* WARNING: Removing unreachable block (ram,0x000143c43340) */

ulonglong FUN_143c42fe0(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  char *_Str1;
  byte *pbVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  
  pbVar8 = (byte *)((ulonglong)param_4 + param_3);
  *param_2 = param_3;
  pbVar9 = (byte *)0x0;
  param_2[2] = (longlong)pbVar8;
  *(undefined4 *)(param_2 + 3) = 0;
  bVar3 = false;
  (*(code *)param_2[7])(param_2);
  pbVar7 = (byte *)*param_2;
  while (((pbVar7 < pbVar8 &&
          ((pbVar7 = (byte *)*param_2, *pbVar7 != 0x65 ||
           (((pbVar7 + 6 != pbVar8 &&
             ((pbVar8 <= pbVar7 + 6 ||
              (((bVar1 = pbVar7[5], 0x3c < bVar1 ||
                ((0x1000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) &&
               ((0x3f < (byte)(bVar1 - 0x3e) ||
                ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) == 0))))))))
            || (iVar4 = _guard_xfg_dispatch_icall_nop((char *)pbVar7,"eexec",5), iVar4 != 0)))))) &&
         ((*pbVar7 != 99 ||
          (((pbVar7 + 10 != pbVar8 &&
            ((pbVar8 <= pbVar7 + 10 ||
             (((bVar1 = pbVar7[9], 0x3c < bVar1 ||
               ((0x1000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) &&
              ((0x3f < (byte)(bVar1 - 0x3e) ||
               ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) == 0))))))))
           || (iVar4 = _guard_xfg_dispatch_icall_nop((char *)pbVar7,"closefile",9), iVar4 != 0))))))
        ) {
    if (((*pbVar7 == 0x46) &&
        ((pbVar7 + 0xe == pbVar8 ||
         ((pbVar7 + 0xe < pbVar8 &&
          (((bVar1 = pbVar7[0xd], bVar1 < 0x3d &&
            ((0x1000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
           (((byte)(bVar1 - 0x3e) < 0x40 &&
            ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) != 0)))))))))) &&
       (iVar4 = _guard_xfg_dispatch_icall_nop((char *)pbVar7,"FontDirectory",0xd), iVar4 == 0)) {
      if ((*(uint *)((longlong)param_2 + 0x2b4) & 1) != 0) {
        *(uint *)((longlong)param_2 + 0x2b4) = *(uint *)((longlong)param_2 + 0x2b4) | 2;
      }
      *param_2 = *param_2 + 0xd;
    }
    else {
      bVar1 = *pbVar7;
      if (bVar1 - 0x30 < 10) {
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) break;
        bVar3 = true;
        pbVar9 = pbVar7;
      }
      else {
        if (((((bVar1 == 0x52) && (pbVar7 + 6 < pbVar8)) && (pbVar7[1] == 0x44)) && (bVar3)) ||
           (((bVar1 == 0x2d && (pbVar7 + 6 < pbVar8)) && ((pbVar7[1] == 0x7c && (bVar3)))))) {
          pbVar7 = (byte *)param_2[2];
          *param_2 = (longlong)pbVar9;
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x48);
          (*(code *)param_2[7])(param_2);
          if ((pbVar7 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_143c4338f:
            if (lVar2 == 0) {
              *(undefined4 *)(param_2 + 3) = 3;
            }
            return 3;
          }
          iVar4 = (*(code *)param_2[9])(param_2);
          (*(code *)param_2[8])(param_2);
          if ((iVar4 < 0) || ((longlong)(pbVar7 + (-1 - *param_2)) <= (longlong)iVar4))
          goto LAB_143c4338f;
          *param_2 = (longlong)(iVar4 + 1) + *param_2;
          if ((int)param_2[3] != 0) {
            return 3;
          }
        }
        else if ((bVar1 == 0x2f) && (pbVar7 + 2 < pbVar8)) {
          pbVar7 = pbVar7 + 1;
          *param_2 = (longlong)pbVar7;
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) break;
          uVar6 = (int)*param_2 - (int)pbVar7;
          if ((uVar6 - 1 < 0x15) && ((byte *)*param_2 < pbVar8)) {
            _Str1 = "version";
            ppuVar10 = &PTR_s_version_145d22e60;
            bVar1 = *pbVar7;
            do {
              if (bVar1 == *_Str1) {
                uVar5 = 0xffffffffffffffff;
                do {
                  uVar5 = uVar5 + 1;
                } while (_Str1[uVar5] != 0);
                if ((uVar6 == uVar5) &&
                   (iVar4 = _guard_xfg_dispatch_icall_nop(pbVar7,_Str1,(ulonglong)uVar6), iVar4 == 0
                   )) {
                  if (((*(uint *)(ppuVar10 + 5) &
                       ((*(uint *)((longlong)param_2 + 0x2b4) & 1) != 0) + 1) != 0) &&
                     (((*(uint *)((longlong)param_2 + 0x2b4) & 2) == 0 ||
                      (iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"CharStrings"), iVar4 == 0)))) {
                    uVar5 = FUN_143c437e0(param_1,param_2,ppuVar10);
                    *(int *)(param_2 + 3) = (int)uVar5;
                    if ((int)uVar5 != 0) {
                      if ((char)uVar5 != -0x5e) {
                        return uVar5;
                      }
                      *(undefined4 *)(param_2 + 3) = 0;
                    }
                  }
                  break;
                }
              }
              _Str1 = ppuVar10[6];
              ppuVar10 = ppuVar10 + 6;
            } while ((byte *)_Str1 != (byte *)0x0);
          }
        }
        else {
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) break;
        }
        bVar3 = false;
      }
    }
    (*(code *)param_2[7])(param_2);
    pbVar7 = (byte *)*param_2;
  }
  return (ulonglong)*(uint *)(param_2 + 3);
}



// FUNCTION 143c433b0 FUN_143c433b0 body=663 status=ok
// SIG undefined FUN_143c433b0(void)

int FUN_143c433b0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  int local_res8 [2];
  
  puVar2 = *(uint **)(param_1 + 0x2d8);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  local_res8[0] = 0;
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)FUN_143c271e0(uVar5,0x300,local_res8);
    if (local_res8[0] != 0) {
      return local_res8[0];
    }
    puVar2[0xbe] = 0;
    *(uint **)(param_1 + 0x2d8) = puVar2;
  }
  if (param_2 == 0) {
LAB_143c43597:
    if (param_3 != 0) {
      if ((puVar2[1] != 0) && (puVar2[1] != param_3)) goto LAB_143c435a6;
      puVar2[1] = param_3;
    }
    uVar1 = *puVar2;
    uVar7 = puVar2[1];
    if (((uVar1 != 0) && (uVar7 != 0)) && (*(longlong *)(puVar2 + 10) == 0)) {
      uVar5 = FUN_143c27410(uVar5,4,0,uVar1 * uVar7,0,local_res8);
      *(undefined8 *)(puVar2 + 10) = uVar5;
      if ((local_res8[0] == 0) && (1 < uVar1)) {
        uVar9 = (ulonglong)(uVar1 - 1);
        puVar8 = puVar2 + 0xc;
        uVar1 = uVar7;
        do {
          uVar6 = (ulonglong)uVar1;
          uVar1 = uVar1 + uVar7;
          *(ulonglong *)puVar8 = *(longlong *)(puVar2 + 10) + uVar6 * 4;
          uVar9 = uVar9 - 1;
          puVar8 = puVar8 + 2;
        } while (uVar9 != 0);
      }
    }
  }
  else {
    if (*puVar2 == 0) {
      uVar3 = FUN_143c27410(uVar5,0x38,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x48) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      uVar3 = FUN_143c27410(uVar5,0xc4,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x6a) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      uVar3 = FUN_143c27410(uVar5,0x10,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x8e) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      lVar4 = FUN_143c27410(uVar5,4,0,param_2 * 2,0,local_res8);
      *(longlong *)(puVar2 + 0x42) = lVar4;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      *(ulonglong *)(puVar2 + 0x44) = lVar4 + (ulonglong)param_2 * 4;
      *(longlong *)(puVar2 + 0x46) = param_1 + 0xd8;
      *(longlong *)(puVar2 + 0x68) = param_1 + 0x114;
      *(longlong *)(puVar2 + 0x8c) = param_1 + 0x274;
      uVar9 = 2;
      if (1 < param_2) {
        do {
          uVar1 = (int)uVar9 - 1;
          uVar7 = (int)uVar9 + 1;
          *(longlong *)(puVar2 + uVar9 * 2 + 0x46) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x46) + 0x38;
          *(longlong *)(puVar2 + uVar9 * 2 + 0x68) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x68) + 0xc4;
          *(longlong *)(puVar2 + uVar9 * 2 + 0x8c) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x8c) + 0x10;
          uVar9 = (ulonglong)uVar7;
        } while (uVar7 <= param_2);
      }
      *puVar2 = param_2;
      goto LAB_143c43597;
    }
    if (*puVar2 == param_2) goto LAB_143c43597;
LAB_143c435a6:
    local_res8[0] = 3;
  }
  return local_res8[0];
}



// FUNCTION 143c43650 t1_done_loader body=203 status=ok
// SIG undefined t1_done_loader(void)

void t1_done_loader(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x118) != (code *)0x0) {
    (**(code **)(param_1 + 0x118))(param_1 + 0xc0);
  }
  if (*(code **)(param_1 + 0x1e0) != (code *)0x0) {
    (**(code **)(param_1 + 0x1e0))(param_1 + 0x188);
  }
  if (*(code **)(param_1 + 0x180) != (code *)0x0) {
    (**(code **)(param_1 + 0x180))(param_1 + 0x128);
  }
  if (*(code **)(param_1 + 0x240) != (code *)0x0) {
    (**(code **)(param_1 + 0x240))(param_1 + 0x1e8);
  }
  if (*(code **)(param_1 + 0x2a8) != (code *)0x0) {
    (**(code **)(param_1 + 0x2a8))(param_1 + 0x250);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c43718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1);
  return;
}



// FUNCTION 143c43720 FUN_143c43720 body=188 status=ok
// SIG undefined FUN_143c43720(void)

int FUN_143c43720(char *param_1,ulonglong param_2,longlong param_3)

{
  char *_Str1;
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  if (0xffff < param_2) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_3 + 0x160)) {
    lVar4 = 0;
    do {
      _Str1 = *(char **)(lVar4 + *(longlong *)(param_3 + 0x168));
      if ((_Str1 != (char *)0x0) && (*_Str1 == *param_1)) {
        uVar2 = 0xffffffffffffffff;
        do {
          uVar2 = uVar2 + 1;
        } while (_Str1[uVar2] != '\0');
        if ((uVar2 == param_2) &&
           (iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,param_1,param_2), iVar1 == 0)) {
          return iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_3 + 0x160));
  }
  return 0;
}



// FUNCTION 143c437e0 FUN_143c437e0 body=370 status=ok
// SIG undefined FUN_143c437e0(void)

ulonglong FUN_143c437e0(int *param_1,int *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  int *local_res8;
  
  local_res8 = *(int **)(param_1 + 0xb6);
  iVar3 = 0;
  piVar5 = local_res8;
  if ((local_res8 != (int *)0x0) && (*local_res8 == 0)) {
    piVar5 = (int *)0x0;
  }
  if (*(int *)(param_3 + 0xc) == 0xb) {
    (**(code **)(param_3 + 0x10))(param_1,param_2);
    return (ulonglong)(uint)param_2[6];
  }
  iVar2 = 0;
  switch(*(undefined4 *)(param_3 + 8)) {
  case 2:
    local_res8 = param_1 + 0x44;
    goto LAB_143c438ed;
  case 3:
    local_res8 = param_1 + 0x36;
    ppiVar4 = &local_res8;
    if (piVar5 != (int *)0x0) {
      iVar3 = *piVar5;
      ppiVar4 = (int **)(piVar5 + 0x46);
    }
    goto LAB_143c438f9;
  case 4:
    local_res8 = param_1 + 0x45;
    ppiVar4 = &local_res8;
    iVar3 = iVar2;
    if (piVar5 != (int *)0x0) {
      iVar3 = *piVar5;
      ppiVar4 = (int **)(piVar5 + 0x68);
    }
    goto LAB_143c438f9;
  case 5:
    local_res8 = param_1 + 0x9d;
    ppiVar4 = &local_res8;
    iVar3 = iVar2;
    if (piVar5 != (int *)0x0) {
      ppiVar4 = (int **)(piVar5 + 0x8c);
      iVar3 = *piVar5;
    }
    goto LAB_143c438f9;
  case 6:
    local_res8 = param_2;
    break;
  case 7:
    local_res8 = param_1;
    break;
  case 8:
    break;
  default:
    local_res8 = param_1 + 0x36;
LAB_143c438ed:
  }
  ppiVar4 = &local_res8;
  iVar3 = iVar2;
LAB_143c438f9:
  if (*ppiVar4 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(param_3 + 0xc) - 9U < 2) {
    uVar1 = (**(code **)(param_2 + 0x22))(param_2,param_3,ppiVar4,iVar3,0);
    return uVar1;
  }
  uVar1 = (**(code **)(param_2 + 0x20))();
  return uVar1;
}



// FUNCTION 143c439b0 FUN_143c439b0 body=430 status=ok
// SIG undefined FUN_143c439b0(void)

longlong * FUN_143c439b0(longlong param_1,int param_2,uint param_3,uint param_4,uint *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ushort local_res8 [4];
  undefined1 local_38 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  plVar5 = (longlong *)0x0;
  if ((*(byte *)(param_1 + 8) & 8) == 0) {
LAB_143c43a9e:
    plVar2 = plVar5;
    plVar6 = plVar5;
    if (param_3 != 0) {
      do {
        plVar2 = *(longlong **)(param_1 + 0x80);
        if (lVar1 == 0) {
          return (longlong *)&DAT_00000025;
        }
        uVar4 = param_4;
        if (plVar2 == (longlong *)0x0) {
          uVar4 = param_4 | 0x103;
        }
        plVar3 = plVar5;
        if ((((uVar4 & 1) == 0) && (plVar3 = plVar2, plVar2 != (longlong *)0x0)) &&
           (*plVar2 != *(longlong *)(lVar1 + 8))) {
          return (longlong *)0x23;
        }
        plVar2 = (longlong *)FUN_143c4d350(lVar1,plVar3,(int)plVar6 + param_2);
        if ((int)plVar2 != 0) {
          return plVar2;
        }
        if ((param_4 & 0x10) == 0) {
          uVar4 = *(uint *)(lVar1 + 0x50);
        }
        else {
          uVar4 = *(uint *)(lVar1 + 0x54);
        }
        *param_5 = uVar4;
        uVar4 = (int)plVar6 + 1;
        param_5 = param_5 + 1;
        plVar6 = (longlong *)(ulonglong)uVar4;
      } while (uVar4 < param_3);
    }
  }
  else {
    if ((param_4 & 0x10) == 0) {
      if (*(short *)(param_1 + 0x15a) == 0) goto LAB_143c43a9e;
      if (param_3 != 0) {
        do {
          (**(code **)(*(longlong *)(param_1 + 0x2c0) + 0xe0))
                    (param_1,0,(int)plVar5 + param_2,local_38,local_res8);
          uVar4 = (int)plVar5 + 1;
          plVar5 = (longlong *)(ulonglong)uVar4;
          *param_5 = (uint)local_res8[0];
          param_5 = param_5 + 1;
        } while (uVar4 < param_3);
      }
    }
    else {
      if (*(char *)(param_1 + 400) == '\0') goto LAB_143c43a9e;
      if (param_3 != 0) {
        do {
          (**(code **)(*(longlong *)(param_1 + 0x2c0) + 0xe0))
                    (param_1,1,(int)plVar5 + param_2,local_38,local_res8);
          uVar4 = (int)plVar5 + 1;
          plVar5 = (longlong *)(ulonglong)uVar4;
          *param_5 = (uint)local_res8[0];
          param_5 = param_5 + 1;
        } while (uVar4 < param_3);
        return (longlong *)0x0;
      }
    }
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 143c43bb0 FUN_143c43bb0 body=376 status=ok
// SIG undefined FUN_143c43bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c43bb0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_128 [32];
  uint local_108 [4];
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_108[0] = 0;
  puVar3 = *(undefined8 **)(*(longlong *)(*param_1 + 0x380) + 0x1040);
  lVar2 = FT_Get_Module(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((((lVar2 == 0) || (puVar3 == (undefined8 *)0x0)) ||
      (pcVar1 = (code *)*puVar3, pcVar1 == (code *)0x0)) ||
     (puVar3 = (undefined8 *)(*pcVar1)(lVar2), puVar3 == (undefined8 *)0x0)) {
    uVar5 = (ulonglong)local_108[0];
LAB_143c43cf4:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    lVar2 = *(longlong *)(*param_1 + 0x380);
    lVar4 = FUN_143c271e0(*(undefined8 *)(*param_1 + 0x98),0x808,local_108);
    uVar5 = (ulonglong)local_108[0];
    if (local_108[0] == 0) {
      FUN_143c4c890(lVar2 + 0x5c8,local_f8);
      uVar5 = (*(code *)*puVar3)(*(undefined8 *)(*param_1 + 0x98),local_f8,lVar4);
      if ((int)uVar5 == 0) {
        uVar6 = *(uint *)(lVar2 + 0x818);
        uVar7 = (ulonglong)uVar6;
        do {
          if (uVar6 == 0) {
            param_1[7] = lVar4;
            goto LAB_143c43cf4;
          }
          local_108[0] = 0;
          uVar6 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar6;
          FUN_143c4c890(*(undefined8 *)(lVar2 + 0x820 + uVar7 * 8),local_f8);
          uVar5 = (*(code *)*puVar3)(*(undefined8 *)(*param_1 + 0x98),local_f8,lVar4 + 8 + uVar7 * 8
                                    );
        } while ((int)uVar5 == 0);
      }
    }
  }
  return uVar5;
}



// FUNCTION 143c43d70 FUN_143c43d70 body=151 status=ok
// SIG undefined FUN_143c43d70(void)

void FUN_143c43d70(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  puVar1 = (undefined8 *)param_1[7];
  lVar2 = *(longlong *)(*param_1 + 0x380);
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x1040);
    lVar5 = FT_Get_Module(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
    if ((((lVar5 != 0) && (puVar3 != (undefined8 *)0x0)) &&
        (pcVar4 = (code *)*puVar3, pcVar4 != (code *)0x0)) && (lVar5 = (*pcVar4)(lVar5), lVar5 != 0)
       ) {
      (**(code **)(lVar5 + 0x10))(*puVar1);
      uVar6 = *(uint *)(lVar2 + 0x818);
      uVar7 = (ulonglong)uVar6;
      while (uVar6 != 0) {
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
        (**(code **)(lVar5 + 0x10))(puVar1[uVar7 + 1]);
      }
    }
  }
  return;
}



// FUNCTION 143c43e10 FUN_143c43e10 body=408 status=ok
// SIG undefined FUN_143c43e10(void)

undefined8 FUN_143c43e10(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *local_res8;
  
  lVar8 = *param_1;
  if ((*(byte *)(lVar8 + 8) & 2) != 0) {
    iVar5 = (**(code **)(*(longlong *)(lVar8 + 0x2c0) + 0xd0))(lVar8,param_2,&local_res8);
    if (iVar5 == 0) {
      uVar9 = FUN_143c44040(param_1,(ulonglong)local_res8 & 0xffffffff);
      return uVar9;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  FUN_143c23e60(*param_1,param_2);
  puVar2 = *(undefined8 **)(*(longlong *)(*param_1 + 0x380) + 0x1040);
  lVar8 = FT_Get_Module(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((((lVar8 != 0) && (puVar2 != (undefined8 *)0x0)) &&
      (pcVar3 = (code *)*puVar2, pcVar3 != (code *)0x0)) && (lVar8 = (*pcVar3)(lVar8), lVar8 != 0))
  {
    local_res8 = (undefined8 *)param_1[7];
    lVar4 = *(longlong *)(*param_1 + 0x380);
    iVar5 = *(int *)(lVar4 + 0x60c);
    (**(code **)(lVar8 + 8))
              (*local_res8,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
    uVar10 = *(uint *)(lVar4 + 0x818);
    uVar11 = (ulonglong)uVar10;
    while (uVar10 != 0) {
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar10;
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x820 + uVar11 * 8) + 0x44);
      if (iVar5 == iVar1) {
        uVar6 = *(undefined4 *)((longlong)param_1 + 0x1c);
        uVar7 = (undefined4)param_1[4];
      }
      else {
        uVar6 = FUN_143c21f00(*(undefined4 *)((longlong)param_1 + 0x1c),iVar5,iVar1);
        uVar7 = FUN_143c21f00((int)param_1[4],iVar5,iVar1);
      }
      (**(code **)(lVar8 + 8))(local_res8[uVar11 + 1],uVar6,uVar7,0,0);
    }
  }
  return 0;
}



// FUNCTION 143c43fb0 cff_get_glyph_name body=143 status=ok
// SIG undefined cff_get_glyph_name(void)

undefined4
cff_get_glyph_name(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x380);
  if (*(longlong *)(lVar2 + 0x1048) == 0) {
    return 0xb;
  }
  uVar1 = *(ushort *)(*(longlong *)(lVar2 + 0x4c8) + (param_2 & 0xffffffff) * 2);
  if (uVar1 != 0xffff) {
    if (uVar1 < 0x187) {
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x1048) + 0x28))();
    }
    else {
      if (*(uint *)(lVar2 + 0x5b0) <= uVar1 - 0x187) {
        return 0;
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x5b8) + (ulonglong)(uVar1 - 0x187) * 8);
    }
    if (lVar2 != 0) {
      FUN_143c274a0(param_3,lVar2,param_4);
    }
  }
  return 0;
}



// FUNCTION 143c44040 FUN_143c44040 body=366 status=ok
// SIG undefined FUN_143c44040(void)

undefined8 FUN_143c44040(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_143c241f0(*param_1);
  puVar3 = *(undefined8 **)(*(longlong *)(*param_1 + 0x380) + 0x1040);
  lVar8 = FT_Get_Module(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if (((lVar8 != 0) && (puVar3 != (undefined8 *)0x0)) &&
     (pcVar4 = (code *)*puVar3, pcVar4 != (code *)0x0)) {
    lVar8 = (*pcVar4)(lVar8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)param_1[7];
      lVar5 = *(longlong *)(*param_1 + 0x380);
      iVar1 = *(int *)(lVar5 + 0x60c);
      (**(code **)(lVar8 + 8))
                (*puVar3,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
      uVar9 = *(uint *)(lVar5 + 0x818);
      uVar10 = (ulonglong)uVar9;
      while (uVar9 != 0) {
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
        iVar2 = *(int *)(*(longlong *)(lVar5 + 0x820 + uVar10 * 8) + 0x44);
        if (iVar1 == iVar2) {
          uVar6 = *(undefined4 *)((longlong)param_1 + 0x1c);
          uVar7 = (undefined4)param_1[4];
        }
        else {
          uVar6 = FUN_143c21f00(*(undefined4 *)((longlong)param_1 + 0x1c),iVar1,iVar2);
          uVar7 = FUN_143c21f00((int)param_1[4],iVar1,iVar2);
        }
        (**(code **)(lVar8 + 8))(puVar3[uVar10 + 1],uVar6,uVar7,0,0);
      }
      return 0;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143c441b0 cff_slot_init body=94 status=ok
// SIG undefined cff_slot_init(void)

undefined8 cff_slot_init(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x380) + 0x1040);
  if (lVar1 != 0) {
    lVar2 = FT_Get_Module(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                          "pshinter");
    if (lVar2 != 0) {
      uVar3 = (**(code **)(lVar1 + 0x10))(lVar2);
      *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x28) = uVar3;
    }
  }
  return 0;
}



// FUNCTION 143c44210 FUN_143c44210 body=2156 status=ok
// SIG undefined FUN_143c44210(void)

ulonglong FUN_143c44210(undefined8 param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                       undefined8 param_5)

{
  char cVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  undefined4 *puVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool local_res10;
  uint local_54;
  undefined8 local_50;
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_res10 = true;
  bVar25 = false;
  uVar16 = *(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8);
  lVar12 = FT_Get_Module_Interface(uVar16,&DAT_145d22d6c);
  if (lVar12 == 0) {
    return 0xb;
  }
  lVar13 = ft_module_get_service(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps");
  local_50 = FT_Get_Module_Interface(uVar16,"pshinter");
  local_54 = FUN_143c251d0(param_1,0);
  if (local_54 != 0) {
    return (ulonglong)local_54;
  }
  local_54 = (**(code **)(lVar12 + 8))(param_1,param_2,param_3,param_4,param_5);
  if (local_54 == 0) {
    if (param_2[0x3c] != 0x4f54544f) {
      return 2;
    }
    if (param_3 < 0) {
      return 0;
    }
    bVar25 = true;
    local_54 = (**(code **)(param_2 + 0xa4))(param_2,0x68656164,param_1,0);
    local_res10 = local_54 != 0;
    if (local_res10) {
      local_54 = (**(code **)(lVar12 + 0x40))(param_2,param_1);
    }
    else {
      local_54 = (**(code **)(lVar12 + 0x10))(param_1,param_2,param_3,param_4,param_5);
    }
    if (local_54 != 0) {
      return (ulonglong)local_54;
    }
    uVar10 = (**(code **)(param_2 + 0xa4))(param_2,0x43464620,param_1,0);
  }
  else {
    uVar10 = FUN_143c251d0(param_1,0);
  }
  if (uVar10 != 0) {
    return (ulonglong)uVar10;
  }
  local_54 = 0;
  puVar6 = *(undefined4 **)(param_2 + 0x26);
  local_48 = puVar6;
  lVar12 = FUN_143c271e0(puVar6,0x1078,&local_54);
  if (local_54 != 0) {
    return (ulonglong)local_54;
  }
  *(longlong *)(param_2 + 0xe0) = lVar12;
  local_54 = FUN_143c4bb50(uVar16,param_1,param_3,lVar12,local_res10);
  if (local_54 != 0) {
    return (ulonglong)local_54;
  }
  *(undefined8 *)(lVar12 + 0x1040) = local_50;
  *(longlong *)(lVar12 + 0x1048) = lVar13;
  param_2[1] = param_3;
  param_2[4] = *(undefined4 *)(lVar12 + 0x14);
  if ((*(int *)(lVar12 + 0x64c) == 0xffff) && (lVar13 == 0)) {
    return 0xb;
  }
  if (*(char *)(lVar12 + 0x608) == '\0') {
    uVar10 = 1000;
    if (local_res10 == false) {
      uVar10 = (uint)*(ushort *)(param_2 + 0x1a);
    }
    *(uint *)(lVar12 + 0x60c) = uVar10;
  }
  iVar22 = *(int *)(lVar12 + 0x604);
  if (iVar22 < 0) {
    iVar22 = -iVar22;
  }
  if (iVar22 != 0x10000) {
    uVar11 = FUN_143c20070(*(undefined4 *)(lVar12 + 0x60c),iVar22);
    *(undefined4 *)(lVar12 + 0x60c) = uVar11;
    uVar11 = FUN_143c20070(*(undefined4 *)(lVar12 + 0x5f8),iVar22);
    *(undefined4 *)(lVar12 + 0x5f8) = uVar11;
    uVar11 = FUN_143c20070(*(undefined4 *)(lVar12 + 0x600),iVar22);
    *(undefined4 *)(lVar12 + 0x600) = uVar11;
    uVar11 = FUN_143c20070(*(undefined4 *)(lVar12 + 0x5fc),iVar22);
    *(undefined4 *)(lVar12 + 0x5fc) = uVar11;
    uVar11 = FUN_143c20070(*(undefined4 *)(lVar12 + 0x604),iVar22);
    *(undefined4 *)(lVar12 + 0x604) = uVar11;
    uVar11 = FUN_143c20070(*(undefined4 *)(lVar12 + 0x610),iVar22);
    *(undefined4 *)(lVar12 + 0x610) = uVar11;
    uVar11 = FUN_143c20070(*(undefined4 *)(lVar12 + 0x614),iVar22);
    *(undefined4 *)(lVar12 + 0x614) = uVar11;
  }
  *(int *)(lVar12 + 0x610) = (int)*(short *)(lVar12 + 0x612);
  *(int *)(lVar12 + 0x614) = (int)*(short *)(lVar12 + 0x616);
  uVar10 = *(uint *)(lVar12 + 0x818);
  uVar18 = (ulonglong)uVar10;
  while (uVar10 != 0) {
    uVar10 = (int)uVar18 - 1;
    uVar18 = (ulonglong)uVar10;
    lVar13 = *(longlong *)(lVar12 + 0x820 + uVar18 * 8);
    if (*(char *)(lVar13 + 0x40) == '\0') {
      uVar11 = *(undefined4 *)(lVar12 + 0x5fc);
      uVar8 = *(undefined4 *)(lVar12 + 0x600);
      uVar9 = *(undefined4 *)(lVar12 + 0x604);
      *(undefined4 *)(lVar13 + 0x30) = *(undefined4 *)(lVar12 + 0x5f8);
      *(undefined4 *)(lVar13 + 0x34) = uVar11;
      *(undefined4 *)(lVar13 + 0x38) = uVar8;
      *(undefined4 *)(lVar13 + 0x3c) = uVar9;
      *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(lVar12 + 0x610);
      uVar11 = *(undefined4 *)(lVar12 + 0x60c);
LAB_143c4458f:
      *(undefined4 *)(lVar13 + 0x44) = uVar11;
    }
    else if (*(char *)(lVar12 + 0x608) != '\0') {
      uVar23 = *(uint *)(lVar12 + 0x60c);
      if ((uVar23 < 2) || (uVar24 = *(uint *)(lVar13 + 0x44), uVar24 < 2)) {
        uVar24 = 1;
      }
      else if (uVar23 < uVar24) {
        uVar24 = uVar23;
      }
      FUN_143c21db0(lVar12 + 0x5f8,lVar13 + 0x30,uVar24);
      FUN_143c25570(lVar13 + 0x48,lVar12 + 0x5f8,uVar24);
      uVar11 = FUN_143c21f00(*(undefined4 *)(lVar13 + 0x44),*(undefined4 *)(lVar12 + 0x60c),uVar24);
      goto LAB_143c4458f;
    }
    iVar22 = *(int *)(lVar13 + 0x3c);
    if (iVar22 < 0) {
      iVar22 = -iVar22;
    }
    if (iVar22 != 0x10000) {
      uVar11 = FUN_143c20070(*(undefined4 *)(lVar13 + 0x44),iVar22);
      *(undefined4 *)(lVar13 + 0x44) = uVar11;
      uVar11 = FUN_143c20070(*(undefined4 *)(lVar13 + 0x30),iVar22);
      *(undefined4 *)(lVar13 + 0x30) = uVar11;
      uVar11 = FUN_143c20070(*(undefined4 *)(lVar13 + 0x38),iVar22);
      *(undefined4 *)(lVar13 + 0x38) = uVar11;
      uVar11 = FUN_143c20070(*(undefined4 *)(lVar13 + 0x34),iVar22);
      *(undefined4 *)(lVar13 + 0x34) = uVar11;
      uVar11 = FUN_143c20070(*(undefined4 *)(lVar13 + 0x3c),iVar22);
      *(undefined4 *)(lVar13 + 0x3c) = uVar11;
      uVar11 = FUN_143c20070(*(undefined4 *)(lVar13 + 0x48),iVar22);
      *(undefined4 *)(lVar13 + 0x48) = uVar11;
      uVar11 = FUN_143c20070(*(undefined4 *)(lVar13 + 0x4c),iVar22);
      *(undefined4 *)(lVar13 + 0x4c) = uVar11;
    }
    *(int *)(lVar13 + 0x48) = (int)*(short *)(lVar13 + 0x4a);
    *(int *)(lVar13 + 0x4c) = (int)*(short *)(lVar13 + 0x4e);
    puVar6 = local_48;
  }
  if (local_res10 == false) goto LAB_143c44915;
  *param_2 = *(undefined4 *)(lVar12 + 0x10);
  if (*(int *)(lVar12 + 0x64c) == 0xffff) {
    iVar22 = *(int *)(lVar12 + 0x4ec);
  }
  else {
    iVar22 = *(int *)(lVar12 + 0x4d8) + 1;
  }
  param_2[4] = iVar22;
  param_2[0x16] = (int)*(short *)(lVar12 + 0x61e);
  param_2[0x17] = (int)*(short *)(lVar12 + 0x622);
  sVar3 = *(short *)(param_2 + 0x17);
  param_2[0x18] = *(int *)(lVar12 + 0x624) + 0xffff >> 0x10;
  param_2[0x19] = *(int *)(lVar12 + 0x628) + 0xffff >> 0x10;
  uVar4 = *(ushort *)(lVar12 + 0x60c);
  sVar5 = *(short *)(param_2 + 0x19);
  *(ushort *)(param_2 + 0x1a) = uVar4;
  *(short *)((longlong)param_2 + 0x6a) = sVar5;
  *(short *)(param_2 + 0x1b) = sVar3;
  sVar7 = (short)((((uint)uVar4 + (uint)uVar4 * 2) * 4) / 10);
  *(short *)((longlong)param_2 + 0x6e) = sVar7;
  if ((int)sVar7 < (int)sVar5 - (int)sVar3) {
    *(short *)((longlong)param_2 + 0x6e) = sVar5 - sVar3;
  }
  *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(lVar12 + 0x5ea);
  *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(lVar12 + 0x5ee);
  lVar13 = FUN_143c4c2a0(lVar12,param_3);
  *(longlong *)(param_2 + 6) = lVar13;
  if (lVar13 == 0) {
    lVar13 = cff_index_get_sid_string(lVar12,*(undefined4 *)(lVar12 + 0x674));
    if (lVar13 != 0) {
      uVar16 = ft_mem_strdup(puVar6,lVar13,&local_50);
      *(undefined8 *)(param_2 + 6) = uVar16;
    }
  }
  else {
    pcVar14 = (char *)cff_index_get_sid_string(lVar12,*(undefined4 *)(lVar12 + 0x5d4));
    pcVar21 = *(char **)(param_2 + 6);
    FUN_143c4e150(pcVar21);
    if ((*(int *)(lVar12 + 0x5d8) != 0) &&
       (pcVar15 = (char *)cff_index_get_sid_string(lVar12), pcVar15 != (char *)0x0)) {
      pcVar21 = pcVar15;
    }
    if ((pcVar14 != (char *)0x0) && (pcVar21 != (char *)0x0)) {
      cVar1 = *pcVar14;
      while (cVar1 != '\0') {
        cVar1 = *pcVar14;
        cVar2 = *pcVar21;
        if (cVar1 == cVar2) {
          pcVar21 = pcVar21 + 1;
LAB_143c4476d:
          pcVar14 = pcVar14 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_143c4476d;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if ((*pcVar21 == '\0') && (*pcVar14 != '\0')) {
              lVar13 = ft_mem_strdup(puVar6,pcVar14,&local_50);
              FUN_143c4e080(*(undefined8 *)(param_2 + 6),lVar13);
              if (lVar13 != 0) {
                *(longlong *)(param_2 + 8) = lVar13;
                goto LAB_143c447fb;
              }
            }
            break;
          }
          pcVar21 = pcVar21 + 1;
        }
        cVar1 = *pcVar14;
      }
    }
  }
  uVar16 = ft_mem_strdup(puVar6,"Regular",&local_50);
  *(undefined8 *)(param_2 + 8) = uVar16;
LAB_143c447fb:
  uVar10 = 0x811;
  if (bVar25) {
    uVar10 = 0x819;
  }
  if (*(char *)(lVar12 + 0x5e0) != '\0') {
    uVar10 = uVar10 | 4;
  }
  param_2[2] = param_2[2] | uVar10;
  uVar10 = *(uint *)(lVar12 + 0x5dc);
  lVar13 = 0;
  bVar25 = *(int *)(lVar12 + 0x5e4) != 0;
  uVar23 = (uint)bVar25;
  if (uVar10 != 0xffff) {
    if (uVar10 < 0x187) {
      if (*(longlong *)(lVar12 + 0x1048) != 0) {
        lVar17 = (**(code **)(*(longlong *)(lVar12 + 0x1048) + 0x28))();
        goto LAB_143c44888;
      }
    }
    else if (uVar10 - 0x187 < *(uint *)(lVar12 + 0x5b0)) {
      lVar17 = *(longlong *)(*(longlong *)(lVar12 + 0x5b8) + (ulonglong)(uVar10 - 0x187) * 8);
LAB_143c44888:
      lVar19 = lVar13;
      if (lVar17 != 0) {
        do {
          lVar20 = lVar19 + 1;
          if (*(char *)(lVar17 + lVar19) != (&DAT_145d23b60)[lVar19]) goto LAB_143c448b0;
          lVar19 = lVar20;
        } while (lVar20 != 5);
        goto LAB_143c448c4;
      }
    }
  }
  goto LAB_143c448c7;
  while (lVar13 = lVar19, lVar19 != 6) {
LAB_143c448b0:
    lVar19 = lVar13 + 1;
    if (*(char *)(lVar17 + lVar13) != "Black"[lVar13]) goto LAB_143c448c7;
  }
LAB_143c448c4:
  uVar23 = bVar25 | 2;
LAB_143c448c7:
  if ((((uVar23 & 2) == 0) && (*(char **)(param_2 + 8) != (char *)0x0)) &&
     ((iVar22 = _guard_xfg_dispatch_icall_nop(*(char **)(param_2 + 8),"Bold",4), iVar22 == 0 ||
      (iVar22 = _guard_xfg_dispatch_icall_nop(*(char **)(param_2 + 8),"Black",5), iVar22 == 0)))) {
    uVar23 = uVar23 | 2;
  }
  param_2[3] = uVar23;
LAB_143c44915:
  if (((*(int *)(lVar12 + 0x64c) != 0xffff) ||
      (param_2[2] = param_2[2] | 0x200, *(int *)(lVar12 + 0x64c) != 0xffff)) &&
     (local_res10 != false)) {
    param_2[2] = param_2[2] | 0x1000;
  }
  uVar10 = param_2[0xe];
  if (uVar10 != 0) {
    uVar18 = 0;
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar18 * 8);
      sVar3 = *(short *)(lVar13 + 0xc);
      if (((sVar3 == 3) && (*(short *)(lVar13 + 0xe) == 1)) || (sVar3 == 0)) {
        uVar18 = (ulonglong)local_54;
        goto LAB_143c449fa;
      }
      uVar23 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar23;
    } while (uVar23 < uVar10);
  }
  if ((local_res10 == false) || (*(int *)(lVar12 + 0x64c) == 0xffff)) {
    local_3c = 0x10003;
    local_40 = 0x756e6963;
    local_48 = param_2;
    uVar23 = FUN_143c1ff20(&DAT_145d24390,0,&local_48,0);
    uVar18 = (ulonglong)uVar23;
    if ((uVar23 == 0) || ((char)uVar23 == -0x5d)) {
      local_54 = 0;
      uVar18 = 0;
      if ((*(longlong *)(param_2 + 0x22) == 0) && (uVar18 = 0, uVar10 != param_2[0xe])) {
        *(undefined8 *)(param_2 + 0x22) =
             *(undefined8 *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar10 * 8);
      }
LAB_143c449fa:
      if (*(int *)(lVar12 + 0xb8) != 0) {
        if (*(int *)(lVar12 + 0xb4) == 0) {
          local_3c = 7;
          local_40 = 0x41444f42;
        }
        else if (*(int *)(lVar12 + 0xb4) == 1) {
          local_3c = 0x10007;
          local_40 = 0x41444245;
        }
        else {
          local_40 = 0x41444243;
          local_3c = 0x20007;
        }
        local_48 = param_2;
        uVar10 = FUN_143c1ff20(&DAT_145d24340,0,&local_48,0);
        uVar18 = (ulonglong)uVar10;
      }
    }
  }
  else {
    uVar18 = (ulonglong)local_54;
  }
  return uVar18;
}



// FUNCTION 143c44a80 FUN_143c44a80 body=225 status=ok
// SIG undefined FUN_143c44a80(void)

ulonglong FUN_143c44a80(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x380);
  lVar5 = ft_module_get_service(*(undefined8 *)(param_1 + 0x90),"postscript-cmaps");
  if (lVar5 == 0) {
    return 0;
  }
  uVar9 = 0;
  if (*(int *)(lVar4 + 0x14) != 0) {
    do {
      uVar3 = *(ushort *)(*(longlong *)(lVar4 + 0x4c8) + uVar9 * 2);
      if (uVar3 < 0x187) {
        lVar6 = (**(code **)(lVar5 + 0x28))(uVar3);
LAB_143c44b16:
        if (lVar6 != 0) {
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
      }
      else if (uVar3 - 0x187 < *(uint *)(lVar4 + 0x5b0)) {
        lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x5b8) + (ulonglong)(uVar3 - 0x187) * 8);
        goto LAB_143c44b16;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < *(uint *)(lVar4 + 0x14));
  }
  return 0;
}



// FUNCTION 143c44b70 FUN_143c44b70 body=94 status=ok
// SIG undefined FUN_143c44b70(void)

void FUN_143c44b70(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2c0) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x2c0) + 0x18))();
    }
    if (*(longlong *)(param_1 + 0x380) != 0) {
      FUN_143c4b770();
      ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x380));
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
  }
  return;
}



// FUNCTION 143c44c10 FUN_143c44c10 body=85 status=ok
// SIG undefined FUN_143c44c10(void)

undefined8 FUN_143c44c10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x380);
  if (*(longlong *)(lVar2 + 0x4c8) == 0) {
    return 0xa3;
  }
  uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x1048) + 8))
                    (*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar2 + 0x14),
                     &LAB_143c4d2f0,0,lVar1);
  return uVar3;
}



// FUNCTION 143c44c70 cff_cmap_unicode_done body=43 status=ok
// SIG undefined cff_cmap_unicode_done(void)

void cff_cmap_unicode_done(longlong *param_1)

{
  ft_mem_free(*(undefined8 *)(*param_1 + 0x98),param_1[4]);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 143c44cb0 FUN_143c44cb0 body=608 status=ok
// SIG undefined FUN_143c44cb0(void)

ulonglong FUN_143c44cb0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x380);
  uVar7 = 0;
  local_res8[0] = 0;
  if (lVar2 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar2 + 0x1050) == 0) {
    puVar5 = (ulonglong *)FUN_143c271e0(*(undefined8 *)(param_1 + 0x98),0x38,local_res8);
    if (local_res8[0] != 0) {
      return (ulonglong)local_res8[0];
    }
    uVar1 = *(uint *)(lVar2 + 0x5c8);
    uVar6 = uVar7;
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        if (*(longlong *)(lVar2 + 0x1048) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)(lVar2 + 0x1048) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x5b0)) {
        uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x5b8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
    }
    *puVar5 = uVar6;
    uVar1 = *(uint *)(lVar2 + 0x5cc);
    uVar6 = uVar7;
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        if (*(longlong *)(lVar2 + 0x1048) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)(lVar2 + 0x1048) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x5b0)) {
        uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x5b8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
    }
    puVar5[1] = uVar6;
    uVar1 = *(uint *)(lVar2 + 0x5d4);
    uVar6 = uVar7;
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        if (*(longlong *)(lVar2 + 0x1048) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)(lVar2 + 0x1048) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x5b0)) {
        uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x5b8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
    }
    puVar5[2] = uVar6;
    uVar1 = *(uint *)(lVar2 + 0x5d8);
    uVar6 = uVar7;
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        if (*(longlong *)(lVar2 + 0x1048) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)(lVar2 + 0x1048) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x5b0)) {
        uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x5b8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
    }
    puVar5[3] = uVar6;
    uVar1 = *(uint *)(lVar2 + 0x5dc);
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        uVar7 = 0;
        if (*(longlong *)(lVar2 + 0x1048) != 0) {
          uVar7 = (**(code **)(*(longlong *)(lVar2 + 0x1048) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x5b0)) {
        uVar7 = *(ulonglong *)(*(longlong *)(lVar2 + 0x5b8) + (ulonglong)(uVar1 - 0x187) * 8);
      }
    }
    puVar5[4] = uVar7;
    *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(lVar2 + 0x5e4);
    *(undefined1 *)((longlong)puVar5 + 0x2c) = *(undefined1 *)(lVar2 + 0x5e0);
    *(undefined2 *)((longlong)puVar5 + 0x2e) = *(undefined2 *)(lVar2 + 0x5e8);
    *(undefined2 *)(puVar5 + 6) = *(undefined2 *)(lVar2 + 0x5ec);
    *(ulonglong **)(lVar2 + 0x1050) = puVar5;
    uVar7 = (ulonglong)local_res8[0];
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x1050);
  uVar4 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar4;
  uVar4 = puVar3[3];
  param_2[2] = puVar3[2];
  param_2[3] = uVar4;
  uVar4 = puVar3[5];
  param_2[4] = puVar3[4];
  param_2[5] = uVar4;
  param_2[6] = puVar3[6];
  return uVar7;
}



// FUNCTION 143c44f50 FUN_143c44f50 body=115 status=ok
// SIG undefined FUN_143c44f50(void)

undefined8 FUN_143c44f50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x380);
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    uVar2 = FT_Get_Module(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_145d22d6c);
    puVar3 = (undefined8 *)ft_module_get_service(uVar2,"postscript-font-name");
    if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143c44fae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar3)(param_1);
      return uVar2;
    }
  }
  return *(undefined8 *)(lVar1 + 0x5a0);
}



// FUNCTION 143c44fd0 FUN_143c44fd0 body=137 status=ok
// SIG undefined FUN_143c44fd0(void)

undefined8 FUN_143c44fd0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8);
  *param_2 = 0;
  if (((undefined *)param_1[2] != &DAT_145d24340) && ((undefined *)param_1[2] != &DAT_145d24390)) {
    uVar1 = FT_Get_Module(uVar1,&DAT_145d22d6c);
    puVar2 = (undefined8 *)ft_module_get_service(uVar1,"tt-cmaps");
    if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143c45049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)*puVar2)(param_1,param_2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 143c45060 cff_get_ros body=190 status=ok
// SIG undefined cff_get_ros(void)

undefined8 cff_get_ros(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x380);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(lVar1 + 0x64c) == 0xffff) {
    uVar2 = 6;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (*(longlong *)(lVar1 + 0x1058) == 0) {
        uVar2 = cff_index_get_sid_string(lVar1);
        *(undefined8 *)(lVar1 + 0x1058) = uVar2;
      }
      *param_2 = *(undefined8 *)(lVar1 + 0x1058);
    }
    if (param_3 != (undefined8 *)0x0) {
      if (*(longlong *)(lVar1 + 0x1060) == 0) {
        uVar2 = cff_index_get_sid_string(lVar1,*(undefined4 *)(lVar1 + 0x650));
        *(undefined8 *)(lVar1 + 0x1060) = uVar2;
      }
      *param_3 = *(undefined8 *)(lVar1 + 0x1060);
    }
    uVar2 = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar1 + 0x654);
    }
  }
  return uVar2;
}



// FUNCTION 143c45190 FUN_143c45190 body=303 status=ok
// SIG undefined FUN_143c45190(void)

undefined8 FUN_143c45190(longlong param_1,char *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = 0;
  iVar8 = _guard_xfg_dispatch_icall_nop(param_2,"darkening-parameters");
  if (iVar8 == 0) {
    iVar8 = *param_3;
    iVar1 = param_3[1];
    iVar2 = param_3[2];
    iVar3 = param_3[3];
    iVar4 = param_3[4];
    iVar5 = param_3[5];
    iVar6 = param_3[6];
    iVar7 = param_3[7];
    if (((((iVar8 < 0) || (iVar2 < 0)) || (iVar4 < 0)) ||
        (((iVar6 < 0 || (iVar1 < 0)) || ((iVar3 < 0 || ((iVar5 < 0 || (iVar7 < 0)))))))) ||
       ((iVar2 < iVar8 ||
        (((((iVar4 < iVar2 || (iVar6 < iVar4)) || (500 < iVar1)) || ((500 < iVar3 || (500 < iVar5)))
          ) || (500 < iVar7)))))) {
      uVar9 = 6;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar2;
      uVar9 = 0;
      *(int *)(param_1 + 0x40) = iVar8;
      *(int *)(param_1 + 0x44) = iVar1;
      *(int *)(param_1 + 0x4c) = iVar3;
      *(int *)(param_1 + 0x50) = iVar4;
      *(int *)(param_1 + 0x54) = iVar5;
      *(int *)(param_1 + 0x58) = iVar6;
      *(int *)(param_1 + 0x5c) = iVar7;
    }
  }
  else {
    iVar8 = _guard_xfg_dispatch_icall_nop(param_2,"hinting-engine");
    if (iVar8 == 0) {
      if (*param_3 == 1) {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
      else {
        uVar9 = 7;
      }
    }
    else {
      iVar8 = _guard_xfg_dispatch_icall_nop(param_2,"no-stem-darkening");
      if (iVar8 == 0) {
        *(char *)(param_1 + 0x3c) = (char)*param_3;
        uVar9 = 0;
      }
      else {
        uVar9 = 0xc;
      }
    }
  }
  return uVar9;
}



// FUNCTION 143c452c0 FUN_143c452c0 body=214 status=ok
// SIG undefined FUN_143c452c0(void)

undefined8 FUN_143c452c0(longlong param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"darkening-parameters");
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x40);
    param_3[1] = *(undefined4 *)(param_1 + 0x44);
    param_3[2] = *(undefined4 *)(param_1 + 0x48);
    param_3[3] = *(undefined4 *)(param_1 + 0x4c);
    param_3[4] = *(undefined4 *)(param_1 + 0x50);
    param_3[5] = *(undefined4 *)(param_1 + 0x54);
    param_3[6] = *(undefined4 *)(param_1 + 0x58);
    param_3[7] = *(undefined4 *)(param_1 + 0x5c);
    return 0;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"hinting-engine");
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x38);
    return 0;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(param_2,"no-stem-darkening");
  if (iVar1 == 0) {
    *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x3c);
    return 0;
  }
  return 0xc;
}



// FUNCTION 143c453a0 FUN_143c453a0 body=100 status=ok
// SIG undefined FUN_143c453a0(void)

longlong FUN_143c453a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = ft_service_list_lookup(&PTR_s_font_format_145d24490);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = (longlong *)FT_Get_Module(*(longlong *)(param_1 + 8),&DAT_145d22d6c);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c453f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143c45410 FUN_143c45410 body=237 status=ok
// SIG undefined FUN_143c45410(void)

undefined8 FUN_143c45410(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x338);
  if (param_1 + 0x50U <= *(ulonglong *)(param_1 + 0x328)) {
    *(undefined1 *)(lVar1 + 0x40) = 1;
    uVar2 = FUN_143c4ca50(param_1 + 0x20,local_res8);
    uVar3 = -local_res8[0];
    *(undefined4 *)(lVar1 + 0x30) = uVar2;
    if (uVar3 < 10) {
      uVar2 = FUN_143c4cb20(param_1 + 0x28,uVar3);
      *(undefined4 *)(lVar1 + 0x38) = uVar2;
      uVar2 = FUN_143c4cb20(param_1 + 0x30,uVar3);
      *(undefined4 *)(lVar1 + 0x34) = uVar2;
      uVar2 = FUN_143c4cb20(param_1 + 0x38,uVar3);
      *(undefined4 *)(lVar1 + 0x3c) = uVar2;
      uVar2 = FUN_143c4cb20(param_1 + 0x40,uVar3);
      *(undefined4 *)(lVar1 + 0x48) = uVar2;
      uVar2 = FUN_143c4cb20(param_1 + 0x48,uVar3);
      *(undefined4 *)(lVar1 + 0x4c) = uVar2;
      *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(&DAT_145d24c58 + (longlong)(int)uVar3 * 4);
    }
    else {
      *(undefined8 *)(lVar1 + 0x30) = 0x10000;
      *(undefined4 *)(lVar1 + 0x38) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0x10000;
      *(undefined8 *)(lVar1 + 0x48) = 0;
      *(undefined4 *)(lVar1 + 0x44) = 1;
    }
    return 0;
  }
  return 0xa1;
}



// FUNCTION 143c45500 FUN_143c45500 body=357 status=ok
// SIG undefined FUN_143c45500(void)

undefined8 FUN_143c45500(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x338);
  if (param_1 + 0x40U <= *(ulonglong *)(param_1 + 0x328)) {
    pcVar2 = *(char **)(param_1 + 0x20);
    iVar5 = 0x7fffffff;
    if (*pcVar2 == '\x1e') {
      iVar3 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x28),0,0);
    }
    else {
      iVar3 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x28));
      if (iVar3 < 0x8000) {
        if (iVar3 < -0x7fff) {
          iVar3 = -0x7fffffff;
        }
        else {
          iVar3 = iVar3 << 0x10;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
    }
    uVar4 = FT_RoundFix(iVar3);
    *(undefined4 *)(lVar1 + 0x54) = uVar4;
    pcVar2 = *(char **)(param_1 + 0x28);
    if (*pcVar2 == '\x1e') {
      iVar3 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x30),0,0);
    }
    else {
      iVar3 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x30));
      if (iVar3 < 0x8000) {
        if (iVar3 < -0x7fff) {
          iVar3 = -0x7fffffff;
        }
        else {
          iVar3 = iVar3 << 0x10;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
    }
    uVar4 = FT_RoundFix(iVar3);
    *(undefined4 *)(lVar1 + 0x58) = uVar4;
    pcVar2 = *(char **)(param_1 + 0x30);
    if (*pcVar2 == '\x1e') {
      iVar3 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x38),0,0);
    }
    else {
      iVar3 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x38));
      if (iVar3 < 0x8000) {
        if (iVar3 < -0x7fff) {
          iVar3 = -0x7fffffff;
        }
        else {
          iVar3 = iVar3 << 0x10;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
    }
    uVar4 = FT_RoundFix(iVar3);
    *(undefined4 *)(lVar1 + 0x5c) = uVar4;
    pcVar2 = *(char **)(param_1 + 0x38);
    if (*pcVar2 == '\x1e') {
      iVar5 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x40),0,0);
    }
    else {
      iVar3 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x40));
      if (iVar3 < 0x8000) {
        if (iVar3 < -0x7fff) {
          iVar5 = -0x7fffffff;
        }
        else {
          iVar5 = iVar3 << 0x10;
        }
      }
    }
    uVar4 = FT_RoundFix(iVar5);
    *(undefined4 *)(lVar1 + 0x60) = uVar4;
    return 0;
  }
  return 0xa1;
}



// FUNCTION 143c45670 FUN_143c45670 body=160 status=ok
// SIG undefined FUN_143c45670(void)

undefined8 FUN_143c45670(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x338);
  if (*(ulonglong *)(param_1 + 0x328) < param_1 + 0x30U) {
    return 0xa1;
  }
  pcVar2 = *(char **)(param_1 + 0x20);
  if (*pcVar2 == '\x1e') {
    iVar3 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x28),0,0);
    iVar3 = iVar3 >> 0x10;
  }
  else {
    iVar3 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x28));
  }
  if (-1 < iVar3) {
    *(int *)(lVar1 + 0x78) = iVar3;
    pcVar2 = *(char **)(param_1 + 0x28);
    if (*pcVar2 == '\x1e') {
      iVar3 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x30),0,0);
      iVar3 = iVar3 >> 0x10;
    }
    else {
      iVar3 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x30));
    }
    if (-1 < iVar3) {
      *(int *)(lVar1 + 0x74) = iVar3;
      return 0;
    }
  }
  return 3;
}



// FUNCTION 143c45710 cff_parse_cid_ros body=203 status=ok
// SIG undefined cff_parse_cid_ros(void)

undefined8 cff_parse_cid_ros(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x338);
  if (*(ulonglong *)(param_1 + 0x328) < param_1 + 0x38U) {
    return 0xa1;
  }
  pcVar2 = *(char **)(param_1 + 0x20);
  if (*pcVar2 == '\x1e') {
    iVar3 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x28),0,0);
    iVar3 = iVar3 >> 0x10;
  }
  else {
    iVar3 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x28));
  }
  *(int *)(lVar1 + 0x84) = iVar3;
  pcVar2 = *(char **)(param_1 + 0x28);
  if (*pcVar2 == '\x1e') {
    iVar3 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x30),0,0);
    iVar3 = iVar3 >> 0x10;
  }
  else {
    iVar3 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x30));
  }
  *(int *)(lVar1 + 0x88) = iVar3;
  pcVar2 = *(char **)(param_1 + 0x30);
  if (*pcVar2 == '\x1e') {
    iVar3 = FUN_143c4cc40(pcVar2,*(undefined8 *)(param_1 + 0x38),0,0);
    *(int *)(lVar1 + 0x8c) = iVar3 >> 0x10;
    return 0;
  }
  uVar4 = FUN_143c4cb90(pcVar2,*(undefined8 *)(param_1 + 0x38));
  *(undefined4 *)(lVar1 + 0x8c) = uVar4;
  return 0;
}



// FUNCTION 143c457e0 FUN_143c457e0 body=223 status=ok
// SIG undefined FUN_143c457e0(void)

ulonglong FUN_143c457e0(char *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  uint local_18 [4];
  
  uVar4 = FUN_143c251d0(param_3,param_4);
  local_18[0] = (uint)uVar4;
  if (local_18[0] == 0) {
    cVar1 = FUN_143c24b80(param_3,local_18);
    if (local_18[0] == 0) {
      *param_1 = cVar1;
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0x10) = param_2;
        uVar4 = FT_Stream_ExtractFrame(param_3,param_2,param_1 + 8);
        return uVar4;
      }
      if (cVar1 != '\x03') {
        return 3;
      }
      uVar2 = FUN_143c25070(param_3,local_18);
      if (local_18[0] == 0) {
        if (uVar2 == 0) {
          return 3;
        }
        iVar3 = (uint)uVar2 + (uint)uVar2 * 2 + 2;
        *(int *)(param_1 + 0x10) = iVar3;
        uVar4 = FT_Stream_ExtractFrame(param_3,iVar3,param_1 + 8);
        return uVar4;
      }
    }
    uVar4 = (ulonglong)local_18[0];
  }
  return uVar4;
}



// FUNCTION 143c458c0 FUN_143c458c0 body=215 status=ok
// SIG undefined FUN_143c458c0(void)

undefined8 FUN_143c458c0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  int local_res8 [2];
  
  lVar1 = param_1[2];
  local_res8[0] = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1[2];
  if (param_2 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffff)) / auVar3,0)) {
    uVar4 = FUN_143c27410(*param_1,1,*(undefined4 *)(param_1 + 6),lVar1 * param_2 & 0xffffffff,
                          param_1[7],local_res8);
    param_1[7] = uVar4;
    if (local_res8[0] == 0) {
      param_1[3] = param_2;
      param_1[6] = lVar1 * param_2;
      if (param_2 < (ulonglong)param_1[5]) {
        piVar2 = (int *)param_1[1];
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
          *piVar2 = 0x82;
        }
        param_1[5] = param_2;
        return 0;
      }
      return 1;
    }
  }
  piVar2 = (int *)param_1[1];
  if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
    *piVar2 = 0x40;
  }
  return 0;
}



// FUNCTION 143c459a0 FUN_143c459a0 body=395 status=ok
// SIG undefined FUN_143c459a0(void)

ulonglong FUN_143c459a0(longlong param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong in_RAX;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar8 = 0;
  iVar6 = *(int *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 4) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  do {
    uVar5 = uVar8 * 5;
    cVar2 = *(char *)(param_1 + 0x70 + uVar8 * 0x14);
    lVar1 = param_1 + uVar8 * 0x14;
    if (cVar2 == '\0') {
LAB_143c45a07:
      if ((*param_3 & 10) != 0) {
        uVar7 = param_3[4];
        uVar4 = *(int *)(lVar1 + 0x60) - iVar6;
        uVar5 = (ulonglong)uVar4;
        if (((int)uVar4 <= (int)uVar7) &&
           (uVar4 = *(int *)(param_1 + 100 + uVar8 * 0x14) + iVar6, uVar5 = (ulonglong)uVar4,
           (int)uVar7 <= (int)uVar4)) {
          if (*(char *)(param_1 + 8) == '\0') {
            if ((int)(uVar7 - *(int *)(param_1 + 0x60 + uVar8 * 0x14)) < *(int *)(param_1 + 0x10)) {
              uVar7 = param_3[5] + 0x8000 & 0xffff0000;
            }
            else {
              uVar4 = param_3[5] + 0x8000 & 0xffff0000;
              uVar7 = *(int *)(param_1 + 0x6c + uVar8 * 0x14) + 0x10000;
              if ((int)uVar7 < (int)uVar4) {
                uVar7 = uVar4;
              }
            }
          }
          else {
            uVar7 = *(uint *)(param_1 + 0x6c + uVar8 * 0x14);
          }
          iVar6 = uVar7 - param_3[5];
LAB_143c45af8:
          if (*param_2 != 0) {
            param_2[5] = param_2[5] + iVar6;
            *param_2 = *param_2 | 0x10;
          }
          uVar7 = 0;
          if (*param_3 != 0) {
            param_3[5] = param_3[5] + iVar6;
            uVar7 = *param_3 | 0x10;
            *param_3 = uVar7;
          }
          return CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
        }
      }
    }
    else {
      if ((*param_2 & 5) != 0) {
        uVar7 = param_2[4];
        uVar4 = *(int *)(lVar1 + 0x60) - iVar6;
        uVar5 = (ulonglong)uVar4;
        if ((int)uVar4 <= (int)uVar7) {
          iVar3 = *(int *)(param_1 + 100 + uVar8 * 0x14);
          uVar4 = iVar3 + iVar6;
          uVar5 = (ulonglong)uVar4;
          if ((int)uVar7 <= (int)uVar4) {
            if (*(char *)(param_1 + 8) == '\0') {
              if ((int)(iVar3 - uVar7) < *(int *)(param_1 + 0x10)) {
                iVar6 = (param_2[5] + 0x8000 & 0xffff0000) - param_2[5];
              }
              else {
                uVar7 = *(int *)(param_1 + 0x6c + uVar8 * 0x14) - 0x10000;
                uVar4 = param_2[5] + 0x8000 & 0xffff0000;
                if ((int)uVar4 < (int)uVar7) {
                  uVar7 = uVar4;
                }
                iVar6 = uVar7 - param_2[5];
              }
            }
            else {
              iVar6 = *(int *)(param_1 + 0x6c + uVar8 * 0x14) - param_2[5];
            }
            goto LAB_143c45af8;
          }
        }
      }
      if (cVar2 == '\0') goto LAB_143c45a07;
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    if (*(uint *)(param_1 + 4) <= uVar7) {
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143c45b30 FUN_143c45b30 body=1290 status=ok
// SIG undefined FUN_143c45b30(void)

void FUN_143c45b30(int *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int *piVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int local_res18;
  
  lVar3 = *(longlong *)(param_2 + 0xa8);
  uVar17 = 0;
  local_res18 = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x150);
  *param_1 = *(int *)(param_2 + 0x34);
  iVar4 = FUN_143c20070(*(undefined4 *)(*(longlong *)(lVar3 + 0x3f0) + 0x174),0x3e80000);
  param_1[3] = iVar4;
  param_1[4] = *(int *)(*(longlong *)(lVar3 + 0x3f0) + 0x178) << 0x10;
  param_1[5] = *(int *)(*(longlong *)(lVar3 + 0x3f0) + 0x17c) << 0x10;
  lVar3 = *(longlong *)(lVar3 + 0x3f0);
  uVar18 = (ulonglong)*(byte *)(lVar3 + 0xb2);
  uVar14 = (ulonglong)*(byte *)(lVar3 + 0xb0);
  bVar1 = *(byte *)(lVar3 + 0xb1);
  bVar2 = *(byte *)(lVar3 + 0xb3);
  if ((*(int *)(lVar3 + 0x200) == 1) &&
     ((uVar14 == 0 ||
      ((((uVar14 == 4 && (*(int *)(lVar3 + 0xb4) * 0x10000 < -0x780000)) &&
        (*(int *)(lVar3 + 0xb8) * 0x10000 < -0x780000)) &&
       ((0x3700000 < *(int *)(lVar3 + 0xbc) * 0x10000 &&
        (0x3700000 < *(int *)(lVar3 + 0xc0) * 0x10000)))))))) {
    param_1[0x14] = -0x780001;
    iVar4 = FUN_143c22100(0xff87ffff,*param_1);
    param_1[0x16] = *param_1;
    param_1[0x10] = 0x31;
    param_1[0x15] = (iVar4 + 0x8000U & 0xffff0000) - 0x8000;
    param_1[0xc] = *(int *)(param_2 + 0xe8) * 2 + 0x3700001;
    iVar4 = FUN_143c22100();
    param_1[8] = 0x32;
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    param_1[0xd] = (iVar4 + 0x8000U & 0xffff0000) + 0x8000;
    param_1[0xe] = *param_1;
    return;
  }
  uVar11 = uVar17;
  uVar13 = uVar17;
  if (uVar14 != 0) {
    do {
      param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] = *(int *)(lVar3 + 0xb4 + uVar13 * 4) << 0x10;
      param_1[((ulonglong)(uint)param_1[1] + 5) * 5] = *(int *)(lVar3 + 0xb8 + uVar13 * 4) << 0x10;
      uVar9 = (ulonglong)(uint)param_1[1];
      uVar5 = param_1[(uVar9 + 5) * 5] - param_1[uVar9 * 5 + 0x18];
      if (-1 < (int)uVar5) {
        if ((int)uVar11 < (int)uVar5) {
          uVar11 = (ulonglong)uVar5;
        }
        if (uVar13 == 0) {
          *(undefined1 *)(param_1 + uVar9 * 5 + 0x1c) = 1;
          uVar9 = (ulonglong)(uint)param_1[1];
          iVar4 = param_1[uVar9 * 5 + 0x19];
        }
        else {
          param_1[(uVar9 + 5) * 5] = param_1[(uVar9 + 5) * 5] + *(int *)(param_2 + 0xe8) * 2;
          param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] =
               param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] + *(int *)(param_2 + 0xe8) * 2;
          *(undefined1 *)(param_1 + (ulonglong)(uint)param_1[1] * 5 + 0x1c) = 0;
          uVar9 = (ulonglong)(uint)param_1[1];
          iVar4 = param_1[uVar9 * 5 + 0x18];
        }
        param_1[uVar9 * 5 + 0x1a] = iVar4;
        param_1[1] = param_1[1] + 1;
      }
      uVar13 = uVar13 + 2;
    } while (uVar13 < uVar14);
    local_res18 = (int)uVar11;
  }
  iVar4 = (int)uVar11;
  uVar14 = uVar17;
  if ((ulonglong)bVar1 != 0) {
    do {
      param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] = *(int *)(lVar3 + 0xec + uVar14 * 4) << 0x10;
      param_1[((ulonglong)(uint)param_1[1] + 5) * 5] = *(int *)(lVar3 + 0xf0 + uVar14 * 4) << 0x10;
      uVar13 = (ulonglong)(uint)param_1[1];
      uVar5 = param_1[uVar13 * 5 + 0x19] - param_1[uVar13 * 5 + 0x18];
      if (-1 < (int)uVar5) {
        *(undefined1 *)(param_1 + uVar13 * 5 + 0x1c) = 1;
        if ((int)uVar11 < (int)uVar5) {
          uVar11 = (ulonglong)uVar5;
        }
        param_1[(ulonglong)(uint)param_1[1] * 5 + 0x1a] =
             param_1[(ulonglong)(uint)param_1[1] * 5 + 0x19];
        param_1[1] = param_1[1] + 1;
      }
      iVar4 = (int)uVar11;
      uVar14 = uVar14 + 2;
      local_res18 = iVar4;
    } while (uVar14 < bVar1);
  }
  iVar6 = FUN_143c20070(0x10000,*param_1);
  if (param_1[1] != 0) {
    piVar12 = param_1 + 0x1a;
    do {
      uVar14 = 0;
      iVar16 = 0x7fffffff;
      iVar4 = *piVar12;
      if ((char)piVar12[2] == '\0') {
        uVar14 = 2;
        if (2 < uVar18) {
          do {
            iVar7 = *(int *)(lVar3 + 0x114 + uVar14 * 4) * 0x10000 + *(int *)(param_2 + 0xe8) * 2;
            uVar5 = iVar4 - iVar7;
            uVar10 = (int)uVar5 >> 0x1f;
            iVar8 = (uVar5 ^ uVar10) - uVar10;
            if (((iVar8 < iVar16) && (iVar8 < iVar6)) &&
               (*piVar12 = iVar7, iVar16 = iVar8, iVar8 == 0)) break;
            uVar14 = uVar14 + 2;
          } while (uVar14 < uVar18);
        }
      }
      else {
        if ((ulonglong)bVar2 != 0) {
          piVar15 = (int *)(lVar3 + 0x150);
          do {
            uVar5 = iVar4 + *piVar15 * -0x10000;
            uVar10 = (int)uVar5 >> 0x1f;
            iVar7 = (uVar5 ^ uVar10) - uVar10;
            if (((iVar7 < iVar16) && (iVar7 < iVar6)) &&
               (*piVar12 = *piVar15 * 0x10000, iVar16 = iVar7, iVar7 == 0)) break;
            uVar14 = uVar14 + 2;
            piVar15 = piVar15 + 2;
          } while (uVar14 < bVar2);
        }
        if (1 < uVar18) {
          uVar10 = iVar4 + *(int *)(lVar3 + 0x118) * -0x10000;
          uVar5 = (int)uVar10 >> 0x1f;
          iVar4 = (uVar10 ^ uVar5) - uVar5;
          if ((iVar4 < iVar16) && (iVar4 < iVar6)) {
            *piVar12 = *(int *)(lVar3 + 0x118) * 0x10000;
          }
        }
      }
      uVar17 = uVar17 + 1;
      piVar12 = piVar12 + 5;
      iVar4 = local_res18;
    } while (uVar17 < (uint)param_1[1]);
  }
  uVar14 = 0;
  if ((0 < iVar4) && (iVar6 = FUN_143c20070(0x10000,iVar4), iVar6 < param_1[3])) {
    iVar4 = FUN_143c20070(0x10000,iVar4);
    param_1[3] = iVar4;
  }
  if (*param_1 < param_1[3]) {
    *(undefined1 *)(param_1 + 2) = 1;
    iVar4 = FUN_143c21f00(0x999a);
    param_1[6] = 0x999a - iVar4;
    if (0x7fff < 0x999a - iVar4) {
      param_1[6] = 0x7fff;
    }
  }
  if (*(char *)(param_2 + 0xba) != '\0') {
    param_1[6] = 0;
  }
  if (param_1[1] != 0) {
    piVar12 = param_1 + 0x1a;
    do {
      if ((char)piVar12[2] == '\0') {
        iVar4 = FUN_143c22100(*piVar12,*param_1);
        piVar12[1] = param_1[6] + 0x8000 + iVar4 & 0xffff0000;
      }
      else {
        iVar4 = FUN_143c22100(*piVar12,*param_1);
        piVar12[1] = iVar4 + (0x8000 - param_1[6]) & 0xffff0000;
      }
      uVar14 = uVar14 + 1;
      piVar12 = piVar12 + 5;
    } while (uVar14 < (uint)param_1[1]);
  }
  return;
}



// FUNCTION 143c46040 cf2_buf_readByte body=45 status=ok
// SIG undefined cf2_buf_readByte(void)

undefined1 cf2_buf_readByte(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined1 *)param_1[3];
  if (puVar2 < (undefined1 *)param_1[2]) {
    uVar1 = *puVar2;
    param_1[3] = puVar2 + 1;
    return uVar1;
  }
  piVar3 = (int *)*param_1;
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    *piVar3 = 0x55;
  }
  return 0;
}



// FUNCTION 143c46070 FUN_143c46070 body=362 status=ok
// SIG undefined FUN_143c46070(void)

void FUN_143c46070(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar5 + 0x58) == '\0') {
    uVar3 = param_2[1];
    uVar4 = *param_2;
    *(undefined1 *)(lVar5 + 0x58) = 1;
    iVar8 = FUN_143c4a9a0(lVar5);
    if ((iVar8 != 0) || (iVar8 = FUN_143c4aa20(lVar5,uVar4,uVar3), iVar8 != 0)) {
      if (**(int **)(param_1 + 0x30) != 0) {
        return;
      }
      **(int **)(param_1 + 0x30) = iVar8;
      return;
    }
  }
  lVar6 = *(longlong *)(lVar5 + 0x18);
  if ((*(uint *)(lVar6 + 8) < (uint)(*(short *)(lVar6 + 0x62) + 3 + (int)*(short *)(lVar6 + 0x1a)))
     && (iVar8 = FUN_143c20e90(lVar6,3), iVar8 != 0)) {
    if (**(int **)(param_1 + 0x30) == 0) {
      **(int **)(param_1 + 0x30) = iVar8;
      return;
    }
    return;
  }
  lVar6 = *(longlong *)(lVar5 + 0x28);
  if (*(char *)(lVar5 + 0x59) != '\0') {
    sVar2 = *(short *)(lVar6 + 2);
    lVar7 = *(longlong *)(lVar6 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar6 + 8) + (longlong)sVar2 * 8);
    iVar8 = param_2[2];
    piVar1[1] = (int)param_2[3] >> 10;
    *piVar1 = iVar8 >> 10;
    *(undefined1 *)(lVar7 + sVar2) = 2;
  }
  *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + 1;
  lVar6 = *(longlong *)(lVar5 + 0x28);
  if (*(char *)(lVar5 + 0x59) != '\0') {
    sVar2 = *(short *)(lVar6 + 2);
    lVar7 = *(longlong *)(lVar6 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar6 + 8) + (longlong)sVar2 * 8);
    iVar8 = param_2[4];
    piVar1[1] = (int)param_2[5] >> 10;
    *piVar1 = iVar8 >> 10;
    *(undefined1 *)(lVar7 + sVar2) = 2;
  }
  *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + 1;
  lVar6 = *(longlong *)(lVar5 + 0x28);
  if (*(char *)(lVar5 + 0x59) != '\0') {
    sVar2 = *(short *)(lVar6 + 2);
    lVar5 = *(longlong *)(lVar6 + 0x10);
    piVar1 = (int *)(*(longlong *)(lVar6 + 8) + (longlong)sVar2 * 8);
    iVar8 = param_2[6];
    piVar1[1] = (int)param_2[7] >> 10;
    *piVar1 = iVar8 >> 10;
    *(undefined1 *)(lVar5 + sVar2) = 1;
  }
  *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + 1;
  return;
}



// FUNCTION 143c461e0 FUN_143c461e0 body=156 status=ok
// SIG undefined FUN_143c461e0(void)

void FUN_143c461e0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar3 + 0x58) == '\0') {
    uVar1 = param_2[1];
    uVar2 = *param_2;
    *(undefined1 *)(lVar3 + 0x58) = 1;
    iVar4 = FUN_143c4a9a0(lVar3);
    if (iVar4 == 0) {
      iVar4 = FUN_143c4aa20(lVar3,uVar2,uVar1);
      if (iVar4 == 0) goto LAB_143c46243;
    }
    if (**(int **)(param_1 + 0x30) == 0) {
      **(int **)(param_1 + 0x30) = iVar4;
    }
  }
  else {
LAB_143c46243:
    iVar4 = FUN_143c4aa20(lVar3,param_2[2],param_2[3]);
    if ((iVar4 != 0) && (**(int **)(param_1 + 0x30) == 0)) {
      **(int **)(param_1 + 0x30) = iVar4;
    }
  }
  return;
}



// FUNCTION 143c46280 cf2_builder_moveTo body=28 status=ok
// SIG undefined cf2_builder_moveTo(void)

void cf2_builder_moveTo(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  FUN_143c4aab0(lVar1);
  *(undefined1 *)(lVar1 + 0x58) = 0;
  return;
}



// FUNCTION 143c462a0 FUN_143c462a0 body=524 status=ok
// SIG undefined FUN_143c462a0(void)

void FUN_143c462a0(int param_1,undefined4 param_2,int param_3,int *param_4,int param_5,char param_6,
                  int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  *param_4 = 0;
  if ((param_5 == 0) && (param_6 == '\0')) {
    return;
  }
  if (param_1 < 0x28f) {
    return;
  }
  if (param_6 == '\0') goto LAB_143c4649b;
  iVar9 = *param_7;
  iVar1 = param_7[1];
  iVar8 = param_7[4];
  iVar2 = param_7[2];
  iVar3 = param_7[3];
  iVar11 = param_7[5];
  iVar10 = param_7[7];
  iVar4 = param_7[6];
  iVar5 = FUN_143c22100(param_3 + param_5,param_1);
  iVar6 = FUN_143c21b70(iVar5);
  iVar7 = FUN_143c21b70(param_2);
  if (iVar6 + iVar7 < 0x2e) {
    iVar6 = FUN_143c22100(iVar5,param_2);
  }
  else {
    iVar6 = iVar4 << 0x10;
  }
  iVar7 = iVar9 * 0x10000;
  if (iVar6 < iVar7) {
LAB_143c4645d:
    iVar9 = FUN_143c20070(iVar1 << 0x10,param_2);
    *param_4 = iVar9;
  }
  else {
    if (iVar6 < iVar2 << 0x10) {
      iVar9 = iVar2 - iVar9;
      iVar6 = FUN_143c20070(iVar7,param_2);
      iVar6 = iVar5 - iVar6;
      if (iVar9 == 0) {
LAB_143c46424:
        iVar9 = iVar8 - iVar2;
        iVar6 = FUN_143c20070(iVar2 << 0x10,param_2);
        iVar6 = iVar5 - iVar6;
        if (iVar9 == 0) goto LAB_143c463db;
        iVar10 = iVar11 - iVar3;
        iVar11 = iVar3;
      }
      else {
        iVar10 = iVar3 - iVar1;
        iVar11 = iVar1;
      }
    }
    else {
      if (iVar6 < iVar8 << 0x10) goto LAB_143c46424;
      iVar1 = iVar10;
      if (iVar4 << 0x10 <= iVar6) goto LAB_143c4645d;
LAB_143c463db:
      iVar9 = iVar4 - iVar8;
      iVar6 = FUN_143c20070(iVar8 << 0x10,param_2);
      iVar6 = iVar5 - iVar6;
      iVar1 = iVar10;
      if (iVar9 == 0) goto LAB_143c4645d;
      iVar10 = iVar10 - iVar11;
    }
    iVar9 = FUN_143c21f00(iVar6,iVar10,iVar9);
    iVar8 = FUN_143c20070(iVar11 << 0x10,param_2);
    *param_4 = iVar9 + iVar8;
  }
  iVar9 = FUN_143c20070(*param_4,param_1 * 2);
  *param_4 = iVar9;
LAB_143c4649b:
  *param_4 = *param_4 + param_5 / 2;
  return;
}



// FUNCTION 143c464b0 FUN_143c464b0 body=654 status=ok
// SIG undefined FUN_143c464b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143c464b0(undefined8 *param_1,longlong param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar4 = *param_1;
  local_68 = 0;
  puVar13 = *(undefined8 **)(param_1[0xe] + 0x1068);
  if (puVar13 == (undefined8 *)0x0) {
    *(code **)(param_1[0xe] + 0x1070) = FUN_140447710;
    uVar12 = FUN_143c271e0(uVar4,0x240,&local_68);
    *(undefined8 *)(param_1[0xe] + 0x1068) = uVar12;
    if (local_68 != 0) {
      return 0x40;
    }
    puVar13 = *(undefined8 **)(param_1[0xe] + 0x1068);
    *puVar13 = uVar4;
    puVar13[0xf] = 0;
    puVar13[0x11] = 0;
    puVar13[0x14] = 0;
    puVar13[0x13] = puVar13 + 1;
    puVar13[0xd] = cf2_builder_moveTo;
    puVar13[0xe] = FUN_143c461e0;
    puVar13[0x10] = FUN_143c46070;
    puVar13[0x12] = uVar4;
  }
  puVar13[0x15] = param_1;
  puVar13[0x14] = param_1;
  lVar5 = param_1[2];
  lVar6 = *(longlong *)(param_1[1] + 0x90);
  cVar1 = *(char *)(lVar5 + 0xf8);
  cVar2 = *(char *)(lVar5 + 0xf9);
  local_60 = 0;
  local_50 = (ulonglong)param_3 + param_2;
  local_30 = 0;
  if (cVar1 == '\0') {
    uVar9 = 0x400;
    local_40 = 0x400;
    uVar10 = 0x400;
    uVar7 = 0x400;
  }
  else {
    iVar8 = *(int *)(lVar5 + 0xfc) + 0x20;
    uVar9 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fU)) >> 6;
    local_40 = (ulonglong)uVar9;
    iVar8 = *(int *)(lVar5 + 0x100) + 0x20;
    uVar10 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fU)) >> 6;
    uVar7 = (ulonglong)uVar10;
  }
  local_38 = uVar7 << 0x20;
  *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
  uVar11 = *(undefined4 *)((longlong)puVar13 + 0xc);
  if (cVar1 != '\0') {
    uVar11 = 1;
  }
  *(undefined4 *)((longlong)puVar13 + 0xc) = uVar11;
  if ((cVar2 != '\0') && (*(char *)(lVar6 + 0x3c) == '\0')) {
    *(uint *)((longlong)puVar13 + 0xc) = *(uint *)((longlong)puVar13 + 0xc) | 2;
  }
  *(undefined4 *)((longlong)puVar13 + 0xbc) = *(undefined4 *)(lVar6 + 0x40);
  *(undefined4 *)(puVar13 + 0x18) = *(undefined4 *)(lVar6 + 0x44);
  *(undefined4 *)((longlong)puVar13 + 0xc4) = *(undefined4 *)(lVar6 + 0x48);
  *(undefined4 *)(puVar13 + 0x19) = *(undefined4 *)(lVar6 + 0x4c);
  *(undefined4 *)((longlong)puVar13 + 0xcc) = *(undefined4 *)(lVar6 + 0x50);
  *(undefined4 *)(puVar13 + 0x1a) = *(undefined4 *)(lVar6 + 0x54);
  *(undefined4 *)((longlong)puVar13 + 0xd4) = *(undefined4 *)(lVar6 + 0x58);
  *(undefined4 *)(puVar13 + 0x1b) = *(undefined4 *)(lVar6 + 0x5c);
  uVar3 = *(ushort *)(param_1[1] + 0x68);
  *(uint *)((longlong)puVar13 + 0x5c) = (uint)uVar3;
  local_58 = param_2;
  local_48 = param_2;
  if (cVar2 != '\0') {
    if (((int)uVar9 < 1) || ((int)uVar10 < 1)) {
      return 0x24;
    }
    if (((0x7fff < uVar3) ||
        (iVar8 = FUN_143c20070(0x7d00000,(ulonglong)uVar3 << 0x10), iVar8 < (int)uVar9)) ||
       (iVar8 < (int)uVar10)) {
      return 0xa4;
    }
  }
  iVar8 = FUN_143c46fa0(puVar13,&local_60,&local_40,&local_64);
  if (iVar8 == 0) {
    *(int *)(puVar13[0x14] + 0x328) = (int)(short)((uint)(local_64 + 0x8000) >> 0x10);
    uVar11 = 0;
  }
  else {
    uVar11 = 3;
  }
  return uVar11;
}



// FUNCTION 143c46740 FUN_143c46740 body=919 status=ok
// SIG undefined FUN_143c46740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c46740(longlong param_1,int *param_2,int *param_3,undefined8 param_4,longlong param_5,
                  char param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  int local_90 [6];
  undefined4 local_78 [4];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar4 = 0;
  iVar11 = 0;
  local_90[0] = *param_2;
  local_90[1] = *param_3;
  iVar12 = 0;
  bVar13 = *(char *)(param_5 + 9) == '\0';
  lVar6 = 10 - (ulonglong)bVar13;
  if (0 < lVar6) {
    piVar8 = local_90 + 2;
    uVar10 = uVar4;
    do {
      iVar3 = piVar8[-2];
      *piVar8 = iVar3;
      if (*(char *)(uVar10 + param_5) != '\0') {
        if ((uint)uVar4 < (uint)((*(longlong *)(param_1 + 400) - param_1) + -0x10 >> 3)) {
          iVar5 = *(int *)(param_1 + 0x14 + uVar4 * 8);
          if (iVar5 == 1) {
            iVar5 = *(int *)(param_1 + 0x10 + uVar4 * 8);
            if (iVar5 < 0) {
              iVar2 = -(0x2000 - iVar5 >> 0xe);
            }
            else {
              iVar2 = iVar5 + 0x2000 >> 0xe;
            }
          }
          else {
            iVar2 = *(int *)(param_1 + 0x10 + uVar4 * 8);
            if (iVar5 == 2) {
              iVar2 = iVar2 << 0x10;
            }
          }
        }
        else {
          piVar1 = *(int **)(param_1 + 8);
          iVar2 = iVar11;
          if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            *piVar1 = 0x82;
          }
        }
        *piVar8 = iVar2 + iVar3;
        uVar4 = (ulonglong)((uint)uVar4 + 1);
      }
      uVar10 = uVar10 + 1;
      piVar8 = piVar8 + 1;
    } while ((longlong)uVar10 < lVar6);
  }
  uVar9 = (uint)uVar4;
  if (bVar13) {
    local_64 = *param_3;
  }
  if (param_6 == '\0') {
    if (*(char *)(param_5 + 10) == '\0') {
      local_68 = *param_2;
    }
    else if (uVar9 < (uint)((*(longlong *)(param_1 + 400) - param_1) + -0x10 >> 3)) {
      iVar11 = *(int *)(param_1 + 0x14 + uVar4 * 8);
      if (iVar11 == 1) {
        iVar11 = *(int *)(param_1 + 0x10 + uVar4 * 8);
        if (-1 < iVar11) {
          iVar3 = iVar11 + 0x2000 >> 0xe;
          goto LAB_143c46a34;
        }
        local_68 = local_68 - (0x2000 - iVar11 >> 0xe);
        uVar9 = uVar9 + 1;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x10 + uVar4 * 8);
        if (iVar11 == 2) {
          local_68 = local_68 + iVar3 * 0x10000;
          uVar9 = uVar9 + 1;
        }
        else {
LAB_143c46a34:
          local_68 = local_68 + iVar3;
          uVar9 = uVar9 + 1;
        }
      }
    }
    else {
      piVar8 = *(int **)(param_1 + 8);
      if ((piVar8 != (int *)0x0) && (*piVar8 == 0)) {
        *piVar8 = 0x82;
      }
      uVar9 = uVar9 + 1;
    }
    local_60 = local_68;
    if (*(char *)(param_5 + 0xb) != '\0') {
      if (uVar9 < (uint)((*(longlong *)(param_1 + 400) - param_1) + -0x10 >> 3)) {
        uVar4 = (ulonglong)uVar9;
        iVar11 = *(int *)(param_1 + 0x14 + uVar4 * 8);
        if (iVar11 == 1) {
          iVar12 = *(int *)(param_1 + 0x10 + uVar4 * 8);
          if (iVar12 < 0) {
            iVar12 = local_64 - (0x2000 - iVar12 >> 0xe);
            goto LAB_143c4691a;
          }
          iVar12 = iVar12 + 0x2000 >> 0xe;
        }
        else {
          iVar12 = *(int *)(param_1 + 0x10 + uVar4 * 8);
          if (iVar11 == 2) {
            iVar12 = local_64 + iVar12 * 0x10000;
            goto LAB_143c4691a;
          }
        }
      }
      else {
        piVar8 = *(int **)(param_1 + 8);
        if ((piVar8 != (int *)0x0) && (*piVar8 == 0)) {
          *piVar8 = 0x82;
          iVar12 = local_64;
          goto LAB_143c4691a;
        }
      }
      iVar12 = local_64 + iVar12;
      goto LAB_143c4691a;
    }
  }
  else {
    iVar3 = local_68 - *param_2;
    if (iVar3 < 0) {
      iVar3 = *param_2 - local_68;
    }
    iVar5 = local_64 - *param_3;
    if (iVar5 < 0) {
      iVar5 = *param_3 - local_64;
    }
    if (uVar9 < (uint)((*(longlong *)(param_1 + 400) - param_1) + -0x10 >> 3)) {
      iVar11 = *(int *)(param_1 + 0x14 + uVar4 * 8);
      if (iVar11 == 1) {
        iVar12 = *(int *)(param_1 + 0x10 + uVar4 * 8);
        if (iVar12 < 0) {
          iVar12 = -(0x2000 - iVar12 >> 0xe);
        }
        else {
          iVar12 = iVar12 + 0x2000 >> 0xe;
        }
      }
      else {
        iVar12 = *(int *)(param_1 + 0x10 + uVar4 * 8);
        if (iVar11 == 2) {
          iVar12 = iVar12 << 0x10;
        }
      }
    }
    else {
      piVar8 = *(int **)(param_1 + 8);
      if ((piVar8 != (int *)0x0) && (*piVar8 == 0)) {
        *piVar8 = 0x82;
        iVar12 = iVar11;
      }
    }
    if (iVar3 <= iVar5) {
      local_60 = *param_2;
      iVar12 = local_64 + iVar12;
      goto LAB_143c4691a;
    }
    local_68 = local_68 + iVar12;
    local_60 = local_68;
  }
  iVar12 = *param_3;
  local_60 = local_68;
LAB_143c4691a:
  iVar11 = local_60;
  puVar7 = local_78;
  local_5c = iVar12;
  lVar6 = 2;
  local_98 = param_4;
  do {
    local_a8 = puVar7[1];
    local_b0 = *puVar7;
    local_b8 = puVar7[-1];
    FUN_143c47610(param_4,puVar7[-4],puVar7[-3],puVar7[-2]);
    puVar7 = puVar7 + 6;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(longlong *)(param_1 + 400) = param_1 + 0x10;
  *param_2 = iVar11;
  *param_3 = iVar12;
  return;
}



// FUNCTION 143c46ae0 FUN_143c46ae0 body=592 status=ok
// SIG undefined FUN_143c46ae0(void)

void FUN_143c46ae0(longlong param_1,longlong param_2,longlong param_3,int *param_4,char *param_5,
                  int param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 local_48 [4];
  int local_44;
  int local_40;
  undefined8 local_3c;
  ulonglong uVar7;
  
  uVar9 = (*(longlong *)(param_2 + 400) - param_2) + -0x10 >> 3;
  uVar8 = (uint)uVar9;
  iVar5 = 0;
  if (((uVar9 & 1) != 0) && (*param_5 == '\0')) {
    if (uVar8 == 0) {
      piVar1 = *(int **)(param_2 + 8);
      iVar3 = iVar5;
      if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
        *piVar1 = 0x82;
      }
    }
    else if (*(int *)(param_2 + 0x14) == 1) {
      iVar3 = *(int *)(param_2 + 0x10);
      if (iVar3 < 0) {
        iVar3 = -(0x2000 - iVar3 >> 0xe);
      }
      else {
        iVar3 = iVar3 + 0x2000 >> 0xe;
      }
    }
    else {
      iVar3 = *(int *)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x14) == 2) {
        iVar3 = *(int *)(param_2 + 0x10) << 0x10;
      }
    }
    *param_4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3f0) + 0x214) * 0x10000 +
               iVar3;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x331) == '\0') {
    bVar10 = (uVar9 & 1) != 0;
    uVar9 = (ulonglong)bVar10;
    if (bVar10 < uVar8) {
      uVar6 = bVar10 + 1;
      do {
        uVar7 = (ulonglong)uVar6;
        if ((uint)uVar9 < (uint)((*(longlong *)(param_2 + 400) - param_2) + -0x10 >> 3)) {
          iVar3 = *(int *)(param_2 + 0x14 + uVar9 * 8);
          if (iVar3 == 1) {
            iVar3 = *(int *)(param_2 + 0x10 + uVar9 * 8);
            if (iVar3 < 0) {
              local_44 = -(0x2000 - iVar3 >> 0xe);
            }
            else {
              local_44 = iVar3 + 0x2000 >> 0xe;
            }
          }
          else {
            local_44 = *(int *)(param_2 + 0x10 + uVar9 * 8);
            if (iVar3 == 2) {
              local_44 = local_44 << 0x10;
            }
          }
        }
        else {
          piVar1 = *(int **)(param_2 + 8);
          local_44 = iVar5;
          if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            *piVar1 = 0x82;
          }
        }
        local_44 = param_6 + local_44;
        if (uVar6 < (uint)((*(longlong *)(param_2 + 400) - param_2) + -0x10 >> 3)) {
          iVar3 = *(int *)(param_2 + 0x14 + uVar7 * 8);
          if (iVar3 == 1) {
            iVar3 = *(int *)(param_2 + 0x10 + uVar7 * 8);
            if (iVar3 < 0) {
              param_6 = -(0x2000 - iVar3 >> 0xe);
            }
            else {
              param_6 = iVar3 + 0x2000 >> 0xe;
            }
          }
          else {
            param_6 = *(int *)(param_2 + 0x10 + uVar7 * 8);
            if (iVar3 == 2) {
              param_6 = param_6 << 0x10;
            }
          }
        }
        else {
          piVar1 = *(int **)(param_2 + 8);
          param_6 = iVar5;
          if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            *piVar1 = 0x82;
          }
        }
        param_6 = local_44 + param_6;
        local_48[0] = 0;
        local_3c = 0;
        local_40 = param_6;
        if ((*(longlong *)(param_3 + 0x28) != *(longlong *)(param_3 + 0x18)) ||
           (cVar2 = FUN_143c458c0(param_3,*(longlong *)(param_3 + 0x20) +
                                          *(longlong *)(param_3 + 0x18)), cVar2 != '\0')) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(size_t *)(param_3 + 0x10) * *(longlong *)(param_3 + 0x28) +
                             *(longlong *)(param_3 + 0x38)),local_48,*(size_t *)(param_3 + 0x10));
          *(longlong *)(param_3 + 0x28) = *(longlong *)(param_3 + 0x28) + 1;
        }
        uVar4 = (uint)uVar9 + 2;
        uVar9 = (ulonglong)uVar4;
        uVar6 = uVar6 + 2;
      } while (uVar4 < uVar8);
    }
    *(longlong *)(param_2 + 400) = param_2 + 0x10;
  }
  *param_5 = '\x01';
  return;
}



// FUNCTION 143c46d30 FUN_143c46d30 body=620 status=ok
// SIG undefined FUN_143c46d30(void)

void FUN_143c46d30(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  iVar9 = *(int *)(param_1 + 0x60);
  uVar1 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = *(longlong *)(lVar2 + 0x3f0);
  bVar12 = *(longlong *)(param_1 + 0xb0) != lVar3;
  if (bVar12) {
    *(longlong *)(param_1 + 0xb0) = lVar3;
  }
  iVar6 = (uint)*(ushort *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x80) + 0x1a) << 0x10;
  bVar13 = *(int *)(param_1 + 0x58) != iVar6;
  if (bVar13) {
    *(int *)(param_1 + 0x58) = iVar6;
  }
  bVar13 = bVar13 || bVar12;
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xc) & 1;
  if ((*param_2 != *(longlong *)(param_1 + 0x10)) || (param_2[1] != *(longlong *)(param_1 + 0x18)))
  {
    lVar3 = param_2[1];
    bVar13 = true;
    *(longlong *)(param_1 + 0x10) = *param_2;
    *(longlong *)(param_1 + 0x18) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
    uVar7 = *(undefined4 *)((longlong)param_2 + 4);
    lVar3 = param_2[1];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)(param_1 + 0x28) = (int)*param_2;
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
    *(int *)(param_1 + 0x30) = (int)lVar3;
    *(undefined4 *)(param_1 + 0x34) = uVar5;
    *(longlong *)(param_1 + 0x38) = param_2[2];
    *(undefined4 *)(param_1 + 0x4c) = 0x10000;
    *(undefined8 *)(param_1 + 0x40) = 0x10000;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(byte *)(param_1 + 0xba) == ((byte)*(undefined4 *)(param_1 + 0xc) & 2)) {
    if (!bVar13) {
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xc) & 2;
  }
  iVar6 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar6 = 1000;
  }
  iVar4 = *(int *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x58) < 0x40000) {
    iVar4 = 0x40000;
  }
  uVar11 = 0x3e80000 / (longlong)iVar6 & 0xffffffff;
  iVar8 = *(int *)(*(longlong *)(lVar2 + 0x3f0) + 0x184);
  *(int *)(param_1 + 0xdc) = iVar8 << 0x10;
  if (iVar8 << 0x10 < 1) {
    uVar7 = FUN_143c20070(0x4b0000,uVar11);
    *(undefined4 *)(param_1 + 0xdc) = uVar7;
  }
  if (iVar9 < 1) {
    FUN_143c462a0(uVar11,iVar4,*(undefined4 *)(param_1 + 0xdc),param_1 + 0xe4,0,
                  *(undefined1 *)(param_1 + 0xba),param_1 + 0xbc);
  }
  else {
    iVar8 = FUN_143c20070(iVar6 << 0x10);
    if (iVar9 <= iVar8) {
      iVar9 = FUN_143c20070(iVar6 << 0x10,iVar4);
    }
    *(int *)(param_1 + 0xe4) = 0;
    if ((iVar9 != 0) && (0x28e < (int)(0x3e80000 / (longlong)iVar6))) {
      *(int *)(param_1 + 0xe4) = iVar9 / 2;
    }
  }
  iVar9 = *(int *)(*(longlong *)(lVar2 + 0x3f0) + 0x180);
  if ((iVar9 << 0x10 < 1) || (uVar10 = 0x4b0000, *(int *)(param_1 + 0xdc) <= iVar9 * 0x20000)) {
    uVar10 = 0x6e0000;
  }
  uVar7 = FUN_143c20070(uVar10,uVar11);
  *(undefined4 *)(param_1 + 0xe0) = uVar7;
  FUN_143c462a0(uVar11,iVar4,*(undefined4 *)(param_1 + 0xe0),param_1 + 0xe8,uVar1,
                *(undefined1 *)(param_1 + 0xba),param_1 + 0xbc);
  if ((*(int *)(param_1 + 0xe4) == 0) && (*(int *)(param_1 + 0xe8) == 0)) {
    *(undefined1 *)(param_1 + 0xb9) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xb9) = 1;
  }
  *(undefined1 *)(param_1 + 0xec) = 0;
  FUN_143c45b30(param_1 + 0xf0,param_1);
  return;
}



// FUNCTION 143c46fa0 FUN_143c46fa0 body=374 status=ok
// SIG undefined FUN_143c46fa0(void)

int FUN_143c46fa0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 local_res8 [2];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res18 = *(undefined4 *)(param_3 + 0x10);
  local_res1c = *(undefined4 *)(param_3 + 0x14);
  local_res8[0] = 0;
  FUN_143c46d30(param_1,param_3);
  piVar1 = (int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined1 *)(param_1 + 0xec) = 0;
    cVar4 = *(char *)(param_1 + 0xb9);
    *(undefined4 *)(param_1 + 0x88) = 0;
    FT_GlyphLoader_Rewind(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18));
    FUN_143c48e80(param_1,param_2,param_1 + 0x68,&local_res18,0,0,0,local_res8);
    iVar2 = *piVar1;
    while (iVar2 == 0) {
      if ((cVar4 == '\0') || (-1 < *(int *)(param_1 + 0x88))) {
        lVar3 = *(longlong *)(param_1 + 0xa0);
        FUN_143c4aab0(lVar3);
        FUN_143c20ca0(*(undefined8 *)(lVar3 + 0x18));
        break;
      }
      *(undefined1 *)(param_1 + 0xec) = 1;
      cVar4 = '\0';
      *(undefined4 *)(param_1 + 0x88) = 0;
      FT_GlyphLoader_Rewind(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18));
      FUN_143c48e80(param_1,param_2,param_1 + 0x68,&local_res18,0,0,0,local_res8);
      iVar2 = *piVar1;
    }
  }
  *param_4 = local_res8[0];
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return 0;
  }
  return *piVar1;
}



// FUNCTION 143c47120 FUN_143c47120 body=240 status=ok
// SIG undefined FUN_143c47120(void)

undefined8 FUN_143c47120(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  short sVar7;
  uint local_res8 [6];
  longlong local_res20;
  longlong local_18;
  uint local_10;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + 0x48) == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x4c8);
    if ((lVar3 != 0) && ((uint)param_2 < 0x100)) {
      if ((uint)param_2 < 0x100) {
        sVar7 = *(short *)(&DAT_145d23f40 + (param_2 & 0xffffffff) * 2);
      }
      else {
        sVar7 = 0;
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0x14);
      param_2 = 0;
      if (uVar1 != 0) {
        do {
          if (*(short *)(lVar3 + param_2 * 2) == sVar7) {
            if (-1 < (int)param_2) goto LAB_143c471a4;
            break;
          }
          uVar6 = (int)param_2 + 1;
          param_2 = (ulonglong)uVar6;
        } while (uVar6 < uVar1);
      }
    }
    uVar5 = 0x12;
  }
  else {
LAB_143c471a4:
    puVar4 = *(undefined8 **)(*(longlong *)(lVar2 + 0xd0) + 0x48);
    if (puVar4 == (undefined8 *)0x0) {
      uVar5 = FUN_143c4c0e0(*(longlong *)(lVar2 + 0x380) + 0x4e0,param_2,&local_res20,local_res8);
      local_18 = local_res20;
      local_10 = local_res8[0];
    }
    else {
      uVar5 = (**(code **)*puVar4)(puVar4[1],param_2,&local_18);
    }
    if ((int)uVar5 == 0) {
      param_3[1] = local_18;
      param_3[2] = (ulonglong)local_10 + local_18;
      param_3[3] = local_18;
      return 0;
    }
  }
  return uVar5;
}



// FUNCTION 143c47210 FUN_143c47210 body=112 status=ok
// SIG undefined FUN_143c47210(void)

void FUN_143c47210(longlong param_1)

{
  if (*(char *)(param_1 + 0x48dc) != '\0') {
    *(undefined1 *)(param_1 + 0x48dd) = 1;
    FUN_143c47af0(param_1,*(undefined4 *)(param_1 + 0x4938),*(undefined4 *)(param_1 + 0x493c));
    if (*(char *)(param_1 + 0x4940) != '\0') {
      FUN_143c47e50(param_1,param_1 + 0x10,param_1 + 0x4918,*(undefined8 *)(param_1 + 0x4920),1);
    }
    *(undefined1 *)(param_1 + 0x48df) = 1;
    *(undefined2 *)(param_1 + 0x48dc) = 0;
    *(undefined1 *)(param_1 + 0x4940) = 0;
  }
  return;
}



// FUNCTION 143c47280 FUN_143c47280 body=483 status=ok
// SIG undefined FUN_143c47280(void)

ulonglong FUN_143c47280(longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                       int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = param_3[1];
  iVar7 = param_2[1];
  iVar1 = *param_4;
  iVar2 = param_4[1];
  iVar3 = *param_2;
  iVar4 = param_2[1];
  iVar12 = (param_5[1] - iVar2) + 0x10 >> 5;
  iVar11 = (*param_5 - iVar1) + 0x10 >> 5;
  iVar5 = FUN_143c22100((*param_3 - *param_2) + 0x10 >> 5,iVar12);
  uVar9 = FUN_143c22100((iVar6 - iVar7) + 0x10 >> 5,iVar11);
  iVar5 = iVar5 - (int)uVar9;
  if (iVar5 != 0) {
    iVar6 = FUN_143c22100((iVar1 - iVar3) + 0x10 >> 5,iVar12);
    iVar7 = FUN_143c22100((iVar2 - iVar4) + 0x10 >> 5,iVar11);
    uVar8 = FUN_143c20070(iVar6 - iVar7,iVar5);
    iVar5 = FUN_143c22100(uVar8,*param_3 - *param_2);
    *param_6 = iVar5 + *param_2;
    iVar5 = FUN_143c22100(uVar8,param_3[1] - param_2[1]);
    param_6[1] = iVar5 + param_2[1];
    iVar5 = *param_2;
    if (iVar5 == *param_3) {
      iVar6 = *param_6 - iVar5;
      if (iVar6 < 0) {
        iVar6 = iVar5 - *param_6;
      }
      if (iVar6 < *(int *)(param_1 + 0x4914)) {
        *param_6 = iVar5;
      }
    }
    iVar5 = param_2[1];
    if (iVar5 == param_3[1]) {
      iVar6 = param_6[1];
      iVar7 = iVar6 - iVar5;
      if (iVar7 < 0) {
        iVar7 = iVar5 - iVar6;
      }
      if (iVar7 < *(int *)(param_1 + 0x4914)) {
        iVar6 = iVar5;
      }
      param_6[1] = iVar6;
    }
    iVar5 = *param_4;
    if (iVar5 == *param_5) {
      iVar6 = *param_6 - iVar5;
      if (iVar6 < 0) {
        iVar6 = iVar5 - *param_6;
      }
      if (iVar6 < *(int *)(param_1 + 0x4914)) {
        *param_6 = iVar5;
      }
    }
    iVar5 = param_4[1];
    if (iVar5 == param_5[1]) {
      iVar6 = param_6[1];
      iVar7 = iVar6 - iVar5;
      if (iVar7 < 0) {
        iVar7 = iVar5 - iVar6;
      }
      if (iVar7 < *(int *)(param_1 + 0x4914)) {
        iVar6 = iVar5;
      }
      param_6[1] = iVar6;
    }
    iVar5 = (*param_3 + *param_4) / 2;
    uVar10 = *param_6 - iVar5;
    if ((int)uVar10 < 0) {
      uVar10 = iVar5 - *param_6;
    }
    uVar9 = (ulonglong)uVar10;
    if ((int)uVar10 <= *(int *)(param_1 + 0x4910)) {
      iVar5 = (param_4[1] + param_3[1]) / 2;
      uVar10 = param_6[1] - iVar5;
      if ((int)uVar10 < 0) {
        uVar10 = iVar5 - param_6[1];
      }
      uVar9 = (ulonglong)uVar10;
      if ((int)uVar10 <= *(int *)(param_1 + 0x4910)) {
        return CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
      }
    }
  }
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 143c47470 FUN_143c47470 body=405 status=ok
// SIG undefined FUN_143c47470(void)

void FUN_143c47470(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                  int *param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  param_4 = param_4 - param_2;
  param_5 = param_5 - param_3;
  iVar2 = param_4;
  iVar3 = param_5;
  if (*(char *)(*param_1 + 0xec) != '\0') {
    iVar2 = -param_4;
    iVar3 = -param_5;
  }
  *param_7 = 0;
  *param_6 = 0;
  if (*(char *)((longlong)param_1 + 0x48de) == '\0') {
    return;
  }
  *(int *)(param_1[1] + 0x20) =
       *(int *)(param_1[1] + 0x20) +
       ((param_5 >> 0x10) * (param_2 >> 0x10) - (param_4 >> 0x10) * (param_3 >> 0x10));
  if (iVar2 < 0) {
    if (iVar3 < 0) {
      if (-iVar2 <= iVar3 * -2) {
        if (iVar2 * -2 < -iVar3) goto LAB_143c47553;
        uVar1 = 0xffff4cce;
        goto LAB_143c475d1;
      }
    }
    else if (-iVar2 <= iVar3 * 2) {
      if (iVar2 * -2 < iVar3) goto LAB_143c47505;
      uVar1 = 0xb333;
LAB_143c475d1:
      iVar2 = FUN_143c22100(uVar1,(int)param_1[0x921]);
      uVar1 = 0x1b333;
      goto LAB_143c475e1;
    }
    *param_6 = 0;
    iVar2 = *(int *)((longlong)param_1 + 0x490c) * 2;
  }
  else {
    if (iVar3 < 0) {
      if (iVar3 * -2 < iVar2) goto LAB_143c4753e;
      if (iVar2 * 2 < -iVar3) {
LAB_143c47553:
        *param_6 = -(int)param_1[0x921];
        iVar2 = *(int *)((longlong)param_1 + 0x490c);
        goto LAB_143c475ee;
      }
      iVar2 = FUN_143c22100(0xffff4cce,(int)param_1[0x921]);
      uVar1 = 0x4ccd;
    }
    else {
      if (iVar3 * 2 < iVar2) {
LAB_143c4753e:
        *param_6 = 0;
        *param_7 = 0;
        return;
      }
      if (iVar2 * 2 < iVar3) {
LAB_143c47505:
        *param_6 = (int)param_1[0x921];
        iVar2 = *(int *)((longlong)param_1 + 0x490c);
        goto LAB_143c475ee;
      }
      iVar2 = FUN_143c22100(0xb333,(int)param_1[0x921]);
      uVar1 = 0x4ccd;
    }
LAB_143c475e1:
    *param_6 = iVar2;
    iVar2 = FUN_143c22100(uVar1,*(undefined4 *)((longlong)param_1 + 0x490c));
  }
LAB_143c475ee:
  *param_7 = iVar2;
  return;
}



// FUNCTION 143c47610 FUN_143c47610 body=519 status=ok
// SIG undefined FUN_143c47610(void)

void FUN_143c47610(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  uint param_7)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_res8;
  int iStackX_c;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  uint uVar4;
  int *piVar5;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  
  FUN_143c47470(param_1,*(undefined4 *)(param_1 + 0x4928),*(undefined4 *)(param_1 + 0x492c),param_2,
                param_3,local_res10,local_res18);
  piVar5 = local_res20;
  uVar4 = param_7;
  FUN_143c47470(param_1,param_4,param_5,param_6,param_7,piVar5,&local_res8);
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x20);
  *piVar1 = *piVar1 + ((param_5 - param_3 >> 0x10) * (param_2 >> 0x10) -
                      (param_4 - param_2 >> 0x10) * (param_3 >> 0x10));
  local_58 = *(int *)(param_1 + 0x4928) + local_res10[0];
  iStack_54 = *(int *)(param_1 + 0x492c) + local_res18[0];
  local_50 = local_res10[0] + param_2;
  iStack_4c = local_res18[0] + param_3;
  uVar2 = CONCAT44(iStack_4c,local_50);
  local_48 = local_res20[0] + param_4;
  iStack_44 = local_res8 + param_5;
  uVar3 = CONCAT44(iStack_54,local_58);
  iStackX_c = local_res8 + param_7;
  local_res8 = local_res20[0] + param_6;
  if (*(char *)(param_1 + 0x48df) != '\0') {
    FUN_143c47da0(param_1,uVar3);
    *(undefined1 *)(param_1 + 0x48df) = 0;
    *(undefined1 *)(param_1 + 0x48dc) = 1;
    *(undefined8 *)(param_1 + 0x4920) = uVar2;
  }
  if (*(char *)(param_1 + 0x4940) != '\0') {
    FUN_143c47e50(param_1,param_1 + 0x10,&local_58,uVar2,uVar4 & 0xffffff00);
    uVar3 = CONCAT44(iStack_54,local_58);
  }
  *(ulonglong *)(param_1 + 0x4958) = CONCAT44(iStack_44,local_48);
  *(ulonglong *)(param_1 + 0x4960) = CONCAT44(iStackX_c,local_res8);
  *(undefined1 *)(param_1 + 0x4940) = 1;
  *(undefined4 *)(param_1 + 0x4944) = 4;
  *(undefined8 *)(param_1 + 0x4948) = uVar3;
  *(undefined8 *)(param_1 + 0x4950) = uVar2;
  if (*(char *)(*(longlong *)(param_1 + 0x48f0) + 9) != '\0') {
    FUN_143c48420(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48e0),*(undefined8 *)(param_1 + 0x48e8)
                  ,*(longlong *)(param_1 + 0x48f0),*(undefined4 *)(param_1 + 0x48f8),
                  (ulonglong)piVar5 & 0xffffffffffffff00);
  }
  *(uint *)(param_1 + 0x492c) = param_7;
  *(int *)(param_1 + 0x4928) = param_6;
  return;
}



// FUNCTION 143c47820 FUN_143c47820 body=191 status=ok
// SIG undefined FUN_143c47820(void)

void FUN_143c47820(longlong *param_1,undefined8 param_2,int *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_143c22100((int)param_1[0x919],param_4);
  iVar2 = FUN_143c22100(*(undefined4 *)((longlong)param_1 + 0x48cc),param_5);
  uVar3 = FUN_143c48cb0(param_2,param_5);
  iVar4 = FUN_143c22100(*(undefined4 *)(*param_1 + 0x48),uVar3);
  iVar5 = FUN_143c22100(*(undefined4 *)(*param_1 + 0x40),iVar1 + iVar2);
  *param_3 = iVar4 + iVar5 + *(int *)((longlong)param_1 + 0x48d4);
  iVar4 = FUN_143c22100(*(undefined4 *)(*param_1 + 0x4c),uVar3);
  iVar1 = FUN_143c22100(*(undefined4 *)(*param_1 + 0x44),iVar1 + iVar2);
  param_3[1] = iVar4 + iVar1 + (int)param_1[0x91b];
  return;
}



// FUNCTION 143c478e0 FUN_143c478e0 body=514 status=ok
// SIG undefined FUN_143c478e0(void)

void FUN_143c478e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 *param_10)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _guard_xfg_dispatch_icall_nop(param_1,0,0x4968);
  *param_1 = param_2;
  puVar1 = param_1 + 0x911;
  param_1[1] = param_3;
  _Dst = param_1 + 0x60c;
  *puVar1 = *param_2;
  param_1[0x913] = 0x10;
  param_1[0x912] = param_2 + 1;
  param_1[0x915] = 10;
  param_1[0x914] = 0;
  param_1[0x916] = 0;
  param_1[0x917] = 0;
  param_1[0x918] = 0;
  _guard_xfg_dispatch_icall_nop(_Dst,0,0x1828);
  *(undefined1 *)((longlong)param_1 + 0x3079) = *(undefined1 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0x307c) = param_4;
  *_Dst = param_2;
  param_1[0x60d] = _Dst;
  param_1[0x60e] = puVar1;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x307,0,0x1828);
  *(undefined1 *)((longlong)param_1 + 0x1851) = *(undefined1 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0x1854) = param_4;
  param_1[0x307] = param_2;
  param_1[0x308] = _Dst;
  param_1[0x309] = puVar1;
  _guard_xfg_dispatch_icall_nop(param_1 + 2,0,0x1828);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_4;
  param_1[2] = param_2;
  param_1[3] = _Dst;
  param_1[4] = puVar1;
  *(undefined4 *)(param_1 + 0x919) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x48cc) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x91a) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar3 = *param_10;
  param_1[0x91c] = param_5;
  param_1[0x91d] = param_6;
  param_1[0x91e] = param_7;
  *(undefined4 *)(param_1 + 0x91f) = param_8;
  param_1[0x920] = param_9;
  *(undefined8 *)((longlong)param_1 + 0x48d4) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x48de) = *(undefined1 *)((longlong)param_2 + 0xb9);
  iVar2 = *(int *)((longlong)param_2 + 0xe4);
  *(int *)(param_1 + 0x921) = iVar2;
  iVar4 = *(int *)(param_2 + 0x1d);
  *(int *)((longlong)param_1 + 0x490c) = iVar4;
  iVar5 = iVar2;
  if (iVar2 < 0) {
    iVar5 = -iVar2;
  }
  iVar6 = iVar4;
  if (iVar4 < 0) {
    iVar6 = -iVar4;
  }
  if (iVar6 < iVar5) {
    iVar4 = iVar2;
  }
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  *(int *)(param_1 + 0x922) = iVar4 * 2;
  *(undefined4 *)((longlong)param_1 + 0x4914) = 0x199a;
  *(undefined1 *)((longlong)param_1 + 0x48df) = 1;
  *(undefined2 *)((longlong)param_1 + 0x48dc) = 0;
  *(undefined1 *)(param_1 + 0x928) = 0;
  return;
}



// FUNCTION 143c47af0 FUN_143c47af0 body=404 status=ok
// SIG undefined FUN_143c47af0(void)

void FUN_143c47af0(longlong param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  int local_res8;
  int iStackX_c;
  int local_res10 [2];
  int local_res20;
  int iStackX_24;
  uint uVar4;
  int *piVar5;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x48f0) + 9) == '\0') ||
     (*(char *)(param_1 + 0x48dd) != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((*(int *)(param_1 + 0x4928) != param_2) || (*(uint *)(param_1 + 0x492c) != param_3)) ||
     (bVar2)) {
    piVar5 = local_res10;
    uVar4 = param_3;
    FUN_143c47470(param_1,*(int *)(param_1 + 0x4928),*(undefined4 *)(param_1 + 0x492c),param_2,
                  param_3,piVar5,&local_res8);
    local_res20 = *(int *)(param_1 + 0x4928) + local_res10[0];
    iStackX_24 = *(int *)(param_1 + 0x492c) + local_res8;
    local_res10[0] = local_res10[0] + param_2;
    uVar3 = CONCAT44(iStackX_24,local_res20);
    iStackX_c = local_res8 + param_3;
    uVar1 = CONCAT44(iStackX_c,local_res10[0]);
    local_res8 = local_res10[0];
    if (*(char *)(param_1 + 0x48df) != '\0') {
      FUN_143c47da0(param_1,uVar3);
      *(undefined1 *)(param_1 + 0x48df) = 0;
      *(undefined1 *)(param_1 + 0x48dc) = 1;
      *(undefined8 *)(param_1 + 0x4920) = uVar1;
    }
    if (*(char *)(param_1 + 0x4940) != '\0') {
      FUN_143c47e50(param_1,param_1 + 0x10,&local_res20,uVar1,uVar4 & 0xffffff00);
      uVar3 = CONCAT44(iStackX_24,local_res20);
    }
    *(undefined8 *)(param_1 + 0x4948) = uVar3;
    *(undefined8 *)(param_1 + 0x4950) = uVar1;
    *(undefined1 *)(param_1 + 0x4940) = 1;
    *(undefined4 *)(param_1 + 0x4944) = 2;
    if (bVar2) {
      FUN_143c48420(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48e0),
                    *(undefined8 *)(param_1 + 0x48e8),*(undefined8 *)(param_1 + 0x48f0),
                    *(undefined4 *)(param_1 + 0x48f8),(ulonglong)piVar5 & 0xffffffffffffff00);
    }
    *(int *)(param_1 + 0x4928) = param_2;
    *(uint *)(param_1 + 0x492c) = param_3;
  }
  return;
}



// FUNCTION 143c47c90 FUN_143c47c90 body=265 status=ok
// SIG undefined FUN_143c47c90(void)

void FUN_143c47c90(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  FUN_143c47210();
  *(undefined4 *)(param_1 + 0x4938) = param_2;
  *(undefined4 *)(param_1 + 0x4928) = param_2;
  *(undefined4 *)(param_1 + 0x493c) = param_3;
  *(undefined4 *)(param_1 + 0x492c) = param_3;
  *(undefined1 *)(param_1 + 0x48df) = 1;
  if ((*(char *)(param_1 + 0x28) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x48f0) + 9) != '\0')) {
    FUN_143c48420(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48e0),*(undefined8 *)(param_1 + 0x48e8)
                  ,*(undefined8 *)(param_1 + 0x48f0),*(undefined4 *)(param_1 + 0x48f8),0);
  }
  lVar6 = 0x30;
  puVar2 = (undefined8 *)(param_1 + 0x1838);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    uVar1 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar1;
    uVar1 = puVar5[5];
    puVar4[4] = puVar5[4];
    puVar4[5] = uVar1;
    uVar1 = puVar5[7];
    puVar4[6] = puVar5[6];
    puVar4[7] = uVar1;
    uVar1 = puVar5[9];
    puVar4[8] = puVar5[8];
    puVar4[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar4[10] = puVar5[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar4[0xc] = puVar5[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar4[0xe] = puVar5[0xe];
    puVar4[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar6 != 0);
  uVar1 = puVar5[0x11];
  puVar4[0x10] = puVar5[0x10];
  puVar4[0x11] = uVar1;
  uVar1 = puVar5[0x13];
  puVar4[0x12] = puVar5[0x12];
  puVar4[0x13] = uVar1;
  puVar4[0x14] = puVar5[0x14];
  return;
}



// FUNCTION 143c47da0 FUN_143c47da0 body=168 status=ok
// SIG undefined FUN_143c47da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c47da0(longlong param_1,ulonglong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_40 = *(undefined8 *)(param_1 + 0x4930);
  local_20 = 1;
  local_48 = param_2;
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_143c47c90(param_1,*(undefined4 *)(param_1 + 0x4938),*(undefined4 *)(param_1 + 0x493c));
  }
  local_58 = local_48._4_4_;
  FUN_143c47820(param_1,param_1 + 0x10,local_38,param_2 & 0xffffffff);
  (*(code *)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&local_40);
  *(undefined8 *)(param_1 + 0x4930) = local_38[0];
  *(ulonglong *)(param_1 + 0x4918) = param_2;
  return;
}



// FUNCTION 143c47e50 FUN_143c47e50 body=621 status=ok
// SIG undefined FUN_143c47e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c47e50(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  int iStack_5c;
  undefined1 local_58 [8];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar3 = '\0';
  local_78 = 0;
  if (*(int *)(param_1 + 0x4944) == 2) {
    lVar4 = param_1 + 0x4948;
    piVar5 = (int *)(param_1 + 0x4950);
  }
  else {
    lVar4 = param_1 + 0x4958;
    piVar5 = (int *)(param_1 + 0x4960);
  }
  local_70 = param_4;
  if ((*piVar5 != *param_3) || (piVar5[1] != param_3[1])) {
    local_80 = &local_78;
    local_88 = &local_70;
    cVar3 = FUN_143c47280(param_1,lVar4,piVar5,param_3);
    if (cVar3 != '\0') {
      *(undefined8 *)piVar5 = local_78;
    }
  }
  uVar2 = local_78;
  local_68 = *(undefined8 *)(param_1 + 0x4930);
  iVar1 = *(int *)(param_1 + 0x4944);
  if (iVar1 == 2) {
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x4954));
    local_48 = 2;
    lVar4 = param_1 + 0x1838;
    if (param_5 == '\0') {
      lVar4 = param_2;
    }
    FUN_143c47820(param_1,lVar4,&local_60,*(undefined4 *)(param_1 + 0x4950));
    if (((int)local_68 != local_60) || (local_68._4_4_ != iStack_5c)) {
      (**(code **)(*(longlong *)(param_1 + 8) + 8))(*(longlong *)(param_1 + 8),&local_68);
      local_50 = CONCAT44(iStack_5c,local_60);
      goto LAB_143c47ffb;
    }
  }
  else if (iVar1 == 4) {
    local_88._0_4_ = *(undefined4 *)(param_1 + 0x4954);
    local_48 = iVar1;
    FUN_143c47820(param_1,param_2,&local_60,*(undefined4 *)(param_1 + 0x4950));
    local_88._0_4_ = *(undefined4 *)(param_1 + 0x495c);
    FUN_143c47820(param_1,param_2,local_58,*(undefined4 *)(param_1 + 0x4958));
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x4964));
    FUN_143c47820(param_1,param_2,&local_50,*(undefined4 *)(param_1 + 0x4960));
    (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(*(longlong *)(param_1 + 8),&local_68);
LAB_143c47ffb:
    *(undefined8 *)(param_1 + 0x4930) = local_50;
  }
  if (cVar3 == '\0') {
    if (param_5 != '\0') {
      param_2 = param_1 + 0x1838;
    }
  }
  else {
    if (param_5 == '\0') goto LAB_143c4807d;
    param_2 = param_1 + 0x1838;
  }
  local_88 = (undefined8 *)CONCAT44(local_88._4_4_,param_3[1]);
  FUN_143c47820(param_1,param_2,&local_60,*param_3);
  if ((local_60 != *(int *)(param_1 + 0x4930)) || (iStack_5c != *(int *)(param_1 + 0x4934))) {
    local_68 = *(undefined8 *)(param_1 + 0x4930);
    local_48 = 2;
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(*(longlong *)(param_1 + 8),&local_68);
    *(ulonglong *)(param_1 + 0x4930) = CONCAT44(iStack_5c,local_60);
  }
LAB_143c4807d:
  if (cVar3 != '\0') {
    *(undefined8 *)param_3 = uVar2;
  }
  return;
}



// FUNCTION 143c480c0 FUN_143c480c0 body=859 status=ok
// SIG undefined FUN_143c480c0(void)

void FUN_143c480c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  int *piVar19;
  uint *puVar20;
  bool bVar21;
  ulonglong local_60;
  int local_58;
  
  uVar14 = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = 0;
  puVar6 = (uint *)(param_1 + 0x20);
  uVar17 = (ulonglong)*puVar6;
  if (*puVar6 != 0) {
    piVar11 = (int *)(param_1 + 0x38);
    piVar12 = (int *)(param_1 + 0x1c);
    puVar13 = (uint *)(param_1 + 0x28);
    piVar19 = (int *)(param_1 + 0x18);
    puVar20 = (uint *)(param_1 + 0x3c);
    do {
      bVar21 = (*puVar13 & 0xc) != 0;
      uVar7 = uVar14 + 1;
      if (!bVar21) {
        uVar7 = uVar14;
      }
      if ((*puVar13 >> 4 & 1) == 0) {
        uVar3 = *puVar20;
        lVar16 = uVar7 * 0x20 + param_1;
        iVar5 = uVar3 - (uVar3 & 0xffff0000);
        iVar18 = -iVar5;
        iVar8 = *(uint *)(lVar16 + 0x3c) - (*(uint *)(lVar16 + 0x3c) & 0xffff0000);
        iVar10 = -iVar8;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar18 + 0x10000;
        }
        iVar9 = 0;
        if (iVar8 != 0) {
          iVar9 = iVar10 + 0x10000;
        }
        if (iVar5 < iVar9) {
          iVar9 = iVar5;
        }
        if (iVar10 < iVar18) {
          iVar10 = iVar18;
        }
        iVar5 = iVar10;
        if ((uVar7 < (int)uVar17 - 1) &&
           (*(int *)(lVar16 + 0x5c) < *(int *)(lVar16 + 0x3c) + 0x8000 + iVar9)) {
          if ((uVar14 == 0) || (*piVar12 <= (int)(iVar10 + -0x8000 + uVar3))) {
            if (-iVar10 <= iVar9) goto LAB_143c48267;
          }
          else {
            iVar5 = 0;
          }
          if ((*(uint *)(lVar16 + 0x48) >> 4 & 1) == 0) {
            lVar1 = *(longlong *)(param_1 + 0x10);
            local_58 = iVar9 - iVar5;
            local_60 = uVar7;
            if ((*(longlong *)(lVar1 + 0x28) != *(longlong *)(lVar1 + 0x18)) ||
               (cVar2 = FUN_143c458c0(lVar1,*(longlong *)(lVar1 + 0x20) +
                                            *(longlong *)(lVar1 + 0x18)), cVar2 != '\0')) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(size_t *)(lVar1 + 0x10) * *(longlong *)(lVar1 + 0x28) +
                                 *(longlong *)(lVar1 + 0x38)),&local_60,*(size_t *)(lVar1 + 0x10));
              *(longlong *)(lVar1 + 0x28) = *(longlong *)(lVar1 + 0x28) + 1;
            }
          }
        }
        else {
          iVar5 = iVar9;
          if (((uVar14 == 0) || (*piVar12 <= (int)(iVar10 + -0x8000 + uVar3))) && (-iVar10 < iVar9))
          {
            iVar5 = iVar10;
          }
        }
LAB_143c48267:
        *puVar20 = *puVar20 + iVar5;
        if (bVar21) {
          *(int *)(lVar16 + 0x3c) = *(int *)(lVar16 + 0x3c) + iVar5;
        }
      }
      if (uVar14 != 0) {
        if (*piVar11 != *piVar19) {
          uVar3 = FUN_143c20070(*puVar20 - *piVar12,*piVar11 - *piVar19);
          *puVar6 = uVar3;
        }
      }
      if (bVar21) {
        lVar16 = uVar7 * 0x20;
        iVar10 = *(int *)(lVar16 + 0x38 + param_1);
        iVar5 = *(int *)(lVar16 + 0x18 + param_1);
        if (iVar10 != iVar5) {
          uVar4 = FUN_143c20070(*(int *)(lVar16 + 0x3c + param_1) -
                                *(int *)(lVar16 + 0x1c + param_1),iVar10 - iVar5);
          *(undefined4 *)(lVar16 + 0x20 + param_1) = uVar4;
        }
        uVar14 = uVar14 + 1;
        puVar13 = puVar13 + 8;
        piVar11 = piVar11 + 8;
        piVar19 = piVar19 + 8;
        puVar20 = puVar20 + 8;
        piVar12 = piVar12 + 8;
        puVar6 = puVar6 + 8;
      }
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x20);
      puVar13 = puVar13 + 8;
      piVar11 = piVar11 + 8;
      puVar6 = puVar6 + 8;
      uVar14 = uVar14 + 1;
      piVar19 = piVar19 + 8;
      puVar20 = puVar20 + 8;
      piVar12 = piVar12 + 8;
    } while (uVar14 < uVar17);
  }
  uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar17 = uVar14;
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    uVar17 = uVar17 - 1;
    lVar16 = *(longlong *)(param_1 + 0x10);
    uVar7 = uVar17;
    if (*(ulonglong *)(lVar16 + 0x28) <= uVar17) {
      piVar11 = *(int **)(lVar16 + 8);
      if ((piVar11 != (int *)0x0) && (*piVar11 == 0)) {
        *piVar11 = 0x82;
      }
      uVar7 = 0;
    }
    plVar15 = (longlong *)(*(longlong *)(lVar16 + 0x10) * uVar7 + *(longlong *)(lVar16 + 0x38));
    lVar16 = *plVar15 * 0x20 + param_1;
    iVar10 = (int)plVar15[1] + *(int *)(lVar16 + 0x3c);
    if ((iVar10 + 0x8000 <= *(int *)(lVar16 + 0x5c)) &&
       (*(int *)(lVar16 + 0x3c) = iVar10, (*(byte *)(lVar16 + 0x28) & 0xc) != 0)) {
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + (int)plVar15[1];
    }
  }
  return;
}



// FUNCTION 143c48420 FUN_143c48420 body=1696 status=ok
// SIG undefined FUN_143c48420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143c488c0) */
/* WARNING: Removing unreachable block (ram,0x000143c485fd) */
/* WARNING: Removing unreachable block (ram,0x000143c488ef) */
/* WARNING: Removing unreachable block (ram,0x000143c48627) */

void FUN_143c48420(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  int param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  byte *pbVar10;
  uint *puVar11;
  longlong *plVar12;
  byte bVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined1 local_e0;
  byte local_d8;
  longlong *local_d0;
  longlong local_c8;
  byte *local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_c8 = *param_1;
  local_d0 = param_1;
  local_b0 = param_2;
  local_a8 = param_4;
  if ((param_6 == '\0') && (*(char *)(param_1[1] + 0x18) == '\0')) {
    local_e0 = 1;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_60 = *param_4;
    local_e8 = param_5;
    FUN_143c48420(param_1[1],param_2,param_3,&local_60);
  }
  lVar17 = local_c8;
  if ((*(char *)(param_4 + 1) != '\0') ||
     (FUN_143c48e00(param_4,*(longlong *)(param_3 + 0x28) + *(longlong *)(param_2 + 0x28)),
     *(char *)(param_4 + 1) != '\0')) {
    plVar12 = local_d0;
    local_c0 = (byte *)&local_40;
    local_d0[4] = 0;
    local_60 = *param_4;
    uStack_58 = param_4[1];
    local_b8 = *(ulonglong *)(param_2 + 0x28);
    local_50 = param_4[2];
    uStack_48 = param_4[3];
    local_40 = param_4[4];
    uStack_38 = param_4[5];
    if (local_b8 <= (ulonglong)param_4[2]) {
      if (*(char *)(lVar17 + 0xf9) != '\0') {
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        FUN_143c48ad0(local_d0,lVar17 + 0x130,&local_a0);
        FUN_143c48ad0(plVar12,&local_a0,local_c8 + 0x110);
      }
      pbVar10 = (byte *)&local_40;
      uVar14 = 0;
      local_d8 = 0x80;
      uVar16 = local_b8;
      if (local_b8 != 0) {
        do {
          if ((*pbVar10 & local_d8) != 0) {
            uVar1 = *(uint *)((longlong)plVar12 + 0x1c);
            uVar16 = uVar14;
            if (*(ulonglong *)(param_2 + 0x28) <= uVar14) {
              piVar2 = *(int **)(param_2 + 8);
              if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                *piVar2 = 0x82;
              }
              uVar16 = 0;
            }
            pcVar9 = (char *)(*(longlong *)(param_2 + 0x10) * uVar16 + *(longlong *)(param_2 + 0x38)
                             );
            iVar5 = *(int *)(pcVar9 + 8);
            iVar4 = iVar5 - *(int *)(pcVar9 + 4);
            if (iVar4 == -0x150000) {
              uVar7 = 1;
            }
            else if (iVar4 == -0x140000) {
              local_90._0_4_ = 0;
              uVar7 = 0;
              iVar5 = (int)local_90;
            }
            else {
              uVar7 = 4;
              if (-1 < iVar4) {
                iVar5 = *(int *)(pcVar9 + 4);
              }
            }
            local_a0 = (ulonglong)uVar7;
            local_90 = (ulonglong)(uint)(iVar5 + param_5);
            local_88 = (ulonglong)uVar1;
            local_98 = uVar14;
            if ((uVar7 == 0) || (*pcVar9 == '\0')) {
              uVar6 = FUN_143c22100(iVar5 + param_5,uVar1);
            }
            else {
              uVar6 = *(undefined4 *)(pcVar9 + 0xc);
              local_a0 = (ulonglong)uVar7 | 0x10;
              uVar7 = 0x10;
            }
            uVar1 = *(uint *)((longlong)plVar12 + 0x1c);
            local_90 = CONCAT44(uVar6,(int)local_90);
            uVar16 = uVar14;
            if (*(ulonglong *)(local_b0 + 0x28) <= uVar14) {
              piVar2 = *(int **)(local_b0 + 8);
              if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                *piVar2 = 0x82;
              }
              uVar16 = 0;
            }
            pcVar9 = (char *)(*(longlong *)(local_b0 + 0x10) * uVar16 +
                             *(longlong *)(local_b0 + 0x38));
            iVar5 = *(int *)(pcVar9 + 4);
            iVar4 = *(int *)(pcVar9 + 8) - iVar5;
            if (iVar4 == -0x150000) {
              local_70._0_4_ = 0;
              uVar15 = 0;
              iVar5 = (int)local_70;
            }
            else if (iVar4 == -0x140000) {
              uVar15 = 2;
            }
            else {
              uVar15 = 8;
              if (-1 < iVar4) {
                iVar5 = *(int *)(pcVar9 + 8);
              }
            }
            local_80 = (ulonglong)uVar15;
            if (uVar15 != 0) {
              iVar5 = iVar5 + *(int *)(local_c8 + 0xe8) * 2;
            }
            local_68 = (ulonglong)uVar1;
            local_70 = (ulonglong)(uint)(iVar5 + param_5);
            local_78 = uVar14;
            if ((uVar15 == 0) || (*pcVar9 == '\0')) {
              uVar6 = FUN_143c22100(iVar5 + param_5,uVar1);
            }
            else if (uVar15 == 0) {
              uVar6 = *(undefined4 *)(pcVar9 + 0xc);
              uVar15 = 0x10;
              local_80 = 0x10;
            }
            else {
              uVar6 = *(undefined4 *)(pcVar9 + 0x10);
              local_80 = (ulonglong)uVar15 | 0x10;
              uVar15 = 0x10;
            }
            local_70 = CONCAT44(uVar6,(int)local_70);
            if (((uVar7 >> 4 != 0) || (uVar15 >> 4 != 0)) ||
               (cVar3 = FUN_143c459a0(local_c8 + 0xf0,&local_a0,&local_80), pbVar10 = local_c0,
               plVar12 = local_d0, param_2 = local_b0, uVar16 = local_b8, cVar3 != '\0')) {
              plVar12 = local_d0;
              FUN_143c48ad0(local_d0,&local_a0,&local_80);
              *local_c0 = *local_c0 & ~local_d8;
              pbVar10 = local_c0;
              param_2 = local_b0;
              uVar16 = local_b8;
            }
          }
          if (((byte)uVar14 & 7) == 7) {
            pbVar10 = pbVar10 + 1;
            local_d8 = 0x80;
            local_c0 = pbVar10;
          }
          else {
            local_d8 = local_d8 >> 1;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar16);
      }
      if (param_6 == '\0') {
        uVar14 = 0;
        pbVar10 = (byte *)&local_40;
        bVar13 = 0x80;
        plVar12 = local_d0;
        local_c0 = pbVar10;
        if (uVar16 != 0) {
          do {
            if ((*pbVar10 & bVar13) != 0) {
              uVar1 = *(uint *)((longlong)local_d0 + 0x1c);
              uVar16 = uVar14;
              if (*(ulonglong *)(param_2 + 0x28) <= uVar14) {
                piVar2 = *(int **)(param_2 + 8);
                if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                  *piVar2 = 0x82;
                }
                uVar16 = 0;
              }
              pcVar9 = (char *)(*(longlong *)(param_2 + 0x10) * uVar16 +
                               *(longlong *)(param_2 + 0x38));
              local_70._0_4_ = *(int *)(pcVar9 + 8);
              iVar5 = (int)local_70 - *(int *)(pcVar9 + 4);
              if (iVar5 == -0x150000) {
                uVar7 = 1;
              }
              else if (iVar5 == -0x140000) {
                local_70._0_4_ = 0;
                uVar7 = 0;
              }
              else {
                if (-1 < iVar5) {
                  local_70._0_4_ = *(int *)(pcVar9 + 4);
                }
                uVar7 = 4;
              }
              local_80 = (ulonglong)uVar7;
              uVar15 = (int)local_70 + param_5;
              local_70 = (ulonglong)uVar15;
              local_68 = (ulonglong)uVar1;
              local_78 = uVar14;
              if ((uVar7 == 0) || (*pcVar9 == '\0')) {
                uVar6 = FUN_143c22100(uVar15,uVar1);
              }
              else {
                uVar6 = *(undefined4 *)(pcVar9 + 0xc);
                local_80 = (ulonglong)uVar7 | 0x10;
              }
              local_70 = CONCAT44(uVar6,(int)local_70);
              uVar1 = *(uint *)((longlong)local_d0 + 0x1c);
              uVar16 = uVar14;
              if (*(ulonglong *)(param_2 + 0x28) <= uVar14) {
                piVar2 = *(int **)(param_2 + 8);
                if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                  *piVar2 = 0x82;
                }
                uVar16 = 0;
              }
              pcVar9 = (char *)(*(longlong *)(param_2 + 0x10) * uVar16 +
                               *(longlong *)(param_2 + 0x38));
              local_90._0_4_ = *(int *)(pcVar9 + 4);
              iVar5 = *(int *)(pcVar9 + 8) - (int)local_90;
              if (iVar5 == -0x150000) {
                local_90._0_4_ = 0;
                uVar7 = 0;
              }
              else if (iVar5 == -0x140000) {
                uVar7 = 2;
              }
              else {
                if (-1 < iVar5) {
                  local_90._0_4_ = *(int *)(pcVar9 + 8);
                }
                uVar7 = 8;
              }
              local_a0 = (ulonglong)uVar7;
              if (uVar7 != 0) {
                local_90._0_4_ = (int)local_90 + *(int *)(local_c8 + 0xe8) * 2;
              }
              uVar15 = (int)local_90 + param_5;
              local_88 = (ulonglong)uVar1;
              local_90 = (ulonglong)uVar15;
              local_98 = uVar14;
              if ((uVar7 == 0) || (*pcVar9 == '\0')) {
                uVar6 = FUN_143c22100(uVar15,uVar1);
              }
              else if (uVar7 == 0) {
                uVar6 = *(undefined4 *)(pcVar9 + 0xc);
                local_a0 = 0x10;
              }
              else {
                uVar6 = *(undefined4 *)(pcVar9 + 0x10);
                local_a0 = (ulonglong)uVar7 | 0x10;
              }
              local_90 = CONCAT44(uVar6,(int)local_90);
              FUN_143c48ad0(local_d0,&local_80,&local_a0);
              pbVar10 = local_c0;
              uVar16 = local_b8;
            }
            if (((byte)uVar14 & 7) == 7) {
              pbVar10 = pbVar10 + 1;
              bVar13 = 0x80;
              local_c0 = pbVar10;
            }
            else {
              bVar13 = bVar13 >> 1;
            }
            uVar14 = uVar14 + 1;
            plVar12 = local_d0;
          } while (uVar14 < uVar16);
        }
      }
      else if ((((int)plVar12[4] == 0) || (0 < (int)plVar12[7])) ||
              ((int)plVar12[(ulonglong)((int)plVar12[4] - 1) * 4 + 7] < 0)) {
        local_98 = 0;
        local_90 = 0;
        local_88 = (ulonglong)*(uint *)((longlong)plVar12 + 0x1c);
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_a0 = 0x31;
        FUN_143c48ad0(plVar12,&local_a0);
      }
      FUN_143c480c0(plVar12);
      if ((param_6 == '\0') && (uVar16 = 0, (int)plVar12[4] != 0)) {
        puVar11 = (uint *)(plVar12 + 5);
        do {
          if ((*puVar11 >> 5 & 1) == 0) {
            uVar14 = *(ulonglong *)(puVar11 + 2);
            if (*(ulonglong *)(param_2 + 0x28) <= uVar14) {
              piVar2 = *(int **)(param_2 + 8);
              if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                *piVar2 = 0x82;
              }
              uVar14 = 0;
            }
            puVar8 = (undefined1 *)
                     (*(longlong *)(param_2 + 0x10) * uVar14 + *(longlong *)(param_2 + 0x38));
            if ((*puVar11 & 10) == 0) {
              *(uint *)(puVar8 + 0xc) = puVar11[5];
            }
            else {
              *(uint *)(puVar8 + 0x10) = puVar11[5];
            }
            *puVar8 = 1;
          }
          uVar16 = uVar16 + 1;
          puVar11 = puVar11 + 8;
        } while (uVar16 < *(uint *)(plVar12 + 4));
      }
      *(undefined1 *)(plVar12 + 3) = 1;
      *(undefined1 *)((longlong)local_a8 + 9) = 0;
    }
  }
  return;
}



// FUNCTION 143c48ad0 FUN_143c48ad0 body=479 status=ok
// SIG undefined FUN_143c48ad0(void)

void FUN_143c48ad0(longlong param_1,uint *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar10 = 0;
  if (*param_2 == 0) {
    bVar5 = false;
    param_2 = param_3;
  }
  else {
    bVar5 = true;
    if (*param_3 == 0) {
      bVar5 = false;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x20);
  if (uVar8 != 0) {
    do {
      if ((int)param_2[4] <= *(int *)((ulonglong)uVar10 * 0x20 + 0x38 + param_1)) break;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  if (uVar10 < uVar8) {
    uVar8 = *(uint *)((ulonglong)uVar10 * 0x20 + 0x38 + param_1);
    if (uVar8 == param_2[4]) {
      return;
    }
    if ((bVar5) && ((int)uVar8 <= (int)param_3[4])) {
      return;
    }
    if ((*(uint *)((ulonglong)uVar10 * 0x20 + 0x28 + param_1) >> 3 & 1) != 0) {
      return;
    }
  }
  lVar9 = *(longlong *)(param_1 + 8);
  if ((*(char *)(lVar9 + 0x18) != '\0') && ((*param_2 >> 4 & 1) == 0)) {
    if (bVar5) {
      iVar6 = FUN_143c48cb0(lVar9,(int)(param_2[4] + param_3[4]) / 2);
      iVar7 = FUN_143c22100((int)(param_3[4] - param_2[4]) / 2,*(undefined4 *)(param_1 + 0x1c));
      param_2[5] = iVar6 - iVar7;
      param_3[5] = iVar7 + iVar6;
    }
    else {
      uVar8 = FUN_143c48cb0(lVar9,param_2[4]);
      param_2[5] = uVar8;
    }
  }
  if ((uVar10 == 0) ||
     (*(int *)((ulonglong)(uVar10 - 1) * 0x20 + 0x3c + param_1) <= (int)param_2[5])) {
    uVar8 = *(uint *)(param_1 + 0x20);
    if (uVar10 < uVar8) {
      uVar11 = *(uint *)((ulonglong)uVar10 * 0x20 + 0x3c + param_1);
      if (bVar5) {
        uVar3 = param_3[5];
        iVar6 = uVar3 - uVar11;
      }
      else {
        uVar3 = param_2[5];
        iVar6 = uVar3 - uVar11;
      }
      if (uVar3 != uVar11 && SBORROW4(uVar3,uVar11) == iVar6 < 0) {
        return;
      }
    }
    uVar11 = uVar8 + 1;
    if (!bVar5) {
      uVar11 = uVar8;
    }
    iVar6 = uVar8 - uVar10;
    if (uVar11 < 0xc0) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar8 = uVar8 - 1;
        uVar12 = (ulonglong)uVar11;
        uVar11 = uVar11 - 1;
        puVar1 = (undefined8 *)((ulonglong)uVar8 * 0x20 + 0x28 + param_1);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(uVar12 * 0x20 + 0x28 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)((ulonglong)uVar8 * 0x20 + 0x38 + param_1);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(uVar12 * 0x20 + 0x38 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
      }
      uVar4 = *(undefined8 *)(param_2 + 2);
      puVar1 = (undefined8 *)((ulonglong)uVar10 * 0x20 + 0x28 + param_1);
      *puVar1 = *(undefined8 *)param_2;
      puVar1[1] = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 6);
      puVar1 = (undefined8 *)((ulonglong)uVar10 * 0x20 + 0x38 + param_1);
      *puVar1 = *(undefined8 *)(param_2 + 4);
      puVar1[1] = uVar4;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      if (bVar5) {
        uVar4 = *(undefined8 *)(param_3 + 2);
        lVar9 = (ulonglong)(uVar10 + 1) * 0x20;
        puVar1 = (undefined8 *)(lVar9 + 0x28 + param_1);
        *puVar1 = *(undefined8 *)param_3;
        puVar1[1] = uVar4;
        uVar4 = *(undefined8 *)(param_3 + 6);
        puVar1 = (undefined8 *)(lVar9 + 0x38 + param_1);
        *puVar1 = *(undefined8 *)(param_3 + 4);
        puVar1[1] = uVar4;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
    }
  }
  return;
}



// FUNCTION 143c48cb0 FUN_143c48cb0 body=208 status=ok
// SIG undefined FUN_143c48cb0(void)

ulonglong FUN_143c48cb0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  
  if ((*(int *)(param_1 + 0x20) == 0) || (*(char *)(param_1 + 0x19) == '\0')) {
    uVar4 = FUN_143c22100(param_2,*(undefined4 *)(param_1 + 0x1c));
    return uVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar1 = uVar2;
  while ((uVar2 < *(int *)(param_1 + 0x20) - 1U &&
         (uVar1 = uVar1 + 1, *(int *)((ulonglong)uVar1 * 0x20 + 0x38 + param_1) <= param_2))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 != 0) {
    piVar5 = (int *)(param_1 + 0x38 + (ulonglong)uVar2 * 0x20);
    do {
      if (*piVar5 <= param_2) break;
      piVar5 = piVar5 + -8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if ((uVar2 == 0) && (param_2 < *(int *)(param_1 + 0x38))) {
    iVar3 = FUN_143c22100(param_2 - *(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x1c));
    return (ulonglong)(uint)(iVar3 + *(int *)(param_1 + 0x3c));
  }
  iVar3 = FUN_143c22100(param_2 - *(int *)((ulonglong)uVar2 * 0x20 + 0x38 + param_1),
                        *(undefined4 *)(((ulonglong)uVar2 + 2) * 0x20 + param_1));
  return (ulonglong)(uint)(iVar3 + *(int *)((ulonglong)uVar2 * 0x20 + 0x3c + param_1));
}



// FUNCTION 143c48d80 FUN_143c48d80 body=126 status=ok
// SIG undefined FUN_143c48d80(void)

void FUN_143c48d80(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 < 0x61) {
    param_1[2] = param_3;
    uVar4 = param_3 + 7 >> 3;
    param_1[3] = uVar4;
    *(undefined2 *)(param_1 + 1) = 0x101;
    if ((param_3 != 0) && (uVar5 = 0, uVar4 != 0)) {
      do {
        puVar2 = (undefined1 *)param_2[3];
        if (puVar2 < (undefined1 *)param_2[2]) {
          uVar3 = *puVar2;
          param_2[3] = puVar2 + 1;
        }
        else {
          piVar1 = (int *)*param_2;
          if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            *piVar1 = 0x55;
          }
          uVar3 = 0;
        }
        *(undefined1 *)((longlong)param_1 + uVar5 + 0x20) = uVar3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulonglong)param_1[3]);
    }
  }
  else {
    piVar1 = (int *)*param_1;
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      *piVar1 = 0x12;
      return;
    }
  }
  return;
}



// FUNCTION 143c48e00 FUN_143c48e00 body=124 status=ok
// SIG undefined FUN_143c48e00(void)

void FUN_143c48e00(undefined8 *param_1,ulonglong param_2)

{
  byte *pbVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 < 0x61) {
    param_1[2] = param_2;
    uVar4 = param_2 + 7 >> 3;
    param_1[3] = uVar4;
    *(undefined2 *)(param_1 + 1) = 0x101;
    if (param_2 != 0) {
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          *(undefined1 *)((longlong)param_1 + uVar3 + 0x20) = 0xff;
          uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[3]);
      }
      pbVar1 = (byte *)((longlong)param_1 + param_1[3] + 0x1f);
      *pbVar1 = *pbVar1 & ~((char)(1 << (-(char)param_2 & 7U)) - 1U);
    }
  }
  else {
    piVar2 = (int *)*param_1;
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0x12;
      return;
    }
  }
  return;
}



// FUNCTION 143c48e80 FUN_143c48e80 body=6368 status=ok
// SIG undefined FUN_143c48e80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c48e80(undefined8 *param_1,int *param_2,ulonglong param_3,undefined8 param_4,
                  char param_5,uint param_6,uint param_7,int *param_8)

{
  uint *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  int *piVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  int *piVar26;
  byte bVar27;
  int iVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  int *piVar32;
  undefined1 auStack_63e8 [32];
  char *local_63c8;
  undefined8 local_63c0;
  int **local_63b8;
  undefined8 *local_63b0;
  undefined8 *local_63a8;
  undefined8 local_63a0;
  char local_6398 [4];
  uint local_6394;
  int *local_6390;
  char local_6388;
  uint local_6384;
  int local_6380;
  uint local_637c;
  int *local_6378;
  int *local_6370;
  uint local_6368;
  int local_6364;
  uint local_6360;
  undefined8 *local_6358;
  undefined8 local_6350;
  int local_6348;
  int *local_6340;
  int local_6338;
  undefined4 local_6334;
  int local_6330;
  int local_632c;
  longlong local_6328;
  undefined8 local_6318;
  int *local_6310;
  longlong local_6308;
  undefined8 local_6300;
  undefined8 local_62f8;
  ulonglong local_62f0;
  undefined8 local_62e8;
  int *local_62e0;
  undefined8 local_62d8;
  ulonglong local_62d0;
  int local_62c8;
  ulonglong local_62c0;
  int local_62b8;
  undefined8 local_62a8;
  int *local_62a0;
  undefined8 local_6298;
  undefined8 local_6290;
  undefined8 local_6288;
  longlong local_6280;
  undefined8 local_6278;
  undefined8 local_6270;
  undefined8 local_6268;
  int *local_6260;
  undefined8 local_6258;
  undefined8 local_6250;
  undefined8 local_6248;
  longlong local_6240;
  undefined8 local_6238;
  undefined8 local_6230;
  int *local_6228;
  ulonglong local_6220;
  undefined8 local_6218;
  undefined8 local_6210;
  undefined8 local_6208;
  undefined8 local_6200;
  int *local_61f8;
  undefined8 local_61f0;
  undefined8 local_61e8;
  undefined8 local_61e0;
  undefined8 local_61d8;
  undefined8 local_61d0;
  undefined1 local_61c8 [16];
  undefined1 local_61b8 [12368];
  undefined1 local_3168 [6184];
  undefined8 local_1940 [3];
  undefined8 local_1928;
  undefined8 local_1918;
  undefined8 local_1910;
  undefined8 local_1908;
  undefined2 local_18ec;
  undefined1 local_18e9;
  undefined1 local_18b0 [8];
  undefined8 local_18a8;
  undefined4 local_1890;
  undefined4 local_188c;
  char local_1888;
  undefined8 *local_1858;
  undefined1 *local_1850;
  undefined8 *local_1848;
  undefined1 local_183f;
  undefined4 local_183c;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143c48e9a;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_63e8;
  uVar30 = *param_1;
  lVar17 = param_1[0x15];
  local_6334 = *(undefined4 *)((longlong)param_1 + 0x34);
  uVar20 = (ulonglong)param_7;
  local_6340 = param_8;
  local_6390 = (int *)(param_1 + 1);
  local_6348 = *(int *)(*(longlong *)(lVar17 + 0x3f0) + 0x214) << 0x10;
  local_61f0 = 0;
  local_61e8 = 0;
  local_61e0 = 0;
  local_61d8 = 0;
  local_61d0 = 0;
  local_63a8 = param_1 + 0x1e;
  local_63b8 = &local_61f8;
  local_63b0 = (undefined8 *)CONCAT44(local_63b0._4_4_,param_7);
  local_63c0 = &local_62a8;
  local_63c8 = (char *)&local_6268;
  local_6380 = 0;
  local_632c = 20000000;
  local_6308 = 0x20;
  local_6300 = 0;
  local_62f8 = 10;
  local_62f0 = 0;
  local_62e8 = 0;
  local_62e0 = (int *)0x0;
  local_6258 = 0x14;
  local_6250 = 0;
  local_6248 = 10;
  local_6240 = 0;
  local_6238 = 0;
  local_6230 = 0;
  local_6298 = 0x14;
  local_6290 = 0;
  local_6288 = 10;
  local_6280 = 0;
  local_6278 = 0;
  local_6270 = 0;
  local_63a0 = param_4;
  local_6378 = param_2;
  local_6358 = param_1;
  local_6328 = lVar17;
  local_6318 = uVar30;
  local_6310 = local_6390;
  local_62d8 = param_4;
  local_62c0 = param_3;
  local_62a8 = uVar30;
  local_62a0 = local_6390;
  local_6268 = uVar30;
  local_6260 = local_6390;
  local_61f8 = local_6390;
  FUN_143c478e0(local_61c8,param_1,param_3,local_6334);
  local_6398[0] = '\0';
  local_6330 = 0;
  *local_6340 = *(int *)(*(longlong *)(lVar17 + 0x3f0) + 0x210) << 0x10;
  puVar15 = (undefined8 *)FUN_143c27300(uVar30,0x198,&local_6330);
  if (local_6330 == 0) {
    *puVar15 = uVar30;
    puVar15[1] = local_6390;
    puVar15[0x32] = puVar15 + 2;
  }
  if (puVar15 == (undefined8 *)0x0) {
    iVar11 = 0x40;
  }
  else {
    cVar6 = FUN_143c458c0(&local_6318,0x11);
    local_62d0 = local_62f0;
    if (cVar6 != '\0') {
      local_62d0 = 0x11;
    }
    iVar11 = local_6378[1];
    iVar28 = local_6378[2];
    iVar10 = local_6378[3];
    local_6370 = local_62e0;
    local_6394 = 0;
    *local_62e0 = *local_6378;
    local_62e0[1] = iVar11;
    local_62e0[2] = iVar28;
    local_62e0[3] = iVar10;
    uVar30 = *(undefined8 *)(local_6378 + 6);
    *(undefined8 *)(local_62e0 + 4) = *(undefined8 *)(local_6378 + 4);
    *(undefined8 *)(local_62e0 + 6) = uVar30;
    if (*local_6390 == 0) {
      uVar19 = (ulonglong)param_6;
      uVar30 = 0x2000;
      piVar18 = local_6390;
      piVar32 = local_62e0;
LAB_143c490e0:
      pbVar2 = *(byte **)(piVar32 + 6);
      if (pbVar2 < *(byte **)(piVar32 + 4)) {
        uVar29 = (ulonglong)*pbVar2;
        *(byte **)(piVar32 + 6) = pbVar2 + 1;
      }
      else {
        uVar29 = 0xe;
        if (local_6394 != 0) {
          uVar29 = 0xb;
        }
      }
      local_6368 = (uint)uVar29;
      iVar11 = local_6380;
      if (*piVar18 != 0) goto LAB_143c49b6b;
      local_632c = local_632c + -1;
      if (local_632c == 0) goto LAB_143c4a5c7;
      bVar27 = (byte)uVar29;
      iVar28 = (int)uVar30;
      switch(uVar29) {
      case 0:
      case 2:
      case 9:
      case 0xd:
      case 0xf:
      case 0x10:
      case 0x11:
        break;
      case 1:
      case 0x12:
        if ((char)local_61f0 == '\0') {
          puVar25 = &local_6268;
LAB_143c49157:
          local_63c8 = local_6398;
          local_63c0 = (undefined8 *)((ulonglong)local_63c0._4_4_ << 0x20);
          FUN_143c46ae0(local_6358,puVar15,puVar25,local_6340);
          iVar11 = local_6380;
          uVar12 = param_6;
          uVar24 = param_7;
          if (*(char *)(local_6358[0x15] + 0x331) == '\0') goto LAB_143c49352;
          goto LAB_143c49b6b;
        }
        break;
      case 3:
      case 0x17:
        if ((char)local_61f0 == '\0') {
          puVar25 = &local_62a8;
          goto LAB_143c49157;
        }
        break;
      case 4:
        uVar12 = (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3);
        if ((1 < uVar12) && (local_6398[0] == '\0')) {
          if (uVar12 == 0) {
            piVar18 = (int *)puVar15[1];
            if ((piVar18 != (int *)0x0) && (*piVar18 == 0)) {
              *piVar18 = 0x82;
            }
            iVar28 = 0;
          }
          else if (*(int *)((longlong)puVar15 + 0x14) == 1) {
            iVar10 = *(int *)(puVar15 + 2);
            if (iVar10 < 0) {
              iVar28 = -(iVar28 - iVar10 >> 0xe);
            }
            else {
              iVar28 = iVar10 + 0x2000 >> 0xe;
            }
          }
          else {
            iVar28 = *(int *)(puVar15 + 2);
            if (*(int *)((longlong)puVar15 + 0x14) == 2) {
              iVar28 = iVar28 << 0x10;
            }
          }
          *local_6340 = iVar28 + local_6348;
        }
        local_6398[0] = '\x01';
        if (*(char *)(local_6358[0x15] + 0x331) == '\0') {
          iVar11 = FUN_143c4a890(puVar15);
          param_7 = (int)uVar20 + iVar11;
          uVar20 = (ulonglong)param_7;
          FUN_143c47c90(local_61c8,uVar19,param_7);
          uVar12 = param_6;
          uVar24 = param_7;
          goto LAB_143c49352;
        }
        goto LAB_143c49b6b;
      case 5:
        uVar29 = 0;
        local_6384 = 0;
        local_6378 = (int *)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3);
        if ((int)local_6378 != 0) {
          do {
            if ((uint)uVar29 < (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3)) {
              iVar11 = *(int *)((longlong)puVar15 + uVar29 * 8 + 0x14);
              if (iVar11 == 1) {
                iVar11 = *(int *)(puVar15 + uVar29 + 2);
                if (iVar11 < 0) {
                  iVar28 = -((int)uVar30 - iVar11 >> 0xe);
                }
                else {
                  iVar28 = iVar11 + 0x2000 >> 0xe;
                }
              }
              else {
                iVar28 = *(int *)(puVar15 + uVar29 + 2);
                if (iVar11 == 2) {
                  iVar28 = iVar28 << 0x10;
                }
              }
            }
            else {
              piVar18 = (int *)puVar15[1];
              if ((piVar18 != (int *)0x0) && (*piVar18 == 0)) {
                *piVar18 = 0x82;
              }
              iVar28 = 0;
            }
            uVar12 = (int)uVar19 + iVar28;
            uVar19 = (ulonglong)uVar12;
            iVar11 = FUN_143c4a820(puVar15,(uint)uVar29 + 1);
            uVar24 = (int)uVar20 + iVar11;
            uVar20 = (ulonglong)uVar24;
            FUN_143c47af0(local_61c8,uVar19,uVar24);
            uVar30 = 0x2000;
            local_6384 = local_6384 + 2;
            uVar29 = (ulonglong)local_6384;
          } while (local_6384 < (uint)local_6378);
          goto LAB_143c49352;
        }
        break;
      case 6:
      case 7:
        local_6350 = (puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3;
        local_6384 = 0;
        if ((int)local_6350 != 0) {
          local_6378 = (int *)(puVar15 + 2);
          local_6388 = bVar27 == 6;
          do {
            if (local_6384 < (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3)) {
              if (local_6378[1] == 1) {
                iVar11 = *local_6378;
                if (iVar11 < 0) {
                  iVar11 = -((int)uVar30 - iVar11 >> 0xe);
                }
                else {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                }
              }
              else {
                iVar11 = *local_6378;
                if (local_6378[1] == 2) {
                  iVar11 = iVar11 << 0x10;
                }
              }
            }
            else {
              piVar18 = (int *)puVar15[1];
              if ((piVar18 != (int *)0x0) && (*piVar18 == 0)) {
                *piVar18 = 0x82;
              }
              iVar11 = 0;
            }
            if (local_6388 == '\0') {
              param_7 = (int)uVar20 + iVar11;
              uVar20 = (ulonglong)param_7;
            }
            else {
              param_6 = (int)uVar19 + iVar11;
              uVar19 = (ulonglong)param_6;
            }
            local_6388 = local_6388 == '\0';
            FUN_143c47af0(local_61c8,uVar19,uVar20);
            uVar30 = 0x2000;
            local_6384 = local_6384 + 1;
            local_6378 = local_6378 + 2;
          } while (local_6384 < (uint)local_6350);
          goto LAB_143c49dee;
        }
        goto LAB_143c49df3;
      case 8:
      case 0x18:
        uVar16 = 0;
        local_6384 = 0;
        local_6378 = (int *)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3);
        if (5 < (uint)local_6378) {
          uVar29 = 2;
          local_637c = 2;
          do {
            if ((uint)uVar16 < (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3)) {
              iVar11 = *(int *)((longlong)puVar15 + uVar16 * 8 + 0x14);
              if (iVar11 == 1) {
                iVar11 = *(int *)(puVar15 + uVar16 + 2);
                if (iVar11 < 0) {
                  iVar28 = -((int)uVar30 - iVar11 >> 0xe);
                }
                else {
                  iVar28 = iVar11 + 0x2000 >> 0xe;
                }
              }
              else {
                iVar28 = *(int *)(puVar15 + uVar16 + 2);
                if (iVar11 == 2) {
                  iVar28 = iVar28 << 0x10;
                }
              }
            }
            else {
              piVar18 = (int *)puVar15[1];
              if ((piVar18 != (int *)0x0) && (*piVar18 == 0)) {
                *piVar18 = 0x82;
              }
              iVar28 = 0;
            }
            uVar31 = (ulonglong)(uint)(iVar28 + (int)uVar19);
            iVar11 = FUN_143c4a820(puVar15,(int)uVar29 + -1);
            uVar16 = (ulonglong)(uint)((int)uVar20 + iVar11);
            iVar11 = FUN_143c4a820(puVar15,uVar29 & 0xffffffff);
            uVar12 = local_637c;
            iVar11 = (int)uVar31 + iVar11;
            iVar28 = FUN_143c4a820(puVar15,local_637c + 1);
            iVar28 = (int)uVar16 + iVar28;
            iVar10 = FUN_143c4a820(puVar15,uVar12 + 2);
            uVar24 = iVar11 + iVar10;
            uVar19 = (ulonglong)uVar24;
            iVar11 = FUN_143c4a820(puVar15,uVar12 + 3);
            uVar23 = iVar28 + iVar11;
            uVar20 = (ulonglong)uVar23;
            local_63b8 = (int **)CONCAT44(local_63b8._4_4_,uVar23);
            local_63c0 = (undefined8 *)CONCAT44(local_63c0._4_4_,uVar24);
            local_63c8 = (char *)CONCAT44(local_63c8._4_4_,iVar28);
            FUN_143c47610(local_61c8,uVar31 & 0xffffffff,uVar16 & 0xffffffff);
            uVar30 = 0x2000;
            uVar21 = local_637c + 6;
            uVar29 = (ulonglong)uVar21;
            local_6384 = local_6384 + 6;
            uVar16 = (ulonglong)local_6384;
            uVar12 = local_637c + 10;
            param_6 = uVar24;
            param_7 = uVar23;
            local_637c = uVar21;
          } while (uVar12 <= (uint)local_6378);
          uVar29 = (ulonglong)local_6368;
        }
        iVar11 = (int)uVar16;
        if ((char)uVar29 == '\x18') {
          iVar28 = FUN_143c4a820(puVar15,uVar16);
          uVar12 = (int)uVar19 + iVar28;
          uVar19 = (ulonglong)uVar12;
          param_6 = uVar12;
          iVar11 = FUN_143c4a820(puVar15,iVar11 + 1);
          param_7 = (int)uVar20 + iVar11;
          uVar20 = (ulonglong)param_7;
          FUN_143c47af0(local_61c8,uVar12,param_7);
        }
        goto LAB_143c49dee;
      case 10:
      case 0x1d:
        if (0x10 < (int)local_6394) goto LAB_143c4a5c7;
        uVar16 = (longlong)(int)local_6394 + 1;
        if (local_62d0 <= uVar16) {
          if ((local_6310 != (int *)0x0) && (*local_6310 == 0)) {
            *local_6310 = 0x82;
          }
          uVar16 = 0;
        }
        piVar32 = (int *)(local_6308 * uVar16 + (longlong)local_62e0);
        local_6370 = piVar32;
        iVar11 = FUN_143c4a900(puVar15);
        piVar32[0] = 0;
        piVar32[1] = 0;
        piVar32[2] = 0;
        piVar32[3] = 0;
        piVar32[4] = 0;
        piVar32[5] = 0;
        piVar32[6] = 0;
        piVar32[7] = 0;
        if ((char)uVar29 == '\x1d') {
          uVar12 = iVar11 + *(int *)(local_6328 + 0x3c4);
          if (*(uint *)(local_6328 + 0x3bc) <= uVar12) goto LAB_143c4a5c7;
          uVar3 = *(undefined8 *)(*(longlong *)(local_6328 + 0x3d0) + (ulonglong)uVar12 * 8);
          *(undefined8 *)(piVar32 + 6) = uVar3;
          *(undefined8 *)(piVar32 + 2) = uVar3;
          lVar17 = *(longlong *)(local_6328 + 0x3d0);
        }
        else {
          uVar12 = iVar11 + *(int *)(local_6328 + 0x3c0);
          if (*(uint *)(local_6328 + 0x3b8) <= uVar12) goto LAB_143c4a5c7;
          uVar3 = *(undefined8 *)(*(longlong *)(local_6328 + 0x3c8) + (ulonglong)uVar12 * 8);
          *(undefined8 *)(piVar32 + 6) = uVar3;
          *(undefined8 *)(piVar32 + 2) = uVar3;
          lVar17 = *(longlong *)(local_6328 + 0x3c8);
        }
        *(undefined8 *)(piVar32 + 4) = *(undefined8 *)(lVar17 + (ulonglong)(uVar12 + 1) * 8);
        local_6394 = local_6394 + 1;
        piVar18 = local_6390;
        goto LAB_143c490e0;
      case 0xb:
        if ((int)local_6394 < 1) goto LAB_143c4a5c7;
        local_6394 = local_6394 - 1;
        uVar29 = (ulonglong)local_6394;
        if (local_62d0 <= uVar29) {
          if ((local_6310 != (int *)0x0) && (*local_6310 == 0)) {
            *local_6310 = 0x82;
          }
          uVar29 = 0;
        }
        piVar32 = (int *)(local_6308 * uVar29 + (longlong)local_62e0);
        local_6370 = piVar32;
        goto LAB_143c490e0;
      case 0xc:
        uVar7 = cf2_buf_readByte(piVar32);
        switch(uVar7) {
        default:
          goto switchD_143c4975a_caseD_0;
        case 0x22:
          local_63c0 = (undefined8 *)((ulonglong)local_63c0._1_7_ << 8);
          local_63c8 = "\x01";
          FUN_143c46740(puVar15,&param_6,&param_7,local_61c8);
          uVar30 = 0x2000;
          uVar20 = (ulonglong)param_7;
          uVar19 = (ulonglong)param_6;
          piVar18 = local_6390;
          piVar32 = local_6370;
          break;
        case 0x23:
          local_63c0 = (undefined8 *)((ulonglong)local_63c0._1_7_ << 8);
          local_63c8 = "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01";
          FUN_143c46740(puVar15,&param_6,&param_7,local_61c8);
          uVar20 = (ulonglong)param_7;
          uVar19 = (ulonglong)param_6;
          uVar12 = param_6;
          uVar24 = param_7;
          goto LAB_143c49352;
        case 0x24:
          local_63c0 = (undefined8 *)((ulonglong)local_63c0._1_7_ << 8);
          local_63c8 = "\x01\x01\x01\x01\x01";
          FUN_143c46740(puVar15,&param_6,&param_7,local_61c8);
          uVar30 = 0x2000;
          uVar20 = (ulonglong)param_7;
          uVar19 = (ulonglong)param_6;
          piVar18 = local_6390;
          piVar32 = local_6370;
          break;
        case 0x25:
          local_63c0 = (undefined8 *)CONCAT71(local_63c0._1_7_,1);
          local_63c8 = "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01";
          FUN_143c46740(puVar15,&param_6,&param_7,local_61c8);
          uVar30 = 0x2000;
          uVar20 = (ulonglong)param_7;
          uVar19 = (ulonglong)param_6;
          piVar18 = local_6390;
          piVar32 = local_6370;
        }
        goto LAB_143c490e0;
      case 0xe:
        goto switchD_143c49141_caseD_e;
      case 0x13:
      case 0x14:
        if (((uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3) < 2) ||
           ((char)local_61f0 == '\0')) {
          local_63c8 = local_6398;
          local_63c0 = (undefined8 *)((ulonglong)local_63c0._4_4_ << 0x20);
          FUN_143c46ae0(local_6358,puVar15,&local_62a8,local_6340);
          iVar11 = local_6380;
          if (*(char *)(local_6358[0x15] + 0x331) == '\0') {
            if ((char)local_6368 == '\x13') {
              piVar32 = local_6370;
              FUN_143c48d80(&local_61f8,local_6370,local_6280 + local_6240);
              uVar30 = 0x2000;
              goto switchD_143c4975a_caseD_0;
            }
            _guard_xfg_dispatch_icall_nop(&local_1858,0,0x1828);
            local_183f = *(undefined1 *)(local_6358 + 0x17);
            local_183c = local_6334;
            local_1850 = local_3168;
            local_1848 = local_1940;
            local_1858 = local_6358;
            local_6228 = local_6390;
            local_6220 = 0;
            local_6218 = 0;
            local_6210 = 0;
            local_6208 = 0;
            local_6200 = 0;
            FUN_143c48d80(&local_6228,local_6370,local_6280 + local_6240);
            local_63c0 = (undefined8 *)((ulonglong)local_63c0 & 0xffffffffffffff00);
            local_63c8 = (char *)((ulonglong)local_63c8 & 0xffffffff00000000);
            FUN_143c48420(&local_1858,&local_6268,&local_62a8,&local_6228);
            uVar12 = param_6;
            uVar24 = param_7;
            goto LAB_143c49352;
          }
          goto LAB_143c49b6b;
        }
        break;
      case 0x15:
        uVar12 = (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3);
        if ((2 < uVar12) && (local_6398[0] == '\0')) {
          if (uVar12 == 0) {
            piVar18 = (int *)puVar15[1];
            if ((piVar18 != (int *)0x0) && (*piVar18 == 0)) {
              *piVar18 = 0x82;
            }
            iVar28 = 0;
          }
          else if (*(int *)((longlong)puVar15 + 0x14) == 1) {
            iVar10 = *(int *)(puVar15 + 2);
            if (iVar10 < 0) {
              iVar28 = -(iVar28 - iVar10 >> 0xe);
            }
            else {
              iVar28 = iVar10 + 0x2000 >> 0xe;
            }
          }
          else {
            iVar28 = *(int *)(puVar15 + 2);
            if (*(int *)((longlong)puVar15 + 0x14) == 2) {
              iVar28 = iVar28 << 0x10;
            }
          }
          *local_6340 = iVar28 + local_6348;
        }
        local_6398[0] = '\x01';
        if (*(char *)(local_6358[0x15] + 0x331) == '\0') {
          iVar11 = FUN_143c4a890(puVar15);
          param_7 = (int)uVar20 + iVar11;
          uVar20 = (ulonglong)param_7;
          goto LAB_143c49aa1;
        }
        goto LAB_143c49b6b;
      case 0x16:
        uVar12 = (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3);
        if ((1 < uVar12) && (local_6398[0] == '\0')) {
          if (uVar12 == 0) {
            piVar18 = (int *)puVar15[1];
            if ((piVar18 != (int *)0x0) && (*piVar18 == 0)) {
              *piVar18 = 0x82;
            }
            iVar28 = 0;
          }
          else if (*(int *)((longlong)puVar15 + 0x14) == 1) {
            iVar10 = *(int *)(puVar15 + 2);
            if (iVar10 < 0) {
              iVar28 = -(iVar28 - iVar10 >> 0xe);
            }
            else {
              iVar28 = iVar10 + 0x2000 >> 0xe;
            }
          }
          else {
            iVar28 = *(int *)(puVar15 + 2);
            if (*(int *)((longlong)puVar15 + 0x14) == 2) {
              iVar28 = iVar28 << 0x10;
            }
          }
          *local_6340 = iVar28 + local_6348;
        }
        local_6398[0] = '\x01';
        if (*(char *)(local_6358[0x15] + 0x331) != '\0') goto LAB_143c49b6b;
LAB_143c49aa1:
        iVar11 = FUN_143c4a890(puVar15);
        param_6 = (int)uVar19 + iVar11;
        uVar19 = (ulonglong)param_6;
        FUN_143c47c90(local_61c8,uVar19,uVar20);
        uVar12 = param_6;
        uVar24 = param_7;
LAB_143c49352:
        param_7 = uVar24;
        param_6 = uVar12;
        uVar30 = 0x2000;
        piVar32 = local_6370;
switchD_143c4975a_caseD_0:
        piVar18 = local_6390;
        break;
      case 0x19:
        uVar29 = 0;
        local_6384 = 0;
        local_6378 = (int *)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3);
        uVar12 = param_6;
        uVar24 = param_7;
        if (6 < (uint)local_6378) {
          do {
            if ((uint)uVar29 < (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3)) {
              iVar11 = *(int *)((longlong)puVar15 + uVar29 * 8 + 0x14);
              if (iVar11 == 1) {
                iVar11 = *(int *)(puVar15 + uVar29 + 2);
                if (iVar11 < 0) {
                  iVar28 = -((int)uVar30 - iVar11 >> 0xe);
                }
                else {
                  iVar28 = iVar11 + 0x2000 >> 0xe;
                }
              }
              else {
                iVar28 = *(int *)(puVar15 + uVar29 + 2);
                if (iVar11 == 2) {
                  iVar28 = iVar28 << 0x10;
                }
              }
            }
            else {
              piVar18 = (int *)puVar15[1];
              if ((piVar18 != (int *)0x0) && (*piVar18 == 0)) {
                *piVar18 = 0x82;
              }
              iVar28 = 0;
            }
            uVar12 = (int)uVar19 + iVar28;
            uVar19 = (ulonglong)uVar12;
            iVar11 = FUN_143c4a820(puVar15,(uint)uVar29 + 1);
            uVar24 = (int)uVar20 + iVar11;
            uVar20 = (ulonglong)uVar24;
            FUN_143c47af0(local_61c8,uVar19,uVar24);
            uVar30 = 0x2000;
            uVar21 = local_6384 + 2;
            uVar29 = (ulonglong)uVar21;
            uVar23 = local_6384 + 8;
            local_6384 = uVar21;
          } while (uVar23 < (uint)local_6378);
        }
        param_7 = uVar24;
        param_6 = uVar12;
        if (local_6384 < (uint)local_6378) {
          uVar12 = local_6384 + 2;
          do {
            uVar29 = (ulonglong)uVar12;
            local_637c = uVar12;
            iVar11 = FUN_143c4a820(puVar15,uVar12 - 2);
            uVar31 = (ulonglong)(uint)((int)uVar19 + iVar11);
            iVar11 = FUN_143c4a820(puVar15,(int)uVar29 + -1);
            iVar28 = (int)uVar29;
            uVar16 = (ulonglong)(uint)((int)uVar20 + iVar11);
            iVar11 = FUN_143c4a820(puVar15,uVar29 & 0xffffffff);
            iVar11 = (int)uVar31 + iVar11;
            iVar28 = FUN_143c4a820(puVar15,iVar28 + 1);
            uVar12 = local_637c;
            iVar28 = (int)uVar16 + iVar28;
            iVar10 = FUN_143c4a820(puVar15,local_637c + 2);
            uVar23 = iVar11 + iVar10;
            uVar19 = (ulonglong)uVar23;
            iVar11 = FUN_143c4a820(puVar15,uVar12 + 3);
            uVar21 = iVar28 + iVar11;
            uVar20 = (ulonglong)uVar21;
            local_63b8 = (int **)CONCAT44(local_63b8._4_4_,uVar21);
            local_63c0 = (undefined8 *)CONCAT44(local_63c0._4_4_,uVar23);
            local_63c8 = (char *)CONCAT44(local_63c8._4_4_,iVar28);
            FUN_143c47610(local_61c8,uVar31 & 0xffffffff,uVar16 & 0xffffffff);
            uVar12 = local_637c + 6;
            uVar24 = local_637c + 4;
            param_6 = uVar23;
            param_7 = uVar21;
            local_637c = uVar12;
          } while (uVar24 < (uint)local_6378);
        }
LAB_143c49dee:
        uVar30 = 0x2000;
        piVar32 = local_6370;
LAB_143c49df3:
        puVar15[0x32] = puVar15 + 2;
        piVar18 = local_6390;
        goto LAB_143c490e0;
      case 0x1a:
        uVar12 = (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3);
        uVar23 = uVar12 & 0xfffffffd;
        local_6378 = (int *)(ulonglong)(uVar12 - uVar23);
        local_6350 = CONCAT44(local_6350._4_4_,uVar12) & 0xfffffffffffffffd;
        if (uVar12 - uVar23 < uVar23) {
          do {
            uVar12 = (uint)local_6378;
            uVar29 = uVar19;
            if ((uVar23 - uVar12 & 1) != 0) {
              if (uVar12 < (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3)) {
                iVar11 = *(int *)((longlong)puVar15 + (longlong)local_6378 * 8 + 0x14);
                iVar28 = (int)uVar19;
                if (iVar11 == 1) {
                  iVar11 = *(int *)(puVar15 + (longlong)local_6378 + 2);
                  if (-1 < iVar11) {
                    iVar10 = iVar11 + 0x2000 >> 0xe;
                    goto LAB_143c49ed5;
                  }
                  local_6378 = (int *)(ulonglong)(uVar12 + 1);
                  uVar29 = (ulonglong)(uint)(iVar28 - ((int)uVar30 - iVar11 >> 0xe));
                }
                else {
                  iVar10 = *(int *)(puVar15 + (longlong)local_6378 + 2);
                  if (iVar11 == 2) {
                    local_6378 = (int *)(ulonglong)(uVar12 + 1);
                    uVar29 = (ulonglong)(uint)(iVar10 * 0x10000 + iVar28);
                  }
                  else {
LAB_143c49ed5:
                    local_6378 = (int *)(ulonglong)(uVar12 + 1);
                    uVar29 = (ulonglong)(uint)(iVar10 + iVar28);
                  }
                }
              }
              else {
                piVar18 = (int *)puVar15[1];
                if ((piVar18 != (int *)0x0) && (*piVar18 == 0)) {
                  *piVar18 = 0x82;
                }
                local_6378 = (int *)(ulonglong)(uVar12 + 1);
              }
            }
            iVar28 = (int)local_6378;
            iVar11 = FUN_143c4a820(puVar15,local_6378);
            uVar16 = (ulonglong)(uint)((int)uVar20 + iVar11);
            iVar11 = FUN_143c4a820(puVar15,iVar28 + 1);
            uVar12 = (int)uVar29 + iVar11;
            uVar19 = (ulonglong)uVar12;
            iVar11 = FUN_143c4a820(puVar15,iVar28 + 2);
            iVar11 = (int)uVar16 + iVar11;
            iVar28 = FUN_143c4a820(puVar15,iVar28 + 3);
            uVar24 = iVar11 + iVar28;
            uVar20 = (ulonglong)uVar24;
            local_63b8 = (int **)CONCAT44(local_63b8._4_4_,uVar24);
            local_63c0 = (undefined8 *)CONCAT44(local_63c0._4_4_,uVar12);
            local_63c8 = (char *)CONCAT44(local_63c8._4_4_,iVar11);
            FUN_143c47610(local_61c8,uVar29 & 0xffffffff,uVar16 & 0xffffffff,uVar12);
            uVar30 = 0x2000;
            uVar21 = (int)local_6378 + 4;
            local_6378 = (int *)(ulonglong)uVar21;
            uVar23 = (uint)local_6350;
            param_6 = uVar12;
            param_7 = uVar24;
          } while (uVar21 < (uint)local_6350);
          goto LAB_143c49352;
        }
        break;
      case 0x1b:
        uVar12 = (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3);
        uVar23 = uVar12 & 0xfffffffd;
        local_6378 = (int *)(ulonglong)(uVar12 - uVar23);
        local_6350 = CONCAT44(local_6350._4_4_,uVar12) & 0xfffffffffffffffd;
        if (uVar12 - uVar23 < uVar23) {
          do {
            uVar12 = (uint)local_6378;
            uVar29 = uVar20;
            if ((uVar23 - uVar12 & 1) != 0) {
              if (uVar12 < (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3)) {
                iVar11 = *(int *)((longlong)puVar15 + (longlong)local_6378 * 8 + 0x14);
                iVar28 = (int)uVar20;
                if (iVar11 == 1) {
                  iVar11 = *(int *)(puVar15 + (longlong)local_6378 + 2);
                  if (-1 < iVar11) {
                    iVar10 = iVar11 + 0x2000 >> 0xe;
                    goto LAB_143c4a039;
                  }
                  local_6378 = (int *)(ulonglong)(uVar12 + 1);
                  uVar29 = (ulonglong)(uint)(iVar28 - ((int)uVar30 - iVar11 >> 0xe));
                }
                else {
                  iVar10 = *(int *)(puVar15 + (longlong)local_6378 + 2);
                  if (iVar11 == 2) {
                    local_6378 = (int *)(ulonglong)(uVar12 + 1);
                    uVar29 = (ulonglong)(uint)(iVar10 * 0x10000 + iVar28);
                  }
                  else {
LAB_143c4a039:
                    local_6378 = (int *)(ulonglong)(uVar12 + 1);
                    uVar29 = (ulonglong)(uint)(iVar10 + iVar28);
                  }
                }
              }
              else {
                piVar18 = (int *)puVar15[1];
                if ((piVar18 != (int *)0x0) && (*piVar18 == 0)) {
                  *piVar18 = 0x82;
                }
                local_6378 = (int *)(ulonglong)(uVar12 + 1);
              }
            }
            iVar10 = (int)local_6378;
            iVar11 = FUN_143c4a820(puVar15,local_6378);
            uVar16 = (ulonglong)(uint)((int)uVar19 + iVar11);
            iVar11 = FUN_143c4a820(puVar15,iVar10 + 1);
            iVar11 = (int)uVar16 + iVar11;
            iVar28 = FUN_143c4a820(puVar15,iVar10 + 2);
            uVar24 = (int)uVar29 + iVar28;
            uVar20 = (ulonglong)uVar24;
            iVar28 = FUN_143c4a820(puVar15,iVar10 + 3);
            local_63b8 = (int **)CONCAT44(local_63b8._4_4_,uVar24);
            uVar12 = iVar11 + iVar28;
            uVar19 = (ulonglong)uVar12;
            local_63c0 = (undefined8 *)CONCAT44(local_63c0._4_4_,uVar12);
            local_63c8 = (char *)CONCAT44(local_63c8._4_4_,uVar24);
            FUN_143c47610(local_61c8,uVar16 & 0xffffffff,uVar29 & 0xffffffff);
            uVar30 = 0x2000;
            uVar21 = (int)local_6378 + 4;
            local_6378 = (int *)(ulonglong)uVar21;
            uVar23 = (uint)local_6350;
            param_6 = uVar12;
            param_7 = uVar24;
          } while (uVar21 < (uint)local_6350);
          goto LAB_143c49352;
        }
        break;
      case 0x1c:
        sVar8 = cf2_buf_readByte(piVar32);
        uVar12 = (uint)(short)(sVar8 << 8);
        sVar8 = cf2_buf_readByte();
        cf2_stack_pushInt(puVar15,(int)sVar8 | uVar12);
        piVar18 = local_6390;
        goto LAB_143c490e0;
      case 0x1e:
      case 0x1f:
        uVar12 = (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3);
        local_6384 = uVar12 & 0xfffffffd;
        uVar12 = uVar12 - local_6384;
        piVar26 = (int *)(ulonglong)uVar12;
        local_6378 = piVar26;
        if (uVar12 < local_6384) {
          local_637c = uVar12 + 4;
          local_6364 = uVar12 + 3;
          local_6368 = uVar12 + 2;
          local_6360 = uVar12 + 1;
          cVar6 = bVar27 == 0x1f;
          do {
            uVar31 = (ulonglong)local_637c;
            uVar16 = (ulonglong)local_6360;
            uVar29 = (ulonglong)local_6368;
            iVar11 = (int)uVar19;
            iVar28 = (int)uVar20;
            local_6378 = piVar26;
            if (cVar6 == '\0') {
              local_6350 = CONCAT44(local_6350._4_4_,iVar11);
              local_6338 = FUN_143c4a820(puVar15,piVar26);
              iVar10 = (int)piVar26;
              local_6338 = local_6338 + iVar28;
              iVar28 = FUN_143c4a820(puVar15,uVar16 & 0xffffffff);
              uVar16 = (ulonglong)(uint)(iVar11 + iVar28);
              iVar11 = FUN_143c4a820(puVar15,uVar29 & 0xffffffff);
              uVar20 = (ulonglong)(uint)(iVar11 + local_6338);
              iVar11 = FUN_143c4a820(puVar15,local_6364);
              iVar28 = (int)uVar20;
              iVar9 = (int)uVar31;
              uVar19 = (ulonglong)(uint)((int)uVar16 + iVar11);
              if (local_6384 - iVar10 == 5) {
                iVar11 = FUN_143c4a820(puVar15,uVar31 & 0xffffffff);
                local_6360 = local_6360 + 1;
                local_6378 = (int *)(ulonglong)(iVar10 + 1);
                local_6368 = local_6368 + 1;
                local_6364 = local_6364 + 1;
                local_637c = iVar9 + 1;
                uVar20 = (ulonglong)(uint)(iVar28 + iVar11);
              }
              else {
                uVar20 = uVar20 & 0xffffffff;
              }
              local_6388 = '\x01';
            }
            else {
              if ((uint)piVar26 < (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3)) {
                iVar10 = *(int *)((longlong)puVar15 + (longlong)piVar26 * 8 + 0x14);
                if (iVar10 == 1) {
                  iVar10 = *(int *)(puVar15 + (longlong)piVar26 + 2);
                  if (iVar10 < 0) {
                    iVar9 = -(0x2000 - iVar10 >> 0xe);
                  }
                  else {
                    iVar9 = iVar10 + 0x2000 >> 0xe;
                  }
                }
                else {
                  iVar9 = *(int *)(puVar15 + (longlong)piVar26 + 2);
                  if (iVar10 == 2) {
                    iVar9 = iVar9 << 0x10;
                  }
                }
              }
              else {
                piVar18 = (int *)puVar15[1];
                if ((piVar18 != (int *)0x0) && (*piVar18 == 0)) {
                  *piVar18 = 0x82;
                }
                iVar9 = 0;
              }
              local_6350 = CONCAT44(local_6350._4_4_,iVar11 + iVar9);
              local_6338 = iVar28;
              iVar10 = FUN_143c4a820(puVar15,uVar16);
              iVar22 = (int)piVar26;
              uVar16 = (ulonglong)(uint)(iVar11 + iVar9 + iVar10);
              iVar11 = FUN_143c4a820(puVar15,uVar29 & 0xffffffff);
              iVar28 = iVar28 + iVar11;
              iVar11 = FUN_143c4a820(puVar15,local_6364);
              iVar10 = (int)uVar31;
              uVar20 = (ulonglong)(uint)(iVar28 + iVar11);
              if (local_6384 - iVar22 == 5) {
                iVar11 = FUN_143c4a820(puVar15,uVar31 & 0xffffffff);
                local_6360 = local_6360 + 1;
                local_6378 = (int *)(ulonglong)(iVar22 + 1);
                local_6368 = local_6368 + 1;
                local_637c = iVar10 + 1;
                local_6364 = local_6364 + 1;
                uVar19 = (ulonglong)(uint)((int)uVar16 + iVar11);
                local_6388 = '\0';
              }
              else {
                uVar19 = uVar16 & 0xffffffff;
                local_6388 = '\0';
              }
            }
            uVar24 = (uint)uVar20;
            local_63b8 = (int **)CONCAT44(local_63b8._4_4_,uVar24);
            uVar12 = (uint)uVar19;
            local_63c0 = (undefined8 *)CONCAT44(local_63c0._4_4_,uVar12);
            local_63c8 = (char *)CONCAT44(local_63c8._4_4_,iVar28);
            FUN_143c47610(local_61c8,local_6350 & 0xffffffff,local_6338,uVar16 & 0xffffffff);
            uVar23 = (int)local_6378 + 4;
            piVar26 = (int *)(ulonglong)uVar23;
            local_6360 = local_6360 + 4;
            local_6368 = local_6368 + 4;
            local_6364 = local_6364 + 4;
            local_637c = local_637c + 4;
            cVar6 = local_6388;
            param_6 = uVar12;
            param_7 = uVar24;
            local_6378 = piVar26;
          } while (uVar23 < local_6384);
          goto LAB_143c49352;
        }
        break;
      default:
        goto switchD_143c49141_default;
      }
      puVar15[0x32] = puVar15 + 2;
      goto LAB_143c490e0;
    }
    iVar11 = 0;
  }
LAB_143c49b6b:
  piVar18 = local_62e0;
  if ((local_6390 != (int *)0x0) && (*local_6390 == 0)) {
    *local_6390 = iVar11;
  }
  local_1928 = 0;
  local_1918 = 0;
  local_1910 = 0;
  ft_mem_free(local_1940[0],local_1908);
  local_1908 = 0;
  local_6290 = 0;
  local_6280 = 0;
  local_6278 = 0;
  ft_mem_free(local_62a8,local_6270);
  local_6270 = 0;
  local_6250 = 0;
  local_6240 = 0;
  local_6238 = 0;
  ft_mem_free(local_6268,local_6230);
  local_6230 = 0;
  ft_mem_free(local_6318,piVar18);
  if (puVar15 != (undefined8 *)0x0) {
    ft_mem_free(*puVar15,puVar15);
  }
  return;
switchD_143c49141_default:
  if (bVar27 < 0xf7) {
    plVar4 = puVar15 + 0x32;
    if ((longlong *)*plVar4 == plVar4) {
      piVar26 = (int *)puVar15[1];
      if ((piVar26 != (int *)0x0) && (*piVar26 == 0)) {
        *piVar26 = 0x82;
      }
    }
    else {
      *(uint *)*plVar4 = local_6368 - 0x8b;
      *(undefined4 *)(*plVar4 + 4) = 2;
      *plVar4 = *plVar4 + 8;
    }
  }
  else {
    uVar12 = local_6368;
    iVar11 = cf2_buf_readByte(piVar32);
    if ((byte)uVar29 < 0xfb) {
      cf2_stack_pushInt(puVar15,uVar12 * 0x100 + -0xf694 + iVar11);
      piVar18 = local_6390;
    }
    else if ((byte)uVar29 == 0xff) {
      uVar24 = iVar11 << 8;
      uVar12 = cf2_buf_readByte();
      uVar24 = (uVar12 | uVar24) << 8;
      uVar12 = cf2_buf_readByte();
      uVar24 = (uVar12 | uVar24) << 8;
      uVar12 = cf2_buf_readByte();
      puVar1 = (uint *)(puVar15 + 0x32);
      piVar18 = local_6390;
      if (*(uint **)puVar1 == puVar1) {
        piVar26 = (int *)puVar15[1];
        if ((piVar26 != (int *)0x0) && (*piVar26 == 0)) {
          *piVar26 = 0x82;
        }
      }
      else {
        **(uint **)puVar1 = uVar12 | uVar24;
        *(undefined4 *)(*(longlong *)puVar1 + 4) = 0;
        *(longlong *)puVar1 = *(longlong *)puVar1 + 8;
      }
    }
    else {
      cf2_stack_pushInt(puVar15,(uVar12 * -0x100 + 0xfa94) - iVar11);
      piVar18 = local_6390;
    }
  }
  goto LAB_143c490e0;
switchD_143c49141_caseD_e:
  iVar10 = (int)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3);
  if (((iVar10 - 1U & 0xfffffffb) == 0) && (local_6398[0] == '\0')) {
    if (iVar10 == 0) {
      piVar18 = (int *)puVar15[1];
      if ((piVar18 != (int *)0x0) && (*piVar18 == 0)) {
        *piVar18 = 0x82;
      }
      iVar28 = 0;
    }
    else if (*(int *)((longlong)puVar15 + 0x14) == 1) {
      iVar10 = *(int *)(puVar15 + 2);
      if (iVar10 < 0) {
        iVar28 = -(iVar28 - iVar10 >> 0xe);
      }
      else {
        iVar28 = iVar10 + 0x2000 >> 0xe;
      }
    }
    else {
      iVar28 = *(int *)(puVar15 + 2);
      if (*(int *)((longlong)puVar15 + 0x14) == 2) {
        iVar28 = iVar28 << 0x10;
      }
    }
    *local_6340 = local_6348 + iVar28;
  }
  if (*(char *)(local_6358[0x15] + 0x331) == '\0') {
    if ((char)local_18ec != '\0') {
      local_18ec = CONCAT11(1,(char)local_18ec);
      FUN_143c47af0(local_61c8,local_1890,local_188c);
      if (local_1888 != '\0') {
        local_63c8 = (char *)CONCAT71(local_63c8._1_7_,1);
        FUN_143c47e50(local_61c8,local_61b8,local_18b0,local_18a8);
      }
      local_18e9 = 1;
      local_18ec = 0;
      local_1888 = '\0';
    }
    iVar11 = local_6380;
    if (1 < (uint)((puVar15[0x32] - (longlong)puVar15) + -0x10 >> 3)) {
      if (param_5 == '\0') {
        uVar12 = FUN_143c4a900(puVar15);
        uVar20 = (ulonglong)uVar12;
        local_6334 = FUN_143c4a900();
        uVar13 = FUN_143c4a890();
        uVar14 = FUN_143c4a890(puVar15);
        iVar11 = FUN_143c47120(local_6328,uVar20 & 0xffffffff,&local_6228);
        puVar25 = local_6358;
        if (iVar11 == 0) {
          local_63b0 = &local_6350;
          local_63b8 = (int **)CONCAT44(local_63b8._4_4_,uVar13);
          local_63c0 = (undefined8 *)CONCAT44(local_63c0._4_4_,uVar14);
          local_63c8 = (char *)CONCAT71(local_63c8._1_7_,1);
          FUN_143c48e80(local_6358,&local_6228,local_62c0,local_62d8);
          lVar17 = local_6328;
          plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(local_6328 + 8) + 0xd0) + 0x48);
          if (plVar4 == (longlong *)0x0) {
            lVar5 = *(longlong *)(*(longlong *)(local_6328 + 8) + 0x380);
            if (*(longlong *)(lVar5 + 0x508) == 0) {
              FT_Stream_ReleaseFrame(*(undefined8 *)(lVar5 + 0x4e0),&local_6220);
            }
          }
          else {
            local_62c8 = (int)local_6218 - (int)local_6220;
            local_62d0 = local_6220;
            (**(code **)(*plVar4 + 8))(plVar4[1],&local_62d0);
          }
          iVar11 = FUN_143c47120(lVar17,local_6334,&local_6228);
          if (iVar11 == 0) {
            local_63b0 = &local_6350;
            local_63b8 = (int **)((ulonglong)local_63b8 & 0xffffffff00000000);
            local_63c0 = (undefined8 *)((ulonglong)local_63c0 & 0xffffffff00000000);
            local_63c8 = (char *)CONCAT71(local_63c8._1_7_,1);
            FUN_143c48e80(puVar25,&local_6228,local_62c0,local_62d8);
            lVar17 = *(longlong *)(lVar17 + 8);
            plVar4 = *(longlong **)(*(longlong *)(lVar17 + 0xd0) + 0x48);
            if (plVar4 == (longlong *)0x0) {
              lVar17 = *(longlong *)(lVar17 + 0x380);
              iVar11 = local_6380;
              if (*(longlong *)(lVar17 + 0x508) == 0) {
                FT_Stream_ReleaseFrame(*(undefined8 *)(lVar17 + 0x4e0),&local_6220);
                iVar11 = local_6380;
              }
            }
            else {
              local_62b8 = (int)local_6218 - (int)local_6220;
              local_62c0 = local_6220;
              (**(code **)(*plVar4 + 8))(plVar4[1],&local_62c0);
              iVar11 = local_6380;
            }
          }
        }
      }
      else {
LAB_143c4a5c7:
        iVar11 = 0x12;
      }
    }
  }
  goto LAB_143c49b6b;
}



// FUNCTION 143c4a820 FUN_143c4a820 body=100 status=ok
// SIG undefined FUN_143c4a820(void)

int FUN_143c4a820(longlong param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((uint)((*(longlong *)(param_1 + 400) - param_1) + -0x10 >> 3) <= param_2) {
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0x82;
    }
    return 0;
  }
  uVar4 = (ulonglong)param_2;
  iVar1 = *(int *)(param_1 + 0x14 + uVar4 * 8);
  if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x10 + uVar4 * 8);
    if (iVar1 < 0) {
      return -(0x2000 - iVar1 >> 0xe);
    }
    iVar3 = iVar1 + 0x2000 >> 0xe;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10 + uVar4 * 8);
    if (iVar1 == 2) {
      return iVar3 << 0x10;
    }
  }
  return iVar3;
}



// FUNCTION 143c4a890 FUN_143c4a890 body=98 status=ok
// SIG undefined FUN_143c4a890(void)

int FUN_143c4a890(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 400);
  if (lVar1 == param_1 + 0x10) {
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0xa1;
    }
    return 0;
  }
  piVar2 = (int *)(lVar1 + -8);
  *(int **)(param_1 + 400) = piVar2;
  if (*(int *)(lVar1 + -4) == 1) {
    iVar3 = *piVar2;
    if (iVar3 < 0) {
      return -(0x2000 - iVar3 >> 0xe);
    }
    iVar3 = iVar3 + 0x2000 >> 0xe;
  }
  else {
    iVar3 = *piVar2;
    if (*(int *)(lVar1 + -4) == 2) {
      return iVar3 << 0x10;
    }
  }
  return iVar3;
}



// FUNCTION 143c4a900 FUN_143c4a900 body=82 status=ok
// SIG undefined FUN_143c4a900(void)

undefined4 FUN_143c4a900(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(param_1 + 400);
  if (lVar1 == param_1 + 0x10) {
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0xa1;
    }
    return 0;
  }
  if (*(int *)(lVar1 + -4) != 2) {
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0xa0;
    }
    return 0;
  }
  *(undefined4 **)(param_1 + 400) = (undefined4 *)(lVar1 + -8);
  return *(undefined4 *)(lVar1 + -8);
}



// FUNCTION 143c4a960 cf2_stack_pushInt body=53 status=ok
// SIG undefined cf2_stack_pushInt(void)

void cf2_stack_pushInt(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  
  plVar1 = (longlong *)(param_1 + 400);
  if ((longlong *)*plVar1 == plVar1) {
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0x82;
      return;
    }
  }
  else {
    *(undefined4 *)*plVar1 = param_2;
    *(undefined4 *)(*plVar1 + 4) = 2;
    *plVar1 = *plVar1 + 8;
  }
  return;
}



// FUNCTION 143c4a9a0 FUN_143c4a9a0 body=113 status=ok
// SIG undefined FUN_143c4a9a0(void)

undefined8 FUN_143c4a9a0(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  psVar1 = *(short **)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x59) == '\0') {
    *psVar1 = *psVar1 + 1;
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar2 + 0xc) < (uint)(*(short *)(lVar2 + 0x60) + 1 + (int)*(short *)(lVar2 + 0x18)))
  {
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



// FUNCTION 143c4aa20 FUN_143c4aa20 body=133 status=ok
// SIG undefined FUN_143c4aa20(void)

undefined8 FUN_143c4aa20(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar3 + 8) < (uint)(*(short *)(lVar3 + 0x62) + 1 + (int)*(short *)(lVar3 + 0x1a))) {
    uVar5 = FUN_143c20e90(lVar3,1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  else {
    uVar5 = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x59) != '\0') {
    sVar2 = *(short *)(lVar3 + 2);
    piVar1 = (int *)(*(longlong *)(lVar3 + 8) + (longlong)sVar2 * 8);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    *piVar1 = param_2 >> 10;
    piVar1[1] = param_3 >> 10;
    *(undefined1 *)(sVar2 + lVar4) = 1;
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return uVar5;
}



// FUNCTION 143c4aab0 FUN_143c4aab0 body=190 status=ok
// SIG undefined FUN_143c4aab0(void)

void FUN_143c4aab0(longlong param_1)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  psVar4 = *(short **)(param_1 + 0x28);
  if (psVar4 != (short *)0x0) {
    sVar2 = *psVar4;
    if (sVar2 < 2) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(short *)(*(longlong *)(psVar4 + 0xc) + -4 + (longlong)sVar2 * 2) + 1;
    }
    sVar3 = psVar4[1];
    if (1 < sVar3) {
      lVar5 = *(longlong *)(psVar4 + 4);
      lVar7 = (longlong)sVar3;
      piVar1 = (int *)(lVar5 + (longlong)iVar6 * 8);
      if (((*piVar1 == *(int *)(lVar5 + -8 + lVar7 * 8)) &&
          (piVar1[1] == *(int *)(lVar5 + -4 + lVar7 * 8))) &&
         (*(char *)(*(longlong *)(psVar4 + 8) + -1 + lVar7) == '\x01')) {
        psVar4[1] = sVar3 + -1;
      }
    }
    if (0 < sVar2) {
      sVar3 = psVar4[1];
      if (iVar6 == sVar3 + -1) {
        *psVar4 = sVar2 + -1;
        psVar4[1] = sVar3 + -1;
        return;
      }
      *(short *)(*(longlong *)(psVar4 + 0xc) + -2 + (longlong)sVar2 * 2) = sVar3 + -1;
    }
  }
  return;
}



// FUNCTION 143c4ab70 FUN_143c4ab70 body=174 status=ok
// SIG undefined FUN_143c4ab70(void)

void FUN_143c4ab70(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  longlong lVar1;
  
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0x98);
  if (param_4 != 0) {
    lVar1 = **(longlong **)(param_4 + 0xf0);
    param_1[3] = lVar1;
    param_1[4] = lVar1 + 0x18;
    param_1[5] = lVar1 + 0x60;
    FT_GlyphLoader_Rewind();
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    if ((param_5 != '\0') && (param_3 != 0)) {
      param_1[0xd] = **(undefined8 **)(param_3 + 0x38);
      param_1[0xc] = *(undefined8 *)(*(longlong *)(param_4 + 0xf0) + 0x28);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



// FUNCTION 143c4ac20 FUN_143c4ac20 body=356 status=ok
// SIG undefined FUN_143c4ac20(void)

int FUN_143c4ac20(longlong param_1,uint param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  ushort *puVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  int local_res8 [2];
  
  uVar11 = 0;
  uVar23 = 0;
  uVar14 = 0;
  local_res8[0] = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    if ((0xf < param_2) && (1 < DAT_1468387b0)) {
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      do {
        iVar10 = (int)uVar11;
        puVar12 = (ushort *)(*(longlong *)(param_1 + 8) + uVar11 * 2);
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        uVar5 = puVar12[4];
        uVar6 = puVar12[5];
        uVar7 = puVar12[6];
        uVar8 = puVar12[7];
        uVar14 = iVar10 + 0x10;
        uVar11 = (ulonglong)uVar14;
        uVar15 = (uVar15 < uVar1) * uVar1 | (uVar15 >= uVar1) * uVar15;
        uVar16 = (uVar16 < uVar2) * uVar2 | (uVar16 >= uVar2) * uVar16;
        uVar17 = (uVar17 < uVar3) * uVar3 | (uVar17 >= uVar3) * uVar17;
        uVar18 = (uVar18 < uVar4) * uVar4 | (uVar18 >= uVar4) * uVar18;
        uVar19 = (uVar19 < uVar5) * uVar5 | (uVar19 >= uVar5) * uVar19;
        uVar20 = (uVar20 < uVar6) * uVar6 | (uVar20 >= uVar6) * uVar20;
        uVar21 = (uVar21 < uVar7) * uVar7 | (uVar21 >= uVar7) * uVar21;
        uVar22 = (uVar22 < uVar8) * uVar8 | (uVar22 >= uVar8) * uVar22;
        puVar12 = (ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)(iVar10 + 8) * 2);
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        uVar5 = puVar12[4];
        uVar6 = puVar12[5];
        uVar7 = puVar12[6];
        uVar8 = puVar12[7];
        uVar23 = (uVar23 < uVar1) * uVar1 | (uVar23 >= uVar1) * uVar23;
        uVar24 = (uVar24 < uVar2) * uVar2 | (uVar24 >= uVar2) * uVar24;
        uVar25 = (uVar25 < uVar3) * uVar3 | (uVar25 >= uVar3) * uVar25;
        uVar26 = (uVar26 < uVar4) * uVar4 | (uVar26 >= uVar4) * uVar26;
        uVar27 = (uVar27 < uVar5) * uVar5 | (uVar27 >= uVar5) * uVar27;
        uVar28 = (uVar28 < uVar6) * uVar6 | (uVar28 >= uVar6) * uVar28;
        uVar29 = (uVar29 < uVar7) * uVar7 | (uVar29 >= uVar7) * uVar29;
        uVar30 = (uVar30 < uVar8) * uVar8 | (uVar30 >= uVar8) * uVar30;
      } while (uVar14 < param_2 - (param_2 & 0xf));
      uVar23 = (uVar15 < uVar23) * uVar23 | (uVar15 >= uVar23) * uVar15;
      uVar24 = (uVar16 < uVar24) * uVar24 | (uVar16 >= uVar24) * uVar16;
      uVar25 = (uVar17 < uVar25) * uVar25 | (uVar17 >= uVar25) * uVar17;
      uVar26 = (uVar18 < uVar26) * uVar26 | (uVar18 >= uVar26) * uVar18;
      uVar27 = (uVar19 < uVar27) * uVar27 | (uVar19 >= uVar27) * uVar19;
      uVar28 = (uVar20 < uVar28) * uVar28 | (uVar20 >= uVar28) * uVar20;
      uVar29 = (uVar21 < uVar29) * uVar29 | (uVar21 >= uVar29) * uVar21;
      uVar30 = (uVar22 < uVar30) * uVar30 | (uVar22 >= uVar30) * uVar22;
      uVar23 = (uVar23 < uVar27) * uVar27 | (uVar23 >= uVar27) * uVar23;
      uVar24 = (uVar24 < uVar28) * uVar28 | (uVar24 >= uVar28) * uVar24;
      uVar25 = (uVar25 < uVar29) * uVar29 | (uVar25 >= uVar29) * uVar25;
      uVar26 = (uVar26 < uVar30) * uVar30 | (uVar26 >= uVar30) * uVar26;
      uVar23 = (uVar23 < uVar25) * uVar25 | (uVar23 >= uVar25) * uVar23;
      uVar24 = (uVar24 < uVar26) * uVar26 | (uVar24 >= uVar26) * uVar24;
      uVar23 = (uVar23 < uVar24) * uVar24 | (uVar23 >= uVar24) * uVar23;
    }
    if (uVar14 < param_2) {
      puVar12 = (ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar14 * 2);
      uVar11 = (ulonglong)(param_2 - uVar14);
      do {
        if (uVar23 < *puVar12) {
          uVar23 = *puVar12;
        }
        puVar12 = puVar12 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  uVar9 = FUN_143c27410(param_3,2,0,uVar23 + 1,0,local_res8);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  if (local_res8[0] == 0) {
    iVar10 = param_2 - 1;
    if (-1 < iVar10) {
      lVar13 = (longlong)iVar10 * 2;
      do {
        lVar13 = lVar13 + -2;
        *(short *)(*(longlong *)(param_1 + 0x10) +
                  (ulonglong)*(ushort *)(*(longlong *)(param_1 + 8) + 2 + lVar13) * 2) =
             (short)iVar10;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
    }
    *(uint *)(param_1 + 0x18) = (uint)uVar23;
    *(uint *)(param_1 + 0x1c) = param_2;
  }
  return local_res8[0];
}



// FUNCTION 143c4ad90 FUN_143c4ad90 body=765 status=ok
// SIG undefined FUN_143c4ad90(void)

ulonglong FUN_143c4ad90(uint *param_1,uint param_2,longlong param_3,int param_4,uint param_5,
                       char param_6)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  void *_Dst;
  ulonglong uVar7;
  uint uVar8;
  undefined *_Src;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint local_res18 [2];
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar7 = (ulonglong)param_2;
  local_res18[0] = 0;
  if (param_5 < 3) {
    param_1[1] = param_5;
    if (param_5 == 0) {
      if (param_2 < 0xe6) {
        _Dst = (void *)FUN_143c27410(uVar1,2,0,uVar7,0,local_res18);
        *(void **)(param_1 + 2) = _Dst;
        if (local_res18[0] != 0) goto LAB_143c4b046;
        _Src = &DAT_145d23b70;
        goto LAB_143c4b018;
      }
    }
    else if (param_5 == 1) {
      if (param_2 < 0xa7) {
        _Dst = (void *)FUN_143c27410(uVar1,2,0,uVar7,0,local_res18);
        *(void **)(param_1 + 2) = _Dst;
        if (local_res18[0] != 0) goto LAB_143c4b046;
        _Src = &DAT_145d23d40;
        goto LAB_143c4b018;
      }
    }
    else if ((param_5 == 2) && (param_2 < 0x58)) {
      _Dst = (void *)FUN_143c27410(uVar1,2,0,uVar7,0,local_res18);
      *(void **)(param_1 + 2) = _Dst;
      if (local_res18[0] != 0) goto LAB_143c4b046;
      _Src = &DAT_145d23e90;
LAB_143c4b018:
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,uVar7 * 2);
      goto LAB_143c4b026;
    }
LAB_143c4aee6:
    local_res18[0] = 3;
  }
  else {
    param_1[1] = param_4 + param_5;
    local_res18[0] = FUN_143c251d0(param_3);
    if (local_res18[0] != 0) goto LAB_143c4b046;
    bVar2 = FUN_143c24b80(param_3,local_res18);
    *param_1 = (uint)bVar2;
    if (local_res18[0] != 0) goto LAB_143c4b046;
    lVar9 = 2;
    puVar6 = (undefined2 *)FUN_143c27410(uVar1,2,0,uVar7,0,local_res18);
    *(undefined2 **)(param_1 + 2) = puVar6;
    if (local_res18[0] != 0) goto LAB_143c4b046;
    *puVar6 = 0;
    if (*param_1 == 0) {
      if (param_2 != 0) {
        uVar11 = (ulonglong)(param_2 - 1);
        local_res18[0] = FUN_143c24650(param_3,(param_2 - 1) * 2);
        if (local_res18[0] != 0) goto LAB_143c4b046;
        if (1 < param_2) {
          do {
            uVar5 = FUN_143c24910(param_3);
            *(undefined2 *)(lVar9 + *(longlong *)(param_1 + 2)) = uVar5;
            uVar11 = uVar11 - 1;
            lVar9 = lVar9 + 2;
          } while (uVar11 != 0);
        }
        FT_Stream_ExitFrame(param_3);
      }
    }
    else {
      if (1 < *param_1 - 1) goto LAB_143c4aee6;
      uVar11 = 1;
      if (1 < param_2) {
        while (uVar3 = FUN_143c25070(param_3,local_res18), local_res18[0] == 0) {
          if (*param_1 == 2) {
            uVar4 = FUN_143c25070();
            uVar12 = (uint)uVar4;
          }
          else {
            bVar2 = FUN_143c24b80(param_3,local_res18);
            uVar12 = (uint)bVar2;
          }
          if (local_res18[0] != 0) break;
          if (0xffff - uVar12 < (uint)uVar3) {
            uVar12 = 0xffff - uVar3;
          }
          lVar9 = uVar11 * 2;
          uVar8 = 0;
          while (uVar8 <= uVar12) {
            uVar8 = uVar8 + 1;
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            *(ushort *)(lVar9 + *(longlong *)(param_1 + 2)) = uVar3;
            lVar9 = lVar9 + 2;
            uVar3 = uVar3 + 1;
            if (param_2 <= uVar10) goto LAB_143c4b026;
          }
        }
        goto LAB_143c4b046;
      }
    }
LAB_143c4b026:
    if (param_6 == '\0') {
      uVar7 = (ulonglong)local_res18[0];
    }
    else {
      uVar7 = FUN_143c4ac20(param_1,uVar7,uVar1);
      local_res18[0] = (uint)uVar7;
    }
    if ((int)uVar7 == 0) {
      return uVar7;
    }
  }
LAB_143c4b046:
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 2));
  param_1[2] = 0;
  param_1[3] = 0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (ulonglong)local_res18[0];
}



// FUNCTION 143c4b090 FUN_143c4b090 body=222 status=ok
// SIG undefined FUN_143c4b090(void)

void FUN_143c4b090(void *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x380);
  _guard_xfg_dispatch_icall_nop(param_1,0,0x3f8);
  FUN_143c4ab70(param_1,param_2,param_3,param_4,param_5);
  *(longlong *)((longlong)param_1 + 0x70) = lVar2;
  uVar1 = *(uint *)(lVar2 + 0x8c);
  *(uint *)((longlong)param_1 + 0x3bc) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x3d0) = *(undefined8 *)(lVar2 + 0x5a8);
  if (*(int *)(lVar2 + 0x5f4) == 1) {
    *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  }
  else if (uVar1 < 0x4d8) {
    *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x6b;
  }
  else {
    uVar3 = 0x8000;
    if (uVar1 < 0x846c) {
      uVar3 = 0x46b;
    }
    *(undefined4 *)((longlong)param_1 + 0x3c4) = uVar3;
  }
  *(undefined4 *)((longlong)param_1 + 0x3e4) = param_6;
  return;
}



// FUNCTION 143c4b170 FUN_143c4b170 body=266 status=ok
// SIG undefined FUN_143c4b170(void)

undefined8 FUN_143c4b170(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x380);
  lVar5 = lVar2 + 0x5c8;
  if (*(int *)(lVar2 + 0x818) != 0) {
    bVar3 = FUN_143c4b6b0(lVar2 + 0x1020,param_3);
    if (*(uint *)(lVar2 + 0x818) <= (uint)bVar3) {
      return 3;
    }
    lVar5 = *(longlong *)(lVar2 + 0x820 + (ulonglong)bVar3 * 8);
    if ((*(longlong *)(param_1 + 0x60) != 0) && (param_2 != 0)) {
      *(undefined8 *)(param_1 + 0x68) =
           *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 8 + (ulonglong)bVar3 * 8);
    }
  }
  uVar1 = *(uint *)(lVar5 + 0x224);
  *(uint *)(param_1 + 0x3b8) = uVar1;
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(lVar5 + 0x248);
  if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x5f4) == 1) {
    uVar4 = 0;
  }
  else if (uVar1 < 0x4d8) {
    uVar4 = 0x6b;
  }
  else {
    uVar4 = 0x8000;
    if (uVar1 < 0x846c) {
      uVar4 = 0x46b;
    }
  }
  *(undefined4 *)(param_1 + 0x3c0) = uVar4;
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(lVar5 + 0x210);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(lVar5 + 0x214);
  *(longlong *)(param_1 + 0x3f0) = lVar5;
  return 0;
}



// FUNCTION 143c4b280 FUN_143c4b280 body=1066 status=ok
// SIG undefined FUN_143c4b280(void)

int FUN_143c4b280(uint *param_1,longlong param_2,uint param_3,longlong param_4,int param_5,
                 uint param_6)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  int local_res10 [2];
  
  uVar16 = 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 8) == 0) {
    return 3;
  }
  puVar13 = param_1 + 0x83;
  lVar8 = 0x100;
  do {
    *(undefined2 *)(puVar13 + -0x80) = 0;
    *(undefined2 *)puVar13 = 0;
    puVar13 = (uint *)((longlong)puVar13 + 2);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (param_6 < 2) {
    if (param_6 == 0) {
      lVar8 = 4;
      puVar13 = param_1 + 3;
      puVar10 = (undefined8 *)&DAT_145d23f40;
      do {
        uVar3 = puVar10[1];
        *(undefined8 *)puVar13 = *puVar10;
        *(undefined8 *)(puVar13 + 2) = uVar3;
        uVar3 = puVar10[3];
        *(undefined8 *)(puVar13 + 4) = puVar10[2];
        *(undefined8 *)(puVar13 + 6) = uVar3;
        uVar3 = puVar10[5];
        *(undefined8 *)(puVar13 + 8) = puVar10[4];
        *(undefined8 *)(puVar13 + 10) = uVar3;
        uVar3 = puVar10[7];
        *(undefined8 *)(puVar13 + 0xc) = puVar10[6];
        *(undefined8 *)(puVar13 + 0xe) = uVar3;
        uVar3 = puVar10[9];
        *(undefined8 *)(puVar13 + 0x10) = puVar10[8];
        *(undefined8 *)(puVar13 + 0x12) = uVar3;
        uVar3 = puVar10[0xb];
        *(undefined8 *)(puVar13 + 0x14) = puVar10[10];
        *(undefined8 *)(puVar13 + 0x16) = uVar3;
        uVar14 = *(uint *)((longlong)puVar10 + 100);
        uVar11 = *(uint *)(puVar10 + 0xd);
        uVar7 = *(uint *)((longlong)puVar10 + 0x6c);
        puVar13[0x18] = *(uint *)(puVar10 + 0xc);
        puVar13[0x19] = uVar14;
        puVar13[0x1a] = uVar11;
        puVar13[0x1b] = uVar7;
        uVar14 = *(uint *)((longlong)puVar10 + 0x74);
        uVar11 = *(uint *)(puVar10 + 0xf);
        uVar7 = *(uint *)((longlong)puVar10 + 0x7c);
        puVar13[0x1c] = *(uint *)(puVar10 + 0xe);
        puVar13[0x1d] = uVar14;
        puVar13[0x1e] = uVar11;
        puVar13[0x1f] = uVar7;
        lVar8 = lVar8 + -1;
        puVar13 = puVar13 + 0x20;
        puVar10 = puVar10 + 0x10;
      } while (lVar8 != 0);
    }
    else {
      if (param_6 != 1) {
        return 3;
      }
      lVar8 = 4;
      puVar13 = param_1 + 3;
      puVar10 = (undefined8 *)&DAT_145d24140;
      do {
        uVar3 = puVar10[1];
        *(undefined8 *)puVar13 = *puVar10;
        *(undefined8 *)(puVar13 + 2) = uVar3;
        uVar3 = puVar10[3];
        *(undefined8 *)(puVar13 + 4) = puVar10[2];
        *(undefined8 *)(puVar13 + 6) = uVar3;
        uVar3 = puVar10[5];
        *(undefined8 *)(puVar13 + 8) = puVar10[4];
        *(undefined8 *)(puVar13 + 10) = uVar3;
        uVar3 = puVar10[7];
        *(undefined8 *)(puVar13 + 0xc) = puVar10[6];
        *(undefined8 *)(puVar13 + 0xe) = uVar3;
        uVar3 = puVar10[9];
        *(undefined8 *)(puVar13 + 0x10) = puVar10[8];
        *(undefined8 *)(puVar13 + 0x12) = uVar3;
        uVar3 = puVar10[0xb];
        *(undefined8 *)(puVar13 + 0x14) = puVar10[10];
        *(undefined8 *)(puVar13 + 0x16) = uVar3;
        uVar14 = *(uint *)((longlong)puVar10 + 100);
        uVar11 = *(uint *)(puVar10 + 0xd);
        uVar7 = *(uint *)((longlong)puVar10 + 0x6c);
        puVar13[0x18] = *(uint *)(puVar10 + 0xc);
        puVar13[0x19] = uVar14;
        puVar13[0x1a] = uVar11;
        puVar13[0x1b] = uVar7;
        uVar14 = *(uint *)((longlong)puVar10 + 0x74);
        uVar11 = *(uint *)(puVar10 + 0xf);
        uVar7 = *(uint *)((longlong)puVar10 + 0x7c);
        puVar13[0x1c] = *(uint *)(puVar10 + 0xe);
        puVar13[0x1d] = uVar14;
        puVar13[0x1e] = uVar11;
        puVar13[0x1f] = uVar7;
        lVar8 = lVar8 + -1;
        puVar13 = puVar13 + 0x20;
        puVar10 = puVar10 + 0x10;
      } while (lVar8 != 0);
    }
    puVar13 = param_1 + 3;
    param_1[2] = 0;
    iVar17 = FUN_143c4ac20(param_2,param_3,*(undefined8 *)(param_4 + 0x30));
    if (iVar17 == 0) {
      do {
        uVar2 = (ushort)*puVar13;
        if (((uVar2 == 0) || (*(uint *)(param_2 + 0x18) < (uint)uVar2)) ||
           (uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uint)uVar2 * 2),
           uVar2 == 0)) {
          *(ushort *)(puVar13 + 0x80) = 0;
          *(ushort *)puVar13 = 0;
        }
        else {
          *(ushort *)(puVar13 + 0x80) = uVar2;
          param_1[2] = uVar16 + 1;
        }
        uVar16 = uVar16 + 1;
        puVar13 = (uint *)((longlong)puVar13 + 2);
      } while (uVar16 < 0x100);
    }
  }
  else {
    param_1[1] = param_5 + param_6;
    local_res10[0] = FUN_143c251d0(param_4);
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    bVar4 = FUN_143c24b80(param_4,local_res10);
    *param_1 = (uint)bVar4;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    bVar4 = FUN_143c24b80(param_4,local_res10);
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    uVar14 = (uint)bVar4;
    if ((*param_1 & 0x7f) == 0) {
      param_1[2] = bVar4 + 1;
      local_res10[0] = FUN_143c24650(param_4,bVar4);
      if (local_res10[0] != 0) {
        return local_res10[0];
      }
      pbVar15 = *(byte **)(param_4 + 0x38);
      uVar16 = 1;
      if (uVar14 != 0) {
        do {
          bVar4 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          if (uVar16 < param_3) {
            *(short *)((longlong)param_1 + (ulonglong)bVar4 * 2 + 0x20c) = (short)uVar16;
            *(undefined2 *)((longlong)param_1 + (ulonglong)bVar4 * 2 + 0xc) =
                 *(undefined2 *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar16 * 2);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 <= uVar14);
      }
      FT_Stream_ExitFrame(param_4);
    }
    else {
      if ((*param_1 & 0x7f) != 1) {
        return 3;
      }
      param_1[2] = 0;
      if (uVar14 != 0) {
        uVar11 = 1;
        do {
          bVar4 = FUN_143c24b80(param_4,local_res10);
          if (local_res10[0] != 0) {
            return local_res10[0];
          }
          bVar5 = FUN_143c24b80(param_4,local_res10);
          if (local_res10[0] != 0) {
            return local_res10[0];
          }
          uVar7 = bVar5 + 1;
          if (param_1[2] < uVar7) {
            param_1[2] = uVar7;
          }
          uVar7 = uVar7 + uVar11;
          if (uVar11 < uVar7) {
            iVar17 = bVar4 - uVar11;
            do {
              if (uVar11 < param_3) {
                uVar1 = iVar17 + uVar11;
                if (uVar1 < 0x100) {
                  *(short *)((longlong)param_1 + (ulonglong)uVar1 * 2 + 0x20c) = (short)uVar11;
                  *(undefined2 *)((longlong)param_1 + (ulonglong)uVar1 * 2 + 0xc) =
                       *(undefined2 *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar11 * 2);
                }
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar7);
          }
          uVar16 = uVar16 + 1;
          uVar11 = uVar7;
        } while (uVar16 < uVar14);
      }
      if (0x100 < param_1[2]) {
        param_1[2] = 0x100;
      }
    }
    iVar17 = local_res10[0];
    if ((((*param_1 & 0x80) != 0) &&
        (bVar4 = FUN_143c24b80(param_4,local_res10), iVar17 = local_res10[0], local_res10[0] == 0))
       && (uVar12 = 0, bVar4 != 0)) {
      do {
        bVar5 = FUN_143c24b80(param_4,local_res10);
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        sVar6 = FUN_143c25070(param_4,local_res10);
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        *(short *)((longlong)param_1 + (ulonglong)bVar5 * 2 + 0xc) = sVar6;
        if (param_3 != 0) {
          uVar9 = 0;
          do {
            if (*(short *)(*(longlong *)(param_2 + 8) + uVar9 * 2) == sVar6) {
              *(short *)((longlong)param_1 + (ulonglong)bVar5 * 2 + 0x20c) = (short)uVar9;
              break;
            }
            uVar16 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar16;
          } while (uVar16 < param_3);
        }
        uVar16 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar16;
        iVar17 = 0;
      } while (uVar16 < bVar4);
    }
  }
  return iVar17;
}



// FUNCTION 143c4b6b0 FUN_143c4b6b0 body=186 status=ok
// SIG undefined FUN_143c4b6b0(void)

char FUN_143c4b6b0(char *param_1,uint param_2)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  
  if (*param_1 == '\0') {
    return *(char *)((ulonglong)param_2 + *(longlong *)(param_1 + 8));
  }
  if (*param_1 == '\x03') {
    if (param_2 - *(int *)(param_1 + 0x14) < *(uint *)(param_1 + 0x18)) {
      return param_1[0x1c];
    }
    puVar2 = *(undefined1 **)(param_1 + 8);
    pcVar3 = puVar2 + 2;
    uVar6 = (uint)CONCAT11(*puVar2,puVar2[1]);
    while( true ) {
      if (param_2 < uVar6) {
        return '\0';
      }
      cVar1 = *pcVar3;
      pcVar4 = pcVar3 + 3;
      uVar5 = (uint)CONCAT11(pcVar3[1],pcVar3[2]);
      if (param_2 < uVar5) break;
      pcVar3 = pcVar4;
      uVar6 = uVar5;
      if (puVar2 + *(uint *)(param_1 + 0x10) <= pcVar4) {
        return '\0';
      }
    }
    *(uint *)(param_1 + 0x18) = uVar5 - uVar6;
    *(uint *)(param_1 + 0x14) = uVar6;
    param_1[0x1c] = cVar1;
    return cVar1;
  }
  return '\0';
}



// FUNCTION 143c4b770 FUN_143c4b770 body=988 status=ok
// SIG undefined FUN_143c4b770(void)

void FUN_143c4b770(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar1 = param_1[1];
  uVar5 = 0;
  if (param_1[0x10] != 0) {
    uVar2 = *(undefined8 *)(param_1[0x10] + 0x30);
    if (param_1[0x15] != 0) {
      FT_Stream_ReleaseFrame();
    }
    ft_mem_free(uVar2,param_1[0x14]);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  if (param_1[0xa2] != 0) {
    uVar2 = *(undefined8 *)(param_1[0xa2] + 0x30);
    if (param_1[0xa7] != 0) {
      FT_Stream_ReleaseFrame();
    }
    ft_mem_free(uVar2,param_1[0xa6]);
    param_1[0xa2] = 0;
    param_1[0xa3] = 0;
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
  }
  if (param_1[4] != 0) {
    uVar2 = *(undefined8 *)(param_1[4] + 0x30);
    if (param_1[9] != 0) {
      FT_Stream_ReleaseFrame();
    }
    ft_mem_free(uVar2,param_1[8]);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (param_1[0x9c] != 0) {
    uVar2 = *(undefined8 *)(param_1[0x9c] + 0x30);
    if (param_1[0xa1] != 0) {
      FT_Stream_ReleaseFrame();
    }
    ft_mem_free(uVar2,param_1[0xa0]);
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x9e] = 0;
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    param_1[0xa1] = 0;
  }
  if ((int)param_1[0x103] != 0) {
    do {
      lVar3 = param_1[uVar5 + 0x104];
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x218) != 0) {
          uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x218) + 0x30);
          if (*(longlong *)(lVar3 + 0x240) != 0) {
            FT_Stream_ReleaseFrame();
          }
          ft_mem_free(uVar2,*(undefined8 *)(lVar3 + 0x238));
          *(undefined8 *)(lVar3 + 0x218) = 0;
          *(undefined8 *)(lVar3 + 0x220) = 0;
          *(undefined8 *)(lVar3 + 0x228) = 0;
          *(undefined8 *)(lVar3 + 0x230) = 0;
          *(undefined8 *)(lVar3 + 0x238) = 0;
          *(undefined8 *)(lVar3 + 0x240) = 0;
        }
        ft_mem_free(lVar1,*(undefined8 *)(lVar3 + 0x248));
        *(undefined8 *)(lVar3 + 0x248) = 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x103));
    ft_mem_free(lVar1,param_1[0x104]);
    param_1[0x104] = 0;
  }
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  uVar2 = *(undefined8 *)(*param_1 + 0x30);
  ft_mem_free(uVar2,param_1[0x9a]);
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  ft_mem_free(uVar2,param_1[0x99]);
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  if (param_1 != (longlong *)0xfffffffffffffa38) {
    if (param_1[0xfc] != 0) {
      uVar2 = *(undefined8 *)(param_1[0xfc] + 0x30);
      if (param_1[0x101] != 0) {
        FT_Stream_ReleaseFrame();
      }
      ft_mem_free(uVar2,param_1[0x100]);
      param_1[0xfc] = 0;
      param_1[0xfd] = 0;
      param_1[0xfe] = 0;
      param_1[0xff] = 0;
      param_1[0x100] = 0;
      param_1[0x101] = 0;
    }
    ft_mem_free(lVar1,param_1[0x102]);
    param_1[0x102] = 0;
  }
  if (param_1[0x205] != 0) {
    FT_Stream_ReleaseFrame(*param_1);
  }
  *(undefined4 *)(param_1 + 0x206) = 0;
  *(undefined1 *)(param_1 + 0x204) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1024) = 0;
  ft_mem_free(lVar1,param_1[0x20a]);
  param_1[0x20a] = 0;
  ft_mem_free(lVar1,param_1[0xb4]);
  param_1[0xb4] = 0;
  ft_mem_free(lVar1,param_1[0xb5]);
  param_1[0xb5] = 0;
  ft_mem_free(lVar1,param_1[0xb7]);
  param_1[0xb7] = 0;
  ft_mem_free(lVar1,param_1[0xb8]);
  param_1[0xb8] = 0;
  if ((code *)param_1[0x20e] != (code *)0x0) {
    (*(code *)param_1[0x20e])(param_1[0x20d]);
    ft_mem_free(lVar1,param_1[0x20d]);
    param_1[0x20d] = 0;
  }
  return;
}



// FUNCTION 143c4bb50 FUN_143c4bb50 body=1417 status=ok
// SIG undefined FUN_143c4bb50(void)

ulonglong FUN_143c4bb50(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4,
                       char param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint local_res10 [2];
  uint local_res20 [2];
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar12;
  undefined8 uVar11;
  uint local_a8;
  longlong local_98;
  undefined8 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  uint local_5c;
  undefined8 local_48;
  longlong local_40;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  lVar2 = *(longlong *)(param_2 + 0x30);
  _guard_xfg_dispatch_icall_nop(param_4,0,0x1078);
  *param_4 = param_2;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  param_4[1] = lVar2;
  local_res20[0] = IStreamingManager::GetNumWantingResourcesID(param_2);
  local_res10[0] = FUN_143c24c00(param_2,&DAT_145d24b90,param_4);
  uVar6 = (ulonglong)local_res10[0];
  if (local_res10[0] != 0) goto LAB_143c4c064;
  if ((((char)param_4[3] != '\x01') || (*(byte *)((longlong)param_4 + 0x1a) < 4)) ||
     (4 < *(byte *)((longlong)param_4 + 0x1b))) {
    uVar6 = 2;
    goto LAB_143c4c061;
  }
  local_res10[0] = FUN_143c25220(param_2,*(byte *)((longlong)param_4 + 0x1a) - 4);
  uVar6 = (ulonglong)local_res10[0];
  if (local_res10[0] != 0) goto LAB_143c4c064;
  local_res10[0] = FUN_143c4c530(param_4 + 4,param_2,0);
  uVar6 = (ulonglong)local_res10[0];
  if (local_res10[0] != 0) goto LAB_143c4c064;
  local_res10[0] = FUN_143c4c530(param_4 + 0xa2,param_2,0);
  uVar6 = (ulonglong)local_res10[0];
  if (local_res10[0] != 0) goto LAB_143c4c064;
  local_res10[0] = FUN_143c4c530(&local_98,param_2,1);
  uVar6 = (ulonglong)local_res10[0];
  if (local_res10[0] != 0) goto LAB_143c4c064;
  plVar3 = param_4 + 0x10;
  local_res10[0] = FUN_143c4c530(plVar3,param_2,1);
  uVar6 = (ulonglong)local_res10[0];
  if (local_res10[0] != 0) goto LAB_143c4c064;
  local_res10[0] = FUN_143c4c330(&local_98,param_4 + 0xb7,param_4 + 0xb8);
  uVar6 = (ulonglong)local_res10[0];
  if (local_res10[0] != 0) goto LAB_143c4c064;
  uVar7 = 0;
  *(undefined4 *)(param_4 + 0xb6) = uStack_8c;
  if (param_5 == '\0') {
    local_a8 = 0;
    if (*(uint *)((longlong)param_4 + 0x2c) < 2) goto LAB_143c4bcf4;
    uVar6 = 3;
  }
  else {
    if (param_3 < *(uint *)((longlong)param_4 + 0x2c)) {
      *(uint *)(param_4 + 2) = *(uint *)((longlong)param_4 + 0x2c);
      local_a8 = param_3;
LAB_143c4bcf4:
      if ((int)param_3 < 0) goto LAB_143c4c064;
      uVar11 = CONCAT44(uVar12,local_res20[0]);
      local_res10[0] = FUN_143c4dce0(param_4 + 0xb9,param_4 + 0xa2,local_a8,param_2,uVar11,param_1);
      uVar10 = local_res20[0];
      uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar6 = (ulonglong)local_res10[0];
      if (local_res10[0] != 0) goto LAB_143c4c064;
      local_res10[0] = FUN_143c251d0(param_2,(int)param_4[199] + local_res20[0]);
      uVar6 = (ulonglong)local_res10[0];
      if (local_res10[0] != 0) goto LAB_143c4c064;
      local_res10[0] = FUN_143c4c530(param_4 + 0x9c,param_2,0);
      uVar6 = (ulonglong)local_res10[0];
      if (local_res10[0] != 0) goto LAB_143c4c064;
      if (*(int *)((longlong)param_4 + 0x64c) == 0xffff) {
        *(undefined4 *)(param_4 + 0x103) = 0;
        local_res10[0] = 0;
      }
      else {
        local_res10[0] = FUN_143c251d0(param_2,*(int *)((longlong)param_4 + 0x66c) + uVar10);
        uVar6 = (ulonglong)local_res10[0];
        if (local_res10[0] != 0) goto LAB_143c4c064;
        local_res10[0] = FUN_143c4c530(&local_68,param_2,0);
        uVar6 = (ulonglong)local_res10[0];
        if (local_res10[0] != 0) goto LAB_143c4c064;
        if (local_5c < 0x101) {
          uVar11 = 0;
          *(uint *)(param_4 + 0x103) = local_5c;
          lVar2 = FUN_143c27410(lVar2,0x250,0,local_5c,0,local_res10);
          uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
          uVar6 = (ulonglong)local_res10[0];
          if (local_res10[0] == 0) {
            if (local_5c != 0) {
              plVar5 = param_4 + 0x104;
              uVar6 = (ulonglong)local_5c;
              do {
                *plVar5 = lVar2;
                plVar5 = plVar5 + 1;
                lVar2 = lVar2 + 0x250;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            uVar9 = uVar7;
            if (local_5c != 0) {
              do {
                uVar11 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),local_res20[0]);
                local_res10[0] =
                     FUN_143c4dce0(param_4[uVar9 + 0x104],&local_68,uVar9,param_2,uVar11,param_1);
                uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
                uVar6 = (ulonglong)local_res10[0];
                uVar10 = local_res20[0];
                if (local_res10[0] != 0) goto LAB_143c4beac;
                uVar8 = (int)uVar9 + 1;
                local_res10[0] = 0;
                uVar9 = (ulonglong)uVar8;
              } while (uVar8 < local_5c);
              local_res10[0] = 0;
            }
            local_res10[0] =
                 FUN_143c457e0(param_4 + 0x204,*(undefined4 *)((longlong)param_4 + 0x4ec),param_2,
                               (int)param_4[0xce] + uVar10);
            uVar6 = (ulonglong)local_res10[0];
          }
        }
LAB_143c4beac:
        if (local_68 != 0) {
          uVar11 = *(undefined8 *)(local_68 + 0x30);
          if (local_40 != 0) {
            FT_Stream_ReleaseFrame(local_68,&local_40);
          }
          ft_mem_free(uVar11,local_48);
          uVar6 = (ulonglong)local_res10[0];
        }
        if ((int)uVar6 != 0) goto LAB_143c4c064;
      }
      if ((int)param_4[199] == 0) {
        uVar6 = 3;
        goto LAB_143c4c061;
      }
      *(undefined4 *)((longlong)param_4 + 0x14) = *(undefined4 *)((longlong)param_4 + 0x4ec);
      local_res20[0] = 0;
      uVar11 = *(undefined8 *)(*plVar3 + 0x30);
      param_4[0xb5] = 0;
      uVar6 = uVar7;
      if (param_4[0x14] == 0) {
        uVar6 = FUN_143c4c6b0(plVar3);
        local_res20[0] = (uint)uVar6;
        uVar6 = uVar6 & 0xffffffff;
        if (local_res20[0] == 0) goto LAB_143c4bf31;
      }
      else {
LAB_143c4bf31:
        if (*(int *)((longlong)param_4 + 0x8c) != 0) {
          uVar12 = 0;
          plVar3 = (longlong *)
                   FUN_143c27410(uVar11,8,0,*(int *)((longlong)param_4 + 0x8c) + 1,0,local_res20);
          uVar6 = (ulonglong)local_res20[0];
          if (local_res20[0] == 0) {
            lVar2 = param_4[0x15];
            uVar8 = 1;
            *plVar3 = lVar2;
            if (*(int *)((longlong)param_4 + 0x8c) != 0) {
              do {
                uVar6 = (ulonglong)uVar8;
                uVar4 = *(int *)(param_4[0x14] + uVar6 * 4) - 1;
                if ((uint)uVar7 <= uVar4) {
                  if (*(uint *)(param_4 + 0x13) < uVar4) {
                    uVar4 = *(uint *)(param_4 + 0x13);
                  }
                  uVar7 = (ulonglong)uVar4;
                }
                uVar8 = uVar8 + 1;
                plVar3[uVar6] = uVar7 + lVar2;
              } while (uVar8 <= *(uint *)((longlong)param_4 + 0x8c));
            }
            uVar6 = 0;
            param_4[0xb5] = (longlong)plVar3;
          }
        }
      }
      local_res10[0] = (uint)uVar6;
      if (local_res10[0] == 0) {
        if (*(int *)((longlong)param_4 + 0x14) != 0) {
          if ((*(int *)((longlong)param_4 + 0x64c) == 0xffff) || (param_5 == (char)uVar6)) {
            uVar1 = 0;
          }
          else {
            uVar1 = 1;
          }
          local_res10[0] =
               FUN_143c4ad90(param_4 + 0x98,*(int *)((longlong)param_4 + 0x14),param_2,uVar10,
                             CONCAT44(uVar12,(int)param_4[0xc6]),uVar1);
          uVar6 = (ulonglong)local_res10[0];
          if (local_res10[0] != 0) goto LAB_143c4c064;
          if (*(int *)((longlong)param_4 + 0x64c) == 0xffff) {
            local_res10[0] =
                 FUN_143c4b280(param_4 + 0x16,param_4 + 0x98,
                               *(undefined4 *)((longlong)param_4 + 0x14),param_2,uVar10,
                               *(undefined4 *)((longlong)param_4 + 0x634));
            uVar6 = (ulonglong)local_res10[0];
            if (local_res10[0] != 0) goto LAB_143c4c064;
          }
        }
        lVar2 = FUN_143c4c2a0(param_4,local_a8);
        uVar6 = (ulonglong)local_res10[0];
        param_4[0xb4] = lVar2;
      }
      goto LAB_143c4c064;
    }
    uVar6 = 6;
  }
LAB_143c4c061:
  local_res10[0] = (uint)uVar6;
LAB_143c4c064:
  if (local_98 == 0) {
    return uVar6;
  }
  uVar11 = *(undefined8 *)(local_98 + 0x30);
  if (local_70 != 0) {
    FT_Stream_ReleaseFrame(local_98,&local_70);
  }
  ft_mem_free(uVar11,local_78);
  return (ulonglong)local_res10[0];
}



// FUNCTION 143c4c0e0 FUN_143c4c0e0 body=448 status=ok
// SIG undefined FUN_143c4c0e0(void)

ulonglong FUN_143c4c0e0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte local_res8 [8];
  
  uVar11 = 0;
  uVar10 = (ulonglong)param_2;
  if ((param_1 == (longlong *)0x0) || (*(uint *)((longlong)param_1 + 0xc) <= param_2)) {
    return 6;
  }
  uVar4 = 0;
  lVar3 = *param_1;
  lVar5 = param_1[4];
  if (lVar5 == 0) {
    uVar11 = FUN_143c251d0(lVar3,*(byte *)(param_1 + 2) * param_2 + (int)param_1[1] + 3);
    if ((int)uVar11 != 0) {
      return uVar11;
    }
    uVar7 = 0;
    uVar4 = FUN_143c24ae0(*param_1,local_res8,(char)param_1[2]);
    uVar8 = uVar7;
    if (uVar4 == 0) {
      lVar5 = 0;
      uVar8 = 0;
      if ((ulonglong)*(byte *)(param_1 + 2) != 0) {
        do {
          pbVar1 = local_res8 + lVar5;
          lVar5 = lVar5 + 1;
          uVar7 = uVar7 << 8 | (uint)*pbVar1;
          uVar8 = uVar7;
        } while (lVar5 < (longlong)(ulonglong)*(byte *)(param_1 + 2));
      }
    }
    if (uVar4 != 0) {
      return (ulonglong)uVar4;
    }
    uVar11 = 0;
    uVar4 = 0;
    if (uVar8 != 0) {
      do {
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar6 = 0;
        uVar7 = FUN_143c24ae0(*param_1,local_res8,(char)param_1[2]);
        uVar11 = (ulonglong)uVar7;
        uVar4 = uVar6;
        if (uVar7 == 0) {
          lVar5 = 0;
          uVar4 = 0;
          if ((ulonglong)*(byte *)(param_1 + 2) != 0) {
            do {
              pbVar1 = local_res8 + lVar5;
              lVar5 = lVar5 + 1;
              uVar6 = uVar6 << 8 | (uint)*pbVar1;
              uVar4 = uVar6;
            } while (lVar5 < (longlong)(ulonglong)*(byte *)(param_1 + 2));
          }
        }
      } while ((uVar4 == 0) && (uVar9 < *(uint *)((longlong)param_1 + 0xc)));
    }
  }
  else {
    uVar8 = *(uint *)(lVar5 + uVar10 * 4);
    if (uVar8 != 0) {
      do {
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar7;
        uVar4 = *(uint *)(lVar5 + uVar10 * 4);
        if (uVar4 != 0) break;
      } while (uVar7 < *(uint *)((longlong)param_1 + 0xc));
    }
  }
  iVar2 = *(int *)(lVar3 + 8);
  if ((iVar2 + 1U < uVar4) || ((iVar2 - uVar4) + 1 < *(uint *)((longlong)param_1 + 0x14))) {
    uVar4 = (iVar2 - *(int *)((longlong)param_1 + 0x14)) + 1;
  }
  if ((uVar8 == 0) || (uVar4 <= uVar8)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = uVar4 - uVar8;
    if (param_1[5] == 0) {
      uVar11 = FUN_143c251d0(lVar3,*(int *)((longlong)param_1 + 0x14) + -1 + uVar8);
      if ((int)uVar11 == 0) {
        uVar11 = FT_Stream_ExtractFrame(lVar3,uVar4 - uVar8,param_3);
      }
    }
    else {
      *param_3 = param_1[5] + -1 + (ulonglong)uVar8;
    }
  }
  return uVar11;
}



// FUNCTION 143c4c2a0 FUN_143c4c2a0 body=144 status=ok
// SIG undefined FUN_143c4c2a0(void)

void * FUN_143c4c2a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *_Dst;
  int local_res8 [4];
  uint local_res18 [2];
  void *local_res20;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x30);
  local_res8[0] = FUN_143c4c0e0((undefined8 *)(param_1 + 0x20),param_2,&local_res20,local_res18);
  if (local_res8[0] == 0) {
    _Dst = (void *)FUN_143c271e0(uVar1,local_res18[0] + 1,local_res8);
    if (local_res8[0] == 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,local_res20,(ulonglong)local_res18[0]);
      *(undefined1 *)((ulonglong)local_res18[0] + (longlong)_Dst) = 0;
    }
    if (*(longlong *)(param_1 + 0x48) == 0) {
      FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0x20),&local_res20);
    }
    return _Dst;
  }
  return (void *)0x0;
}



// FUNCTION 143c4c330 FUN_143c4c330 body=442 status=ok
// SIG undefined FUN_143c4c330(void)

ulonglong FUN_143c4c330(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint local_res8 [2];
  undefined8 *local_res10;
  longlong local_48;
  
  uVar8 = 0;
  local_48 = 0;
  local_res8[0] = 0;
  uVar2 = *(undefined8 *)(*param_1 + 0x30);
  *param_2 = 0;
  uVar6 = uVar8;
  local_res10 = param_2;
  if (param_1[4] == 0) {
    uVar4 = FUN_143c4c6b0(param_1);
    local_res8[0] = (uint)uVar4;
    uVar6 = uVar4 & 0xffffffff;
    if (local_res8[0] != 0) {
      return uVar4;
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return uVar6;
  }
  plVar5 = (longlong *)FUN_143c27410(uVar2,8,0,*(int *)((longlong)param_1 + 0xc) + 1,0,local_res8);
  if (local_res8[0] == 0) {
    if (param_3 != (longlong *)0x0) {
      local_48 = FUN_143c271e0(uVar2,(int)param_1[3] + *(int *)((longlong)param_1 + 0xc),local_res8)
      ;
      if (local_res8[0] != 0) {
        return (ulonglong)local_res8[0];
      }
    }
    lVar3 = param_1[5];
    lVar11 = lVar3;
    if (param_3 != (longlong *)0x0) {
      lVar11 = local_48;
    }
    uVar9 = 1;
    *plVar5 = lVar11;
    uVar6 = uVar8;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      do {
        uVar10 = (ulonglong)uVar9;
        uVar7 = *(int *)(param_1[4] + uVar10 * 4) - 1;
        uVar4 = uVar6;
        if ((uint)uVar6 <= uVar7) {
          uVar4 = (ulonglong)uVar7;
          if (*(uint *)(param_1 + 3) < uVar7) {
            uVar4 = (ulonglong)*(uint *)(param_1 + 3);
          }
        }
        if (param_3 == (longlong *)0x0) {
          plVar5[uVar10] = uVar4 + lVar3;
        }
        else {
          lVar11 = uVar8 + uVar4 + local_48;
          plVar1 = plVar5 + uVar10;
          *plVar1 = lVar11;
          if ((uint)uVar4 != (uint)uVar6) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)plVar5[uVar9 - 1],(void *)(uVar6 + lVar3),lVar11 - plVar5[uVar9 - 1])
            ;
            *(undefined1 *)*plVar1 = 0;
            *plVar1 = *plVar1 + 1;
            uVar8 = (ulonglong)((int)uVar8 + 1);
          }
        }
        uVar9 = uVar9 + 1;
        uVar6 = uVar4;
      } while (uVar9 <= *(uint *)((longlong)param_1 + 0xc));
    }
    *local_res10 = plVar5;
    if (param_3 != (longlong *)0x0) {
      *param_3 = local_48;
    }
  }
  return (ulonglong)local_res8[0];
}



// FUNCTION 143c4c4f0 cff_index_get_sid_string body=63 status=ok
// SIG undefined cff_index_get_sid_string(void)

undefined8 cff_index_get_sid_string(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0xffff) {
    if (param_2 < 0x187) {
      if (*(longlong *)(param_1 + 0x1048) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143c4c52b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1048) + 0x28))(param_2);
        return uVar1;
      }
    }
    else if (param_2 - 0x187 < *(uint *)(param_1 + 0x5b0)) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x5b8) + (ulonglong)(param_2 - 0x187) * 8);
    }
  }
  return 0;
}



// FUNCTION 143c4c530 FUN_143c4c530 body=371 status=ok
// SIG undefined FUN_143c4c530(void)

ulonglong FUN_143c4c530(longlong *param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint local_res8 [2];
  byte local_res10 [8];
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  uVar4 = IStreamingManager::GetNumWantingResourcesID(param_2);
  *(undefined4 *)(param_1 + 1) = uVar4;
  uVar3 = FUN_143c25070(param_2,local_res8);
  if (local_res8[0] == 0) {
    if (uVar3 == 0) {
      return 0;
    }
    bVar2 = FUN_143c24b80(param_2,local_res8);
    if (local_res8[0] == 0) {
      if ((byte)(bVar2 - 1) < 4) {
        *(uint *)((longlong)param_1 + 0xc) = (uint)uVar3;
        *(byte *)(param_1 + 2) = bVar2;
        iVar6 = (uVar3 + 1) * (uint)bVar2;
        *(int *)((longlong)param_1 + 0x14) = (int)param_1[1] + 3 + iVar6;
        local_res8[0] = FUN_143c25220(param_2,iVar6 - (uint)bVar2);
        if (local_res8[0] != 0) goto LAB_143c4c678;
        uVar8 = 0;
        local_res8[0] = FUN_143c24ae0(*param_1,local_res10,(char)param_1[2]);
        uVar9 = uVar8;
        if ((local_res8[0] == 0) && (uVar9 = 0, *(byte *)(param_1 + 2) != 0)) {
          pbVar5 = local_res10;
          uVar7 = (ulonglong)*(byte *)(param_1 + 2);
          do {
            bVar2 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar8 = uVar8 << 8 | (uint)bVar2;
            uVar7 = uVar7 - 1;
            uVar9 = uVar8;
          } while (uVar7 != 0);
        }
        if (local_res8[0] != 0) goto LAB_143c4c678;
        if (uVar9 != 0) {
          *(uint *)(param_1 + 3) = uVar9 - 1;
          if (param_3 == '\0') {
            uVar7 = FUN_143c25220(param_2);
            local_res8[0] = (uint)uVar7;
          }
          else {
            uVar7 = FT_Stream_ExtractFrame(param_2,uVar9 - 1,param_1 + 5);
            local_res8[0] = (uint)uVar7;
          }
          if (local_res8[0] == 0) {
            return uVar7;
          }
          goto LAB_143c4c678;
        }
      }
      local_res8[0] = 8;
    }
  }
LAB_143c4c678:
  ft_mem_free(uVar1,param_1[4]);
  param_1[4] = 0;
  return (ulonglong)local_res8[0];
}



// FUNCTION 143c4c6b0 FUN_143c4c6b0 body=472 status=ok
// SIG undefined FUN_143c4c6b0(void)

int FUN_143c4c6b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int local_res8 [2];
  
  lVar1 = *param_1;
  local_res8[0] = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  if ((*(int *)((longlong)param_1 + 0xc) == 0) || (param_1[4] != 0)) {
    return 0;
  }
  iVar8 = *(int *)((longlong)param_1 + 0xc) + 1;
  uVar6 = (uint)*(byte *)(param_1 + 2);
  uVar7 = uVar6 * iVar8;
  lVar4 = FUN_143c27410(uVar2,4,0,iVar8,0,local_res8);
  param_1[4] = lVar4;
  if (((local_res8[0] == 0) &&
      (local_res8[0] = FUN_143c251d0(lVar1,(int)param_1[1] + 3), local_res8[0] == 0)) &&
     (local_res8[0] = FUN_143c24650(lVar1,uVar7), local_res8[0] == 0)) {
    pbVar5 = *(byte **)(lVar1 + 0x38);
    puVar3 = (uint *)param_1[4];
    pbVar9 = pbVar5 + uVar7;
    if (uVar6 == 1) {
      for (; pbVar5 < pbVar9; pbVar5 = pbVar5 + 1) {
        *puVar3 = (uint)*pbVar5;
        puVar3 = puVar3 + 1;
      }
    }
    else if (uVar6 == 2) {
      for (; pbVar5 < pbVar9; pbVar5 = pbVar5 + 2) {
        *puVar3 = (uint)CONCAT11(*pbVar5,pbVar5[1]);
        puVar3 = puVar3 + 1;
      }
    }
    else if (uVar6 == 3) {
      for (; pbVar5 < pbVar9; pbVar5 = pbVar5 + 3) {
        *puVar3 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]);
        puVar3 = puVar3 + 1;
      }
    }
    else {
      for (; pbVar5 < pbVar9; pbVar5 = pbVar5 + 4) {
        *puVar3 = CONCAT31(CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]),pbVar5[3]);
        puVar3 = puVar3 + 1;
      }
    }
    FT_Stream_ExitFrame(lVar1);
    if (local_res8[0] == 0) {
      return 0;
    }
  }
  ft_mem_free(uVar2,param_1[4]);
  param_1[4] = 0;
  return local_res8[0];
}



// FUNCTION 143c4c890 FUN_143c4c890 body=446 status=ok
// SIG undefined FUN_143c4c890(void)

void FUN_143c4c890(longlong param_1,void *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  
  _guard_xfg_dispatch_icall_nop(param_2,0,0xc4);
  bVar1 = *(byte *)(param_1 + 0xb0);
  *(byte *)((longlong)param_2 + 8) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar3 = (undefined2 *)((longlong)param_2 + 0xc);
    puVar4 = (undefined2 *)(param_1 + 0xb4);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 2;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0xb1);
  *(byte *)((longlong)param_2 + 9) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar3 = (undefined2 *)((longlong)param_2 + 0x28);
    puVar4 = (undefined2 *)(param_1 + 0xec);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 2;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0xb2);
  *(byte *)((longlong)param_2 + 10) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar3 = (undefined2 *)((longlong)param_2 + 0x3c);
    puVar4 = (undefined2 *)(param_1 + 0x114);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 2;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0xb3);
  *(byte *)((longlong)param_2 + 0xb) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar3 = (undefined2 *)((longlong)param_2 + 0x58);
    puVar4 = (undefined2 *)(param_1 + 0x14c);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 2;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(undefined4 *)((longlong)param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)((longlong)param_2 + 0x70) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)((longlong)param_2 + 0x74) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined2 *)((longlong)param_2 + 0x78) = *(undefined2 *)(param_1 + 0x180);
  *(undefined2 *)((longlong)param_2 + 0x7a) = *(undefined2 *)(param_1 + 0x184);
  bVar1 = *(byte *)(param_1 + 0x188);
  *(byte *)((longlong)param_2 + 0x7c) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar4 = (undefined2 *)((longlong)param_2 + 0x80);
    puVar3 = (undefined2 *)(param_1 + 0x18c);
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0x189);
  *(byte *)((longlong)param_2 + 0x7d) = bVar1;
  uVar5 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    puVar4 = (undefined2 *)((longlong)param_2 + 0x9a);
    puVar3 = (undefined2 *)(param_1 + 0x1c0);
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(undefined1 *)((longlong)param_2 + 0x7e) = *(undefined1 *)(param_1 + 500);
  *(undefined4 *)((longlong)param_2 + 0xb8) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 0x1fc);
  return;
}


