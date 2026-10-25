// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1415237f0 FUN_1415237f0 body=183 status=ok
// SIG undefined FUN_1415237f0(void)

longlong FUN_1415237f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if (lVar1 != 0) {
    uVar4 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (lVar1 != 0) {
    uVar4 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if (lVar1 != 0) {
    uVar4 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



// FUNCTION 1415238b0 FUN_1415238b0 body=613 status=ok
// SIG undefined FUN_1415238b0(void)

longlong FUN_1415238b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if (lVar1 != 0) {
    uVar5 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (lVar1 != 0) {
    uVar5 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if (lVar1 != 0) {
    uVar5 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
  if (lVar1 != 0) {
    uVar5 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
  if (lVar1 != 0) {
    uVar5 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
  if (lVar1 != 0) {
    uVar5 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if (lVar1 != 0) {
    uVar5 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
  if (lVar1 != 0) {
    uVar5 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10);
  if (lVar1 != 0) {
    uVar5 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
  if (lVar1 != 0) {
    uVar5 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  uVar5 = *(uint *)(param_1 + 0x60);
  uVar6 = 10;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
      uVar4 = 10;
    }
    else {
      iVar2 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar4 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
    }
    lVar3 = lVar3 + 1 + uVar4;
  }
  uVar5 = *(uint *)(param_1 + 100);
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
      uVar4 = 10;
    }
    else {
      iVar2 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar4 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
    }
    lVar3 = lVar3 + 1 + uVar4;
  }
  uVar5 = *(uint *)(param_1 + 0x68);
  if (uVar5 != 0) {
    if (-1 < (int)uVar5) {
      iVar2 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar6 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
    }
    lVar3 = lVar3 + 1 + uVar6;
  }
  *(int *)(param_1 + 0x6c) = (int)lVar3;
  return lVar3;
}



// FUNCTION 141523b20 FUN_141523b20 body=278 status=ok
// SIG undefined FUN_141523b20(void)

longlong FUN_141523b20(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    lVar2 = FUN_143a19d80(param_1[1] & 0xfffffffffffffffe);
  }
  lVar3 = *(longlong *)(param_1[2] + 0x10);
  if (lVar3 != 0) {
    uVar5 = (uint)lVar3 | 1;
    iVar1 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar3;
  }
  lVar3 = *(longlong *)(param_1[3] + 0x10);
  if (lVar3 != 0) {
    uVar5 = (uint)lVar3 | 1;
    iVar1 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar3;
  }
  if ((param_1 != &DAT_1468a5b88) && (param_1[4] != 0)) {
    lVar3 = FUN_141522f40();
    uVar5 = (uint)lVar3 | 1;
    iVar1 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar3;
  }
  uVar5 = *(uint *)(param_1 + 5);
  uVar6 = 10;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
      uVar4 = 10;
    }
    else {
      iVar1 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar4 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
    }
    lVar2 = lVar2 + 1 + uVar4;
  }
  uVar5 = *(uint *)((longlong)param_1 + 0x2c);
  if (uVar5 != 0) {
    if (-1 < (int)uVar5) {
      iVar1 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar6 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
    }
    lVar2 = lVar2 + 1 + uVar6;
  }
  *(int *)(param_1 + 6) = (int)lVar2;
  return lVar2;
}



// FUNCTION 141523c40 FUN_141523c40 body=1209 status=ok
// SIG undefined FUN_141523c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141523c40(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar5 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar5 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar9 = 0;
  lVar5 = lVar5 + (ulonglong)uVar1;
  uVar10 = 10;
  if (uVar1 != 0) {
    do {
      lVar6 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar9 * 8);
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar2 + 8) & 0xfffffffffffffffe);
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
      if (lVar3 != 0) {
        uVar8 = (uint)lVar3 | 1;
        local_88 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_88 == 0; local_88 = local_88 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_88 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      uVar8 = *(uint *)(lVar2 + 0x18);
      if (uVar8 != 0) {
        uVar7 = uVar10;
        if (-1 < (int)uVar8) {
          local_84 = 0x1f;
          if ((uVar8 | 1) != 0) {
            for (; (uVar8 | 1) >> local_84 == 0; local_84 = local_84 + -1) {
            }
          }
          uVar7 = (ulonglong)(local_84 * 9 + 0x49U >> 6);
        }
        lVar6 = lVar6 + 1 + uVar7;
      }
      uVar8 = *(uint *)(lVar2 + 0x1c);
      if (uVar8 != 0) {
        uVar7 = uVar10;
        if (-1 < (int)uVar8) {
          local_80 = 0x1f;
          if ((uVar8 | 1) != 0) {
            for (; (uVar8 | 1) >> local_80 == 0; local_80 = local_80 + -1) {
            }
          }
          uVar7 = (ulonglong)(local_80 * 9 + 0x49U >> 6);
        }
        lVar6 = lVar6 + 1 + uVar7;
      }
      uVar8 = *(uint *)(lVar2 + 0x20);
      if (uVar8 != 0) {
        uVar7 = uVar10;
        if (-1 < (int)uVar8) {
          local_7c = 0x1f;
          if ((uVar8 | 1) != 0) {
            for (; (uVar8 | 1) >> local_7c == 0; local_7c = local_7c + -1) {
            }
          }
          uVar7 = (ulonglong)(local_7c * 9 + 0x49U >> 6);
        }
        lVar6 = lVar6 + 1 + uVar7;
      }
      *(uint *)(lVar2 + 0x24) = (uint)lVar6;
      uVar8 = (uint)lVar6 | 1;
      uVar9 = uVar9 + 1;
      local_78 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> local_78 == 0; local_78 = local_78 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_78 * 9 + 0x49U >> 6) + lVar6;
    } while (uVar9 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar9 = 0;
  lVar5 = lVar5 + (ulonglong)uVar1;
  if (uVar1 != 0) {
    do {
      lVar6 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar9 * 8);
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar2 + 8) & 0xfffffffffffffffe);
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
      if (lVar3 != 0) {
        uVar8 = (uint)lVar3 | 1;
        local_74 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_74 == 0; local_74 = local_74 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_74 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
      if (lVar3 != 0) {
        uVar8 = (uint)lVar3 | 1;
        local_70 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_70 == 0; local_70 = local_70 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_70 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      *(uint *)(lVar2 + 0x20) = (uint)lVar6;
      uVar8 = (uint)lVar6 | 1;
      uVar9 = uVar9 + 1;
      local_6c = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> local_6c == 0; local_6c = local_6c + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_6c * 9 + 0x49U >> 6) + lVar6;
    } while (uVar9 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar9 = 0;
  lVar5 = lVar5 + (ulonglong)uVar1;
  if (uVar1 != 0) {
    do {
      lVar6 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)(int)uVar9 * 8);
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar2 + 8) & 0xfffffffffffffffe);
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
      if (lVar3 != 0) {
        uVar8 = (uint)lVar3 | 1;
        local_68 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_68 == 0; local_68 = local_68 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_68 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
      if (lVar3 != 0) {
        uVar8 = (uint)lVar3 | 1;
        local_64 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_64 == 0; local_64 = local_64 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_64 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x10);
      if (lVar3 != 0) {
        uVar8 = (uint)lVar3 | 1;
        local_60 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_60 == 0; local_60 = local_60 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_60 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      *(uint *)(lVar2 + 0x28) = (uint)lVar6;
      uVar8 = (uint)lVar6 | 1;
      uVar9 = uVar9 + 1;
      local_5c = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> local_5c == 0; local_5c = local_5c + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_5c * 9 + 0x49U >> 6) + lVar6;
    } while (uVar9 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar9 = 0;
  lVar5 = lVar5 + (ulonglong)uVar1;
  if (uVar1 != 0) {
    do {
      lVar6 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)(int)uVar9 * 8);
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar2 + 8) & 0xfffffffffffffffe);
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
      if (lVar3 != 0) {
        uVar8 = (uint)lVar3 | 1;
        local_58 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_58 == 0; local_58 = local_58 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_58 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
      if (lVar3 != 0) {
        uVar8 = (uint)lVar3 | 1;
        local_54 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_54 == 0; local_54 = local_54 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_54 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x10);
      if (lVar3 != 0) {
        uVar8 = (uint)lVar3 | 1;
        local_50 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_50 == 0; local_50 = local_50 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_50 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x10);
      if (lVar3 != 0) {
        uVar8 = (uint)lVar3 | 1;
        local_4c = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_4c == 0; local_4c = local_4c + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_4c * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      *(uint *)(lVar2 + 0x30) = (uint)lVar6;
      uVar8 = (uint)lVar6 | 1;
      uVar9 = uVar9 + 1;
      local_48 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> local_48 == 0; local_48 = local_48 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_48 * 9 + 0x49U >> 6) + lVar6;
    } while (uVar9 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x70);
  if (uVar1 != 0) {
    uVar7 = uVar10;
    if (-1 < (int)uVar1) {
      iVar4 = 0x1f;
      if ((uVar1 | 1) != 0) {
        for (; (uVar1 | 1) >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar7 = (ulonglong)(iVar4 * 9 + 0x49U >> 6);
    }
    lVar5 = lVar5 + 1 + uVar7;
  }
  uVar1 = *(uint *)(param_1 + 0x74);
  if (uVar1 != 0) {
    if (-1 < (int)uVar1) {
      iVar4 = 0x1f;
      if ((uVar1 | 1) != 0) {
        for (; (uVar1 | 1) >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar10 = (ulonglong)(iVar4 * 9 + 0x49U >> 6);
    }
    lVar5 = lVar5 + 1 + uVar10;
  }
  *(int *)(param_1 + 0x78) = (int)lVar5;
  return lVar5;
}



// FUNCTION 141524100 FUN_141524100 body=291 status=ok
// SIG undefined FUN_141524100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141524100(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar4 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar7 = 0;
  lVar4 = lVar4 + (ulonglong)uVar1;
  if (uVar1 != 0) {
    do {
      lVar5 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar7 * 8);
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        lVar5 = FUN_143a19d80(*(ulonglong *)(lVar2 + 8) & 0xfffffffffffffffe);
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
      if (lVar3 != 0) {
        uVar6 = (uint)lVar3 | 1;
        local_38 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> local_38 == 0; local_38 = local_38 + -1) {
          }
        }
        lVar5 = lVar5 + (ulonglong)(local_38 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
      if (lVar3 != 0) {
        uVar6 = (uint)lVar3 | 1;
        local_34 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> local_34 == 0; local_34 = local_34 + -1) {
          }
        }
        lVar5 = lVar5 + (ulonglong)(local_34 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      *(uint *)(lVar2 + 0x20) = (uint)lVar5;
      uVar6 = (uint)lVar5 | 1;
      uVar7 = uVar7 + 1;
      local_30 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> local_30 == 0; local_30 = local_30 + -1) {
        }
      }
      lVar4 = lVar4 + (ulonglong)(local_30 * 9 + 0x49U >> 6) + lVar5;
    } while (uVar7 < uVar1);
  }
  *(int *)(param_1 + 0x28) = (int)lVar4;
  return lVar4;
}



// FUNCTION 141524230 FUN_141524230 body=1268 status=ok
// SIG undefined FUN_141524230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141524230(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar8 = 0;
  uVar3 = uVar8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    uVar3 = FUN_143a19d80(param_1[1] & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 3);
  lVar7 = uVar3 + uVar1;
  uVar3 = uVar8;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_141501a10(*(undefined8 *)(param_1[4] + 8 + (longlong)(int)uVar3 * 8));
      uVar9 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar9;
      uVar5 = (uint)lVar4 | 1;
      local_78 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> local_78 == 0; local_78 = local_78 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_78 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar9 < uVar1);
  }
  uVar1 = IStreamingManager::GetNumWantingResources(param_1 + 5);
  lVar7 = lVar7 + (ulonglong)uVar1;
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 5);
  uVar3 = uVar8;
  if (0 < iVar2) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 5,uVar3);
      uVar5 = (int)uVar3 + 1;
      uVar1 = (uint)*(longlong *)(lVar4 + 0x10) | 1;
      local_74 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> local_74 == 0; local_74 = local_74 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_74 * 9 + 0x49U >> 6) + *(longlong *)(lVar4 + 0x10);
      uVar3 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar2);
  }
  uVar1 = IStreamingManager::GetNumWantingResources(param_1 + 8);
  lVar7 = lVar7 + (ulonglong)uVar1;
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 8);
  uVar3 = uVar8;
  if (0 < iVar2) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 8,uVar3);
      uVar5 = (int)uVar3 + 1;
      uVar1 = (uint)*(longlong *)(lVar4 + 0x10) | 1;
      local_70 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> local_70 == 0; local_70 = local_70 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_70 * 9 + 0x49U >> 6) + *(longlong *)(lVar4 + 0x10);
      uVar3 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar2);
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  lVar7 = lVar7 + (ulonglong)uVar1;
  uVar3 = uVar8;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_141546290(*(undefined8 *)(param_1[0xd] + 8 + (longlong)(int)uVar3 * 8));
      uVar9 = (int)uVar3 + 1;
      uVar5 = (uint)lVar4 | 1;
      local_6c = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> local_6c == 0; local_6c = local_6c + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_6c * 9 + 0x49U >> 6) + lVar4;
      uVar3 = (ulonglong)uVar9;
    } while (uVar9 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0xf);
  lVar7 = lVar7 + (ulonglong)uVar1;
  uVar3 = uVar8;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_141501a10(*(undefined8 *)(param_1[0x10] + 8 + (longlong)(int)uVar3 * 8));
      uVar9 = (int)uVar3 + 1;
      uVar5 = (uint)lVar4 | 1;
      local_68 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> local_68 == 0; local_68 = local_68 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_68 * 9 + 0x49U >> 6) + lVar4;
      uVar3 = (ulonglong)uVar9;
    } while (uVar9 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x12);
  lVar7 = lVar7 + (ulonglong)uVar1;
  uVar3 = uVar8;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_141520340(*(undefined8 *)(param_1[0x13] + 8 + (longlong)(int)uVar3 * 8));
      uVar9 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar9;
      uVar5 = (uint)lVar4 | 1;
      local_64 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> local_64 == 0; local_64 = local_64 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_64 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar9 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x15);
  lVar7 = lVar7 + (ulonglong)uVar1;
  uVar3 = uVar8;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_141546230(*(undefined8 *)(param_1[0x16] + 8 + (longlong)(int)uVar3 * 8));
      uVar9 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar9;
      uVar5 = (uint)lVar4 | 1;
      local_60 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> local_60 == 0; local_60 = local_60 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_60 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar9 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar7 = lVar7 + (ulonglong)uVar1;
  uVar3 = uVar8;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_141520340(*(undefined8 *)(param_1[0x19] + 8 + (longlong)(int)uVar3 * 8));
      uVar9 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar9;
      uVar5 = (uint)lVar4 | 1;
      local_5c = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> local_5c == 0; local_5c = local_5c + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_5c * 9 + 0x49U >> 6) + lVar4;
    } while (uVar9 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x1b);
  lVar7 = lVar7 + (ulonglong)uVar1;
  uVar3 = uVar8;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_141520340(*(undefined8 *)(param_1[0x1c] + 8 + (longlong)(int)uVar3 * 8));
      uVar9 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar9;
      uVar5 = (uint)lVar4 | 1;
      local_58 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> local_58 == 0; local_58 = local_58 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_58 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar9 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x1e);
  lVar7 = lVar7 + (ulonglong)uVar1;
  uVar3 = uVar8;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_141545ef0(*(undefined8 *)(param_1[0x1f] + 8 + (longlong)(int)uVar3 * 8));
      uVar9 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar9;
      uVar5 = (uint)lVar4 | 1;
      local_54 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> local_54 == 0; local_54 = local_54 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_54 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar9 < uVar1);
  }
  uVar1 = IStreamingManager::GetNumWantingResources(param_1 + 0x20);
  lVar7 = lVar7 + (ulonglong)uVar1;
  iVar6 = (int)lVar7;
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x20);
  if (0 < iVar2) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 0x20,uVar8);
      uVar5 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar5;
      uVar1 = (uint)*(longlong *)(lVar4 + 0x10) | 1;
      local_50 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> local_50 == 0; local_50 = local_50 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_50 * 9 + 0x49U >> 6) + *(longlong *)(lVar4 + 0x10);
      iVar6 = (int)lVar7;
    } while ((int)uVar5 < iVar2);
  }
  lVar7 = FUN_1439fa120(param_1 + 0x23);
  uVar1 = 10;
  uVar5 = (uint)lVar7;
  if (lVar7 != 0) {
    if ((int)uVar5 < 0) {
      uVar9 = 10;
    }
    else {
      local_4c = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> local_4c == 0; local_4c = local_4c + -1) {
        }
      }
      uVar9 = local_4c * 9 + 0x49U >> 6;
    }
    iVar6 = iVar6 + 1 + uVar9;
  }
  iVar6 = iVar6 + uVar5;
  *(uint *)(param_1 + 0x25) = uVar5;
  if ((param_1 != &DAT_1468a5d30) && (param_1[0x26] != 0)) {
    uVar5 = FUN_141546a60();
    iVar2 = 0x1f;
    if ((uVar5 | 1) != 0) {
      for (; (uVar5 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar6 = iVar6 + (iVar2 * 9 + 0x49U >> 6) + 1 + uVar5;
  }
  if (param_1[0x27] != 0) {
    uVar3 = param_1[0x27] | 1;
    lVar7 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = iVar6 + ((int)lVar7 * 9 + 0x49U >> 6) + 1;
  }
  uVar5 = *(uint *)(param_1 + 0x28);
  if (uVar5 != 0) {
    if (-1 < (int)uVar5) {
      iVar2 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar1 = iVar2 * 9 + 0x49U >> 6;
    }
    iVar6 = iVar6 + 1 + uVar1;
  }
  iVar2 = iVar6 + 3;
  if (*(char *)((longlong)param_1 + 0x144) == '\0') {
    iVar2 = iVar6;
  }
  iVar6 = iVar2 + 3;
  if (*(char *)((longlong)param_1 + 0x145) == '\0') {
    iVar6 = iVar2;
  }
  *(int *)(param_1 + 0x29) = iVar6;
  return;
}



// FUNCTION 141524730 FUN_141524730 body=118 status=ok
// SIG undefined FUN_141524730(void)

longlong FUN_141524730(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if (lVar1 != 0) {
    uVar4 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  if (*(float *)(param_1 + 0x18) != 0.0) {
    lVar3 = lVar3 + 5;
  }
  if (*(float *)(param_1 + 0x1c) != 0.0) {
    lVar3 = lVar3 + 5;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



// FUNCTION 1415247b0 FUN_1415247b0 body=257 status=ok
// SIG undefined FUN_1415247b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1415247b0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar7 = 0;
  lVar3 = lVar3 + (ulonglong)uVar1;
  if (uVar1 != 0) {
    do {
      lVar4 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar7 * 8);
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        lVar4 = FUN_143a19d80(*(ulonglong *)(lVar2 + 8) & 0xfffffffffffffffe);
      }
      lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
      if (lVar6 != 0) {
        uVar5 = (uint)lVar6 | 1;
        local_28 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> local_28 == 0; local_28 = local_28 + -1) {
          }
        }
        lVar4 = lVar4 + (ulonglong)(local_28 * 9 + 0x49U >> 6) + 1 + lVar6;
      }
      lVar6 = lVar4 + 2;
      if (*(char *)(lVar2 + 0x18) == '\0') {
        lVar6 = lVar4;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(lVar2 + 0x1c) = (uint)lVar6;
      uVar5 = (uint)lVar6 | 1;
      local_24 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> local_24 == 0; local_24 = local_24 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(local_24 * 9 + 0x49U >> 6) + lVar6;
    } while (uVar7 < uVar1);
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



// FUNCTION 1415248c0 FUN_1415248c0 body=213 status=ok
// SIG undefined FUN_1415248c0(void)

longlong FUN_1415248c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if (lVar1 != 0) {
    uVar5 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar6 = 10;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
      uVar4 = 10;
    }
    else {
      iVar2 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar4 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
    }
    lVar3 = lVar3 + 1 + uVar4;
  }
  uVar5 = *(uint *)(param_1 + 0x1c);
  if (uVar5 != 0) {
    if (-1 < (int)uVar5) {
      iVar2 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar6 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
    }
    lVar3 = lVar3 + 1 + uVar6;
  }
  if (*(uint *)(param_1 + 0x20) != 0) {
    uVar5 = *(uint *)(param_1 + 0x20) | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



// FUNCTION 1415249a0 FUN_1415249a0 body=108 status=ok
// SIG undefined FUN_1415249a0(void)

longlong FUN_1415249a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if (lVar1 != 0) {
    uVar4 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  if (*(float *)(param_1 + 0x18) != 0.0) {
    lVar3 = lVar3 + 5;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar3;
  return lVar3;
}



// FUNCTION 141524a10 FUN_141524a10 body=338 status=ok
// SIG undefined FUN_141524a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141524a10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar5 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar5 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar8 = 0;
  lVar5 = lVar5 + (ulonglong)uVar4;
  if (uVar4 != 0) {
    do {
      lVar6 = 0;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar8 * 8);
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar1 + 8) & 0xfffffffffffffffe);
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x10);
      if (lVar2 != 0) {
        uVar7 = (uint)lVar2 | 1;
        local_48 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> local_48 == 0; local_48 = local_48 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_48 * 9 + 0x49U >> 6) + 1 + lVar2;
      }
      if (*(float *)(lVar1 + 0x18) != 0.0) {
        lVar6 = lVar6 + 5;
      }
      if (*(float *)(lVar1 + 0x1c) != 0.0) {
        lVar6 = lVar6 + 5;
      }
      *(uint *)(lVar1 + 0x20) = (uint)lVar6;
      uVar7 = (uint)lVar6 | 1;
      uVar8 = uVar8 + 1;
      local_44 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_44 == 0; local_44 = local_44 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_44 * 9 + 0x49U >> 6) + lVar6;
    } while (uVar8 < uVar4);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
  if (lVar1 != 0) {
    uVar4 = (uint)lVar1 | 1;
    iVar3 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    lVar5 = lVar5 + (ulonglong)(iVar3 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  *(int *)(param_1 + 0x30) = (int)lVar5;
  return lVar5;
}



// FUNCTION 141524b70 FUN_141524b70 body=290 status=ok
// SIG undefined FUN_141524b70(void)

longlong FUN_141524b70(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar8 = 0;
  lVar4 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  lVar4 = lVar4 + (ulonglong)uVar2;
  iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  if (0 < iVar3) {
    do {
      lVar5 = FUN_1439f1d30(param_1 + 0x10,iVar8);
      iVar8 = iVar8 + 1;
      uVar2 = (uint)*(longlong *)(lVar5 + 0x10) | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar4 = lVar4 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + *(longlong *)(lVar5 + 0x10);
    } while (iVar8 < iVar3);
  }
  lVar5 = lVar4 + 2;
  if (*(char *)(param_1 + 0x28) == '\0') {
    lVar5 = lVar4;
  }
  lVar4 = lVar5 + 2;
  if (*(char *)(param_1 + 0x29) == '\0') {
    lVar4 = lVar5;
  }
  lVar5 = lVar4 + 2;
  if (*(char *)(param_1 + 0x2a) == '\0') {
    lVar5 = lVar4;
  }
  lVar4 = lVar5 + 2;
  if (*(char *)(param_1 + 0x2b) == '\0') {
    lVar4 = lVar5;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  lVar5 = lVar4 + 2;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    lVar5 = lVar4;
  }
  uVar7 = 10;
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar6 = 10;
    }
    else {
      iVar8 = 0x1f;
      if ((uVar2 | 1) != 0) {
        for (; (uVar2 | 1) >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      uVar6 = (ulonglong)(iVar8 * 9 + 0x49U >> 6);
    }
    lVar5 = lVar5 + 1 + uVar6;
  }
  uVar2 = *(uint *)(param_1 + 0x34);
  if (uVar2 != 0) {
    if (-1 < (int)uVar2) {
      iVar8 = 0x1f;
      if ((uVar2 | 1) != 0) {
        for (; (uVar2 | 1) >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      uVar7 = (ulonglong)(iVar8 * 9 + 0x49U >> 6);
    }
    lVar5 = lVar5 + 1 + uVar7;
  }
  *(int *)(param_1 + 0x38) = (int)lVar5;
  return lVar5;
}



// FUNCTION 141524ca0 FUN_141524ca0 body=89 status=ok
// SIG undefined FUN_141524ca0(void)

void FUN_141524ca0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(uint *)(param_2 + 3);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined4 *)(**(code **)(*param_2 + 0xc0))(param_2);
      *(undefined4 *)(param_1 + 8) = *puVar2;
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
      uVar1 = *(uint *)(param_2 + 3);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined4 *)(**(code **)(*param_2 + 200))(param_2);
      *(undefined4 *)(param_1 + 0xc) = *puVar2;
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
    }
  }
  return;
}



// FUNCTION 141524d60 FUN_141524d60 body=45 status=ok
// SIG undefined FUN_141524d60(void)

void FUN_141524d60(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_141504400();
  }
  FUN_1415421f0(param_1 + 0x78);
  FUN_143a124c0(param_1);
  return;
}



// FUNCTION 141524d90 FUN_141524d90 body=45 status=ok
// SIG undefined FUN_141524d90(void)

void FUN_141524d90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_141504400();
  }
  FUN_1415422c0(param_1 + 0x78);
  FUN_143a124c0(param_1);
  return;
}



// FUNCTION 141524dc0 FUN_141524dc0 body=172 status=ok
// SIG undefined FUN_141524dc0(void)

void FUN_141524dc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined1 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 141524e70 FUN_141524e70 body=69 status=ok
// SIG undefined FUN_141524e70(void)

void FUN_141524e70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
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
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 141524f10 FUN_141524f10 body=2001 status=ok
// SIG undefined FUN_141524f10(void)

void FUN_141524f10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar7 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined4 *)(lVar3 + 0x20) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar6 = lVar7;
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar6 = lVar7;
    do {
      FUN_141525dc0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar6 = lVar7;
    do {
      FUN_141526450(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x90);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0x18);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined4 *)(lVar3 + 0x20) = 0;
      *(undefined1 *)(lVar3 + 0x24) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0xa0);
  iVar1 = *(int *)(param_1 + 0xc0);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 200);
    lVar6 = lVar7;
    do {
      FUN_141525fa0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_1439f1c30(param_1 + 0xd0);
  iVar1 = *(int *)(param_1 + 0xf0);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined1 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  FUN_1439f1c30(param_1 + 0x100);
  iVar1 = *(int *)(param_1 + 0x120);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x128);
    lVar6 = lVar7;
    do {
      FUN_141526310(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x138);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x140);
    lVar6 = lVar7;
    do {
      FUN_141546d20(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x150);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x158);
    lVar6 = lVar7;
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  FUN_1439f1c30(param_1 + 0x160);
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0x178);
  iVar1 = *(int *)(param_1 + 0x198);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x1a0);
    lVar6 = lVar7;
    do {
      FUN_1415258f0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x1b8);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined1 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x1c0) + 0x50))();
  iVar1 = *(int *)(param_1 + 600);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x260);
    lVar6 = lVar7;
    do {
      FUN_141525eb0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 600) = 0;
  }
  FUN_141524dc0(param_1 + 0x268);
  FUN_1439f1c30(param_1 + 0x280);
  iVar1 = *(int *)(param_1 + 0x2a0);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x2a0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2b8);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x2c0);
    lVar6 = lVar7;
    do {
      FUN_141546fb0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2d0);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x2d8);
    do {
      lVar6 = *(longlong *)(lVar2 + 8 + lVar7 * 8);
      FUN_141524dc0(lVar6 + 0x10);
      if (((*(byte *)(lVar6 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar6 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x50))();
  puVar4 = *(undefined8 **)(param_1 + 0x370);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x378);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x380);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x388);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x390) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x398) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x3c0);
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 1000);
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined1 *)(param_1 + 0x42c) = 0;
  if ((*(int *)(param_1 + 0x43c) == 0x40) &&
     (puVar4 = *(undefined8 **)(param_1 + 0x430), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)(puVar4,1);
  }
  *(undefined4 *)(param_1 + 0x43c) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 1415256f0 FUN_1415256f0 body=142 status=ok
// SIG undefined FUN_1415256f0(void)

void FUN_1415256f0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar2 != plVar2[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141525780 FUN_141525780 body=127 status=ok
// SIG undefined FUN_141525780(void)

void FUN_141525780(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar4 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      FUN_1415256f0(*(undefined8 *)(lVar2 + 8 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141525800 FUN_141525800 body=230 status=ok
// SIG undefined FUN_141525800(void)

void FUN_141525800(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar6 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 1415258f0 FUN_1415258f0 body=145 status=ok
// SIG undefined FUN_1415258f0(void)

void FUN_1415258f0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar2 != plVar2[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141525990 FUN_141525990 body=127 status=ok
// SIG undefined FUN_141525990(void)

void FUN_141525990(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar4 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      FUN_141525800(*(undefined8 *)(lVar2 + 8 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141525a10 FUN_141525a10 body=95 status=ok
// SIG undefined FUN_141525a10(void)

void FUN_141525a10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
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
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 141525a70 FUN_141525a70 body=81 status=ok
// SIG undefined FUN_141525a70(void)

void FUN_141525a70(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar2 != plVar2[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141525ad0 FUN_141525ad0 body=240 status=ok
// SIG undefined FUN_141525ad0(void)

void FUN_141525ad0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0x18);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined4 *)(lVar3 + 0x30) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141525bc0 FUN_141525bc0 body=100 status=ok
// SIG undefined FUN_141525bc0(void)

void FUN_141525bc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
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
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 141525c30 FUN_141525c30 body=317 status=ok
// SIG undefined FUN_141525c30(void)

void FUN_141525c30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar7 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(undefined1 *)(lVar3 + 0x1c) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    do {
      lVar6 = *(longlong *)(lVar2 + 8 + lVar7 * 8);
      puVar4 = *(undefined8 **)(lVar6 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      if (((*(byte *)(lVar6 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar6 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141525dc0 FUN_141525dc0 body=34 status=ok
// SIG undefined FUN_141525dc0(void)

void FUN_141525dc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar4 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar4 == plVar4[1])
     ) {
    return;
  }
  lVar10 = (longlong)(int)(plVar4[1] - *plVar4 >> 4);
  lVar9 = lVar10 << 4;
  do {
    lVar10 = lVar10 + -1;
    lVar9 = lVar9 + -0x10;
    lVar2 = *plVar4;
    iVar1 = *(int *)(lVar2 + 4 + lVar9);
    if (iVar1 == 3) {
      plVar8 = *(longlong **)(lVar2 + 8 + lVar9);
      if (plVar8 != (longlong *)0x0) {
        uVar3 = plVar8[3];
        if (0xf < uVar3) {
          uVar7 = uVar3 + 1;
          lVar2 = *plVar8;
          lVar5 = lVar2;
          if (0xfff < uVar7) {
            uVar7 = uVar3 + 0x28;
            lVar5 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar5,uVar7);
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
      plVar4[1] = *plVar4;
      return;
    }
  } while( true );
}



// FUNCTION 141525df0 FUN_141525df0 body=187 status=ok
// SIG undefined FUN_141525df0(void)

void FUN_141525df0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  FUN_1439f1c30(param_1 + 0x10);
  FUN_1439f1c30(param_1 + 0x28);
  FUN_1439f1c30();
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar2 != plVar2[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141525eb0 FUN_141525eb0 body=227 status=ok
// SIG undefined FUN_141525eb0(void)

void FUN_141525eb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar6 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141525fa0 FUN_141525fa0 body=291 status=ok
// SIG undefined FUN_141525fa0(void)

void FUN_141525fa0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar6 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(lVar3 + 0x10);
      puVar4 = *(undefined8 **)(lVar3 + 0x28);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0x30);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 1415260d0 FUN_1415260d0 body=126 status=ok
// SIG undefined FUN_1415260d0(void)

void FUN_1415260d0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear();
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar2 != plVar2[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141526150 FUN_141526150 body=87 status=ok
// SIG undefined FUN_141526150(void)

void FUN_141526150(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
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
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 1415261b0 FUN_1415261b0 body=74 status=ok
// SIG undefined FUN_1415261b0(void)

void FUN_1415261b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
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
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 141526200 FUN_141526200 body=142 status=ok
// SIG undefined FUN_141526200(void)

void FUN_141526200(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
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
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 141526290 FUN_141526290 body=116 status=ok
// SIG undefined FUN_141526290(void)

void FUN_141526290(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
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
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 141526310 FUN_141526310 body=307 status=ok
// SIG undefined FUN_141526310(void)

void FUN_141526310(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
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
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 141526450 FUN_141526450 body=148 status=ok
// SIG undefined FUN_141526450(void)

void FUN_141526450(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar2 != plVar2[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 1415264f0 FUN_1415264f0 body=521 status=ok
// SIG undefined FUN_1415264f0(void)

void FUN_1415264f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar7 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined4 *)(lVar3 + 0x20) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0x18);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0x18);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0x20);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    do {
      FUN_141526200(*(undefined8 *)(lVar2 + 8 + lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141526700 FUN_141526700 body=224 status=ok
// SIG undefined FUN_141526700(void)

void FUN_141526700(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar6 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0x18);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 1415267e0 FUN_1415267e0 body=563 status=ok
// SIG undefined FUN_1415267e0(void)

void FUN_1415267e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar6 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar5 = lVar6;
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_1439f1c30(param_1 + 0x28);
  FUN_1439f1c30(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x60);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar5 = lVar6;
    do {
      FUN_141546eb0(*(undefined8 *)(lVar2 + 8 + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar5 = lVar6;
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x90);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar5 = lVar6;
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar5 = lVar6;
    do {
      FUN_141546e80(*(undefined8 *)(lVar2 + 8 + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc0);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 200);
    lVar5 = lVar6;
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xd8);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar5 = lVar6;
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xf0);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    do {
      FUN_141546d20(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  FUN_1439f1c30(param_1 + 0x100);
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0x118);
  puVar3 = *(undefined8 **)(param_1 + 0x130);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined2 *)(param_1 + 0x144) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar4 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar4 != plVar4[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141526a20 FUN_141526a20 body=71 status=ok
// SIG undefined FUN_141526a20(void)

void FUN_141526a20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
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
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 141526a70 FUN_141526a70 body=57 status=ok
// SIG undefined FUN_141526a70(void)

void FUN_141526a70(longlong param_1)

{
  longlong *plVar1;
  
  FUN_141524dc0(param_1 + 0x10);
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar1 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar1 != plVar1[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141526ab0 FUN_141526ab0 body=231 status=ok
// SIG undefined FUN_141526ab0(void)

void FUN_141526ab0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar6 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined8 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141526ba0 FUN_141526ba0 body=67 status=ok
// SIG undefined FUN_141526ba0(void)

void FUN_141526ba0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1439f1c30(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar1 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar1 != plVar1[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141526bf0 FUN_141526bf0 body=61 status=ok
// SIG undefined FUN_141526bf0(void)

bool FUN_141526bf0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [8];
  longlong local_28 [4];
  
  local_res8[0] = FUN_141529b00(param_2);
  FUN_140d2ca50(*(undefined8 *)(param_1 + 0x88),local_28,local_res8,0);
  return local_28[0] != 0;
}



// FUNCTION 141526c30 FUN_141526c30 body=224 status=ok
// SIG undefined FUN_141526c30(void)

void FUN_141526c30(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a05f0 != 0) {
      FUN_1439f44f0(&DAT_1464a05f0);
    }
    lVar2 = (**(code **)(DAT_1468a5138 + 0xb8))(&DAT_1468a5138,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14152ff00(param_1);
  }
  return;
}



// FUNCTION 141526d10 FUN_141526d10 body=220 status=ok
// SIG undefined FUN_141526d10(void)

void FUN_141526d10(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0608 != 0) {
      FUN_1439f44f0(&DAT_1464a0608);
    }
    lVar2 = (**(code **)(DAT_1468a5158 + 0xb8))(&DAT_1468a5158,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141530060(param_1);
  }
  return;
}



// FUNCTION 141526df0 FUN_141526df0 body=166 status=ok
// SIG undefined FUN_141526df0(void)

void FUN_141526df0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141524f10();
    if (DAT_1464a0aa0 != 0) {
      FUN_1439f44f0(&DAT_1464a0aa0);
    }
    lVar1 = (**(code **)(DAT_1468a51a0 + 0xb8))(&DAT_1468a51a0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415301c0(param_1);
  }
  return;
}



// FUNCTION 141526ea0 FUN_141526ea0 body=223 status=ok
// SIG undefined FUN_141526ea0(void)

void FUN_141526ea0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0650 != 0) {
      FUN_1439f44f0(&DAT_1464a0650);
    }
    lVar2 = (**(code **)(DAT_1468a5618 + 0xb8))(&DAT_1468a5618,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a870(param_1);
  }
  return;
}



// FUNCTION 141526f80 FUN_141526f80 body=166 status=ok
// SIG undefined FUN_141526f80(void)

void FUN_141526f80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_1415256f0();
    if (DAT_1464a0890 != 0) {
      FUN_1439f44f0(&DAT_1464a0890);
    }
    lVar1 = (**(code **)(DAT_1468a5638 + 0xb8))(&DAT_1468a5638,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141530f60(param_1);
  }
  return;
}



// FUNCTION 141527030 FUN_141527030 body=166 status=ok
// SIG undefined FUN_141527030(void)

void FUN_141527030(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141525780();
    if (DAT_1464a08a8 != 0) {
      FUN_1439f44f0(&DAT_1464a08a8);
    }
    lVar1 = (**(code **)(DAT_1468a5668 + 0xb8))(&DAT_1468a5668,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141531120(param_1);
  }
  return;
}



// FUNCTION 1415270e0 FUN_1415270e0 body=166 status=ok
// SIG undefined FUN_1415270e0(void)

void FUN_1415270e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141525800();
    if (DAT_1464a08c0 != 0) {
      FUN_1439f44f0(&DAT_1464a08c0);
    }
    lVar1 = (**(code **)(DAT_1468a5698 + 0xb8))(&DAT_1468a5698,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141531260(param_1);
  }
  return;
}



// FUNCTION 141527190 FUN_141527190 body=166 status=ok
// SIG undefined FUN_141527190(void)

void FUN_141527190(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_1415258f0();
    if (DAT_1464a08d8 != 0) {
      FUN_1439f44f0(&DAT_1464a08d8);
    }
    lVar1 = (**(code **)(DAT_1468a56d0 + 0xb8))(&DAT_1468a56d0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141531420(param_1);
  }
  return;
}



// FUNCTION 141527240 FUN_141527240 body=223 status=ok
// SIG undefined FUN_141527240(void)

void FUN_141527240(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0668 != 0) {
      FUN_1439f44f0(&DAT_1464a0668);
    }
    lVar2 = (**(code **)(DAT_1468a5700 + 0xb8))(&DAT_1468a5700,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a870(param_1);
  }
  return;
}



// FUNCTION 141527320 FUN_141527320 body=166 status=ok
// SIG undefined FUN_141527320(void)

void FUN_141527320(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141525800();
    if (DAT_1464a08f0 != 0) {
      FUN_1439f44f0(&DAT_1464a08f0);
    }
    lVar1 = (**(code **)(DAT_1468a5720 + 0xb8))(&DAT_1468a5720,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415316b0(param_1);
  }
  return;
}



// FUNCTION 1415273d0 FUN_1415273d0 body=224 status=ok
// SIG undefined FUN_1415273d0(void)

void FUN_1415273d0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0a88 != 0) {
      FUN_1439f44f0(&DAT_1464a0a88);
    }
    lVar2 = (**(code **)(DAT_1468a5758 + 0xb8))(&DAT_1468a5758,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14152ff00(param_1);
  }
  return;
}



// FUNCTION 1415274b0 FUN_1415274b0 body=166 status=ok
// SIG undefined FUN_1415274b0(void)

void FUN_1415274b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141525990();
    if (DAT_1464a0908 != 0) {
      FUN_1439f44f0(&DAT_1464a0908);
    }
    lVar1 = (**(code **)(DAT_1468a5778 + 0xb8))(&DAT_1468a5778,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141531910(param_1);
  }
  return;
}



// FUNCTION 141527560 FUN_141527560 body=224 status=ok
// SIG undefined FUN_141527560(void)

void FUN_141527560(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0680 != 0) {
      FUN_1439f44f0(&DAT_1464a0680);
    }
    lVar2 = (**(code **)(DAT_1468a57a8 + 0xb8))(&DAT_1468a57a8,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14152ff00(param_1);
  }
  return;
}



// FUNCTION 141527640 FUN_141527640 body=166 status=ok
// SIG undefined FUN_141527640(void)

void FUN_141527640(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141525a10();
    if (DAT_1464a0698 != 0) {
      FUN_1439f44f0(&DAT_1464a0698);
    }
    lVar1 = (**(code **)(DAT_1468a57c8 + 0xb8))(&DAT_1468a57c8,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141531af0(param_1);
  }
  return;
}



// FUNCTION 1415276f0 FUN_1415276f0 body=216 status=ok
// SIG undefined FUN_1415276f0(void)

void FUN_1415276f0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0920 != 0) {
      FUN_1439f44f0(&DAT_1464a0920);
    }
    lVar2 = (**(code **)(DAT_1468a57f8 + 0xb8))(&DAT_1468a57f8,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141531c90(param_1);
  }
  return;
}



// FUNCTION 1415277d0 FUN_1415277d0 body=166 status=ok
// SIG undefined FUN_1415277d0(void)

void FUN_1415277d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141525ad0();
    if (DAT_1464a0938 != 0) {
      FUN_1439f44f0(&DAT_1464a0938);
    }
    lVar1 = (**(code **)(DAT_1468a5820 + 0xb8))(&DAT_1468a5820,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141531de0(param_1);
  }
  return;
}



// FUNCTION 141527880 FUN_141527880 body=166 status=ok
// SIG undefined FUN_141527880(void)

void FUN_141527880(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141525bc0();
    if (DAT_1464a06b0 != 0) {
      FUN_1439f44f0(&DAT_1464a06b0);
    }
    lVar1 = (**(code **)(DAT_1468a5850 + 0xb8))(&DAT_1468a5850,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141531f20(param_1);
  }
  return;
}



// FUNCTION 141527930 FUN_141527930 body=166 status=ok
// SIG undefined FUN_141527930(void)

void FUN_141527930(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141525c30();
    if (DAT_1464a09e0 != 0) {
      FUN_1439f44f0(&DAT_1464a09e0);
    }
    lVar1 = (**(code **)(DAT_1468a58b0 + 0xb8))(&DAT_1468a58b0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415320e0(param_1);
  }
  return;
}



// FUNCTION 1415279e0 FUN_1415279e0 body=224 status=ok
// SIG undefined FUN_1415279e0(void)

void FUN_1415279e0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a06c8 != 0) {
      FUN_1439f44f0(&DAT_1464a06c8);
    }
    lVar2 = (**(code **)(DAT_1468a5910 + 0xb8))(&DAT_1468a5910,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14152ff00(param_1);
  }
  return;
}



// FUNCTION 141527ac0 FUN_141527ac0 body=228 status=ok
// SIG undefined FUN_141527ac0(void)

void FUN_141527ac0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a06e0 != 0) {
      FUN_1439f44f0(&DAT_1464a06e0);
    }
    lVar2 = (**(code **)(DAT_1468a5888 + 0xb8))(&DAT_1468a5888,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141532360(param_1);
  }
  return;
}



// FUNCTION 141527bb0 FUN_141527bb0 body=195 status=ok
// SIG undefined FUN_141527bb0(void)

void FUN_141527bb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    param_1[2] = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a06f8 != 0) {
      FUN_1439f44f0(&DAT_1464a06f8);
    }
    lVar1 = (**(code **)(DAT_1468a5930 + 0xb8))(&DAT_1468a5930,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415324d0(param_1);
  }
  return;
}



// FUNCTION 141527c80 FUN_141527c80 body=166 status=ok
// SIG undefined FUN_141527c80(void)

void FUN_141527c80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141525df0();
    if (DAT_1464a0710 != 0) {
      FUN_1439f44f0(&DAT_1464a0710);
    }
    lVar1 = (**(code **)(DAT_1468a5950 + 0xb8))(&DAT_1468a5950,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415325e0(param_1);
  }
  return;
}



// FUNCTION 141527d30 FUN_141527d30 body=223 status=ok
// SIG undefined FUN_141527d30(void)

void FUN_141527d30(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0728 != 0) {
      FUN_1439f44f0(&DAT_1464a0728);
    }
    lVar2 = (**(code **)(DAT_1468a59d0 + 0xb8))(&DAT_1468a59d0,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a870(param_1);
  }
  return;
}



// FUNCTION 141527e10 FUN_141527e10 body=166 status=ok
// SIG undefined FUN_141527e10(void)

void FUN_141527e10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141525eb0();
    if (DAT_1464a0950 != 0) {
      FUN_1439f44f0(&DAT_1464a0950);
    }
    lVar1 = (**(code **)(DAT_1468a59f0 + 0xb8))(&DAT_1468a59f0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415328a0(param_1);
  }
  return;
}



// FUNCTION 141527ec0 FUN_141527ec0 body=195 status=ok
// SIG undefined FUN_141527ec0(void)

void FUN_141527ec0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    param_1[2] = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0740 != 0) {
      FUN_1439f44f0(&DAT_1464a0740);
    }
    lVar1 = (**(code **)(DAT_1468a5a28 + 0xb8))(&DAT_1468a5a28,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415324d0(param_1);
  }
  return;
}



// FUNCTION 141527f90 FUN_141527f90 body=166 status=ok
// SIG undefined FUN_141527f90(void)

void FUN_141527f90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141525fa0();
    if (DAT_1464a0968 != 0) {
      FUN_1439f44f0(&DAT_1464a0968);
    }
    lVar1 = (**(code **)(DAT_1468a5a48 + 0xb8))(&DAT_1468a5a48,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141532b00(param_1);
  }
  return;
}



// FUNCTION 141528040 FUN_141528040 body=166 status=ok
// SIG undefined FUN_141528040(void)

void FUN_141528040(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_1415260d0();
    if (DAT_1464a0758 != 0) {
      FUN_1439f44f0(&DAT_1464a0758);
    }
    lVar1 = (**(code **)(DAT_1468a5a80 + 0xb8))(&DAT_1468a5a80,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141532cc0(param_1);
  }
  return;
}



// FUNCTION 1415280f0 FUN_1415280f0 body=246 status=ok
// SIG undefined FUN_1415280f0(void)

void FUN_1415280f0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    puVar1 = (undefined8 *)param_1[3];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0770 != 0) {
      FUN_1439f44f0(&DAT_1464a0770);
    }
    lVar2 = (**(code **)(DAT_1468a5ad0 + 0xb8))(&DAT_1468a5ad0,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141532e90(param_1);
  }
  return;
}



// FUNCTION 1415281f0 FUN_1415281f0 body=229 status=ok
// SIG undefined FUN_1415281f0(void)

void FUN_1415281f0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0788 != 0) {
      FUN_1439f44f0(&DAT_1464a0788);
    }
    lVar2 = (**(code **)(DAT_1468a5af8 + 0xb8))(&DAT_1468a5af8,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141533020(param_1);
  }
  return;
}



// FUNCTION 1415282e0 FUN_1415282e0 body=166 status=ok
// SIG undefined FUN_1415282e0(void)

void FUN_1415282e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141526200();
    if (DAT_1464a07a0 != 0) {
      FUN_1439f44f0(&DAT_1464a07a0);
    }
    lVar1 = (**(code **)(DAT_1468a5b20 + 0xb8))(&DAT_1468a5b20,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141533190(param_1);
  }
  return;
}



// FUNCTION 141528390 FUN_141528390 body=166 status=ok
// SIG undefined FUN_141528390(void)

void FUN_141528390(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141526290();
    if (DAT_1464a07b8 != 0) {
      FUN_1439f44f0(&DAT_1464a07b8);
    }
    lVar1 = (**(code **)(DAT_1468a5b58 + 0xb8))(&DAT_1468a5b58,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141533380(param_1);
  }
  return;
}



// FUNCTION 141528440 FUN_141528440 body=166 status=ok
// SIG undefined FUN_141528440(void)

void FUN_141528440(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141526310();
    if (DAT_1464a07d0 != 0) {
      FUN_1439f44f0(&DAT_1464a07d0);
    }
    lVar1 = (**(code **)(DAT_1468a5bc0 + 0xb8))(&DAT_1468a5bc0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141533540(param_1);
  }
  return;
}



// FUNCTION 1415284f0 FUN_1415284f0 body=166 status=ok
// SIG undefined FUN_1415284f0(void)

void FUN_1415284f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141526450();
    if (DAT_1464a0980 != 0) {
      FUN_1439f44f0(&DAT_1464a0980);
    }
    lVar1 = (**(code **)(DAT_1468a5b88 + 0xb8))(&DAT_1468a5b88,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141533890(param_1);
  }
  return;
}



// FUNCTION 1415285a0 FUN_1415285a0 body=166 status=ok
// SIG undefined FUN_1415285a0(void)

void FUN_1415285a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_1415264f0();
    if (DAT_1464a0a00 != 0) {
      FUN_1439f44f0(&DAT_1464a0a00);
    }
    lVar1 = (**(code **)(DAT_1468a5c30 + 0xb8))(&DAT_1468a5c30,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141533a70(param_1);
  }
  return;
}



// FUNCTION 141528650 FUN_141528650 body=246 status=ok
// SIG undefined FUN_141528650(void)

void FUN_141528650(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    puVar1 = (undefined8 *)param_1[3];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a07e8 != 0) {
      FUN_1439f44f0(&DAT_1464a07e8);
    }
    lVar2 = (**(code **)(DAT_1468a5cb0 + 0xb8))(&DAT_1468a5cb0,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141532e90(param_1);
  }
  return;
}



// FUNCTION 141528750 FUN_141528750 body=166 status=ok
// SIG undefined FUN_141528750(void)

void FUN_141528750(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141526700();
    if (DAT_1464a0998 != 0) {
      FUN_1439f44f0(&DAT_1464a0998);
    }
    lVar1 = (**(code **)(DAT_1468a5cd8 + 0xb8))(&DAT_1468a5cd8,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141533d50(param_1);
  }
  return;
}



// FUNCTION 141528800 FUN_141528800 body=166 status=ok
// SIG undefined FUN_141528800(void)

void FUN_141528800(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_1415267e0();
    if (DAT_1464a0a30 != 0) {
      FUN_1439f44f0(&DAT_1464a0a30);
    }
    lVar1 = (**(code **)(DAT_1468a5d30 + 0xb8))(&DAT_1468a5d30,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141533e90(param_1);
  }
  return;
}



// FUNCTION 1415288b0 FUN_1415288b0 body=226 status=ok
// SIG undefined FUN_1415288b0(void)

void FUN_1415288b0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    param_1[3] = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0800 != 0) {
      FUN_1439f44f0(&DAT_1464a0800);
    }
    lVar2 = (**(code **)(DAT_1468a5d08 + 0xb8))(&DAT_1468a5d08,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415342f0(param_1);
  }
  return;
}



// FUNCTION 1415289a0 FUN_1415289a0 body=223 status=ok
// SIG undefined FUN_1415289a0(void)

void FUN_1415289a0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0818 != 0) {
      FUN_1439f44f0(&DAT_1464a0818);
    }
    lVar2 = (**(code **)(DAT_1468a5e80 + 0xb8))(&DAT_1468a5e80,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a870(param_1);
  }
  return;
}



// FUNCTION 141528a80 FUN_141528a80 body=198 status=ok
// SIG undefined FUN_141528a80(void)

void FUN_141528a80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141524dc0(param_1 + 2);
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a09b0 != 0) {
      FUN_1439f44f0(&DAT_1464a09b0);
    }
    lVar1 = (**(code **)(DAT_1468a5ea0 + 0xb8))(&DAT_1468a5ea0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141534500(param_1);
  }
  return;
}



// FUNCTION 141528b50 FUN_141528b50 body=229 status=ok
// SIG undefined FUN_141528b50(void)

void FUN_141528b50(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0830 != 0) {
      FUN_1439f44f0(&DAT_1464a0830);
    }
    lVar2 = (**(code **)(DAT_1468a5ed0 + 0xb8))(&DAT_1468a5ed0,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141533020(param_1);
  }
  return;
}



// FUNCTION 141528c40 FUN_141528c40 body=223 status=ok
// SIG undefined FUN_141528c40(void)

void FUN_141528c40(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0848 != 0) {
      FUN_1439f44f0(&DAT_1464a0848);
    }
    lVar2 = (**(code **)(DAT_1468a5ef8 + 0xb8))(&DAT_1468a5ef8,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_1415346e0(param_1);
  }
  return;
}



// FUNCTION 141528d20 FUN_141528d20 body=166 status=ok
// SIG undefined FUN_141528d20(void)

void FUN_141528d20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141526ab0();
    if (DAT_1464a09c8 != 0) {
      FUN_1439f44f0(&DAT_1464a09c8);
    }
    lVar1 = (**(code **)(DAT_1468a5f18 + 0xb8))(&DAT_1468a5f18,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141534840(param_1);
  }
  return;
}



// FUNCTION 141528dd0 FUN_141528dd0 body=208 status=ok
// SIG undefined FUN_141528dd0(void)

void FUN_141528dd0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_1439f1c30(param_1 + 2);
    param_1[5] = 0;
    param_1[6] = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0860 != 0) {
      FUN_1439f44f0(&DAT_1464a0860);
    }
    lVar1 = (**(code **)(DAT_1468a5f50 + 0xb8))(&DAT_1468a5f50,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_141534a00(param_1);
  }
  return;
}



// FUNCTION 141528ea0 FUN_141528ea0 body=224 status=ok
// SIG undefined FUN_141528ea0(void)

void FUN_141528ea0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a0878 != 0) {
      FUN_1439f44f0(&DAT_1464a0878);
    }
    lVar2 = (**(code **)(DAT_1468a5f90 + 0xb8))(&DAT_1468a5f90,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14152ff00(param_1);
  }
  return;
}



// FUNCTION 141528f80 FUN_141528f80 body=58 status=ok
// SIG undefined FUN_141528f80(void)

bool FUN_141528f80(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_res8 [8];
  
  local_res8[0] = FUN_141529b00(param_2);
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1);
  lVar2 = FUN_141542bb0(uVar1,local_res8);
  return lVar2 != 0;
}



// FUNCTION 141528fc0 FUN_141528fc0 body=161 status=ok
// SIG undefined FUN_141528fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_141528fc0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1415060c0(param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1);
  lVar2 = FUN_141542db0(uVar1,local_38);
  if (0xf < local_20) {
    uVar4 = local_20 + 1;
    lVar3 = local_38[0];
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(local_38[0] + -8);
      uVar4 = local_20 + 0x28;
      if (0x1f < (local_38[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  return lVar2 != 0;
}



// FUNCTION 141529070 FUN_141529070 body=45 status=ok
// SIG undefined FUN_141529070(void)

longlong FUN_141529070(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == param_2) {
    return *(longlong *)(param_3 + 0x10);
  }
  uVar1 = FUN_141529070();
  *(undefined8 *)(param_3 + 0x10) = uVar1;
  return param_3;
}



// FUNCTION 1415290a0 FUN_1415290a0 body=138 status=ok
// SIG undefined FUN_1415290a0(void)

int FUN_1415290a0(longlong *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    iVar3 = 0;
  }
  else {
    puVar2 = (uint *)(**(code **)(*param_1 + 0xc0))();
    iVar3 = 0x1f;
    if ((*puVar2 | 1) != 0) {
      for (; (*puVar2 | 1) >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar3 = (iVar3 * 9 + 0x49U >> 6) + 1;
  }
  if ((*(uint *)(param_1 + 3) >> 1 & 1) != 0) {
    puVar2 = (uint *)(**(code **)(*param_1 + 200))(param_1);
    iVar1 = 0x1f;
    if ((*puVar2 | 1) != 0) {
      for (; (*puVar2 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    return (iVar1 * 9 + 0x49U >> 6) + 1 + iVar3;
  }
  return iVar3;
}



// FUNCTION 141529130 FUN_141529130 body=154 status=ok
// SIG undefined FUN_141529130(void)

int FUN_141529130(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    iVar5 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0xc0))();
    uVar4 = (uint)*(undefined8 *)(lVar3 + 0x10);
    uVar2 = uVar4 | 1;
    iVar5 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = uVar4 + 1 + (iVar5 * 9 + 0x49U >> 6);
  }
  if ((*(uint *)(param_1 + 4) >> 1 & 1) != 0) {
    lVar3 = (**(code **)(*param_1 + 200))(param_1);
    uVar4 = (uint)*(undefined8 *)(lVar3 + 0x10);
    uVar2 = uVar4 | 1;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    return (iVar1 * 9 + 0x49U >> 6) + 1 + uVar4 + iVar5;
  }
  return iVar5;
}



// FUNCTION 1415291e0 GetMaxReservations body=4 status=ok
// SIG undefined GetMaxReservations(void)

undefined4 UPartyBeaconState::GetMaxReservations(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// FUNCTION 1415291f0 GetSizeY body=4 status=ok
// SIG undefined GetSizeY(void)

undefined4 FPlanarReflectionRenderTarget::GetSizeY(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// FUNCTION 141529210 ossl_statem_get_in_handshake body=4 status=ok
// SIG undefined ossl_statem_get_in_handshake(void)

undefined4 ossl_statem_get_in_handshake(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



// FUNCTION 141529230 FUN_141529230 body=40 status=ok
// SIG undefined FUN_141529230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529230(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4f18;
  *param_2 = _DAT_1468a4f10;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529260 FUN_141529260 body=40 status=ok
// SIG undefined FUN_141529260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529260(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5058;
  *param_2 = _DAT_1468a5050;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529290 FUN_141529290 body=40 status=ok
// SIG undefined FUN_141529290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529290(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5128;
  *param_2 = _DAT_1468a5120;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415292c0 FUN_1415292c0 body=40 status=ok
// SIG undefined FUN_1415292c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415292c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5118;
  *param_2 = _DAT_1468a5110;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415292f0 FUN_1415292f0 body=40 status=ok
// SIG undefined FUN_1415292f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415292f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5108;
  *param_2 = _DAT_1468a5100;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529320 FUN_141529320 body=40 status=ok
// SIG undefined FUN_141529320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529320(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4fe8;
  *param_2 = _DAT_1468a4fe0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529350 FUN_141529350 body=40 status=ok
// SIG undefined FUN_141529350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529350(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5008;
  *param_2 = _DAT_1468a5000;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529380 FUN_141529380 body=40 status=ok
// SIG undefined FUN_141529380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529380(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5018;
  *param_2 = _DAT_1468a5010;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415293b0 FUN_1415293b0 body=40 status=ok
// SIG undefined FUN_1415293b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415293b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4ff8;
  *param_2 = _DAT_1468a4ff0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415293e0 FUN_1415293e0 body=40 status=ok
// SIG undefined FUN_1415293e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415293e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4f98;
  *param_2 = _DAT_1468a4f90;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529410 FUN_141529410 body=40 status=ok
// SIG undefined FUN_141529410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529410(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4f38;
  *param_2 = _DAT_1468a4f30;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529440 FUN_141529440 body=40 status=ok
// SIG undefined FUN_141529440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529440(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4f48;
  *param_2 = _DAT_1468a4f40;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529470 FUN_141529470 body=40 status=ok
// SIG undefined FUN_141529470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529470(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4f58;
  *param_2 = _DAT_1468a4f50;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415294a0 FUN_1415294a0 body=40 status=ok
// SIG undefined FUN_1415294a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415294a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4f68;
  *param_2 = _DAT_1468a4f60;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415294d0 FUN_1415294d0 body=40 status=ok
// SIG undefined FUN_1415294d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415294d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5028;
  *param_2 = _DAT_1468a5020;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529500 FUN_141529500 body=40 status=ok
// SIG undefined FUN_141529500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529500(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4e98;
  *param_2 = _DAT_1468a4e90;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529530 FUN_141529530 body=40 status=ok
// SIG undefined FUN_141529530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529530(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5048;
  *param_2 = _DAT_1468a5040;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529560 FUN_141529560 body=40 status=ok
// SIG undefined FUN_141529560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529560(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a50e8;
  *param_2 = _DAT_1468a50e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529590 FUN_141529590 body=40 status=ok
// SIG undefined FUN_141529590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529590(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a50d8;
  *param_2 = _DAT_1468a50d0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415295c0 FUN_1415295c0 body=40 status=ok
// SIG undefined FUN_1415295c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415295c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4fd8;
  *param_2 = _DAT_1468a4fd0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415295f0 FUN_1415295f0 body=40 status=ok
// SIG undefined FUN_1415295f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415295f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4fc8;
  *param_2 = _DAT_1468a4fc0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529620 FUN_141529620 body=40 status=ok
// SIG undefined FUN_141529620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529620(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4fb8;
  *param_2 = _DAT_1468a4fb0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529650 FUN_141529650 body=40 status=ok
// SIG undefined FUN_141529650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529650(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4fa8;
  *param_2 = _DAT_1468a4fa0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529680 FUN_141529680 body=40 status=ok
// SIG undefined FUN_141529680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529680(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4e78;
  *param_2 = _DAT_1468a4e70;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415296b0 FUN_1415296b0 body=40 status=ok
// SIG undefined FUN_1415296b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415296b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a50b8;
  *param_2 = _DAT_1468a50b0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415296e0 FUN_1415296e0 body=40 status=ok
// SIG undefined FUN_1415296e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415296e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a50c8;
  *param_2 = _DAT_1468a50c0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529710 FUN_141529710 body=40 status=ok
// SIG undefined FUN_141529710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529710(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5038;
  *param_2 = _DAT_1468a5030;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529740 FUN_141529740 body=40 status=ok
// SIG undefined FUN_141529740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529740(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4f08;
  *param_2 = _DAT_1468a4f00;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529770 FUN_141529770 body=40 status=ok
// SIG undefined FUN_141529770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529770(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4ef8;
  *param_2 = _DAT_1468a4ef0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415297a0 FUN_1415297a0 body=40 status=ok
// SIG undefined FUN_1415297a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415297a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4eb8;
  *param_2 = _DAT_1468a4eb0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415297d0 FUN_1415297d0 body=40 status=ok
// SIG undefined FUN_1415297d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415297d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4ea8;
  *param_2 = _DAT_1468a4ea0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529800 FUN_141529800 body=40 status=ok
// SIG undefined FUN_141529800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529800(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4ed8;
  *param_2 = _DAT_1468a4ed0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529830 FUN_141529830 body=40 status=ok
// SIG undefined FUN_141529830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529830(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4ec8;
  *param_2 = _DAT_1468a4ec0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529860 FUN_141529860 body=40 status=ok
// SIG undefined FUN_141529860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529860(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4f88;
  *param_2 = _DAT_1468a4f80;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529890 FUN_141529890 body=40 status=ok
// SIG undefined FUN_141529890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529890(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4e88;
  *param_2 = _DAT_1468a4e80;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415298c0 FUN_1415298c0 body=40 status=ok
// SIG undefined FUN_1415298c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415298c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4ee8;
  *param_2 = _DAT_1468a4ee0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415298f0 FUN_1415298f0 body=40 status=ok
// SIG undefined FUN_1415298f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415298f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5068;
  *param_2 = _DAT_1468a5060;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529920 FUN_141529920 body=40 status=ok
// SIG undefined FUN_141529920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529920(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5078;
  *param_2 = _DAT_1468a5070;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529950 FUN_141529950 body=40 status=ok
// SIG undefined FUN_141529950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529950(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a50f8;
  *param_2 = _DAT_1468a50f0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529980 FUN_141529980 body=40 status=ok
// SIG undefined FUN_141529980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529980(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5098;
  *param_2 = _DAT_1468a5090;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415299b0 FUN_1415299b0 body=40 status=ok
// SIG undefined FUN_1415299b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415299b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4e48;
  *param_2 = _DAT_1468a4e40;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415299e0 FUN_1415299e0 body=40 status=ok
// SIG undefined FUN_1415299e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415299e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4f28;
  *param_2 = _DAT_1468a4f20;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529a10 FUN_141529a10 body=40 status=ok
// SIG undefined FUN_141529a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529a10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4e68;
  *param_2 = _DAT_1468a4e60;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529a40 FUN_141529a40 body=40 status=ok
// SIG undefined FUN_141529a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529a40(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4e58;
  *param_2 = _DAT_1468a4e50;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529a70 FUN_141529a70 body=40 status=ok
// SIG undefined FUN_141529a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529a70(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a50a8;
  *param_2 = _DAT_1468a50a0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529aa0 FUN_141529aa0 body=40 status=ok
// SIG undefined FUN_141529aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529aa0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a5088;
  *param_2 = _DAT_1468a5080;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529ad0 FUN_141529ad0 body=40 status=ok
// SIG undefined FUN_141529ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141529ad0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0bc0);
  uVar1 = uRam00000001468a4f78;
  *param_2 = _DAT_1468a4f70;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141529b00 FUN_141529b00 body=283 status=ok
// SIG undefined FUN_141529b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_141529b00(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_141515ef0();
  if (iVar2 != 3) {
    iVar2 = FUN_141515ef0(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eeb00(local_50,3,
                          "D:\\Oak\\main\\Engine\\Source\\ThirdParty\\protobuf\\3.7.1\\include\\google/protobuf/map_field.h"
                          ,0x1b6);
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapKey::GetUInt32Value");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"uint32");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_50);
  }
  return *param_1;
}



// FUNCTION 141529c20 FUN_141529c20 body=50 status=ok
// SIG undefined FUN_141529c20(void)

void FUN_141529c20(longlong *param_1,undefined8 *param_2)

{
  FUN_140d259b0(*param_2);
                    /* WARNING: Could not recover jumptable at 0x000141529c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 141529c60 FUN_141529c60 body=124 status=ok
// SIG undefined FUN_141529c60(void)

void FUN_141529c60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar1 = operator_new(0x30);
    if (lVar1 == 0) {
      param_1[2] = 0;
      return;
    }
  }
  else {
    if (*(longlong *)(lVar2 + 0x70) != 0) {
      FUN_1439f01b0(lVar2,0,0x30);
    }
    lVar1 = FUN_1439efdc0(lVar2,0x30,FUN_14151d000);
  }
  lVar2 = FUN_1415002e0(lVar1,0,local_res8,lVar2);
  param_1[2] = lVar2;
  return;
}



// FUNCTION 141529ce0 FUN_141529ce0 body=172 status=ok
// SIG undefined FUN_141529ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141529ce0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)0x0;
  local_54 = 0;
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = FUN_1439eeb00(local_50,3,
                          "D:\\Oak\\main\\Engine\\Source\\ThirdParty\\protobuf\\3.7.1\\include\\google/protobuf/map_field_inl.h"
                          ,0x8e);
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: map_iter->iter_ != NULL: ");
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_50);
  }
  return;
}



// FUNCTION 141529d90 FUN_141529d90 body=172 status=ok
// SIG undefined FUN_141529d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141529d90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)0x0;
  local_54 = 0;
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = FUN_1439eeb00(local_50,3,
                          "D:\\Oak\\main\\Engine\\Source\\ThirdParty\\protobuf\\3.7.1\\include\\google/protobuf/map_field_inl.h"
                          ,0x8e);
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: map_iter->iter_ != NULL: ");
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_50);
  }
  return;
}



// FUNCTION 141529e40 FUN_141529e40 body=140 status=ok
// SIG undefined FUN_141529e40(void)

undefined8 FUN_141529e40(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  longlong local_28 [4];
  
  lVar1 = (**(code **)(*param_1 + 0x98))();
  local_res8[0] = FUN_141529b00(param_2);
  FUN_140d2ca50(*(undefined8 *)(lVar1 + 0x10),local_28,local_res8,0);
  if (local_28[0] == 0) {
    lVar1 = FUN_140d25480(lVar1,local_res8);
    *param_3 = lVar1;
    return 1;
  }
  *param_3 = *(longlong *)(local_28[0] + 8) + 4;
  return 0;
}



// FUNCTION 141529ed0 FUN_141529ed0 body=211 status=ok
// SIG undefined FUN_141529ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_141529ed0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [4];
  longlong local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 0x98))();
  uVar2 = FUN_1415060c0(param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_48,uVar2);
  FUN_140d2cbc0(*(undefined8 *)(lVar1 + 0x10),local_68,local_48,0);
  if (local_68[0] != 0) {
    lVar1 = *(longlong *)(local_68[0] + 0x20) + 0x20;
  }
  else {
    lVar1 = FUN_140d256b0(lVar1,local_48);
  }
  *param_3 = lVar1;
  if (0xf < local_30) {
    uVar3 = local_30 + 1;
    lVar1 = local_48[0];
    if (0xfff < uVar3) {
      lVar1 = *(longlong *)(local_48[0] + -8);
      uVar3 = local_30 + 0x28;
      if (0x1f < (local_48[0] - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar1,uVar3);
  }
  return local_68[0] == 0;
}



// FUNCTION 141529fb0 FUN_141529fb0 body=150 status=ok
// SIG undefined FUN_141529fb0(void)

byte * FUN_141529fb0(longlong *param_1,byte *param_2)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  
  puVar2 = (uint *)(**(code **)(*param_1 + 0xc0))();
  uVar1 = *puVar2;
  uVar4 = (ulonglong)uVar1;
  *param_2 = 8;
  while( true ) {
    pbVar5 = param_2 + 1;
    bVar3 = (byte)uVar4;
    if (uVar1 < 0x80) break;
    uVar4 = uVar4 >> 7;
    *pbVar5 = bVar3 | 0x80;
    uVar1 = (uint)uVar4;
    param_2 = pbVar5;
  }
  *pbVar5 = bVar3;
  puVar2 = (uint *)(**(code **)(*param_1 + 200))(param_1);
  pbVar5 = param_2 + 3;
  uVar1 = *puVar2;
  param_2[2] = 0x10;
  for (; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar5 = (byte)uVar1 | 0x80;
    pbVar5 = pbVar5 + 1;
  }
  *pbVar5 = (byte)uVar1;
  return pbVar5 + 1;
}



// FUNCTION 14152a050 FUN_14152a050 body=80 status=ok
// SIG undefined FUN_14152a050(void)

void FUN_14152a050(longlong *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  uVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = 10;
  puVar2 = (undefined1 *)FUN_1439f9df0(uVar1,param_2 + 1);
  uVar1 = (**(code **)(*param_1 + 200))(param_1);
  *puVar2 = 0x12;
  FUN_1439f9df0(uVar1,puVar2 + 1);
  return;
}



// FUNCTION 14152a0a0 FUN_14152a0a0 body=148 status=ok
// SIG undefined FUN_14152a0a0(void)

undefined1 * FUN_14152a0a0(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.ActiveFastTravelSaveData.active_travel_station_name");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    param_2 = (undefined1 *)FUN_141514ca0(2,*(char *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 14152a140 FUN_14152a140 body=67 status=ok
// SIG undefined FUN_14152a140(void)

undefined1 * FUN_14152a140(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(lVar1,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar2 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
    return puVar2;
  }
  return param_2;
}



// FUNCTION 14152a190 FUN_14152a190 body=7143 status=ok
// SIG undefined FUN_14152a190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152a190(undefined8 *param_1,byte *param_2)

{
  ulonglong *puVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong local_88 [5];
  longlong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar14 = *(uint *)(param_1 + 0x7f);
  if (uVar14 != 0) {
    *param_2 = 8;
    while( true ) {
      pbVar21 = param_2 + 1;
      bVar13 = (byte)uVar14;
      if (uVar14 < 0x80) break;
      uVar14 = uVar14 >> 7;
      *pbVar21 = bVar13 | 0x80;
      param_2 = pbVar21;
    }
    *pbVar21 = bVar13;
    param_2 = param_2 + 2;
  }
  uVar16 = param_1[0x7e];
  if (uVar16 != 0) {
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar13 = (byte)uVar16;
      if (uVar16 < 0x80) break;
      uVar16 = uVar16 >> 7;
      *param_2 = bVar13 | 0x80;
    }
    *param_2 = bVar13;
    param_2 = param_2 + 1;
  }
  uVar14 = *(uint *)((longlong)param_1 + 0x3fc);
  if (uVar14 != 0) {
    *param_2 = 0x18;
    while( true ) {
      param_2 = param_2 + 1;
      bVar13 = (byte)uVar14;
      if (uVar14 < 0x80) break;
      uVar14 = uVar14 >> 7;
      *param_2 = bVar13 | 0x80;
    }
    *param_2 = bVar13;
    param_2 = param_2 + 1;
  }
  if ((param_1 != &DAT_1468a51a0) && (lVar7 = param_1[0x71], lVar7 != 0)) {
    *param_2 = 0x22;
    uVar14 = *(uint *)(lVar7 + 0x1c);
    pbVar21 = param_2;
    while( true ) {
      pbVar21 = pbVar21 + 1;
      bVar13 = (byte)uVar14;
      if (uVar14 < 0x80) break;
      uVar14 = uVar14 >> 7;
      *pbVar21 = bVar13 | 0x80;
    }
    *pbVar21 = bVar13;
    param_2 = pbVar21 + 1;
    plVar18 = *(longlong **)(lVar7 + 0x10);
    puVar1 = (ulonglong *)(plVar18 + 2);
    if (*puVar1 != 0) {
      if (0xf < (ulonglong)plVar18[3]) {
        plVar18 = (longlong *)*plVar18;
      }
      FUN_1439fa7f0(plVar18,*puVar1 & 0xffffffff,1,
                    "OakSave.PlayerClassSaveGameData.player_class_path");
      uVar9 = *(undefined8 *)(lVar7 + 0x10);
      *param_2 = 10;
      param_2 = (byte *)FUN_1439f9df0(uVar9,pbVar21 + 2);
    }
    uVar14 = *(uint *)(lVar7 + 0x18);
    if (uVar14 != 0) {
      *param_2 = 0x10;
      while( true ) {
        pbVar21 = param_2 + 1;
        bVar13 = (byte)uVar14;
        if (uVar14 < 0x80) break;
        uVar14 = uVar14 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21;
      }
      *pbVar21 = bVar13;
      param_2 = param_2 + 2;
    }
    if ((*(byte *)(lVar7 + 8) & 1) != 0) {
      param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe,param_2);
    }
  }
  uVar14 = *(uint *)(param_1 + 3);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      lVar7 = *(longlong *)(param_1[4] + 8 + (longlong)(int)uVar22 * 8);
      *param_2 = 0x2a;
      uVar15 = *(uint *)(lVar7 + 0x1c);
      pbVar21 = param_2;
      while( true ) {
        pbVar5 = pbVar21 + 1;
        bVar13 = (byte)uVar15;
        if (uVar15 < 0x80) break;
        uVar15 = uVar15 >> 7;
        *pbVar5 = bVar13 | 0x80;
        pbVar21 = pbVar5;
      }
      *pbVar5 = bVar13;
      param_2 = pbVar21 + 2;
      fVar2 = *(float *)(lVar7 + 0x18);
      if (fVar2 != 0.0) {
        *param_2 = 0xd;
        *(float *)(pbVar21 + 3) = fVar2;
        param_2 = pbVar21 + 7;
      }
      plVar18 = *(longlong **)(lVar7 + 0x10);
      puVar1 = (ulonglong *)(plVar18 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar18[3]) {
          plVar18 = (longlong *)*plVar18;
        }
        FUN_1439fa7f0(plVar18,*puVar1 & 0xffffffff,1,
                      "OakSave.ResourcePoolSavegameData.resource_path");
        uVar9 = *(undefined8 *)(lVar7 + 0x10);
        *param_2 = 0x12;
        param_2 = (byte *)FUN_1439f9df0(uVar9,param_2 + 1);
      }
      if ((*(byte *)(lVar7 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  uVar14 = *(uint *)(param_1 + 6);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      param_2 = (byte *)FUN_14151a7c0(6,*(undefined8 *)(param_1[7] + 8 + (longlong)(int)uVar22 * 8),
                                      param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  uVar16 = (ulonglong)*(int *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x80) != 0) {
    *param_2 = 0x38;
    while( true ) {
      pbVar21 = param_2 + 1;
      bVar13 = (byte)uVar16;
      if (uVar16 < 0x80) break;
      uVar16 = uVar16 >> 7;
      *pbVar21 = bVar13 | 0x80;
      param_2 = pbVar21;
    }
    *pbVar21 = bVar13;
    param_2 = param_2 + 2;
  }
  uVar14 = *(uint *)(param_1 + 9);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      lVar7 = *(longlong *)(param_1[10] + 8 + (longlong)(int)uVar22 * 8);
      *param_2 = 0x42;
      uVar15 = *(uint *)(lVar7 + 0x1c);
      while( true ) {
        pbVar21 = param_2 + 1;
        bVar13 = (byte)uVar15;
        if (uVar15 < 0x80) break;
        uVar15 = uVar15 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21;
      }
      *pbVar21 = bVar13;
      param_2 = (byte *)FUN_141548a10(lVar7,param_2 + 2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  uVar14 = *(uint *)(param_1 + 0xc);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      lVar7 = *(longlong *)(param_1[0xd] + 8 + (longlong)(int)uVar22 * 8);
      *param_2 = 0x4a;
      uVar15 = *(uint *)(lVar7 + 0x18);
      while( true ) {
        pbVar21 = param_2 + 1;
        bVar13 = (byte)uVar15;
        if (uVar15 < 0x80) break;
        uVar15 = uVar15 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21;
      }
      *pbVar21 = bVar13;
      param_2 = (byte *)FUN_141548ad0(lVar7,param_2 + 2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  uVar14 = *(uint *)(param_1 + 0xf);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      param_2 = (byte *)FUN_14151a630(10,*(undefined8 *)
                                          (param_1[0x10] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  uVar14 = *(uint *)(param_1 + 0x12);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      param_2 = (byte *)FUN_141519ef0(0xb,*(undefined8 *)
                                           (param_1[0x13] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  iVar6 = FUN_1439f2ae0(param_1 + 0x14);
  if (0 < iVar6) {
    *param_2 = 0x62;
    uVar14 = *(uint *)(param_1 + 0x16);
    while( true ) {
      param_2 = param_2 + 1;
      bVar13 = (byte)uVar14;
      if (uVar14 < 0x80) break;
      uVar14 = uVar14 >> 7;
      *param_2 = bVar13 | 0x80;
    }
    *param_2 = bVar13;
    param_2 = (byte *)FUN_141542140(param_1 + 0x14,param_2 + 1);
  }
  if ((param_1 != &DAT_1468a51a0) && (lVar7 = param_1[0x72], lVar7 != 0)) {
    *param_2 = 0x6a;
    uVar14 = *(uint *)(lVar7 + 0x78);
    while( true ) {
      pbVar21 = param_2 + 1;
      bVar13 = (byte)uVar14;
      if (uVar14 < 0x80) break;
      uVar14 = uVar14 >> 7;
      *pbVar21 = bVar13 | 0x80;
      param_2 = pbVar21;
    }
    *pbVar21 = bVar13;
    param_2 = (byte *)FUN_14152e340(lVar7,param_2 + 2);
  }
  uVar16 = (ulonglong)*(int *)((longlong)param_1 + 0x404);
  if (*(int *)((longlong)param_1 + 0x404) != 0) {
    *param_2 = 0x70;
    while( true ) {
      pbVar21 = param_2 + 1;
      bVar13 = (byte)uVar16;
      if (uVar16 < 0x80) break;
      uVar16 = uVar16 >> 7;
      *pbVar21 = bVar13 | 0x80;
      param_2 = pbVar21;
    }
    *pbVar21 = bVar13;
    param_2 = param_2 + 2;
  }
  uVar16 = (ulonglong)*(int *)(param_1 + 0x81);
  if (*(int *)(param_1 + 0x81) != 0) {
    *param_2 = 0x78;
    while( true ) {
      param_2 = param_2 + 1;
      bVar13 = (byte)uVar16;
      if (uVar16 < 0x80) break;
      uVar16 = uVar16 >> 7;
      *param_2 = bVar13 | 0x80;
    }
    *param_2 = bVar13;
    param_2 = param_2 + 1;
  }
  cVar3 = *(char *)(param_1 + 0x82);
  if (cVar3 != '\0') {
    uVar14 = 0x80;
    do {
      pbVar21 = param_2;
      bVar13 = (byte)uVar14;
      uVar14 = uVar14 >> 7;
      *pbVar21 = bVar13 | 0x80;
      param_2 = pbVar21 + 1;
    } while (0x7f < uVar14);
    pbVar21[1] = (byte)uVar14;
    pbVar21[2] = cVar3 != '\0';
    param_2 = pbVar21 + 3;
  }
  uVar14 = *(uint *)(param_1 + 0x18);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      param_2 = (byte *)FUN_14151a1e0(0x11,*(undefined8 *)
                                            (param_1[0x19] + 8 + (longlong)(int)uVar22 * 8),param_2)
      ;
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  iVar6 = IStreamingManager::GetNumWantingResources(param_1 + 0x1a);
  iVar19 = 0;
  if (0 < iVar6) {
    do {
      lVar7 = FUN_1439f1d30(param_1 + 0x1a,iVar19);
      uVar16 = *(ulonglong *)(lVar7 + 0x10);
      puVar8 = (undefined8 *)FUN_1439f1d30(param_1 + 0x1a,iVar19);
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      FUN_1439fa7f0(puVar8,uVar16 & 0xffffffff,1,"OakSave.Character.active_travel_stations");
      uVar9 = FUN_1439f1d30(param_1 + 0x1a,iVar19);
      uVar14 = 0xaa;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar14;
        uVar14 = uVar14 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar14);
      pbVar21[1] = (byte)uVar14;
      param_2 = (byte *)FUN_1439f9df0(uVar9,pbVar21 + 2);
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar6);
  }
  if ((param_1 != &DAT_1468a51a0) && (lVar7 = param_1[0x73], lVar7 != 0)) {
    uVar14 = 0xb2;
    do {
      pbVar21 = param_2;
      bVar13 = (byte)uVar14;
      uVar14 = uVar14 >> 7;
      *pbVar21 = bVar13 | 0x80;
      param_2 = pbVar21 + 1;
    } while (0x7f < uVar14);
    pbVar21[1] = (byte)uVar14;
    pbVar21 = pbVar21 + 2;
    for (uVar14 = *(uint *)(lVar7 + 0x28); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
      *pbVar21 = (byte)uVar14 | 0x80;
      pbVar21 = pbVar21 + 1;
    }
    *pbVar21 = (byte)uVar14;
    uVar22 = 0;
    uVar14 = *(uint *)(lVar7 + 0x18);
    param_2 = pbVar21 + 1;
    if (uVar14 != 0) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x20) + 8 + (longlong)(int)uVar22 * 8);
        *param_2 = 10;
        uVar15 = *(uint *)(lVar4 + 0x34);
        while( true ) {
          pbVar21 = param_2 + 1;
          bVar13 = (byte)uVar15;
          if (uVar15 < 0x80) break;
          uVar15 = uVar15 >> 7;
          *pbVar21 = bVar13 | 0x80;
          param_2 = pbVar21;
        }
        *pbVar21 = bVar13;
        param_2 = (byte *)FUN_14152c430(lVar4,param_2 + 2);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar14);
    }
    if ((*(byte *)(lVar7 + 8) & 1) != 0) {
      param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe,param_2);
    }
  }
  plVar18 = (longlong *)param_1[0x6e];
  puVar1 = (ulonglong *)(plVar18 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar18[3]) {
      plVar18 = (longlong *)*plVar18;
    }
    FUN_1439fa7f0(plVar18,*puVar1 & 0xffffffff,1,"OakSave.Character.last_active_travel_station");
    uVar9 = param_1[0x6e];
    uVar14 = 0xba;
    do {
      pbVar21 = param_2;
      bVar13 = (byte)uVar14;
      uVar14 = uVar14 >> 7;
      *pbVar21 = bVar13 | 0x80;
      param_2 = pbVar21 + 1;
    } while (0x7f < uVar14);
    pbVar21[1] = (byte)uVar14;
    param_2 = (byte *)FUN_1439f9df0(uVar9,pbVar21 + 2);
  }
  uVar14 = *(uint *)(param_1 + 0x1e);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      lVar7 = *(longlong *)(param_1[0x1f] + 8 + (longlong)(int)uVar22 * 8);
      uVar15 = 0xc2;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar15;
        uVar15 = uVar15 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar15);
      pbVar21[1] = (byte)uVar15;
      pbVar21 = pbVar21 + 2;
      for (uVar15 = *(uint *)(lVar7 + 0x1c); 0x7f < uVar15; uVar15 = uVar15 >> 7) {
        *pbVar21 = (byte)uVar15 | 0x80;
        pbVar21 = pbVar21 + 1;
      }
      *pbVar21 = (byte)uVar15;
      param_2 = pbVar21 + 1;
      plVar18 = *(longlong **)(lVar7 + 0x10);
      puVar1 = (ulonglong *)(plVar18 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar18[3]) {
          plVar18 = (longlong *)*plVar18;
        }
        FUN_1439fa7f0(plVar18,*puVar1 & 0xffffffff,1,
                      "OakSave.VehicleUnlockedSaveGameData.asset_path");
        uVar9 = *(undefined8 *)(lVar7 + 0x10);
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(uVar9,pbVar21 + 2);
      }
      if (*(char *)(lVar7 + 0x18) != '\0') {
        param_2 = (byte *)FUN_141514ca0(2,*(char *)(lVar7 + 0x18),param_2);
      }
      if ((*(byte *)(lVar7 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  iVar6 = IStreamingManager::GetNumWantingResources(param_1 + 0x20);
  iVar19 = 0;
  if (0 < iVar6) {
    do {
      lVar7 = FUN_1439f1d30(param_1 + 0x20,iVar19);
      uVar16 = *(ulonglong *)(lVar7 + 0x10);
      puVar8 = (undefined8 *)FUN_1439f1d30(param_1 + 0x20,iVar19);
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      FUN_1439fa7f0(puVar8,uVar16 & 0xffffffff,1,"OakSave.Character.vehicle_parts_unlocked");
      uVar9 = FUN_1439f1d30(param_1 + 0x20,iVar19);
      uVar14 = 0xca;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar14;
        uVar14 = uVar14 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar14);
      pbVar21[1] = (byte)uVar14;
      param_2 = (byte *)FUN_1439f9df0(uVar9,pbVar21 + 2);
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar6);
  }
  uVar14 = *(uint *)(param_1 + 0x24);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      lVar7 = *(longlong *)(param_1[0x25] + 8 + (longlong)(int)uVar22 * 8);
      uVar15 = 0xd2;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar15;
        uVar15 = uVar15 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar15);
      pbVar21[1] = (byte)uVar15;
      pbVar21 = pbVar21 + 2;
      for (uVar15 = *(uint *)(lVar7 + 0x6c); 0x7f < uVar15; uVar15 = uVar15 >> 7) {
        *pbVar21 = (byte)uVar15 | 0x80;
        pbVar21 = pbVar21 + 1;
      }
      *pbVar21 = (byte)uVar15;
      param_2 = (byte *)FUN_14152de90(lVar7,pbVar21 + 1);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  if (*(int *)((longlong)param_1 + 0x40c) != 0) {
    param_2 = (byte *)FUN_141514d80(0x1b,*(int *)((longlong)param_1 + 0x40c),param_2);
  }
  uVar14 = *(uint *)(param_1 + 0x27);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      param_2 = (byte *)FUN_1414fd9b0(0x1c,*(undefined8 *)
                                            (param_1[0x28] + 8 + (longlong)(int)uVar22 * 8),param_2)
      ;
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  uVar14 = *(uint *)(param_1 + 0x2a);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      param_2 = (byte *)FUN_1414fdcf0(0x1d,*(undefined8 *)
                                            (param_1[0x2b] + 8 + (longlong)(int)uVar22 * 8),param_2)
      ;
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  iVar6 = IStreamingManager::GetNumWantingResources(param_1 + 0x2c);
  iVar19 = 0;
  if (0 < iVar6) {
    do {
      lVar7 = FUN_1439f1d30(param_1 + 0x2c,iVar19);
      uVar16 = *(ulonglong *)(lVar7 + 0x10);
      puVar8 = (undefined8 *)FUN_1439f1d30(param_1 + 0x2c,iVar19);
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      FUN_1439fa7f0(puVar8,uVar16 & 0xffffffff,1,"OakSave.Character.selected_customizations");
      uVar9 = FUN_1439f1d30(param_1 + 0x2c,iVar19);
      uVar14 = 0xf2;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar14;
        uVar14 = uVar14 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar14);
      pbVar21[1] = (byte)uVar14;
      param_2 = (byte *)FUN_1439f9df0(uVar9,pbVar21 + 2);
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar6);
  }
  iVar6 = FUN_1439f2ae0(param_1 + 0x2f);
  if (0 < iVar6) {
    uVar14 = 0xfa;
    do {
      pbVar21 = param_2;
      bVar13 = (byte)uVar14;
      uVar14 = uVar14 >> 7;
      *pbVar21 = bVar13 | 0x80;
      param_2 = pbVar21 + 1;
    } while (0x7f < uVar14);
    pbVar21[1] = (byte)uVar14;
    pbVar21 = pbVar21 + 2;
    for (uVar14 = *(uint *)(param_1 + 0x31); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
      *pbVar21 = (byte)uVar14 | 0x80;
      pbVar21 = pbVar21 + 1;
    }
    *pbVar21 = (byte)uVar14;
    param_2 = (byte *)FUN_141542140(param_1 + 0x2f,pbVar21 + 1);
  }
  uVar14 = *(uint *)(param_1 + 0x33);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      param_2 = (byte *)FUN_141519d80(0x20,*(undefined8 *)
                                            (param_1[0x34] + 8 + (longlong)(int)uVar22 * 8),param_2)
      ;
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  if (param_1 != &DAT_1468a51a0) {
    lVar7 = param_1[0x74];
    if (lVar7 != 0) {
      uVar14 = 0x10a;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar14;
        uVar14 = uVar14 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar14);
      pbVar21[1] = (byte)uVar14;
      pbVar21 = pbVar21 + 2;
      for (uVar14 = *(uint *)(lVar7 + 0x18); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
        *pbVar21 = (byte)uVar14 | 0x80;
        pbVar21 = pbVar21 + 1;
      }
      *pbVar21 = (byte)uVar14;
      param_2 = pbVar21 + 1;
      if (*(int *)(lVar7 + 0x10) != 0) {
        param_2 = (byte *)FUN_141514d80(1,*(int *)(lVar7 + 0x10),param_2);
      }
      if (*(int *)(lVar7 + 0x14) != 0) {
        param_2 = (byte *)FUN_141514d80(2,*(int *)(lVar7 + 0x14),param_2);
      }
      if ((*(byte *)(lVar7 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe,param_2);
      }
    }
    if (param_1 != &DAT_1468a51a0) {
      lVar7 = param_1[0x75];
      if (lVar7 != 0) {
        uVar14 = 0x112;
        do {
          pbVar21 = param_2;
          bVar13 = (byte)uVar14;
          uVar14 = uVar14 >> 7;
          *pbVar21 = bVar13 | 0x80;
          param_2 = pbVar21 + 1;
        } while (0x7f < uVar14);
        pbVar21[1] = (byte)uVar14;
        pbVar21 = pbVar21 + 2;
        for (uVar14 = *(uint *)(lVar7 + 0x34); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
          *pbVar21 = (byte)uVar14 | 0x80;
          pbVar21 = pbVar21 + 1;
        }
        *pbVar21 = (byte)uVar14;
        param_2 = (byte *)FUN_14152c0a0(lVar7,pbVar21 + 1);
      }
      if ((param_1 != &DAT_1468a51a0) && (lVar7 = param_1[0x76], lVar7 != 0)) {
        uVar14 = 0x11a;
        do {
          pbVar21 = param_2;
          bVar13 = (byte)uVar14;
          uVar14 = uVar14 >> 7;
          *pbVar21 = bVar13 | 0x80;
          param_2 = pbVar21 + 1;
        } while (0x7f < uVar14);
        pbVar21[1] = (byte)uVar14;
        pbVar21 = pbVar21 + 2;
        for (uVar14 = *(uint *)(lVar7 + 0x28); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
          *pbVar21 = (byte)uVar14 | 0x80;
          pbVar21 = pbVar21 + 1;
        }
        *pbVar21 = (byte)uVar14;
        param_2 = (byte *)FUN_14152bf00(lVar7,pbVar21 + 1);
      }
    }
  }
  uVar14 = *(uint *)(param_1 + 0x36);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      lVar7 = *(longlong *)(param_1[0x37] + 8 + (longlong)(int)uVar22 * 8);
      uVar15 = 0x122;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar15;
        uVar15 = uVar15 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar15);
      pbVar21[1] = (byte)uVar15;
      pbVar21 = pbVar21 + 2;
      for (uVar15 = *(uint *)(lVar7 + 0x1c); 0x7f < uVar15; uVar15 = uVar15 >> 7) {
        *pbVar21 = (byte)uVar15 | 0x80;
        pbVar21 = pbVar21 + 1;
      }
      *pbVar21 = (byte)uVar15;
      param_2 = pbVar21 + 1;
      if (*(char *)(lVar7 + 0x18) != '\0') {
        param_2 = (byte *)FUN_141514ca0(1,*(char *)(lVar7 + 0x18),param_2);
      }
      plVar18 = *(longlong **)(lVar7 + 0x10);
      puVar1 = (ulonglong *)(plVar18 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar18[3]) {
          plVar18 = (longlong *)*plVar18;
        }
        FUN_1439fa7f0(plVar18,*puVar1 & 0xffffffff,1,"OakSave.EchoLogSaveGameData.echo_log_path");
        param_2 = (byte *)FUN_141514e70(2,*(undefined8 *)(lVar7 + 0x10),param_2);
      }
      if ((*(byte *)(lVar7 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  if (*(char *)((longlong)param_1 + 0x411) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x25,*(char *)((longlong)param_1 + 0x411),param_2);
  }
  plVar18 = param_1 + 0x38;
  lVar7 = (**(code **)(*plVar18 + 0x90))(plVar18);
  if (**(longlong **)(lVar7 + 0x10) != 0) {
    lVar7 = (**(code **)(*plVar18 + 0x90))(plVar18);
    plVar10 = (longlong *)FUN_140d599d0(*(undefined8 *)(lVar7 + 0x10),&local_a0);
    lVar7 = *plVar10;
    lVar4 = plVar10[1];
    local_a8 = plVar10[2];
    local_a0._0_4_ = (undefined4)lVar7;
    local_a0._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
    uStack_98._0_4_ = (undefined4)lVar4;
    uStack_98._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_b8 = (undefined4)local_a0;
    uStack_b4 = local_a0._4_4_;
    uStack_b0 = (undefined4)uStack_98;
    uStack_ac = uStack_98._4_4_;
    local_a0 = lVar7;
    uStack_98 = lVar4;
    local_90 = local_a8;
    local_60 = local_a8;
    (**(code **)(*plVar18 + 0x90))(plVar18);
    if (lVar7 != 0) {
      lVar7 = CONCAT44(uStack_b4,local_b8);
      plVar18 = (longlong *)0x0;
      do {
        lVar7 = *(longlong *)(lVar7 + 0x20);
        lVar4 = param_1[0x46];
        if (lVar4 == 0) {
          plVar10 = (longlong *)operator_new();
          if (plVar10 != (longlong *)0x0) {
            plVar10[3] = 0;
            plVar10[1] = (longlong)&DAT_146ba2f50;
            plVar10[2] = (longlong)&DAT_146ba2f50;
            *(undefined4 *)(plVar10 + 4) = 0;
            plVar10[5] = 0;
            goto LAB_14152b11c;
          }
          plVar10 = (longlong *)0x0;
        }
        else {
          if (*(longlong *)(lVar4 + 0x70) != 0) {
            FUN_1439f01b0(lVar4,0,0x40);
          }
          plVar10 = (longlong *)FUN_1439efd10(lVar4,0x40);
          plVar10[3] = lVar4;
          plVar10[1] = (longlong)&DAT_146ba2f50;
          plVar10[2] = (longlong)&DAT_146ba2f50;
          *(undefined4 *)(plVar10 + 4) = 0;
          plVar10[5] = lVar4;
LAB_14152b11c:
          *plVar10 = (longlong)&PTR_FUN_144c62948;
          plVar10[6] = lVar7;
          plVar10[7] = lVar7 + 0x20;
          *(uint *)(plVar10 + 4) = *(uint *)(plVar10 + 4) | 3;
        }
        if (plVar18 != (longlong *)0x0) {
          (**(code **)*plVar18)(plVar18,1);
        }
        uVar14 = 0x132;
        do {
          pbVar21 = param_2;
          bVar13 = (byte)uVar14;
          uVar14 = uVar14 >> 7;
          *pbVar21 = bVar13 | 0x80;
          param_2 = pbVar21 + 1;
        } while (0x7f < uVar14);
        pbVar21[1] = (byte)uVar14;
        pbVar21 = pbVar21 + 2;
        if ((*(byte *)(plVar10 + 4) & 1) == 0) {
          iVar6 = 0;
        }
        else {
          lVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          uVar22 = (uint)*(undefined8 *)(lVar7 + 0x10);
          uVar14 = uVar22 | 1;
          iVar6 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          iVar6 = (iVar6 * 9 + 0x49U >> 6) + 1 + uVar22;
        }
        if ((*(uint *)(plVar10 + 4) >> 1 & 1) == 0) {
          iVar19 = 0;
        }
        else {
          lVar7 = (**(code **)(*plVar10 + 200))(plVar10);
          uVar22 = (uint)*(undefined8 *)(lVar7 + 0x10);
          uVar14 = uVar22 | 1;
          iVar19 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> iVar19 == 0; iVar19 = iVar19 + -1) {
            }
          }
          iVar19 = (iVar19 * 9 + 0x49U >> 6) + 1 + uVar22;
        }
        for (uVar14 = iVar19 + iVar6; 0x7f < uVar14; uVar14 = uVar14 >> 7) {
          *pbVar21 = (byte)uVar14 | 0x80;
          pbVar21 = pbVar21 + 1;
        }
        *pbVar21 = (byte)uVar14;
        uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        uVar9 = FUN_141514e70(1,uVar9,pbVar21 + 1);
        uVar11 = (**(code **)(*plVar10 + 200))(plVar10);
        param_2 = (byte *)FUN_141514e70(2,uVar11,uVar9);
        plVar18 = *(longlong **)(CONCAT44(uStack_b4,local_b8) + 0x20);
        plVar17 = plVar18;
        if (0xf < (ulonglong)plVar18[3]) {
          plVar17 = (longlong *)*plVar18;
        }
        FUN_1439fa7f0(plVar17,(int)plVar18[2],1,"OakSave.Character.NicknameMappingsEntry.key");
        plVar17 = plVar18 + 4;
        if (0xf < (ulonglong)plVar18[7]) {
          plVar17 = (longlong *)*plVar17;
        }
        FUN_1439fa7f0(plVar17,(int)plVar18[6],1,"OakSave.Character.NicknameMappingsEntry.value");
        FUN_140d25b00(&local_b8);
        (**(code **)(param_1[0x38] + 0x90))();
        lVar7 = CONCAT44(uStack_b4,local_b8);
        plVar18 = plVar10;
      } while (lVar7 != 0);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)*plVar10)(plVar10,1);
      }
    }
  }
  if (param_1 != &DAT_1468a51a0) {
    if (param_1[0x77] != 0) {
      param_2 = (byte *)FUN_14151a0e0(0x27,param_1[0x77],param_2);
    }
    if (param_1 != &DAT_1468a51a0) {
      lVar7 = param_1[0x78];
      if (lVar7 != 0) {
        uVar14 = 0x142;
        do {
          pbVar21 = param_2;
          bVar13 = (byte)uVar14;
          uVar14 = uVar14 >> 7;
          *pbVar21 = bVar13 | 0x80;
          param_2 = pbVar21 + 1;
        } while (0x7f < uVar14);
        pbVar21[1] = (byte)uVar14;
        pbVar21 = pbVar21 + 2;
        for (uVar14 = *(uint *)(lVar7 + 0x18); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
          *pbVar21 = (byte)uVar14 | 0x80;
          pbVar21 = pbVar21 + 1;
        }
        *pbVar21 = (byte)uVar14;
        param_2 = pbVar21 + 1;
        if (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x10) != 0) {
          param_2 = (byte *)FUN_141514e70(1,*(longlong *)(lVar7 + 0x10),param_2);
        }
        if ((*(byte *)(lVar7 + 8) & 1) != 0) {
          param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe,param_2);
        }
      }
      if (param_1 != &DAT_1468a51a0) {
        lVar7 = param_1[0x79];
        if (lVar7 != 0) {
          uVar14 = 0x14a;
          do {
            pbVar21 = param_2;
            bVar13 = (byte)uVar14;
            uVar14 = uVar14 >> 7;
            *pbVar21 = bVar13 | 0x80;
            param_2 = pbVar21 + 1;
          } while (0x7f < uVar14);
          pbVar21[1] = (byte)uVar14;
          pbVar21 = pbVar21 + 2;
          for (uVar14 = *(uint *)(lVar7 + 0x28); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
            *pbVar21 = (byte)uVar14 | 0x80;
            pbVar21 = pbVar21 + 1;
          }
          *pbVar21 = (byte)uVar14;
          param_2 = (byte *)FUN_14152e6a0(lVar7,pbVar21 + 1);
        }
        if ((param_1 != &DAT_1468a51a0) && (lVar7 = param_1[0x7a], lVar7 != 0)) {
          uVar14 = 0x152;
          do {
            pbVar21 = param_2;
            bVar13 = (byte)uVar14;
            uVar14 = uVar14 >> 7;
            *pbVar21 = bVar13 | 0x80;
            param_2 = pbVar21 + 1;
          } while (0x7f < uVar14);
          pbVar21[1] = (byte)uVar14;
          pbVar21 = pbVar21 + 2;
          for (uVar14 = *(uint *)(lVar7 + 0x38); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
            *pbVar21 = (byte)uVar14 | 0x80;
            pbVar21 = pbVar21 + 1;
          }
          *pbVar21 = (byte)uVar14;
          param_2 = (byte *)FUN_14152f360(lVar7,pbVar21 + 1);
        }
      }
    }
  }
  plVar18 = (longlong *)param_1[0x6f];
  puVar1 = (ulonglong *)(plVar18 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar18[3]) {
      plVar18 = (longlong *)*plVar18;
    }
    FUN_1439fa7f0(plVar18,*puVar1 & 0xffffffff,1,"OakSave.Character.preferred_character_name");
    param_2 = (byte *)FUN_141514e70(0x2b,param_1[0x6f],param_2);
  }
  if (*(int *)((longlong)param_1 + 0x414) != 0) {
    param_2 = (byte *)FUN_141514d80(0x2c,*(int *)((longlong)param_1 + 0x414),param_2);
  }
  if (*(int *)(param_1 + 0x83) != 0) {
    param_2 = (byte *)FUN_141514f20(0x2d,*(int *)(param_1 + 0x83),param_2);
  }
  if ((param_1 != &DAT_1468a51a0) && (lVar7 = param_1[0x7b], lVar7 != 0)) {
    uVar14 = 0x172;
    do {
      pbVar21 = param_2;
      bVar13 = (byte)uVar14;
      uVar14 = uVar14 >> 7;
      *pbVar21 = bVar13 | 0x80;
      param_2 = pbVar21 + 1;
    } while (0x7f < uVar14);
    pbVar21[1] = (byte)uVar14;
    pbVar21 = pbVar21 + 2;
    for (uVar14 = *(uint *)(lVar7 + 0x30); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
      *pbVar21 = (byte)uVar14 | 0x80;
      pbVar21 = pbVar21 + 1;
    }
    *pbVar21 = (byte)uVar14;
    param_2 = (byte *)FUN_14152f1c0(lVar7,pbVar21 + 1);
  }
  uVar14 = *(uint *)(param_1 + 0x4b);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      lVar7 = *(longlong *)(param_1[0x4c] + 8 + (longlong)(int)uVar22 * 8);
      uVar15 = 0x17a;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar15;
        uVar15 = uVar15 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar15);
      pbVar21[1] = (byte)uVar15;
      pbVar21 = pbVar21 + 2;
      for (uVar15 = *(uint *)(lVar7 + 0x30); 0x7f < uVar15; uVar15 = uVar15 >> 7) {
        *pbVar21 = (byte)uVar15 | 0x80;
        pbVar21 = pbVar21 + 1;
      }
      *pbVar21 = (byte)uVar15;
      param_2 = (byte *)FUN_14152d550(lVar7,pbVar21 + 1);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  if (*(int *)((longlong)param_1 + 0x41c) != 0) {
    param_2 = (byte *)FUN_141514f20(0x30,*(int *)((longlong)param_1 + 0x41c),param_2);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    param_2 = (byte *)FUN_141514f20(0x31,*(int *)(param_1 + 0x84),param_2);
  }
  if ((param_1 != &DAT_1468a51a0) && (lVar7 = param_1[0x7c], lVar7 != 0)) {
    uVar14 = 0x192;
    do {
      pbVar21 = param_2;
      bVar13 = (byte)uVar14;
      uVar14 = uVar14 >> 7;
      *pbVar21 = bVar13 | 0x80;
      param_2 = pbVar21 + 1;
    } while (0x7f < uVar14);
    pbVar21[1] = (byte)uVar14;
    pbVar21 = pbVar21 + 2;
    for (uVar14 = *(uint *)(lVar7 + 0x28); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
      *pbVar21 = (byte)uVar14 | 0x80;
      pbVar21 = pbVar21 + 1;
    }
    *pbVar21 = (byte)uVar14;
    uVar22 = 0;
    uVar14 = *(uint *)(lVar7 + 0x18);
    param_2 = pbVar21 + 1;
    if (uVar14 != 0) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x20) + 8 + (longlong)(int)uVar22 * 8);
        *param_2 = 10;
        uVar15 = *(uint *)(lVar4 + 0x34);
        while( true ) {
          pbVar21 = param_2 + 1;
          bVar13 = (byte)uVar15;
          if (uVar15 < 0x80) break;
          uVar15 = uVar15 >> 7;
          *pbVar21 = bVar13 | 0x80;
          param_2 = pbVar21;
        }
        *pbVar21 = bVar13;
        param_2 = (byte *)FUN_14152ca70(lVar4,param_2 + 2);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar14);
    }
    if ((*(byte *)(lVar7 + 8) & 1) != 0) {
      param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe,param_2);
    }
  }
  uVar14 = *(uint *)(param_1 + 0x4e);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      param_2 = (byte *)FUN_141519c90(0x33,*(undefined8 *)
                                            (param_1[0x4f] + 8 + (longlong)(int)uVar22 * 8),param_2)
      ;
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  iVar6 = IStreamingManager::GetNumWantingResources(param_1 + 0x50);
  iVar19 = 0;
  if (0 < iVar6) {
    do {
      lVar7 = FUN_1439f1d30(param_1 + 0x50,iVar19);
      uVar16 = *(ulonglong *)(lVar7 + 0x10);
      puVar8 = (undefined8 *)FUN_1439f1d30(param_1 + 0x50,iVar19);
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      FUN_1439fa7f0(puVar8,uVar16 & 0xffffffff,1,
                    "OakSave.Character.last_active_travel_station_for_playthrough");
      uVar9 = FUN_1439f1d30(param_1 + 0x50,iVar19);
      uVar14 = 0x1a2;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar14;
        uVar14 = uVar14 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar14);
      pbVar21[1] = (byte)uVar14;
      param_2 = (byte *)FUN_1439f9df0(uVar9,pbVar21 + 2);
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar6);
  }
  uVar14 = *(uint *)(param_1 + 0x54);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      puVar8 = *(undefined8 **)(param_1[0x55] + 8 + (longlong)(int)uVar22 * 8);
      uVar15 = 0x1aa;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar15;
        uVar15 = uVar15 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar15);
      pbVar21[1] = (byte)uVar15;
      pbVar21 = pbVar21 + 2;
      for (uVar15 = *(uint *)(puVar8 + 4); 0x7f < uVar15; uVar15 = uVar15 >> 7) {
        *pbVar21 = (byte)uVar15 | 0x80;
        pbVar21 = pbVar21 + 1;
      }
      *pbVar21 = (byte)uVar15;
      param_2 = pbVar21 + 1;
      if ((puVar8 != &DAT_1468a57f8) && (puVar8[2] != 0)) {
        param_2 = (byte *)FUN_14151a0e0(1,puVar8[2],param_2);
      }
      if (*(int *)(puVar8 + 3) != 0) {
        param_2 = (byte *)FUN_141514d80(2,*(int *)(puVar8 + 3),param_2);
      }
      if (*(int *)((longlong)puVar8 + 0x1c) != 0) {
        param_2 = (byte *)FUN_141514d80(3,*(int *)((longlong)puVar8 + 0x1c),param_2);
      }
      if ((*(byte *)(puVar8 + 1) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(puVar8[1] & 0xfffffffffffffffe,param_2);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  uVar14 = *(uint *)(param_1 + 0x57);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      lVar7 = *(longlong *)(param_1[0x58] + 8 + (longlong)(int)uVar22 * 8);
      uVar15 = 0x1b2;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar15;
        uVar15 = uVar15 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar15);
      pbVar21[1] = (byte)uVar15;
      pbVar21 = pbVar21 + 2;
      for (uVar15 = *(uint *)(lVar7 + 0x48); 0x7f < uVar15; uVar15 = uVar15 >> 7) {
        *pbVar21 = (byte)uVar15 | 0x80;
        pbVar21 = pbVar21 + 1;
      }
      *pbVar21 = (byte)uVar15;
      param_2 = (byte *)FUN_141549110(lVar7,pbVar21 + 1);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  uVar14 = *(uint *)(param_1 + 0x5a);
  uVar22 = 0;
  if (uVar14 != 0) {
    do {
      lVar7 = *(longlong *)(param_1[0x5b] + 8 + (longlong)(int)uVar22 * 8);
      uVar15 = 0x1ba;
      do {
        pbVar21 = param_2;
        bVar13 = (byte)uVar15;
        uVar15 = uVar15 >> 7;
        *pbVar21 = bVar13 | 0x80;
        param_2 = pbVar21 + 1;
      } while (0x7f < uVar15);
      pbVar21[1] = (byte)uVar15;
      pbVar21 = pbVar21 + 2;
      for (uVar15 = *(uint *)(lVar7 + 0x28); 0x7f < uVar15; uVar15 = uVar15 >> 7) {
        *pbVar21 = (byte)uVar15 | 0x80;
        pbVar21 = pbVar21 + 1;
      }
      *pbVar21 = (byte)uVar15;
      uVar20 = 0;
      uVar15 = *(uint *)(lVar7 + 0x18);
      param_2 = pbVar21 + 1;
      if (uVar15 != 0) {
        do {
          param_2 = (byte *)FUN_141519c90(1,*(undefined8 *)
                                             (*(longlong *)(lVar7 + 0x20) + 8 +
                                             (longlong)(int)uVar20 * 8),param_2);
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar15);
      }
      if ((*(byte *)(lVar7 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar14);
  }
  plVar18 = (longlong *)param_1[0x70];
  puVar1 = (ulonglong *)(plVar18 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar18[3]) {
      plVar18 = (longlong *)*plVar18;
    }
    FUN_1439fa7f0(plVar18,*puVar1 & 0xffffffff,1,"OakSave.Character.save_game_guid");
    param_2 = (byte *)FUN_141514e70(0x38,param_1[0x70],param_2);
  }
  if ((param_1 != &DAT_1468a51a0) && (lVar7 = param_1[0x7d], lVar7 != 0)) {
    uVar14 = 0x1ca;
    do {
      pbVar21 = param_2;
      bVar13 = (byte)uVar14;
      uVar14 = uVar14 >> 7;
      *pbVar21 = bVar13 | 0x80;
      param_2 = pbVar21 + 1;
    } while (0x7f < uVar14);
    pbVar21[1] = (byte)uVar14;
    pbVar21 = pbVar21 + 2;
    for (uVar14 = *(uint *)(lVar7 + 0x5c); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
      *pbVar21 = (byte)uVar14 | 0x80;
      pbVar21 = pbVar21 + 1;
    }
    *pbVar21 = (byte)uVar14;
    param_2 = (byte *)FUN_14152cbf0(lVar7,pbVar21 + 1);
  }
  if (*(char *)((longlong)param_1 + 0x412) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x3a,*(char *)((longlong)param_1 + 0x412),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x413) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x3b,*(char *)((longlong)param_1 + 0x413),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x424) != 0) {
    param_2 = (byte *)FUN_141514f20(0x3c,*(int *)((longlong)param_1 + 0x424),param_2);
  }
  if (*(int *)(param_1 + 0x85) != 0) {
    param_2 = (byte *)FUN_141514f20(0x3d,*(int *)(param_1 + 0x85),param_2);
  }
  plVar18 = param_1 + 0x5c;
  lVar7 = (**(code **)(*plVar18 + 0x90))(plVar18);
  if (**(longlong **)(lVar7 + 0x10) != 0) {
    puVar8 = (undefined8 *)0x0;
    uVar9 = (**(code **)(*plVar18 + 0x90))(plVar18);
    FUN_140d59970(uVar9);
    (**(code **)(*plVar18 + 0x90))(plVar18);
    if (local_88[0] != 0) {
      do {
        lVar7 = param_1[0x6a];
        lVar4 = *(longlong *)(local_88[0] + 8);
        if (lVar7 == 0) {
          puVar12 = (undefined8 *)operator_new(0x38);
          if (puVar12 != (undefined8 *)0x0) {
            puVar12[2] = 0;
            puVar12[1] = 0;
            *(undefined4 *)(puVar12 + 3) = 0;
            puVar12[4] = 0;
            goto LAB_14152bc4e;
          }
          puVar12 = (undefined8 *)0x0;
        }
        else {
          if (*(longlong *)(lVar7 + 0x70) != 0) {
            FUN_1439f01b0(lVar7,0,0x38);
          }
          puVar12 = (undefined8 *)FUN_1439efd10(lVar7,0x38);
          puVar12[2] = lVar7;
          puVar12[1] = 0;
          *(undefined4 *)(puVar12 + 3) = 0;
          puVar12[4] = lVar7;
LAB_14152bc4e:
          *puVar12 = &PTR__scalar_deleting_destructor__144c62878;
          puVar12[5] = lVar4;
          puVar12[6] = lVar4 + 4;
          *(uint *)(puVar12 + 3) = *(uint *)(puVar12 + 3) | 3;
        }
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        param_2 = (byte *)FUN_141519b30(0x3e,puVar12,param_2);
        FUN_140d259b0(local_88);
        (**(code **)(*plVar18 + 0x90))(plVar18);
        puVar8 = puVar12;
      } while (local_88[0] != 0);
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12,1);
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x42c) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x3f,*(char *)((longlong)param_1 + 0x42c),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x43c) == 0x40) {
    lVar7 = param_1[0x86];
    uVar9 = FUN_1415421c0(0x202,param_2);
    uVar9 = FUN_1415421c0(*(undefined4 *)(lVar7 + 0x148),uVar9);
    param_2 = (byte *)FUN_14152e800(lVar7,uVar9);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(param_1[1] & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152bd80 FUN_14152bd80 body=185 status=ok
// SIG undefined FUN_14152bd80(void)

byte * FUN_14152bd80(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.CrewQuartersDecorationSaveData.decoration_data_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 14152be40 FUN_14152be40 body=186 status=ok
// SIG undefined FUN_14152be40(void)

undefined1 * FUN_14152be40(undefined8 *param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  
  lVar2 = param_1[2];
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(lVar2,param_2 + 1);
  }
  plVar5 = (longlong *)param_1[3];
  puVar1 = (ulonglong *)(plVar5 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar5[3]) {
      plVar5 = (longlong *)*plVar5;
    }
    FUN_1439fa7f0(plVar5,*puVar1 & 0xffffffff,1,
                  "OakSave.CrewQuartersGunRackItemSaveData.slot_asset_path");
    uVar3 = param_1[3];
    *param_2 = 0x12;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  if ((param_1 != &DAT_1468a5638) && (param_1[4] != 0)) {
    param_2 = (undefined1 *)FUN_14151a060(3,param_1[4],param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    puVar4 = (undefined1 *)FUN_143a1dba0(param_1[1] & 0xfffffffffffffffe,param_2);
    return puVar4;
  }
  return param_2;
}



// FUNCTION 14152bf00 FUN_14152bf00 body=412 status=ok
// SIG undefined FUN_14152bf00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152bf00(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar11 = 0;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 != 0) {
    do {
      puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 10;
      uVar8 = *(uint *)(puVar3 + 5);
      pbVar7 = param_2;
      while( true ) {
        pbVar6 = pbVar7 + 1;
        bVar9 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar6 = bVar9 | 0x80;
        pbVar7 = pbVar6;
      }
      *pbVar6 = bVar9;
      param_2 = pbVar7 + 2;
      lVar4 = puVar3[2];
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(lVar4,pbVar7 + 3);
      }
      plVar10 = (longlong *)puVar3[3];
      puVar1 = (ulonglong *)(plVar10 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_1439fa7f0(plVar10,*puVar1 & 0xffffffff,1,
                      "OakSave.CrewQuartersGunRackItemSaveData.slot_asset_path");
        uVar5 = puVar3[3];
        *param_2 = 0x12;
        param_2 = (byte *)FUN_1439f9df0(uVar5,param_2 + 1);
      }
      if ((puVar3 != &DAT_1468a5638) && (lVar4 = puVar3[4], lVar4 != 0)) {
        *param_2 = 0x1a;
        uVar8 = *(uint *)(lVar4 + 0x7c);
        while( true ) {
          param_2 = param_2 + 1;
          bVar9 = (byte)uVar8;
          if (uVar8 < 0x80) break;
          uVar8 = uVar8 >> 7;
          *param_2 = bVar9 | 0x80;
        }
        *param_2 = bVar9;
        param_2 = (byte *)FUN_14152d1c0(lVar4,param_2 + 1);
      }
      if ((*(byte *)(puVar3 + 1) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(puVar3[1] & 0xfffffffffffffffe,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152c0a0 FUN_14152c0a0 body=459 status=ok
// SIG undefined FUN_14152c0a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152c0a0(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != 0) {
    *param_2 = 8;
    while( true ) {
      pbVar10 = param_2 + 1;
      bVar9 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *pbVar10 = bVar9 | 0x80;
      param_2 = pbVar10;
    }
    *pbVar10 = bVar9;
    param_2 = param_2 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar11 = 0;
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x12;
      uVar7 = *(uint *)(lVar3 + 0x1c);
      pbVar10 = param_2;
      while( true ) {
        pbVar5 = pbVar10 + 1;
        bVar9 = (byte)uVar7;
        if (uVar7 < 0x80) break;
        uVar7 = uVar7 >> 7;
        *pbVar5 = bVar9 | 0x80;
        pbVar10 = pbVar5;
      }
      *pbVar5 = bVar9;
      param_2 = pbVar10 + 2;
      uVar6 = (ulonglong)*(int *)(lVar3 + 0x18);
      if (*(int *)(lVar3 + 0x18) != 0) {
        *param_2 = 8;
        pbVar10 = pbVar10 + 3;
        for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
          *pbVar10 = (byte)uVar6 | 0x80;
          pbVar10 = pbVar10 + 1;
        }
        *pbVar10 = (byte)uVar6;
        param_2 = pbVar10 + 1;
      }
      plVar8 = *(longlong **)(lVar3 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,
                      "OakSave.CrewQuartersDecorationSaveData.decoration_data_path");
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        *param_2 = 0x12;
        param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
      }
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  plVar8 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar8 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar8[3]) {
      plVar8 = (longlong *)*plVar8;
    }
    FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,"OakSave.CrewQuartersSaveData.room_data_path");
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 0x1a;
    param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152c270 FUN_14152c270 body=254 status=ok
// SIG undefined FUN_14152c270(void)

undefined1 * FUN_14152c270(undefined8 *param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[2];
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.CustomPlayerColorSaveGameData.color_parameter");
    uVar2 = param_1[2];
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if (param_1 != &DAT_1468a56d0) {
    if (param_1[3] != 0) {
      param_2 = (undefined1 *)FUN_1414fdee0(2,param_1[3],param_2);
    }
    if ((param_1 != &DAT_1468a56d0) && (param_1[4] != 0)) {
      param_2 = (undefined1 *)FUN_1414fdee0(3,param_1[4],param_2);
    }
  }
  if (*(char *)(param_1 + 5) != '\0') {
    param_2 = (undefined1 *)FUN_141514ca0(4,*(char *)(param_1 + 5),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x29) != '\0') {
    param_2 = (undefined1 *)FUN_141514ca0(5,*(char *)((longlong)param_1 + 0x29),param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(param_1[1] & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 14152c370 FUN_14152c370 body=185 status=ok
// SIG undefined FUN_14152c370(void)

byte * FUN_14152c370(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.DiscoveredAreaInfo.discovered_area_name");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
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
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar4 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar4;
  }
  return param_2;
}



// FUNCTION 14152c430 FUN_14152c430 body=445 status=ok
// SIG undefined FUN_14152c430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152c430(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar9 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar9 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar9[3]) {
      plVar9 = (longlong *)*plVar9;
    }
    FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,1,"OakSave.DiscoveredLevelInfo.discovered_level_name")
    ;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  uVar7 = *(uint *)(param_1 + 0x30);
  if (uVar7 != 0) {
    *param_2 = 0x18;
    while( true ) {
      pbVar4 = param_2 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *pbVar4 = bVar6 | 0x80;
      param_2 = pbVar4;
    }
    *pbVar4 = bVar6;
    param_2 = param_2 + 2;
  }
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar10 = 0;
  if (uVar7 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar10 * 8);
      *param_2 = 0x22;
      uVar8 = *(uint *)(lVar3 + 0x1c);
      pbVar4 = param_2;
      while( true ) {
        pbVar5 = pbVar4 + 1;
        bVar6 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar4 = pbVar5;
      }
      *pbVar5 = bVar6;
      param_2 = pbVar4 + 2;
      plVar9 = *(longlong **)(lVar3 + 0x10);
      puVar1 = (ulonglong *)(plVar9 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,1,
                      "OakSave.DiscoveredAreaInfo.discovered_area_name");
        uVar2 = *(undefined8 *)(lVar3 + 0x10);
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(uVar2,pbVar4 + 3);
      }
      uVar8 = *(uint *)(lVar3 + 0x18);
      if (uVar8 != 0) {
        *param_2 = 0x10;
        while( true ) {
          pbVar4 = param_2 + 1;
          bVar6 = (byte)uVar8;
          if (uVar8 < 0x80) break;
          uVar8 = uVar8 >> 7;
          *pbVar4 = bVar6 | 0x80;
          param_2 = pbVar4;
        }
        *pbVar4 = bVar6;
        param_2 = param_2 + 2;
      }
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152c5f0 FUN_14152c5f0 body=148 status=ok
// SIG undefined FUN_14152c5f0(void)

undefined1 * FUN_14152c5f0(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,"OakSave.DiscoveredPlanetInfo.discovered_planet");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    param_2 = (undefined1 *)FUN_141514ca0(2,*(char *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 14152c690 FUN_14152c690 body=176 status=ok
// SIG undefined FUN_14152c690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152c690(longlong param_1,byte *param_2)

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
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar6 * 8);
      *param_2 = 10;
      uVar4 = *(uint *)(lVar2 + 0x34);
      while( true ) {
        pbVar3 = param_2 + 1;
        bVar5 = (byte)uVar4;
        if (uVar4 < 0x80) break;
        uVar4 = uVar4 >> 7;
        *pbVar3 = bVar5 | 0x80;
        param_2 = pbVar3;
      }
      *pbVar3 = bVar5;
      param_2 = (byte *)FUN_14152c430(lVar2,param_2 + 2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14152c740 FUN_14152c740 body=148 status=ok
// SIG undefined FUN_14152c740(void)

undefined1 * FUN_14152c740(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    param_2 = (undefined1 *)FUN_141514ca0(1,*(char *)(param_1 + 0x18),param_2);
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,"OakSave.EchoLogSaveGameData.echo_log_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x12;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 14152c7e0 FUN_14152c7e0 body=271 status=ok
// SIG undefined FUN_14152c7e0(void)

byte * FUN_14152c7e0(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    param_2 = (byte *)FUN_141514ca0(2,*(char *)(param_1 + 0x24),param_2);
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.EquippedInventorySaveGameData.slot_data_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x1a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.EquippedInventorySaveGameData.trinket_data_path");
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 0x22;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 14152c8f0 FUN_14152c8f0 body=205 status=ok
// SIG undefined FUN_14152c8f0(void)

byte * FUN_14152c8f0(undefined8 *param_1,byte *param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  byte bVar3;
  
  if ((param_1 != &DAT_1468a57f8) && (param_1[2] != 0)) {
    param_2 = (byte *)FUN_14151a0e0(1,param_1[2],param_2);
  }
  uVar1 = (ulonglong)*(int *)(param_1 + 3);
  if (*(int *)(param_1 + 3) != 0) {
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar1;
      if (uVar1 < 0x80) break;
      uVar1 = uVar1 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  uVar1 = (ulonglong)*(int *)((longlong)param_1 + 0x1c);
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *param_2 = 0x18;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar1;
      if (uVar1 < 0x80) break;
      uVar1 = uVar1 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    pbVar2 = (byte *)FUN_143a1dba0(param_1[1] & 0xfffffffffffffffe);
    return pbVar2;
  }
  return param_2;
}



// FUNCTION 14152c9c0 FUN_14152c9c0 body=176 status=ok
// SIG undefined FUN_14152c9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152c9c0(longlong param_1,byte *param_2)

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
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar6 * 8);
      *param_2 = 10;
      uVar4 = *(uint *)(lVar2 + 0x34);
      while( true ) {
        pbVar3 = param_2 + 1;
        bVar5 = (byte)uVar4;
        if (uVar4 < 0x80) break;
        uVar4 = uVar4 >> 7;
        *pbVar3 = bVar5 | 0x80;
        param_2 = pbVar3;
      }
      *pbVar3 = bVar5;
      param_2 = (byte *)FUN_14152ca70(lVar2,param_2 + 2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14152ca70 FUN_14152ca70 body=370 status=ok
// SIG undefined FUN_14152ca70(void)

byte * FUN_14152ca70(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar8 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar8[3]) {
      plVar8 = (longlong *)*plVar8;
    }
    FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,"OakSave.GbxZoneMapFODSavedLevelData.level_name");
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  uVar7 = *(uint *)(param_1 + 0x20);
  if (uVar7 != 0) {
    *param_2 = 0x10;
    while( true ) {
      pbVar6 = param_2 + 1;
      bVar5 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *pbVar6 = bVar5 | 0x80;
      param_2 = pbVar6;
    }
    *pbVar6 = bVar5;
    param_2 = param_2 + 2;
  }
  uVar7 = *(uint *)(param_1 + 0x24);
  if (uVar7 != 0) {
    *param_2 = 0x18;
    while( true ) {
      pbVar6 = param_2 + 1;
      bVar5 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *pbVar6 = bVar5 | 0x80;
      param_2 = pbVar6;
    }
    *pbVar6 = bVar5;
    param_2 = param_2 + 2;
  }
  fVar2 = *(float *)(param_1 + 0x28);
  if (fVar2 != 0.0) {
    *param_2 = 0x25;
    *(float *)(param_2 + 1) = fVar2;
    param_2 = param_2 + 5;
  }
  uVar7 = *(uint *)(param_1 + 0x2c);
  if (uVar7 != 0) {
    *param_2 = 0x28;
    while( true ) {
      param_2 = param_2 + 1;
      bVar5 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_2 = bVar5 | 0x80;
    }
    *param_2 = bVar5;
    param_2 = param_2 + 1;
  }
  uVar7 = *(uint *)(param_1 + 0x30);
  if (uVar7 != 0) {
    *param_2 = 0x30;
    while( true ) {
      pbVar6 = param_2 + 1;
      bVar5 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *pbVar6 = bVar5 | 0x80;
      param_2 = pbVar6;
    }
    *pbVar6 = bVar5;
    param_2 = param_2 + 2;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(lVar4 + 0x10) != 0) {
    *param_2 = 0x3a;
    param_2 = (byte *)FUN_1439f9df0(lVar4,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar6 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return pbVar6;
}



// FUNCTION 14152cbf0 FUN_14152cbf0 body=931 status=ok
// SIG undefined FUN_14152cbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152cbf0(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar7 = (ulonglong)*(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = param_2 + 1;
  }
  uVar7 = (ulonglong)*(int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x44) != 0) {
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = param_2 + 1;
  }
  uVar7 = (ulonglong)*(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x48) != 0) {
    *param_2 = 0x18;
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = param_2 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar11 = 0;
  uVar12 = 0;
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar12 * 8);
      *param_2 = 0x22;
      uVar8 = *(uint *)(lVar3 + 0x20);
      pbVar10 = param_2;
      while( true ) {
        pbVar5 = pbVar10 + 1;
        bVar6 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar10 = pbVar5;
      }
      *pbVar5 = bVar6;
      param_2 = pbVar10 + 2;
      uVar7 = (ulonglong)*(int *)(lVar3 + 0x18);
      if (*(int *)(lVar3 + 0x18) != 0) {
        *param_2 = 8;
        pbVar10 = pbVar10 + 3;
        for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
          *pbVar10 = (byte)uVar7 | 0x80;
          pbVar10 = pbVar10 + 1;
        }
        *pbVar10 = (byte)uVar7;
        param_2 = pbVar10 + 1;
      }
      if (*(char *)(lVar3 + 0x1c) != '\0') {
        *param_2 = 0x10;
        param_2[1] = 1;
        param_2 = param_2 + 2;
      }
      plVar9 = *(longlong **)(lVar3 + 0x10);
      puVar1 = (ulonglong *)(plVar9 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,1,
                      "OakSave.GuardianRankRewardCharacterSaveGameData.reward_data_path");
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        *param_2 = 0x1a;
        param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
      }
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x2a;
      uVar12 = *(uint *)(lVar3 + 0x1c);
      pbVar10 = param_2;
      while( true ) {
        pbVar5 = pbVar10 + 1;
        bVar6 = (byte)uVar12;
        if (uVar12 < 0x80) break;
        uVar12 = uVar12 >> 7;
        *pbVar5 = bVar6 | 0x80;
        pbVar10 = pbVar5;
      }
      *pbVar5 = bVar6;
      param_2 = pbVar10 + 2;
      if (*(char *)(lVar3 + 0x18) != '\0') {
        *param_2 = 8;
        pbVar10[3] = 1;
        param_2 = pbVar10 + 4;
      }
      plVar9 = *(longlong **)(lVar3 + 0x10);
      puVar1 = (ulonglong *)(plVar9 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,1,
                      "OakSave.GuardianRankPerkCharacterSaveGameData.perk_data_path");
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        *param_2 = 0x12;
        param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
      }
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  uVar7 = (ulonglong)*(int *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x4c) != 0) {
    *param_2 = 0x30;
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = param_2 + 1;
  }
  uVar7 = *(ulonglong *)(param_1 + 0x50);
  if (uVar7 != 0) {
    *param_2 = 0x38;
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    *param_2 = 0x40;
    param_2[1] = 1;
    param_2 = param_2 + 2;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152cfa0 FUN_14152cfa0 body=148 status=ok
// SIG undefined FUN_14152cfa0(void)

undefined1 * FUN_14152cfa0(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    param_2 = (undefined1 *)FUN_141514ca0(1,*(char *)(param_1 + 0x18),param_2);
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.GuardianRankPerkCharacterSaveGameData.perk_data_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x12;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 14152d040 FUN_14152d040 body=209 status=ok
// SIG undefined FUN_14152d040(void)

byte * FUN_14152d040(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    param_2 = (byte *)FUN_141514ca0(2,*(char *)(param_1 + 0x1c),param_2);
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.GuardianRankRewardCharacterSaveGameData.reward_data_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x1a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 14152d1c0 FUN_14152d1c0 body=714 status=ok
// SIG undefined FUN_14152d1c0(void)

byte * FUN_14152d1c0(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x78) != 0) {
    *param_2 = 8;
    while( true ) {
      pbVar2 = param_2 + 1;
      bVar9 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar2 = bVar9 | 0x80;
      param_2 = pbVar2;
    }
    *pbVar2 = bVar9;
    param_2 = param_2 + 2;
  }
  plVar8 = *(longlong **)(param_1 + 0x58);
  puVar1 = (ulonglong *)(plVar8 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar8[3]) {
      plVar8 = (longlong *)*plVar8;
    }
    FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,
                  "OakSave.InventoryBalanceStateInitializationData.inventory_data");
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar7,param_2 + 1);
  }
  plVar8 = *(longlong **)(param_1 + 0x60);
  puVar1 = (ulonglong *)(plVar8 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar8[3]) {
      plVar8 = (longlong *)*plVar8;
    }
    FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,
                  "OakSave.InventoryBalanceStateInitializationData.inventory_balance_data");
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    *param_2 = 0x1a;
    param_2 = (byte *)FUN_1439f9df0(uVar7,param_2 + 1);
  }
  plVar8 = *(longlong **)(param_1 + 0x68);
  puVar1 = (ulonglong *)(plVar8 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar8[3]) {
      plVar8 = (longlong *)*plVar8;
    }
    FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,
                  "OakSave.InventoryBalanceStateInitializationData.manufacturer_data");
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    *param_2 = 0x22;
    param_2 = (byte *)FUN_1439f9df0(uVar7,param_2 + 1);
  }
  iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  iVar10 = 0;
  iVar11 = iVar10;
  if (0 < iVar3) {
    do {
      lVar5 = FUN_1439f1d30(param_1 + 0x10,iVar11);
      uVar4 = *(ulonglong *)(lVar5 + 0x10);
      puVar6 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar11);
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1439fa7f0(puVar6,uVar4 & 0xffffffff,1,
                    "OakSave.InventoryBalanceStateInitializationData.part_list");
      uVar7 = FUN_1439f1d30(param_1 + 0x10,iVar11);
      *param_2 = 0x2a;
      param_2 = (byte *)FUN_1439f9df0(uVar7,param_2 + 1);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x28);
  iVar11 = iVar10;
  if (0 < iVar3) {
    do {
      lVar5 = FUN_1439f1d30(param_1 + 0x28,iVar11);
      uVar4 = *(ulonglong *)(lVar5 + 0x10);
      puVar6 = (undefined8 *)FUN_1439f1d30(param_1 + 0x28,iVar11);
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1439fa7f0(puVar6,uVar4 & 0xffffffff,1,
                    "OakSave.InventoryBalanceStateInitializationData.generic_part_list");
      uVar7 = FUN_1439f1d30(param_1 + 0x28,iVar11);
      *param_2 = 0x32;
      param_2 = (byte *)FUN_1439f9df0(uVar7,param_2 + 1);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(lVar5 + 0x10) != 0) {
    *param_2 = 0x3a;
    param_2 = (byte *)FUN_1439f9df0(lVar5,param_2 + 1);
  }
  iVar11 = IStreamingManager::GetNumWantingResources(param_1 + 0x40);
  if (0 < iVar11) {
    do {
      lVar5 = FUN_1439f1d30(param_1 + 0x40,iVar10);
      uVar4 = *(ulonglong *)(lVar5 + 0x10);
      puVar6 = (undefined8 *)FUN_1439f1d30(param_1 + 0x40,iVar10);
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1439fa7f0(puVar6,uVar4 & 0xffffffff,1,
                    "OakSave.InventoryBalanceStateInitializationData.customization_part_list");
      uVar7 = FUN_1439f1d30(param_1 + 0x40,iVar10);
      *param_2 = 0x42;
      param_2 = (byte *)FUN_1439f9df0(uVar7,param_2 + 1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152d490 FUN_14152d490 body=187 status=ok
// SIG undefined FUN_14152d490(void)

byte * FUN_14152d490(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.LevelPersistence_Actor_SaveGameData.actor_name");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 14152d550 FUN_14152d550 body=399 status=ok
// SIG undefined FUN_14152d550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152d550(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar10 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar10 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
    FUN_1439fa7f0(plVar10,*puVar1 & 0xffffffff,1,
                  "OakSave.LevelPersistence_Level_SaveGameData.level_name");
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar11 = 0;
  if (uVar2 != 0) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x12;
      uVar9 = *(uint *)(lVar4 + 0x1c);
      pbVar6 = param_2;
      while( true ) {
        pbVar5 = pbVar6 + 1;
        bVar7 = (byte)uVar9;
        if (uVar9 < 0x80) break;
        uVar9 = uVar9 >> 7;
        *pbVar5 = bVar7 | 0x80;
        pbVar6 = pbVar5;
      }
      *pbVar5 = bVar7;
      param_2 = pbVar6 + 2;
      plVar10 = *(longlong **)(lVar4 + 0x10);
      puVar1 = (ulonglong *)(plVar10 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_1439fa7f0(plVar10,*puVar1 & 0xffffffff,1,
                      "OakSave.LevelPersistence_Actor_SaveGameData.actor_name");
        uVar3 = *(undefined8 *)(lVar4 + 0x10);
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(uVar3,pbVar6 + 3);
      }
      uVar8 = (ulonglong)*(int *)(lVar4 + 0x18);
      if (*(int *)(lVar4 + 0x18) != 0) {
        *param_2 = 0x10;
        while( true ) {
          pbVar6 = param_2 + 1;
          bVar7 = (byte)uVar8;
          if (uVar8 < 0x80) break;
          uVar8 = uVar8 >> 7;
          *pbVar6 = bVar7 | 0x80;
          param_2 = pbVar6;
        }
        *pbVar6 = bVar7;
        param_2 = param_2 + 2;
      }
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar4 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152d770 FUN_14152d770 body=238 status=ok
// SIG undefined FUN_14152d770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152d770(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar9 = 0;
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar9 * 8);
      *param_2 = 10;
      uVar6 = *(uint *)(lVar3 + 0x48);
      while( true ) {
        pbVar5 = param_2 + 1;
        bVar8 = (byte)uVar6;
        if (uVar6 < 0x80) break;
        uVar6 = uVar6 >> 7;
        *pbVar5 = bVar8 | 0x80;
        param_2 = pbVar5;
      }
      *pbVar5 = bVar8;
      param_2 = (byte *)FUN_14152d860(lVar3,param_2 + 2);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  plVar7 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar7 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar7[3]) {
      plVar7 = (longlong *)*plVar7;
    }
    FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,1,
                  "OakSave.MissionPlaythroughSaveGameData.tracked_mission_class_path");
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152d860 FUN_14152d860 body=482 status=ok
// SIG undefined FUN_14152d860(void)

byte * FUN_14152d860(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) != 0) {
    *param_2 = 8;
    while( true ) {
      pbVar5 = param_2 + 1;
      bVar7 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar5 = bVar7 | 0x80;
      param_2 = pbVar5;
    }
    *pbVar5 = bVar7;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    param_2 = (byte *)FUN_141514ca0(2,*(char *)(param_1 + 0x3c),param_2);
  }
  iVar3 = FUN_1439f2ae0(param_1 + 0x10);
  if (0 < iVar3) {
    *param_2 = 0x1a;
    uVar8 = *(uint *)(param_1 + 0x20);
    while( true ) {
      pbVar5 = param_2 + 1;
      bVar7 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *pbVar5 = bVar7 | 0x80;
      param_2 = pbVar5;
    }
    *pbVar5 = bVar7;
    param_2 = (byte *)FUN_141542140(param_1 + 0x10,param_2 + 2);
  }
  plVar6 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.MissionStatusPlayerSaveGameData.mission_class_path");
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 0x22;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x30);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.MissionStatusPlayerSaveGameData.active_objective_set_path");
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *param_2 = 0x2a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  uVar8 = *(uint *)(param_1 + 0x40);
  if (uVar8 != 0) {
    *param_2 = 0x30;
    while( true ) {
      param_2 = param_2 + 1;
      bVar7 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *param_2 = bVar7 | 0x80;
    }
    *param_2 = bVar7;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x3d) != '\0') {
    param_2 = (byte *)FUN_141514ca0(7,*(char *)(param_1 + 0x3d),param_2);
  }
  uVar8 = *(uint *)(param_1 + 0x44);
  if (uVar8 != 0) {
    *param_2 = 0x40;
    while( true ) {
      param_2 = param_2 + 1;
      bVar7 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *param_2 = bVar7 | 0x80;
    }
    *param_2 = bVar7;
    param_2 = param_2 + 1;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return pbVar5;
}



// FUNCTION 14152da50 FUN_14152da50 body=186 status=ok
// SIG undefined FUN_14152da50(void)

undefined1 * FUN_14152da50(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.OakAbilitySlotSaveGameData.ability_class_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,"OakSave.OakAbilitySlotSaveGameData.slot_asset_path"
                 );
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 0x12;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 14152db10 FUN_14152db10 body=315 status=ok
// SIG undefined FUN_14152db10(void)

byte * FUN_14152db10(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte bVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakAbilityTreeItemSaveGameData.item_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  uVar3 = (ulonglong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
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
  uVar3 = (ulonglong)*(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    *param_2 = 0x18;
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
  uVar3 = (ulonglong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    *param_2 = 0x20;
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
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar4 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar4;
  }
  return param_2;
}



// FUNCTION 14152dc50 FUN_14152dc50 body=310 status=ok
// SIG undefined FUN_14152dc50(void)

undefined1 * FUN_14152dc50(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.ability_class_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.augment_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 0x12;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.mod_slot_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *param_2 = 0x1a;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.mod_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 0x22;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 14152dd90 FUN_14152dd90 body=248 status=ok
// SIG undefined FUN_14152dd90(void)

undefined1 * FUN_14152dd90(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentSaveGameData.action_ability_class_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentSaveGameData.slot_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 0x12;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentSaveGameData.augment_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *param_2 = 0x1a;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 14152de90 FUN_14152de90 body=874 status=ok
// SIG undefined FUN_14152de90(void)

byte * FUN_14152de90(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte bVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.loadout_save_name");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.body_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x20);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.wheel_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *param_2 = 0x1a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.armor_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 0x22;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x30);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.core_mod_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *param_2 = 0x2a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x38);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.gunner_weapon_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *param_2 = 0x32;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x40);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.driver_weapon_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *param_2 = 0x3a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x48);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.ornament_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *param_2 = 0x42;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x50);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.material_decal_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *param_2 = 0x4a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x58);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.material_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *param_2 = 0x52;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  uVar3 = (ulonglong)*(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x60) != 0) {
    *param_2 = 0x58;
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
  uVar3 = (ulonglong)*(int *)(param_1 + 100);
  if (*(int *)(param_1 + 100) != 0) {
    *param_2 = 0x60;
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
  uVar3 = (ulonglong)*(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x68) != 0) {
    *param_2 = 0x68;
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
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar4 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar4;
  }
  return param_2;
}



// FUNCTION 14152e200 FUN_14152e200 body=318 status=ok
// SIG undefined FUN_14152e200(void)

byte * FUN_14152e200(undefined8 *param_1,byte *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte bVar6;
  longlong *plVar7;
  
  lVar2 = param_1[2];
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(lVar2,param_2 + 1);
  }
  uVar4 = (ulonglong)*(int *)(param_1 + 5);
  if (*(int *)(param_1 + 5) != 0) {
    *param_2 = 0x10;
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
  uVar4 = (ulonglong)*(int *)((longlong)param_1 + 0x2c);
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
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
  plVar7 = (longlong *)param_1[3];
  puVar1 = (ulonglong *)(plVar7 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar7[3]) {
      plVar7 = (longlong *)*plVar7;
    }
    FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,1,
                  "OakSave.OakInventoryItemSaveGameData.weapon_skin_path");
    uVar3 = param_1[3];
    *param_2 = 0x22;
    param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  if ((param_1 != &DAT_1468a5b88) && (param_1[4] != 0)) {
    param_2 = (byte *)FUN_14151a060(5,param_1[4],param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(param_1[1] & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 14152e340 FUN_14152e340 body=661 status=ok
// SIG undefined FUN_14152e340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152e340(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar7 = (ulonglong)*(int *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x70) != 0) {
    *param_2 = 8;
    while( true ) {
      pbVar5 = param_2 + 1;
      bVar10 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *pbVar5 = bVar10 | 0x80;
      param_2 = pbVar5;
    }
    *pbVar5 = bVar10;
    param_2 = param_2 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar11 = 0;
  uVar12 = 0;
  if (uVar2 != 0) {
    do {
      param_2 = (byte *)FUN_14151a330(2,*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x20) + 8 +
                                         (longlong)(int)uVar12 * 8),param_2);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar12 = 0;
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar12 * 8);
      *param_2 = 0x1a;
      uVar8 = *(uint *)(lVar3 + 0x20);
      pbVar5 = param_2;
      while( true ) {
        pbVar6 = pbVar5 + 1;
        bVar10 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar6 = bVar10 | 0x80;
        pbVar5 = pbVar6;
      }
      *pbVar6 = bVar10;
      param_2 = pbVar5 + 2;
      plVar9 = *(longlong **)(lVar3 + 0x10);
      puVar1 = (ulonglong *)(plVar9 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,1,
                      "OakSave.OakAbilitySlotSaveGameData.ability_class_path");
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(uVar4,pbVar5 + 3);
      }
      plVar9 = *(longlong **)(lVar3 + 0x18);
      puVar1 = (ulonglong *)(plVar9 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,1,
                      "OakSave.OakAbilitySlotSaveGameData.slot_asset_path");
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
        *param_2 = 0x12;
        param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
      }
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  uVar12 = 0;
  if (uVar2 != 0) {
    do {
      param_2 = (byte *)FUN_14151a4d0(4,*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x50) + 8 +
                                         (longlong)(int)uVar12 * 8),param_2);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x2a;
      uVar12 = *(uint *)(lVar3 + 0x30);
      while( true ) {
        pbVar5 = param_2 + 1;
        bVar10 = (byte)uVar12;
        if (uVar12 < 0x80) break;
        uVar12 = uVar12 >> 7;
        *pbVar5 = bVar10 | 0x80;
        param_2 = pbVar5;
      }
      *pbVar5 = bVar10;
      param_2 = (byte *)FUN_14152dc50(lVar3,param_2 + 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  uVar7 = (ulonglong)*(int *)(param_1 + 0x74);
  if (*(int *)(param_1 + 0x74) != 0) {
    *param_2 = 0x30;
    while( true ) {
      param_2 = param_2 + 1;
      bVar10 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_2 = bVar10 | 0x80;
    }
    *param_2 = bVar10;
    param_2 = param_2 + 1;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152e5e0 FUN_14152e5e0 body=186 status=ok
// SIG undefined FUN_14152e5e0(void)

undefined1 * FUN_14152e5e0(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.OakPlayerCharacterAugmentSaveGameData.slot_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,
                  "OakSave.OakPlayerCharacterAugmentSaveGameData.augment_asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 0x12;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 14152e6a0 FUN_14152e6a0 body=345 status=ok
// SIG undefined FUN_14152e6a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152e6a0(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar10 = 0;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar10 * 8);
      *param_2 = 10;
      uVar7 = *(uint *)(lVar3 + 0x20);
      pbVar6 = param_2;
      while( true ) {
        pbVar5 = pbVar6 + 1;
        bVar8 = (byte)uVar7;
        if (uVar7 < 0x80) break;
        uVar7 = uVar7 >> 7;
        *pbVar5 = bVar8 | 0x80;
        pbVar6 = pbVar5;
      }
      *pbVar5 = bVar8;
      param_2 = pbVar6 + 2;
      plVar9 = *(longlong **)(lVar3 + 0x10);
      puVar1 = (ulonglong *)(plVar9 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,1,
                      "OakSave.OakPlayerCharacterAugmentSaveGameData.slot_asset_path");
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(uVar4,pbVar6 + 3);
      }
      plVar9 = *(longlong **)(lVar3 + 0x18);
      puVar1 = (ulonglong *)(plVar9 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,1,
                      "OakSave.OakPlayerCharacterAugmentSaveGameData.augment_asset_path");
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
        *param_2 = 0x12;
        param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
      }
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152e800 FUN_14152e800 body=1516 status=ok
// SIG undefined FUN_14152e800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152e800(undefined8 *param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar9 = *(uint *)(param_1 + 3);
  iVar13 = 0;
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      lVar4 = *(longlong *)(param_1[4] + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 10;
      uVar8 = *(uint *)(lVar4 + 0x1c);
      while( true ) {
        pbVar10 = param_2 + 1;
        bVar6 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar10 = bVar6 | 0x80;
        param_2 = pbVar10;
      }
      *pbVar10 = bVar6;
      param_2 = (byte *)FUN_141548a10(lVar4,param_2 + 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 5);
  iVar12 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = FUN_1439f1d30(param_1 + 5,iVar12);
      *param_2 = 0x12;
      param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar2);
  }
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 8);
  iVar12 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = FUN_1439f1d30(param_1 + 8,iVar12);
      *param_2 = 0x1a;
      param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar2);
  }
  uVar9 = *(uint *)(param_1 + 0xc);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      lVar4 = *(longlong *)(param_1[0xd] + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x22;
      uVar8 = *(uint *)(lVar4 + 0x58);
      while( true ) {
        pbVar10 = param_2 + 1;
        bVar6 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar10 = bVar6 | 0x80;
        param_2 = pbVar10;
      }
      *pbVar10 = bVar6;
      param_2 = (byte *)FUN_141548ce0(lVar4,param_2 + 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0xf);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      lVar4 = *(longlong *)(param_1[0x10] + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x2a;
      uVar8 = *(uint *)(lVar4 + 0x1c);
      while( true ) {
        pbVar10 = param_2 + 1;
        bVar6 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar10 = bVar6 | 0x80;
        param_2 = pbVar10;
      }
      *pbVar10 = bVar6;
      param_2 = (byte *)FUN_141548f60(lVar4,param_2 + 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x12);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      lVar4 = *(longlong *)(param_1[0x13] + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x32;
      uVar8 = *(uint *)(lVar4 + 0x1c);
      while( true ) {
        pbVar10 = param_2 + 1;
        bVar6 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar10 = bVar6 | 0x80;
        param_2 = pbVar10;
      }
      *pbVar10 = bVar6;
      param_2 = (byte *)FUN_141548bc0(lVar4,param_2 + 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x15);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      lVar4 = *(longlong *)(param_1[0x16] + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x3a;
      uVar8 = *(uint *)(lVar4 + 0x18);
      while( true ) {
        pbVar10 = param_2 + 1;
        bVar6 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar10 = bVar6 | 0x80;
        param_2 = pbVar10;
      }
      *pbVar10 = bVar6;
      param_2 = (byte *)FUN_141548c60(lVar4,param_2 + 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  uVar7 = param_1[0x27];
  if (uVar7 != 0) {
    *param_2 = 0x40;
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = param_2 + 1;
  }
  uVar9 = *(uint *)(param_1 + 0x18);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      lVar4 = *(longlong *)(param_1[0x19] + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x4a;
      uVar8 = *(uint *)(lVar4 + 0x1c);
      while( true ) {
        pbVar10 = param_2 + 1;
        bVar6 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar10 = bVar6 | 0x80;
        param_2 = pbVar10;
      }
      *pbVar10 = bVar6;
      param_2 = (byte *)FUN_1415488d0(lVar4,param_2 + 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x1b);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      lVar4 = *(longlong *)(param_1[0x1c] + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x52;
      uVar8 = *(uint *)(lVar4 + 0x1c);
      while( true ) {
        pbVar10 = param_2 + 1;
        bVar6 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar10 = bVar6 | 0x80;
        param_2 = pbVar10;
      }
      *pbVar10 = bVar6;
      param_2 = (byte *)FUN_141548970(lVar4,param_2 + 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x1e);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      lVar4 = *(longlong *)(param_1[0x1f] + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x5a;
      uVar8 = *(uint *)(lVar4 + 0x58);
      while( true ) {
        pbVar10 = param_2 + 1;
        bVar6 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar10 = bVar6 | 0x80;
        param_2 = pbVar10;
      }
      *pbVar10 = bVar6;
      param_2 = (byte *)FUN_141548510(lVar4,param_2 + 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x20);
  if (0 < iVar2) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 0x20,iVar13);
      uVar7 = *(ulonglong *)(lVar4 + 0x10);
      puVar5 = (undefined8 *)FUN_1439f1d30(param_1 + 0x20,iVar13);
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_1439fa7f0(puVar5,uVar7 & 0xffffffff,1,"OakSave.OakProfileCloudData.mail_guids");
      uVar3 = FUN_1439f1d30(param_1 + 0x20,iVar13);
      *param_2 = 0x62;
      param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar2);
  }
  iVar13 = FUN_1439f2ae0(param_1 + 0x23);
  if (0 < iVar13) {
    *param_2 = 0x6a;
    uVar9 = *(uint *)(param_1 + 0x25);
    while( true ) {
      pbVar10 = param_2 + 1;
      bVar6 = (byte)uVar9;
      if (uVar9 < 0x80) break;
      uVar9 = uVar9 >> 7;
      *pbVar10 = bVar6 | 0x80;
      param_2 = pbVar10;
    }
    *pbVar10 = bVar6;
    param_2 = (byte *)FUN_141542140(param_1 + 0x23,param_2 + 2);
  }
  uVar7 = (ulonglong)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) != 0) {
    *param_2 = 0x70;
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = param_2 + 1;
  }
  if ((param_1 != &DAT_1468a5d30) && (lVar4 = param_1[0x26], lVar4 != 0)) {
    *param_2 = 0x7a;
    uVar9 = *(uint *)(lVar4 + 0x4c);
    while( true ) {
      param_2 = param_2 + 1;
      bVar6 = (byte)uVar9;
      if (uVar9 < 0x80) break;
      uVar9 = uVar9 >> 7;
      *param_2 = bVar6 | 0x80;
    }
    *param_2 = bVar6;
    param_2 = (byte *)FUN_1415495c0(lVar4,param_2 + 1);
  }
  cVar1 = *(char *)((longlong)param_1 + 0x144);
  if (cVar1 != '\0') {
    uVar9 = 200;
    do {
      pbVar10 = param_2;
      bVar6 = (byte)uVar9;
      uVar9 = uVar9 >> 7;
      *pbVar10 = bVar6 | 0x80;
      param_2 = pbVar10 + 1;
    } while (0x7f < uVar9);
    pbVar10[1] = (byte)uVar9;
    pbVar10[2] = cVar1 != '\0';
    param_2 = pbVar10 + 3;
  }
  cVar1 = *(char *)((longlong)param_1 + 0x145);
  if (cVar1 != '\0') {
    uVar9 = 0xd0;
    do {
      pbVar10 = param_2;
      bVar6 = (byte)uVar9;
      uVar9 = uVar9 >> 7;
      *pbVar10 = bVar6 | 0x80;
      param_2 = pbVar10 + 1;
    } while (0x7f < uVar9);
    pbVar10[1] = (byte)uVar9;
    pbVar10[2] = cVar1 != '\0';
    param_2 = pbVar10 + 3;
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(param_1[1] & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152edf0 FUN_14152edf0 body=171 status=ok
// SIG undefined FUN_14152edf0(void)

undefined1 * FUN_14152edf0(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar5 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar5[3]) {
      plVar5 = (longlong *)*plVar5;
    }
    FUN_1439fa7f0(plVar5,*puVar1 & 0xffffffff,1,"OakSave.PlanetCycleInfo.planet_name");
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  fVar2 = *(float *)(param_1 + 0x18);
  if (fVar2 != 0.0) {
    *param_2 = 0x15;
    *(float *)(param_2 + 1) = fVar2;
    param_2 = param_2 + 5;
  }
  fVar2 = *(float *)(param_1 + 0x1c);
  if (fVar2 != 0.0) {
    *param_2 = 0x1d;
    *(float *)(param_2 + 1) = fVar2;
    param_2 = param_2 + 5;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar4 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar4;
  }
  return param_2;
}



// FUNCTION 14152eea0 FUN_14152eea0 body=185 status=ok
// SIG undefined FUN_14152eea0(void)

byte * FUN_14152eea0(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.PlayerClassSaveGameData.player_class_path")
    ;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
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
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar4 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar4;
  }
  return param_2;
}



// FUNCTION 14152ef60 FUN_14152ef60 body=135 status=ok
// SIG undefined FUN_14152ef60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14152ef60(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      param_2 = FUN_141519c90(1,*(undefined8 *)
                                 (*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar2 * 8),
                              param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14152eff0 FUN_14152eff0 body=297 status=ok
// SIG undefined FUN_14152eff0(void)

byte * FUN_14152eff0(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte bVar6;
  longlong *plVar7;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    *param_2 = 8;
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
  uVar4 = (ulonglong)*(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    *param_2 = 0x10;
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
  plVar7 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar7 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar7[3]) {
      plVar7 = (longlong *)*plVar7;
    }
    FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,1,"OakSave.RegionSaveGameData.region_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x1a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 != 0) {
    *param_2 = 0x20;
    while( true ) {
      pbVar5 = param_2 + 1;
      bVar6 = (byte)uVar3;
      if (uVar3 < 0x80) break;
      uVar3 = uVar3 >> 7;
      *pbVar5 = bVar6 | 0x80;
      param_2 = pbVar5;
    }
    *pbVar5 = bVar6;
    param_2 = param_2 + 2;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return pbVar5;
}



// FUNCTION 14152f120 FUN_14152f120 body=149 status=ok
// SIG undefined FUN_14152f120(void)

undefined1 * FUN_14152f120(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  
  fVar2 = *(float *)(param_1 + 0x18);
  puVar4 = param_2;
  if (fVar2 != 0.0) {
    *param_2 = 0xd;
    puVar4 = param_2 + 5;
    *(float *)(param_2 + 1) = fVar2;
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar5 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar5[3]) {
      plVar5 = (longlong *)*plVar5;
    }
    FUN_1439fa7f0(plVar5,*puVar1 & 0xffffffff,1,"OakSave.ResourcePoolSavegameData.resource_path");
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *puVar4 = 0x12;
    puVar4 = (undefined1 *)FUN_1439f9df0(uVar3,puVar4 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar4 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,puVar4);
    return puVar4;
  }
  return puVar4;
}



// FUNCTION 14152f1c0 FUN_14152f1c0 body=410 status=ok
// SIG undefined FUN_14152f1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_14152f1c0(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar11 = 0;
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 10;
      uVar9 = *(uint *)(lVar4 + 0x20);
      pbVar7 = param_2;
      while( true ) {
        pbVar6 = pbVar7 + 1;
        bVar8 = (byte)uVar9;
        if (uVar9 < 0x80) break;
        uVar9 = uVar9 >> 7;
        *pbVar6 = bVar8 | 0x80;
        pbVar7 = pbVar6;
      }
      *pbVar6 = bVar8;
      param_2 = pbVar7 + 2;
      plVar10 = *(longlong **)(lVar4 + 0x10);
      puVar1 = (ulonglong *)(plVar10 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_1439fa7f0(plVar10,*puVar1 & 0xffffffff,1,"OakSave.PlanetCycleInfo.planet_name");
        uVar5 = *(undefined8 *)(lVar4 + 0x10);
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(uVar5,pbVar7 + 3);
      }
      fVar2 = *(float *)(lVar4 + 0x18);
      if (fVar2 != 0.0) {
        *param_2 = 0x15;
        *(float *)(param_2 + 1) = fVar2;
        param_2 = param_2 + 5;
      }
      fVar2 = *(float *)(lVar4 + 0x1c);
      if (fVar2 != 0.0) {
        *param_2 = 0x1d;
        *(float *)(param_2 + 1) = fVar2;
        param_2 = param_2 + 5;
      }
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar4 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar3);
  }
  plVar10 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar10 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
    FUN_1439fa7f0(plVar10,*puVar1 & 0xffffffff,1,"OakSave.TimeOfDaySaveGameData.planet_cycle");
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar5,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 14152f360 FUN_14152f360 body=434 status=ok
// SIG undefined FUN_14152f360(void)

byte * FUN_14152f360(longlong param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    param_2 = (byte *)FUN_141514ca0(1,*(char *)(param_1 + 0x28),param_2);
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    param_2 = (byte *)FUN_141514ca0(2,*(char *)(param_1 + 0x29),param_2);
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    param_2 = (byte *)FUN_141514ca0(3,*(char *)(param_1 + 0x2a),param_2);
  }
  if (*(char *)(param_1 + 0x2b) != '\0') {
    param_2 = (byte *)FUN_141514ca0(4,*(char *)(param_1 + 0x2b),param_2);
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    param_2 = (byte *)FUN_141514ca0(5,*(char *)(param_1 + 0x2c),param_2);
  }
  uVar2 = (ulonglong)*(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != 0) {
    *param_2 = 0x30;
    while( true ) {
      pbVar6 = param_2 + 1;
      bVar7 = (byte)uVar2;
      if (uVar2 < 0x80) break;
      uVar2 = uVar2 >> 7;
      *pbVar6 = bVar7 | 0x80;
      param_2 = pbVar6;
    }
    *pbVar6 = bVar7;
    param_2 = param_2 + 2;
  }
  iVar1 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  iVar8 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = FUN_1439f1d30(param_1 + 0x10,iVar8);
      uVar2 = *(ulonglong *)(lVar3 + 0x10);
      puVar4 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar8);
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1439fa7f0(puVar4,uVar2 & 0xffffffff,1,
                    "OakSave.UITrackingSaveGameData.inventory_slot_unlocks_seen");
      uVar5 = FUN_1439f1d30(param_1 + 0x10,iVar8);
      *param_2 = 0x3a;
      param_2 = (byte *)FUN_1439f9df0(uVar5,param_2 + 1);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  uVar2 = (ulonglong)*(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x34) != 0) {
    *param_2 = 0x40;
    while( true ) {
      pbVar6 = param_2 + 1;
      bVar7 = (byte)uVar2;
      if (uVar2 < 0x80) break;
      uVar2 = uVar2 >> 7;
      *pbVar6 = bVar7 | 0x80;
      param_2 = pbVar6;
    }
    *pbVar6 = bVar7;
    param_2 = param_2 + 2;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar6 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar6;
  }
  return param_2;
}



// FUNCTION 14152f520 FUN_14152f520 body=148 status=ok
// SIG undefined FUN_14152f520(void)

undefined1 * FUN_14152f520(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,"OakSave.VehicleUnlockedSaveGameData.asset_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    param_2 = (undefined1 *)FUN_141514ca0(2,*(char *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 14152f5c0 FUN_14152f5c0 body=86 status=ok
// SIG undefined FUN_14152f5c0(void)

void FUN_14152f5c0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xc0))();
      *(undefined4 *)(param_2 + 8) = *puVar2;
      *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 1;
      uVar1 = *(uint *)(param_1 + 3);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined4 *)(**(code **)(*param_1 + 200))(param_1);
      *(undefined4 *)(param_2 + 0xc) = *puVar2;
      *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 2;
    }
  }
  return;
}



// FUNCTION 14152f620 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141534bf0(param_2,param_1);
  return;
}



// FUNCTION 14152f630 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141530f60(param_2,param_1);
  return;
}



// FUNCTION 14152f640 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141531420(param_2,param_1);
  return;
}



// FUNCTION 14152f650 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_1415316b0(param_2,param_1);
  return;
}



// FUNCTION 14152f660 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141531af0(param_2,param_1);
  return;
}



// FUNCTION 14152f670 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141531c90(param_2,param_1);
  return;
}



// FUNCTION 14152f680 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141531f20(param_2,param_1);
  return;
}



// FUNCTION 14152f690 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141532360(param_2,param_1);
  return;
}



// FUNCTION 14152f6a0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_1415328a0(param_2,param_1);
  return;
}



// FUNCTION 14152f6b0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141532b00(param_2,param_1);
  return;
}



// FUNCTION 14152f6c0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141532cc0(param_2,param_1);
  return;
}



// FUNCTION 14152f6d0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141532e90(param_2,param_1);
  return;
}



// FUNCTION 14152f6e0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141533020(param_2,param_1);
  return;
}



// FUNCTION 14152f6f0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141533190(param_2,param_1);
  return;
}



// FUNCTION 14152f700 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141533380(param_2,param_1);
  return;
}



// FUNCTION 14152f710 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141533540(param_2,param_1);
  return;
}



// FUNCTION 14152f720 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141533890(param_2,param_1);
  return;
}



// FUNCTION 14152f730 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_1415342f0(param_2,param_1);
  return;
}



// FUNCTION 14152f740 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141534500(param_2,param_1);
  return;
}



// FUNCTION 14152f750 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_1415346e0(param_2,param_1);
  return;
}



// FUNCTION 14152f760 FUN_14152f760 body=60 status=ok
// SIG undefined FUN_14152f760(void)

void FUN_14152f760(longlong param_1,longlong param_2)

{
  FUN_143a12920();
  FUN_143a12920(param_2);
  FUN_14152f7e0(param_1 + 0x70,param_2 + 0x70);
  FUN_143a124c0(param_1);
  return;
}



// FUNCTION 14152f7a0 FUN_14152f7a0 body=60 status=ok
// SIG undefined FUN_14152f7a0(void)

void FUN_14152f7a0(longlong param_1,longlong param_2)

{
  FUN_143a12920();
  FUN_143a12920(param_2);
  FUN_14152fa70(param_1 + 0x70,param_2 + 0x70);
  FUN_143a124c0(param_1);
  return;
}



// FUNCTION 14152f7e0 FUN_14152f7e0 body=656 status=ok
// SIG undefined FUN_14152f7e0(void)

void FUN_14152f7e0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  plVar5 = (longlong *)FUN_140d599d0(*(undefined8 *)(param_2 + 0x18),&local_68);
  lVar9 = *plVar5;
  lVar2 = plVar5[1];
  uVar7 = plVar5[2];
  local_48._0_4_ = (undefined4)lVar9;
  local_48._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
  uStack_40._0_4_ = (undefined4)lVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  if (lVar9 == 0) {
    return;
  }
  local_58 = uVar7;
  local_48 = lVar9;
  uStack_40 = lVar2;
  local_38 = uVar7;
LAB_14152f880:
  lVar8 = *(longlong *)(lVar9 + 8);
  puVar6 = (undefined4 *)FUN_140d25480(param_1 + 8,lVar8);
  *puVar6 = *(undefined4 *)(lVar8 + 4);
  lVar8 = *(longlong *)(lVar9 + 0x10);
  if (lVar8 == 0) {
    uVar7 = *(longlong *)(lVar2 + 8) - 1U & uVar7;
    local_50 = (longlong *)0x0;
    lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar7 * 8);
    if (lVar8 == lVar9) {
LAB_14152f9f0:
      uVar7 = uVar7 + 1;
      if (*(ulonglong *)(lVar2 + 8) <= uVar7) {
        return;
      }
      lVar9 = *(longlong *)(lVar2 + 0x20);
      plVar5 = (longlong *)(lVar9 + uVar7 * 8);
      do {
        lVar8 = *plVar5;
        if (lVar8 != 0) {
          if (lVar8 != *(longlong *)(lVar9 + (uVar7 ^ 1) * 8)) goto LAB_14152fa39;
          if ((lVar8 != 0) && (lVar8 == *(longlong *)(lVar9 + (uVar7 ^ 1) * 8))) goto LAB_14152f9d9;
        }
        uVar7 = uVar7 + 1;
        plVar5 = plVar5 + 1;
        if (*(ulonglong *)(lVar2 + 8) <= uVar7) {
          return;
        }
      } while( true );
    }
    if ((lVar8 != 0) && (lVar8 != *(longlong *)(*(longlong *)(lVar2 + 0x20) + (uVar7 ^ 1) * 8))) {
      for (lVar8 = *(longlong *)(lVar8 + 0x10); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x10)) {
        if (lVar8 == lVar9) goto LAB_14152f9f0;
      }
    }
    lVar8 = FUN_140d2ca50(lVar2,&local_48,lVar9,&local_50);
    lVar9 = *(longlong *)(lVar2 + 0x20);
    uVar7 = *(ulonglong *)(lVar8 + 0x10);
    lVar8 = *(longlong *)(lVar9 + uVar7 * 8);
    local_58 = uVar7;
    if ((lVar8 == 0) || (lVar8 != *(longlong *)(lVar9 + (uVar7 ^ 1) * 8))) goto LAB_14152f9f0;
    plVar5 = (longlong *)local_50[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar3 = (longlong *)*plVar5;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
      }
    }
    else {
      cVar1 = *(char *)(local_50[1] + 0x19);
      plVar4 = (longlong *)local_50[1];
      plVar3 = local_50;
      while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
      }
    }
    if (plVar5 == *(longlong **)(lVar8 + 8)) {
      uVar7 = uVar7 + 2;
      if (*(ulonglong *)(lVar2 + 8) <= uVar7) {
        return;
      }
      plVar5 = (longlong *)(lVar9 + uVar7 * 8);
      do {
        lVar8 = *plVar5;
        if (lVar8 != 0) {
          if (lVar8 != *(longlong *)(lVar9 + (uVar7 ^ 1) * 8)) goto LAB_14152fa39;
          if ((lVar8 != 0) && (lVar8 == *(longlong *)(lVar9 + (uVar7 ^ 1) * 8))) goto LAB_14152f9d9;
        }
        uVar7 = uVar7 + 1;
        plVar5 = plVar5 + 1;
        if (*(ulonglong *)(lVar2 + 8) <= uVar7) {
          return;
        }
      } while( true );
    }
    lVar8 = plVar5[4];
  }
  goto LAB_14152fa42;
LAB_14152fa39:
  lVar8 = *(longlong *)(lVar9 + uVar7 * 8);
  goto LAB_14152fa42;
LAB_14152f9d9:
  lVar8 = *(longlong *)(**(longlong **)(*(longlong *)(lVar9 + uVar7 * 8) + 8) + 0x20);
LAB_14152fa42:
  lVar9 = lVar8;
  if (lVar8 == 0) {
    return;
  }
  goto LAB_14152f880;
}



// FUNCTION 14152fa70 FUN_14152fa70 body=1164 status=ok
// SIG undefined FUN_14152fa70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014152fc0a) */
/* WARNING: Removing unreachable block (ram,0x00014152fc2b) */

void FUN_14152fa70(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  longlong local_e0 [3];
  ulonglong local_c8;
  undefined8 local_c0;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_120 = (longlong *)((ulonglong)local_120 & 0xffffffff00000000);
  local_128 = param_1;
  puVar6 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(param_2 + 0x18),&local_118);
  plVar7 = (longlong *)*puVar6;
  lVar4 = puVar6[1];
  local_f0 = puVar6[2];
  local_100._0_4_ = SUB84(plVar7,0);
  local_100._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
  uStack_f8._0_4_ = (undefined4)lVar4;
  uStack_f8._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  uVar9 = local_f0;
  local_108 = local_f0;
  plVar3 = plVar7;
  lVar13 = lVar4;
  local_118 = (undefined4)local_100;
  uStack_114 = local_100._4_4_;
  uStack_110 = (undefined4)uStack_f8;
  uStack_10c = uStack_f8._4_4_;
joined_r0x00014152faf6:
  while( true ) {
    do {
      uStack_f8 = lVar13;
      local_100 = plVar3;
      plVar5 = plVar7;
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      puVar6 = (undefined8 *)plVar5[4];
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_e0,puVar6);
      local_c0 = 0;
      plVar7 = (longlong *)FUN_140d5a260(uVar2,&local_100,local_e0);
      lVar13 = *plVar7;
      if (0xf < local_c8) {
        uVar11 = local_c8 + 1;
        lVar10 = local_e0[0];
        if (0xfff < uVar11) {
          lVar10 = *(longlong *)(local_e0[0] + -8);
          uVar11 = local_c8 + 0x28;
          if (0x1f < (local_e0[0] - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar10,uVar11);
      }
      puVar8 = *(undefined8 **)(lVar13 + 0x20);
      if (puVar8 == (undefined8 *)0x0) {
        lVar10 = *(longlong *)(local_128 + 8);
        if (lVar10 == 0) {
          puVar8 = (undefined8 *)operator_new(0x40);
          if (puVar8 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            basic_string<char,std::char_traits<char>,std::allocator<char>_>(puVar8,puVar6);
            puVar8[6] = 0;
            puVar8[7] = 0xf;
            *(undefined1 *)(puVar8 + 4) = 0;
          }
        }
        else {
          if (lVar10 == 0) {
            puVar8 = (undefined8 *)operator_new(0x40);
          }
          else {
            if (*(longlong *)(lVar10 + 0x70) != 0) {
              FUN_1439f01b0(lVar10,0,0x40);
            }
            puVar8 = (undefined8 *)FUN_1439efd10(lVar10,0x40);
          }
          uVar2 = *(undefined8 *)(local_128 + 8);
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          FUN_140d1e160(uVar2,puVar8);
          uVar2 = *(undefined8 *)(local_128 + 8);
          puVar8[6] = 0;
          puVar8[7] = 0xf;
          *(undefined1 *)(puVar8 + 4) = 0;
          FUN_140d1e160(uVar2);
          if (puVar8 != puVar6) {
            puVar12 = puVar6;
            if (0xf < (ulonglong)puVar6[3]) {
              puVar12 = (undefined8 *)*puVar6;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (puVar8,puVar12,puVar6[2]);
          }
        }
        *(undefined8 **)(lVar13 + 0x20) = puVar8;
      }
      puVar12 = puVar6 + 4;
      if (puVar8 + 4 != puVar12) {
        if (0xf < (ulonglong)puVar6[7]) {
          puVar12 = (undefined8 *)*puVar12;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar8 + 4,puVar12,puVar6[6]);
      }
      plVar7 = (longlong *)plVar5[5];
      param_1 = local_128;
      plVar3 = local_100;
      lVar13 = uStack_f8;
    } while (plVar7 != (longlong *)0x0);
    uVar9 = *(longlong *)(lVar4 + 8) - 1U & uVar9;
    plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0x20) + uVar9 * 8);
    local_120 = plVar7;
    if (plVar3 == plVar5) break;
    if ((plVar3 != (longlong *)0x0) &&
       (plVar3 != *(longlong **)(*(longlong *)(lVar4 + 0x20) + (uVar9 ^ 1) * 8))) {
      for (plVar7 = (longlong *)plVar3[5]; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[5]
          ) {
        if (plVar7 == plVar5) goto LAB_14152fe8e;
      }
    }
    lVar10 = FUN_140d2cbc0(lVar4,&local_100,plVar5,&local_120);
    lVar13 = *(longlong *)(lVar4 + 0x20);
    uVar9 = *(ulonglong *)(lVar10 + 0x10);
    lVar10 = *(longlong *)(lVar13 + uVar9 * 8);
    local_108 = uVar9;
    if ((lVar10 == 0) || (lVar10 != *(longlong *)(lVar13 + (uVar9 ^ 1) * 8))) break;
    plVar7 = (longlong *)local_120[2];
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar7 + 0x19);
      plVar3 = (longlong *)*plVar7;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar7 = plVar3;
        plVar3 = (longlong *)*plVar3;
      }
    }
    else {
      cVar1 = *(char *)(local_120[1] + 0x19);
      plVar5 = (longlong *)local_120[1];
      plVar3 = local_120;
      while ((plVar7 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar5 = (longlong *)plVar7[1];
        plVar3 = plVar7;
      }
    }
    if (plVar7 == *(longlong **)(lVar10 + 8)) {
      uVar9 = uVar9 + 2;
      if (*(ulonglong *)(lVar4 + 8) <= uVar9) {
        return;
      }
      plVar7 = (longlong *)(lVar13 + uVar9 * 8);
      do {
        lVar10 = *plVar7;
        if (lVar10 != 0) {
          if (lVar10 != *(longlong *)(lVar13 + (uVar9 ^ 1) * 8)) goto LAB_14152feda;
          if ((lVar10 != 0) && (lVar10 == *(longlong *)(lVar13 + (uVar9 ^ 1) * 8)))
          goto LAB_14152fe77;
        }
        uVar9 = uVar9 + 1;
        plVar7 = plVar7 + 1;
        if (*(ulonglong *)(lVar4 + 8) <= uVar9) {
          return;
        }
      } while( true );
    }
    param_1 = local_128;
    plVar7 = (longlong *)plVar7[4];
    plVar3 = local_100;
    lVar13 = uStack_f8;
  }
LAB_14152fe8e:
  uVar9 = uVar9 + 1;
  if (*(ulonglong *)(lVar4 + 8) <= uVar9) {
    return;
  }
  lVar13 = *(longlong *)(lVar4 + 0x20);
  plVar7 = (longlong *)(lVar13 + uVar9 * 8);
  do {
    lVar10 = *plVar7;
    if (lVar10 != 0) {
      if (lVar10 != *(longlong *)(lVar13 + (uVar9 ^ 1) * 8)) break;
      if ((lVar10 != 0) && (lVar10 == *(longlong *)(lVar13 + (uVar9 ^ 1) * 8))) goto LAB_14152fe77;
    }
    uVar9 = uVar9 + 1;
    plVar7 = plVar7 + 1;
    if (*(ulonglong *)(lVar4 + 8) <= uVar9) {
      return;
    }
  } while( true );
LAB_14152feda:
  param_1 = local_128;
  plVar7 = *(longlong **)(lVar13 + uVar9 * 8);
  plVar3 = local_100;
  lVar13 = uStack_f8;
  goto joined_r0x00014152faf6;
LAB_14152fe77:
  param_1 = local_128;
  plVar7 = *(longlong **)(**(longlong **)(*(longlong *)(lVar13 + uVar9 * 8) + 8) + 0x20);
  plVar3 = local_100;
  lVar13 = uStack_f8;
  goto joined_r0x00014152faf6;
}



// FUNCTION 14152ff00 FUN_14152ff00 body=188 status=ok
// SIG undefined FUN_14152ff00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14152ff00(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_141515d60();
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar3,uVar1 & 0xfffffffffffffffe);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  if (puVar4[2] != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 != puVar4) {
      if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10);
      }
      else {
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
      }
    }
  }
  if (*(char *)(param_2 + 0x18) != '\0') {
    *(char *)(param_1 + 0x18) = *(char *)(param_2 + 0x18);
  }
  return;
}



// FUNCTION 14152ffc0 FUN_14152ffc0 body=156 status=ok
// SIG undefined FUN_14152ffc0(void)

void FUN_14152ffc0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a05f0 != 0) {
    FUN_1439f44f0(&DAT_1464a05f0);
  }
  lVar1 = (**(code **)(DAT_1468a5138 + 0xb8))(&DAT_1468a5138,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14152ff00(param_1);
  return;
}



// FUNCTION 141530060 FUN_141530060 body=191 status=ok
// SIG undefined FUN_141530060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141530060(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_141515d60();
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar3,uVar1 & 0xfffffffffffffffe);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x10), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x10);
      return;
    }
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
  }
  return;
}



// FUNCTION 141530120 FUN_141530120 body=156 status=ok
// SIG undefined FUN_141530120(void)

void FUN_141530120(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0608 != 0) {
    FUN_1439f44f0(&DAT_1464a0608);
  }
  lVar1 = (**(code **)(DAT_1468a5158 + 0xb8))(&DAT_1468a5158,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_141530060(param_1);
  return;
}



// FUNCTION 1415301c0 FUN_1415301c0 body=3153 status=ok
// SIG undefined FUN_1415301c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415301c0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_58 [32];
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    uVar2 = param_2[1];
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 3);
  if (iVar1 != 0) {
    lVar3 = param_2[4];
    uVar6 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    local_38 = **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    FUN_14151be70(param_1 + 0x10,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  iVar1 = *(int *)(param_2 + 6);
  if (iVar1 != 0) {
    lVar3 = param_2[7];
    uVar6 = FUN_1439f1d40(param_1 + 0x28,iVar1);
    local_38 = **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30);
    FUN_14151bda0(param_1 + 0x28,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
    if (**(int **)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
      **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
    }
  }
  iVar1 = *(int *)(param_2 + 9);
  if (iVar1 != 0) {
    lVar3 = param_2[10];
    uVar6 = FUN_1439f1d40(param_1 + 0x40,iVar1);
    local_38 = **(int **)(param_1 + 0x50) - *(int *)(param_1 + 0x48);
    FUN_1414fe1d0(param_1 + 0x40,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar1;
    if (**(int **)(param_1 + 0x50) < *(int *)(param_1 + 0x48)) {
      **(int **)(param_1 + 0x50) = *(int *)(param_1 + 0x48);
    }
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != 0) {
    lVar3 = param_2[0xd];
    uVar6 = FUN_1439f1d40(param_1 + 0x58,iVar1);
    local_38 = **(int **)(param_1 + 0x68) - *(int *)(param_1 + 0x60);
    FUN_1414fe440(param_1 + 0x58,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar1;
    if (**(int **)(param_1 + 0x68) < *(int *)(param_1 + 0x60)) {
      **(int **)(param_1 + 0x68) = *(int *)(param_1 + 0x60);
    }
  }
  iVar1 = *(int *)(param_2 + 0xf);
  if (iVar1 != 0) {
    lVar3 = param_2[0x10];
    uVar6 = FUN_1439f1d40(param_1 + 0x70,iVar1);
    local_38 = **(int **)(param_1 + 0x80) - *(int *)(param_1 + 0x78);
    FUN_14151ba60(param_1 + 0x70,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + iVar1;
    if (**(int **)(param_1 + 0x80) < *(int *)(param_1 + 0x78)) {
      **(int **)(param_1 + 0x80) = *(int *)(param_1 + 0x78);
    }
  }
  iVar1 = *(int *)(param_2 + 0x12);
  if (iVar1 != 0) {
    lVar3 = param_2[0x13];
    uVar6 = FUN_1439f1d40(param_1 + 0x88,iVar1);
    local_38 = **(int **)(param_1 + 0x98) - *(int *)(param_1 + 0x90);
    FUN_14151af00(param_1 + 0x88,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + iVar1;
    if (**(int **)(param_1 + 0x98) < *(int *)(param_1 + 0x90)) {
      **(int **)(param_1 + 0x98) = *(int *)(param_1 + 0x90);
    }
  }
  FUN_1439f1f20(param_1 + 0xa0,param_2 + 0x14);
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = param_2[0x19];
    uVar6 = FUN_1439f1d40(param_1 + 0xb8,iVar1);
    local_38 = **(int **)(param_1 + 200) - *(int *)(param_1 + 0xc0);
    FUN_14151b4b0(param_1 + 0xb8,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + iVar1;
    if (**(int **)(param_1 + 200) < *(int *)(param_1 + 0xc0)) {
      **(int **)(param_1 + 200) = *(int *)(param_1 + 0xc0);
    }
  }
  FUN_1439f2030(param_1 + 0xd0,param_2 + 0x1a);
  iVar1 = *(int *)(param_2 + 0x1e);
  if (iVar1 != 0) {
    lVar3 = param_2[0x1f];
    uVar6 = FUN_1439f1d40(param_1 + 0xe8,iVar1);
    local_38 = **(int **)(param_1 + 0xf8) - *(int *)(param_1 + 0xf0);
    FUN_14151bf40(param_1 + 0xe8,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + iVar1;
    if (**(int **)(param_1 + 0xf8) < *(int *)(param_1 + 0xf0)) {
      **(int **)(param_1 + 0xf8) = *(int *)(param_1 + 0xf0);
    }
  }
  FUN_1439f2030(param_1 + 0x100,param_2 + 0x20);
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    lVar3 = param_2[0x25];
    uVar6 = FUN_1439f1d40(param_1 + 0x118,iVar1);
    local_38 = **(int **)(param_1 + 0x128) - *(int *)(param_1 + 0x120);
    FUN_14151b990(param_1 + 0x118,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + iVar1;
    if (**(int **)(param_1 + 0x128) < *(int *)(param_1 + 0x120)) {
      **(int **)(param_1 + 0x128) = *(int *)(param_1 + 0x120);
    }
  }
  iVar1 = *(int *)(param_2 + 0x27);
  if (iVar1 != 0) {
    lVar3 = param_2[0x28];
    uVar6 = FUN_1439f1d40(param_1 + 0x130,iVar1);
    local_38 = **(int **)(param_1 + 0x140) - *(int *)(param_1 + 0x138);
    FUN_1414fdf60(param_1 + 0x130,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + iVar1;
    if (**(int **)(param_1 + 0x140) < *(int *)(param_1 + 0x138)) {
      **(int **)(param_1 + 0x140) = *(int *)(param_1 + 0x138);
    }
  }
  iVar1 = *(int *)(param_2 + 0x2a);
  if (iVar1 != 0) {
    lVar3 = param_2[0x2b];
    uVar6 = FUN_1439f1d40(param_1 + 0x148,iVar1);
    local_38 = **(int **)(param_1 + 0x158) - *(int *)(param_1 + 0x150);
    FUN_1414fe850(param_1 + 0x148,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + iVar1;
    if (**(int **)(param_1 + 0x158) < *(int *)(param_1 + 0x150)) {
      **(int **)(param_1 + 0x158) = *(int *)(param_1 + 0x150);
    }
  }
  FUN_1439f2030(param_1 + 0x160,param_2 + 0x2c);
  FUN_1439f1f20(param_1 + 0x178,param_2 + 0x2f);
  iVar1 = *(int *)(param_2 + 0x33);
  if (iVar1 != 0) {
    lVar3 = param_2[0x34];
    uVar6 = FUN_1439f1d40(param_1 + 400,iVar1);
    local_38 = **(int **)(param_1 + 0x1a0) - *(int *)(param_1 + 0x198);
    FUN_14151abc0(param_1 + 400,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + iVar1;
    if (**(int **)(param_1 + 0x1a0) < *(int *)(param_1 + 0x198)) {
      **(int **)(param_1 + 0x1a0) = *(int *)(param_1 + 0x198);
    }
  }
  iVar1 = *(int *)(param_2 + 0x36);
  if (iVar1 != 0) {
    lVar3 = param_2[0x37];
    uVar6 = FUN_1439f1d40(param_1 + 0x1a8,iVar1);
    local_38 = **(int **)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b0);
    FUN_14151ae30(param_1 + 0x1a8,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + iVar1;
    if (**(int **)(param_1 + 0x1b8) < *(int *)(param_1 + 0x1b0)) {
      **(int **)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b0);
    }
  }
  (**(code **)(*(longlong *)(param_1 + 0x1c0) + 0x38))((longlong *)(param_1 + 0x1c0),param_2 + 0x38)
  ;
  iVar1 = *(int *)(param_2 + 0x4b);
  if (iVar1 != 0) {
    lVar3 = param_2[0x4c];
    uVar6 = FUN_1439f1d40(param_1 + 0x250,iVar1);
    local_38 = **(int **)(param_1 + 0x260) - *(int *)(param_1 + 600);
    FUN_14151b3e0(param_1 + 0x250,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + iVar1;
    if (**(int **)(param_1 + 0x260) < *(int *)(param_1 + 600)) {
      **(int **)(param_1 + 0x260) = *(int *)(param_1 + 600);
    }
  }
  iVar1 = *(int *)(param_2 + 0x4e);
  if (iVar1 != 0) {
    lVar3 = param_2[0x4f];
    uVar6 = FUN_1439f1d40(param_1 + 0x268,iVar1);
    local_38 = **(int **)(param_1 + 0x278) - *(int *)(param_1 + 0x270);
    FUN_14151a950(param_1 + 0x268,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + iVar1;
    if (**(int **)(param_1 + 0x278) < *(int *)(param_1 + 0x270)) {
      **(int **)(param_1 + 0x278) = *(int *)(param_1 + 0x270);
    }
  }
  FUN_1439f2030(param_1 + 0x280,param_2 + 0x50);
  iVar1 = *(int *)(param_2 + 0x54);
  if (iVar1 != 0) {
    lVar3 = param_2[0x55];
    uVar6 = FUN_1439f1d40(param_1 + 0x298,iVar1);
    local_38 = **(int **)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2a0);
    FUN_14151afd0(param_1 + 0x298,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + iVar1;
    if (**(int **)(param_1 + 0x2a8) < *(int *)(param_1 + 0x2a0)) {
      **(int **)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a0);
    }
  }
  iVar1 = *(int *)(param_2 + 0x57);
  if (iVar1 != 0) {
    lVar3 = param_2[0x58];
    uVar6 = FUN_1439f1d40(param_1 + 0x2b0,iVar1);
    local_38 = **(int **)(param_1 + 0x2c0) - *(int *)(param_1 + 0x2b8);
    FUN_1414fed30(param_1 + 0x2b0,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + iVar1;
    if (**(int **)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2b8)) {
      **(int **)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2b8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x5a);
  if (iVar1 != 0) {
    lVar3 = param_2[0x5b];
    uVar6 = FUN_1439f1d40(param_1 + 0x2c8,iVar1);
    local_38 = **(int **)(param_1 + 0x2d8) - *(int *)(param_1 + 0x2d0);
    FUN_14151bcd0(param_1 + 0x2c8,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + iVar1;
    if (**(int **)(param_1 + 0x2d8) < *(int *)(param_1 + 0x2d0)) {
      **(int **)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d0);
    }
  }
  (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x38))((longlong *)(param_1 + 0x2e0),param_2 + 0x5c)
  ;
  puVar9 = (undefined8 *)param_2[0x6e];
  if ((puVar9[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x370), puVar4 != puVar9)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x370);
    }
    else {
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar9);
    }
  }
  puVar9 = (undefined8 *)param_2[0x6f];
  if ((puVar9[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x378), puVar4 != puVar9)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x378);
    }
    else {
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar9);
    }
  }
  puVar9 = (undefined8 *)param_2[0x70];
  if ((puVar9[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x380), puVar4 != puVar9)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x380);
    }
    else {
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar9);
    }
  }
  if (param_2 != &DAT_1468a51a0) {
    lVar3 = param_2[0x71];
    if (lVar3 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x388);
      if (lVar7 == 0) {
        lVar7 = FUN_1415195f0();
        *(longlong *)(param_1 + 0x388) = lVar7;
      }
      FUN_14150a870(lVar7,lVar3);
    }
    if (param_2 != &DAT_1468a51a0) {
      lVar3 = param_2[0x72];
      if (lVar3 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x390);
        if (lVar7 == 0) {
          lVar7 = FUN_141519320();
          *(longlong *)(param_1 + 0x390) = lVar7;
        }
        FUN_141533a70(lVar7,lVar3);
      }
      if (param_2 != &DAT_1468a51a0) {
        lVar3 = param_2[0x73];
        if (lVar3 != 0) {
          lVar7 = *(longlong *)(param_1 + 0x398);
          if (lVar7 == 0) {
            lVar7 = FUN_1415185c0();
            *(longlong *)(param_1 + 0x398) = lVar7;
          }
          FUN_141531910(lVar7,lVar3);
        }
        if (param_2 != &DAT_1468a51a0) {
          lVar3 = param_2[0x74];
          if (lVar3 != 0) {
            lVar7 = *(longlong *)(param_1 + 0x3a0);
            if (lVar7 == 0) {
              lVar7 = FUN_141518bc0();
              *(longlong *)(param_1 + 0x3a0) = lVar7;
            }
            FUN_1415324d0(lVar7,lVar3);
          }
          if (param_2 != &DAT_1468a51a0) {
            lVar3 = param_2[0x75];
            if (lVar3 != 0) {
              lVar7 = *(longlong *)(param_1 + 0x3a8);
              if (lVar7 == 0) {
                lVar7 = FUN_141518230();
                *(longlong *)(param_1 + 0x3a8) = lVar7;
              }
              FUN_141531260(lVar7,lVar3);
            }
            if (param_2 != &DAT_1468a51a0) {
              lVar3 = param_2[0x76];
              if (lVar3 != 0) {
                lVar7 = *(longlong *)(param_1 + 0x3b0);
                if (lVar7 == 0) {
                  lVar7 = FUN_141518170();
                  *(longlong *)(param_1 + 0x3b0) = lVar7;
                }
                FUN_141531120(lVar7,lVar3);
              }
              if (param_2 != &DAT_1468a51a0) {
                lVar3 = param_2[0x77];
                if (lVar3 != 0) {
                  lVar7 = *(longlong *)(param_1 + 0x3b8);
                  if (lVar7 == 0) {
                    lVar7 = FUN_141518de0();
                    *(longlong *)(param_1 + 0x3b8) = lVar7;
                  }
                  FUN_1415324d0(lVar7,lVar3);
                }
                if (param_2 != &DAT_1468a51a0) {
                  lVar3 = param_2[0x78];
                  if (lVar3 != 0) {
                    lVar7 = *(longlong *)(param_1 + 0x3c0);
                    if (lVar7 == 0) {
                      lVar7 = FUN_141517e10();
                      *(longlong *)(param_1 + 0x3c0) = lVar7;
                    }
                    FUN_141530060(lVar7,lVar3);
                  }
                  if (param_2 != &DAT_1468a51a0) {
                    lVar3 = param_2[0x79];
                    if (lVar3 != 0) {
                      lVar7 = *(longlong *)(param_1 + 0x3c8);
                      if (lVar7 == 0) {
                        lVar7 = FUN_141519430();
                        *(longlong *)(param_1 + 0x3c8) = lVar7;
                      }
                      FUN_141533d50(lVar7,lVar3);
                    }
                    if (param_2 != &DAT_1468a51a0) {
                      lVar3 = param_2[0x7a];
                      if (lVar3 != 0) {
                        lVar7 = *(longlong *)(param_1 + 0x3d0);
                        if (lVar7 == 0) {
                          lVar7 = FUN_141519960();
                          *(longlong *)(param_1 + 0x3d0) = lVar7;
                        }
                        FUN_141534a00(lVar7,lVar3);
                      }
                      if (param_2 != &DAT_1468a51a0) {
                        lVar3 = param_2[0x7b];
                        if (lVar3 != 0) {
                          lVar7 = *(longlong *)(param_1 + 0x3d8);
                          if (lVar7 == 0) {
                            lVar7 = FUN_1415198c0();
                            *(longlong *)(param_1 + 0x3d8) = lVar7;
                          }
                          FUN_141534840(lVar7,lVar3);
                        }
                        if (param_2 != &DAT_1468a51a0) {
                          lVar3 = param_2[0x7c];
                          if (lVar3 != 0) {
                            lVar7 = *(longlong *)(param_1 + 0x3e0);
                            if (lVar7 == 0) {
                              lVar7 = FUN_141518890();
                              *(longlong *)(param_1 + 0x3e0) = lVar7;
                            }
                            FUN_141531de0(lVar7,lVar3);
                          }
                          if ((param_2 != &DAT_1468a51a0) && (lVar3 = param_2[0x7d], lVar3 != 0)) {
                            lVar7 = *(longlong *)(param_1 + 1000);
                            if (lVar7 == 0) {
                              lVar7 = FUN_141518a00();
                              *(longlong *)(param_1 + 1000) = lVar7;
                            }
                            FUN_1415320e0(lVar7,lVar3);
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
  if (param_2[0x7e] != 0) {
    *(undefined8 *)(param_1 + 0x3f0) = param_2[0x7e];
  }
  if (*(int *)(param_2 + 0x7f) != 0) {
    *(int *)(param_1 + 0x3f8) = *(int *)(param_2 + 0x7f);
  }
  if (*(int *)((longlong)param_2 + 0x3fc) != 0) {
    *(int *)(param_1 + 0x3fc) = *(int *)((longlong)param_2 + 0x3fc);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x400) = *(int *)(param_2 + 0x80);
  }
  if (*(int *)((longlong)param_2 + 0x404) != 0) {
    *(int *)(param_1 + 0x404) = *(int *)((longlong)param_2 + 0x404);
  }
  if (*(int *)(param_2 + 0x81) != 0) {
    *(int *)(param_1 + 0x408) = *(int *)(param_2 + 0x81);
  }
  if (*(int *)((longlong)param_2 + 0x40c) != 0) {
    *(int *)(param_1 + 0x40c) = *(int *)((longlong)param_2 + 0x40c);
  }
  if (*(char *)(param_2 + 0x82) != '\0') {
    *(char *)(param_1 + 0x410) = *(char *)(param_2 + 0x82);
  }
  if (*(char *)((longlong)param_2 + 0x411) != '\0') {
    *(char *)(param_1 + 0x411) = *(char *)((longlong)param_2 + 0x411);
  }
  if (*(char *)((longlong)param_2 + 0x412) != '\0') {
    *(char *)(param_1 + 0x412) = *(char *)((longlong)param_2 + 0x412);
  }
  if (*(char *)((longlong)param_2 + 0x413) != '\0') {
    *(char *)(param_1 + 0x413) = *(char *)((longlong)param_2 + 0x413);
  }
  if (*(int *)((longlong)param_2 + 0x414) != 0) {
    *(int *)(param_1 + 0x414) = *(int *)((longlong)param_2 + 0x414);
  }
  if (*(int *)(param_2 + 0x83) != 0) {
    *(int *)(param_1 + 0x418) = *(int *)(param_2 + 0x83);
  }
  if (*(int *)((longlong)param_2 + 0x41c) != 0) {
    *(int *)(param_1 + 0x41c) = *(int *)((longlong)param_2 + 0x41c);
  }
  if (*(int *)(param_2 + 0x84) != 0) {
    *(int *)(param_1 + 0x420) = *(int *)(param_2 + 0x84);
  }
  if (*(int *)((longlong)param_2 + 0x424) != 0) {
    *(int *)(param_1 + 0x424) = *(int *)((longlong)param_2 + 0x424);
  }
  if (*(int *)(param_2 + 0x85) != 0) {
    *(int *)(param_1 + 0x428) = *(int *)(param_2 + 0x85);
  }
  if (*(char *)((longlong)param_2 + 0x42c) != '\0') {
    *(char *)(param_1 + 0x42c) = *(char *)((longlong)param_2 + 0x42c);
  }
  if (*(int *)((longlong)param_2 + 0x43c) == 0x40) {
    uVar6 = param_2[0x86];
    if (*(int *)(param_1 + 0x43c) != 0x40) {
      *(undefined4 *)(param_1 + 0x43c) = 0x40;
      uVar8 = FUN_1415194f0(0);
      *(undefined8 *)(param_1 + 0x430) = uVar8;
    }
    FUN_141533e90(*(undefined8 *)(param_1 + 0x430),uVar6);
  }
  return;
}



// FUNCTION 141530e20 FUN_141530e20 body=156 status=ok
// SIG undefined FUN_141530e20(void)

void FUN_141530e20(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0aa0 != 0) {
    FUN_1439f44f0(&DAT_1464a0aa0);
  }
  lVar1 = (**(code **)(DAT_1468a51a0 + 0xb8))(&DAT_1468a51a0,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_1415301c0(param_1);
  return;
}



// FUNCTION 141530ec0 FUN_141530ec0 body=156 status=ok
// SIG undefined FUN_141530ec0(void)

void FUN_141530ec0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0650 != 0) {
    FUN_1439f44f0(&DAT_1464a0650);
  }
  lVar1 = (**(code **)(DAT_1468a5618 + 0xb8))(&DAT_1468a5618,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150a870(param_1);
  return;
}



// FUNCTION 141530f60 FUN_141530f60 body=287 status=ok
// SIG undefined FUN_141530f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141530f60(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    uVar1 = param_2[1];
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar1 & 0xfffffffffffffffe);
  }
  puVar6 = (undefined8 *)param_2[2];
  if ((puVar6[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x10), puVar2 != puVar6)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x10);
    }
    else {
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar6);
    }
  }
  puVar6 = (undefined8 *)param_2[3];
  if ((puVar6[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x18), puVar2 != puVar6)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x18);
    }
    else {
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar6);
    }
  }
  if ((param_2 != &DAT_1468a5638) && (lVar3 = param_2[4], lVar3 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
      lVar5 = FUN_141518c30();
      *(longlong *)(param_1 + 0x20) = lVar5;
    }
    FUN_1415325e0(lVar5,lVar3);
  }
  return;
}



// FUNCTION 141531080 FUN_141531080 body=156 status=ok
// SIG undefined FUN_141531080(void)

void FUN_141531080(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0890 != 0) {
    FUN_1439f44f0(&DAT_1464a0890);
  }
  lVar1 = (**(code **)(DAT_1468a5638 + 0xb8))(&DAT_1468a5638,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_141530f60(param_1);
  return;
}



// FUNCTION 141531120 FUN_141531120 body=149 status=ok
// SIG undefined FUN_141531120(void)

void FUN_141531120(longlong param_1,longlong param_2)

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
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar5 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    FUN_14151aaf0(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  return;
}



// FUNCTION 1415311c0 FUN_1415311c0 body=156 status=ok
// SIG undefined FUN_1415311c0(void)

void FUN_1415311c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a08a8 != 0) {
    FUN_1439f44f0(&DAT_1464a08a8);
  }
  lVar1 = (**(code **)(DAT_1468a5668 + 0xb8))(&DAT_1468a5668,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_141531120(param_1);
  return;
}



// FUNCTION 141531260 FUN_141531260 body=274 status=ok
// SIG undefined FUN_141531260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141531260(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar6 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    local_38 = **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    FUN_14151aa20(param_1 + 0x10,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  puVar7 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar7[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x28), puVar4 != puVar7)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28);
    }
    else {
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar7);
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  return;
}



// FUNCTION 141531380 FUN_141531380 body=156 status=ok
// SIG undefined FUN_141531380(void)

void FUN_141531380(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a08c0 != 0) {
    FUN_1439f44f0(&DAT_1464a08c0);
  }
  lVar1 = (**(code **)(DAT_1468a5698 + 0xb8))(&DAT_1468a5698,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_141531260(param_1);
  return;
}



// FUNCTION 141531420 FUN_141531420 body=330 status=ok
// SIG undefined FUN_141531420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141531420(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    uVar1 = param_2[1];
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar1 & 0xfffffffffffffffe);
  }
  puVar6 = (undefined8 *)param_2[2];
  if (puVar6[2] != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 != puVar6) {
      if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10);
      }
      else {
        if (0xf < (ulonglong)puVar6[3]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar6);
      }
    }
  }
  if ((param_2 != &DAT_1468a56d0) && (lVar3 = param_2[3], lVar3 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar5 == 0) {
      lVar5 = FUN_141544530();
      *(longlong *)(param_1 + 0x18) = lVar5;
    }
    FUN_14154acf0(lVar5,lVar3);
  }
  if ((param_2 != &DAT_1468a56d0) && (lVar3 = param_2[4], lVar3 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
      lVar5 = FUN_141544530();
      *(longlong *)(param_1 + 0x20) = lVar5;
    }
    FUN_14154acf0(lVar5,lVar3);
  }
  if (*(char *)(param_2 + 5) != '\0') {
    *(char *)(param_1 + 0x28) = *(char *)(param_2 + 5);
  }
  if (*(char *)((longlong)param_2 + 0x29) != '\0') {
    *(char *)(param_1 + 0x29) = *(char *)((longlong)param_2 + 0x29);
  }
  return;
}



// FUNCTION 141531570 FUN_141531570 body=156 status=ok
// SIG undefined FUN_141531570(void)

void FUN_141531570(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a08d8 != 0) {
    FUN_1439f44f0(&DAT_1464a08d8);
  }
  lVar1 = (**(code **)(DAT_1468a56d0 + 0xb8))(&DAT_1468a56d0,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_141531420(param_1);
  return;
}



// FUNCTION 141531610 FUN_141531610 body=156 status=ok
// SIG undefined FUN_141531610(void)

void FUN_141531610(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0668 != 0) {
    FUN_1439f44f0(&DAT_1464a0668);
  }
  lVar1 = (**(code **)(DAT_1468a5700 + 0xb8))(&DAT_1468a5700,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150a870(param_1);
  return;
}



// FUNCTION 1415316b0 FUN_1415316b0 body=274 status=ok
// SIG undefined FUN_1415316b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415316b0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar6 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    local_38 = **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    FUN_14151ac90(param_1 + 0x10,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  puVar7 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar7[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x28), puVar4 != puVar7)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28);
    }
    else {
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar7);
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  return;
}



// FUNCTION 1415317d0 FUN_1415317d0 body=156 status=ok
// SIG undefined FUN_1415317d0(void)

void FUN_1415317d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a08f0 != 0) {
    FUN_1439f44f0(&DAT_1464a08f0);
  }
  lVar1 = (**(code **)(DAT_1468a5720 + 0xb8))(&DAT_1468a5720,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_1415316b0(param_1);
  return;
}



// FUNCTION 141531870 FUN_141531870 body=156 status=ok
// SIG undefined FUN_141531870(void)

void FUN_141531870(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0a88 != 0) {
    FUN_1439f44f0(&DAT_1464a0a88);
  }
  lVar1 = (**(code **)(DAT_1468a5758 + 0xb8))(&DAT_1468a5758,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14152ff00(param_1);
  return;
}



// FUNCTION 141531910 FUN_141531910 body=149 status=ok
// SIG undefined FUN_141531910(void)

void FUN_141531910(longlong param_1,longlong param_2)

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
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar5 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    FUN_14151ad60(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  return;
}



// FUNCTION 1415319b0 FUN_1415319b0 body=156 status=ok
// SIG undefined FUN_1415319b0(void)

void FUN_1415319b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0908 != 0) {
    FUN_1439f44f0(&DAT_1464a0908);
  }
  lVar1 = (**(code **)(DAT_1468a5778 + 0xb8))(&DAT_1468a5778,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_141531910(param_1);
  return;
}



// FUNCTION 141531a50 FUN_141531a50 body=156 status=ok
// SIG undefined FUN_141531a50(void)

void FUN_141531a50(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0680 != 0) {
    FUN_1439f44f0(&DAT_1464a0680);
  }
  lVar1 = (**(code **)(DAT_1468a57a8 + 0xb8))(&DAT_1468a57a8,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14152ff00(param_1);
  return;
}



// FUNCTION 141531af0 FUN_141531af0 body=247 status=ok
// SIG undefined FUN_141531af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141531af0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_141515d60();
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar3,uVar1 & 0xfffffffffffffffe);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x10), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x10);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x18), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x18);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(char *)(param_2 + 0x24) != '\0') {
    *(char *)(param_1 + 0x24) = *(char *)(param_2 + 0x24);
  }
  return;
}



// FUNCTION 141531bf0 FUN_141531bf0 body=156 status=ok
// SIG undefined FUN_141531bf0(void)

void FUN_141531bf0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0698 != 0) {
    FUN_1439f44f0(&DAT_1464a0698);
  }
  lVar1 = (**(code **)(DAT_1468a57c8 + 0xb8))(&DAT_1468a57c8,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_141531af0(param_1);
  return;
}



// FUNCTION 141531c90 FUN_141531c90 body=167 status=ok
// SIG undefined FUN_141531c90(void)

void FUN_141531c90(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    uVar1 = param_2[1];
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_141515d60();
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar3,uVar1 & 0xfffffffffffffffe);
  }
  if ((param_2 != &DAT_1468a57f8) && (lVar2 = param_2[2], lVar2 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (lVar4 == 0) {
      lVar4 = FUN_141518de0();
      *(longlong *)(param_1 + 0x10) = lVar4;
    }
    FUN_1415324d0(lVar4,lVar2);
  }
  if (*(int *)(param_2 + 3) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 3);
  }
  if (*(int *)((longlong)param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)((longlong)param_2 + 0x1c);
  }
  return;
}



// FUNCTION 141531d40 FUN_141531d40 body=156 status=ok
// SIG undefined FUN_141531d40(void)

void FUN_141531d40(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0920 != 0) {
    FUN_1439f44f0(&DAT_1464a0920);
  }
  lVar1 = (**(code **)(DAT_1468a57f8 + 0xb8))(&DAT_1468a57f8,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_141531c90(param_1);
  return;
}


