// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143a71de0 FUN_143a71de0 body=723 status=ok
// SIG undefined FUN_143a71de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a71de0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar12 = 0;
  local_48 = 0;
  uVar3 = uVar12;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  lVar11 = uVar3 + uVar1;
  uVar3 = uVar12;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a721a0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar3 * 8));
      uVar10 = (int)uVar3 + 1;
      uVar9 = (uint)lVar4 | 1;
      local_44 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> local_44 == 0; local_44 = local_44 + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(local_44 * 9 + 0x49U >> 6) + lVar4;
      uVar3 = (ulonglong)uVar10;
    } while (uVar10 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar11 = lVar11 + (ulonglong)uVar1;
  uVar3 = uVar12;
  if (uVar1 != 0) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar3 * 8);
      uVar5 = uVar12;
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        uVar5 = FUN_143a19d80(*(ulonglong *)(lVar4 + 8) & 0xfffffffffffffffe);
      }
      uVar9 = *(uint *)(lVar4 + 0x10);
      if ((uVar9 & 3) != 0) {
        if ((uVar9 & 1) != 0) {
          if ((int)*(uint *)(lVar4 + 0x18) < 0) {
            uVar6 = 10;
          }
          else {
            uVar10 = *(uint *)(lVar4 + 0x18) | 1;
            local_40 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> local_40 == 0; local_40 = local_40 + -1) {
              }
            }
            uVar6 = (ulonglong)(local_40 * 9 + 0x49U >> 6);
          }
          uVar5 = uVar5 + 1 + uVar6;
        }
        if ((uVar9 & 2) != 0) {
          if ((int)*(uint *)(lVar4 + 0x1c) < 0) {
            uVar6 = 10;
          }
          else {
            uVar9 = *(uint *)(lVar4 + 0x1c) | 1;
            local_3c = 0x1f;
            if (uVar9 != 0) {
              for (; uVar9 >> local_3c == 0; local_3c = local_3c + -1) {
              }
            }
            uVar6 = (ulonglong)(local_3c * 9 + 0x49U >> 6);
          }
          uVar5 = uVar5 + 1 + uVar6;
        }
      }
      *(uint *)(lVar4 + 0x14) = (uint)uVar5;
      uVar9 = (uint)uVar5 | 1;
      uVar10 = (int)uVar3 + 1;
      local_38 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> local_38 == 0; local_38 = local_38 + -1) {
        }
      }
      lVar11 = lVar11 + (local_38 * 9 + 0x49U >> 6) + uVar5;
      uVar3 = (ulonglong)uVar10;
    } while (uVar10 < uVar1);
  }
  uVar1 = IStreamingManager::GetNumWantingResources(param_1 + 0x48);
  lVar11 = lVar11 + (ulonglong)uVar1;
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x48);
  uVar3 = uVar12;
  if (0 < iVar2) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 0x48,uVar3);
      uVar9 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar9;
      uVar1 = (uint)*(longlong *)(lVar4 + 0x10) | 1;
      local_34 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> local_34 == 0; local_34 = local_34 + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(local_34 * 9 + 0x49U >> 6) + *(longlong *)(lVar4 + 0x10);
    } while ((int)uVar9 < iVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10);
      uVar9 = (uint)lVar4 | 1;
      local_30 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> local_30 == 0; local_30 = local_30 + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(local_30 * 9 + 0x49U >> 6) + 1 + lVar4;
    }
    if ((uVar1 & 2) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x68);
      lVar7 = FUN_143a529b0(lVar4 + 8);
      if ((*(byte *)(lVar4 + 0x20) & 1) != 0) {
        lVar8 = FUN_143a19d80(*(ulonglong *)(lVar4 + 0x20) & 0xfffffffffffffffe);
        lVar7 = lVar7 + lVar8;
      }
      uVar1 = *(uint *)(lVar4 + 0x38);
      lVar7 = lVar7 + (ulonglong)(uVar1 * 2);
      if (uVar1 != 0) {
        do {
          lVar8 = FUN_143a73ba0(*(undefined8 *)
                                 (*(longlong *)(lVar4 + 0x40) + 8 + (longlong)(int)uVar12 * 8));
          uVar10 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar10;
          uVar9 = (uint)lVar8 | 1;
          local_2c = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> local_2c == 0; local_2c = local_2c + -1) {
            }
          }
          lVar7 = lVar7 + (ulonglong)(local_2c * 9 + 0x49U >> 6) + lVar8;
        } while (uVar10 < uVar1);
      }
      uVar1 = *(uint *)(lVar4 + 0x28);
      if ((uVar1 & 3) != 0) {
        lVar8 = lVar7 + 2;
        if ((uVar1 & 1) == 0) {
          lVar8 = lVar7;
        }
        lVar7 = lVar8;
        if ((uVar1 & 2) != 0) {
          lVar7 = lVar7 + 2;
        }
      }
      *(uint *)(lVar4 + 0x2c) = (uint)lVar7;
      uVar1 = (uint)lVar7 | 1;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      lVar11 = lVar11 + 1 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + lVar7;
    }
  }
  *(int *)(param_1 + 0x14) = (int)lVar11;
  return lVar11;
}



// FUNCTION 143a720c0 FUN_143a720c0 body=217 status=ok
// SIG undefined FUN_143a720c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a720c0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar5 = 0;
  local_18 = 0;
  lVar2 = FUN_143a529b0(param_1 + 8);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
    lVar2 = lVar2 + lVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar2 = lVar2 + (ulonglong)(uVar1 * 2);
  if (uVar1 != 0) {
    do {
      lVar3 = FUN_143a73ba0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar5 * 8));
      uVar5 = uVar5 + 1;
      uVar4 = (uint)lVar3 | 1;
      local_14 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> local_14 == 0; local_14 = local_14 + -1) {
        }
      }
      lVar2 = lVar2 + (ulonglong)(local_14 * 9 + 0x49U >> 6) + lVar3;
    } while (uVar5 < uVar1);
  }
  uVar5 = *(uint *)(param_1 + 0x28);
  if ((uVar5 & 3) != 0) {
    lVar3 = lVar2 + 2;
    if ((uVar5 & 1) == 0) {
      lVar3 = lVar2;
    }
    lVar2 = lVar3;
    if ((uVar5 & 2) != 0) {
      lVar2 = lVar2 + 2;
    }
  }
  *(int *)(param_1 + 0x2c) = (int)lVar2;
  return lVar2;
}



// FUNCTION 143a721a0 FUN_143a721a0 body=401 status=ok
// SIG undefined FUN_143a721a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a721a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_44;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar7 = 0;
  local_48 = 0;
  uVar4 = uVar7;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 7) != 0) {
    if ((uVar3 & 1) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
      uVar8 = (uint)lVar1 | 1;
      local_44 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> local_44 == 0; local_44 = local_44 + -1) {
        }
      }
      uVar4 = uVar4 + (ulonglong)(local_44 * 9 + 0x49U >> 6) + 1 + lVar1;
    }
    if ((uVar3 & 2) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      lVar5 = FUN_143a529b0(lVar1 + 8);
      if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar1 + 0x20) & 0xfffffffffffffffe);
        lVar5 = lVar5 + lVar6;
      }
      uVar8 = *(uint *)(lVar1 + 0x38);
      lVar5 = lVar5 + (ulonglong)(uVar8 * 2);
      if (uVar8 != 0) {
        do {
          lVar6 = FUN_143a73ba0(*(undefined8 *)
                                 (*(longlong *)(lVar1 + 0x40) + 8 + (longlong)(int)uVar7 * 8));
          uVar10 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar10;
          uVar9 = (uint)lVar6 | 1;
          local_40 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> local_40 == 0; local_40 = local_40 + -1) {
            }
          }
          lVar5 = lVar5 + (ulonglong)(local_40 * 9 + 0x49U >> 6) + lVar6;
        } while (uVar10 < uVar8);
      }
      lVar6 = lVar5 + 2;
      if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
        lVar6 = lVar5;
      }
      *(uint *)(lVar1 + 0x2c) = (uint)lVar6;
      uVar8 = (uint)lVar6 | 1;
      iVar2 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar4 = uVar4 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar6;
    }
    if ((uVar3 & 4) != 0) {
      if ((int)*(uint *)(param_1 + 0x28) < 0) {
        uVar7 = 10;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x28) | 1;
        iVar2 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        uVar7 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
      }
      uVar4 = uVar4 + 1 + uVar7;
    }
  }
  *(int *)(param_1 + 0x14) = (int)uVar4;
  return uVar4;
}



// FUNCTION 143a72340 FUN_143a72340 body=198 status=ok
// SIG undefined FUN_143a72340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a72340(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar5 = 0;
  local_18 = 0;
  iVar2 = FUN_143a529b0(param_1 + 8);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    iVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
    iVar2 = iVar2 + iVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  iVar2 = iVar2 + uVar1 * 2;
  if (uVar1 != 0) {
    do {
      uVar4 = FUN_143a73ba0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar5 * 8));
      uVar5 = uVar5 + 1;
      local_14 = 0x1f;
      if ((uVar4 | 1) != 0) {
        for (; (uVar4 | 1) >> local_14 == 0; local_14 = local_14 + -1) {
        }
      }
      iVar2 = iVar2 + (local_14 * 9 + 0x49U >> 6) + uVar4;
    } while (uVar5 < uVar1);
  }
  iVar3 = iVar2 + 2;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  return;
}



// FUNCTION 143a72410 FUN_143a72410 body=189 status=ok
// SIG undefined FUN_143a72410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a72410(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar5 = 0;
  local_18 = 0;
  lVar2 = FUN_143a529b0(param_1 + 8);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
    lVar2 = lVar2 + lVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar2 = lVar2 + (ulonglong)(uVar1 * 2);
  if (uVar1 != 0) {
    do {
      lVar3 = FUN_143a73ba0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar5 * 8));
      uVar5 = uVar5 + 1;
      uVar4 = (uint)lVar3 | 1;
      local_14 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> local_14 == 0; local_14 = local_14 + -1) {
        }
      }
      lVar2 = lVar2 + (ulonglong)(local_14 * 9 + 0x49U >> 6) + lVar3;
    } while (uVar5 < uVar1);
  }
  *(int *)(param_1 + 0x2c) = (int)lVar2;
  return lVar2;
}



// FUNCTION 143a724d0 FUN_143a724d0 body=526 status=ok
// SIG undefined FUN_143a724d0(void)

longlong FUN_143a724d0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar4 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar7 = 10;
  if ((char)uVar3 != '\0') {
    if ((uVar3 & 1) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
      uVar2 = (uint)lVar5 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar4 = lVar4 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
    }
    if ((uVar3 & 2) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      uVar2 = (uint)lVar5 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar4 = lVar4 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
    }
    if ((uVar3 & 4) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
      uVar2 = (uint)lVar5 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar4 = lVar4 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
    }
    if ((uVar3 & 8) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
      uVar2 = (uint)lVar5 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar4 = lVar4 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
    }
    if ((uVar3 & 0x10) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
      uVar2 = (uint)lVar5 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar4 = lVar4 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
    }
    if ((uVar3 & 0x20) != 0) {
      lVar5 = FUN_143a726e0(*(undefined8 *)(param_1 + 0x40));
      uVar2 = (uint)lVar5 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar4 = lVar4 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
    }
    if ((uVar3 & 0x40) != 0) {
      if ((int)*(uint *)(param_1 + 0x48) < 0) {
        uVar6 = 10;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x48) | 1;
        iVar1 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar6 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      lVar4 = lVar4 + 1 + uVar6;
    }
    if ((char)uVar3 < '\0') {
      if ((int)*(uint *)(param_1 + 0x4c) < 0) {
        uVar6 = 10;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x4c) | 1;
        iVar1 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar6 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      lVar4 = lVar4 + 1 + uVar6;
    }
  }
  if ((uVar3 & 0x300) != 0) {
    if ((uVar3 >> 8 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x50) < 0) {
        uVar6 = 10;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x50) | 1;
        iVar1 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar6 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      lVar4 = lVar4 + 1 + uVar6;
    }
    if ((uVar3 >> 9 & 1) != 0) {
      if (-1 < (int)*(uint *)(param_1 + 0x54)) {
        uVar3 = *(uint *)(param_1 + 0x54) | 1;
        iVar1 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar7 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      lVar4 = lVar4 + 1 + uVar7;
    }
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



// FUNCTION 143a726e0 FUN_143a726e0 body=341 status=ok
// SIG undefined FUN_143a726e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a726e0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar8 = 0;
  local_28 = 0;
  lVar3 = FUN_143a529b0(param_1 + 8);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    lVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
    lVar3 = lVar3 + lVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  lVar3 = lVar3 + (ulonglong)(uVar2 * 2);
  if (uVar2 != 0) {
    do {
      lVar4 = FUN_143a73ba0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar8 * 8));
      uVar8 = uVar8 + 1;
      uVar6 = (uint)lVar4 | 1;
      local_24 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> local_24 == 0; local_24 = local_24 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(local_24 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar8 < uVar2);
  }
  uVar8 = *(uint *)(param_1 + 0x28);
  if ((uVar8 & 0x3f) != 0) {
    uVar7 = 10;
    if ((uVar8 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x48) < 0) {
        uVar5 = 10;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x48) | 1;
        iVar1 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar5 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      lVar3 = lVar3 + 1 + uVar5;
    }
    lVar4 = lVar3 + 2;
    if ((uVar8 & 2) == 0) {
      lVar4 = lVar3;
    }
    lVar3 = lVar4 + 2;
    if ((uVar8 & 4) == 0) {
      lVar3 = lVar4;
    }
    lVar4 = lVar3 + 2;
    if ((uVar8 & 8) == 0) {
      lVar4 = lVar3;
    }
    lVar3 = lVar4 + 2;
    if ((uVar8 & 0x10) == 0) {
      lVar3 = lVar4;
    }
    if ((uVar8 & 0x20) != 0) {
      if (-1 < (int)*(uint *)(param_1 + 0x50)) {
        uVar8 = *(uint *)(param_1 + 0x50) | 1;
        iVar1 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar7 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      lVar3 = lVar3 + 1 + uVar7;
    }
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



// FUNCTION 143a72840 FUN_143a72840 body=916 status=ok
// SIG undefined FUN_143a72840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a72840(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar9 = 0;
  local_68 = 0;
  uVar3 = uVar9;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = IStreamingManager::GetNumWantingResources(param_1 + 0x18);
  lVar10 = uVar3 + uVar1;
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x18);
  uVar3 = uVar9;
  if (0 < iVar2) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 0x18,uVar3);
      uVar7 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar7;
      uVar1 = (uint)*(longlong *)(lVar4 + 0x10) | 1;
      local_64 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> local_64 == 0; local_64 = local_64 + -1) {
        }
      }
      lVar10 = lVar10 + (ulonglong)(local_64 * 9 + 0x49U >> 6) + *(longlong *)(lVar4 + 0x10);
    } while ((int)uVar7 < iVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar10 = lVar10 + (ulonglong)uVar1;
  uVar3 = uVar9;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a71760(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar3 * 8));
      uVar8 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar8;
      uVar7 = (uint)lVar4 | 1;
      local_60 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_60 == 0; local_60 = local_60 + -1) {
        }
      }
      lVar10 = lVar10 + (ulonglong)(local_60 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar8 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  lVar10 = lVar10 + (ulonglong)uVar1;
  uVar3 = uVar9;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a71de0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x58) + 8 + (longlong)(int)uVar3 * 8));
      uVar8 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar8;
      uVar7 = (uint)lVar4 | 1;
      local_5c = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_5c == 0; local_5c = local_5c + -1) {
        }
      }
      lVar10 = lVar10 + (ulonglong)(local_5c * 9 + 0x49U >> 6) + lVar4;
    } while (uVar8 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  lVar10 = lVar10 + (ulonglong)uVar1;
  uVar3 = uVar9;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a73600(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x70) + 8 + (longlong)(int)uVar3 * 8));
      uVar8 = (int)uVar3 + 1;
      uVar7 = (uint)lVar4 | 1;
      local_58 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_58 == 0; local_58 = local_58 + -1) {
        }
      }
      lVar10 = lVar10 + (ulonglong)(local_58 * 9 + 0x49U >> 6) + lVar4;
      uVar3 = (ulonglong)uVar8;
    } while (uVar8 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  lVar10 = lVar10 + (ulonglong)uVar1;
  uVar3 = uVar9;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a724d0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x88) + 8 + (longlong)(int)uVar3 * 8));
      uVar8 = (int)uVar3 + 1;
      uVar7 = (uint)lVar4 | 1;
      local_54 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_54 == 0; local_54 = local_54 + -1) {
        }
      }
      lVar10 = lVar10 + (ulonglong)(local_54 * 9 + 0x49U >> 6) + lVar4;
      uVar3 = (ulonglong)uVar8;
    } while (uVar8 < uVar1);
  }
  lVar4 = FUN_1439fa120(param_1 + 0x90);
  uVar7 = FUN_1439f2ae0(param_1 + 0x90);
  lVar5 = FUN_1439fa120(param_1 + 0xa0);
  uVar8 = FUN_1439f2ae0(param_1 + 0xa0);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar10 = lVar10 + (ulonglong)uVar8 + lVar5 + (ulonglong)uVar7 + lVar4;
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
      uVar7 = (uint)lVar4 | 1;
      local_50 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_50 == 0; local_50 = local_50 + -1) {
        }
      }
      lVar10 = lVar10 + (ulonglong)(local_50 * 9 + 0x49U >> 6) + 1 + lVar4;
    }
    if ((uVar1 & 2) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x10);
      uVar7 = (uint)lVar4 | 1;
      local_4c = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_4c == 0; local_4c = local_4c + -1) {
        }
      }
      lVar10 = lVar10 + (ulonglong)(local_4c * 9 + 0x49U >> 6) + 1 + lVar4;
    }
    if ((uVar1 & 4) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x10);
      uVar7 = (uint)lVar4 | 1;
      local_48 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_48 == 0; local_48 = local_48 + -1) {
        }
      }
      lVar10 = lVar10 + (ulonglong)(local_48 * 9 + 0x49U >> 6) + 1 + lVar4;
    }
    if ((uVar1 & 8) != 0) {
      lVar4 = FUN_143a72c90(*(undefined8 *)(param_1 + 200));
      uVar7 = (uint)lVar4 | 1;
      local_44 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_44 == 0; local_44 = local_44 + -1) {
        }
      }
      lVar10 = lVar10 + (ulonglong)(local_44 * 9 + 0x49U >> 6) + 1 + lVar4;
    }
    if ((uVar1 & 0x10) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd0);
      uVar3 = uVar9;
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        uVar3 = FUN_143a19d80(*(ulonglong *)(lVar4 + 8) & 0xfffffffffffffffe);
      }
      uVar1 = *(uint *)(lVar4 + 0x20);
      lVar5 = uVar3 + uVar1;
      if (uVar1 != 0) {
        do {
          lVar6 = FUN_143a73a30(*(undefined8 *)
                                 (*(longlong *)(lVar4 + 0x28) + 8 + (longlong)(int)uVar9 * 8));
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar7 = (uint)lVar6 | 1;
          local_40 = 0x1f;
          if (uVar7 != 0) {
            for (; uVar7 >> local_40 == 0; local_40 = local_40 + -1) {
            }
          }
          lVar5 = lVar5 + (ulonglong)(local_40 * 9 + 0x49U >> 6) + lVar6;
        } while (uVar8 < uVar1);
      }
      *(uint *)(lVar4 + 0x14) = (uint)lVar5;
      uVar1 = (uint)lVar5 | 1;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      lVar10 = lVar10 + 1 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + lVar5;
    }
  }
  *(int *)(param_1 + 0x14) = (int)lVar10;
  return lVar10;
}



// FUNCTION 143a72be0 FUN_143a72be0 body=171 status=ok
// SIG undefined FUN_143a72be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a72be0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar7 = 0;
  local_18 = 0;
  uVar2 = uVar7;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar2 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  lVar5 = uVar2 + uVar1;
  if (uVar1 != 0) {
    do {
      lVar3 = FUN_143a72840(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar7 * 8));
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar4 = (uint)lVar3 | 1;
      local_14 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> local_14 == 0; local_14 = local_14 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_14 * 9 + 0x49U >> 6) + lVar3;
    } while (uVar6 < uVar1);
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



// FUNCTION 143a72c90 FUN_143a72c90 body=857 status=ok
// SIG undefined FUN_143a72c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a72c90(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_44;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar8 = 0;
  local_48 = 0;
  lVar3 = FUN_143a529b0(param_1 + 8);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    lVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
    lVar3 = lVar3 + lVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  lVar3 = lVar3 + (ulonglong)(uVar2 * 2);
  if (uVar2 != 0) {
    do {
      lVar4 = FUN_143a73ba0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar8 * 8));
      uVar8 = uVar8 + 1;
      uVar6 = (uint)lVar4 | 1;
      local_44 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> local_44 == 0; local_44 = local_44 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(local_44 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar8 < uVar2);
  }
  uVar8 = *(uint *)(param_1 + 0x28);
  if ((char)uVar8 != '\0') {
    if ((uVar8 & 1) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
      uVar2 = (uint)lVar4 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar4;
    }
    if ((uVar8 & 2) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10);
      uVar2 = (uint)lVar4 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar4;
    }
    if ((uVar8 & 4) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
      uVar2 = (uint)lVar4 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar4;
    }
    if ((uVar8 & 8) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10);
      uVar2 = (uint)lVar4 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 2 + lVar4;
    }
    if ((uVar8 & 0x10) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10);
      uVar2 = (uint)lVar4 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 2 + lVar4;
    }
    if ((uVar8 & 0x20) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10);
      uVar2 = (uint)lVar4 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 2 + lVar4;
    }
    if ((uVar8 & 0x40) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10);
      uVar2 = (uint)lVar4 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 2 + lVar4;
    }
    if ((char)uVar8 < '\0') {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
      uVar2 = (uint)lVar4 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 2 + lVar4;
    }
  }
  if ((uVar8 & 0xff00) != 0) {
    if ((uVar8 >> 8 & 1) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10);
      uVar2 = (uint)lVar4 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 2 + lVar4;
    }
    if ((uVar8 >> 9 & 1) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
      uVar2 = (uint)lVar4 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 2 + lVar4;
    }
    lVar4 = lVar3 + 2;
    if ((uVar8 >> 10 & 1) == 0) {
      lVar4 = lVar3;
    }
    lVar3 = lVar4 + 3;
    if ((uVar8 >> 0xb & 1) == 0) {
      lVar3 = lVar4;
    }
    lVar4 = lVar3 + 3;
    if ((uVar8 >> 0xc & 1) == 0) {
      lVar4 = lVar3;
    }
    lVar7 = lVar4 + 3;
    if ((uVar8 >> 0xd & 1) == 0) {
      lVar7 = lVar4;
    }
    lVar3 = lVar7 + 3;
    if ((uVar8 >> 0xe & 1) == 0) {
      lVar3 = lVar7;
    }
    if ((uVar8 >> 0xf & 1) != 0) {
      lVar3 = lVar3 + 3;
    }
  }
  if ((uVar8 & 0xf0000) != 0) {
    lVar4 = lVar3 + 3;
    if ((uVar8 >> 0x10 & 1) == 0) {
      lVar4 = lVar3;
    }
    lVar7 = lVar4 + 3;
    if ((uVar8 >> 0x11 & 1) == 0) {
      lVar7 = lVar4;
    }
    lVar3 = lVar7 + 3;
    if ((uVar8 >> 0x12 & 1) == 0) {
      lVar3 = lVar7;
    }
    if ((uVar8 >> 0x13 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0xa4) < 0) {
        uVar5 = 10;
      }
      else {
        uVar8 = *(uint *)(param_1 + 0xa4) | 1;
        iVar1 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar5 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      lVar3 = lVar3 + 1 + uVar5;
    }
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



// FUNCTION 143a72ff0 FUN_143a72ff0 body=171 status=ok
// SIG undefined FUN_143a72ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a72ff0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar7 = 0;
  local_18 = 0;
  uVar2 = uVar7;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar2 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  lVar5 = uVar2 + uVar1;
  if (uVar1 != 0) {
    do {
      lVar3 = FUN_143a730a0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar7 * 8));
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar4 = (uint)lVar3 | 1;
      local_14 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> local_14 == 0; local_14 = local_14 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_14 * 9 + 0x49U >> 6) + lVar3;
    } while (uVar6 < uVar1);
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



// FUNCTION 143a730a0 FUN_143a730a0 body=261 status=ok
// SIG undefined FUN_143a730a0(void)

longlong FUN_143a730a0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar4 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar5 = FUN_1439fa120(param_1 + 0x18);
  uVar7 = 10;
  uVar3 = (uint)lVar5;
  if (lVar5 != 0) {
    if ((int)uVar3 < 0) {
      uVar6 = 10;
    }
    else {
      iVar1 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar6 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
    }
    lVar4 = lVar4 + 1 + uVar6;
  }
  *(uint *)(param_1 + 0x28) = uVar3;
  lVar4 = lVar4 + lVar5;
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 7) != 0) {
    if ((uVar3 & 1) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
      uVar2 = (uint)lVar5 | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar4 = lVar4 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar5;
    }
    if ((uVar3 & 2) != 0) {
      if ((int)*(uint *)(param_1 + 0x38) < 0) {
        uVar6 = 10;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x38) | 1;
        iVar1 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar6 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      lVar4 = lVar4 + 1 + uVar6;
    }
    if ((uVar3 & 4) != 0) {
      if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
        uVar3 = *(uint *)(param_1 + 0x3c) | 1;
        iVar1 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar7 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      lVar4 = lVar4 + 1 + uVar7;
    }
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



// FUNCTION 143a731b0 FUN_143a731b0 body=239 status=ok
// SIG undefined FUN_143a731b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a731b0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar6 = 0;
  local_18 = 0;
  lVar2 = FUN_143a529b0(param_1 + 8);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
    lVar2 = lVar2 + lVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar2 = lVar2 + (ulonglong)(uVar1 * 2);
  if (uVar1 != 0) {
    do {
      lVar3 = FUN_143a73ba0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar6 * 8));
      uVar6 = uVar6 + 1;
      uVar4 = (uint)lVar3 | 1;
      local_14 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> local_14 == 0; local_14 = local_14 + -1) {
        }
      }
      lVar2 = lVar2 + (ulonglong)(local_14 * 9 + 0x49U >> 6) + lVar3;
    } while (uVar6 < uVar1);
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  if ((uVar6 & 0xf) != 0) {
    lVar3 = lVar2 + 2;
    if ((uVar6 & 1) == 0) {
      lVar3 = lVar2;
    }
    lVar5 = lVar3 + 2;
    if ((uVar6 & 2) == 0) {
      lVar5 = lVar3;
    }
    lVar2 = lVar5 + 2;
    if ((uVar6 & 4) == 0) {
      lVar2 = lVar5;
    }
    if ((uVar6 & 8) != 0) {
      lVar2 = lVar2 + 2;
    }
  }
  *(int *)(param_1 + 0x2c) = (int)lVar2;
  return lVar2;
}



// FUNCTION 143a732a0 FUN_143a732a0 body=246 status=ok
// SIG undefined FUN_143a732a0(void)

longlong FUN_143a732a0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    lVar5 = lVar3;
    if ((uVar1 & 1) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
      uVar4 = (uint)lVar5 | 1;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      lVar5 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar5;
    }
    if ((uVar1 & 2) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      uVar4 = (uint)lVar3 | 1;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar3;
    }
    if ((uVar1 & 4) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
      uVar4 = (uint)lVar3 | 1;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar3;
    }
    if ((uVar1 & 8) != 0) {
      lVar3 = FUN_143a6f720(*(undefined8 *)(param_1 + 0x30));
      lVar5 = lVar5 + lVar3 + 1;
    }
    lVar3 = lVar5 + 2;
    if ((uVar1 & 0x10) == 0) {
      lVar3 = lVar5;
    }
    if ((uVar1 & 0x20) != 0) {
      lVar3 = lVar3 + 2;
    }
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



// FUNCTION 143a733a0 FUN_143a733a0 body=254 status=ok
// SIG undefined FUN_143a733a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a733a0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar7 = 0;
  local_28 = 0;
  lVar3 = FUN_143a529b0(param_1 + 8);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    lVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
    lVar3 = lVar3 + lVar4;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar3 = lVar3 + (ulonglong)(uVar1 * 2);
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a73ba0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar7 * 8));
      uVar7 = uVar7 + 1;
      uVar6 = (uint)lVar4 | 1;
      local_24 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> local_24 == 0; local_24 = local_24 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(local_24 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar7 < uVar1);
  }
  uVar7 = *(uint *)(param_1 + 0x28);
  if ((uVar7 & 3) != 0) {
    lVar4 = lVar3 + 3;
    if ((uVar7 & 1) == 0) {
      lVar4 = lVar3;
    }
    lVar3 = lVar4;
    if ((uVar7 & 2) != 0) {
      if ((int)*(uint *)(param_1 + 0x4c) < 0) {
        uVar5 = 10;
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x4c) | 1;
        iVar2 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        uVar5 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
      }
      lVar3 = lVar3 + 2 + uVar5;
    }
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



// FUNCTION 143a734a0 FUN_143a734a0 body=337 status=ok
// SIG undefined FUN_143a734a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a734a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar9 = 0;
  local_38 = 0;
  uVar4 = uVar9;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
      uVar7 = (uint)lVar1 | 1;
      local_34 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_34 == 0; local_34 = local_34 + -1) {
        }
      }
      uVar4 = uVar4 + (ulonglong)(local_34 * 9 + 0x49U >> 6) + 1 + lVar1;
    }
    if ((uVar3 & 2) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      lVar5 = FUN_143a529b0(lVar1 + 8);
      if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar1 + 0x20) & 0xfffffffffffffffe);
        lVar5 = lVar5 + lVar6;
      }
      uVar3 = *(uint *)(lVar1 + 0x38);
      lVar5 = lVar5 + (ulonglong)(uVar3 * 2);
      if (uVar3 != 0) {
        do {
          lVar6 = FUN_143a73ba0(*(undefined8 *)
                                 (*(longlong *)(lVar1 + 0x40) + 8 + (longlong)(int)uVar9 * 8));
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar7 = (uint)lVar6 | 1;
          local_30 = 0x1f;
          if (uVar7 != 0) {
            for (; uVar7 >> local_30 == 0; local_30 = local_30 + -1) {
            }
          }
          lVar5 = lVar5 + (ulonglong)(local_30 * 9 + 0x49U >> 6) + lVar6;
        } while (uVar8 < uVar3);
      }
      uVar3 = (uint)lVar5 | 1;
      *(uint *)(lVar1 + 0x2c) = (uint)lVar5;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar4 = uVar4 + 1 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + lVar5;
    }
  }
  *(int *)(param_1 + 0x14) = (int)uVar4;
  return uVar4;
}



// FUNCTION 143a73600 FUN_143a73600 body=685 status=ok
// SIG undefined FUN_143a73600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a73600(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar12 = 0;
  local_58 = 0;
  uVar6 = uVar12;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar6 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  lVar11 = uVar6 + uVar5;
  uVar6 = uVar12;
  if (uVar5 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar6 * 8);
      uVar7 = uVar12;
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        uVar7 = FUN_143a19d80(*(ulonglong *)(lVar1 + 8) & 0xfffffffffffffffe);
      }
      uVar4 = *(uint *)(lVar1 + 0x10);
      if ((uVar4 & 0x3f) != 0) {
        uVar10 = uVar7;
        if ((uVar4 & 1) != 0) {
          lVar8 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x10);
          uVar3 = (uint)lVar8 | 1;
          local_54 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> local_54 == 0; local_54 = local_54 + -1) {
            }
          }
          uVar10 = uVar7 + (ulonglong)(local_54 * 9 + 0x49U >> 6) + 1 + lVar8;
        }
        if ((uVar4 & 2) != 0) {
          lVar8 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x10);
          uVar3 = (uint)lVar8 | 1;
          local_50 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> local_50 == 0; local_50 = local_50 + -1) {
            }
          }
          uVar10 = uVar10 + (ulonglong)(local_50 * 9 + 0x49U >> 6) + 1 + lVar8;
        }
        if ((uVar4 & 4) != 0) {
          lVar8 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x10);
          uVar3 = (uint)lVar8 | 1;
          local_4c = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> local_4c == 0; local_4c = local_4c + -1) {
            }
          }
          uVar10 = uVar10 + (ulonglong)(local_4c * 9 + 0x49U >> 6) + 1 + lVar8;
        }
        if ((uVar4 & 8) != 0) {
          lVar8 = FUN_143a6f720(*(undefined8 *)(lVar1 + 0x30));
          uVar10 = uVar10 + 1 + lVar8;
        }
        uVar7 = uVar10 + 2;
        if ((uVar4 & 0x10) == 0) {
          uVar7 = uVar10;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar7 = uVar7 + 2;
        }
      }
      *(uint *)(lVar1 + 0x14) = (uint)uVar7;
      uVar4 = (uint)uVar7 | 1;
      uVar3 = (int)uVar6 + 1;
      local_48 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> local_48 == 0; local_48 = local_48 + -1) {
        }
      }
      lVar11 = lVar11 + (local_48 * 9 + 0x49U >> 6) + uVar7;
      uVar6 = (ulonglong)uVar3;
    } while (uVar3 < uVar5);
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 3) != 0) {
    if ((uVar5 & 1) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
      uVar4 = (uint)lVar1 | 1;
      local_44 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> local_44 == 0; local_44 = local_44 + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(local_44 * 9 + 0x49U >> 6) + 1 + lVar1;
    }
    if ((uVar5 & 2) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x38);
      lVar8 = FUN_143a529b0(lVar1 + 8);
      if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
        lVar9 = FUN_143a19d80(*(ulonglong *)(lVar1 + 0x20) & 0xfffffffffffffffe);
        lVar8 = lVar8 + lVar9;
      }
      uVar5 = *(uint *)(lVar1 + 0x38);
      lVar8 = lVar8 + (ulonglong)(uVar5 * 2);
      if (uVar5 != 0) {
        do {
          lVar9 = FUN_143a73ba0(*(undefined8 *)
                                 (*(longlong *)(lVar1 + 0x40) + 8 + (longlong)(int)uVar12 * 8));
          uVar3 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar3;
          uVar4 = (uint)lVar9 | 1;
          local_40 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> local_40 == 0; local_40 = local_40 + -1) {
            }
          }
          lVar8 = lVar8 + (ulonglong)(local_40 * 9 + 0x49U >> 6) + lVar9;
        } while (uVar3 < uVar5);
      }
      lVar9 = lVar8 + 3;
      if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
        lVar9 = lVar8;
      }
      *(uint *)(lVar1 + 0x2c) = (uint)lVar9;
      uVar5 = (uint)lVar9 | 1;
      iVar2 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar9;
    }
  }
  *(int *)(param_1 + 0x14) = (int)lVar11;
  return lVar11;
}



// FUNCTION 143a738b0 FUN_143a738b0 body=198 status=ok
// SIG undefined FUN_143a738b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a738b0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar5 = 0;
  local_18 = 0;
  iVar2 = FUN_143a529b0(param_1 + 8);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    iVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
    iVar2 = iVar2 + iVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  iVar2 = iVar2 + uVar1 * 2;
  if (uVar1 != 0) {
    do {
      uVar4 = FUN_143a73ba0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar5 * 8));
      uVar5 = uVar5 + 1;
      local_14 = 0x1f;
      if ((uVar4 | 1) != 0) {
        for (; (uVar4 | 1) >> local_14 == 0; local_14 = local_14 + -1) {
        }
      }
      iVar2 = iVar2 + (local_14 * 9 + 0x49U >> 6) + uVar4;
    } while (uVar5 < uVar1);
  }
  iVar3 = iVar2 + 3;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  return;
}



// FUNCTION 143a73980 FUN_143a73980 body=171 status=ok
// SIG undefined FUN_143a73980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a73980(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar7 = 0;
  local_18 = 0;
  uVar2 = uVar7;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar2 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  lVar5 = uVar2 + uVar1;
  if (uVar1 != 0) {
    do {
      lVar3 = FUN_143a73a30(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar7 * 8));
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar4 = (uint)lVar3 | 1;
      local_14 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> local_14 == 0; local_14 = local_14 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_14 * 9 + 0x49U >> 6) + lVar3;
    } while (uVar6 < uVar1);
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



// FUNCTION 143a73a30 FUN_143a73a30 body=364 status=ok
// SIG undefined FUN_143a73a30(void)

longlong FUN_143a73a30(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar10 = 0;
  uVar4 = uVar10;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar5 = FUN_1439fa120(param_1 + 0x18);
  uVar8 = 10;
  uVar2 = (uint)lVar5;
  if (lVar5 != 0) {
    if ((int)uVar2 < 0) {
      uVar6 = 10;
    }
    else {
      iVar3 = 0x1f;
      if ((uVar2 | 1) != 0) {
        for (; (uVar2 | 1) >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      uVar6 = (ulonglong)(iVar3 * 9 + 0x49U >> 6);
    }
    uVar4 = uVar4 + 1 + uVar6;
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  lVar5 = uVar4 + lVar5;
  lVar7 = FUN_1439fa120(param_1 + 0x30);
  uVar2 = (uint)lVar7;
  if (lVar7 != 0) {
    if (-1 < (int)uVar2) {
      iVar3 = 0x1f;
      if ((uVar2 | 1) != 0) {
        for (; (uVar2 | 1) >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      uVar8 = (ulonglong)(iVar3 * 9 + 0x49U >> 6);
    }
    lVar5 = lVar5 + 1 + uVar8;
  }
  *(uint *)(param_1 + 0x40) = uVar2;
  uVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x48);
  lVar5 = lVar5 + (ulonglong)uVar2 + lVar7;
  iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x48);
  if (0 < iVar3) {
    do {
      lVar7 = FUN_1439f1d30(param_1 + 0x48,uVar10);
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar2 = (uint)*(longlong *)(lVar7 + 0x10) | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + *(longlong *)(lVar7 + 0x10);
    } while ((int)uVar9 < iVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10);
      uVar9 = (uint)lVar7 | 1;
      iVar3 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(iVar3 * 9 + 0x49U >> 6) + 1 + lVar7;
    }
    if ((uVar2 & 2) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10);
      uVar2 = (uint)lVar7 | 1;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(iVar3 * 9 + 0x49U >> 6) + 1 + lVar7;
    }
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



// FUNCTION 143a73ba0 FUN_143a73ba0 body=577 status=ok
// SIG undefined FUN_143a73ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a73ba0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar6 = 0;
  local_48 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar6 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar11 = 0;
  lVar6 = lVar6 + (ulonglong)uVar1;
  if (uVar1 != 0) {
    do {
      lVar7 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar11 * 8);
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        lVar7 = FUN_143a19d80(*(ulonglong *)(lVar2 + 8) & 0xfffffffffffffffe);
      }
      uVar9 = *(uint *)(lVar2 + 0x10);
      if ((~uVar9 & 3) == 0) {
        lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
        uVar9 = (uint)lVar10 | 1;
        local_44 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> local_44 == 0; local_44 = local_44 + -1) {
          }
        }
        lVar4 = (ulonglong)(local_44 * 9 + 0x49U >> 6) + 3 + lVar10;
      }
      else {
        lVar10 = 0;
        if ((uVar9 & 1) != 0) {
          lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
          uVar5 = (uint)lVar10 | 1;
          local_40 = 0x1f;
          if (uVar5 != 0) {
            for (; uVar5 >> local_40 == 0; local_40 = local_40 + -1) {
            }
          }
          lVar10 = (ulonglong)(local_40 * 9 + 0x49U >> 6) + 1 + lVar10;
        }
        lVar4 = lVar10 + 2;
        if ((uVar9 >> 1 & 1) == 0) {
          lVar4 = lVar10;
        }
      }
      uVar9 = (uint)(lVar7 + lVar4);
      *(uint *)(lVar2 + 0x14) = uVar9;
      uVar9 = uVar9 | 1;
      uVar11 = uVar11 + 1;
      local_3c = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> local_3c == 0; local_3c = local_3c + -1) {
        }
      }
      lVar6 = lVar6 + (ulonglong)(local_3c * 9 + 0x49U >> 6) + lVar7 + lVar4;
    } while (uVar11 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
      uVar11 = (uint)lVar2 | 1;
      iVar3 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      lVar6 = lVar6 + (ulonglong)(iVar3 * 9 + 0x49U >> 6) + 1 + lVar2;
    }
    if ((uVar1 & 2) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
      uVar11 = (uint)lVar2 | 1;
      iVar3 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      lVar6 = lVar6 + (ulonglong)(iVar3 * 9 + 0x49U >> 6) + 1 + lVar2;
    }
    if ((uVar1 & 4) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
      uVar11 = (uint)lVar2 | 1;
      iVar3 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      lVar6 = lVar6 + (ulonglong)(iVar3 * 9 + 0x49U >> 6) + 1 + lVar2;
    }
    if ((uVar1 & 8) != 0) {
      uVar8 = *(ulonglong *)(param_1 + 0x48) | 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      lVar6 = lVar6 + (ulonglong)((int)lVar2 * 9 + 0x49U >> 6) + 1;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar8 = *(ulonglong *)(param_1 + 0x50) | 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      lVar6 = lVar6 + (ulonglong)((int)lVar2 * 9 + 0x49U >> 6) + 1;
    }
    if ((uVar1 & 0x20) != 0) {
      lVar6 = lVar6 + 9;
    }
  }
  *(int *)(param_1 + 0x14) = (int)lVar6;
  return lVar6;
}



// FUNCTION 143a73df0 FUN_143a73df0 body=194 status=ok
// SIG undefined FUN_143a73df0(void)

longlong FUN_143a73df0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = 0;
  lVar3 = lVar6;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((~uVar5 & 3) == 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    uVar5 = (uint)lVar6 | 1;
    iVar1 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 3 + lVar6;
    *(int *)(param_1 + 0x14) = (int)lVar3;
    return lVar3;
  }
  if ((uVar5 & 1) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    uVar2 = (uint)lVar6 | 1;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar6 = lVar6 + 1 + (ulonglong)(iVar1 * 9 + 0x49U >> 6);
  }
  lVar4 = lVar6 + 2;
  if ((uVar5 >> 1 & 1) == 0) {
    lVar4 = lVar6;
  }
  *(int *)(param_1 + 0x14) = (int)(lVar3 + lVar4);
  return lVar3 + lVar4;
}



// FUNCTION 143a73ec0 FUN_143a73ec0 body=678 status=ok
// SIG undefined FUN_143a73ec0(void)

void FUN_143a73ec0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 0x20);
  lVar8 = 0;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar7 = lVar8;
    do {
      FUN_143a745a0(*(undefined8 *)(lVar3 + 8 + lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar7 = lVar8;
    do {
      FUN_143a73ec0(*(undefined8 *)(lVar3 + 8 + lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    lVar7 = lVar8;
    do {
      FUN_143a74200(*(undefined8 *)(lVar3 + 8 + lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    lVar7 = lVar8;
    do {
      lVar4 = *(longlong *)(lVar3 + 8 + lVar7 * 8);
      uVar2 = *(uint *)(lVar4 + 0x10);
      if ((uVar2 & 1) != 0) {
        FUN_143a74510(*(undefined8 *)(lVar4 + 0x18));
      }
      if ((uVar2 & 6) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = 0;
      }
      *(undefined4 *)(lVar4 + 0x10) = 0;
      if (((*(byte *)(lVar4 + 8) & 1) != 0) &&
         (plVar6 = (longlong *)(*(ulonglong *)(lVar4 + 8) & 0xfffffffffffffffe),
         *plVar6 != plVar6[1])) {
        FUN_1439fbee0();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar7 = lVar8;
    do {
      FUN_143a745a0(*(undefined8 *)(lVar3 + 8 + lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar7 = lVar8;
    do {
      lVar4 = *(longlong *)(lVar3 + 8 + lVar7 * 8);
      uVar2 = *(uint *)(lVar4 + 0x10);
      if ((uVar2 & 3) != 0) {
        if ((uVar2 & 1) != 0) {
          puVar5 = *(undefined8 **)(lVar4 + 0x18);
          puVar5[2] = 0;
          if (0xf < (ulonglong)puVar5[3]) {
            puVar5 = (undefined8 *)*puVar5;
          }
          *(undefined1 *)puVar5 = 0;
        }
        if ((uVar2 & 2) != 0) {
          FUN_143a74510(*(undefined8 *)(lVar4 + 0x20));
        }
      }
      *(undefined4 *)(lVar4 + 0x10) = 0;
      if (((*(byte *)(lVar4 + 8) & 1) != 0) &&
         (plVar6 = (longlong *)(*(ulonglong *)(lVar4 + 8) & 0xfffffffffffffffe),
         *plVar6 != plVar6[1])) {
        FUN_1439fbee0();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0xb8);
    do {
      lVar7 = *(longlong *)(lVar3 + 8 + lVar8 * 8);
      if ((*(byte *)(lVar7 + 0x10) & 3) != 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
      }
      *(undefined4 *)(lVar7 + 0x10) = 0;
      if (((*(byte *)(lVar7 + 8) & 1) != 0) &&
         (plVar6 = (longlong *)(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe),
         *plVar6 != plVar6[1])) {
        FUN_1439fbee0();
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar1);
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  FUN_1439f1c30(param_1 + 0xc0);
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0xd8);
      puVar5[2] = 0;
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)puVar5 = 0;
    }
    if ((uVar2 & 2) != 0) {
      FUN_143a74cf0(*(undefined8 *)(param_1 + 0xe0));
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar6 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar6 != plVar6[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74170 FUN_143a74170 body=87 status=ok
// SIG undefined FUN_143a74170(void)

void FUN_143a74170(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_143a74510(*(undefined8 *)(param_1 + 0x18));
  }
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar2 != plVar2[1])
     ) {
    FUN_1439fbee0();
  }
  return;
}



// FUNCTION 143a741d0 FUN_143a741d0 body=45 status=ok
// SIG undefined FUN_143a741d0(void)

void FUN_143a741d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar10 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar9 = lVar10 << 4;
  do {
    lVar10 = lVar10 + -1;
    lVar9 = lVar9 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar9);
    if (iVar1 == 3) {
      plVar8 = *(longlong **)(lVar2 + 8 + lVar9);
      if (plVar8 != (longlong *)0x0) {
        uVar3 = plVar8[3];
        if (0xf < uVar3) {
          uVar7 = uVar3 + 1;
          lVar2 = *plVar8;
          lVar4 = lVar2;
          if (0xfff < uVar7) {
            uVar7 = uVar3 + 0x28;
            lVar4 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar4,uVar7);
        }
        plVar8[2] = 0;
        plVar8[3] = 0xf;
        *(undefined1 *)plVar8 = 0;
        uVar6 = 0x20;
        goto LAB_1439fbfaf;
      }
    }
    else if ((iVar1 == 4) && (plVar8 = *(longlong **)(lVar2 + 8 + lVar9), plVar8 != (longlong *)0x0)
            ) {
      FUN_1439fbdd0(plVar8);
      FUN_1439fc6f0(plVar8);
      uVar6 = 0x18;
LAB_1439fbfaf:
      FMemory::operator_delete(plVar8,uVar6);
    }
    if (lVar10 < 1) {
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 143a74200 FUN_143a74200 body=375 status=ok
// SIG undefined FUN_143a74200(void)

void FUN_143a74200(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 0x20);
  lVar7 = 0;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar8 = lVar7;
    do {
      lVar4 = *(longlong *)(lVar3 + 8 + lVar8 * 8);
      uVar2 = *(uint *)(lVar4 + 0x10);
      if ((uVar2 & 3) != 0) {
        if ((uVar2 & 1) != 0) {
          puVar5 = *(undefined8 **)(lVar4 + 0x18);
          puVar5[2] = 0;
          if (0xf < (ulonglong)puVar5[3]) {
            puVar5 = (undefined8 *)*puVar5;
          }
          *(undefined1 *)puVar5 = 0;
        }
        if ((uVar2 & 2) != 0) {
          FUN_143a74480(*(undefined8 *)(lVar4 + 0x20));
        }
      }
      *(undefined4 *)(lVar4 + 0x28) = 0;
      *(undefined4 *)(lVar4 + 0x10) = 0;
      if (((*(byte *)(lVar4 + 8) & 1) != 0) &&
         (plVar6 = (longlong *)(*(ulonglong *)(lVar4 + 8) & 0xfffffffffffffffe),
         *plVar6 != plVar6[1])) {
        FUN_1439fbee0();
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    do {
      lVar8 = *(longlong *)(lVar3 + 8 + lVar7 * 8);
      if ((*(byte *)(lVar8 + 0x10) & 3) != 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
      }
      *(undefined4 *)(lVar8 + 0x10) = 0;
      if (((*(byte *)(lVar8 + 8) & 1) != 0) &&
         (plVar6 = (longlong *)(*(ulonglong *)(lVar8 + 8) & 0xfffffffffffffffe),
         *plVar6 != plVar6[1])) {
        FUN_1439fbee0();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_1439f1c30(param_1 + 0x48);
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x60);
      puVar5[2] = 0;
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)puVar5 = 0;
    }
    if ((uVar2 & 2) != 0) {
      FUN_143a74380(*(undefined8 *)(param_1 + 0x68));
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar6 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar6 != plVar6[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74380 FUN_143a74380 body=138 status=ok
// SIG undefined FUN_143a74380(void)

void FUN_143a74380(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_143a52c80(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar4 = 0;
    lVar2 = *(longlong *)(param_1 + 0x40);
    do {
      FUN_143a75110(*(undefined8 *)(lVar2 + 8 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe),
     *plVar3 != plVar3[1])) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74410 FUN_143a74410 body=112 status=ok
// SIG undefined FUN_143a74410(void)

void FUN_143a74410(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x18);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      FUN_143a74480(*(undefined8 *)(param_1 + 0x20));
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74480 FUN_143a74480 body=138 status=ok
// SIG undefined FUN_143a74480(void)

void FUN_143a74480(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_143a52c80(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar4 = 0;
    lVar2 = *(longlong *)(param_1 + 0x40);
    do {
      FUN_143a75110(*(undefined8 *)(lVar2 + 8 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe),
     *plVar3 != plVar3[1])) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74510 FUN_143a74510 body=134 status=ok
// SIG undefined FUN_143a74510(void)

void FUN_143a74510(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_143a52c80(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar4 = 0;
    lVar2 = *(longlong *)(param_1 + 0x40);
    do {
      FUN_143a75110(*(undefined8 *)(lVar2 + 8 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe),
     *plVar3 != plVar3[1])) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a745a0 FUN_143a745a0 body=251 status=ok
// SIG undefined FUN_143a745a0(void)

void FUN_143a745a0(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x18);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x20);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 4) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 8) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 0x10) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 0x20) != 0) {
      FUN_143a746a0(*(undefined8 *)(param_1 + 0x40));
    }
  }
  if ((uVar1 & 0xc0) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if ((uVar1 & 0x300) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
     ) {
    FUN_1439fbee0();
  }
  return;
}



// FUNCTION 143a746a0 FUN_143a746a0 body=149 status=ok
// SIG undefined FUN_143a746a0(void)

void FUN_143a746a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_143a52c80(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar4 = 0;
    lVar2 = *(longlong *)(param_1 + 0x40);
    do {
      FUN_143a75110(*(undefined8 *)(lVar2 + 8 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if ((*(byte *)(param_1 + 0x28) & 0x3f) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe),
     *plVar3 != plVar3[1])) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74740 FUN_143a74740 body=456 status=ok
// SIG undefined FUN_143a74740(void)

void FUN_143a74740(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_1439f1c30(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x38);
  lVar7 = 0;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar6 = lVar7;
    do {
      FUN_143a73ec0(*(undefined8 *)(lVar3 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    lVar6 = lVar7;
    do {
      FUN_143a74200(*(undefined8 *)(lVar3 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    lVar6 = lVar7;
    do {
      FUN_143a74f30(*(undefined8 *)(lVar3 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    do {
      FUN_143a745a0(*(undefined8 *)(lVar3 + 8 + lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0x90);
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0xa0);
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x1f) != 0) {
    if ((uVar2 & 1) != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0xb0);
      puVar4[2] = 0;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      *(undefined1 *)puVar4 = 0;
    }
    if ((uVar2 & 2) != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0xb8);
      puVar4[2] = 0;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      *(undefined1 *)puVar4 = 0;
    }
    if ((uVar2 & 4) != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0xc0);
      puVar4[2] = 0;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      *(undefined1 *)puVar4 = 0;
    }
    if ((uVar2 & 8) != 0) {
      FUN_143a749a0(*(undefined8 *)(param_1 + 200));
    }
    if ((uVar2 & 0x10) != 0) {
      FUN_143a74ff0(*(undefined8 *)(param_1 + 0xd0));
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74910 FUN_143a74910 body=132 status=ok
// SIG undefined FUN_143a74910(void)

void FUN_143a74910(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    lVar4 = 0;
    lVar2 = *(longlong *)(param_1 + 0x28);
    do {
      FUN_143a74740(*(undefined8 *)(lVar2 + 8 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a749a0 FUN_143a749a0 body=485 status=ok
// SIG undefined FUN_143a749a0(void)

void FUN_143a749a0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_143a52c80();
  iVar1 = *(int *)(param_1 + 0x38);
  lVar5 = 0;
  if (0 < iVar1) {
    do {
      FUN_143a75110();
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((char)uVar2 != '\0') {
    if ((uVar2 & 1) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x48);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 2) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x50);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 4) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x58);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 8) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 0x10) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x68);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 0x20) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x70);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 0x40) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x78);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((char)uVar2 < '\0') {
      puVar3 = *(undefined8 **)(param_1 + 0x80);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
  }
  if ((uVar2 & 0x300) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x88);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 9 & 1) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x90);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
  }
  if ((uVar2 & 0xfc00) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0x9c) = 0;
  }
  if ((uVar2 & 0xf0000) != 0) {
    *(undefined2 *)(param_1 + 0x9e) = 0;
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) &&
     (plVar4 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe),
     *plVar4 != plVar4[1])) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74b90 FUN_143a74b90 body=232 status=ok
// SIG undefined FUN_143a74b90(void)

void FUN_143a74b90(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + 8 + lVar7 * 8);
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(lVar4 + 0x18);
      uVar2 = *(uint *)(lVar4 + 0x10);
      if ((uVar2 & 1) != 0) {
        puVar5 = *(undefined8 **)(lVar4 + 0x30);
        puVar5[2] = 0;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar5 = (undefined8 *)*puVar5;
        }
        *(undefined1 *)puVar5 = 0;
      }
      if ((uVar2 & 6) != 0) {
        *(undefined8 *)(lVar4 + 0x38) = 0;
      }
      *(undefined4 *)(lVar4 + 0x10) = 0;
      if (((*(byte *)(lVar4 + 8) & 1) != 0) &&
         (plVar6 = (longlong *)(*(ulonglong *)(lVar4 + 8) & 0xfffffffffffffffe),
         *plVar6 != plVar6[1])) {
        FUN_1439fbee0();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar6 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar6 != plVar6[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74c80 FUN_143a74c80 body=106 status=ok
// SIG undefined FUN_143a74c80(void)

void FUN_143a74c80(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74cf0 FUN_143a74cf0 body=137 status=ok
// SIG undefined FUN_143a74cf0(void)

void FUN_143a74cf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_143a52c80(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar4 = 0;
    lVar2 = *(longlong *)(param_1 + 0x40);
    do {
      FUN_143a75110(*(undefined8 *)(lVar2 + 8 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe),
     *plVar3 != plVar3[1])) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74d80 FUN_143a74d80 body=156 status=ok
// SIG undefined FUN_143a74d80(void)

void FUN_143a74d80(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x18);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x20);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 4) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 8) != 0) {
      FUN_143a74e20(*(undefined8 *)(param_1 + 0x30));
    }
  }
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74e20 FUN_143a74e20 body=146 status=ok
// SIG undefined FUN_143a74e20(void)

void FUN_143a74e20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_143a52c80(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar4 = 0;
    lVar2 = *(longlong *)(param_1 + 0x40);
    do {
      FUN_143a75110(*(undefined8 *)(lVar2 + 8 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if ((*(byte *)(param_1 + 0x28) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe),
     *plVar3 != plVar3[1])) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74ec0 FUN_143a74ec0 body=105 status=ok
// SIG undefined FUN_143a74ec0(void)

void FUN_143a74ec0(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x18);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      FUN_143a74510(*(undefined8 *)(param_1 + 0x20));
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74f30 FUN_143a74f30 body=184 status=ok
// SIG undefined FUN_143a74f30(void)

void FUN_143a74f30(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    lVar6 = 0;
    lVar3 = *(longlong *)(param_1 + 0x28);
    do {
      FUN_143a74d80(*(undefined8 *)(lVar3 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0x30);
      puVar4[2] = 0;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      *(undefined1 *)puVar4 = 0;
    }
    if ((uVar2 & 2) != 0) {
      FUN_143a74480(*(undefined8 *)(param_1 + 0x38));
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a74ff0 FUN_143a74ff0 body=132 status=ok
// SIG undefined FUN_143a74ff0(void)

void FUN_143a74ff0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    lVar4 = 0;
    lVar2 = *(longlong *)(param_1 + 0x28);
    do {
      FUN_143a75080(*(undefined8 *)(lVar2 + 8 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a75080 FUN_143a75080 body=140 status=ok
// SIG undefined FUN_143a75080(void)

void FUN_143a75080(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0x18);
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0x30);
  FUN_1439f1c30(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x60);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x68);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a75110 FUN_143a75110 body=300 status=ok
// SIG undefined FUN_143a75110(void)

void FUN_143a75110(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x20);
  lVar7 = 0;
  if (0 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    do {
      lVar4 = *(longlong *)(lVar3 + 8 + lVar7 * 8);
      if ((*(byte *)(lVar4 + 0x10) & 1) != 0) {
        puVar5 = *(undefined8 **)(lVar4 + 0x18);
        puVar5[2] = 0;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar5 = (undefined8 *)*puVar5;
        }
        *(undefined1 *)puVar5 = 0;
      }
      *(undefined1 *)(lVar4 + 0x20) = 0;
      *(undefined4 *)(lVar4 + 0x10) = 0;
      if (((*(byte *)(lVar4 + 8) & 1) != 0) &&
         (plVar6 = (longlong *)(*(ulonglong *)(lVar4 + 8) & 0xfffffffffffffffe),
         *plVar6 != plVar6[1])) {
        FUN_1439fbee0();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x30);
      puVar5[2] = 0;
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)puVar5 = 0;
    }
    if ((uVar2 & 2) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x38);
      puVar5[2] = 0;
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)puVar5 = 0;
    }
    if ((uVar2 & 4) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x40);
      puVar5[2] = 0;
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)puVar5 = 0;
    }
  }
  if ((uVar2 & 0x38) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar6 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar6 != plVar6[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 143a75240 FUN_143a75240 body=68 status=ok
// SIG undefined FUN_143a75240(void)

void FUN_143a75240(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar6 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar6 == plVar6[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar6[1] - *plVar6 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar6;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar5 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar5 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar5,uVar8);
        }
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        uVar7 = 0x20;
        goto LAB_1439fbfaf;
      }
    }
    else if ((iVar1 == 4) &&
            (plVar9 = *(longlong **)(lVar2 + 8 + lVar10), plVar9 != (longlong *)0x0)) {
      FUN_1439fbdd0(plVar9);
      FUN_1439fc6f0(plVar9);
      uVar7 = 0x18;
LAB_1439fbfaf:
      FMemory::operator_delete(plVar9,uVar7);
    }
    if (lVar11 < 1) {
      plVar6[1] = *plVar6;
      return;
    }
  } while( true );
}



// FUNCTION 143a75290 FUN_143a75290 body=106 status=ok
// SIG undefined FUN_143a75290(void)

void FUN_143a75290(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a73ec0();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::DescriptorProto::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a79570(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75300 FUN_143a75300 body=178 status=ok
// SIG undefined FUN_143a75300(void)

void FUN_143a75300(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 & 1) != 0) {
      FUN_143a74510(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 & 6) != 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (((*(byte *)(param_1 + 8) & 1) != 0) &&
       (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe),
       *plVar3 != plVar3[1])) {
      FUN_1439fbee0();
    }
    lVar2 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::DescriptorProto_ExtensionRange::RTTI_Type_Descriptor,0);
    if (lVar2 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a79920(param_1,lVar2);
  }
  return;
}



// FUNCTION 143a753c0 FUN_143a753c0 body=150 status=ok
// SIG undefined FUN_143a753c0(void)

void FUN_143a753c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != param_1) {
    if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (((*(byte *)(param_1 + 8) & 1) != 0) &&
       (plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe),
       *plVar2 != plVar2[1])) {
      FUN_1439fbee0();
    }
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::DescriptorProto_ReservedRange::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a79a50(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75460 FUN_143a75460 body=106 status=ok
// SIG undefined FUN_143a75460(void)

void FUN_143a75460(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74200();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::EnumDescriptorProto::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a79b30(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a754d0 FUN_143a754d0 body=150 status=ok
// SIG undefined FUN_143a754d0(void)

void FUN_143a754d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != param_1) {
    if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (((*(byte *)(param_1 + 8) & 1) != 0) &&
       (plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe),
       *plVar2 != plVar2[1])) {
      FUN_1439fbee0();
    }
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::EnumDescriptorProto_EnumReservedRange::
                        RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a79a50(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75570 CopyFrom body=48 status=ok
// SIG undefined CopyFrom(void)

void MistProto::Actor::CopyFrom(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_143a74380();
    FUN_143a79d90(param_1,param_2);
  }
  return;
}



// FUNCTION 143a755a0 FUN_143a755a0 body=106 status=ok
// SIG undefined FUN_143a755a0(void)

void FUN_143a755a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74380();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::EnumOptions::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a79d90(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75610 FUN_143a75610 body=106 status=ok
// SIG undefined FUN_143a75610(void)

void FUN_143a75610(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74410();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::EnumValueDescriptorProto::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a79ed0(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75680 CopyFrom body=48 status=ok
// SIG undefined CopyFrom(void)

void MistProto::Actor::CopyFrom(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_143a74480();
    FUN_143a7a050(param_1,param_2);
  }
  return;
}



// FUNCTION 143a756b0 FUN_143a756b0 body=106 status=ok
// SIG undefined FUN_143a756b0(void)

void FUN_143a756b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74480();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::EnumValueOptions::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7a050(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75720 CopyFrom body=48 status=ok
// SIG undefined CopyFrom(void)

void MistProto::Actor::CopyFrom(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_143a74510();
    FUN_143a7a180(param_1,param_2);
  }
  return;
}



// FUNCTION 143a75750 FUN_143a75750 body=106 status=ok
// SIG undefined FUN_143a75750(void)

void FUN_143a75750(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74510();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::ExtensionRangeOptions::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7a180(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a757c0 FUN_143a757c0 body=106 status=ok
// SIG undefined FUN_143a757c0(void)

void FUN_143a757c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a745a0();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::FieldDescriptorProto::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7a290(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75830 CopyFrom body=48 status=ok
// SIG undefined CopyFrom(void)

void MistProto::Actor::CopyFrom(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_143a746a0();
    FUN_143a7a580(param_1,param_2);
  }
  return;
}



// FUNCTION 143a75860 FUN_143a75860 body=106 status=ok
// SIG undefined FUN_143a75860(void)

void FUN_143a75860(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a746a0();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::FieldOptions::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7a580(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a758d0 FUN_143a758d0 body=106 status=ok
// SIG undefined FUN_143a758d0(void)

void FUN_143a758d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74740();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::FileDescriptorProto::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7a6f0(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75940 FUN_143a75940 body=106 status=ok
// SIG undefined FUN_143a75940(void)

void FUN_143a75940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74910();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::FileDescriptorSet::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7aad0(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a759b0 CopyFrom body=48 status=ok
// SIG undefined CopyFrom(void)

void MistProto::Actor::CopyFrom(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_143a749a0();
    FUN_143a7abd0(param_1,param_2);
  }
  return;
}



// FUNCTION 143a759e0 FUN_143a759e0 body=106 status=ok
// SIG undefined FUN_143a759e0(void)

void FUN_143a759e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a749a0();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::FileOptions::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7abd0(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75a50 FUN_143a75a50 body=106 status=ok
// SIG undefined FUN_143a75a50(void)

void FUN_143a75a50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74b90();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::GeneratedCodeInfo::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7b100(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75ac0 FUN_143a75ac0 body=106 status=ok
// SIG undefined FUN_143a75ac0(void)

void FUN_143a75ac0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74c80();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::GeneratedCodeInfo_Annotation::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7b200(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75b30 CopyFrom body=48 status=ok
// SIG undefined CopyFrom(void)

void MistProto::Actor::CopyFrom(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_143a74cf0();
    FUN_143a7b340(param_1,param_2);
  }
  return;
}



// FUNCTION 143a75b60 FUN_143a75b60 body=106 status=ok
// SIG undefined FUN_143a75b60(void)

void FUN_143a75b60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74cf0();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::MessageOptions::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7b340(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75bd0 FUN_143a75bd0 body=106 status=ok
// SIG undefined FUN_143a75bd0(void)

void FUN_143a75bd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74d80();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::MethodDescriptorProto::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7b490(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75c40 CopyFrom body=48 status=ok
// SIG undefined CopyFrom(void)

void MistProto::Actor::CopyFrom(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_143a74e20();
    FUN_143a7b6c0(param_1,param_2);
  }
  return;
}



// FUNCTION 143a75c70 FUN_143a75c70 body=106 status=ok
// SIG undefined FUN_143a75c70(void)

void FUN_143a75c70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74e20();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::MethodOptions::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7b6c0(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75ce0 FUN_143a75ce0 body=106 status=ok
// SIG undefined FUN_143a75ce0(void)

void FUN_143a75ce0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74ec0();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::OneofDescriptorProto::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7b800(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75d50 FUN_143a75d50 body=106 status=ok
// SIG undefined FUN_143a75d50(void)

void FUN_143a75d50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74510();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::OneofOptions::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7a180(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75dc0 FUN_143a75dc0 body=106 status=ok
// SIG undefined FUN_143a75dc0(void)

void FUN_143a75dc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74f30();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::ServiceDescriptorProto::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7b9c0(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75e30 FUN_143a75e30 body=106 status=ok
// SIG undefined FUN_143a75e30(void)

void FUN_143a75e30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74480();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::ServiceOptions::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7a050(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75ea0 CopyFrom body=48 status=ok
// SIG undefined CopyFrom(void)

void MistProto::Actor::CopyFrom(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_143a74ff0();
    FUN_143a7bbd0(param_1,param_2);
  }
  return;
}



// FUNCTION 143a75ed0 FUN_143a75ed0 body=106 status=ok
// SIG undefined FUN_143a75ed0(void)

void FUN_143a75ed0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a74ff0();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::SourceCodeInfo::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7bbd0(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75f40 CopyFrom body=48 status=ok
// SIG undefined CopyFrom(void)

void MistProto::Actor::CopyFrom(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_143a75080();
    FUN_143a7bcd0(param_1,param_2);
  }
  return;
}



// FUNCTION 143a75f70 FUN_143a75f70 body=106 status=ok
// SIG undefined FUN_143a75f70(void)

void FUN_143a75f70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a75080();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::SourceCodeInfo_Location::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7bcd0(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a75fe0 FUN_143a75fe0 body=106 status=ok
// SIG undefined FUN_143a75fe0(void)

void FUN_143a75fe0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    FUN_143a75110();
    lVar1 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::UninterpretedOption::RTTI_Type_Descriptor,0);
    if (lVar1 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7be70(param_1,lVar1);
  }
  return;
}



// FUNCTION 143a76050 FUN_143a76050 body=173 status=ok
// SIG undefined FUN_143a76050(void)

void FUN_143a76050(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != param_1) {
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x18);
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (((*(byte *)(param_1 + 8) & 1) != 0) &&
       (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe),
       *plVar3 != plVar3[1])) {
      FUN_1439fbee0();
    }
    lVar2 = _guard_xfg_dispatch_icall_nop
                      (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                       &google::protobuf::UninterpretedOption_NamePart::RTTI_Type_Descriptor,0);
    if (lVar2 == 0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_143a7c0a0(param_1,lVar2);
  }
  return;
}



// FUNCTION 143a76100 `dynamic_initializer_for_'ModuleRegistrantAudioCapture'' body=28 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAudioCapture''(void)

undefined8 _dynamic_initializer_for__ModuleRegistrantAudioCapture__(void)

{
  FUN_143a03010(&DAT_1468324a0);
  return DAT_146ba33c0;
}



// FUNCTION 143a76120 FUN_143a76120 body=19 status=ok
// SIG undefined FUN_143a76120(void)

ulonglong FUN_143a76120(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(uVar1 + 0x18);
  }
  return uVar1;
}



// FUNCTION 143a76140 FUN_143a76140 body=19 status=ok
// SIG undefined FUN_143a76140(void)

ulonglong FUN_143a76140(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    uVar1 = *(ulonglong *)(uVar1 + 0x18);
  }
  return uVar1;
}



// FUNCTION 143a76160 FUN_143a76160 body=4 status=ok
// SIG undefined FUN_143a76160(void)

undefined4 FUN_143a76160(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// FUNCTION 143a76170 GetState body=4 status=ok
// SIG undefined GetState(void)

undefined4 FImgMediaPlayer::GetState(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// FUNCTION 143a76180 FUN_143a76180 body=40 status=ok
// SIG undefined FUN_143a76180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76180(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3238;
  *param_2 = _DAT_146ba3230;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a761b0 FUN_143a761b0 body=40 status=ok
// SIG undefined FUN_143a761b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a761b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3218;
  *param_2 = _DAT_146ba3210;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a761e0 FUN_143a761e0 body=40 status=ok
// SIG undefined FUN_143a761e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a761e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3228;
  *param_2 = _DAT_146ba3220;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76210 FUN_143a76210 body=40 status=ok
// SIG undefined FUN_143a76210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76210(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3288;
  *param_2 = _DAT_146ba3280;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76240 FUN_143a76240 body=40 status=ok
// SIG undefined FUN_143a76240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76240(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3278;
  *param_2 = _DAT_146ba3270;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76270 FUN_143a76270 body=40 status=ok
// SIG undefined FUN_143a76270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76270(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3308;
  *param_2 = _DAT_146ba3300;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a762a0 FUN_143a762a0 body=40 status=ok
// SIG undefined FUN_143a762a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a762a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3298;
  *param_2 = _DAT_146ba3290;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a762d0 FUN_143a762d0 body=40 status=ok
// SIG undefined FUN_143a762d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a762d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3318;
  *param_2 = _DAT_146ba3310;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76300 FUN_143a76300 body=40 status=ok
// SIG undefined FUN_143a76300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76300(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3248;
  *param_2 = _DAT_146ba3240;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76330 FUN_143a76330 body=40 status=ok
// SIG undefined FUN_143a76330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76330(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3258;
  *param_2 = _DAT_146ba3250;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76360 FUN_143a76360 body=40 status=ok
// SIG undefined FUN_143a76360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76360(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba32e8;
  *param_2 = _DAT_146ba32e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76390 FUN_143a76390 body=40 status=ok
// SIG undefined FUN_143a76390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76390(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3208;
  *param_2 = _DAT_146ba3200;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a763c0 FUN_143a763c0 body=40 status=ok
// SIG undefined FUN_143a763c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a763c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba31f8;
  *param_2 = _DAT_146ba31f0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a763f0 FUN_143a763f0 body=40 status=ok
// SIG undefined FUN_143a763f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a763f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba32c8;
  *param_2 = _DAT_146ba32c0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76420 FUN_143a76420 body=40 status=ok
// SIG undefined FUN_143a76420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76420(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3398;
  *param_2 = _DAT_146ba3390;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76450 FUN_143a76450 body=40 status=ok
// SIG undefined FUN_143a76450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76450(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3388;
  *param_2 = _DAT_146ba3380;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76480 FUN_143a76480 body=40 status=ok
// SIG undefined FUN_143a76480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76480(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba32d8;
  *param_2 = _DAT_146ba32d0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a764b0 FUN_143a764b0 body=40 status=ok
// SIG undefined FUN_143a764b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a764b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba32b8;
  *param_2 = _DAT_146ba32b0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a764e0 FUN_143a764e0 body=40 status=ok
// SIG undefined FUN_143a764e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a764e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3338;
  *param_2 = _DAT_146ba3330;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76510 FUN_143a76510 body=40 status=ok
// SIG undefined FUN_143a76510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76510(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3268;
  *param_2 = _DAT_146ba3260;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76540 FUN_143a76540 body=40 status=ok
// SIG undefined FUN_143a76540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76540(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba32f8;
  *param_2 = _DAT_146ba32f0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76570 FUN_143a76570 body=40 status=ok
// SIG undefined FUN_143a76570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76570(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba32a8;
  *param_2 = _DAT_146ba32a0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a765a0 FUN_143a765a0 body=40 status=ok
// SIG undefined FUN_143a765a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a765a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3328;
  *param_2 = _DAT_146ba3320;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a765d0 FUN_143a765d0 body=40 status=ok
// SIG undefined FUN_143a765d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a765d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3378;
  *param_2 = _DAT_146ba3370;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76600 FUN_143a76600 body=40 status=ok
// SIG undefined FUN_143a76600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76600(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3368;
  *param_2 = _DAT_146ba3360;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76630 FUN_143a76630 body=40 status=ok
// SIG undefined FUN_143a76630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76630(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3358;
  *param_2 = _DAT_146ba3350;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76660 FUN_143a76660 body=40 status=ok
// SIG undefined FUN_143a76660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a76660(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1468324a0);
  uVar1 = uRam0000000146ba3348;
  *param_2 = _DAT_146ba3340;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143a76690 FUN_143a76690 body=1041 status=ok
// SIG undefined FUN_143a76690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_143a76690(longlong param_1,byte *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xd8);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar6,param_2 + 1);
  }
  uVar11 = *(uint *)(param_1 + 0x20);
  iVar12 = 0;
  uVar10 = 0;
  if (uVar11 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar10 * 8);
      *param_2 = 0x12;
      uVar7 = *(uint *)(lVar1 + 0x14);
      while( true ) {
        pbVar9 = param_2 + 1;
        bVar3 = (byte)uVar7;
        if (uVar7 < 0x80) break;
        uVar7 = uVar7 >> 7;
        *pbVar9 = bVar3 | 0x80;
        param_2 = pbVar9;
      }
      *pbVar9 = bVar3;
      param_2 = (byte *)FUN_143a773f0(lVar1,param_2 + 2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x38);
  uVar10 = 0;
  if (uVar11 != 0) {
    do {
      param_2 = (byte *)FUN_143a6e3c0(3,*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x40) + 8 +
                                         (longlong)(int)uVar10 * 8),param_2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x50);
  uVar10 = 0;
  if (uVar11 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8 + (longlong)(int)uVar10 * 8);
      *param_2 = 0x22;
      uVar7 = *(uint *)(lVar1 + 0x14);
      while( true ) {
        pbVar9 = param_2 + 1;
        bVar3 = (byte)uVar7;
        if (uVar7 < 0x80) break;
        uVar7 = uVar7 >> 7;
        *pbVar9 = bVar3 | 0x80;
        param_2 = pbVar9;
      }
      *pbVar9 = bVar3;
      param_2 = (byte *)FUN_143a76d40(lVar1,param_2 + 2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x68);
  uVar10 = 0;
  if (uVar11 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 8 + (longlong)(int)uVar10 * 8);
      *param_2 = 0x2a;
      uVar7 = *(uint *)(lVar1 + 0x14);
      while( true ) {
        pbVar9 = param_2 + 1;
        bVar3 = (byte)uVar7;
        if (uVar7 < 0x80) break;
        uVar7 = uVar7 >> 7;
        *pbVar9 = bVar3 | 0x80;
        param_2 = pbVar9;
      }
      *pbVar9 = bVar3;
      param_2 = (byte *)FUN_143a76ab0(lVar1,param_2 + 2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x80);
  uVar10 = 0;
  if (uVar11 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8 + (longlong)(int)uVar10 * 8);
      *param_2 = 0x32;
      uVar7 = *(uint *)(lVar1 + 0x14);
      while( true ) {
        pbVar9 = param_2 + 1;
        bVar3 = (byte)uVar7;
        if (uVar7 < 0x80) break;
        uVar7 = uVar7 >> 7;
        *pbVar9 = bVar3 | 0x80;
        param_2 = pbVar9;
      }
      *pbVar9 = bVar3;
      param_2 = (byte *)FUN_143a773f0(lVar1,param_2 + 2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  if ((uVar8 & 2) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xe0);
    *param_2 = 0x3a;
    uVar8 = *(uint *)(lVar1 + 0x2c);
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = (byte *)FUN_143a782a0(lVar1,param_2 + 1);
  }
  uVar8 = *(uint *)(param_1 + 0x98);
  uVar11 = 0;
  if (uVar8 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x42;
      uVar10 = *(uint *)(lVar1 + 0x14);
      while( true ) {
        pbVar9 = param_2 + 1;
        bVar3 = (byte)uVar10;
        if (uVar10 < 0x80) break;
        uVar10 = uVar10 >> 7;
        *pbVar9 = bVar3 | 0x80;
        param_2 = pbVar9;
      }
      *pbVar9 = bVar3;
      param_2 = (byte *)FUN_143a78690(lVar1,param_2 + 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar8);
  }
  uVar8 = *(uint *)(param_1 + 0xb0);
  uVar11 = 0;
  if (uVar8 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x4a;
      uVar10 = *(uint *)(lVar1 + 0x14);
      pbVar9 = param_2;
      while( true ) {
        pbVar2 = pbVar9 + 1;
        bVar3 = (byte)uVar10;
        if (uVar10 < 0x80) break;
        uVar10 = uVar10 >> 7;
        *pbVar2 = bVar3 | 0x80;
        pbVar9 = pbVar2;
      }
      *pbVar2 = bVar3;
      param_2 = pbVar9 + 2;
      uVar10 = *(uint *)(lVar1 + 0x10);
      if ((uVar10 & 1) != 0) {
        iVar4 = *(int *)(lVar1 + 0x18);
        *param_2 = 8;
        pbVar9 = pbVar9 + 3;
        for (uVar5 = (ulonglong)iVar4; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
          *pbVar9 = (byte)uVar5 | 0x80;
          pbVar9 = pbVar9 + 1;
        }
        *pbVar9 = (byte)uVar5;
        param_2 = pbVar9 + 1;
      }
      if ((uVar10 & 2) != 0) {
        uVar5 = (ulonglong)*(int *)(lVar1 + 0x1c);
        *param_2 = 0x10;
        while( true ) {
          param_2 = param_2 + 1;
          bVar3 = (byte)uVar5;
          if (uVar5 < 0x80) break;
          uVar5 = uVar5 >> 7;
          *param_2 = bVar3 | 0x80;
        }
        *param_2 = bVar3;
        param_2 = param_2 + 1;
      }
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar1 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar8);
  }
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0xc0);
  if (0 < iVar4) {
    do {
      FUN_1439f1d30(param_1 + 0xc0,iVar12);
      FUN_1439f1d30(param_1 + 0xc0,iVar12);
      uVar6 = FUN_1439f1d30(param_1 + 0xc0,iVar12);
      *param_2 = 0x52;
      param_2 = (byte *)FUN_1439f9df0(uVar6,param_2 + 1);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar4);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 143a76ab0 FUN_143a76ab0 body=486 status=ok
// SIG undefined FUN_143a76ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_143a76ab0(longlong param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 2) != 0) {
    uVar3 = (ulonglong)*(int *)(param_1 + 0x20);
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar3;
      if (uVar3 < 0x80) break;
      uVar3 = uVar3 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    param_2 = param_2 + 1;
  }
  if ((uVar5 & 4) != 0) {
    uVar3 = (ulonglong)*(int *)(param_1 + 0x24);
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar3;
      if (uVar3 < 0x80) break;
      uVar3 = uVar3 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    param_2 = param_2 + 1;
  }
  if ((uVar5 & 1) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    *param_2 = 0x1a;
    uVar5 = *(uint *)(lVar1 + 0x2c);
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    uVar7 = 0;
    uVar5 = *(uint *)(lVar1 + 0x38);
    param_2 = param_2 + 1;
    if (uVar5 != 0) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + 8 + (longlong)(int)uVar7 * 8);
        uVar6 = 0x1f3a;
        do {
          pbVar8 = param_2;
          bVar4 = (byte)uVar6;
          uVar6 = uVar6 >> 7;
          *pbVar8 = bVar4 | 0x80;
          param_2 = pbVar8 + 1;
        } while (0x7f < uVar6);
        pbVar8[1] = (byte)uVar6;
        pbVar8 = pbVar8 + 2;
        for (uVar6 = *(uint *)(lVar2 + 0x14); 0x7f < uVar6; uVar6 = uVar6 >> 7) {
          *pbVar8 = (byte)uVar6 | 0x80;
          pbVar8 = pbVar8 + 1;
        }
        *pbVar8 = (byte)uVar6;
        param_2 = (byte *)FUN_143a78c00(lVar2,pbVar8 + 1);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
    }
    param_2 = (byte *)FUN_143a5bc10(lVar1 + 8,1000,0x20000000);
    if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
      param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar1 + 0x20) & 0xfffffffffffffffe);
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar8 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    return pbVar8;
  }
  return param_2;
}



// FUNCTION 143a76ca0 FUN_143a76ca0 body=148 status=ok
// SIG undefined FUN_143a76ca0(void)

byte * FUN_143a76ca0(longlong param_1,byte *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte bVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    uVar2 = (ulonglong)*(int *)(param_1 + 0x18);
    *param_2 = 8;
    while( true ) {
      pbVar3 = param_2 + 1;
      bVar4 = (byte)uVar2;
      if (uVar2 < 0x80) break;
      uVar2 = uVar2 >> 7;
      *pbVar3 = bVar4 | 0x80;
      param_2 = pbVar3;
    }
    *pbVar3 = bVar4;
    param_2 = param_2 + 2;
  }
  if ((uVar1 & 2) != 0) {
    uVar2 = (ulonglong)*(int *)(param_1 + 0x1c);
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar2;
      if (uVar2 < 0x80) break;
      uVar2 = uVar2 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    param_2 = param_2 + 1;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar3 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  return pbVar3;
}



// FUNCTION 143a76d40 FUN_143a76d40 body=719 status=ok
// SIG undefined FUN_143a76d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_143a76d40(longlong param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar7,param_2 + 1);
  }
  uVar11 = *(uint *)(param_1 + 0x20);
  iVar12 = 0;
  uVar10 = 0;
  if (uVar11 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar10 * 8);
      *param_2 = 0x12;
      uVar8 = *(uint *)(lVar2 + 0x14);
      pbVar9 = param_2;
      while( true ) {
        pbVar3 = pbVar9 + 1;
        bVar4 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar3 = bVar4 | 0x80;
        pbVar9 = pbVar3;
      }
      *pbVar3 = bVar4;
      param_2 = pbVar9 + 2;
      uVar8 = *(uint *)(lVar2 + 0x10);
      if ((uVar8 & 1) != 0) {
        uVar7 = *(undefined8 *)(lVar2 + 0x18);
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(uVar7,pbVar9 + 3);
      }
      if ((uVar8 & 4) != 0) {
        uVar6 = (ulonglong)*(int *)(lVar2 + 0x28);
        *param_2 = 0x10;
        while( true ) {
          pbVar9 = param_2 + 1;
          bVar4 = (byte)uVar6;
          if (uVar6 < 0x80) break;
          uVar6 = uVar6 >> 7;
          *pbVar9 = bVar4 | 0x80;
          param_2 = pbVar9;
        }
        *pbVar9 = bVar4;
        param_2 = param_2 + 2;
      }
      if ((uVar8 & 2) != 0) {
        param_2 = (byte *)FUN_143a6e5d0(3,*(undefined8 *)(lVar2 + 0x20),param_2);
      }
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar2 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  if ((uVar1 & 2) != 0) {
    param_2 = (byte *)FUN_143a6e440(3,*(undefined8 *)(param_1 + 0x68),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar11 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x22;
      uVar10 = *(uint *)(lVar2 + 0x14);
      pbVar9 = param_2;
      while( true ) {
        pbVar3 = pbVar9 + 1;
        bVar4 = (byte)uVar10;
        if (uVar10 < 0x80) break;
        uVar10 = uVar10 >> 7;
        *pbVar3 = bVar4 | 0x80;
        pbVar9 = pbVar3;
      }
      *pbVar3 = bVar4;
      param_2 = pbVar9 + 2;
      uVar10 = *(uint *)(lVar2 + 0x10);
      if ((uVar10 & 1) != 0) {
        iVar5 = *(int *)(lVar2 + 0x18);
        *param_2 = 8;
        pbVar9 = pbVar9 + 3;
        for (uVar6 = (ulonglong)iVar5; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
          *pbVar9 = (byte)uVar6 | 0x80;
          pbVar9 = pbVar9 + 1;
        }
        *pbVar9 = (byte)uVar6;
        param_2 = pbVar9 + 1;
      }
      if ((uVar10 & 2) != 0) {
        uVar6 = (ulonglong)*(int *)(lVar2 + 0x1c);
        *param_2 = 0x10;
        while( true ) {
          param_2 = param_2 + 1;
          bVar4 = (byte)uVar6;
          if (uVar6 < 0x80) break;
          uVar6 = uVar6 >> 7;
          *param_2 = bVar4 | 0x80;
        }
        *param_2 = bVar4;
        param_2 = param_2 + 1;
      }
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar2 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar1);
  }
  iVar5 = IStreamingManager::GetNumWantingResources(param_1 + 0x48);
  if (0 < iVar5) {
    do {
      FUN_1439f1d30(param_1 + 0x48,iVar12);
      FUN_1439f1d30(param_1 + 0x48,iVar12);
      uVar7 = FUN_1439f1d30(param_1 + 0x48,iVar12);
      *param_2 = 0x2a;
      param_2 = (byte *)FUN_1439f9df0(uVar7,param_2 + 1);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar5);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 143a77010 FUN_143a77010 body=280 status=ok
// SIG undefined FUN_143a77010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a77010(longlong param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(2,*(undefined1 *)(param_1 + 0x48),param_2);
  }
  if ((uVar1 & 2) != 0) {
    param_2 = (byte *)FUN_141514ca0(3,*(undefined1 *)(param_1 + 0x49),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar6 * 8);
      uVar5 = 0x1f3a;
      do {
        pbVar7 = param_2;
        bVar4 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        *pbVar7 = bVar4 | 0x80;
        param_2 = pbVar7 + 1;
      } while (0x7f < uVar5);
      pbVar7[1] = (byte)uVar5;
      pbVar7 = pbVar7 + 2;
      for (uVar5 = *(uint *)(lVar2 + 0x14); 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *pbVar7 = (byte)uVar5 | 0x80;
        pbVar7 = pbVar7 + 1;
      }
      *pbVar7 = (byte)uVar5;
      param_2 = (byte *)FUN_143a78c00(lVar2,pbVar7 + 1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  uVar3 = FUN_143a5bc10(param_1 + 8,1000,0x20000000,param_2);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,uVar3);
  }
  return;
}



// FUNCTION 143a77130 FUN_143a77130 body=177 status=ok
// SIG undefined FUN_143a77130(void)

byte * FUN_143a77130(longlong param_1,byte *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte bVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((uVar1 & 4) != 0) {
    uVar3 = (ulonglong)*(int *)(param_1 + 0x28);
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar5 = (byte)uVar3;
      if (uVar3 < 0x80) break;
      uVar3 = uVar3 >> 7;
      *param_2 = bVar5 | 0x80;
    }
    *param_2 = bVar5;
    param_2 = param_2 + 1;
  }
  if ((uVar1 & 2) != 0) {
    param_2 = (byte *)FUN_143a6e5d0(3,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar4 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    return pbVar4;
  }
  return param_2;
}



// FUNCTION 143a771f0 FUN_143a771f0 body=264 status=ok
// SIG undefined FUN_143a771f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a771f0(longlong param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(1,*(undefined1 *)(param_1 + 0x48),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar6 * 8);
      uVar5 = 0x1f3a;
      do {
        pbVar7 = param_2;
        bVar4 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        *pbVar7 = bVar4 | 0x80;
        param_2 = pbVar7 + 1;
      } while (0x7f < uVar5);
      pbVar7[1] = (byte)uVar5;
      pbVar7 = pbVar7 + 2;
      for (uVar5 = *(uint *)(lVar2 + 0x14); 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *pbVar7 = (byte)uVar5 | 0x80;
        pbVar7 = pbVar7 + 1;
      }
      *pbVar7 = (byte)uVar5;
      param_2 = (byte *)FUN_143a78c00(lVar2,pbVar7 + 1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  uVar3 = FUN_143a5bc10(param_1 + 8,1000,0x20000000,param_2);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,uVar3);
  }
  return;
}



// FUNCTION 143a77300 FUN_143a77300 body=232 status=ok
// SIG undefined FUN_143a77300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a77300(longlong param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar6 * 8);
      uVar5 = 0x1f3a;
      do {
        pbVar7 = param_2;
        bVar4 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        *pbVar7 = bVar4 | 0x80;
        param_2 = pbVar7 + 1;
      } while (0x7f < uVar5);
      pbVar7[1] = (byte)uVar5;
      pbVar7 = pbVar7 + 2;
      for (uVar5 = *(uint *)(lVar2 + 0x14); 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *pbVar7 = (byte)uVar5 | 0x80;
        pbVar7 = pbVar7 + 1;
      }
      *pbVar7 = (byte)uVar5;
      param_2 = (byte *)FUN_143a78c00(lVar2,pbVar7 + 1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  uVar3 = FUN_143a5bc10(param_1 + 8,1000,0x20000000,param_2);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,uVar3);
  }
  return;
}



// FUNCTION 143a773f0 FUN_143a773f0 body=494 status=ok
// SIG undefined FUN_143a773f0(void)

byte * FUN_143a773f0(longlong param_1,byte *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((uVar1 & 2) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((uVar1 & 0x40) != 0) {
    uVar4 = (ulonglong)*(int *)(param_1 + 0x48);
    *param_2 = 0x18;
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    uVar4 = (ulonglong)*(int *)(param_1 + 0x50);
    *param_2 = 0x20;
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    uVar4 = (ulonglong)*(int *)(param_1 + 0x54);
    *param_2 = 0x28;
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = param_2 + 1;
  }
  if ((uVar1 & 4) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 0x32;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *param_2 = 0x3a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((uVar1 & 0x20) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    *param_2 = 0x42;
    uVar7 = *(uint *)(lVar3 + 0x2c);
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = (byte *)FUN_143a775e0(lVar3,param_2 + 1);
  }
  if ((char)uVar1 < '\0') {
    uVar4 = (ulonglong)*(int *)(param_1 + 0x4c);
    *param_2 = 0x48;
    while( true ) {
      pbVar5 = param_2 + 1;
      bVar6 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar5 = bVar6 | 0x80;
      param_2 = pbVar5;
    }
    *pbVar5 = bVar6;
    param_2 = param_2 + 2;
  }
  if ((uVar1 & 0x10) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *param_2 = 0x52;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  return pbVar5;
}



// FUNCTION 143a775e0 FUN_143a775e0 body=469 status=ok
// SIG undefined FUN_143a775e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a775e0(longlong param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    uVar6 = (ulonglong)*(int *)(param_1 + 0x48);
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    param_2 = param_2 + 1;
  }
  if ((uVar1 & 2) != 0) {
    param_2 = (byte *)FUN_141514ca0(2,*(undefined1 *)(param_1 + 0x4c),param_2);
  }
  if ((uVar1 & 8) != 0) {
    param_2 = (byte *)FUN_141514ca0(3,*(undefined1 *)(param_1 + 0x4e),param_2);
  }
  if ((uVar1 & 4) != 0) {
    param_2 = (byte *)FUN_141514ca0(5,*(undefined1 *)(param_1 + 0x4d),param_2);
  }
  if ((uVar1 & 0x20) != 0) {
    uVar6 = (ulonglong)*(int *)(param_1 + 0x50);
    *param_2 = 0x30;
    while( true ) {
      pbVar8 = param_2 + 1;
      bVar4 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *pbVar8 = bVar4 | 0x80;
      param_2 = pbVar8;
    }
    *pbVar8 = bVar4;
    param_2 = param_2 + 2;
  }
  if ((uVar1 & 0x10) != 0) {
    param_2 = (byte *)FUN_141514ca0(10,*(undefined1 *)(param_1 + 0x4f),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar7 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar7 * 8);
      uVar5 = 0x1f3a;
      do {
        pbVar8 = param_2;
        bVar4 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        *pbVar8 = bVar4 | 0x80;
        param_2 = pbVar8 + 1;
      } while (0x7f < uVar5);
      pbVar8[1] = (byte)uVar5;
      pbVar8 = pbVar8 + 2;
      for (uVar5 = *(uint *)(lVar2 + 0x14); 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = pbVar8 + 1;
      }
      *pbVar8 = (byte)uVar5;
      param_2 = (byte *)FUN_143a78c00(lVar2,pbVar8 + 1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  uVar3 = FUN_143a5bc10(param_1 + 8,1000,0x20000000,param_2);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,uVar3);
  }
  return;
}



// FUNCTION 143a777c0 FUN_143a777c0 body=1073 status=ok
// SIG undefined FUN_143a777c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a777c0(longlong param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar8 = *(uint *)(param_1 + 0x10);
  local_44 = uVar8;
  if ((uVar8 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xb0);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar6,param_2 + 1);
  }
  if ((uVar8 & 2) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xb8);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar6,param_2 + 1);
  }
  iVar5 = IStreamingManager::GetNumWantingResources(param_1 + 0x18);
  uVar13 = 0;
  iVar11 = 0;
  if (0 < iVar5) {
    do {
      FUN_1439f1d30(param_1 + 0x18,iVar11);
      FUN_1439f1d30(param_1 + 0x18,iVar11);
      uVar6 = FUN_1439f1d30(param_1 + 0x18,iVar11);
      *param_2 = 0x1a;
      param_2 = (byte *)FUN_1439f9df0(uVar6,param_2 + 1);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar5);
  }
  uVar14 = *(uint *)(param_1 + 0x38);
  uVar12 = 0;
  if (uVar14 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar12 * 8);
      *param_2 = 0x22;
      uVar9 = *(uint *)(lVar1 + 0x14);
      while( true ) {
        pbVar10 = param_2 + 1;
        bVar4 = (byte)uVar9;
        if (uVar9 < 0x80) break;
        uVar9 = uVar9 >> 7;
        *pbVar10 = bVar4 | 0x80;
        param_2 = pbVar10;
      }
      *pbVar10 = bVar4;
      param_2 = (byte *)FUN_143a76690(lVar1,param_2 + 2);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar14);
  }
  uVar14 = *(uint *)(param_1 + 0x50);
  uVar12 = 0;
  if (uVar14 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8 + (longlong)(int)uVar12 * 8);
      *param_2 = 0x2a;
      uVar9 = *(uint *)(lVar1 + 0x14);
      while( true ) {
        pbVar10 = param_2 + 1;
        bVar4 = (byte)uVar9;
        if (uVar9 < 0x80) break;
        uVar9 = uVar9 >> 7;
        *pbVar10 = bVar4 | 0x80;
        param_2 = pbVar10;
      }
      *pbVar10 = bVar4;
      param_2 = (byte *)FUN_143a76d40(lVar1,param_2 + 2);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar14);
  }
  local_48 = *(uint *)(param_1 + 0x68);
  uVar14 = 0;
  if (local_48 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 8 + (longlong)(int)uVar14 * 8);
      *param_2 = 0x32;
      uVar8 = *(uint *)(lVar1 + 0x14);
      pbVar10 = param_2;
      while( true ) {
        pbVar3 = pbVar10 + 1;
        bVar4 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar3 = bVar4 | 0x80;
        pbVar10 = pbVar3;
      }
      *pbVar3 = bVar4;
      param_2 = pbVar10 + 2;
      uVar8 = *(uint *)(lVar1 + 0x10);
      if ((uVar8 & 1) != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x30);
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(uVar6,pbVar10 + 3);
      }
      uVar12 = *(uint *)(lVar1 + 0x20);
      uVar9 = 0;
      if (uVar12 != 0) {
        do {
          param_2 = (byte *)FUN_143a6e8e0(2,*(undefined8 *)
                                             (*(longlong *)(lVar1 + 0x28) + 8 +
                                             (longlong)(int)uVar9 * 8),param_2);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar12);
      }
      if ((uVar8 & 2) != 0) {
        param_2 = (byte *)FUN_143a6ea20(3,*(undefined8 *)(lVar1 + 0x38),param_2);
      }
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar1 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar14 = uVar14 + 1;
      uVar8 = local_44;
    } while (uVar14 < local_48);
  }
  uVar14 = *(uint *)(param_1 + 0x80);
  uVar12 = 0;
  if (uVar14 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8 + (longlong)(int)uVar12 * 8);
      *param_2 = 0x3a;
      uVar9 = *(uint *)(lVar1 + 0x14);
      while( true ) {
        pbVar10 = param_2 + 1;
        bVar4 = (byte)uVar9;
        if (uVar9 < 0x80) break;
        uVar9 = uVar9 >> 7;
        *pbVar10 = bVar4 | 0x80;
        param_2 = pbVar10;
      }
      *pbVar10 = bVar4;
      param_2 = (byte *)FUN_143a773f0(lVar1,param_2 + 2);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar14);
  }
  if ((uVar8 & 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 200);
    *param_2 = 0x42;
    uVar14 = *(uint *)(lVar1 + 0x2c);
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar14;
      if (uVar14 < 0x80) break;
      uVar14 = uVar14 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    param_2 = (byte *)FUN_143a77cb0(lVar1,param_2 + 1);
  }
  if ((uVar8 & 0x10) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd0);
    *param_2 = 0x4a;
    uVar14 = *(uint *)(lVar1 + 0x14);
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar14;
      if (uVar14 < 0x80) break;
      uVar14 = uVar14 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    param_2 = param_2 + 1;
    uVar14 = *(uint *)(lVar1 + 0x20);
    if (uVar14 != 0) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 8 + (longlong)(int)uVar13 * 8);
        *param_2 = 10;
        uVar12 = *(uint *)(lVar2 + 0x14);
        while( true ) {
          pbVar10 = param_2 + 1;
          bVar4 = (byte)uVar12;
          if (uVar12 < 0x80) break;
          uVar12 = uVar12 >> 7;
          *pbVar10 = bVar4 | 0x80;
          param_2 = pbVar10;
        }
        *pbVar10 = bVar4;
        param_2 = (byte *)FUN_143a78a90(lVar2,param_2 + 2);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar14);
    }
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar1 + 8) & 0xfffffffffffffffe,param_2);
    }
  }
  uVar6 = FUN_143a822c0(10,param_1 + 0x90,param_2);
  puVar7 = (undefined1 *)FUN_143a822c0(0xb,param_1 + 0xa0,uVar6);
  if ((uVar8 & 4) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xc0);
    *puVar7 = 0x62;
    puVar7 = (undefined1 *)FUN_1439f9df0(uVar6,puVar7 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,puVar7);
  }
  return;
}



// FUNCTION 143a77c00 FUN_143a77c00 body=176 status=ok
// SIG undefined FUN_143a77c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_143a77c00(longlong param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar6 * 8);
      *param_2 = 10;
      uVar4 = *(uint *)(lVar2 + 0x14);
      while( true ) {
        pbVar3 = param_2 + 1;
        bVar5 = (byte)uVar4;
        if (uVar4 < 0x80) break;
        uVar4 = uVar4 >> 7;
        *pbVar3 = bVar5 | 0x80;
        param_2 = pbVar3;
      }
      *pbVar3 = bVar5;
      param_2 = (byte *)FUN_143a777c0(lVar2,param_2 + 2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143a77cb0 FUN_143a77cb0 body=1061 status=ok
// SIG undefined FUN_143a77cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a77cb0(longlong param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  if ((uVar1 & 2) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *param_2 = 0x42;
    param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    uVar4 = (ulonglong)*(int *)(param_1 + 0xa4);
    *param_2 = 0x48;
    while( true ) {
      pbVar8 = param_2 + 1;
      bVar5 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar8 = bVar5 | 0x80;
      param_2 = pbVar8;
    }
    *pbVar8 = bVar5;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(10,*(undefined1 *)(param_1 + 0x98),param_2);
  }
  if ((uVar1 & 4) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *param_2 = 0x5a;
    param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(0x10,*(undefined1 *)(param_1 + 0x9b),param_2);
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(0x11,*(undefined1 *)(param_1 + 0x9c),param_2);
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(0x12,*(undefined1 *)(param_1 + 0x9d),param_2);
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(0x14,*(undefined1 *)(param_1 + 0x99),param_2);
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(0x17,*(undefined1 *)(param_1 + 0x9f),param_2);
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(0x1b,*(undefined1 *)(param_1 + 0x9a),param_2);
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(0x1f,*(undefined1 *)(param_1 + 0xa0),param_2);
  }
  if ((uVar1 & 8) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    uVar4 = 0x122;
    do {
      pbVar8 = param_2;
      bVar5 = (byte)uVar4;
      uVar4 = uVar4 >> 7;
      *pbVar8 = bVar5 | 0x80;
      param_2 = pbVar8 + 1;
    } while (0x7f < (uint)uVar4);
    pbVar8[1] = (byte)uVar4;
    param_2 = (byte *)FUN_1439f9df0(uVar3,pbVar8 + 2);
  }
  if ((uVar1 & 0x10) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    uVar4 = 0x12a;
    do {
      pbVar8 = param_2;
      bVar5 = (byte)uVar4;
      uVar4 = uVar4 >> 7;
      *pbVar8 = bVar5 | 0x80;
      param_2 = pbVar8 + 1;
    } while (0x7f < (uint)uVar4);
    pbVar8[1] = (byte)uVar4;
    param_2 = (byte *)FUN_1439f9df0(uVar3,pbVar8 + 2);
  }
  if ((uVar1 & 0x20) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    uVar4 = 0x13a;
    do {
      pbVar8 = param_2;
      bVar5 = (byte)uVar4;
      uVar4 = uVar4 >> 7;
      *pbVar8 = bVar5 | 0x80;
      param_2 = pbVar8 + 1;
    } while (0x7f < (uint)uVar4);
    pbVar8[1] = (byte)uVar4;
    param_2 = (byte *)FUN_1439f9df0(uVar3,pbVar8 + 2);
  }
  if ((uVar1 & 0x40) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    uVar4 = 0x142;
    do {
      pbVar8 = param_2;
      bVar5 = (byte)uVar4;
      uVar4 = uVar4 >> 7;
      *pbVar8 = bVar5 | 0x80;
      param_2 = pbVar8 + 1;
    } while (0x7f < (uint)uVar4);
    pbVar8[1] = (byte)uVar4;
    param_2 = (byte *)FUN_1439f9df0(uVar3,pbVar8 + 2);
  }
  if ((char)uVar1 < '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    uVar4 = 0x14a;
    do {
      pbVar8 = param_2;
      bVar5 = (byte)uVar4;
      uVar4 = uVar4 >> 7;
      *pbVar8 = bVar5 | 0x80;
      param_2 = pbVar8 + 1;
    } while (0x7f < (uint)uVar4);
    pbVar8[1] = (byte)uVar4;
    param_2 = (byte *)FUN_1439f9df0(uVar3,pbVar8 + 2);
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(0x2a,*(undefined1 *)(param_1 + 0x9e),param_2);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    uVar4 = 0x162;
    do {
      pbVar8 = param_2;
      bVar5 = (byte)uVar4;
      uVar4 = uVar4 >> 7;
      *pbVar8 = bVar5 | 0x80;
      param_2 = pbVar8 + 1;
    } while (0x7f < (uint)uVar4);
    pbVar8[1] = (byte)uVar4;
    param_2 = (byte *)FUN_1439f9df0(uVar3,pbVar8 + 2);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    uVar4 = 0x16a;
    do {
      pbVar8 = param_2;
      bVar5 = (byte)uVar4;
      uVar4 = uVar4 >> 7;
      *pbVar8 = bVar5 | 0x80;
      param_2 = pbVar8 + 1;
    } while (0x7f < (uint)uVar4);
    pbVar8[1] = (byte)uVar4;
    param_2 = (byte *)FUN_1439f9df0(uVar3,pbVar8 + 2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar7 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar7 * 8);
      uVar6 = 0x1f3a;
      do {
        pbVar8 = param_2;
        bVar5 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        *pbVar8 = bVar5 | 0x80;
        param_2 = pbVar8 + 1;
      } while (0x7f < uVar6);
      pbVar8[1] = (byte)uVar6;
      pbVar8 = pbVar8 + 2;
      for (uVar6 = *(uint *)(lVar2 + 0x14); 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *pbVar8 = (byte)uVar6 | 0x80;
        pbVar8 = pbVar8 + 1;
      }
      *pbVar8 = (byte)uVar6;
      param_2 = (byte *)FUN_143a78c00(lVar2,pbVar8 + 1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  uVar3 = FUN_143a5bc10(param_1 + 8,1000,0x20000000,param_2);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,uVar3);
  }
  return;
}



// FUNCTION 143a780e0 FUN_143a780e0 body=135 status=ok
// SIG undefined FUN_143a780e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a780e0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      param_2 = FUN_143a6e740(1,*(undefined8 *)
                                 (*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar2 * 8),
                              param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143a78170 FUN_143a78170 body=292 status=ok
// SIG undefined FUN_143a78170(void)

byte * FUN_143a78170(longlong param_1,byte *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  iVar3 = FUN_1439f2ae0(param_1 + 0x18);
  if (0 < iVar3) {
    *param_2 = 10;
    uVar6 = *(uint *)(param_1 + 0x28);
    while( true ) {
      pbVar5 = param_2 + 1;
      bVar2 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *pbVar5 = bVar2 | 0x80;
      param_2 = pbVar5;
    }
    *pbVar5 = bVar2;
    param_2 = (byte *)FUN_141542140(param_1 + 0x18,param_2 + 2);
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar1,param_2 + 1);
  }
  if ((uVar6 & 2) != 0) {
    uVar4 = (ulonglong)*(int *)(param_1 + 0x38);
    *param_2 = 0x18;
    while( true ) {
      pbVar5 = param_2 + 1;
      bVar2 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar5 = bVar2 | 0x80;
      param_2 = pbVar5;
    }
    *pbVar5 = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar6 & 4) != 0) {
    uVar4 = (ulonglong)*(int *)(param_1 + 0x3c);
    *param_2 = 0x20;
    while( true ) {
      param_2 = param_2 + 1;
      bVar2 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar2 | 0x80;
    }
    *param_2 = bVar2;
    param_2 = param_2 + 1;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return pbVar5;
}



// FUNCTION 143a782a0 FUN_143a782a0 body=344 status=ok
// SIG undefined FUN_143a782a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a782a0(longlong param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(1,*(undefined1 *)(param_1 + 0x48),param_2);
  }
  if ((uVar1 & 2) != 0) {
    param_2 = (byte *)FUN_141514ca0(2,*(undefined1 *)(param_1 + 0x49),param_2);
  }
  if ((uVar1 & 4) != 0) {
    param_2 = (byte *)FUN_141514ca0(3,*(undefined1 *)(param_1 + 0x4a),param_2);
  }
  if ((uVar1 & 8) != 0) {
    param_2 = (byte *)FUN_141514ca0(7,*(undefined1 *)(param_1 + 0x4b),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar6 * 8);
      uVar5 = 0x1f3a;
      do {
        pbVar7 = param_2;
        bVar4 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        *pbVar7 = bVar4 | 0x80;
        param_2 = pbVar7 + 1;
      } while (0x7f < uVar5);
      pbVar7[1] = (byte)uVar5;
      pbVar7 = pbVar7 + 2;
      for (uVar5 = *(uint *)(lVar2 + 0x14); 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *pbVar7 = (byte)uVar5 | 0x80;
        pbVar7 = pbVar7 + 1;
      }
      *pbVar7 = (byte)uVar5;
      param_2 = (byte *)FUN_143a78c00(lVar2,pbVar7 + 1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  uVar3 = FUN_143a5bc10(param_1 + 8,1000,0x20000000,param_2);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,uVar3);
  }
  return;
}



// FUNCTION 143a78400 FUN_143a78400 body=260 status=ok
// SIG undefined FUN_143a78400(void)

byte * FUN_143a78400(longlong param_1,byte *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((uVar1 & 2) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((uVar1 & 4) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 0x1a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((uVar1 & 8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    *param_2 = 0x22;
    uVar6 = *(uint *)(lVar3 + 0x2c);
    while( true ) {
      param_2 = param_2 + 1;
      bVar4 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_2 = bVar4 | 0x80;
    }
    *param_2 = bVar4;
    param_2 = (byte *)FUN_143a78510(lVar3,param_2 + 1);
  }
  if ((uVar1 & 0x10) != 0) {
    param_2 = (byte *)FUN_141514ca0(5,*(undefined1 *)(param_1 + 0x38),param_2);
  }
  if ((uVar1 & 0x20) != 0) {
    param_2 = (byte *)FUN_141514ca0(6,*(undefined1 *)(param_1 + 0x39),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 143a78510 FUN_143a78510 body=373 status=ok
// SIG undefined FUN_143a78510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a78510(longlong param_1,byte *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((uVar4 & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(0x21,*(undefined1 *)(param_1 + 0x48),param_2);
  }
  if ((uVar4 & 2) != 0) {
    uVar8 = (ulonglong)*(int *)(param_1 + 0x4c);
    uVar4 = 0x110;
    do {
      pbVar6 = param_2;
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 >> 7;
      *pbVar6 = bVar3 | 0x80;
      param_2 = pbVar6 + 1;
    } while (0x7f < uVar4);
    pbVar6[1] = (byte)uVar4;
    pbVar6 = pbVar6 + 2;
    for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      *pbVar6 = (byte)uVar8 | 0x80;
      pbVar6 = pbVar6 + 1;
    }
    *pbVar6 = (byte)uVar8;
    param_2 = pbVar6 + 1;
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar7 * 8);
      uVar5 = 0x1f3a;
      do {
        pbVar6 = param_2;
        bVar3 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        *pbVar6 = bVar3 | 0x80;
        param_2 = pbVar6 + 1;
      } while (0x7f < uVar5);
      pbVar6[1] = (byte)uVar5;
      pbVar6 = pbVar6 + 2;
      for (uVar5 = *(uint *)(lVar1 + 0x14); 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *pbVar6 = (byte)uVar5 | 0x80;
        pbVar6 = pbVar6 + 1;
      }
      *pbVar6 = (byte)uVar5;
      param_2 = (byte *)FUN_143a78c00(lVar1,pbVar6 + 1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar2 = FUN_143a5bc10(param_1 + 8,1000,0x20000000,param_2);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,uVar2);
  }
  return;
}



// FUNCTION 143a78690 FUN_143a78690 body=374 status=ok
// SIG undefined FUN_143a78690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_143a78690(longlong param_1,byte *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar1,param_2 + 1);
  }
  if ((uVar5 & 2) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    *param_2 = 0x12;
    uVar5 = *(uint *)(lVar2 + 0x2c);
    while( true ) {
      pbVar8 = param_2 + 1;
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *pbVar8 = bVar4 | 0x80;
      param_2 = pbVar8;
    }
    *pbVar8 = bVar4;
    uVar7 = 0;
    uVar5 = *(uint *)(lVar2 + 0x38);
    param_2 = param_2 + 2;
    if (uVar5 != 0) {
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)(int)uVar7 * 8);
        uVar6 = 0x1f3a;
        do {
          pbVar8 = param_2;
          bVar4 = (byte)uVar6;
          uVar6 = uVar6 >> 7;
          *pbVar8 = bVar4 | 0x80;
          param_2 = pbVar8 + 1;
        } while (0x7f < uVar6);
        pbVar8[1] = (byte)uVar6;
        pbVar8 = pbVar8 + 2;
        for (uVar6 = *(uint *)(lVar3 + 0x14); 0x7f < uVar6; uVar6 = uVar6 >> 7) {
          *pbVar8 = (byte)uVar6 | 0x80;
          pbVar8 = pbVar8 + 1;
        }
        *pbVar8 = (byte)uVar6;
        param_2 = (byte *)FUN_143a78c00(lVar3,pbVar8 + 1);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
    }
    param_2 = (byte *)FUN_143a5bc10(lVar2 + 8,1000,0x20000000);
    if ((*(byte *)(lVar2 + 0x20) & 1) != 0) {
      param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar2 + 0x20) & 0xfffffffffffffffe);
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar8 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  return pbVar8;
}



// FUNCTION 143a78810 FUN_143a78810 body=190 status=ok
// SIG undefined FUN_143a78810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_143a78810(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      param_2 = (undefined1 *)
                FUN_143a6e8e0(2,*(undefined8 *)
                                 (*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar4 * 8),
                              param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((uVar1 & 2) != 0) {
    param_2 = (undefined1 *)FUN_143a6ea20(3,*(undefined8 *)(param_1 + 0x38),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143a788d0 FUN_143a788d0 body=264 status=ok
// SIG undefined FUN_143a788d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a788d0(longlong param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    param_2 = (byte *)FUN_141514ca0(0x21,*(undefined1 *)(param_1 + 0x48),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar6 * 8);
      uVar5 = 0x1f3a;
      do {
        pbVar7 = param_2;
        bVar4 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        *pbVar7 = bVar4 | 0x80;
        param_2 = pbVar7 + 1;
      } while (0x7f < uVar5);
      pbVar7[1] = (byte)uVar5;
      pbVar7 = pbVar7 + 2;
      for (uVar5 = *(uint *)(lVar2 + 0x14); 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *pbVar7 = (byte)uVar5 | 0x80;
        pbVar7 = pbVar7 + 1;
      }
      *pbVar7 = (byte)uVar5;
      param_2 = (byte *)FUN_143a78c00(lVar2,pbVar7 + 1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  uVar3 = FUN_143a5bc10(param_1 + 8,1000,0x20000000,param_2);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,uVar3);
  }
  return;
}



// FUNCTION 143a789e0 FUN_143a789e0 body=176 status=ok
// SIG undefined FUN_143a789e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_143a789e0(longlong param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar6 * 8);
      *param_2 = 10;
      uVar4 = *(uint *)(lVar2 + 0x14);
      while( true ) {
        pbVar3 = param_2 + 1;
        bVar5 = (byte)uVar4;
        if (uVar4 < 0x80) break;
        uVar4 = uVar4 >> 7;
        *pbVar3 = bVar5 | 0x80;
        param_2 = pbVar3;
      }
      *pbVar3 = bVar5;
      param_2 = (byte *)FUN_143a78a90(lVar2,param_2 + 2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143a78a90 FUN_143a78a90 body=368 status=ok
// SIG undefined FUN_143a78a90(void)

byte * FUN_143a78a90(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = FUN_1439f2ae0(param_1 + 0x18);
  if (0 < iVar3) {
    *param_2 = 10;
    uVar5 = *(uint *)(param_1 + 0x28);
    while( true ) {
      pbVar1 = param_2 + 1;
      bVar2 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *pbVar1 = bVar2 | 0x80;
      param_2 = pbVar1;
    }
    *pbVar1 = bVar2;
    param_2 = (byte *)FUN_141542140(param_1 + 0x18,param_2 + 2);
  }
  iVar3 = FUN_1439f2ae0(param_1 + 0x30);
  if (0 < iVar3) {
    *param_2 = 0x12;
    uVar5 = *(uint *)(param_1 + 0x40);
    while( true ) {
      param_2 = param_2 + 1;
      bVar2 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *param_2 = bVar2 | 0x80;
    }
    *param_2 = bVar2;
    param_2 = (byte *)FUN_141542140(param_1 + 0x30,param_2 + 1);
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *param_2 = 0x1a;
    param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
  }
  if ((uVar5 & 2) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *param_2 = 0x22;
    param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
  }
  iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x48);
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      FUN_1439f1d30(param_1 + 0x48,iVar6);
      FUN_1439f1d30(param_1 + 0x48,iVar6);
      uVar4 = FUN_1439f1d30(param_1 + 0x48,iVar6);
      *param_2 = 0x32;
      param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 143a78c00 FUN_143a78c00 body=497 status=ok
// SIG undefined FUN_143a78c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_143a78c00(longlong param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar10 = 0;
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar10 * 8);
      *param_2 = 0x12;
      uVar8 = *(uint *)(lVar3 + 0x14);
      pbVar7 = param_2;
      while( true ) {
        pbVar5 = pbVar7 + 1;
        bVar6 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar7 = pbVar5;
      }
      *pbVar5 = bVar6;
      param_2 = pbVar7 + 2;
      uVar8 = *(uint *)(lVar3 + 0x10);
      if ((uVar8 & 1) != 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(uVar4,pbVar7 + 3);
      }
      if ((uVar8 & 2) != 0) {
        cVar1 = *(char *)(lVar3 + 0x20);
        *param_2 = 0x10;
        param_2[1] = cVar1 != '\0';
        param_2 = param_2 + 2;
      }
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *param_2 = 0x1a;
    param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
  }
  if ((uVar2 & 8) != 0) {
    uVar9 = *(ulonglong *)(param_1 + 0x48);
    *param_2 = 0x20;
    while( true ) {
      pbVar7 = param_2 + 1;
      bVar6 = (byte)uVar9;
      if (uVar9 < 0x80) break;
      uVar9 = uVar9 >> 7;
      *pbVar7 = bVar6 | 0x80;
      param_2 = pbVar7;
    }
    *pbVar7 = bVar6;
    param_2 = param_2 + 2;
  }
  if ((uVar2 & 0x10) != 0) {
    uVar9 = *(ulonglong *)(param_1 + 0x50);
    *param_2 = 0x28;
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar9;
      if (uVar9 < 0x80) break;
      uVar9 = uVar9 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = param_2 + 1;
  }
  if ((uVar2 & 0x20) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *param_2 = 0x31;
    *(undefined8 *)(param_2 + 1) = uVar4;
    param_2 = param_2 + 9;
  }
  if ((uVar2 & 2) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *param_2 = 0x3a;
    param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
  }
  if ((uVar2 & 4) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *param_2 = 0x42;
    param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar7 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  return pbVar7;
}



// FUNCTION 143a78e00 FUN_143a78e00 body=109 status=ok
// SIG undefined FUN_143a78e00(void)

undefined1 * FUN_143a78e00(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((uVar1 & 2) != 0) {
    param_2 = (undefined1 *)FUN_141514ca0(2,*(undefined1 *)(param_1 + 0x20),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 143a78e70 FUN_143a78e70 body=352 status=ok
// SIG undefined FUN_143a78e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a78e70(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  cVar3 = FUN_143a6ca30(param_1 + 0x18);
  if (((cVar3 != '\0') && (cVar3 = FUN_143a6c8c0(param_1 + 0x30), cVar3 != '\0')) &&
     (cVar3 = FUN_143a6c930(param_1 + 0x48), cVar3 != '\0')) {
    iVar4 = *(int *)(param_1 + 0x68) + -1;
    lVar5 = (longlong)iVar4;
    if (-1 < iVar4) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 8 + lVar5 * 8);
        if ((*(byte *)(lVar1 + 0x10) & 1) != 0) {
          lVar1 = *(longlong *)(lVar1 + 0x18);
          cVar3 = FUN_143a54850(lVar1 + 8);
          if (cVar3 == '\0') {
            return 0;
          }
          cVar3 = FUN_143a6cc80(lVar1 + 0x30);
          if (cVar3 == '\0') {
            return 0;
          }
        }
        bVar2 = 0 < lVar5;
        lVar5 = lVar5 + -1;
      } while (bVar2);
    }
    cVar3 = FUN_143a6ca30(param_1 + 0x78);
    if (cVar3 != '\0') {
      iVar4 = *(int *)(param_1 + 0x98) + -1;
      lVar5 = (longlong)iVar4;
      if (-1 < iVar4) {
        do {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 8 + lVar5 * 8);
          if ((*(uint *)(lVar1 + 0x10) >> 1 & 1) != 0) {
            lVar1 = *(longlong *)(lVar1 + 0x20);
            cVar3 = FUN_143a54850(lVar1 + 8);
            if (cVar3 == '\0') {
              return 0;
            }
            cVar3 = FUN_143a6cc80(lVar1 + 0x30);
            if (cVar3 == '\0') {
              return 0;
            }
          }
          bVar2 = 0 < lVar5;
          lVar5 = lVar5 + -1;
        } while (bVar2);
      }
      if ((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xe0);
        cVar3 = FUN_143a54850(lVar5 + 8);
        if (cVar3 == '\0') {
          return 0;
        }
        cVar3 = FUN_143a6cc80(lVar5 + 0x30);
        if (cVar3 == '\0') {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143a78fd0 FUN_143a78fd0 body=58 status=ok
// SIG undefined FUN_143a78fd0(void)

undefined1 FUN_143a78fd0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  cVar2 = FUN_143a54850(lVar1 + 8);
  if ((cVar2 != '\0') && (cVar2 = FUN_143a6cc80(lVar1 + 0x30), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143a79010 FUN_143a79010 body=187 status=ok
// SIG undefined FUN_143a79010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a79010(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  iVar4 = *(int *)(param_1 + 0x20) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + lVar6 * 8);
      if ((*(uint *)(lVar1 + 0x10) >> 1 & 1) != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x20);
        cVar3 = FUN_143a54850(lVar1 + 8);
        if (cVar3 == '\0') goto LAB_143a790a3;
        cVar3 = FUN_143a6cc80(lVar1 + 0x30);
        if (cVar3 == '\0') goto LAB_143a790a3;
      }
      bVar2 = 0 < lVar6;
      lVar6 = lVar6 + -1;
    } while (bVar2);
  }
  if ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0) {
LAB_143a790a7:
    uVar5 = 1;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x68);
    cVar3 = FUN_143a54850(lVar6 + 8);
    if (cVar3 != '\0') {
      cVar3 = FUN_143a6cc80(lVar6 + 0x30);
      if (cVar3 != '\0') goto LAB_143a790a7;
    }
LAB_143a790a3:
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143a790d0 FUN_143a790d0 body=51 status=ok
// SIG undefined FUN_143a790d0(void)

undefined1 FUN_143a790d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143a54850(param_1 + 8);
  if (cVar1 != '\0') {
    cVar1 = FUN_143a6cc80(param_1 + 0x30);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143a79110 FUN_143a79110 body=61 status=ok
// SIG undefined FUN_143a79110(void)

undefined8 FUN_143a79110(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  cVar2 = FUN_143a54850(lVar1 + 8);
  if ((cVar2 != '\0') && (cVar2 = FUN_143a6cc80(lVar1 + 0x30), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143a79150 FUN_143a79150 body=62 status=ok
// SIG undefined FUN_143a79150(void)

undefined8 FUN_143a79150(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(uint *)(param_1 + 0x10) >> 5 & 1) == 0) {
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  cVar2 = FUN_143a54850(lVar1 + 8);
  if ((cVar2 != '\0') && (cVar2 = FUN_143a6cc80(lVar1 + 0x30), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143a79190 FUN_143a79190 body=339 status=ok
// SIG undefined FUN_143a79190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a79190(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  cVar4 = FUN_143a6c8c0(param_1 + 0x30);
  if ((cVar4 != '\0') && (cVar4 = FUN_143a6c930(param_1 + 0x48), cVar4 != '\0')) {
    iVar5 = *(int *)(param_1 + 0x68) + -1;
    lVar7 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 8 + lVar7 * 8);
        iVar5 = *(int *)(lVar1 + 0x20) + -1;
        lVar6 = (longlong)iVar5;
        if (-1 < iVar5) {
          do {
            lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 8 + lVar6 * 8);
            if ((*(uint *)(lVar2 + 0x10) >> 3 & 1) != 0) {
              lVar2 = *(longlong *)(lVar2 + 0x30);
              cVar4 = FUN_143a54850(lVar2 + 8);
              if (cVar4 == '\0') {
                return 0;
              }
              cVar4 = FUN_143a6cc80(lVar2 + 0x30);
              if (cVar4 == '\0') {
                return 0;
              }
            }
            lVar6 = lVar6 + -1;
          } while (-1 < lVar6);
        }
        if ((*(uint *)(lVar1 + 0x10) >> 1 & 1) != 0) {
          lVar1 = *(longlong *)(lVar1 + 0x38);
          cVar4 = FUN_143a54850(lVar1 + 8);
          if (cVar4 == '\0') {
            return 0;
          }
          cVar4 = FUN_143a6cc80(lVar1 + 0x30);
          if (cVar4 == '\0') {
            return 0;
          }
        }
        bVar3 = 0 < lVar7;
        lVar7 = lVar7 + -1;
      } while (bVar3);
    }
    cVar4 = FUN_143a6ca30(param_1 + 0x78);
    if (cVar4 != '\0') {
      if ((*(uint *)(param_1 + 0x10) >> 3 & 1) != 0) {
        lVar7 = *(longlong *)(param_1 + 200);
        cVar4 = FUN_143a54850(lVar7 + 8);
        if (cVar4 == '\0') {
          return 0;
        }
        cVar4 = FUN_143a6cc80(lVar7 + 0x30);
        if (cVar4 == '\0') {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143a792f0 FUN_143a792f0 body=23 status=ok
// SIG undefined FUN_143a792f0(void)

bool FUN_143a792f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143a6cad0(param_1 + 0x18);
  return cVar1 != '\0';
}



// FUNCTION 143a79310 FUN_143a79310 body=62 status=ok
// SIG undefined FUN_143a79310(void)

undefined8 FUN_143a79310(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(uint *)(param_1 + 0x10) >> 3 & 1) == 0) {
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  cVar2 = FUN_143a54850(lVar1 + 8);
  if ((cVar2 != '\0') && (cVar2 = FUN_143a6cc80(lVar1 + 0x30), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143a79350 FUN_143a79350 body=188 status=ok
// SIG undefined FUN_143a79350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a79350(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  iVar4 = *(int *)(param_1 + 0x20) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + lVar6 * 8);
      if ((*(uint *)(lVar1 + 0x10) >> 3 & 1) != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x30);
        cVar3 = FUN_143a54850(lVar1 + 8);
        if (cVar3 == '\0') goto LAB_143a793e4;
        cVar3 = FUN_143a6cc80(lVar1 + 0x30);
        if (cVar3 == '\0') goto LAB_143a793e4;
      }
      bVar2 = 0 < lVar6;
      lVar6 = lVar6 + -1;
    } while (bVar2);
  }
  if ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0) {
LAB_143a793e8:
    uVar5 = 1;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x38);
    cVar3 = FUN_143a54850(lVar6 + 8);
    if (cVar3 != '\0') {
      cVar3 = FUN_143a6cc80(lVar6 + 0x30);
      if (cVar3 != '\0') goto LAB_143a793e8;
    }
LAB_143a793e4:
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143a79410 FUN_143a79410 body=115 status=ok
// SIG undefined FUN_143a79410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a79410(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar3;
  
  uVar2 = *(int *)(param_1 + 0x20) - 1;
  uVar3 = (ulonglong)uVar2;
  if (-1 < (int)uVar2) {
    puVar5 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar2 * 8);
    lVar4 = (longlong)(int)uVar2;
    do {
      uVar3 = *puVar5;
      if (((byte)*(undefined4 *)(uVar3 + 0x10) & 3) != 3) {
        return uVar3 & 0xffffffffffffff00;
      }
      puVar5 = puVar5 + -1;
      bVar1 = 0 < lVar4;
      lVar4 = lVar4 + -1;
    } while (bVar1);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 143a79490 FUN_143a79490 body=12 status=ok
// SIG undefined FUN_143a79490(void)

bool FUN_143a79490(longlong param_1)

{
  return (*(byte *)(param_1 + 0x10) & 3) == 3;
}



// FUNCTION 143a794a0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a79570(param_2,param_1);
  return;
}



// FUNCTION 143a794b0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a79920(param_2,param_1);
  return;
}



// FUNCTION 143a794c0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a79a50(param_2,param_1);
  return;
}



// FUNCTION 143a794d0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a79b30(param_2,param_1);
  return;
}



// FUNCTION 143a794e0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a79ed0(param_2,param_1);
  return;
}



// FUNCTION 143a794f0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a7a290(param_2,param_1);
  return;
}



// FUNCTION 143a79500 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a7a6f0(param_2,param_1);
  return;
}



// FUNCTION 143a79510 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a7b200(param_2,param_1);
  return;
}



// FUNCTION 143a79520 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a7b490(param_2,param_1);
  return;
}



// FUNCTION 143a79530 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a7b800(param_2,param_1);
  return;
}



// FUNCTION 143a79540 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a7b9c0(param_2,param_1);
  return;
}



// FUNCTION 143a79550 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a7be70(param_2,param_1);
  return;
}



// FUNCTION 143a79560 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_143a7c0a0(param_2,param_1);
  return;
}



// FUNCTION 143a79570 FUN_143a79570 body=836 status=ok
// SIG undefined FUN_143a79570(void)

void FUN_143a79570(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar8 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x28);
    uVar6 = FUN_1439f1d40(param_1 + 0x18,iVar1);
    FUN_143a6f070(param_1 + 0x18,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
    if (**(int **)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
      **(int **)(param_1 + 0x28) = *(int *)(param_1 + 0x20);
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x40);
    uVar6 = FUN_1439f1d40(param_1 + 0x30,iVar1);
    FUN_143a6eb90(param_1 + 0x30,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1;
    if (**(int **)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      **(int **)(param_1 + 0x40) = *(int *)(param_1 + 0x38);
    }
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x58);
    uVar6 = FUN_1439f1d40(param_1 + 0x48,iVar1);
    FUN_143a6ee00(param_1 + 0x48,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x58) - *(int *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
    if (**(int **)(param_1 + 0x58) < *(int *)(param_1 + 0x50)) {
      **(int **)(param_1 + 0x58) = *(int *)(param_1 + 0x50);
    }
  }
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar6 = FUN_1439f1d40(param_1 + 0x60,iVar1);
    FUN_143a6ec60(param_1 + 0x60,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x70) - *(int *)(param_1 + 0x68));
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar1;
    if (**(int **)(param_1 + 0x70) < *(int *)(param_1 + 0x68)) {
      **(int **)(param_1 + 0x70) = *(int *)(param_1 + 0x68);
    }
  }
  iVar1 = *(int *)(param_2 + 0x80);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x88);
    uVar6 = FUN_1439f1d40(param_1 + 0x78,iVar1);
    FUN_143a6f070(param_1 + 0x78,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x88) - *(int *)(param_1 + 0x80));
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + iVar1;
    if (**(int **)(param_1 + 0x88) < *(int *)(param_1 + 0x80)) {
      **(int **)(param_1 + 0x88) = *(int *)(param_1 + 0x80);
    }
  }
  iVar1 = *(int *)(param_2 + 0x98);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0xa0);
    uVar6 = FUN_1439f1d40(param_1 + 0x90,iVar1);
    FUN_143a6f3b0(param_1 + 0x90,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0xa0) - *(int *)(param_1 + 0x98));
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar1;
    if (**(int **)(param_1 + 0xa0) < *(int *)(param_1 + 0x98)) {
      **(int **)(param_1 + 0xa0) = *(int *)(param_1 + 0x98);
    }
  }
  iVar1 = *(int *)(param_2 + 0xb0);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0xb8);
    uVar6 = FUN_1439f1d40(param_1 + 0xa8,iVar1);
    FUN_143a6ed30(param_1 + 0xa8,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0xb8) - *(int *)(param_1 + 0xb0));
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + iVar1;
    if (**(int **)(param_1 + 0xb8) < *(int *)(param_1 + 0xb0)) {
      **(int **)(param_1 + 0xb8) = *(int *)(param_1 + 0xb0);
    }
  }
  FUN_1439f2030(param_1 + 0xc0,param_2 + 0xc0);
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      puVar3 = *(undefined8 **)(param_2 + 0xd8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar4 = *(undefined8 **)(param_1 + 0xd8);
      if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0xd8,uVar8);
      }
      else if (puVar4 != puVar3) {
        puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (undefined8 *)*puVar3;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar4,puVar9,puVar3[2]);
      }
    }
    if ((uVar2 & 2) != 0) {
      puVar10 = &DAT_146ba39e0;
      if (*(undefined **)(param_2 + 0xe0) != (undefined *)0x0) {
        puVar10 = *(undefined **)(param_2 + 0xe0);
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      lVar7 = *(longlong *)(param_1 + 0xe0);
      if (lVar7 == 0) {
        uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          uVar8 = *(ulonglong *)(uVar8 + 0x18);
        }
        lVar7 = FUN_143a6d840(uVar8);
        *(longlong *)(param_1 + 0xe0) = lVar7;
      }
      FUN_143a7b340(lVar7,puVar10);
    }
  }
  return;
}



// FUNCTION 143a798c0 FUN_143a798c0 body=95 status=ok
// SIG undefined FUN_143a798c0(void)

void FUN_143a798c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::DescriptorProto::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a79570(param_1,lVar1);
  return;
}



// FUNCTION 143a79920 FUN_143a79920 body=204 status=ok
// SIG undefined FUN_143a79920(void)

void FUN_143a79920(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar4 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar2 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar5 = &DAT_146ba3660;
      if (*(undefined **)(param_2 + 0x18) != (undefined *)0x0) {
        puVar5 = *(undefined **)(param_2 + 0x18);
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (lVar3 == 0) {
        uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          uVar4 = *(ulonglong *)(uVar4 + 0x18);
        }
        lVar3 = FUN_143a6d2a0(uVar4);
        *(longlong *)(param_1 + 0x18) = lVar3;
      }
      FUN_143a7a180(lVar3,puVar5);
    }
    if ((uVar1 & 2) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 & 4) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  return;
}



// FUNCTION 143a799f0 FUN_143a799f0 body=95 status=ok
// SIG undefined FUN_143a799f0(void)

void FUN_143a799f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::DescriptorProto_ExtensionRange::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a79920(param_1,lVar1);
  return;
}



// FUNCTION 143a79a50 FUN_143a79a50 body=118 status=ok
// SIG undefined FUN_143a79a50(void)

void FUN_143a79a50(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_141515d60();
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar3,uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 & 2) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  return;
}



// FUNCTION 143a79ad0 FUN_143a79ad0 body=95 status=ok
// SIG undefined FUN_143a79ad0(void)

void FUN_143a79ad0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::DescriptorProto_ReservedRange::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a79a50(param_1,lVar1);
  return;
}



// FUNCTION 143a79b30 FUN_143a79b30 body=413 status=ok
// SIG undefined FUN_143a79b30(void)

void FUN_143a79b30(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar8 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x28);
    uVar6 = FUN_1439f1d40(param_1 + 0x18,iVar1);
    FUN_143a6efa0(param_1 + 0x18,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
    if (**(int **)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
      **(int **)(param_1 + 0x28) = *(int *)(param_1 + 0x20);
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x40);
    uVar6 = FUN_1439f1d40(param_1 + 0x30,iVar1);
    FUN_143a6eed0(param_1 + 0x30,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1;
    if (**(int **)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      **(int **)(param_1 + 0x40) = *(int *)(param_1 + 0x38);
    }
  }
  FUN_1439f2030(param_1 + 0x48,param_2 + 0x48);
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      puVar3 = *(undefined8 **)(param_2 + 0x60);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar4 = *(undefined8 **)(param_1 + 0x60);
      if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x60,uVar8);
      }
      else if (puVar4 != puVar3) {
        puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (undefined8 *)*puVar3;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar4,puVar9,puVar3[2]);
      }
    }
    if ((uVar2 & 2) != 0) {
      puVar10 = &DAT_146ba3590;
      if (*(undefined **)(param_2 + 0x68) != (undefined *)0x0) {
        puVar10 = *(undefined **)(param_2 + 0x68);
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      lVar7 = *(longlong *)(param_1 + 0x68);
      if (lVar7 == 0) {
        uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          uVar8 = *(ulonglong *)(uVar8 + 0x18);
        }
        lVar7 = FUN_143a6d040(uVar8);
        *(longlong *)(param_1 + 0x68) = lVar7;
      }
      FUN_143a79d90(lVar7,puVar10);
    }
  }
  return;
}



// FUNCTION 143a79cd0 FUN_143a79cd0 body=95 status=ok
// SIG undefined FUN_143a79cd0(void)

void FUN_143a79cd0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::EnumDescriptorProto::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a79b30(param_1,lVar1);
  return;
}



// FUNCTION 143a79d30 FUN_143a79d30 body=95 status=ok
// SIG undefined FUN_143a79d30(void)

void FUN_143a79d30(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::EnumDescriptorProto_EnumReservedRange::RTTI_Type_Descriptor,
                     0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a79a50(param_1,lVar1);
  return;
}



// FUNCTION 143a79d90 FUN_143a79d90 body=216 status=ok
// SIG undefined FUN_143a79d90(void)

void FUN_143a79d90(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  FUN_143a54990(param_1 + 8,param_2 + 8);
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    uVar3 = *(ulonglong *)(param_2 + 0x20);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar3 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x40);
    uVar6 = FUN_1439f1d40(param_1 + 0x30,iVar1);
    FUN_143a6f550(param_1 + 0x30,uVar6,lVar4 + 8,iVar1,
                  **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1;
    if (**(int **)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      **(int **)(param_1 + 0x40) = *(int *)(param_1 + 0x38);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x28);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    }
    if ((uVar2 & 2) != 0) {
      *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar2;
  }
  return;
}



// FUNCTION 143a79e70 FUN_143a79e70 body=95 status=ok
// SIG undefined FUN_143a79e70(void)

void FUN_143a79e70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::EnumOptions::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a79d90(param_1,lVar1);
  return;
}



// FUNCTION 143a79ed0 FUN_143a79ed0 body=280 status=ok
// SIG undefined FUN_143a79ed0(void)

void FUN_143a79ed0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar6 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar6 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar6 = *(ulonglong *)(uVar6 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x18);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x18,uVar6);
      }
      else if (puVar3 != puVar2) {
        puVar7 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar7 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar7,puVar2[2]);
      }
    }
    if ((uVar1 & 2) != 0) {
      puVar8 = &DAT_146ba3610;
      if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
        puVar8 = *(undefined **)(param_2 + 0x20);
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (lVar5 == 0) {
        uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          uVar6 = *(ulonglong *)(uVar6 + 0x18);
        }
        lVar5 = FUN_143a6d1d0(uVar6);
        *(longlong *)(param_1 + 0x20) = lVar5;
      }
      FUN_143a7a050(lVar5,puVar8);
    }
    if ((uVar1 & 4) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  return;
}



// FUNCTION 143a79ff0 FUN_143a79ff0 body=95 status=ok
// SIG undefined FUN_143a79ff0(void)

void FUN_143a79ff0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::EnumValueDescriptorProto::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a79ed0(param_1,lVar1);
  return;
}



// FUNCTION 143a7a050 FUN_143a7a050 body=198 status=ok
// SIG undefined FUN_143a7a050(void)

void FUN_143a7a050(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  FUN_143a54990(param_1 + 8,param_2 + 8);
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    uVar3 = *(ulonglong *)(param_2 + 0x20);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar3 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (iVar2 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x40);
    uVar6 = FUN_1439f1d40(param_1 + 0x30,iVar2);
    FUN_143a6f550(param_1 + 0x30,uVar6,lVar4 + 8,iVar2,
                  **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar2;
    if (**(int **)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      **(int **)(param_1 + 0x40) = *(int *)(param_1 + 0x38);
    }
  }
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x48);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
    *(undefined1 *)(param_1 + 0x48) = uVar1;
  }
  return;
}



// FUNCTION 143a7a120 FUN_143a7a120 body=95 status=ok
// SIG undefined FUN_143a7a120(void)

void FUN_143a7a120(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::EnumValueOptions::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7a050(param_1,lVar1);
  return;
}



// FUNCTION 143a7a180 FUN_143a7a180 body=168 status=ok
// SIG undefined FUN_143a7a180(void)

void FUN_143a7a180(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  FUN_143a54990(param_1 + 8,param_2 + 8);
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 0x20);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x40);
    uVar5 = FUN_1439f1d40(param_1 + 0x30,iVar1);
    FUN_143a6f550(param_1 + 0x30,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1;
    if (**(int **)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      **(int **)(param_1 + 0x40) = *(int *)(param_1 + 0x38);
    }
  }
  return;
}



// FUNCTION 143a7a230 FUN_143a7a230 body=95 status=ok
// SIG undefined FUN_143a7a230(void)

void FUN_143a7a230(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::ExtensionRangeOptions::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7a180(param_1,lVar1);
  return;
}



// FUNCTION 143a7a290 FUN_143a7a290 body=642 status=ok
// SIG undefined FUN_143a7a290(void)

void FUN_143a7a290(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar6 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar6 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar6 = *(ulonglong *)(uVar6 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x18);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x18,uVar6);
      }
      else if (puVar3 != puVar2) {
        puVar7 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar7 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar7,puVar2[2]);
      }
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar6 = *(ulonglong *)(uVar6 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x20);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x20,uVar6);
      }
      else if (puVar3 != puVar2) {
        puVar7 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar7 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar7,puVar2[2]);
      }
    }
    if ((uVar1 & 4) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar6 = *(ulonglong *)(uVar6 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x28);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x28,uVar6);
      }
      else if (puVar3 != puVar2) {
        puVar7 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar7 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar7,puVar2[2]);
      }
    }
    if ((uVar1 & 8) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar6 = *(ulonglong *)(uVar6 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x30);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x30,uVar6);
      }
      else if (puVar3 != puVar2) {
        puVar7 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar7 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar7,puVar2[2]);
      }
    }
    if ((uVar1 & 0x10) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar6 = *(ulonglong *)(uVar6 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x38);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x38,uVar6);
      }
      else if (puVar3 != puVar2) {
        puVar7 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar7 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar7,puVar2[2]);
      }
    }
    if ((uVar1 & 0x20) != 0) {
      puVar8 = &DAT_146ba3750;
      if (*(undefined **)(param_2 + 0x40) != (undefined *)0x0) {
        puVar8 = *(undefined **)(param_2 + 0x40);
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (lVar5 == 0) {
        uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          uVar6 = *(ulonglong *)(uVar6 + 0x18);
        }
        lVar5 = FUN_143a6d450(uVar6);
        *(longlong *)(param_1 + 0x40) = lVar5;
      }
      FUN_143a7a580(lVar5,puVar8);
    }
    if ((uVar1 & 0x40) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
    if ((char)uVar1 < '\0') {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  return;
}



// FUNCTION 143a7a520 FUN_143a7a520 body=95 status=ok
// SIG undefined FUN_143a7a520(void)

void FUN_143a7a520(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::FieldDescriptorProto::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7a290(param_1,lVar1);
  return;
}



// FUNCTION 143a7a580 FUN_143a7a580 body=262 status=ok
// SIG undefined FUN_143a7a580(void)

void FUN_143a7a580(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  FUN_143a54990(param_1 + 8,param_2 + 8);
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    uVar3 = *(ulonglong *)(param_2 + 0x20);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar3 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x40);
    uVar6 = FUN_1439f1d40(param_1 + 0x30,iVar1);
    FUN_143a6f550(param_1 + 0x30,uVar6,lVar4 + 8,iVar1,
                  **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1;
    if (**(int **)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      **(int **)(param_1 + 0x40) = *(int *)(param_1 + 0x38);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x28);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
    if ((uVar2 & 2) != 0) {
      *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
    }
    if ((uVar2 & 4) != 0) {
      *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x4d);
    }
    if ((uVar2 & 8) != 0) {
      *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_2 + 0x4e);
    }
    if ((uVar2 & 0x10) != 0) {
      *(undefined1 *)(param_1 + 0x4f) = *(undefined1 *)(param_2 + 0x4f);
    }
    if ((uVar2 & 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar2;
  }
  return;
}



// FUNCTION 143a7a690 FUN_143a7a690 body=95 status=ok
// SIG undefined FUN_143a7a690(void)

void FUN_143a7a690(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::FieldOptions::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7a580(param_1,lVar1);
  return;
}



// FUNCTION 143a7a6f0 FUN_143a7a6f0 body=891 status=ok
// SIG undefined FUN_143a7a6f0(void)

void FUN_143a7a6f0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar8 & 0xfffffffffffffffe);
  }
  FUN_1439f2030(param_1 + 0x18,param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x40);
    uVar6 = FUN_1439f1d40(param_1 + 0x30,iVar1);
    FUN_143a6eb90(param_1 + 0x30,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1;
    if (**(int **)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      **(int **)(param_1 + 0x40) = *(int *)(param_1 + 0x38);
    }
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x58);
    uVar6 = FUN_1439f1d40(param_1 + 0x48,iVar1);
    FUN_143a6ee00(param_1 + 0x48,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x58) - *(int *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
    if (**(int **)(param_1 + 0x58) < *(int *)(param_1 + 0x50)) {
      **(int **)(param_1 + 0x58) = *(int *)(param_1 + 0x50);
    }
  }
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar6 = FUN_1439f1d40(param_1 + 0x60,iVar1);
    FUN_143a6f480(param_1 + 0x60,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x70) - *(int *)(param_1 + 0x68));
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar1;
    if (**(int **)(param_1 + 0x70) < *(int *)(param_1 + 0x68)) {
      **(int **)(param_1 + 0x70) = *(int *)(param_1 + 0x68);
    }
  }
  iVar1 = *(int *)(param_2 + 0x80);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x88);
    uVar6 = FUN_1439f1d40(param_1 + 0x78,iVar1);
    FUN_143a6f070(param_1 + 0x78,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x88) - *(int *)(param_1 + 0x80));
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + iVar1;
    if (**(int **)(param_1 + 0x88) < *(int *)(param_1 + 0x80)) {
      **(int **)(param_1 + 0x88) = *(int *)(param_1 + 0x80);
    }
  }
  FUN_1439f1f20(param_1 + 0x90,param_2 + 0x90);
  FUN_1439f1f20(param_1 + 0xa0,param_2 + 0xa0);
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 0x1f) != 0) {
    if ((uVar2 & 1) != 0) {
      puVar3 = *(undefined8 **)(param_2 + 0xb0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar4 = *(undefined8 **)(param_1 + 0xb0);
      if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0xb0,uVar8);
      }
      else if (puVar4 != puVar3) {
        puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (undefined8 *)*puVar3;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar4,puVar9,puVar3[2]);
      }
    }
    if ((uVar2 & 2) != 0) {
      puVar3 = *(undefined8 **)(param_2 + 0xb8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar4 = *(undefined8 **)(param_1 + 0xb8);
      if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0xb8,uVar8);
      }
      else if (puVar4 != puVar3) {
        puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (undefined8 *)*puVar3;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar4,puVar9,puVar3[2]);
      }
    }
    if ((uVar2 & 4) != 0) {
      puVar3 = *(undefined8 **)(param_2 + 0xc0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar4 = *(undefined8 **)(param_1 + 0xc0);
      if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0xc0,uVar8);
      }
      else if (puVar4 != puVar3) {
        puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (undefined8 *)*puVar3;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar4,puVar9,puVar3[2]);
      }
    }
    if ((uVar2 & 8) != 0) {
      puVar10 = &DAT_146ba38c0;
      if (*(undefined **)(param_2 + 200) != (undefined *)0x0) {
        puVar10 = *(undefined **)(param_2 + 200);
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      lVar7 = *(longlong *)(param_1 + 200);
      if (lVar7 == 0) {
        uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          uVar8 = *(ulonglong *)(uVar8 + 0x18);
        }
        lVar7 = FUN_143a6d5f0(uVar8);
        *(longlong *)(param_1 + 200) = lVar7;
      }
      FUN_143a7abd0(lVar7,puVar10);
    }
    if ((uVar2 & 0x10) != 0) {
      puVar10 = &DAT_146ba3ba0;
      if (*(undefined **)(param_2 + 0xd0) != (undefined *)0x0) {
        puVar10 = *(undefined **)(param_2 + 0xd0);
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      lVar7 = *(longlong *)(param_1 + 0xd0);
      if (lVar7 == 0) {
        uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          uVar8 = *(ulonglong *)(uVar8 + 0x18);
        }
        lVar7 = FUN_143a6de00(uVar8);
        *(longlong *)(param_1 + 0xd0) = lVar7;
      }
      FUN_143a7bbd0(lVar7,puVar10);
    }
  }
  return;
}



// FUNCTION 143a7aa70 FUN_143a7aa70 body=95 status=ok
// SIG undefined FUN_143a7aa70(void)

void FUN_143a7aa70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::FileDescriptorProto::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7a6f0(param_1,lVar1);
  return;
}



// FUNCTION 143a7aad0 FUN_143a7aad0 body=149 status=ok
// SIG undefined FUN_143a7aad0(void)

void FUN_143a7aad0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x28);
    uVar5 = FUN_1439f1d40(param_1 + 0x18,iVar1);
    FUN_143a6f140(param_1 + 0x18,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
    if (**(int **)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
      **(int **)(param_1 + 0x28) = *(int *)(param_1 + 0x20);
    }
  }
  return;
}



// FUNCTION 143a7ab70 FUN_143a7ab70 body=95 status=ok
// SIG undefined FUN_143a7ab70(void)

void FUN_143a7ab70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::FileDescriptorSet::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7aad0(param_1,lVar1);
  return;
}



// FUNCTION 143a7abd0 FUN_143a7abd0 body=1222 status=ok
// SIG undefined FUN_143a7abd0(void)

void FUN_143a7abd0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  FUN_143a54990(param_1 + 8,param_2 + 8);
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    uVar8 = *(ulonglong *)(param_2 + 0x20);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar6 = FUN_141515d60(param_1 + 0x20);
    }
    else {
      uVar6 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar6,uVar8 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x40);
    uVar7 = FUN_1439f1d40(param_1 + 0x30,iVar1);
    FUN_143a6f550(param_1 + 0x30,uVar7,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1;
    if (**(int **)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      **(int **)(param_1 + 0x40) = *(int *)(param_1 + 0x38);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x28);
  if ((char)uVar2 != '\0') {
    if ((uVar2 & 1) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x48);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
      uVar8 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x48);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x48,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((uVar2 & 2) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x50);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
      uVar8 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x50);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x50,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((uVar2 & 4) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x58);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
      uVar8 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x58);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x58,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((uVar2 & 8) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x60);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
      uVar8 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x60);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x60,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((uVar2 & 0x10) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x68);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
      uVar8 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x68);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x68,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((uVar2 & 0x20) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x70);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
      uVar8 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x70);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x70,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((uVar2 & 0x40) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x78);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x40;
      uVar8 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x78);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x78,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((char)uVar2 < '\0') {
      puVar4 = *(undefined8 **)(param_2 + 0x80);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      uVar8 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x80);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x80,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
  }
  if ((uVar2 & 0xff00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x88);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x100;
      uVar8 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x88);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x88,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((uVar2 >> 9 & 1) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x90);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x200;
      uVar8 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x90);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x90,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((uVar2 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
    }
    if ((uVar2 >> 0xb & 1) != 0) {
      *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
    }
    if ((uVar2 >> 0xc & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)(param_2 + 0x9a);
    }
    if ((uVar2 >> 0xd & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9b) = *(undefined1 *)(param_2 + 0x9b);
    }
    if ((uVar2 >> 0xe & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_2 + 0x9c);
    }
    if ((uVar2 >> 0xf & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)(param_2 + 0x9d);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar2;
  }
  if ((uVar2 & 0xf0000) != 0) {
    if ((uVar2 >> 0x10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9e) = *(undefined1 *)(param_2 + 0x9e);
    }
    if ((uVar2 >> 0x11 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9f) = *(undefined1 *)(param_2 + 0x9f);
    }
    if ((uVar2 >> 0x12 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
    }
    if ((uVar2 >> 0x13 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar2;
  }
  return;
}



// FUNCTION 143a7b0a0 FUN_143a7b0a0 body=95 status=ok
// SIG undefined FUN_143a7b0a0(void)

void FUN_143a7b0a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::FileOptions::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7abd0(param_1,lVar1);
  return;
}



// FUNCTION 143a7b100 FUN_143a7b100 body=149 status=ok
// SIG undefined FUN_143a7b100(void)

void FUN_143a7b100(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x28);
    uVar5 = FUN_1439f1d40(param_1 + 0x18,iVar1);
    FUN_143a6f210(param_1 + 0x18,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
    if (**(int **)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
      **(int **)(param_1 + 0x28) = *(int *)(param_1 + 0x20);
    }
  }
  return;
}



// FUNCTION 143a7b1a0 FUN_143a7b1a0 body=95 status=ok
// SIG undefined FUN_143a7b1a0(void)

void FUN_143a7b1a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::GeneratedCodeInfo::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7b100(param_1,lVar1);
  return;
}



// FUNCTION 143a7b200 FUN_143a7b200 body=218 status=ok
// SIG undefined FUN_143a7b200(void)

void FUN_143a7b200(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar5 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar5 & 0xfffffffffffffffe);
  }
  FUN_1439f1f20(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar5 = *(ulonglong *)(uVar5 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x30);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x30,uVar5);
      }
      else if (puVar3 != puVar2) {
        puVar6 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar6 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar6,puVar2[2]);
      }
    }
    if ((uVar1 & 2) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 & 4) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  return;
}



// FUNCTION 143a7b2e0 FUN_143a7b2e0 body=95 status=ok
// SIG undefined FUN_143a7b2e0(void)

void FUN_143a7b2e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::GeneratedCodeInfo_Annotation::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7b200(param_1,lVar1);
  return;
}



// FUNCTION 143a7b340 FUN_143a7b340 body=240 status=ok
// SIG undefined FUN_143a7b340(void)

void FUN_143a7b340(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  FUN_143a54990(param_1 + 8,param_2 + 8);
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    uVar3 = *(ulonglong *)(param_2 + 0x20);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar3 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x40);
    uVar6 = FUN_1439f1d40(param_1 + 0x30,iVar1);
    FUN_143a6f550(param_1 + 0x30,uVar6,lVar4 + 8,iVar1,
                  **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1;
    if (**(int **)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      **(int **)(param_1 + 0x40) = *(int *)(param_1 + 0x38);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x28);
  if ((uVar2 & 0xf) != 0) {
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    }
    if ((uVar2 & 2) != 0) {
      *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
    }
    if ((uVar2 & 4) != 0) {
      *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
    }
    if ((uVar2 & 8) != 0) {
      *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_2 + 0x4b);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar2;
  }
  return;
}



// FUNCTION 143a7b430 FUN_143a7b430 body=95 status=ok
// SIG undefined FUN_143a7b430(void)

void FUN_143a7b430(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::MessageOptions::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7b340(param_1,lVar1);
  return;
}



// FUNCTION 143a7b490 FUN_143a7b490 body=452 status=ok
// SIG undefined FUN_143a7b490(void)

void FUN_143a7b490(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar6 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar6 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar6 = *(ulonglong *)(uVar6 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x18);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x18,uVar6);
      }
      else if (puVar3 != puVar2) {
        puVar7 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar7 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar7,puVar2[2]);
      }
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar6 = *(ulonglong *)(uVar6 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x20);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x20,uVar6);
      }
      else if (puVar3 != puVar2) {
        puVar7 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar7 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar7,puVar2[2]);
      }
    }
    if ((uVar1 & 4) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar6 = *(ulonglong *)(uVar6 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x28);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x28,uVar6);
      }
      else if (puVar3 != puVar2) {
        puVar7 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar7 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar7,puVar2[2]);
      }
    }
    if ((uVar1 & 8) != 0) {
      puVar8 = &DAT_146ba3a70;
      if (*(undefined **)(param_2 + 0x30) != (undefined *)0x0) {
        puVar8 = *(undefined **)(param_2 + 0x30);
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      lVar5 = *(longlong *)(param_1 + 0x30);
      if (lVar5 == 0) {
        uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          uVar6 = *(ulonglong *)(uVar6 + 0x18);
        }
        lVar5 = FUN_143a6d9e0(uVar6);
        *(longlong *)(param_1 + 0x30) = lVar5;
      }
      FUN_143a7b6c0(lVar5,puVar8);
    }
    if ((uVar1 & 0x10) != 0) {
      *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    }
    if ((uVar1 & 0x20) != 0) {
      *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  return;
}



// FUNCTION 143a7b660 FUN_143a7b660 body=95 status=ok
// SIG undefined FUN_143a7b660(void)

void FUN_143a7b660(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::MethodDescriptorProto::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7b490(param_1,lVar1);
  return;
}



// FUNCTION 143a7b6c0 FUN_143a7b6c0 body=215 status=ok
// SIG undefined FUN_143a7b6c0(void)

void FUN_143a7b6c0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  FUN_143a54990(param_1 + 8,param_2 + 8);
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    uVar3 = *(ulonglong *)(param_2 + 0x20);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar3 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x40);
    uVar6 = FUN_1439f1d40(param_1 + 0x30,iVar1);
    FUN_143a6f550(param_1 + 0x30,uVar6,lVar4 + 8,iVar1,
                  **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1;
    if (**(int **)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
      **(int **)(param_1 + 0x40) = *(int *)(param_1 + 0x38);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x28);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    }
    if ((uVar2 & 2) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar2;
  }
  return;
}



// FUNCTION 143a7b7a0 FUN_143a7b7a0 body=95 status=ok
// SIG undefined FUN_143a7b7a0(void)

void FUN_143a7b7a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::MethodOptions::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7b6c0(param_1,lVar1);
  return;
}



// FUNCTION 143a7b800 FUN_143a7b800 body=255 status=ok
// SIG undefined FUN_143a7b800(void)

void FUN_143a7b800(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar6 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar6 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar6 = *(ulonglong *)(uVar6 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x18);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x18,uVar6);
      }
      else if (puVar3 != puVar2) {
        puVar7 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar7 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar7,puVar2[2]);
      }
    }
    if ((uVar1 & 2) != 0) {
      puVar8 = &DAT_146ba3ac0;
      if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
        puVar8 = *(undefined **)(param_2 + 0x20);
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (lVar5 == 0) {
        uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          uVar6 = *(ulonglong *)(uVar6 + 0x18);
        }
        lVar5 = FUN_143a6db80(uVar6);
        *(longlong *)(param_1 + 0x20) = lVar5;
      }
      FUN_143a7a180(lVar5,puVar8);
    }
  }
  return;
}



// FUNCTION 143a7b900 FUN_143a7b900 body=95 status=ok
// SIG undefined FUN_143a7b900(void)

void FUN_143a7b900(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::OneofDescriptorProto::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7b800(param_1,lVar1);
  return;
}



// FUNCTION 143a7b960 FUN_143a7b960 body=95 status=ok
// SIG undefined FUN_143a7b960(void)

void FUN_143a7b960(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::OneofOptions::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7a180(param_1,lVar1);
  return;
}



// FUNCTION 143a7b9c0 FUN_143a7b9c0 body=334 status=ok
// SIG undefined FUN_143a7b9c0(void)

void FUN_143a7b9c0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar8 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x28);
    uVar6 = FUN_1439f1d40(param_1 + 0x18,iVar1);
    FUN_143a6f2e0(param_1 + 0x18,uVar6,lVar7 + 8,iVar1,
                  **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
    if (**(int **)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
      **(int **)(param_1 + 0x28) = *(int *)(param_1 + 0x20);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      puVar3 = *(undefined8 **)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar4 = *(undefined8 **)(param_1 + 0x30);
      if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x30,uVar8);
      }
      else if (puVar4 != puVar3) {
        puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (undefined8 *)*puVar3;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar4,puVar9,puVar3[2]);
      }
    }
    if ((uVar2 & 2) != 0) {
      puVar10 = &DAT_146ba3b50;
      if (*(undefined **)(param_2 + 0x38) != (undefined *)0x0) {
        puVar10 = *(undefined **)(param_2 + 0x38);
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      lVar7 = *(longlong *)(param_1 + 0x38);
      if (lVar7 == 0) {
        uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          uVar8 = *(ulonglong *)(uVar8 + 0x18);
        }
        lVar7 = FUN_143a6dd30(uVar8);
        *(longlong *)(param_1 + 0x38) = lVar7;
      }
      FUN_143a7a050(lVar7,puVar10);
    }
  }
  return;
}



// FUNCTION 143a7bb10 FUN_143a7bb10 body=95 status=ok
// SIG undefined FUN_143a7bb10(void)

void FUN_143a7bb10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::ServiceDescriptorProto::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7b9c0(param_1,lVar1);
  return;
}



// FUNCTION 143a7bb70 FUN_143a7bb70 body=95 status=ok
// SIG undefined FUN_143a7bb70(void)

void FUN_143a7bb70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::ServiceOptions::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7a050(param_1,lVar1);
  return;
}



// FUNCTION 143a7bbd0 FUN_143a7bbd0 body=149 status=ok
// SIG undefined FUN_143a7bbd0(void)

void FUN_143a7bbd0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x28);
    uVar5 = FUN_1439f1d40(param_1 + 0x18,iVar1);
    FUN_143a21b10(param_1 + 0x18,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
    if (**(int **)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
      **(int **)(param_1 + 0x28) = *(int *)(param_1 + 0x20);
    }
  }
  return;
}



// FUNCTION 143a7bc70 FUN_143a7bc70 body=95 status=ok
// SIG undefined FUN_143a7bc70(void)

void FUN_143a7bc70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::SourceCodeInfo::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7bbd0(param_1,lVar1);
  return;
}



// FUNCTION 143a7bcd0 FUN_143a7bcd0 body=308 status=ok
// SIG undefined FUN_143a7bcd0(void)

void FUN_143a7bcd0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar5 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar5 & 0xfffffffffffffffe);
  }
  FUN_1439f1f20(param_1 + 0x18,param_2 + 0x18);
  FUN_1439f1f20(param_1 + 0x30,param_2 + 0x30);
  FUN_1439f2030(param_1 + 0x48,param_2 + 0x48);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x60);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar5 = *(ulonglong *)(uVar5 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x60,uVar5);
      }
      else if (puVar3 != puVar2) {
        puVar6 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar6 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar6,puVar2[2]);
      }
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x68);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar5 = *(ulonglong *)(uVar5 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x68);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x68,uVar5);
      }
      else if (puVar3 != puVar2) {
        puVar6 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar6 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar6,puVar2[2]);
      }
    }
  }
  return;
}



// FUNCTION 143a7be10 FUN_143a7be10 body=95 status=ok
// SIG undefined FUN_143a7be10(void)

void FUN_143a7be10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::SourceCodeInfo_Location::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7bcd0(param_1,lVar1);
  return;
}



// FUNCTION 143a7be70 FUN_143a7be70 body=454 status=ok
// SIG undefined FUN_143a7be70(void)

void FUN_143a7be70(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar6 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar6,uVar8 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x28);
    uVar7 = FUN_1439f1d40(param_1 + 0x18,iVar1);
    FUN_143a6f620(param_1 + 0x18,uVar7,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
    if (**(int **)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
      **(int **)(param_1 + 0x28) = *(int *)(param_1 + 0x20);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x30);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x30,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((uVar2 & 2) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x38);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x38,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((uVar2 & 4) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar8 = *(ulonglong *)(uVar8 + 0x18);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x40);
      if (puVar5 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x40,uVar8);
      }
      else if (puVar5 != puVar4) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar5,puVar9,puVar4[2]);
      }
    }
    if ((uVar2 & 8) != 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    }
    if ((uVar2 & 0x10) != 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
    if ((uVar2 & 0x20) != 0) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  return;
}



// FUNCTION 143a7c040 FUN_143a7c040 body=95 status=ok
// SIG undefined FUN_143a7c040(void)

void FUN_143a7c040(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::UninterpretedOption::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7be70(param_1,lVar1);
  return;
}



// FUNCTION 143a7c0a0 FUN_143a7c0a0 body=192 status=ok
// SIG undefined FUN_143a7c0a0(void)

void FUN_143a7c0a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar5 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60(param_1 + 8);
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar5 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar5 = *(ulonglong *)(uVar5 + 0x18);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x18);
      if (puVar3 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x18,uVar5);
      }
      else if (puVar3 != puVar2) {
        puVar6 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar6 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar6,puVar2[2]);
      }
    }
    if ((uVar1 & 2) != 0) {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  return;
}



// FUNCTION 143a7c160 FUN_143a7c160 body=95 status=ok
// SIG undefined FUN_143a7c160(void)

void FUN_143a7c160(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&google::protobuf::Message::RTTI_Type_Descriptor,
                     &google::protobuf::UninterpretedOption_NamePart::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_143a7c0a0(param_1,lVar1);
  return;
}



// FUNCTION 143a7c1c0 FUN_143a7c1c0 body=1274 status=ok
// SIG undefined FUN_143a7c1c0(void)

ulonglong FUN_143a7c1c0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  char cVar11;
  undefined4 local_res10;
  int local_res14;
  undefined4 local_res18;
  int local_res1c;
  undefined4 local_res20;
  int local_res24;
  undefined4 local_38;
  int local_34;
  
LAB_143a7c1e5:
  do {
    pbVar1 = (byte *)*param_2;
    uVar8 = 0;
    if (((byte *)param_2[1] <= pbVar1) || (uVar8 = (ulonglong)*pbVar1, (char)*pbVar1 < '\x01')) {
      uVar2 = FUN_1439f8c60(param_2,uVar8);
      uVar8 = (ulonglong)uVar2;
      uVar5 = (ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_143a7c217;
      goto LAB_143a7c663;
    }
    *param_2 = pbVar1 + 1;
LAB_143a7c217:
    uVar2 = (int)(uVar8 >> 3) - 1;
    uVar5 = (ulonglong)uVar2;
    if (9 < uVar2) goto LAB_143a7c663;
    uVar5 = (ulonglong)(int)uVar2;
    cVar11 = (char)uVar8;
    switch(uVar2) {
    case 0:
      if (cVar11 != '\n') break;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      else {
        uVar8 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
      }
      puVar6 = *(undefined **)(param_1 + 0xd8);
      if (puVar6 == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0xd8,uVar8,&DAT_146ba2f50);
        puVar6 = *(undefined **)(param_1 + 0xd8);
      }
      uVar8 = thunk_FUN_1439fa490(param_2,puVar6);
      goto LAB_143a7c68c;
    case 1:
      if (cVar11 == '\x12') {
        lVar9 = param_1 + 0x18;
LAB_143a7c2a0:
        uVar7 = FUN_143a2a640(lVar9);
        uVar8 = FUN_143a6f960(param_2,uVar7);
        goto LAB_143a7c68c;
      }
      break;
    case 2:
      if (cVar11 == '\x1a') {
        uVar7 = FUN_143a2a560(param_1 + 0x30);
        uVar8 = FUN_143a6f840(param_2,uVar7);
        goto LAB_143a7c68c;
      }
      break;
    case 3:
      if (cVar11 == '\"') {
        uVar7 = FUN_143a2a5d0(param_1 + 0x48);
        uVar8 = FUN_143a6f8d0(param_2,uVar7);
        goto LAB_143a7c68c;
      }
      break;
    case 4:
      if (cVar11 == '*') {
        piVar10 = *(int **)(param_1 + 0x70);
        if (piVar10 == (int *)0x0) {
LAB_143a7c32a:
          FUN_1439f23d0(param_1 + 0x60,*(int *)(param_1 + 0x6c) + 1);
          piVar10 = *(int **)(param_1 + 0x70);
          iVar3 = *piVar10;
LAB_143a7c33e:
          *piVar10 = iVar3 + 1;
          uVar7 = FUN_143a6cd60(*(undefined8 *)(param_1 + 0x60));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x70) + 8 + (longlong)*(int *)(param_1 + 0x68) * 8) = uVar7;
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x68);
          iVar3 = *piVar10;
          if (iVar3 <= iVar4) {
            if (iVar3 == *(int *)(param_1 + 0x6c)) goto LAB_143a7c32a;
            goto LAB_143a7c33e;
          }
          uVar7 = *(undefined8 *)(piVar10 + (longlong)iVar4 * 2 + 2);
          *(int *)(param_1 + 0x68) = iVar4 + 1;
        }
        pbVar1 = (byte *)*param_2;
        if ((pbVar1 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
          *param_2 = pbVar1 + 1;
        }
        else {
          uVar8 = FUN_1439f98b0(param_2);
          uVar5 = uVar8 & 0xffffffff;
          if ((int)uVar8 < 0) goto LAB_143a7c694;
        }
        uVar8 = FUN_1439f8500(param_2,&local_res10,uVar5);
        if (-1 < local_res14) {
          uVar8 = FUN_143a7c6f0(uVar7,param_2);
          if ((char)uVar8 != '\0') {
            uVar8 = FUN_1439f84b0(param_2,local_res10);
            goto LAB_143a7c68c;
          }
        }
        goto LAB_143a7c694;
      }
      break;
    case 5:
      if (cVar11 == '2') {
        lVar9 = param_1 + 0x78;
        goto LAB_143a7c2a0;
      }
      break;
    case 6:
      if (cVar11 == ':') {
        uVar7 = FUN_143a82560(param_1);
        pbVar1 = (byte *)*param_2;
        if ((pbVar1 < (byte *)param_2[1]) && (uVar8 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
          *param_2 = pbVar1 + 1;
        }
        else {
          uVar8 = FUN_1439f98b0(param_2);
          if ((int)uVar8 < 0) goto LAB_143a7c694;
        }
        uVar8 = FUN_1439f8500(param_2,&local_res18,uVar8 & 0xffffffff);
        if (-1 < local_res1c) {
          uVar8 = FUN_143a7edb0(uVar7,param_2);
          if ((char)uVar8 != '\0') {
            uVar8 = FUN_1439f84b0(param_2,local_res18);
            goto LAB_143a7c68c;
          }
        }
        goto LAB_143a7c694;
      }
      break;
    case 7:
      if (cVar11 == 'B') {
        piVar10 = *(int **)(param_1 + 0xa0);
        if (piVar10 == (int *)0x0) {
LAB_143a7c493:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x90),*(int *)(param_1 + 0x9c) + 1);
          piVar10 = *(int **)(param_1 + 0xa0);
          iVar3 = *piVar10;
LAB_143a7c4a6:
          *piVar10 = iVar3 + 1;
          uVar7 = FUN_143a6dab0(*(undefined8 *)(param_1 + 0x90));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0xa0) + 8 + (longlong)*(int *)(param_1 + 0x98) * 8) = uVar7;
          *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x98);
          iVar3 = *piVar10;
          if (iVar3 <= iVar4) {
            if (iVar3 == *(int *)(param_1 + 0x9c)) goto LAB_143a7c493;
            goto LAB_143a7c4a6;
          }
          uVar7 = *(undefined8 *)(piVar10 + (longlong)iVar4 * 2 + 2);
          *(int *)(param_1 + 0x98) = iVar4 + 1;
        }
        pbVar1 = (byte *)*param_2;
        if ((pbVar1 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
          *param_2 = pbVar1 + 1;
        }
        else {
          uVar8 = FUN_1439f98b0(param_2);
          uVar5 = uVar8 & 0xffffffff;
          if ((int)uVar8 < 0) goto LAB_143a7c694;
        }
        uVar8 = FUN_1439f8500(param_2,&local_res20,uVar5);
        if (-1 < local_res24) {
          uVar8 = FUN_143a7f560(uVar7,param_2);
          if ((char)uVar8 != '\0') {
            uVar8 = FUN_1439f84b0(param_2,local_res20);
            goto LAB_143a7c68c;
          }
        }
        goto LAB_143a7c694;
      }
      break;
    case 8:
      if (cVar11 == 'J') {
        piVar10 = *(int **)(param_1 + 0xb8);
        if (piVar10 == (int *)0x0) {
LAB_143a7c568:
          FUN_1439f23d0((undefined8 *)(param_1 + 0xa8),*(int *)(param_1 + 0xb4) + 1);
          piVar10 = *(int **)(param_1 + 0xb8);
          iVar3 = *piVar10;
LAB_143a7c57b:
          *piVar10 = iVar3 + 1;
          uVar7 = FUN_143a6ce20(*(undefined8 *)(param_1 + 0xa8));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0xb8) + 8 + (longlong)*(int *)(param_1 + 0xb0) * 8) = uVar7;
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        }
        else {
          iVar4 = *(int *)(param_1 + 0xb0);
          iVar3 = *piVar10;
          if (iVar3 <= iVar4) {
            if (iVar3 == *(int *)(param_1 + 0xb4)) goto LAB_143a7c568;
            goto LAB_143a7c57b;
          }
          uVar7 = *(undefined8 *)(piVar10 + (longlong)iVar4 * 2 + 2);
          *(int *)(param_1 + 0xb0) = iVar4 + 1;
        }
        pbVar1 = (byte *)*param_2;
        if ((pbVar1 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
          *param_2 = pbVar1 + 1;
        }
        else {
          uVar8 = FUN_1439f98b0(param_2);
          uVar5 = uVar8 & 0xffffffff;
          if ((int)uVar8 < 0) goto LAB_143a7c694;
        }
        uVar8 = FUN_1439f8500(param_2,&local_38,uVar5);
        if (-1 < local_34) {
          uVar8 = FUN_143a7c8f0(uVar7,param_2);
          if ((char)uVar8 != '\0') {
            uVar8 = FUN_1439f84b0(param_2,local_38);
            goto LAB_143a7c68c;
          }
        }
        goto LAB_143a7c694;
      }
      break;
    case 9:
      if (cVar11 == 'R') {
        uVar7 = FUN_1439f1a80(param_1 + 0xc0);
        uVar8 = thunk_FUN_1439fa490(param_2,uVar7);
        if ((char)uVar8 == '\0') goto LAB_143a7c694;
        iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0xc0);
        FUN_1439f1d30(param_1 + 0xc0,iVar4 + -1);
        iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0xc0);
        FUN_1439f1d30(param_1 + 0xc0,iVar4 + -1);
        goto LAB_143a7c1e5;
      }
    }
LAB_143a7c663:
    if ((int)uVar8 == 0) {
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    uVar8 = FUN_143a1e1e0(param_2,uVar8,uVar5);
LAB_143a7c68c:
    if ((char)uVar8 == '\0') {
LAB_143a7c694:
      return uVar8 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7c6f0 FUN_143a7c6f0 body=510 status=ok
// SIG undefined FUN_143a7c6f0(void)

ulonglong FUN_143a7c6f0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  char cVar7;
  undefined4 local_res10;
  int local_res14;
  
LAB_143a7c705:
  do {
    pbVar2 = (byte *)*param_2;
    uVar4 = 0;
    if ((pbVar2 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
      pbVar2 = pbVar2 + 1;
      *param_2 = pbVar2;
LAB_143a7c737:
      iVar1 = (int)(uVar4 >> 3);
      cVar7 = (char)uVar4;
      if (iVar1 == 1) {
        if (cVar7 != '\b') goto LAB_143a7c899;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        uVar6 = 0;
        pbVar2 = (byte *)*param_2;
        if ((pbVar2 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar2, uVar6 < 0x80)) {
          *param_2 = pbVar2 + 1;
          *(uint *)(param_1 + 0x20) = uVar6;
        }
        else {
          uVar4 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar4 < 0) goto LAB_143a7c8ca;
          *(int *)(param_1 + 0x20) = (int)uVar4;
        }
        goto LAB_143a7c705;
      }
      if (iVar1 == 2) {
        if (cVar7 != '\x10') goto LAB_143a7c899;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        uVar6 = 0;
        pbVar2 = (byte *)*param_2;
        if ((pbVar2 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar2, uVar6 < 0x80)) {
          *param_2 = pbVar2 + 1;
          *(uint *)(param_1 + 0x24) = uVar6;
        }
        else {
          uVar4 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar4 < 0) goto LAB_143a7c8ca;
          *(int *)(param_1 + 0x24) = (int)uVar4;
        }
        goto LAB_143a7c705;
      }
      if ((iVar1 != 3) || (cVar7 != '\x1a')) goto LAB_143a7c899;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (lVar3 == 0) {
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar4 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        lVar3 = FUN_143a6d2a0(uVar4);
        *(longlong *)(param_1 + 0x18) = lVar3;
      }
      pbVar2 = (byte *)*param_2;
      if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
        *param_2 = pbVar2 + 1;
      }
      else {
        uVar4 = FUN_1439f98b0(param_2);
        uVar5 = uVar4 & 0xffffffff;
        if ((int)uVar4 < 0) goto LAB_143a7c8ca;
      }
      uVar4 = FUN_1439f8500(param_2,&local_res10,uVar5);
      if (local_res14 < 0) goto LAB_143a7c8ca;
      uVar4 = FUN_143a7d3b0(lVar3,param_2);
      if ((char)uVar4 == '\0') goto LAB_143a7c8ca;
      uVar4 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
      uVar6 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar6;
      pbVar2 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x7f) goto LAB_143a7c737;
LAB_143a7c899:
      if ((int)uVar4 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = FUN_141515d60();
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar5);
    }
    if ((char)uVar4 == '\0') {
LAB_143a7c8ca:
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7c8f0 FUN_143a7c8f0 body=324 status=ok
// SIG undefined FUN_143a7c8f0(void)

ulonglong FUN_143a7c8f0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  
LAB_143a7c905:
  do {
    pbVar2 = (byte *)*param_2;
    uVar3 = 0;
    if ((pbVar2 < (byte *)param_2[1]) && (uVar3 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
      pbVar2 = pbVar2 + 1;
      *param_2 = pbVar2;
LAB_143a7c937:
      iVar1 = (int)(uVar3 >> 3);
      if (iVar1 == 1) {
        if ((char)uVar3 == '\b') {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          uVar6 = 0;
          pbVar2 = (byte *)*param_2;
          if ((pbVar2 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar2, uVar6 < 0x80)) {
            *param_2 = pbVar2 + 1;
            *(uint *)(param_1 + 0x18) = uVar6;
          }
          else {
            uVar3 = FUN_1439f8e20(param_2,uVar6);
            if ((longlong)uVar3 < 0) goto LAB_143a7ca10;
            *(int *)(param_1 + 0x18) = (int)uVar3;
          }
          goto LAB_143a7c905;
        }
      }
      else if ((iVar1 == 2) && ((char)uVar3 == '\x10')) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        bVar5 = 0;
        pbVar2 = (byte *)*param_2;
        if (pbVar2 < (byte *)param_2[1]) {
          bVar5 = *pbVar2;
          if (bVar5 < 0x80) {
            *param_2 = pbVar2 + 1;
            *(uint *)(param_1 + 0x1c) = (uint)bVar5;
            goto LAB_143a7c905;
          }
        }
        uVar3 = FUN_1439f8e20(param_2,bVar5);
        if ((longlong)uVar3 < 0) goto LAB_143a7ca10;
        *(int *)(param_1 + 0x1c) = (int)uVar3;
        goto LAB_143a7c905;
      }
    }
    else {
      uVar6 = FUN_1439f8c60(param_2,uVar3);
      uVar3 = (ulonglong)uVar6;
      pbVar2 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x7f) goto LAB_143a7c937;
    }
    if ((int)uVar3 == 0) {
      return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    uVar3 = FUN_143a1e1e0(param_2,uVar3,uVar4);
    if ((char)uVar3 == '\0') {
LAB_143a7ca10:
      return uVar3 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7ca40 FUN_143a7ca40 body=957 status=ok
// SIG undefined FUN_143a7ca40(void)

ulonglong FUN_143a7ca40(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int *piVar10;
  char cVar11;
  undefined4 local_res10;
  int local_res14;
  undefined4 local_res18;
  int local_res1c;
  undefined4 local_res20;
  int local_res24;
  
LAB_143a7ca60:
  do {
    pbVar4 = (byte *)*param_2;
    uVar6 = 0;
    if (((byte *)param_2[1] <= pbVar4) || (uVar6 = (ulonglong)*pbVar4, (char)*pbVar4 < '\x01')) {
      uVar1 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar1;
      pbVar4 = (byte *)(ulonglong)(uVar1 - 1);
      if (uVar1 - 1 < 0x7f) goto LAB_143a7ca92;
      goto LAB_143a7cdaa;
    }
    pbVar4 = pbVar4 + 1;
    *param_2 = pbVar4;
LAB_143a7ca92:
    iVar2 = (int)(uVar6 >> 3);
    cVar11 = (char)uVar6;
    if (iVar2 == 1) {
      if (cVar11 != '\n') goto LAB_143a7cdaa;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      else {
        uVar6 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
      }
      puVar8 = *(undefined **)(param_1 + 0x60);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x60,uVar6,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x60);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar8);
    }
    else if (iVar2 == 2) {
      if (cVar11 != '\x12') goto LAB_143a7cdaa;
      piVar10 = *(int **)(param_1 + 0x28);
      if (piVar10 == (int *)0x0) {
LAB_143a7ccc0:
        FUN_1439f23d0(param_1 + 0x18,*(int *)(param_1 + 0x24) + 1);
        piVar10 = *(int **)(param_1 + 0x28);
        iVar3 = *piVar10;
LAB_143a7ccd4:
        *piVar10 = iVar3 + 1;
        uVar5 = FUN_143a6d110(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)*(int *)(param_1 + 0x20) * 8)
             = uVar5;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x20);
        iVar3 = *piVar10;
        if (iVar3 <= iVar2) {
          if (iVar3 == *(int *)(param_1 + 0x24)) goto LAB_143a7ccc0;
          goto LAB_143a7ccd4;
        }
        uVar5 = *(undefined8 *)(piVar10 + (longlong)iVar2 * 2 + 2);
        *(int *)(param_1 + 0x20) = iVar2 + 1;
      }
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (uVar9 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
        *param_2 = pbVar4 + 1;
      }
      else {
        uVar6 = FUN_1439f98b0(param_2);
        uVar9 = uVar6 & 0xffffffff;
        if ((int)uVar6 < 0) goto LAB_143a7cddb;
      }
      uVar6 = FUN_1439f8500(param_2,&local_res20,uVar9);
      if (local_res24 < 0) goto LAB_143a7cddb;
      uVar6 = FUN_143a7d010(uVar5,param_2);
      if ((char)uVar6 == '\0') goto LAB_143a7cddb;
      uVar6 = FUN_1439f84b0(param_2,local_res20);
    }
    else {
      if (iVar2 == 3) {
        if (cVar11 == '\x1a') {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
          lVar7 = *(longlong *)(param_1 + 0x68);
          if (lVar7 == 0) {
            if ((*(byte *)(param_1 + 8) & 1) == 0) {
              uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
            }
            else {
              uVar6 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
            }
            lVar7 = FUN_143a6d040(uVar6);
            *(longlong *)(param_1 + 0x68) = lVar7;
          }
          pbVar4 = (byte *)*param_2;
          if ((pbVar4 < (byte *)param_2[1]) && (uVar9 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
            *param_2 = pbVar4 + 1;
          }
          else {
            uVar6 = FUN_1439f98b0(param_2);
            uVar9 = uVar6 & 0xffffffff;
            if ((int)uVar6 < 0) goto LAB_143a7cddb;
          }
          uVar6 = FUN_1439f8500(param_2,&local_res18,uVar9);
          if (-1 < local_res1c) {
            uVar6 = FUN_143a7ce00(lVar7,param_2);
            if ((char)uVar6 != '\0') {
              uVar6 = FUN_1439f84b0(param_2,local_res18);
              goto LAB_143a7cdd3;
            }
          }
          goto LAB_143a7cddb;
        }
      }
      else if (iVar2 == 4) {
        if (cVar11 == '\"') {
          piVar10 = *(int **)(param_1 + 0x40);
          if (piVar10 == (int *)0x0) {
LAB_143a7cb44:
            FUN_1439f23d0(param_1 + 0x30,*(int *)(param_1 + 0x3c) + 1);
            piVar10 = *(int **)(param_1 + 0x40);
            iVar3 = *piVar10;
LAB_143a7cb58:
            *piVar10 = iVar3 + 1;
            uVar5 = FUN_143a6cfb0(*(undefined8 *)(param_1 + 0x30));
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)*(int *)(param_1 + 0x38) * 8) = uVar5;
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x38);
            iVar3 = *piVar10;
            if (iVar3 <= iVar2) {
              if (iVar3 == *(int *)(param_1 + 0x3c)) goto LAB_143a7cb44;
              goto LAB_143a7cb58;
            }
            uVar5 = *(undefined8 *)(piVar10 + (longlong)iVar2 * 2 + 2);
            *(int *)(param_1 + 0x38) = iVar2 + 1;
          }
          pbVar4 = (byte *)*param_2;
          if ((pbVar4 < (byte *)param_2[1]) && (uVar9 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
            *param_2 = pbVar4 + 1;
          }
          else {
            uVar6 = FUN_1439f98b0(param_2);
            uVar9 = uVar6 & 0xffffffff;
            if ((int)uVar6 < 0) goto LAB_143a7cddb;
          }
          uVar6 = FUN_1439f8500(param_2,&local_res10,uVar9);
          if (-1 < local_res14) {
            uVar6 = FUN_143a7c8f0(uVar5,param_2);
            if ((char)uVar6 != '\0') {
              uVar6 = FUN_1439f84b0(param_2,local_res10);
              goto LAB_143a7cdd3;
            }
          }
          goto LAB_143a7cddb;
        }
      }
      else if ((iVar2 == 5) && (cVar11 == '*')) {
        uVar5 = FUN_1439f1a80(param_1 + 0x48);
        uVar6 = thunk_FUN_1439fa490(param_2,uVar5);
        if ((char)uVar6 == '\0') goto LAB_143a7cddb;
        iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x48);
        FUN_1439f1d30(param_1 + 0x48,iVar2 + -1);
        iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x48);
        FUN_1439f1d30(param_1 + 0x48,iVar2 + -1);
        goto LAB_143a7ca60;
      }
LAB_143a7cdaa:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar9 = FUN_141515d60();
      }
      else {
        uVar9 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar9);
    }
LAB_143a7cdd3:
    if ((char)uVar6 == '\0') {
LAB_143a7cddb:
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7ce00 FUN_143a7ce00 body=513 status=ok
// SIG undefined FUN_143a7ce00(void)

ulonglong FUN_143a7ce00(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  longlong local_28;
  char local_20;
  longlong local_18;
  char local_10;
  
LAB_143a7ce20:
  do {
    pbVar4 = (byte *)*param_2;
    uVar9 = 0;
    if (pbVar4 < (byte *)param_2[1]) {
      bVar2 = *pbVar4;
      uVar9 = (ulonglong)bVar2;
      pbVar7 = pbVar4 + 1;
      if ((char)bVar2 < '\x01') {
        if (pbVar7 < (byte *)param_2[1]) {
          bVar3 = *pbVar7;
          if (0x7f < (~(uint)bVar3 & (uint)bVar2)) {
            pbVar7 = pbVar4 + 2;
            *param_2 = (ulonglong)pbVar7;
            uVar9 = (ulonglong)((bVar2 - 0x80) + (uint)bVar3 * 0x80);
            goto LAB_143a7ce7d;
          }
        }
        goto LAB_143a7ce64;
      }
      *param_2 = (ulonglong)pbVar7;
LAB_143a7ce7d:
      iVar5 = (int)(uVar9 >> 3);
      cVar11 = (char)uVar9;
      if (iVar5 == 2) {
        if (cVar11 != '\x10') goto LAB_143a7cf76;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (bVar2 = *pbVar4, bVar2 < 0x80)) {
          *param_2 = (ulonglong)(pbVar4 + 1);
          *(bool *)(param_1 + 0x48) = bVar2 != 0;
        }
        else {
          uVar9 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_143a7cfdd;
          *(bool *)(param_1 + 0x48) = local_18 != 0;
        }
        goto LAB_143a7ce20;
      }
      if (iVar5 == 3) {
        if (cVar11 != '\x18') goto LAB_143a7cf76;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (bVar2 = *pbVar4, bVar2 < 0x80)) {
          *param_2 = (ulonglong)(pbVar4 + 1);
          *(bool *)(param_1 + 0x49) = bVar2 != 0;
        }
        else {
          uVar9 = FUN_1439f8f00(param_2,&local_28);
          if (local_20 == '\0') goto LAB_143a7cfdd;
          *(bool *)(param_1 + 0x49) = local_28 != 0;
        }
        goto LAB_143a7ce20;
      }
      if ((iVar5 != 999) || (cVar11 != ':')) goto LAB_143a7cf76;
      uVar8 = FUN_143a716f0(param_1 + 0x30);
      uVar9 = FUN_143a6f9f0(param_2,uVar8);
    }
    else {
LAB_143a7ce64:
      uVar6 = FUN_1439f8c60(param_2,uVar9);
      uVar9 = (ulonglong)uVar6;
      pbVar7 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x3fff) goto LAB_143a7ce7d;
LAB_143a7cf76:
      if ((uint)uVar9 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar7 >> 8),1);
      }
      puVar1 = (ulonglong *)(param_1 + 0x20);
      if ((uint)uVar9 < 8000) {
        if ((*(byte *)puVar1 & 1) == 0) {
          uVar10 = FUN_141515d60();
        }
        else {
          uVar10 = *puVar1 & 0xfffffffffffffffe;
        }
        uVar9 = FUN_143a1e1e0(param_2,uVar9,uVar10);
      }
      else {
        if ((*(byte *)puVar1 & 1) == 0) {
          uVar10 = FUN_141515d60();
        }
        else {
          uVar10 = *puVar1 & 0xfffffffffffffffe;
        }
        uVar9 = FUN_143a5bf40(param_1 + 8,uVar9,param_2,&DAT_146ba3590,uVar10);
      }
    }
    if ((char)uVar9 == '\0') {
LAB_143a7cfdd:
      return uVar9 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7d010 FUN_143a7d010 body=518 status=ok
// SIG undefined FUN_143a7d010(void)

ulonglong FUN_143a7d010(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  uint uVar7;
  char cVar8;
  undefined4 local_res10;
  int local_res14;
  
LAB_143a7d031:
  pbVar2 = (byte *)*param_2;
  uVar4 = 0;
  if ((pbVar2 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
    pbVar2 = pbVar2 + 1;
    *param_2 = pbVar2;
LAB_143a7d063:
    iVar1 = (int)(uVar4 >> 3);
    cVar8 = (char)uVar4;
    if (iVar1 == 1) {
      if (cVar8 != '\n') goto LAB_143a7d1ca;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      else {
        uVar4 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
      }
      puVar5 = *(undefined **)(param_1 + 0x18);
      if (puVar5 == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x18,uVar4,&DAT_146ba2f50);
        puVar5 = *(undefined **)(param_1 + 0x18);
      }
      uVar4 = thunk_FUN_1439fa490(param_2,puVar5);
      goto LAB_143a7d1f3;
    }
    if (iVar1 == 2) {
      if (cVar8 != '\x10') goto LAB_143a7d1ca;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      uVar7 = 0;
      pbVar2 = (byte *)*param_2;
      if ((pbVar2 < (byte *)param_2[1]) && (uVar7 = (uint)*pbVar2, uVar7 < 0x80)) {
        *param_2 = pbVar2 + 1;
        *(uint *)(param_1 + 0x28) = uVar7;
      }
      else {
        uVar4 = FUN_1439f8e20(param_2,uVar7);
        if ((longlong)uVar4 < 0) goto LAB_143a7d1fb;
        *(int *)(param_1 + 0x28) = (int)uVar4;
      }
      goto LAB_143a7d031;
    }
    if ((iVar1 == 3) && (cVar8 == '\x1a')) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (lVar3 == 0) {
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar4 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        lVar3 = FUN_143a6d1d0(uVar4);
        *(longlong *)(param_1 + 0x20) = lVar3;
      }
      pbVar2 = (byte *)*param_2;
      if ((pbVar2 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
        *param_2 = pbVar2 + 1;
      }
      else {
        uVar4 = FUN_1439f98b0(param_2);
        uVar6 = uVar4 & 0xffffffff;
        if ((int)uVar4 < 0) goto LAB_143a7d1fb;
      }
      uVar4 = FUN_1439f8500(param_2,&local_res10,uVar6);
      if ((-1 < local_res14) && (uVar4 = FUN_143a7d220(lVar3,param_2), (char)uVar4 != '\0')) {
        uVar4 = FUN_1439f84b0(param_2,local_res10);
        goto LAB_143a7d1f3;
      }
      goto LAB_143a7d1fb;
    }
  }
  else {
    uVar7 = FUN_1439f8c60(param_2,uVar4);
    uVar4 = (ulonglong)uVar7;
    pbVar2 = (byte *)(ulonglong)(uVar7 - 1);
    if (uVar7 - 1 < 0x7f) goto LAB_143a7d063;
  }
LAB_143a7d1ca:
  if ((int)uVar4 == 0) {
    return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar6 = FUN_141515d60();
  }
  else {
    uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
  }
  uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar6);
LAB_143a7d1f3:
  if ((char)uVar4 == '\0') {
LAB_143a7d1fb:
    return uVar4 & 0xffffffffffffff00;
  }
  goto LAB_143a7d031;
}



// FUNCTION 143a7d220 FUN_143a7d220 body=400 status=ok
// SIG undefined FUN_143a7d220(void)

ulonglong FUN_143a7d220(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_18;
  char local_10;
  
LAB_143a7d240:
  do {
    pbVar4 = (byte *)*param_2;
    uVar9 = 0;
    if (pbVar4 < (byte *)param_2[1]) {
      bVar2 = *pbVar4;
      uVar9 = (ulonglong)bVar2;
      pbVar7 = pbVar4 + 1;
      if ((char)bVar2 < '\x01') {
        if (pbVar7 < (byte *)param_2[1]) {
          bVar3 = *pbVar7;
          if (0x7f < (~(uint)bVar3 & (uint)bVar2)) {
            pbVar7 = pbVar4 + 2;
            *param_2 = (ulonglong)pbVar7;
            uVar9 = (ulonglong)((bVar2 - 0x80) + (uint)bVar3 * 0x80);
            goto LAB_143a7d29d;
          }
        }
        goto LAB_143a7d284;
      }
      *param_2 = (ulonglong)pbVar7;
LAB_143a7d29d:
      iVar5 = (int)(uVar9 >> 3);
      if (iVar5 == 1) {
        if ((char)uVar9 != '\b') goto LAB_143a7d325;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (bVar2 = *pbVar4, bVar2 < 0x80)) {
          *param_2 = (ulonglong)(pbVar4 + 1);
          *(bool *)(param_1 + 0x48) = bVar2 != 0;
        }
        else {
          uVar9 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_143a7d38c;
          *(bool *)(param_1 + 0x48) = local_18 != 0;
        }
        goto LAB_143a7d240;
      }
      if ((iVar5 != 999) || ((char)uVar9 != ':')) goto LAB_143a7d325;
      uVar8 = FUN_143a716f0(param_1 + 0x30);
      uVar9 = FUN_143a6f9f0(param_2,uVar8);
    }
    else {
LAB_143a7d284:
      uVar6 = FUN_1439f8c60(param_2,uVar9);
      uVar9 = (ulonglong)uVar6;
      pbVar7 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x3fff) goto LAB_143a7d29d;
LAB_143a7d325:
      if ((uint)uVar9 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar7 >> 8),1);
      }
      puVar1 = (ulonglong *)(param_1 + 0x20);
      if ((uint)uVar9 < 8000) {
        if ((*(byte *)puVar1 & 1) == 0) {
          uVar10 = FUN_141515d60();
        }
        else {
          uVar10 = *puVar1 & 0xfffffffffffffffe;
        }
        uVar9 = FUN_143a1e1e0(param_2,uVar9,uVar10);
      }
      else {
        if ((*(byte *)puVar1 & 1) == 0) {
          uVar10 = FUN_141515d60();
        }
        else {
          uVar10 = *puVar1 & 0xfffffffffffffffe;
        }
        uVar9 = FUN_143a5bf40(param_1 + 8,uVar9,param_2,&DAT_146ba3610,uVar10);
      }
    }
    if ((char)uVar9 == '\0') {
LAB_143a7d38c:
      return uVar9 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7d3b0 FUN_143a7d3b0 body=392 status=ok
// SIG undefined FUN_143a7d3b0(void)

ulonglong FUN_143a7d3b0(longlong param_1,ulonglong *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar5 = (byte *)*param_2;
    uVar8 = 0;
    if (pbVar5 < (byte *)param_2[1]) {
      bVar3 = *pbVar5;
      uVar8 = (uint)bVar3;
      pbVar1 = pbVar5 + 1;
      if ((char)bVar3 < '\x01') {
        if (pbVar1 < (byte *)param_2[1]) {
          bVar4 = *pbVar1;
          if (0x7f < (~(uint)bVar4 & (uint)bVar3)) {
            *param_2 = (ulonglong)(pbVar5 + 2);
            uVar8 = (bVar3 - 0x80) + (uint)bVar4 * 0x80;
            goto LAB_143a7d42d;
          }
        }
        goto LAB_143a7d414;
      }
      *param_2 = (ulonglong)pbVar1;
LAB_143a7d42d:
      uVar7 = (ulonglong)(uVar8 & 0xfffffff8);
      if (((uVar8 & 0xfffffff8) != 0x1f38) || ((char)uVar8 != ':')) goto LAB_143a7d4ad;
      uVar6 = FUN_143a716f0(param_1 + 0x30);
      pbVar5 = (byte *)*param_2;
      if ((pbVar5 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar5, *pbVar5 < 0x80)) {
        *param_2 = (ulonglong)(pbVar5 + 1);
      }
      else {
        uVar7 = FUN_1439f98b0(param_2);
        if ((int)uVar7 < 0) break;
      }
      uVar7 = FUN_1439f8500(param_2,&local_res10,uVar7 & 0xffffffff);
      if (local_res14 < 0) break;
      uVar7 = FUN_143a80040(uVar6,param_2);
      if ((char)uVar7 == '\0') break;
      uVar7 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
LAB_143a7d414:
      uVar8 = FUN_1439f8c60(param_2,uVar8);
      uVar7 = (ulonglong)(uVar8 - 1);
      if (uVar8 - 1 < 0x3fff) goto LAB_143a7d42d;
LAB_143a7d4ad:
      if (uVar8 == 0) {
        return CONCAT71((int7)(uVar7 >> 8),1);
      }
      puVar2 = (ulonglong *)(param_1 + 0x20);
      if (uVar8 < 8000) {
        if ((*(byte *)puVar2 & 1) == 0) {
          uVar7 = FUN_141515d60();
        }
        else {
          uVar7 = *puVar2 & 0xfffffffffffffffe;
        }
        uVar7 = FUN_143a1e1e0(param_2,uVar8,uVar7);
      }
      else {
        if ((*(byte *)puVar2 & 1) == 0) {
          uVar7 = FUN_141515d60();
        }
        else {
          uVar7 = *puVar2 & 0xfffffffffffffffe;
        }
        uVar7 = FUN_143a5bf40(param_1 + 8,uVar8,param_2,&DAT_146ba3660,uVar7);
      }
    }
  } while ((char)uVar7 != '\0');
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 143a7d540 FUN_143a7d540 body=1045 status=ok
// SIG undefined FUN_143a7d540(void)

ulonglong FUN_143a7d540(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  char cVar8;
  undefined4 local_res10;
  int local_res14;
  
LAB_143a7d570:
  do {
    pbVar1 = (byte *)*param_2;
    uVar7 = 0;
    if (((byte *)param_2[1] <= pbVar1) || (uVar7 = (ulonglong)*pbVar1, (char)*pbVar1 < '\x01')) {
      uVar3 = FUN_1439f8c60(param_2,uVar7);
      uVar7 = (ulonglong)uVar3;
      uVar4 = (ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_143a7d5a1;
      goto LAB_143a7d90b;
    }
    *param_2 = pbVar1 + 1;
LAB_143a7d5a1:
    uVar3 = (int)(uVar7 >> 3) - 1;
    uVar4 = (ulonglong)uVar3;
    if (9 < uVar3) goto LAB_143a7d90b;
    uVar4 = (ulonglong)(int)uVar3;
    cVar8 = (char)uVar7;
    switch(uVar3) {
    case 0:
      if (cVar8 != '\n') break;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      else {
        uVar7 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
      }
      puVar6 = *(undefined **)(param_1 + 0x18);
      if (puVar6 == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x18,uVar7,&DAT_146ba2f50);
        puVar6 = *(undefined **)(param_1 + 0x18);
      }
      uVar7 = thunk_FUN_1439fa490(param_2,puVar6);
      goto LAB_143a7d934;
    case 1:
      if (cVar8 == '\x12') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar7 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar6 = *(undefined **)(param_1 + 0x20);
        if (puVar6 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x20,uVar7,&DAT_146ba2f50);
          puVar6 = *(undefined **)(param_1 + 0x20);
        }
        uVar7 = thunk_FUN_1439fa490(param_2,puVar6);
        goto LAB_143a7d934;
      }
      break;
    case 2:
      if (cVar8 == '\x18') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
        uVar7 = FUN_1414ff090(param_2,param_1 + 0x48);
        goto LAB_143a7d934;
      }
      break;
    case 3:
      if (cVar8 == ' ') {
        pbVar1 = (byte *)*param_2;
        uVar7 = 0;
        if ((pbVar1 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
          *param_2 = pbVar1 + 1;
        }
        else {
          uVar7 = FUN_1439f8e20(param_2,uVar7);
          if ((longlong)uVar7 < 0) goto LAB_143a7d93c;
        }
        iVar2 = (int)uVar7;
        if (iVar2 - 1U < 3) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
          *(int *)(param_1 + 0x50) = iVar2;
        }
        else {
          if ((*(byte *)(param_1 + 8) & 1) == 0) {
            uVar7 = FUN_141515d60();
          }
          else {
            uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
          }
          FUN_1439fbd90(uVar7,4,(longlong)iVar2);
        }
        goto LAB_143a7d570;
      }
      break;
    case 4:
      if (cVar8 == '(') {
        pbVar1 = (byte *)*param_2;
        uVar7 = 0;
        if ((pbVar1 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
          *param_2 = pbVar1 + 1;
        }
        else {
          uVar7 = FUN_1439f8e20(param_2,uVar7);
          if ((longlong)uVar7 < 0) goto LAB_143a7d93c;
        }
        iVar2 = (int)uVar7;
        if (iVar2 - 1U < 0x12) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
          *(int *)(param_1 + 0x54) = iVar2;
        }
        else {
          if ((*(byte *)(param_1 + 8) & 1) == 0) {
            uVar7 = FUN_141515d60();
          }
          else {
            uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
          }
          FUN_1439fbd90(uVar7,5,(longlong)iVar2);
        }
        goto LAB_143a7d570;
      }
      break;
    case 5:
      if (cVar8 == '2') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar7 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar6 = *(undefined **)(param_1 + 0x28);
        if (puVar6 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x28,uVar7,&DAT_146ba2f50);
          puVar6 = *(undefined **)(param_1 + 0x28);
        }
        uVar7 = thunk_FUN_1439fa490(param_2,puVar6);
        goto LAB_143a7d934;
      }
      break;
    case 6:
      if (cVar8 == ':') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar7 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar6 = *(undefined **)(param_1 + 0x30);
        if (puVar6 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x30,uVar7,&DAT_146ba2f50);
          puVar6 = *(undefined **)(param_1 + 0x30);
        }
        uVar7 = thunk_FUN_1439fa490(param_2,puVar6);
        goto LAB_143a7d934;
      }
      break;
    case 7:
      if (cVar8 == 'B') {
        uVar5 = FUN_143a825a0(param_1);
        pbVar1 = (byte *)*param_2;
        if ((pbVar1 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
          *param_2 = pbVar1 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          if ((int)uVar7 < 0) goto LAB_143a7d93c;
        }
        uVar7 = FUN_1439f8500(param_2,&local_res10,uVar7 & 0xffffffff);
        if ((-1 < local_res14) && (uVar7 = FUN_143a7d980(uVar5,param_2), (char)uVar7 != '\0')) {
          uVar7 = FUN_1439f84b0(param_2,local_res10);
          goto LAB_143a7d934;
        }
        goto LAB_143a7d93c;
      }
      break;
    case 8:
      if (cVar8 == 'H') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
        uVar7 = FUN_1414ff090(param_2,param_1 + 0x4c);
        goto LAB_143a7d934;
      }
      break;
    case 9:
      if (cVar8 == 'R') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar7 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar6 = *(undefined **)(param_1 + 0x38);
        if (puVar6 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x38,uVar7,&DAT_146ba2f50);
          puVar6 = *(undefined **)(param_1 + 0x38);
        }
        uVar7 = thunk_FUN_1439fa490(param_2,puVar6);
        goto LAB_143a7d934;
      }
    }
LAB_143a7d90b:
    if ((int)uVar7 == 0) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    uVar7 = FUN_143a1e1e0(param_2,uVar7,uVar4);
LAB_143a7d934:
    if ((char)uVar7 == '\0') {
LAB_143a7d93c:
      return uVar7 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7d980 FUN_143a7d980 body=857 status=ok
// SIG undefined FUN_143a7d980(void)

ulonglong FUN_143a7d980(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar9;
  byte bVar10;
  longlong local_28;
  char local_20;
  longlong local_18;
  char local_10;
  
LAB_143a7d9a0:
  do {
    pbVar3 = (byte *)*param_2;
    uVar6 = 0;
    if ((byte *)param_2[1] <= pbVar3) {
LAB_143a7d9e4:
      uVar4 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar4;
      pbVar5 = (byte *)(ulonglong)(uVar4 - 1);
      if (uVar4 - 1 < 0x3fff) goto LAB_143a7d9fd;
      goto LAB_143a7dc4e;
    }
    bVar10 = *pbVar3;
    uVar6 = (ulonglong)bVar10;
    pbVar5 = pbVar3 + 1;
    if ((char)bVar10 < '\x01') {
      if (pbVar5 < (byte *)param_2[1]) {
        bVar2 = *pbVar5;
        if (0x7f < (~(uint)bVar2 & (uint)bVar10)) {
          pbVar5 = pbVar3 + 2;
          *param_2 = (ulonglong)pbVar5;
          uVar6 = (ulonglong)((bVar10 - 0x80) + (uint)bVar2 * 0x80);
          goto LAB_143a7d9fd;
        }
      }
      goto LAB_143a7d9e4;
    }
    *param_2 = (ulonglong)pbVar5;
LAB_143a7d9fd:
    uVar4 = (uint)(uVar6 >> 3);
    cVar9 = (char)uVar6;
    if (uVar4 < 6) {
      if (uVar4 == 5) {
        if (cVar9 != '(') goto LAB_143a7dc4e;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
        pbVar3 = (byte *)*param_2;
        if ((pbVar3 < (byte *)param_2[1]) && (bVar10 = *pbVar3, bVar10 < 0x80)) {
          *param_2 = (ulonglong)(pbVar3 + 1);
          *(bool *)(param_1 + 0x4d) = bVar10 != 0;
        }
        else {
          uVar6 = FUN_1439f8f00(param_2,&local_28);
          if (local_20 == '\0') goto LAB_143a7dcb5;
          *(bool *)(param_1 + 0x4d) = local_28 != 0;
        }
        goto LAB_143a7d9a0;
      }
      if (uVar4 == 1) {
        if (cVar9 != '\b') goto LAB_143a7dc4e;
        pbVar3 = (byte *)*param_2;
        bVar10 = 0;
        if (pbVar3 < (byte *)param_2[1]) {
          bVar10 = *pbVar3;
          uVar4 = (uint)bVar10;
          if (0x7f < bVar10) goto LAB_143a7da87;
          *param_2 = (ulonglong)(pbVar3 + 1);
        }
        else {
LAB_143a7da87:
          uVar6 = FUN_1439f8e20(param_2,bVar10);
          uVar4 = (uint)uVar6;
          if ((longlong)uVar6 < 0) goto LAB_143a7dcb5;
        }
        if (uVar4 < 3) {
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
          *(uint *)(param_1 + 0x48) = uVar4;
        }
        else {
          if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
            uVar6 = FUN_141515d60();
          }
          else {
            uVar6 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
          }
          FUN_1439fbd90(uVar6,1,(longlong)(int)uVar4);
        }
        goto LAB_143a7d9a0;
      }
      if (uVar4 == 2) {
        if (cVar9 != '\x10') goto LAB_143a7dc4e;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
        uVar6 = FUN_1414ff1c0(param_2,param_1 + 0x4c);
      }
      else {
        if ((uVar4 != 3) || (cVar9 != '\x18')) goto LAB_143a7dc4e;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
        uVar6 = FUN_1414ff1c0(param_2,param_1 + 0x4e);
      }
    }
    else {
      if (uVar4 == 6) {
        if (cVar9 == '0') {
          pbVar3 = (byte *)*param_2;
          bVar10 = 0;
          if (pbVar3 < (byte *)param_2[1]) {
            bVar10 = *pbVar3;
            uVar4 = (uint)bVar10;
            if (0x7f < bVar10) goto LAB_143a7dbfa;
            *param_2 = (ulonglong)(pbVar3 + 1);
          }
          else {
LAB_143a7dbfa:
            uVar6 = FUN_1439f8e20(param_2,bVar10);
            uVar4 = (uint)uVar6;
            if ((longlong)uVar6 < 0) goto LAB_143a7dcb5;
          }
          if (uVar4 < 3) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            *(uint *)(param_1 + 0x50) = uVar4;
          }
          else {
            if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
              uVar6 = FUN_141515d60();
            }
            else {
              uVar6 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
            }
            FUN_1439fbd90(uVar6,6,(longlong)(int)uVar4);
          }
          goto LAB_143a7d9a0;
        }
      }
      else if (uVar4 == 10) {
        if (cVar9 == 'P') {
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
          pbVar3 = (byte *)*param_2;
          if ((pbVar3 < (byte *)param_2[1]) && (bVar10 = *pbVar3, bVar10 < 0x80)) {
            *param_2 = (ulonglong)(pbVar3 + 1);
            *(bool *)(param_1 + 0x4f) = bVar10 != 0;
          }
          else {
            uVar6 = FUN_1439f8f00(param_2,&local_18);
            if (local_10 == '\0') goto LAB_143a7dcb5;
            *(bool *)(param_1 + 0x4f) = local_18 != 0;
          }
          goto LAB_143a7d9a0;
        }
      }
      else if ((uVar4 == 999) && (cVar9 == ':')) {
        uVar7 = FUN_143a716f0(param_1 + 0x30);
        uVar6 = FUN_143a6f9f0(param_2,uVar7);
        goto LAB_143a7dcad;
      }
LAB_143a7dc4e:
      if ((uint)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      puVar1 = (ulonglong *)(param_1 + 0x20);
      if ((uint)uVar6 < 8000) {
        if ((*(byte *)puVar1 & 1) == 0) {
          uVar8 = FUN_141515d60();
        }
        else {
          uVar8 = *puVar1 & 0xfffffffffffffffe;
        }
        uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar8);
      }
      else {
        if ((*(byte *)puVar1 & 1) == 0) {
          uVar8 = FUN_141515d60();
        }
        else {
          uVar8 = *puVar1 & 0xfffffffffffffffe;
        }
        uVar6 = FUN_143a5bf40(param_1 + 8,uVar6,param_2,&DAT_146ba3750,uVar8);
      }
    }
LAB_143a7dcad:
    if ((char)uVar6 == '\0') {
LAB_143a7dcb5:
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7dce0 FUN_143a7dce0 body=1232 status=ok
// SIG undefined FUN_143a7dce0(void)

ulonglong FUN_143a7dce0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int *piVar9;
  char cVar10;
  undefined4 local_res10;
  int local_res14;
  undefined4 local_res18;
  int local_res1c;
  undefined4 local_res20;
  int local_res24;
  
LAB_143a7dd05:
  do {
    pbVar1 = (byte *)*param_2;
    uVar8 = 0;
    if ((pbVar1 < (byte *)param_2[1]) && (uVar8 = (ulonglong)*pbVar1, '\0' < (char)*pbVar1)) {
      *param_2 = pbVar1 + 1;
LAB_143a7dd36:
      uVar2 = (int)(uVar8 >> 3) - 1;
      uVar5 = (ulonglong)uVar2;
      if (0xb < uVar2) goto LAB_143a7e159;
      uVar5 = (ulonglong)(int)uVar2;
      cVar10 = (char)uVar8;
      switch(uVar2) {
      case 0:
        if (cVar10 != '\n') goto LAB_143a7e159;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar8 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar7 = *(undefined **)(param_1 + 0xb0);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0xb0,uVar8,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0xb0);
        }
        uVar8 = thunk_FUN_1439fa490(param_2,puVar7);
        break;
      case 1:
        if (cVar10 != '\x12') goto LAB_143a7e159;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar8 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar7 = *(undefined **)(param_1 + 0xb8);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0xb8,uVar8,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0xb8);
        }
        uVar8 = thunk_FUN_1439fa490(param_2,puVar7);
        break;
      case 2:
        if (cVar10 != '\x1a') goto LAB_143a7e159;
        uVar6 = FUN_1439f1a80(param_1 + 0x18);
        uVar8 = thunk_FUN_1439fa490(param_2,uVar6);
        if ((char)uVar8 == '\0') goto LAB_143a7e18a;
        iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x18);
        FUN_1439f1d30(param_1 + 0x18,iVar3 + -1);
        iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x18);
        FUN_1439f1d30(param_1 + 0x18,iVar3 + -1);
        goto LAB_143a7dd05;
      case 3:
        if (cVar10 != '\"') goto LAB_143a7e159;
        uVar6 = FUN_143a2a560(param_1 + 0x30);
        uVar8 = FUN_143a6f840(param_2,uVar6);
        break;
      case 4:
        if (cVar10 != '*') goto LAB_143a7e159;
        uVar6 = FUN_143a2a5d0(param_1 + 0x48);
        uVar8 = FUN_143a6f8d0(param_2,uVar6);
        break;
      case 5:
        if (cVar10 != '2') goto LAB_143a7e159;
        piVar9 = *(int **)(param_1 + 0x70);
        if (piVar9 == (int *)0x0) {
LAB_143a7ded1:
          FUN_1439f23d0(param_1 + 0x60,*(int *)(param_1 + 0x6c) + 1);
          piVar9 = *(int **)(param_1 + 0x70);
          iVar4 = *piVar9;
LAB_143a7dee5:
          *piVar9 = iVar4 + 1;
          uVar6 = FUN_143a6dc50(*(undefined8 *)(param_1 + 0x60));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x70) + 8 + (longlong)*(int *)(param_1 + 0x68) * 8) = uVar6;
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x68);
          iVar4 = *piVar9;
          if (iVar4 <= iVar3) {
            if (iVar4 == *(int *)(param_1 + 0x6c)) goto LAB_143a7ded1;
            goto LAB_143a7dee5;
          }
          uVar6 = *(undefined8 *)(piVar9 + (longlong)iVar3 * 2 + 2);
          *(int *)(param_1 + 0x68) = iVar3 + 1;
        }
        pbVar1 = (byte *)*param_2;
        if ((pbVar1 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
          *param_2 = pbVar1 + 1;
        }
        else {
          uVar8 = FUN_1439f98b0(param_2);
          uVar5 = uVar8 & 0xffffffff;
          if ((int)uVar8 < 0) goto LAB_143a7e18a;
        }
        uVar8 = FUN_1439f8500(param_2,&local_res10,uVar5);
        if (local_res14 < 0) goto LAB_143a7e18a;
        uVar8 = FUN_143a7f8a0(uVar6,param_2);
        if ((char)uVar8 == '\0') goto LAB_143a7e18a;
        uVar8 = FUN_1439f84b0(param_2,local_res10);
        break;
      case 6:
        if (cVar10 != ':') goto LAB_143a7e159;
        uVar6 = FUN_143a2a640(param_1 + 0x78);
        uVar8 = FUN_143a6f960(param_2,uVar6);
        break;
      case 7:
        if (cVar10 != 'B') goto LAB_143a7e159;
        uVar6 = FUN_143a825e0(param_1);
        pbVar1 = (byte *)*param_2;
        if ((pbVar1 < (byte *)param_2[1]) && (uVar8 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
          *param_2 = pbVar1 + 1;
        }
        else {
          uVar8 = FUN_1439f98b0(param_2);
          if ((int)uVar8 < 0) goto LAB_143a7e18a;
        }
        uVar8 = FUN_1439f8500(param_2,&local_res18,uVar8 & 0xffffffff);
        if (local_res1c < 0) goto LAB_143a7e18a;
        uVar8 = FUN_143a7e350(uVar6,param_2);
        if ((char)uVar8 == '\0') goto LAB_143a7e18a;
        uVar8 = FUN_1439f84b0(param_2,local_res18);
        break;
      case 8:
        if (cVar10 != 'J') goto LAB_143a7e159;
        uVar6 = FUN_143a82620(param_1);
        pbVar1 = (byte *)*param_2;
        if ((pbVar1 < (byte *)param_2[1]) && (uVar8 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
          *param_2 = pbVar1 + 1;
        }
        else {
          uVar8 = FUN_1439f98b0(param_2);
          if ((int)uVar8 < 0) goto LAB_143a7e18a;
        }
        uVar8 = FUN_1439f8500(param_2,&local_res20,uVar8 & 0xffffffff);
        if (local_res24 < 0) goto LAB_143a7e18a;
        uVar8 = FUN_143a7fcb0(uVar6,param_2);
        if ((char)uVar8 == '\0') goto LAB_143a7e18a;
        uVar8 = FUN_1439f84b0(param_2,local_res20);
        break;
      case 9:
        if (cVar10 == 'P') {
          uVar8 = FUN_1414ff220(1,0x50,param_2,param_1 + 0x90);
        }
        else {
          if (cVar10 != 'R') goto LAB_143a7e159;
          uVar8 = FUN_1414fefc0(param_2,param_1 + 0x90);
        }
        break;
      case 10:
        if (cVar10 == 'X') {
          uVar8 = FUN_1414ff220(1,0x58,param_2,param_1 + 0xa0);
        }
        else {
          if (cVar10 != 'Z') goto LAB_143a7e159;
          uVar8 = FUN_1414fefc0(param_2,param_1 + 0xa0);
        }
        break;
      case 0xb:
        if (cVar10 != 'b') goto LAB_143a7e159;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar8 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar7 = *(undefined **)(param_1 + 0xc0);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0xc0,uVar8,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0xc0);
        }
        uVar8 = thunk_FUN_1439fa490(param_2,puVar7);
      }
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar8);
      uVar8 = (ulonglong)uVar2;
      uVar5 = (ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_143a7dd36;
LAB_143a7e159:
      if ((int)uVar8 == 0) {
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = FUN_141515d60();
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar8 = FUN_143a1e1e0(param_2,uVar8,uVar5);
    }
    if ((char)uVar8 == '\0') {
LAB_143a7e18a:
      return uVar8 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7e1e0 FUN_143a7e1e0 body=365 status=ok
// SIG undefined FUN_143a7e1e0(void)

ulonglong FUN_143a7e1e0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_143a7e232:
      if (((int)(uVar6 >> 3) != 1) || ((char)uVar6 != '\n')) goto LAB_143a7e301;
      piVar8 = *(int **)(param_1 + 0x28);
      if (piVar8 == (int *)0x0) {
LAB_143a7e26f:
        FUN_1439f23d0(param_1 + 0x18,*(int *)(param_1 + 0x24) + 1);
        piVar8 = *(int **)(param_1 + 0x28);
        iVar3 = *piVar8;
LAB_143a7e283:
        *piVar8 = iVar3 + 1;
        uVar5 = thunk_FUN_143a6e140(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)*(int *)(param_1 + 0x20) * 8)
             = uVar5;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x20);
        iVar3 = *piVar8;
        if (iVar3 <= iVar1) {
          if (iVar3 == *(int *)(param_1 + 0x24)) goto LAB_143a7e26f;
          goto LAB_143a7e283;
        }
        uVar5 = *(undefined8 *)(piVar8 + (longlong)iVar1 * 2 + 2);
        *(int *)(param_1 + 0x20) = iVar1 + 1;
      }
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
        *param_2 = pbVar4 + 1;
      }
      else {
        uVar6 = FUN_1439f98b0(param_2);
        uVar7 = uVar6 & 0xffffffff;
        if ((int)uVar6 < 0) break;
      }
      uVar6 = FUN_1439f8500(param_2,&local_res10,uVar7);
      if ((local_res14 < 0) || (uVar6 = FUN_143a7dce0(uVar5,param_2), (char)uVar6 == '\0')) break;
      uVar6 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar2;
      pbVar4 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_143a7e232;
LAB_143a7e301:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar7);
    }
  } while ((char)uVar6 != '\0');
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 143a7e350 FUN_143a7e350 body=1666 status=ok
// SIG undefined FUN_143a7e350(void)

ulonglong FUN_143a7e350(longlong param_1,ulonglong *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char cVar12;
  
LAB_143a7e380:
  do {
    pbVar5 = (byte *)*param_2;
    uVar11 = 0;
    if ((byte *)param_2[1] <= pbVar5) {
LAB_143a7e3c4:
      uVar7 = FUN_1439f8c60(param_2,uVar11);
      uVar11 = (ulonglong)uVar7;
      uVar10 = (ulonglong)(uVar7 - 1);
      if (uVar7 - 1 < 0x3fff) goto LAB_143a7e3dd;
      goto switchD_143a7e414_caseD_1;
    }
    bVar3 = *pbVar5;
    uVar11 = (ulonglong)bVar3;
    pbVar1 = pbVar5 + 1;
    if ((char)bVar3 < '\x01') {
      if (pbVar1 < (byte *)param_2[1]) {
        bVar4 = *pbVar1;
        if (0x7f < (~(uint)bVar4 & (uint)bVar3)) {
          *param_2 = (ulonglong)(pbVar5 + 2);
          uVar11 = (ulonglong)((bVar3 - 0x80) + (uint)bVar4 * 0x80);
          goto LAB_143a7e3dd;
        }
      }
      goto LAB_143a7e3c4;
    }
    *param_2 = (ulonglong)pbVar1;
LAB_143a7e3dd:
    uVar10 = uVar11 >> 3;
    uVar7 = (uint)uVar10;
    if (999 < uVar7) goto switchD_143a7e414_caseD_1;
    cVar12 = (char)uVar11;
    if (uVar7 == 999) {
      if (cVar12 == ':') {
        uVar9 = FUN_143a716f0(param_1 + 0x30);
        uVar11 = FUN_143a6f9f0(param_2,uVar9);
        goto LAB_143a7e9a9;
      }
      goto switchD_143a7e414_caseD_1;
    }
    uVar10 = 0;
    switch(uVar7 - 1) {
    case 0:
      if (cVar12 != '\n') break;
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
      if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        uVar11 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
      }
      else {
        uVar11 = *(ulonglong *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe) + 0x18);
      }
      puVar8 = *(undefined **)(param_1 + 0x48);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x48,uVar11,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x48);
      }
      uVar11 = thunk_FUN_1439fa490(param_2,puVar8);
      goto LAB_143a7e9a9;
    case 7:
      if (cVar12 == 'B') {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
        if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
          uVar11 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
        }
        else {
          uVar11 = *(ulonglong *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x50);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x50,uVar11,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x50);
        }
        uVar11 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a7e9a9;
      }
      break;
    case 8:
      if (cVar12 == 'H') {
        pbVar5 = (byte *)*param_2;
        uVar11 = 0;
        if ((pbVar5 < (byte *)param_2[1]) && (uVar11 = (ulonglong)*pbVar5, *pbVar5 < 0x80)) {
          *param_2 = (ulonglong)(pbVar5 + 1);
        }
        else {
          uVar11 = FUN_1439f8e20(param_2,uVar11);
          if ((longlong)uVar11 < 0) goto LAB_143a7e9b1;
        }
        iVar6 = (int)uVar11;
        if (iVar6 - 1U < 3) {
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80000;
          *(int *)(param_1 + 0xa4) = iVar6;
        }
        else {
          if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
            uVar11 = FUN_141515d60();
          }
          else {
            uVar11 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
          }
          FUN_1439fbd90(uVar11,9,(longlong)iVar6);
        }
        goto LAB_143a7e380;
      }
      break;
    case 9:
      if (cVar12 == 'P') {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x400;
        uVar11 = FUN_1414ff1c0(param_2,param_1 + 0x98);
        goto LAB_143a7e9a9;
      }
      break;
    case 10:
      if (cVar12 == 'Z') {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
        if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
          uVar11 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
        }
        else {
          uVar11 = *(ulonglong *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x58);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x58,uVar11,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x58);
        }
        uVar11 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a7e9a9;
      }
      break;
    case 0xf:
      if (cVar12 == -0x80) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x2000;
        uVar11 = FUN_1414ff1c0(param_2,param_1 + 0x9b);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x10:
      if (cVar12 == -0x78) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x4000;
        uVar11 = FUN_1414ff1c0(param_2,param_1 + 0x9c);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x11:
      if (cVar12 == -0x70) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x8000;
        uVar11 = FUN_1414ff1c0(param_2,param_1 + 0x9d);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x13:
      if (cVar12 == -0x60) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x800;
        uVar11 = FUN_1414ff1c0(param_2,param_1 + 0x99);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x16:
      if (cVar12 == -0x48) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20000;
        uVar11 = FUN_1414ff1c0(param_2,param_1 + 0x9f);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x1a:
      if (cVar12 == -0x28) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x1000;
        uVar11 = FUN_1414ff1c0(param_2,param_1 + 0x9a);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x1e:
      if (cVar12 == -8) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x40000;
        uVar11 = FUN_1414ff1c0(param_2,param_1 + 0xa0);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x23:
      if (cVar12 == '\"') {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
        if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
          uVar11 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
        }
        else {
          uVar11 = *(ulonglong *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x60);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x60,uVar11,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x60);
        }
        uVar11 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x24:
      if (cVar12 == '*') {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
        if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
          uVar11 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
        }
        else {
          uVar11 = *(ulonglong *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x68);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x68,uVar11,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x68);
        }
        uVar11 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x26:
      if (cVar12 == ':') {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
        if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
          uVar11 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
        }
        else {
          uVar11 = *(ulonglong *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x70);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x70,uVar11,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x70);
        }
        uVar11 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x27:
      if (cVar12 == 'B') {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x40;
        if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
          uVar11 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
        }
        else {
          uVar11 = *(ulonglong *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x78);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x78,uVar11,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x78);
        }
        uVar11 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x28:
      if (cVar12 == 'J') {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
        if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
          uVar11 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
        }
        else {
          uVar11 = *(ulonglong *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x80);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x80,uVar11,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x80);
        }
        uVar11 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x29:
      if (cVar12 == 'P') {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10000;
        uVar11 = FUN_1414ff1c0(param_2,param_1 + 0x9e);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x2b:
      if (cVar12 == 'b') {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x100;
        if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
          uVar11 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
        }
        else {
          uVar11 = *(ulonglong *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x88);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x88,uVar11,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x88);
        }
        uVar11 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a7e9a9;
      }
      break;
    case 0x2c:
      if (cVar12 == 'j') {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x200;
        if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
          uVar11 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
        }
        else {
          uVar11 = *(ulonglong *)((*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x90);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x90,uVar11,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x90);
        }
        uVar11 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a7e9a9;
      }
    }
switchD_143a7e414_caseD_1:
    if ((uint)uVar11 == 0) {
      return CONCAT71((int7)(uVar10 >> 8),1);
    }
    puVar2 = (ulonglong *)(param_1 + 0x20);
    if ((uint)uVar11 < 8000) {
      if ((*(byte *)puVar2 & 1) == 0) {
        uVar10 = FUN_141515d60();
      }
      else {
        uVar10 = *puVar2 & 0xfffffffffffffffe;
      }
      uVar11 = FUN_143a1e1e0(param_2,uVar11,uVar10);
    }
    else {
      if ((*(byte *)puVar2 & 1) == 0) {
        uVar10 = FUN_141515d60();
      }
      else {
        uVar10 = *puVar2 & 0xfffffffffffffffe;
      }
      uVar11 = FUN_143a5bf40(param_1 + 8,uVar11,param_2,&DAT_146ba38c0,uVar10);
    }
LAB_143a7e9a9:
    if ((char)uVar11 == '\0') {
LAB_143a7e9b1:
      return uVar11 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7ea60 FUN_143a7ea60 body=365 status=ok
// SIG undefined FUN_143a7ea60(void)

ulonglong FUN_143a7ea60(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_143a7eab2:
      if (((int)(uVar6 >> 3) != 1) || ((char)uVar6 != '\n')) goto LAB_143a7eb81;
      piVar8 = *(int **)(param_1 + 0x28);
      if (piVar8 == (int *)0x0) {
LAB_143a7eaef:
        FUN_1439f23d0(param_1 + 0x18,*(int *)(param_1 + 0x24) + 1);
        piVar8 = *(int **)(param_1 + 0x28);
        iVar3 = *piVar8;
LAB_143a7eb03:
        *piVar8 = iVar3 + 1;
        uVar5 = FUN_143a6d770(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)*(int *)(param_1 + 0x20) * 8)
             = uVar5;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x20);
        iVar3 = *piVar8;
        if (iVar3 <= iVar1) {
          if (iVar3 == *(int *)(param_1 + 0x24)) goto LAB_143a7eaef;
          goto LAB_143a7eb03;
        }
        uVar5 = *(undefined8 *)(piVar8 + (longlong)iVar1 * 2 + 2);
        *(int *)(param_1 + 0x20) = iVar1 + 1;
      }
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
        *param_2 = pbVar4 + 1;
      }
      else {
        uVar6 = FUN_1439f98b0(param_2);
        uVar7 = uVar6 & 0xffffffff;
        if ((int)uVar6 < 0) break;
      }
      uVar6 = FUN_1439f8500(param_2,&local_res10,uVar7);
      if ((local_res14 < 0) || (uVar6 = FUN_143a7ebd0(uVar5,param_2), (char)uVar6 == '\0')) break;
      uVar6 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar2;
      pbVar4 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_143a7eab2;
LAB_143a7eb81:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar7);
    }
  } while ((char)uVar6 != '\0');
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 143a7ebd0 FUN_143a7ebd0 body=474 status=ok
// SIG undefined FUN_143a7ebd0(void)

ulonglong FUN_143a7ebd0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  char cVar8;
  
LAB_143a7ebf1:
  pbVar2 = (byte *)*param_2;
  uVar3 = 0;
  if ((pbVar2 < (byte *)param_2[1]) && (uVar3 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
    pbVar2 = pbVar2 + 1;
    *param_2 = pbVar2;
LAB_143a7ec22:
    iVar1 = (int)(uVar3 >> 3);
    cVar8 = (char)uVar3;
    if (iVar1 == 1) {
      if (cVar8 == '\n') {
        uVar3 = FUN_1414fefc0(param_2,param_1 + 0x18);
      }
      else {
        if (cVar8 != '\b') goto LAB_143a7ed5e;
        uVar3 = FUN_1414ff220(1,10,param_2,param_1 + 0x18);
      }
      goto LAB_143a7ed87;
    }
    if (iVar1 == 2) {
      if (cVar8 == '\x12') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar3 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar4 = *(undefined **)(param_1 + 0x30);
        if (puVar4 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x30,uVar3,&DAT_146ba2f50);
          puVar4 = *(undefined **)(param_1 + 0x30);
        }
        uVar3 = thunk_FUN_1439fa490(param_2,puVar4);
        goto LAB_143a7ed87;
      }
    }
    else {
      if (iVar1 == 3) {
        if (cVar8 != '\x18') goto LAB_143a7ed5e;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        uVar7 = 0;
        pbVar2 = (byte *)*param_2;
        if ((pbVar2 < (byte *)param_2[1]) && (uVar7 = (uint)*pbVar2, uVar7 < 0x80)) {
          *param_2 = pbVar2 + 1;
          *(uint *)(param_1 + 0x38) = uVar7;
        }
        else {
          uVar3 = FUN_1439f8e20(param_2,uVar7);
          if ((longlong)uVar3 < 0) goto LAB_143a7ed8f;
          *(int *)(param_1 + 0x38) = (int)uVar3;
        }
        goto LAB_143a7ebf1;
      }
      if ((iVar1 == 4) && (cVar8 == ' ')) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        bVar6 = 0;
        pbVar2 = (byte *)*param_2;
        if (pbVar2 < (byte *)param_2[1]) {
          bVar6 = *pbVar2;
          if (bVar6 < 0x80) {
            *param_2 = pbVar2 + 1;
            *(uint *)(param_1 + 0x3c) = (uint)bVar6;
            goto LAB_143a7ebf1;
          }
        }
        uVar3 = FUN_1439f8e20(param_2,bVar6);
        if ((longlong)uVar3 < 0) goto LAB_143a7ed8f;
        *(int *)(param_1 + 0x3c) = (int)uVar3;
        goto LAB_143a7ebf1;
      }
    }
  }
  else {
    uVar7 = FUN_1439f8c60(param_2,uVar3);
    uVar3 = (ulonglong)uVar7;
    pbVar2 = (byte *)(ulonglong)(uVar7 - 1);
    if (uVar7 - 1 < 0x7f) goto LAB_143a7ec22;
  }
LAB_143a7ed5e:
  if ((int)uVar3 == 0) {
    return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar5 = FUN_141515d60();
  }
  else {
    uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
  }
  uVar3 = FUN_143a1e1e0(param_2,uVar3,uVar5);
LAB_143a7ed87:
  if ((char)uVar3 == '\0') {
LAB_143a7ed8f:
    return uVar3 & 0xffffffffffffff00;
  }
  goto LAB_143a7ebf1;
}



// FUNCTION 143a7edb0 FUN_143a7edb0 body=733 status=ok
// SIG undefined FUN_143a7edb0(void)

ulonglong FUN_143a7edb0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  longlong local_18;
  char local_10;
  
LAB_143a7edd0:
  do {
    pbVar4 = (byte *)*param_2;
    uVar9 = 0;
    if (pbVar4 < (byte *)param_2[1]) {
      bVar2 = *pbVar4;
      uVar9 = (ulonglong)bVar2;
      pbVar7 = pbVar4 + 1;
      if ((char)bVar2 < '\x01') {
        if (pbVar7 < (byte *)param_2[1]) {
          bVar3 = *pbVar7;
          if (0x7f < (~(uint)bVar3 & (uint)bVar2)) {
            pbVar7 = pbVar4 + 2;
            *param_2 = (ulonglong)pbVar7;
            uVar9 = (ulonglong)((bVar2 - 0x80) + (uint)bVar3 * 0x80);
            goto LAB_143a7ee2e;
          }
        }
        goto LAB_143a7ee15;
      }
      *param_2 = (ulonglong)pbVar7;
LAB_143a7ee2e:
      iVar5 = (int)(uVar9 >> 3);
      cVar11 = (char)uVar9;
      if (iVar5 == 1) {
        if (cVar11 != '\b') goto LAB_143a7effe;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (bVar2 = *pbVar4, bVar2 < 0x80)) {
          *param_2 = (ulonglong)(pbVar4 + 1);
          *(bool *)(param_1 + 0x48) = bVar2 != 0;
        }
        else {
          uVar9 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_143a7f065;
          *(bool *)(param_1 + 0x48) = local_18 != 0;
        }
        goto LAB_143a7edd0;
      }
      if (iVar5 == 2) {
        if (cVar11 != '\x10') goto LAB_143a7effe;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (bVar2 = *pbVar4, bVar2 < 0x80)) {
          *param_2 = (ulonglong)(pbVar4 + 1);
          *(bool *)(param_1 + 0x49) = bVar2 != 0;
        }
        else {
          uVar9 = FUN_1439f8f00(param_2,&local_28);
          if (local_20 == '\0') goto LAB_143a7f065;
          *(bool *)(param_1 + 0x49) = local_28 != 0;
        }
        goto LAB_143a7edd0;
      }
      if (iVar5 == 3) {
        if (cVar11 != '\x18') goto LAB_143a7effe;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (bVar2 = *pbVar4, bVar2 < 0x80)) {
          *param_2 = (ulonglong)(pbVar4 + 1);
          *(bool *)(param_1 + 0x4a) = bVar2 != 0;
        }
        else {
          uVar9 = FUN_1439f8f00(param_2,&local_38);
          if (local_30 == '\0') goto LAB_143a7f065;
          *(bool *)(param_1 + 0x4a) = local_38 != 0;
        }
        goto LAB_143a7edd0;
      }
      if (iVar5 == 7) {
        if (cVar11 != '8') goto LAB_143a7effe;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (bVar2 = *pbVar4, bVar2 < 0x80)) {
          *param_2 = (ulonglong)(pbVar4 + 1);
          *(bool *)(param_1 + 0x4b) = bVar2 != 0;
        }
        else {
          uVar9 = FUN_1439f8f00(param_2,&local_48);
          if (local_40 == '\0') goto LAB_143a7f065;
          *(bool *)(param_1 + 0x4b) = local_48 != 0;
        }
        goto LAB_143a7edd0;
      }
      if ((iVar5 != 999) || (cVar11 != ':')) goto LAB_143a7effe;
      uVar8 = FUN_143a716f0(param_1 + 0x30);
      uVar9 = FUN_143a6f9f0(param_2,uVar8);
    }
    else {
LAB_143a7ee15:
      uVar6 = FUN_1439f8c60(param_2,uVar9);
      uVar9 = (ulonglong)uVar6;
      pbVar7 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x3fff) goto LAB_143a7ee2e;
LAB_143a7effe:
      if ((uint)uVar9 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar7 >> 8),1);
      }
      puVar1 = (ulonglong *)(param_1 + 0x20);
      if ((uint)uVar9 < 8000) {
        if ((*(byte *)puVar1 & 1) == 0) {
          uVar10 = FUN_141515d60();
        }
        else {
          uVar10 = *puVar1 & 0xfffffffffffffffe;
        }
        uVar9 = FUN_143a1e1e0(param_2,uVar9,uVar10);
      }
      else {
        if ((*(byte *)puVar1 & 1) == 0) {
          uVar10 = FUN_141515d60();
        }
        else {
          uVar10 = *puVar1 & 0xfffffffffffffffe;
        }
        uVar9 = FUN_143a5bf40(param_1 + 8,uVar9,param_2,&DAT_146ba39e0,uVar10);
      }
    }
    if ((char)uVar9 == '\0') {
LAB_143a7f065:
      return uVar9 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7f090 FUN_143a7f090 body=653 status=ok
// SIG undefined FUN_143a7f090(void)

ulonglong FUN_143a7f090(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar1 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar1 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar1, '\0' < (char)*pbVar1)) {
      *param_2 = pbVar1 + 1;
LAB_143a7f0f1:
      uVar2 = (int)(uVar6 >> 3) - 1;
      uVar3 = (ulonglong)uVar2;
      if (5 < uVar2) goto LAB_143a7f2d3;
      uVar3 = (ulonglong)(int)uVar2;
      cVar7 = (char)uVar6;
      switch(uVar2) {
      case 0:
        if (cVar7 != '\n') goto LAB_143a7f2d3;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar6 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar4 = *(undefined **)(param_1 + 0x18);
        if (puVar4 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x18,uVar6,&DAT_146ba2f50);
          puVar4 = *(undefined **)(param_1 + 0x18);
        }
        uVar6 = thunk_FUN_1439fa490(param_2,puVar4);
        break;
      case 1:
        if (cVar7 != '\x12') goto LAB_143a7f2d3;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar6 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar4 = *(undefined **)(param_1 + 0x20);
        if (puVar4 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x20,uVar6,&DAT_146ba2f50);
          puVar4 = *(undefined **)(param_1 + 0x20);
        }
        uVar6 = thunk_FUN_1439fa490(param_2,puVar4);
        break;
      case 2:
        if (cVar7 != '\x1a') goto LAB_143a7f2d3;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar6 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar4 = *(undefined **)(param_1 + 0x28);
        if (puVar4 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x28,uVar6,&DAT_146ba2f50);
          puVar4 = *(undefined **)(param_1 + 0x28);
        }
        uVar6 = thunk_FUN_1439fa490(param_2,puVar4);
        break;
      case 3:
        if (cVar7 != '\"') goto LAB_143a7f2d3;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
        lVar5 = *(longlong *)(param_1 + 0x30);
        if (lVar5 == 0) {
          if ((*(byte *)(param_1 + 8) & 1) == 0) {
            uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
          }
          else {
            uVar6 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
          }
          lVar5 = FUN_143a6d9e0(uVar6);
          *(longlong *)(param_1 + 0x30) = lVar5;
        }
        pbVar1 = (byte *)*param_2;
        if ((pbVar1 < (byte *)param_2[1]) && (uVar3 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
          *param_2 = pbVar1 + 1;
        }
        else {
          uVar6 = FUN_1439f98b0(param_2);
          uVar3 = uVar6 & 0xffffffff;
          if ((int)uVar6 < 0) goto LAB_143a7f304;
        }
        uVar6 = FUN_1439f8500(param_2,&local_res10,uVar3);
        if ((local_res14 < 0) || (uVar6 = FUN_143a7f340(lVar5,param_2), (char)uVar6 == '\0'))
        goto LAB_143a7f304;
        uVar6 = FUN_1439f84b0(param_2,local_res10);
        break;
      case 4:
        if (cVar7 != '(') goto LAB_143a7f2d3;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
        uVar6 = FUN_1414ff1c0(param_2,param_1 + 0x38);
        break;
      case 5:
        if (cVar7 != '0') goto LAB_143a7f2d3;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
        uVar6 = FUN_1414ff1c0(param_2,param_1 + 0x39);
      }
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar2;
      uVar3 = (ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_143a7f0f1;
LAB_143a7f2d3:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar3 = FUN_141515d60();
      }
      else {
        uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar3);
    }
  } while ((char)uVar6 != '\0');
LAB_143a7f304:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 143a7f340 FUN_143a7f340 body=540 status=ok
// SIG undefined FUN_143a7f340(void)

ulonglong FUN_143a7f340(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  byte bVar11;
  longlong local_18;
  char local_10;
  
LAB_143a7f360:
  do {
    pbVar3 = (byte *)*param_2;
    uVar8 = 0;
    if (pbVar3 < (byte *)param_2[1]) {
      bVar11 = *pbVar3;
      uVar8 = (ulonglong)bVar11;
      pbVar6 = pbVar3 + 1;
      if ((char)bVar11 < '\x01') {
        if (pbVar6 < (byte *)param_2[1]) {
          bVar2 = *pbVar6;
          if (0x7f < (~(uint)bVar2 & (uint)bVar11)) {
            pbVar6 = pbVar3 + 2;
            *param_2 = (ulonglong)pbVar6;
            uVar8 = (ulonglong)((bVar11 - 0x80) + (uint)bVar2 * 0x80);
            goto LAB_143a7f3bd;
          }
        }
        goto LAB_143a7f3a4;
      }
      *param_2 = (ulonglong)pbVar6;
LAB_143a7f3bd:
      iVar4 = (int)(uVar8 >> 3);
      cVar10 = (char)uVar8;
      if (iVar4 == 0x21) {
        if (cVar10 != '\b') goto LAB_143a7f4d1;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
        pbVar3 = (byte *)*param_2;
        if ((pbVar3 < (byte *)param_2[1]) && (bVar11 = *pbVar3, bVar11 < 0x80)) {
          *param_2 = (ulonglong)(pbVar3 + 1);
          *(bool *)(param_1 + 0x48) = bVar11 != 0;
        }
        else {
          uVar8 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_143a7f538;
          *(bool *)(param_1 + 0x48) = local_18 != 0;
        }
        goto LAB_143a7f360;
      }
      if (iVar4 == 0x22) {
        if (cVar10 != '\x10') goto LAB_143a7f4d1;
        pbVar3 = (byte *)*param_2;
        bVar11 = 0;
        if (pbVar3 < (byte *)param_2[1]) {
          bVar11 = *pbVar3;
          uVar5 = (uint)bVar11;
          if (0x7f < bVar11) goto LAB_143a7f425;
          *param_2 = (ulonglong)(pbVar3 + 1);
        }
        else {
LAB_143a7f425:
          uVar8 = FUN_1439f8e20(param_2,bVar11);
          uVar5 = (uint)uVar8;
          if ((longlong)uVar8 < 0) goto LAB_143a7f538;
        }
        if (uVar5 < 3) {
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
          *(uint *)(param_1 + 0x4c) = uVar5;
        }
        else {
          if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
            uVar8 = FUN_141515d60();
          }
          else {
            uVar8 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe;
          }
          FUN_1439fbd90(uVar8,0x22,(longlong)(int)uVar5);
        }
        goto LAB_143a7f360;
      }
      if ((iVar4 != 999) || (cVar10 != ':')) goto LAB_143a7f4d1;
      uVar7 = FUN_143a716f0(param_1 + 0x30);
      uVar8 = FUN_143a6f9f0(param_2,uVar7);
    }
    else {
LAB_143a7f3a4:
      uVar5 = FUN_1439f8c60(param_2,uVar8);
      uVar8 = (ulonglong)uVar5;
      pbVar6 = (byte *)(ulonglong)(uVar5 - 1);
      if (uVar5 - 1 < 0x3fff) goto LAB_143a7f3bd;
LAB_143a7f4d1:
      if ((uint)uVar8 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar6 >> 8),1);
      }
      puVar1 = (ulonglong *)(param_1 + 0x20);
      if ((uint)uVar8 < 8000) {
        if ((*(byte *)puVar1 & 1) == 0) {
          uVar9 = FUN_141515d60();
        }
        else {
          uVar9 = *puVar1 & 0xfffffffffffffffe;
        }
        uVar8 = FUN_143a1e1e0(param_2,uVar8,uVar9);
      }
      else {
        if ((*(byte *)puVar1 & 1) == 0) {
          uVar9 = FUN_141515d60();
        }
        else {
          uVar9 = *puVar1 & 0xfffffffffffffffe;
        }
        uVar8 = FUN_143a5bf40(param_1 + 8,uVar8,param_2,&DAT_146ba3a70,uVar9);
      }
    }
    if ((char)uVar8 == '\0') {
LAB_143a7f538:
      return uVar8 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7f560 FUN_143a7f560 body=426 status=ok
// SIG undefined FUN_143a7f560(void)

ulonglong FUN_143a7f560(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar3 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar3 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3)) {
      pbVar3 = pbVar3 + 1;
      *param_2 = pbVar3;
LAB_143a7f5b3:
      iVar1 = (int)(uVar5 >> 3);
      if (iVar1 == 1) {
        if ((char)uVar5 != '\n') goto LAB_143a7f6be;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar5 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar6 = *(undefined **)(param_1 + 0x18);
        if (puVar6 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x18,uVar5,&DAT_146ba2f50);
          puVar6 = *(undefined **)(param_1 + 0x18);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar6);
      }
      else {
        if ((iVar1 != 2) || ((char)uVar5 != '\x12')) goto LAB_143a7f6be;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        lVar4 = *(longlong *)(param_1 + 0x20);
        if (lVar4 == 0) {
          if ((*(byte *)(param_1 + 8) & 1) == 0) {
            uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
          }
          else {
            uVar5 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
          }
          lVar4 = FUN_143a6db80(uVar5);
          *(longlong *)(param_1 + 0x20) = lVar4;
        }
        pbVar3 = (byte *)*param_2;
        if ((pbVar3 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar3, *pbVar3 < 0x80)) {
          *param_2 = pbVar3 + 1;
        }
        else {
          uVar5 = FUN_1439f98b0(param_2);
          uVar7 = uVar5 & 0xffffffff;
          if ((int)uVar5 < 0) break;
        }
        uVar5 = FUN_1439f8500(param_2,&local_res10,uVar7);
        if ((local_res14 < 0) || (uVar5 = FUN_143a7f710(lVar4,param_2), (char)uVar5 == '\0')) break;
        uVar5 = FUN_1439f84b0(param_2,local_res10);
      }
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar2;
      pbVar3 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_143a7f5b3;
LAB_143a7f6be:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5,uVar7);
    }
  } while ((char)uVar5 != '\0');
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 143a7f710 FUN_143a7f710 body=392 status=ok
// SIG undefined FUN_143a7f710(void)

ulonglong FUN_143a7f710(longlong param_1,ulonglong *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar5 = (byte *)*param_2;
    uVar8 = 0;
    if (pbVar5 < (byte *)param_2[1]) {
      bVar3 = *pbVar5;
      uVar8 = (uint)bVar3;
      pbVar1 = pbVar5 + 1;
      if ((char)bVar3 < '\x01') {
        if (pbVar1 < (byte *)param_2[1]) {
          bVar4 = *pbVar1;
          if (0x7f < (~(uint)bVar4 & (uint)bVar3)) {
            *param_2 = (ulonglong)(pbVar5 + 2);
            uVar8 = (bVar3 - 0x80) + (uint)bVar4 * 0x80;
            goto LAB_143a7f78d;
          }
        }
        goto LAB_143a7f774;
      }
      *param_2 = (ulonglong)pbVar1;
LAB_143a7f78d:
      uVar7 = (ulonglong)(uVar8 & 0xfffffff8);
      if (((uVar8 & 0xfffffff8) != 0x1f38) || ((char)uVar8 != ':')) goto LAB_143a7f80d;
      uVar6 = FUN_143a716f0(param_1 + 0x30);
      pbVar5 = (byte *)*param_2;
      if ((pbVar5 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar5, *pbVar5 < 0x80)) {
        *param_2 = (ulonglong)(pbVar5 + 1);
      }
      else {
        uVar7 = FUN_1439f98b0(param_2);
        if ((int)uVar7 < 0) break;
      }
      uVar7 = FUN_1439f8500(param_2,&local_res10,uVar7 & 0xffffffff);
      if (local_res14 < 0) break;
      uVar7 = FUN_143a80040(uVar6,param_2);
      if ((char)uVar7 == '\0') break;
      uVar7 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
LAB_143a7f774:
      uVar8 = FUN_1439f8c60(param_2,uVar8);
      uVar7 = (ulonglong)(uVar8 - 1);
      if (uVar8 - 1 < 0x3fff) goto LAB_143a7f78d;
LAB_143a7f80d:
      if (uVar8 == 0) {
        return CONCAT71((int7)(uVar7 >> 8),1);
      }
      puVar2 = (ulonglong *)(param_1 + 0x20);
      if (uVar8 < 8000) {
        if ((*(byte *)puVar2 & 1) == 0) {
          uVar7 = FUN_141515d60();
        }
        else {
          uVar7 = *puVar2 & 0xfffffffffffffffe;
        }
        uVar7 = FUN_143a1e1e0(param_2,uVar8,uVar7);
      }
      else {
        if ((*(byte *)puVar2 & 1) == 0) {
          uVar7 = FUN_141515d60();
        }
        else {
          uVar7 = *puVar2 & 0xfffffffffffffffe;
        }
        uVar7 = FUN_143a5bf40(param_1 + 8,uVar8,param_2,&DAT_146ba3ac0,uVar7);
      }
    }
  } while ((char)uVar7 != '\0');
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 143a7f8a0 FUN_143a7f8a0 body=640 status=ok
// SIG undefined FUN_143a7f8a0(void)

ulonglong FUN_143a7f8a0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int *piVar10;
  char cVar11;
  undefined4 local_res10;
  int local_res14;
  undefined4 local_res18;
  int local_res1c;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar6 = 0;
    if (((byte *)param_2[1] <= pbVar4) || (uVar6 = (ulonglong)*pbVar4, (char)*pbVar4 < '\x01')) {
      uVar2 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar2;
      pbVar4 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_143a7f8f2;
      goto LAB_143a7fad6;
    }
    pbVar4 = pbVar4 + 1;
    *param_2 = pbVar4;
LAB_143a7f8f2:
    iVar1 = (int)(uVar6 >> 3);
    cVar11 = (char)uVar6;
    if (iVar1 == 1) {
      if (cVar11 != '\n') goto LAB_143a7fad6;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      else {
        uVar6 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
      }
      puVar8 = *(undefined **)(param_1 + 0x30);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x30,uVar6,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x30);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar8);
    }
    else {
      if (iVar1 == 2) {
        if (cVar11 == '\x12') {
          piVar10 = *(int **)(param_1 + 0x28);
          if (piVar10 == (int *)0x0) {
LAB_143a7f9ec:
            FUN_1439f23d0(param_1 + 0x18,*(int *)(param_1 + 0x24) + 1);
            piVar10 = *(int **)(param_1 + 0x28);
            iVar3 = *piVar10;
LAB_143a7fa00:
            *piVar10 = iVar3 + 1;
            uVar7 = FUN_143a6d910(*(undefined8 *)(param_1 + 0x18));
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x28) + 8 + (longlong)*(int *)(param_1 + 0x20) * 8) = uVar7;
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          }
          else {
            iVar1 = *(int *)(param_1 + 0x20);
            iVar3 = *piVar10;
            if (iVar3 <= iVar1) {
              if (iVar3 == *(int *)(param_1 + 0x24)) goto LAB_143a7f9ec;
              goto LAB_143a7fa00;
            }
            uVar7 = *(undefined8 *)(piVar10 + (longlong)iVar1 * 2 + 2);
            *(int *)(param_1 + 0x20) = iVar1 + 1;
          }
          pbVar4 = (byte *)*param_2;
          if ((pbVar4 < (byte *)param_2[1]) && (uVar9 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
            *param_2 = pbVar4 + 1;
          }
          else {
            uVar6 = FUN_1439f98b0(param_2);
            uVar9 = uVar6 & 0xffffffff;
            if ((int)uVar6 < 0) break;
          }
          uVar6 = FUN_1439f8500(param_2,&local_res18,uVar9);
          if ((-1 < local_res1c) && (uVar6 = FUN_143a7f090(uVar7,param_2), (char)uVar6 != '\0')) {
            uVar6 = FUN_1439f84b0(param_2,local_res18);
            goto LAB_143a7faff;
          }
          break;
        }
      }
      else if ((iVar1 == 3) && (cVar11 == '\x1a')) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        lVar5 = *(longlong *)(param_1 + 0x38);
        if (lVar5 == 0) {
          if ((*(byte *)(param_1 + 8) & 1) == 0) {
            uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
          }
          else {
            uVar6 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
          }
          lVar5 = FUN_143a6dd30(uVar6);
          *(longlong *)(param_1 + 0x38) = lVar5;
        }
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (uVar9 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
          *param_2 = pbVar4 + 1;
        }
        else {
          uVar6 = FUN_1439f98b0(param_2);
          uVar9 = uVar6 & 0xffffffff;
          if ((int)uVar6 < 0) break;
        }
        uVar6 = FUN_1439f8500(param_2,&local_res10,uVar9);
        if ((-1 < local_res14) && (uVar6 = FUN_143a7fb20(lVar5,param_2), (char)uVar6 != '\0')) {
          uVar6 = FUN_1439f84b0(param_2,local_res10);
          goto LAB_143a7faff;
        }
        break;
      }
LAB_143a7fad6:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar9 = FUN_141515d60();
      }
      else {
        uVar9 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar9);
    }
LAB_143a7faff:
  } while ((char)uVar6 != '\0');
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 143a7fb20 FUN_143a7fb20 body=399 status=ok
// SIG undefined FUN_143a7fb20(void)

ulonglong FUN_143a7fb20(longlong param_1,ulonglong *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong local_18;
  char local_10;
  
LAB_143a7fb40:
  do {
    pbVar5 = (byte *)*param_2;
    uVar8 = 0;
    if (pbVar5 < (byte *)param_2[1]) {
      bVar3 = *pbVar5;
      uVar8 = (ulonglong)bVar3;
      pbVar1 = pbVar5 + 1;
      if ((char)bVar3 < '\x01') {
        if (pbVar1 < (byte *)param_2[1]) {
          bVar4 = *pbVar1;
          if (0x7f < (~(uint)bVar4 & (uint)bVar3)) {
            *param_2 = (ulonglong)(pbVar5 + 2);
            uVar8 = (ulonglong)((bVar3 - 0x80) + (uint)bVar4 * 0x80);
            goto LAB_143a7fb9d;
          }
        }
        goto LAB_143a7fb84;
      }
      *param_2 = (ulonglong)pbVar1;
LAB_143a7fb9d:
      uVar9 = uVar8 >> 3;
      if ((int)uVar9 == 0x21) {
        if ((char)uVar8 != '\b') goto LAB_143a7fc24;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (bVar3 = *pbVar5, bVar3 < 0x80)) {
          *param_2 = (ulonglong)(pbVar5 + 1);
          *(bool *)(param_1 + 0x48) = bVar3 != 0;
        }
        else {
          uVar8 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_143a7fc8b;
          *(bool *)(param_1 + 0x48) = local_18 != 0;
        }
        goto LAB_143a7fb40;
      }
      if (((int)uVar9 != 999) || ((char)uVar8 != ':')) goto LAB_143a7fc24;
      uVar7 = FUN_143a716f0(param_1 + 0x30);
      uVar8 = FUN_143a6f9f0(param_2,uVar7);
    }
    else {
LAB_143a7fb84:
      uVar6 = FUN_1439f8c60(param_2,uVar8);
      uVar8 = (ulonglong)uVar6;
      uVar9 = (ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x3fff) goto LAB_143a7fb9d;
LAB_143a7fc24:
      if ((uint)uVar8 == 0) {
        return CONCAT71((int7)(uVar9 >> 8),1);
      }
      puVar2 = (ulonglong *)(param_1 + 0x20);
      if ((uint)uVar8 < 8000) {
        if ((*(byte *)puVar2 & 1) == 0) {
          uVar9 = FUN_141515d60();
        }
        else {
          uVar9 = *puVar2 & 0xfffffffffffffffe;
        }
        uVar8 = FUN_143a1e1e0(param_2,uVar8,uVar9);
      }
      else {
        if ((*(byte *)puVar2 & 1) == 0) {
          uVar9 = FUN_141515d60();
        }
        else {
          uVar9 = *puVar2 & 0xfffffffffffffffe;
        }
        uVar8 = FUN_143a5bf40(param_1 + 8,uVar8,param_2,&DAT_146ba3b50,uVar9);
      }
    }
    if ((char)uVar8 == '\0') {
LAB_143a7fc8b:
      return uVar8 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a7fcb0 FUN_143a7fcb0 body=365 status=ok
// SIG undefined FUN_143a7fcb0(void)

ulonglong FUN_143a7fcb0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_143a7fd02:
      if (((int)(uVar6 >> 3) != 1) || ((char)uVar6 != '\n')) goto LAB_143a7fdd1;
      piVar8 = *(int **)(param_1 + 0x28);
      if (piVar8 == (int *)0x0) {
LAB_143a7fd3f:
        FUN_1439f23d0(param_1 + 0x18,*(int *)(param_1 + 0x24) + 1);
        piVar8 = *(int **)(param_1 + 0x28);
        iVar3 = *piVar8;
LAB_143a7fd53:
        *piVar8 = iVar3 + 1;
        uVar5 = FUN_143a6dec0(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)*(int *)(param_1 + 0x20) * 8)
             = uVar5;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x20);
        iVar3 = *piVar8;
        if (iVar3 <= iVar1) {
          if (iVar3 == *(int *)(param_1 + 0x24)) goto LAB_143a7fd3f;
          goto LAB_143a7fd53;
        }
        uVar5 = *(undefined8 *)(piVar8 + (longlong)iVar1 * 2 + 2);
        *(int *)(param_1 + 0x20) = iVar1 + 1;
      }
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
        *param_2 = pbVar4 + 1;
      }
      else {
        uVar6 = FUN_1439f98b0(param_2);
        uVar7 = uVar6 & 0xffffffff;
        if ((int)uVar6 < 0) break;
      }
      uVar6 = FUN_1439f8500(param_2,&local_res10,uVar7);
      if ((local_res14 < 0) || (uVar6 = FUN_143a7fe20(uVar5,param_2), (char)uVar6 == '\0')) break;
      uVar6 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar2;
      pbVar4 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_143a7fd02;
LAB_143a7fdd1:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar7);
    }
  } while ((char)uVar6 != '\0');
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 143a7fe20 FUN_143a7fe20 body=544 status=ok
// SIG undefined FUN_143a7fe20(void)

ulonglong FUN_143a7fe20(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  char cVar8;
  
LAB_143a7fe41:
  do {
    pbVar1 = (byte *)*param_2;
    uVar5 = 0;
    if (((byte *)param_2[1] <= pbVar1) || (uVar5 = (ulonglong)*pbVar1, (char)*pbVar1 < '\x01')) {
      uVar2 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar2;
      uVar7 = (ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_143a7fe72;
      goto LAB_143a7fff4;
    }
    *param_2 = pbVar1 + 1;
LAB_143a7fe72:
    iVar3 = (int)(uVar5 >> 3);
    cVar8 = (char)uVar5;
    if (iVar3 == 1) {
      if (cVar8 == '\n') {
        uVar5 = FUN_1414fefc0(param_2,param_1 + 0x18);
      }
      else {
        uVar7 = 0;
        if (cVar8 != '\b') goto LAB_143a7fff4;
        uVar5 = FUN_1414ff220(1,10,param_2,param_1 + 0x18);
      }
    }
    else if (iVar3 == 2) {
      if (cVar8 == '\x12') {
        uVar5 = FUN_1414fefc0(param_2,param_1 + 0x30);
      }
      else {
        uVar7 = 0;
        if (cVar8 != '\x10') goto LAB_143a7fff4;
        uVar5 = FUN_1414ff220(1,0x12,param_2,param_1 + 0x30);
      }
    }
    else {
      if (iVar3 == 3) {
        uVar7 = 0;
        if (cVar8 == '\x1a') {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          if ((*(byte *)(param_1 + 8) & 1) == 0) {
            uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
          }
          else {
            uVar5 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
          }
          puVar6 = *(undefined **)(param_1 + 0x60);
          if (puVar6 == &DAT_146ba2f50) {
            FUN_141505a20(param_1 + 0x60,uVar5,&DAT_146ba2f50);
            puVar6 = *(undefined **)(param_1 + 0x60);
          }
          uVar5 = thunk_FUN_1439fa490(param_2,puVar6);
          goto LAB_143a8001d;
        }
      }
      else if (iVar3 == 4) {
        uVar7 = 0;
        if (cVar8 == '\"') {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
          if ((*(byte *)(param_1 + 8) & 1) == 0) {
            uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
          }
          else {
            uVar5 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
          }
          puVar6 = *(undefined **)(param_1 + 0x68);
          if (puVar6 == &DAT_146ba2f50) {
            FUN_141505a20(param_1 + 0x68,uVar5,&DAT_146ba2f50);
            puVar6 = *(undefined **)(param_1 + 0x68);
          }
          uVar5 = thunk_FUN_1439fa490(param_2,puVar6);
          goto LAB_143a8001d;
        }
      }
      else {
        uVar7 = (ulonglong)(iVar3 - 6U);
        if ((iVar3 - 6U == 0) && (cVar8 == '2')) {
          uVar4 = FUN_1439f1a80(param_1 + 0x48);
          uVar5 = thunk_FUN_1439fa490(param_2,uVar4);
          if ((char)uVar5 == '\0') goto LAB_143a80025;
          iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x48);
          FUN_1439f1d30(param_1 + 0x48,iVar3 + -1);
          iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x48);
          FUN_1439f1d30(param_1 + 0x48,iVar3 + -1);
          goto LAB_143a7fe41;
        }
      }
LAB_143a7fff4:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)(uVar7 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5,uVar7);
    }
LAB_143a8001d:
    if ((char)uVar5 == '\0') {
LAB_143a80025:
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a80040 FUN_143a80040 body=845 status=ok
// SIG undefined FUN_143a80040(void)

ulonglong FUN_143a80040(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int *piVar10;
  char cVar11;
  undefined4 local_res10;
  int local_res14;
  ulonglong local_38;
  char local_30;
  undefined8 local_28;
  char local_20;
  
LAB_143a80070:
  do {
    pbVar3 = (byte *)*param_2;
    uVar9 = 0;
    if (((byte *)param_2[1] <= pbVar3) || (uVar9 = (ulonglong)*pbVar3, (char)*pbVar3 < '\x01')) {
      uVar4 = FUN_1439f8c60(param_2,uVar9);
      uVar9 = (ulonglong)uVar4;
      uVar6 = (ulonglong)(uVar4 - 1);
      if (uVar4 - 1 < 0x7f) goto LAB_143a800a1;
      goto LAB_143a8033d;
    }
    *param_2 = (longlong)(pbVar3 + 1);
LAB_143a800a1:
    uVar4 = (int)(uVar9 >> 3) - 2;
    uVar6 = (ulonglong)uVar4;
    if (6 < uVar4) goto LAB_143a8033d;
    uVar6 = (ulonglong)(int)uVar4;
    cVar11 = (char)uVar9;
    switch(uVar4) {
    case 0:
      if (cVar11 != '\x12') break;
      piVar10 = *(int **)(param_1 + 0x28);
      if (piVar10 == (int *)0x0) {
LAB_143a800ef:
        FUN_1439f23d0(param_1 + 0x18,*(int *)(param_1 + 0x24) + 1);
        piVar10 = *(int **)(param_1 + 0x28);
        iVar5 = *piVar10;
LAB_143a80103:
        *piVar10 = iVar5 + 1;
        uVar7 = FUN_143a6e080(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)*(int *)(param_1 + 0x20) * 8)
             = uVar7;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x20);
        iVar5 = *piVar10;
        if (iVar5 <= iVar2) {
          if (iVar5 == *(int *)(param_1 + 0x24)) goto LAB_143a800ef;
          goto LAB_143a80103;
        }
        uVar7 = *(undefined8 *)(piVar10 + (longlong)iVar2 * 2 + 2);
        *(int *)(param_1 + 0x20) = iVar2 + 1;
      }
      pbVar3 = (byte *)*param_2;
      if ((pbVar3 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar3, *pbVar3 < 0x80)) {
        *param_2 = (longlong)(pbVar3 + 1);
      }
      else {
        uVar9 = FUN_1439f98b0(param_2);
        uVar6 = uVar9 & 0xffffffff;
        if ((int)uVar9 < 0) goto LAB_143a8036e;
      }
      uVar9 = FUN_1439f8500(param_2,&local_res10,uVar6);
      if ((-1 < local_res14) && (uVar9 = FUN_143a803b0(uVar7,param_2), (char)uVar9 != '\0')) {
        uVar9 = FUN_1439f84b0(param_2,local_res10);
        goto LAB_143a80366;
      }
      goto LAB_143a8036e;
    case 1:
      if (cVar11 == '\x1a') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar9 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar9 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x30);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x30,uVar9,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x30);
        }
        uVar9 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a80366;
      }
      break;
    case 2:
      if (cVar11 != ' ') break;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if (((byte *)param_2[1] <= (byte *)*param_2) || (bVar1 = *(byte *)*param_2, 0x7f < bVar1)) {
        FUN_1439f8f00(param_2,&local_38);
        *(ulonglong *)(param_1 + 0x48) = local_38;
        uVar9 = local_38;
        cVar11 = local_30;
        goto LAB_143a80368;
      }
      *(ulonglong *)(param_1 + 0x48) = (ulonglong)bVar1;
      *param_2 = *param_2 + 1;
      goto LAB_143a80070;
    case 3:
      if (cVar11 == '(') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
        pbVar3 = (byte *)*param_2;
        if ((pbVar3 < (byte *)param_2[1]) && (bVar1 = *pbVar3, bVar1 < 0x80)) {
          *param_2 = (longlong)(pbVar3 + 1);
          *(ulonglong *)(param_1 + 0x50) = (ulonglong)bVar1;
        }
        else {
          uVar9 = FUN_1439f8f00(param_2,&local_28);
          if (local_20 == '\0') goto LAB_143a8036e;
          *(undefined8 *)(param_1 + 0x50) = local_28;
        }
        goto LAB_143a80070;
      }
      break;
    case 4:
      if (cVar11 == '1') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
        uVar9 = FUN_143a6fa80(param_2,param_1 + 0x58);
        goto LAB_143a80366;
      }
      break;
    case 5:
      if (cVar11 == ':') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar9 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar9 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x38);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x38,uVar9,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x38);
        }
        uVar9 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a80366;
      }
      break;
    case 6:
      if (cVar11 == 'B') {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          uVar9 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
        }
        else {
          uVar9 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
        }
        puVar8 = *(undefined **)(param_1 + 0x40);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_141505a20(param_1 + 0x40,uVar9,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x40);
        }
        uVar9 = thunk_FUN_1439fa490(param_2,puVar8);
        goto LAB_143a80366;
      }
    }
LAB_143a8033d:
    if ((int)uVar9 == 0) {
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar6 = FUN_141515d60();
    }
    else {
      uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    uVar9 = FUN_143a1e1e0(param_2,uVar9,uVar6);
LAB_143a80366:
    cVar11 = (char)uVar9;
LAB_143a80368:
    if (cVar11 == '\0') {
LAB_143a8036e:
      return uVar9 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a803b0 FUN_143a803b0 body=345 status=ok
// SIG undefined FUN_143a803b0(void)

ulonglong FUN_143a803b0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong local_18;
  char local_10;
  
LAB_143a803d1:
  do {
    pbVar4 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_143a80402:
      iVar2 = (int)(uVar5 >> 3);
      if (iVar2 != 1) {
        if ((iVar2 != 2) || ((char)uVar5 != '\x10')) goto LAB_143a804bd;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (bVar1 = *pbVar4, bVar1 < 0x80)) {
          *param_2 = pbVar4 + 1;
          *(bool *)(param_1 + 0x20) = bVar1 != 0;
        }
        else {
          uVar5 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_143a804ee;
          *(bool *)(param_1 + 0x20) = local_18 != 0;
        }
        goto LAB_143a803d1;
      }
      if ((char)uVar5 != '\n') goto LAB_143a804bd;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      else {
        uVar5 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
      }
      puVar6 = *(undefined **)(param_1 + 0x18);
      if (puVar6 == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x18,uVar5,&DAT_146ba2f50);
        puVar6 = *(undefined **)(param_1 + 0x18);
      }
      uVar5 = thunk_FUN_1439fa490(param_2,puVar6);
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_143a80402;
LAB_143a804bd:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5,uVar7);
    }
    if ((char)uVar5 == '\0') {
LAB_143a804ee:
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 143a80510 FUN_143a80510 body=8 status=ok
// SIG undefined FUN_143a80510(void)

void FUN_143a80510(undefined8 param_1,undefined8 param_2)

{
  FUN_143a6cd20(param_2);
  return;
}



// FUNCTION 143a80520 FUN_143a80520 body=7 status=ok
// SIG undefined FUN_143a80520(void)

void FUN_143a80520(void)

{
  FUN_143a6cd20(0);
  return;
}



// FUNCTION 143a80530 FUN_143a80530 body=8 status=ok
// SIG undefined FUN_143a80530(void)

void FUN_143a80530(undefined8 param_1,undefined8 param_2)

{
  FUN_143a6cd60(param_2);
  return;
}



// FUNCTION 143a80540 FUN_143a80540 body=7 status=ok
// SIG undefined FUN_143a80540(void)

void FUN_143a80540(void)

{
  FUN_143a6cd60(0);
  return;
}



// FUNCTION 143a80550 FUN_143a80550 body=8 status=ok
// SIG undefined FUN_143a80550(void)

void FUN_143a80550(undefined8 param_1,undefined8 param_2)

{
  FUN_143a6ce20(param_2);
  return;
}



// FUNCTION 143a80560 FUN_143a80560 body=7 status=ok
// SIG undefined FUN_143a80560(void)

void FUN_143a80560(void)

{
  FUN_143a6ce20(0);
  return;
}



// FUNCTION 143a80570 FUN_143a80570 body=8 status=ok
// SIG undefined FUN_143a80570(void)

void FUN_143a80570(undefined8 param_1,undefined8 param_2)

{
  FUN_143a6ceb0(param_2);
  return;
}



// FUNCTION 143a80580 FUN_143a80580 body=7 status=ok
// SIG undefined FUN_143a80580(void)

void FUN_143a80580(void)

{
  FUN_143a6ceb0(0);
  return;
}



// FUNCTION 143a80590 FUN_143a80590 body=8 status=ok
// SIG undefined FUN_143a80590(void)

void FUN_143a80590(undefined8 param_1,undefined8 param_2)

{
  FUN_143a6cfb0(param_2);
  return;
}


