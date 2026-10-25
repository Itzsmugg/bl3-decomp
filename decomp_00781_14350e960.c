// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14350e960 FUN_14350e960 body=112 status=ok
// SIG undefined FUN_14350e960(void)

void FUN_14350e960(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b767d0)(DAT_146b767d8 + lVar2,local_18);
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



// FUNCTION 14350ea00 FUN_14350ea00 body=144 status=ok
// SIG undefined FUN_14350ea00(void)

void FUN_14350ea00(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76260)((longlong)DAT_146b76268 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350ea90 FUN_14350ea90 body=175 status=ok
// SIG undefined FUN_14350ea90(void)

void FUN_14350ea90(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75d60)((longlong)DAT_146b75d68 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350eb40 FUN_14350eb40 body=175 status=ok
// SIG undefined FUN_14350eb40(void)

void FUN_14350eb40(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76310)((longlong)DAT_146b76318 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350ebf0 FUN_14350ebf0 body=144 status=ok
// SIG undefined FUN_14350ebf0(void)

void FUN_14350ebf0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76540)((longlong)DAT_146b76548 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350ec80 FUN_14350ec80 body=144 status=ok
// SIG undefined FUN_14350ec80(void)

void FUN_14350ec80(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b75bf0)((longlong)DAT_146b75bf8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350ed30 FUN_14350ed30 body=148 status=ok
// SIG undefined FUN_14350ed30(void)

void FUN_14350ed30(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b759d0)(DAT_146b759d8 + lVar1,local_28);
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



// FUNCTION 14350edd0 FUN_14350edd0 body=132 status=ok
// SIG undefined FUN_14350edd0(void)

void FUN_14350edd0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b767e0)(DAT_146b767e8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14350ee60 FUN_14350ee60 body=175 status=ok
// SIG undefined FUN_14350ee60(void)

void FUN_14350ee60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76270)((longlong)DAT_146b76278 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350ef10 FUN_14350ef10 body=197 status=ok
// SIG undefined FUN_14350ef10(void)

void FUN_14350ef10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75d70)((longlong)DAT_146b75d78 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 14350efe0 FUN_14350efe0 body=144 status=ok
// SIG undefined FUN_14350efe0(void)

void FUN_14350efe0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76320)((longlong)DAT_146b76328 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350f0f0 FUN_14350f0f0 body=144 status=ok
// SIG undefined FUN_14350f0f0(void)

void FUN_14350f0f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b767f0)((longlong)DAT_146b767f8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350f1b0 FUN_14350f1b0 body=145 status=ok
// SIG undefined FUN_14350f1b0(void)

void FUN_14350f1b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76280)((longlong)DAT_146b76288 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350f280 FUN_14350f280 body=214 status=ok
// SIG undefined FUN_14350f280(void)

void FUN_14350f280(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75d80)((longlong)DAT_146b75d88 + *(longlong *)(param_3 + 0x10),&local_28,local_20,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 14350f360 FUN_14350f360 body=148 status=ok
// SIG undefined FUN_14350f360(void)

void FUN_14350f360(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75c10)(DAT_146b75c18 + lVar1,local_28);
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



// FUNCTION 14350f400 FUN_14350f400 body=175 status=ok
// SIG undefined FUN_14350f400(void)

void FUN_14350f400(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b759f0)((longlong)DAT_146b759f8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350f4b0 FUN_14350f4b0 body=112 status=ok
// SIG undefined FUN_14350f4b0(void)

void FUN_14350f4b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b76290)(DAT_146b76298 + lVar2,local_18);
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



// FUNCTION 14350f550 FUN_14350f550 body=263 status=ok
// SIG undefined FUN_14350f550(void)

void FUN_14350f550(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_18;
  
  local_48[0] = 0;
  local_40 = *(undefined8 *)(param_6 + 0x10);
  local_38 = *(undefined8 *)(param_6 + 0x30);
  local_30 = *(undefined8 *)(param_6 + 0x50);
  local_20 = *(undefined4 *)(param_6 + 0x90);
  local_28 = *(undefined4 *)(param_6 + 0x70);
  local_18 = *(undefined4 *)(param_6 + 0xb0);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b758b0)((longlong)DAT_146b758b8 + *(longlong *)(param_3 + 0x10),local_48,local_40,
                     local_38,local_30,local_28,local_20,local_18);
  }
  uVar1 = local_48[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_64,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_60;
  }
  return;
}



// FUNCTION 14350f660 FUN_14350f660 body=145 status=ok
// SIG undefined FUN_14350f660(void)

void FUN_14350f660(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76340)((longlong)DAT_146b76348 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350f700 FUN_14350f700 body=171 status=ok
// SIG undefined FUN_14350f700(void)

void FUN_14350f700(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75d90)((longlong)DAT_146b75d98 + *(longlong *)(param_3 + 0x10),local_18);
  }
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



// FUNCTION 14350f7e0 FUN_14350f7e0 body=175 status=ok
// SIG undefined FUN_14350f7e0(void)

void FUN_14350f7e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75a00)((longlong)DAT_146b75a08 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350f890 FUN_14350f890 body=145 status=ok
// SIG undefined FUN_14350f890(void)

void FUN_14350f890(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b762a0)((longlong)DAT_146b762a8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350f930 FUN_14350f930 body=144 status=ok
// SIG undefined FUN_14350f930(void)

void FUN_14350f930(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76810)((longlong)DAT_146b76818 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350f9f0 FUN_14350f9f0 body=175 status=ok
// SIG undefined FUN_14350f9f0(void)

void FUN_14350f9f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76350)((longlong)DAT_146b76358 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350faa0 FUN_14350faa0 body=171 status=ok
// SIG undefined FUN_14350faa0(void)

void FUN_14350faa0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75da0)((longlong)DAT_146b75da8 + *(longlong *)(param_3 + 0x10),local_18);
  }
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



// FUNCTION 14350fb50 FUN_14350fb50 body=148 status=ok
// SIG undefined FUN_14350fb50(void)

void FUN_14350fb50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75c30)(DAT_146b75c38 + lVar1,local_28);
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



// FUNCTION 14350fbf0 FUN_14350fbf0 body=175 status=ok
// SIG undefined FUN_14350fbf0(void)

void FUN_14350fbf0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b762b0)((longlong)DAT_146b762b8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350fd40 FUN_14350fd40 body=145 status=ok
// SIG undefined FUN_14350fd40(void)

void FUN_14350fd40(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76360)((longlong)DAT_146b76368 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 14350fde0 FUN_14350fde0 body=199 status=ok
// SIG undefined FUN_14350fde0(void)

void FUN_14350fde0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75db0)((longlong)DAT_146b75db8 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 14350fee0 FUN_14350fee0 body=148 status=ok
// SIG undefined FUN_14350fee0(void)

void FUN_14350fee0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75a20)(DAT_146b75a28 + lVar1,local_28);
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



// FUNCTION 14350ff80 FUN_14350ff80 body=145 status=ok
// SIG undefined FUN_14350ff80(void)

void FUN_14350ff80(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76830)((longlong)DAT_146b76838 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143510020 FUN_143510020 body=144 status=ok
// SIG undefined FUN_143510020(void)

void FUN_143510020(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76370)((longlong)DAT_146b76378 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1435100f0 FUN_1435100f0 body=266 status=ok
// SIG undefined FUN_1435100f0(void)

void FUN_1435100f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_18;
  longlong local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_18 = 0;
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
    (*DAT_146b75dc0)(DAT_146b75dc8 + lVar2,&local_18,&local_10);
  }
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143510200 FUN_143510200 body=148 status=ok
// SIG undefined FUN_143510200(void)

void FUN_143510200(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75c50)(DAT_146b75c58 + lVar1,local_28);
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



// FUNCTION 1435102a0 FUN_1435102a0 body=145 status=ok
// SIG undefined FUN_1435102a0(void)

void FUN_1435102a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b75700)((longlong)DAT_146b75708 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143510340 FUN_143510340 body=148 status=ok
// SIG undefined FUN_143510340(void)

void FUN_143510340(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75a30)(DAT_146b75a38 + lVar1,local_28);
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



// FUNCTION 143510440 FUN_143510440 body=167 status=ok
// SIG undefined FUN_143510440(void)

void FUN_143510440(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75dd0)((longlong)DAT_146b75dd8 + *(longlong *)(param_3 + 0x10),local_18);
  }
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



// FUNCTION 143510550 FUN_143510550 body=175 status=ok
// SIG undefined FUN_143510550(void)

void FUN_143510550(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75710)((longlong)DAT_146b75718 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143510600 FUN_143510600 body=112 status=ok
// SIG undefined FUN_143510600(void)

void FUN_143510600(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b75a40)(DAT_146b75a48 + lVar2,local_18);
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



// FUNCTION 143510670 FUN_143510670 body=145 status=ok
// SIG undefined FUN_143510670(void)

void FUN_143510670(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76850)((longlong)DAT_146b76858 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143510730 FUN_143510730 body=148 status=ok
// SIG undefined FUN_143510730(void)

void FUN_143510730(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75c70)(DAT_146b75c78 + lVar1,local_28);
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



// FUNCTION 1435107d0 FUN_1435107d0 body=144 status=ok
// SIG undefined FUN_1435107d0(void)

void FUN_1435107d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b75720)((longlong)DAT_146b75728 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143510860 FUN_143510860 body=197 status=ok
// SIG undefined FUN_143510860(void)

void FUN_143510860(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75de0)((longlong)DAT_146b75de8 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143510960 FUN_143510960 body=132 status=ok
// SIG undefined FUN_143510960(void)

void FUN_143510960(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b75a50)(DAT_146b75a58 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143510a20 FUN_143510a20 body=112 status=ok
// SIG undefined FUN_143510a20(void)

void FUN_143510a20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b76640)(DAT_146b76648 + lVar2,local_18);
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



// FUNCTION 143510ac0 FUN_143510ac0 body=145 status=ok
// SIG undefined FUN_143510ac0(void)

void FUN_143510ac0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b75730)((longlong)DAT_146b75738 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143510b90 FUN_143510b90 body=175 status=ok
// SIG undefined FUN_143510b90(void)

void FUN_143510b90(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76450)((longlong)DAT_146b76458 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143510ca0 FUN_143510ca0 body=144 status=ok
// SIG undefined FUN_143510ca0(void)

void FUN_143510ca0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76870)((longlong)DAT_146b76878 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143510d30 FUN_143510d30 body=132 status=ok
// SIG undefined FUN_143510d30(void)

void FUN_143510d30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b76650)(DAT_146b76658 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143510dc0 FUN_143510dc0 body=175 status=ok
// SIG undefined FUN_143510dc0(void)

void FUN_143510dc0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b760c0)((longlong)DAT_146b760c8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143510e70 FUN_143510e70 body=197 status=ok
// SIG undefined FUN_143510e70(void)

void FUN_143510e70(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75c90)((longlong)DAT_146b75c98 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143510f70 FUN_143510f70 body=199 status=ok
// SIG undefined FUN_143510f70(void)

void FUN_143510f70(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75e00)((longlong)DAT_146b75e08 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143511120 FUN_143511120 body=144 status=ok
// SIG undefined FUN_143511120(void)

void FUN_143511120(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76660)((longlong)DAT_146b76668 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1435111b0 FUN_1435111b0 body=175 status=ok
// SIG undefined FUN_1435111b0(void)

void FUN_1435111b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b760d0)((longlong)DAT_146b760d8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143511280 FUN_143511280 body=197 status=ok
// SIG undefined FUN_143511280(void)

void FUN_143511280(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75ca0)((longlong)DAT_146b75ca8 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143511350 FUN_143511350 body=175 status=ok
// SIG undefined FUN_143511350(void)

void FUN_143511350(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75750)((longlong)DAT_146b75758 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143511400 FUN_143511400 body=175 status=ok
// SIG undefined FUN_143511400(void)

void FUN_143511400(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75a80)((longlong)DAT_146b75a88 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1435114e0 FUN_1435114e0 body=175 status=ok
// SIG undefined FUN_1435114e0(void)

void FUN_1435114e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76890)((longlong)DAT_146b76898 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143511590 FUN_143511590 body=145 status=ok
// SIG undefined FUN_143511590(void)

void FUN_143511590(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76670)((longlong)DAT_146b76678 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143511670 FUN_143511670 body=197 status=ok
// SIG undefined FUN_143511670(void)

void FUN_143511670(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75cb0)((longlong)DAT_146b75cb8 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143511740 FUN_143511740 body=175 status=ok
// SIG undefined FUN_143511740(void)

void FUN_143511740(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75a90)((longlong)DAT_146b75a98 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1435117f0 FUN_1435117f0 body=148 status=ok
// SIG undefined FUN_1435117f0(void)

void FUN_1435117f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b768a0)(DAT_146b768a8 + lVar1,local_28);
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



// FUNCTION 143511970 FUN_143511970 body=197 status=ok
// SIG undefined FUN_143511970(void)

void FUN_143511970(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75cc0)((longlong)DAT_146b75cc8 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143511a40 FUN_143511a40 body=148 status=ok
// SIG undefined FUN_143511a40(void)

void FUN_143511a40(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75aa0)(DAT_146b75aa8 + lVar1,local_28);
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



// FUNCTION 143511b40 FUN_143511b40 body=144 status=ok
// SIG undefined FUN_143511b40(void)

void FUN_143511b40(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b769a0)((longlong)DAT_146b769a8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143511c50 FUN_143511c50 body=112 status=ok
// SIG undefined FUN_143511c50(void)

void FUN_143511c50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b76690)(DAT_146b76698 + lVar2,local_18);
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



// FUNCTION 143511ce0 FUN_143511ce0 body=171 status=ok
// SIG undefined FUN_143511ce0(void)

void FUN_143511ce0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75cd0)((longlong)DAT_146b75cd8 + *(longlong *)(param_3 + 0x10),local_18);
  }
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



// FUNCTION 143511df0 FUN_143511df0 body=197 status=ok
// SIG undefined FUN_143511df0(void)

void FUN_143511df0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b768c0)((longlong)DAT_146b768c8 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143511ec0 FUN_143511ec0 body=112 status=ok
// SIG undefined FUN_143511ec0(void)

void FUN_143511ec0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b766a0)(DAT_146b766a8 + lVar2,local_18);
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



// FUNCTION 143511f30 FUN_143511f30 body=85 status=ok
// SIG undefined FUN_143511f30(void)

void FUN_143511f30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75780)((longlong)DAT_146b75788 + *(longlong *)(param_3 + 0x10),param_4,
                     *(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x30),
                     *(undefined8 *)(param_6 + 0x50),*(undefined4 *)(param_6 + 0x70),
                     *(undefined4 *)(param_6 + 0x90));
  }
  return;
}



// FUNCTION 143512010 FUN_143512010 body=148 status=ok
// SIG undefined FUN_143512010(void)

void FUN_143512010(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75ac0)(DAT_146b75ac8 + lVar1,local_28);
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



// FUNCTION 1435120d0 FUN_1435120d0 body=202 status=ok
// SIG undefined FUN_1435120d0(void)

void FUN_1435120d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_28[0] = 0;
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined8 *)(param_6 + 0x30);
  local_10 = *(undefined1 *)(param_6 + 0x50);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75ce0)((longlong)DAT_146b75ce8 + *(longlong *)(param_3 + 0x10),local_28,local_10,
                     param_3,local_10);
  }
  uVar1 = local_28[0];
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
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1435121a0 FUN_1435121a0 body=214 status=ok
// SIG undefined FUN_1435121a0(void)

void FUN_1435121a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b768d0)((longlong)DAT_146b768d8 + *(longlong *)(param_3 + 0x10),&local_28,local_20,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143512280 FUN_143512280 body=132 status=ok
// SIG undefined FUN_143512280(void)

void FUN_143512280(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b766b0)(DAT_146b766b8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143512330 FUN_143512330 body=145 status=ok
// SIG undefined FUN_143512330(void)

void FUN_143512330(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b75e50)((longlong)DAT_146b75e58 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1435123f0 FUN_1435123f0 body=144 status=ok
// SIG undefined FUN_1435123f0(void)

void FUN_1435123f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76560)((longlong)DAT_146b76568 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143512480 FUN_143512480 body=145 status=ok
// SIG undefined FUN_143512480(void)

void FUN_143512480(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76140)((longlong)DAT_146b76148 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143512520 FUN_143512520 body=108 status=ok
// SIG undefined FUN_143512520(void)

void FUN_143512520(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75790)((longlong)DAT_146b75798 + *(longlong *)(param_3 + 0x10),param_4,
                     *(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x30),
                     *(undefined8 *)(param_6 + 0x50),*(undefined8 *)(param_6 + 0x70),
                     *(undefined8 *)(param_6 + 0x90),*(undefined1 *)(param_6 + 0xb0));
  }
  return;
}



// FUNCTION 1435125f0 FUN_1435125f0 body=197 status=ok
// SIG undefined FUN_1435125f0(void)

void FUN_1435125f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75cf0)((longlong)DAT_146b75cf8 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 1435126c0 FUN_1435126c0 body=175 status=ok
// SIG undefined FUN_1435126c0(void)

void FUN_1435126c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b766c0)((longlong)DAT_146b766c8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143512790 FUN_143512790 body=112 status=ok
// SIG undefined FUN_143512790(void)

void FUN_143512790(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b75e60)(DAT_146b75e68 + lVar2,local_18);
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



// FUNCTION 143512800 FUN_143512800 body=199 status=ok
// SIG undefined FUN_143512800(void)

void FUN_143512800(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b768e0)(DAT_146b768e8 + lVar2,param_4,&local_38,local_30,local_28,local_20,local_18);
  }
  piVar1 = (int *)(local_38 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435128d0 FUN_1435128d0 body=175 status=ok
// SIG undefined FUN_1435128d0(void)

void FUN_1435128d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76150)((longlong)DAT_146b76158 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1435129d0 FUN_1435129d0 body=148 status=ok
// SIG undefined FUN_1435129d0(void)

void FUN_1435129d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75ae0)(DAT_146b75ae8 + lVar1,local_28);
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



// FUNCTION 143512a70 FUN_143512a70 body=112 status=ok
// SIG undefined FUN_143512a70(void)

void FUN_143512a70(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b75f80)(DAT_146b75f88 + lVar2,local_18);
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



// FUNCTION 143512ae0 FUN_143512ae0 body=175 status=ok
// SIG undefined FUN_143512ae0(void)

void FUN_143512ae0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76130)((longlong)DAT_146b76138 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143512b90 FUN_143512b90 body=197 status=ok
// SIG undefined FUN_143512b90(void)

void FUN_143512b90(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75d00)((longlong)DAT_146b75d08 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143512c60 FUN_143512c60 body=175 status=ok
// SIG undefined FUN_143512c60(void)

void FUN_143512c60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76000)((longlong)DAT_146b76008 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143512d90 FUN_143512d90 body=175 status=ok
// SIG undefined FUN_143512d90(void)

void FUN_143512d90(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76160)((longlong)DAT_146b76168 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143512e40 FUN_143512e40 body=147 status=ok
// SIG undefined FUN_143512e40(void)

void FUN_143512e40(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_10 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10[0] = lVar4 + 0x80;
    piVar1 = (int *)(lVar4 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10[0] = *(longlong *)(param_6 + 0x30);
    *(int *)(local_10[0] + 0x18) = *(int *)(local_10[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b768f0)(DAT_146b768f8 + lVar2,param_4,uVar3,local_10,param_2);
  }
  piVar1 = (int *)(local_10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143512ee0 FUN_143512ee0 body=175 status=ok
// SIG undefined FUN_143512ee0(void)

void FUN_143512ee0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76580)((longlong)DAT_146b76588 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143512fc0 FUN_143512fc0 body=132 status=ok
// SIG undefined FUN_143512fc0(void)

void FUN_143512fc0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    (*DAT_146b75f90)(DAT_146b75f98 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143513050 FUN_143513050 body=232 status=ok
// SIG undefined FUN_143513050(void)

void FUN_143513050(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  uVar4 = *(undefined8 *)(param_6 + 0x30);
  uVar5 = *(undefined8 *)(param_6 + 0x50);
  if ((((byte)*(undefined4 *)(param_6 + 0x60) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x70) == 0)) {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_20 = lVar6 + 0x80;
    piVar1 = (int *)(lVar6 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_20 = *(longlong *)(param_6 + 0x70);
    *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
  }
  local_18 = *(undefined8 *)(param_6 + 0x90);
  local_10 = *(undefined1 *)(param_6 + 0xb0);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b757b0)(DAT_146b757b8 + lVar2,param_4,uVar3,uVar4,uVar5,&local_20,local_18,local_10,
                     param_2);
  }
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143513170 FUN_143513170 body=148 status=ok
// SIG undefined FUN_143513170(void)

void FUN_143513170(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b766e0)(DAT_146b766e8 + lVar1,local_28);
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



// FUNCTION 143513210 FUN_143513210 body=145 status=ok
// SIG undefined FUN_143513210(void)

void FUN_143513210(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76170)((longlong)DAT_146b76178 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1435132b0 FUN_1435132b0 body=175 status=ok
// SIG undefined FUN_1435132b0(void)

void FUN_1435132b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76590)((longlong)DAT_146b76598 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143513360 FUN_143513360 body=171 status=ok
// SIG undefined FUN_143513360(void)

void FUN_143513360(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b76900)((longlong)DAT_146b76908 + *(longlong *)(param_3 + 0x10),local_18);
  }
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



// FUNCTION 143513410 FUN_143513410 body=175 status=ok
// SIG undefined FUN_143513410(void)

void FUN_143513410(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76420)((longlong)DAT_146b76428 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143513500 FUN_143513500 body=148 status=ok
// SIG undefined FUN_143513500(void)

void FUN_143513500(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75b00)(DAT_146b75b08 + lVar1,local_28);
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



// FUNCTION 1435135d0 FUN_1435135d0 body=144 status=ok
// SIG undefined FUN_1435135d0(void)

void FUN_1435135d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76020)((longlong)DAT_146b76028 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143513660 FUN_143513660 body=103 status=ok
// SIG undefined FUN_143513660(void)

void FUN_143513660(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75fa0)((longlong)DAT_146b75fa8 + *(longlong *)(param_3 + 0x10),param_4,
                     *(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x30),
                     *(undefined8 *)(param_6 + 0x50),*(undefined8 *)(param_6 + 0x70),
                     *(undefined8 *)(param_6 + 0x90),*(undefined8 *)(param_6 + 0xb0));
  }
  return;
}



// FUNCTION 143513700 FUN_143513700 body=145 status=ok
// SIG undefined FUN_143513700(void)

void FUN_143513700(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76180)((longlong)DAT_146b76188 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1435137a0 FUN_1435137a0 body=175 status=ok
// SIG undefined FUN_1435137a0(void)

void FUN_1435137a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b765a0)((longlong)DAT_146b765a8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143513850 FUN_143513850 body=112 status=ok
// SIG undefined FUN_143513850(void)

void FUN_143513850(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
  (*DAT_146b76430)(DAT_146b76438 + lVar2,local_18);
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



// FUNCTION 1435138c0 FUN_1435138c0 body=238 status=ok
// SIG undefined FUN_1435138c0(void)

void FUN_1435138c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
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
    (*DAT_146b76910)(DAT_146b76918 + lVar2,local_18,&local_10);
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



// FUNCTION 1435139b0 FUN_1435139b0 body=175 status=ok
// SIG undefined FUN_1435139b0(void)

void FUN_1435139b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76460)((longlong)DAT_146b76468 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143513b10 FUN_143513b10 body=145 status=ok
// SIG undefined FUN_143513b10(void)

void FUN_143513b10(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76700)((longlong)DAT_146b76708 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143513bf0 FUN_143513bf0 body=144 status=ok
// SIG undefined FUN_143513bf0(void)

void FUN_143513bf0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76190)((longlong)DAT_146b76198 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143513d00 FUN_143513d00 body=145 status=ok
// SIG undefined FUN_143513d00(void)

void FUN_143513d00(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76440)((longlong)DAT_146b76448 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143513df0 FUN_143513df0 body=175 status=ok
// SIG undefined FUN_143513df0(void)

void FUN_143513df0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75b20)((longlong)DAT_146b75b28 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143513ea0 FUN_143513ea0 body=193 status=ok
// SIG undefined FUN_143513ea0(void)

void FUN_143513ea0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = param_6;
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b762c0)((longlong)DAT_146b762c8 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143513fc0 FUN_143513fc0 body=175 status=ok
// SIG undefined FUN_143513fc0(void)

void FUN_143513fc0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b76710)((longlong)DAT_146b76718 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143514070 FUN_143514070 body=175 status=ok
// SIG undefined FUN_143514070(void)

void FUN_143514070(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b761a0)((longlong)DAT_146b761a8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143514120 FUN_143514120 body=212 status=ok
// SIG undefined FUN_143514120(void)

void FUN_143514120(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined8 *)(param_6 + 0x30);
  local_28 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b757e0)((longlong)DAT_146b757e8 + *(longlong *)(param_3 + 0x10),&local_28,local_20,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143514200 FUN_143514200 body=175 status=ok
// SIG undefined FUN_143514200(void)

void FUN_143514200(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b765c0)((longlong)DAT_146b765c8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1435142b0 FUN_1435142b0 body=144 status=ok
// SIG undefined FUN_1435142b0(void)

void FUN_1435142b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76930)((longlong)DAT_146b76938 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143514370 FUN_143514370 body=144 status=ok
// SIG undefined FUN_143514370(void)

void FUN_143514370(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76480)((longlong)DAT_146b76488 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143514430 FUN_143514430 body=169 status=ok
// SIG undefined FUN_143514430(void)

void FUN_143514430(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  uVar4 = *(undefined8 *)(param_6 + 0x30);
  if ((((byte)*(undefined4 *)(param_6 + 0x40) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x50) == 0)) {
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar5 + 0x80;
    piVar1 = (int *)(lVar5 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 0x50);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b75ef0)(DAT_146b75ef8 + lVar2,param_4,uVar3,uVar4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435145a0 FUN_1435145a0 body=199 status=ok
// SIG undefined FUN_1435145a0(void)

void FUN_1435145a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b76940)((longlong)DAT_146b76948 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143514670 FUN_143514670 body=238 status=ok
// SIG undefined FUN_143514670(void)

void FUN_143514670(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined1 local_10;
  
  local_10 = *(undefined1 *)(param_6 + 0x50);
  local_20 = *(undefined4 *)(param_6 + 0x10);
  local_18 = *(undefined4 *)(param_6 + 0x30);
  local_28 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b757f0)((longlong)DAT_146b757f8 + *(longlong *)(param_3 + 0x10),&local_28,local_20,
                     local_18,local_10);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143514790 FUN_143514790 body=148 status=ok
// SIG undefined FUN_143514790(void)

void FUN_143514790(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b75b40)(DAT_146b75b48 + lVar1,local_28);
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



// FUNCTION 143514860 FUN_143514860 body=144 status=ok
// SIG undefined FUN_143514860(void)

void FUN_143514860(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b76060)((longlong)DAT_146b76068 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1435148f0 FUN_1435148f0 body=145 status=ok
// SIG undefined FUN_1435148f0(void)

void FUN_1435148f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b76730)((longlong)DAT_146b76738 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1435149e0 FUN_1435149e0 body=175 status=ok
// SIG undefined FUN_1435149e0(void)

void FUN_1435149e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b761c0)((longlong)DAT_146b761c8 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 143514a90 FUN_143514a90 body=672 status=ok
// SIG undefined FUN_143514a90(void)

void FUN_143514a90(longlong *param_1,longlong param_2,longlong param_3,code *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res10;
  longlong local_2b8 [80];
  
  if (1 < (ulonglong)(param_3 - param_2)) {
    plVar7 = local_2b8;
    local_res10 = param_3;
    while( true ) {
      while (lVar9 = param_2, 9 < local_res10 - param_2) {
        lVar5 = param_2 * 0x28;
        FUN_143514d30(lVar5 + *param_1,*param_1 + ((local_res10 - param_2) / 2 + param_2) * 0x28);
        lVar9 = param_2 + 1;
        lVar6 = lVar9 * 0x28;
        lVar8 = local_res10 + -1;
        lVar4 = lVar8 * 0x28;
        cVar1 = (*param_4)(*param_1 + lVar4,lVar6 + *param_1);
        if (cVar1 != '\0') {
          FUN_143514d30(lVar4 + *param_1,lVar6 + *param_1);
        }
        cVar1 = (*param_4)(lVar5 + *param_1,lVar6 + *param_1);
        if (cVar1 != '\0') {
          FUN_143514d30(lVar5 + *param_1,lVar6 + *param_1);
        }
        cVar1 = (*param_4)(lVar4 + *param_1,lVar5 + *param_1);
        if (cVar1 == '\0') goto LAB_143514bb0;
        lVar3 = lVar5 + *param_1;
        lVar2 = lVar4 + *param_1;
        while( true ) {
          FUN_143514d30(lVar2,lVar3);
LAB_143514bb0:
          do {
            lVar6 = lVar6 + 0x28;
            lVar9 = lVar9 + 1;
            cVar1 = (*param_4)(lVar6 + *param_1,lVar5 + *param_1);
          } while (cVar1 != '\0');
          do {
            lVar4 = lVar4 + -0x28;
            lVar8 = lVar8 + -1;
            cVar1 = (*param_4)(lVar5 + *param_1,lVar4 + *param_1);
          } while (cVar1 != '\0');
          lVar2 = *param_1;
          if (lVar8 < lVar9) break;
          lVar4 = lVar8 * 0x28;
          lVar6 = lVar9 * 0x28;
          lVar3 = lVar4 + lVar2;
          lVar2 = lVar2 + lVar6;
        }
        FUN_143514d30(lVar2 + lVar5,lVar2 + lVar8 * 0x28);
        if (local_res10 - lVar9 < lVar8 - param_2) {
          *plVar7 = param_2;
          plVar7[1] = lVar8;
          plVar7 = plVar7 + 2;
          param_2 = lVar9;
        }
        else {
          *plVar7 = lVar9;
          plVar7[1] = local_res10;
          plVar7 = plVar7 + 2;
          local_res10 = lVar8;
        }
      }
      while (lVar6 = lVar9 + 1, lVar6 < local_res10) {
        lVar4 = lVar9 * 0x28;
        cVar1 = (*param_4)(*param_1 + lVar4 + 0x28);
        lVar5 = lVar9;
        while ((lVar9 = lVar6, cVar1 != '\0' &&
               (FUN_143514d30(*param_1 + lVar4 + 0x28), lVar5 != param_2))) {
          lVar5 = lVar5 + -1;
          lVar4 = lVar5 * 0x28;
          cVar1 = (*param_4)(*param_1 + lVar4 + 0x28);
        }
      }
      if (plVar7 <= local_2b8) break;
      local_res10 = plVar7[-1];
      plVar7 = plVar7 + -2;
      param_2 = *plVar7;
    }
  }
  return;
}



// FUNCTION 143514d30 FUN_143514d30 body=174 status=ok
// SIG undefined FUN_143514d30(void)

void FUN_143514d30(uint *param_1,longlong param_2)

{
  uint local_38 [2];
  undefined8 local_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_18;
  
  local_38[0] = *param_1;
  local_30 = *(undefined8 *)(param_1 + 2);
  local_28 = param_1[4];
  uStack_24 = param_1[5];
  uStack_20 = param_1[6];
  uStack_1c = param_1[7];
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_143592070(param_1);
    }
    else {
      FUN_143592140();
    }
  }
  local_18 = param_1[8];
  FUN_143590140(param_1,param_2);
  param_1[8] = *(uint *)(param_2 + 0x20);
  FUN_143590140(param_2,local_38);
  *(uint *)(param_2 + 0x20) = local_18;
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_38);
  }
  return;
}



// FUNCTION 143514de0 FUN_143514de0 body=90 status=ok
// SIG undefined FUN_143514de0(void)

uint * FUN_143514de0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_143592070(param_2);
    }
    else {
      FUN_143592140();
    }
  }
  param_1[8] = param_2[8];
  return param_1;
}



// FUNCTION 143514e40 FUN_143514e40 body=207 status=ok
// SIG undefined FUN_143514e40(void)

undefined8 * FUN_143514e40(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_144f8bf30;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_144f8c5e0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = &PTR_FUN_144f70a50;
  param_1[4] = &PTR_FUN_144f70a80;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = &PTR_FUN_144f8c510;
  FUN_1432de310(param_1 + 10);
  *(undefined4 *)(param_1 + 0xc) = param_3;
  if (param_2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    if (iVar1 != 0) {
      FUN_143516860();
      return param_1;
    }
    FUN_142052220(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 143514f10 FUN_143514f10 body=129 status=ok
// SIG undefined FUN_143514f10(void)

void FUN_143514f10(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  puVar1 = (uint *)(*param_1 + (lVar2 + -1) * 0x28);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar1);
      }
      else {
        FUN_143592150();
      }
    }
    puVar1 = puVar1 + -10;
  }
  if (*param_1 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return;
}



// FUNCTION 143514fa0 FUN_143514fa0 body=121 status=ok
// SIG undefined FUN_143514fa0(void)

void FUN_143514fa0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x48);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x48) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x40);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x40) = uVar1 - 1;
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



// FUNCTION 143515020 FUN_143515020 body=254 status=ok
// SIG undefined FUN_143515020(void)

void FUN_143515020(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar2 = *(ulonglong *)(param_1 + 0x68);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x68) = uVar2 - 1;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x60);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x60) = uVar2 - 1;
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar2 = *(ulonglong *)(param_1 + 0x48);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x48) = uVar2 - 1;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x40);
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x40) = uVar2 - 1;
      FUN_1435b9dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 143515120 FUN_143515120 body=136 status=ok
// SIG undefined FUN_143515120(void)

void FUN_143515120(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar2 = *(ulonglong *)(param_1 + 0x48);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x48) = uVar2 - 1;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x40);
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x40) = uVar2 - 1;
      FUN_1435b9dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 1435151b0 FUN_1435151b0 body=111 status=ok
// SIG undefined FUN_1435151b0(void)

void FUN_1435151b0(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar2 = *(ulonglong *)(param_1 + 0x48);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x48) = uVar2 - 1;
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



// FUNCTION 143515220 FUN_143515220 body=233 status=ok
// SIG undefined FUN_143515220(void)

void FUN_143515220(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0xa0) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x98);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x98) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x90);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x90) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x88);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x88) = uVar1 - 1;
      FUN_1435196e0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435196e0(param_1);
  return;
}



// FUNCTION 143515310 FUN_143515310 body=293 status=ok
// SIG undefined FUN_143515310(void)

void FUN_143515310(undefined8 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1[0x17];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x17] = uVar1 - 1;
    }
  }
  uVar1 = param_1[0x16];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x16] = uVar1 - 1;
    }
  }
  uVar1 = param_1[0x15];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x15] = uVar1 - 1;
    }
  }
  uVar1 = param_1[0x14];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x14] = uVar1 - 1;
    }
  }
  *param_1 = &PTR_ForEachChild_GC_145b23730;
  uVar1 = param_1[0x13];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[0x13] = uVar1 - 1;
      FUN_1434f21b0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1434f21b0(param_1);
  return;
}



// FUNCTION 143515440 FUN_143515440 body=59 status=ok
// SIG undefined FUN_143515440(void)

longlong * FUN_143515440(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    Scaleform::GFx::Resource::AddRef(param_2);
  }
  if (*param_1 != 0) {
    FUN_1432de450();
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 143515480 FUN_143515480 body=82 status=ok
// SIG undefined FUN_143515480(void)

uint * FUN_143515480(uint *param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  if (9 < ((byte)*param_1 & 0x1f)) {
    if ((*param_1 >> 9 & 1) == 0) {
      FUN_1435920c0(param_1);
    }
    else {
      FUN_143592150();
    }
  }
  *param_1 = *param_1 & 0xffffffe3;
  *param_1 = *param_1 | 3;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_14,param_2);
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return param_1;
}



// FUNCTION 1435154e0 FUN_1435154e0 body=164 status=ok
// SIG undefined FUN_1435154e0(void)

RefCountImplCore * FUN_1435154e0(RefCountImplCore *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x18) = uVar1 - 1;
    }
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143515590 FUN_143515590 body=43 status=ok
// SIG undefined FUN_143515590(void)

undefined8 * FUN_143515590(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af3848;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1435155c0 FUN_1435155c0 body=89 status=ok
// SIG undefined FUN_1435155c0(void)

undefined8 FUN_1435155c0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434f21b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 143515620 FUN_143515620 body=142 status=ok
// SIG undefined FUN_143515620(void)

longlong FUN_143515620(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x98);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x98) = uVar1 - 1;
    }
  }
  FUN_1434f21b0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1435156b0 FUN_1435156b0 body=89 status=ok
// SIG undefined FUN_1435156b0(void)

undefined8 FUN_1435156b0(undefined8 param_1,ulonglong param_2)

{
  Scaleform::GFx::AS3::Instances::fl_display::BitmapData::~BitmapData();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 143515710 FUN_143515710 body=89 status=ok
// SIG undefined FUN_143515710(void)

undefined8 FUN_143515710(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143515770 FUN_143515770 body=89 status=ok
// SIG undefined FUN_143515770(void)

undefined8 FUN_143515770(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1435157d0 FUN_1435157d0 body=152 status=ok
// SIG undefined FUN_1435157d0(void)

undefined8 * FUN_1435157d0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_ForEachChild_GC_145b23730;
  uVar1 = param_1[0x13];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x13] = uVar1 - 1;
    }
  }
  FUN_1434f21b0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 143515870 FUN_143515870 body=107 status=ok
// SIG undefined FUN_143515870(void)

longlong FUN_143515870(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 0x18);
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



// FUNCTION 1435158e0 FUN_1435158e0 body=106 status=ok
// SIG undefined FUN_1435158e0(void)

longlong FUN_1435158e0(longlong param_1,uint param_2)

{
  if (*(RefCountNTSImpl **)(param_1 + 0x40) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x40));
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



// FUNCTION 143515950 FUN_143515950 body=89 status=ok
// SIG undefined FUN_143515950(void)

undefined8 FUN_143515950(undefined8 param_1,ulonglong param_2)

{
  FUN_143514fa0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1435159b0 FUN_1435159b0 body=89 status=ok
// SIG undefined FUN_1435159b0(void)

undefined8 FUN_1435159b0(undefined8 param_1,ulonglong param_2)

{
  FUN_143515020();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 143515a10 FUN_143515a10 body=89 status=ok
// SIG undefined FUN_143515a10(void)

undefined8 FUN_143515a10(undefined8 param_1,ulonglong param_2)

{
  FUN_143515120();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 143515a70 FUN_143515a70 body=89 status=ok
// SIG undefined FUN_143515a70(void)

undefined8 FUN_143515a70(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143515ad0 FUN_143515ad0 body=89 status=ok
// SIG undefined FUN_143515ad0(void)

undefined8 FUN_143515ad0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435151b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 143515b30 FUN_143515b30 body=89 status=ok
// SIG undefined FUN_143515b30(void)

undefined8 FUN_143515b30(undefined8 param_1,ulonglong param_2)

{
  FUN_1434fd0a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 143515b90 FUN_143515b90 body=89 status=ok
// SIG undefined FUN_143515b90(void)

undefined8 FUN_143515b90(undefined8 param_1,ulonglong param_2)

{
  FUN_143515220();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 143515bf0 FUN_143515bf0 body=104 status=ok
// SIG undefined FUN_143515bf0(void)

longlong FUN_143515bf0(longlong param_1,ulonglong param_2)

{
  FUN_1435093d0(param_1 + 0xa8);
  FUN_1435069f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 143515c60 FUN_143515c60 body=106 status=ok
// SIG undefined FUN_143515c60(void)

longlong FUN_143515c60(longlong param_1,uint param_2)

{
  if (*(RefCountNTSImpl **)(param_1 + 0x48) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x48));
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



// FUNCTION 143515cd0 FUN_143515cd0 body=89 status=ok
// SIG undefined FUN_143515cd0(void)

undefined8 FUN_143515cd0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,200);
  }
  return param_1;
}



// FUNCTION 143515d30 FUN_143515d30 body=152 status=ok
// SIG undefined FUN_143515d30(void)

undefined8 * FUN_143515d30(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_ForEachChild_GC_145b25938;
  uVar1 = param_1[0x13];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x13] = uVar1 - 1;
    }
  }
  FUN_1434f21b0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 143515dd0 FUN_143515dd0 body=89 status=ok
// SIG undefined FUN_143515dd0(void)

undefined8 FUN_143515dd0(undefined8 param_1,ulonglong param_2)

{
  FUN_143515310();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 143515e30 FUN_143515e30 body=89 status=ok
// SIG undefined FUN_143515e30(void)

undefined8 FUN_143515e30(undefined8 param_1,ulonglong param_2)

{
  FUN_1435069f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 143515e90 FUN_143515e90 body=186 status=ok
// SIG undefined FUN_143515e90(void)

void FUN_143515e90(longlong param_1,RefCountImpl *param_2)

{
  RefCountImpl *this;
  
  if (param_2 != (RefCountImpl *)0x0) {
    this = *(RefCountImpl **)(param_1 + 0x98);
    if (this == (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
      if (*(RefCountImpl **)(param_1 + 0x98) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x98));
      }
      *(RefCountImpl **)(param_1 + 0x98) = param_2;
      if (*(RefCountImpl **)(param_2 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_2 + 0x20));
      }
      *(undefined8 *)(param_2 + 0x20) = 0;
      return;
    }
    Scaleform::RefCountImpl::AddRef(this);
    if (*(RefCountImpl **)(param_2 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_2 + 0x20));
    }
    *(RefCountImpl **)(param_2 + 0x20) = this;
    Scaleform::RefCountImpl::AddRef(param_2);
    if (*(RefCountImpl **)(param_1 + 0x98) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x98));
    }
    *(RefCountImpl **)(param_1 + 0x98) = param_2;
  }
  return;
}



// FUNCTION 143515f50 FUN_143515f50 body=182 status=ok
// SIG undefined FUN_143515f50(void)

void FUN_143515f50(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (((int)*(uint *)(param_2 + 8) < 0) && ((*(uint *)(param_2 + 8) >> 0x18 & 1) == 0)) {
    lVar2 = (ulonglong)(*(uint *)(param_2 + 0x20) & 3) + 1;
    if (*(longlong *)(param_2 + 0x18) == 0) {
      *(undefined8 *)(param_1 + lVar2 * 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    else {
      *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
      *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0x7fffffff;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    piVar1 = (int *)(param_1 + 8 + lVar2 * 0x10);
    *piVar1 = *piVar1 + -1;
  }
  if ((*(byte *)(param_2 + 0xb) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x18) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) + 0x18);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10);
    *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) + 0x18) = param_2;
    *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) = param_2;
    *(longlong *)(param_1 + 0x80) = param_2;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000000;
  }
  return;
}



// FUNCTION 143516020 FUN_143516020 body=107 status=ok
// SIG undefined FUN_143516020(void)

void FUN_143516020(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (uint *)0x0) {
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) != 0) {
        FUN_143592140();
        param_1[8] = param_2[8];
        return;
      }
      FUN_143592070(param_2);
    }
    param_1[8] = param_2[8];
  }
  return;
}



// FUNCTION 1435160b0 GetLength body=27 status=ok
// SIG undefined GetLength(void)

undefined4 Scaleform::GFx::AS3::AS3Vectoruint_DIPixelProvider::GetLength(longlong param_1)

{
  undefined4 local_res8 [8];
  
  Instances::fl_events::MouseEvent::deltaGet(*(undefined8 *)(param_1 + 0x10),local_res8);
  return local_res8[0];
}



// FUNCTION 1435160d0 FUN_1435160d0 body=51 status=ok
// SIG undefined FUN_1435160d0(void)

undefined8 FUN_1435160d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  RefCountImpl *local_res8 [4];
  
  puVar2 = (undefined8 *)
           Scaleform::GFx::StateBag::GetLog(*(longlong *)(param_1 + 0x10) + 0x10,local_res8);
  uVar1 = *puVar2;
  if (local_res8[0] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res8[0]);
  }
  return uVar1;
}



// FUNCTION 143516110 FUN_143516110 body=140 status=ok
// SIG undefined FUN_143516110(void)

void FUN_143516110(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  
  pcVar3 = (char *)FUN_14361f950(param_1 + 0x40,local_res8);
  if (*pcVar3 == '\0') {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  uVar4 = lVar2 + 1;
  if (uVar4 < *(ulonglong *)(param_1 + 0x60)) {
    uVar5 = uVar4;
    if (*(ulonglong *)(param_1 + 0x68) >> 1 <= uVar4) goto LAB_143516174;
  }
  else {
    if (uVar4 <= *(ulonglong *)(param_1 + 0x68)) goto LAB_143516174;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_1432f2240(param_1 + 0x58,*(undefined8 *)(param_1 + 0x70),uVar5);
LAB_143516174:
  *(ulonglong *)(param_1 + 0x60) = uVar4;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + lVar2 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}



// FUNCTION 1435161a0 FUN_1435161a0 body=136 status=ok
// SIG undefined FUN_1435161a0(void)

void FUN_1435161a0(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  
  pcVar3 = (char *)FUN_14361f950(param_1 + 0x40,local_res8);
  if (*pcVar3 == '\0') {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  uVar4 = lVar2 + 1;
  if (uVar4 < *(ulonglong *)(param_1 + 0x60)) {
    uVar5 = uVar4;
    if (*(ulonglong *)(param_1 + 0x68) >> 1 <= uVar4) goto LAB_143516202;
  }
  else {
    if (uVar4 <= *(ulonglong *)(param_1 + 0x68)) goto LAB_143516202;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_1434efc20(param_1 + 0x58,*(undefined8 *)(param_1 + 0x70),uVar5);
LAB_143516202:
  *(ulonglong *)(param_1 + 0x60) = uVar4;
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x58) + lVar2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}



// FUNCTION 143516230 ReadNextPixel body=27 status=ok
// SIG undefined ReadNextPixel(void)

undefined4 Scaleform::GFx::AS3::AS3ByteArray_DIPixelProvider::ReadNextPixel(longlong param_1)

{
  undefined4 local_res8 [8];
  
  FUN_14357a4c0(*(undefined8 *)(param_1 + 8),local_res8);
  return local_res8[0];
}



// FUNCTION 143516250 FUN_143516250 body=125 status=ok
// SIG undefined FUN_143516250(void)

/* WARNING: Removing unreachable block (ram,0x0001435162b3) */

undefined4 FUN_143516250(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  uVar1 = *(uint *)(param_1 + 8);
  bVar3 = 0;
  local_28[0] = 0;
  local_20 = 0;
  *(uint *)(param_1 + 8) = uVar1 + 1;
  if (uVar1 < *(uint *)(*(longlong *)(param_1 + 0x10) + 0x60)) {
    bVar3 = 3;
    local_18 = *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58) + (ulonglong)uVar1 * 4);
    local_28[0] = 3;
  }
  uVar2 = local_18;
  if (9 < bVar3) {
    FUN_1435920c0(local_28);
  }
  return uVar2;
}



// FUNCTION 1435162d0 FUN_1435162d0 body=88 status=ok
// SIG undefined FUN_1435162d0(void)

void FUN_1435162d0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  piVar1 = (int *)(lVar2 + 8);
  *piVar1 = *piVar1 + -1;
  if ((*(uint *)(lVar2 + 8) & 0x3fffff) == 0) {
    FUN_1434efa50(param_1,*param_2);
    *(uint *)(*param_2 + 8) = *(uint *)(*param_2 + 8) | 0x800000;
    FUN_143515f50(param_1,*param_2);
    return;
  }
  FUN_1434ef880(*param_2);
  return;
}



// FUNCTION 143516330 FUN_143516330 body=369 status=ok
// SIG undefined FUN_143516330(void)

void FUN_143516330(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
      }
      param_1[2] = 0;
      return;
    }
    uVar5 = param_3 + 3U & 0xfffffffffffffffc;
    local_res8[0] = 2;
    if (*param_1 == 0) {
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar5 * 0x28,local_res8);
      *param_1 = lVar1;
    }
    else {
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))();
      uVar3 = uVar5;
      if ((ulonglong)param_1[1] < uVar5) {
        uVar3 = param_1[1];
      }
      if (uVar3 != 0) {
        lVar4 = 0;
        uVar2 = uVar3;
        do {
          FUN_143516020(lVar4 + lVar1,*param_1 + lVar4);
          if (9 < ((byte)*(uint *)(*param_1 + lVar4) & 0x1f)) {
            if ((*(uint *)(*param_1 + lVar4) >> 9 & 1) == 0) {
              FUN_1435920c0();
            }
            else {
              FUN_143592150();
            }
          }
          lVar4 = lVar4 + 0x28;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      if (uVar3 < (ulonglong)param_1[1]) {
        lVar4 = uVar3 * 0x28;
        do {
          if (9 < ((byte)*(uint *)(*param_1 + lVar4) & 0x1f)) {
            if ((*(uint *)(*param_1 + lVar4) >> 9 & 1) == 0) {
              FUN_1435920c0();
            }
            else {
              FUN_143592150();
            }
          }
          uVar3 = uVar3 + 1;
          lVar4 = lVar4 + 0x28;
        } while (uVar3 < (ulonglong)param_1[1]);
      }
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *param_1 = lVar1;
    }
    param_1[2] = uVar5;
  }
  return;
}



// FUNCTION 1435164b0 FUN_1435164b0 body=199 status=ok
// SIG undefined FUN_1435164b0(void)

void FUN_1435164b0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (uint *)(*param_1 + ((lVar2 + param_3) * 5 + -5) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (9 < ((byte)*puVar1 & 0x1f)) {
        if ((*puVar1 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar1);
        }
        else {
          FUN_143592150();
        }
      }
      puVar1 = puVar1 + -10;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_143516330(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_143516330(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143516580 FUN_143516580 body=362 status=ok
// SIG undefined FUN_143516580(void)

undefined1 *
FUN_143516580(longlong param_1,undefined1 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  longlong local_50;
  uint local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  
  if (((*(char *)(param_1 + 8) == '\0') || (param_3 < *(uint *)(param_1 + 0x20))) &&
     (param_3 <= *(uint *)(param_1 + 0x20))) {
    if (param_3 == *(uint *)(param_1 + 0x20)) {
      pcVar5 = (char *)FUN_14361f950(param_1,local_res8);
      if (*pcVar5 == '\0') {
        *param_2 = 0;
        return param_2;
      }
      uVar6 = *(ulonglong *)(param_1 + 0x20);
      FUN_1434f0030(param_1 + 0x18,(ulonglong)(param_3 + 1));
      for (; uVar6 < param_3 + 1; uVar6 = uVar6 + 1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar6 * 4) = 0;
      }
    }
    local_48[0] = 0;
    local_40 = 0;
    pcVar5 = (char *)FUN_14361fbd0(param_1,local_res8,param_5,param_4,local_48);
    if (*pcVar5 == '\0') {
      *param_2 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x18);
      *param_2 = 1;
      *(undefined4 *)(lVar3 + (ulonglong)param_3 * 4) = local_38;
    }
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        FUN_143592150();
      }
    }
    return param_2;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = FUN_1435c8e40(local_58,0x465,uVar2);
  FUN_1435cbdf0(uVar2,uVar4);
  piVar1 = (int *)(local_50 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435166f0 FUN_1435166f0 body=164 status=ok
// SIG undefined FUN_1435166f0(void)

void FUN_1435166f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_1 + 8) = 3;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  FUN_1434f0700(param_1 + 0x18,param_3);
  *(undefined8 *)(param_1 + 0x58) = param_4;
  if (9 < ((byte)*(uint *)(param_1 + 0x38) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x38) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x38);
    }
    else {
      FUN_143592150();
    }
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffffe0;
  if (*(RefCountImpl **)(param_1 + 0x60) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 1435167a0 FUN_1435167a0 body=144 status=ok
// SIG undefined FUN_1435167a0(void)

void FUN_1435167a0(longlong param_1)

{
  undefined8 uVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  local_28[0] = 0;
  local_20 = 0;
  FUN_1434f0700(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    uVar1 = 0;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x50);
    }
    Scaleform::GFx::AS3::AvmBitmap::SetResourceMovieDef(*(longlong *)(param_1 + 0x88),uVar1);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1435e3020();
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143516830 SetIdentity body=44 status=ok
// SIG void SetIdentity(Matrix2x4<double> * this)

/* public: void __cdecl Scaleform::Render::Matrix2x4<double>::SetIdentity(void) __ptr64 */

void __thiscall Scaleform::Render::Matrix2x4<double>::SetIdentity(Matrix2x4<double> *this)

{
                    /* 0x3516830  411  ?SetIdentity@?$Matrix2x4@N@Render@Scaleform@@QEAAXXZ */
  *(undefined8 *)this = 0x3ff0000000000000;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}



// FUNCTION 143516860 FUN_143516860 body=93 status=ok
// SIG undefined FUN_143516860(void)

void FUN_143516860(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if ((plVar1 != (longlong *)0x0) && (plVar1 != (longlong *)(param_1 + 0x20))) {
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
  }
  return;
}



// FUNCTION 1435168c0 FUN_1435168c0 body=59 status=ok
// SIG undefined FUN_1435168c0(void)

void FUN_1435168c0(uint *param_1)

{
  if (9 < ((byte)*param_1 & 0x1f)) {
    if ((*param_1 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_1 = *param_1 & 0xffffffe0;
      return;
    }
    FUN_1435920c0(param_1);
  }
  *param_1 = *param_1 & 0xffffffe0;
  return;
}



// FUNCTION 143516900 FUN_143516900 body=44 status=ok
// SIG undefined FUN_143516900(void)

longlong FUN_143516900(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x28))
                      ();
    if (lVar1 != 0) {
      return lVar1 + -0x48;
    }
  }
  return 0;
}



// FUNCTION 143516930 FUN_143516930 body=45 status=ok
// SIG undefined FUN_143516930(void)

void FUN_143516930(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_143590540();
  FUN_14357ad00(uVar1,uVar2,param_2);
  return;
}



// FUNCTION 143516960 FUN_143516960 body=128 status=ok
// SIG undefined FUN_143516960(void)

void FUN_143516960(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_res10 [24];
  uint local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 1;
  local_28[0] = 3;
  local_20 = 0;
  local_18 = param_2;
  FUN_143516580(*(longlong *)(param_1 + 0x10) + 0x40,local_res10,iVar1,local_28,
                *(undefined8 *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28) + 0x98) + 0x238)
               );
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435169e0 FUN_1435169e0 body=144 status=ok
// SIG undefined FUN_1435169e0(void)

void FUN_1435169e0(longlong param_1,double param_2,double param_3,double param_4,double param_5)

{
  FUN_143590540();
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),(float)param_2 * 20.0,(float)param_3 * 20.0,
                (float)param_4 * 20.0,(float)param_5 * 20.0);
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 143516a70 FUN_143516a70 body=93 status=ok
// SIG undefined FUN_143516a70(void)

void FUN_143516a70(longlong param_1,double param_2,double param_3)

{
  FUN_143590540();
  FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),(float)(param_2 * 20.0),(float)(param_3 * 20.0));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 143516ad0 FUN_143516ad0 body=33 status=ok
// SIG undefined FUN_143516ad0(void)

undefined8 * FUN_143516ad0(undefined8 *param_1)

{
  FUN_1434c4050();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143516b00 FUN_143516b00 body=215 status=ok
// SIG undefined FUN_143516b00(void)

undefined8 * FUN_143516b00(undefined8 *param_1,longlong param_2)

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
    FUN_1434c4050(puVar2,param_2,&PTR_DAT_145b26888);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434c3f80(lVar3,param_2,&PTR_DAT_145b26888);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143516be0 FUN_143516be0 body=33 status=ok
// SIG undefined FUN_143516be0(void)

undefined8 * FUN_143516be0(undefined8 *param_1)

{
  FUN_1434c4050();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143516c10 FUN_143516c10 body=215 status=ok
// SIG undefined FUN_143516c10(void)

undefined8 * FUN_143516c10(undefined8 *param_1,longlong param_2)

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
    FUN_1434c4050(puVar2,param_2,&PTR_DAT_145b268e8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434c3f80(lVar3,param_2,&PTR_DAT_145b268e8);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143516cf0 FUN_143516cf0 body=33 status=ok
// SIG undefined FUN_143516cf0(void)

undefined8 * FUN_143516cf0(undefined8 *param_1)

{
  FUN_1434c4050();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143516d20 FUN_143516d20 body=215 status=ok
// SIG undefined FUN_143516d20(void)

undefined8 * FUN_143516d20(undefined8 *param_1,longlong param_2)

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
    FUN_1434c4050(puVar2,param_2,&PTR_DAT_145b26948);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434c3f80(lVar3,param_2,&PTR_DAT_145b26948);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143516e00 FUN_143516e00 body=33 status=ok
// SIG undefined FUN_143516e00(void)

undefined8 * FUN_143516e00(undefined8 *param_1)

{
  FUN_1434c4050();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143516e30 FUN_143516e30 body=215 status=ok
// SIG undefined FUN_143516e30(void)

undefined8 * FUN_143516e30(undefined8 *param_1,longlong param_2)

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
    FUN_1434c4050(puVar2,param_2,&PTR_DAT_145b26708);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434c3f80(lVar3,param_2,&PTR_DAT_145b26708);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143516f10 FUN_143516f10 body=33 status=ok
// SIG undefined FUN_143516f10(void)

undefined8 * FUN_143516f10(undefined8 *param_1)

{
  FUN_1434c4050();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143516f40 FUN_143516f40 body=215 status=ok
// SIG undefined FUN_143516f40(void)

undefined8 * FUN_143516f40(undefined8 *param_1,longlong param_2)

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
    FUN_1434c4050(puVar2,param_2,&PTR_DAT_145b26768);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434c3f80(lVar3,param_2,&PTR_DAT_145b26768);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143517020 FUN_143517020 body=33 status=ok
// SIG undefined FUN_143517020(void)

undefined8 * FUN_143517020(undefined8 *param_1)

{
  FUN_1434c4050();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143517050 FUN_143517050 body=215 status=ok
// SIG undefined FUN_143517050(void)

undefined8 * FUN_143517050(undefined8 *param_1,longlong param_2)

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
    FUN_1434c4050(puVar2,param_2,&PTR_DAT_145b267c8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434c3f80(lVar3,param_2,&PTR_DAT_145b267c8);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143517130 FUN_143517130 body=33 status=ok
// SIG undefined FUN_143517130(void)

undefined8 * FUN_143517130(undefined8 *param_1)

{
  FUN_1434c4050();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143517160 FUN_143517160 body=215 status=ok
// SIG undefined FUN_143517160(void)

undefined8 * FUN_143517160(undefined8 *param_1,longlong param_2)

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
    FUN_1434c4050(puVar2,param_2,&PTR_DAT_145b26828);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434c3f80(lVar3,param_2,&PTR_DAT_145b26828);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143517270 FUN_143517270 body=87 status=ok
// SIG undefined FUN_143517270(void)

undefined8 * FUN_143517270(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xc0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  return param_1;
}



// FUNCTION 1435172f0 FUN_1435172f0 body=135 status=ok
// SIG undefined FUN_1435172f0(void)

void FUN_1435172f0(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  uVar2 = param_1[10];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[10] = uVar2 - 1;
    }
  }
  uVar2 = param_1[9];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[9] = uVar2 - 1;
    }
  }
  piVar1 = (int *)(param_1[8] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 143517380 FUN_143517380 body=2371 status=ok
// SIG undefined FUN_143517380(void)

longlong * FUN_143517380(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  ulonglong local_res8;
  uint local_198 [8];
  uint local_178 [2];
  undefined8 local_170;
  undefined4 local_168;
  uint local_158 [2];
  undefined8 local_150;
  undefined8 local_148;
  uint local_138 [2];
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  ulonglong local_110;
  uint local_108 [8];
  undefined1 local_e8 [8];
  ulonglong local_e0;
  uint local_d8 [8];
  undefined1 local_b8 [8];
  ulonglong local_b0;
  uint local_a8 [8];
  undefined1 local_88 [32];
  undefined4 local_68 [2];
  undefined8 local_60;
  byte local_58;
  uint local_48 [4];
  byte local_38;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar5 = *(longlong *)(param_1[5] + 0x98);
  lVar6 = *(longlong *)(lVar5 + 0x10);
  *param_2 = 0;
  Scaleform::GFx::AS3::Value::Value(local_88,param_1 + 8);
  local_68[0] = 1;
  local_58 = *(byte *)((longlong)param_1 + 0x5c) & 1;
  local_38 = *(byte *)((longlong)param_1 + 0x5c) >> 1 & 1;
  local_60 = 0;
  local_48[0] = 1;
  local_48[2] = 0;
  local_48[3] = 0;
  if ((*(byte *)(param_1[5] + 0x88) >> 4 & 1) != 0) {
    local_res8 = FUN_143360950(*(undefined8 *)(lVar6 + 0x218),&DAT_145af4d3c,4,0);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    Scaleform::GFx::AS3::Value::Value(local_198,&local_res8);
    FUN_1435ae6b0(local_b8,*(undefined8 *)(lVar5 + 0x1d8),local_198);
    if (9 < ((byte)local_198[0] & 0x1f)) {
      if ((local_198[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_198);
      }
      else {
        FUN_143592150();
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_res8 = FUN_143360950(*(undefined8 *)(lVar6 + 0x218),"bubbles",7);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    Scaleform::GFx::AS3::Value::Value(local_198,&local_res8);
    FUN_1435ae6b0(local_e8,*(undefined8 *)(lVar5 + 0x1d8),local_198);
    if (9 < ((byte)local_198[0] & 0x1f)) {
      if ((local_198[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_198);
      }
      else {
        FUN_143592150();
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_res8 = FUN_143360950(*(undefined8 *)(lVar6 + 0x218),"cancelable",10);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    Scaleform::GFx::AS3::Value::Value(local_198,&local_res8);
    FUN_1435ae6b0(local_118,*(undefined8 *)(lVar5 + 0x1d8),local_198);
    if (9 < ((byte)local_198[0] & 0x1f)) {
      if ((local_198[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_198);
      }
      else {
        FUN_143592150();
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_178[0] = 0;
    local_170 = 0;
    local_158[0] = 0;
    local_150 = 0;
    local_138[0] = 0;
    local_130 = 0;
    pcVar8 = (char *)(**(code **)(*param_1 + 0x28))(param_1,&local_res8,local_b8,local_178);
    if (*pcVar8 != '\0') {
      FUN_143590140(local_88,local_178);
    }
    pcVar8 = (char *)(**(code **)(*param_1 + 0x28))(param_1,&local_res8,local_e8,local_158);
    if (*pcVar8 != '\0') {
      FUN_143590140(local_68,local_158);
    }
    pcVar8 = (char *)(**(code **)(*param_1 + 0x28))(param_1,&local_res8,local_118,local_138);
    if (*pcVar8 != '\0') {
      FUN_143590140(local_48,local_138);
    }
    if (9 < ((byte)local_138[0] & 0x1f)) {
      if ((local_138[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_138);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_158[0] & 0x1f)) {
      if ((local_158[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_158);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_178[0] & 0x1f)) {
      if ((local_178[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_178);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_108[0] & 0x1f)) {
      if ((local_108[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_108);
      }
      else {
        FUN_143592150();
      }
    }
    if (local_110 != 0) {
      if ((local_110 & 1) == 0) {
        if ((*(uint *)(local_110 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_110 + 8) = *(uint *)(local_110 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_110 = local_110 - 1;
      }
    }
    if (9 < ((byte)local_d8[0] & 0x1f)) {
      if ((local_d8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_d8);
      }
      else {
        FUN_143592150();
      }
    }
    if (local_e0 != 0) {
      if ((local_e0 & 1) == 0) {
        if ((*(uint *)(local_e0 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_e0 + 8) = *(uint *)(local_e0 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_e0 = local_e0 - 1;
      }
    }
    if (9 < ((byte)local_a8[0] & 0x1f)) {
      if ((local_a8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_a8);
      }
      else {
        FUN_143592150();
      }
    }
    if (((local_b0 != 0) && ((local_b0 & 1) == 0)) && ((*(uint *)(local_b0 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_b0 + 8) = *(uint *)(local_b0 + 8) - 1;
      FUN_1434ef880();
    }
  }
  uVar9 = (**(code **)(*param_1 + 200))(param_1);
  lVar12 = 3;
  FUN_1435e8720(lVar5,param_2,uVar9,3,local_88);
  puVar2 = (ulonglong *)(param_1 + 9);
  puVar11 = (ulonglong *)(*param_2 + 0x48);
  if (puVar2 != puVar11) {
    uVar7 = *puVar2;
    if (uVar7 != 0) {
      *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
    }
    uVar7 = *puVar11;
    if (uVar7 != 0) {
      if ((uVar7 & 1) == 0) {
        if ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar11 = uVar7 - 1;
      }
    }
    *puVar11 = *puVar2;
  }
  puVar2 = (ulonglong *)(param_1 + 10);
  puVar11 = (ulonglong *)(*param_2 + 0x50);
  if (puVar2 != puVar11) {
    uVar7 = *puVar2;
    if (uVar7 != 0) {
      *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
    }
    uVar7 = *puVar11;
    if (uVar7 != 0) {
      if ((uVar7 & 1) == 0) {
        if ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar11 = uVar7 - 1;
      }
    }
    *puVar11 = *puVar2;
  }
  pbVar3 = (byte *)(*param_2 + 0x5c);
  *pbVar3 = *pbVar3 ^ (*(byte *)((longlong)param_1 + 0x5c) ^ *(byte *)(*param_2 + 0x5c)) & 4;
  pbVar3 = (byte *)(*param_2 + 0x5c);
  *pbVar3 = *pbVar3 ^ (*(byte *)((longlong)param_1 + 0x5c) ^ *(byte *)(*param_2 + 0x5c)) & 8;
  pbVar3 = (byte *)(*param_2 + 0x5c);
  *pbVar3 = *pbVar3 ^ (*(byte *)((longlong)param_1 + 0x5c) ^ *(byte *)(*param_2 + 0x5c)) & 0x10;
  *(int *)(*param_2 + 0x58) = (int)param_1[0xb];
  if ((*(byte *)(param_1[5] + 0x88) >> 4 & 1) != 0) {
    local_res8 = FUN_143360950(*(undefined8 *)(lVar6 + 0x218),"target",6);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    Scaleform::GFx::AS3::Value::Value(local_198,&local_res8);
    FUN_1435ae6b0(local_b8,*(undefined8 *)(lVar5 + 0x1d8),local_198);
    if (9 < ((byte)local_198[0] & 0x1f)) {
      if ((local_198[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_198);
      }
      else {
        FUN_143592150();
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_res8 = FUN_143360950(*(undefined8 *)(lVar6 + 0x218),"currentTarget",0xd);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    Scaleform::GFx::AS3::Value::Value(local_198,&local_res8);
    FUN_1435ae6b0(local_118,*(undefined8 *)(lVar5 + 0x1d8),local_198);
    if (9 < ((byte)local_198[0] & 0x1f)) {
      if ((local_198[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_198);
      }
      else {
        FUN_143592150();
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_res8 = FUN_143360950(*(undefined8 *)(lVar6 + 0x218),"eventPhase",10);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    Scaleform::GFx::AS3::Value::Value(local_198,&local_res8);
    FUN_1435ae6b0(local_e8,*(undefined8 *)(lVar5 + 0x1d8),local_198);
    if (9 < ((byte)local_198[0] & 0x1f)) {
      if ((local_198[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_198);
      }
      else {
        FUN_143592150();
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_138[0] = 0;
    local_130 = 0;
    local_158[0] = 0;
    local_150 = 0;
    local_178[0] = 0;
    local_170 = 0;
    pcVar8 = (char *)(**(code **)(*param_1 + 0x28))(param_1,&local_res8,local_b8,local_138);
    if ((*pcVar8 != '\0') && (((byte)local_138[0] & 0x1f) == 0xc)) {
      FUN_1434f0700(*param_2 + 0x50,local_128);
    }
    pcVar8 = (char *)(**(code **)(*param_1 + 0x28))(param_1,&local_res8,local_118,local_158);
    if ((*pcVar8 != '\0') && (((byte)local_158[0] & 0x1f) == 0xc)) {
      FUN_1434f0700(*param_2 + 0x48,local_148);
    }
    pcVar8 = (char *)(**(code **)(*param_1 + 0x28))(param_1,&local_res8,local_e8,local_178);
    if (*pcVar8 != '\0') {
      FUN_143591190(local_178,&local_res8);
      *(undefined4 *)(*param_2 + 0x58) = local_168;
    }
    if (9 < ((byte)local_178[0] & 0x1f)) {
      if ((local_178[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_178);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_158[0] & 0x1f)) {
      if ((local_158[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_158);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_138[0] & 0x1f)) {
      if ((local_138[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_138);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_d8[0] & 0x1f)) {
      if ((local_d8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_d8);
      }
      else {
        FUN_143592150();
      }
    }
    if (local_e0 != 0) {
      if ((local_e0 & 1) == 0) {
        if ((*(uint *)(local_e0 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_e0 + 8) = *(uint *)(local_e0 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_e0 = local_e0 - 1;
      }
    }
    if (9 < ((byte)local_108[0] & 0x1f)) {
      if ((local_108[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_108);
      }
      else {
        FUN_143592150();
      }
    }
    if (local_110 != 0) {
      if ((local_110 & 1) == 0) {
        if ((*(uint *)(local_110 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_110 + 8) = *(uint *)(local_110 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_110 = local_110 - 1;
      }
    }
    if (9 < ((byte)local_a8[0] & 0x1f)) {
      if ((local_a8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_a8);
      }
      else {
        FUN_143592150();
      }
    }
    if (((local_b0 != 0) && ((local_b0 & 1) == 0)) && ((*(uint *)(local_b0 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_b0 + 8) = *(uint *)(local_b0 + 8) - 1;
      FUN_1434ef880();
    }
  }
  puVar10 = &stack0xffffffffffffffd8;
  do {
    puVar4 = (uint *)(puVar10 + -0x20);
    puVar10 = puVar10 + -0x20;
    lVar12 = lVar12 + -1;
    if (9 < ((byte)*puVar4 & 0x1f)) {
      if ((*puVar4 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar10);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar12 != 0);
  return param_2;
}



// FUNCTION 143517cd0 ForEachChild_GC body=77 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl_events::Event::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (*param_3)(param_2,param_1 + 0x48);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*param_3)(param_2,param_1 + 0x50);
  }
  return;
}



// FUNCTION 143517d30 FUN_143517d30 body=519 status=ok
// SIG undefined FUN_143517d30(void)

bool FUN_143517d30(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong local_res8;
  uint local_78 [2];
  undefined8 local_70;
  longlong local_68;
  uint local_58 [8];
  undefined1 local_38 [8];
  ulonglong local_30;
  uint local_28 [8];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if ((*(byte *)((longlong)param_1 + 0x5c) & 0x20) != 0) {
    return true;
  }
  if ((*(byte *)(param_1[5] + 0x88) >> 4 & 1) != 0) {
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218),
                               "target",6);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
    FUN_1435ae6b0(local_38,*(undefined8 *)(*(longlong *)(param_1[5] + 0x98) + 0x1d8),local_58);
    if (9 < ((byte)local_58[0] & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_58);
      }
      else {
        FUN_143592150();
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_78[0] = 0;
    local_70 = 0;
    pcVar3 = (char *)(**(code **)(*param_1 + 0x28))(param_1,&local_res8,local_38,local_78);
    if ((*pcVar3 != '\0') && (((byte)local_78[0] & 0x1f) == 0xc)) {
      lVar2 = param_1[10];
      if ((local_78[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_78);
      }
      else {
        FUN_143592150();
      }
      if (9 < ((byte)local_28[0] & 0x1f)) {
        if ((local_28[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_28);
        }
        else {
          FUN_143592150();
        }
      }
      if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0))
      {
        *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
        FUN_1434ef880();
      }
      return lVar2 != local_68;
    }
    if (9 < ((byte)local_78[0] & 0x1f)) {
      if ((local_78[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_78);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_28[0] & 0x1f)) {
      if ((local_28[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_28);
      }
      else {
        FUN_143592150();
      }
    }
    if ((local_30 != 0) && ((local_30 & 1) == 0)) {
      if ((*(uint *)(local_30 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
        FUN_1434ef880();
      }
    }
  }
  return false;
}



// FUNCTION 143517f40 FUN_143517f40 body=163 status=ok
// SIG undefined FUN_143517f40(void)

void FUN_143517f40(longlong param_1,int param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 local_res10 [24];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        bVar3 = FUN_1435909c0(param_3 + 0x40);
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfd;
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | (bVar3 & 1) * '\x02';
      }
      bVar3 = FUN_1435909c0(param_3 + 0x20);
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfe;
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | bVar3 & 1;
    }
    FUN_1435911f0(param_3,local_res10,param_1 + 0x40);
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar4 = FUN_1435c8e40(local_18,0x427,uVar2);
  FUN_1435cbef0(uVar2,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143518070 FUN_143518070 body=62 status=ok
// SIG undefined FUN_143518070(void)

void FUN_143518070(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 1435180c0 FUN_1435180c0 body=147 status=ok
// SIG undefined FUN_1435180c0(void)

void FUN_1435180c0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8 [4];
  
  (**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  if (local_res8 != param_2) {
    if (local_res8[0] != 0) {
      *(int *)(local_res8[0] + 8) = *(int *)(local_res8[0] + 8) + 1;
      *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) & 0x8fffffff;
    }
    uVar1 = *param_2;
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880(uVar1);
        }
      }
      else {
        *param_2 = uVar1 - 1;
      }
    }
    *param_2 = local_res8[0];
  }
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143518160 FUN_143518160 body=1191 status=ok
// SIG undefined FUN_143518160(void)

void FUN_143518160(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res18 [8];
  undefined8 *local_508;
  undefined1 local_500;
  undefined1 local_4ff [7];
  longlong local_4f8;
  longlong local_4f0;
  uint local_4d8 [2];
  undefined8 local_4d0;
  ulonglong local_4b8 [2];
  uint local_4a8 [2];
  undefined8 local_4a0;
  undefined1 local_488 [8];
  ulonglong local_480;
  uint local_478 [8];
  undefined1 *local_458 [6];
  undefined1 local_428 [1024];
  
  if (param_3 == 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(&local_4f8,0x427,uVar5);
    FUN_1435cbef0(uVar5,uVar3);
    piVar1 = (int *)(local_4f0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    FUN_1432c5960(local_458,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x48));
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
    local_508 = *(undefined8 **)(*(longlong *)(lVar2 + 0x300) + 0x1a0);
    *(int *)(local_508 + 3) = *(int *)(local_508 + 3) + 1;
    FUN_1435911f0(param_4,local_res18,&local_508);
    FUN_1432f2bf0(local_428,0x400,&DAT_145b2c924,*local_508);
    Scaleform::StringBuffer::AppendString(local_458,local_428,0xffffffffffffffff);
    uVar8 = 1;
    if (1 < param_3) {
      do {
        FUN_1435911f0(uVar8 * 0x20 + param_4,local_res18,&local_508);
        Scaleform::GFx::AS3::Value::Value(&local_4f8,&local_508);
        FUN_1435ae6b0(local_488,*(undefined8 *)(lVar2 + 0x1d8),&local_4f8);
        if (9 < ((byte)local_4f8 & 0x1f)) {
          if (((uint)local_4f8 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_4f8);
          }
          else {
            FUN_143592150();
          }
        }
        local_4a8[0] = 0;
        local_4a0 = 0;
        local_4b8[0] = 0;
        local_4b8[1] = 0;
        FUN_1435b1b30(param_1,local_4b8,local_488,0);
        if ((((local_4a8[0] & 0x1f) == 0) || (local_4b8[0] == 1)) ||
           ((((byte)local_4b8[0] >> 1 & 1) != 0 && ((local_4b8[0] & 0xfffffffffffffffd) == 0)))) {
          FUN_1432f2bf0(local_428,0x400,
                        "Property %s not found on flash.events.Event and there is no default value."
                        ,*local_508);
          uVar5 = FUN_1435c8e40(&local_4f8,0x42d,lVar2);
          FUN_1435cbe10(lVar2,uVar5);
          piVar1 = (int *)(local_4f0 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
LAB_14351858c:
          if (9 < ((byte)local_4a8[0] & 0x1f)) {
            if ((local_4a8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_4a8);
            }
            else {
              FUN_143592150();
            }
          }
          if (9 < ((byte)local_478[0] & 0x1f)) {
            if ((local_478[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_478);
            }
            else {
              FUN_143592150();
            }
          }
          if (((local_480 != 0) && ((local_480 & 1) == 0)) &&
             ((*(uint *)(local_480 + 8) & 0x3fffff) != 0)) {
            *(uint *)(local_480 + 8) = *(uint *)(local_480 + 8) - 1;
            FUN_1434ef880();
          }
          goto LAB_1435184d8;
        }
        local_4d8[0] = 0;
        local_4d0 = 0;
        pcVar4 = (char *)FUN_1435af210(local_4b8,&local_500,lVar2,local_4d8,0);
        if (*pcVar4 == '\0') {
          if (9 < ((byte)local_4d8[0] & 0x1f)) {
            if ((local_4d8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_4d8);
            }
            else {
              FUN_143592150();
            }
          }
          goto LAB_14351858c;
        }
        FUN_1432f2bf0(local_428,0x400,&DAT_145b2c97c,*local_508);
        Scaleform::StringBuffer::AppendString(local_458,local_428,0xffffffffffffffff);
        uVar7 = local_4d8[0] & 0x1f;
        FUN_1435911f0(local_4d8,local_4ff,&local_508);
        if (uVar7 == 10) {
          FUN_1432c5df0(local_458,0x22);
        }
        FUN_1432f2bf0(local_428,0x400,&DAT_145afa01c);
        Scaleform::StringBuffer::AppendString(local_458,local_428,0xffffffffffffffff);
        if (uVar7 == 10) {
          FUN_1432c5df0(local_458,0x22);
        }
        if (9 < ((byte)local_4d8[0] & 0x1f)) {
          if ((local_4d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_4d8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_4a8[0] & 0x1f)) {
          if ((local_4a8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_4a8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_478[0] & 0x1f)) {
          if ((local_478[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_478);
          }
          else {
            FUN_143592150();
          }
        }
        if (((local_480 != 0) && ((local_480 & 1) == 0)) &&
           ((*(uint *)(local_480 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_480 + 8) = *(uint *)(local_480 + 8) - 1;
          FUN_1434ef880();
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < param_3);
    }
    Scaleform::StringBuffer::AppendString(local_458,&DAT_145b18618,2);
    puVar6 = &DAT_145af3922;
    if (local_458[0] != (undefined1 *)0x0) {
      puVar6 = local_458[0];
    }
    local_4f8 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x218),puVar6);
    *(int *)(local_4f8 + 0x18) = *(int *)(local_4f8 + 0x18) + 1;
    FUN_143590250(param_2,&local_4f8);
    piVar1 = (int *)(local_4f8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
LAB_1435184d8:
    piVar1 = (int *)(local_508 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    Scaleform::StringBuffer::~StringBuffer(local_458);
  }
  return;
}



// FUNCTION 143518670 FUN_143518670 body=555 status=ok
// SIG undefined FUN_143518670(void)

void FUN_143518670(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res8;
  uint local_d8 [2];
  undefined8 local_d0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_d8[0] = 0;
  local_d0 = 0;
  lVar6 = *(longlong *)(param_1[5] + 0x98);
  lVar3 = *(longlong *)(lVar6 + 0x10);
  lVar4 = (**(code **)(*param_1 + 0xc0))();
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(lVar4 + lVar7) != '\0');
  local_res8 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),lVar4,lVar7,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 0x218),"eventPhase",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar6 = 5;
  FUN_143518160(param_1,local_d8,5,local_b8);
  FUN_1435911f0(local_d8,&local_res8,param_2);
  puVar5 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar5 + -0x20);
    puVar5 = puVar5 + -0x20;
    lVar6 = lVar6 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar5);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar6 != 0);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1435188b0 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2bf80;
  return param_1;
}



// FUNCTION 1435188e0 FUN_1435188e0 body=220 status=ok
// SIG undefined FUN_1435188e0(void)

void FUN_1435188e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar3,param_3);
    *puVar3 = &PTR_ForEachChild_GC_145b2bea8;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(puVar3[5] + 0x98) + 0x10) + 0x218);
    puVar3[8] = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(byte *)((longlong)puVar3 + 0x5c) = *(byte *)((longlong)puVar3 + 0x5c) & 0xc0;
    *(undefined4 *)(puVar3 + 0xb) = 2;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar3);
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



// FUNCTION 1435189d0 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143518a00 FUN_143518a00 body=215 status=ok
// SIG undefined FUN_143518a00(void)

undefined8 * FUN_143518a00(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b27e40);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b27e40);
    *puVar2 = &PTR_FUN_145b2bf80;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x180,0);
  if (lVar3 != 0) {
    Scaleform::GFx::AS3::Classes::fl_events::Event::Event(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143518ae0 Event body=547 status=ok
// SIG undefined Event(void)

undefined8 * Scaleform::GFx::AS3::Classes::fl_events::Event::Event(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b2bff8;
  param_1[10] = "activate";
  param_1[0xb] = "added";
  param_1[0xc] = "addedToStage";
  param_1[0xd] = "cancel";
  param_1[0xe] = "change";
  param_1[0xf] = "close";
  param_1[0x10] = "closing";
  param_1[0x11] = "complete";
  param_1[0x12] = "connect";
  param_1[0x13] = "deactivate";
  param_1[0x14] = "displaying";
  param_1[0x15] = "enterFrame";
  param_1[0x16] = "exiting";
  param_1[0x17] = "exitFrame";
  param_1[0x18] = "frameConstructed";
  param_1[0x19] = "fullScreen";
  param_1[0x1a] = "htmlBoundsChange";
  param_1[0x1b] = "htmlDOMInitialize";
  param_1[0x1c] = "htmlRender";
  param_1[0x1d] = &DAT_145b2ca74;
  param_1[0x1e] = &DAT_145b2ca78;
  param_1[0x1f] = "locationChange";
  param_1[0x20] = "mouseLeave";
  param_1[0x21] = "networkChange";
  param_1[0x22] = &DAT_145b2cab0;
  param_1[0x23] = "removed";
  param_1[0x24] = "removedFromStage";
  param_1[0x25] = "render";
  param_1[0x26] = "resize";
  param_1[0x27] = "scroll";
  param_1[0x28] = "select";
  param_1[0x29] = "soundComplete";
  param_1[0x2a] = "tabChildrenChange";
  param_1[0x2b] = "tabEnabledChange";
  param_1[0x2c] = "tabIndexChange";
  param_1[0x2d] = "unload";
  param_1[0x2e] = "userIdle";
  param_1[0x2f] = "userPresent";
  return param_1;
}



// FUNCTION 143518d10 FUN_143518d10 body=97 status=ok
// SIG undefined FUN_143518d10(void)

undefined8 * FUN_143518d10(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xc0;
  *param_1 = &PTR_ForEachChild_GC_145b2c0d0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  return param_1;
}



// FUNCTION 143518d80 FUN_143518d80 body=288 status=ok
// SIG undefined FUN_143518d80(void)

void FUN_143518d80(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_2 != 4) {
    if (param_2 != 5) {
      if (param_2 != 6) {
        if ((param_2 != 7) && (param_2 < 4)) goto LAB_143518e03;
        FUN_143590af0(param_3 + 0xc0,local_res10,param_1 + 0x70);
      }
      FUN_143590af0(param_3 + 0xa0,local_res10,param_1 + 0x68);
    }
    FUN_143590af0(param_3 + 0x80,local_res10,param_1 + 0x60);
  }
  FUN_143590af0(param_3 + 0x60,local_res10,param_1 + 0x78);
LAB_143518e03:
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        bVar3 = FUN_1435909c0(param_3 + 0x40);
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfd;
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | (bVar3 & 1) * '\x02';
      }
      bVar3 = FUN_1435909c0(param_3 + 0x20);
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfe;
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | bVar3 & 1;
    }
    FUN_1435911f0(param_3,local_res10,param_1 + 0x40);
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar4 = FUN_1435c8e40(local_18,0x427,uVar2);
  FUN_1435cbef0(uVar2,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143518f30 FUN_143518f30 body=122 status=ok
// SIG undefined FUN_143518f30(void)

void FUN_143518f30(longlong param_1,undefined8 param_2)

{
  ulonglong local_res8;
  
  FUN_143517380(param_1,&local_res8);
  *(undefined8 *)(local_res8 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(local_res8 + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(local_res8 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(local_res8 + 0x70) = *(undefined8 *)(param_1 + 0x70);
  FUN_1434f0700(param_2,local_res8);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143518fb0 FUN_143518fb0 body=733 status=ok
// SIG undefined FUN_143518fb0(void)

void FUN_143518fb0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_res8;
  uint local_138 [2];
  undefined8 local_130;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_138[0] = 0;
  local_130 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),
                             "AccelerometerEvent",0x12);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_118,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"timestamp",9);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"accelerationX",
                             0xd);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"accelerationY",
                             0xd);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"accelerationZ",
                             0xd);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar4 = 8;
  FUN_143518160(param_1,local_138,8,local_118);
  FUN_1435911f0(local_138,&local_res8,param_2);
  puVar3 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  if (9 < ((byte)local_138[0] & 0x1f)) {
    if ((local_138[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_138);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1435192a0 FUN_1435192a0 body=30 status=ok
// SIG undefined FUN_1435192a0(void)

undefined8 * FUN_1435192a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143518f30();
  return param_2;
}



// FUNCTION 1435192d0 FUN_1435192d0 body=33 status=ok
// SIG undefined FUN_1435192d0(void)

undefined8 * FUN_1435192d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2c1a8;
  return param_1;
}



// FUNCTION 143519300 FUN_143519300 body=230 status=ok
// SIG undefined FUN_143519300(void)

void FUN_143519300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar3,param_3);
    *puVar3 = &PTR_ForEachChild_GC_145b2bea8;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(puVar3[5] + 0x98) + 0x10) + 0x218);
    puVar3[8] = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(byte *)((longlong)puVar3 + 0x5c) = *(byte *)((longlong)puVar3 + 0x5c) & 0xc0;
    *(undefined4 *)(puVar3 + 0xb) = 2;
    *puVar3 = &PTR_ForEachChild_GC_145b2c0d0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar3);
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



// FUNCTION 1435193f0 FUN_1435193f0 body=33 status=ok
// SIG undefined FUN_1435193f0(void)

undefined8 * FUN_1435193f0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143519420 FUN_143519420 body=238 status=ok
// SIG undefined FUN_143519420(void)

undefined8 * FUN_143519420(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b29a30);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b29a30);
    *puVar3 = &PTR_FUN_145b2c1a8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "update";
  }
  return param_1;
}



// FUNCTION 143519520 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "update";
  return param_1;
}



// FUNCTION 143519560 FUN_143519560 body=97 status=ok
// SIG undefined FUN_143519560(void)

undefined8 * FUN_143519560(undefined8 *param_1,longlong param_2)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b2c220;
  param_1[8] = *(undefined8 *)(param_2 + 0x98);
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffffffffffff;
  param_1[0xe] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  return param_1;
}



// FUNCTION 1435195d0 FUN_1435195d0 body=262 status=ok
// SIG undefined FUN_1435195d0(void)

void FUN_1435195d0(longlong param_1,undefined8 param_2,code *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_38;
  code *local_30;
  longlong local_28;
  undefined1 local_20;
  
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x58) != 0) {
    (*param_3)(param_2,param_1 + 0x58);
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = 0;
    local_20 = 1;
    if (*plVar1 != 0) {
      lVar4 = *(longlong *)(*plVar1 + 8) + 1;
      lVar5 = lVar3;
      local_38 = param_2;
      local_30 = param_3;
      local_28 = param_1;
      do {
        if (*(longlong *)(lVar5 + 0x10 + *plVar1) != -2) {
          FUN_143533260(&local_38,*plVar1 + 0x18 + lVar5);
        }
        lVar5 = lVar5 + 0x18;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    lVar5 = *(longlong *)(param_1 + 0x48);
    lVar4 = *(longlong *)(lVar5 + 8);
    local_20 = 0;
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 8) + 1;
      local_38 = param_2;
      local_30 = param_3;
      local_28 = param_1;
      do {
        lVar2 = *(longlong *)(lVar5 + 8);
        if (*(longlong *)(lVar3 + 0x10 + lVar2) != -2) {
          FUN_143533260(&local_38,lVar2 + 0x18 + lVar3);
        }
        lVar3 = lVar3 + 0x18;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1435196e0 FUN_1435196e0 body=85 status=ok
// SIG undefined FUN_1435196e0(void)

void FUN_1435196e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_145b2c220;
  uVar1 = param_1[0xb];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0xb] = uVar1 - 1;
    }
  }
  Scaleform::
  AutoPtr<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::EventDispatcherImpl>::
  ~AutoPtr<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::EventDispatcherImpl>
            (param_1 + 9);
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 143519740 CreateEventObject body=39 status=ok
// SIG undefined CreateEventObject(void)

undefined8
Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined1 param_5)

{
  FUN_14351d190(param_2,*(undefined8 *)(param_1 + 0x40),param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 143519770 FUN_143519770 body=30 status=ok
// SIG undefined FUN_143519770(void)

undefined8 FUN_143519770(longlong param_1,undefined8 param_2)

{
  FUN_14351d570(param_2,*(undefined8 *)(param_1 + 0x40));
  return param_2;
}



// FUNCTION 1435197a0 FUN_1435197a0 body=58 status=ok
// SIG undefined FUN_1435197a0(void)

undefined8
FUN_1435197a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  FUN_14351d640(param_2,*(undefined8 *)(param_1 + 0x40),param_3,param_4,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 1435197e0 FUN_1435197e0 body=90 status=ok
// SIG undefined FUN_1435197e0(void)

undefined8 FUN_1435197e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  local_res8 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x218),param_3);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_14351d810(param_2,lVar2,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 143519840 FUN_143519840 body=30 status=ok
// SIG undefined FUN_143519840(void)

undefined8 FUN_143519840(longlong param_1,undefined8 param_2)

{
  FUN_14351d810(param_2,*(undefined8 *)(param_1 + 0x40));
  return param_2;
}



// FUNCTION 143519870 FUN_143519870 body=30 status=ok
// SIG undefined FUN_143519870(void)

undefined8 FUN_143519870(longlong param_1,undefined8 param_2)

{
  FUN_14351da80(param_2,*(undefined8 *)(param_1 + 0x40));
  return param_2;
}



// FUNCTION 1435198a0 FUN_1435198a0 body=30 status=ok
// SIG undefined FUN_1435198a0(void)

undefined8 FUN_1435198a0(longlong param_1,undefined8 param_2)

{
  FUN_14351dbf0(param_2,*(undefined8 *)(param_1 + 0x40));
  return param_2;
}



// FUNCTION 1435198d0 FUN_1435198d0 body=2484 status=ok
// SIG undefined FUN_1435198d0(void)

byte FUN_1435198d0(ulonglong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_res8;
  ulonglong local_res10 [2];
  ulonglong local_res20;
  undefined8 in_stack_ffffffffffffff48;
  uint7 uVar10;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  uVar1 = *param_2;
  uVar8 = 0;
  uVar10 = (uint7)((ulonglong)in_stack_ffffffffffffff48 >> 8);
  if (uVar1 < 0x100000b) {
    if (uVar1 != 0x100000a) {
      if (uVar1 < 0x41) {
        if (uVar1 == 0x40) {
          puVar3 = (ulonglong *)
                   FUN_14351d440(&local_a0,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x378,
                                 param_1);
          uVar5 = *puVar3;
          if (uVar5 != 0) {
            *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
            uVar8 = uVar5;
          }
          if (local_a0 == 0) goto LAB_14351a22d;
          uVar5 = local_a0;
          if ((local_a0 & 1) != 0) {
            local_a0 = local_a0 - 1;
            goto LAB_14351a22d;
          }
        }
        else {
          if (uVar1 == 2) {
            lVar9 = *(longlong *)(lVar4 + 0x300) + 0x2b0;
            goto LAB_143519a62;
          }
          if (uVar1 == 8) {
            puVar3 = (ulonglong *)
                     FUN_14351d280(&local_a8,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x340,
                                   param_1);
            uVar5 = *puVar3;
            if (uVar5 != 0) {
              *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
              uVar8 = uVar5;
            }
            if (local_a8 == 0) goto LAB_14351a22d;
            uVar5 = local_a8;
            if ((local_a8 & 1) != 0) {
              local_a8 = local_a8 - 1;
              goto LAB_14351a22d;
            }
          }
          else if (uVar1 == 0x10) {
            puVar3 = (ulonglong *)
                     FUN_14351d280(&local_res20,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x338,
                                   param_1);
            uVar5 = *puVar3;
            if (uVar5 != 0) {
              *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
              uVar8 = uVar5;
            }
            if (local_res20 == 0) goto LAB_14351a22d;
            uVar5 = local_res20;
            if ((local_res20 & 1) != 0) {
              local_res20 = local_res20 - 1;
              goto LAB_14351a22d;
            }
          }
          else {
            if (uVar1 != 0x20) {
              return 1;
            }
            puVar3 = (ulonglong *)
                     FUN_14351d280(local_res10,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x358,
                                   param_1);
            uVar5 = *puVar3;
            if (uVar5 != 0) {
              *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
              uVar8 = uVar5;
            }
            if (local_res10[0] == 0) goto LAB_14351a22d;
            uVar5 = local_res10[0];
            if ((local_res10[0] & 1) != 0) {
              local_res10[0] = local_res10[0] - 1;
              goto LAB_14351a22d;
            }
          }
        }
      }
      else {
        if (uVar1 != 0x80) {
          if (uVar1 == 0x2000) {
            puVar3 = (ulonglong *)
                     FUN_14351d280(&local_90,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x370,
                                   param_1);
            uVar5 = *puVar3;
            if (uVar5 != 0) {
              *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
              uVar8 = uVar5;
            }
            if (local_90 != 0) {
              uVar5 = local_90;
              if ((local_90 & 1) != 0) {
                local_90 = local_90 - 1;
                *(byte *)(uVar8 + 0x5c) = *(byte *)(uVar8 + 0x5c) & 0xfe;
                goto LAB_14351a22d;
              }
              goto LAB_143519c0a;
            }
          }
          else {
            if (uVar1 != 0x4000) {
              return 1;
            }
            puVar3 = (ulonglong *)
                     FUN_14351d280(&local_98,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x368,
                                   param_1);
            uVar5 = *puVar3;
            if (uVar5 != 0) {
              *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
              uVar8 = uVar5;
            }
            if (local_98 != 0) {
              uVar5 = local_98;
              if ((local_98 & 1) != 0) {
                local_98 = local_98 - 1;
                *(byte *)(uVar8 + 0x5c) = *(byte *)(uVar8 + 0x5c) & 0xfe;
                goto LAB_14351a22d;
              }
LAB_143519c0a:
              if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
                FUN_1434ef880();
              }
            }
          }
          *(byte *)(uVar8 + 0x5c) = *(byte *)(uVar8 + 0x5c) & 0xfe;
          goto LAB_14351a22d;
        }
        puVar3 = (ulonglong *)
                 FUN_14351d440(&local_88,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x380,param_1)
        ;
        uVar5 = *puVar3;
        if (uVar5 != 0) {
          *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
          uVar8 = uVar5;
        }
        if (local_88 == 0) goto LAB_14351a22d;
        uVar5 = local_88;
        if ((local_88 & 1) != 0) {
          local_88 = local_88 - 1;
          goto LAB_14351a22d;
        }
      }
      goto LAB_14351a219;
    }
    FUN_14351d280(&local_res8,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x350,param_1);
    uVar5 = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
      uVar8 = local_res8;
    }
    if ((((uint)(int)*(char *)((longlong)param_2 + 0x11) < 6) &&
        (lVar4 = (ulonglong)(uint)(int)*(char *)((longlong)param_2 + 0x11) * 0xe0 + 0x3d0 +
                 *(longlong *)(lVar4 + 0x300), lVar4 != 0)) &&
       (lVar4 = *(longlong *)(lVar4 + 0x18), lVar4 != 0)) {
      uVar5 = *(ulonglong *)(lVar4 + 0x10 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4);
      if (uVar5 == 0) {
        uVar5 = *(ulonglong *)(lVar4 + 8 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4);
      }
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar5 - 1;
      }
      FUN_1434f0700(local_res8 + 0x68,uVar5);
    }
    else {
      uVar6 = *(ulonglong *)(local_res8 + 0x68);
      if (uVar6 != 0) {
        if ((uVar6 & 1) == 0) {
          if ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *(ulonglong *)(local_res8 + 0x68) = uVar6 - 1;
        }
        *(undefined8 *)(uVar5 + 0x68) = 0;
      }
    }
    if (local_res8 == 0) goto LAB_14351a22d;
    uVar5 = local_res8;
    if ((local_res8 & 1) != 0) {
      local_res8 = local_res8 - 1;
      goto LAB_14351a22d;
    }
LAB_143519f90:
    if ((*(uint *)(uVar5 + 8) & 0x3fffff) == 0) goto LAB_14351a22d;
    *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
    goto LAB_14351a228;
  }
  switch(uVar1) {
  case 0x100000b:
    puVar3 = (ulonglong *)
             FUN_14351d280(&local_80,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x348,param_1);
    uVar5 = *puVar3;
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
    }
    if (local_80 != 0) {
      if ((local_80 & 1) == 0) {
        if ((*(uint *)(local_80 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_80 + 8) = *(uint *)(local_80 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_80 = local_80 - 1;
      }
    }
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      uVar8 = uVar5;
    }
    if ((((uint)(int)*(char *)((longlong)param_2 + 0x11) < 6) &&
        (lVar4 = (ulonglong)(uint)(int)*(char *)((longlong)param_2 + 0x11) * 0xe0 + 0x3d0 +
                 *(longlong *)(lVar4 + 0x300), lVar4 != 0)) &&
       (lVar4 = *(longlong *)(lVar4 + 0x18), lVar4 != 0)) {
      uVar6 = *(ulonglong *)(lVar4 + 0x10 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4);
      if (uVar6 == 0) {
        uVar6 = *(ulonglong *)(lVar4 + 8 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4);
      }
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar6 - 1;
      }
      FUN_1434f0700(uVar5 + 0x68,uVar6);
    }
    else {
      uVar6 = *(ulonglong *)(uVar5 + 0x68);
      if (uVar6 != 0) {
        if ((uVar6 & 1) == 0) {
          if ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *(longlong *)(uVar5 + 0x68) = uVar6 - 1;
        }
        *(longlong *)(uVar5 + 0x68) = 0;
      }
    }
    puVar3 = (ulonglong *)(uVar5 + 0x68);
    if ((*puVar3 == param_1) && (uVar6 = *puVar3, uVar6 != 0)) {
      if ((uVar6 & 1) == 0) {
        if ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar3 = uVar6 - 1;
      }
      *puVar3 = 0;
    }
    if ((uVar5 & 1) != 0) goto LAB_14351a22d;
    goto LAB_143519f90;
  case 0x100000c:
    puVar3 = (ulonglong *)
             FUN_14351d280(&local_78,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x328,param_1);
    uVar5 = *puVar3;
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      uVar8 = uVar5;
    }
    if (local_78 == 0) goto LAB_14351a22d;
    uVar5 = local_78;
    if ((local_78 & 1) != 0) {
      local_78 = local_78 - 1;
      goto LAB_14351a22d;
    }
    break;
  case 0x100000d:
    puVar3 = (ulonglong *)
             FUN_14351d280(&local_70,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x330,param_1);
    uVar5 = *puVar3;
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      uVar8 = uVar5;
    }
    if (local_70 == 0) goto LAB_14351a22d;
    uVar5 = local_70;
    if ((local_70 & 1) != 0) {
      local_70 = local_70 - 1;
      goto LAB_14351a22d;
    }
    break;
  case 0x100000e:
    puVar3 = (ulonglong *)
             FUN_14351d280(&local_68,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x360,param_1);
    uVar5 = *puVar3;
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      uVar8 = uVar5;
    }
    if (local_68 == 0) goto LAB_14351a22d;
    uVar5 = local_68;
    if ((local_68 & 1) != 0) {
      local_68 = local_68 - 1;
      goto LAB_14351a22d;
    }
    break;
  default:
    return 1;
  case 0x1000011:
  case 0x1000012:
    if (uVar1 == 0x1000011) {
      lVar9 = *(longlong *)(lVar4 + 0x300) + 0x280;
    }
    else {
      lVar9 = *(longlong *)(lVar4 + 0x300) + 0x2a8;
    }
    goto LAB_143519a62;
  case 0x1000013:
    lVar9 = *(longlong *)(lVar4 + 0x300) + 0x310;
LAB_143519a62:
    FUN_14351d190(&local_res8,lVar4,lVar9,0,(ulonglong)uVar10 << 8);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    cVar2 = FUN_14351af40(param_1,local_res8,0);
    if ((cVar2 == '\0') && (param_3 != 0)) {
      *(ushort *)(param_3 + 0x88) = *(ushort *)(param_3 + 0x88) | 0x20;
    }
    bVar7 = ~(*(byte *)(local_res8 + 0x5c) >> 2) & 1;
    if ((local_res8 & 1) == 0) {
      if ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
        return bVar7;
      }
      return bVar7;
    }
    return bVar7;
  case 0x1000014:
    FUN_14351d190(&local_res8,lVar4,*(longlong *)(lVar4 + 0x300) + 0x318,0,(ulonglong)uVar10 << 8);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    cVar2 = FUN_14351af40(param_1,local_res8,0);
    if ((cVar2 == '\0') && (param_3 != 0)) {
      *(ushort *)(param_3 + 0x88) = *(ushort *)(param_3 + 0x88) | 0x20;
    }
    bVar7 = ~(*(byte *)(local_res8 + 0x5c) >> 2) & 1;
    if ((local_res8 & 1) == 0) {
      if ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
        return bVar7;
      }
      return bVar7;
    }
    return bVar7;
  case 0x1000023:
    puVar3 = (ulonglong *)
             FUN_14351d970(&local_60,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x388,param_1);
    uVar5 = *puVar3;
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      uVar8 = uVar5;
    }
    if (local_60 == 0) goto LAB_14351a22d;
    uVar5 = local_60;
    if ((local_60 & 1) != 0) {
      local_60 = local_60 - 1;
      goto LAB_14351a22d;
    }
    break;
  case 0x1000024:
    puVar3 = (ulonglong *)
             FUN_14351de40(&local_58,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x390,param_1);
    uVar5 = *puVar3;
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      uVar8 = uVar5;
    }
    if (local_58 == 0) goto LAB_14351a22d;
    uVar5 = local_58;
    if ((local_58 & 1) != 0) {
      local_58 = local_58 - 1;
      goto LAB_14351a22d;
    }
    break;
  case 0x1000025:
    puVar3 = (ulonglong *)
             FUN_14351df30(&local_50,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x390,param_1);
    uVar5 = *puVar3;
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      uVar8 = uVar5;
    }
    if (local_50 == 0) goto LAB_14351a22d;
    uVar5 = local_50;
    if ((local_50 & 1) != 0) {
      local_50 = local_50 - 1;
      goto LAB_14351a22d;
    }
    break;
  case 0x1000026:
    puVar3 = (ulonglong *)
             FUN_14351dd40(local_48,lVar4,param_2,*(longlong *)(lVar4 + 0x300) + 0x398,param_1);
    uVar5 = *puVar3;
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      uVar8 = uVar5;
    }
    if (local_48[0] == 0) goto LAB_14351a22d;
    uVar5 = local_48[0];
    if ((local_48[0] & 1) != 0) {
      local_48[0] = local_48[0] - 1;
      goto LAB_14351a22d;
    }
  }
LAB_14351a219:
  if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
    *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
LAB_14351a228:
    FUN_1434ef880(uVar5);
  }
LAB_14351a22d:
  FUN_14351abc0(param_1,uVar8,param_3);
  bVar7 = *(byte *)(uVar8 + 0x5c);
  if (((uVar8 & 1) == 0) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
    FUN_1434ef880(uVar8);
  }
  return ~(bVar7 >> 2) & 1;
}



// FUNCTION 14351a300 FUN_14351a300 body=78 status=ok
// SIG undefined FUN_14351a300(void)

byte FUN_14351a300(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_1434f0700(param_2 + 0x50,param_1);
  FUN_14351abc0(param_1,param_2,param_3);
  return ~(*(byte *)(param_2 + 0x5c) >> 2) & 1;
}



// FUNCTION 14351a360 FUN_14351a360 body=355 status=ok
// SIG undefined FUN_14351a360(void)

byte FUN_14351a360(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  byte bVar6;
  ulonglong local_res8;
  RefCountImpl *local_28 [2];
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (*(char *)(lVar1 + 0xb8) == '\0') {
      FUN_14351d190(&local_res8,lVar1,param_2,0,0);
      FUN_1434f0700(local_res8 + 0x50,param_3);
      FUN_1434f0700(local_res8 + 0x48,param_3);
      cVar4 = FUN_14351af40(param_1,local_res8,param_4);
      if ((cVar4 == '\0') && (param_5 != 0)) {
        *(ushort *)(param_5 + 0x88) = *(ushort *)(param_5 + 0x88) | 0x20;
      }
      bVar6 = ~(*(byte *)(local_res8 + 0x5c) >> 2) & 1;
      if (((local_res8 & 1) == 0) && ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      plVar5 = (longlong *)
               Scaleform::GFx::StateBag::GetLogState
                         (*(longlong *)(*(longlong *)(lVar1 + 0x300) + 0x10) + 0x10,local_28);
      lVar2 = *plVar5;
      if (local_28[0] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_28[0]);
      }
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)*param_2;
        plVar5 = (longlong *)
                 Scaleform::GFx::StateBag::GetLogState
                           (*(longlong *)(*(longlong *)(lVar1 + 0x300) + 0x10) + 0x10,local_28);
        lVar1 = *plVar5;
        if (local_28[0] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_28[0]);
        }
        FUN_1432f1560(lVar1 + 0x18,"Can\'t dispatch \'%s\' - exception is not cleared",uVar3);
      }
      bVar6 = 1;
    }
    return bVar6;
  }
  return 1;
}



// FUNCTION 14351a4d0 MayHaveEnterFrameHandler body=18 status=ok
// SIG undefined MayHaveEnterFrameHandler(void)

ushort Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::MayHaveEnterFrameHandler
                 (longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    return *(ushort *)(*(longlong *)(param_1 + 0x48) + 0x10) & 1;
  }
  return 0;
}



// FUNCTION 14351a4f0 FUN_14351a4f0 body=21 status=ok
// SIG undefined FUN_14351a4f0(void)

ushort FUN_14351a4f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    return *(ushort *)(*(longlong *)(param_1 + 0x48) + 0x10) >> 5 & 1;
  }
  return 0;
}



// FUNCTION 14351a510 FUN_14351a510 body=21 status=ok
// SIG undefined FUN_14351a510(void)

ushort FUN_14351a510(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    return *(ushort *)(*(longlong *)(param_1 + 0x48) + 0x10) >> 6 & 1;
  }
  return 0;
}



// FUNCTION 14351a530 FUN_14351a530 body=135 status=ok
// SIG undefined FUN_14351a530(void)

ulonglong FUN_14351a530(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong *in_RAX;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    if (param_3 == '\0') {
      plVar3 = plVar3 + 1;
    }
    lVar1 = *plVar3;
    plVar5 = (longlong *)0x0;
    plVar4 = plVar5;
    if ((lVar1 != 0) &&
       (lVar2 = FUN_1432ef240(plVar3,param_2,
                              (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(lVar1 + 8)),
       -1 < lVar2)) {
      plVar4 = (longlong *)(lVar1 + (lVar2 * 3 + 3) * 8);
    }
    in_RAX = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      in_RAX = plVar5;
    }
    if (((in_RAX != (longlong *)0x0) && (*in_RAX != 0)) && (*(longlong *)(*in_RAX + 8) != 0)) {
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14351a5c0 FUN_14351a5c0 body=31 status=ok
// SIG undefined FUN_14351a5c0(void)

undefined8 FUN_14351a5c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(char *)(lVar1 + 0x12) == '\0') && (*(char *)(lVar1 + 0x13) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 14351a5f0 FUN_14351a5f0 body=20 status=ok
// SIG undefined FUN_14351a5f0(void)

ushort FUN_14351a5f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    return *(ushort *)(*(longlong *)(param_1 + 0x48) + 0x10) >> 1 & 1;
  }
  return 0;
}



// FUNCTION 14351a610 FUN_14351a610 body=21 status=ok
// SIG undefined FUN_14351a610(void)

ushort FUN_14351a610(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    return *(ushort *)(*(longlong *)(param_1 + 0x48) + 0x10) >> 2 & 1;
  }
  return 0;
}



// FUNCTION 14351a630 FUN_14351a630 body=21 status=ok
// SIG undefined FUN_14351a630(void)

ushort FUN_14351a630(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    return *(ushort *)(*(longlong *)(param_1 + 0x48) + 0x10) >> 3 & 1;
  }
  return 0;
}



// FUNCTION 14351a650 FUN_14351a650 body=204 status=ok
// SIG undefined FUN_14351a650(void)

undefined8 FUN_14351a650(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  cVar2 = FUN_14351a530();
  if (cVar2 != '\0') {
    return 1;
  }
  if (((*(int *)(*(longlong *)(param_1 + 0x28) + 0x90) - 0x18U < 0xd) &&
      ((~(*(byte *)(*(longlong *)(param_1 + 0x28) + 0x88) >> 5) & 1) != 0)) &&
     (*(longlong *)(param_1 + 0x88) != 0)) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x38); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x38)) {
      lVar3 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))
                        (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
      if (lVar3 != 0) {
        lVar3 = lVar3 + -0x38;
      }
      uVar4 = *(ulonglong *)(lVar3 + 0x10);
      if (uVar4 == 0) {
        uVar4 = *(ulonglong *)(lVar3 + 8);
      }
      if ((uVar4 & 1) != 0) {
        uVar4 = uVar4 - 1;
      }
      if ((uVar4 != 0) && (cVar2 = FUN_14351a530(uVar4,param_2,param_3), cVar2 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14351a730 RemoveListenersForMovieDef body=60 status=ok
// SIG undefined RemoveListenersForMovieDef(void)

void Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::RemoveListenersForMovieDef
               (longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14351aa20();
    FUN_14351aa20(param_1,param_2,*(longlong *)(param_1 + 0x48) + 8);
  }
  return;
}



// FUNCTION 14351a780 FUN_14351a780 body=72 status=ok
// SIG undefined FUN_14351a780(void)

void FUN_14351a780(longlong param_1)

{
  int *piVar1;
  longlong local_res8 [4];
  
  local_res8[0] =
       FUN_143360a60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218));
  *(int *)(local_res8[0] + 0x18) = *(int *)(local_res8[0] + 0x18) + 1;
  FUN_14351a7d0(param_1,local_res8);
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14351a7d0 FUN_14351a7d0 body=577 status=ok
// SIG undefined FUN_14351a7d0(void)

void FUN_14351a7d0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong local_res8;
  uint local_38 [2];
  undefined8 local_30;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  uVar3 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x218),"ioError",7);
  *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
  FUN_14351d810(&local_res8,*(undefined8 *)(param_1 + 0x40),param_2);
  FUN_1434f0700(local_res8 + 0x50,param_1);
  plVar12 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
    plVar7 = plVar12;
    if (lVar6 != 0) {
      uVar8 = *(ulonglong *)(lVar6 + 8);
      uVar11 = *(uint *)(uVar3 + 0x1c) & uVar8;
      lVar2 = uVar11 * 3 + 2;
      puVar10 = (ulonglong *)(lVar6 + lVar2 * 8);
      if ((*(longlong *)(lVar6 + lVar2 * 8) != -2) &&
         (uVar9 = uVar11, (*(uint *)(puVar10[1] + 0x1c) & uVar8) == uVar11)) {
        while (((*(uint *)(puVar10[1] + 0x1c) & uVar8) != uVar11 || (puVar10[1] != uVar3))) {
          uVar9 = *puVar10;
          if (uVar9 == 0xffffffffffffffff) goto LAB_14351a8c1;
          puVar10 = (ulonglong *)(lVar6 + uVar9 * 0x18 + 0x10);
        }
        if (-1 < (longlong)uVar9) {
          plVar7 = (longlong *)(lVar6 + (uVar9 + 1) * 0x18);
        }
      }
    }
LAB_14351a8c1:
    plVar4 = plVar7 + 1;
    if (plVar7 == (longlong *)0x0) {
      plVar4 = plVar12;
    }
    if (((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) && (*(longlong *)(*plVar4 + 8) != 0)) {
      FUN_14351af40(param_1,local_res8,0);
      goto LAB_14351a9c3;
    }
  }
  if (((*(longlong *)(lVar5 + 0x108) != 0) &&
      (uVar8 = *(longlong *)(lVar5 + 0x108) - 1,
      lVar5 = (**(code **)(**(longlong **)
                             (*(longlong *)(*(longlong *)(lVar5 + 0x120) + (uVar8 >> 6) * 8) + 0x28
                             + (ulonglong)((uint)uVar8 & 0x3f) * 0xa0) + 0x38))(), lVar5 != 0)) &&
     (lVar5 = *(longlong *)(lVar5 + 0x150), lVar5 != 0)) {
    local_38[0] = 0;
    local_30 = 0;
    Scaleform::GFx::AS3::Value::PickUnsafe(local_38,local_res8);
    local_res8 = 0;
    uVar8 = *(ulonglong *)(lVar5 + 0x10 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4);
    if (uVar8 == 0) {
      uVar8 = *(ulonglong *)(lVar5 + 8 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4);
    }
    if ((uVar8 & 1) != 0) {
      uVar8 = uVar8 - 1;
    }
    lVar6 = FUN_1434f24f0(uVar8);
    FUN_14352a550(*(undefined8 *)(lVar6 + 0xa0),lVar5,lVar6,local_38);
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
  }
LAB_14351a9c3:
  if (local_res8 != 0) {
    if ((local_res8 & 1) == 0) {
      if ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_res8 = local_res8 - 1;
    }
  }
  piVar1 = (int *)(uVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(uVar3);
  }
  return;
}



// FUNCTION 14351aa20 FUN_14351aa20 body=410 status=ok
// SIG undefined FUN_14351aa20(void)

void FUN_14351aa20(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = *param_3;
  if (lVar8 == 0) {
    uVar6 = 0;
    param_3 = (longlong *)0x0;
  }
  else {
    uVar6 = 0;
    plVar4 = (longlong *)(lVar8 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar6 <= *(ulonglong *)(lVar8 + 8));
  }
  do {
    do {
      if (((param_3 == (longlong *)0x0) || (lVar8 = *param_3, lVar8 == 0)) ||
         (*(longlong *)(lVar8 + 8) < (longlong)uVar6)) {
        return;
      }
      uVar7 = 0;
      plVar4 = *(longlong **)(lVar8 + 0x20 + uVar6 * 0x18);
      if (plVar4[1] != 0) {
        lVar8 = 0;
        do {
          lVar2 = *plVar4;
          puVar5 = (uint *)(lVar8 + 8 + lVar2);
          if (((*puVar5 >> 9 & 1) == 0) || (*(longlong *)(*(longlong *)(puVar5 + 2) + 8) != 0)) {
            uVar1 = *puVar5 & 0x1f;
            if (uVar1 < 6) {
LAB_14351ab10:
              plVar3 = (longlong *)FUN_1435caba0(*(undefined8 *)(param_1 + 0x40));
              lVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
            }
            else if (uVar1 < 8) {
              lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x20 + lVar8) + 0x38))();
            }
            else {
              if (uVar1 != 0xe) goto LAB_14351ab10;
              lVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x20 + lVar8) + 0x28) +
                                  0x38))();
            }
            if ((lVar2 == 0) || (*(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x178) != param_2))
            goto LAB_14351ab44;
            FUN_1435341f0(plVar4,uVar7);
          }
          else {
LAB_14351ab44:
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 0x28;
          }
        } while (uVar7 < (ulonglong)plVar4[1]);
      }
      uVar7 = *(ulonglong *)(*param_3 + 8);
    } while (((longlong)uVar7 < (longlong)uVar6) || (uVar6 = uVar6 + 1, uVar7 < uVar6));
    plVar4 = (longlong *)(*param_3 + uVar6 * 0x18 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar6 <= uVar7);
  } while( true );
}



// FUNCTION 14351abc0 FUN_14351abc0 body=573 status=ok
// SIG undefined FUN_14351abc0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14351abc0(longlong *param_1,longlong param_2,RefCountNTSImpl *param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined8 local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 local_120 [31];
  ulonglong local_28;
  undefined8 *local_20;
  
  *(byte *)(param_2 + 0x5c) = *(byte *)(param_2 + 0x5c) | 0x20;
  if (param_3 == (RefCountNTSImpl *)0x0) {
    FUN_14351af40();
  }
  else {
    if (param_1 != (longlong *)0x0) {
      *(uint *)(param_1 + 1) = (int)param_1[1] + 1U & 0x8fffffff;
    }
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    lVar8 = 0x20;
    uVar6 = 0;
    local_138 = *(undefined8 *)(param_1[8] + 0x48);
    lVar4 = 4;
    local_130 = 0;
    local_128 = 0x20;
    puVar3 = local_120;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 8;
    } while (lVar4 != 0);
    local_20 = local_120;
    (**(code **)(*param_1 + 0xc0))(param_1,param_3,&local_138);
    *(undefined4 *)(param_2 + 0x58) = 1;
    uVar1 = local_130;
    do {
      uVar1 = uVar1 - 1;
      if ((longlong)uVar1 < 0) {
        *(undefined4 *)(param_2 + 0x58) = 2;
        cVar2 = FUN_14351af40(param_1,param_2,0);
        uVar1 = local_130;
        if (cVar2 == '\0') {
          *(ushort *)(param_3 + 0x88) = *(ushort *)(param_3 + 0x88) | 0x20;
        }
        else if ((((*(byte *)(param_2 + 0x5c) & 0x18) == 0) &&
                 ((*(byte *)(param_2 + 0x5c) & 1) != 0)) &&
                (*(undefined4 *)(param_2 + 0x58) = 3, local_130 != 0)) goto LAB_14351ad10;
        break;
      }
      cVar2 = FUN_14351af40(local_20[uVar1],param_2,1);
      if (cVar2 == '\0') {
        plVar5 = (longlong *)local_20[uVar1];
        goto LAB_14351ad47;
      }
    } while ((*(byte *)(param_2 + 0x5c) & 0x18) == 0);
LAB_14351ad50:
    FUN_143533dd0(&local_138);
    puVar7 = (ulonglong *)&local_20;
    do {
      uVar6 = puVar7[-1];
      puVar7 = puVar7 + -1;
      lVar8 = lVar8 + -1;
      if (uVar6 != 0) {
        if ((uVar6 & 1) == 0) {
          if ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar7 = uVar6 - 1;
        }
      }
    } while (lVar8 != 0);
    Scaleform::RefCountNTSImpl::Release(param_3);
    if ((((ulonglong)param_1 & 1) == 0) && ((*(uint *)(param_1 + 1) & 0x3fffff) != 0)) {
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) - 1;
      FUN_1434ef880(param_1);
      return;
    }
  }
  return;
LAB_14351ad10:
  cVar2 = FUN_14351af40(local_20[uVar6],param_2,0);
  if (cVar2 != '\0') goto code_r0x00014351ad2b;
  plVar5 = (longlong *)local_20[uVar6];
LAB_14351ad47:
  (**(code **)(*plVar5 + 200))();
  goto LAB_14351ad50;
code_r0x00014351ad2b:
  if (((*(byte *)(param_2 + 0x5c) & 0x18) != 0) || (uVar6 = uVar6 + 1, uVar1 <= uVar6))
  goto LAB_14351ad50;
  goto LAB_14351ad10;
}



// FUNCTION 14351ae10 FUN_14351ae10 body=142 status=ok
// SIG undefined FUN_14351ae10(void)

undefined8 FUN_14351ae10(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  
  *(undefined4 *)(param_2 + 0x58) = 1;
  lVar1 = *(longlong *)(param_3 + 8);
  while( true ) {
    lVar1 = lVar1 + -1;
    if (lVar1 < 0) {
      return 1;
    }
    cVar2 = FUN_14351af40(*(undefined8 *)(*(longlong *)(param_3 + 0x118) + lVar1 * 8),param_2,1);
    if (cVar2 == '\0') break;
    if ((*(byte *)(param_2 + 0x5c) & 0x18) != 0) {
      return 0;
    }
  }
  (**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x118) + lVar1 * 8) + 200))();
  return 0;
}


