// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141531de0 FUN_141531de0 body=149 status=ok
// SIG undefined FUN_141531de0(void)

void FUN_141531de0(longlong param_1,longlong param_2)

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
    FUN_14151b0a0(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  return;
}



// FUNCTION 141531e80 FUN_141531e80 body=156 status=ok
// SIG undefined FUN_141531e80(void)

void FUN_141531e80(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141531f20 FUN_141531f20 body=284 status=ok
// SIG undefined FUN_141531f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141531f20(longlong param_1,longlong param_2)

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
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(float *)(param_2 + 0x28) != 0.0) {
    *(float *)(param_1 + 0x28) = *(float *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  return;
}



// FUNCTION 141532040 FUN_141532040 body=156 status=ok
// SIG undefined FUN_141532040(void)

void FUN_141532040(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 1415320e0 FUN_1415320e0 body=310 status=ok
// SIG undefined FUN_1415320e0(void)

void FUN_1415320e0(longlong param_1,longlong param_2)

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
    FUN_14151b240(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar5 = FUN_1439f1d40(param_1 + 0x28,iVar1);
    FUN_14151b170(param_1 + 0x28,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
    if (**(int **)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
      **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_2 + 0x50);
  }
  if (*(char *)(param_2 + 0x58) != '\0') {
    *(char *)(param_1 + 0x58) = *(char *)(param_2 + 0x58);
  }
  return;
}



// FUNCTION 141532220 FUN_141532220 body=156 status=ok
// SIG undefined FUN_141532220(void)

void FUN_141532220(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 1415322c0 FUN_1415322c0 body=156 status=ok
// SIG undefined FUN_1415322c0(void)

void FUN_1415322c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a06c8 != 0) {
    FUN_1439f44f0(&DAT_1464a06c8);
  }
  lVar1 = (**(code **)(DAT_1468a5910 + 0xb8))(&DAT_1468a5910,local_28);
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



// FUNCTION 141532360 FUN_141532360 body=195 status=ok
// SIG undefined FUN_141532360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141532360(longlong param_1,longlong param_2)

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
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(char *)(param_2 + 0x1c) != '\0') {
    *(char *)(param_1 + 0x1c) = *(char *)(param_2 + 0x1c);
  }
  return;
}



// FUNCTION 141532430 FUN_141532430 body=156 status=ok
// SIG undefined FUN_141532430(void)

void FUN_141532430(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a06e0 != 0) {
    FUN_1439f44f0(&DAT_1464a06e0);
  }
  lVar1 = (**(code **)(DAT_1468a5888 + 0xb8))(&DAT_1468a5888,local_28);
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
  FUN_141532360(param_1);
  return;
}



// FUNCTION 1415324d0 FUN_1415324d0 body=106 status=ok
// SIG undefined FUN_1415324d0(void)

void FUN_1415324d0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  return;
}



// FUNCTION 141532540 FUN_141532540 body=156 status=ok
// SIG undefined FUN_141532540(void)

void FUN_141532540(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 1415325e0 FUN_1415325e0 body=381 status=ok
// SIG undefined FUN_1415325e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415325e0(longlong param_1,longlong param_2)

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
  FUN_1439f2030(param_1 + 0x10,param_2 + 0x10);
  FUN_1439f2030(param_1 + 0x28,param_2 + 0x28);
  FUN_1439f2030(param_1 + 0x40,param_2 + 0x40);
  puVar4 = *(undefined8 **)(param_2 + 0x58);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x58), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x58);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x60);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x60), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x60);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x68);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x68), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x68);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x70);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x70), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x70);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
  }
  return;
}



// FUNCTION 141532760 FUN_141532760 body=156 status=ok
// SIG undefined FUN_141532760(void)

void FUN_141532760(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141532800 FUN_141532800 body=156 status=ok
// SIG undefined FUN_141532800(void)

void FUN_141532800(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0728 != 0) {
    FUN_1439f44f0(&DAT_1464a0728);
  }
  lVar1 = (**(code **)(DAT_1468a59d0 + 0xb8))(&DAT_1468a59d0,local_28);
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



// FUNCTION 1415328a0 FUN_1415328a0 body=281 status=ok
// SIG undefined FUN_1415328a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415328a0(longlong param_1,longlong param_2)

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
    FUN_14151b310(param_1 + 0x10,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  puVar7 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar7[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x28), puVar4 != puVar7)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28);
      return;
    }
    if (0xf < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar7);
  }
  return;
}



// FUNCTION 1415329c0 FUN_1415329c0 body=156 status=ok
// SIG undefined FUN_1415329c0(void)

void FUN_1415329c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141532a60 FUN_141532a60 body=156 status=ok
// SIG undefined FUN_141532a60(void)

void FUN_141532a60(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141532b00 FUN_141532b00 body=281 status=ok
// SIG undefined FUN_141532b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141532b00(longlong param_1,longlong param_2)

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
    FUN_14151b580(param_1 + 0x10,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  puVar7 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar7[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x28), puVar4 != puVar7)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28);
      return;
    }
    if (0xf < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar7);
  }
  return;
}



// FUNCTION 141532c20 FUN_141532c20 body=156 status=ok
// SIG undefined FUN_141532c20(void)

void FUN_141532c20(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141532cc0 FUN_141532cc0 body=291 status=ok
// SIG undefined FUN_141532cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141532cc0(longlong param_1,longlong param_2)

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
  FUN_1439f1f20(param_1 + 0x10,param_2 + 0x10);
  puVar4 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x28), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x30), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x30);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x3c) != '\0') {
    *(char *)(param_1 + 0x3c) = *(char *)(param_2 + 0x3c);
  }
  if (*(char *)(param_2 + 0x3d) != '\0') {
    *(char *)(param_1 + 0x3d) = *(char *)(param_2 + 0x3d);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  return;
}



// FUNCTION 141532df0 FUN_141532df0 body=156 status=ok
// SIG undefined FUN_141532df0(void)

void FUN_141532df0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141532e90 FUN_141532e90 body=226 status=ok
// SIG undefined FUN_141532e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141532e90(longlong param_1,longlong param_2)

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
  return;
}



// FUNCTION 141532f80 FUN_141532f80 body=156 status=ok
// SIG undefined FUN_141532f80(void)

void FUN_141532f80(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0770 != 0) {
    FUN_1439f44f0(&DAT_1464a0770);
  }
  lVar1 = (**(code **)(DAT_1468a5ad0 + 0xb8))(&DAT_1468a5ad0,local_28);
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
  FUN_141532e90(param_1);
  return;
}



// FUNCTION 141533020 FUN_141533020 body=204 status=ok
// SIG undefined FUN_141533020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141533020(longlong param_1,longlong param_2)

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
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1415330f0 FUN_1415330f0 body=156 status=ok
// SIG undefined FUN_1415330f0(void)

void FUN_1415330f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0788 != 0) {
    FUN_1439f44f0(&DAT_1464a0788);
  }
  lVar1 = (**(code **)(DAT_1468a5af8 + 0xb8))(&DAT_1468a5af8,local_28);
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
  FUN_141533020(param_1);
  return;
}



// FUNCTION 141533190 FUN_141533190 body=332 status=ok
// SIG undefined FUN_141533190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141533190(longlong param_1,longlong param_2)

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
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x20), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x20);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x28), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  return;
}



// FUNCTION 1415332e0 FUN_1415332e0 body=156 status=ok
// SIG undefined FUN_1415332e0(void)

void FUN_1415332e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141533380 FUN_141533380 body=279 status=ok
// SIG undefined FUN_141533380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141533380(longlong param_1,longlong param_2)

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
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x20), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x20);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  return;
}



// FUNCTION 1415334a0 FUN_1415334a0 body=156 status=ok
// SIG undefined FUN_1415334a0(void)

void FUN_1415334a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141533540 FUN_141533540 body=680 status=ok
// SIG undefined FUN_141533540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141533540(longlong param_1,longlong param_2)

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
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x20), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x20);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x28), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x30), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x30);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x38), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x38);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x40);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x40), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x40);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x48);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x48), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x48);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x50);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x50), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x50);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x58);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x58), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x58);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
  }
  return;
}



// FUNCTION 1415337f0 FUN_1415337f0 body=156 status=ok
// SIG undefined FUN_1415337f0(void)

void FUN_1415337f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141533890 FUN_141533890 body=307 status=ok
// SIG undefined FUN_141533890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141533890(longlong param_1,undefined8 *param_2)

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
  if ((param_2 != &DAT_1468a5b88) && (lVar3 = param_2[4], lVar3 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
      lVar5 = FUN_141518c30();
      *(longlong *)(param_1 + 0x20) = lVar5;
    }
    FUN_1415325e0(lVar5,lVar3);
  }
  if (*(int *)(param_2 + 5) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 5);
  }
  if (*(int *)((longlong)param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)((longlong)param_2 + 0x2c);
  }
  return;
}



// FUNCTION 1415339d0 FUN_1415339d0 body=156 status=ok
// SIG undefined FUN_1415339d0(void)

void FUN_1415339d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141533a70 FUN_141533a70 body=406 status=ok
// SIG undefined FUN_141533a70(void)

void FUN_141533a70(longlong param_1,longlong param_2)

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
    FUN_14151b720(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar5 = FUN_1439f1d40(param_1 + 0x28,iVar1);
    FUN_14151b650(param_1 + 0x28,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
    if (**(int **)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
      **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
    }
  }
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x50);
    uVar5 = FUN_1439f1d40(param_1 + 0x40,iVar1);
    FUN_14151b8c0(param_1 + 0x40,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x50) - *(int *)(param_1 + 0x48));
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar1;
    if (**(int **)(param_1 + 0x50) < *(int *)(param_1 + 0x48)) {
      **(int **)(param_1 + 0x50) = *(int *)(param_1 + 0x48);
    }
  }
  iVar1 = *(int *)(param_2 + 0x60);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x68);
    uVar5 = FUN_1439f1d40(param_1 + 0x58,iVar1);
    FUN_14151b7f0(param_1 + 0x58,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x68) - *(int *)(param_1 + 0x60));
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar1;
    if (**(int **)(param_1 + 0x68) < *(int *)(param_1 + 0x60)) {
      **(int **)(param_1 + 0x68) = *(int *)(param_1 + 0x60);
    }
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_2 + 0x70);
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
  }
  return;
}



// FUNCTION 141533c10 FUN_141533c10 body=156 status=ok
// SIG undefined FUN_141533c10(void)

void FUN_141533c10(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141533cb0 FUN_141533cb0 body=156 status=ok
// SIG undefined FUN_141533cb0(void)

void FUN_141533cb0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a07e8 != 0) {
    FUN_1439f44f0(&DAT_1464a07e8);
  }
  lVar1 = (**(code **)(DAT_1468a5cb0 + 0xb8))(&DAT_1468a5cb0,local_28);
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
  FUN_141532e90(param_1);
  return;
}



// FUNCTION 141533d50 FUN_141533d50 body=149 status=ok
// SIG undefined FUN_141533d50(void)

void FUN_141533d50(longlong param_1,longlong param_2)

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
    FUN_14151bb30(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  return;
}



// FUNCTION 141533df0 FUN_141533df0 body=156 status=ok
// SIG undefined FUN_141533df0(void)

void FUN_141533df0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141533e90 FUN_141533e90 body=952 status=ok
// SIG undefined FUN_141533e90(void)

void FUN_141533e90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    uVar2 = param_2[1];
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 3);
  if (iVar1 != 0) {
    lVar3 = param_2[4];
    uVar5 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    FUN_1414fe1d0(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  FUN_1439f2030(param_1 + 0x28,param_2 + 5);
  FUN_1439f2030(param_1 + 0x40,param_2 + 8);
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != 0) {
    lVar3 = param_2[0xd];
    uVar5 = FUN_1439f1d40(param_1 + 0x58,iVar1);
    FUN_1414fe6b0(param_1 + 0x58,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x68) - *(int *)(param_1 + 0x60));
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar1;
    if (**(int **)(param_1 + 0x68) < *(int *)(param_1 + 0x60)) {
      **(int **)(param_1 + 0x68) = *(int *)(param_1 + 0x60);
    }
  }
  iVar1 = *(int *)(param_2 + 0xf);
  if (iVar1 != 0) {
    lVar3 = param_2[0x10];
    uVar5 = FUN_1439f1d40(param_1 + 0x70,iVar1);
    FUN_1414fe850(param_1 + 0x70,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x80) - *(int *)(param_1 + 0x78));
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + iVar1;
    if (**(int **)(param_1 + 0x80) < *(int *)(param_1 + 0x78)) {
      **(int **)(param_1 + 0x80) = *(int *)(param_1 + 0x78);
    }
  }
  iVar1 = *(int *)(param_2 + 0x12);
  if (iVar1 != 0) {
    lVar3 = param_2[0x13];
    uVar5 = FUN_1439f1d40(param_1 + 0x88,iVar1);
    FUN_1414fe510(param_1 + 0x88,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x98) - *(int *)(param_1 + 0x90));
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + iVar1;
    if (**(int **)(param_1 + 0x98) < *(int *)(param_1 + 0x90)) {
      **(int **)(param_1 + 0x98) = *(int *)(param_1 + 0x90);
    }
  }
  iVar1 = *(int *)(param_2 + 0x15);
  if (iVar1 != 0) {
    lVar3 = param_2[0x16];
    uVar5 = FUN_1439f1d40(param_1 + 0xa0,iVar1);
    FUN_1414fe5e0(param_1 + 0xa0,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0xb0) - *(int *)(param_1 + 0xa8));
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + iVar1;
    if (**(int **)(param_1 + 0xb0) < *(int *)(param_1 + 0xa8)) {
      **(int **)(param_1 + 0xb0) = *(int *)(param_1 + 0xa8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = param_2[0x19];
    uVar5 = FUN_1439f1d40(param_1 + 0xb8,iVar1);
    FUN_1414fe030(param_1 + 0xb8,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 200) - *(int *)(param_1 + 0xc0));
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + iVar1;
    if (**(int **)(param_1 + 200) < *(int *)(param_1 + 0xc0)) {
      **(int **)(param_1 + 200) = *(int *)(param_1 + 0xc0);
    }
  }
  iVar1 = *(int *)(param_2 + 0x1b);
  if (iVar1 != 0) {
    lVar3 = param_2[0x1c];
    uVar5 = FUN_1439f1d40(param_1 + 0xd0,iVar1);
    FUN_1414fe100(param_1 + 0xd0,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0xe0) - *(int *)(param_1 + 0xd8));
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + iVar1;
    if (**(int **)(param_1 + 0xe0) < *(int *)(param_1 + 0xd8)) {
      **(int **)(param_1 + 0xe0) = *(int *)(param_1 + 0xd8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x1e);
  if (iVar1 != 0) {
    lVar3 = param_2[0x1f];
    uVar5 = FUN_1439f1d40(param_1 + 0xe8,iVar1);
    FUN_1414fdf60(param_1 + 0xe8,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0xf8) - *(int *)(param_1 + 0xf0));
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + iVar1;
    if (**(int **)(param_1 + 0xf8) < *(int *)(param_1 + 0xf0)) {
      **(int **)(param_1 + 0xf8) = *(int *)(param_1 + 0xf0);
    }
  }
  FUN_1439f2030(param_1 + 0x100,param_2 + 0x20);
  FUN_1439f1f20(param_1 + 0x118,param_2 + 0x23);
  if ((param_2 != &DAT_1468a5d30) && (lVar3 = param_2[0x26], lVar3 != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x130);
    if (lVar6 == 0) {
      lVar6 = FUN_141544480();
      *(longlong *)(param_1 + 0x130) = lVar6;
    }
    FUN_14154ab30(lVar6,lVar3);
  }
  if (param_2[0x27] != 0) {
    *(undefined8 *)(param_1 + 0x138) = param_2[0x27];
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x140) = *(int *)(param_2 + 0x28);
  }
  if (*(char *)((longlong)param_2 + 0x144) != '\0') {
    *(char *)(param_1 + 0x144) = *(char *)((longlong)param_2 + 0x144);
  }
  if (*(char *)((longlong)param_2 + 0x145) != '\0') {
    *(char *)(param_1 + 0x145) = *(char *)((longlong)param_2 + 0x145);
  }
  return;
}



// FUNCTION 141534250 FUN_141534250 body=156 status=ok
// SIG undefined FUN_141534250(void)

void FUN_141534250(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 1415342f0 FUN_1415342f0 body=207 status=ok
// SIG undefined FUN_1415342f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415342f0(longlong param_1,longlong param_2)

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
  if (*(float *)(param_2 + 0x18) != 0.0) {
    *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18);
  }
  if (*(float *)(param_2 + 0x1c) != 0.0) {
    *(float *)(param_1 + 0x1c) = *(float *)(param_2 + 0x1c);
  }
  return;
}



// FUNCTION 1415343c0 FUN_1415343c0 body=156 status=ok
// SIG undefined FUN_1415343c0(void)

void FUN_1415343c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0800 != 0) {
    FUN_1439f44f0(&DAT_1464a0800);
  }
  lVar1 = (**(code **)(DAT_1468a5d08 + 0xb8))(&DAT_1468a5d08,local_28);
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
  FUN_1415342f0(param_1);
  return;
}



// FUNCTION 141534460 FUN_141534460 body=156 status=ok
// SIG undefined FUN_141534460(void)

void FUN_141534460(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0818 != 0) {
    FUN_1439f44f0(&DAT_1464a0818);
  }
  lVar1 = (**(code **)(DAT_1468a5e80 + 0xb8))(&DAT_1468a5e80,local_28);
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



// FUNCTION 141534500 FUN_141534500 body=149 status=ok
// SIG undefined FUN_141534500(void)

void FUN_141534500(longlong param_1,longlong param_2)

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
    FUN_14151a950(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  return;
}



// FUNCTION 1415345a0 FUN_1415345a0 body=156 status=ok
// SIG undefined FUN_1415345a0(void)

void FUN_1415345a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141534640 FUN_141534640 body=156 status=ok
// SIG undefined FUN_141534640(void)

void FUN_141534640(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0830 != 0) {
    FUN_1439f44f0(&DAT_1464a0830);
  }
  lVar1 = (**(code **)(DAT_1468a5ed0 + 0xb8))(&DAT_1468a5ed0,local_28);
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
  FUN_141533020(param_1);
  return;
}



// FUNCTION 1415346e0 FUN_1415346e0 body=192 status=ok
// SIG undefined FUN_1415346e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415346e0(longlong param_1,longlong param_2)

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
  if (*(float *)(param_2 + 0x18) != 0.0) {
    *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18);
  }
  return;
}



// FUNCTION 1415347a0 FUN_1415347a0 body=156 status=ok
// SIG undefined FUN_1415347a0(void)

void FUN_1415347a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0848 != 0) {
    FUN_1439f44f0(&DAT_1464a0848);
  }
  lVar1 = (**(code **)(DAT_1468a5ef8 + 0xb8))(&DAT_1468a5ef8,local_28);
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
  FUN_1415346e0(param_1);
  return;
}



// FUNCTION 141534840 FUN_141534840 body=281 status=ok
// SIG undefined FUN_141534840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141534840(longlong param_1,longlong param_2)

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
    FUN_14151bc00(param_1 + 0x10,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  puVar7 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar7[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x28), puVar4 != puVar7)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28);
      return;
    }
    if (0xf < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar7);
  }
  return;
}



// FUNCTION 141534960 FUN_141534960 body=156 status=ok
// SIG undefined FUN_141534960(void)

void FUN_141534960(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141534a00 FUN_141534a00 body=174 status=ok
// SIG undefined FUN_141534a00(void)

void FUN_141534a00(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  FUN_1439f2030(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_2 + 0x28) != '\0') {
    *(char *)(param_1 + 0x28) = *(char *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x29) != '\0') {
    *(char *)(param_1 + 0x29) = *(char *)(param_2 + 0x29);
  }
  if (*(char *)(param_2 + 0x2a) != '\0') {
    *(char *)(param_1 + 0x2a) = *(char *)(param_2 + 0x2a);
  }
  if (*(char *)(param_2 + 0x2b) != '\0') {
    *(char *)(param_1 + 0x2b) = *(char *)(param_2 + 0x2b);
  }
  if (*(char *)(param_2 + 0x2c) != '\0') {
    *(char *)(param_1 + 0x2c) = *(char *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  return;
}



// FUNCTION 141534ab0 FUN_141534ab0 body=156 status=ok
// SIG undefined FUN_141534ab0(void)

void FUN_141534ab0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 141534b50 FUN_141534b50 body=156 status=ok
// SIG undefined FUN_141534b50(void)

void FUN_141534b50(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0878 != 0) {
    FUN_1439f44f0(&DAT_1464a0878);
  }
  lVar1 = (**(code **)(DAT_1468a5f90 + 0xb8))(&DAT_1468a5f90,local_28);
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



// FUNCTION 141534bf0 FUN_141534bf0 body=278 status=ok
// SIG undefined FUN_141534bf0(void)

void FUN_141534bf0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(uint *)(param_2 + 4) != 0) {
    if ((*(uint *)(param_2 + 4) & 1) != 0) {
      if (*(undefined **)(param_1 + 8) == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 8,*(undefined8 *)(param_1 + 0x18),&DAT_146ba2f50);
      }
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0xc0))(param_2);
      puVar2 = *(undefined8 **)(param_1 + 8);
      if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 8,uVar1,puVar3);
      }
      else if (puVar2 != puVar3) {
        puVar4 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar4 = (undefined8 *)*puVar3;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar2,puVar4,puVar3[2]);
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
    }
    if ((*(uint *)(param_2 + 4) >> 1 & 1) != 0) {
      if (*(undefined **)(param_1 + 0x10) == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x10,*(undefined8 *)(param_1 + 0x18),&DAT_146ba2f50);
      }
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 200))(param_2);
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x10,uVar1,puVar3);
      }
      else if (puVar2 != puVar3) {
        puVar4 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar4 = (undefined8 *)*puVar3;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar2,puVar4,puVar3[2]);
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
    }
  }
  return;
}



// FUNCTION 141534d10 FUN_141534d10 body=292 status=ok
// SIG undefined FUN_141534d10(void)

undefined8 FUN_141534d10(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  
  do {
    pbVar1 = (byte *)*param_2;
    bVar5 = 0;
    if (pbVar1 < (byte *)param_2[1]) {
      bVar5 = *pbVar1;
      uVar3 = (uint)bVar5;
      if (0x7f < bVar5) goto LAB_141534d3e;
      *param_2 = (longlong)(pbVar1 + 1);
    }
    else {
LAB_141534d3e:
      uVar3 = FUN_1439f8c60(param_2,bVar5);
    }
    if (uVar3 == 8) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
      if (((byte *)*param_2 < (byte *)param_2[1]) && (uVar3 = (uint)*(byte *)*param_2, uVar3 < 0x80)
         ) {
        *(uint *)(param_1 + 8) = uVar3;
        *param_2 = *param_2 + 1;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
      }
      else {
        lVar4 = FUN_1439f8e20(param_2);
        *(int *)(param_1 + 8) = (int)lVar4;
        if (lVar4 < 0) {
          return 0;
        }
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
      }
    }
    else if (uVar3 == 0x10) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
      if (((byte *)*param_2 < (byte *)param_2[1]) && (uVar3 = (uint)*(byte *)*param_2, uVar3 < 0x80)
         ) {
        *(uint *)(param_1 + 0xc) = uVar3;
        *param_2 = *param_2 + 1;
      }
      else {
        lVar4 = FUN_1439f8e20(param_2);
        *(int *)(param_1 + 0xc) = (int)lVar4;
        if (lVar4 < 0) {
          return 0;
        }
      }
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
      if ((*param_2 == param_2[1]) &&
         ((*(int *)((longlong)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined1 *)((longlong)param_2 + 0x24) = 1;
        return 1;
      }
    }
    else {
      if (uVar3 == 0) {
        return 1;
      }
      if (((byte)uVar3 & 7) == 4) {
        return 1;
      }
      cVar2 = FUN_1439fa560(param_2);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  } while( true );
}



// FUNCTION 141534e40 FUN_141534e40 body=293 status=ok
// SIG undefined FUN_141534e40(void)

undefined8 FUN_141534e40(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  
  do {
    pbVar1 = (byte *)*param_2;
    bVar4 = 0;
    if (pbVar1 < (byte *)param_2[1]) {
      bVar4 = *pbVar1;
      uVar3 = (uint)bVar4;
      if (0x7f < bVar4) goto LAB_141534e7f;
      *param_2 = (longlong)(pbVar1 + 1);
    }
    else {
LAB_141534e7f:
      uVar3 = FUN_1439f8c60(param_2,bVar4);
    }
    if (uVar3 == 10) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
      if (*(undefined **)(param_1 + 8) == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 8,*(undefined8 *)(param_1 + 0x18),&DAT_146ba2f50);
      }
      cVar2 = thunk_FUN_1439fa490(param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
    }
    else if (uVar3 == 0x12) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      if (*(undefined **)(param_1 + 0x10) == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 0x10,*(undefined8 *)(param_1 + 0x18),&DAT_146ba2f50);
      }
      cVar2 = thunk_FUN_1439fa490(param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      if ((*param_2 == param_2[1]) &&
         ((*(int *)((longlong)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined1 *)((longlong)param_2 + 0x24) = 1;
        return 1;
      }
    }
    else {
      if (uVar3 == 0) {
        return 1;
      }
      if (((byte)uVar3 & 7) == 4) {
        return 1;
      }
      cVar2 = FUN_1439fa560(param_2);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  } while( true );
}



// FUNCTION 141534f70 FUN_141534f70 body=422 status=ok
// SIG undefined FUN_141534f70(void)

char FUN_141534f70(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pbVar3 = (byte *)*param_2;
  if ((pbVar3 < (byte *)param_2[1]) && (*pbVar3 == 8)) {
    pbVar3 = pbVar3 + 1;
    bVar4 = 0;
    *param_2 = (ulonglong)pbVar3;
    puVar1 = (uint *)(param_1 + 0x10);
    if (pbVar3 < (byte *)param_2[1]) {
      bVar4 = *pbVar3;
      if (0x7f < bVar4) goto LAB_141534fc8;
      *puVar1 = (uint)bVar4;
      *param_2 = *param_2 + 1;
    }
    else {
LAB_141534fc8:
      lVar6 = FUN_1439f8e20(param_2,bVar4);
      *puVar1 = (uint)lVar6;
      if (lVar6 < 0) {
        return '\0';
      }
    }
    if ((0 < (int)param_2[1] - (int)*param_2) && (*(char *)*param_2 == '\x10')) {
      lVar6 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
      uVar7 = FUN_140d25480(*(longlong *)(param_1 + 8),puVar1);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      if (lVar6 != **(longlong **)(*(longlong *)(param_1 + 8) + 0x10)) {
        if ((int)param_2[1] - (int)*param_2 < 1) {
          FUN_1439f9b60(param_2,1);
        }
        else {
          *param_2 = *param_2 + 1;
        }
        cVar5 = FUN_1414ff0e0(param_2,*(undefined8 *)(param_1 + 0x18));
        if (cVar5 == '\0') {
          FUN_141542bb0(*(undefined8 *)(param_1 + 8),puVar1);
          return '\0';
        }
        cVar5 = FUN_141505cf0(param_2);
        if (cVar5 != '\0') {
          return '\x01';
        }
        FUN_14153cff0(param_1);
        lVar6 = *(longlong *)(param_1 + 0x20);
        puVar2 = (uint *)(lVar6 + 0x18);
        *puVar2 = *puVar2 | 2;
        *(undefined4 *)(lVar6 + 0xc) = **(undefined4 **)(param_1 + 0x18);
        FUN_141542bb0(*(undefined8 *)(param_1 + 8),puVar1);
        goto LAB_1415350a8;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_14153cff0(param_1);
LAB_1415350a8:
  puVar9 = (undefined4 *)(param_1 + 0x10);
  lVar6 = *(longlong *)(param_1 + 0x20);
  puVar1 = (uint *)(lVar6 + 0x18);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar6 + 8) = *puVar9;
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                    (*(longlong **)(param_1 + 0x20),param_2);
  if (cVar5 != '\0') {
    puVar8 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0xc0))();
    *puVar9 = *puVar8;
    uVar7 = FUN_140d25480(*(undefined8 *)(param_1 + 8),puVar9);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    lVar6 = *(longlong *)(param_1 + 0x20);
    puVar1 = (uint *)(lVar6 + 0x18);
    *puVar1 = *puVar1 | 2;
    **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(lVar6 + 0xc);
  }
  return cVar5;
}



// FUNCTION 141535120 FUN_141535120 body=612 status=ok
// SIG undefined FUN_141535120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_141535120(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  char *pcVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char cVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  pcVar2 = (char *)*param_2;
  if ((pcVar2 < (char *)param_2[1]) && (*pcVar2 == '\n')) {
    *param_2 = (longlong)(pcVar2 + 1);
    cVar20 = thunk_FUN_1439fa490(param_2,param_1 + 0x10);
    if (cVar20 == '\0') {
      return '\0';
    }
    if ((0 < (int)param_2[1] - (int)*param_2) && (*(char *)*param_2 == '\x12')) {
      lVar3 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
      uVar21 = FUN_140d256b0(*(longlong *)(param_1 + 8),param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x30) = uVar21;
      if (lVar3 != **(longlong **)(*(longlong *)(param_1 + 8) + 0x10)) {
        if ((int)param_2[1] - (int)*param_2 < 1) {
          FUN_1439f9b60(param_2,1);
        }
        else {
          *param_2 = *param_2 + 1;
        }
        cVar20 = thunk_FUN_1439fa490(param_2,*(undefined8 *)(param_1 + 0x30));
        if (cVar20 == '\0') {
          FUN_141542db0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
          return '\0';
        }
        cVar20 = FUN_141505cf0(param_2);
        if (cVar20 != '\0') {
          return '\x01';
        }
        FUN_14153d060(param_1);
        lVar3 = *(longlong *)(param_1 + 0x38);
        puVar24 = (undefined8 *)(lVar3 + 0x10);
        *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 2;
        puVar23 = (undefined4 *)*puVar24;
        if (puVar23 == (undefined4 *)&DAT_146ba2f50) {
          FUN_141505a20(puVar24,*(undefined8 *)(lVar3 + 0x18),&DAT_146ba2f50);
          puVar23 = (undefined4 *)*puVar24;
        }
        puVar4 = *(undefined4 **)(param_1 + 0x30);
        uVar5 = *puVar23;
        uVar6 = puVar23[1];
        uVar7 = puVar23[2];
        uVar8 = puVar23[3];
        uVar9 = puVar23[4];
        uVar10 = puVar23[5];
        uVar11 = puVar23[6];
        uVar12 = puVar23[7];
        uVar13 = puVar4[1];
        uVar14 = puVar4[2];
        uVar15 = puVar4[3];
        *puVar23 = *puVar4;
        puVar23[1] = uVar13;
        puVar23[2] = uVar14;
        puVar23[3] = uVar15;
        uVar13 = puVar4[5];
        uVar14 = puVar4[6];
        uVar15 = puVar4[7];
        puVar23[4] = puVar4[4];
        puVar23[5] = uVar13;
        puVar23[6] = uVar14;
        puVar23[7] = uVar15;
        *puVar4 = uVar5;
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        puVar4[4] = uVar9;
        puVar4[5] = uVar10;
        puVar4[6] = uVar11;
        puVar4[7] = uVar12;
        FUN_141542db0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
        lVar3 = *(longlong *)(param_1 + 0x38);
        puVar24 = (undefined8 *)(lVar3 + 8);
        *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 1;
        puVar22 = (undefined8 *)*puVar24;
        if (puVar22 == (undefined8 *)&DAT_146ba2f50) {
          FUN_141505a20(puVar24,*(undefined8 *)(lVar3 + 0x18),&DAT_146ba2f50);
          puVar22 = (undefined8 *)*puVar24;
        }
        uVar5 = *(undefined4 *)(param_1 + 0x14);
        uVar6 = *(undefined4 *)(param_1 + 0x18);
        uVar7 = *(undefined4 *)(param_1 + 0x1c);
        uVar21 = *puVar22;
        uVar16 = puVar22[1];
        uVar17 = puVar22[2];
        uVar18 = puVar22[3];
        *(undefined4 *)puVar22 = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((longlong)puVar22 + 4) = uVar5;
        *(undefined4 *)(puVar22 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar22 + 0xc) = uVar7;
        uVar19 = *(undefined8 *)(param_1 + 0x28);
        puVar22[2] = *(undefined8 *)(param_1 + 0x20);
        puVar22[3] = uVar19;
        *(undefined8 *)(param_1 + 0x10) = uVar21;
        *(undefined8 *)(param_1 + 0x18) = uVar16;
        *(undefined8 *)(param_1 + 0x20) = uVar17;
        *(undefined8 *)(param_1 + 0x28) = uVar18;
        goto LAB_141535343;
      }
    }
  }
  else {
    puVar1 = (uint *)(param_1 + 0x10);
    local_58 = local_58 & 0xffffff00;
    if (puVar1 != &local_58) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(puVar1)
      ;
      *puVar1 = local_58;
      *(undefined4 *)(param_1 + 0x14) = uStack_54;
      *(undefined4 *)(param_1 + 0x18) = uStack_50;
      *(undefined4 *)(param_1 + 0x1c) = uStack_4c;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0xf;
    }
  }
  FUN_14153d060(param_1);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar24 = (undefined8 *)(lVar3 + 8);
  *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 1;
  puVar22 = (undefined8 *)*puVar24;
  if (puVar22 == (undefined8 *)&DAT_146ba2f50) {
    FUN_141505a20(puVar24,*(undefined8 *)(lVar3 + 0x18),&DAT_146ba2f50);
    puVar22 = (undefined8 *)*puVar24;
  }
  puVar24 = (undefined8 *)(param_1 + 0x10);
  if (puVar22 != puVar24) {
    if (0xf < *(ulonglong *)(param_1 + 0x28)) {
      puVar24 = (undefined8 *)*puVar24;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (puVar22,puVar24,*(undefined8 *)(param_1 + 0x20));
  }
LAB_141535343:
  cVar20 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))
                     (*(longlong **)(param_1 + 0x38),param_2);
  if (cVar20 != '\0') {
    FUN_141542090(param_1);
  }
  return cVar20;
}



// FUNCTION 141535390 FUN_141535390 body=345 status=ok
// SIG undefined FUN_141535390(void)

ulonglong FUN_141535390(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined *puVar8;
  longlong local_18;
  char local_10;
  
LAB_1415353b1:
  do {
    pbVar5 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_1415353e2:
      iVar3 = (int)(uVar6 >> 3);
      if (iVar3 != 1) {
        if ((iVar3 != 2) || ((char)uVar6 != '\x10')) goto LAB_14153549d;
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (bVar2 = *pbVar5, bVar2 < 0x80)) {
          *param_2 = pbVar5 + 1;
          *(bool *)(param_1 + 0x18) = bVar2 != 0;
        }
        else {
          uVar6 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_1415354ce;
          *(bool *)(param_1 + 0x18) = local_18 != 0;
        }
        goto LAB_1415353b1;
      }
      if ((char)uVar6 != '\n') goto LAB_14153549d;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar6 == '\0') goto LAB_1415354ce;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar6 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                            "OakSave.ActiveFastTravelSaveData.active_travel_station_name");
    }
    else {
      uVar4 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar4;
      pbVar5 = (byte *)(ulonglong)(uVar4 - 1);
      if (uVar4 - 1 < 0x7f) goto LAB_1415353e2;
LAB_14153549d:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6);
    }
    if ((char)uVar6 == '\0') {
LAB_1415354ce:
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 1415354f0 FUN_1415354f0 body=202 status=ok
// SIG undefined FUN_1415354f0(void)

undefined8 FUN_1415354f0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  
  do {
    pbVar2 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar2 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
      pbVar2 = pbVar2 + 1;
      *param_2 = pbVar2;
LAB_14153553e:
      if (((int)(uVar6 >> 3) != 1) || ((char)uVar6 != '\n')) goto LAB_141535570;
      puVar5 = *(undefined **)(param_1 + 0x10);
      if (puVar5 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar5 = *(undefined **)(param_1 + 0x10);
      }
      uVar3 = thunk_FUN_1439fa490(param_2,puVar5);
    }
    else {
      uVar1 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar1;
      pbVar2 = (byte *)(ulonglong)(uVar1 - 1);
      if (uVar1 - 1 < 0x7f) goto LAB_14153553e;
LAB_141535570:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar4 = FUN_141515d60();
      }
      else {
        uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar3 = FUN_143a1e1e0(param_2,uVar6,uVar4);
    }
    if ((char)uVar3 == '\0') {
      return uVar3;
    }
  } while( true );
}



// FUNCTION 1415355c0 FUN_1415355c0 body=7332 status=ok
// SIG undefined FUN_1415355c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1415355c0(longlong param_1,ulonglong *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  int *piVar17;
  longlong *plVar18;
  undefined *puVar19;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  int local_154;
  undefined4 local_150;
  int local_14c;
  undefined4 local_148;
  int local_144;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  int local_134;
  undefined4 local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
  undefined4 local_120;
  int local_11c;
  undefined4 local_118;
  int local_114;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  int local_104;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  longlong *local_58;
  ulonglong local_50;
  undefined8 *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
LAB_141535600:
  pbVar5 = (byte *)*param_2;
  uVar14 = 0;
  if ((byte *)param_2[1] <= pbVar5) {
LAB_141535645:
    uVar7 = FUN_1439f8c60(param_2,uVar14);
    uVar14 = (ulonglong)uVar7;
    uVar10 = (ulonglong)(uVar7 - 1);
    if (uVar7 - 1 < 0x3fff) goto LAB_14153565e;
    goto switchD_14153567b_caseD_11;
  }
  bVar3 = *pbVar5;
  uVar14 = (ulonglong)bVar3;
  pbVar1 = pbVar5 + 1;
  if ((char)bVar3 < '\x01') {
    if (pbVar1 < (byte *)param_2[1]) {
      bVar4 = *pbVar1;
      if (0x7f < (~(uint)bVar4 & (uint)bVar3)) {
        *param_2 = (ulonglong)(pbVar5 + 2);
        uVar14 = (ulonglong)((bVar3 - 0x80) + (uint)bVar4 * 0x80);
        goto LAB_14153565e;
      }
    }
    goto LAB_141535645;
  }
  *param_2 = (ulonglong)pbVar1;
LAB_14153565e:
  uVar7 = (int)(uVar14 >> 3) - 1;
  uVar10 = (ulonglong)uVar7;
  if (0x3f < uVar7) goto switchD_14153567b_caseD_11;
  uVar10 = (ulonglong)(int)uVar7;
  cVar6 = (char)uVar14;
  switch(uVar7) {
  case 0:
    if (cVar6 != '\b') goto switchD_14153567b_caseD_11;
    lVar12 = param_1 + 0x3f8;
LAB_14153568e:
    uVar14 = FUN_1414ff0e0(param_2,lVar12);
    break;
  case 1:
    if (cVar6 != '\x10') goto switchD_14153567b_caseD_11;
    uVar14 = FUN_1414ff170(param_2,param_1 + 0x3f0);
    cVar6 = (char)uVar14;
    goto joined_r0x0001415356be;
  case 2:
    if (cVar6 == '\x18') {
      lVar12 = param_1 + 0x3fc;
      goto LAB_14153568e;
    }
    goto switchD_14153567b_caseD_11;
  case 3:
    if (cVar6 != '\"') goto switchD_14153567b_caseD_11;
    uVar13 = FUN_141543170(param_1);
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_158);
    if ((local_154 < 0) || (uVar14 = FUN_14153beb0(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_158);
    break;
  case 4:
    if (cVar6 != '*') goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x20);
    if (piVar17 == (int *)0x0) {
LAB_14153578c:
      FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
      piVar17 = *(int **)(param_1 + 0x20);
      iVar8 = *piVar17;
LAB_1415357a1:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_141519810(*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) =
           uVar13;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x18);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 0x1c)) goto LAB_14153578c;
        goto LAB_1415357a1;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0x18) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_150);
    if ((local_14c < 0) || (uVar14 = FUN_14153c2f0(uVar13,param_2), (char)uVar14 == '\0')) {
LAB_141537237:
      return uVar14 & 0xffffffffffffff00;
    }
    uVar14 = FUN_1439f84b0(param_2,local_150);
    break;
  case 5:
    if (cVar6 != '2') goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x38);
    if (piVar17 == (int *)0x0) {
LAB_141535860:
      FUN_1439f23d0(param_1 + 0x28,*(int *)(param_1 + 0x34) + 1);
      piVar17 = *(int **)(param_1 + 0x38);
      iVar8 = *piVar17;
LAB_141535875:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_141519760(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8) =
           uVar13;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x30);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 0x34)) goto LAB_141535860;
        goto LAB_141535875;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0x30) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_148);
    if ((local_144 < 0) || (uVar14 = FUN_14153c100(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_148);
    break;
  case 6:
    if (cVar6 != '8') goto switchD_14153567b_caseD_11;
    uVar14 = FUN_1414ff090(param_2,param_1 + 0x400);
    break;
  case 7:
    if (cVar6 != 'B') goto switchD_14153567b_caseD_11;
    uVar13 = FUN_140d26a70(param_1 + 0x40);
    uVar14 = FUN_14151c300(param_2,uVar13);
    break;
  case 8:
    if (cVar6 != 'J') goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x68);
    if (piVar17 == (int *)0x0) {
LAB_141535975:
      FUN_1439f23d0(param_1 + 0x58,*(int *)(param_1 + 100) + 1);
      piVar17 = *(int **)(param_1 + 0x68);
      iVar8 = *piVar17;
LAB_14153598a:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_141543ef0(*(undefined8 *)(param_1 + 0x58));
      *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)*(int *)(param_1 + 0x60) * 8) =
           uVar13;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x60);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 100)) goto LAB_141535975;
        goto LAB_14153598a;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0x60) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_140);
    if ((local_13c < 0) || (uVar14 = FUN_14154b7b0(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_140);
    break;
  case 9:
    if (cVar6 != 'R') goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x80);
    if (piVar17 == (int *)0x0) {
LAB_141535a4c:
      FUN_1439f23d0(param_1 + 0x70,*(int *)(param_1 + 0x7c) + 1);
      piVar17 = *(int **)(param_1 + 0x80);
      iVar8 = *piVar17;
LAB_141535a64:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_141519270(*(undefined8 *)(param_1 + 0x70));
      *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8 + (longlong)*(int *)(param_1 + 0x78) * 8) =
           uVar13;
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x78);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 0x7c)) goto LAB_141535a4c;
        goto LAB_141535a64;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0x78) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_138);
    if ((local_134 < 0) || (uVar14 = FUN_14153ab50(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_138);
    break;
  case 10:
    if (cVar6 != 'Z') goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x98);
    if (piVar17 == (int *)0x0) {
LAB_141535b2b:
      FUN_1439f23d0((undefined8 *)(param_1 + 0x88),*(int *)(param_1 + 0x94) + 1);
      piVar17 = *(int **)(param_1 + 0x98);
      iVar8 = *piVar17;
LAB_141535b3e:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_141518730(*(undefined8 *)(param_1 + 0x88));
      *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 8 + (longlong)*(int *)(param_1 + 0x90) * 8) =
           uVar13;
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x90);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 0x94)) goto LAB_141535b2b;
        goto LAB_141535b3e;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0x90) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_130);
    if ((local_12c < 0) || (uVar14 = FUN_141538390(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_130);
    break;
  case 0xb:
    if (cVar6 == 'b') {
      uVar14 = FUN_1414fefc0(param_2,param_1 + 0xa0);
    }
    else {
      if (cVar6 != '`') goto switchD_14153567b_caseD_11;
      uVar14 = FUN_1414ff360(1,0x62,param_2,param_1 + 0xa0);
    }
    break;
  case 0xc:
    if (cVar6 != 'j') goto switchD_14153567b_caseD_11;
    uVar13 = FUN_1415430b0(param_1);
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_128);
    if ((local_124 < 0) || (uVar14 = FUN_14153ad60(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_128);
    break;
  case 0xd:
    if (cVar6 != 'p') goto switchD_14153567b_caseD_11;
    uVar14 = FUN_1414ff090(param_2,param_1 + 0x404);
    break;
  case 0xe:
    if (cVar6 != 'x') goto switchD_14153567b_caseD_11;
    uVar14 = FUN_1414ff090(param_2,param_1 + 0x408);
    break;
  case 0xf:
    if (cVar6 != -0x80) goto switchD_14153567b_caseD_11;
    uVar14 = FUN_1414ff1c0(param_2,param_1 + 0x410);
    break;
  case 0x10:
    if (cVar6 != -0x76) goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 200);
    if (piVar17 == (int *)0x0) {
LAB_141535d19:
      FUN_1439f23d0((undefined8 *)(param_1 + 0xb8),*(int *)(param_1 + 0xc4) + 1);
      piVar17 = *(int **)(param_1 + 200);
      iVar8 = *piVar17;
LAB_141535d2c:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_141518e50(*(undefined8 *)(param_1 + 0xb8));
      *(undefined8 *)(*(longlong *)(param_1 + 200) + 8 + (longlong)*(int *)(param_1 + 0xc0) * 8) =
           uVar13;
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xc0);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 0xc4)) goto LAB_141535d19;
        goto LAB_141535d2c;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0xc0) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_120);
    if ((local_11c < 0) || (uVar14 = FUN_141539aa0(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_120);
    break;
  default:
    goto switchD_14153567b_caseD_11;
  case 0x14:
    if (cVar6 != -0x56) goto switchD_14153567b_caseD_11;
    uVar13 = FUN_1439f1a80(param_1 + 0xd0);
    uVar14 = thunk_FUN_1439fa490(param_2,uVar13);
    if ((char)uVar14 == '\0') goto LAB_141537237;
    iVar9 = IStreamingManager::GetNumWantingResources(param_1 + 0xd0);
    lVar12 = FUN_1439f1d30(param_1 + 0xd0,iVar9 + -1);
    uVar14 = *(ulonglong *)(lVar12 + 0x10);
    iVar9 = IStreamingManager::GetNumWantingResources(param_1 + 0xd0);
    puVar11 = (undefined8 *)FUN_1439f1d30(param_1 + 0xd0,iVar9 + -1);
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    uVar14 = FUN_1439fa7f0(puVar11,uVar14 & 0xffffffff,0,"OakSave.Character.active_travel_stations")
    ;
    break;
  case 0x15:
    if (cVar6 != -0x4e) goto switchD_14153567b_caseD_11;
    uVar13 = FUN_1415430e0(param_1);
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_118);
    if ((local_114 < 0) || (uVar14 = FUN_1415380c0(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_118);
    break;
  case 0x16:
    if (cVar6 != -0x46) goto switchD_14153567b_caseD_11;
    puVar19 = *(undefined **)(param_1 + 0x370);
    if (puVar19 == &DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x370,&DAT_146ba2f50);
      puVar19 = *(undefined **)(param_1 + 0x370);
    }
    uVar14 = thunk_FUN_1439fa490(param_2,puVar19);
    if ((char)uVar14 == '\0') goto LAB_141537237;
    plVar18 = *(longlong **)(param_1 + 0x370);
    puVar2 = (ulonglong *)(plVar18 + 2);
    if (0xf < (ulonglong)plVar18[3]) {
      plVar18 = (longlong *)*plVar18;
    }
    uVar14 = FUN_1439fa7f0(plVar18,*puVar2 & 0xffffffff,0,
                           "OakSave.Character.last_active_travel_station");
    break;
  case 0x17:
    if (cVar6 != -0x3e) goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0xf8);
    if (piVar17 == (int *)0x0) {
LAB_141535f5a:
      FUN_1439f23d0((undefined8 *)(param_1 + 0xe8),*(int *)(param_1 + 0xf4) + 1);
      piVar17 = *(int **)(param_1 + 0xf8);
      iVar8 = *piVar17;
LAB_141535f6d:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_141519a10(*(undefined8 *)(param_1 + 0xe8));
      *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 8 + (longlong)*(int *)(param_1 + 0xf0) * 8) =
           uVar13;
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xf0);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 0xf4)) goto LAB_141535f5a;
        goto LAB_141535f6d;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0xf0) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_110);
    if ((local_10c < 0) || (uVar14 = FUN_14153c840(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_110);
    break;
  case 0x18:
    if (cVar6 != -0x36) goto switchD_14153567b_caseD_11;
    uVar13 = FUN_1439f1a80(param_1 + 0x100);
    uVar14 = thunk_FUN_1439fa490(param_2,uVar13);
    if ((char)uVar14 == '\0') goto LAB_141537237;
    iVar9 = IStreamingManager::GetNumWantingResources(param_1 + 0x100);
    lVar12 = FUN_1439f1d30(param_1 + 0x100,iVar9 + -1);
    uVar14 = *(ulonglong *)(lVar12 + 0x10);
    iVar9 = IStreamingManager::GetNumWantingResources(param_1 + 0x100);
    puVar11 = (undefined8 *)FUN_1439f1d30(param_1 + 0x100,iVar9 + -1);
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    uVar14 = FUN_1439fa7f0(puVar11,uVar14 & 0xffffffff,0,"OakSave.Character.vehicle_parts_unlocked")
    ;
    break;
  case 0x19:
    if (cVar6 != -0x2e) goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x128);
    if (piVar17 == (int *)0x0) {
LAB_1415360b5:
      FUN_1439f23d0((undefined8 *)(param_1 + 0x118),*(int *)(param_1 + 0x124) + 1);
      piVar17 = *(int **)(param_1 + 0x128);
      iVar8 = *piVar17;
LAB_1415360c8:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_141519210(*(undefined8 *)(param_1 + 0x118));
      *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 8 + (longlong)*(int *)(param_1 + 0x120) * 8)
           = uVar13;
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x120);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 0x124)) goto LAB_1415360b5;
        goto LAB_1415360c8;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0x120) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_108);
    if ((local_104 < 0) || (uVar14 = FUN_14153a690(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_108);
    break;
  case 0x1a:
    if (cVar6 != -0x28) goto switchD_14153567b_caseD_11;
    uVar14 = FUN_1414ff090(param_2,param_1 + 0x40c);
    break;
  case 0x1b:
    if (cVar6 != -0x1e) goto switchD_14153567b_caseD_11;
    uVar13 = FUN_140d26920(param_1 + 0x130);
    uVar14 = FUN_14151c270(param_2,uVar13);
    break;
  case 0x1c:
    if (cVar6 != -0x16) goto switchD_14153567b_caseD_11;
    uVar13 = FUN_140d26ca0(param_1 + 0x148);
    uVar14 = FUN_14151c730(param_2,uVar13);
    break;
  case 0x1d:
    if (cVar6 != -0xe) goto switchD_14153567b_caseD_11;
    uVar13 = FUN_1439f1a80(param_1 + 0x160);
    uVar14 = thunk_FUN_1439fa490(param_2,uVar13);
    if ((char)uVar14 == '\0') goto LAB_141537237;
    iVar9 = IStreamingManager::GetNumWantingResources(param_1 + 0x160);
    lVar12 = FUN_1439f1d30(param_1 + 0x160,iVar9 + -1);
    uVar14 = *(ulonglong *)(lVar12 + 0x10);
    iVar9 = IStreamingManager::GetNumWantingResources(param_1 + 0x160);
    puVar11 = (undefined8 *)FUN_1439f1d30(param_1 + 0x160,iVar9 + -1);
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    uVar14 = FUN_1439fa7f0(puVar11,uVar14 & 0xffffffff,0,"OakSave.Character.selected_customizations"
                          );
    break;
  case 0x1e:
    if (cVar6 == -6) {
      uVar14 = FUN_1414fefc0(param_2,param_1 + 0x178);
    }
    else {
      if (cVar6 != -8) goto switchD_14153567b_caseD_11;
      uVar14 = FUN_1414ff360(2,0xfa,param_2,param_1 + 0x178);
    }
    break;
  case 0x1f:
    if (cVar6 != '\x02') goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x1a0);
    if (piVar17 == (int *)0x0) {
LAB_1415362bc:
      FUN_1439f23d0((undefined8 *)(param_1 + 400),*(int *)(param_1 + 0x19c) + 1);
      piVar17 = *(int **)(param_1 + 0x1a0);
      iVar8 = *piVar17;
LAB_1415362cf:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_1415182f0(*(undefined8 *)(param_1 + 400));
      *(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 8 + (longlong)*(int *)(param_1 + 0x198) * 8)
           = uVar13;
      *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x198);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 0x19c)) goto LAB_1415362bc;
        goto LAB_1415362cf;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0x198) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_100);
    if ((local_fc < 0) || (uVar14 = FUN_1415379c0(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_100);
    break;
  case 0x20:
    if (cVar6 != '\n') goto switchD_14153567b_caseD_11;
    uVar13 = FUN_141543110(param_1);
    uVar14 = FUN_14151c390(param_2,uVar13);
    break;
  case 0x21:
    if (cVar6 != '\x12') goto switchD_14153567b_caseD_11;
    uVar13 = FUN_140d5a550(param_1);
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_f8);
    if ((local_f4 < 0) || (uVar14 = FUN_141537790(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_f8);
    break;
  case 0x22:
    if (cVar6 != '\x1a') goto switchD_14153567b_caseD_11;
    uVar13 = FUN_140d5a520(param_1);
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_f0);
    if ((local_ec < 0) || (uVar14 = FUN_141537620(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_f0);
    break;
  case 0x23:
    if (cVar6 != '\"') goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x1b8);
    if (piVar17 == (int *)0x0) {
LAB_1415364ab:
      FUN_1439f23d0((undefined8 *)(param_1 + 0x1a8),*(int *)(param_1 + 0x1b4) + 1);
      piVar17 = *(int **)(param_1 + 0x1b8);
      iVar8 = *piVar17;
LAB_1415364be:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_141518680(*(undefined8 *)(param_1 + 0x1a8));
      *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 8 + (longlong)*(int *)(param_1 + 0x1b0) * 8)
           = uVar13;
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x1b0);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 0x1b4)) goto LAB_1415364ab;
        goto LAB_1415364be;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0x1b0) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_e8);
    if ((local_e4 < 0) || (uVar14 = FUN_141538230(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_e8);
    break;
  case 0x24:
    if (cVar6 != '(') goto switchD_14153567b_caseD_11;
    uVar14 = FUN_1414ff1c0(param_2,param_1 + 0x411);
    break;
  case 0x25:
    if (cVar6 != '2') goto switchD_14153567b_caseD_11;
    local_78 = (longlong *)(param_1 + 0x1c0);
    local_70 = (**(code **)(*local_78 + 0x98))();
    pbVar5 = (byte *)*param_2;
    local_58 = (longlong *)0x0;
    local_50 = 0xf;
    local_68 = 0;
    local_40 = (longlong *)0x0;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
LAB_1415365d4:
      uVar14 = FUN_1439f8500(param_2,&local_e0);
      if (((local_dc < 0) || (uVar14 = FUN_141535120(&local_78,param_2), (char)uVar14 == '\0')) ||
         (uVar14 = FUN_1439f84b0(param_2,local_e0), (char)uVar14 == '\0')) goto LAB_1415371b3;
      puVar16 = &local_68;
      if (0xf < local_50) {
        puVar16 = (undefined1 *)CONCAT71(uStack_67,local_68);
      }
      uVar14 = FUN_1439fa7f0(puVar16,(ulonglong)local_58 & 0xffffffff,0,
                             "OakSave.Character.NicknameMappingsEntry.key");
      if ((char)uVar14 != '\0') {
        puVar11 = local_48;
        if (0xf < (ulonglong)local_48[3]) {
          puVar11 = (undefined8 *)*local_48;
        }
        uVar14 = FUN_1439fa7f0(puVar11,local_48[2] & 0xffffffff,0,
                               "OakSave.Character.NicknameMappingsEntry.value");
        if ((char)uVar14 != '\0') {
          if (((local_40 != (longlong *)0x0) &&
              (lVar12 = (**(code **)(*local_40 + 0x20))(), lVar12 == 0)) &&
             (local_40 != (longlong *)0x0)) {
            (**(code **)*local_40)(local_40,1);
          }
          if (0xf < local_50) {
            lVar15 = CONCAT71(uStack_67,local_68);
            uVar14 = local_50 + 1;
            lVar12 = lVar15;
            if (0xfff < uVar14) {
              lVar12 = *(longlong *)(lVar15 + -8);
              uVar14 = local_50 + 0x28;
              if (0x1f < (lVar15 - lVar12) - 8U) goto LAB_14153720c;
            }
            FMemory::operator_delete(lVar12,uVar14);
          }
          goto LAB_141535600;
        }
      }
      if (((local_40 != (longlong *)0x0) &&
          (uVar14 = (**(code **)(*local_40 + 0x20))(), uVar14 == 0)) &&
         (local_40 != (longlong *)0x0)) {
        uVar14 = (**(code **)*local_40)(local_40,1);
      }
      if (local_50 < 0x10) goto LAB_141537237;
      lVar12 = CONCAT71(uStack_67,local_68);
      uVar14 = local_50 + 1;
      if (uVar14 < 0x1000) goto LAB_1415371a7;
      lVar15 = lVar12 - *(longlong *)(lVar12 + -8);
      lVar12 = *(longlong *)(lVar12 + -8);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if (-1 < (int)uVar14) goto LAB_1415365d4;
LAB_1415371b3:
      if (((local_40 != (longlong *)0x0) &&
          (uVar14 = (**(code **)(*local_40 + 0x20))(), uVar14 == 0)) &&
         (local_40 != (longlong *)0x0)) {
        uVar14 = (**(code **)*local_40)(local_40,1);
      }
      if (local_50 < 0x10) goto LAB_141537237;
      lVar12 = CONCAT71(uStack_67,local_68);
      uVar14 = local_50 + 1;
      if (uVar14 < 0x1000) goto LAB_1415371a7;
      lVar15 = lVar12 - *(longlong *)(lVar12 + -8);
      lVar12 = *(longlong *)(lVar12 + -8);
    }
    uVar14 = local_50 + 0x28;
    if (0x1f < lVar15 - 8U) {
LAB_14153720c:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
LAB_1415371a7:
    uVar14 = FMemory::operator_delete(lVar12,uVar14);
    return uVar14 & 0xffffffffffffff00;
  case 0x26:
    if (cVar6 != ':') goto switchD_14153567b_caseD_11;
    uVar13 = FUN_141543140(param_1);
    uVar14 = FUN_14151c5b0(param_2,uVar13);
    break;
  case 0x27:
    if (cVar6 == 'B') {
      lVar12 = FUN_140d5a4c0(param_1);
      pbVar5 = (byte *)*param_2;
      if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
        *param_2 = (ulonglong)(pbVar5 + 1);
      }
      else {
        uVar14 = FUN_1439f98b0(param_2);
        if ((int)uVar14 < 0) goto LAB_141537237;
      }
      uVar14 = FUN_1439f8500(param_2,&local_d8);
      if (-1 < local_d4) {
        do {
          pbVar5 = (byte *)*param_2;
          uVar14 = 0;
          if ((pbVar5 < (byte *)param_2[1]) && (uVar14 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5))
          {
            *param_2 = (ulonglong)(pbVar5 + 1);
LAB_14153677e:
            if (((int)(uVar14 >> 3) != 1) || ((char)uVar14 != '\n')) goto LAB_1415367b8;
            puVar19 = *(undefined **)(lVar12 + 0x10);
            if (puVar19 == &DAT_146ba2f50) {
              FUN_140d2a6b0(lVar12 + 0x10,&DAT_146ba2f50);
              puVar19 = *(undefined **)(lVar12 + 0x10);
            }
            uVar14 = thunk_FUN_1439fa490(param_2,puVar19);
            cVar6 = (char)uVar14;
          }
          else {
            uVar7 = FUN_1439f8c60(param_2,uVar14);
            uVar14 = (ulonglong)uVar7;
            if (uVar7 - 1 < 0x7f) goto LAB_14153677e;
LAB_1415367b8:
            if ((int)uVar14 == 0) goto LAB_1415367ee;
            if ((*(byte *)(lVar12 + 8) & 1) == 0) {
              FUN_141515d60();
            }
            uVar14 = FUN_143a1e1e0(param_2,uVar14);
            cVar6 = (char)uVar14;
          }
          if (cVar6 == '\0') {
            return uVar14;
          }
        } while( true );
      }
      goto LAB_141537237;
    }
    goto switchD_14153567b_caseD_11;
  case 0x28:
    if (cVar6 != 'J') goto switchD_14153567b_caseD_11;
    uVar13 = FUN_140d5a4f0(param_1);
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_d0);
    if ((local_cc < 0) || (uVar14 = FUN_14153b370(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_d0);
    break;
  case 0x29:
    if (cVar6 != 'R') goto switchD_14153567b_caseD_11;
    uVar13 = FUN_140d5a6e0(param_1);
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_c8);
    if ((local_c4 < 0) || (uVar14 = FUN_14153c630(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_c8);
    break;
  case 0x2a:
    if (cVar6 != 'Z') goto switchD_14153567b_caseD_11;
    puVar19 = *(undefined **)(param_1 + 0x378);
    if (puVar19 == &DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x378,&DAT_146ba2f50);
      puVar19 = *(undefined **)(param_1 + 0x378);
    }
    uVar14 = thunk_FUN_1439fa490(param_2,puVar19);
    if ((char)uVar14 == '\0') goto LAB_141537237;
    plVar18 = *(longlong **)(param_1 + 0x378);
    puVar2 = (ulonglong *)(plVar18 + 2);
    if (0xf < (ulonglong)plVar18[3]) {
      plVar18 = (longlong *)*plVar18;
    }
    uVar14 = FUN_1439fa7f0(plVar18,*puVar2 & 0xffffffff,0,
                           "OakSave.Character.preferred_character_name");
    break;
  case 0x2b:
    if (cVar6 != '`') goto switchD_14153567b_caseD_11;
    uVar14 = FUN_1414ff090(param_2,param_1 + 0x414);
    break;
  case 0x2c:
    if (cVar6 == 'h') {
      lVar12 = param_1 + 0x418;
      goto LAB_14153568e;
    }
    goto switchD_14153567b_caseD_11;
  case 0x2d:
    if (cVar6 != 'r') goto switchD_14153567b_caseD_11;
    uVar13 = FUN_140d5a6b0(param_1);
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_c0);
    if ((local_bc < 0) || (uVar14 = FUN_14153c460(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_c0);
    break;
  case 0x2e:
    if (cVar6 != 'z') goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x260);
    if (piVar17 == (int *)0x0) {
LAB_141536a43:
      FUN_1439f23d0((undefined8 *)(param_1 + 0x250),*(int *)(param_1 + 0x25c) + 1);
      piVar17 = *(int **)(param_1 + 0x260);
      iVar8 = *piVar17;
LAB_141536a56:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_141518d40(*(undefined8 *)(param_1 + 0x250));
      *(undefined8 *)(*(longlong *)(param_1 + 0x260) + 8 + (longlong)*(int *)(param_1 + 600) * 8) =
           uVar13;
      *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 600);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 0x25c)) goto LAB_141536a43;
        goto LAB_141536a56;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 600) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_b8);
    if ((local_b4 < 0) || (uVar14 = FUN_141539780(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_b8);
    break;
  case 0x2f:
    if (cVar6 == -0x80) {
      lVar12 = param_1 + 0x41c;
      goto LAB_14153568e;
    }
    goto switchD_14153567b_caseD_11;
  case 0x30:
    if (cVar6 == -0x78) {
      lVar12 = param_1 + 0x420;
      goto LAB_14153568e;
    }
    goto switchD_14153567b_caseD_11;
  case 0x31:
    if (cVar6 != -0x6e) goto switchD_14153567b_caseD_11;
    uVar13 = FUN_140d5a580(param_1);
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_b0);
    if ((local_ac < 0) || (uVar14 = FUN_141538720(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_b0);
    break;
  case 0x32:
    if (cVar6 != -0x66) goto switchD_14153567b_caseD_11;
    uVar13 = FUN_141520180(param_1 + 0x268);
    uVar14 = FUN_14151c1e0(param_2,uVar13);
    break;
  case 0x33:
    if (cVar6 != -0x5e) goto switchD_14153567b_caseD_11;
    uVar13 = FUN_1439f1a80(param_1 + 0x280);
    uVar14 = thunk_FUN_1439fa490(param_2,uVar13);
    if ((char)uVar14 == '\0') goto LAB_141537237;
    iVar9 = IStreamingManager::GetNumWantingResources(param_1 + 0x280);
    lVar12 = FUN_1439f1d30(param_1 + 0x280,iVar9 + -1);
    uVar14 = *(ulonglong *)(lVar12 + 0x10);
    iVar9 = IStreamingManager::GetNumWantingResources(param_1 + 0x280);
    puVar11 = (undefined8 *)FUN_1439f1d30(param_1 + 0x280,iVar9 + -1);
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    uVar14 = FUN_1439fa7f0(puVar11,uVar14 & 0xffffffff,0,
                           "OakSave.Character.last_active_travel_station_for_playthrough");
    break;
  case 0x34:
    if (cVar6 != -0x56) goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x2a8);
    if (piVar17 == (int *)0x0) {
LAB_141536c69:
      FUN_1439f23d0((undefined8 *)(param_1 + 0x298),*(int *)(param_1 + 0x2a4) + 1);
      piVar17 = *(int **)(param_1 + 0x2a8);
      iVar8 = *piVar17;
LAB_141536c7c:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_1415187e0(*(undefined8 *)(param_1 + 0x298));
      *(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + 8 + (longlong)*(int *)(param_1 + 0x2a0) * 8)
           = uVar13;
      *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x2a0);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 0x2a4)) goto LAB_141536c69;
        goto LAB_141536c7c;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0x2a0) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_a8);
    if ((local_a4 < 0) || (uVar14 = FUN_1415385b0(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_a8);
    break;
  case 0x35:
    if (cVar6 != -0x4e) goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x2c0);
    if (piVar17 == (int *)0x0) {
LAB_141536d3b:
      FUN_1439f23d0((undefined8 *)(param_1 + 0x2b0),*(int *)(param_1 + 700) + 1);
      piVar17 = *(int **)(param_1 + 0x2c0);
      iVar8 = *piVar17;
LAB_141536d4e:
      *piVar17 = iVar8 + 1;
      uVar13 = FUN_141544270(*(undefined8 *)(param_1 + 0x2b0));
      *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 8 + (longlong)*(int *)(param_1 + 0x2b8) * 8)
           = uVar13;
      *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + 1;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x2b8);
      iVar8 = *piVar17;
      if (iVar8 <= iVar9) {
        if (iVar8 == *(int *)(param_1 + 700)) goto LAB_141536d3b;
        goto LAB_141536d4e;
      }
      uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
      *(int *)(param_1 + 0x2b8) = iVar9 + 1;
    }
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_a0);
    if ((local_9c < 0) || (uVar14 = FUN_14154c390(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_a0);
    break;
  case 0x36:
    if (cVar6 != -0x46) goto switchD_14153567b_caseD_11;
    piVar17 = *(int **)(param_1 + 0x2d8);
    if (piVar17 == (int *)0x0) {
LAB_141536e1b:
      FUN_1439f23d0((undefined8 *)(param_1 + 0x2c8),*(int *)(param_1 + 0x2d4) + 1);
      piVar17 = *(int **)(param_1 + 0x2d8);
      iVar8 = *piVar17;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x2d0);
      iVar8 = *piVar17;
      if (iVar9 < iVar8) {
        uVar13 = *(undefined8 *)(piVar17 + (longlong)iVar9 * 2 + 2);
        *(int *)(param_1 + 0x2d0) = iVar9 + 1;
        uVar14 = FUN_14151c7c0(param_2,uVar13);
        break;
      }
      if (iVar8 == *(int *)(param_1 + 0x2d4)) goto LAB_141536e1b;
    }
    *piVar17 = iVar8 + 1;
    uVar13 = FUN_1415196a0(*(undefined8 *)(param_1 + 0x2c8));
    *(undefined8 *)(*(longlong *)(param_1 + 0x2d8) + 8 + (longlong)*(int *)(param_1 + 0x2d0) * 8) =
         uVar13;
    *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + 1;
    uVar14 = FUN_14151c7c0(param_2,uVar13);
    break;
  case 0x37:
    if (cVar6 != -0x3e) goto switchD_14153567b_caseD_11;
    puVar19 = *(undefined **)(param_1 + 0x380);
    if (puVar19 == &DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x380,&DAT_146ba2f50);
      puVar19 = *(undefined **)(param_1 + 0x380);
    }
    uVar14 = thunk_FUN_1439fa490(param_2,puVar19);
    if ((char)uVar14 == '\0') goto LAB_141537237;
    plVar18 = *(longlong **)(param_1 + 0x380);
    puVar2 = (ulonglong *)(plVar18 + 2);
    if (0xf < (ulonglong)plVar18[3]) {
      plVar18 = (longlong *)*plVar18;
    }
    uVar14 = FUN_1439fa7f0(plVar18,*puVar2 & 0xffffffff,0,"OakSave.Character.save_game_guid");
    break;
  case 0x38:
    if (cVar6 != -0x36) goto switchD_14153567b_caseD_11;
    uVar13 = FUN_140d5a5b0(param_1);
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar14 = (ulonglong)*pbVar5, *pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_98,uVar14 & 0xffffffff);
    if ((local_94 < 0) || (uVar14 = FUN_141538b30(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_98);
    break;
  case 0x39:
    if (cVar6 != -0x30) goto switchD_14153567b_caseD_11;
    uVar14 = FUN_1414ff1c0(param_2,param_1 + 0x412);
    break;
  case 0x3a:
    if (cVar6 != -0x28) goto switchD_14153567b_caseD_11;
    uVar14 = FUN_1414ff1c0(param_2,param_1 + 0x413);
    break;
  case 0x3b:
    if (cVar6 == -0x20) {
      lVar12 = param_1 + 0x424;
      goto LAB_14153568e;
    }
    goto switchD_14153567b_caseD_11;
  case 0x3c:
    if (cVar6 == -0x18) {
      lVar12 = param_1 + 0x428;
      goto LAB_14153568e;
    }
    goto switchD_14153567b_caseD_11;
  case 0x3d:
    if (cVar6 == -0xe) {
      local_78 = (longlong *)(param_1 + 0x2e0);
      local_70 = (**(code **)(*local_78 + 0x98))();
      pbVar5 = (byte *)*param_2;
      local_58 = (longlong *)0x0;
      if ((pbVar5 < (byte *)param_2[1]) && (uVar10 = (ulonglong)*pbVar5, *pbVar5 < 0x80)) {
        *param_2 = (ulonglong)(pbVar5 + 1);
      }
      else {
        uVar14 = FUN_1439f98b0(param_2);
        uVar10 = uVar14 & 0xffffffff;
        if ((int)uVar14 < 0) goto LAB_141537237;
      }
      uVar14 = FUN_1439f8500(param_2,&local_90,uVar10);
      if (local_8c < 0) goto LAB_141537237;
      uVar14 = FUN_141534f70(&local_78,param_2);
      if (((char)uVar14 != '\0') &&
         (uVar14 = FUN_1439f84b0(param_2,local_90), plVar18 = local_58, (char)uVar14 != '\0')) {
        if ((local_58 != (longlong *)0x0) &&
           (lVar12 = (**(code **)(*local_58 + 0x20))(local_58), lVar12 == 0)) {
          (**(code **)*plVar18)(plVar18,1);
        }
        goto LAB_141535600;
      }
      plVar18 = local_58;
      if ((local_58 != (longlong *)0x0) &&
         (uVar14 = (**(code **)(*local_58 + 0x20))(local_58), uVar14 == 0)) {
        uVar14 = (**(code **)*plVar18)(plVar18,1);
      }
      goto LAB_141537237;
    }
switchD_14153567b_caseD_11:
    if ((int)uVar14 == 0) {
      return CONCAT71((int7)(uVar10 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      FUN_141515d60();
      uVar14 = FUN_143a1e1e0(param_2,uVar14);
    }
    else {
      uVar14 = FUN_143a1e1e0(param_2,uVar14);
    }
    break;
  case 0x3e:
    if (cVar6 != -8) goto switchD_14153567b_caseD_11;
    uVar14 = FUN_1414ff1c0(param_2,param_1 + 0x42c);
    break;
  case 0x3f:
    if (cVar6 != '\x02') goto switchD_14153567b_caseD_11;
    uVar13 = FUN_140d5a630(param_1);
    pbVar5 = (byte *)*param_2;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar14 = (ulonglong)*pbVar5, *pbVar5 < 0x80)) {
      *param_2 = (ulonglong)(pbVar5 + 1);
    }
    else {
      uVar14 = FUN_1439f98b0(param_2);
      if ((int)uVar14 < 0) goto LAB_141537237;
    }
    uVar14 = FUN_1439f8500(param_2,&local_88,uVar14 & 0xffffffff);
    if ((local_84 < 0) || (uVar14 = FUN_14153b4e0(uVar13,param_2), (char)uVar14 == '\0'))
    goto LAB_141537237;
    uVar14 = FUN_1439f84b0(param_2,local_88);
  }
LAB_141535696:
  cVar6 = (char)uVar14;
joined_r0x0001415356be:
  if (cVar6 == '\0') {
    return uVar14;
  }
  goto LAB_141535600;
LAB_1415367ee:
  uVar14 = FUN_1439f84b0(param_2,local_d8);
  goto LAB_141535696;
}



// FUNCTION 141537370 FUN_141537370 body=331 status=ok
// SIG undefined FUN_141537370(void)

ulonglong FUN_141537370(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined *puVar8;
  
LAB_141537391:
  do {
    pbVar3 = (byte *)*param_2;
    uVar4 = 0;
    if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3)) {
      pbVar3 = pbVar3 + 1;
      *param_2 = pbVar3;
LAB_1415373c2:
      iVar2 = (int)(uVar4 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar4 != '\b') goto LAB_14153746f;
        pbVar3 = (byte *)*param_2;
        uVar6 = 0;
        if ((pbVar3 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar3, uVar6 < 0x80)) {
          *param_2 = pbVar3 + 1;
          *(uint *)(param_1 + 0x18) = uVar6;
        }
        else {
          uVar4 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar4 < 0) goto LAB_1415374a0;
          *(int *)(param_1 + 0x18) = (int)uVar4;
        }
        goto LAB_141537391;
      }
      if ((iVar2 != 2) || ((char)uVar4 != '\x12')) goto LAB_14153746f;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar4 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar4 == '\0') goto LAB_1415374a0;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar4 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                            "OakSave.CrewQuartersDecorationSaveData.decoration_data_path");
    }
    else {
      uVar6 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar6;
      pbVar3 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x7f) goto LAB_1415373c2;
LAB_14153746f:
      if ((int)uVar4 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
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
LAB_1415374a0:
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 1415374c0 FUN_1415374c0 body=350 status=ok
// SIG undefined FUN_1415374c0(void)

ulonglong FUN_1415374c0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined *puVar8;
  char cVar9;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_141537512:
      iVar2 = (int)(uVar6 >> 3);
      cVar9 = (char)uVar6;
      if (iVar2 == 1) {
        if (cVar9 == '\n') {
          puVar8 = *(undefined **)(param_1 + 0x10);
          if (puVar8 == &DAT_146ba2f50) {
            FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
            puVar8 = *(undefined **)(param_1 + 0x10);
          }
          uVar6 = thunk_FUN_1439fa490(param_2,puVar8);
          goto LAB_1415375fb;
        }
        goto LAB_1415375d2;
      }
      if (iVar2 == 2) {
        if (cVar9 != '\x12') goto LAB_1415375d2;
        puVar8 = *(undefined **)(param_1 + 0x18);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x18);
        }
        uVar6 = thunk_FUN_1439fa490(param_2,puVar8);
        if ((char)uVar6 == '\0') break;
        plVar7 = *(longlong **)(param_1 + 0x18);
        puVar1 = (ulonglong *)(plVar7 + 2);
        if (0xf < (ulonglong)plVar7[3]) {
          plVar7 = (longlong *)*plVar7;
        }
        uVar6 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                              "OakSave.CrewQuartersGunRackItemSaveData.slot_asset_path");
      }
      else {
        if ((iVar2 != 3) || (cVar9 != '\x1a')) goto LAB_1415375d2;
        lVar5 = *(longlong *)(param_1 + 0x20);
        if (lVar5 == 0) {
          lVar5 = FUN_141518c30(0);
          *(longlong *)(param_1 + 0x20) = lVar5;
        }
        uVar6 = FUN_14151c520(param_2,lVar5);
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_141537512;
LAB_1415375d2:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6);
    }
LAB_1415375fb:
  } while ((char)uVar6 != '\0');
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 141537620 FUN_141537620 body=365 status=ok
// SIG undefined FUN_141537620(void)

ulonglong FUN_141537620(longlong param_1,undefined8 *param_2)

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
LAB_141537672:
      if (((int)(uVar6 >> 3) != 1) || ((char)uVar6 != '\n')) goto LAB_141537741;
      piVar8 = *(int **)(param_1 + 0x20);
      if (piVar8 == (int *)0x0) {
LAB_1415376af:
        FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
        piVar8 = *(int **)(param_1 + 0x20);
        iVar3 = *piVar8;
LAB_1415376c3:
        *piVar8 = iVar3 + 1;
        uVar5 = FUN_1415180c0(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8)
             = uVar5;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x18);
        iVar3 = *piVar8;
        if (iVar3 <= iVar1) {
          if (iVar3 == *(int *)(param_1 + 0x1c)) goto LAB_1415376af;
          goto LAB_1415376c3;
        }
        uVar5 = *(undefined8 *)(piVar8 + (longlong)iVar1 * 2 + 2);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
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
      if ((local_res14 < 0) || (uVar6 = FUN_1415374c0(uVar5,param_2), (char)uVar6 == '\0')) break;
      uVar6 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar2;
      pbVar4 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_141537672;
LAB_141537741:
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



// FUNCTION 141537790 FUN_141537790 body=548 status=ok
// SIG undefined FUN_141537790(void)

ulonglong FUN_141537790(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  int *piVar10;
  undefined *puVar11;
  char cVar12;
  undefined4 local_res10;
  int local_res14;
  
LAB_1415377b0:
  do {
    pbVar4 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_1415377e2:
      iVar2 = (int)(uVar5 >> 3);
      cVar12 = (char)uVar5;
      if (iVar2 == 1) {
        if (cVar12 != '\b') goto LAB_14153796a;
        pbVar4 = (byte *)*param_2;
        uVar8 = 0;
        if ((pbVar4 < (byte *)param_2[1]) && (uVar8 = (uint)*pbVar4, uVar8 < 0x80)) {
          *param_2 = pbVar4 + 1;
          *(uint *)(param_1 + 0x30) = uVar8;
        }
        else {
          uVar5 = FUN_1439f8e20(param_2,uVar8);
          if ((longlong)uVar5 < 0) goto LAB_14153799b;
          *(int *)(param_1 + 0x30) = (int)uVar5;
        }
        goto LAB_1415377b0;
      }
      if (iVar2 == 2) {
        if (cVar12 != '\x12') goto LAB_14153796a;
        piVar10 = *(int **)(param_1 + 0x20);
        if (piVar10 == (int *)0x0) {
LAB_141537888:
          FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
          piVar10 = *(int **)(param_1 + 0x20);
          iVar3 = *piVar10;
LAB_14153789c:
          *piVar10 = iVar3 + 1;
          uVar6 = FUN_141518010(*(undefined8 *)(param_1 + 0x10));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) = uVar6;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar3 = *piVar10;
          if (iVar3 <= iVar2) {
            if (iVar3 == *(int *)(param_1 + 0x1c)) goto LAB_141537888;
            goto LAB_14153789c;
          }
          uVar6 = *(undefined8 *)(piVar10 + (longlong)iVar2 * 2 + 2);
          *(int *)(param_1 + 0x18) = iVar2 + 1;
        }
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
          *param_2 = pbVar4 + 1;
        }
        else {
          uVar5 = FUN_1439f98b0(param_2);
          uVar7 = uVar5 & 0xffffffff;
          if ((int)uVar5 < 0) goto LAB_14153799b;
        }
        uVar5 = FUN_1439f8500(param_2,&local_res10,uVar7);
        if ((local_res14 < 0) || (uVar5 = FUN_141537370(uVar6,param_2), (char)uVar5 == '\0'))
        goto LAB_14153799b;
        uVar5 = FUN_1439f84b0(param_2,local_res10);
      }
      else {
        if ((iVar2 != 3) || (cVar12 != '\x1a')) goto LAB_14153796a;
        puVar11 = *(undefined **)(param_1 + 0x28);
        if (puVar11 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x28,&DAT_146ba2f50);
          puVar11 = *(undefined **)(param_1 + 0x28);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar11);
        if ((char)uVar5 == '\0') goto LAB_14153799b;
        plVar9 = *(longlong **)(param_1 + 0x28);
        puVar1 = (ulonglong *)(plVar9 + 2);
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        uVar5 = FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,0,
                              "OakSave.CrewQuartersSaveData.room_data_path");
      }
    }
    else {
      uVar8 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar8;
      pbVar4 = (byte *)(ulonglong)(uVar8 - 1);
      if (uVar8 - 1 < 0x7f) goto LAB_1415377e2;
LAB_14153796a:
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
LAB_14153799b:
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 1415379c0 FUN_1415379c0 body=550 status=ok
// SIG undefined FUN_1415379c0(void)

ulonglong FUN_1415379c0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined *puVar9;
  char cVar10;
  longlong local_28;
  char local_20;
  longlong local_18;
  char local_10;
  
LAB_1415379e1:
  pbVar5 = (byte *)*param_2;
  uVar6 = 0;
  if ((pbVar5 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
    pbVar5 = pbVar5 + 1;
    *param_2 = pbVar5;
LAB_141537a12:
    iVar3 = (int)(uVar6 >> 3);
    cVar10 = (char)uVar6;
    if (iVar3 == 1) {
      if (cVar10 != '\n') goto LAB_141537b9a;
      puVar9 = *(undefined **)(param_1 + 0x10);
      if (puVar9 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar9 = *(undefined **)(param_1 + 0x10);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar9);
      if ((char)uVar6 == '\0') goto LAB_141537bcb;
      plVar8 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (0xf < (ulonglong)plVar8[3]) {
        plVar8 = (longlong *)*plVar8;
      }
      uVar6 = FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,0,
                            "OakSave.CustomPlayerColorSaveGameData.color_parameter");
      goto LAB_141537bc3;
    }
    if (iVar3 == 2) {
      if (cVar10 == '\x12') {
        lVar7 = *(longlong *)(param_1 + 0x18);
        if (lVar7 == 0) {
          lVar7 = FUN_141544530(0);
          *(longlong *)(param_1 + 0x18) = lVar7;
        }
        uVar6 = FUN_14151c940(param_2,lVar7);
        goto LAB_141537bc3;
      }
    }
    else if (iVar3 == 3) {
      if (cVar10 == '\x1a') {
        lVar7 = *(longlong *)(param_1 + 0x20);
        if (lVar7 == 0) {
          lVar7 = FUN_141544530(0);
          *(longlong *)(param_1 + 0x20) = lVar7;
        }
        uVar6 = FUN_14151c940(param_2,lVar7);
        goto LAB_141537bc3;
      }
    }
    else {
      if (iVar3 != 4) {
        if ((iVar3 != 5) || (cVar10 != '(')) goto LAB_141537b9a;
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (bVar2 = *pbVar5, bVar2 < 0x80)) {
          *param_2 = pbVar5 + 1;
          *(bool *)(param_1 + 0x29) = bVar2 != 0;
        }
        else {
          uVar6 = FUN_1439f8f00(param_2,&local_28);
          if (local_20 == '\0') goto LAB_141537bcb;
          *(bool *)(param_1 + 0x29) = local_28 != 0;
        }
        goto LAB_1415379e1;
      }
      if (cVar10 == ' ') {
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (bVar2 = *pbVar5, bVar2 < 0x80)) {
          *param_2 = pbVar5 + 1;
          *(bool *)(param_1 + 0x28) = bVar2 != 0;
        }
        else {
          uVar6 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_141537bcb;
          *(bool *)(param_1 + 0x28) = local_18 != 0;
        }
        goto LAB_1415379e1;
      }
    }
  }
  else {
    uVar4 = FUN_1439f8c60(param_2,uVar6);
    uVar6 = (ulonglong)uVar4;
    pbVar5 = (byte *)(ulonglong)(uVar4 - 1);
    if (uVar4 - 1 < 0x7f) goto LAB_141537a12;
  }
LAB_141537b9a:
  if ((int)uVar6 == 0) {
    return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_141515d60();
  }
  uVar6 = FUN_143a1e1e0(param_2,uVar6);
LAB_141537bc3:
  if ((char)uVar6 == '\0') {
LAB_141537bcb:
    return uVar6 & 0xffffffffffffff00;
  }
  goto LAB_1415379e1;
}



// FUNCTION 141537bf0 FUN_141537bf0 body=318 status=ok
// SIG undefined FUN_141537bf0(void)

ulonglong FUN_141537bf0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  undefined *puVar8;
  
LAB_141537c11:
  do {
    while( true ) {
      pbVar4 = (byte *)*param_2;
      uVar5 = 0;
      if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4))
      break;
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_141537c42;
LAB_141537ce2:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
LAB_141537d0b:
      if ((char)uVar5 == '\0') {
LAB_141537d13:
        return uVar5 & 0xffffffffffffff00;
      }
    }
    pbVar4 = pbVar4 + 1;
    *param_2 = (longlong)pbVar4;
LAB_141537c42:
    iVar2 = (int)(uVar5 >> 3);
    if (iVar2 == 1) {
      if ((char)uVar5 != '\n') goto LAB_141537ce2;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar5 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar5 == '\0') goto LAB_141537d13;
      plVar6 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar6 + 2);
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                            "OakSave.DiscoveredAreaInfo.discovered_area_name");
      goto LAB_141537d0b;
    }
    if ((iVar2 != 2) || ((char)uVar5 != '\x10')) goto LAB_141537ce2;
    bVar7 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar7 = *(byte *)*param_2;
      if (bVar7 < 0x80) {
        *(uint *)(param_1 + 0x18) = (uint)bVar7;
        *param_2 = *param_2 + 1;
        goto LAB_141537c11;
      }
    }
    uVar5 = FUN_1439f8e20(param_2,bVar7);
    *(int *)(param_1 + 0x18) = (int)uVar5;
    if ((longlong)uVar5 < 0) {
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 141537d30 FUN_141537d30 body=546 status=ok
// SIG undefined FUN_141537d30(void)

ulonglong FUN_141537d30(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong *plVar9;
  byte bVar10;
  undefined *puVar11;
  char cVar12;
  undefined1 local_res10 [4];
  int local_res14;
  
LAB_141537d50:
  do {
    while( true ) {
      pbVar5 = (byte *)*param_2;
      uVar7 = 0;
      if ((pbVar5 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5))
      break;
      uVar3 = FUN_1439f8c60(param_2,uVar7);
      uVar7 = (ulonglong)uVar3;
      pbVar5 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_141537d82;
LAB_141537f08:
      if (uVar3 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar7 = FUN_143a1e1e0(param_2);
LAB_141537f31:
      if ((char)uVar7 == '\0') {
LAB_141537f39:
        return uVar7 & 0xffffffffffffff00;
      }
    }
    pbVar5 = pbVar5 + 1;
    *param_2 = (longlong)pbVar5;
LAB_141537d82:
    uVar3 = (uint)uVar7;
    iVar2 = (int)(uVar7 >> 3);
    cVar12 = (char)uVar7;
    if (iVar2 == 1) {
      if (cVar12 != '\n') goto LAB_141537f08;
      puVar11 = *(undefined **)(param_1 + 0x28);
      if (puVar11 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x28,&DAT_146ba2f50);
        puVar11 = *(undefined **)(param_1 + 0x28);
      }
      uVar7 = thunk_FUN_1439fa490(param_2,puVar11);
      if ((char)uVar7 == '\0') goto LAB_141537f39;
      plVar9 = *(longlong **)(param_1 + 0x28);
      puVar1 = (ulonglong *)(plVar9 + 2);
      if (0xf < (ulonglong)plVar9[3]) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar7 = FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,0,
                            "OakSave.DiscoveredLevelInfo.discovered_level_name");
      goto LAB_141537f31;
    }
    if (iVar2 != 3) {
      if ((iVar2 != 4) || (cVar12 != '\"')) goto LAB_141537f08;
      piVar8 = *(int **)(param_1 + 0x20);
      if (piVar8 == (int *)0x0) {
LAB_141537dd1:
        FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
        piVar8 = *(int **)(param_1 + 0x20);
        iVar4 = *piVar8;
LAB_141537de5:
        *piVar8 = iVar4 + 1;
        uVar6 = FUN_1415183a0(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8)
             = uVar6;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x18);
        iVar4 = *piVar8;
        if (iVar4 <= iVar2) {
          if (iVar4 == *(int *)(param_1 + 0x1c)) goto LAB_141537dd1;
          goto LAB_141537de5;
        }
        uVar6 = *(undefined8 *)(piVar8 + (longlong)iVar2 * 2 + 2);
        *(int *)(param_1 + 0x18) = iVar2 + 1;
      }
      pbVar5 = (byte *)*param_2;
      if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
        *param_2 = (longlong)(pbVar5 + 1);
      }
      else {
        uVar7 = FUN_1439f98b0(param_2);
        if ((int)uVar7 < 0) goto LAB_141537f39;
      }
      uVar7 = FUN_1439f8500(param_2,local_res10);
      if ((local_res14 < 0) || (uVar7 = FUN_141537bf0(uVar6,param_2), (char)uVar7 == '\0'))
      goto LAB_141537f39;
      uVar7 = FUN_1439f84b0(param_2);
      goto LAB_141537f31;
    }
    if (cVar12 != '\x18') goto LAB_141537f08;
    bVar10 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar10 = *(byte *)*param_2;
      if (bVar10 < 0x80) {
        *(uint *)(param_1 + 0x30) = (uint)bVar10;
        *param_2 = *param_2 + 1;
        goto LAB_141537d50;
      }
    }
    uVar7 = FUN_1439f8e20(param_2,bVar10);
    *(int *)(param_1 + 0x30) = (int)uVar7;
    if ((longlong)uVar7 < 0) {
      return uVar7 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 141537f60 FUN_141537f60 body=345 status=ok
// SIG undefined FUN_141537f60(void)

ulonglong FUN_141537f60(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined *puVar8;
  longlong local_18;
  char local_10;
  
LAB_141537f81:
  do {
    pbVar5 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_141537fb2:
      iVar3 = (int)(uVar6 >> 3);
      if (iVar3 != 1) {
        if ((iVar3 != 2) || ((char)uVar6 != '\x10')) goto LAB_14153806d;
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (bVar2 = *pbVar5, bVar2 < 0x80)) {
          *param_2 = pbVar5 + 1;
          *(bool *)(param_1 + 0x18) = bVar2 != 0;
        }
        else {
          uVar6 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_14153809e;
          *(bool *)(param_1 + 0x18) = local_18 != 0;
        }
        goto LAB_141537f81;
      }
      if ((char)uVar6 != '\n') goto LAB_14153806d;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar6 == '\0') goto LAB_14153809e;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar6 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                            "OakSave.DiscoveredPlanetInfo.discovered_planet");
    }
    else {
      uVar4 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar4;
      pbVar5 = (byte *)(ulonglong)(uVar4 - 1);
      if (uVar4 - 1 < 0x7f) goto LAB_141537fb2;
LAB_14153806d:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6);
    }
    if ((char)uVar6 == '\0') {
LAB_14153809e:
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 1415380c0 FUN_1415380c0 body=365 status=ok
// SIG undefined FUN_1415380c0(void)

ulonglong FUN_1415380c0(longlong param_1,undefined8 *param_2)

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
LAB_141538112:
      if (((int)(uVar6 >> 3) != 1) || ((char)uVar6 != '\n')) goto LAB_1415381e1;
      piVar8 = *(int **)(param_1 + 0x20);
      if (piVar8 == (int *)0x0) {
LAB_14153814f:
        FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
        piVar8 = *(int **)(param_1 + 0x20);
        iVar3 = *piVar8;
LAB_141538163:
        *piVar8 = iVar3 + 1;
        uVar5 = FUN_141518450(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8)
             = uVar5;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x18);
        iVar3 = *piVar8;
        if (iVar3 <= iVar1) {
          if (iVar3 == *(int *)(param_1 + 0x1c)) goto LAB_14153814f;
          goto LAB_141538163;
        }
        uVar5 = *(undefined8 *)(piVar8 + (longlong)iVar1 * 2 + 2);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
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
      if ((local_res14 < 0) || (uVar6 = FUN_141537d30(uVar5,param_2), (char)uVar6 == '\0')) break;
      uVar6 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar2;
      pbVar4 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_141538112;
LAB_1415381e1:
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



// FUNCTION 141538230 FUN_141538230 body=348 status=ok
// SIG undefined FUN_141538230(void)

ulonglong FUN_141538230(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined *puVar9;
  longlong local_18;
  char local_10;
  
LAB_141538251:
  do {
    pbVar5 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_141538282:
      iVar3 = (int)(uVar6 >> 3);
      if (iVar3 == 1) {
        if ((char)uVar6 != '\b') goto LAB_141538340;
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (bVar2 = *pbVar5, bVar2 < 0x80)) {
          *param_2 = pbVar5 + 1;
          *(bool *)(param_1 + 0x18) = bVar2 != 0;
        }
        else {
          uVar6 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_141538371;
          *(bool *)(param_1 + 0x18) = local_18 != 0;
        }
        goto LAB_141538251;
      }
      if ((iVar3 != 2) || ((char)uVar6 != '\x12')) goto LAB_141538340;
      puVar9 = *(undefined **)(param_1 + 0x10);
      if (puVar9 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar9 = *(undefined **)(param_1 + 0x10);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar9);
      if ((char)uVar6 == '\0') goto LAB_141538371;
      plVar8 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (0xf < (ulonglong)plVar8[3]) {
        plVar8 = (longlong *)*plVar8;
      }
      uVar6 = FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,0,
                            "OakSave.EchoLogSaveGameData.echo_log_path");
    }
    else {
      uVar4 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar4;
      pbVar5 = (byte *)(ulonglong)(uVar4 - 1);
      if (uVar4 - 1 < 0x7f) goto LAB_141538282;
LAB_141538340:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar7);
    }
    if ((char)uVar6 == '\0') {
LAB_141538371:
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 141538390 FUN_141538390 body=534 status=ok
// SIG undefined FUN_141538390(void)

ulonglong FUN_141538390(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined *puVar8;
  char cVar9;
  longlong local_18;
  char local_10;
  
LAB_1415383b1:
  do {
    pbVar4 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_1415383e2:
      iVar3 = (int)(uVar5 >> 3);
      cVar9 = (char)uVar5;
      if (iVar3 == 1) {
        if (cVar9 != '\b') goto LAB_14153855a;
        pbVar4 = (byte *)*param_2;
        uVar6 = 0;
        if ((pbVar4 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar4, uVar6 < 0x80)) {
          *param_2 = pbVar4 + 1;
          *(uint *)(param_1 + 0x20) = uVar6;
        }
        else {
          uVar5 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar5 < 0) goto LAB_14153858b;
          *(int *)(param_1 + 0x20) = (int)uVar5;
        }
        goto LAB_1415383b1;
      }
      if (iVar3 == 2) {
        if (cVar9 != '\x10') goto LAB_14153855a;
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (bVar2 = *pbVar4, bVar2 < 0x80)) {
          *param_2 = pbVar4 + 1;
          *(bool *)(param_1 + 0x24) = bVar2 != 0;
        }
        else {
          uVar5 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_14153858b;
          *(bool *)(param_1 + 0x24) = local_18 != 0;
        }
        goto LAB_1415383b1;
      }
      if (iVar3 == 3) {
        if (cVar9 != '\x1a') goto LAB_14153855a;
        puVar8 = *(undefined **)(param_1 + 0x10);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x10);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar8);
        if ((char)uVar5 == '\0') goto LAB_14153858b;
        plVar7 = *(longlong **)(param_1 + 0x10);
        puVar1 = (ulonglong *)(plVar7 + 2);
        if (0xf < (ulonglong)plVar7[3]) {
          plVar7 = (longlong *)*plVar7;
        }
        uVar5 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                              "OakSave.EquippedInventorySaveGameData.slot_data_path");
      }
      else {
        if ((iVar3 != 4) || (cVar9 != '\"')) goto LAB_14153855a;
        puVar8 = *(undefined **)(param_1 + 0x18);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x18);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar8);
        if ((char)uVar5 == '\0') goto LAB_14153858b;
        plVar7 = *(longlong **)(param_1 + 0x18);
        puVar1 = (ulonglong *)(plVar7 + 2);
        if (0xf < (ulonglong)plVar7[3]) {
          plVar7 = (longlong *)*plVar7;
        }
        uVar5 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                              "OakSave.EquippedInventorySaveGameData.trinket_data_path");
      }
    }
    else {
      uVar6 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar6;
      pbVar4 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x7f) goto LAB_1415383e2;
LAB_14153855a:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
    }
    if ((char)uVar5 == '\0') {
LAB_14153858b:
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 1415385b0 FUN_1415385b0 body=364 status=ok
// SIG undefined FUN_1415385b0(void)

ulonglong FUN_1415385b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  char cVar8;
  
LAB_1415385c5:
  pbVar2 = (byte *)*param_2;
  uVar3 = 0;
  if ((pbVar2 < (byte *)param_2[1]) && (uVar3 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
    pbVar2 = pbVar2 + 1;
    *param_2 = pbVar2;
LAB_1415385f7:
    iVar1 = (int)(uVar3 >> 3);
    cVar8 = (char)uVar3;
    if (iVar1 == 1) {
      if (cVar8 != '\n') goto LAB_1415386c7;
      lVar4 = *(longlong *)(param_1 + 0x10);
      if (lVar4 == 0) {
        lVar4 = FUN_141518de0(0);
        *(longlong *)(param_1 + 0x10) = lVar4;
      }
      uVar3 = FUN_14151c5b0(param_2,lVar4);
      goto LAB_1415386f0;
    }
    if (iVar1 != 2) {
      if ((iVar1 != 3) || (cVar8 != '\x18')) goto LAB_1415386c7;
      pbVar2 = (byte *)*param_2;
      bVar6 = 0;
      if (pbVar2 < (byte *)param_2[1]) {
        bVar6 = *pbVar2;
        if (bVar6 < 0x80) {
          *param_2 = pbVar2 + 1;
          *(uint *)(param_1 + 0x1c) = (uint)bVar6;
          goto LAB_1415385c5;
        }
      }
      uVar3 = FUN_1439f8e20(param_2,bVar6);
      if ((longlong)uVar3 < 0) goto LAB_1415386f8;
      *(int *)(param_1 + 0x1c) = (int)uVar3;
      goto LAB_1415385c5;
    }
    if (cVar8 == '\x10') {
      pbVar2 = (byte *)*param_2;
      uVar7 = 0;
      if ((pbVar2 < (byte *)param_2[1]) && (uVar7 = (uint)*pbVar2, uVar7 < 0x80)) {
        *param_2 = pbVar2 + 1;
        *(uint *)(param_1 + 0x18) = uVar7;
      }
      else {
        uVar3 = FUN_1439f8e20(param_2,uVar7);
        if ((longlong)uVar3 < 0) goto LAB_1415386f8;
        *(int *)(param_1 + 0x18) = (int)uVar3;
      }
      goto LAB_1415385c5;
    }
  }
  else {
    uVar7 = FUN_1439f8c60(param_2,uVar3);
    uVar3 = (ulonglong)uVar7;
    pbVar2 = (byte *)(ulonglong)(uVar7 - 1);
    if (uVar7 - 1 < 0x7f) goto LAB_1415385f7;
  }
LAB_1415386c7:
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
LAB_1415386f0:
  if ((char)uVar3 == '\0') {
LAB_1415386f8:
    return uVar3 & 0xffffffffffffff00;
  }
  goto LAB_1415385c5;
}



// FUNCTION 141538720 FUN_141538720 body=365 status=ok
// SIG undefined FUN_141538720(void)

ulonglong FUN_141538720(longlong param_1,undefined8 *param_2)

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
LAB_141538772:
      if (((int)(uVar6 >> 3) != 1) || ((char)uVar6 != '\n')) goto LAB_141538841;
      piVar8 = *(int **)(param_1 + 0x20);
      if (piVar8 == (int *)0x0) {
LAB_1415387af:
        FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
        piVar8 = *(int **)(param_1 + 0x20);
        iVar3 = *piVar8;
LAB_1415387c3:
        *piVar8 = iVar3 + 1;
        uVar5 = FUN_141518950(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8)
             = uVar5;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x18);
        iVar3 = *piVar8;
        if (iVar3 <= iVar1) {
          if (iVar3 == *(int *)(param_1 + 0x1c)) goto LAB_1415387af;
          goto LAB_1415387c3;
        }
        uVar5 = *(undefined8 *)(piVar8 + (longlong)iVar1 * 2 + 2);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
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
      if ((local_res14 < 0) || (uVar6 = FUN_141538890(uVar5,param_2), (char)uVar6 == '\0')) break;
      uVar6 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar2;
      pbVar4 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_141538772;
LAB_141538841:
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



// FUNCTION 141538890 FUN_141538890 body=634 status=ok
// SIG undefined FUN_141538890(void)

ulonglong FUN_141538890(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  undefined *puVar8;
  char cVar9;
  
LAB_1415388c0:
  pbVar2 = (byte *)*param_2;
  uVar5 = 0;
  if (((byte *)param_2[1] <= pbVar2) || (uVar5 = (ulonglong)*pbVar2, (char)*pbVar2 < '\x01')) {
    uVar3 = FUN_1439f8c60(param_2,uVar5);
    uVar5 = (ulonglong)uVar3;
    uVar4 = (ulonglong)(uVar3 - 1);
    if (uVar3 - 1 < 0x7f) goto LAB_1415388f1;
    goto LAB_141538ab8;
  }
  *param_2 = (longlong)(pbVar2 + 1);
LAB_1415388f1:
  uVar3 = (int)(uVar5 >> 3) - 1;
  uVar4 = (ulonglong)uVar3;
  if (6 < uVar3) goto LAB_141538ab8;
  uVar4 = (ulonglong)(int)uVar3;
  cVar9 = (char)uVar5;
  switch(uVar3) {
  case 0:
    if (cVar9 != '\n') break;
    puVar8 = *(undefined **)(param_1 + 0x10);
    if (puVar8 == &DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
      puVar8 = *(undefined **)(param_1 + 0x10);
    }
    uVar5 = thunk_FUN_1439fa490(param_2,puVar8);
    if ((char)uVar5 == '\0') goto LAB_141538ae9;
    plVar6 = *(longlong **)(param_1 + 0x10);
    puVar1 = (ulonglong *)(plVar6 + 2);
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                          "OakSave.GbxZoneMapFODSavedLevelData.level_name");
    goto LAB_141538ae1;
  case 1:
    if (cVar9 == '\x10') {
      bVar7 = 0;
      if ((byte *)*param_2 < (byte *)param_2[1]) {
        bVar7 = *(byte *)*param_2;
        if (bVar7 < 0x80) {
          *(uint *)(param_1 + 0x20) = (uint)bVar7;
          *param_2 = *param_2 + 1;
          goto LAB_1415388c0;
        }
      }
      uVar5 = FUN_1439f8e20(param_2,bVar7);
      *(int *)(param_1 + 0x20) = (int)uVar5;
      if ((longlong)uVar5 < 0) {
        return uVar5 & 0xffffffffffffff00;
      }
      goto LAB_1415388c0;
    }
    break;
  case 2:
    if (cVar9 == '\x18') {
      bVar7 = 0;
      if ((byte *)*param_2 < (byte *)param_2[1]) {
        bVar7 = *(byte *)*param_2;
        if (bVar7 < 0x80) {
          *(uint *)(param_1 + 0x24) = (uint)bVar7;
          *param_2 = *param_2 + 1;
          goto LAB_1415388c0;
        }
      }
      uVar5 = FUN_1439f8e20(param_2,bVar7);
      *(int *)(param_1 + 0x24) = (int)uVar5;
      if ((longlong)uVar5 < 0) {
        return uVar5 & 0xffffffffffffff00;
      }
      goto LAB_1415388c0;
    }
    break;
  case 3:
    if (cVar9 == '%') {
      uVar5 = FUN_1414ff120(param_2);
      goto LAB_141538ae1;
    }
    break;
  case 4:
    if (cVar9 == '(') {
      bVar7 = 0;
      if ((byte *)*param_2 < (byte *)param_2[1]) {
        bVar7 = *(byte *)*param_2;
        if (bVar7 < 0x80) {
          *(uint *)(param_1 + 0x2c) = (uint)bVar7;
          *param_2 = *param_2 + 1;
          goto LAB_1415388c0;
        }
      }
      uVar5 = FUN_1439f8e20(param_2,bVar7);
      *(int *)(param_1 + 0x2c) = (int)uVar5;
      if ((longlong)uVar5 < 0) {
        return uVar5 & 0xffffffffffffff00;
      }
      goto LAB_1415388c0;
    }
    break;
  case 5:
    if (cVar9 != '0') break;
    bVar7 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar7 = *(byte *)*param_2;
      if (0x7f < bVar7) goto LAB_141538a78;
      *(uint *)(param_1 + 0x30) = (uint)bVar7;
      *param_2 = *param_2 + 1;
    }
    else {
LAB_141538a78:
      uVar5 = FUN_1439f8e20(param_2,bVar7);
      *(int *)(param_1 + 0x30) = (int)uVar5;
      if ((longlong)uVar5 < 0) {
        return uVar5 & 0xffffffffffffff00;
      }
    }
    goto LAB_1415388c0;
  case 6:
    if (cVar9 == ':') {
      puVar8 = *(undefined **)(param_1 + 0x18);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x18);
      }
      uVar5 = thunk_FUN_1439fa490(param_2,puVar8);
      goto LAB_141538ae1;
    }
  }
LAB_141538ab8:
  if ((int)uVar5 == 0) {
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = FUN_141515d60();
  }
  else {
    uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
  }
  uVar5 = FUN_143a1e1e0(param_2,uVar5,uVar4);
LAB_141538ae1:
  if ((char)uVar5 == '\0') {
LAB_141538ae9:
    return uVar5 & 0xffffffffffffff00;
  }
  goto LAB_1415388c0;
}



// FUNCTION 141538b30 FUN_141538b30 body=728 status=ok
// SIG undefined FUN_141538b30(void)

ulonglong FUN_141538b30(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  char cVar9;
  undefined4 local_res10;
  int local_res14;
  undefined4 local_res18;
  int local_res1c;
  
  do {
    pbVar2 = (byte *)*param_2;
    uVar7 = 0;
    if ((pbVar2 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
      *param_2 = pbVar2 + 1;
LAB_141538b81:
      uVar3 = (int)(uVar7 >> 3) - 1;
      uVar5 = (ulonglong)uVar3;
      if (7 < uVar3) goto LAB_141538dbe;
      uVar5 = (ulonglong)(int)uVar3;
      cVar9 = (char)uVar7;
      switch(uVar3) {
      case 0:
        if (cVar9 != '\b') goto LAB_141538dbe;
        uVar7 = FUN_1414ff090(param_2,param_1 + 0x40);
        break;
      case 1:
        if (cVar9 != '\x10') goto LAB_141538dbe;
        uVar7 = FUN_1414ff090(param_2,param_1 + 0x44);
        break;
      case 2:
        if (cVar9 != '\x18') goto LAB_141538dbe;
        uVar7 = FUN_1414ff090(param_2,param_1 + 0x48);
        break;
      case 3:
        if (cVar9 != '\"') goto LAB_141538dbe;
        piVar8 = *(int **)(param_1 + 0x20);
        if (piVar8 == (int *)0x0) {
LAB_141538c1c:
          FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
          piVar8 = *(int **)(param_1 + 0x20);
          iVar4 = *piVar8;
LAB_141538c30:
          *piVar8 = iVar4 + 1;
          uVar6 = FUN_141518b10(*(undefined8 *)(param_1 + 0x10));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) = uVar6;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x18);
          iVar4 = *piVar8;
          if (iVar4 <= iVar1) {
            if (iVar4 == *(int *)(param_1 + 0x1c)) goto LAB_141538c1c;
            goto LAB_141538c30;
          }
          uVar6 = *(undefined8 *)(piVar8 + (longlong)iVar1 * 2 + 2);
          *(int *)(param_1 + 0x18) = iVar1 + 1;
        }
        pbVar2 = (byte *)*param_2;
        if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
          *param_2 = pbVar2 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          uVar5 = uVar7 & 0xffffffff;
          if ((int)uVar7 < 0) goto LAB_141538def;
        }
        uVar7 = FUN_1439f8500(param_2,&local_res10,uVar5);
        if ((local_res14 < 0) || (uVar7 = FUN_141538f90(uVar6,param_2), (char)uVar7 == '\0'))
        goto LAB_141538def;
        uVar7 = FUN_1439f84b0(param_2,local_res10);
        break;
      case 4:
        if (cVar9 != '*') goto LAB_141538dbe;
        piVar8 = *(int **)(param_1 + 0x38);
        if (piVar8 == (int *)0x0) {
LAB_141538ceb:
          FUN_1439f23d0(param_1 + 0x28,*(int *)(param_1 + 0x34) + 1);
          piVar8 = *(int **)(param_1 + 0x38);
          iVar4 = *piVar8;
LAB_141538cff:
          *piVar8 = iVar4 + 1;
          uVar6 = FUN_141518a60(*(undefined8 *)(param_1 + 0x28));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8) = uVar6;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x30);
          iVar4 = *piVar8;
          if (iVar4 <= iVar1) {
            if (iVar4 == *(int *)(param_1 + 0x34)) goto LAB_141538ceb;
            goto LAB_141538cff;
          }
          uVar6 = *(undefined8 *)(piVar8 + (longlong)iVar1 * 2 + 2);
          *(int *)(param_1 + 0x30) = iVar1 + 1;
        }
        pbVar2 = (byte *)*param_2;
        if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
          *param_2 = pbVar2 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          uVar5 = uVar7 & 0xffffffff;
          if ((int)uVar7 < 0) goto LAB_141538def;
        }
        uVar7 = FUN_1439f8500(param_2,&local_res18,uVar5);
        if ((local_res1c < 0) || (uVar7 = FUN_141538e30(uVar6,param_2), (char)uVar7 == '\0'))
        goto LAB_141538def;
        uVar7 = FUN_1439f84b0(param_2,local_res18);
        break;
      case 5:
        if (cVar9 != '0') goto LAB_141538dbe;
        uVar7 = FUN_1414ff090(param_2,param_1 + 0x4c);
        break;
      case 6:
        if (cVar9 != '8') goto LAB_141538dbe;
        uVar7 = FUN_1414ff170(param_2,param_1 + 0x50);
        break;
      case 7:
        if (cVar9 != '@') goto LAB_141538dbe;
        uVar7 = FUN_1414ff1c0(param_2,param_1 + 0x58);
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar7);
      uVar7 = (ulonglong)uVar3;
      uVar5 = (ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_141538b81;
LAB_141538dbe:
      if ((int)uVar7 == 0) {
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = FUN_141515d60();
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar7 = FUN_143a1e1e0(param_2,uVar7,uVar5);
    }
  } while ((char)uVar7 != '\0');
LAB_141538def:
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 141538e30 FUN_141538e30 body=348 status=ok
// SIG undefined FUN_141538e30(void)

ulonglong FUN_141538e30(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined *puVar9;
  longlong local_18;
  char local_10;
  
LAB_141538e51:
  do {
    pbVar5 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_141538e82:
      iVar3 = (int)(uVar6 >> 3);
      if (iVar3 == 1) {
        if ((char)uVar6 != '\b') goto LAB_141538f40;
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (bVar2 = *pbVar5, bVar2 < 0x80)) {
          *param_2 = pbVar5 + 1;
          *(bool *)(param_1 + 0x18) = bVar2 != 0;
        }
        else {
          uVar6 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_141538f71;
          *(bool *)(param_1 + 0x18) = local_18 != 0;
        }
        goto LAB_141538e51;
      }
      if ((iVar3 != 2) || ((char)uVar6 != '\x12')) goto LAB_141538f40;
      puVar9 = *(undefined **)(param_1 + 0x10);
      if (puVar9 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar9 = *(undefined **)(param_1 + 0x10);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar9);
      if ((char)uVar6 == '\0') goto LAB_141538f71;
      plVar8 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (0xf < (ulonglong)plVar8[3]) {
        plVar8 = (longlong *)*plVar8;
      }
      uVar6 = FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,0,
                            "OakSave.GuardianRankPerkCharacterSaveGameData.perk_data_path");
    }
    else {
      uVar4 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar4;
      pbVar5 = (byte *)(ulonglong)(uVar4 - 1);
      if (uVar4 - 1 < 0x7f) goto LAB_141538e82;
LAB_141538f40:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar7);
    }
    if ((char)uVar6 == '\0') {
LAB_141538f71:
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 141538f90 FUN_141538f90 body=439 status=ok
// SIG undefined FUN_141538f90(void)

ulonglong FUN_141538f90(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined *puVar9;
  char cVar10;
  longlong local_18;
  char local_10;
  
LAB_141538fb1:
  do {
    pbVar4 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_141538fe3:
      iVar3 = (int)(uVar5 >> 3);
      cVar10 = (char)uVar5;
      if (iVar3 == 1) {
        if (cVar10 != '\b') goto LAB_1415390fb;
        pbVar4 = (byte *)*param_2;
        uVar7 = 0;
        if ((pbVar4 < (byte *)param_2[1]) && (uVar7 = (uint)*pbVar4, uVar7 < 0x80)) {
          *param_2 = pbVar4 + 1;
          *(uint *)(param_1 + 0x18) = uVar7;
        }
        else {
          uVar5 = FUN_1439f8e20(param_2,uVar7);
          if ((longlong)uVar5 < 0) goto LAB_14153912c;
          *(int *)(param_1 + 0x18) = (int)uVar5;
        }
        goto LAB_141538fb1;
      }
      if (iVar3 == 2) {
        if (cVar10 != '\x10') goto LAB_1415390fb;
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (bVar2 = *pbVar4, bVar2 < 0x80)) {
          *param_2 = pbVar4 + 1;
          *(bool *)(param_1 + 0x1c) = bVar2 != 0;
        }
        else {
          uVar5 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_14153912c;
          *(bool *)(param_1 + 0x1c) = local_18 != 0;
        }
        goto LAB_141538fb1;
      }
      if ((iVar3 != 3) || (cVar10 != '\x1a')) goto LAB_1415390fb;
      puVar9 = *(undefined **)(param_1 + 0x10);
      if (puVar9 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar9 = *(undefined **)(param_1 + 0x10);
      }
      uVar5 = thunk_FUN_1439fa490(param_2,puVar9);
      if ((char)uVar5 == '\0') goto LAB_14153912c;
      plVar8 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (0xf < (ulonglong)plVar8[3]) {
        plVar8 = (longlong *)*plVar8;
      }
      uVar5 = FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,0,
                            "OakSave.GuardianRankRewardCharacterSaveGameData.reward_data_path");
    }
    else {
      uVar7 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar7;
      pbVar4 = (byte *)(ulonglong)(uVar7 - 1);
      if (uVar7 - 1 < 0x7f) goto LAB_141538fe3;
LAB_1415390fb:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar6 = FUN_141515d60();
      }
      else {
        uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5,uVar6);
    }
    if ((char)uVar5 == '\0') {
LAB_14153912c:
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 141539150 FUN_141539150 body=308 status=ok
// SIG undefined FUN_141539150(void)

ulonglong FUN_141539150(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  
LAB_141539165:
  do {
    pbVar2 = (byte *)*param_2;
    uVar3 = 0;
    if ((pbVar2 < (byte *)param_2[1]) && (uVar3 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
      pbVar2 = pbVar2 + 1;
      *param_2 = pbVar2;
LAB_141539197:
      iVar1 = (int)(uVar3 >> 3);
      if (iVar1 == 1) {
        if ((char)uVar3 == '\b') {
          pbVar2 = (byte *)*param_2;
          uVar6 = 0;
          if ((pbVar2 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar2, uVar6 < 0x80)) {
            *param_2 = pbVar2 + 1;
            *(uint *)(param_1 + 0x10) = uVar6;
          }
          else {
            uVar3 = FUN_1439f8e20(param_2,uVar6);
            if ((longlong)uVar3 < 0) goto LAB_141539260;
            *(int *)(param_1 + 0x10) = (int)uVar3;
          }
          goto LAB_141539165;
        }
      }
      else if ((iVar1 == 2) && ((char)uVar3 == '\x10')) {
        pbVar2 = (byte *)*param_2;
        bVar5 = 0;
        if (pbVar2 < (byte *)param_2[1]) {
          bVar5 = *pbVar2;
          if (bVar5 < 0x80) {
            *param_2 = pbVar2 + 1;
            *(uint *)(param_1 + 0x14) = (uint)bVar5;
            goto LAB_141539165;
          }
        }
        uVar3 = FUN_1439f8e20(param_2,bVar5);
        if ((longlong)uVar3 < 0) goto LAB_141539260;
        *(int *)(param_1 + 0x14) = (int)uVar3;
        goto LAB_141539165;
      }
    }
    else {
      uVar6 = FUN_1439f8c60(param_2,uVar3);
      uVar3 = (ulonglong)uVar6;
      pbVar2 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x7f) goto LAB_141539197;
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
LAB_141539260:
      return uVar3 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 141539290 FUN_141539290 body=894 status=ok
// SIG undefined FUN_141539290(void)

ulonglong FUN_141539290(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined *puVar11;
  char cVar12;
  
  do {
    pbVar2 = (byte *)*param_2;
    uVar9 = 0;
    if ((pbVar2 < (byte *)param_2[1]) && (uVar9 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
      *param_2 = pbVar2 + 1;
LAB_1415392f1:
      uVar3 = (int)(uVar9 >> 3) - 1;
      uVar5 = (ulonglong)uVar3;
      if (7 < uVar3) goto LAB_1415395be;
      uVar5 = (ulonglong)(int)uVar3;
      cVar12 = (char)uVar9;
      switch(uVar3) {
      case 0:
        if (cVar12 != '\b') goto LAB_1415395be;
        uVar9 = FUN_1414ff090(param_2,param_1 + 0x78);
        break;
      case 1:
        if (cVar12 != '\x12') goto LAB_1415395be;
        puVar11 = *(undefined **)(param_1 + 0x58);
        if (puVar11 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x58,&DAT_146ba2f50);
          puVar11 = *(undefined **)(param_1 + 0x58);
        }
        uVar9 = thunk_FUN_1439fa490(param_2,puVar11);
        if ((char)uVar9 == '\0') goto LAB_1415395ef;
        plVar10 = *(longlong **)(param_1 + 0x58);
        puVar1 = (ulonglong *)(plVar10 + 2);
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        uVar9 = FUN_1439fa7f0(plVar10,*puVar1 & 0xffffffff,0,
                              "OakSave.InventoryBalanceStateInitializationData.inventory_data");
        break;
      case 2:
        if (cVar12 != '\x1a') goto LAB_1415395be;
        puVar11 = *(undefined **)(param_1 + 0x60);
        if (puVar11 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x60,&DAT_146ba2f50);
          puVar11 = *(undefined **)(param_1 + 0x60);
        }
        uVar9 = thunk_FUN_1439fa490(param_2,puVar11);
        if ((char)uVar9 == '\0') goto LAB_1415395ef;
        plVar10 = *(longlong **)(param_1 + 0x60);
        puVar1 = (ulonglong *)(plVar10 + 2);
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        uVar9 = FUN_1439fa7f0(plVar10,*puVar1 & 0xffffffff,0,
                              "OakSave.InventoryBalanceStateInitializationData.inventory_balance_data"
                             );
        break;
      case 3:
        if (cVar12 != '\"') goto LAB_1415395be;
        puVar11 = *(undefined **)(param_1 + 0x68);
        if (puVar11 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x68,&DAT_146ba2f50);
          puVar11 = *(undefined **)(param_1 + 0x68);
        }
        uVar9 = thunk_FUN_1439fa490(param_2,puVar11);
        if ((char)uVar9 == '\0') goto LAB_1415395ef;
        plVar10 = *(longlong **)(param_1 + 0x68);
        puVar1 = (ulonglong *)(plVar10 + 2);
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        uVar9 = FUN_1439fa7f0(plVar10,*puVar1 & 0xffffffff,0,
                              "OakSave.InventoryBalanceStateInitializationData.manufacturer_data");
        break;
      case 4:
        if (cVar12 != '*') goto LAB_1415395be;
        uVar6 = FUN_1439f1a80(param_1 + 0x10);
        uVar9 = thunk_FUN_1439fa490(param_2,uVar6);
        if ((char)uVar9 == '\0') goto LAB_1415395ef;
        iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
        lVar7 = FUN_1439f1d30(param_1 + 0x10,iVar4 + -1);
        uVar9 = *(ulonglong *)(lVar7 + 0x10);
        iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
        puVar8 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar4 + -1);
        if (0xf < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        uVar9 = FUN_1439fa7f0(puVar8,uVar9 & 0xffffffff,0,
                              "OakSave.InventoryBalanceStateInitializationData.part_list");
        break;
      case 5:
        if (cVar12 != '2') goto LAB_1415395be;
        uVar6 = FUN_1439f1a80(param_1 + 0x28);
        uVar9 = thunk_FUN_1439fa490(param_2,uVar6);
        if ((char)uVar9 == '\0') goto LAB_1415395ef;
        iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x28);
        lVar7 = FUN_1439f1d30(param_1 + 0x28,iVar4 + -1);
        uVar9 = *(ulonglong *)(lVar7 + 0x10);
        iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x28);
        puVar8 = (undefined8 *)FUN_1439f1d30(param_1 + 0x28,iVar4 + -1);
        if (0xf < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        uVar9 = FUN_1439fa7f0(puVar8,uVar9 & 0xffffffff,0,
                              "OakSave.InventoryBalanceStateInitializationData.generic_part_list");
        break;
      case 6:
        if (cVar12 != ':') goto LAB_1415395be;
        puVar11 = *(undefined **)(param_1 + 0x70);
        if (puVar11 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x70,&DAT_146ba2f50);
          puVar11 = *(undefined **)(param_1 + 0x70);
        }
        uVar9 = thunk_FUN_1439fa490(param_2,puVar11);
        break;
      case 7:
        if (cVar12 != 'B') goto LAB_1415395be;
        uVar6 = FUN_1439f1a80(param_1 + 0x40);
        uVar9 = thunk_FUN_1439fa490(param_2,uVar6);
        if ((char)uVar9 == '\0') goto LAB_1415395ef;
        iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x40);
        lVar7 = FUN_1439f1d30(param_1 + 0x40,iVar4 + -1);
        uVar9 = *(ulonglong *)(lVar7 + 0x10);
        iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x40);
        puVar8 = (undefined8 *)FUN_1439f1d30(param_1 + 0x40,iVar4 + -1);
        if (0xf < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        uVar9 = FUN_1439fa7f0(puVar8,uVar9 & 0xffffffff,0,
                              "OakSave.InventoryBalanceStateInitializationData.customization_part_list"
                             );
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar9);
      uVar9 = (ulonglong)uVar3;
      uVar5 = (ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_1415392f1;
LAB_1415395be:
      if ((int)uVar9 == 0) {
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar9 = FUN_143a1e1e0(param_2,uVar9);
    }
  } while ((char)uVar9 != '\0');
LAB_1415395ef:
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 141539630 FUN_141539630 body=328 status=ok
// SIG undefined FUN_141539630(void)

ulonglong FUN_141539630(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong *plVar7;
  undefined *puVar8;
  
LAB_141539651:
  do {
    pbVar4 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_141539682:
      iVar2 = (int)(uVar5 >> 3);
      if (iVar2 != 1) {
        if ((iVar2 != 2) || ((char)uVar5 != '\x10')) goto LAB_14153972c;
        pbVar4 = (byte *)*param_2;
        bVar6 = 0;
        if (pbVar4 < (byte *)param_2[1]) {
          bVar6 = *pbVar4;
          if (bVar6 < 0x80) {
            *param_2 = pbVar4 + 1;
            *(uint *)(param_1 + 0x18) = (uint)bVar6;
            goto LAB_141539651;
          }
        }
        uVar5 = FUN_1439f8e20(param_2,bVar6);
        if ((longlong)uVar5 < 0) goto LAB_14153975d;
        *(int *)(param_1 + 0x18) = (int)uVar5;
        goto LAB_141539651;
      }
      if ((char)uVar5 != '\n') goto LAB_14153972c;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar5 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar5 == '\0') goto LAB_14153975d;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar5 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                            "OakSave.LevelPersistence_Actor_SaveGameData.actor_name");
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_141539682;
LAB_14153972c:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
    }
    if ((char)uVar5 == '\0') {
LAB_14153975d:
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 141539780 FUN_141539780 body=464 status=ok
// SIG undefined FUN_141539780(void)

ulonglong FUN_141539780(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong *plVar9;
  undefined *puVar10;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar5 = (byte *)*param_2;
    uVar7 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_1415397d2:
      iVar2 = (int)(uVar7 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar7 != '\n') goto LAB_141539906;
        puVar10 = *(undefined **)(param_1 + 0x28);
        if (puVar10 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x28,&DAT_146ba2f50);
          puVar10 = *(undefined **)(param_1 + 0x28);
        }
        uVar7 = thunk_FUN_1439fa490(param_2,puVar10);
        if ((char)uVar7 == '\0') break;
        plVar9 = *(longlong **)(param_1 + 0x28);
        puVar1 = (ulonglong *)(plVar9 + 2);
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        uVar7 = FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,0,
                              "OakSave.LevelPersistence_Level_SaveGameData.level_name");
      }
      else {
        if ((iVar2 != 2) || ((char)uVar7 != '\x12')) goto LAB_141539906;
        piVar8 = *(int **)(param_1 + 0x20);
        if (piVar8 == (int *)0x0) {
LAB_141539818:
          FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
          piVar8 = *(int **)(param_1 + 0x20);
          iVar4 = *piVar8;
LAB_14153982c:
          *piVar8 = iVar4 + 1;
          uVar6 = FUN_141518c90(*(undefined8 *)(param_1 + 0x10));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) = uVar6;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar4 = *piVar8;
          if (iVar4 <= iVar2) {
            if (iVar4 == *(int *)(param_1 + 0x1c)) goto LAB_141539818;
            goto LAB_14153982c;
          }
          uVar6 = *(undefined8 *)(piVar8 + (longlong)iVar2 * 2 + 2);
          *(int *)(param_1 + 0x18) = iVar2 + 1;
        }
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
          *param_2 = pbVar5 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          if ((int)uVar7 < 0) break;
        }
        uVar7 = FUN_1439f8500(param_2,&local_res10);
        if ((local_res14 < 0) || (uVar7 = FUN_141539630(uVar6,param_2), (char)uVar7 == '\0')) break;
        uVar7 = FUN_1439f84b0(param_2,local_res10);
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar7);
      uVar7 = (ulonglong)uVar3;
      pbVar5 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_1415397d2;
LAB_141539906:
      if ((int)uVar7 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar7 = FUN_143a1e1e0(param_2,uVar7);
    }
  } while ((char)uVar7 != '\0');
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 141539950 FUN_141539950 body=324 status=ok
// SIG undefined FUN_141539950(void)

ulonglong FUN_141539950(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  
LAB_141539965:
  do {
    while( true ) {
      pbVar3 = (byte *)*param_2;
      uVar4 = 0;
      if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3))
      break;
      uVar2 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar2;
      pbVar3 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_141539997;
LAB_141539a41:
      if ((int)uVar4 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = FUN_141515d60();
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar5);
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
    }
    pbVar3 = pbVar3 + 1;
    *param_2 = (longlong)pbVar3;
LAB_141539997:
    iVar1 = (int)(uVar4 >> 3);
    if (iVar1 != 1) {
      if ((iVar1 != 2) || ((char)uVar4 != '\x10')) goto LAB_141539a41;
      bVar6 = 0;
      if ((byte *)*param_2 < (byte *)param_2[1]) {
        bVar6 = *(byte *)*param_2;
        if (bVar6 < 0x80) {
          *(uint *)(param_1 + 0x14) = (uint)bVar6;
          *param_2 = *param_2 + 1;
          goto LAB_141539965;
        }
      }
      uVar4 = FUN_1439f8e20(param_2,bVar6);
      *(int *)(param_1 + 0x14) = (int)uVar4;
      if ((longlong)uVar4 < 0) {
        return uVar4 & 0xffffffffffffff00;
      }
      goto LAB_141539965;
    }
    if ((char)uVar4 != '\b') goto LAB_141539a41;
    bVar6 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar6 = *(byte *)*param_2;
      if (bVar6 < 0x80) {
        *(uint *)(param_1 + 0x10) = (uint)bVar6;
        *param_2 = *param_2 + 1;
        goto LAB_141539965;
      }
    }
    uVar4 = FUN_1439f8e20(param_2,bVar6);
    *(int *)(param_1 + 0x10) = (int)uVar4;
    if ((longlong)uVar4 < 0) {
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 141539aa0 FUN_141539aa0 body=459 status=ok
// SIG undefined FUN_141539aa0(void)

ulonglong FUN_141539aa0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  undefined *puVar10;
  ulonglong uVar11;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar5 = (byte *)*param_2;
    uVar11 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar11 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_141539af2:
      iVar2 = (int)(uVar11 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar11 != '\n') goto LAB_141539c21;
        piVar9 = *(int **)(param_1 + 0x20);
        if (piVar9 == (int *)0x0) {
LAB_141539b8f:
          FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
          piVar9 = *(int **)(param_1 + 0x20);
          iVar4 = *piVar9;
LAB_141539ba3:
          *piVar9 = iVar4 + 1;
          uVar7 = FUN_141518ef0(*(undefined8 *)(param_1 + 0x10));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) = uVar7;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar4 = *piVar9;
          if (iVar4 <= iVar2) {
            if (iVar4 == *(int *)(param_1 + 0x1c)) goto LAB_141539b8f;
            goto LAB_141539ba3;
          }
          uVar7 = *(undefined8 *)(piVar9 + (longlong)iVar2 * 2 + 2);
          *(int *)(param_1 + 0x18) = iVar2 + 1;
        }
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (uVar11 = (ulonglong)*pbVar5, *pbVar5 < 0x80)) {
          *param_2 = pbVar5 + 1;
        }
        else {
          uVar6 = FUN_1439f98b0(param_2);
          uVar11 = uVar6 & 0xffffffff;
          if ((int)uVar6 < 0) break;
        }
        uVar6 = FUN_1439f8500(param_2,&local_res10,uVar11);
        if ((local_res14 < 0) || (uVar6 = FUN_141539c70(uVar7,param_2), (char)uVar6 == '\0')) break;
        uVar6 = FUN_1439f84b0(param_2,local_res10);
      }
      else {
        if ((iVar2 != 2) || ((char)uVar11 != '\x12')) goto LAB_141539c21;
        puVar10 = *(undefined **)(param_1 + 0x28);
        if (puVar10 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x28,&DAT_146ba2f50);
          puVar10 = *(undefined **)(param_1 + 0x28);
        }
        uVar6 = thunk_FUN_1439fa490(param_2,puVar10);
        if ((char)uVar6 == '\0') break;
        plVar8 = *(longlong **)(param_1 + 0x28);
        puVar1 = (ulonglong *)(plVar8 + 2);
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        uVar6 = FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,0,
                              "OakSave.MissionPlaythroughSaveGameData.tracked_mission_class_path");
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar11);
      uVar11 = (ulonglong)uVar3;
      pbVar5 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_141539af2;
LAB_141539c21:
      if ((int)uVar11 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar6 = FUN_141515d60();
      }
      else {
        uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar11,uVar6);
    }
  } while ((char)uVar6 != '\0');
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 141539c70 FUN_141539c70 body=693 status=ok
// SIG undefined FUN_141539c70(void)

ulonglong FUN_141539c70(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong *plVar8;
  undefined *puVar9;
  char cVar10;
  
LAB_141539ca0:
  pbVar2 = (byte *)*param_2;
  uVar6 = 0;
  if (((byte *)param_2[1] <= pbVar2) || (uVar6 = (ulonglong)*pbVar2, (char)*pbVar2 < '\x01')) {
    uVar3 = FUN_1439f8c60(param_2,uVar6);
    uVar6 = (ulonglong)uVar3;
    uVar5 = (ulonglong)(uVar3 - 1);
    if (uVar3 - 1 < 0x7f) goto LAB_141539cd1;
    goto LAB_141539ed3;
  }
  *param_2 = (longlong)(pbVar2 + 1);
LAB_141539cd1:
  uVar3 = (uint)uVar6;
  uVar4 = (int)(uVar6 >> 3) - 1;
  uVar5 = (ulonglong)uVar4;
  if (7 < uVar4) goto LAB_141539ed3;
  uVar5 = (ulonglong)(int)uVar4;
  cVar10 = (char)uVar6;
  switch(uVar4) {
  case 0:
    if (cVar10 != '\b') goto LAB_141539ed3;
    pbVar2 = (byte *)*param_2;
    bVar7 = 0;
    if (pbVar2 < (byte *)param_2[1]) {
      bVar7 = *pbVar2;
      if (bVar7 < 0x80) {
        *param_2 = (longlong)(pbVar2 + 1);
        *(uint *)(param_1 + 0x38) = (uint)bVar7;
        goto LAB_141539ca0;
      }
    }
    uVar6 = FUN_1439f8e20(param_2,bVar7);
    if ((longlong)uVar6 < 0) goto LAB_141539f04;
    *(int *)(param_1 + 0x38) = (int)uVar6;
    goto LAB_141539ca0;
  case 1:
    if (cVar10 != '\x10') goto LAB_141539ed3;
    uVar6 = FUN_1414ff1c0(param_2);
    break;
  case 2:
    if (cVar10 == '\x1a') {
      uVar6 = FUN_1414fefc0(param_2);
    }
    else {
      if (cVar10 != '\x18') goto LAB_141539ed3;
      uVar6 = FUN_1414ff360(1,0x1a,param_2,param_1 + 0x10);
    }
    break;
  case 3:
    if (cVar10 != '\"') goto LAB_141539ed3;
    puVar9 = *(undefined **)(param_1 + 0x28);
    if (puVar9 == &DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28,&DAT_146ba2f50);
      puVar9 = *(undefined **)(param_1 + 0x28);
    }
    uVar6 = thunk_FUN_1439fa490(param_2,puVar9);
    if ((char)uVar6 == '\0') goto LAB_141539f04;
    plVar8 = *(longlong **)(param_1 + 0x28);
    puVar1 = (ulonglong *)(plVar8 + 2);
    if (0xf < (ulonglong)plVar8[3]) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar6 = FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,0,
                          "OakSave.MissionStatusPlayerSaveGameData.mission_class_path");
    break;
  case 4:
    if (cVar10 != '*') goto LAB_141539ed3;
    puVar9 = *(undefined **)(param_1 + 0x30);
    if (puVar9 == &DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x30,&DAT_146ba2f50);
      puVar9 = *(undefined **)(param_1 + 0x30);
    }
    uVar6 = thunk_FUN_1439fa490(param_2,puVar9);
    if ((char)uVar6 == '\0') goto LAB_141539f04;
    plVar8 = *(longlong **)(param_1 + 0x30);
    puVar1 = (ulonglong *)(plVar8 + 2);
    if (0xf < (ulonglong)plVar8[3]) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar6 = FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,0,
                          "OakSave.MissionStatusPlayerSaveGameData.active_objective_set_path");
    break;
  case 5:
    if (cVar10 == '0') {
      bVar7 = 0;
      if ((byte *)*param_2 < (byte *)param_2[1]) {
        bVar7 = *(byte *)*param_2;
        if (bVar7 < 0x80) {
          *(uint *)(param_1 + 0x40) = (uint)bVar7;
          *param_2 = *param_2 + 1;
          goto LAB_141539ca0;
        }
      }
      uVar6 = FUN_1439f8e20(param_2,bVar7);
      *(int *)(param_1 + 0x40) = (int)uVar6;
      if ((longlong)uVar6 < 0) {
        return uVar6 & 0xffffffffffffff00;
      }
      goto LAB_141539ca0;
    }
LAB_141539ed3:
    if (uVar3 == 0) {
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      FUN_141515d60();
    }
    uVar6 = FUN_143a1e1e0(param_2);
    break;
  case 6:
    if (cVar10 != '8') goto LAB_141539ed3;
    uVar6 = FUN_1414ff1c0(param_2);
    break;
  case 7:
    if (cVar10 != '@') goto LAB_141539ed3;
    bVar7 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar7 = *(byte *)*param_2;
      if (0x7f < bVar7) goto LAB_141539ebb;
      *(uint *)(param_1 + 0x44) = (uint)bVar7;
      *param_2 = *param_2 + 1;
    }
    else {
LAB_141539ebb:
      uVar6 = FUN_1439f8e20(param_2,bVar7);
      *(int *)(param_1 + 0x44) = (int)uVar6;
      if ((longlong)uVar6 < 0) {
        return uVar6 & 0xffffffffffffff00;
      }
    }
    goto LAB_141539ca0;
  }
  if ((char)uVar6 == '\0') {
LAB_141539f04:
    return uVar6 & 0xffffffffffffff00;
  }
  goto LAB_141539ca0;
}



// FUNCTION 141539f50 FUN_141539f50 body=343 status=ok
// SIG undefined FUN_141539f50(void)

ulonglong FUN_141539f50(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined *puVar7;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_141539fa2:
      iVar2 = (int)(uVar5 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar5 != '\n') goto LAB_14153a05b;
        puVar7 = *(undefined **)(param_1 + 0x10);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x10);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') break;
        plVar6 = *(longlong **)(param_1 + 0x10);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakAbilitySlotSaveGameData.ability_class_path");
      }
      else {
        if ((iVar2 != 2) || ((char)uVar5 != '\x12')) goto LAB_14153a05b;
        puVar7 = *(undefined **)(param_1 + 0x18);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x18);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') break;
        plVar6 = *(longlong **)(param_1 + 0x18);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakAbilitySlotSaveGameData.slot_asset_path");
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_141539fa2;
LAB_14153a05b:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
    }
  } while ((char)uVar5 != '\0');
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14153a0b0 FUN_14153a0b0 body=504 status=ok
// SIG undefined FUN_14153a0b0(void)

ulonglong FUN_14153a0b0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  undefined *puVar8;
  char cVar9;
  
LAB_14153a0d1:
  pbVar3 = (byte *)*param_2;
  uVar4 = 0;
  if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3)) {
    pbVar3 = pbVar3 + 1;
    *param_2 = pbVar3;
LAB_14153a103:
    iVar2 = (int)(uVar4 >> 3);
    cVar9 = (char)uVar4;
    if (iVar2 == 1) {
      if (cVar9 != '\n') goto LAB_14153a25c;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar4 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar4 == '\0') goto LAB_14153a28d;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar4 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                            "OakSave.OakAbilityTreeItemSaveGameData.item_asset_path");
      goto LAB_14153a285;
    }
    if (iVar2 == 2) {
      if (cVar9 == '\x10') {
        pbVar3 = (byte *)*param_2;
        uVar6 = 0;
        if ((pbVar3 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar3, uVar6 < 0x80)) {
          *param_2 = pbVar3 + 1;
          *(uint *)(param_1 + 0x18) = uVar6;
        }
        else {
          uVar4 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar4 < 0) goto LAB_14153a28d;
          *(int *)(param_1 + 0x18) = (int)uVar4;
        }
        goto LAB_14153a0d1;
      }
    }
    else {
      if (iVar2 != 3) {
        if ((iVar2 != 4) || (cVar9 != ' ')) goto LAB_14153a25c;
        pbVar3 = (byte *)*param_2;
        bVar5 = 0;
        if (pbVar3 < (byte *)param_2[1]) {
          bVar5 = *pbVar3;
          if (bVar5 < 0x80) {
            *param_2 = pbVar3 + 1;
            *(uint *)(param_1 + 0x20) = (uint)bVar5;
            goto LAB_14153a0d1;
          }
        }
        uVar4 = FUN_1439f8e20(param_2,bVar5);
        if ((longlong)uVar4 < 0) goto LAB_14153a28d;
        *(int *)(param_1 + 0x20) = (int)uVar4;
        goto LAB_14153a0d1;
      }
      if (cVar9 == '\x18') {
        pbVar3 = (byte *)*param_2;
        uVar6 = 0;
        if ((pbVar3 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar3, uVar6 < 0x80)) {
          *param_2 = pbVar3 + 1;
          *(uint *)(param_1 + 0x1c) = uVar6;
        }
        else {
          uVar4 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar4 < 0) goto LAB_14153a28d;
          *(int *)(param_1 + 0x1c) = (int)uVar4;
        }
        goto LAB_14153a0d1;
      }
    }
  }
  else {
    uVar6 = FUN_1439f8c60(param_2,uVar4);
    uVar4 = (ulonglong)uVar6;
    pbVar3 = (byte *)(ulonglong)(uVar6 - 1);
    if (uVar6 - 1 < 0x7f) goto LAB_14153a103;
  }
LAB_14153a25c:
  if ((int)uVar4 == 0) {
    return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_141515d60();
  }
  uVar4 = FUN_143a1e1e0(param_2,uVar4);
LAB_14153a285:
  if ((char)uVar4 == '\0') {
LAB_14153a28d:
    return uVar4 & 0xffffffffffffff00;
  }
  goto LAB_14153a0d1;
}



// FUNCTION 14153a2b0 FUN_14153a2b0 body=541 status=ok
// SIG undefined FUN_14153a2b0(void)

ulonglong FUN_14153a2b0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined *puVar7;
  char cVar8;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_14153a302:
      iVar2 = (int)(uVar5 >> 3);
      cVar8 = (char)uVar5;
      if (iVar2 == 1) {
        if (cVar8 != '\n') goto LAB_14153a481;
        puVar7 = *(undefined **)(param_1 + 0x10);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x10);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') break;
        plVar6 = *(longlong **)(param_1 + 0x10);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.ability_class_path"
                             );
      }
      else if (iVar2 == 2) {
        if (cVar8 != '\x12') goto LAB_14153a481;
        puVar7 = *(undefined **)(param_1 + 0x18);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x18);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') break;
        plVar6 = *(longlong **)(param_1 + 0x18);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.augment_asset_path"
                             );
      }
      else if (iVar2 == 3) {
        if (cVar8 != '\x1a') goto LAB_14153a481;
        puVar7 = *(undefined **)(param_1 + 0x20);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x20,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x20);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') break;
        plVar6 = *(longlong **)(param_1 + 0x20);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.mod_slot_asset_path"
                             );
      }
      else {
        if ((iVar2 != 4) || (cVar8 != '\"')) goto LAB_14153a481;
        puVar7 = *(undefined **)(param_1 + 0x28);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x28,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x28);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') break;
        plVar6 = *(longlong **)(param_1 + 0x28);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.mod_asset_path"
                             );
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14153a302;
LAB_14153a481:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
    }
  } while ((char)uVar5 != '\0');
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14153a4d0 FUN_14153a4d0 body=442 status=ok
// SIG undefined FUN_14153a4d0(void)

ulonglong FUN_14153a4d0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined *puVar7;
  char cVar8;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_14153a522:
      iVar2 = (int)(uVar5 >> 3);
      cVar8 = (char)uVar5;
      if (iVar2 == 1) {
        if (cVar8 != '\n') goto LAB_14153a63e;
        puVar7 = *(undefined **)(param_1 + 0x10);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x10);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 != '\0') {
          plVar6 = *(longlong **)(param_1 + 0x10);
          puVar1 = (ulonglong *)(plVar6 + 2);
          if (0xf < (ulonglong)plVar6[3]) {
            plVar6 = (longlong *)*plVar6;
          }
          uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                                "OakSave.OakActionAbilityAugmentSaveGameData.action_ability_class_path"
                               );
          goto LAB_14153a667;
        }
        goto LAB_14153a66f;
      }
      if (iVar2 == 2) {
        if (cVar8 != '\x12') goto LAB_14153a63e;
        puVar7 = *(undefined **)(param_1 + 0x18);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x18);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153a66f;
        plVar6 = *(longlong **)(param_1 + 0x18);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakActionAbilityAugmentSaveGameData.slot_asset_path");
      }
      else {
        if ((iVar2 != 3) || (cVar8 != '\x1a')) goto LAB_14153a63e;
        puVar7 = *(undefined **)(param_1 + 0x20);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x20,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x20);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153a66f;
        plVar6 = *(longlong **)(param_1 + 0x20);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakActionAbilityAugmentSaveGameData.augment_asset_path");
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14153a522;
LAB_14153a63e:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
    }
LAB_14153a667:
    if ((char)uVar5 == '\0') {
LAB_14153a66f:
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14153a690 FUN_14153a690 body=1164 status=ok
// SIG undefined FUN_14153a690(void)

ulonglong FUN_14153a690(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined *puVar7;
  char cVar8;
  
  do {
    pbVar2 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
      *param_2 = pbVar2 + 1;
LAB_14153a6f1:
      uVar3 = (int)(uVar5 >> 3) - 1;
      uVar4 = (ulonglong)uVar3;
      if (0xc < uVar3) goto LAB_14153aaca;
      uVar4 = (ulonglong)(int)uVar3;
      cVar8 = (char)uVar5;
      switch(uVar3) {
      case 0:
        if (cVar8 != '\n') goto LAB_14153aaca;
        puVar7 = *(undefined **)(param_1 + 0x10);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x10);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153aafb;
        plVar6 = *(longlong **)(param_1 + 0x10);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakCARMenuVehicleConfigSaveData.loadout_save_name");
        break;
      case 1:
        if (cVar8 != '\x12') goto LAB_14153aaca;
        puVar7 = *(undefined **)(param_1 + 0x18);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x18);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153aafb;
        plVar6 = *(longlong **)(param_1 + 0x18);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakCARMenuVehicleConfigSaveData.body_asset_path");
        break;
      case 2:
        if (cVar8 != '\x1a') goto LAB_14153aaca;
        puVar7 = *(undefined **)(param_1 + 0x20);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x20,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x20);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153aafb;
        plVar6 = *(longlong **)(param_1 + 0x20);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakCARMenuVehicleConfigSaveData.wheel_asset_path");
        break;
      case 3:
        if (cVar8 != '\"') goto LAB_14153aaca;
        puVar7 = *(undefined **)(param_1 + 0x28);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x28,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x28);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153aafb;
        plVar6 = *(longlong **)(param_1 + 0x28);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakCARMenuVehicleConfigSaveData.armor_asset_path");
        break;
      case 4:
        if (cVar8 != '*') goto LAB_14153aaca;
        puVar7 = *(undefined **)(param_1 + 0x30);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x30,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x30);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153aafb;
        plVar6 = *(longlong **)(param_1 + 0x30);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakCARMenuVehicleConfigSaveData.core_mod_asset_path");
        break;
      case 5:
        if (cVar8 != '2') goto LAB_14153aaca;
        puVar7 = *(undefined **)(param_1 + 0x38);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x38,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x38);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153aafb;
        plVar6 = *(longlong **)(param_1 + 0x38);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakCARMenuVehicleConfigSaveData.gunner_weapon_asset_path");
        break;
      case 6:
        if (cVar8 != ':') goto LAB_14153aaca;
        puVar7 = *(undefined **)(param_1 + 0x40);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x40,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x40);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153aafb;
        plVar6 = *(longlong **)(param_1 + 0x40);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakCARMenuVehicleConfigSaveData.driver_weapon_asset_path");
        break;
      case 7:
        if (cVar8 != 'B') goto LAB_14153aaca;
        puVar7 = *(undefined **)(param_1 + 0x48);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x48,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x48);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153aafb;
        plVar6 = *(longlong **)(param_1 + 0x48);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakCARMenuVehicleConfigSaveData.ornament_asset_path");
        break;
      case 8:
        if (cVar8 != 'J') goto LAB_14153aaca;
        puVar7 = *(undefined **)(param_1 + 0x50);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x50,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x50);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153aafb;
        plVar6 = *(longlong **)(param_1 + 0x50);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakCARMenuVehicleConfigSaveData.material_decal_asset_path");
        break;
      case 9:
        if (cVar8 != 'R') goto LAB_14153aaca;
        puVar7 = *(undefined **)(param_1 + 0x58);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x58,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x58);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') goto LAB_14153aafb;
        plVar6 = *(longlong **)(param_1 + 0x58);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakCARMenuVehicleConfigSaveData.material_asset_path");
        break;
      case 10:
        if (cVar8 != 'X') goto LAB_14153aaca;
        uVar5 = FUN_1414ff090(param_2,param_1 + 0x60);
        break;
      case 0xb:
        if (cVar8 != '`') goto LAB_14153aaca;
        uVar5 = FUN_1414ff090(param_2,param_1 + 100);
        break;
      case 0xc:
        if (cVar8 != 'h') goto LAB_14153aaca;
        uVar5 = FUN_1414ff090(param_2,param_1 + 0x68);
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      uVar4 = (ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14153a6f1;
LAB_14153aaca:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
    }
  } while ((char)uVar5 != '\0');
LAB_14153aafb:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14153ab50 FUN_14153ab50 body=521 status=ok
// SIG undefined FUN_14153ab50(void)

ulonglong FUN_14153ab50(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined *puVar8;
  char cVar9;
  
LAB_14153ab71:
  do {
    pbVar3 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar3 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3)) {
      pbVar3 = pbVar3 + 1;
      *param_2 = pbVar3;
LAB_14153aba2:
      iVar2 = (int)(uVar5 >> 3);
      cVar9 = (char)uVar5;
      if (iVar2 == 1) {
        if (cVar9 == '\n') {
          puVar8 = *(undefined **)(param_1 + 0x10);
          if (puVar8 == &DAT_146ba2f50) {
            FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
            puVar8 = *(undefined **)(param_1 + 0x10);
          }
          uVar5 = thunk_FUN_1439fa490(param_2,puVar8);
          goto LAB_14153ad36;
        }
        goto LAB_14153ad0d;
      }
      if (iVar2 == 2) {
        if (cVar9 != '\x10') goto LAB_14153ad0d;
        pbVar3 = (byte *)*param_2;
        uVar6 = 0;
        if ((pbVar3 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar3, uVar6 < 0x80)) {
          *param_2 = pbVar3 + 1;
          *(uint *)(param_1 + 0x28) = uVar6;
        }
        else {
          uVar5 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar5 < 0) goto LAB_14153ad3e;
          *(int *)(param_1 + 0x28) = (int)uVar5;
        }
        goto LAB_14153ab71;
      }
      if (iVar2 == 3) {
        if (cVar9 != '\x18') goto LAB_14153ad0d;
        pbVar3 = (byte *)*param_2;
        uVar6 = 0;
        if ((pbVar3 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar3, uVar6 < 0x80)) {
          *param_2 = pbVar3 + 1;
          *(uint *)(param_1 + 0x2c) = uVar6;
        }
        else {
          uVar5 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar5 < 0) goto LAB_14153ad3e;
          *(int *)(param_1 + 0x2c) = (int)uVar5;
        }
        goto LAB_14153ab71;
      }
      if (iVar2 == 4) {
        if (cVar9 != '\"') goto LAB_14153ad0d;
        puVar8 = *(undefined **)(param_1 + 0x18);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x18);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar8);
        if ((char)uVar5 == '\0') goto LAB_14153ad3e;
        plVar7 = *(longlong **)(param_1 + 0x18);
        puVar1 = (ulonglong *)(plVar7 + 2);
        if (0xf < (ulonglong)plVar7[3]) {
          plVar7 = (longlong *)*plVar7;
        }
        uVar5 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                              "OakSave.OakInventoryItemSaveGameData.weapon_skin_path");
      }
      else {
        if ((iVar2 != 5) || (cVar9 != '*')) goto LAB_14153ad0d;
        lVar4 = *(longlong *)(param_1 + 0x20);
        if (lVar4 == 0) {
          lVar4 = FUN_141518c30(0);
          *(longlong *)(param_1 + 0x20) = lVar4;
        }
        uVar5 = FUN_14151c520(param_2,lVar4);
      }
    }
    else {
      uVar6 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar6;
      pbVar3 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x7f) goto LAB_14153aba2;
LAB_14153ad0d:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
    }
LAB_14153ad36:
    if ((char)uVar5 == '\0') {
LAB_14153ad3e:
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14153ad60 FUN_14153ad60 body=1166 status=ok
// SIG undefined FUN_14153ad60(void)

ulonglong FUN_14153ad60(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte bVar8;
  int *piVar9;
  char cVar10;
  undefined4 local_res10;
  int local_res14;
  undefined4 local_res18;
  int local_res1c;
  undefined4 local_res20;
  int local_res24;
  undefined4 local_38;
  int local_34;
  
LAB_14153ad80:
  do {
    pbVar2 = (byte *)*param_2;
    uVar7 = 0;
    if (((byte *)param_2[1] <= pbVar2) || (uVar7 = (ulonglong)*pbVar2, (char)*pbVar2 < '\x01')) {
      uVar3 = FUN_1439f8c60(param_2,uVar7);
      uVar7 = (ulonglong)uVar3;
      uVar5 = (ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14153adb2;
      goto LAB_14153b19b;
    }
    *param_2 = pbVar2 + 1;
LAB_14153adb2:
    uVar3 = (int)(uVar7 >> 3) - 1;
    uVar5 = (ulonglong)uVar3;
    if (5 < uVar3) goto LAB_14153b19b;
    uVar5 = (ulonglong)(int)uVar3;
    cVar10 = (char)uVar7;
    switch(uVar3) {
    case 0:
      if (cVar10 == '\b') {
        pbVar2 = (byte *)*param_2;
        bVar8 = 0;
        if (pbVar2 < (byte *)param_2[1]) {
          bVar8 = *pbVar2;
          if (bVar8 < 0x80) {
            *param_2 = pbVar2 + 1;
            *(uint *)(param_1 + 0x70) = (uint)bVar8;
            goto LAB_14153ad80;
          }
        }
        uVar7 = FUN_1439f8e20(param_2,bVar8);
        if ((longlong)uVar7 < 0) goto LAB_14153b1cc;
        *(int *)(param_1 + 0x70) = (int)uVar7;
        goto LAB_14153ad80;
      }
      break;
    case 1:
      if (cVar10 != '\x12') break;
      piVar9 = *(int **)(param_1 + 0x20);
      if (piVar9 == (int *)0x0) {
LAB_14153ae49:
        FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
        piVar9 = *(int **)(param_1 + 0x20);
        iVar4 = *piVar9;
LAB_14153ae5d:
        *piVar9 = iVar4 + 1;
        uVar6 = FUN_141519000(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8)
             = uVar6;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x18);
        iVar4 = *piVar9;
        if (iVar4 <= iVar1) {
          if (iVar4 == *(int *)(param_1 + 0x1c)) goto LAB_14153ae49;
          goto LAB_14153ae5d;
        }
        uVar6 = *(undefined8 *)(piVar9 + (longlong)iVar1 * 2 + 2);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
      }
      pbVar2 = (byte *)*param_2;
      if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
        *param_2 = pbVar2 + 1;
      }
      else {
        uVar7 = FUN_1439f98b0(param_2);
        uVar5 = uVar7 & 0xffffffff;
        if ((int)uVar7 < 0) goto LAB_14153b1cc;
      }
      uVar7 = FUN_1439f8500(param_2,&local_res10,uVar5);
      if (-1 < local_res14) {
        uVar7 = FUN_14153a0b0(uVar6,param_2);
        if ((char)uVar7 != '\0') {
          uVar7 = FUN_1439f84b0(param_2,local_res10);
          goto LAB_14153b1c4;
        }
      }
      goto LAB_14153b1cc;
    case 2:
      if (cVar10 == '\x1a') {
        piVar9 = *(int **)(param_1 + 0x38);
        if (piVar9 == (int *)0x0) {
LAB_14153af19:
          FUN_1439f23d0(param_1 + 0x28,*(int *)(param_1 + 0x34) + 1);
          piVar9 = *(int **)(param_1 + 0x38);
          iVar4 = *piVar9;
LAB_14153af2d:
          *piVar9 = iVar4 + 1;
          uVar6 = FUN_141518f50(*(undefined8 *)(param_1 + 0x28));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8) = uVar6;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x30);
          iVar4 = *piVar9;
          if (iVar4 <= iVar1) {
            if (iVar4 == *(int *)(param_1 + 0x34)) goto LAB_14153af19;
            goto LAB_14153af2d;
          }
          uVar6 = *(undefined8 *)(piVar9 + (longlong)iVar1 * 2 + 2);
          *(int *)(param_1 + 0x30) = iVar1 + 1;
        }
        pbVar2 = (byte *)*param_2;
        if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
          *param_2 = pbVar2 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          uVar5 = uVar7 & 0xffffffff;
          if ((int)uVar7 < 0) goto LAB_14153b1cc;
        }
        uVar7 = FUN_1439f8500(param_2,&local_res18,uVar5);
        if (-1 < local_res1c) {
          uVar7 = FUN_141539f50(uVar6,param_2);
          if ((char)uVar7 != '\0') {
            uVar7 = FUN_1439f84b0(param_2,local_res18);
            goto LAB_14153b1c4;
          }
        }
        goto LAB_14153b1cc;
      }
      break;
    case 3:
      if (cVar10 == '\"') {
        piVar9 = *(int **)(param_1 + 0x50);
        if (piVar9 == (int *)0x0) {
LAB_14153afe9:
          FUN_1439f23d0(param_1 + 0x40,*(int *)(param_1 + 0x4c) + 1);
          piVar9 = *(int **)(param_1 + 0x50);
          iVar4 = *piVar9;
LAB_14153affd:
          *piVar9 = iVar4 + 1;
          uVar6 = FUN_141519160(*(undefined8 *)(param_1 + 0x40));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x50) + 8 + (longlong)*(int *)(param_1 + 0x48) * 8) = uVar6;
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x48);
          iVar4 = *piVar9;
          if (iVar4 <= iVar1) {
            if (iVar4 == *(int *)(param_1 + 0x4c)) goto LAB_14153afe9;
            goto LAB_14153affd;
          }
          uVar6 = *(undefined8 *)(piVar9 + (longlong)iVar1 * 2 + 2);
          *(int *)(param_1 + 0x48) = iVar1 + 1;
        }
        pbVar2 = (byte *)*param_2;
        if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
          *param_2 = pbVar2 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          uVar5 = uVar7 & 0xffffffff;
          if ((int)uVar7 < 0) goto LAB_14153b1cc;
        }
        uVar7 = FUN_1439f8500(param_2,&local_res20,uVar5);
        if (-1 < local_res24) {
          uVar7 = FUN_14153a4d0(uVar6,param_2);
          if ((char)uVar7 != '\0') {
            uVar7 = FUN_1439f84b0(param_2,local_res20);
            goto LAB_14153b1c4;
          }
        }
        goto LAB_14153b1cc;
      }
      break;
    case 4:
      if (cVar10 == '*') {
        piVar9 = *(int **)(param_1 + 0x68);
        if (piVar9 == (int *)0x0) {
LAB_14153b0b9:
          FUN_1439f23d0(param_1 + 0x58,*(int *)(param_1 + 100) + 1);
          piVar9 = *(int **)(param_1 + 0x68);
          iVar4 = *piVar9;
LAB_14153b0cd:
          *piVar9 = iVar4 + 1;
          uVar6 = FUN_1415190b0(*(undefined8 *)(param_1 + 0x58));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x68) + 8 + (longlong)*(int *)(param_1 + 0x60) * 8) = uVar6;
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x60);
          iVar4 = *piVar9;
          if (iVar4 <= iVar1) {
            if (iVar4 == *(int *)(param_1 + 100)) goto LAB_14153b0b9;
            goto LAB_14153b0cd;
          }
          uVar6 = *(undefined8 *)(piVar9 + (longlong)iVar1 * 2 + 2);
          *(int *)(param_1 + 0x60) = iVar1 + 1;
        }
        pbVar2 = (byte *)*param_2;
        if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
          *param_2 = pbVar2 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          uVar5 = uVar7 & 0xffffffff;
          if ((int)uVar7 < 0) goto LAB_14153b1cc;
        }
        uVar7 = FUN_1439f8500(param_2,&local_38,uVar5);
        if (-1 < local_34) {
          uVar7 = FUN_14153a2b0(uVar6,param_2);
          if ((char)uVar7 != '\0') {
            uVar7 = FUN_1439f84b0(param_2,local_38);
            goto LAB_14153b1c4;
          }
        }
        goto LAB_14153b1cc;
      }
      break;
    case 5:
      if (cVar10 == '0') {
        pbVar2 = (byte *)*param_2;
        bVar8 = 0;
        if (pbVar2 < (byte *)param_2[1]) {
          bVar8 = *pbVar2;
          if (bVar8 < 0x80) {
            *param_2 = pbVar2 + 1;
            *(uint *)(param_1 + 0x74) = (uint)bVar8;
            goto LAB_14153ad80;
          }
        }
        uVar7 = FUN_1439f8e20(param_2,bVar8);
        if ((longlong)uVar7 < 0) goto LAB_14153b1cc;
        *(int *)(param_1 + 0x74) = (int)uVar7;
        goto LAB_14153ad80;
      }
    }
LAB_14153b19b:
    if ((int)uVar7 == 0) {
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    uVar7 = FUN_143a1e1e0(param_2,uVar7,uVar5);
LAB_14153b1c4:
    if ((char)uVar7 == '\0') {
LAB_14153b1cc:
      return uVar7 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14153b210 FUN_14153b210 body=343 status=ok
// SIG undefined FUN_14153b210(void)

ulonglong FUN_14153b210(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined *puVar7;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_14153b262:
      iVar2 = (int)(uVar5 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar5 != '\n') goto LAB_14153b31b;
        puVar7 = *(undefined **)(param_1 + 0x10);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x10);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') break;
        plVar6 = *(longlong **)(param_1 + 0x10);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakPlayerCharacterAugmentSaveGameData.slot_asset_path");
      }
      else {
        if ((iVar2 != 2) || ((char)uVar5 != '\x12')) goto LAB_14153b31b;
        puVar7 = *(undefined **)(param_1 + 0x18);
        if (puVar7 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
          puVar7 = *(undefined **)(param_1 + 0x18);
        }
        uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
        if ((char)uVar5 == '\0') break;
        plVar6 = *(longlong **)(param_1 + 0x18);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.OakPlayerCharacterAugmentSaveGameData.augment_asset_path");
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14153b262;
LAB_14153b31b:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
    }
  } while ((char)uVar5 != '\0');
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14153b370 FUN_14153b370 body=365 status=ok
// SIG undefined FUN_14153b370(void)

ulonglong FUN_14153b370(longlong param_1,undefined8 *param_2)

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
LAB_14153b3c2:
      if (((int)(uVar6 >> 3) != 1) || ((char)uVar6 != '\n')) goto LAB_14153b491;
      piVar8 = *(int **)(param_1 + 0x20);
      if (piVar8 == (int *)0x0) {
LAB_14153b3ff:
        FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
        piVar8 = *(int **)(param_1 + 0x20);
        iVar3 = *piVar8;
LAB_14153b413:
        *piVar8 = iVar3 + 1;
        uVar5 = FUN_141519380(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8)
             = uVar5;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x18);
        iVar3 = *piVar8;
        if (iVar3 <= iVar1) {
          if (iVar3 == *(int *)(param_1 + 0x1c)) goto LAB_14153b3ff;
          goto LAB_14153b413;
        }
        uVar5 = *(undefined8 *)(piVar8 + (longlong)iVar1 * 2 + 2);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
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
      if ((local_res14 < 0) || (uVar6 = FUN_14153b210(uVar5,param_2), (char)uVar6 == '\0')) break;
      uVar6 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar2;
      pbVar4 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_14153b3c2;
LAB_14153b491:
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



// FUNCTION 14153b4e0 FUN_14153b4e0 body=1918 status=ok
// SIG undefined FUN_14153b4e0(void)

ulonglong FUN_14153b4e0(longlong param_1,ulonglong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar13;
  char cVar14;
  undefined4 local_res10;
  int local_res14;
  undefined4 local_res18;
  int local_res1c;
  undefined4 local_res20;
  int local_res24;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar12 = 0;
    if ((byte *)param_2[1] <= pbVar4) {
LAB_14153b545:
      uVar5 = FUN_1439f8c60(param_2,uVar12);
      uVar12 = (ulonglong)uVar5;
      uVar8 = (ulonglong)(uVar5 - 1);
      if (uVar5 - 1 < 0x3fff) goto LAB_14153b55e;
      goto switchD_14153b57b_caseD_f;
    }
    bVar2 = *pbVar4;
    uVar12 = (ulonglong)bVar2;
    pbVar1 = pbVar4 + 1;
    if ((char)bVar2 < '\x01') {
      if (pbVar1 < (byte *)param_2[1]) {
        bVar3 = *pbVar1;
        if (0x7f < (~(uint)bVar3 & (uint)bVar2)) {
          *param_2 = (ulonglong)(pbVar4 + 2);
          uVar12 = (ulonglong)((bVar2 - 0x80) + (uint)bVar3 * 0x80);
          goto LAB_14153b55e;
        }
      }
      goto LAB_14153b545;
    }
    *param_2 = (ulonglong)pbVar1;
LAB_14153b55e:
    uVar5 = (int)(uVar12 >> 3) - 1;
    uVar8 = (ulonglong)uVar5;
    if (0x19 < uVar5) goto switchD_14153b57b_caseD_f;
    uVar8 = (ulonglong)(int)uVar5;
    cVar14 = (char)uVar12;
    switch(uVar5) {
    case 0:
      if (cVar14 != '\n') goto switchD_14153b57b_caseD_f;
      uVar9 = FUN_140d26a70(param_1 + 0x10);
      uVar12 = FUN_14151c300(param_2,uVar9);
      break;
    case 1:
      if (cVar14 != '\x12') goto switchD_14153b57b_caseD_f;
      lVar11 = param_1 + 0x28;
LAB_14153b5ae:
      uVar9 = FUN_1439f1a80(lVar11);
      uVar12 = thunk_FUN_1439fa490(param_2,uVar9);
      break;
    case 2:
      if (cVar14 == '\x1a') {
        lVar11 = param_1 + 0x40;
        goto LAB_14153b5ae;
      }
    default:
switchD_14153b57b_caseD_f:
      if ((int)uVar12 == 0) {
        return CONCAT71((int7)(uVar8 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar12 = FUN_143a1e1e0(param_2,uVar12);
      break;
    case 3:
      if (cVar14 != '\"') goto switchD_14153b57b_caseD_f;
      piVar13 = *(int **)(param_1 + 0x68);
      if (piVar13 == (int *)0x0) {
LAB_14153b602:
        FUN_1439f23d0(param_1 + 0x58,*(int *)(param_1 + 100) + 1);
        piVar13 = *(int **)(param_1 + 0x68);
        iVar6 = *piVar13;
LAB_14153b616:
        *piVar13 = iVar6 + 1;
        uVar9 = FUN_1415440f0(*(undefined8 *)(param_1 + 0x58));
        *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)*(int *)(param_1 + 0x60) * 8)
             = uVar9;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x60);
        iVar6 = *piVar13;
        if (iVar6 <= iVar7) {
          if (iVar6 == *(int *)(param_1 + 100)) goto LAB_14153b602;
          goto LAB_14153b616;
        }
        uVar9 = *(undefined8 *)(piVar13 + (longlong)iVar7 * 2 + 2);
        *(int *)(param_1 + 0x60) = iVar7 + 1;
      }
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (*pbVar4 < 0x80)) {
        *param_2 = (ulonglong)(pbVar4 + 1);
      }
      else {
        uVar12 = FUN_1439f98b0(param_2);
        if ((int)uVar12 < 0) goto LAB_14153bc3c;
      }
      uVar12 = FUN_1439f8500(param_2,&local_res10);
      if ((local_res14 < 0) || (uVar12 = FUN_14154bcc0(uVar9,param_2), (char)uVar12 == '\0'))
      goto LAB_14153bc3c;
      uVar12 = FUN_1439f84b0(param_2,local_res10);
      break;
    case 4:
      if (cVar14 != '*') goto switchD_14153b57b_caseD_f;
      uVar9 = FUN_140d26ca0(param_1 + 0x70);
      uVar12 = FUN_14151c730(param_2,uVar9);
      break;
    case 5:
      if (cVar14 != '2') goto switchD_14153b57b_caseD_f;
      piVar13 = *(int **)(param_1 + 0x98);
      if (piVar13 == (int *)0x0) {
LAB_14153b6fc:
        FUN_1439f23d0((undefined8 *)(param_1 + 0x88),*(int *)(param_1 + 0x94) + 1);
        piVar13 = *(int **)(param_1 + 0x98);
        iVar6 = *piVar13;
LAB_14153b70f:
        *piVar13 = iVar6 + 1;
        uVar9 = FUN_141543fd0(*(undefined8 *)(param_1 + 0x88));
        *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 8 + (longlong)*(int *)(param_1 + 0x90) * 8)
             = uVar9;
        *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x90);
        iVar6 = *piVar13;
        if (iVar6 <= iVar7) {
          if (iVar6 == *(int *)(param_1 + 0x94)) goto LAB_14153b6fc;
          goto LAB_14153b70f;
        }
        uVar9 = *(undefined8 *)(piVar13 + (longlong)iVar7 * 2 + 2);
        *(int *)(param_1 + 0x90) = iVar7 + 1;
      }
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (*pbVar4 < 0x80)) {
        *param_2 = (ulonglong)(pbVar4 + 1);
      }
      else {
        uVar12 = FUN_1439f98b0(param_2);
        if ((int)uVar12 < 0) goto LAB_14153bc3c;
      }
      uVar12 = FUN_1439f8500(param_2,&local_res18);
      if ((local_res1c < 0) || (uVar12 = FUN_14154ba00(uVar9,param_2), (char)uVar12 == '\0'))
      goto LAB_14153bc3c;
      uVar12 = FUN_1439f84b0(param_2,local_res18);
      break;
    case 6:
      if (cVar14 != ':') goto switchD_14153b57b_caseD_f;
      piVar13 = *(int **)(param_1 + 0xb0);
      if (piVar13 == (int *)0x0) {
LAB_14153b7da:
        FUN_1439f23d0((undefined8 *)(param_1 + 0xa0),*(int *)(param_1 + 0xac) + 1);
        piVar13 = *(int **)(param_1 + 0xb0);
        iVar6 = *piVar13;
LAB_14153b7ed:
        *piVar13 = iVar6 + 1;
        uVar9 = FUN_141544080(*(undefined8 *)(param_1 + 0xa0));
        *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 8 + (longlong)*(int *)(param_1 + 0xa8) * 8)
             = uVar9;
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
      }
      else {
        iVar7 = *(int *)(param_1 + 0xa8);
        iVar6 = *piVar13;
        if (iVar6 <= iVar7) {
          if (iVar6 == *(int *)(param_1 + 0xac)) goto LAB_14153b7da;
          goto LAB_14153b7ed;
        }
        uVar9 = *(undefined8 *)(piVar13 + (longlong)iVar7 * 2 + 2);
        *(int *)(param_1 + 0xa8) = iVar7 + 1;
      }
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (*pbVar4 < 0x80)) {
        *param_2 = (ulonglong)(pbVar4 + 1);
      }
      else {
        uVar12 = FUN_1439f98b0(param_2);
        if ((int)uVar12 < 0) goto LAB_14153bc3c;
      }
      uVar12 = FUN_1439f8500(param_2,&local_res20);
      if ((local_res24 < 0) || (uVar12 = FUN_14154bb60(uVar9,param_2), (char)uVar12 == '\0'))
      goto LAB_14153bc3c;
      uVar12 = FUN_1439f84b0(param_2,local_res20);
      break;
    case 7:
      if (cVar14 != '@') goto switchD_14153b57b_caseD_f;
      uVar12 = FUN_1414ff170(param_2,param_1 + 0x138);
      break;
    case 8:
      if (cVar14 != 'J') goto switchD_14153b57b_caseD_f;
      piVar13 = *(int **)(param_1 + 200);
      if (piVar13 == (int *)0x0) {
LAB_14153b8d6:
        FUN_1439f23d0((undefined8 *)(param_1 + 0xb8),*(int *)(param_1 + 0xc4) + 1);
        piVar13 = *(int **)(param_1 + 200);
        iVar6 = *piVar13;
LAB_14153b8e9:
        *piVar13 = iVar6 + 1;
        uVar9 = FUN_141543ce0(*(undefined8 *)(param_1 + 0xb8));
        *(undefined8 *)(*(longlong *)(param_1 + 200) + 8 + (longlong)*(int *)(param_1 + 0xc0) * 8) =
             uVar9;
        *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
      }
      else {
        iVar7 = *(int *)(param_1 + 0xc0);
        iVar6 = *piVar13;
        if (iVar6 <= iVar7) {
          if (iVar6 == *(int *)(param_1 + 0xc4)) goto LAB_14153b8d6;
          goto LAB_14153b8e9;
        }
        uVar9 = *(undefined8 *)(piVar13 + (longlong)iVar7 * 2 + 2);
        *(int *)(param_1 + 0xc0) = iVar7 + 1;
      }
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (*pbVar4 < 0x80)) {
        *param_2 = (ulonglong)(pbVar4 + 1);
      }
      else {
        uVar12 = FUN_1439f98b0(param_2);
        if ((int)uVar12 < 0) goto LAB_14153bc3c;
      }
      uVar12 = FUN_1439f8500(param_2,&local_48);
      if ((local_44 < 0) || (uVar12 = FUN_14154b3a0(uVar9,param_2), (char)uVar12 == '\0'))
      goto LAB_14153bc3c;
      uVar12 = FUN_1439f84b0(param_2,local_48);
      break;
    case 9:
      if (cVar14 != 'R') goto switchD_14153b57b_caseD_f;
      piVar13 = *(int **)(param_1 + 0xe0);
      if (piVar13 == (int *)0x0) {
LAB_14153b9ab:
        FUN_1439f23d0((undefined8 *)(param_1 + 0xd0),*(int *)(param_1 + 0xdc) + 1);
        piVar13 = *(int **)(param_1 + 0xe0);
        iVar6 = *piVar13;
LAB_14153b9be:
        *piVar13 = iVar6 + 1;
        uVar9 = FUN_141543d90(*(undefined8 *)(param_1 + 0xd0));
        *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 8 + (longlong)*(int *)(param_1 + 0xd8) * 8)
             = uVar9;
        *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      }
      else {
        iVar7 = *(int *)(param_1 + 0xd8);
        iVar6 = *piVar13;
        if (iVar6 <= iVar7) {
          if (iVar6 == *(int *)(param_1 + 0xdc)) goto LAB_14153b9ab;
          goto LAB_14153b9be;
        }
        uVar9 = *(undefined8 *)(piVar13 + (longlong)iVar7 * 2 + 2);
        *(int *)(param_1 + 0xd8) = iVar7 + 1;
      }
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (*pbVar4 < 0x80)) {
        *param_2 = (ulonglong)(pbVar4 + 1);
      }
      else {
        uVar12 = FUN_1439f98b0(param_2);
        if ((int)uVar12 < 0) goto LAB_14153bc3c;
      }
      uVar12 = FUN_1439f8500(param_2,&local_40);
      if ((local_3c < 0) || (uVar12 = FUN_14154b500(uVar9,param_2), (char)uVar12 == '\0'))
      goto LAB_14153bc3c;
      uVar12 = FUN_1439f84b0(param_2,local_40);
      break;
    case 10:
      if (cVar14 != 'Z') goto switchD_14153b57b_caseD_f;
      uVar9 = FUN_140d26920(param_1 + 0xe8);
      uVar12 = FUN_14151c270(param_2,uVar9);
      break;
    case 0xb:
      if (cVar14 != 'b') goto switchD_14153b57b_caseD_f;
      uVar9 = FUN_1439f1a80(param_1 + 0x100);
      uVar12 = thunk_FUN_1439fa490(param_2,uVar9);
      if ((char)uVar12 == '\0') goto LAB_14153bc3c;
      iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x100);
      lVar11 = FUN_1439f1d30(param_1 + 0x100,iVar7 + -1);
      uVar12 = *(ulonglong *)(lVar11 + 0x10);
      iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x100);
      puVar10 = (undefined8 *)FUN_1439f1d30(param_1 + 0x100,iVar7 + -1);
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      uVar12 = FUN_1439fa7f0(puVar10,uVar12 & 0xffffffff,0,"OakSave.OakProfileCloudData.mail_guids")
      ;
      break;
    case 0xc:
      if (cVar14 == 'j') {
        uVar12 = FUN_1414fefc0(param_2,param_1 + 0x118);
      }
      else {
        if (cVar14 != 'h') goto switchD_14153b57b_caseD_f;
        uVar12 = FUN_1414ff360(1,0x6a,param_2,param_1 + 0x118);
      }
      break;
    case 0xd:
      if (cVar14 != 'p') goto switchD_14153b57b_caseD_f;
      uVar12 = FUN_1414ff090(param_2,param_1 + 0x140);
      break;
    case 0xe:
      if (cVar14 != 'z') goto switchD_14153b57b_caseD_f;
      lVar11 = *(longlong *)(param_1 + 0x130);
      if (lVar11 == 0) {
        lVar11 = FUN_141544480(0);
        *(longlong *)(param_1 + 0x130) = lVar11;
      }
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (uVar8 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
        *param_2 = (ulonglong)(pbVar4 + 1);
      }
      else {
        uVar12 = FUN_1439f98b0(param_2);
        uVar8 = uVar12 & 0xffffffff;
        if ((int)uVar12 < 0) goto LAB_14153bc3c;
      }
      uVar12 = FUN_1439f8500(param_2,&local_38,uVar8);
      if ((local_34 < 0) || (uVar12 = FUN_14154cb10(lVar11,param_2), (char)uVar12 == '\0'))
      goto LAB_14153bc3c;
      uVar12 = FUN_1439f84b0(param_2,local_38);
      break;
    case 0x18:
      if (cVar14 != -0x38) goto switchD_14153b57b_caseD_f;
      uVar12 = FUN_1414ff1c0(param_2,param_1 + 0x144);
      break;
    case 0x19:
      if (cVar14 != -0x30) goto switchD_14153b57b_caseD_f;
      uVar12 = FUN_1414ff1c0(param_2,param_1 + 0x145);
    }
  } while ((char)uVar12 != '\0');
LAB_14153bc3c:
  return uVar12 & 0xffffffffffffff00;
}



// FUNCTION 14153bcd0 FUN_14153bcd0 body=471 status=ok
// SIG undefined FUN_14153bcd0(void)

ulonglong FUN_14153bcd0(longlong param_1,int *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined *puVar7;
  char cVar8;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  
LAB_14153bcf0:
  pbVar4 = *(byte **)param_2;
  uVar5 = 0;
  if ((pbVar4 < *(byte **)(param_2 + 2)) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
    pbVar4 = pbVar4 + 1;
    *(byte **)param_2 = pbVar4;
LAB_14153bd22:
    iVar2 = (int)(uVar5 >> 3);
    cVar8 = (char)uVar5;
    if (iVar2 == 1) {
      if (cVar8 != '\n') goto LAB_14153be58;
      puVar7 = *(undefined **)(param_1 + 0x10);
      if (puVar7 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar7 = *(undefined **)(param_1 + 0x10);
      }
      uVar5 = thunk_FUN_1439fa490(param_2,puVar7);
      if ((char)uVar5 == '\0') goto LAB_14153be89;
      plVar6 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar6 + 2);
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,"OakSave.PlanetCycleInfo.planet_name");
      goto LAB_14153be81;
    }
    if (iVar2 == 2) {
      if (cVar8 != '\x15') goto LAB_14153be58;
      if (param_2[2] - *param_2 < 4) {
        uVar5 = FUN_1439f8a20(param_2,local_res18);
        if ((char)uVar5 == '\0') goto LAB_14153be89;
        local_res20 = local_res18[0];
        *(undefined4 *)(param_1 + 0x18) = local_res18[0];
      }
      else {
        local_res18[0] = **(undefined4 **)param_2;
        *(undefined4 **)param_2 = *(undefined4 **)param_2 + 1;
        *(undefined4 *)(param_1 + 0x18) = local_res18[0];
        local_res20 = local_res18[0];
      }
      goto LAB_14153bcf0;
    }
    if ((iVar2 == 3) && (cVar8 == '\x1d')) {
      if (param_2[2] - *param_2 < 4) {
        uVar5 = FUN_1439f8a20(param_2,local_res10);
        if ((char)uVar5 == '\0') goto LAB_14153be89;
        local_res20 = local_res10[0];
        *(undefined4 *)(param_1 + 0x1c) = local_res10[0];
      }
      else {
        local_res10[0] = **(undefined4 **)param_2;
        *(undefined4 **)param_2 = *(undefined4 **)param_2 + 1;
        *(undefined4 *)(param_1 + 0x1c) = local_res10[0];
        local_res20 = local_res10[0];
      }
      goto LAB_14153bcf0;
    }
  }
  else {
    uVar3 = FUN_1439f8c60(param_2,uVar5);
    uVar5 = (ulonglong)uVar3;
    pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
    if (uVar3 - 1 < 0x7f) goto LAB_14153bd22;
  }
LAB_14153be58:
  if ((int)uVar5 == 0) {
    return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_141515d60();
  }
  uVar5 = FUN_143a1e1e0(param_2,uVar5);
LAB_14153be81:
  if ((char)uVar5 == '\0') {
LAB_14153be89:
    return uVar5 & 0xffffffffffffff00;
  }
  goto LAB_14153bcf0;
}



// FUNCTION 14153beb0 FUN_14153beb0 body=318 status=ok
// SIG undefined FUN_14153beb0(void)

ulonglong FUN_14153beb0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  undefined *puVar8;
  
LAB_14153bed1:
  do {
    while( true ) {
      pbVar4 = (byte *)*param_2;
      uVar5 = 0;
      if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4))
      break;
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14153bf02;
LAB_14153bfa2:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
LAB_14153bfcb:
      if ((char)uVar5 == '\0') {
LAB_14153bfd3:
        return uVar5 & 0xffffffffffffff00;
      }
    }
    pbVar4 = pbVar4 + 1;
    *param_2 = (longlong)pbVar4;
LAB_14153bf02:
    iVar2 = (int)(uVar5 >> 3);
    if (iVar2 == 1) {
      if ((char)uVar5 != '\n') goto LAB_14153bfa2;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar5 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar5 == '\0') goto LAB_14153bfd3;
      plVar6 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar6 + 2);
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      uVar5 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                            "OakSave.PlayerClassSaveGameData.player_class_path");
      goto LAB_14153bfcb;
    }
    if ((iVar2 != 2) || ((char)uVar5 != '\x10')) goto LAB_14153bfa2;
    bVar7 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar7 = *(byte *)*param_2;
      if (bVar7 < 0x80) {
        *(uint *)(param_1 + 0x18) = (uint)bVar7;
        *param_2 = *param_2 + 1;
        goto LAB_14153bed1;
      }
    }
    uVar5 = FUN_1439f8e20(param_2,bVar7);
    *(int *)(param_1 + 0x18) = (int)uVar5;
    if ((longlong)uVar5 < 0) {
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14153bff0 FUN_14153bff0 body=271 status=ok
// SIG undefined FUN_14153bff0(void)

ulonglong FUN_14153bff0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar2 = (byte *)*param_2;
    uVar4 = 0;
    if ((pbVar2 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar2, '\0' < (char)*pbVar2)) {
      pbVar2 = pbVar2 + 1;
      *param_2 = pbVar2;
LAB_14153c033:
      if (((int)(uVar4 >> 3) != 1) || ((char)uVar4 != '\n')) goto LAB_14153c0aa;
      uVar3 = FUN_141520180(param_1 + 0x10);
      pbVar2 = (byte *)*param_2;
      if ((pbVar2 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
        *param_2 = pbVar2 + 1;
      }
      else {
        uVar4 = FUN_1439f98b0(param_2);
        if ((int)uVar4 < 0) break;
      }
      uVar4 = FUN_1439f8500(param_2,&local_res10,uVar4 & 0xffffffff);
      if (local_res14 < 0) break;
      uVar4 = FUN_141535390(uVar3,param_2);
      if ((char)uVar4 == '\0') break;
      uVar4 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
      uVar1 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar1;
      pbVar2 = (byte *)(ulonglong)(uVar1 - 1);
      if (uVar1 - 1 < 0x7f) goto LAB_14153c033;
LAB_14153c0aa:
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
  } while ((char)uVar4 != '\0');
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14153c100 FUN_14153c100 body=494 status=ok
// SIG undefined FUN_14153c100(void)

ulonglong FUN_14153c100(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  byte bVar7;
  undefined *puVar8;
  char cVar9;
  
LAB_14153c121:
  do {
    while( true ) {
      pbVar3 = (byte *)*param_2;
      uVar4 = 0;
      if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3))
      break;
      uVar5 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar5;
      pbVar3 = (byte *)(ulonglong)(uVar5 - 1);
      if (uVar5 - 1 < 0x7f) goto LAB_14153c153;
LAB_14153c2a2:
      if ((int)uVar4 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar4 = FUN_143a1e1e0(param_2,uVar4);
LAB_14153c2cb:
      if ((char)uVar4 == '\0') {
LAB_14153c2d3:
        return uVar4 & 0xffffffffffffff00;
      }
    }
    pbVar3 = pbVar3 + 1;
    *param_2 = (longlong)pbVar3;
LAB_14153c153:
    iVar2 = (int)(uVar4 >> 3);
    cVar9 = (char)uVar4;
    if (iVar2 == 1) {
      if (cVar9 != '\b') goto LAB_14153c2a2;
      pbVar3 = (byte *)*param_2;
      uVar5 = 0;
      if ((pbVar3 < (byte *)param_2[1]) && (uVar5 = (uint)*pbVar3, uVar5 < 0x80)) {
        *param_2 = (longlong)(pbVar3 + 1);
        *(uint *)(param_1 + 0x18) = uVar5;
      }
      else {
        uVar4 = FUN_1439f8e20(param_2,uVar5);
        if ((longlong)uVar4 < 0) goto LAB_14153c2d3;
        *(int *)(param_1 + 0x18) = (int)uVar4;
      }
      goto LAB_14153c121;
    }
    if (iVar2 == 2) {
      if (cVar9 != '\x10') goto LAB_14153c2a2;
      pbVar3 = (byte *)*param_2;
      uVar5 = 0;
      if ((pbVar3 < (byte *)param_2[1]) && (uVar5 = (uint)*pbVar3, uVar5 < 0x80)) {
        *param_2 = (longlong)(pbVar3 + 1);
        *(uint *)(param_1 + 0x1c) = uVar5;
      }
      else {
        uVar4 = FUN_1439f8e20(param_2,uVar5);
        if ((longlong)uVar4 < 0) goto LAB_14153c2d3;
        *(int *)(param_1 + 0x1c) = (int)uVar4;
      }
      goto LAB_14153c121;
    }
    if (iVar2 == 3) {
      if (cVar9 != '\x1a') goto LAB_14153c2a2;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar4 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar4 == '\0') goto LAB_14153c2d3;
      plVar6 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar6 + 2);
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      uVar4 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,"OakSave.RegionSaveGameData.region_path");
      goto LAB_14153c2cb;
    }
    if ((iVar2 != 4) || (cVar9 != ' ')) goto LAB_14153c2a2;
    bVar7 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar7 = *(byte *)*param_2;
      if (bVar7 < 0x80) {
        *(uint *)(param_1 + 0x20) = (uint)bVar7;
        *param_2 = *param_2 + 1;
        goto LAB_14153c121;
      }
    }
    uVar4 = FUN_1439f8e20(param_2,bVar7);
    *(int *)(param_1 + 0x20) = (int)uVar4;
    if ((longlong)uVar4 < 0) {
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14153c2f0 FUN_14153c2f0 body=361 status=ok
// SIG undefined FUN_14153c2f0(void)

ulonglong FUN_14153c2f0(longlong param_1,int *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined *puVar8;
  undefined4 local_res10 [2];
  undefined4 local_res18;
  
LAB_14153c310:
  do {
    pbVar4 = *(byte **)param_2;
    uVar5 = 0;
    if ((pbVar4 < *(byte **)(param_2 + 2)) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *(byte **)param_2 = pbVar4;
LAB_14153c341:
      iVar2 = (int)(uVar5 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar5 != '\r') goto LAB_14153c40a;
        if (param_2[2] - *param_2 < 4) {
          uVar5 = FUN_1439f8a20(param_2,local_res10);
          if ((char)uVar5 == '\0') goto LAB_14153c43b;
          local_res18 = local_res10[0];
          *(undefined4 *)(param_1 + 0x18) = local_res10[0];
        }
        else {
          local_res10[0] = **(undefined4 **)param_2;
          *(undefined4 **)param_2 = *(undefined4 **)param_2 + 1;
          *(undefined4 *)(param_1 + 0x18) = local_res10[0];
          local_res18 = local_res10[0];
        }
        goto LAB_14153c310;
      }
      if ((iVar2 != 2) || ((char)uVar5 != '\x12')) goto LAB_14153c40a;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar5 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar5 == '\0') goto LAB_14153c43b;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar5 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                            "OakSave.ResourcePoolSavegameData.resource_path");
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14153c341;
LAB_14153c40a:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar6 = FUN_141515d60();
      }
      else {
        uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5,uVar6);
    }
    if ((char)uVar5 == '\0') {
LAB_14153c43b:
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14153c460 FUN_14153c460 body=459 status=ok
// SIG undefined FUN_14153c460(void)

ulonglong FUN_14153c460(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  undefined *puVar10;
  ulonglong uVar11;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar5 = (byte *)*param_2;
    uVar11 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar11 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_14153c4b2:
      iVar2 = (int)(uVar11 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar11 != '\n') goto LAB_14153c5e1;
        piVar9 = *(int **)(param_1 + 0x20);
        if (piVar9 == (int *)0x0) {
LAB_14153c54f:
          FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
          piVar9 = *(int **)(param_1 + 0x20);
          iVar4 = *piVar9;
LAB_14153c563:
          *piVar9 = iVar4 + 1;
          uVar7 = FUN_141519550(*(undefined8 *)(param_1 + 0x10));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) = uVar7;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar4 = *piVar9;
          if (iVar4 <= iVar2) {
            if (iVar4 == *(int *)(param_1 + 0x1c)) goto LAB_14153c54f;
            goto LAB_14153c563;
          }
          uVar7 = *(undefined8 *)(piVar9 + (longlong)iVar2 * 2 + 2);
          *(int *)(param_1 + 0x18) = iVar2 + 1;
        }
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (uVar11 = (ulonglong)*pbVar5, *pbVar5 < 0x80)) {
          *param_2 = pbVar5 + 1;
        }
        else {
          uVar6 = FUN_1439f98b0(param_2);
          uVar11 = uVar6 & 0xffffffff;
          if ((int)uVar6 < 0) break;
        }
        uVar6 = FUN_1439f8500(param_2,&local_res10,uVar11);
        if ((local_res14 < 0) || (uVar6 = FUN_14153bcd0(uVar7,param_2), (char)uVar6 == '\0')) break;
        uVar6 = FUN_1439f84b0(param_2,local_res10);
      }
      else {
        if ((iVar2 != 2) || ((char)uVar11 != '\x12')) goto LAB_14153c5e1;
        puVar10 = *(undefined **)(param_1 + 0x28);
        if (puVar10 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x28,&DAT_146ba2f50);
          puVar10 = *(undefined **)(param_1 + 0x28);
        }
        uVar6 = thunk_FUN_1439fa490(param_2,puVar10);
        if ((char)uVar6 == '\0') break;
        plVar8 = *(longlong **)(param_1 + 0x28);
        puVar1 = (ulonglong *)(plVar8 + 2);
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        uVar6 = FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,0,
                              "OakSave.TimeOfDaySaveGameData.planet_cycle");
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar11);
      uVar11 = (ulonglong)uVar3;
      pbVar5 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14153c4b2;
LAB_14153c5e1:
      if ((int)uVar11 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar6 = FUN_141515d60();
      }
      else {
        uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar11,uVar6);
    }
  } while ((char)uVar6 != '\0');
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 14153c630 FUN_14153c630 body=496 status=ok
// SIG undefined FUN_14153c630(void)

ulonglong FUN_14153c630(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char cVar9;
  
  do {
    pbVar1 = (byte *)*param_2;
    uVar8 = 0;
    if ((pbVar1 < (byte *)param_2[1]) && (uVar8 = (ulonglong)*pbVar1, '\0' < (char)*pbVar1)) {
      *param_2 = pbVar1 + 1;
LAB_14153c691:
      uVar2 = (int)(uVar8 >> 3) - 1;
      uVar4 = (ulonglong)uVar2;
      if (7 < uVar2) goto LAB_14153c7ce;
      uVar4 = (ulonglong)(int)uVar2;
      cVar9 = (char)uVar8;
      switch(uVar2) {
      case 0:
        if (cVar9 != '\b') goto LAB_14153c7ce;
        uVar8 = FUN_1414ff1c0(param_2,param_1 + 0x28);
        break;
      case 1:
        if (cVar9 != '\x10') goto LAB_14153c7ce;
        uVar8 = FUN_1414ff1c0(param_2,param_1 + 0x29);
        break;
      case 2:
        if (cVar9 != '\x18') goto LAB_14153c7ce;
        uVar8 = FUN_1414ff1c0(param_2,param_1 + 0x2a);
        break;
      case 3:
        if (cVar9 != ' ') goto LAB_14153c7ce;
        uVar8 = FUN_1414ff1c0(param_2,param_1 + 0x2b);
        break;
      case 4:
        if (cVar9 != '(') goto LAB_14153c7ce;
        uVar8 = FUN_1414ff1c0(param_2,param_1 + 0x2c);
        break;
      case 5:
        if (cVar9 != '0') goto LAB_14153c7ce;
        uVar8 = FUN_1414ff090(param_2,param_1 + 0x30);
        break;
      case 6:
        if (cVar9 != ':') goto LAB_14153c7ce;
        uVar5 = FUN_1439f1a80(param_1 + 0x10);
        uVar8 = thunk_FUN_1439fa490(param_2,uVar5);
        if ((char)uVar8 == '\0') goto LAB_14153c7ff;
        iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
        lVar6 = FUN_1439f1d30(param_1 + 0x10,iVar3 + -1);
        uVar8 = *(ulonglong *)(lVar6 + 0x10);
        iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
        puVar7 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar3 + -1);
        if (0xf < (ulonglong)puVar7[3]) {
          puVar7 = (undefined8 *)*puVar7;
        }
        uVar8 = FUN_1439fa7f0(puVar7,uVar8 & 0xffffffff,0,
                              "OakSave.UITrackingSaveGameData.inventory_slot_unlocks_seen");
        break;
      case 7:
        if (cVar9 != '@') goto LAB_14153c7ce;
        uVar8 = FUN_1414ff090(param_2,param_1 + 0x34);
      }
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar8);
      uVar8 = (ulonglong)uVar2;
      uVar4 = (ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_14153c691;
LAB_14153c7ce:
      if ((int)uVar8 == 0) {
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar8 = FUN_143a1e1e0(param_2,uVar8);
    }
  } while ((char)uVar8 != '\0');
LAB_14153c7ff:
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 14153c840 FUN_14153c840 body=345 status=ok
// SIG undefined FUN_14153c840(void)

ulonglong FUN_14153c840(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined *puVar8;
  longlong local_18;
  char local_10;
  
LAB_14153c861:
  do {
    pbVar5 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_14153c892:
      iVar3 = (int)(uVar6 >> 3);
      if (iVar3 != 1) {
        if ((iVar3 != 2) || ((char)uVar6 != '\x10')) goto LAB_14153c94d;
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (bVar2 = *pbVar5, bVar2 < 0x80)) {
          *param_2 = pbVar5 + 1;
          *(bool *)(param_1 + 0x18) = bVar2 != 0;
        }
        else {
          uVar6 = FUN_1439f8f00(param_2,&local_18);
          if (local_10 == '\0') goto LAB_14153c97e;
          *(bool *)(param_1 + 0x18) = local_18 != 0;
        }
        goto LAB_14153c861;
      }
      if ((char)uVar6 != '\n') goto LAB_14153c94d;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar6 == '\0') goto LAB_14153c97e;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar6 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                            "OakSave.VehicleUnlockedSaveGameData.asset_path");
    }
    else {
      uVar4 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar4;
      pbVar5 = (byte *)(ulonglong)(uVar4 - 1);
      if (uVar4 - 1 < 0x7f) goto LAB_14153c892;
LAB_14153c94d:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6);
    }
    if ((char)uVar6 == '\0') {
LAB_14153c97e:
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14153c9b0 FUN_14153c9b0 body=59 status=ok
// SIG undefined FUN_14153c9b0(void)

undefined8 * FUN_14153c9b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    *puVar1 = &PTR_FUN_144c623e0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14153ca00 FUN_14153ca00 body=70 status=ok
// SIG undefined FUN_14153ca00(void)

undefined8 * FUN_14153ca00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    puVar1[1] = &DAT_146ba2f50;
    puVar1[2] = &DAT_146ba2f50;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_144c62310;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14153cff0 FUN_14153cff0 body=101 status=ok
// SIG undefined FUN_14153cff0(void)

undefined8 * FUN_14153cff0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(*param_1 + 0x70) != 0) {
    puVar1 = (undefined8 *)FUN_141517f20();
    param_1[4] = (longlong)puVar1;
    return puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    *puVar1 = &PTR_FUN_144c623e0;
    param_1[4] = (longlong)puVar1;
    return puVar1;
  }
  param_1[4] = 0;
  return (undefined8 *)0x0;
}



// FUNCTION 14153d060 FUN_14153d060 body=112 status=ok
// SIG undefined FUN_14153d060(void)

undefined8 * FUN_14153d060(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(*param_1 + 0x70) != 0) {
    puVar1 = (undefined8 *)FUN_141517f90();
    param_1[7] = (longlong)puVar1;
    return puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    puVar1[1] = &DAT_146ba2f50;
    puVar1[2] = &DAT_146ba2f50;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_144c62310;
    param_1[7] = (longlong)puVar1;
    return puVar1;
  }
  param_1[7] = 0;
  return (undefined8 *)0x0;
}



// FUNCTION 14153d0d0 FUN_14153d0d0 body=77 status=ok
// SIG undefined FUN_14153d0d0(void)

void FUN_14153d0d0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xc0))();
  FUN_1439fb720(1,*puVar1,param_2);
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 200))(param_1);
  FUN_1439fb720(2,*puVar1,param_2);
  return;
}



// FUNCTION 14153d120 FUN_14153d120 body=79 status=ok
// SIG undefined FUN_14153d120(void)

void FUN_14153d120(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xc0))();
  FUN_1439fb440(1,uVar1,param_2);
  uVar1 = (**(code **)(*param_1 + 200))(param_1);
  FUN_1439fb440(2,uVar1,param_2);
  return;
}



// FUNCTION 14153d170 FUN_14153d170 body=130 status=ok
// SIG undefined FUN_14153d170(void)

void FUN_14153d170(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.ActiveFastTravelSaveData.active_travel_station_name");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_1439fa860(2,*(char *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153d200 FUN_14153d200 body=73 status=ok
// SIG undefined FUN_14153d200(void)

void FUN_14153d200(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) != 0) {
    FUN_1439faaa0(1,*(longlong *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153d250 FUN_14153d250 body=5895 status=ok
// SIG undefined FUN_14153d250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14153d250(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  byte *pbVar18;
  byte bVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong *plVar26;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong lStack_148;
  ulonglong local_140;
  longlong *local_138;
  longlong lStack_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong local_110 [3];
  longlong local_f8 [5];
  ulonglong local_d0;
  ulonglong local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (*(int *)(param_1 + 0x7f) != 0) {
    FUN_1439fb720(1,*(int *)(param_1 + 0x7f),param_2);
  }
  if (param_1[0x7e] != 0) {
    FUN_1439fafd0(2,param_1[0x7e],param_2);
  }
  if (*(int *)((longlong)param_1 + 0x3fc) != 0) {
    FUN_1439fb720(3,*(int *)((longlong)param_1 + 0x3fc),param_2);
  }
  if ((param_1 != &DAT_1468a51a0) && (param_1[0x71] != 0)) {
    FUN_1439fb170(4,param_1[0x71],param_2);
  }
  uVar20 = *(uint *)(param_1 + 3);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(5,*(undefined8 *)(param_1[4] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  uVar20 = *(uint *)(param_1 + 6);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(6,*(undefined8 *)(param_1[7] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1439fac90(7,*(int *)(param_1 + 0x80),param_2);
  }
  uVar20 = *(uint *)(param_1 + 9);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(8,*(undefined8 *)(param_1[10] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  uVar20 = *(uint *)(param_1 + 0xc);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(9,*(undefined8 *)(param_1[0xd] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  uVar20 = *(uint *)(param_1 + 0xf);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(10,*(undefined8 *)(param_1[0x10] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  uVar20 = *(uint *)(param_1 + 0x12);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0xb,*(undefined8 *)(param_1[0x13] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  iVar7 = FUN_1439f2ae0(param_1 + 0x14);
  if (0 < iVar7) {
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_1439f9e60(param_2,0x62);
    }
    else {
      **(undefined1 **)(param_2 + 8) = 0x62;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
    }
    uVar20 = *(uint *)(param_1 + 0x16);
    uVar21 = (ulonglong)uVar20;
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_1439f9e60(param_2);
    }
    else {
      pbVar3 = *(byte **)(param_2 + 8);
      pbVar18 = pbVar3;
      while (bVar19 = (byte)uVar21, 0x7f < uVar20) {
        uVar21 = uVar21 >> 7;
        *pbVar18 = bVar19 | 0x80;
        pbVar18 = pbVar18 + 1;
        uVar20 = (uint)uVar21;
      }
      *pbVar18 = bVar19;
      iVar7 = ((int)pbVar18 - (int)pbVar3) + 1;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar7;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar7;
    }
  }
  iVar7 = FUN_1439f2ae0(param_1 + 0x14);
  iVar23 = 0;
  if (0 < iVar7) {
    do {
      piVar8 = (int *)mu::FPhysicsBody::GetBodyBoneId(param_1 + 0x14,iVar23);
      uVar21 = (ulonglong)*piVar8;
      if (*(int *)(param_2 + 0x10) < 10) {
        FUN_1439f9ec0(param_2);
      }
      else {
        pbVar3 = *(byte **)(param_2 + 8);
        pbVar18 = pbVar3;
        for (; 0x7f < uVar21; uVar21 = uVar21 >> 7) {
          *pbVar18 = (byte)uVar21 | 0x80;
          pbVar18 = pbVar18 + 1;
        }
        *pbVar18 = (byte)uVar21;
        iVar17 = ((int)pbVar18 - (int)pbVar3) + 1;
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar17;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar17;
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < iVar7);
  }
  if ((param_1 != &DAT_1468a51a0) && (param_1[0x72] != 0)) {
    FUN_1439fb170(0xd,param_1[0x72],param_2);
  }
  if (*(int *)((longlong)param_1 + 0x404) != 0) {
    FUN_1439fac90(0xe,*(int *)((longlong)param_1 + 0x404),param_2);
  }
  if (*(int *)(param_1 + 0x81) != 0) {
    FUN_1439fac90(0xf,*(int *)(param_1 + 0x81),param_2);
  }
  if (*(char *)(param_1 + 0x82) != '\0') {
    FUN_1439fa860(0x10,*(char *)(param_1 + 0x82),param_2);
  }
  uVar20 = *(uint *)(param_1 + 0x18);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x11,*(undefined8 *)(param_1[0x19] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x1a);
  iVar23 = 0;
  if (0 < iVar7) {
    do {
      lVar9 = FUN_1439f1d30(param_1 + 0x1a,iVar23);
      uVar21 = *(ulonglong *)(lVar9 + 0x10);
      puVar10 = (undefined8 *)FUN_1439f1d30(param_1 + 0x1a,iVar23);
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_1439fa7f0(puVar10,uVar21 & 0xffffffff,1,"OakSave.Character.active_travel_stations");
      uVar11 = FUN_1439f1d30(param_1 + 0x1a,iVar23);
      FUN_1439fb440(0x15,uVar11,param_2);
      iVar23 = iVar23 + 1;
    } while (iVar23 < iVar7);
  }
  if ((param_1 != &DAT_1468a51a0) && (param_1[0x73] != 0)) {
    FUN_1439fb170(0x16,param_1[0x73],param_2);
  }
  plVar15 = (longlong *)param_1[0x6e];
  puVar1 = (ulonglong *)(plVar15 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar15[3]) {
      plVar15 = (longlong *)*plVar15;
    }
    FUN_1439fa7f0(plVar15,*puVar1 & 0xffffffff,1,"OakSave.Character.last_active_travel_station");
    FUN_1439fb5b0(0x17,param_1[0x6e],param_2);
  }
  uVar20 = *(uint *)(param_1 + 0x1e);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x18,*(undefined8 *)(param_1[0x1f] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x20);
  iVar23 = 0;
  if (0 < iVar7) {
    do {
      lVar9 = FUN_1439f1d30(param_1 + 0x20,iVar23);
      uVar21 = *(ulonglong *)(lVar9 + 0x10);
      puVar10 = (undefined8 *)FUN_1439f1d30(param_1 + 0x20,iVar23);
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_1439fa7f0(puVar10,uVar21 & 0xffffffff,1,"OakSave.Character.vehicle_parts_unlocked");
      uVar11 = FUN_1439f1d30(param_1 + 0x20,iVar23);
      FUN_1439fb440(0x19,uVar11,param_2);
      iVar23 = iVar23 + 1;
    } while (iVar23 < iVar7);
  }
  uVar20 = *(uint *)(param_1 + 0x24);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x1a,*(undefined8 *)(param_1[0x25] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  if (*(int *)((longlong)param_1 + 0x40c) != 0) {
    FUN_1439fac90(0x1b,*(int *)((longlong)param_1 + 0x40c),param_2);
  }
  uVar20 = *(uint *)(param_1 + 0x27);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x1c,*(undefined8 *)(param_1[0x28] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  uVar20 = *(uint *)(param_1 + 0x2a);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x1d,*(undefined8 *)(param_1[0x2b] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x2c);
  iVar23 = 0;
  if (0 < iVar7) {
    do {
      lVar9 = FUN_1439f1d30(param_1 + 0x2c,iVar23);
      uVar21 = *(ulonglong *)(lVar9 + 0x10);
      puVar10 = (undefined8 *)FUN_1439f1d30(param_1 + 0x2c,iVar23);
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_1439fa7f0(puVar10,uVar21 & 0xffffffff,1,"OakSave.Character.selected_customizations");
      uVar11 = FUN_1439f1d30(param_1 + 0x2c,iVar23);
      FUN_1439fb440(0x1e,uVar11,param_2);
      iVar23 = iVar23 + 1;
    } while (iVar23 < iVar7);
  }
  iVar7 = FUN_1439f2ae0(param_1 + 0x2f);
  if (0 < iVar7) {
    uVar21 = 0xfa;
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_1439f9e60(param_2);
    }
    else {
      pbVar3 = *(byte **)(param_2 + 8);
      pbVar18 = pbVar3;
      do {
        bVar19 = (byte)uVar21;
        uVar21 = uVar21 >> 7;
        *pbVar18 = bVar19 | 0x80;
        pbVar18 = pbVar18 + 1;
      } while (0x7f < (uint)uVar21);
      *pbVar18 = (byte)uVar21;
      iVar7 = ((int)pbVar18 - (int)pbVar3) + 1;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar7;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar7;
    }
    uVar20 = *(uint *)(param_1 + 0x31);
    uVar21 = (ulonglong)uVar20;
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_1439f9e60(param_2);
    }
    else {
      pbVar3 = *(byte **)(param_2 + 8);
      pbVar18 = pbVar3;
      while (bVar19 = (byte)uVar21, 0x7f < uVar20) {
        uVar21 = uVar21 >> 7;
        *pbVar18 = bVar19 | 0x80;
        pbVar18 = pbVar18 + 1;
        uVar20 = (uint)uVar21;
      }
      *pbVar18 = bVar19;
      iVar7 = ((int)pbVar18 - (int)pbVar3) + 1;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar7;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar7;
    }
  }
  iVar7 = FUN_1439f2ae0(param_1 + 0x2f);
  iVar23 = 0;
  if (0 < iVar7) {
    do {
      piVar8 = (int *)mu::FPhysicsBody::GetBodyBoneId(param_1 + 0x2f,iVar23);
      uVar21 = (ulonglong)*piVar8;
      if (*(int *)(param_2 + 0x10) < 10) {
        FUN_1439f9ec0(param_2);
      }
      else {
        pbVar3 = *(byte **)(param_2 + 8);
        pbVar18 = pbVar3;
        for (; 0x7f < uVar21; uVar21 = uVar21 >> 7) {
          *pbVar18 = (byte)uVar21 | 0x80;
          pbVar18 = pbVar18 + 1;
        }
        *pbVar18 = (byte)uVar21;
        iVar17 = ((int)pbVar18 - (int)pbVar3) + 1;
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar17;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar17;
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < iVar7);
  }
  uVar20 = *(uint *)(param_1 + 0x33);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x20,*(undefined8 *)(param_1[0x34] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  if (param_1 != &DAT_1468a51a0) {
    if (param_1[0x74] != 0) {
      FUN_1439fb170(0x21,param_1[0x74],param_2);
    }
    if (param_1 != &DAT_1468a51a0) {
      if (param_1[0x75] != 0) {
        FUN_1439fb170(0x22,param_1[0x75],param_2);
      }
      if ((param_1 != &DAT_1468a51a0) && (param_1[0x76] != 0)) {
        FUN_1439fb170(0x23,param_1[0x76],param_2);
      }
    }
  }
  uVar20 = *(uint *)(param_1 + 0x36);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x24,*(undefined8 *)(param_1[0x37] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  if (*(char *)((longlong)param_1 + 0x411) != '\0') {
    FUN_1439fa860(0x25,*(char *)((longlong)param_1 + 0x411),param_2);
  }
  plVar15 = param_1 + 0x38;
  lVar9 = (**(code **)(*plVar15 + 0x90))(plVar15);
  if (**(longlong **)(lVar9 + 0x10) != 0) {
    if ((*(char *)(param_2 + 0x1a) == '\0') ||
       (lVar9 = (**(code **)(*plVar15 + 0x90))(plVar15), **(ulonglong **)(lVar9 + 0x10) < 2)) {
      puVar10 = (undefined8 *)0x0;
      lVar9 = (**(code **)(*plVar15 + 0x90))(plVar15);
      puVar14 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(lVar9 + 0x10),local_98);
      plVar26 = (longlong *)*puVar14;
      lStack_148 = puVar14[1];
      local_140 = puVar14[2];
      local_150 = plVar26;
      local_138 = plVar26;
      lStack_130 = lStack_148;
      local_128 = local_140;
      local_b8 = local_140;
      (**(code **)(*plVar15 + 0x90))(plVar15);
      plVar15 = local_150;
      uVar21 = local_140;
      if (plVar26 != (longlong *)0x0) {
        do {
          local_158 = (longlong *)plVar15[4];
          lVar9 = param_1[0x46];
          local_160 = local_158 + 4;
          if (lVar9 == 0) {
            puVar14 = (undefined8 *)operator_new(0x40);
            if (puVar14 != (undefined8 *)0x0) {
              puVar14[3] = 0;
              puVar14[1] = &DAT_146ba2f50;
              puVar14[2] = &DAT_146ba2f50;
              *(undefined4 *)(puVar14 + 4) = 0;
              puVar14[5] = 0;
              goto LAB_14153e049;
            }
            puVar14 = (undefined8 *)0x0;
          }
          else {
            if (*(longlong *)(lVar9 + 0x70) != 0) {
              FUN_1439f01b0(lVar9,0,0x40);
            }
            puVar14 = (undefined8 *)FUN_1439efd10(lVar9,0x40);
            puVar14[3] = lVar9;
            puVar14[1] = &DAT_146ba2f50;
            puVar14[2] = &DAT_146ba2f50;
            *(undefined4 *)(puVar14 + 4) = 0;
            puVar14[5] = lVar9;
LAB_14153e049:
            *puVar14 = &PTR_FUN_144c62948;
            puVar14[6] = local_158;
            puVar14[7] = local_160;
            *(uint *)(puVar14 + 4) = *(uint *)(puVar14 + 4) | 3;
          }
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)(puVar10,1);
          }
          FUN_1439fb170(0x26,puVar14,param_2);
          plVar26 = (longlong *)plVar15[4];
          plVar16 = plVar26;
          if (0xf < (ulonglong)plVar26[3]) {
            plVar16 = (longlong *)*plVar26;
          }
          FUN_1439fa7f0(plVar16,(int)plVar26[2],1,"OakSave.Character.NicknameMappingsEntry.key");
          plVar16 = plVar26 + 4;
          if (0xf < (ulonglong)plVar26[7]) {
            plVar16 = (longlong *)*plVar16;
          }
          FUN_1439fa7f0(plVar16,(int)plVar26[6],1,"OakSave.Character.NicknameMappingsEntry.value");
          lVar9 = lStack_148;
          plVar26 = (longlong *)plVar15[5];
          if (plVar26 == (longlong *)0x0) {
            local_140 = *(longlong *)(lStack_148 + 8) - 1U & uVar21;
            plVar16 = *(longlong **)(*(longlong *)(lStack_148 + 0x20) + local_140 * 8);
            local_160 = plVar26;
            if (plVar16 != plVar15) {
              if ((plVar16 != (longlong *)0x0) &&
                 (plVar16 != *(longlong **)(*(longlong *)(lStack_148 + 0x20) + (local_140 ^ 1) * 8))
                 ) {
                for (plVar26 = (longlong *)plVar16[5]; plVar26 != (longlong *)0x0;
                    plVar26 = (longlong *)plVar26[5]) {
                  if (plVar26 == plVar15) goto LAB_14153e1a1;
                }
              }
              lVar12 = FUN_140d2cbc0(lStack_148,local_60,plVar15,&local_160);
              uVar21 = *(ulonglong *)(lVar12 + 0x10);
              lVar12 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8);
              local_140 = uVar21;
              local_128 = uVar21;
              if (((lVar12 != 0) &&
                  (lVar12 == *(longlong *)(*(longlong *)(lVar9 + 0x20) + (uVar21 ^ 1) * 8))) &&
                 (lVar9 = *(longlong *)(lVar12 + 8), plVar15 = (longlong *)FUN_14151e7c0(&local_160)
                 , *plVar15 != lVar9)) {
                plVar26 = (longlong *)local_160[4];
                goto LAB_14153e1d5;
              }
            }
LAB_14153e1a1:
            FUN_140d4c050(&local_150);
            uVar21 = local_140;
            plVar26 = local_150;
          }
LAB_14153e1d5:
          local_150 = plVar26;
          plVar15 = local_150;
          (**(code **)(param_1[0x38] + 0x90))();
          puVar10 = puVar14;
        } while (plVar15 != (longlong *)0x0);
        if (puVar14 != (undefined8 *)0x0) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
    }
    else {
      lVar9 = (**(code **)(*plVar15 + 0x90))(plVar15);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = **(ulonglong **)(lVar9 + 0x10);
      uVar11 = SUB168(ZEXT816(8) * auVar5,0);
      if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
        uVar11 = 0xffffffffffffffff;
      }
      lVar12 = operator_new(uVar11);
      plVar25 = (longlong *)0x0;
      local_160 = (longlong *)0x0;
      lVar9 = (**(code **)(*plVar15 + 0x90))(plVar15);
      puVar10 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(lVar9 + 0x10),local_b0);
      plVar26 = (longlong *)*puVar10;
      lStack_148 = puVar10[1];
      local_140 = puVar10[2];
      local_150 = plVar26;
      local_138 = plVar26;
      lStack_130 = lStack_148;
      local_128 = local_140;
      local_d0 = local_140;
      (**(code **)(*plVar15 + 0x90))(plVar15);
      lVar9 = lStack_130;
      uVar21 = local_128;
      plVar15 = local_138;
      plVar16 = local_160;
      if (plVar26 != (longlong *)0x0) {
LAB_14153dbc0:
        *(longlong *)(lVar12 + (longlong)plVar25 * 8) = plVar15[4];
        plVar26 = (longlong *)plVar15[5];
        if (plVar26 == (longlong *)0x0) {
          uVar21 = *(longlong *)(lVar9 + 8) - 1U & uVar21;
          plVar16 = *(longlong **)(*(longlong *)(lVar9 + 0x20) + uVar21 * 8);
          local_158 = plVar26;
          if (plVar16 != plVar15) {
            if ((plVar16 != (longlong *)0x0) &&
               (plVar16 != *(longlong **)(*(longlong *)(lVar9 + 0x20) + (uVar21 ^ 1) * 8))) {
              for (plVar26 = (longlong *)plVar16[5]; plVar26 != (longlong *)0x0;
                  plVar26 = (longlong *)plVar26[5]) {
                if (plVar26 == plVar15) goto LAB_14153dd22;
              }
            }
            lVar13 = FUN_140d2cbc0(lVar9,local_80,plVar15,&local_158);
            lVar24 = *(longlong *)(lVar9 + 0x20);
            uVar21 = *(ulonglong *)(lVar13 + 0x10);
            lVar13 = *(longlong *)(lVar24 + uVar21 * 8);
            local_128 = uVar21;
            if ((lVar13 != 0) && (lVar13 == *(longlong *)(lVar24 + (uVar21 ^ 1) * 8))) {
              plVar15 = (longlong *)local_158[2];
              if (*(char *)((longlong)plVar15 + 0x19) == '\0') {
                cVar2 = *(char *)(*plVar15 + 0x19);
                plVar26 = (longlong *)*plVar15;
                while (cVar2 == '\0') {
                  cVar2 = *(char *)(*plVar26 + 0x19);
                  plVar15 = plVar26;
                  plVar26 = (longlong *)*plVar26;
                }
              }
              else {
                cVar2 = *(char *)(local_158[1] + 0x19);
                plVar16 = (longlong *)local_158[1];
                plVar26 = local_158;
                while ((plVar15 = plVar16, cVar2 == '\0' && (plVar26 == (longlong *)plVar15[2]))) {
                  cVar2 = *(char *)(plVar15[1] + 0x19);
                  plVar16 = (longlong *)plVar15[1];
                  plVar26 = plVar15;
                }
              }
              if (plVar15 == *(longlong **)(lVar13 + 8)) {
                plVar26 = (longlong *)0x0;
                uVar21 = uVar21 + 2;
                if (uVar21 < *(ulonglong *)(lVar9 + 8)) {
                  plVar15 = (longlong *)(lVar24 + uVar21 * 8);
                  do {
                    lVar13 = *plVar15;
                    if (lVar13 != 0) {
                      if (lVar13 != *(longlong *)(lVar24 + (uVar21 ^ 1) * 8)) goto LAB_14153dd05;
                      if ((lVar13 != 0) && (lVar13 == *(longlong *)(lVar24 + (uVar21 ^ 1) * 8)))
                      goto LAB_14153dd0b;
                    }
                    uVar21 = uVar21 + 1;
                    plVar15 = plVar15 + 1;
                  } while (uVar21 < *(ulonglong *)(lVar9 + 8));
                }
              }
              else {
                plVar26 = (longlong *)plVar15[4];
              }
              goto LAB_14153dd78;
            }
          }
LAB_14153dd22:
          plVar26 = (longlong *)0x0;
          uVar21 = uVar21 + 1;
          if (uVar21 < *(ulonglong *)(lVar9 + 8)) {
            lVar24 = *(longlong *)(lVar9 + 0x20);
            plVar15 = (longlong *)(lVar24 + uVar21 * 8);
            do {
              lVar13 = *plVar15;
              if (lVar13 != 0) {
                if (lVar13 != *(longlong *)(lVar24 + (uVar21 ^ 1) * 8)) goto LAB_14153dd05;
                if ((lVar13 != 0) && (lVar13 == *(longlong *)(lVar24 + (uVar21 ^ 1) * 8)))
                goto LAB_14153dd0b;
              }
              uVar21 = uVar21 + 1;
              plVar15 = plVar15 + 1;
            } while (uVar21 < *(ulonglong *)(lVar9 + 8));
          }
        }
        goto LAB_14153dd78;
      }
LAB_14153dda1:
      local_160 = plVar16;
      lVar9 = lVar12 + (longlong)plVar25 * 8;
      FUN_1414ff8f0(lVar12,lVar9,lVar9 - lVar12 >> 3,local_168);
      local_158 = (longlong *)0x0;
      puVar10 = (undefined8 *)0x0;
      if (plVar25 != (longlong *)0x0) {
        do {
          lVar9 = param_1[0x46];
          local_120 = (longlong *)(lVar12 + (longlong)local_158 * 8);
          lVar24 = *local_120;
          if (lVar9 == 0) {
            puVar14 = (undefined8 *)operator_new(0x40);
            if (puVar14 != (undefined8 *)0x0) {
              puVar14[3] = 0;
              puVar14[1] = &DAT_146ba2f50;
              puVar14[2] = &DAT_146ba2f50;
              *(undefined4 *)(puVar14 + 4) = 0;
              puVar14[5] = 0;
              goto LAB_14153de63;
            }
            puVar14 = (undefined8 *)0x0;
          }
          else {
            if (*(longlong *)(lVar9 + 0x70) != 0) {
              FUN_1439f01b0(lVar9,0,0x40);
            }
            puVar14 = (undefined8 *)FUN_1439efd10(lVar9,0x40);
            puVar14[3] = lVar9;
            puVar14[1] = &DAT_146ba2f50;
            puVar14[2] = &DAT_146ba2f50;
            *(undefined4 *)(puVar14 + 4) = 0;
            puVar14[5] = lVar9;
LAB_14153de63:
            *puVar14 = &PTR_FUN_144c62948;
            puVar14[6] = lVar24;
            puVar14[7] = lVar24 + 0x20;
            *(uint *)(puVar14 + 4) = *(uint *)(puVar14 + 4) | 3;
          }
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)(puVar10,1);
          }
          FUN_1439fb170(0x26,puVar14,param_2);
          plVar15 = (longlong *)*local_120;
          plVar26 = plVar15;
          if (0xf < (ulonglong)plVar15[3]) {
            plVar26 = (longlong *)*plVar15;
          }
          FUN_1439fa7f0(plVar26,(int)plVar15[2],1,"OakSave.Character.NicknameMappingsEntry.key");
          plVar26 = plVar15 + 4;
          if (0xf < (ulonglong)plVar15[7]) {
            plVar26 = (longlong *)*plVar26;
          }
          FUN_1439fa7f0(plVar26,(int)plVar15[6],1,"OakSave.Character.NicknameMappingsEntry.value");
          local_158 = (longlong *)((longlong)local_158 + 1);
          puVar10 = puVar14;
        } while (local_158 < local_160);
        if (puVar14 != (undefined8 *)0x0) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
      if (lVar12 != 0) {
        FMemory::operator_delete(lVar12);
      }
    }
  }
  if (param_1 != &DAT_1468a51a0) {
    if (param_1[0x77] != 0) {
      FUN_1439fb170(0x27,param_1[0x77],param_2);
    }
    if (param_1 != &DAT_1468a51a0) {
      if (param_1[0x78] != 0) {
        FUN_1439fb170(0x28,param_1[0x78],param_2);
      }
      if (param_1 != &DAT_1468a51a0) {
        if (param_1[0x79] != 0) {
          FUN_1439fb170(0x29,param_1[0x79],param_2);
        }
        if ((param_1 != &DAT_1468a51a0) && (param_1[0x7a] != 0)) {
          FUN_1439fb170(0x2a,param_1[0x7a],param_2);
        }
      }
    }
  }
  plVar15 = (longlong *)param_1[0x6f];
  puVar1 = (ulonglong *)(plVar15 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar15[3]) {
      plVar15 = (longlong *)*plVar15;
    }
    FUN_1439fa7f0(plVar15,*puVar1 & 0xffffffff,1,"OakSave.Character.preferred_character_name");
    FUN_1439fb5b0(0x2b,param_1[0x6f],param_2);
  }
  if (*(int *)((longlong)param_1 + 0x414) != 0) {
    FUN_1439fac90(0x2c,*(int *)((longlong)param_1 + 0x414),param_2);
  }
  if (*(int *)(param_1 + 0x83) != 0) {
    FUN_1439fb720(0x2d,*(int *)(param_1 + 0x83),param_2);
  }
  if ((param_1 != &DAT_1468a51a0) && (param_1[0x7b] != 0)) {
    FUN_1439fb170(0x2e,param_1[0x7b],param_2);
  }
  uVar20 = *(uint *)(param_1 + 0x4b);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x2f,*(undefined8 *)(param_1[0x4c] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  if (*(int *)((longlong)param_1 + 0x41c) != 0) {
    FUN_1439fb720(0x30,*(int *)((longlong)param_1 + 0x41c),param_2);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_1439fb720(0x31,*(int *)(param_1 + 0x84),param_2);
  }
  if ((param_1 != &DAT_1468a51a0) && (param_1[0x7c] != 0)) {
    FUN_1439fb170(0x32,param_1[0x7c],param_2);
  }
  uVar20 = *(uint *)(param_1 + 0x4e);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x33,*(undefined8 *)(param_1[0x4f] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x50);
  iVar23 = 0;
  if (0 < iVar7) {
    do {
      lVar9 = FUN_1439f1d30(param_1 + 0x50,iVar23);
      uVar21 = *(ulonglong *)(lVar9 + 0x10);
      puVar10 = (undefined8 *)FUN_1439f1d30(param_1 + 0x50,iVar23);
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_1439fa7f0(puVar10,uVar21 & 0xffffffff,1,
                    "OakSave.Character.last_active_travel_station_for_playthrough");
      uVar11 = FUN_1439f1d30(param_1 + 0x50,iVar23);
      FUN_1439fb440(0x34,uVar11,param_2);
      iVar23 = iVar23 + 1;
    } while (iVar23 < iVar7);
  }
  uVar20 = *(uint *)(param_1 + 0x54);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x35,*(undefined8 *)(param_1[0x55] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  uVar20 = *(uint *)(param_1 + 0x57);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x36,*(undefined8 *)(param_1[0x58] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  uVar20 = *(uint *)(param_1 + 0x5a);
  uVar22 = 0;
  if (uVar20 != 0) {
    do {
      FUN_1439fb170(0x37,*(undefined8 *)(param_1[0x5b] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar20);
  }
  plVar15 = (longlong *)param_1[0x70];
  puVar1 = (ulonglong *)(plVar15 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar15[3]) {
      plVar15 = (longlong *)*plVar15;
    }
    FUN_1439fa7f0(plVar15,*puVar1 & 0xffffffff,1,"OakSave.Character.save_game_guid");
    FUN_1439fb5b0(0x38,param_1[0x70],param_2);
  }
  if ((param_1 != &DAT_1468a51a0) && (param_1[0x7d] != 0)) {
    FUN_1439fb170(0x39,param_1[0x7d],param_2);
  }
  if (*(char *)((longlong)param_1 + 0x412) != '\0') {
    FUN_1439fa860(0x3a,*(char *)((longlong)param_1 + 0x412),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x413) != '\0') {
    FUN_1439fa860(0x3b,*(char *)((longlong)param_1 + 0x413),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x424) != 0) {
    FUN_1439fb720(0x3c,*(int *)((longlong)param_1 + 0x424),param_2);
  }
  if (*(int *)(param_1 + 0x85) != 0) {
    FUN_1439fb720(0x3d,*(int *)(param_1 + 0x85),param_2);
  }
  plVar15 = param_1 + 0x5c;
  lVar9 = (**(code **)(*plVar15 + 0x90))(plVar15);
  if (**(longlong **)(lVar9 + 0x10) != 0) {
    if ((*(char *)(param_2 + 0x1a) == '\0') ||
       (lVar9 = (**(code **)(*plVar15 + 0x90))(plVar15), **(ulonglong **)(lVar9 + 0x10) < 2)) {
      puVar10 = (undefined8 *)0x0;
      uVar11 = (**(code **)(*plVar15 + 0x90))(plVar15);
      FUN_140d59970(uVar11);
      (**(code **)(*plVar15 + 0x90))(plVar15);
      if (local_f8[0] != 0) {
        do {
          lVar9 = param_1[0x6a];
          lVar12 = *(longlong *)(local_f8[0] + 8);
          if (lVar9 == 0) {
            puVar14 = (undefined8 *)operator_new(0x38);
            if (puVar14 != (undefined8 *)0x0) {
              puVar14[2] = 0;
              puVar14[1] = 0;
              *(undefined4 *)(puVar14 + 3) = 0;
              puVar14[4] = 0;
              goto LAB_14153e86e;
            }
            puVar14 = (undefined8 *)0x0;
          }
          else {
            if (*(longlong *)(lVar9 + 0x70) != 0) {
              FUN_1439f01b0(lVar9,0,0x38);
            }
            puVar14 = (undefined8 *)FUN_1439efd10(lVar9,0x38);
            puVar14[2] = lVar9;
            puVar14[1] = 0;
            *(undefined4 *)(puVar14 + 3) = 0;
            puVar14[4] = lVar9;
LAB_14153e86e:
            *puVar14 = &PTR__scalar_deleting_destructor__144c62878;
            puVar14[5] = lVar12;
            puVar14[6] = lVar12 + 4;
            *(uint *)(puVar14 + 3) = *(uint *)(puVar14 + 3) | 3;
          }
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)(puVar10,1);
          }
          FUN_1439fb170(0x3e,puVar14,param_2);
          FUN_140d259b0(local_f8);
          (**(code **)(*plVar15 + 0x90))(plVar15);
          puVar10 = puVar14;
        } while (local_f8[0] != 0);
        if (puVar14 != (undefined8 *)0x0) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
    }
    else {
      lVar9 = (**(code **)(*plVar15 + 0x90))(plVar15);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = **(ulonglong **)(lVar9 + 0x10);
      uVar11 = SUB168(ZEXT816(0x10) * auVar6,0);
      if (SUB168(ZEXT816(0x10) * auVar6,8) != 0) {
        uVar11 = 0xffffffffffffffff;
      }
      plVar16 = (longlong *)operator_new(uVar11);
      lVar9 = 0;
      local_160 = plVar16;
      uVar11 = (**(code **)(*plVar15 + 0x90))(plVar15);
      FUN_140d59970(uVar11,local_110);
      (**(code **)(*plVar15 + 0x90))(plVar15);
      plVar26 = plVar16;
      while (local_110[0] != 0) {
        puVar4 = *(undefined4 **)(local_110[0] + 8);
        local_120._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
        local_120 = (longlong *)CONCAT44(local_120._4_4_,*puVar4);
        uStack_118._0_4_ = SUB84(puVar4,0);
        uStack_118._4_4_ = (undefined4)((ulonglong)puVar4 >> 0x20);
        *(undefined4 *)plVar26 = *puVar4;
        *(undefined4 *)((longlong)plVar26 + 4) = local_120._4_4_;
        *(undefined4 *)(plVar26 + 1) = (undefined4)uStack_118;
        *(undefined4 *)((longlong)plVar26 + 0xc) = uStack_118._4_4_;
        uStack_118 = puVar4;
        FUN_140d259b0(local_110);
        plVar26 = plVar26 + 2;
        lVar9 = lVar9 + 1;
        (**(code **)(*plVar15 + 0x90))(plVar15);
      }
      FUN_14151cb40(plVar16,plVar16 + lVar9 * 2,lVar9,local_168);
      if (lVar9 != 0) {
        local_158 = plVar16 + 1;
        puVar10 = (undefined8 *)0x0;
        do {
          lVar12 = param_1[0x6a];
          lVar24 = *local_158;
          if (lVar12 == 0) {
            puVar14 = (undefined8 *)operator_new(0x38);
            if (puVar14 != (undefined8 *)0x0) {
              puVar14[2] = 0;
              puVar14[1] = 0;
              *(undefined4 *)(puVar14 + 3) = 0;
              puVar14[4] = 0;
              goto LAB_14153e73d;
            }
            puVar14 = (undefined8 *)0x0;
          }
          else {
            if (*(longlong *)(lVar12 + 0x70) != 0) {
              FUN_1439f01b0(lVar12,0,0x38);
            }
            puVar14 = (undefined8 *)FUN_1439efd10(lVar12,0x38);
            puVar14[2] = lVar12;
            puVar14[1] = 0;
            *(undefined4 *)(puVar14 + 3) = 0;
            puVar14[4] = lVar12;
LAB_14153e73d:
            *puVar14 = &PTR__scalar_deleting_destructor__144c62878;
            puVar14[5] = lVar24;
            puVar14[6] = lVar24 + 4;
            *(uint *)(puVar14 + 3) = *(uint *)(puVar14 + 3) | 3;
          }
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)(puVar10,1);
          }
          FUN_1439fb170(0x3e,puVar14,param_2);
          local_158 = local_158 + 2;
          lVar9 = lVar9 + -1;
          puVar10 = puVar14;
        } while (lVar9 != 0);
        plVar16 = local_160;
        if (puVar14 != (undefined8 *)0x0) {
          (**(code **)*puVar14)(puVar14,1);
          plVar16 = local_160;
        }
      }
      if (plVar16 != (longlong *)0x0) {
        FMemory::operator_delete(plVar16);
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x42c) != '\0') {
    FUN_1439fa860(0x3f,*(char *)((longlong)param_1 + 0x42c),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x43c) == 0x40) {
    FUN_1439fb170(0x40,param_1[0x86],param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_143a1d7f0(param_1[1] & 0xfffffffffffffffe,param_2);
  }
  return;
LAB_14153dd05:
  plVar26 = *(longlong **)(lVar24 + uVar21 * 8);
  goto LAB_14153dd78;
LAB_14153dd0b:
  plVar26 = *(longlong **)(**(longlong **)(*(longlong *)(lVar24 + uVar21 * 8) + 8) + 0x20);
LAB_14153dd78:
  plVar25 = (longlong *)((longlong)plVar25 + 1);
  (**(code **)(param_1[0x38] + 0x90))(param_1 + 0x38);
  plVar15 = plVar26;
  plVar16 = plVar25;
  if (plVar26 == (longlong *)0x0) goto LAB_14153dda1;
  goto LAB_14153dbc0;
}



// FUNCTION 14153e960 FUN_14153e960 body=129 status=ok
// SIG undefined FUN_14153e960(void)

void FUN_14153e960(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.CrewQuartersDecorationSaveData.decoration_data_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153e9f0 FUN_14153e9f0 body=167 status=ok
// SIG undefined FUN_14153e9f0(void)

void FUN_14153e9f0(undefined8 *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1[2] + 0x10) != 0) {
    FUN_1439faaa0(1,param_1[2],param_2);
  }
  plVar2 = (longlong *)param_1[3];
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.CrewQuartersGunRackItemSaveData.slot_asset_path");
    FUN_1439fb5b0(2,param_1[3],param_2);
  }
  if ((param_1 != &DAT_1468a5638) && (param_1[4] != 0)) {
    FUN_1439fb170(3,param_1[4],param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_143a1d7f0(param_1[1] & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153eaa0 FUN_14153eaa0 body=203 status=ok
// SIG undefined FUN_14153eaa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14153eaa0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x30),param_2);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1439fb170(2,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar4 * 8),
                    param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar3 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_1439fa7f0(plVar3,*puVar1 & 0xffffffff,1,"OakSave.CrewQuartersSaveData.room_data_path");
    FUN_1439fb5b0(3,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153eb70 FUN_14153eb70 body=222 status=ok
// SIG undefined FUN_14153eb70(void)

void FUN_14153eb70(undefined8 *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)param_1[2];
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.CustomPlayerColorSaveGameData.color_parameter");
    FUN_1439fb5b0(1,param_1[2],param_2);
  }
  if (param_1 != &DAT_1468a56d0) {
    if (param_1[3] != 0) {
      FUN_1439fb170(2,param_1[3],param_2);
    }
    if ((param_1 != &DAT_1468a56d0) && (param_1[4] != 0)) {
      FUN_1439fb170(3,param_1[4],param_2);
    }
  }
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_1439fa860(4,*(char *)(param_1 + 5),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x29) != '\0') {
    FUN_1439fa860(5,*(char *)((longlong)param_1 + 0x29),param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_143a1d7f0(param_1[1] & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153ec50 FUN_14153ec50 body=129 status=ok
// SIG undefined FUN_14153ec50(void)

void FUN_14153ec50(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.DiscoveredAreaInfo.discovered_area_name");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fb720(2,*(int *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153ece0 FUN_14153ece0 body=207 status=ok
// SIG undefined FUN_14153ece0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14153ece0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar3 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_1439fa7f0(plVar3,*puVar1 & 0xffffffff,1,"OakSave.DiscoveredLevelInfo.discovered_level_name")
    ;
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1439fb720(3,*(int *)(param_1 + 0x30),param_2);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1439fb170(4,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar4 * 8),
                    param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153edb0 FUN_14153edb0 body=130 status=ok
// SIG undefined FUN_14153edb0(void)

void FUN_14153edb0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.DiscoveredPlanetInfo.discovered_planet");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_1439fa860(2,*(char *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153ee40 FUN_14153ee40 body=130 status=ok
// SIG undefined FUN_14153ee40(void)

void FUN_14153ee40(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_1439fa860(1,*(char *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.EchoLogSaveGameData.echo_log_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153eed0 FUN_14153eed0 body=210 status=ok
// SIG undefined FUN_14153eed0(void)

void FUN_14153eed0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x20),param_2);
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    FUN_1439fa860(2,*(char *)(param_1 + 0x24),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.EquippedInventorySaveGameData.slot_data_path");
    FUN_1439fb5b0(3,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.EquippedInventorySaveGameData.trinket_data_path");
    FUN_1439fb5b0(4,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153efb0 FUN_14153efb0 body=123 status=ok
// SIG undefined FUN_14153efb0(void)

void FUN_14153efb0(undefined8 *param_1,undefined8 param_2)

{
  if ((param_1 != &DAT_1468a57f8) && (param_1[2] != 0)) {
    FUN_1439fb170(1,param_1[2],param_2);
  }
  if (*(int *)(param_1 + 3) != 0) {
    FUN_1439fac90(2,*(int *)(param_1 + 3),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1439fac90(3,*(int *)((longlong)param_1 + 0x1c),param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_143a1d7f0(param_1[1] & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153f030 FUN_14153f030 body=239 status=ok
// SIG undefined FUN_14153f030(void)

void FUN_14153f030(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.GbxZoneMapFODSavedLevelData.level_name");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1439fb720(2,*(int *)(param_1 + 0x20),param_2);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1439fb720(3,*(int *)(param_1 + 0x24),param_2);
  }
  if (*(float *)(param_1 + 0x28) != 0.0) {
    FUN_1439fae60(4,*(float *)(param_1 + 0x28),param_2);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1439fb720(5,*(int *)(param_1 + 0x2c),param_2);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1439fb720(6,*(int *)(param_1 + 0x30),param_2);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) != 0) {
    FUN_1439faaa0(7,*(longlong *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153f120 FUN_14153f120 body=308 status=ok
// SIG undefined FUN_14153f120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14153f120(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x40),param_2);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1439fac90(2,*(int *)(param_1 + 0x44),param_2);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1439fac90(3,*(int *)(param_1 + 0x48),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar3 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(4,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar2 * 8),
                    param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(5,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar3 * 8),
                    param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_1439fac90(6,*(int *)(param_1 + 0x4c),param_2);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1439fafd0(7,*(longlong *)(param_1 + 0x50),param_2);
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    FUN_1439fa860(8,*(char *)(param_1 + 0x58),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153f260 FUN_14153f260 body=130 status=ok
// SIG undefined FUN_14153f260(void)

void FUN_14153f260(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_1439fa860(1,*(char *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.GuardianRankPerkCharacterSaveGameData.perk_data_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153f2f0 FUN_14153f2f0 body=150 status=ok
// SIG undefined FUN_14153f2f0(void)

void FUN_14153f2f0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x18),param_2);
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    FUN_1439fa860(2,*(char *)(param_1 + 0x1c),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.GuardianRankRewardCharacterSaveGameData.reward_data_path");
    FUN_1439fb5b0(3,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153f390 FUN_14153f390 body=89 status=ok
// SIG undefined FUN_14153f390(void)

void FUN_14153f390(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1439fac90(2,*(int *)(param_1 + 0x14),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153f3f0 FUN_14153f3f0 body=648 status=ok
// SIG undefined FUN_14153f3f0(void)

void FUN_14153f3f0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x78),param_2);
  }
  plVar7 = *(longlong **)(param_1 + 0x58);
  puVar1 = (ulonglong *)(plVar7 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar7[3]) {
      plVar7 = (longlong *)*plVar7;
    }
    FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,1,
                  "OakSave.InventoryBalanceStateInitializationData.inventory_data");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x58),param_2);
  }
  plVar7 = *(longlong **)(param_1 + 0x60);
  puVar1 = (ulonglong *)(plVar7 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar7[3]) {
      plVar7 = (longlong *)*plVar7;
    }
    FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,1,
                  "OakSave.InventoryBalanceStateInitializationData.inventory_balance_data");
    FUN_1439fb5b0(3,*(undefined8 *)(param_1 + 0x60),param_2);
  }
  plVar7 = *(longlong **)(param_1 + 0x68);
  puVar1 = (ulonglong *)(plVar7 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar7[3]) {
      plVar7 = (longlong *)*plVar7;
    }
    FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,1,
                  "OakSave.InventoryBalanceStateInitializationData.manufacturer_data");
    FUN_1439fb5b0(4,*(undefined8 *)(param_1 + 0x68),param_2);
  }
  iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  iVar8 = 0;
  iVar9 = iVar8;
  if (0 < iVar3) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 0x10,iVar9);
      uVar2 = *(ulonglong *)(lVar4 + 0x10);
      puVar5 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar9);
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_1439fa7f0(puVar5,uVar2 & 0xffffffff,1,
                    "OakSave.InventoryBalanceStateInitializationData.part_list");
      uVar6 = FUN_1439f1d30(param_1 + 0x10,iVar9);
      FUN_1439fb440(5,uVar6,param_2);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
  }
  iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x28);
  iVar9 = iVar8;
  if (0 < iVar3) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 0x28,iVar9);
      uVar2 = *(ulonglong *)(lVar4 + 0x10);
      puVar5 = (undefined8 *)FUN_1439f1d30(param_1 + 0x28,iVar9);
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_1439fa7f0(puVar5,uVar2 & 0xffffffff,1,
                    "OakSave.InventoryBalanceStateInitializationData.generic_part_list");
      uVar6 = FUN_1439f1d30(param_1 + 0x28,iVar9);
      FUN_1439fb440(6,uVar6,param_2);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10) != 0) {
    FUN_1439faaa0(7,*(longlong *)(param_1 + 0x70),param_2);
  }
  iVar9 = IStreamingManager::GetNumWantingResources(param_1 + 0x40);
  if (0 < iVar9) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 0x40,iVar8);
      uVar2 = *(ulonglong *)(lVar4 + 0x10);
      puVar5 = (undefined8 *)FUN_1439f1d30(param_1 + 0x40,iVar8);
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_1439fa7f0(puVar5,uVar2 & 0xffffffff,1,
                    "OakSave.InventoryBalanceStateInitializationData.customization_part_list");
      uVar6 = FUN_1439f1d30(param_1 + 0x40,iVar8);
      FUN_1439fb440(8,uVar6,param_2);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar9);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153f680 FUN_14153f680 body=129 status=ok
// SIG undefined FUN_14153f680(void)

void FUN_14153f680(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.LevelPersistence_Actor_SaveGameData.actor_name");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fac90(2,*(int *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153f710 FUN_14153f710 body=191 status=ok
// SIG undefined FUN_14153f710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14153f710(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar3 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_1439fa7f0(plVar3,*puVar1 & 0xffffffff,1,
                  "OakSave.LevelPersistence_Level_SaveGameData.level_name");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1439fb170(2,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar4 * 8),
                    param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153f7d0 FUN_14153f7d0 body=89 status=ok
// SIG undefined FUN_14153f7d0(void)

void FUN_14153f7d0(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_1439fb720(1,*(int *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1439fb720(2,*(int *)(param_1 + 0x14),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153f830 FUN_14153f830 body=187 status=ok
// SIG undefined FUN_14153f830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14153f830(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1439fb170(1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar4 * 8),
                    param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar3 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_1439fa7f0(plVar3,*puVar1 & 0xffffffff,1,
                  "OakSave.MissionPlaythroughSaveGameData.tracked_mission_class_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153f8f0 FUN_14153f8f0 body=550 status=ok
// SIG undefined FUN_14153f8f0(void)

void FUN_14153f8f0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x38),param_2);
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_1439fa860(2,*(char *)(param_1 + 0x3c),param_2);
  }
  iVar3 = FUN_1439f2ae0(param_1 + 0x10);
  if (0 < iVar3) {
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_1439f9e60(param_2,0x1a);
    }
    else {
      **(undefined1 **)(param_2 + 8) = 0x1a;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
    }
    uVar9 = *(uint *)(param_1 + 0x20);
    uVar10 = (ulonglong)uVar9;
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_1439f9e60(param_2);
    }
    else {
      pbVar2 = *(byte **)(param_2 + 8);
      pbVar6 = pbVar2;
      while (bVar8 = (byte)uVar10, 0x7f < uVar9) {
        uVar10 = uVar10 >> 7;
        *pbVar6 = bVar8 | 0x80;
        pbVar6 = pbVar6 + 1;
        uVar9 = (uint)uVar10;
      }
      *pbVar6 = bVar8;
      iVar3 = ((int)pbVar6 - (int)pbVar2) + 1;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar3;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar3;
    }
  }
  iVar3 = FUN_1439f2ae0(param_1 + 0x10);
  iVar11 = 0;
  if (0 < iVar3) {
    do {
      piVar4 = (int *)mu::FPhysicsBody::GetBodyBoneId(param_1 + 0x10,iVar11);
      uVar10 = (ulonglong)*piVar4;
      if (*(int *)(param_2 + 0x10) < 10) {
        FUN_1439f9ec0(param_2);
      }
      else {
        pbVar2 = *(byte **)(param_2 + 8);
        pbVar6 = pbVar2;
        for (; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
          *pbVar6 = (byte)uVar10 | 0x80;
          pbVar6 = pbVar6 + 1;
        }
        *pbVar6 = (byte)uVar10;
        iVar5 = ((int)pbVar6 - (int)pbVar2) + 1;
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar5;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar5;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  plVar7 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar7 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar7[3]) {
      plVar7 = (longlong *)*plVar7;
    }
    FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,1,
                  "OakSave.MissionStatusPlayerSaveGameData.mission_class_path");
    FUN_1439fb5b0(4,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  plVar7 = *(longlong **)(param_1 + 0x30);
  puVar1 = (ulonglong *)(plVar7 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar7[3]) {
      plVar7 = (longlong *)*plVar7;
    }
    FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,1,
                  "OakSave.MissionStatusPlayerSaveGameData.active_objective_set_path");
    FUN_1439fb5b0(5,*(undefined8 *)(param_1 + 0x30),param_2);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1439fb720(6,*(int *)(param_1 + 0x40),param_2);
  }
  if (*(char *)(param_1 + 0x3d) != '\0') {
    FUN_1439fa860(7,*(char *)(param_1 + 0x3d),param_2);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1439fb720(8,*(int *)(param_1 + 0x44),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153fb20 FUN_14153fb20 body=169 status=ok
// SIG undefined FUN_14153fb20(void)

void FUN_14153fb20(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakAbilitySlotSaveGameData.ability_class_path");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.OakAbilitySlotSaveGameData.slot_asset_path"
                 );
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153fbd0 FUN_14153fbd0 body=169 status=ok
// SIG undefined FUN_14153fbd0(void)

void FUN_14153fbd0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakAbilityTreeItemSaveGameData.item_asset_path");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fac90(2,*(int *)(param_1 + 0x18),param_2);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1439fac90(3,*(int *)(param_1 + 0x1c),param_2);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1439fac90(4,*(int *)(param_1 + 0x20),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153fc80 FUN_14153fc80 body=289 status=ok
// SIG undefined FUN_14153fc80(void)

void FUN_14153fc80(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.ability_class_path");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.augment_asset_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.mod_slot_asset_path");
    FUN_1439fb5b0(3,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentConfigurationSaveGameData.mod_asset_path");
    FUN_1439fb5b0(4,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153fdb0 FUN_14153fdb0 body=229 status=ok
// SIG undefined FUN_14153fdb0(void)

void FUN_14153fdb0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentSaveGameData.action_ability_class_path");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentSaveGameData.slot_asset_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakActionAbilityAugmentSaveGameData.augment_asset_path");
    FUN_1439fb5b0(3,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 14153fea0 FUN_14153fea0 body=709 status=ok
// SIG undefined FUN_14153fea0(void)

void FUN_14153fea0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.loadout_save_name");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.body_asset_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.wheel_asset_path");
    FUN_1439fb5b0(3,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.armor_asset_path");
    FUN_1439fb5b0(4,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.core_mod_asset_path");
    FUN_1439fb5b0(5,*(undefined8 *)(param_1 + 0x30),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x38);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.gunner_weapon_asset_path");
    FUN_1439fb5b0(6,*(undefined8 *)(param_1 + 0x38),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x40);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.driver_weapon_asset_path");
    FUN_1439fb5b0(7,*(undefined8 *)(param_1 + 0x40),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.ornament_asset_path");
    FUN_1439fb5b0(8,*(undefined8 *)(param_1 + 0x48),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x50);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.material_decal_asset_path");
    FUN_1439fb5b0(9,*(undefined8 *)(param_1 + 0x50),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x58);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakCARMenuVehicleConfigSaveData.material_asset_path");
    FUN_1439fb5b0(10,*(undefined8 *)(param_1 + 0x58),param_2);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1439fac90(0xb,*(int *)(param_1 + 0x60),param_2);
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1439fac90(0xc,*(int *)(param_1 + 100),param_2);
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_1439fac90(0xd,*(int *)(param_1 + 0x68),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141540170 FUN_141540170 body=207 status=ok
// SIG undefined FUN_141540170(void)

void FUN_141540170(undefined8 *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1[2] + 0x10) != 0) {
    FUN_1439faaa0(1,param_1[2],param_2);
  }
  if (*(int *)(param_1 + 5) != 0) {
    FUN_1439fac90(2,*(int *)(param_1 + 5),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_1439fac90(3,*(int *)((longlong)param_1 + 0x2c),param_2);
  }
  plVar2 = (longlong *)param_1[3];
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakInventoryItemSaveGameData.weapon_skin_path");
    FUN_1439fb5b0(4,param_1[3],param_2);
  }
  if ((param_1 != &DAT_1468a5b88) && (param_1[4] != 0)) {
    FUN_1439fb170(5,param_1[4],param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_143a1d7f0(param_1[1] & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141540240 FUN_141540240 body=329 status=ok
// SIG undefined FUN_141540240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141540240(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x70),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar3 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(2,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar2 * 8),
                    param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(3,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar2 * 8),
                    param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(4,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)(int)uVar2 * 8),
                    param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(5,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)(int)uVar3 * 8),
                    param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_1439fac90(6,*(int *)(param_1 + 0x74),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141540390 FUN_141540390 body=169 status=ok
// SIG undefined FUN_141540390(void)

void FUN_141540390(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakPlayerCharacterAugmentSaveGameData.slot_asset_path");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakPlayerCharacterAugmentSaveGameData.augment_asset_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141540440 FUN_141540440 body=1119 status=ok
// SIG undefined FUN_141540440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141540440(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar9 = *(uint *)(param_1 + 3);
  iVar13 = 0;
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      FUN_1439fb170(1,*(undefined8 *)(param_1[4] + 8 + (longlong)(int)uVar11 * 8),param_2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 5);
  iVar12 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = FUN_1439f1d30(param_1 + 5,iVar12);
      FUN_1439fa930(2,uVar3,param_2);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar2);
  }
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 8);
  iVar12 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = FUN_1439f1d30(param_1 + 8,iVar12);
      FUN_1439fa930(3,uVar3,param_2);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar2);
  }
  uVar9 = *(uint *)(param_1 + 0xc);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      FUN_1439fb170(4,*(undefined8 *)(param_1[0xd] + 8 + (longlong)(int)uVar11 * 8),param_2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0xf);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      FUN_1439fb170(5,*(undefined8 *)(param_1[0x10] + 8 + (longlong)(int)uVar11 * 8),param_2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x12);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      FUN_1439fb170(6,*(undefined8 *)(param_1[0x13] + 8 + (longlong)(int)uVar11 * 8),param_2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x15);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      FUN_1439fb170(7,*(undefined8 *)(param_1[0x16] + 8 + (longlong)(int)uVar11 * 8),param_2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  if (param_1[0x27] != 0) {
    FUN_1439fafd0(8,param_1[0x27],param_2);
  }
  uVar9 = *(uint *)(param_1 + 0x18);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      FUN_1439fb170(9,*(undefined8 *)(param_1[0x19] + 8 + (longlong)(int)uVar11 * 8),param_2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x1b);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      FUN_1439fb170(10,*(undefined8 *)(param_1[0x1c] + 8 + (longlong)(int)uVar11 * 8),param_2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x1e);
  uVar11 = 0;
  if (uVar9 != 0) {
    do {
      FUN_1439fb170(0xb,*(undefined8 *)(param_1[0x1f] + 8 + (longlong)(int)uVar11 * 8),param_2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x20);
  iVar12 = 0;
  if (0 < iVar2) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 0x20,iVar12);
      uVar10 = *(ulonglong *)(lVar4 + 0x10);
      puVar5 = (undefined8 *)FUN_1439f1d30(param_1 + 0x20,iVar12);
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_1439fa7f0(puVar5,uVar10 & 0xffffffff,1,"OakSave.OakProfileCloudData.mail_guids");
      uVar3 = FUN_1439f1d30(param_1 + 0x20,iVar12);
      FUN_1439fb440(0xc,uVar3,param_2);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar2);
  }
  iVar2 = FUN_1439f2ae0(param_1 + 0x23);
  if (0 < iVar2) {
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_1439f9e60(param_2,0x6a);
    }
    else {
      **(undefined1 **)(param_2 + 8) = 0x6a;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
    }
    uVar9 = *(uint *)(param_1 + 0x25);
    uVar10 = (ulonglong)uVar9;
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_1439f9e60(param_2);
    }
    else {
      pbVar1 = *(byte **)(param_2 + 8);
      pbVar7 = pbVar1;
      while (bVar8 = (byte)uVar10, 0x7f < uVar9) {
        uVar10 = uVar10 >> 7;
        *pbVar7 = bVar8 | 0x80;
        pbVar7 = pbVar7 + 1;
        uVar9 = (uint)uVar10;
      }
      *pbVar7 = bVar8;
      iVar2 = ((int)pbVar7 - (int)pbVar1) + 1;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
    }
  }
  iVar2 = FUN_1439f2ae0(param_1 + 0x23);
  if (0 < iVar2) {
    do {
      piVar6 = (int *)mu::FPhysicsBody::GetBodyBoneId(param_1 + 0x23,iVar13);
      uVar10 = (ulonglong)*piVar6;
      if (*(int *)(param_2 + 0x10) < 10) {
        FUN_1439f9ec0(param_2);
      }
      else {
        pbVar1 = *(byte **)(param_2 + 8);
        pbVar7 = pbVar1;
        for (; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
          *pbVar7 = (byte)uVar10 | 0x80;
          pbVar7 = pbVar7 + 1;
        }
        *pbVar7 = (byte)uVar10;
        iVar12 = ((int)pbVar7 - (int)pbVar1) + 1;
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar12;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar12;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar2);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1439fac90(0xe,*(int *)(param_1 + 0x28),param_2);
  }
  if ((param_1 != &DAT_1468a5d30) && (param_1[0x26] != 0)) {
    FUN_1439fb170(0xf,param_1[0x26],param_2);
  }
  if (*(char *)((longlong)param_1 + 0x144) != '\0') {
    FUN_1439fa860(0x19,*(char *)((longlong)param_1 + 0x144),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x145) != '\0') {
    FUN_1439fa860(0x1a,*(char *)((longlong)param_1 + 0x145),param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_143a1d7f0(param_1[1] & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 1415408a0 FUN_1415408a0 body=168 status=ok
// SIG undefined FUN_1415408a0(void)

void FUN_1415408a0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.PlanetCycleInfo.planet_name");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(float *)(param_1 + 0x18) != 0.0) {
    FUN_1439fae60(2,*(float *)(param_1 + 0x18),param_2);
  }
  if (*(float *)(param_1 + 0x1c) != 0.0) {
    FUN_1439fae60(3,*(float *)(param_1 + 0x1c),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141540950 FUN_141540950 body=129 status=ok
// SIG undefined FUN_141540950(void)

void FUN_141540950(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.PlayerClassSaveGameData.player_class_path")
    ;
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fb720(2,*(int *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 1415409e0 FUN_1415409e0 body=169 status=ok
// SIG undefined FUN_1415409e0(void)

void FUN_1415409e0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x18),param_2);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1439fac90(2,*(int *)(param_1 + 0x1c),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.RegionSaveGameData.region_path");
    FUN_1439fb5b0(3,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1439fb720(4,*(int *)(param_1 + 0x20),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141540a90 FUN_141540a90 body=135 status=ok
// SIG undefined FUN_141540a90(void)

void FUN_141540a90(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(float *)(param_1 + 0x18) != 0.0) {
    FUN_1439fae60(1,*(float *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.ResourcePoolSavegameData.resource_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141540b20 FUN_141540b20 body=187 status=ok
// SIG undefined FUN_141540b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141540b20(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1439fb170(1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar4 * 8),
                    param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar3 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_1439fa7f0(plVar3,*puVar1 & 0xffffffff,1,"OakSave.TimeOfDaySaveGameData.planet_cycle");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141540be0 FUN_141540be0 body=345 status=ok
// SIG undefined FUN_141540be0(void)

void FUN_141540be0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_1439fa860(1,*(char *)(param_1 + 0x28),param_2);
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    FUN_1439fa860(2,*(char *)(param_1 + 0x29),param_2);
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    FUN_1439fa860(3,*(char *)(param_1 + 0x2a),param_2);
  }
  if (*(char *)(param_1 + 0x2b) != '\0') {
    FUN_1439fa860(4,*(char *)(param_1 + 0x2b),param_2);
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    FUN_1439fa860(5,*(char *)(param_1 + 0x2c),param_2);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1439fac90(6,*(int *)(param_1 + 0x30),param_2);
  }
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      lVar3 = FUN_1439f1d30(param_1 + 0x10,iVar6);
      uVar1 = *(ulonglong *)(lVar3 + 0x10);
      puVar4 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar6);
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1439fa7f0(puVar4,uVar1 & 0xffffffff,1,
                    "OakSave.UITrackingSaveGameData.inventory_slot_unlocks_seen");
      uVar5 = FUN_1439f1d30(param_1 + 0x10,iVar6);
      FUN_1439fb440(7,uVar5,param_2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1439fac90(8,*(int *)(param_1 + 0x34),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return;
}



// FUNCTION 141540d40 FUN_141540d40 body=130 status=ok
// SIG undefined FUN_141540d40(void)

void FUN_141540d40(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.VehicleUnlockedSaveGameData.asset_path");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_1439fa860(2,*(char *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141540de0 FUN_141540de0 body=4 status=ok
// SIG undefined FUN_141540de0(void)

void FUN_141540de0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



// FUNCTION 141540e10 SetVisualEffectQuality body=4 status=ok
// SIG undefined SetVisualEffectQuality(void)

void UGameUserSettings::SetVisualEffectQuality(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// FUNCTION 141540e50 FUN_141540e50 body=4 status=ok
// SIG undefined FUN_141540e50(void)

void FUN_141540e50(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 141540e60 FUN_141540e60 body=103 status=ok
// SIG undefined FUN_141540e60(void)

void FUN_141540e60(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)*param_2;
  if (lVar2 != 0) {
    uVar1 = **(undefined4 **)(lVar2 + 8);
    if (*(int *)(param_2 + 3) != 3) {
      if ((*(int *)(param_2 + 3) == 9) && (param_2[2] != 0)) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _scalar_deleting_destructor_(param_2[2],1);
      }
      *(undefined4 *)(param_2 + 3) = 3;
    }
    *(undefined4 *)(param_2 + 2) = uVar1;
    param_2[4] = *(longlong *)(lVar2 + 8) + 4;
  }
  return;
}



// FUNCTION 141540ed0 FUN_141540ed0 body=421 status=ok
// SIG undefined FUN_141540ed0(void)

void FUN_141540ed0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_141505b50(param_1 + 0x6e,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0x6f,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0x70,&DAT_146ba2f50);
  if (param_1 != &DAT_1468a51a0) {
    puVar1 = (undefined8 *)param_1[0x71];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x72];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x73];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x74];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x75];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x76];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x77];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x78];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x79];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x7a];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x7b];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x7c];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x7d];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((longlong)param_1 + 0x43c) != 0) {
    if ((*(int *)((longlong)param_1 + 0x43c) == 0x40) &&
       (puVar1 = (undefined8 *)param_1[0x86], puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  }
  return;
}



// FUNCTION 141541080 FUN_141541080 body=118 status=ok
// SIG undefined FUN_141541080(void)

longlong FUN_141541080(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x10);
  lVar3 = (longlong)*(int *)(param_1 + 0xc) << 3;
  if (piVar1 == (int *)0x0) {
    return lVar3;
  }
  iVar5 = 0;
  if (0 < *piVar1) {
    lVar4 = 0;
    do {
      lVar2 = (**(code **)(**(longlong **)(lVar4 + 8 + (longlong)piVar1) + 0xa0))();
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + lVar2;
      piVar1 = *(int **)(param_1 + 0x10);
    } while (iVar5 < *piVar1);
  }
  return lVar3 + 8;
}



// FUNCTION 141541100 FUN_141541100 body=118 status=ok
// SIG undefined FUN_141541100(void)

longlong FUN_141541100(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  undefined1 local_20 [24];
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = FUN_141541080();
  }
  lVar1 = lVar1 + 0x18;
  plVar2 = (longlong *)FUN_140d599d0(*(undefined8 *)(param_1 + 0x88),local_20);
  local_38 = *plVar2;
  lStack_30 = plVar2[1];
  local_28 = plVar2[2];
  while (local_38 != 0) {
    lVar1 = lVar1 + 8;
    FUN_14151e830(&local_38);
  }
  return lVar1;
}



// FUNCTION 141541180 FUN_141541180 body=118 status=ok
// SIG undefined FUN_141541180(void)

longlong FUN_141541180(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  undefined1 local_20 [24];
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = FUN_141541080();
  }
  lVar1 = lVar1 + 0x18;
  plVar2 = (longlong *)FUN_140d599d0(*(undefined8 *)(param_1 + 0x88),local_20);
  local_38 = *plVar2;
  lStack_30 = plVar2[1];
  local_28 = plVar2[2];
  while (local_38 != 0) {
    lVar1 = lVar1 + 0x40;
    FUN_141500d20(&local_38);
  }
  return lVar1;
}



// FUNCTION 141541200 FUN_141541200 body=6 status=ok
// SIG undefined FUN_141541200(void)

undefined8 FUN_141541200(void)

{
  return 0x28;
}



// FUNCTION 141541210 FUN_141541210 body=452 status=ok
// SIG undefined FUN_141541210(void)

void FUN_141541210(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  if (*(longlong *)(param_1 + 0x78) == *(longlong *)(param_2 + 0x78)) {
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_2 + 0x80) = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x88) = uVar2;
  }
  else {
    local_d0 = *(undefined4 *)(param_1 + 0x80);
    local_d8 = 0;
    lVar3 = operator_new(0x30);
    local_c8 = 0;
    if (lVar3 != 0) {
      local_c8 = FUN_1415002e0(lVar3,0,local_res8,0);
    }
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_a8 = 0;
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    puVar4 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(param_1 + 0x88),local_30);
    local_80 = *puVar4;
    uStack_78 = puVar4[1];
    local_a8 = puVar4[2];
    local_98._0_4_ = (undefined4)local_80;
    local_98._4_4_ = (undefined4)((ulonglong)local_80 >> 0x20);
    uStack_90._0_4_ = (undefined4)uStack_78;
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_78 >> 0x20);
    local_b8 = (undefined4)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = (undefined4)uStack_90;
    uStack_ac = uStack_90._4_4_;
    local_98 = local_80;
    uStack_90 = uStack_78;
    local_88 = local_a8;
    local_70 = local_a8;
    FUN_14151d040(&local_d8,&local_b8,&local_68);
    FUN_14151e640(param_1 + 0x78,param_2 + 0x78);
    FUN_14151e640(param_2 + 0x78,&local_d8);
    FUN_1415421f0(&local_d8);
    lVar3 = local_c8;
    if ((local_d8 == 0) && (local_c8 != 0)) {
      if (*(longlong *)(local_c8 + 0x20) != 0) {
        FUN_141542460(local_c8);
        if (*(longlong *)(lVar3 + 0x28) == 0) {
          FMemory::operator_delete(*(undefined8 *)(lVar3 + 0x20),*(longlong *)(lVar3 + 8) << 3);
        }
      }
      FMemory::operator_delete(lVar3,0x30);
    }
  }
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 1415413e0 FUN_1415413e0 body=452 status=ok
// SIG undefined FUN_1415413e0(void)

void FUN_1415413e0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  if (*(longlong *)(param_1 + 0x78) == *(longlong *)(param_2 + 0x78)) {
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_2 + 0x80) = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x88) = uVar2;
  }
  else {
    local_d0 = *(undefined4 *)(param_1 + 0x80);
    local_d8 = 0;
    lVar3 = operator_new(0x30);
    local_c8 = 0;
    if (lVar3 != 0) {
      local_c8 = FUN_1415002e0(lVar3,0,local_res8,0);
    }
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_a8 = 0;
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    puVar4 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(param_1 + 0x88),local_30);
    local_80 = *puVar4;
    uStack_78 = puVar4[1];
    local_a8 = puVar4[2];
    local_98._0_4_ = (undefined4)local_80;
    local_98._4_4_ = (undefined4)((ulonglong)local_80 >> 0x20);
    uStack_90._0_4_ = (undefined4)uStack_78;
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_78 >> 0x20);
    local_b8 = (undefined4)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = (undefined4)uStack_90;
    uStack_ac = uStack_90._4_4_;
    local_98 = local_80;
    uStack_90 = uStack_78;
    local_88 = local_a8;
    local_70 = local_a8;
    FUN_14151d2b0(&local_d8,&local_b8,&local_68);
    FUN_14151e700(param_1 + 0x78,param_2 + 0x78);
    FUN_14151e700(param_2 + 0x78,&local_d8);
    FUN_1415422c0(&local_d8);
    lVar3 = local_c8;
    if ((local_d8 == 0) && (local_c8 != 0)) {
      if (*(longlong *)(local_c8 + 0x20) != 0) {
        FUN_141515150(local_c8);
        if (*(longlong *)(lVar3 + 0x28) == 0) {
          FMemory::operator_delete(*(undefined8 *)(lVar3 + 0x20),*(longlong *)(lVar3 + 8) << 3);
        }
      }
      FMemory::operator_delete(lVar3,0x30);
    }
  }
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 1415415b0 FUN_1415415b0 body=280 status=ok
// SIG undefined FUN_1415415b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415415b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_64 = 0;
  if (lVar1 == 0) {
    uVar3 = FUN_1439eeb00(local_60,3,
                          "D:\\Oak\\main\\Engine\\Source\\ThirdParty\\protobuf\\3.7.1\\include\\google/protobuf/map_field_inl.h"
                          ,0x143);
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: this->MapFieldBase::repeated_field_ != NULL: ");
    FUN_1439eec50(local_68,uVar3);
    DsDevice::~DsDevice(local_60);
  }
  FUN_1415421f0(param_1 + 0x78);
  puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8);
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  while( true ) {
    puVar7 = (undefined8 *)((longlong)*(int *)(lVar1 + 8) * 8);
    puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8 + (longlong)puVar7);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      puVar4 = puVar7;
    }
    if (puVar8 == puVar4) break;
    plVar2 = (longlong *)*puVar8;
    puVar5 = (undefined4 *)(**(code **)(*plVar2 + 200))(plVar2);
    uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    puVar6 = (undefined4 *)FUN_140d25480(param_1 + 0x78,uVar3);
    puVar8 = puVar8 + 1;
    *puVar6 = *puVar5;
  }
  return;
}



// FUNCTION 1415416d0 FUN_1415416d0 body=744 status=ok
// SIG undefined FUN_1415416d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141541885) */
/* WARNING: Removing unreachable block (ram,0x0001415418aa) */

void FUN_1415416d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined1 local_100 [32];
  longlong local_e0 [3];
  ulonglong local_c8;
  undefined8 local_c0;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x78);
  local_104 = 0;
  if (lVar2 == 0) {
    uVar5 = FUN_1439eeb00(local_e0,3,
                          "D:\\Oak\\main\\Engine\\Source\\ThirdParty\\protobuf\\3.7.1\\include\\google/protobuf/map_field_inl.h"
                          ,0x143);
    uVar5 = FUN_1439eef00(uVar5,"CHECK failed: this->MapFieldBase::repeated_field_ != NULL: ");
    FUN_1439eec50(local_108,uVar5);
    DsDevice::~DsDevice(local_e0);
  }
  FUN_1415422c0(plVar1);
  puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8);
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  while( true ) {
    puVar9 = (undefined8 *)((longlong)*(int *)(lVar2 + 8) * 8);
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8 + (longlong)puVar9);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      puVar6 = puVar9;
    }
    if (puVar12 == puVar6) break;
    plVar3 = (longlong *)*puVar12;
    puVar6 = (undefined8 *)(**(code **)(*plVar3 + 0xc0))(plVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_e0,puVar6);
    local_c0 = 0;
    plVar7 = (longlong *)FUN_140d5a260(uVar5,local_100,local_e0);
    lVar4 = *plVar7;
    if (0xf < local_c8) {
      uVar10 = local_c8 + 1;
      lVar8 = local_e0[0];
      if (0xfff < uVar10) {
        lVar8 = *(longlong *)(local_e0[0] + -8);
        uVar10 = local_c8 + 0x28;
        if (0x1f < (local_e0[0] - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar8,uVar10);
    }
    puVar9 = *(undefined8 **)(lVar4 + 0x20);
    if (puVar9 == (undefined8 *)0x0) {
      lVar8 = *plVar1;
      if (lVar8 == 0) {
        puVar9 = (undefined8 *)operator_new(0x40);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(puVar9,puVar6);
          puVar9[6] = 0;
          puVar9[7] = 0xf;
          *(undefined1 *)(puVar9 + 4) = 0;
        }
      }
      else {
        if (lVar8 == 0) {
          puVar9 = (undefined8 *)operator_new(0x40);
        }
        else {
          if (*(longlong *)(lVar8 + 0x70) != 0) {
            FUN_1439f01b0(lVar8,0,0x40);
          }
          puVar9 = (undefined8 *)FUN_1439efd10(lVar8,0x40);
        }
        lVar8 = *plVar1;
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        *(undefined1 *)puVar9 = 0;
        FUN_140d1e160(lVar8,puVar9);
        lVar8 = *plVar1;
        puVar9[6] = 0;
        puVar9[7] = 0xf;
        *(undefined1 *)(puVar9 + 4) = 0;
        FUN_140d1e160(lVar8);
        if (puVar9 != puVar6) {
          puVar11 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar11 = (undefined8 *)*puVar6;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (puVar9,puVar11,puVar6[2]);
        }
      }
      *(undefined8 **)(lVar4 + 0x20) = puVar9;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar3 + 200))(plVar3);
    if (puVar9 + 4 != puVar6) {
      puVar11 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar11 = (undefined8 *)*puVar6;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (puVar9 + 4,puVar11,puVar6[2]);
    }
    puVar12 = puVar12 + 1;
  }
  return;
}



// FUNCTION 1415419c0 FUN_1415419c0 body=811 status=ok
// SIG undefined FUN_1415419c0(void)

void FUN_1415419c0(longlong param_1)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  if (puVar8 == (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      puVar8 = (undefined8 *)operator_new(0x18);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *(undefined8 **)(param_1 + 0x10) = puVar8;
      }
    }
    else {
      puVar8 = (undefined8 *)FUN_141519ac0();
      *(undefined8 **)(param_1 + 0x10) = puVar8;
    }
  }
  FUN_141504400(puVar8);
  plVar9 = (longlong *)FUN_140d599d0(*(undefined8 *)(param_1 + 0x88),&local_70);
  lVar12 = *plVar9;
  lVar3 = plVar9[1];
  local_40 = plVar9[2];
  local_50._0_4_ = (undefined4)lVar12;
  local_50._4_4_ = (undefined4)((ulonglong)lVar12 >> 0x20);
  uStack_48._0_4_ = (undefined4)lVar3;
  uStack_48._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uVar11 = local_40;
  local_60 = local_40;
  lVar10 = lVar12;
  lVar7 = lVar3;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
joined_r0x000141541a7b:
  while( true ) {
    do {
      uStack_48 = lVar7;
      local_50 = lVar10;
      lVar5 = lVar12;
      if (lVar5 == 0) {
        return;
      }
      lVar10 = (**(code **)(DAT_1468a5178 + 0x10))(&DAT_1468a5178,*(undefined8 *)(param_1 + 8));
      FUN_141517ae0(puVar8,lVar10,local_78);
      puVar2 = *(undefined4 **)(lVar5 + 8);
      *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) | 1;
      *(undefined4 *)(lVar10 + 8) = *puVar2;
      lVar12 = *(longlong *)(lVar5 + 8);
      *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) | 2;
      *(undefined4 *)(lVar10 + 0xc) = *(undefined4 *)(lVar12 + 4);
      lVar12 = *(longlong *)(lVar5 + 0x10);
      lVar10 = local_50;
      lVar7 = uStack_48;
    } while (*(longlong *)(lVar5 + 0x10) != 0);
    uVar11 = *(longlong *)(lVar3 + 8) - 1U & uVar11;
    local_58 = (longlong *)0x0;
    lVar12 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar11 * 8);
    if (lVar12 == lVar5) break;
    if ((lVar12 != 0) && (lVar12 != *(longlong *)(*(longlong *)(lVar3 + 0x20) + (uVar11 ^ 1) * 8)))
    {
      for (lVar12 = *(longlong *)(lVar12 + 0x10); lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x10)
          ) {
        if (lVar12 == lVar5) goto LAB_141541c60;
      }
    }
    lVar10 = FUN_140d2ca50(lVar3,&local_50,lVar5,&local_58);
    lVar12 = *(longlong *)(lVar3 + 0x20);
    uVar11 = *(ulonglong *)(lVar10 + 0x10);
    lVar10 = *(longlong *)(lVar12 + uVar11 * 8);
    local_60 = uVar11;
    if ((lVar10 == 0) || (lVar10 != *(longlong *)(lVar12 + (uVar11 ^ 1) * 8))) break;
    plVar9 = (longlong *)local_58[2];
    if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x19);
      plVar4 = (longlong *)*plVar9;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar9 = plVar4;
        plVar4 = (longlong *)*plVar4;
      }
    }
    else {
      cVar1 = *(char *)(local_58[1] + 0x19);
      plVar6 = (longlong *)local_58[1];
      plVar4 = local_58;
      while ((plVar9 = plVar6, cVar1 == '\0' && (plVar4 == (longlong *)plVar9[2]))) {
        cVar1 = *(char *)(plVar9[1] + 0x19);
        plVar6 = (longlong *)plVar9[1];
        plVar4 = plVar9;
      }
    }
    if (plVar9 == *(longlong **)(lVar10 + 8)) {
      uVar11 = uVar11 + 2;
      if (*(ulonglong *)(lVar3 + 8) <= uVar11) {
        return;
      }
      plVar9 = (longlong *)(lVar12 + uVar11 * 8);
      do {
        lVar10 = *plVar9;
        if (lVar10 != 0) {
          if (lVar10 != *(longlong *)(lVar12 + (uVar11 ^ 1) * 8)) goto LAB_141541ca9;
          if ((lVar10 != 0) && (lVar10 == *(longlong *)(lVar12 + (uVar11 ^ 1) * 8)))
          goto LAB_141541c49;
        }
        uVar11 = uVar11 + 1;
        plVar9 = plVar9 + 1;
        if (*(ulonglong *)(lVar3 + 8) <= uVar11) {
          return;
        }
      } while( true );
    }
    lVar12 = plVar9[4];
    lVar10 = local_50;
    lVar7 = uStack_48;
  }
LAB_141541c60:
  uVar11 = uVar11 + 1;
  if (*(ulonglong *)(lVar3 + 8) <= uVar11) {
    return;
  }
  lVar12 = *(longlong *)(lVar3 + 0x20);
  plVar9 = (longlong *)(lVar12 + uVar11 * 8);
  do {
    lVar10 = *plVar9;
    if (lVar10 != 0) {
      if (lVar10 != *(longlong *)(lVar12 + (uVar11 ^ 1) * 8)) break;
      if ((lVar10 != 0) && (lVar10 == *(longlong *)(lVar12 + (uVar11 ^ 1) * 8))) goto LAB_141541c49;
    }
    uVar11 = uVar11 + 1;
    plVar9 = plVar9 + 1;
    if (*(ulonglong *)(lVar3 + 8) <= uVar11) {
      return;
    }
  } while( true );
LAB_141541ca9:
  lVar12 = *(longlong *)(lVar12 + uVar11 * 8);
  lVar10 = local_50;
  lVar7 = uStack_48;
  goto joined_r0x000141541a7b;
LAB_141541c49:
  lVar12 = *(longlong *)(**(longlong **)(*(longlong *)(lVar12 + uVar11 * 8) + 8) + 0x20);
  lVar10 = local_50;
  lVar7 = uStack_48;
  goto joined_r0x000141541a7b;
}



// FUNCTION 141541cf0 FUN_141541cf0 body=926 status=ok
// SIG undefined FUN_141541cf0(void)

void FUN_141541cf0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  local_50 = param_1;
  if (puVar5 == (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      puVar5 = (undefined8 *)operator_new(0x18);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(undefined8 **)(param_1 + 0x10) = puVar5;
      }
    }
    else {
      puVar5 = (undefined8 *)FUN_141519ac0();
      *(undefined8 **)(param_1 + 0x10) = puVar5;
    }
  }
  FUN_141504400(puVar5);
  puVar6 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(param_1 + 0x88),&local_70);
  plVar11 = (longlong *)*puVar6;
  lVar3 = puVar6[1];
  local_38 = puVar6[2];
  local_48._0_4_ = SUB84(plVar11,0);
  local_48._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
  uStack_40._0_4_ = (undefined4)lVar3;
  uStack_40._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uVar8 = local_38;
  local_60 = local_38;
  plVar2 = plVar11;
  lVar7 = lVar3;
  local_70 = (undefined4)local_48;
  uStack_6c = local_48._4_4_;
  uStack_68 = (undefined4)uStack_40;
  uStack_64 = uStack_40._4_4_;
joined_r0x000141541dad:
  while( true ) {
    do {
      uStack_40 = lVar7;
      local_48 = plVar2;
      plVar4 = plVar11;
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      lVar7 = (**(code **)(DAT_1468a55e8 + 0x10))(&DAT_1468a55e8,*(undefined8 *)(param_1 + 8));
      FUN_141517c20(puVar5,lVar7,local_78);
      puVar6 = (undefined8 *)plVar4[4];
      *(uint *)(lVar7 + 0x20) = *(uint *)(lVar7 + 0x20) | 1;
      puVar10 = *(undefined8 **)(lVar7 + 8);
      if (puVar10 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(lVar7 + 8,*(undefined8 *)(lVar7 + 0x18),&DAT_146ba2f50);
        puVar10 = *(undefined8 **)(lVar7 + 8);
      }
      if (puVar10 != puVar6) {
        puVar12 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar12 = (undefined8 *)*puVar6;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar10,puVar12,puVar6[2]);
      }
      lVar9 = plVar4[4];
      *(uint *)(lVar7 + 0x20) = *(uint *)(lVar7 + 0x20) | 2;
      puVar6 = *(undefined8 **)(lVar7 + 0x10);
      if (puVar6 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(lVar7 + 0x10,*(undefined8 *)(lVar7 + 0x18),&DAT_146ba2f50);
        puVar6 = *(undefined8 **)(lVar7 + 0x10);
      }
      puVar10 = (undefined8 *)(lVar9 + 0x20);
      if (puVar6 != puVar10) {
        if (0xf < *(ulonglong *)(lVar9 + 0x38)) {
          puVar10 = (undefined8 *)*puVar10;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar6,puVar10,*(undefined8 *)(lVar9 + 0x30));
      }
      plVar11 = (longlong *)plVar4[5];
      param_1 = local_50;
      plVar2 = local_48;
      lVar7 = uStack_40;
    } while (plVar11 != (longlong *)0x0);
    uVar8 = *(longlong *)(lVar3 + 8) - 1U & uVar8;
    plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x20) + uVar8 * 8);
    local_58 = plVar11;
    if (plVar2 == plVar4) break;
    if ((plVar2 != (longlong *)0x0) &&
       (plVar2 != *(longlong **)(*(longlong *)(lVar3 + 0x20) + (uVar8 ^ 1) * 8))) {
      for (plVar11 = (longlong *)plVar2[5]; plVar11 != (longlong *)0x0;
          plVar11 = (longlong *)plVar11[5]) {
        if (plVar11 == plVar4) goto LAB_141542000;
      }
    }
    lVar9 = FUN_140d2cbc0(lVar3,&local_48,plVar4,&local_58);
    lVar7 = *(longlong *)(lVar3 + 0x20);
    uVar8 = *(ulonglong *)(lVar9 + 0x10);
    lVar9 = *(longlong *)(lVar7 + uVar8 * 8);
    local_60 = uVar8;
    if ((lVar9 == 0) || (lVar9 != *(longlong *)(lVar7 + (uVar8 ^ 1) * 8))) break;
    plVar11 = (longlong *)local_58[2];
    if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar11 + 0x19);
      plVar2 = (longlong *)*plVar11;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar11 = plVar2;
        plVar2 = (longlong *)*plVar2;
      }
    }
    else {
      cVar1 = *(char *)(local_58[1] + 0x19);
      plVar4 = (longlong *)local_58[1];
      plVar2 = local_58;
      while ((plVar11 = plVar4, cVar1 == '\0' && (plVar2 == (longlong *)plVar11[2]))) {
        cVar1 = *(char *)(plVar11[1] + 0x19);
        plVar4 = (longlong *)plVar11[1];
        plVar2 = plVar11;
      }
    }
    if (plVar11 == *(longlong **)(lVar9 + 8)) {
      uVar8 = uVar8 + 2;
      if (*(ulonglong *)(lVar3 + 8) <= uVar8) {
        return;
      }
      plVar11 = (longlong *)(lVar7 + uVar8 * 8);
      do {
        lVar9 = *plVar11;
        if (lVar9 != 0) {
          if (lVar9 != *(longlong *)(lVar7 + (uVar8 ^ 1) * 8)) goto LAB_141542049;
          if ((lVar9 != 0) && (lVar9 == *(longlong *)(lVar7 + (uVar8 ^ 1) * 8))) goto LAB_141541fe9;
        }
        uVar8 = uVar8 + 1;
        plVar11 = plVar11 + 1;
        if (*(ulonglong *)(lVar3 + 8) <= uVar8) {
          return;
        }
      } while( true );
    }
    param_1 = local_50;
    plVar11 = (longlong *)plVar11[4];
    plVar2 = local_48;
    lVar7 = uStack_40;
  }
LAB_141542000:
  uVar8 = uVar8 + 1;
  if (*(ulonglong *)(lVar3 + 8) <= uVar8) {
    return;
  }
  lVar7 = *(longlong *)(lVar3 + 0x20);
  plVar11 = (longlong *)(lVar7 + uVar8 * 8);
  do {
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      if (lVar9 != *(longlong *)(lVar7 + (uVar8 ^ 1) * 8)) break;
      if ((lVar9 != 0) && (lVar9 == *(longlong *)(lVar7 + (uVar8 ^ 1) * 8))) goto LAB_141541fe9;
    }
    uVar8 = uVar8 + 1;
    plVar11 = plVar11 + 1;
    if (*(ulonglong *)(lVar3 + 8) <= uVar8) {
      return;
    }
  } while( true );
LAB_141542049:
  param_1 = local_50;
  plVar11 = *(longlong **)(lVar7 + uVar8 * 8);
  plVar2 = local_48;
  lVar7 = uStack_40;
  goto joined_r0x000141541dad;
LAB_141541fe9:
  param_1 = local_50;
  plVar11 = *(longlong **)(**(longlong **)(*(longlong *)(lVar7 + uVar8 * 8) + 8) + 0x20);
  plVar2 = local_48;
  lVar7 = uStack_40;
  goto joined_r0x000141541dad;
}



// FUNCTION 141542090 FUN_141542090 body=161 status=ok
// SIG undefined FUN_141542090(void)

void FUN_141542090(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar7 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0xc0))();
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (puVar1 != puVar7) {
    puVar9 = puVar7;
    if (0xf < (ulonglong)puVar7[3]) {
      puVar9 = (undefined8 *)*puVar7;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (puVar1,puVar9,puVar7[2]);
  }
  uVar8 = FUN_140d256b0(*(undefined8 *)(param_1 + 8),puVar1);
  lVar2 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  puVar1 = (undefined8 *)(lVar2 + 0x10);
  *(uint *)(lVar2 + 0x20) = *(uint *)(lVar2 + 0x20) | 2;
  puVar7 = (undefined8 *)*puVar1;
  if (puVar7 == (undefined8 *)&DAT_146ba2f50) {
    FUN_141505a20(puVar1,*(undefined8 *)(lVar2 + 0x18));
    puVar7 = (undefined8 *)*puVar1;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  uVar8 = puVar7[1];
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *puVar1 = *puVar7;
  puVar1[1] = uVar8;
  uVar8 = puVar7[3];
  puVar1[2] = puVar7[2];
  puVar1[3] = uVar8;
  *puVar7 = uVar3;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  return;
}



// FUNCTION 141542140 FUN_141542140 body=120 status=ok
// SIG undefined FUN_141542140(void)

byte * FUN_141542140(undefined8 param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  iVar1 = FUN_1439f2ae0();
  lVar2 = FUN_1405b74e0(param_1);
  lVar4 = 0;
  do {
    for (uVar3 = (ulonglong)*(int *)(lVar2 + lVar4 * 4); 0x7f < uVar3; uVar3 = uVar3 >> 7) {
      *param_2 = (byte)uVar3 | 0x80;
      param_2 = param_2 + 1;
    }
    *param_2 = (byte)uVar3;
    lVar4 = lVar4 + 1;
    param_2 = param_2 + 1;
  } while (lVar4 < iVar1);
  return param_2;
}



// FUNCTION 1415421c0 FUN_1415421c0 body=44 status=ok
// SIG undefined FUN_1415421c0(void)

byte * FUN_1415421c0(uint param_1,byte *param_2)

{
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *param_2 = (byte)param_1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)param_1;
  return param_2 + 1;
}



// FUNCTION 1415421f0 FUN_1415421f0 body=208 status=ok
// SIG undefined FUN_1415421f0(void)

void FUN_1415421f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_28 [2] [16];
  
  pauVar3 = (undefined1 (*) [16])FUN_140d599d0(param_1[2],local_28);
  auVar4 = *pauVar3;
  local_68 = auVar4._0_4_;
  uStack_64 = auVar4._4_4_;
  uStack_60 = auVar4._8_4_;
  uStack_5c = auVar4._12_4_;
  lVar1 = auVar4._0_8_;
  uVar2 = *(undefined8 *)pauVar3[1];
  while (lVar1 != 0) {
    local_58 = uVar2;
    if ((*param_1 == 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      FMemory::operator_delete(*(longlong *)(lVar1 + 8),8,param_3,param_4,auVar4);
    }
    FUN_14151e830(&local_68);
    local_48 = auVar4._0_4_;
    uStack_44 = auVar4._4_4_;
    uStack_40 = auVar4._8_4_;
    uStack_3c = auVar4._12_4_;
    local_38 = uVar2;
    FUN_141542e30(param_1[2],&local_48);
    lVar1 = CONCAT44(uStack_64,local_68);
    auVar4._8_4_ = uStack_60;
    auVar4._0_8_ = lVar1;
    auVar4._12_4_ = uStack_5c;
    uVar2 = local_58;
    local_28[0] = auVar4;
  }
  return;
}



// FUNCTION 1415422c0 FUN_1415422c0 body=404 status=ok
// SIG undefined FUN_1415422c0(void)

void FUN_1415422c0(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  ulonglong uVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_28 [2] [16];
  
  pauVar6 = (undefined1 (*) [16])FUN_140d599d0(param_1[2],local_28);
  auVar1 = *pauVar6;
  local_68 = auVar1._0_4_;
  uStack_64 = auVar1._4_4_;
  uStack_60 = auVar1._8_4_;
  uStack_5c = auVar1._12_4_;
  lVar4 = auVar1._0_8_;
  uVar5 = *(undefined8 *)pauVar6[1];
  do {
    if (lVar4 == 0) {
      return;
    }
    local_58 = uVar5;
    if ((*param_1 == 0) && (plVar2 = *(longlong **)(lVar4 + 0x20), plVar2 != (longlong *)0x0)) {
      uVar3 = plVar2[7];
      if (0xf < uVar3) {
        lVar4 = plVar2[4];
        uVar8 = uVar3 + 1;
        lVar7 = lVar4;
        if (0xfff < uVar8) {
          lVar7 = *(longlong *)(lVar4 + -8);
          uVar8 = uVar3 + 0x28;
          if (0x1f < (lVar4 - lVar7) - 8U) goto LAB_141542435;
        }
        FMemory::operator_delete(lVar7,uVar8);
      }
      plVar2[6] = 0;
      plVar2[7] = 0xf;
      *(undefined1 *)(plVar2 + 4) = 0;
      uVar3 = plVar2[3];
      if (0xf < uVar3) {
        lVar4 = *plVar2;
        uVar8 = uVar3 + 1;
        lVar7 = lVar4;
        if (0xfff < uVar8) {
          lVar7 = *(longlong *)(lVar4 + -8);
          uVar8 = uVar3 + 0x28;
          if (0x1f < (lVar4 - lVar7) - 8U) {
LAB_141542435:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar7,uVar8);
      }
      plVar2[2] = 0;
      plVar2[3] = 0xf;
      *(undefined1 *)plVar2 = 0;
      FMemory::operator_delete(plVar2,0x40);
    }
    FUN_141500d20(&local_68);
    local_78 = auVar1._0_4_;
    uStack_74 = auVar1._4_4_;
    uStack_70 = auVar1._8_4_;
    uStack_6c = auVar1._12_4_;
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    local_38 = uVar5;
    FUN_1415159d0(param_1[2],&local_48);
    lVar4 = CONCAT44(uStack_64,local_68);
    auVar1._8_4_ = uStack_60;
    auVar1._0_8_ = lVar4;
    auVar1._12_4_ = uStack_5c;
    uVar5 = local_58;
    local_28[0] = auVar1;
  } while( true );
}



// FUNCTION 141542460 FUN_141542460 body=499 status=ok
// SIG undefined FUN_141542460(void)

void FUN_141542460(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 local_38 [16];
  
  uVar11 = 0;
  if (param_1[1] != 0) {
    do {
      lVar2 = param_1[4];
      plVar6 = *(longlong **)(lVar2 + uVar11 * 8);
      if ((plVar6 == (longlong *)0x0) || (plVar6 == *(longlong **)(lVar2 + (uVar11 ^ 1) * 8))) {
        if ((plVar6 != (longlong *)0x0) && (plVar6 == *(longlong **)(lVar2 + (uVar11 ^ 1) * 8))) {
          *(undefined8 *)(lVar2 + 8 + uVar11 * 8) = 0;
          *(undefined8 *)(param_1[4] + uVar11 * 8) = 0;
          plVar8 = *(longlong **)plVar6[1];
          do {
            plVar3 = (longlong *)plVar8[2];
            lVar2 = plVar8[4];
            if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar3 + 0x19);
              plVar9 = plVar3;
              plVar4 = (longlong *)*plVar3;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar4 + 0x19);
                plVar9 = plVar4;
                plVar4 = (longlong *)*plVar4;
              }
            }
            else {
              cVar1 = *(char *)(plVar8[1] + 0x19);
              plVar5 = (longlong *)plVar8[1];
              plVar4 = plVar8;
              while ((plVar9 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar9[2]))) {
                cVar1 = *(char *)(plVar9[1] + 0x19);
                plVar5 = (longlong *)plVar9[1];
                plVar4 = plVar9;
              }
            }
            if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
              plVar3 = (longlong *)*plVar3;
              cVar1 = *(char *)((longlong)plVar3 + 0x19);
              while (cVar1 == '\0') {
                plVar3 = (longlong *)*plVar3;
                cVar1 = *(char *)((longlong)plVar3 + 0x19);
              }
            }
            else {
              cVar1 = *(char *)(plVar8[1] + 0x19);
              plVar3 = (longlong *)plVar8[1];
              while ((plVar4 = plVar3, cVar1 == '\0' && (plVar8 == (longlong *)plVar4[2]))) {
                cVar1 = *(char *)(plVar4[1] + 0x19);
                plVar3 = (longlong *)plVar4[1];
                plVar8 = plVar4;
              }
            }
            uVar7 = FUN_140632130(plVar6 + 1);
            if (*plVar6 == 0) {
              FMemory::operator_delete(uVar7,0x28);
            }
            lVar10 = param_1[5];
            if (lVar10 == 0) {
              FMemory::operator_delete(lVar2,0x18);
              lVar10 = param_1[5];
            }
            plVar3 = (longlong *)plVar6[1];
            plVar8 = plVar9;
          } while (plVar9 != plVar3);
          FUN_140d5a080(plVar6,local_38,*plVar3,plVar3);
          if (*plVar6 == 0) {
            FMemory::operator_delete(plVar6[1],0x28);
          }
          if (lVar10 == 0) {
            FMemory::operator_delete(plVar6,0x18);
          }
          uVar11 = uVar11 + 1;
        }
      }
      else {
        *(undefined8 *)(lVar2 + uVar11 * 8) = 0;
        do {
          plVar8 = (longlong *)plVar6[2];
          if (param_1[5] == 0) {
            FMemory::operator_delete(plVar6,0x18);
          }
          plVar6 = plVar8;
        } while (plVar8 != (longlong *)0x0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulonglong)param_1[1]);
  }
  param_1[3] = param_1[1];
  *param_1 = 0;
  return;
}



// FUNCTION 141542660 FUN_141542660 body=97 status=ok
// SIG undefined FUN_141542660(void)

void FUN_141542660(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x138);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x140);
    do {
      FUN_141546d20(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return;
}



// FUNCTION 1415426d0 FUN_1415426d0 body=97 status=ok
// SIG undefined FUN_1415426d0(void)

void FUN_1415426d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0xf8);
    do {
      FUN_141546d20(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 141542740 FUN_141542740 body=94 status=ok
// SIG undefined FUN_141542740(void)

void FUN_141542740(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x50);
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1415427a0 FUN_1415427a0 body=94 status=ok
// SIG undefined FUN_1415427a0(void)

void FUN_1415427a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x68);
    do {
      FUN_141525dc0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 141542800 FUN_141542800 body=94 status=ok
// SIG undefined FUN_141542800(void)

void FUN_141542800(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x68);
    do {
      FUN_141546eb0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 141542860 FUN_141542860 body=72 status=ok
// SIG undefined FUN_141542860(void)

void FUN_141542860(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x43c) == 0x40) {
    puVar1 = *(undefined8 **)(param_1 + 0x430);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined4 *)(param_1 + 0x43c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x43c) = 0;
  return;
}



// FUNCTION 1415428b0 FUN_1415428b0 body=94 status=ok
// SIG undefined FUN_1415428b0(void)

void FUN_1415428b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x80);
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 141542910 FUN_141542910 body=97 status=ok
// SIG undefined FUN_141542910(void)

void FUN_141542910(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x2b8);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x2c0);
    do {
      FUN_141546fb0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  return;
}



// FUNCTION 141542980 FUN_141542980 body=97 status=ok
// SIG undefined FUN_141542980(void)

void FUN_141542980(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x150);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x158);
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1415429f0 FUN_1415429f0 body=97 status=ok
// SIG undefined FUN_1415429f0(void)

void FUN_1415429f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 200);
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 141542a60 FUN_141542a60 body=97 status=ok
// SIG undefined FUN_141542a60(void)

void FUN_141542a60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0xe0);
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 141542ad0 FUN_141542ad0 body=97 status=ok
// SIG undefined FUN_141542ad0(void)

void FUN_141542ad0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x98);
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return;
}



// FUNCTION 141542b40 FUN_141542b40 body=97 status=ok
// SIG undefined FUN_141542b40(void)

void FUN_141542b40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0xb0);
    do {
      FUN_141546e80(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 141542bb0 FUN_141542bb0 body=176 status=ok
// SIG undefined FUN_141542bb0(void)

undefined8 FUN_141542bb0(longlong *param_1,undefined8 param_2)

{
  longlong local_28 [4];
  
  FUN_140d2ca50(param_1[2],local_28,param_2,0);
  if (local_28[0] == 0) {
    return 0;
  }
  if ((*param_1 == 0) && (*(longlong *)(local_28[0] + 8) != 0)) {
    FMemory::operator_delete(*(longlong *)(local_28[0] + 8),8);
  }
  FUN_14151e830(local_28);
  FUN_141542e30(param_1[2],local_28);
  return 1;
}



// FUNCTION 141542c60 FUN_141542c60 body=334 status=ok
// SIG undefined FUN_141542c60(void)

longlong * FUN_141542c60(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  if ((*param_1 == 0) && (plVar1 = *(longlong **)(*param_3 + 0x20), plVar1 != (longlong *)0x0)) {
    uVar2 = plVar1[7];
    if (0xf < uVar2) {
      lVar3 = plVar1[4];
      uVar5 = uVar2 + 1;
      lVar4 = lVar3;
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(lVar3 + -8);
        uVar5 = uVar2 + 0x28;
        if (0x1f < (lVar3 - lVar4) - 8U) goto LAB_141542da8;
      }
      FMemory::operator_delete(lVar4,uVar5);
    }
    plVar1[6] = 0;
    plVar1[7] = 0xf;
    *(undefined1 *)(plVar1 + 4) = 0;
    uVar2 = plVar1[3];
    if (0xf < uVar2) {
      lVar3 = *plVar1;
      uVar5 = uVar2 + 1;
      lVar4 = lVar3;
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(lVar3 + -8);
        uVar5 = uVar2 + 0x28;
        if (0x1f < (lVar3 - lVar4) - 8U) {
LAB_141542da8:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar4,uVar5);
    }
    plVar1[2] = 0;
    plVar1[3] = 0xf;
    *(undefined1 *)plVar1 = 0;
    FMemory::operator_delete(plVar1,0x40);
  }
  local_28 = *param_3;
  lStack_20 = param_3[1];
  lVar3 = param_3[2];
  FUN_141500d20(param_3);
  local_18 = lVar3;
  FUN_1415159d0(param_1[2],&local_28);
  lVar4 = param_3[1];
  lVar3 = param_3[2];
  *param_2 = *param_3;
  param_2[1] = lVar4;
  param_2[2] = lVar3;
  return param_2;
}



// FUNCTION 141542db0 FUN_141542db0 body=123 status=ok
// SIG undefined FUN_141542db0(void)

undefined8 FUN_141542db0(longlong param_1,undefined8 param_2)

{
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_18;
  
  FUN_140d2cbc0(*(undefined8 *)(param_1 + 0x10),&local_28,param_2,0);
  local_38 = local_18;
  if (CONCAT44(uStack_24,local_28) == 0) {
    return 0;
  }
  FUN_141542c60(param_1,local_48,&local_28);
  return 1;
}



// FUNCTION 141542e30 FUN_141542e30 body=639 status=ok
// SIG undefined FUN_141542e30(void)

void FUN_141542e30(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong local_58 [3];
  ulonglong local_40;
  undefined1 local_38 [32];
  
  lVar2 = param_2[1];
  local_58[0] = 0;
  lVar6 = *(longlong *)(lVar2 + 0x20);
  uVar8 = *(longlong *)(lVar2 + 8) - 1U & param_2[2];
  lVar3 = *param_2;
  param_2[2] = uVar8;
  lVar4 = *(longlong *)(lVar6 + uVar8 * 8);
  if (lVar4 == lVar3) {
LAB_141542e72:
    bVar5 = true;
  }
  else {
    if ((lVar4 != 0) && (lVar4 != *(longlong *)(lVar6 + (uVar8 ^ 1) * 8))) {
      for (lVar6 = *(longlong *)(lVar4 + 0x10); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x10)) {
        if (lVar6 == lVar3) goto LAB_141542e72;
      }
    }
    lVar6 = FUN_140d2ca50(lVar2,local_38,lVar3,local_58);
    lVar2 = *(longlong *)(lVar2 + 0x20);
    local_40 = *(ulonglong *)(lVar6 + 0x10);
    param_2[2] = local_40;
    lVar6 = *(longlong *)(lVar2 + local_40 * 8);
    if ((lVar6 == 0) || (lVar6 != *(longlong *)(lVar2 + (local_40 ^ 1) * 8))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  uVar8 = param_2[2];
  lVar2 = *(longlong *)(param_1[4] + uVar8 * 8);
  if (bVar5) {
    if (lVar2 == lVar3) {
      *(undefined8 *)(param_1[4] + uVar8 * 8) = *(undefined8 *)(lVar2 + 0x10);
    }
    else {
      uVar7 = FUN_141529070(param_1,lVar3);
      *(undefined8 *)(lVar2 + 0x10) = uVar7;
      *(longlong *)(param_1[4] + uVar8 * 8) = lVar2;
    }
  }
  else {
    puVar13 = *(undefined8 **)(lVar2 + 8);
    puVar10 = (undefined8 *)puVar13[1];
    puVar15 = puVar13;
    if (*(char *)((longlong)puVar10 + 0x19) == '\0') {
      puVar11 = puVar13;
      puVar14 = puVar10;
      do {
        puVar13 = puVar14;
        if (*(uint *)puVar13[4] < **(uint **)(local_58[0] + 0x20)) {
          puVar14 = (undefined8 *)puVar13[2];
          puVar13 = puVar11;
        }
        else {
          if ((*(char *)((longlong)puVar15 + 0x19) != '\0') &&
             (**(uint **)(local_58[0] + 0x20) < *(uint *)puVar13[4])) {
            puVar15 = puVar13;
          }
          puVar14 = (undefined8 *)*puVar13;
        }
        puVar11 = puVar13;
      } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
    }
    if (*(char *)((longlong)puVar15 + 0x19) == '\0') {
      puVar10 = (undefined8 *)*puVar15;
    }
    puVar14 = puVar13;
    if (*(char *)((longlong)puVar10 + 0x19) == '\0') {
      do {
        if (**(uint **)(local_58[0] + 0x20) < *(uint *)puVar10[4]) {
          puVar11 = (undefined8 *)*puVar10;
          puVar15 = puVar10;
        }
        else {
          puVar11 = (undefined8 *)puVar10[2];
        }
        puVar10 = puVar11;
      } while (*(char *)((longlong)puVar11 + 0x19) == '\0');
    }
    while (puVar14 != puVar15) {
      puVar10 = (undefined8 *)puVar14[2];
      if (*(char *)((longlong)puVar10 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)*puVar10 + 0x19);
        puVar14 = puVar10;
        puVar10 = (undefined8 *)*puVar10;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar10 + 0x19);
          puVar14 = puVar10;
          puVar10 = (undefined8 *)*puVar10;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar11 = (undefined8 *)puVar14[1];
        puVar10 = puVar14;
        while ((puVar14 = puVar11, cVar1 == '\0' && (puVar10 == (undefined8 *)puVar14[2]))) {
          cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
          puVar11 = (undefined8 *)puVar14[1];
          puVar10 = puVar14;
        }
      }
    }
    FUN_140d5a080(lVar2,local_58,puVar13);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      uVar8 = uVar8 & 0xfffffffffffffffe;
      FUN_141505c50(param_1,lVar2);
      *(undefined8 *)(param_1[4] + 8 + uVar8 * 8) = 0;
      *(undefined8 *)(param_1[4] + uVar8 * 8) = 0;
    }
  }
  if (param_1[5] == 0) {
    FMemory::operator_delete(lVar3,0x18);
  }
  *param_1 = *param_1 + -1;
  uVar9 = param_1[3];
  if ((uVar8 == uVar9) && (uVar9 < (ulonglong)param_1[1])) {
    plVar12 = (longlong *)(param_1[4] + uVar9 * 8);
    do {
      if (*plVar12 != 0) {
        return;
      }
      uVar9 = uVar9 + 1;
      plVar12 = plVar12 + 1;
      param_1[3] = uVar9;
    } while (uVar9 < (ulonglong)param_1[1]);
  }
  return;
}



// FUNCTION 1415430b0 FUN_1415430b0 body=41 status=ok
// SIG undefined FUN_1415430b0(void)

void FUN_1415430b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x390) == 0) {
    uVar1 = FUN_141519320(0);
    *(undefined8 *)(param_1 + 0x390) = uVar1;
  }
  return;
}



// FUNCTION 1415430e0 FUN_1415430e0 body=41 status=ok
// SIG undefined FUN_1415430e0(void)

void FUN_1415430e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x398) == 0) {
    uVar1 = FUN_1415185c0(0);
    *(undefined8 *)(param_1 + 0x398) = uVar1;
  }
  return;
}



// FUNCTION 141543110 FUN_141543110 body=41 status=ok
// SIG undefined FUN_141543110(void)

void FUN_141543110(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3a0) == 0) {
    uVar1 = FUN_141518bc0(0);
    *(undefined8 *)(param_1 + 0x3a0) = uVar1;
  }
  return;
}



// FUNCTION 141543140 FUN_141543140 body=41 status=ok
// SIG undefined FUN_141543140(void)

void FUN_141543140(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3b8) == 0) {
    uVar1 = FUN_141518de0(0);
    *(undefined8 *)(param_1 + 0x3b8) = uVar1;
  }
  return;
}



// FUNCTION 141543170 FUN_141543170 body=41 status=ok
// SIG undefined FUN_141543170(void)

void FUN_141543170(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x388) == 0) {
    uVar1 = FUN_1415195f0(0);
    *(undefined8 *)(param_1 + 0x388) = uVar1;
  }
  return;
}



// FUNCTION 1415431a0 FUN_1415431a0 body=161 status=ok
// SIG undefined FUN_1415431a0(void)

ulonglong FUN_1415431a0(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 local_30 [40];
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar4 = *(longlong *)(uVar1 + 8) - 1U & param_1[2];
  param_1[2] = uVar4;
  uVar3 = *(ulonglong *)(*(longlong *)(uVar1 + 0x20) + uVar4 * 8);
  if (uVar3 != uVar2) {
    if ((uVar3 != 0) && (uVar3 != *(ulonglong *)(*(longlong *)(uVar1 + 0x20) + (uVar4 ^ 1) * 8))) {
      for (uVar4 = *(ulonglong *)(uVar3 + 0x10); uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0x10)) {
        if (uVar4 == uVar2) goto LAB_141543239;
      }
    }
    lVar5 = FUN_140d2ca50(uVar1,local_30,uVar2,param_2);
    uVar1 = *(ulonglong *)(lVar5 + 0x10);
    param_1[2] = uVar1;
    uVar4 = *(ulonglong *)(*(longlong *)(param_1[1] + 0x20) + uVar1 * 8);
    if ((uVar4 != 0) &&
       (uVar4 == *(ulonglong *)(*(longlong *)(param_1[1] + 0x20) + (uVar1 ^ 1) * 8))) {
      return uVar4 & 0xffffffffffffff00;
    }
  }
LAB_141543239:
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 141543280 FUN_141543280 body=84 status=ok
// SIG undefined FUN_141543280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141543280(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a6340 = &PTR__scalar_deleting_destructor__144c67550;
  _DAT_1468a6348 = 0;
  _DAT_1468a6358 = 0;
  _DAT_1468a6350 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a6340);
  return;
}



// FUNCTION 1415432e0 FUN_1415432e0 body=128 status=ok
// SIG undefined FUN_1415432e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415432e0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  _DAT_1468a6088 = 0;
  DAT_1468a6080 = &PTR_FUN_144c67610;
  _DAT_1468a609c = 0;
  if (DAT_1464a0d08 != 0) {
    FUN_1439f44f0(&DAT_1464a0d08);
  }
  _DAT_1468a6098 = 0;
  _DAT_1468a6090 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a6080);
  return;
}



// FUNCTION 141543360 FUN_141543360 body=83 status=ok
// SIG undefined FUN_141543360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141543360(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a60a0 = &PTR__scalar_deleting_destructor__144c676d0;
  _DAT_1468a60a8 = 0;
  _DAT_1468a60b8 = 0;
  _DAT_1468a60b0 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a60a0);
  return;
}



// FUNCTION 1415433c0 FUN_1415433c0 body=128 status=ok
// SIG undefined FUN_1415433c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415433c0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  _DAT_1468a6188 = 0;
  DAT_1468a6180 = &PTR_FUN_144c67790;
  _DAT_1468a619c = 0;
  if (DAT_1464a0d38 != 0) {
    FUN_1439f44f0(&DAT_1464a0d38);
  }
  _DAT_1468a6198 = 0;
  _DAT_1468a6190 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a6180);
  return;
}



// FUNCTION 141543440 FUN_141543440 body=90 status=ok
// SIG undefined FUN_141543440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141543440(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a61a0 = &PTR__scalar_deleting_destructor__144c67850;
  _DAT_1468a61a8 = 0;
  _DAT_1468a61bc = 0;
  _DAT_1468a61b0 = 0;
  _DAT_1468a61b8 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a61a0);
  return;
}



// FUNCTION 1415434a0 FUN_1415434a0 body=59 status=ok
// SIG undefined FUN_1415434a0(void)

void FUN_1415434a0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  FUN_141545360(&DAT_1468a61c0);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a61c0);
  return;
}



// FUNCTION 1415434e0 FUN_1415434e0 body=128 status=ok
// SIG undefined FUN_1415434e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415434e0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  _DAT_1468a6028 = 0;
  DAT_1468a6020 = &PTR_FUN_144c679d0;
  _DAT_1468a603c = 0;
  if (DAT_1464a0c40 != 0) {
    FUN_1439f44f0(&DAT_1464a0c40);
  }
  _DAT_1468a6038 = 0;
  _DAT_1468a6030 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a6020);
  return;
}



// FUNCTION 141543560 FUN_141543560 body=82 status=ok
// SIG undefined FUN_141543560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141543560(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a60c0 = &PTR__scalar_deleting_destructor__144c67a90;
  _DAT_1468a60c8 = 0;
  _DAT_1468a60d4 = 0;
  DAT_1468a60d0 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a60c0);
  return;
}



// FUNCTION 1415435c0 FUN_1415435c0 body=59 status=ok
// SIG undefined FUN_1415435c0(void)

void FUN_1415435c0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  FUN_141544fa0(&DAT_1468a5fc0);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5fc0);
  return;
}



// FUNCTION 141543600 FUN_141543600 body=59 status=ok
// SIG undefined FUN_141543600(void)

void FUN_141543600(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  FUN_1415450d0(&DAT_1468a6120);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a6120);
  return;
}



// FUNCTION 141543640 FUN_141543640 body=119 status=ok
// SIG undefined FUN_141543640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141543640(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a60d8 = &PTR_FUN_144c67cd0;
  _DAT_1468a60e0 = 0;
  _DAT_1468a60f4 = 0;
  if (DAT_1464a0da0 != 0) {
    FUN_1439f44f0(&DAT_1464a0da0);
  }
  DAT_1468a60f0 = 0;
  _DAT_1468a60e8 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a60d8);
  return;
}



// FUNCTION 1415436c0 FUN_1415436c0 body=88 status=ok
// SIG undefined FUN_1415436c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415436c0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a60f8 = &PTR__scalar_deleting_destructor__144c67d90;
  _DAT_1468a6100 = 0;
  _DAT_1468a6110 = 0;
  _DAT_1468a6108 = 0;
  DAT_1468a610c = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a60f8);
  return;
}



// FUNCTION 141543720 FUN_141543720 body=119 status=ok
// SIG undefined FUN_141543720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141543720(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a6040 = &PTR_FUN_144c67e50;
  _DAT_1468a6048 = 0;
  _DAT_1468a605c = 0;
  if (DAT_1464a0dd0 != 0) {
    FUN_1439f44f0(&DAT_1464a0dd0);
  }
  DAT_1468a6058 = 0;
  _DAT_1468a6050 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a6040);
  return;
}



// FUNCTION 1415437a0 FUN_1415437a0 body=119 status=ok
// SIG undefined FUN_1415437a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415437a0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a6060 = &PTR_FUN_144c67f10;
  _DAT_1468a6068 = 0;
  _DAT_1468a607c = 0;
  if (DAT_1464a0de8 != 0) {
    FUN_1439f44f0(&DAT_1464a0de8);
  }
  DAT_1468a6078 = 0;
  _DAT_1468a6070 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a6060);
  return;
}



// FUNCTION 141543820 FUN_141543820 body=152 status=ok
// SIG undefined FUN_141543820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141543820(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a62f0 = &PTR_FUN_144c67fd0;
  _DAT_1468a62f8 = 0;
  _DAT_1468a6300 = 0;
  _DAT_1468a6308 = 0;
  _DAT_1468a6320 = 0;
  DAT_1468a6328 = 0;
  _DAT_1468a633c = 0;
  DAT_1468a6310 = 0;
  uRam00000001468a6318 = 0;
  if (DAT_1464a0e00 != 0) {
    FUN_1439f44f0(&DAT_1464a0e00);
  }
  _DAT_1468a6330 = 0;
  DAT_1468a6338 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a62f0);
  return;
}



// FUNCTION 1415438c0 FUN_1415438c0 body=83 status=ok
// SIG undefined FUN_1415438c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415438c0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a6250 = &PTR__scalar_deleting_destructor__144c68090;
  _DAT_1468a6258 = 0;
  _DAT_1468a6268 = 0;
  _DAT_1468a6260 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a6250);
  return;
}



// FUNCTION 141543920 FUN_141543920 body=83 status=ok
// SIG undefined FUN_141543920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141543920(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a6210 = &PTR__scalar_deleting_destructor__144c68150;
  _DAT_1468a6218 = 0;
  _DAT_1468a6228 = 0;
  _DAT_1468a6220 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a6210);
  return;
}



// FUNCTION 141543980 FUN_141543980 body=59 status=ok
// SIG undefined FUN_141543980(void)

void FUN_141543980(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  FUN_1415455d0(&DAT_1468a6270);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a6270);
  return;
}



// FUNCTION 1415439c0 FUN_1415439c0 body=83 status=ok
// SIG undefined FUN_1415439c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415439c0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,
                "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakShared.pb.cc");
  DAT_1468a6230 = &PTR__scalar_deleting_destructor__144c682d0;
  _DAT_1468a6238 = 0;
  _DAT_1468a6248 = 0;
  _DAT_1468a6240 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a6230);
  return;
}



// FUNCTION 141543a20 FUN_141543a20 body=431 status=ok
// SIG undefined FUN_141543a20(void)

void FUN_141543a20(void)

{
  if (DAT_1464a0cf0 != 0) {
    FUN_1439f44f0(&DAT_1464a0cf0);
  }
  if (DAT_1464a0d08 != 0) {
    FUN_1439f44f0(&DAT_1464a0d08);
  }
  if (DAT_1464a0d20 != 0) {
    FUN_1439f44f0(&DAT_1464a0d20);
  }
  if (DAT_1464a0d38 != 0) {
    FUN_1439f44f0(&DAT_1464a0d38);
  }
  if (DAT_1464a0c70 != 0) {
    FUN_1439f44f0(&DAT_1464a0c70);
  }
  if (DAT_1464a0d50 != 0) {
    FUN_1439f44f0(&DAT_1464a0d50);
  }
  if (DAT_1464a0c40 != 0) {
    FUN_1439f44f0(&DAT_1464a0c40);
  }
  if (DAT_1464a0c58 != 0) {
    FUN_1439f44f0(&DAT_1464a0c58);
  }
  if (DAT_1464a0d68 != 0) {
    FUN_1439f44f0(&DAT_1464a0d68);
  }
  if (DAT_1464a0d88 != 0) {
    FUN_1439f44f0(&DAT_1464a0d88);
  }
  if (DAT_1464a0da0 != 0) {
    FUN_1439f44f0(&DAT_1464a0da0);
  }
  if (DAT_1464a0db8 != 0) {
    FUN_1439f44f0(&DAT_1464a0db8);
  }
  if (DAT_1464a0dd0 != 0) {
    FUN_1439f44f0(&DAT_1464a0dd0);
  }
  if (DAT_1464a0de8 != 0) {
    FUN_1439f44f0(&DAT_1464a0de8);
  }
  if (DAT_1464a0e00 != 0) {
    FUN_1439f44f0(&DAT_1464a0e00);
  }
  if (DAT_1464a0cb8 != 0) {
    FUN_1439f44f0(&DAT_1464a0cb8);
  }
  if (DAT_1464a0c88 != 0) {
    FUN_1439f44f0(&DAT_1464a0c88);
  }
  if (DAT_1464a0cd0 != 0) {
    FUN_1439f44f0(&DAT_1464a0cd0);
  }
  if (DAT_1464a0ca0 != 0) {
    FUN_1439f44f0(&DAT_1464a0ca0);
    return;
  }
  return;
}



// FUNCTION 141543bd0 FUN_141543bd0 body=84 status=ok
// SIG undefined FUN_141543bd0(void)

void FUN_141543bd0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x60);
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x60);
    }
    lVar1 = FUN_1439efdc0(param_1,0x60,&LAB_140d1e6c0);
  }
  FUN_141544fa0(lVar1);
  return;
}



// FUNCTION 141543c30 FUN_141543c30 body=165 status=ok
// SIG undefined FUN_141543c30(void)

undefined8 * FUN_141543c30(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar2 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
    *puVar2 = &PTR_FUN_144c679d0;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    if (DAT_1464a0c40 != 0) {
      FUN_1439f44f0(&DAT_1464a0c40);
    }
    *(undefined4 *)(puVar2 + 3) = 0;
    puVar2[2] = &DAT_146ba2f50;
    return puVar2;
  }
  lVar1 = operator_new(0x20);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_141545010(lVar1);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141543ce0 FUN_141543ce0 body=169 status=ok
// SIG undefined FUN_141543ce0(void)

undefined8 * FUN_141543ce0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar1 = &PTR_FUN_144c67e50;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
    *puVar1 = &PTR_FUN_144c67e50;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  }
  if (DAT_1464a0dd0 != 0) {
    FUN_1439f44f0(&DAT_1464a0dd0);
  }
  puVar1[2] = &DAT_146ba2f50;
  *(undefined1 *)(puVar1 + 3) = 0;
  return puVar1;
}



// FUNCTION 141543d90 FUN_141543d90 body=169 status=ok
// SIG undefined FUN_141543d90(void)

undefined8 * FUN_141543d90(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar1 = &PTR_FUN_144c67f10;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
    *puVar1 = &PTR_FUN_144c67f10;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  }
  if (DAT_1464a0de8 != 0) {
    FUN_1439f44f0(&DAT_1464a0de8);
  }
  puVar1[2] = &DAT_146ba2f50;
  *(undefined1 *)(puVar1 + 3) = 0;
  return puVar1;
}



// FUNCTION 141543e40 FUN_141543e40 body=165 status=ok
// SIG undefined FUN_141543e40(void)

undefined8 * FUN_141543e40(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar2 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
    *puVar2 = &PTR_FUN_144c67610;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    if (DAT_1464a0d08 != 0) {
      FUN_1439f44f0(&DAT_1464a0d08);
    }
    *(undefined4 *)(puVar2 + 3) = 0;
    puVar2[2] = &DAT_146ba2f50;
    return puVar2;
  }
  lVar1 = operator_new(0x20);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_141545070(lVar1);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141543ef0 FUN_141543ef0 body=104 status=ok
// SIG undefined FUN_141543ef0(void)

undefined8 * FUN_141543ef0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
  }
  *puVar1 = &PTR__scalar_deleting_destructor__144c676d0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return puVar1;
}



// FUNCTION 141543f60 FUN_141543f60 body=103 status=ok
// SIG undefined FUN_141543f60(void)

undefined8 * FUN_141543f60(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x18);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x18);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(param_1,0x18,&LAB_140d1e6c0);
  }
  *puVar1 = &PTR__scalar_deleting_destructor__144c67a90;
  puVar1[1] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return puVar1;
}



// FUNCTION 141543fd0 FUN_141543fd0 body=169 status=ok
// SIG undefined FUN_141543fd0(void)

undefined8 * FUN_141543fd0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar1 = &PTR_FUN_144c67cd0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
    *puVar1 = &PTR_FUN_144c67cd0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  }
  if (DAT_1464a0da0 != 0) {
    FUN_1439f44f0(&DAT_1464a0da0);
  }
  puVar1[2] = &DAT_146ba2f50;
  *(undefined1 *)(puVar1 + 3) = 0;
  return puVar1;
}



// FUNCTION 141544080 FUN_141544080 body=106 status=ok
// SIG undefined FUN_141544080(void)

undefined8 * FUN_141544080(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
  }
  *puVar1 = &PTR__scalar_deleting_destructor__144c67d90;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
  return puVar1;
}



// FUNCTION 1415440f0 FUN_1415440f0 body=84 status=ok
// SIG undefined FUN_1415440f0(void)

void FUN_1415440f0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x60);
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x60);
    }
    lVar1 = FUN_1439efdc0(param_1,0x60,&LAB_140d1e6c0);
  }
  FUN_1415450d0(lVar1);
  return;
}



// FUNCTION 141544150 FUN_141544150 body=165 status=ok
// SIG undefined FUN_141544150(void)

undefined8 * FUN_141544150(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar2 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
    *puVar2 = &PTR_FUN_144c67790;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    if (DAT_1464a0d38 != 0) {
      FUN_1439f44f0(&DAT_1464a0d38);
    }
    *(undefined4 *)(puVar2 + 3) = 0;
    puVar2[2] = &DAT_146ba2f50;
    return puVar2;
  }
  lVar1 = operator_new(0x20);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_141545140(lVar1);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141544200 FUN_141544200 body=108 status=ok
// SIG undefined FUN_141544200(void)

undefined8 * FUN_141544200(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
  }
  *puVar1 = &PTR__scalar_deleting_destructor__144c67850;
  puVar1[1] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 3) = 0;
  return puVar1;
}



// FUNCTION 141544270 FUN_141544270 body=84 status=ok
// SIG undefined FUN_141544270(void)

void FUN_141544270(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x50);
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x50);
    }
    lVar1 = FUN_1439efdc0(param_1,0x50,&LAB_140d1e6c0);
  }
  FUN_141545360(lVar1);
  return;
}



// FUNCTION 1415442d0 FUN_1415442d0 body=104 status=ok
// SIG undefined FUN_1415442d0(void)

undefined8 * FUN_1415442d0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
  }
  *puVar1 = &PTR__scalar_deleting_destructor__144c68150;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return puVar1;
}



// FUNCTION 141544340 FUN_141544340 body=104 status=ok
// SIG undefined FUN_141544340(void)

undefined8 * FUN_141544340(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
  }
  *puVar1 = &PTR__scalar_deleting_destructor__144c682d0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return puVar1;
}



// FUNCTION 1415443b0 FUN_1415443b0 body=104 status=ok
// SIG undefined FUN_1415443b0(void)

undefined8 * FUN_1415443b0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
  }
  *puVar1 = &PTR__scalar_deleting_destructor__144c68090;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return puVar1;
}



// FUNCTION 141544420 FUN_141544420 body=84 status=ok
// SIG undefined FUN_141544420(void)

void FUN_141544420(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x78);
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x78);
    }
    lVar1 = FUN_1439efdc0(param_1,0x78,&LAB_140d1e6c0);
  }
  FUN_1415455d0(lVar1);
  return;
}



// FUNCTION 141544480 FUN_141544480 body=170 status=ok
// SIG undefined FUN_141544480(void)

undefined8 * FUN_141544480(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x50);
    }
    puVar2 = (undefined8 *)FUN_1439efdc0(param_1,0x50,&LAB_140d1e6c0);
    *puVar2 = &PTR_FUN_144c67fd0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
    if (DAT_1464a0e00 != 0) {
      FUN_1439f44f0(&DAT_1464a0e00);
    }
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    return puVar2;
  }
  lVar1 = operator_new(0x50);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_141545640(lVar1);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141544530 FUN_141544530 body=105 status=ok
// SIG undefined FUN_141544530(void)

undefined8 * FUN_141544530(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,0,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(param_1,0x20,&LAB_140d1e6c0);
  }
  *puVar1 = &PTR__scalar_deleting_destructor__144c67550;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  return puVar1;
}



// FUNCTION 1415445a0 FUN_1415445a0 body=297 status=ok
// SIG undefined FUN_1415445a0(void)

void FUN_1415445a0(int param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  
  for (uVar4 = param_1 * 8 | 2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
    *param_3 = (byte)uVar4 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar4;
  uVar4 = *(uint *)(param_2 + 0x1c);
  while( true ) {
    param_3 = param_3 + 1;
    bVar2 = (byte)uVar4;
    if (uVar4 < 0x80) break;
    uVar4 = uVar4 >> 7;
    *param_3 = bVar2 | 0x80;
  }
  *param_3 = bVar2;
  pbVar3 = param_3 + 1;
  uVar5 = (ulonglong)*(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x10) != 0) {
    *pbVar3 = 8;
    param_3 = param_3 + 2;
    for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      *param_3 = (byte)uVar5 | 0x80;
      param_3 = param_3 + 1;
    }
    *param_3 = (byte)uVar5;
    pbVar3 = param_3 + 1;
  }
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 != 0) {
    *pbVar3 = 0x10;
    while( true ) {
      pbVar1 = pbVar3 + 1;
      bVar2 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar1 = bVar2 | 0x80;
      pbVar3 = pbVar1;
    }
    *pbVar1 = bVar2;
    pbVar3 = pbVar3 + 2;
  }
  if (*(char *)(param_2 + 0x18) != '\0') {
    pbVar3 = (byte *)FUN_141514ca0(3,*(char *)(param_2 + 0x18),pbVar3);
  }
  if (*(char *)(param_2 + 0x19) != '\0') {
    pbVar3 = (byte *)FUN_141514ca0(4,*(char *)(param_2 + 0x19),pbVar3);
  }
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_143a1dba0(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe,pbVar3);
  return;
}



// FUNCTION 1415446d0 FUN_1415446d0 body=261 status=ok
// SIG undefined FUN_1415446d0(void)

void FUN_1415446d0(int param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  
  for (uVar3 = param_1 * 8 | 2; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *param_3 = (byte)uVar3 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar3;
  uVar3 = *(uint *)(param_2 + 0x18);
  while( true ) {
    pbVar2 = param_3 + 1;
    bVar1 = (byte)uVar3;
    if (uVar3 < 0x80) break;
    uVar3 = uVar3 >> 7;
    *pbVar2 = bVar1 | 0x80;
    param_3 = pbVar2;
  }
  *pbVar2 = bVar1;
  pbVar2 = param_3 + 2;
  uVar4 = (ulonglong)*(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x10) != 0) {
    *pbVar2 = 8;
    param_3 = param_3 + 3;
    for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
      *param_3 = (byte)uVar4 | 0x80;
      param_3 = param_3 + 1;
    }
    *param_3 = (byte)uVar4;
    pbVar2 = param_3 + 1;
  }
  uVar4 = (ulonglong)*(int *)(param_2 + 0x14);
  if (*(int *)(param_2 + 0x14) != 0) {
    *pbVar2 = 0x10;
    while( true ) {
      pbVar2 = pbVar2 + 1;
      bVar1 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar2 = bVar1 | 0x80;
    }
    *pbVar2 = bVar1;
    pbVar2 = pbVar2 + 1;
  }
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_143a1dba0(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe,pbVar2);
  return;
}



// FUNCTION 1415447e0 FUN_1415447e0 body=196 status=ok
// SIG undefined FUN_1415447e0(void)

void FUN_1415447e0(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_141543c30(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1415448b0 FUN_1415448b0 body=196 status=ok
// SIG undefined FUN_1415448b0(void)

void FUN_1415448b0(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      FUN_141549870(*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_141543f60(uVar1);
      FUN_141549870(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 141544980 FUN_141544980 body=196 status=ok
// SIG undefined FUN_141544980(void)

void FUN_141544980(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_141544200(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 141544a50 FUN_141544a50 body=196 status=ok
// SIG undefined FUN_141544a50(void)

void FUN_141544a50(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_1415442d0(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 141544b20 FUN_141544b20 body=196 status=ok
// SIG undefined FUN_141544b20(void)

void FUN_141544b20(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_141544340(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 141544bf0 FUN_141544bf0 body=196 status=ok
// SIG undefined FUN_141544bf0(void)

void FUN_141544bf0(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_1415443b0(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 141544cc0 FUN_141544cc0 body=196 status=ok
// SIG undefined FUN_141544cc0(void)

void FUN_141544cc0(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_141544420(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 141544d90 FUN_141544d90 body=400 status=ok
// SIG undefined FUN_141544d90(void)

ulonglong FUN_141544d90(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  byte bVar6;
  undefined4 local_res8;
  int local_resc;
  
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 < (byte *)param_1[1]) && (uVar4 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
    *param_1 = (longlong)(pbVar1 + 1);
  }
  else {
    uVar3 = FUN_1439f98b0();
    uVar4 = uVar3 & 0xffffffff;
    if ((int)uVar3 < 0) goto LAB_141544e6d;
  }
  uVar3 = FUN_1439f8500(param_1,&local_res8,uVar4);
  if (-1 < local_resc) {
LAB_141544df0:
    do {
      while( true ) {
        pbVar1 = (byte *)*param_1;
        uVar4 = 0;
        if ((pbVar1 < (byte *)param_1[1]) && (uVar4 = (ulonglong)*pbVar1, '\0' < (char)*pbVar1))
        break;
        uVar5 = FUN_1439f8c60(param_1,uVar4);
        uVar4 = (ulonglong)uVar5;
        if (uVar5 - 1 < 0x7f) goto LAB_141544e22;
LAB_141544ec3:
        if ((int)uVar4 == 0) {
          uVar4 = FUN_1439f84b0(param_1,local_res8);
          return uVar4;
        }
        if ((*(byte *)(param_2 + 8) & 1) == 0) {
          uVar3 = FUN_141515d60();
        }
        else {
          uVar3 = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe;
        }
        uVar4 = FUN_143a1e1e0(param_1,uVar4,uVar3);
        if ((char)uVar4 == '\0') {
          return uVar4;
        }
      }
      *param_1 = (longlong)(pbVar1 + 1);
LAB_141544e22:
      iVar2 = (int)(uVar4 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar4 != '\b') goto LAB_141544ec3;
        pbVar1 = (byte *)*param_1;
        uVar5 = 0;
        if ((pbVar1 < (byte *)param_1[1]) && (uVar5 = (uint)*pbVar1, uVar5 < 0x80)) {
          *param_1 = (longlong)(pbVar1 + 1);
          *(uint *)(param_2 + 0x10) = uVar5;
        }
        else {
          uVar3 = FUN_1439f8e20(param_1,uVar5);
          if ((longlong)uVar3 < 0) break;
          *(int *)(param_2 + 0x10) = (int)uVar3;
        }
        goto LAB_141544df0;
      }
      if ((iVar2 != 2) || ((char)uVar4 != '\x10')) goto LAB_141544ec3;
      bVar6 = 0;
      if ((byte *)*param_1 < (byte *)param_1[1]) {
        bVar6 = *(byte *)*param_1;
        if (bVar6 < 0x80) {
          *(uint *)(param_2 + 0x14) = (uint)bVar6;
          *param_1 = *param_1 + 1;
          goto LAB_141544df0;
        }
      }
      uVar3 = FUN_1439f8e20(param_1,bVar6);
      *(int *)(param_2 + 0x14) = (int)uVar3;
    } while (-1 < (longlong)uVar3);
  }
LAB_141544e6d:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141544f20 FUN_141544f20 body=115 status=ok
// SIG undefined FUN_141544f20(void)

undefined8 * FUN_141544f20(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    uVar3 = FUN_1439f1d40(param_1,iVar1);
    FUN_141544bf0(param_1,uVar3,lVar2 + 8,iVar1,*(int *)param_1[2] - *(int *)(param_1 + 1));
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + iVar1;
    if (*(int *)param_1[2] < *(int *)(param_1 + 1)) {
      *(int *)param_1[2] = *(int *)(param_1 + 1);
    }
  }
  return param_1;
}



// FUNCTION 141544fa0 FUN_141544fa0 body=104 status=ok
// SIG undefined FUN_141544fa0(void)

undefined8 * FUN_141544fa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c67b50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (DAT_1464a0d68 != 0) {
    FUN_1439f44f0(&DAT_1464a0d68);
  }
  param_1[8] = &DAT_146ba2f50;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 141545010 FUN_141545010 body=83 status=ok
// SIG undefined FUN_141545010(void)

undefined8 * FUN_141545010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c679d0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  if (DAT_1464a0c40 != 0) {
    FUN_1439f44f0(&DAT_1464a0c40);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = &DAT_146ba2f50;
  return param_1;
}



// FUNCTION 141545070 FUN_141545070 body=83 status=ok
// SIG undefined FUN_141545070(void)

undefined8 * FUN_141545070(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c67610;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  if (DAT_1464a0d08 != 0) {
    FUN_1439f44f0(&DAT_1464a0d08);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = &DAT_146ba2f50;
  return param_1;
}



// FUNCTION 1415450d0 FUN_1415450d0 body=104 status=ok
// SIG undefined FUN_1415450d0(void)

undefined8 * FUN_1415450d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c67c10;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (DAT_1464a0d88 != 0) {
    FUN_1439f44f0(&DAT_1464a0d88);
  }
  param_1[2] = &DAT_146ba2f50;
  param_1[3] = &DAT_146ba2f50;
  param_1[4] = &DAT_146ba2f50;
  param_1[5] = &DAT_146ba2f50;
  param_1[6] = &DAT_146ba2f50;
  param_1[7] = &DAT_146ba2f50;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 141545140 FUN_141545140 body=83 status=ok
// SIG undefined FUN_141545140(void)

undefined8 * FUN_141545140(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c67790;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  if (DAT_1464a0d38 != 0) {
    FUN_1439f44f0(&DAT_1464a0d38);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = &DAT_146ba2f50;
  return param_1;
}



// FUNCTION 1415451a0 FUN_1415451a0 body=124 status=ok
// SIG undefined FUN_1415451a0(void)

undefined8 * FUN_1415451a0(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144c67850;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*puVar3 & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *puVar3 & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 141545220 FUN_141545220 body=312 status=ok
// SIG undefined FUN_141545220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141545220(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_144c67910;
  param_1[1] = 0;
  FUN_1439f1860(param_1 + 2,param_2 + 0x10);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x38);
    uVar4 = FUN_1439f1d40(param_1 + 5,iVar1);
    local_48 = *(int *)param_1[7] - *(int *)(param_1 + 6);
    FUN_141544980(param_1 + 5,uVar4,lVar2 + 8,iVar1);
    *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + iVar1;
    if (*(int *)param_1[7] < *(int *)(param_1 + 6)) {
      *(int *)param_1[7] = *(int *)(param_1 + 6);
    }
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar3 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      uVar5 = FUN_141515d60(param_1 + 1);
    }
    else {
      uVar5 = param_1[1] & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar3 & 0xfffffffffffffffe);
  }
  param_1[8] = &DAT_146ba2f50;
  if ((*(longlong *)(*(undefined **)(param_2 + 0x40) + 0x10) != 0) &&
     (*(undefined **)(param_2 + 0x40) != &DAT_146ba2f50)) {
    FUN_140d2a6b0();
  }
  return param_1;
}


