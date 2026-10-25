// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1435607a0 FUN_1435607a0 body=112 status=ok
// SIG undefined FUN_1435607a0(void)

void FUN_1435607a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b789e0)(DAT_146b789e8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143560810 FUN_143560810 body=142 status=ok
// SIG undefined FUN_143560810(void)

void FUN_143560810(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined4 *local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18 = *(longlong *)(param_6 + 4);
    *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + 1;
  }
  local_10 = param_6 + 8;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78b80)(DAT_146b78b88 + lVar2,param_4,&local_18,local_10,param_2);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435608a0 FUN_1435608a0 body=132 status=ok
// SIG undefined FUN_1435608a0(void)

void FUN_1435608a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78f70)(DAT_146b78f78 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143560960 FUN_143560960 body=145 status=ok
// SIG undefined FUN_143560960(void)

void FUN_143560960(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78c50)((longlong)DAT_146b78c58 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143560a30 FUN_143560a30 body=175 status=ok
// SIG undefined FUN_143560a30(void)

void FUN_143560a30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78f80)((longlong)DAT_146b78f88 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143560ae0 FUN_143560ae0 body=145 status=ok
// SIG undefined FUN_143560ae0(void)

void FUN_143560ae0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78c60)((longlong)DAT_146b78c68 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143560b80 FUN_143560b80 body=145 status=ok
// SIG undefined FUN_143560b80(void)

void FUN_143560b80(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78a00)((longlong)DAT_146b78a08 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143560c20 FUN_143560c20 body=199 status=ok
// SIG undefined FUN_143560c20(void)

void FUN_143560c20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  undefined4 *local_30;
  undefined1 local_28;
  undefined4 local_20;
  undefined1 local_18;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_38 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_38 = *(longlong *)(param_6 + 4);
    *(int *)(local_38 + 0x18) = *(int *)(local_38 + 0x18) + 1;
  }
  local_30 = param_6 + 8;
  local_28 = *(undefined1 *)(param_6 + 0x14);
  local_18 = *(undefined1 *)(param_6 + 0x24);
  local_20 = param_6[0x1c];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78e50)(DAT_146b78e58 + lVar2,param_4,&local_38,local_30,local_28,local_20,local_18);
  }
  piVar1 = (int *)(local_38 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143560da0 FUN_143560da0 body=112 status=ok
// SIG undefined FUN_143560da0(void)

void FUN_143560da0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78fa0)(DAT_146b78fa8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143560e10 FUN_143560e10 body=132 status=ok
// SIG undefined FUN_143560e10(void)

void FUN_143560e10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79000)(DAT_146b79008 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143560ec0 FUN_143560ec0 body=112 status=ok
// SIG undefined FUN_143560ec0(void)

void FUN_143560ec0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78a20)(DAT_146b78a28 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143560f60 FUN_143560f60 body=132 status=ok
// SIG undefined FUN_143560f60(void)

void FUN_143560f60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78fb0)(DAT_146b78fb8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143560ff0 FUN_143560ff0 body=112 status=ok
// SIG undefined FUN_143560ff0(void)

void FUN_143560ff0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79010)(DAT_146b79018 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143561060 FUN_143561060 body=142 status=ok
// SIG undefined FUN_143561060(void)

void FUN_143561060(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined4 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18 = *(longlong *)(param_6 + 4);
    *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + 1;
  }
  local_10 = param_6[0xc];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78c90)(DAT_146b78c98 + lVar2,param_4,&local_18,local_10,param_2);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435610f0 FUN_1435610f0 body=132 status=ok
// SIG undefined FUN_1435610f0(void)

void FUN_1435610f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78a30)(DAT_146b78a38 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143561180 FUN_143561180 body=144 status=ok
// SIG undefined FUN_143561180(void)

void FUN_143561180(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b78fc0)((longlong)DAT_146b78fc8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143561230 FUN_143561230 body=112 status=ok
// SIG undefined FUN_143561230(void)

void FUN_143561230(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78a40)(DAT_146b78a48 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435612d0 FUN_1435612d0 body=144 status=ok
// SIG undefined FUN_1435612d0(void)

void FUN_1435612d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b78cb0)((longlong)DAT_146b78cb8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143561360 FUN_143561360 body=144 status=ok
// SIG undefined FUN_143561360(void)

void FUN_143561360(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b78a50)((longlong)DAT_146b78a58 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435613f0 FUN_1435613f0 body=112 status=ok
// SIG undefined FUN_1435613f0(void)

void FUN_1435613f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78fe0)(DAT_146b78fe8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143561460 FUN_143561460 body=145 status=ok
// SIG undefined FUN_143561460(void)

void FUN_143561460(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78cc0)((longlong)DAT_146b78cc8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143561500 FUN_143561500 body=160 status=ok
// SIG undefined FUN_143561500(void)

void FUN_143561500(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  undefined1 local_20;
  undefined4 *local_18;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_28 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_28 = *(longlong *)(param_6 + 4);
    *(int *)(local_28 + 0x18) = *(int *)(local_28 + 0x18) + 1;
  }
  local_20 = *(undefined1 *)(param_6 + 0xc);
  local_18 = param_6 + 0x10;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78a60)(DAT_146b78a68 + lVar2,param_4,&local_28,local_20,local_18);
  }
  piVar1 = (int *)(local_28 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435615a0 FUN_1435615a0 body=132 status=ok
// SIG undefined FUN_1435615a0(void)

void FUN_1435615a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78ff0)(DAT_146b78ff8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143561690 FUN_143561690 body=148 status=ok
// SIG undefined FUN_143561690(void)

void FUN_143561690(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78ce0)(DAT_146b78ce8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143561750 FUN_143561750 body=148 status=ok
// SIG undefined FUN_143561750(void)

void FUN_143561750(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78cf0)(DAT_146b78cf8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143561810 FUN_143561810 body=145 status=ok
// SIG undefined FUN_143561810(void)

void FUN_143561810(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78d00)((longlong)DAT_146b78d08 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435618b0 FUN_1435618b0 body=216 status=ok
// SIG undefined FUN_1435618b0(void)

void FUN_1435618b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  undefined4 local_20;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_28 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_20 = *(undefined4 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 0x30);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78d10)(DAT_146b78d18 + lVar2,&local_28,local_20,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,&local_28);
  }
  piVar1 = (int *)(local_28 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143561990 FUN_143561990 body=359 status=ok
// SIG undefined FUN_143561990(void)

void FUN_143561990(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  undefined1 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_28 = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_20 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_20 = *(longlong *)(param_6 + 4);
    *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
  }
  if ((((byte)param_6[8] & 0x1f) == 0xc) && (*(longlong *)(param_6 + 0xc) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18 = *(longlong *)(param_6 + 0xc);
    *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + 1;
  }
  local_10 = *(undefined1 *)(param_6 + 0x14);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78b90)(DAT_146b78b98 + lVar2,&local_28,&local_20,&local_18,local_10);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143561b20 FUN_143561b20 body=180 status=ok
// SIG undefined FUN_143561b20(void)

byte FUN_143561b20(ulonglong param_1)

{
  param_1 = param_1 & ~param_1 + 1;
  return -((param_1 & 0xffffffff00000000) != 0) & 0x20U |
         -((param_1 & 0xffff0000ffff0000) != 0) & 0x10U |
         -((param_1 & 0xff00ff00ff00ff00) != 0) & 8U | -((param_1 & 0xf0f0f0f0f0f0f0f0) != 0) & 4U |
         -((param_1 & 0xcccccccccccccccc) != 0) & 2U | (param_1 & 0xaaaaaaaaaaaaaaaa) != 0;
}



// FUNCTION 143561be0 FUN_143561be0 body=385 status=ok
// SIG undefined FUN_143561be0(void)

longlong FUN_143561be0(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  FUN_143562840();
  plVar5 = (longlong *)*param_1;
  uVar9 = plVar5[1];
  *plVar5 = *plVar5 + 1;
  lVar6 = *param_1;
  param_4 = uVar9 & param_4;
  lVar7 = *(longlong *)(lVar6 + 0x10 + param_4 * 0x18);
  lVar3 = lVar6 + param_4 * 0x18;
  uVar10 = param_4;
  if (lVar7 == -2) {
    *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    lVar6 = *param_3;
    *(longlong *)(lVar3 + 0x18) = lVar6;
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + 1;
    lVar6 = param_3[1];
    *(longlong *)(lVar3 + 0x20) = lVar6;
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    do {
      uVar10 = uVar10 + 1 & uVar9;
      lVar4 = lVar6 + uVar10 * 0x18;
    } while (*(longlong *)(lVar6 + 0x10 + uVar10 * 0x18) != -2);
    uVar9 = *(uint *)(*(longlong *)(lVar3 + 0x18) + 0x1c) & uVar9;
    if (uVar9 == param_4) {
      *(longlong *)(lVar4 + 0x10) = lVar7;
      lVar6 = *(longlong *)(lVar3 + 0x18);
      *(longlong *)(lVar4 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar6 = *(longlong *)(lVar3 + 0x20);
      *(longlong *)(lVar4 + 0x20) = lVar6;
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434e6900(lVar3 + 0x18,param_3);
      *(ulonglong *)(lVar3 + 0x10) = uVar10;
    }
    else {
      lVar2 = uVar9 * 3 + 2;
      uVar9 = *(ulonglong *)(lVar6 + lVar2 * 8);
      while (puVar8 = (ulonglong *)(lVar6 + lVar2 * 8), uVar9 != param_4) {
        lVar2 = *puVar8 * 3 + 2;
        uVar9 = *(ulonglong *)(lVar6 + lVar2 * 8);
      }
      *(longlong *)(lVar4 + 0x10) = lVar7;
      lVar6 = *(longlong *)(lVar3 + 0x18);
      *(longlong *)(lVar4 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar6 = *(longlong *)(lVar3 + 0x20);
      *(longlong *)(lVar4 + 0x20) = lVar6;
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
      }
      *puVar8 = uVar10;
      FUN_1434e6900(lVar3 + 0x18,param_3);
      *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar3 + 0x18;
}



// FUNCTION 143561d70 FUN_143561d70 body=431 status=ok
// SIG undefined FUN_143561d70(void)

longlong FUN_143561d70(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_143561dca;
    lVar9 = plVar4[1] * 2 + 2;
  }
  FUN_143562ae0(param_1,param_2,lVar9);
LAB_143561dca:
  plVar4 = (longlong *)*param_1;
  uVar10 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar10 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar9 = lVar5 + param_4 * 0x18;
  uVar8 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar5 = *(longlong *)*param_3;
    *(longlong *)(lVar9 + 0x18) = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    lVar5 = *(longlong *)param_3[1];
    *(longlong *)(lVar9 + 0x20) = lVar5;
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    do {
      uVar8 = uVar8 + 1 & uVar10;
      lVar3 = lVar5 + uVar8 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar8 * 0x18) != -2);
    uVar10 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar10;
    if (uVar10 == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      lVar5 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar3 + 0x18) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar5 = *(longlong *)(lVar9 + 0x20);
      *(longlong *)(lVar3 + 0x20) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
      }
      FUN_143562380(lVar9 + 0x18,param_3);
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      lVar2 = uVar10 * 3 + 2;
      uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      while (puVar7 = (ulonglong *)(lVar5 + lVar2 * 8), uVar10 != param_4) {
        lVar2 = *puVar7 * 3 + 2;
        uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      lVar5 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar3 + 0x18) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar5 = *(longlong *)(lVar9 + 0x20);
      *(longlong *)(lVar3 + 0x20) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
      }
      *puVar7 = uVar8;
      FUN_143562380(lVar9 + 0x18,param_3);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 143561f20 FUN_143561f20 body=109 status=ok
// SIG undefined FUN_143561f20(void)

void FUN_143561f20(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  piVar1 = (int *)(param_1[4] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar3 = param_1[1];
  plVar2 = (longlong *)(*param_1 + (lVar3 + -1) * 8);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    piVar1 = (int *)(*plVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    plVar2 = plVar2 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x000143561f89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 143561f90 FUN_143561f90 body=163 status=ok
// SIG undefined FUN_143561f90(void)

void FUN_143561f90(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1 + lVar4;
      if (*(longlong *)(lVar2 + 0x10) != -2) {
        uVar1 = *(ulonglong *)(lVar2 + 0x20);
        if (uVar1 != 0) {
          if ((uVar1 & 1) == 0) {
            if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar2 + 0x20) = uVar1 - 1;
          }
        }
        *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143562040 FUN_143562040 body=181 status=ok
// SIG undefined FUN_143562040(void)

void FUN_143562040(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar5 = 0;
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar5 + 0x10 + lVar2) != -2) {
        uVar3 = *(ulonglong *)(lVar5 + 0x20 + lVar2);
        if (uVar3 != 0) {
          if ((uVar3 & 1) == 0) {
            if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar5 + 0x20 + lVar2) = uVar3 - 1;
          }
        }
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x18 + lVar2) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143562100 FUN_143562100 body=135 status=ok
// SIG undefined FUN_143562100(void)

void FUN_143562100(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar4) != -2) {
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x20 + lVar4) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143562190 FUN_143562190 body=193 status=ok
// SIG undefined FUN_143562190(void)

void FUN_143562190(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0xc0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0xc0) = uVar1 - 1;
    }
  }
  FUN_1434e5ef0(param_1 + 0xa0);
  FUN_143561f90(param_1 + 0x90);
  uVar1 = *(ulonglong *)(param_1 + 0x88);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x88) = uVar1 - 1;
    }
  }
  FUN_1434e5ef0(param_1 + 0x68);
  FUN_143561f90(param_1 + 0x58);
  FUN_143561f20(param_1 + 0x30);
  FUN_143562100(param_1 + 0x20);
  return;
}



// FUNCTION 143562260 FUN_143562260 body=119 status=ok
// SIG undefined FUN_143562260(void)

void FUN_143562260(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x90) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar2 = *(ulonglong *)(param_1 + 0x80);
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x80) = uVar2 - 1;
      FUN_1435196e0(param_1);
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435196e0(param_1);
  return;
}



// FUNCTION 1435622e0 FUN_1435622e0 body=147 status=ok
// SIG undefined FUN_1435622e0(void)

void FUN_1435622e0(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x78);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x78) = uVar2 - 1;
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x48) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x48) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x48);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 143562380 FUN_143562380 body=145 status=ok
// SIG undefined FUN_143562380(void)

void FUN_143562380(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  
  lVar2 = *(longlong *)*param_2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar2;
  puVar5 = (ulonglong *)(param_1 + 1);
  puVar3 = (ulonglong *)param_2[1];
  if (puVar3 != puVar5) {
    uVar4 = *puVar3;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *puVar5;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar5 = uVar4 - 1;
      }
    }
    *puVar5 = *puVar3;
  }
  return;
}



// FUNCTION 143562420 FUN_143562420 body=110 status=ok
// SIG undefined FUN_143562420(void)

longlong FUN_143562420(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435196e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 143562490 FUN_143562490 body=89 status=ok
// SIG undefined FUN_143562490(void)

undefined8 FUN_143562490(undefined8 param_1,ulonglong param_2)

{
  FUN_1435196e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1435624f0 FUN_1435624f0 body=101 status=ok
// SIG undefined FUN_1435624f0(void)

longlong FUN_1435624f0(longlong param_1,ulonglong param_2)

{
  FUN_143562040(param_1 + 0x50);
  FUN_1435b38e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 143562560 FUN_143562560 body=89 status=ok
// SIG undefined FUN_143562560(void)

undefined8 FUN_143562560(undefined8 param_1,ulonglong param_2)

{
  FUN_143562260();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1435625c0 FUN_1435625c0 body=157 status=ok
// SIG undefined FUN_1435625c0(void)

longlong FUN_1435625c0(longlong param_1,ulonglong param_2)

{
  FUN_1434e5ef0(param_1 + 0x1f0);
  FUN_1434e5ef0(param_1 + 0x1d0);
  FUN_143561f20(param_1 + 0x1a8);
  FUN_143562190(param_1 + 0xa8);
  if (*(RefCountImpl **)(param_1 + 0x80) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x80));
  }
  FUN_1435196e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 143562660 FUN_143562660 body=152 status=ok
// SIG undefined FUN_143562660(void)

longlong FUN_143562660(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)*(uint *)(param_1 + 0x88) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x88) >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  FUN_1435196e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 143562700 FUN_143562700 body=89 status=ok
// SIG undefined FUN_143562700(void)

undefined8 FUN_143562700(undefined8 param_1,ulonglong param_2)

{
  FUN_1435622e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 143562760 FUN_143562760 body=122 status=ok
// SIG undefined FUN_143562760(void)

longlong FUN_143562760(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1435627e0 FUN_1435627e0 body=89 status=ok
// SIG undefined FUN_1435627e0(void)

undefined8 FUN_1435627e0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 143562840 FUN_143562840 body=67 status=ok
// SIG undefined FUN_143562840(void)

void FUN_143562840(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143562ae0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143562ae0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143562890 FUN_143562890 body=269 status=ok
// SIG undefined FUN_143562890(void)

void FUN_143562890(longlong *param_1,undefined8 param_2,code *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = param_1[3];
  uVar5 = 0;
  uVar4 = uVar5;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(param_1[2] + uVar4 * 8) != 0) {
        (*param_3)(param_2,param_1[2] + uVar4 * 8);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    param_1 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    plVar3 = (longlong *)(lVar2 + 0x10);
    do {
      if (*plVar3 != -2) break;
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar5 <= *(ulonglong *)(lVar2 + 8));
  }
  do {
    do {
      if (((param_1 == (longlong *)0x0) || (lVar2 = *param_1, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar5)) {
        return;
      }
      if (*(longlong *)((uVar5 + 1) * 0x20 + lVar2) != 0) {
        (*param_3)(param_2);
      }
      uVar1 = *(ulonglong *)(*param_1 + 8);
    } while (((longlong)uVar1 < (longlong)uVar5) || (uVar5 = uVar5 + 1, uVar1 < uVar5));
    plVar3 = (longlong *)(uVar5 * 0x20 + 0x10 + *param_1);
    do {
      if (*plVar3 != -2) break;
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar5 <= uVar1);
  } while( true );
}



// FUNCTION 1435629a0 FUN_1435629a0 body=153 status=ok
// SIG undefined FUN_1435629a0(void)

void FUN_1435629a0(longlong param_1,undefined8 param_2,code *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x68);
  uVar2 = 0;
  uVar3 = uVar2;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar3 * 8) != 0) {
        (*param_3)(param_2,*(longlong *)(param_1 + 0x60) + uVar3 * 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x88);
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x80) + uVar2 * 8) != 0) {
        (*param_3)(param_2,*(longlong *)(param_1 + 0x80) + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 143562a40 FUN_143562a40 body=156 status=ok
// SIG undefined FUN_143562a40(void)

ulonglong FUN_143562a40(ulonglong param_1)

{
  return (((param_1 & 0xff000000000000 | param_1 >> 0x10) >> 0x10 | param_1 & 0xff0000000000) >>
          0x10 | param_1 & 0xff00000000) >> 8 |
         ((((ulonglong)((uint)param_1 & 0xff00) | param_1 << 0x10) << 0x10 |
          (ulonglong)((uint)param_1 & 0xff0000)) << 0x10 | param_1 & 0xff000000) << 8;
}



// FUNCTION 143562ae0 FUN_143562ae0 body=392 status=ok
// SIG undefined FUN_143562ae0(void)

void FUN_143562ae0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143562040();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x144;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar4 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar5 = lVar6;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar5 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar5 = lVar5 + 0x18;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar5 = *param_1 + lVar6;
      if (*(longlong *)(lVar5 + 0x10) != -2) {
        FUN_143561be0(&local_res20,param_2,lVar5 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0x1c));
        uVar2 = *(ulonglong *)(lVar5 + 0x20);
        if (uVar2 != 0) {
          if ((uVar2 & 1) == 0) {
            if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *(ulonglong *)(lVar5 + 0x20) = uVar2 - 1;
          }
        }
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143562c70 FUN_143562c70 body=148 status=ok
// SIG undefined FUN_143562c70(void)

void FUN_143562c70(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b791d0)(DAT_146b791d8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143562d30 FUN_143562d30 body=148 status=ok
// SIG undefined FUN_143562d30(void)

void FUN_143562d30(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b791e0)(DAT_146b791e8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143562dd0 FUN_143562dd0 body=132 status=ok
// SIG undefined FUN_143562dd0(void)

void FUN_143562dd0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79030)(DAT_146b79038 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143562e60 FUN_143562e60 body=132 status=ok
// SIG undefined FUN_143562e60(void)

void FUN_143562e60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b792e0)(DAT_146b792e8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143562ef0 FUN_143562ef0 body=112 status=ok
// SIG undefined FUN_143562ef0(void)

void FUN_143562ef0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b791f0)(DAT_146b791f8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143562f60 FUN_143562f60 body=41 status=ok
// SIG undefined FUN_143562f60(void)

undefined8 * FUN_143562f60(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b3a830;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 143562f90 ForEachChild_GC body=61 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl::Domain::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (*param_3)(param_2,param_1 + 0x40);
  }
  return;
}



// FUNCTION 143562fe0 FUN_143562fe0 body=246 status=ok
// SIG undefined FUN_143562fe0(void)

undefined8 FUN_143562fe0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8;
  longlong local_res10;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined **local_50;
  
  FUN_143354b50(local_68,param_3);
  FUN_143355390(local_68);
  FUN_143355620(local_68,&local_78);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  local_res10 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),local_78,local_70);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  local_res8 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),"ApplicationDomain ",0x12);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::ASString::operator+(&local_res8,param_2,&local_res10);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_2;
}



// FUNCTION 1435630e0 FUN_1435630e0 body=193 status=ok
// SIG undefined FUN_1435630e0(void)

void FUN_1435630e0(longlong param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong local_res8;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (param_2 == 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x1c8);
  }
  else {
    if (((((byte)*param_3 & 0x1f) != 0xc) || (lVar3 = *(longlong *)(param_3 + 4), lVar3 == 0)) ||
       (*(longlong *)(param_1 + 0x28) != *(longlong *)(lVar3 + 0x28))) {
      uVar4 = FUN_1435c8e40(local_18,0x40a,lVar2);
      FUN_1435cbef0(lVar2,uVar4);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x40);
  }
  uVar4 = FUN_1435be210(uVar4,&local_res8,lVar2);
  FUN_1434e6830(param_1 + 0x40,uVar4);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435631b0 FUN_1435631b0 body=251 status=ok
// SIG undefined FUN_1435631b0(void)

void FUN_1435631b0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x28);
  if (lVar1 == 0) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = 0;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
      *param_2 = 0;
      return;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar5 = (undefined8 *)FUN_1435b5bc0(uVar3);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      UInterpTrackInst::UInterpTrackInst(puVar5,uVar3);
      *puVar5 = &PTR_ForEachChild_GC_145b3a830;
      puVar5[8] = 0;
    }
    puVar4 = (undefined8 *)*param_2;
    if (puVar5 != puVar4) {
      if (puVar4 != (undefined8 *)0x0) {
        if (((ulonglong)puVar4 & 1) == 0) {
          if ((*(uint *)(puVar4 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar4 - 1;
        }
      }
      *param_2 = (ulonglong)puVar5;
    }
    FUN_1434f0700(*param_2 + 0x40,lVar1);
  }
  return;
}



// FUNCTION 1435632c0 FUN_1435632c0 body=271 status=ok
// SIG undefined FUN_1435632c0(void)

void FUN_1435632c0(longlong param_1,uint *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  uint local_28 [8];
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = (ulonglong)*(uint *)((undefined8 *)*param_3 + 4);
  local_48 = *(undefined8 *)*param_3;
  uVar1 = FUN_1435ae830(local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_48);
  plVar2 = (longlong *)FUN_1435be300(uVar3,uVar1);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  if (local_30 != 0) {
    if ((local_30 & 1) == 0) {
      if ((*(uint *)(local_30 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_30 = local_30 - 1;
    }
  }
  if (plVar2 == (longlong *)0x0) {
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffec;
    *param_2 = *param_2 | 0xc;
    param_2[4] = 0;
    param_2[5] = 0;
    *(ulonglong *)(param_2 + 6) = uStack_40;
    return;
  }
  uVar3 = FUN_1435b4fe0(*(undefined8 *)(*plVar2 + 0xd8));
  FUN_1435903c0(param_2,uVar3);
  return;
}



// FUNCTION 1435633e0 FUN_1435633e0 body=166 status=ok
// SIG undefined FUN_1435633e0(void)

void FUN_1435633e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  uint local_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  local_40 = (ulonglong)*(uint *)((undefined8 *)*param_3 + 4);
  local_48 = *(undefined8 *)*param_3;
  uVar2 = FUN_1435ae830(local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_48);
  lVar3 = FUN_1435be300(uVar1,uVar2);
  *(bool *)param_2 = lVar3 != 0;
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143563490 FUN_143563490 body=33 status=ok
// SIG undefined FUN_143563490(void)

undefined8 * FUN_143563490(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b3a8f0;
  return param_1;
}



// FUNCTION 1435634c0 FUN_1435634c0 body=172 status=ok
// SIG undefined FUN_1435634c0(void)

void FUN_1435634c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b3a830;
    puVar1[8] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143563580 FUN_143563580 body=33 status=ok
// SIG undefined FUN_143563580(void)

undefined8 * FUN_143563580(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435635b0 FUN_1435635b0 body=227 status=ok
// SIG undefined FUN_1435635b0(void)

undefined8 * FUN_1435635b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b39700);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b39700);
    *puVar3 = &PTR_FUN_145b3a8f0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 1435636a0 FUN_1435636a0 body=33 status=ok
// SIG undefined FUN_1435636a0(void)

undefined8 * FUN_1435636a0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 1435636d0 FUN_1435636d0 body=307 status=ok
// SIG undefined FUN_1435636d0(void)

void FUN_1435636d0(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong local_res8;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  puVar4 = (undefined8 *)FUN_1435b5bc0(uVar1);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar4,uVar1);
    *puVar4 = &PTR_ForEachChild_GC_145b3a830;
    puVar4[8] = 0;
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar4 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar2 - 1;
      }
    }
    *param_2 = (ulonglong)puVar4;
  }
  uVar5 = FUN_1435cf440(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98));
  if (uVar5 != 0) {
    *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
  }
  puVar6 = (ulonglong *)(*param_2 + 0x40);
  if (&local_res8 != puVar6) {
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
    }
    uVar3 = *puVar6;
    if (uVar3 != 0) {
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar6 = uVar3 - 1;
      }
    }
    *puVar6 = uVar5;
  }
  if (((uVar5 != 0) && ((uVar5 & 1) == 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
    FUN_1434ef880(uVar5);
  }
  return;
}



// FUNCTION 143563810 FUN_143563810 body=33 status=ok
// SIG undefined FUN_143563810(void)

undefined8 * FUN_143563810(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143563840 FUN_143563840 body=228 status=ok
// SIG undefined FUN_143563840(void)

undefined8 * FUN_143563840(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b39b70);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b39b70);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143563930 FUN_143563930 body=33 status=ok
// SIG undefined FUN_143563930(void)

undefined8 * FUN_143563930(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 143563bd0 FUN_143563bd0 body=122 status=ok
// SIG undefined FUN_143563bd0(void)

void FUN_143563bd0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8;
  
  FUN_1433601c0(param_2,"Scaleform ");
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  local_res8 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  FUN_1433601c0(&local_res8,"Windows");
  FUN_143360170(param_2,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143563ca0 FUN_143563ca0 body=103 status=ok
// SIG undefined FUN_143563ca0(void)

void FUN_143563ca0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),"StandAlone",10);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 143563e20 FUN_143563e20 body=33 status=ok
// SIG undefined FUN_143563e20(void)

undefined8 * FUN_143563e20(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143563e50 FUN_143563e50 body=228 status=ok
// SIG undefined FUN_143563e50(void)

undefined8 * FUN_143563e50(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b39760);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
                       (lVar3,param_2,&PTR_DAT_145b39760);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143563f40 FUN_143563f40 body=33 status=ok
// SIG undefined FUN_143563f40(void)

undefined8 * FUN_143563f40(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 143564010 FUN_143564010 body=33 status=ok
// SIG undefined FUN_143564010(void)

undefined8 * FUN_143564010(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143564040 FUN_143564040 body=216 status=ok
// SIG undefined FUN_143564040(void)

undefined8 * FUN_143564040(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3a1e8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3a1e8);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x90,0);
  if (lVar3 != 0) {
    Scaleform::GFx::AS3::Classes::fl_system::IMEConversionMode::IMEConversionMode(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143564120 IMEConversionMode body=127 status=ok
// SIG undefined IMEConversionMode(void)

undefined8 *
Scaleform::GFx::AS3::Classes::fl_system::IMEConversionMode::IMEConversionMode(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b26340;
  param_1[10] = "ALPHANUMERIC_FULL";
  param_1[0xb] = "ALPHANUMERIC_HALF";
  param_1[0xc] = "CHINESE";
  param_1[0xd] = "JAPANESE_HIRAGANA";
  param_1[0xe] = "JAPANESE_KATAKANA_FULL";
  param_1[0xf] = "JAPANESE_KATAKANA_HALF";
  param_1[0x10] = "KOREAN";
  param_1[0x11] = "UNKNOWN";
  return param_1;
}



// FUNCTION 1435641b0 FUN_1435641b0 body=33 status=ok
// SIG undefined FUN_1435641b0(void)

undefined8 * FUN_1435641b0(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b17510;
  return param_1;
}



// FUNCTION 1435641e0 FUN_1435641e0 body=33 status=ok
// SIG undefined FUN_1435641e0(void)

undefined8 * FUN_1435641e0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b3af38;
  return param_1;
}



// FUNCTION 143564210 FUN_143564210 body=173 status=ok
// SIG undefined FUN_143564210(void)

void FUN_143564210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b17510;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435642d0 FUN_1435642d0 body=33 status=ok
// SIG undefined FUN_1435642d0(void)

undefined8 * FUN_1435642d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143564300 FUN_143564300 body=227 status=ok
// SIG undefined FUN_143564300(void)

undefined8 * FUN_143564300(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b3a4e0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b3a4e0);
    *puVar3 = &PTR_FUN_145b3af38;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 1435643f0 FUN_1435643f0 body=33 status=ok
// SIG undefined FUN_1435643f0(void)

undefined8 * FUN_1435643f0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 143564450 FUN_143564450 body=50 status=ok
// SIG undefined FUN_143564450(void)

undefined8 * FUN_143564450(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_145b3afb0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 143564490 FUN_143564490 body=115 status=ok
// SIG undefined FUN_143564490(void)

void FUN_143564490(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    uVar3 = FUN_1435909c0(param_3);
    *(undefined1 *)(param_1 + 0x50) = uVar3;
  }
  if (((1 < param_2) && (((byte)*(undefined4 *)(param_3 + 0x20) & 0x1f) == 0xc)) &&
     (lVar1 = *(longlong *)(param_3 + 0x30), lVar1 != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    lVar4 = FUN_1435cb340(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98));
    if (lVar2 == lVar4) {
      FUN_1434f0700(param_1 + 0x48,lVar1);
    }
  }
  return;
}



// FUNCTION 143564510 FUN_143564510 body=33 status=ok
// SIG undefined FUN_143564510(void)

undefined8 * FUN_143564510(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b3b070;
  return param_1;
}



// FUNCTION 143564540 FUN_143564540 body=183 status=ok
// SIG undefined FUN_143564540(void)

void FUN_143564540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *(undefined1 *)(puVar1 + 8) = 0;
    *puVar1 = &PTR_FUN_145b3afb0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    puVar1[0xb] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143564600 FUN_143564600 body=33 status=ok
// SIG undefined FUN_143564600(void)

undefined8 * FUN_143564600(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143564630 FUN_143564630 body=214 status=ok
// SIG undefined FUN_143564630(void)

undefined8 * FUN_143564630(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3a570);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3a570);
    *puVar2 = &PTR_FUN_145b3b070;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143564710 FUN_143564710 body=33 status=ok
// SIG undefined FUN_143564710(void)

undefined8 * FUN_143564710(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143564740 FUN_143564740 body=283 status=ok
// SIG undefined FUN_143564740(void)

undefined8 * FUN_143564740(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b397c0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b397c0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b26468;
    puVar5[10] = "application";
    puVar5[0xb] = "localTrusted";
    puVar5[0xc] = "localWithFile";
    puVar5[0xd] = "localWithNetwork";
    puVar5[0xe] = "remote";
  }
  return param_1;
}



// FUNCTION 143564870 FUN_143564870 body=88 status=ok
// SIG undefined FUN_143564870(void)

undefined8 * FUN_143564870(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b26468;
  param_1[10] = "application";
  param_1[0xb] = "localTrusted";
  param_1[0xc] = "localWithFile";
  param_1[0xd] = "localWithNetwork";
  param_1[0xe] = "remote";
  return param_1;
}



// FUNCTION 1435648d0 FUN_1435648d0 body=33 status=ok
// SIG undefined FUN_1435648d0(void)

undefined8 * FUN_1435648d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143564900 FUN_143564900 body=216 status=ok
// SIG undefined FUN_143564900(void)

undefined8 * FUN_143564900(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3a0e0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3a0e0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x88,0);
  if (lVar3 != 0) {
    Scaleform::GFx::AS3::Classes::fl_system::SecurityPanel::SecurityPanel(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435649e0 SecurityPanel body=113 status=ok
// SIG undefined SecurityPanel(void)

undefined8 *
Scaleform::GFx::AS3::Classes::fl_system::SecurityPanel::SecurityPanel(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b3b190;
  param_1[10] = "camera";
  param_1[0xb] = "default";
  param_1[0xc] = "display";
  param_1[0xd] = "localStorage";
  param_1[0xe] = "microphone";
  param_1[0xf] = "privacy";
  param_1[0x10] = "settingsManager";
  return param_1;
}



// FUNCTION 143564a60 FUN_143564a60 body=33 status=ok
// SIG undefined FUN_143564a60(void)

undefined8 * FUN_143564a60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143564a90 FUN_143564a90 body=232 status=ok
// SIG undefined FUN_143564a90(void)

undefined8 * FUN_143564a90(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3a310);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3a310);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *(undefined1 *)(puVar5 + 10) = 0;
    *puVar5 = &PTR_ForEachChild_GC_145b231d0;
  }
  return param_1;
}



// FUNCTION 143564b80 USoundNodeSoundClass body=37 status=ok
// SIG undefined USoundNodeSoundClass(void)

undefined8 * USoundNodeSoundClass::USoundNodeSoundClass(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  return param_1;
}



// FUNCTION 143564be0 totalMemoryGet body=33 status=ok
// SIG undefined totalMemoryGet(void)

void Scaleform::GFx::AS3::Classes::fl_system::System::totalMemoryGet
               (undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*DAT_146b62f28 + 0xa8))();
  *param_2 = uVar1;
  return;
}



// FUNCTION 143564cf0 FUN_143564cf0 body=453 status=ok
// SIG undefined FUN_143564cf0(void)

void FUN_143564cf0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  ulonglong local_res8;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  uint local_58 [8];
  undefined1 local_38 [48];
  
  local_70 = 0x12;
  local_78 = "flash.utils.System";
  cVar4 = '\0';
  FUN_1435ae830(local_68,param_1,&local_78);
  lVar3 = FUN_1435c82a0(param_1,local_68,*(undefined8 *)(param_1 + 0x1c8));
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xd8) != 0)) {
    lVar3 = FUN_1435b4fa0(lVar3);
    cVar4 = *(char *)(lVar3 + 0x50);
  }
  FUN_1432c2f70(&local_res8);
  if (cVar4 == '\0') {
    FUN_1432c5960(local_38,DAT_146b62f28);
    FUN_1433649b0(*(undefined8 *)*param_3,*(undefined4 *)((undefined8 *)*param_3 + 4),local_38,0);
    FUN_1432c4ec0(&local_res8,local_38);
    Scaleform::StringBuffer::~StringBuffer(local_38);
  }
  else {
    FUN_1433646e0(*(undefined8 *)*param_3,*(undefined4 *)((undefined8 *)*param_3 + 4),&local_res8);
  }
  lVar3 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),
                        (longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_60 != 0) && ((local_60 & 1) == 0)) && ((*(uint *)(local_60 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_60 + 8) = *(uint *)(local_60 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143564ec0 FUN_143564ec0 body=460 status=ok
// SIG undefined FUN_143564ec0(void)

void FUN_143564ec0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong local_res8;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  uint local_58 [8];
  undefined1 local_38 [48];
  
  local_70 = 0x12;
  local_78 = "flash.utils.System";
  cVar2 = '\0';
  FUN_1435ae830(local_68,param_1,&local_78);
  lVar4 = FUN_1435c82a0(param_1,local_68,*(undefined8 *)(param_1 + 0x1c8));
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0xd8) != 0)) {
    lVar4 = FUN_1435b4fa0(lVar4);
    cVar2 = *(char *)(lVar4 + 0x50);
  }
  FUN_1432c2f70(&local_res8);
  if (cVar2 == '\0') {
    FUN_1432c5960(local_38,DAT_146b62f28);
    cVar2 = thunk_FUN_143365a50(*(undefined8 *)*param_3,*(undefined4 *)((undefined8 *)*param_3 + 4),
                                local_38,0);
    FUN_1432c4ec0(&local_res8,local_38);
    Scaleform::StringBuffer::~StringBuffer(local_38);
    if (cVar2 == '\0') goto LAB_143564ffd;
  }
  else {
    FUN_143364700(*(undefined8 *)*param_3,*(undefined4 *)((undefined8 *)*param_3 + 4),&local_res8);
  }
  lVar4 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),
                        (longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar4;
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
LAB_143564ffd:
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_60 != 0) && ((local_60 & 1) == 0)) && ((*(uint *)(local_60 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_60 + 8) = *(uint *)(local_60 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143565090 FUN_143565090 body=238 status=ok
// SIG undefined FUN_143565090(void)

void FUN_143565090(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_18[0] = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10 = *(longlong *)(param_6 + 4);
    *(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79040)(DAT_146b79048 + lVar2,local_18,&local_10);
  }
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar4);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565180 FUN_143565180 body=112 status=ok
// SIG undefined FUN_143565180(void)

void FUN_143565180(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79200)(DAT_146b79208 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435651f0 FUN_1435651f0 body=175 status=ok
// SIG undefined FUN_1435651f0(void)

void FUN_1435651f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b79050)((longlong)DAT_146b79058 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435652a0 FUN_1435652a0 body=132 status=ok
// SIG undefined FUN_1435652a0(void)

void FUN_1435652a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79210)(DAT_146b79218 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143565330 FUN_143565330 body=144 status=ok
// SIG undefined FUN_143565330(void)

void FUN_143565330(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79060)((longlong)DAT_146b79068 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435653c0 FUN_1435653c0 body=112 status=ok
// SIG undefined FUN_1435653c0(void)

void FUN_1435653c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79220)(DAT_146b79228 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143565430 FUN_143565430 body=144 status=ok
// SIG undefined FUN_143565430(void)

void FUN_143565430(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79070)((longlong)DAT_146b79078 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435654c0 FUN_1435654c0 body=144 status=ok
// SIG undefined FUN_1435654c0(void)

void FUN_1435654c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79230)((longlong)DAT_146b79238 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565550 FUN_143565550 body=144 status=ok
// SIG undefined FUN_143565550(void)

void FUN_143565550(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79080)((longlong)DAT_146b79088 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435655e0 FUN_1435655e0 body=175 status=ok
// SIG undefined FUN_1435655e0(void)

void FUN_1435655e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b79270)((longlong)DAT_146b79278 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435656c0 FUN_1435656c0 body=144 status=ok
// SIG undefined FUN_1435656c0(void)

void FUN_1435656c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79090)((longlong)DAT_146b79098 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565770 FUN_143565770 body=144 status=ok
// SIG undefined FUN_143565770(void)

void FUN_143565770(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b790a0)((longlong)DAT_146b790a8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565800 FUN_143565800 body=144 status=ok
// SIG undefined FUN_143565800(void)

void FUN_143565800(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b790b0)((longlong)DAT_146b790b8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565890 FUN_143565890 body=132 status=ok
// SIG undefined FUN_143565890(void)

void FUN_143565890(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b79260)(DAT_146b79268 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143565920 FUN_143565920 body=144 status=ok
// SIG undefined FUN_143565920(void)

void FUN_143565920(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b790c0)((longlong)DAT_146b790c8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435659b0 FUN_1435659b0 body=144 status=ok
// SIG undefined FUN_1435659b0(void)

void FUN_1435659b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b790d0)((longlong)DAT_146b790d8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565a40 FUN_143565a40 body=144 status=ok
// SIG undefined FUN_143565a40(void)

void FUN_143565a40(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b790e0)((longlong)DAT_146b790e8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565ad0 FUN_143565ad0 body=144 status=ok
// SIG undefined FUN_143565ad0(void)

void FUN_143565ad0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b790f0)((longlong)DAT_146b790f8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565b60 FUN_143565b60 body=144 status=ok
// SIG undefined FUN_143565b60(void)

void FUN_143565b60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79100)((longlong)DAT_146b79108 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565bf0 FUN_143565bf0 body=144 status=ok
// SIG undefined FUN_143565bf0(void)

void FUN_143565bf0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79110)((longlong)DAT_146b79118 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565c80 FUN_143565c80 body=144 status=ok
// SIG undefined FUN_143565c80(void)

void FUN_143565c80(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79120)((longlong)DAT_146b79128 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565d10 FUN_143565d10 body=144 status=ok
// SIG undefined FUN_143565d10(void)

void FUN_143565d10(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79130)((longlong)DAT_146b79138 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565da0 FUN_143565da0 body=144 status=ok
// SIG undefined FUN_143565da0(void)

void FUN_143565da0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79140)((longlong)DAT_146b79148 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565e30 FUN_143565e30 body=112 status=ok
// SIG undefined FUN_143565e30(void)

void FUN_143565e30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79150)(DAT_146b79158 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143565ea0 FUN_143565ea0 body=144 status=ok
// SIG undefined FUN_143565ea0(void)

void FUN_143565ea0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b79160)((longlong)DAT_146b79168 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143565f30 FUN_143565f30 body=112 status=ok
// SIG undefined FUN_143565f30(void)

void FUN_143565f30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79170)(DAT_146b79178 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143565fa0 FUN_143565fa0 body=112 status=ok
// SIG undefined FUN_143565fa0(void)

void FUN_143565fa0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b79180)(DAT_146b79188 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143566030 FUN_143566030 body=148 status=ok
// SIG undefined FUN_143566030(void)

void FUN_143566030(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b79190)(DAT_146b79198 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1435660d0 FUN_1435660d0 body=145 status=ok
// SIG undefined FUN_1435660d0(void)

void FUN_1435660d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79290)((longlong)DAT_146b79298 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143566170 FUN_143566170 body=112 status=ok
// SIG undefined FUN_143566170(void)

void FUN_143566170(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b791a0)(DAT_146b791a8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143566210 FUN_143566210 body=112 status=ok
// SIG undefined FUN_143566210(void)

void FUN_143566210(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b791b0)(DAT_146b791b8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435662a0 FUN_1435662a0 body=148 status=ok
// SIG undefined FUN_1435662a0(void)

void FUN_1435662a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b791c0)(DAT_146b791c8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143566340 FUN_143566340 body=175 status=ok
// SIG undefined FUN_143566340(void)

void FUN_143566340(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b79020)((longlong)DAT_146b79028 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143566410 FUN_143566410 body=121 status=ok
// SIG undefined FUN_143566410(void)

void FUN_143566410(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x58) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x48);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x48) = uVar1 - 1;
      FUN_1435b9dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 143566490 FUN_143566490 body=136 status=ok
// SIG undefined FUN_143566490(void)

longlong FUN_143566490(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x40);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x40) = uVar1 - 1;
    }
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143566520 FUN_143566520 body=89 status=ok
// SIG undefined FUN_143566520(void)

undefined8 FUN_143566520(undefined8 param_1,ulonglong param_2)

{
  FUN_143566410();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143566580 FUN_143566580 body=89 status=ok
// SIG undefined FUN_143566580(void)

undefined8 FUN_143566580(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1435665e0 FUN_1435665e0 body=145 status=ok
// SIG undefined FUN_1435665e0(void)

void FUN_1435665e0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b79b50)((longlong)DAT_146b79b58 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435666b0 FUN_1435666b0 body=33 status=ok
// SIG undefined FUN_1435666b0(void)

undefined8 * FUN_1435666b0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435666e0 FUN_1435666e0 body=250 status=ok
// SIG undefined FUN_1435666e0(void)

undefined8 * FUN_1435666e0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3bdb0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3bdb0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "advanced";
    puVar5[0xb] = "normal";
  }
  return param_1;
}



// FUNCTION 1435667e0 FUN_1435667e0 body=55 status=ok
// SIG undefined FUN_1435667e0(void)

undefined8 * FUN_1435667e0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "advanced";
  param_1[0xb] = "normal";
  return param_1;
}



// FUNCTION 143566820 UMaterialExpressionParameter body=47 status=ok
// SIG undefined UMaterialExpressionParameter(void)

undefined8 * UMaterialExpressionParameter::UMaterialExpressionParameter(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b3dc50;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 143566860 FUN_143566860 body=188 status=ok
// SIG undefined FUN_143566860(void)

void FUN_143566860(longlong param_1,int param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 2) {
        FUN_143590af0(param_3 + 0x40,local_res10,param_1 + 0x50);
      }
      FUN_143590af0(param_3 + 0x20,local_res10,param_1 + 0x48);
    }
    FUN_143590af0(param_3,local_res10,param_1 + 0x40);
  }
  FSettingsModule::ShutdownModule(param_1,param_2,param_3);
  return;
}



// FUNCTION 143566930 FUN_143566930 body=33 status=ok
// SIG undefined FUN_143566930(void)

undefined8 * FUN_143566930(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b3dd10;
  return param_1;
}



// FUNCTION 143566960 FUN_143566960 body=180 status=ok
// SIG undefined FUN_143566960(void)

void FUN_143566960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b3dc50;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143566a20 FUN_143566a20 body=33 status=ok
// SIG undefined FUN_143566a20(void)

undefined8 * FUN_143566a20(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143566a50 FUN_143566a50 body=214 status=ok
// SIG undefined FUN_143566a50(void)

undefined8 * FUN_143566a50(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3c410);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3c410);
    *puVar2 = &PTR_FUN_145b3dd10;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143566b30 FUN_143566b30 body=140 status=ok
// SIG undefined FUN_143566b30(void)

undefined8 * FUN_143566b30(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b3dd88;
  param_1[8] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x98) + 0x10) + 0x218);
  param_1[9] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x98) + 0x10) + 0x218);
  param_1[10] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x98) + 0x10) + 0x218);
  param_1[0xb] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 143566be0 FUN_143566be0 body=359 status=ok
// SIG undefined FUN_143566be0(void)

ulonglong FUN_143566be0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  ulonglong in_RAX;
  longlong lVar7;
  undefined8 *local_res8;
  ulonglong local_res10;
  longlong *local_28;
  undefined8 uStack_20;
  
  if (*(longlong *)(param_1 + 0x40) != 0) goto LAB_143566d38;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  in_RAX = FUN_1435e8f40(lVar7,param_1);
  if ((in_RAX == 0) ||
     (plVar2 = *(longlong **)(param_1 + 0x28), (*(byte *)(plVar2 + 0x11) >> 4 & 1) == 0))
  goto LAB_143566d38;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_res8,1);
  local_28 = (longlong *)0x0;
  uStack_20 = 0;
  FUN_1432c2fb0(&local_res10,*local_res8);
  cVar5 = FUN_1432ec590(*(undefined8 *)(*(longlong *)(lVar7 + 0x300) + 0x10),in_RAX,&local_28,
                        &local_res10);
  iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  in_RAX = (ulonglong)(iVar6 - 1U);
  if (iVar6 - 1U == 0) {
    in_RAX = (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  if (cVar5 == '\0') {
    uVar3 = *(undefined8 *)(lVar7 + 0x300);
    lVar7 = FUN_1434a0340(uVar3);
    in_RAX = 0;
    if (lVar7 != 0) {
      uVar4 = *local_res8;
      lVar7 = FUN_1434a0340(uVar3);
      in_RAX = FUN_1434a1650(lVar7 + 0x18,"Attaching a font with class \'%s\' failed",uVar4);
    }
LAB_143566d19:
    if (local_28 != (longlong *)0x0) {
      in_RAX = FUN_1432de450();
    }
  }
  else if (local_28 != (longlong *)0x0) {
    in_RAX = (**(code **)(*local_28 + 0x10))();
    if (((uint)in_RAX >> 9 & 1) != 0) {
      in_RAX = FUN_142062c70(param_1 + 0x40,local_28[3]);
    }
    goto LAB_143566d19;
  }
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    in_RAX = FUN_14335f920();
  }
LAB_143566d38:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143566d50 FUN_143566d50 body=215 status=ok
// SIG undefined FUN_143566d50(void)

void FUN_143566d50(longlong param_1,uint *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong local_res8;
  undefined8 uStack_10;
  
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 == (longlong *)0x0) {
    iVar4 = FUN_14335fa60(param_1 + 0x48);
    if (iVar4 != 0) {
      FUN_143590250(param_2,param_1 + 0x48);
      return;
    }
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffec;
    *param_2 = *param_2 | 0xc;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined8 *)(param_2 + 6) = uStack_10;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
    uVar5 = (**(code **)(*plVar2 + 8))(plVar2);
    local_res8 = FUN_143360a60(*(undefined8 *)(lVar3 + 0x218),uVar5);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_143590250(param_2,&local_res8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 143566e30 FUN_143566e30 body=324 status=ok
// SIG undefined FUN_143566e30(void)

void FUN_143566e30(longlong param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar3 = FUN_14335fa60(param_1 + 0x50);
    if (iVar3 != 0) {
      FUN_143590250(param_2,param_1 + 0x50);
      return;
    }
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffec;
    *param_2 = *param_2 | 0xc;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined8 *)(param_2 + 6) = uStack_10;
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x1c);
    if ((uVar2 & 3) == 0) {
      if ((uVar2 & 2) == 0) {
        uVar4 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
        ;
        if ((uVar2 & 1) == 0) {
          uVar6 = 7;
          pcVar5 = "regular";
        }
        else {
          uVar6 = 6;
          pcVar5 = "italic";
        }
      }
      else {
        pcVar5 = "bold";
        uVar6 = 4;
        uVar4 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
        ;
      }
    }
    else {
      uVar6 = 10;
      pcVar5 = "boldItalic";
      uVar4 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
    }
    local_res8 = FUN_143360950(uVar4,pcVar5,uVar6);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_143590250(param_2,&local_res8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 143566f80 FUN_143566f80 body=238 status=ok
// SIG undefined FUN_143566f80(void)

void FUN_143566f80(longlong param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar2 = FUN_14335fa60(param_1 + 0x58);
    if (iVar2 != 0) {
      FUN_143590250(param_2,param_1 + 0x58);
      return;
    }
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffec;
    *param_2 = *param_2 | 0xc;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined8 *)(param_2 + 6) = uStack_10;
  }
  else {
    if ((*(uint *)(*(longlong *)(param_1 + 0x40) + 0x1c) >> 4 & 1) == 0) {
      uVar4 = 8;
      pcVar3 = "embedded";
    }
    else {
      uVar4 = 6;
      pcVar3 = "device";
    }
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                                0x218),pcVar3,uVar4);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_143590250(param_2,&local_res8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 143567080 FUN_143567080 body=146 status=ok
// SIG undefined FUN_143567080(void)

void FUN_143567080(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    *param_2 = 0;
    return;
  }
  local_res8 = *(ulonglong *)*param_3;
  uVar3 = (uint)((ulonglong *)*param_3)[4] + local_res8;
  *param_2 = 1;
  do {
    if (uVar3 <= local_res8) {
      return;
    }
    uVar1 = FUN_143307250(&local_res8);
    if (uVar1 == 0) {
      local_res8 = local_res8 - 1;
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))
                      (*(longlong **)(param_1 + 0x40),uVar1 & 0xffff);
  } while (-1 < iVar2);
  *param_2 = 0;
  return;
}



// FUNCTION 143567120 FUN_143567120 body=33 status=ok
// SIG undefined FUN_143567120(void)

undefined8 * FUN_143567120(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b3de50;
  return param_1;
}



// FUNCTION 143567150 FUN_143567150 body=141 status=ok
// SIG undefined FUN_143567150(void)

void FUN_143567150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143566b30(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435671f0 FUN_1435671f0 body=33 status=ok
// SIG undefined FUN_1435671f0(void)

undefined8 * FUN_1435671f0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143567220 FUN_143567220 body=227 status=ok
// SIG undefined FUN_143567220(void)

undefined8 * FUN_143567220(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b3bea0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b3bea0);
    *puVar3 = &PTR_FUN_145b3de50;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143567310 FUN_143567310 body=33 status=ok
// SIG undefined FUN_143567310(void)

undefined8 * FUN_143567310(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 143567340 FUN_143567340 body=1297 status=ok
// SIG undefined FUN_143567340(void)

void FUN_143567340(longlong param_1,ulonglong *param_2,char param_3)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  RefCountImpl *pRVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong **pplVar11;
  ulonglong uVar12;
  longlong local_res8;
  ulonglong *local_res10;
  char local_res18;
  ulonglong local_res20;
  longlong *local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined **local_88;
  longlong *local_80;
  char *local_78;
  undefined8 local_70;
  longlong *local_68;
  ulonglong uStack_60;
  
  local_98 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  plVar8 = *(longlong **)(*(longlong *)(local_98 + 0x300) + 0x10);
  local_res10 = param_2;
  local_res18 = param_3;
  plVar4 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8);
  uVar12 = 0;
  local_88 = &PTR_FUN_145b3df20;
  local_80 = &local_res8;
  local_res8 = 0;
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_88,1);
  FUN_1432ede70(plVar8,&local_res8);
  local_a8 = plVar8 + 2;
  pRVar5 = (RefCountImpl *)(**(code **)(plVar8[2] + 0x18))(local_a8,0x14);
  if (pRVar5 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar5);
    Scaleform::GFx::FontLib::LoadFonts(pRVar5,&local_res8);
  }
  lVar9 = local_98;
  local_78 = "flash.text.Font";
  local_70 = 0xf;
  uVar6 = FUN_1435cc580(local_98,&local_78,*(undefined8 *)(local_98 + 0x1c8));
  local_90 = uVar6;
  FUN_1435ca860(lVar9,&local_a0);
  if (local_res8 == 0) {
    local_68 = (longlong *)0x0;
    uVar10 = 0;
    uStack_60 = uVar10;
    plVar8 = local_68;
  }
  else {
    plVar8 = (longlong *)(local_res8 + 0x10);
    uVar10 = uVar12;
    do {
      if (*plVar8 != -2) break;
      uVar10 = uVar10 + 1;
      plVar8 = plVar8 + 3;
    } while (uVar10 <= *(ulonglong *)(local_res8 + 8));
    local_68 = &local_res8;
    uStack_60 = uVar10;
    plVar8 = local_68;
  }
  do {
    if (((plVar8 == (longlong *)0x0) || (*plVar8 == 0)) ||
       (*(longlong *)(*plVar8 + 8) < (longlong)uVar10)) goto LAB_1435675ac;
    local_res20 = 0;
    FUN_1435e8720(lVar9,&local_res20,uVar6,0,0);
    uVar2 = local_res20;
    lVar7 = *plVar8;
    pRVar5 = *(RefCountImpl **)(lVar7 + 0x20 + uVar10 * 0x18);
    if (pRVar5 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar5);
    }
    pRVar5 = *(RefCountImpl **)(uVar2 + 0x40);
    if (pRVar5 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar5);
    }
    *(undefined8 *)(uVar2 + 0x40) = *(undefined8 *)(lVar7 + uVar10 * 0x18 + 0x20);
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
    uStack_60 = 0;
    FUN_143590450(&local_68,local_res20);
    FUN_1434b49b0(local_a0 + 0x40,&local_68);
    if (9 < ((byte)local_68 & 0x1f)) {
      if (((uint)local_68 >> 9 & 1) == 0) {
        FUN_1435920c0(&local_68);
      }
      else {
        FUN_143592150();
      }
    }
    if (((local_res20 != 0) && ((local_res20 & 1) == 0)) &&
       ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
      FUN_1434ef880();
    }
    uVar2 = *(ulonglong *)(*plVar8 + 8);
    if (((longlong)uVar10 <= (longlong)uVar2) && (uVar10 = uVar10 + 1, uVar10 <= uVar2)) {
      plVar4 = (longlong *)(*plVar8 + uVar10 * 0x18 + 0x10);
      do {
        if (*plVar4 != -2) break;
        uVar10 = uVar10 + 1;
        plVar4 = plVar4 + 3;
      } while (uVar10 <= uVar2);
    }
  } while( true );
LAB_143567785:
  FUN_1432bd3b0(&local_a8);
  goto LAB_14356778e;
LAB_1435675ac:
  if ((local_res18 != '\0') &&
     (pRVar5 = (RefCountImpl *)(**(code **)(*local_a8 + 0x18))(local_a8,0x16),
     pRVar5 != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::Release(pRVar5);
    local_a8 = (longlong *)0x0;
    (**(code **)(*(longlong *)pRVar5 + 0x10))(pRVar5,&local_a8);
    uVar6 = local_90;
    lVar9 = local_98;
    if (local_a8 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
      uStack_60 = 0;
      uVar10 = 0;
      pplVar11 = (longlong **)0x0;
    }
    else {
      plVar8 = local_a8 + 2;
      uVar10 = uVar12;
      do {
        if (*plVar8 != -2) break;
        uVar10 = uVar10 + 1;
        plVar8 = plVar8 + 4;
      } while (uVar10 <= (ulonglong)local_a8[1]);
      pplVar11 = &local_a8;
    }
    do {
      if (((pplVar11 == (longlong **)0x0) || (*pplVar11 == (longlong *)0x0)) ||
         ((*pplVar11)[1] < (longlong)uVar10)) goto LAB_143567785;
      local_res20 = 0;
      FUN_1435e8720(lVar9,&local_res20,uVar6,0,0);
      uVar2 = local_res20;
      lVar7 = FUN_143360a90(*(undefined8 *)(*(longlong *)(local_res20 + 0x48) + 8),
                            (longlong)((*pplVar11)[(uVar10 + 1) * 4] & 0xfffffffffffffffcU) + 0xc,
                            *(ulonglong *)((*pplVar11)[(uVar10 + 1) * 4] & 0xfffffffffffffffcU) &
                            0x7fffffffffffffff);
      *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      piVar1 = (int *)(*(longlong *)(uVar2 + 0x48) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(uVar2 + 0x48) = lVar7;
      local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
      uStack_60 = 0;
      FUN_143590450(&local_68,local_res20);
      FUN_1434b49b0(local_a0 + 0x40,&local_68);
      if (9 < ((byte)local_68 & 0x1f)) {
        if (((uint)local_68 >> 9 & 1) == 0) {
          FUN_1435920c0(&local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (((local_res20 != 0) && ((local_res20 & 1) == 0)) &&
         ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
        FUN_1434ef880();
      }
      uVar2 = (*pplVar11)[1];
      if (((longlong)uVar10 <= (longlong)uVar2) && (uVar10 = uVar10 + 1, uVar10 <= uVar2)) {
        plVar8 = *pplVar11 + uVar10 * 4 + 2;
        do {
          if (*plVar8 != -2) break;
          uVar10 = uVar10 + 1;
          plVar8 = plVar8 + 4;
        } while (uVar10 <= uVar2);
      }
    } while( true );
  }
LAB_14356778e:
  puVar3 = local_res10;
  uVar10 = *local_res10;
  if (local_a0 != uVar10) {
    if (uVar10 != 0) {
      if ((uVar10 & 1) == 0) {
        if ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *local_res10 = uVar10 - 1;
      }
    }
    *puVar3 = local_a0;
  }
  local_88 = &PTR_FUN_145af1858;
  if (local_res8 != 0) {
    lVar7 = *(longlong *)(local_res8 + 8) + 1;
    lVar9 = local_res8;
    do {
      if (*(longlong *)(uVar12 + 0x10 + lVar9) != -2) {
        pRVar5 = *(RefCountImpl **)(uVar12 + lVar9 + 0x20);
        if (pRVar5 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(pRVar5);
        }
        *(undefined8 *)(uVar12 + lVar9 + 0x10) = 0xfffffffffffffffe;
        lVar9 = local_res8;
      }
      uVar12 = uVar12 + 0x18;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (lVar9 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  return;
}



// FUNCTION 143567860 FUN_143567860 body=493 status=ok
// SIG undefined FUN_143567860(void)

void FUN_143567860(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong local_res18;
  undefined8 *local_res20;
  longlong *local_28;
  longlong lStack_20;
  
  if ((param_3 == 0) ||
     (cVar4 = FUN_1435b5020(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_3 + 0x28)),
     cVar4 == '\0')) {
    FUN_1432c2fb0(&local_res18,"unknown");
    if ((param_3 != 0) &&
       (lVar8 = (**(code **)(**(longlong **)(param_3 + 0x28) + 0x38))(), lVar8 != 0)) {
      FUN_1432c4d80(&local_res18,*(longlong *)(lVar8 + 0xa0) + 0x18);
    }
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar9 = FUN_1435c8e40(&local_28,0x858,uVar3);
    FUN_1435cbef0(uVar3,uVar9);
    piVar1 = (int *)(lStack_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 != 1) {
      return;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
    return;
  }
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  plVar2 = *(longlong **)(*(longlong *)(param_3 + 0x28) + 0xd8);
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_res20,1);
  lVar7 = (**(code **)(**(longlong **)(param_3 + 0x28) + 0x38))();
  if (lVar7 != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar7 + 0xa0) + 0x178);
    local_28 = (longlong *)0x0;
    lStack_20 = 0;
    FUN_1432c2fb0(&local_res18,*local_res20);
    cVar4 = FUN_1432ec590(*(undefined8 *)(*(longlong *)(lVar8 + 0x300) + 0x10),uVar3,&local_28,
                          &local_res18);
    iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar5 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
    }
    if (cVar4 != '\0') {
      if (local_28 == (longlong *)0x0) goto LAB_14356798f;
      uVar6 = (**(code **)(*local_28 + 0x10))();
      if ((uVar6 >> 9 & 1) != 0) {
        FUN_1432edba0(*(undefined8 *)(*(longlong *)(lVar8 + 0x300) + 0x10),uVar3,local_28);
      }
    }
    if (local_28 != (longlong *)0x0) {
      FUN_1432de450();
    }
  }
LAB_14356798f:
  piVar1 = (int *)(local_res20 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920();
  return;
}



// FUNCTION 143567a60 FUN_143567a60 body=33 status=ok
// SIG undefined FUN_143567a60(void)

undefined8 * FUN_143567a60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143567a90 FUN_143567a90 body=272 status=ok
// SIG undefined FUN_143567a90(void)

undefined8 * FUN_143567a90(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3d640);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3d640);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b24fa0;
    puVar5[10] = &DAT_145b139e4;
    puVar5[0xb] = "boldItalic";
    puVar5[0xc] = "italic";
    puVar5[0xd] = "regular";
  }
  return param_1;
}



// FUNCTION 143567bb0 FUN_143567bb0 body=77 status=ok
// SIG undefined FUN_143567bb0(void)

undefined8 * FUN_143567bb0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = &DAT_145b139e4;
  param_1[0xb] = "boldItalic";
  param_1[0xc] = "italic";
  param_1[0xd] = "regular";
  return param_1;
}



// FUNCTION 143567c10 FUN_143567c10 body=33 status=ok
// SIG undefined FUN_143567c10(void)

undefined8 * FUN_143567c10(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143567c40 FUN_143567c40 body=250 status=ok
// SIG undefined FUN_143567c40(void)

undefined8 * FUN_143567c40(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3d8e0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3d8e0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "device";
    puVar5[0xb] = "embedded";
  }
  return param_1;
}



// FUNCTION 143567d40 FUN_143567d40 body=55 status=ok
// SIG undefined FUN_143567d40(void)

undefined8 * FUN_143567d40(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "device";
  param_1[0xb] = "embedded";
  return param_1;
}



// FUNCTION 143567d80 FUN_143567d80 body=33 status=ok
// SIG undefined FUN_143567d80(void)

undefined8 * FUN_143567d80(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143567db0 FUN_143567db0 body=261 status=ok
// SIG undefined FUN_143567db0(void)

undefined8 * FUN_143567db0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3bb80);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3bb80);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = &DAT_145b122f4;
    puVar5[0xb] = "pixel";
    puVar5[0xc] = "subpixel";
  }
  return param_1;
}



// FUNCTION 143567ec0 FUN_143567ec0 body=66 status=ok
// SIG undefined FUN_143567ec0(void)

undefined8 * FUN_143567ec0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = &DAT_145b122f4;
  param_1[0xb] = "pixel";
  param_1[0xc] = "subpixel";
  return param_1;
}



// FUNCTION 143567f10 FUN_143567f10 body=33 status=ok
// SIG undefined FUN_143567f10(void)

undefined8 * FUN_143567f10(undefined8 *param_1)

{
  FUN_1434f20e0();
  *param_1 = &PTR_ForEachChild_GC_145b232a8;
  return param_1;
}



// FUNCTION 143567f40 FUN_143567f40 body=335 status=ok
// SIG undefined FUN_143567f40(void)

void FUN_143567f40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x48);
  lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,0x28);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_1433a4740(lVar4);
  }
  FUN_1433a4790(lVar4,uVar5);
  uVar5 = FUN_1433a4a30(lVar4);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  puVar6 = (ulonglong *)FUN_1433a4b30(lVar4,&local_res8,0,uVar5,1);
  lVar7 = FUN_143360a90(*(undefined8 *)(lVar7 + 0x218),
                        (longlong)(*puVar6 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(*puVar6 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar7;
  piVar1 = (int *)(lVar7 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar7);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  if (lVar4 != 0) {
    uVar8 = *(ulonglong *)(lVar4 + 0x18) & 0xfffffffffffffffc;
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar8 + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar8);
    }
    FUN_143370c10(lVar4);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
  }
  return;
}



// FUNCTION 1435680a0 FUN_1435680a0 body=33 status=ok
// SIG undefined FUN_1435680a0(void)

undefined8 * FUN_1435680a0(undefined8 *param_1)

{
  FUN_1434f54f0();
  *param_1 = &PTR_FUN_145b3df58;
  return param_1;
}



// FUNCTION 1435680d0 FUN_1435680d0 body=173 status=ok
// SIG undefined FUN_1435680d0(void)

void FUN_1435680d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1434f20e0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b232a8;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143568190 FUN_143568190 body=33 status=ok
// SIG undefined FUN_143568190(void)

undefined8 * FUN_143568190(undefined8 *param_1)

{
  FUN_1434f55d0();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435681c0 FUN_1435681c0 body=214 status=ok
// SIG undefined FUN_1435681c0(void)

undefined8 * FUN_1435681c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_1434f55d0(puVar2,param_2,&PTR_DAT_145b3be10);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_1434f54f0(puVar2,param_2,&PTR_DAT_145b3be10);
    *puVar2 = &PTR_FUN_145b3df58;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435682a0 FUN_1435682a0 body=90 status=ok
// SIG undefined FUN_1435682a0(void)

undefined8 * FUN_1435682a0(undefined8 *param_1)

{
  FUN_143519560();
  *param_1 = &PTR_FUN_145b3dfd0;
  param_1[0x10] = &PTR__scalar_deleting_destructor__145b0c308;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 2;
  FUN_1432c5250(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x15) = 0;
  return param_1;
}



// FUNCTION 143568300 FUN_143568300 body=610 status=ok
// SIG undefined FUN_143568300(void)

void FUN_143568300(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  longlong *local_58;
  ulonglong uStack_50;
  
  FUN_1435ca860(*(undefined8 *)(param_1 + 0x40),&local_res18);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  FUN_1432c2f70(&local_res8);
  local_58 = (longlong *)
             UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>
             ::GetAddress(param_1 + 0x80);
  lVar3 = *local_58;
  if (lVar3 == 0) {
    local_58 = (longlong *)0x0;
    uVar7 = 0;
    uStack_50 = uVar7;
    plVar8 = local_58;
  }
  else {
    uVar7 = 0;
    plVar6 = (longlong *)(lVar3 + 0x10);
    do {
      uStack_50 = uVar7;
      plVar8 = local_58;
      if (*plVar6 != -2) break;
      uVar7 = uVar7 + 1;
      plVar6 = plVar6 + 5;
      uStack_50 = uVar7;
    } while (uVar7 <= *(ulonglong *)(lVar3 + 8));
  }
  do {
    do {
      UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>::
      GetAddress(param_1 + 0x80);
      if (((plVar8 == (longlong *)0x0) || (*plVar8 == 0)) ||
         (*(longlong *)(*plVar8 + 8) < (longlong)uVar7)) {
        uVar7 = *param_2;
        if (local_res18 != uVar7) {
          if (uVar7 != 0) {
            if ((uVar7 & 1) == 0) {
              if ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *param_2 = uVar7 - 1;
            }
          }
          *param_2 = local_res18;
        }
        iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
        if (iVar5 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
        }
        return;
      }
      FUN_1432c3510(&local_res8);
      if (*(int *)(uVar7 * 0x28 + 0x18 + *plVar8) == 1) {
        FUN_1432c3700(&local_res8,0x2e);
      }
      FUN_1432c4fd0(&local_res8,*plVar8 + 0x20 + uVar7 * 0x28);
      local_res10 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),
                                  (longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                                  *(ulonglong *)(local_res8 & 0xfffffffffffffffc) &
                                  0x7fffffffffffffff);
      *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(&local_58,&local_res10);
      FUN_1434b49b0(local_res18 + 0x40,&local_58);
      if (9 < ((byte)local_58 & 0x1f)) {
        if (((uint)local_58 >> 9 & 1) == 0) {
          FUN_1435920c0(&local_58);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_res10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      uVar4 = *(ulonglong *)(*plVar8 + 8);
    } while (((longlong)uVar4 < (longlong)uVar7) || (uVar7 = uVar7 + 1, uVar4 < uVar7));
    plVar6 = (longlong *)(*plVar8 + (uVar7 * 5 + 2) * 8);
    do {
      if (*plVar6 != -2) break;
      uVar7 = uVar7 + 1;
      plVar6 = plVar6 + 5;
    } while (uVar7 <= uVar4);
  } while( true );
}



// FUNCTION 143568580 FUN_143568580 body=4620 status=ok
// SIG undefined FUN_143568580(void)

void FUN_143568580(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  undefined8 uVar12;
  ushort uVar13;
  char *pcVar14;
  uint uVar15;
  undefined4 local_res18;
  longlong *local_res20;
  longlong local_c8;
  longlong local_c0;
  uint local_b8 [2];
  undefined8 local_b0;
  double local_a8;
  uint local_98 [8];
  undefined1 local_78 [8];
  ulonglong local_70;
  uint local_68 [8];
  ulonglong local_48 [2];
  
  param_3 = (undefined8 *)*param_3;
  if ((*(int *)(param_3 + 4) == 0) || (*(char *)*param_3 != '.')) {
    lVar8 = (**(code **)(*(longlong *)(param_1 + 0x80) + 0x10))
                      ((longlong *)(param_1 + 0x80),0,*param_3);
  }
  else {
    lVar8 = (**(code **)(*(longlong *)(param_1 + 0x80) + 0x10))
                      ((longlong *)(param_1 + 0x80),1,(char *)*param_3 + 1,
                       *(int *)(param_3 + 4) + -1);
  }
  if (lVar8 == 0) {
    uVar3 = *param_2;
    if (uVar3 != 0) {
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
        *param_2 = 0;
      }
      else {
        *param_2 = uVar3 - 1;
        *param_2 = 0;
      }
    }
  }
  else {
    FUN_1435ca830(*(undefined8 *)(param_1 + 0x40),&local_res20);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
    uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1d8);
    if ((*(byte *)(lVar8 + 0x4c) & 1) != 0) {
      FUN_1432c2f70(local_48);
      FUN_1432c3700(local_48,0x23);
      uVar2 = *(uint *)(lVar8 + 0x40);
      local_res18 = uVar2;
      FUN_1432c3700(local_48,(int)"0123456789ABCDEF"[(uVar2 >> 0x10 & 0xff) >> 4]);
      FUN_1432c3700(local_48,(int)"0123456789ABCDEF"[uVar2 >> 0x10 & 0xf]);
      uVar15 = (uint)local_res18._1_1_;
      FUN_1432c3700(local_48,(int)"0123456789ABCDEF"[local_res18._1_1_ >> 4]);
      FUN_1432c3700(local_48,(int)"0123456789ABCDEF"[uVar15 & 0xf]);
      FUN_1432c3700(local_48,(int)"0123456789ABCDEF"[(uVar2 & 0xff) >> 4]);
      FUN_1432c3700(local_48,(int)"0123456789ABCDEF"[uVar2 & 0xf]);
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"color");
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_b8,&local_c8);
      plVar6 = local_res20;
      local_c0 = FUN_143360a90(*(undefined8 *)(lVar4 + 0x218),
                               (longlong)(local_48[0] & 0xfffffffffffffffc) + 0xc,
                               *(ulonglong *)(local_48[0] & 0xfffffffffffffffc) & 0x7fffffffffffffff
                              );
      *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + 1;
      lVar5 = *plVar6;
      uVar9 = Scaleform::GFx::AS3::Value::Value(local_98,&local_c0);
      uVar10 = FUN_1435ae6b0(local_78,uVar12,local_b8);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar10,uVar9);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_48[0] & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar7 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48[0] & 0xfffffffffffffffc);
      }
    }
    if ((*(byte *)(lVar8 + 0x4c) >> 2 & 1) != 0) {
      local_c0 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"fontFamily");
      *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_b8,&local_c0);
      plVar6 = local_res20;
      puVar11 = (ulonglong *)FUN_1433ddd30(lVar8);
      local_c8 = FUN_143360a90(*(undefined8 *)(lVar4 + 0x218),
                               (longlong)(*puVar11 & 0xfffffffffffffffc) + 0xc,
                               *(ulonglong *)(*puVar11 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      lVar5 = *plVar6;
      uVar9 = Scaleform::GFx::AS3::Value::Value(local_98,&local_c8);
      uVar10 = FUN_1435ae6b0(local_78,uVar12,local_b8);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar10,uVar9);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if ((*(byte *)(lVar8 + 0x4c) >> 3 & 1) != 0) {
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"fontSize");
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_98,&local_c8);
      plVar6 = local_res20;
      local_b8[0] = 4;
      local_b0 = 0;
      local_a8 = (double)((float)*(ushort *)(lVar8 + 0x48) * 0.05);
      lVar5 = *local_res20;
      uVar9 = FUN_1435ae6b0(local_78,uVar12,local_98);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar9,local_b8);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if ((*(byte *)(lVar8 + 0x4c) >> 5 & 1) != 0) {
      local_c0 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"fontStyle");
      *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_98,&local_c0);
      plVar6 = local_res20;
      pcVar14 = "normal";
      if ((*(byte *)(lVar8 + 0x4a) & 2) != 0) {
        pcVar14 = "italic";
      }
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),pcVar14);
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      lVar5 = *plVar6;
      uVar9 = Scaleform::GFx::AS3::Value::Value(local_b8,&local_c8);
      uVar10 = FUN_1435ae6b0(local_78,uVar12,local_98);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar10,uVar9);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    pcVar14 = "normal";
    if ((*(byte *)(lVar8 + 0x4c) >> 4 & 1) != 0) {
      local_c0 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"fontWeight");
      *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_98,&local_c0);
      plVar6 = local_res20;
      if ((*(byte *)(lVar8 + 0x4a) & 1) != 0) {
        pcVar14 = "bold";
      }
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),pcVar14);
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      lVar5 = *plVar6;
      uVar9 = Scaleform::GFx::AS3::Value::Value(local_b8,&local_c8);
      uVar10 = FUN_1435ae6b0(local_78,uVar12,local_98);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar10,uVar9);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if (*(char *)(lVar8 + 0x4c) < '\0') {
      local_c0 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"kerning");
      *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_98,&local_c0);
      plVar6 = local_res20;
      pcVar14 = "false";
      if ((*(byte *)(lVar8 + 0x4a) & 8) != 0) {
        pcVar14 = "true";
      }
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),pcVar14);
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      lVar5 = *plVar6;
      uVar9 = Scaleform::GFx::AS3::Value::Value(local_b8,&local_c8);
      uVar10 = FUN_1435ae6b0(local_78,uVar12,local_98);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar10,uVar9);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if ((*(byte *)(lVar8 + 0x72) >> 3 & 1) != 0) {
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"leading");
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_98,&local_c8);
      plVar6 = local_res20;
      local_b8[0] = 2;
      local_b0 = 0;
      local_a8 = (double)CONCAT44(local_a8._4_4_,(int)*(short *)(lVar8 + 0x6c));
      lVar5 = *local_res20;
      uVar9 = FUN_1435ae6b0(local_78,uVar12,local_98);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar9,local_b8);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if ((*(byte *)(lVar8 + 0x4c) >> 1 & 1) != 0) {
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"letterSpacing");
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_98,&local_c8);
      plVar6 = local_res20;
      local_b8[0] = 4;
      local_b0 = 0;
      local_a8 = (double)(*(float *)(lVar8 + 0x44) * 0.05);
      lVar5 = *local_res20;
      uVar9 = FUN_1435ae6b0(local_78,uVar12,local_98);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar9,local_b8);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if ((*(byte *)(lVar8 + 0x72) >> 4 & 1) != 0) {
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"marginLeft");
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_98,&local_c8);
      plVar6 = local_res20;
      local_b8[0] = 3;
      local_b0 = 0;
      local_a8 = (double)CONCAT44(local_a8._4_4_,(uint)*(ushort *)(lVar8 + 0x6e));
      lVar5 = *local_res20;
      uVar9 = FUN_1435ae6b0(local_78,uVar12,local_98);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar9,local_b8);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if ((*(byte *)(lVar8 + 0x72) >> 5 & 1) != 0) {
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"marginRight");
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_98,&local_c8);
      plVar6 = local_res20;
      local_b8[0] = 3;
      local_b0 = 0;
      local_a8 = (double)CONCAT44(local_a8._4_4_,(uint)*(ushort *)(lVar8 + 0x70));
      lVar5 = *local_res20;
      uVar9 = FUN_1435ae6b0(local_78,uVar12,local_98);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar9,local_b8);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if ((*(byte *)(lVar8 + 0x72) & 1) != 0) {
      uVar13 = *(ushort *)(lVar8 + 0x72) & 0x600;
      if (uVar13 == 0) {
        pcVar14 = "left";
      }
      else if (uVar13 == 0x600) {
        pcVar14 = "center";
      }
      else {
        pcVar14 = "justify";
        if (uVar13 == 0x200) {
          pcVar14 = "right";
        }
      }
      local_c0 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"textAlign");
      *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_98,&local_c0);
      plVar6 = local_res20;
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),pcVar14);
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      lVar5 = *plVar6;
      uVar9 = Scaleform::GFx::AS3::Value::Value(local_b8,&local_c8);
      uVar10 = FUN_1435ae6b0(local_78,uVar12,local_98);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar10,uVar9);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if ((*(byte *)(lVar8 + 0x4c) >> 6 & 1) != 0) {
      local_c0 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"textDecoration");
      *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_98,&local_c0);
      plVar6 = local_res20;
      pcVar14 = "none";
      if ((*(byte *)(lVar8 + 0x4a) & 4) != 0) {
        pcVar14 = "underline";
      }
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),pcVar14);
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      lVar5 = *plVar6;
      uVar9 = Scaleform::GFx::AS3::Value::Value(local_b8,&local_c8);
      uVar10 = FUN_1435ae6b0(local_78,uVar12,local_98);
      (**(code **)(lVar5 + 0x20))(plVar6,&local_res18,uVar10,uVar9);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if ((*(byte *)(lVar8 + 0x72) >> 2 & 1) != 0) {
      local_c8 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x218),"textIndent");
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      Scaleform::GFx::AS3::Value::Value(local_98,&local_c8);
      plVar6 = local_res20;
      local_b8[0] = 2;
      local_b0 = 0;
      local_a8 = (double)CONCAT44(local_a8._4_4_,(int)*(short *)(lVar8 + 0x6a));
      lVar8 = *local_res20;
      uVar12 = FUN_1435ae6b0(local_78,uVar12,local_98);
      (**(code **)(lVar8 + 0x20))(plVar6,&local_res18,uVar12,local_b8);
      if (9 < ((byte)local_68[0] & 0x1f)) {
        if ((local_68[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_68);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_70 != 0) {
        if ((local_70 & 1) == 0) {
          if ((*(uint *)(local_70 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_70 = local_70 - 1;
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    plVar6 = (longlong *)*param_2;
    if (local_res20 != plVar6) {
      if (plVar6 != (longlong *)0x0) {
        if (((ulonglong)plVar6 & 1) == 0) {
          if ((*(uint *)(plVar6 + 1) & 0x3fffff) != 0) {
            *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)plVar6 - 1;
        }
      }
      *param_2 = (ulonglong)local_res20;
    }
  }
  return;
}



// FUNCTION 1435697a0 FUN_1435697a0 body=89 status=ok
// SIG undefined FUN_1435697a0(void)

void FUN_1435697a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  char cVar2;
  
  cVar2 = FUN_143dee3d0(param_1 + 0x80,*(undefined8 *)*param_3,
                        *(undefined4 *)((undefined8 *)*param_3 + 4));
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0xa8) = 2;
    puVar1 = (uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10) +
                     0x52f0);
    *puVar1 = *puVar1 | 0x80000;
    return;
  }
  *(undefined4 *)(param_1 + 0xa8) = 3;
  return;
}



// FUNCTION 143569800 FUN_143569800 body=332 status=ok
// SIG undefined FUN_143569800(void)

void FUN_143569800(longlong param_1,undefined8 param_2,undefined8 *param_3,uint *param_4)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulonglong local_res18 [2];
  
  iVar2 = *(int *)((undefined8 *)*param_3 + 4);
  if (iVar2 == 0) {
    return;
  }
  uVar3 = *param_4 & 0x1f;
  if (uVar3 == 0xc) {
    bVar4 = *(longlong *)(param_4 + 4) == 0;
  }
  else {
    if (uVar3 != 10) goto LAB_14356988e;
    bVar4 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
  }
  if (bVar4) {
    if (iVar2 == 0) {
      return;
    }
    if (**(char **)*param_3 == '.') {
      FUN_143dee8d0(param_1 + 0x80,1);
      return;
    }
    FUN_143dee8d0(param_1 + 0x80,0);
    return;
  }
LAB_14356988e:
  if (uVar3 == 0xc) {
    uVar1 = *(undefined8 *)(param_4 + 4);
    FUN_1432c2f70(local_res18);
    FUN_1432c3950(local_res18,*(undefined8 *)*param_3,0xffffffffffffffff);
    FUN_1432c3700(local_res18,0x7b);
    FUN_143575720(local_res18,uVar1);
    FUN_1432c3700(local_res18,0x7d);
    FUN_143dee3d0(param_1 + 0x80,(longlong)(local_res18[0] & 0xfffffffffffffffc) + 0xc,
                  *(ulonglong *)(local_res18[0] & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res18[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18[0] & 0xfffffffffffffffc);
    }
  }
  return;
}



// FUNCTION 143569960 FUN_143569960 body=225 status=ok
// SIG undefined FUN_143569960(void)

void FUN_143569960(longlong param_1,ulonglong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  
  if ((((byte)*param_3 & 0x1f) == 0xc) && (lVar1 = *(longlong *)(param_3 + 4), lVar1 != 0)) {
    local_res20 = 0;
    FUN_1435ccdc0(*(undefined8 *)(param_1 + 0x40),local_res18,&local_res20,"flash.text.TextFormat",0
                  ,0);
    FUN_143575860(local_res20,lVar1);
    if (&local_res20 != param_2) {
      if (local_res20 != 0) {
        *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
        *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) & 0x8fffffff;
      }
      uVar2 = *param_2;
      if (uVar2 != 0) {
        if ((uVar2 & 1) == 0) {
          if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
            FUN_1434ef880(uVar2);
          }
        }
        else {
          *param_2 = uVar2 - 1;
        }
      }
      *param_2 = local_res20;
    }
    if (((local_res20 != 0) && ((local_res20 & 1) == 0)) &&
       ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
      FUN_1434ef880();
    }
  }
  return;
}



// FUNCTION 143569a50 FUN_143569a50 body=30 status=ok
// SIG undefined FUN_143569a50(void)

undefined8 * FUN_143569a50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143568300();
  return param_2;
}



// FUNCTION 143569a80 FUN_143569a80 body=30 status=ok
// SIG undefined FUN_143569a80(void)

undefined8 * FUN_143569a80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143569960();
  return param_2;
}



// FUNCTION 143569ab0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b3e0a0;
  return param_1;
}



// FUNCTION 143569ae0 FUN_143569ae0 body=218 status=ok
// SIG undefined FUN_143569ae0(void)

void FUN_143569ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143519560(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b3dfd0;
    puVar1[0x10] = &PTR__scalar_deleting_destructor__145b0c308;
    puVar1[0x11] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 2;
    FUN_1432c5250(puVar1 + 0x13);
    *(undefined4 *)(puVar1 + 0x15) = 0;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143569bc0 FUN_143569bc0 body=33 status=ok
// SIG undefined FUN_143569bc0(void)

undefined8 * FUN_143569bc0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143569bf0 FUN_143569bf0 body=214 status=ok
// SIG undefined FUN_143569bf0(void)

undefined8 * FUN_143569bf0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3c0e0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b3c0e0);
    *puVar2 = &PTR_FUN_145b3e0a0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143569cd0 FUN_143569cd0 body=772 status=ok
// SIG undefined FUN_143569cd0(void)

undefined8 * FUN_143569cd0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong local_res18 [2];
  uint local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_58 [2];
  undefined8 local_50;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b3e118;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  local_res18[0] = lVar2 + 0x80;
  piVar1 = (int *)(lVar2 + 0x98);
  *piVar1 = *piVar1 + 1;
  local_58[0] = 0;
  local_50 = 0;
  local_70 = 0;
  local_78[0] = 0xc;
  local_68 = 0;
  uStack_64 = 0;
  FUN_143590250(param_1 + 8,local_res18);
  FUN_143590140(param_1 + 0xc,local_78);
  FUN_143590140(param_1 + 0x14,local_78);
  FUN_143590140(param_1 + 0x10,local_78);
  FUN_143590140(param_1 + 0x18,local_78);
  FUN_143590250(param_1 + 0x1c,local_res18);
  FUN_143590140(param_1 + 0x24,local_78);
  FUN_143590140(param_1 + 0x20,local_78);
  FUN_143590140(param_1 + 0x28,local_78);
  FUN_143590140(param_1 + 0x2c,local_78);
  FUN_143590140(param_1 + 0x30,local_78);
  FUN_143590140(param_1 + 0x38,local_78);
  FUN_143590140(param_1 + 0x34,local_78);
  FUN_143590140(param_1 + 0x3c,local_78);
  uVar3 = param_1[0x40];
  if (uVar3 != 0) {
    if ((uVar3 & 1) == 0) {
      if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x40] = uVar3 - 1;
    }
    param_1[0x40] = 0;
  }
  FUN_143590250(param_1 + 0x41,local_res18);
  FUN_143590140(param_1 + 0x45,local_78);
  FUN_143590250(param_1 + 0x49,local_res18);
  if (9 < ((byte)local_78[0] & 0x1f)) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_1;
}



// FUNCTION 143569fe0 FUN_143569fe0 body=912 status=ok
// SIG undefined FUN_143569fe0(void)

void FUN_143569fe0(longlong param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  longlong *plVar2;
  
  FUN_1435b16a0();
  uVar1 = *(uint *)(param_1 + 0x40) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x50);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a027;
      plVar2 = (longlong *)(param_1 + 0x58);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a027:
  uVar1 = *(uint *)(param_1 + 0x60) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x70);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a051;
      plVar2 = (longlong *)(param_1 + 0x78);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a051:
  uVar1 = *(uint *)(param_1 + 0x80) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x90);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a084;
      plVar2 = (longlong *)(param_1 + 0x98);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a084:
  uVar1 = *(uint *)(param_1 + 0xa0) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0xb0);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a0b7;
      plVar2 = (longlong *)(param_1 + 0xb8);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a0b7:
  uVar1 = *(uint *)(param_1 + 0xc0) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0xd0);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a0ea;
      plVar2 = (longlong *)(param_1 + 0xd8);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a0ea:
  uVar1 = *(uint *)(param_1 + 0xe0) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0xf0);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a11d;
      plVar2 = (longlong *)(param_1 + 0xf8);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a11d:
  uVar1 = *(uint *)(param_1 + 0x100) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x110);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a150;
      plVar2 = (longlong *)(param_1 + 0x118);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a150:
  uVar1 = *(uint *)(param_1 + 0x120) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x130);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a183;
      plVar2 = (longlong *)(param_1 + 0x138);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a183:
  uVar1 = *(uint *)(param_1 + 0x140) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x150);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a1b6;
      plVar2 = (longlong *)(param_1 + 0x158);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a1b6:
  uVar1 = *(uint *)(param_1 + 0x160) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x170);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a1e9;
      plVar2 = (longlong *)(param_1 + 0x178);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a1e9:
  uVar1 = *(uint *)(param_1 + 0x180) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 400);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a21c;
      plVar2 = (longlong *)(param_1 + 0x198);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a21c:
  uVar1 = *(uint *)(param_1 + 0x1a0) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x1b0);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a24f;
      plVar2 = (longlong *)(param_1 + 0x1b8);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a24f:
  uVar1 = *(uint *)(param_1 + 0x1c0) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x1d0);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a282;
      plVar2 = (longlong *)(param_1 + 0x1d8);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a282:
  uVar1 = *(uint *)(param_1 + 0x1e0) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x1f0);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a2b5;
      plVar2 = (longlong *)(param_1 + 0x1f8);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a2b5:
  if (*(longlong *)(param_1 + 0x200) != 0) {
    (*param_3)(param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x208) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x218);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a2fa;
      plVar2 = (longlong *)(param_1 + 0x220);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a2fa:
  uVar1 = *(uint *)(param_1 + 0x228) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x238);
    }
    else {
      if (0xe < uVar1) goto LAB_14356a32d;
      plVar2 = (longlong *)(param_1 + 0x240);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
LAB_14356a32d:
  uVar1 = *(uint *)(param_1 + 0x248) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 600);
    }
    else {
      if (0xe < uVar1) {
        return;
      }
      plVar2 = (longlong *)(param_1 + 0x260);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
  return;
}



// FUNCTION 14356a380 FUN_14356a380 body=3832 status=ok
// SIG undefined FUN_14356a380(void)

/* WARNING: Removing unreachable block (ram,0x00014356a76b) */
/* WARNING: Removing unreachable block (ram,0x00014356a77b) */
/* WARNING: Removing unreachable block (ram,0x00014356a78e) */
/* WARNING: Removing unreachable block (ram,0x00014356a787) */

void FUN_14356a380(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  bool bVar2;
  uint *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort uVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar12;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  uint local_b8 [2];
  undefined8 local_b0;
  double local_a8;
  undefined8 uStack_a0;
  uint local_98 [2];
  undefined8 local_90;
  double local_88;
  undefined8 uStack_80;
  uint local_78 [2];
  undefined8 local_70;
  double local_68;
  undefined8 uStack_60;
  uint local_58 [2];
  undefined8 local_50;
  ulonglong uVar11;
  
  uVar11 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  local_res10 = *(longlong *)(lVar7 + 0x218) + 0x80;
  piVar1 = (int *)(*(longlong *)(lVar7 + 0x218) + 0x98);
  *piVar1 = *piVar1 + 1;
  puVar3 = (uint *)FUN_1435905b0();
  local_b8[0] = *puVar3;
  local_b0 = *(undefined8 *)(puVar3 + 2);
  local_a8 = *(double *)(puVar3 + 4);
  uStack_a0 = *(undefined8 *)(puVar3 + 6);
  if (9 < ((byte)*puVar3 & 0x1f)) {
    if ((*puVar3 >> 9 & 1) == 0) {
      FUN_143592070(puVar3);
    }
    else {
      FUN_143592140();
    }
  }
  local_58[0] = 0;
  local_50 = 0;
  if ((*(byte *)(param_2 + 0x22) & 1) == 0) {
    FUN_143590250(param_1 + 0x40,&local_res10);
  }
  else {
    pcVar9 = "left";
    uVar8 = *(ushort *)(param_2 + 0x22) >> 9 & 3;
    if (uVar8 == 1) {
      pcVar9 = "right";
    }
    else if (uVar8 == 2) {
      pcVar9 = "justify";
    }
    else if (uVar8 == 3) {
      pcVar9 = "center";
    }
    local_res8 = FUN_143360a60(*(undefined8 *)(lVar7 + 0x218),pcVar9);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_143590250(param_1 + 0x40,&local_res8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(byte *)(param_2 + 0x22) >> 1 & 1) == 0) {
    local_90 = local_b0;
    local_98[0] = local_b8[0];
    local_88 = local_a8;
    uStack_80 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_98;
    bVar2 = true;
    bVar12 = false;
  }
  else {
    puVar3 = local_78;
    local_68 = (double)CONCAT44(local_68._4_4_,(uint)*(ushort *)(param_2 + 0x18));
    bVar2 = false;
    bVar12 = true;
    local_78[0] = 3;
    local_70 = 0;
  }
  FUN_143590140(param_1 + 0x60,puVar3);
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  bVar2 = false;
  bVar12 = false;
  if ((*(byte *)(param_3 + 0x4c) >> 4 & 1) == 0) {
    bVar12 = true;
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  else {
    puVar3 = local_98;
    bVar2 = true;
    local_98[0] = 1;
    local_90 = 0;
    local_88 = (double)(CONCAT71(local_88._1_7_,*(undefined1 *)(param_3 + 0x4a)) &
                       0xffffffffffffff01);
  }
  FUN_143590140(param_1 + 0xa0,puVar3);
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar2 = false;
  bVar12 = false;
  if ((*(byte *)(param_3 + 0x4c) >> 5 & 1) == 0) {
    bVar12 = true;
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  else {
    puVar3 = local_98;
    bVar2 = true;
    local_98[0] = 1;
    local_88 = (double)(CONCAT71(local_88._1_7_,*(byte *)(param_3 + 0x4a) >> 1) & 0xffffffffffffff01
                       );
    local_90 = 0;
  }
  FUN_143590140(param_1 + 0x100,puVar3);
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar12 = false;
  if ((*(byte *)(param_3 + 0x4c) >> 6 & 1) == 0) {
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  else {
    puVar3 = local_98;
    bVar12 = true;
    local_98[0] = 1;
    local_88 = (double)(CONCAT71(local_88._1_7_,*(byte *)(param_3 + 0x4a) >> 2) & 0xffffffffffffff01
                       );
    local_90 = 0;
  }
  FUN_143590140(param_1 + 0x228,puVar3);
  if ((bVar12) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar12 = false;
  if ((char)*(ushort *)(param_2 + 0x22) < '\0') {
    local_98[0] = 1;
    local_90 = 0;
    bVar2 = true;
    puVar3 = local_98;
    local_88 = (double)CONCAT71(local_88._1_7_,(*(ushort *)(param_2 + 0x22) & 0x8080) == 0x8080);
  }
  else {
    bVar2 = false;
    bVar12 = true;
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  FUN_143590140(param_1 + 0x80,puVar3);
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar2 = false;
  bVar12 = false;
  if ((*(byte *)(param_3 + 0x4c) & 1) == 0) {
    bVar12 = true;
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  else {
    puVar3 = local_98;
    bVar2 = true;
    local_98[0] = 4;
    local_90 = 0;
    local_88 = (double)(*(uint *)(param_3 + 0x40) & 0xffffff);
  }
  FUN_143590140(param_1 + 0xc0,puVar3);
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar12 = (*(byte *)(param_3 + 0x4c) >> 2 & 1) == 0;
  if (bVar12) {
    puVar4 = &local_res8;
    local_res8 = local_res10;
    uVar6 = local_res10;
  }
  else {
    puVar4 = (ulonglong *)FUN_1433ddd30(param_3);
    local_res18 = FUN_143360a90(*(undefined8 *)(lVar7 + 0x218),
                                (longlong)(*puVar4 & 0xfffffffffffffffc) + 0xc,
                                *(ulonglong *)(*puVar4 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    puVar4 = &local_res18;
    uVar6 = local_res18;
  }
  *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1;
  FUN_143590250(param_1 + 0xe0,puVar4);
  if (bVar12) {
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (!bVar12) {
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  bVar2 = false;
  bVar12 = false;
  if ((*(byte *)(param_2 + 0x22) >> 2 & 1) == 0) {
    bVar12 = true;
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  else {
    puVar3 = local_98;
    bVar2 = true;
    local_98[0] = 4;
    local_90 = 0;
    local_88 = (double)(int)*(short *)(param_2 + 0x1a);
  }
  FUN_143590140(param_1 + 0x120,puVar3);
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar2 = false;
  bVar12 = false;
  if (*(char *)(param_3 + 0x4c) < '\0') {
    puVar3 = local_98;
    bVar2 = true;
    local_98[0] = 1;
    local_88 = (double)(CONCAT71(local_88._1_7_,*(byte *)(param_3 + 0x4a) >> 3) & 0xffffffffffffff01
                       );
    local_90 = 0;
  }
  else {
    bVar12 = true;
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  FUN_143590140(param_1 + 0x140,puVar3);
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar2 = false;
  bVar12 = false;
  if ((*(byte *)(param_2 + 0x22) >> 3 & 1) == 0) {
    bVar12 = true;
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  else {
    puVar3 = local_98;
    bVar2 = true;
    local_98[0] = 4;
    local_90 = 0;
    local_88 = (double)(int)*(short *)(param_2 + 0x1c);
  }
  FUN_143590140(param_1 + 0x160,puVar3);
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar2 = false;
  bVar12 = false;
  if ((*(byte *)(param_2 + 0x22) >> 4 & 1) == 0) {
    bVar12 = true;
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  else {
    puVar3 = local_98;
    bVar2 = true;
    local_98[0] = 4;
    local_90 = 0;
    local_88 = (double)*(ushort *)(param_2 + 0x1e);
  }
  FUN_143590140(param_1 + 0x180,puVar3);
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar2 = false;
  bVar12 = false;
  if ((*(byte *)(param_3 + 0x4c) >> 1 & 1) == 0) {
    bVar12 = true;
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  else {
    puVar3 = local_98;
    bVar2 = true;
    local_98[0] = 4;
    local_90 = 0;
    local_88 = (double)(*(float *)(param_3 + 0x44) * 0.05);
  }
  FUN_143590140(param_1 + 0x1c0,puVar3);
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar2 = false;
  bVar12 = false;
  if ((*(byte *)(param_2 + 0x22) >> 5 & 1) == 0) {
    bVar12 = true;
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  else {
    puVar3 = local_98;
    bVar2 = true;
    local_98[0] = 4;
    local_90 = 0;
    local_88 = (double)*(ushort *)(param_2 + 0x20);
  }
  FUN_143590140(param_1 + 0x1a0,puVar3);
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar2 = false;
  bVar12 = false;
  if ((*(byte *)(param_3 + 0x4c) >> 3 & 1) == 0) {
    bVar12 = true;
    local_70 = local_b0;
    local_78[0] = local_b8[0];
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        FUN_143592070(local_b8);
      }
      else {
        FUN_143592140();
      }
    }
    puVar3 = local_78;
  }
  else {
    puVar3 = local_98;
    bVar2 = true;
    local_98[0] = 4;
    local_90 = 0;
    local_88 = (double)((float)*(ushort *)(param_3 + 0x48) * 0.05);
  }
  FUN_143590140(param_1 + 0x1e0,puVar3);
  if ((bVar12) && (9 < ((byte)local_78[0] & 0x1f))) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if ((bVar2) && (9 < ((byte)local_98[0] & 0x1f))) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  bVar2 = false;
  bVar12 = false;
  FUN_143590250(param_1 + 0x208,&local_res10);
  if (((*(ushort *)(param_3 + 0x4c) & 0x100) == 0) ||
     (lVar5 = FUN_1432c3580(param_3 + 0x20), lVar5 == 0)) {
    puVar4 = &local_res8;
    local_res8 = local_res10;
    bVar12 = true;
    uVar6 = local_res10;
  }
  else {
    bVar2 = true;
    puVar4 = (ulonglong *)(*(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffffc);
    local_res18 = FUN_143360a90(*(undefined8 *)(lVar7 + 0x218),(longlong)puVar4 + 0xc,
                                *puVar4 & 0x7fffffffffffffff);
    puVar4 = &local_res18;
    uVar6 = local_res18;
  }
  *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1;
  FUN_143590250(param_1 + 0x248,puVar4);
  if (bVar12) {
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (bVar2) {
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if ((*(byte *)(param_2 + 0x22) >> 6 & 1) == 0) {
    uVar11 = *(ulonglong *)(param_1 + 0x200);
    if (uVar11 != 0) {
      if ((uVar11 & 1) == 0) {
        if ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(param_1 + 0x200) = uVar11 - 1;
      }
      *(undefined8 *)(param_1 + 0x200) = 0;
    }
  }
  else {
    local_res8 = local_res8 & 0xffffffff00000000;
    lVar7 = Scaleform::Render::Text::ParagraphFormat::GetTabStops(param_2,&local_res8);
    puVar4 = (ulonglong *)
             FUN_1435ca860(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_res18);
    uVar6 = *puVar4;
    FUN_1434b4900(uVar6 + 0x40,(longlong)(int)(uint)local_res8);
    if ((uint)local_res8 != 0) {
      do {
        local_78[0] = 4;
        local_70 = 0;
        local_68 = (double)*(uint *)(lVar7 + uVar11 * 4);
        FUN_1434b4fe0(uVar6 + 0x40,uVar11,local_78);
        if (9 < ((byte)local_78[0] & 0x1f)) {
          if ((local_78[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_78);
          }
          else {
            FUN_143592150();
          }
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < (uint)local_res8);
    }
    if (uVar6 != *(ulonglong *)(param_1 + 0x200)) {
      if (uVar6 != 0) {
        *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
      }
      uVar11 = *(ulonglong *)(param_1 + 0x200);
      if (uVar11 != 0) {
        if ((uVar11 & 1) == 0) {
          if ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *(ulonglong *)(param_1 + 0x200) = uVar11 - 1;
        }
      }
      *(ulonglong *)(param_1 + 0x200) = uVar6;
    }
    if (((uVar6 != 0) && ((uVar6 & 1) == 0)) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
      FUN_1434ef880(uVar6);
    }
  }
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14356b280 FUN_14356b280 body=2256 status=ok
// SIG undefined FUN_14356b280(void)

void FUN_14356b280(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  longlong *plVar16;
  undefined1 local_res8 [8];
  longlong *local_res20;
  
  uVar13 = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  uVar8 = *(uint *)(param_1 + 0x40) & 0x1f;
  if (uVar8 != 0) {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0x50) == 0;
LAB_14356b2e1:
      if (bVar15) goto LAB_14356b400;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0x50) ==
               *(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + 0x80;
      goto LAB_14356b2e1;
    }
    local_res20 = (longlong *)(*(longlong *)(lVar2 + 0x218) + 0x48);
    piVar1 = (int *)(*(longlong *)(lVar2 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    FUN_1435911f0(param_1 + 0x40,local_res8,&local_res20);
    lVar3 = *local_res20;
    uVar12 = uVar13;
    do {
      uVar10 = uVar12 + 1;
      uVar11 = uVar13;
      if (*(char *)(lVar3 + uVar12) != (&DAT_145b068ec)[uVar12]) goto LAB_14356b351;
      uVar12 = uVar10;
    } while (uVar10 != 5);
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 63999;
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 1;
    goto LAB_14356b3f1;
  }
  goto LAB_14356b400;
  while (uVar11 = uVar10, uVar10 != 6) {
LAB_14356b351:
    uVar10 = uVar11 + 1;
    uVar12 = uVar13;
    if (*(char *)(lVar3 + uVar11) != "right"[uVar11]) goto LAB_14356b390;
  }
  *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0xfbff;
  *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x201;
  goto LAB_14356b3f1;
  while (uVar12 = uVar10, uVar10 != 7) {
LAB_14356b390:
    uVar10 = uVar12 + 1;
    uVar11 = uVar13;
    if (*(char *)(lVar3 + uVar12) != "center"[uVar12]) goto LAB_14356b3c0;
  }
  *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x601;
  goto LAB_14356b3f1;
  while (uVar11 = uVar12, uVar12 != 8) {
LAB_14356b3c0:
    uVar12 = uVar11 + 1;
    if (*(char *)(lVar3 + uVar11) != "justify"[uVar11]) {
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0xf9fe;
      goto LAB_14356b3f1;
    }
  }
  *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0xfdff;
  *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x401;
LAB_14356b3f1:
  plVar4 = local_res20 + 3;
  *(int *)plVar4 = (int)*plVar4 + -1;
  if ((int)*plVar4 == 0) {
    FUN_14335f920(local_res20);
  }
LAB_14356b400:
  uVar8 = *(uint *)(param_1 + 0x60) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b475:
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0xfffd;
    *(undefined2 *)(param_2 + 0x18) = 0;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0x70) == 0;
LAB_14356b43b:
      if (bVar15) goto LAB_14356b475;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0x70) ==
               *(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x80;
      goto LAB_14356b43b;
    }
    FUN_143590b70(param_1 + 0x60,local_res8,&local_res20);
    if ((int)(uint)local_res20 < 0) {
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 2;
      *(undefined2 *)(param_2 + 0x18) = 0;
    }
    else {
      iVar14 = (uint)local_res20;
      if (0x2d0 < (int)(uint)local_res20) {
        iVar14 = 0x2d0;
      }
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 2;
      *(short *)(param_2 + 0x18) = (short)iVar14;
    }
  }
  uVar8 = *(uint *)(param_1 + 0xa0) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b4cc:
    *(byte *)(param_3 + 0x4a) = *(byte *)(param_3 + 0x4a) & 0xfe;
    *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) & 0xffef;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0xb0) == 0;
LAB_14356b4b3:
      if (bVar15) goto LAB_14356b4cc;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0xb0) ==
               *(longlong *)(*(longlong *)(param_1 + 0xb0) + 8) + 0x80;
      goto LAB_14356b4b3;
    }
    uVar5 = FUN_1435909c0();
    FUN_1433dd860(param_3,uVar5);
  }
  uVar8 = *(uint *)(param_1 + 0x100) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b523:
    *(byte *)(param_3 + 0x4a) = *(byte *)(param_3 + 0x4a) & 0xfd;
    *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) & 0xffdf;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0x110) == 0;
LAB_14356b50a:
      if (bVar15) goto LAB_14356b523;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0x110) ==
               *(longlong *)(*(longlong *)(param_1 + 0x110) + 8) + 0x80;
      goto LAB_14356b50a;
    }
    uVar5 = FUN_1435909c0();
    FUN_1433dd8e0(param_3,uVar5);
  }
  uVar8 = *(uint *)(param_1 + 0x228) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b57a:
    *(byte *)(param_3 + 0x4a) = *(byte *)(param_3 + 0x4a) & 0xfb;
    *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) & 0xffbf;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0x238) == 0;
LAB_14356b561:
      if (bVar15) goto LAB_14356b57a;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0x238) ==
               *(longlong *)(*(longlong *)(param_1 + 0x238) + 8) + 0x80;
      goto LAB_14356b561;
    }
    uVar5 = FUN_1435909c0();
    Scaleform::Render::Text::TextFormat::SetUnderline(param_3,uVar5);
  }
  uVar8 = *(uint *)(param_1 + 0x80) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b5de:
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0x7f7f;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0x90) == 0;
LAB_14356b5ae:
      if (bVar15) goto LAB_14356b5de;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0x90) ==
               *(longlong *)(*(longlong *)(param_1 + 0x90) + 8) + 0x80;
      goto LAB_14356b5ae;
    }
    cVar6 = FUN_1435909c0();
    if (cVar6 == '\0') {
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0x7fff;
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x80;
    }
    else {
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x8000;
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x80;
    }
  }
  uVar8 = *(uint *)(param_1 + 0xc0) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b640:
    *(undefined4 *)(param_3 + 0x40) = 0xff000000;
    *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) & 0xfffe;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0xd0) == 0;
LAB_14356b613:
      if (bVar15) goto LAB_14356b640;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0xd0) ==
               *(longlong *)(*(longlong *)(param_1 + 0xd0) + 8) + 0x80;
      goto LAB_14356b613;
    }
    FUN_143590eb0((uint *)(param_1 + 0xc0),local_res8,&local_res20);
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) & 0xff000000;
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) | (uint)local_res20 & 0xffffff;
    *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) | 1;
  }
  uVar8 = *(uint *)(param_1 + 0xe0) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b6d1:
    *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) & 0xeffb;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0xf0) == 0;
LAB_14356b680:
      if (bVar15) goto LAB_14356b6d1;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0xf0) ==
               *(longlong *)(*(longlong *)(param_1 + 0xf0) + 8) + 0x80;
      goto LAB_14356b680;
    }
    local_res20 = (longlong *)(*(longlong *)(lVar2 + 0x218) + 0x48);
    piVar1 = (int *)(*(longlong *)(lVar2 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    FUN_1435911f0(param_1 + 0xe0,local_res8,&local_res20);
    FUN_1433ddb10(param_3,*local_res20,0xffffffffffffffff);
    plVar4 = local_res20 + 3;
    *(int *)plVar4 = (int)*plVar4 + -1;
    if ((int)*plVar4 == 0) {
      FUN_14335f920();
    }
  }
  uVar8 = *(uint *)(param_1 + 0x120) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b749:
    *(undefined2 *)(param_2 + 0x1a) = 0;
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0xfffb;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0x130) == 0;
LAB_14356b70d:
      if (bVar15) goto LAB_14356b749;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0x130) ==
               *(longlong *)(*(longlong *)(param_1 + 0x130) + 8) + 0x80;
      goto LAB_14356b70d;
    }
    FUN_143590b70((uint *)(param_1 + 0x120),local_res8,&local_res20);
    if ((int)(uint)local_res20 < -0x2d0) {
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 4;
      *(undefined2 *)(param_2 + 0x1a) = 0xfd30;
    }
    else {
      uVar7 = SUB82(local_res20,0);
      if (0x2d0 < (int)(uint)local_res20) {
        uVar7 = 0x2d0;
      }
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 4;
      *(undefined2 *)(param_2 + 0x1a) = uVar7;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x160) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b7bf:
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0xfff7;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0x170) == 0;
LAB_14356b78d:
      if (bVar15) goto LAB_14356b7bf;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0x170) ==
               *(longlong *)(*(longlong *)(param_1 + 0x170) + 8) + 0x80;
      goto LAB_14356b78d;
    }
    FUN_143590b70((uint *)(param_1 + 0x160),local_res8,&local_res20);
    iVar14 = -0x2d0;
    if ((-0x2d1 < (int)(uint)local_res20) &&
       (iVar14 = (uint)local_res20, 0x2d0 < (int)(uint)local_res20)) {
      iVar14 = 0x2d0;
    }
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 8;
    *(short *)(param_2 + 0x1c) = (short)iVar14;
  }
  uVar8 = *(uint *)(param_1 + 0x180) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b82e:
    *(undefined2 *)(param_2 + 0x1e) = 0;
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0xffef;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 400) == 0;
LAB_14356b7f4:
      if (bVar15) goto LAB_14356b82e;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 400) ==
               *(longlong *)(*(longlong *)(param_1 + 400) + 8) + 0x80;
      goto LAB_14356b7f4;
    }
    FUN_143590b70((uint *)(param_1 + 0x180),local_res8,&local_res20);
    if ((int)(uint)local_res20 < 0) {
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x10;
      *(undefined2 *)(param_2 + 0x1e) = 0;
    }
    else {
      uVar7 = SUB82(local_res20,0);
      if (0x2d0 < (int)(uint)local_res20) {
        uVar7 = 0x2d0;
      }
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x10;
      *(undefined2 *)(param_2 + 0x1e) = uVar7;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x1a0) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b8a2:
    *(undefined2 *)(param_2 + 0x20) = 0;
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0xffdf;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0x1b0) == 0;
LAB_14356b868:
      if (bVar15) goto LAB_14356b8a2;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0x1b0) ==
               *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 8) + 0x80;
      goto LAB_14356b868;
    }
    FUN_143590b70((uint *)(param_1 + 0x1a0),local_res8,&local_res20);
    if ((int)(uint)local_res20 < 0) {
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x20;
      *(undefined2 *)(param_2 + 0x20) = 0;
    }
    else {
      uVar7 = SUB82(local_res20,0);
      if (0x2d0 < (int)(uint)local_res20) {
        uVar7 = 0x2d0;
      }
      *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x20;
      *(undefined2 *)(param_2 + 0x20) = uVar7;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x1e0) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b94f:
    *(undefined2 *)(param_3 + 0x48) = 0;
    *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) & 0xfff7;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0x1f0) == 0;
LAB_14356b8e0:
      if (bVar15) goto LAB_14356b94f;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0x1f0) ==
               *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 8) + 0x80;
      goto LAB_14356b8e0;
    }
    FUN_143590b70((uint *)(param_1 + 0x1e0),local_res8,&local_res20);
    if (-1 < (int)(uint)local_res20) {
      if ((int)(uint)local_res20 < 0x80) {
        if (3276.8 <= (float)((ulonglong)local_res20 & 0xffffffff)) {
          *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) | 8;
          *(undefined2 *)(param_3 + 0x48) = 0xffff;
        }
        else {
          *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) | 8;
          *(short *)(param_3 + 0x48) =
               (short)(longlong)((float)((ulonglong)local_res20 & 0xffffffff) * 20.0);
        }
      }
      else {
        *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) | 8;
        *(undefined2 *)(param_3 + 0x48) = 0x9ec;
      }
    }
  }
  uVar8 = *(uint *)(param_1 + 0x248) & 0x1f;
  if (uVar8 == 0) {
LAB_14356b9de:
    FUN_1432c3510(param_3 + 0x20);
    *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) & 0xfeff;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 600) == 0;
LAB_14356b98d:
      if (bVar15) goto LAB_14356b9de;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 600) ==
               *(longlong *)(*(longlong *)(param_1 + 600) + 8) + 0x80;
      goto LAB_14356b98d;
    }
    local_res20 = (longlong *)(*(longlong *)(lVar2 + 0x218) + 0x48);
    piVar1 = (int *)(*(longlong *)(lVar2 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    FUN_1435911f0(param_1 + 0x248,local_res8,&local_res20);
    FUN_1433dde10(param_3,*local_res20,0xffffffffffffffff);
    plVar4 = local_res20 + 3;
    *(int *)plVar4 = (int)*plVar4 + -1;
    if ((int)*plVar4 == 0) {
      FUN_14335f920();
    }
  }
  uVar8 = *(uint *)(param_1 + 0x1c0) & 0x1f;
  if (uVar8 == 0) {
LAB_14356ba6d:
    *(undefined4 *)(param_3 + 0x44) = 0;
    *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) & 0xfffd;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0x1d0) == 0;
LAB_14356ba1d:
      if (bVar15) goto LAB_14356ba6d;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0x1d0) ==
               *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8) + 0x80;
      goto LAB_14356ba1d;
    }
    FUN_143590af0((uint *)(param_1 + 0x1c0),local_res8,&local_res20);
    plVar4 = (longlong *)0xc086800000000000;
    if (((double)local_res20 < -720.0) ||
       (plVar16 = local_res20, plVar4 = (longlong *)0x4086800000000000, 720.0 < (double)local_res20)
       ) {
      plVar16 = plVar4;
    }
    *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) | 2;
    *(float *)(param_3 + 0x44) = (float)(double)plVar16 * 20.0;
  }
  uVar8 = *(uint *)(param_1 + 0x140) & 0x1f;
  if (uVar8 == 0) {
LAB_14356babf:
    *(byte *)(param_3 + 0x4a) = *(byte *)(param_3 + 0x4a) & 0xf7;
    *(ushort *)(param_3 + 0x4c) = *(ushort *)(param_3 + 0x4c) & 0xff7f;
  }
  else {
    if (uVar8 == 0xc) {
      bVar15 = *(longlong *)(param_1 + 0x150) == 0;
LAB_14356baa6:
      if (bVar15) goto LAB_14356babf;
    }
    else if (uVar8 == 10) {
      bVar15 = *(longlong *)(param_1 + 0x150) ==
               *(longlong *)(*(longlong *)(param_1 + 0x150) + 8) + 0x80;
      goto LAB_14356baa6;
    }
    uVar5 = FUN_1435909c0();
    Scaleform::Render::Text::TextFormat::SetKerning(param_3,uVar5);
  }
  if (*(longlong *)(param_1 + 0x200) == 0) {
    Scaleform::Render::Text::ParagraphFormat::FreeTabStops(param_2);
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) & 0xffbf;
  }
  else {
    uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x200) + 0x40);
    FUN_1433df6f0(param_2,uVar12 & 0xffffffff);
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x40;
    if (uVar12 != 0) {
      do {
        uVar9 = FUN_1434b4f50(*(longlong *)(param_1 + 0x200) + 0x40,uVar13);
        FUN_143590af0(uVar9,local_res8,&local_res20);
        Scaleform::Render::Text::ParagraphFormat::SetTabStopsElement
                  (param_2,uVar13 & 0xffffffff,(longlong)(double)local_res20);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar12);
    }
  }
  return;
}



// FUNCTION 14356bb60 AS3Constructor body=340 status=ok
// SIG undefined AS3Constructor(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextFormat::AS3Constructor
               (longlong param_1,uint param_2,longlong param_3)

{
  FSettingsModule::ShutdownModule();
  if (param_2 != 0) {
    FUN_143590140(param_1 + 0xe0,param_3);
  }
  if (1 < param_2) {
    FUN_143590140(param_1 + 0x1e0,param_3 + 0x20);
  }
  if (2 < param_2) {
    FUN_143590140(param_1 + 0xc0,param_3 + 0x40);
  }
  if (3 < param_2) {
    FUN_143590140(param_1 + 0xa0,param_3 + 0x60);
  }
  if (4 < param_2) {
    FUN_143590140(param_1 + 0x100,param_3 + 0x80);
  }
  if (5 < param_2) {
    FUN_143590140(param_1 + 0x228,param_3 + 0xa0);
  }
  if (6 < param_2) {
    FUN_143590140(param_1 + 0x248,param_3 + 0xc0);
  }
  if (7 < param_2) {
    FUN_143590140(param_1 + 0x208,param_3 + 0xe0);
  }
  if (8 < param_2) {
    FUN_143590140(param_1 + 0x40,param_3 + 0x100);
  }
  if (9 < param_2) {
    FUN_143590140(param_1 + 0x180,param_3 + 0x120);
  }
  if (10 < param_2) {
    FUN_143590140(param_1 + 0x1a0,param_3 + 0x140);
  }
  if (0xb < param_2) {
    FUN_143590140(param_1 + 0x120,param_3 + 0x160);
  }
  if (0xc < param_2) {
    FUN_143590140(param_1 + 0x160,param_3 + 0x180);
  }
  return;
}



// FUNCTION 14356bcc0 FUN_14356bcc0 body=109 status=ok
// SIG undefined FUN_14356bcc0(void)

void FUN_14356bcc0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar2 = *(uint *)(param_1 + 0x40) & 0x1f;
  if (uVar2 == 0xc) {
    bVar4 = *(longlong *)(param_1 + 0x50) == 0;
LAB_14356bcf6:
    if (bVar4) {
      lVar3 = *(longlong *)(*param_2 + 8) + 0x80;
      goto LAB_14356bd0e;
    }
  }
  else if (uVar2 == 10) {
    bVar4 = *(longlong *)(param_1 + 0x50) == *(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + 0x80
    ;
    goto LAB_14356bcf6;
  }
  lVar3 = *(longlong *)(param_1 + 0x50);
LAB_14356bd0e:
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  return;
}



// FUNCTION 14356be60 FUN_14356be60 body=121 status=ok
// SIG undefined FUN_14356be60(void)

void FUN_14356be60(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar2 = *(uint *)(param_1 + 0xe0) & 0x1f;
  if (uVar2 == 0xc) {
    bVar4 = *(longlong *)(param_1 + 0xf0) == 0;
LAB_14356be9f:
    if (bVar4) {
      lVar3 = *(longlong *)(*param_2 + 8) + 0x80;
      goto LAB_14356beba;
    }
  }
  else if (uVar2 == 10) {
    bVar4 = *(longlong *)(param_1 + 0xf0) == *(longlong *)(*(longlong *)(param_1 + 0xf0) + 8) + 0x80
    ;
    goto LAB_14356be9f;
  }
  lVar3 = *(longlong *)(param_1 + 0xf0);
LAB_14356beba:
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  return;
}



// FUNCTION 14356c100 FUN_14356c100 body=120 status=ok
// SIG undefined FUN_14356c100(void)

void FUN_14356c100(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x200);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14356c1a0 FUN_14356c1a0 body=121 status=ok
// SIG undefined FUN_14356c1a0(void)

void FUN_14356c1a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar2 = *(uint *)(param_1 + 0x208) & 0x1f;
  if (uVar2 == 0xc) {
    bVar4 = *(longlong *)(param_1 + 0x218) == 0;
LAB_14356c1df:
    if (bVar4) {
      lVar3 = *(longlong *)(*param_2 + 8) + 0x80;
      goto LAB_14356c1fa;
    }
  }
  else if (uVar2 == 10) {
    bVar4 = *(longlong *)(param_1 + 0x218) ==
            *(longlong *)(*(longlong *)(param_1 + 0x218) + 8) + 0x80;
    goto LAB_14356c1df;
  }
  lVar3 = *(longlong *)(param_1 + 0x218);
LAB_14356c1fa:
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  return;
}



// FUNCTION 14356c280 FUN_14356c280 body=121 status=ok
// SIG undefined FUN_14356c280(void)

void FUN_14356c280(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar2 = *(uint *)(param_1 + 0x248) & 0x1f;
  if (uVar2 == 0xc) {
    bVar4 = *(longlong *)(param_1 + 600) == 0;
LAB_14356c2bf:
    if (bVar4) {
      lVar3 = *(longlong *)(*param_2 + 8) + 0x80;
      goto LAB_14356c2da;
    }
  }
  else if (uVar2 == 10) {
    bVar4 = *(longlong *)(param_1 + 600) == *(longlong *)(*(longlong *)(param_1 + 600) + 8) + 0x80;
    goto LAB_14356c2bf;
  }
  lVar3 = *(longlong *)(param_1 + 600);
LAB_14356c2da:
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  return;
}



// FUNCTION 14356c320 FUN_14356c320 body=30 status=ok
// SIG undefined FUN_14356c320(void)

undefined8 * FUN_14356c320(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14356c100();
  return param_2;
}



// FUNCTION 14356c350 FUN_14356c350 body=33 status=ok
// SIG undefined FUN_14356c350(void)

undefined8 * FUN_14356c350(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b3e1d8;
  return param_1;
}



// FUNCTION 14356c380 FUN_14356c380 body=141 status=ok
// SIG undefined FUN_14356c380(void)

void FUN_14356c380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143569cd0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14356c420 FUN_14356c420 body=33 status=ok
// SIG undefined FUN_14356c420(void)

undefined8 * FUN_14356c420(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14356c450 FUN_14356c450 body=214 status=ok
// SIG undefined FUN_14356c450(void)

undefined8 * FUN_14356c450(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3c1a0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3c1a0);
    *puVar2 = &PTR_FUN_145b3e1d8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14356c530 FUN_14356c530 body=33 status=ok
// SIG undefined FUN_14356c530(void)

undefined8 * FUN_14356c530(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14356c560 FUN_14356c560 body=250 status=ok
// SIG undefined FUN_14356c560(void)

undefined8 * FUN_14356c560(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3d700);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3d700);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = &DAT_145b3e268;
    puVar5[0xb] = "light";
  }
  return param_1;
}



// FUNCTION 14356c660 FUN_14356c660 body=55 status=ok
// SIG undefined FUN_14356c660(void)

undefined8 * FUN_14356c660(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = &DAT_145b3e268;
  param_1[0xb] = "light";
  return param_1;
}



// FUNCTION 14356c6a0 FUN_14356c6a0 body=33 status=ok
// SIG undefined FUN_14356c6a0(void)

undefined8 * FUN_14356c6a0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14356c6d0 FUN_14356c6d0 body=261 status=ok
// SIG undefined FUN_14356c6d0(void)

undefined8 * FUN_14356c6d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b3b410);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b3b410);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = &DAT_145b3e278;
    puVar5[0xb] = "default";
    puVar5[0xc] = &DAT_145b3e27c;
  }
  return param_1;
}



// FUNCTION 14356c7e0 FUN_14356c7e0 body=66 status=ok
// SIG undefined FUN_14356c7e0(void)

undefined8 * FUN_14356c7e0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = &DAT_145b3e278;
  param_1[0xb] = "default";
  param_1[0xc] = &DAT_145b3e27c;
  return param_1;
}



// FUNCTION 14356c830 FUN_14356c830 body=33 status=ok
// SIG undefined FUN_14356c830(void)

undefined8 * FUN_14356c830(undefined8 *param_1)

{
  FUN_1434fa6f0();
  *param_1 = &PTR_ForEachChild_GC_145b3e280;
  return param_1;
}



// FUNCTION 14356c860 FUN_14356c860 body=92 status=ok
// SIG undefined FUN_14356c860(void)

void FUN_14356c860(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (param_2 == '\0') {
    FUN_14356c8d0();
    plVar1 = *(longlong **)(param_1 + 0x88);
    (**(code **)(*plVar1 + 0x168))(plVar1,0x4059000000000000);
    (**(code **)(*plVar1 + 0x178))(plVar1,0x4059000000000000);
    FUN_143dec020(plVar1,&DAT_145af3922,1);
  }
  return;
}



// FUNCTION 14356c8d0 FUN_14356c8d0 body=326 status=ok
// SIG undefined FUN_14356c8d0(void)

undefined8 FUN_14356c8d0(longlong param_1)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined1 local_28 [8];
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_res8[0] = 0x10002;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300);
    FUN_143310f20(*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x50),local_28,local_res8);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(lVar4 + 0x108) != 0) {
      uVar3 = *(longlong *)(lVar4 + 0x108) - 1;
      local_20 = *(undefined8 *)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar4 + 0x120) + (uVar3 >> 6) * 8) + 0x18 +
                      (ulonglong)((uint)uVar3 & 0x3f) * 0xa0) + 0xa0) + 0x178);
    }
    local_res8[0] = 0x10002;
    lVar4 = 0;
    this = (RefCountNTSImpl *)
           (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))
                     (*(longlong **)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x10),local_28,0,
                      local_res8,0);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    if (*(RefCountNTSImpl **)(param_1 + 0x88) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x88));
    }
    *(RefCountNTSImpl **)(param_1 + 0x88) = this;
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    lVar1 = *(longlong *)(param_1 + 0x88);
    if (lVar1 != 0) {
      lVar4 = lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4;
    }
    FUN_1435e0fb0(lVar4,param_1);
    uVar2 = FUN_1435b5230(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    return *(undefined8 *)(param_1 + 0x88);
  }
  return *(undefined8 *)(param_1 + 0x88);
}



// FUNCTION 14356ca20 UpdateAutosizeSettings body=145 status=ok
// SIG undefined UpdateAutosizeSettings(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::UpdateAutosizeSettings(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  bVar4 = *(byte *)(lVar2 + 0xfc) & 1;
  if ((bVar4 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 0xe0) + 0x158) & 8) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    Render::Text::DocView::SetAutoSizeX(*(undefined8 *)(lVar2 + 0xe0));
  }
  else {
    pbVar1 = (byte *)(*(longlong *)(lVar2 + 0xe0) + 0x158);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  if (bVar4 == 0) {
    pbVar1 = (byte *)(*(longlong *)(lVar2 + 0xe0) + 0x158);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    Render::Text::DocView::SetAutoSizeY(*(undefined8 *)(lVar2 + 0xe0));
  }
  *(uint *)(lVar2 + 0xfc) = *(uint *)(lVar2 + 0xfc) | 0x2000;
  FUN_143de5880(lVar2);
  return;
}



// FUNCTION 14356cb20 FUN_14356cb20 body=139 status=ok
// SIG undefined FUN_14356cb20(void)

void FUN_14356cb20(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  
  pcVar2 = "normal";
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0xe0) + 0x158) & 0x40) != 0) {
    pcVar2 = "advanced";
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (pcVar2[lVar3] != '\0');
  lVar3 = FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218)
                        ,pcVar2,lVar3,0);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return;
}



// FUNCTION 14356cbc0 FUN_14356cbc0 body=125 status=ok
// SIG undefined FUN_14356cbc0(void)

void FUN_14356cbc0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  lVar4 = 0;
  do {
    lVar5 = lVar4 + 1;
    if ((*(char **)*param_3)[lVar4] != "normal"[lVar4]) {
      iVar3 = _guard_xfg_dispatch_icall_nop(*(char **)*param_3,"advanced");
      if (iVar3 == 0) {
        pbVar1 = (byte *)(*(longlong *)(lVar2 + 0xe0) + 0x158);
        *pbVar1 = *pbVar1 | 0x40;
      }
      FUN_143de5880(lVar2);
      return;
    }
    lVar4 = lVar5;
  } while (lVar5 != 7);
  pbVar1 = (byte *)(*(longlong *)(lVar2 + 0xe0) + 0x158);
  *pbVar1 = *pbVar1 & 0xbf;
  FUN_143de5880(lVar2);
  return;
}



// FUNCTION 14356cc50 FUN_14356cc50 body=195 status=ok
// SIG undefined FUN_14356cc50(void)

void FUN_14356cc50(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x88) + 0xfc) & 1) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    pcVar5 = "none";
  }
  else {
    bVar2 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0xe0) + 0x159);
    bVar4 = bVar2 & 3;
    if ((bVar2 & 3) != 0) {
      if (bVar4 == 1) {
        lVar3 = *(longlong *)(param_1 + 0x40);
        uVar6 = 5;
        pcVar5 = "right";
      }
      else {
        if (bVar4 != 2) {
          return;
        }
        lVar3 = *(longlong *)(param_1 + 0x40);
        uVar6 = 6;
        pcVar5 = "center";
      }
      goto LAB_14356cccf;
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    pcVar5 = "left";
  }
  uVar6 = 4;
LAB_14356cccf:
  lVar3 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),pcVar5,uVar6,0);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return;
}



// FUNCTION 14356cd20 FUN_14356cd20 body=472 status=ok
// SIG undefined FUN_14356cd20(void)

void FUN_14356cd20(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x88);
  lVar4 = *(longlong *)(lVar3 + 0xe0);
  bVar11 = *(byte *)(lVar3 + 0xfc);
  bVar2 = *(byte *)(lVar4 + 0x159);
  lVar10 = 0;
  lVar6 = lVar10;
  do {
    lVar7 = lVar6 + 1;
    if (*(char *)(*(longlong *)*param_3 + lVar6) != (&DAT_145b122f4)[lVar6]) {
      *(uint *)(lVar3 + 0xfc) = *(uint *)(lVar3 + 0xfc) | 1;
      lVar6 = *(longlong *)*param_3;
      lVar7 = lVar10;
      goto LAB_14356cdb0;
    }
    lVar6 = lVar7;
  } while (lVar7 != 5);
  *(uint *)(lVar3 + 0xfc) = *(uint *)(lVar3 + 0xfc) & 0xfffffffe;
  *(byte *)(lVar4 + 0x159) = *(byte *)(lVar4 + 0x159) & 0xfc;
  goto LAB_14356ce34;
  while (lVar7 = lVar8, lVar8 != 5) {
LAB_14356cdb0:
    lVar8 = lVar7 + 1;
    lVar9 = lVar10;
    if (*(char *)(lVar6 + lVar7) != (&DAT_145b068ec)[lVar7]) goto LAB_14356cde0;
  }
  *(byte *)(lVar4 + 0x159) = *(byte *)(lVar4 + 0x159) & 0xfc;
  goto LAB_14356ce34;
  while (lVar9 = lVar7, lVar7 != 6) {
LAB_14356cde0:
    lVar7 = lVar9 + 1;
    if (*(char *)(lVar6 + lVar9) != "right"[lVar9]) goto LAB_14356ce10;
  }
  *(byte *)(lVar4 + 0x159) = *(byte *)(lVar4 + 0x159) & 0xfd;
  *(byte *)(lVar4 + 0x159) = *(byte *)(lVar4 + 0x159) | 1;
  goto LAB_14356ce34;
  while (lVar10 = lVar7, lVar7 != 7) {
LAB_14356ce10:
    lVar7 = lVar10 + 1;
    if (*(char *)(lVar6 + lVar10) != "center"[lVar10]) goto LAB_14356ce3c;
  }
  *(byte *)(lVar4 + 0x159) = *(byte *)(lVar4 + 0x159) & 0xfe;
  *(byte *)(lVar4 + 0x159) = *(byte *)(lVar4 + 0x159) | 2;
LAB_14356ce34:
  *(byte *)(lVar4 + 0x15b) = *(byte *)(lVar4 + 0x15b) | 1;
LAB_14356ce3c:
  if (((bVar2 & 3) != (*(byte *)(*(longlong *)(lVar3 + 0xe0) + 0x159) & 3)) ||
     ((bVar11 & 1) != (*(byte *)(lVar3 + 0xfc) & 1))) {
    lVar4 = *(longlong *)(param_1 + 0x88);
    bVar11 = *(byte *)(lVar4 + 0xfc) & 1;
    if ((bVar11 == 0) || ((*(byte *)(*(longlong *)(lVar4 + 0xe0) + 0x158) & 8) != 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      Scaleform::Render::Text::DocView::SetAutoSizeX(*(undefined8 *)(lVar4 + 0xe0));
    }
    else {
      pbVar1 = (byte *)(*(longlong *)(lVar4 + 0xe0) + 0x158);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    if (bVar11 == 0) {
      pbVar1 = (byte *)(*(longlong *)(lVar4 + 0xe0) + 0x158);
      *pbVar1 = *pbVar1 & 0xfd;
    }
    else {
      Scaleform::Render::Text::DocView::SetAutoSizeY(*(undefined8 *)(lVar4 + 0xe0));
    }
    *(uint *)(lVar4 + 0xfc) = *(uint *)(lVar4 + 0xfc) | 0x2000;
    FUN_143de5880(lVar4);
  }
  FUN_143de5880(lVar3);
  return;
}



// FUNCTION 14356d040 scrollVGet body=38 status=ok
// SIG undefined scrollVGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::scrollVGet(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1433ffa20(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0));
  *param_2 = iVar1 + 1;
  return;
}



// FUNCTION 14356d070 FUN_14356d070 body=29 status=ok
// SIG undefined FUN_14356d070(void)

void FUN_14356d070(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143de9c70(*(undefined8 *)(param_1 + 0x88));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14356d120 FUN_14356d120 body=101 status=ok
// SIG undefined FUN_14356d120(void)

void FUN_14356d120(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0xe0) + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  FUN_1435e8720(*(longlong *)(param_1 + 0x40),param_2,
                *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x3d8),0,0);
  FUN_14356a380(*param_2,uVar3,uVar2);
  return;
}



// FUNCTION 14356d190 FUN_14356d190 body=314 status=ok
// SIG undefined FUN_14356d190(void)

void FUN_14356d190(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [88];
  undefined1 local_58 [80];
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  cVar3 = FUN_143dea8d0(lVar1);
  if (cVar3 == '\0') {
    uVar4 = (**(code **)(**(longlong **)
                           (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10) + 0x180))()
    ;
    FUN_1433dd540(local_58,uVar4);
    local_d0 = 1;
    local_d8 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    FUN_14356b280(param_3,&local_d8,local_58);
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xe0) + 0x10);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    uVar5 = FUN_1433ddf20(*(undefined8 *)(lVar2 + 0x38),local_b0,local_58);
    FUN_1433e69f0(*(undefined8 *)(*(longlong *)(lVar1 + 0xe0) + 0x10),uVar5);
    *(uint *)(lVar1 + 0xfc) = *(uint *)(lVar1 + 0xfc) | 0x10000;
    FUN_1433dd700(local_b0);
    uVar4 = FUN_1433deff0(uVar4,local_b0,&local_d8);
    FUN_1433e6ac0(*(undefined8 *)(*(longlong *)(lVar1 + 0xe0) + 0x10),uVar4);
    *(uint *)(lVar1 + 0xfc) = *(uint *)(lVar1 + 0xfc) | 0x10000;
    FUN_1433dedf0(local_b0);
    FUN_1433dedf0(&local_d8);
    FUN_1433dd700(local_58);
  }
  return;
}



// FUNCTION 14356d410 FUN_14356d410 body=80 status=ok
// SIG undefined FUN_14356d410(void)

void FUN_14356d410(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)FUN_143de9ed0(*(undefined8 *)(param_1 + 0x88),&local_res8);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14356d4b0 lengthGet body=40 status=ok
// SIG undefined lengthGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::lengthGet
               (longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = Render::Text::StyledText::GetLength
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0xe0) + 0x10));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14356d540 scrollHGet body=58 status=ok
// SIG undefined scrollHGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::scrollHGet(longlong param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1433fe2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0));
  *param_2 = (int)((double)uVar1 * 0.05);
  return;
}



// FUNCTION 14356d580 scrollVGet body=38 status=ok
// SIG undefined scrollVGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::scrollVGet(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1433fe300(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0));
  *param_2 = iVar1 + 1;
  return;
}



// FUNCTION 14356d630 multilineSet body=92 status=ok
// SIG undefined multilineSet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::multilineSet
               (longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  lVar2 = *(longlong *)(lVar1 + 0xe0);
  if ((*(byte *)(lVar2 + 0x158) >> 2 & 1) != param_3) {
    if (param_3 != 0) {
      *(byte *)(lVar2 + 0x158) = *(byte *)(lVar2 + 0x158) | 4;
      UpdateAutosizeSettings();
      FUN_143de5880(lVar1);
      return;
    }
    *(byte *)(lVar2 + 0x158) = *(byte *)(lVar2 + 0x158) & 0xfb;
    UpdateAutosizeSettings();
  }
  FUN_143de5880(lVar1);
  return;
}



// FUNCTION 14356d6a0 numLinesGet body=36 status=ok
// SIG undefined numLinesGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::numLinesGet
               (longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = Render::Text::DocView::GetLinesCount
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14356d6d0 FUN_14356d6d0 body=170 status=ok
// SIG undefined FUN_14356d6d0(void)

void FUN_14356d6d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  puVar2 = (ulonglong *)FUN_143deaca0(*(undefined8 *)(param_1 + 0x88));
  if (puVar2 == (ulonglong *)0x0) {
    lVar3 = *(longlong *)(*param_2 + 8);
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar3 + 0x80;
  }
  else {
    lVar3 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),
                          (longlong)(*puVar2 & 0xfffffffffffffffc) + 0xc,
                          *(ulonglong *)(*puVar2 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14356d7b0 scrollHGet body=58 status=ok
// SIG undefined scrollHGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::scrollHGet(longlong param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = Render::Text::DocView::GetHScrollOffset
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0));
  *param_2 = (int)((double)uVar1 * 0.05);
  return;
}



// FUNCTION 14356d7f0 FUN_14356d7f0 body=68 status=ok
// SIG undefined FUN_14356d7f0(void)

void FUN_14356d7f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  iVar2 = 0;
  if (-1 < param_3) {
    iVar2 = param_3;
  }
  Scaleform::Render::Text::DocView::SetHScrollOffset
            (*(undefined8 *)(lVar1 + 0xe0),(longlong)((double)iVar2 * 20.0));
  FUN_143de5880(lVar1);
  return;
}



// FUNCTION 14356d840 scrollVGet body=38 status=ok
// SIG undefined scrollVGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::scrollVGet(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = Render::Text::DocView::GetVScrollOffset
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xe0));
  *param_2 = iVar1 + 1;
  return;
}



// FUNCTION 14356d870 FUN_14356d870 body=52 status=ok
// SIG undefined FUN_14356d870(void)

void FUN_14356d870(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  iVar2 = 1;
  if (0 < param_3) {
    iVar2 = param_3;
  }
  Scaleform::Render::Text::DocView::SetVScrollOffset(*(undefined8 *)(lVar1 + 0xe0),iVar2 + -1);
  FUN_143de5880(lVar1);
  return;
}



// FUNCTION 14356d8b0 selectableGet body=29 status=ok
// SIG undefined selectableGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::selectableGet
               (longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143de5950(*(undefined8 *)(param_1 + 0x88));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14356d900 selectionBeginIndexGet body=29 status=ok
// SIG undefined selectionBeginIndexGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::selectionBeginIndexGet
               (longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = GFx::TextField::GetBeginIndex(*(undefined8 *)(param_1 + 0x88));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14356d930 selectionEndIndexGet body=29 status=ok
// SIG undefined selectionEndIndexGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::selectionEndIndexGet
               (longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = GFx::TextField::GetEndIndex(*(undefined8 *)(param_1 + 0x88));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14356d9c0 styleSheetGet body=111 status=ok
// SIG undefined styleSheetGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::styleSheetGet
               (longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))
                    (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + -0x38;
  }
  lVar2 = USceneComponent::GetAttachParent(*(undefined8 *)(lVar1 + 0x18));
  if (lVar2 != 0) {
    lVar2 = USceneComponent::GetAttachParent(*(undefined8 *)(lVar1 + 0x18));
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar1 = USceneComponent::GetAttachParent(*(undefined8 *)(lVar1 + 0x18));
      FUN_1434e6830(param_2,lVar1 + 0x50);
    }
  }
  return;
}



// FUNCTION 14356da40 FUN_14356da40 body=302 status=ok
// SIG undefined FUN_14356da40(void)

void FUN_14356da40(longlong param_1,undefined8 param_2,longlong param_3)

{
  ushort *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  lVar4 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 8))
                    (lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4);
  lVar5 = 0;
  lVar6 = lVar4 + -0x38;
  if (lVar4 == 0) {
    lVar6 = lVar5;
  }
  if (param_3 == 0) {
    lVar4 = USceneComponent::GetAttachParent(*(undefined8 *)(lVar6 + 0x18));
    if (lVar4 != 0) {
      lVar6 = USceneComponent::GetAttachParent(*(undefined8 *)(lVar6 + 0x18));
      uVar3 = *(ulonglong *)(lVar6 + 0x50);
      if (uVar3 != 0) {
        if ((uVar3 & 1) == 0) {
          if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *(ulonglong *)(lVar6 + 0x50) = uVar3 - 1;
        }
        *(undefined8 *)(lVar6 + 0x50) = 0;
      }
    }
  }
  else {
    lVar4 = USceneComponent::GetAttachParent(lVar2);
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x58);
      if (lVar4 != 0) {
        lVar5 = FUN_143574510(lVar4);
      }
      FUN_143de6160(lVar2,lVar5);
    }
    lVar4 = USceneComponent::GetAttachParent(*(undefined8 *)(lVar6 + 0x18));
    FUN_1434f0700(lVar4 + 0x50,param_3);
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0xd8);
    if (lVar4 != 0) {
      puVar1 = (ushort *)(lVar4 + 0xa0);
      *puVar1 = *puVar1 | 1;
    }
    FUN_143de5880(*(undefined8 *)(lVar6 + 0x18));
  }
  FUN_143de97c0(lVar2);
  FUN_143decb70(lVar2);
  *(uint *)(lVar2 + 0xfc) = *(uint *)(lVar2 + 0xfc) | 0x10000;
  return;
}



// FUNCTION 14356db80 FUN_14356db80 body=83 status=ok
// SIG undefined FUN_14356db80(void)

void FUN_14356db80(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)FUN_143de9da0(*(undefined8 *)(param_1 + 0x88),&local_res8,0);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14356dbe0 FUN_14356dbe0 body=115 status=ok
// SIG undefined FUN_14356dbe0(void)

void FUN_14356dbe0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  if ((*(uint *)(lVar2 + 0xfc) >> 1 & 1) != 0) {
    *(uint *)(lVar2 + 0xfc) = *(uint *)(lVar2 + 0xfc) & 0xfffffffd | 0x10000;
  }
  puVar3 = (undefined8 *)*param_3;
  *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
  uVar4 = *puVar3;
  if ((*(uint *)(lVar2 + 0xfc) >> 1 & 1) != 0) {
    *(uint *)(lVar2 + 0xfc) = *(uint *)(lVar2 + 0xfc) & 0xfffffffd;
  }
  FUN_143dec020(lVar2,uVar4,0,1);
  piVar1 = (int *)(puVar3 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar3);
    return;
  }
  return;
}



// FUNCTION 14356dc60 FUN_14356dc60 body=29 status=ok
// SIG undefined FUN_14356dc60(void)

void FUN_14356dc60(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143dea830(*(undefined8 *)(param_1 + 0x88));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14356dcb0 textHeightGet body=31 status=ok
// SIG undefined textHeightGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::textHeightGet
               (longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = GFx::TextField::GetTextHeight(*(undefined8 *)(param_1 + 0x88));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14356dce0 textWidthGet body=31 status=ok
// SIG undefined textWidthGet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::textWidthGet
               (longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = GFx::TextField::GetTextWidth(*(undefined8 *)(param_1 + 0x88));
  *param_2 = uVar1;
  return;
}



// FUNCTION 14356dd70 FUN_14356dd70 body=138 status=ok
// SIG undefined FUN_14356dd70(void)

void FUN_14356dd70(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  cVar2 = Scaleform::GFx::TextField::IsReadOnly(*(undefined8 *)(param_1 + 0x88));
  pcVar4 = "input";
  if (cVar2 != '\0') {
    pcVar4 = "dynamic";
  }
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (pcVar4[lVar5] != '\0');
  lVar3 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),pcVar4,lVar5,0);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return;
}



// FUNCTION 14356de00 FUN_14356de00 body=201 status=ok
// SIG undefined FUN_14356de00(void)

void FUN_14356de00(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  RefCountImpl *local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x88);
  lVar5 = 0;
  lVar6 = lVar5;
  do {
    lVar8 = lVar6 + 1;
    if (*(char *)(*(longlong *)*param_3 + lVar6) != "dynamic"[lVar6]) goto LAB_14356de60;
    lVar6 = lVar8;
  } while (lVar8 != 8);
  lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0xe0) + 0xd8);
  if (lVar5 != 0) {
    puVar1 = (ushort *)(lVar5 + 0xa0);
    *puVar1 = *puVar1 | 1;
  }
  goto LAB_14356deb5;
  while (lVar5 = lVar6, lVar6 != 6) {
LAB_14356de60:
    lVar6 = lVar5 + 1;
    if (*(char *)(*(longlong *)*param_3 + lVar5) != "input"[lVar5]) goto LAB_14356deb5;
  }
  cVar4 = FUN_143dea8d0(lVar3);
  if (cVar4 == '\0') {
    plVar7 = (longlong *)FUN_143de59e0(lVar3,&local_res8);
    lVar5 = *plVar7;
    if (local_res8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_res8);
    }
    *(ushort *)(lVar5 + 0xa0) = *(ushort *)(lVar5 + 0xa0) & 0xfffe;
  }
LAB_14356deb5:
  pbVar2 = (byte *)(*(longlong *)(lVar3 + 0xe0) + 0x15b);
  *pbVar2 = *pbVar2 | 1;
  return;
}



// FUNCTION 14356df80 wordWrapSet body=87 status=ok
// SIG undefined wordWrapSet(void)

void Scaleform::GFx::AS3::Instances::fl_text::TextField::wordWrapSet
               (longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if ((*(byte *)(*(longlong *)(lVar1 + 0xe0) + 0x158) >> 3 & 1) != param_3) {
    if (param_3 == 0) {
      Render::Text::DocView::ClearWordWrap();
    }
    else {
      Render::Text::DocView::SetWordWrap();
    }
    UpdateAutosizeSettings(param_1);
  }
  FUN_143de5880(lVar1);
  return;
}


