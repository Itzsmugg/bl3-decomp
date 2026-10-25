// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143ad38a0 FUN_143ad38a0 body=210 status=ok
// SIG undefined FUN_143ad38a0(void)

undefined1 FUN_143ad38a0(void)

{
  ushort *in_R9;
  undefined1 local_18;
  
  if (((((*in_R9 < 0x14) || ((char)in_R9[2] != '\0')) || (*(char *)((longlong)in_R9 + 5) != '\0'))
      || (((char)in_R9[4] != 'C' || (*(char *)((longlong)in_R9 + 9) != 'v')))) ||
     (((char)in_R9[5] != 'A' ||
      ((*(char *)((longlong)in_R9 + 0xb) != 'l' || ((char)in_R9[6] != '\x03')))))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143ad3980 FUN_143ad3980 body=68 status=ok
// SIG undefined FUN_143ad3980(void)

ulonglong FUN_143ad3980(char *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  
  if (param_1 == (char *)0x0) {
    *param_2 = 1;
    uVar1 = (ulonglong)param_2 & 0xffffffffffffff00;
  }
  else {
    uVar1 = (ulonglong)(*param_1 != '\0');
  }
  return uVar1;
}



// FUNCTION 143ad39d0 FUN_143ad39d0 body=76 status=ok
// SIG undefined FUN_143ad39d0(void)

undefined8 FUN_143ad39d0(void)

{
  if (DAT_146bc7b80 != 0) {
    FUN_143ac56d0(DAT_146bc7b80);
    DAT_146bc7b80 = 0;
  }
  FUN_143a9a9f0(&DAT_146bc7b88);
  _guard_xfg_dispatch_icall_nop(&DAT_146bc7b90,0,0x70);
  return 1;
}



// FUNCTION 143ad3a20 FUN_143ad3a20 body=557 status=ok
// SIG undefined FUN_143ad3a20(void)

int FUN_143ad3a20(byte *param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  byte *local_res8;
  byte *local_res10;
  byte local_28;
  byte local_27;
  char local_22;
  byte local_21;
  byte local_20;
  char local_1f;
  
  bVar1 = false;
  bVar2 = false;
  local_res8 = param_1;
  local_res10 = param_2;
LAB_143ad3a38:
  do {
    local_28 = *local_res8;
    local_res8 = local_res8 + 1;
    if (local_28 != 0) {
      if ((char)local_28 < '\0') {
        local_20 = 0;
      }
      else {
        local_20 = (&DAT_145cf5d30)[local_28];
      }
      if (local_20 == 0) {
        bVar1 = false;
        goto LAB_143ad3a38;
      }
      if (local_20 == 1) {
        if (!bVar1) {
          if ((char)*local_res8 < '\0') {
            local_22 = '\0';
          }
          else {
            local_22 = (&DAT_145cf5d30)[*local_res8];
          }
          if ((local_22 == '\x01') || (local_22 == '\x02')) goto LAB_143ad3a38;
        }
      }
      else if (local_20 == 2) {
        bVar1 = true;
      }
      else {
        local_28 = local_20;
        bVar1 = false;
      }
    }
    while( true ) {
      local_27 = *local_res10;
      local_res10 = local_res10 + 1;
      if (local_27 == 0) break;
      if ((char)local_27 < '\0') {
        local_21 = 0;
      }
      else {
        local_21 = (&DAT_145cf5d30)[local_27];
      }
      if (local_21 == 0) {
        bVar2 = false;
      }
      else {
        if (local_21 != 1) {
          if (local_21 == 2) {
            bVar2 = true;
          }
          else {
            local_27 = local_21;
            bVar2 = false;
          }
          break;
        }
        if (bVar2) break;
        if ((char)*local_res10 < '\0') {
          local_1f = '\0';
        }
        else {
          local_1f = (&DAT_145cf5d30)[*local_res10];
        }
        if ((local_1f != '\x01') && (local_1f != '\x02')) break;
      }
    }
    if (local_28 == 0 && local_27 == 0) {
      return 0;
    }
    if ((uint)local_28 - (uint)local_27 != 0) {
      return (uint)local_28 - (uint)local_27;
    }
  } while( true );
}



// FUNCTION 143ad3c60 FUN_143ad3c60 body=42 status=ok
// SIG undefined FUN_143ad3c60(void)

undefined2 FUN_143ad3c60(undefined8 param_1)

{
  char cVar1;
  undefined2 uVar2;
  
  cVar1 = FUN_143ad3520(param_1);
  uVar2 = (undefined2)DAT_146bc7bd8;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143ad3c90 FUN_143ad3c90 body=258 status=ok
// SIG undefined FUN_143ad3c90(void)

longlong FUN_143ad3c90(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  int local_18;
  char *local_10;
  
  local_18 = 0;
  local_10 = param_1;
  while( true ) {
    if (1 < local_18) {
      return 0;
    }
    if (local_18 == 1) {
      if ((*local_10 != 'x') && (local_10[1] != '-')) {
        return 0;
      }
      local_10 = local_10 + 2;
    }
    cVar1 = FUN_143ad3520(param_3);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = FUN_143ad3980(local_10,param_3);
    if (cVar1 == '\0') break;
    uVar2 = FUN_143ad32e0(local_10,param_2,param_3);
    if (uVar2 < DAT_146bc7bd8) {
      return DAT_146bc7bc8 + (ulonglong)*(ushort *)(DAT_146bc7b90 + (ulonglong)uVar2 * 2) * 2;
    }
    local_18 = local_18 + 1;
  }
  return 0;
}



// FUNCTION 143ad3da0 FUN_143ad3da0 body=308 status=ok
// SIG undefined FUN_143ad3da0(void)

byte * FUN_143ad3da0(byte *param_1,byte *param_2)

{
  bool bVar1;
  byte *local_res10;
  byte local_28;
  byte local_24;
  char local_23;
  byte *local_18;
  
  bVar1 = false;
  local_res10 = param_2;
  local_18 = param_1;
  while( true ) {
    while( true ) {
      local_28 = *local_res10;
      local_res10 = local_res10 + 1;
      if (local_28 == 0) {
        *local_18 = 0;
        return param_1;
      }
      if ((char)local_28 < '\0') {
        local_24 = 0;
      }
      else {
        local_24 = (&DAT_145cf5d30)[local_28];
      }
      if (local_24 != 0) break;
      bVar1 = false;
    }
    if (local_24 != 1) break;
    if (bVar1) goto LAB_143ad3ea5;
    if ((char)*local_res10 < '\0') {
      local_23 = '\0';
    }
    else {
      local_23 = (&DAT_145cf5d30)[*local_res10];
    }
    if ((local_23 != '\x01') && (local_23 != '\x02')) {
LAB_143ad3ea5:
      *local_18 = local_28;
      local_18 = local_18 + 1;
    }
  }
  if (local_24 == 2) {
    bVar1 = true;
  }
  else {
    local_28 = local_24;
    bVar1 = false;
  }
  goto LAB_143ad3ea5;
}



// FUNCTION 143ad3ee0 FUN_143ad3ee0 body=57 status=ok
// SIG undefined FUN_143ad3ee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_143ad3ee0(void)

{
  _DAT_146bc7c00 = 0;
  _DAT_146bc7c08 = 0;
  _DAT_146bc7c10 = 0;
  _DAT_146bc7c20 = 0xffffffff;
  _DAT_146bc7c18 = 0;
  return 1;
}



// FUNCTION 143ad3f20 FUN_143ad3f20 body=206 status=ok
// SIG undefined FUN_143ad3f20(void)

uint FUN_143ad3f20(longlong param_1,uint param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  int local_28;
  
  if ((int)param_3 >> 0xd == -4) {
    for (local_28 = 0; local_28 < *(int *)(*(longlong *)(param_1 + 8) + 0xc);
        local_28 = local_28 + 1) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)local_28 * 4);
      uVar2 = uVar1 & 0x1fffff;
      if (param_2 == uVar2) {
        return *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 0x15) * 4) & 0x1fffff;
      }
      if ((int)param_2 < (int)uVar2) {
        return param_2;
      }
    }
  }
  else {
    param_2 = param_2 + ((int)param_3 >> 0xd);
  }
  return param_2;
}



// FUNCTION 143ad4000 FUN_143ad4000 body=29 status=ok
// SIG undefined FUN_143ad4000(void)

void FUN_143ad4000(undefined4 param_1)

{
  FUN_143ad41e0(&DAT_145cfb550,param_1);
  return;
}



// FUNCTION 143ad4020 FUN_143ad4020 body=29 status=ok
// SIG undefined FUN_143ad4020(void)

void FUN_143ad4020(undefined4 param_1)

{
  FUN_143ad45b0(&DAT_145cfb550,param_1);
  return;
}



// FUNCTION 143ad4040 FUN_143ad4040 body=29 status=ok
// SIG undefined FUN_143ad4040(void)

void FUN_143ad4040(undefined4 param_1)

{
  FUN_143ad4870(&DAT_145cfb550,param_1);
  return;
}



// FUNCTION 143ad4060 FUN_143ad4060 body=370 status=ok
// SIG undefined FUN_143ad4060(void)

void FUN_143ad4060(longlong param_1,undefined8 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char local_28;
  int local_24;
  int local_20;
  char *local_10;
  
  if (*param_3 < 1) {
    FUN_143ac2b60(param_1 + 0x20,0,FUN_143a9abd0,param_2);
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0xc);
    for (local_24 = 0; local_24 < iVar2; local_24 = local_24 + 1) {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)local_24 * 4) & 0x1fffff;
      (*(code *)param_2[2])(*param_2,uVar3,uVar3 + 1);
    }
    local_20 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x14);
    local_10 = *(char **)(param_1 + 0x18);
    local_28 = '\0';
    for (; local_20 < iVar2; local_20 = local_20 + 1) {
      cVar1 = *local_10;
      local_10 = local_10 + 1;
      if (cVar1 != local_28) {
        (*(code *)param_2[1])(*param_2,local_20);
        local_28 = cVar1;
      }
    }
    if (local_28 != '\0') {
      (*(code *)param_2[1])(*param_2,iVar2);
    }
  }
  return;
}



// FUNCTION 143ad41e0 FUN_143ad41e0 body=334 status=ok
// SIG undefined FUN_143ad41e0(void)

ushort FUN_143ad41e0(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_14 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_24 + uVar1) * 2) * 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(param_1 + 0x4c)) {
          local_20 = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)(param_1 + 0x20) +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)(param_1 + 0x20) +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = *(int *)(param_1 + 0x50);
        }
        local_1c = local_20;
      }
      else {
        local_1c = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  return *(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 2) & 0x1f;
}



// FUNCTION 143ad4330 FUN_143ad4330 body=116 status=ok
// SIG undefined FUN_143ad4330(void)

undefined1 FUN_143ad4330(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  if ((param_2 < iVar1) || (*(int *)(*(longlong *)(param_1 + 8) + 0x14) <= param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + (longlong)(param_2 - iVar1));
  }
  return uVar2;
}



// FUNCTION 143ad43b0 FUN_143ad43b0 body=339 status=ok
// SIG undefined FUN_143ad43b0(void)

int FUN_143ad43b0(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_14 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_24 + uVar1) * 2) * 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(param_1 + 0x4c)) {
          local_20 = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)(param_1 + 0x20) +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)(param_1 + 0x20) +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = *(int *)(param_1 + 0x50);
        }
        local_1c = local_20;
      }
      else {
        local_1c = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  return (int)(*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 2) & 0xe0) >> 5;
}



// FUNCTION 143ad4510 FUN_143ad4510 body=159 status=ok
// SIG undefined FUN_143ad4510(void)

uint FUN_143ad4510(longlong param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0x3c);
    if (param_2 == 0x1000) {
      uVar1 = uVar1 & 0x1f;
    }
    else if (param_2 == 0x1006) {
      uVar1 = (int)(uVar1 & 0xff0000) >> 0x10;
    }
    else if (param_2 == 0x1007) {
      uVar1 = (int)(uVar1 & 0xe0) >> 5;
    }
    else if (param_2 == 0x1015) {
      uVar1 = (int)(uVar1 & 0x300) >> 8;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



// FUNCTION 143ad45b0 FUN_143ad45b0 body=348 status=ok
// SIG undefined FUN_143ad45b0(void)

void FUN_143ad45b0(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_14 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_24 + uVar1) * 2) * 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(param_1 + 0x4c)) {
          local_20 = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)(param_1 + 0x20) +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)(param_1 + 0x20) +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = *(int *)(param_1 + 0x50);
        }
        local_1c = local_20;
      }
      else {
        local_1c = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  FUN_143ad3f20(param_1,param_2,
                *(undefined2 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 2));
  return;
}



// FUNCTION 143ad4710 FUN_143ad4710 body=339 status=ok
// SIG undefined FUN_143ad4710(void)

int FUN_143ad4710(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_14 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_24 + uVar1) * 2) * 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(param_1 + 0x4c)) {
          local_20 = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)(param_1 + 0x20) +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)(param_1 + 0x20) +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = *(int *)(param_1 + 0x50);
        }
        local_1c = local_20;
      }
      else {
        local_1c = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  return (int)(*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 2) & 0x300) >> 8;
}



// FUNCTION 143ad4870 FUN_143ad4870 body=368 status=ok
// SIG undefined FUN_143ad4870(void)

ulonglong FUN_143ad4870(longlong param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_14 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar2 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_24 + uVar2) * 2) * 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(param_1 + 0x4c)) {
          local_20 = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)(param_1 + 0x20) +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)(param_1 + 0x20) +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar2 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = *(int *)(param_1 + 0x50);
        }
        local_1c = local_20;
      }
      else {
        local_1c = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 2);
  if ((uVar1 & 0x300) == 0) {
    uVar3 = (ulonglong)param_2;
  }
  else {
    uVar3 = FUN_143ad3f20(param_1,param_2,uVar1);
  }
  return uVar3;
}



// FUNCTION 143ad49f0 FUN_143ad49f0 body=8 status=ok
// SIG undefined FUN_143ad49f0(void)

undefined * FUN_143ad49f0(void)

{
  return &DAT_145cfb550;
}



// FUNCTION 143ad4a00 FUN_143ad4a00 body=337 status=ok
// SIG undefined FUN_143ad4a00(void)

uint FUN_143ad4a00(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_14 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_24 + uVar1) * 2) * 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(param_1 + 0x4c)) {
          local_20 = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)(param_1 + 0x20) +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)(param_1 + 0x20) +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = *(int *)(param_1 + 0x50);
        }
        local_1c = local_20;
      }
      else {
        local_1c = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  return (int)(uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 2) >> 0xb & 1;
}



// FUNCTION 143ad4b60 FUN_143ad4b60 body=337 status=ok
// SIG undefined FUN_143ad4b60(void)

uint FUN_143ad4b60(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_14 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_24 + uVar1) * 2) * 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(param_1 + 0x4c)) {
          local_20 = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)(param_1 + 0x20) +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)(param_1 + 0x20) +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = *(int *)(param_1 + 0x50);
        }
        local_1c = local_20;
      }
      else {
        local_1c = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  return (int)(uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 2) >> 10 & 1;
}



// FUNCTION 143ad4cc0 FUN_143ad4cc0 body=337 status=ok
// SIG undefined FUN_143ad4cc0(void)

uint FUN_143ad4cc0(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_14 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_24 + uVar1) * 2) * 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(param_1 + 0x4c)) {
          local_20 = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)(param_1 + 0x20) +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)(param_1 + 0x20) +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = *(int *)(param_1 + 0x50);
        }
        local_1c = local_20;
      }
      else {
        local_1c = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  return (int)(uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 2) >> 0xc & 1;
}



// FUNCTION 143ad4e20 FUN_143ad4e20 body=1412 status=ok
// SIG undefined FUN_143ad4e20(void)

int FUN_143ad4e20(ushort *param_1,int param_2,ushort *param_3,int param_4,ushort param_5,
                 undefined4 *param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *local_res8;
  int local_res10;
  ushort *local_res18;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  
  local_res8 = param_1;
  local_res18 = param_3;
  if ((param_5 & 10) == 0) {
    local_1c = param_2;
    if (param_4 < param_2) {
      *param_6 = 0xf;
    }
    else {
      do {
        *local_res18 = *local_res8;
        local_res18 = local_res18 + 1;
        local_res8 = local_res8 + 1;
        local_1c = local_1c + -1;
      } while (0 < local_1c);
    }
  }
  else if ((param_5 & 10) == 2) {
    local_30 = 0;
    local_34 = 0;
    if (param_4 < param_2) {
      *param_6 = 0xf;
    }
    else {
      do {
        local_38 = (uint)param_1[local_30];
        iVar2 = local_30 + 1;
        if ((((local_38 & 0xfffffc00) == 0xd800) && (iVar2 != param_2)) &&
           ((param_1[iVar2] & 0xfc00) == 0xdc00)) {
          local_38 = local_38 * 0x400 + -0x35fdc00 + (uint)param_1[iVar2];
          iVar2 = local_30 + 2;
        }
        local_30 = iVar2;
        uVar3 = FUN_143ad4020(local_38);
        local_38._0_2_ = (ushort)uVar3;
        if (uVar3 < 0x10000) {
          param_3[local_34] = (ushort)local_38;
          local_34 = local_34 + 1;
        }
        else {
          param_3[local_34] = (short)((int)uVar3 >> 10) + 0xd7c0;
          param_3[local_34 + 1] = (ushort)local_38 & 0x3ff | 0xdc00;
          local_34 = local_34 + 2;
        }
      } while (local_30 < param_2);
    }
  }
  else {
    local_res10 = param_2;
    local_2c = param_4;
    if ((param_5 & 10) == 8) {
      do {
        uVar1 = *local_res8;
        local_res8 = local_res8 + 1;
        if ((((uVar1 & 0xfffc) != 0x200c) && (4 < uVar1 - 0x202a)) && (3 < uVar1 - 0x2066)) {
          local_2c = local_2c + -1;
          if (local_2c < 0) {
            *param_6 = 0xf;
            while (local_res10 = local_res10 + -1, 0 < local_res10) {
              uVar1 = *local_res8;
              local_res8 = local_res8 + 1;
              if ((((uVar1 & 0xfffc) != 0x200c) && (4 < uVar1 - 0x202a)) && (3 < uVar1 - 0x2066)) {
                local_2c = local_2c + -1;
              }
            }
            return param_4 - local_2c;
          }
          *local_res18 = uVar1;
          local_res18 = local_res18 + 1;
        }
        local_res10 = local_res10 + -1;
      } while (0 < local_res10);
      param_2 = param_4 - local_2c;
    }
    else {
      local_3c = 0;
      local_28 = param_4;
      do {
        local_44 = (uint)*local_res8;
        local_40 = 1;
        iVar2 = 1;
        if ((((local_44 & 0xfffffc00) == 0xd800) && (iVar2 = local_40, local_res10 != 1)) &&
           ((local_res8[1] & 0xfc00) == 0xdc00)) {
          local_44 = local_44 * 0x400 + -0x35fdc00 + (uint)local_res8[1];
          iVar2 = 2;
        }
        local_40 = iVar2;
        local_res8 = local_res8 + local_40;
        local_res10 = local_res10 - local_40;
        if ((((local_44 & 0xfffffffc) != 0x200c) && (4 < local_44 - 0x202a)) &&
           (3 < local_44 - 0x2066)) {
          local_28 = local_28 - local_40;
          if (local_28 < 0) {
            *param_6 = 0xf;
            for (; 0 < local_res10; local_res10 = local_res10 + -1) {
              uVar3 = (uint)*local_res8;
              local_res8 = local_res8 + 1;
              if ((((uVar3 & 0xfffffffc) != 0x200c) && (4 < uVar3 - 0x202a)) && (3 < uVar3 - 0x2066)
                 ) {
                local_28 = local_28 + -1;
              }
            }
            return param_4 - local_28;
          }
          uVar3 = FUN_143ad4020(local_44);
          local_44._0_2_ = (ushort)uVar3;
          if (uVar3 < 0x10000) {
            param_3[local_3c] = (ushort)local_44;
            local_3c = local_3c + 1;
          }
          else {
            param_3[local_3c] = (short)((int)uVar3 >> 10) + 0xd7c0;
            param_3[local_3c + 1] = (ushort)local_44 & 0x3ff | 0xdc00;
            local_3c = local_3c + 2;
          }
        }
        param_2 = local_3c;
      } while (0 < local_res10);
    }
  }
  return param_2;
}



// FUNCTION 143ad53b0 FUN_143ad53b0 body=1452 status=ok
// SIG undefined FUN_143ad53b0(void)

int FUN_143ad53b0(ushort *param_1,int param_2,ushort *param_3,int param_4,ushort param_5,
                 undefined4 *param_6)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *local_res8;
  int local_res10;
  ushort *local_res18;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_30 = param_2;
  if ((param_5 & 0xb) == 0) {
    if (param_4 < param_2) {
      *param_6 = 0xf;
    }
    else {
      do {
        iVar3 = local_res10;
        iVar4 = local_res10 + -1;
        if ((((param_1[iVar4] & 0xfc00) == 0xdc00) && (0 < iVar4)) &&
           ((param_1[local_res10 + -2] & 0xfc00) == 0xd800)) {
          iVar4 = local_res10 + -2;
        }
        local_res10 = iVar4;
        local_34 = local_res10;
        do {
          *local_res18 = param_1[local_34];
          local_res18 = local_res18 + 1;
          local_34 = local_34 + 1;
        } while (local_34 < iVar3);
      } while (0 < local_res10);
    }
  }
  else if ((param_5 & 0xb) == 1) {
    if (param_4 < param_2) {
      *param_6 = 0xf;
    }
    else {
      do {
        do {
          iVar3 = local_res10 + -1;
          local_38 = (uint)param_1[iVar3];
          if ((((local_38 & 0xfffffc00) == 0xdc00) && (0 < iVar3)) &&
             ((param_1[local_res10 + -2] & 0xfc00) == 0xd800)) {
            local_38 = (uint)param_1[local_res10 + -2] * 0x400 + -0x35fdc00 + local_38;
            iVar3 = local_res10 + -2;
          }
          local_res10 = iVar3;
        } while ((0 < local_res10) &&
                (bVar2 = FUN_143a9db60(local_38), (1 << (bVar2 & 0x1f) & 0x1c0U) != 0));
        local_34 = local_res10;
        do {
          *local_res18 = param_1[local_34];
          local_res18 = local_res18 + 1;
          local_34 = local_34 + 1;
        } while (local_34 < param_2);
        param_2 = local_res10;
      } while (0 < local_res10);
    }
  }
  else {
    local_res8 = param_1;
    if ((param_5 & 8) != 0) {
      local_30 = 0;
      local_18 = param_2;
      do {
        uVar1 = *local_res8;
        local_res8 = local_res8 + 1;
        if ((((uVar1 & 0xfffc) != 0x200c) && (4 < uVar1 - 0x202a)) && (3 < uVar1 - 0x2066)) {
          local_30 = local_30 + 1;
        }
        local_18 = local_18 + -1;
      } while (0 < local_18);
      local_res8 = local_res8 + -(longlong)param_2;
    }
    if (param_4 < local_30) {
      *param_6 = 0xf;
    }
    else {
      do {
        iVar3 = local_res10;
        iVar4 = local_res10 + -1;
        local_38 = (uint)local_res8[iVar4];
        if ((((local_38 & 0xfffffc00) == 0xdc00) && (0 < iVar4)) &&
           ((local_res8[local_res10 + -2] & 0xfc00) == 0xd800)) {
          local_38 = (uint)local_res8[local_res10 + -2] * 0x400 + -0x35fdc00 + local_38;
          iVar4 = local_res10 + -2;
        }
        local_res10 = iVar4;
        iVar4 = local_res10;
        if ((param_5 & 1) != 0) {
          while ((local_res10 = iVar4, 0 < local_res10 &&
                 (bVar2 = FUN_143a9db60(local_38), (1 << (bVar2 & 0x1f) & 0x1c0U) != 0))) {
            iVar4 = local_res10 + -1;
            local_38 = (uint)local_res8[iVar4];
            if (((local_38 & 0xfffffc00) == 0xdc00) &&
               ((0 < iVar4 && ((local_res8[local_res10 + -2] & 0xfc00) == 0xd800)))) {
              local_38 = (uint)local_res8[local_res10 + -2] * 0x400 + -0x35fdc00 + local_38;
              iVar4 = local_res10 + -2;
            }
          }
        }
        if (((param_5 & 8) == 0) ||
           ((((local_38 & 0xfffffffc) != 0x200c && (4 < local_38 - 0x202a)) &&
            (3 < local_38 - 0x2066)))) {
          local_34 = local_res10;
          if ((param_5 & 2) != 0) {
            uVar5 = FUN_143ad4020(local_38);
            local_38._0_2_ = (ushort)uVar5;
            if (uVar5 < 0x10000) {
              *local_res18 = (ushort)local_38;
              local_2c = 1;
            }
            else {
              *local_res18 = (short)((int)uVar5 >> 10) + 0xd7c0;
              local_res18[1] = (ushort)local_38 & 0x3ff | 0xdc00;
              local_2c = 2;
            }
            local_res18 = local_res18 + local_2c;
            local_34 = local_res10 + local_2c;
          }
          for (; local_34 < iVar3; local_34 = local_34 + 1) {
            *local_res18 = local_res8[local_34];
            local_res18 = local_res18 + 1;
          }
        }
      } while (0 < local_res10);
    }
  }
  return local_30;
}



// FUNCTION 143ad5960 FUN_143ad5960 body=3205 status=ok
// SIG undefined FUN_143ad5960(void)

undefined8 FUN_143ad5960(longlong param_1,short *param_2,int param_3,ushort param_4,int *param_5)

{
  int iVar1;
  undefined8 uVar2;
  short *local_res10;
  int local_res18;
  ushort local_res20;
  short local_78;
  int local_74;
  int local_70;
  uint local_6c;
  int local_68 [2];
  short *local_60;
  int local_58;
  int local_54;
  int local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  short *local_20;
  short *local_18;
  short *local_10;
  
  if ((param_5 == (int *)0x0) || (0 < *param_5)) {
    uVar2 = 0;
  }
  else if (((((param_1 == 0) || (local_60 = *(short **)(param_1 + 0x10), local_60 == (short *)0x0))
            || (local_54 = *(int *)(param_1 + 0x1c), local_54 < 0)) || (param_3 < 0)) ||
          ((0 < param_3 && (param_2 == (short *)0x0)))) {
    *param_5 = 1;
    uVar2 = 0;
  }
  else if ((param_2 == (short *)0x0) ||
          (((local_60 < param_2 || (param_2 + param_3 <= local_60)) &&
           ((param_2 < local_60 || (local_60 + *(int *)(param_1 + 0x18) <= param_2)))))) {
    if (local_54 == 0) {
      uVar2 = FUN_143ab4a70(param_2,param_3,0,param_5);
    }
    else {
      local_58 = FUN_143aae710(param_1,param_5);
      if (*param_5 < 1) {
        local_res20 = param_4;
        if ((*(uint *)(param_1 + 0x90) & 1) != 0) {
          local_res20 = param_4 & 0xfff7 | 4;
        }
        if ((*(uint *)(param_1 + 0x90) & 2) != 0) {
          local_res20 = local_res20 & 0xfffb | 8;
        }
        if ((((*(int *)(param_1 + 0x8c) != 4) && (*(int *)(param_1 + 0x8c) != 5)) &&
            (*(int *)(param_1 + 0x8c) != 6)) && (*(int *)(param_1 + 0x8c) != 3)) {
          local_res20 = local_res20 & 0xfffb;
        }
        local_res10 = param_2;
        local_res18 = param_3;
        local_50 = param_3;
        local_10 = param_2;
        if ((local_res20 & 0x10) == 0) {
          if ((local_res20 & 4) == 0) {
            for (local_70 = 0; local_70 < local_58; local_70 = local_70 + 1) {
              iVar1 = FUN_143aaf600(param_1,local_70,local_68,&local_74);
              if (iVar1 == 0) {
                local_74 = FUN_143ad4e20(local_60 + local_68[0],local_74,local_res10,local_res18,
                                         local_res20 & 0xfffd,param_5);
              }
              else {
                local_74 = FUN_143ad53b0(local_60 + local_68[0],local_74,local_res10,local_res18,
                                         local_res20,param_5);
              }
              if (local_res10 != (short *)0x0) {
                local_res10 = local_res10 + local_74;
              }
              local_res18 = local_res18 - local_74;
            }
          }
          else {
            local_40 = *(longlong *)(param_1 + 0x78);
            for (local_70 = 0; local_70 < local_58; local_70 = local_70 + 1) {
              local_24 = FUN_143aaf600(param_1,local_70,local_68,&local_74);
              local_20 = local_60 + local_68[0];
              local_6c = *(uint *)(*(longlong *)(param_1 + 0x138) + 8 + (longlong)local_70 * 0xc);
              if ((int)local_6c < 0) {
                local_6c = 0;
              }
              if (local_24 == 0) {
                if ((*(char *)(param_1 + 0x88) != '\0') &&
                   (*(char *)(local_40 + local_68[0]) != '\0')) {
                  local_6c = local_6c | 1;
                }
                if ((local_6c & 1) == 0) {
                  if ((local_6c & 4) == 0) {
                    local_78 = 0;
                  }
                  else {
                    local_78 = 0x200f;
                  }
                }
                else {
                  local_78 = 0x200e;
                }
                if (local_78 != 0) {
                  if (0 < local_res18) {
                    *local_res10 = local_78;
                    local_res10 = local_res10 + 1;
                  }
                  local_res18 = local_res18 + -1;
                }
                local_74 = FUN_143ad4e20(local_20,local_74,local_res10,local_res18,
                                         local_res20 & 0xfffd,param_5);
                if (local_res10 != (short *)0x0) {
                  local_res10 = local_res10 + local_74;
                }
                local_res18 = local_res18 - local_74;
                if ((*(char *)(param_1 + 0x88) != '\0') &&
                   (*(char *)(local_40 + (local_68[0] + -1 + local_74)) != '\0')) {
                  local_6c = local_6c | 2;
                }
                if ((local_6c & 2) == 0) {
                  if ((local_6c & 8) == 0) {
                    local_78 = 0;
                  }
                  else {
                    local_78 = 0x200f;
                  }
                }
                else {
                  local_78 = 0x200e;
                }
                if (local_78 != 0) {
                  if (0 < local_res18) {
                    *local_res10 = local_78;
                    local_res10 = local_res10 + 1;
                  }
                  local_res18 = local_res18 + -1;
                }
              }
              else {
                if ((*(char *)(param_1 + 0x88) != '\0') &&
                   (local_38 = 1,
                   (1 << (*(byte *)(local_40 + (local_68[0] + -1 + local_74)) & 0x1f) & 0x2002U) ==
                   0)) {
                  local_6c = local_6c | 4;
                }
                if ((local_6c & 1) == 0) {
                  if ((local_6c & 4) == 0) {
                    local_78 = 0;
                  }
                  else {
                    local_78 = 0x200f;
                  }
                }
                else {
                  local_78 = 0x200e;
                }
                if (local_78 != 0) {
                  if (0 < local_res18) {
                    *local_res10 = local_78;
                    local_res10 = local_res10 + 1;
                  }
                  local_res18 = local_res18 + -1;
                }
                local_74 = FUN_143ad53b0(local_20,local_74,local_res10,local_res18,local_res20,
                                         param_5);
                if (local_res10 != (short *)0x0) {
                  local_res10 = local_res10 + local_74;
                }
                local_res18 = local_res18 - local_74;
                if ((*(char *)(param_1 + 0x88) != '\0') &&
                   (local_34 = 1, (1 << (*(byte *)(local_40 + local_68[0]) & 0x1f) & 0x2002U) == 0))
                {
                  local_6c = local_6c | 8;
                }
                if ((local_6c & 2) == 0) {
                  if ((local_6c & 8) == 0) {
                    local_78 = 0;
                  }
                  else {
                    local_78 = 0x200f;
                  }
                }
                else {
                  local_78 = 0x200e;
                }
                if (local_78 != 0) {
                  if (0 < local_res18) {
                    *local_res10 = local_78;
                    local_res10 = local_res10 + 1;
                  }
                  local_res18 = local_res18 + -1;
                }
              }
            }
          }
        }
        else {
          local_70 = local_58;
          if ((local_res20 & 4) == 0) {
            while (local_70 = local_70 + -1, -1 < local_70) {
              iVar1 = FUN_143aaf600(param_1,local_70,local_68,&local_74);
              if (iVar1 == 0) {
                local_74 = FUN_143ad53b0(local_60 + local_68[0],local_74,local_res10,local_res18,
                                         local_res20 & 0xfffd,param_5);
              }
              else {
                local_74 = FUN_143ad4e20(local_60 + local_68[0],local_74,local_res10,local_res18,
                                         local_res20,param_5);
              }
              if (local_res10 != (short *)0x0) {
                local_res10 = local_res10 + local_74;
              }
              local_res18 = local_res18 - local_74;
            }
          }
          else {
            local_48 = *(longlong *)(param_1 + 0x78);
            while (local_70 = local_70 + -1, -1 < local_70) {
              local_30 = FUN_143aaf600(param_1,local_70,local_68,&local_74);
              local_18 = local_60 + local_68[0];
              if (local_30 == 0) {
                if (*(char *)(local_48 + (local_68[0] + -1 + local_74)) != '\0') {
                  if (0 < local_res18) {
                    *local_res10 = 0x200e;
                    local_res10 = local_res10 + 1;
                  }
                  local_res18 = local_res18 + -1;
                }
                local_74 = FUN_143ad53b0(local_18,local_74,local_res10,local_res18,
                                         local_res20 & 0xfffd,param_5);
                if (local_res10 != (short *)0x0) {
                  local_res10 = local_res10 + local_74;
                }
                local_res18 = local_res18 - local_74;
                if (*(char *)(local_48 + local_68[0]) != '\0') {
                  if (0 < local_res18) {
                    *local_res10 = 0x200e;
                    local_res10 = local_res10 + 1;
                  }
                  local_res18 = local_res18 + -1;
                }
              }
              else {
                local_28 = 1;
                if ((1 << (*(byte *)(local_48 + local_68[0]) & 0x1f) & 0x2002U) == 0) {
                  if (0 < local_res18) {
                    *local_res10 = 0x200f;
                    local_res10 = local_res10 + 1;
                  }
                  local_res18 = local_res18 + -1;
                }
                local_74 = FUN_143ad4e20(local_18,local_74,local_res10,local_res18,local_res20,
                                         param_5);
                if (local_res10 != (short *)0x0) {
                  local_res10 = local_res10 + local_74;
                }
                local_res18 = local_res18 - local_74;
                local_2c = 1;
                if ((1 << (*(byte *)(local_48 + (local_68[0] + -1 + local_74)) & 0x1f) & 0x2002U) ==
                    0) {
                  if (0 < local_res18) {
                    *local_res10 = 0x200f;
                    local_res10 = local_res10 + 1;
                  }
                  local_res18 = local_res18 + -1;
                }
              }
            }
          }
        }
        uVar2 = FUN_143ab4a70(local_10,local_50,local_50 - local_res18,param_5);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    *param_5 = 1;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143ad65f0 FUN_143ad65f0 body=92 status=ok
// SIG undefined FUN_143ad65f0(void)

void FUN_143ad65f0(char *param_1,undefined8 param_2)

{
  int in_stack_00000030;
  undefined4 *in_stack_00000038;
  
  if ((in_stack_00000030 < 3) &&
     ((param_1 == (char *)0x0 || ((*param_1 == 'i' && (in_stack_00000030 == 0)))))) {
    *in_stack_00000038 = 0;
    FUN_143b0cb40(param_2,0,in_stack_00000038);
  }
  return;
}



// FUNCTION 143ad6650 FUN_143ad6650 body=92 status=ok
// SIG undefined FUN_143ad6650(void)

void FUN_143ad6650(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined4 *param_6)

{
  if ((param_5 < 3) && ((param_1 == (char *)0x0 || ((*param_1 == 'i' && (param_5 == 0)))))) {
    *param_6 = 0;
    FUN_143b0ce80(param_2,0,param_6);
  }
  return;
}



// FUNCTION 143ad66b0 FUN_143ad66b0 body=145 status=ok
// SIG undefined FUN_143ad66b0(void)

void FUN_143ad66b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x3a) != '\0') {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_143abdb30(*(undefined8 *)(param_1 + 0x120));
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x110));
  }
  return;
}



// FUNCTION 143ad6750 FUN_143ad6750 body=745 status=ok
// SIG undefined FUN_143ad6750(void)

void FUN_143ad6750(longlong param_1,longlong param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  char local_28;
  
  if (*(char *)(param_2 + 8) == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x30);
    cVar1 = *(char *)(lVar2 + 0x104);
    if (cVar1 == -0x25) {
      uVar5 = *(uint *)(param_2 + 0xc) & 0xffffffef;
      *(uint *)(param_2 + 0xc) = uVar5;
      *(uint *)(param_1 + 0x38) = uVar5;
    }
    if ((*(uint *)(param_2 + 0xc) & 0x10) != 0) {
      FUN_143ab2410(0);
      lVar3 = *(longlong *)(lVar2 + 0x48);
      FUN_143ab2470(0);
      if ((lVar3 == 0) &&
         (cVar4 = FUN_143adcbd0(*(undefined8 *)(param_1 + 0x30),param_3), cVar4 == '\0')) {
        if (0 < *param_3) {
          return;
        }
        uVar5 = *(uint *)(param_2 + 0xc) & 0xffffffef;
        *(uint *)(param_2 + 0xc) = uVar5;
        *(uint *)(param_1 + 0x38) = uVar5;
      }
    }
    pcVar6 = strstr(*(char **)(param_2 + 0x18),"18030");
    if (pcVar6 == (char *)0x0) {
      pcVar6 = strstr(*(char **)(param_2 + 0x18),"KEIS");
      if ((pcVar6 == (char *)0x0) &&
         (pcVar6 = strstr(*(char **)(param_2 + 0x18),"keis"), pcVar6 == (char *)0x0)) {
        pcVar6 = strstr(*(char **)(param_2 + 0x18),"JEF");
        if ((pcVar6 == (char *)0x0) &&
           (pcVar6 = strstr(*(char **)(param_2 + 0x18),"jef"), pcVar6 == (char *)0x0)) {
          pcVar6 = strstr(*(char **)(param_2 + 0x18),"JIPS");
          if ((pcVar6 != (char *)0x0) ||
             (pcVar6 = strstr(*(char **)(param_2 + 0x18),"jips"), pcVar6 != (char *)0x0)) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x4000;
          }
        }
        else {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x2000;
        }
      }
      else {
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x1000;
      }
    }
    else {
      pcVar6 = strstr(*(char **)(param_2 + 0x18),"gb18030");
      if ((pcVar6 != (char *)0x0) ||
         (pcVar6 = strstr(*(char **)(param_2 + 0x18),"GB18030"), pcVar6 != (char *)0x0)) {
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x8000;
      }
    }
    if (cVar1 == '\f') {
      *(undefined1 *)(param_1 + 0x58) = 3;
    }
    if (*(longlong *)(lVar2 + 0x128) != 0) {
      local_28 = (char)*(undefined4 *)(*(longlong *)(lVar2 + 0x128) + 0x44);
      if (cVar1 == '\f') {
        local_28 = local_28 + '\x01';
      }
      if (*(char *)(param_1 + 0x58) < local_28) {
        *(char *)(param_1 + 0x58) = local_28;
      }
    }
  }
  return;
}



// FUNCTION 143ad6a40 FUN_143ad6a40 body=75 status=ok
// SIG undefined FUN_143ad6a40(void)

longlong FUN_143ad6a40(longlong param_1)

{
  longlong lVar1;
  
  if (((*(uint *)(param_1 + 0x38) & 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x118) == 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) + 4;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x118);
  }
  return lVar1;
}



// FUNCTION 143ad6a90 FUN_143ad6a90 body=6440 status=ok
// SIG undefined FUN_143ad6a90(void)

void FUN_143ad6a90(longlong param_1,int *param_2)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint local_d8;
  int local_d4;
  uint local_d0;
  byte local_c8;
  byte local_c7;
  byte local_c4;
  byte *local_c0;
  byte local_b8;
  char local_b7;
  int local_b4;
  int *local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  longlong local_a0;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  byte *local_88;
  longlong local_80;
  ushort *local_78;
  ushort local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  byte *local_50;
  int local_44;
  uint local_40;
  uint local_3c;
  ushort *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  longlong local_20;
  uint local_18;
  longlong local_10;
  byte bVar4;
  
  local_c8 = 0;
  local_c7 = 0;
  local_a8 = 0;
  local_a7 = 0;
  local_d4 = 0;
  local_a0 = *(longlong *)(param_1 + 8);
  if ((*(int *)(local_a0 + 0xd0) < 0) ||
     ((FUN_143b0e6d0(local_a0,param_1,0xffffffff,param_2), *param_2 < 1 &&
      (-1 < *(char *)(local_a0 + 0x119))))) {
    local_c4 = *(byte *)(*(longlong *)(local_a0 + 0x30) + 0x104);
    local_b8 = *(byte *)(*(longlong *)(local_a0 + 0x30) + 0x105);
    if ((local_c4 == 0) && ((local_b8 & 2) == 0)) {
      if ((local_b8 & 1) == 0) {
        FUN_143adfa80(param_1,param_2);
      }
      else {
        FUN_143ae0150(param_1,param_2);
      }
    }
    else if ((local_c4 == 1) && (*(char *)(*(longlong *)(local_a0 + 0x30) + 0x106) != '\0')) {
      FUN_143ade300(param_1,param_2);
    }
    else {
      local_78 = *(ushort **)(param_1 + 0x10);
      local_38 = *(ushort **)(param_1 + 0x18);
      local_c0 = *(byte **)(param_1 + 0x20);
      local_94 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
      local_b0 = *(int **)(param_1 + 0x30);
      local_10 = *(longlong *)(*(longlong *)(local_a0 + 0x30) + 0x60);
      if (*(char *)(*(longlong *)(local_a0 + 0x30) + 0x106) == '\0') {
        local_20 = 0;
      }
      else {
        local_20 = *(longlong *)(*(longlong *)(local_a0 + 0x30) + 0x68);
      }
      if ((*(uint *)(local_a0 + 0x38) & 0x10) == 0) {
        local_80 = *(longlong *)(*(longlong *)(local_a0 + 0x30) + 0xf0);
      }
      else {
        local_80 = *(longlong *)(*(longlong *)(local_a0 + 0x30) + 0xf8);
      }
      local_18 = *(uint *)(*(longlong *)(local_a0 + 0x30) + 0x10c);
      local_d0 = *(uint *)(local_a0 + 0x54);
      if (local_c4 == 0xc) {
        local_b4 = *(int *)(local_a0 + 0x50);
        if (local_b4 == 0) {
          local_b4 = 1;
        }
      }
      else {
        local_b4 = 0;
      }
      local_6c = -1;
      if (local_d0 == 0) {
        local_44 = 0;
      }
      else {
        local_44 = -1;
      }
      local_98 = local_44;
      local_8c = 0;
      cVar2 = FUN_143add9c0(0,*(undefined4 *)(local_a0 + 0x38),&local_c8);
      local_b7 = FUN_143add9c0(1,*(undefined4 *)(local_a0 + 0x38),&local_a8);
      if (local_d0 == 0) goto LAB_143ad6e02;
      if (local_94 < 1) goto LAB_143ad6e02;
LAB_143ad74d7:
      if (local_78 < local_38) {
        local_70 = *local_78;
        if ((local_70 & 0xfc00) == 0xdc00) {
          local_78 = local_78 + 1;
          local_8c = local_8c + 1;
          local_d0 = local_d0 * 0x400 + -0x35fdc00 + (uint)local_70;
          if ((local_b8 & 1) != 0) goto LAB_143ad75a9;
          *(int *)(local_a0 + 0x50) = local_b4;
LAB_143ad7c16:
          *(ushort **)(param_1 + 0x10) = local_78;
          local_d0 = FUN_143add0b0(local_a0,*(undefined8 *)(local_a0 + 0x30),local_d0,&local_78,
                                   local_38,&local_c0,local_c0 + local_94,&local_b0,local_98,
                                   *(undefined1 *)(param_1 + 2),param_2);
          local_8c = local_8c + (int)((longlong)local_78 - *(longlong *)(param_1 + 0x10) >> 1);
          local_b4 = *(int *)(local_a0 + 0x50);
          if (*param_2 < 1) {
            local_94 = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_c0;
            if (local_b0 != (int *)0x0) {
              local_6c = local_98;
              local_98 = local_8c;
            }
LAB_143ad6e02:
            while( true ) {
              if (local_38 <= local_78) goto LAB_143ad81c0;
              if (local_94 < 1) {
                *param_2 = 0xf;
                goto LAB_143ad81c0;
              }
              uVar1 = *local_78;
              local_d0 = (uint)uVar1;
              local_78 = local_78 + 1;
              local_8c = local_8c + 1;
              if ((0x7f < local_d0) ||
                 (local_28 = 1, (local_18 & 1 << ((byte)((int)local_d0 >> 2) & 0x1f)) == 0)) break;
              local_d0._0_1_ = (byte)uVar1;
              *local_c0 = (byte)local_d0;
              local_c0 = local_c0 + 1;
              if (local_b0 != (int *)0x0) {
                *local_b0 = local_98;
                local_b0 = local_b0 + 1;
                local_6c = local_98;
                local_98 = local_8c;
              }
              local_94 = local_94 + -1;
              local_d0 = 0;
            }
            if ((local_d0 < 0xd800) && (local_20 != 0)) {
              uVar6 = (uint)*(ushort *)(local_20 + (longlong)((int)local_d0 >> 6) * 2);
              local_60 = local_c4 - 1;
              switch(local_60) {
              case 0:
                local_d8 = (uint)*(ushort *)(local_80 + (ulonglong)(uVar6 + (local_d0 & 0x3f)) * 2);
                if (local_d8 < 0x100) {
                  if (local_d8 == 0) goto LAB_143ad7c16;
                  local_d4 = 1;
                }
                else {
                  local_d4 = 2;
                }
                break;
              case 1:
                local_88 = (byte *)(local_80 + (ulonglong)((uVar6 + (local_d0 & 0x3f)) * 3));
                local_d8 = (uint)*local_88 << 0x10 | (uint)local_88[1] << 8 | (uint)local_88[2];
                if (local_d8 < 0x100) {
                  if (local_d8 == 0) goto LAB_143ad7c16;
                  local_d4 = 1;
                }
                else if (local_d8 < 0x10000) {
                  local_d4 = 2;
                }
                else {
                  local_d4 = 3;
                }
                break;
              case 2:
                local_d8 = *(uint *)(local_80 + (ulonglong)(uVar6 + (local_d0 & 0x3f)) * 4);
                if (local_d8 < 0x100) {
                  if (local_d8 == 0) goto LAB_143ad7c16;
                  local_d4 = 1;
                }
                else if (local_d8 < 0x10000) {
                  local_d4 = 2;
                }
                else if (local_d8 < 0x1000000) {
                  local_d4 = 3;
                }
                else {
                  local_d4 = 4;
                }
                break;
              default:
                local_d8 = 0;
                local_d4 = 0;
                break;
              case 7:
                uVar1 = *(ushort *)(local_80 + (ulonglong)(uVar6 + (local_d0 & 0x3f)) * 2);
                local_d8 = (uint)uVar1;
                if (local_d8 < 0x100) {
                  if (local_d8 == 0) goto LAB_143ad7c16;
                  local_d4 = 1;
                }
                else if ((uVar1 & 0x8000) == 0) {
                  local_d8 = local_d8 | 0x8e8000;
                  local_d4 = 3;
                }
                else if ((uVar1 & 0x80) == 0) {
                  local_d8 = local_d8 | 0x8f0080;
                  local_d4 = 3;
                }
                else {
                  local_d4 = 2;
                }
                break;
              case 8:
                local_88 = (byte *)(local_80 + (ulonglong)((uVar6 + (local_d0 & 0x3f)) * 3));
                local_d8 = (uint)*local_88 << 0x10 | (uint)local_88[1] << 8 | (uint)local_88[2];
                if (local_d8 < 0x100) {
                  if (local_d8 == 0) goto LAB_143ad7c16;
                  local_d4 = 1;
                }
                else if (local_d8 < 0x10000) {
                  local_d4 = 2;
                }
                else if (((uint)*local_88 << 0x10 & 0x800000) == 0) {
                  local_d8 = local_d8 | 0x8e800000;
                  local_d4 = 4;
                }
                else if (((uint)local_88[1] << 8 & 0x8000) == 0) {
                  local_d8 = local_d8 | 0x8f008000;
                  local_d4 = 4;
                }
                else {
                  local_d4 = 3;
                }
                break;
              case 0xb:
                *(int *)(local_a0 + 0x50) = local_b4;
                uVar1 = *(ushort *)(local_80 + (ulonglong)(uVar6 + (local_d0 & 0x3f)) * 2);
                local_d8 = (uint)uVar1;
                if (local_d8 < 0x100) {
                  if (local_d8 == 0) goto LAB_143ad7c16;
                  if (local_b4 < 2) {
                    local_d4 = 1;
                  }
                  else {
                    if (cVar2 == '\x01') {
                      local_d8 = local_d8 | (uint)local_c8 << 8;
                      local_d4 = 2;
                    }
                    else if (cVar2 == '\x02') {
                      local_d8 = local_d8 | (uint)local_c7 << 8 | (uint)local_c8 << 0x10;
                      local_d4 = 3;
                    }
                    local_b4 = 1;
                  }
                }
                else if (local_b4 == 2) {
                  local_d4 = 2;
                }
                else {
                  if (local_b7 == '\x01') {
                    local_d8 = (uint)CONCAT12(local_a8,uVar1);
                    local_d4 = 3;
                  }
                  else if (local_b7 == '\x02') {
                    local_d8 = CONCAT13(local_a8,CONCAT12(local_a7,uVar1));
                    local_d4 = 4;
                  }
                  local_b4 = 2;
                }
                break;
              case 0xda:
                local_d8 = (uint)*(ushort *)(local_80 + (ulonglong)(uVar6 + (local_d0 & 0x3f)) * 2);
                if (local_d8 < 0x100) goto LAB_143ad7c16;
                local_d4 = 2;
              }
            }
            else {
              if (((local_d0 & 0xfffff800) == 0xd800) && ((local_b8 & 2) == 0)) {
                if ((uVar1 & 0x400) == 0) goto LAB_143ad74d7;
                *param_2 = 0xc;
                goto LAB_143ad81c0;
              }
LAB_143ad75a9:
              local_90 = *(uint *)(local_10 +
                                  (longlong)
                                  (int)((uint)*(ushort *)
                                               (local_10 + (longlong)((int)local_d0 >> 10) * 2) +
                                       ((int)local_d0 >> 4 & 0x3fU)) * 4);
              local_5c = local_c4 - 1;
              switch(local_5c) {
              case 0:
                local_d8 = (uint)*(ushort *)
                                  (local_80 +
                                  (ulonglong)((local_90 & 0xffff) * 0x10 + (local_d0 & 0xf)) * 2);
                if (local_d8 < 0x100) {
                  local_d4 = 1;
                }
                else {
                  local_d4 = 2;
                }
                break;
              case 1:
                local_88 = (byte *)(local_80 +
                                   (ulonglong)(((local_90 & 0xffff) * 0x10 + (local_d0 & 0xf)) * 3))
                ;
                local_d8 = (uint)*local_88 << 0x10 | (uint)local_88[1] << 8 | (uint)local_88[2];
                if (local_d8 < 0x100) {
                  local_d4 = 1;
                }
                else if (local_d8 < 0x10000) {
                  local_d4 = 2;
                }
                else {
                  local_d4 = 3;
                }
                break;
              case 2:
                local_d8 = *(uint *)(local_80 +
                                    (ulonglong)((local_90 & 0xffff) * 0x10 + (local_d0 & 0xf)) * 4);
                if (local_d8 < 0x100) {
                  local_d4 = 1;
                }
                else if (local_d8 < 0x10000) {
                  local_d4 = 2;
                }
                else if (local_d8 < 0x1000000) {
                  local_d4 = 3;
                }
                else {
                  local_d4 = 4;
                }
                break;
              default:
                local_90 = 0;
                local_d8 = 0;
                local_d4 = 0;
                break;
              case 7:
                uVar1 = *(ushort *)
                         (local_80 + (ulonglong)((local_90 & 0xffff) * 0x10 + (local_d0 & 0xf)) * 2)
                ;
                local_d8 = (uint)uVar1;
                if (local_d8 < 0x100) {
                  local_d4 = 1;
                }
                else if ((uVar1 & 0x8000) == 0) {
                  local_d8 = local_d8 | 0x8e8000;
                  local_d4 = 3;
                }
                else if ((uVar1 & 0x80) == 0) {
                  local_d8 = local_d8 | 0x8f0080;
                  local_d4 = 3;
                }
                else {
                  local_d4 = 2;
                }
                break;
              case 8:
                local_88 = (byte *)(local_80 +
                                   (ulonglong)(((local_90 & 0xffff) * 0x10 + (local_d0 & 0xf)) * 3))
                ;
                local_d8 = (uint)*local_88 << 0x10 | (uint)local_88[1] << 8 | (uint)local_88[2];
                if (local_d8 < 0x100) {
                  local_d4 = 1;
                }
                else if (local_d8 < 0x10000) {
                  local_d4 = 2;
                }
                else if (((uint)*local_88 << 0x10 & 0x800000) == 0) {
                  local_d8 = local_d8 | 0x8e800000;
                  local_d4 = 4;
                }
                else if (((uint)local_88[1] << 8 & 0x8000) == 0) {
                  local_d8 = local_d8 | 0x8f008000;
                  local_d4 = 4;
                }
                else {
                  local_d4 = 3;
                }
                break;
              case 0xb:
                *(int *)(local_a0 + 0x50) = local_b4;
                uVar1 = *(ushort *)
                         (local_80 + (ulonglong)((local_90 & 0xffff) * 0x10 + (local_d0 & 0xf)) * 2)
                ;
                local_d8 = (uint)uVar1;
                if (local_d8 < 0x100) {
                  if (local_d8 == 0) {
                    local_2c = 1;
                    local_40 = (uint)((local_90 & 1 << ((byte)local_d0 & 0xf) + 0x10) != 0);
                    if (local_40 == 0) {
                      local_d4 = 0;
                      break;
                    }
                  }
                  if (local_b4 < 2) {
                    local_d4 = 1;
                  }
                  else {
                    if (cVar2 == '\x01') {
                      local_d8 = local_d8 | (uint)local_c8 << 8;
                      local_d4 = 2;
                    }
                    else if (cVar2 == '\x02') {
                      local_d8 = local_d8 | (uint)local_c7 << 8 | (uint)local_c8 << 0x10;
                      local_d4 = 3;
                    }
                    local_b4 = 1;
                  }
                }
                else if (local_b4 == 2) {
                  local_d4 = 2;
                }
                else {
                  if (local_b7 == '\x01') {
                    local_d8 = (uint)CONCAT12(local_a8,uVar1);
                    local_d4 = 3;
                  }
                  else if (local_b7 == '\x02') {
                    local_d8 = CONCAT13(local_a8,CONCAT12(local_a7,uVar1));
                    local_d4 = 4;
                  }
                  local_b4 = 2;
                }
                break;
              case 0xda:
                local_d8 = (uint)*(ushort *)
                                  (local_80 +
                                  (ulonglong)((local_90 & 0xffff) * 0x10 + (local_d0 & 0xf)) * 2);
                if (local_d8 < 0x100) {
                  local_90 = 0;
                  local_d8 = 0;
                  local_d4 = 0;
                }
                else {
                  local_d4 = 2;
                }
              }
              local_30 = 1;
              local_3c = (uint)((local_90 & 1 << ((byte)local_d0 & 0xf) + 0x10) != 0);
              if ((local_3c == 0) &&
                 ((((*(char *)(local_a0 + 0x3f) == '\0' && (0x18ff < local_d0 - 0xe000)) &&
                   (0x1ffff < local_d0 - 0xf0000)) || (local_d8 == 0)))) goto LAB_143ad7c16;
            }
            bVar3 = (byte)(local_d8 >> 8);
            bVar4 = (byte)(local_d8 >> 0x10);
            if (local_94 < local_d4) {
              local_d4 = local_d4 - local_94;
              local_50 = (byte *)(local_a0 + 0x68);
              if (local_d4 == 1) {
LAB_143ad800b:
                *local_50 = (byte)local_d8;
              }
              else {
                if (local_d4 == 2) {
LAB_143ad7fe7:
                  *local_50 = bVar3;
                  local_50 = local_50 + 1;
                  goto LAB_143ad800b;
                }
                if (local_d4 == 3) {
                  *local_50 = bVar4;
                  local_50 = (byte *)(local_a0 + 0x69);
                  goto LAB_143ad7fe7;
                }
              }
              *(char *)(local_a0 + 0x5b) = (char)local_d4;
              local_d8 = local_d8 >> ((char)local_d4 * '\b' & 0x1fU);
              if (local_94 == 1) {
LAB_143ad8109:
                *local_c0 = (byte)local_d8;
                local_c0 = local_c0 + 1;
                if (local_b0 != (int *)0x0) {
                  *local_b0 = local_98;
                  local_b0 = local_b0 + 1;
                }
              }
              else {
                if (local_94 == 2) {
LAB_143ad80be:
                  *local_c0 = (byte)(local_d8 >> 8);
                  local_c0 = local_c0 + 1;
                  if (local_b0 != (int *)0x0) {
                    *local_b0 = local_98;
                    local_b0 = local_b0 + 1;
                  }
                  goto LAB_143ad8109;
                }
                if (local_94 == 3) {
                  *local_c0 = (byte)(local_d8 >> 0x10);
                  local_c0 = local_c0 + 1;
                  if (local_b0 != (int *)0x0) {
                    *local_b0 = local_98;
                    local_b0 = local_b0 + 1;
                  }
                  goto LAB_143ad80be;
                }
              }
              local_94 = 0;
              *param_2 = 0xf;
              local_d0 = 0;
              goto LAB_143ad81c0;
            }
            bVar5 = (byte)(local_d8 >> 0x18);
            if (local_b0 == (int *)0x0) {
              local_68 = local_d4;
              if (local_d4 != 1) {
                if (local_d4 != 2) {
                  if (local_d4 != 3) {
                    if (local_d4 != 4) goto LAB_143ad7f56;
                    *local_c0 = bVar5;
                    local_c0 = local_c0 + 1;
                  }
                  *local_c0 = bVar4;
                  local_c0 = local_c0 + 1;
                }
                *local_c0 = bVar3;
                local_c0 = local_c0 + 1;
              }
              *local_c0 = (byte)local_d8;
              local_c0 = local_c0 + 1;
            }
            else {
              local_64 = local_d4;
              if (local_d4 != 1) {
                if (local_d4 != 2) {
                  if (local_d4 != 3) {
                    if (local_d4 != 4) goto LAB_143ad7f56;
                    *local_c0 = bVar5;
                    local_c0 = local_c0 + 1;
                    *local_b0 = local_98;
                    local_b0 = local_b0 + 1;
                  }
                  *local_c0 = bVar4;
                  local_c0 = local_c0 + 1;
                  *local_b0 = local_98;
                  local_b0 = local_b0 + 1;
                }
                *local_c0 = bVar3;
                local_c0 = local_c0 + 1;
                *local_b0 = local_98;
                local_b0 = local_b0 + 1;
              }
              *local_c0 = (byte)local_d8;
              local_c0 = local_c0 + 1;
              *local_b0 = local_98;
              local_b0 = local_b0 + 1;
            }
LAB_143ad7f56:
            local_94 = local_94 - local_d4;
            local_d0 = 0;
            if (local_b0 != (int *)0x0) {
              local_6c = local_98;
              local_98 = local_8c;
            }
            goto LAB_143ad6e02;
          }
        }
        else {
          *param_2 = 0xc;
        }
      }
LAB_143ad81c0:
      if ((((*param_2 < 1) && (local_c4 == 0xc)) &&
          ((local_b4 == 2 && ((*(char *)(param_1 + 2) != '\0' && (local_38 <= local_78)))))) &&
         (local_d0 == 0)) {
        if (local_94 < 1) {
          *(byte *)(local_a0 + 0x68) = local_c8;
          if (cVar2 == '\x02') {
            *(byte *)(local_a0 + 0x69) = local_c7;
          }
          *(char *)(local_a0 + 0x5b) = cVar2;
          *param_2 = 0xf;
        }
        else {
          *local_c0 = local_c8;
          pbVar7 = local_c0 + 1;
          if (cVar2 == '\x02') {
            if (local_94 < 2) {
              *(byte *)(local_a0 + 0x68) = local_c7;
              *(undefined1 *)(local_a0 + 0x5b) = 1;
              *param_2 = 0xf;
            }
            else {
              *pbVar7 = local_c7;
              pbVar7 = local_c0 + 2;
            }
          }
          local_c0 = pbVar7;
          if (local_b0 != (int *)0x0) {
            *local_b0 = local_6c;
            local_b0 = local_b0 + 1;
          }
        }
        local_b4 = 1;
      }
      *(uint *)(local_a0 + 0x54) = local_d0;
      *(int *)(local_a0 + 0x50) = local_b4;
      *(ushort **)(param_1 + 0x10) = local_78;
      *(byte **)(param_1 + 0x20) = local_c0;
      *(int **)(param_1 + 0x30) = local_b0;
    }
  }
  return;
}



// FUNCTION 143ad85d0 FUN_143ad85d0 body=4543 status=ok
// SIG undefined FUN_143ad85d0(void)

void FUN_143ad85d0(longlong param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  ushort *puVar6;
  char local_98;
  byte local_97;
  uint local_94;
  char local_88;
  int *local_80;
  ushort *local_78;
  uint local_70;
  byte *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  char local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  longlong local_48;
  byte *local_40;
  longlong local_38;
  byte *local_30;
  ushort *local_28;
  int local_20;
  int local_1c;
  void *local_18;
  
  local_58 = *(longlong *)(param_1 + 8);
  if ((*(char *)(local_58 + 0x11a) < '\x01') ||
     ((FUN_143b0ea30(local_58,param_1,0xffffffff,param_2), *param_2 < 1 &&
      (-1 < *(char *)(local_58 + 0x11a))))) {
    if (*(char *)(*(longlong *)(local_58 + 0x30) + 0x38) == '\x01') {
      if ((*(byte *)(*(longlong *)(local_58 + 0x30) + 0x105) & 1) == 0) {
        FUN_143ae07b0(param_1,param_2);
      }
      else {
        FUN_143ae1630(param_1,param_2);
      }
    }
    else {
      local_68 = *(byte **)(param_1 + 0x10);
      local_30 = *(byte **)(param_1 + 0x18);
      local_78 = *(ushort **)(param_1 + 0x20);
      local_28 = *(ushort **)(param_1 + 0x28);
      local_80 = *(int **)(param_1 + 0x30);
      if ((*(uint *)(local_58 + 0x38) & 0x10) == 0) {
        local_38 = *(longlong *)(*(longlong *)(local_58 + 0x30) + 0x40);
      }
      else {
        local_38 = *(longlong *)(*(longlong *)(local_58 + 0x30) + 0x48);
      }
      local_48 = *(longlong *)(*(longlong *)(local_58 + 0x30) + 0x50);
      local_70 = *(uint *)(local_58 + 0x48);
      local_98 = *(char *)(local_58 + 0x40);
      local_40 = (byte *)(local_58 + 0x41);
      local_97 = *(byte *)(local_58 + 0x4c);
      if (local_97 == 0) {
        local_97 = *(byte *)(*(longlong *)(local_58 + 0x30) + 0x39);
      }
      if (local_98 == '\0') {
        local_20 = 0;
      }
      else {
        local_20 = -1;
      }
      local_60 = local_20;
      local_5c = 0;
      iVar4 = local_60;
LAB_143ad880a:
      do {
        do {
          local_60 = iVar4;
          if (local_30 <= local_68) goto LAB_143ad9721;
          if (local_28 <= local_78) {
            *param_2 = 0xf;
            goto LAB_143ad9721;
          }
          if (local_98 == '\0') {
            if (local_80 != (int *)0x0) {
              do {
                local_94 = *(uint *)(local_38 + (ulonglong)local_97 * 0x400 +
                                    (ulonglong)*local_68 * 4);
                bVar1 = (byte)(local_94 >> 0x18);
                if ((int)local_94 < 0) {
                  if (-0x7ff00001 < (int)local_94) goto LAB_143ad8cda;
                  local_68 = local_68 + 1;
                  *local_78 = (ushort)local_94;
                  if (local_80 != (int *)0x0) {
                    *local_80 = local_60;
                    local_80 = local_80 + 1;
                    local_60 = local_5c + 1;
                    local_5c = local_60;
                  }
                }
                else {
                  local_70 = local_94 & 0xffffff;
                  pbVar5 = local_68 + 1;
                  if ((((local_30 <= pbVar5) ||
                       (local_94 = *(uint *)(local_38 + (ulonglong)bVar1 * 0x400 +
                                            (ulonglong)*pbVar5 * 4), -1 < (int)local_94)) ||
                      ((local_94 >> 0x14 & 0xf) != 4)) ||
                     (uVar3 = *(ushort *)
                               (local_48 + (ulonglong)(local_70 + (local_94 & 0xffff)) * 2),
                     0xfffd < uVar3)) {
                    local_5c = local_5c + 1;
                    *local_40 = *local_68;
                    local_98 = '\x01';
                    local_97 = bVar1;
                    local_68 = pbVar5;
                    goto LAB_143ad8cda;
                  }
                  local_68 = local_68 + 2;
                  *local_78 = uVar3;
                  if (local_80 != (int *)0x0) {
                    *local_80 = local_60;
                    local_80 = local_80 + 1;
                    local_60 = local_5c + 2;
                    local_5c = local_60;
                  }
                  bVar1 = (byte)(local_94 >> 0x18);
                  local_70 = 0;
                }
                local_78 = local_78 + 1;
                local_97 = bVar1 & 0x7f;
                if ((local_30 <= local_68) || (local_28 <= local_78)) goto LAB_143ad8cda;
              } while( true );
            }
LAB_143ad885e:
            local_94 = *(uint *)(local_38 + (ulonglong)local_97 * 0x400 + (ulonglong)*local_68 * 4);
            bVar1 = (byte)(local_94 >> 0x18);
            if ((int)local_94 < 0) {
              if (-0x7ff00001 < (int)local_94) goto LAB_143ad8cda;
              local_68 = local_68 + 1;
              *local_78 = (ushort)local_94;
LAB_143ad8a20:
              local_78 = local_78 + 1;
              local_97 = bVar1 & 0x7f;
              if ((local_30 <= local_68) || (local_28 <= local_78)) goto LAB_143ad8cda;
              goto LAB_143ad885e;
            }
            local_70 = local_94 & 0xffffff;
            pbVar5 = local_68 + 1;
            if (((pbVar5 < local_30) &&
                (local_94 = *(uint *)(local_38 + (ulonglong)bVar1 * 0x400 + (ulonglong)*pbVar5 * 4),
                (int)local_94 < 0)) &&
               (((local_94 >> 0x14 & 0xf) == 4 &&
                (uVar3 = *(ushort *)(local_48 + (ulonglong)(local_70 + (local_94 & 0xffff)) * 2),
                uVar3 < 0xfffe)))) {
              local_68 = local_68 + 2;
              *local_78 = uVar3;
              bVar1 = (byte)(local_94 >> 0x18);
              local_70 = 0;
              goto LAB_143ad8a20;
            }
            *local_40 = *local_68;
            local_98 = '\x01';
            local_97 = bVar1;
            local_68 = pbVar5;
LAB_143ad8cda:
            if (local_30 <= local_68) goto LAB_143ad9721;
            if (local_28 <= local_78) {
              *param_2 = 0xf;
              goto LAB_143ad9721;
            }
            local_40[local_98] = *local_68;
          }
          else {
            local_40[local_98] = *local_68;
            local_94 = *(uint *)(local_38 + (ulonglong)local_97 * 0x400 +
                                (ulonglong)local_40[local_98] * 4);
          }
          local_5c = local_5c + 1;
          local_68 = local_68 + 1;
          local_98 = local_98 + '\x01';
          bVar1 = (byte)(local_94 >> 0x18);
          if (-1 < (int)local_94) {
            local_70 = local_70 + (local_94 & 0xffffff);
            local_97 = bVar1;
            iVar4 = local_60;
            goto LAB_143ad880a;
          }
          *(uint *)(local_58 + 0x4c) = (uint)local_97;
          local_97 = bVar1 & 0x7f;
          bVar1 = (byte)(local_94 >> 0x14) & 0xf;
          if (bVar1 == 4) {
            local_70 = local_70 + (local_94 & 0xffff);
            uVar3 = *(ushort *)(local_48 + (ulonglong)local_70 * 2);
            if (uVar3 < 0xfffe) {
              *local_78 = uVar3;
              local_78 = local_78 + 1;
              if (local_80 != (int *)0x0) {
                *local_80 = local_60;
                local_80 = local_80 + 1;
              }
              local_98 = '\0';
            }
            else if (uVar3 == 0xfffe) {
              iVar4 = FUN_143adee00(*(longlong *)(local_58 + 0x30) + 0x38,local_70);
              if (iVar4 != 0xfffe) {
                local_94._0_2_ = (ushort)iVar4;
                *local_78 = (ushort)local_94;
                local_78 = local_78 + 1;
                if (local_80 != (int *)0x0) {
                  *local_80 = local_60;
                  local_80 = local_80 + 1;
                }
                local_98 = '\0';
              }
            }
            else {
              *param_2 = 0xc;
            }
          }
          else if ((local_94 >> 0x14 & 0xf) == 0) {
            *local_78 = (ushort)local_94;
            local_78 = local_78 + 1;
            if (local_80 != (int *)0x0) {
              *local_80 = local_60;
              local_80 = local_80 + 1;
            }
            local_98 = '\0';
          }
          else if (bVar1 == 5) {
            local_70 = local_70 + (local_94 & 0xffff);
            uVar3 = *(ushort *)(local_48 + (ulonglong)local_70 * 2);
            local_70 = local_70 + 1;
            if (uVar3 < 0xd800) {
              *local_78 = uVar3;
              local_78 = local_78 + 1;
              if (local_80 != (int *)0x0) {
                *local_80 = local_60;
                local_80 = local_80 + 1;
              }
              local_98 = '\0';
            }
            else if (uVar3 < 0xe000) {
              *local_78 = uVar3 & 0xdbff;
              puVar6 = local_78 + 1;
              if (local_80 != (int *)0x0) {
                *local_80 = local_60;
                local_80 = local_80 + 1;
              }
              local_98 = '\0';
              if (local_28 <= puVar6) {
                *(undefined2 *)(local_58 + 0x90) =
                     *(undefined2 *)(local_48 + (ulonglong)local_70 * 2);
                *(undefined1 *)(local_58 + 0x5d) = 1;
                *param_2 = 0xf;
                local_70 = 0;
                local_78 = puVar6;
                goto LAB_143ad9721;
              }
              *puVar6 = *(ushort *)(local_48 + (ulonglong)local_70 * 2);
              local_78 = local_78 + 2;
              if (local_80 != (int *)0x0) {
                *local_80 = local_60;
                local_80 = local_80 + 1;
              }
            }
            else if ((uVar3 & 0xfffe) == 0xe000) {
              *local_78 = *(ushort *)(local_48 + (ulonglong)local_70 * 2);
              local_78 = local_78 + 1;
              if (local_80 != (int *)0x0) {
                *local_80 = local_60;
                local_80 = local_80 + 1;
              }
              local_98 = '\0';
            }
            else if (uVar3 == 0xffff) {
              *param_2 = 0xc;
            }
          }
          else if ((bVar1 == 1) || (bVar1 == 3)) {
            *local_78 = (ushort)((int)(local_94 & 0xfffff) >> 10) | 0xd800;
            puVar6 = local_78 + 1;
            if (local_80 != (int *)0x0) {
              *local_80 = local_60;
              local_80 = local_80 + 1;
            }
            local_98 = '\0';
            uVar3 = (ushort)(local_94 & 0xfffff) & 0x3ff | 0xdc00;
            if (local_28 <= puVar6) {
              *(ushort *)(local_58 + 0x90) = uVar3;
              *(undefined1 *)(local_58 + 0x5d) = 1;
              *param_2 = 0xf;
              local_70 = 0;
              local_78 = puVar6;
              goto LAB_143ad9721;
            }
            *puVar6 = uVar3;
            local_78 = local_78 + 2;
            if (local_80 != (int *)0x0) {
              *local_80 = local_60;
              local_80 = local_80 + 1;
            }
          }
          else if (bVar1 == 8) {
            if (*(char *)(*(longlong *)(local_58 + 0x30) + 0x39) == '\0') {
              local_98 = '\0';
            }
            else {
              local_97 = *(byte *)(local_58 + 0x4c);
              *param_2 = 0xc;
            }
          }
          else if (bVar1 == 2) {
            *local_78 = (ushort)local_94;
            local_78 = local_78 + 1;
            if (local_80 != (int *)0x0) {
              *local_80 = local_60;
              local_80 = local_80 + 1;
            }
            local_98 = '\0';
          }
          else if (bVar1 != 6) {
            if (bVar1 == 7) {
              *param_2 = 0xc;
            }
            else {
              local_98 = '\0';
            }
          }
          local_70 = 0;
          iVar4 = local_5c;
        } while (local_98 == '\0');
        if (0 < *param_2) {
          if ('\x01' < local_98) {
            local_4f = *(char *)(*(longlong *)(local_58 + 0x30) + 0x39) != '\0';
            local_88 = '\x01';
            local_4e = local_4f;
            while ((local_88 < local_98 &&
                   (cVar2 = FUN_143addf60(local_38,local_97,local_4e,local_40[local_88]),
                   cVar2 == '\0'))) {
              local_88 = local_88 + '\x01';
            }
            if (local_88 < local_98) {
              local_50 = local_98 - local_88;
              local_1c = (int)local_68 - (int)*(undefined8 *)(param_1 + 0x10);
              local_98 = local_88;
              if (local_1c < local_50) {
                *(char *)(local_58 + 0x11a) = (char)local_1c - local_50;
                local_18 = (void *)(local_58 + 0xfa);
                _guard_xfg_dispatch_icall_nop
                          (local_18,local_40 + local_88,(longlong)-(int)*(char *)(local_58 + 0x11a))
                ;
                local_68 = *(byte **)(param_1 + 0x10);
              }
              else {
                local_68 = local_68 + -(longlong)local_50;
              }
            }
          }
          break;
        }
        *(byte **)(param_1 + 0x10) = local_68;
        local_98 = FUN_143add390(local_58,*(undefined8 *)(local_58 + 0x30),local_98,&local_68,
                                 local_30,&local_78,local_28,&local_80,local_60,
                                 *(undefined1 *)(param_1 + 2),param_2);
        local_5c = local_5c + ((int)local_68 - (int)*(undefined8 *)(param_1 + 0x10));
        iVar4 = local_5c;
      } while (*param_2 < 1);
LAB_143ad9721:
      *(uint *)(local_58 + 0x48) = local_70;
      *(uint *)(local_58 + 0x4c) = (uint)local_97;
      *(char *)(local_58 + 0x40) = local_98;
      *(byte **)(param_1 + 0x10) = local_68;
      *(ushort **)(param_1 + 0x20) = local_78;
      *(int **)(param_1 + 0x30) = local_80;
    }
  }
  return;
}



// FUNCTION 143ad97a0 FUN_143ad97a0 body=3767 status=ok
// SIG undefined FUN_143ad97a0(void)

void FUN_143ad97a0(longlong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char local_d7;
  char local_d6;
  char local_d5;
  uint local_d4;
  ushort local_cc;
  byte *local_c8;
  int local_bc;
  ushort local_b8;
  byte *local_b0;
  longlong local_a8;
  int local_a0;
  byte local_9c;
  longlong local_98;
  byte *local_90;
  longlong local_88;
  uint local_80;
  char local_78;
  uint local_74;
  char local_70;
  int local_6c;
  uint local_68;
  uint local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ushort *local_28;
  uint local_20;
  undefined *local_18 [3];
  
  local_a8 = *(longlong *)(param_2 + 8);
  local_98 = *(longlong *)(param_1 + 8);
  local_c8 = *(byte **)(param_2 + 0x10);
  local_90 = *(byte **)(param_2 + 0x18);
  local_b0 = *(byte **)(param_1 + 0x20);
  local_bc = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  local_38 = *(longlong *)(*(longlong *)(local_98 + 0x30) + 0x60);
  local_28 = (ushort *)(*(longlong *)(local_98 + 0x30) + 0x70);
  if ((*(uint *)(local_98 + 0x38) & 0x10) == 0) {
    local_88 = *(longlong *)(*(longlong *)(local_98 + 0x30) + 0xf0);
  }
  else {
    local_88 = *(longlong *)(*(longlong *)(local_98 + 0x30) + 0xf8);
  }
  local_20 = *(uint *)(*(longlong *)(local_98 + 0x30) + 0x10c);
  if (*(char *)(local_98 + 0x3f) == '\0') {
    local_b8 = 0xc00;
  }
  else {
    local_b8 = 0x800;
  }
  local_9c = *(byte *)(*(longlong *)(local_98 + 0x30) + 0x105) & 1;
  local_d4 = *(uint *)(local_a8 + 0x48);
  if (local_d4 == 0) {
    local_d5 = '\0';
    local_d6 = '\0';
  }
  else {
    local_d6 = *(char *)(local_a8 + 0x40);
    local_d5 = *(char *)(local_a8 + 0x4c);
  }
  local_30 = ((int)local_90 - (int)local_c8) - ((int)local_d5 - (int)local_d6);
  local_a0 = 0;
  while( true ) {
    if ((2 < local_a0) || (local_30 <= local_a0)) goto LAB_143ad9b35;
    bVar1 = local_90[-1 - (longlong)local_a0];
    if ((bVar1 & 0xc0) != 0x80) break;
    local_a0 = local_a0 + 1;
  }
  if (bVar1 < 0xf0) {
    local_60 = (uint)(0xbf < bVar1);
    local_74 = (uint)(0xdf < bVar1);
    local_40 = local_60 + local_74;
  }
  else {
    if (bVar1 < 0xfe) {
      local_58 = (uint)(0xf7 < bVar1);
      local_50 = (uint)(0xfb < bVar1);
      local_48 = local_58 + 3 + local_50;
    }
    else {
      local_48 = 0;
    }
    local_40 = local_48;
  }
  if (local_a0 < local_40) {
    local_90 = local_90 + -(longlong)(local_a0 + 1);
  }
LAB_143ad9b35:
  if (local_d4 == 0) goto LAB_143ad9b63;
  if (local_bc < 1) goto LAB_143ad9b63;
  *(undefined4 *)(local_a8 + 0x48) = 0;
  *(undefined1 *)(local_a8 + 0x40) = 0;
  local_d7 = local_d6;
  do {
    while (local_d5 <= local_d7) {
LAB_143ada0a2:
      if ((local_d7 == local_d5) &&
         ((((local_d7 == '\x03' || (local_d7 == '\x02')) &&
           (local_d4 = local_d4 - *(int *)(&DAT_145cfb5e8 + (longlong)local_d7 * 4),
           *(int *)(&DAT_145cfb5d0 + (longlong)local_d7 * 4) <= (int)local_d4)) &&
          (((int)local_d4 < 0xd800 || (0xdfff < (int)local_d4)))))) {
        local_cc = *(ushort *)
                    (local_88 +
                    (longlong)
                    (int)((uint)*(ushort *)
                                 (local_38 +
                                 (longlong)
                                 (int)((uint)*(ushort *)
                                              (local_38 + (longlong)((int)local_d4 >> 10) * 2) +
                                      ((int)local_d4 >> 4 & 0x3fU)) * 2) + (local_d4 & 0xf)) * 2);
      }
      else {
        if ((local_d7 != local_d5) ||
           (((local_d7 != '\x04' || (local_d4 = local_d4 + 0xfc37df80, (int)local_d4 < 0x10000)) ||
            (0x10ffff < (int)local_d4)))) {
          local_c8 = local_c8 + -(longlong)((int)local_d7 - (int)local_d6);
          for (; local_d6 < local_d7; local_d6 = local_d6 + '\x01') {
            *(byte *)(local_a8 + 0x41 + (longlong)local_d6) = *local_c8;
            local_c8 = local_c8 + 1;
          }
          *(char *)(local_a8 + 0x40) = local_d7;
          *(byte **)(param_2 + 0x10) = local_c8;
          *(byte **)(param_1 + 0x20) = local_b0;
          *param_3 = 0xc;
          return;
        }
        if (local_9c == 0) {
          local_cc = 0;
        }
        else {
          local_cc = *(ushort *)
                      (local_88 +
                      (longlong)
                      (int)((uint)*(ushort *)
                                   (local_38 +
                                   (longlong)
                                   (int)((uint)*(ushort *)
                                                (local_38 + (longlong)((int)local_d4 >> 10) * 2) +
                                        ((int)local_d4 >> 4 & 0x3fU)) * 2) + (local_d4 & 0xf)) * 2);
        }
      }
LAB_143ada2c2:
      do {
        if (local_cc < local_b8) {
          local_18[0] = &DAT_145cfb5e4;
          uVar4 = FUN_143add0b0(local_98,*(undefined8 *)(local_98 + 0x30),local_d4,local_18,
                                &DAT_145cfb5e4,&local_b0,local_b0 + local_bc,0,0xffffffff,
                                *(undefined1 *)(param_1 + 2),param_3);
          if (0 < *param_3) {
            *(undefined4 *)(local_98 + 0x54) = uVar4;
LAB_143ada412:
            if (((*param_3 < 1) && (*(int *)(local_98 + 0xd0) < 0)) &&
               (pbVar5 = *(byte **)(param_2 + 0x18), local_c8 < pbVar5)) {
              bVar1 = *local_c8;
              *(byte *)(local_a8 + 0x41) = bVar1;
              local_d4 = (uint)bVar1;
              local_d7 = '\x01';
              if (bVar1 < 0xf0) {
                local_70 = (0xbf < bVar1) + (0xdf < bVar1);
              }
              else {
                if (bVar1 < 0xfe) {
                  local_78 = (0xf7 < bVar1) + '\x03' + (0xfb < bVar1);
                }
                else {
                  local_78 = '\0';
                }
                local_70 = local_78;
              }
              while (local_c8 = local_c8 + 1, local_c8 < pbVar5) {
                bVar1 = *local_c8;
                *(byte *)(local_a8 + 0x41 + (longlong)local_d7) = bVar1;
                local_d7 = local_d7 + '\x01';
                local_d4 = local_d4 * 0x40 + (uint)bVar1;
              }
              *(uint *)(local_a8 + 0x48) = local_d4;
              *(char *)(local_a8 + 0x40) = local_d7;
              *(int *)(local_a8 + 0x4c) = (int)(char)(local_70 + '\x01');
            }
            *(byte **)(param_2 + 0x10) = local_c8;
            *(byte **)(param_1 + 0x20) = local_b0;
            return;
          }
          if (-1 < *(int *)(local_98 + 0xd0)) {
            *param_3 = -0x7f;
            goto LAB_143ada412;
          }
          local_bc = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_b0;
        }
        else {
          *local_b0 = (byte)local_cc;
          local_b0 = local_b0 + 1;
          local_bc = local_bc + -1;
        }
LAB_143ad9b63:
        while( true ) {
          while( true ) {
            while( true ) {
              if (local_90 <= local_c8) goto LAB_143ada412;
              if (local_bc < 1) {
                *param_3 = 0xf;
                goto LAB_143ada412;
              }
              bVar1 = *local_c8;
              pbVar5 = local_c8 + 1;
              if ((char)bVar1 < '\0') break;
              local_2c = 1;
              if ((local_20 & 1 << ((byte)((int)(uint)bVar1 >> 2) & 0x1f)) == 0) {
                local_d4 = (uint)bVar1;
                local_cc = *(ushort *)(local_88 + (longlong)(int)(*local_28 + local_d4) * 2);
                local_c8 = pbVar5;
                goto LAB_143ada2c2;
              }
              *local_b0 = bVar1;
              local_b0 = local_b0 + 1;
              local_bc = local_bc + -1;
              local_c8 = pbVar5;
            }
            if (bVar1 < 0xe0) break;
            if (bVar1 != 0xe0) {
              local_d4 = 0xffffffff;
              local_c8 = pbVar5;
              goto LAB_143ad9e47;
            }
            bVar2 = *pbVar5 + 0x80;
            if (((0x3f < bVar2) || (bVar2 < 0x20)) || (bVar3 = local_c8[2] + 0x80, 0x3f < bVar3)) {
              local_d4 = 0xffffffff;
              local_c8 = pbVar5;
              goto LAB_143ad9e47;
            }
            local_c8 = local_c8 + 3;
            local_cc = *(ushort *)
                        (local_88 +
                        (longlong)(int)((uint)local_28[(int)(uint)bVar2] + (uint)bVar3) * 2);
            if (local_cc < local_b8) {
              local_d4 = (uint)bVar2 << 6 | (uint)bVar3;
              goto LAB_143ad9e47;
            }
            *local_b0 = (byte)local_cc;
            local_b0 = local_b0 + 1;
            local_bc = local_bc + -1;
          }
          if ((bVar1 < 0xc2) || (bVar2 = *pbVar5 + 0x80, 0x3f < bVar2)) {
            local_d4 = 0xffffffff;
            local_c8 = pbVar5;
            goto LAB_143ad9e47;
          }
          local_c8 = local_c8 + 2;
          local_cc = *(ushort *)
                      (local_88 +
                      (longlong)(int)((uint)local_28[(int)(bVar1 & 0x1f)] + (uint)bVar2) * 2);
          if (local_cc < local_b8) break;
          *local_b0 = (byte)local_cc;
          local_b0 = local_b0 + 1;
          local_bc = local_bc + -1;
        }
        local_d4 = (bVar1 & 0x1f) << 6 | (uint)bVar2;
LAB_143ad9e47:
      } while (-1 < (int)local_d4);
      local_d6 = '\0';
      local_d7 = '\x01';
      if (bVar1 < 0xf0) {
        local_68 = (uint)(0xbf < bVar1);
        local_3c = (uint)(0xdf < bVar1);
        local_44 = local_68 + local_3c;
      }
      else {
        if (bVar1 < 0xfe) {
          local_80 = (uint)(0xf7 < bVar1);
          local_54 = (uint)(0xfb < bVar1);
          local_6c = local_80 + 3 + local_54;
        }
        else {
          local_6c = 0;
        }
        local_44 = local_6c;
      }
      local_d4 = (uint)bVar1;
      local_d5 = (char)local_44 + '\x01';
    }
    if (*(byte **)(param_2 + 0x18) <= local_c8) {
      local_c8 = local_c8 + -(longlong)((int)local_d7 - (int)local_d6);
      for (; local_d6 < local_d7; local_d6 = local_d6 + '\x01') {
        *(byte *)(local_a8 + 0x41 + (longlong)local_d6) = *local_c8;
        local_c8 = local_c8 + 1;
      }
      *(uint *)(local_a8 + 0x48) = local_d4;
      *(char *)(local_a8 + 0x40) = local_d7;
      *(int *)(local_a8 + 0x4c) = (int)local_d5;
      *(byte **)(param_2 + 0x10) = local_c8;
      *(byte **)(param_1 + 0x20) = local_b0;
      return;
    }
    bVar1 = *local_c8;
    if ((bVar1 & 0xc0) != 0x80) goto LAB_143ada0a2;
    local_c8 = local_c8 + 1;
    local_d7 = local_d7 + '\x01';
    local_d4 = local_d4 * 0x40 + (uint)bVar1;
  } while( true );
}



// FUNCTION 143ada670 FUN_143ada670 body=3921 status=ok
// SIG undefined FUN_143ada670(void)

void FUN_143ada670(longlong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char local_e7;
  char local_e6;
  uint local_e4;
  char local_e0;
  ushort local_dc;
  byte *local_d8;
  int local_cc;
  byte *local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  byte local_a8;
  uint local_a4;
  byte *local_a0;
  uint local_98;
  uint local_90;
  longlong local_88;
  char local_80;
  uint local_7c;
  char local_78;
  int local_74;
  uint local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_58;
  int local_54;
  int local_50;
  int local_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  uint local_30;
  ushort *local_28;
  undefined4 local_20;
  undefined *local_18 [3];
  
  local_c0 = *(longlong *)(param_2 + 8);
  local_b0 = *(longlong *)(param_1 + 8);
  local_d8 = *(byte **)(param_2 + 0x10);
  local_a0 = *(byte **)(param_2 + 0x18);
  local_c8 = *(byte **)(param_1 + 0x20);
  local_cc = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  local_40 = *(longlong *)(*(longlong *)(local_b0 + 0x30) + 0x60);
  local_28 = *(ushort **)(*(longlong *)(local_b0 + 0x30) + 0x68);
  if ((*(uint *)(local_b0 + 0x38) & 0x10) == 0) {
    local_88 = *(longlong *)(*(longlong *)(local_b0 + 0x30) + 0xf0);
  }
  else {
    local_88 = *(longlong *)(*(longlong *)(local_b0 + 0x30) + 0xf8);
  }
  local_30 = *(uint *)(*(longlong *)(local_b0 + 0x30) + 0x10c);
  local_a8 = *(byte *)(*(longlong *)(local_b0 + 0x30) + 0x105) & 1;
  local_e4 = *(uint *)(local_c0 + 0x48);
  if (local_e4 == 0) {
    local_e0 = '\0';
    local_e6 = '\0';
  }
  else {
    local_e6 = *(char *)(local_c0 + 0x40);
    local_e0 = *(char *)(local_c0 + 0x4c);
  }
  local_38 = ((int)local_a0 - (int)local_d8) - ((int)local_e0 - (int)local_e6);
  local_b8 = 0;
  while( true ) {
    if ((2 < local_b8) || (local_38 <= local_b8)) goto LAB_143ada9d9;
    bVar1 = local_a0[-1 - (longlong)local_b8];
    if ((bVar1 & 0xc0) != 0x80) break;
    local_b8 = local_b8 + 1;
  }
  if (bVar1 < 0xf0) {
    local_68 = (uint)(0xbf < bVar1);
    local_7c = (uint)(0xdf < bVar1);
    local_48 = local_68 + local_7c;
  }
  else {
    if (bVar1 < 0xfe) {
      local_60 = (uint)(0xf7 < bVar1);
      local_58 = (uint)(0xfb < bVar1);
      local_50 = local_60 + 3 + local_58;
    }
    else {
      local_50 = 0;
    }
    local_48 = local_50;
  }
  if (local_b8 < local_48) {
    local_a0 = local_a0 + -(longlong)(local_b8 + 1);
  }
LAB_143ada9d9:
  if (local_e4 == 0) goto LAB_143adaa07;
  if (local_cc < 1) goto LAB_143adaa07;
  *(undefined4 *)(local_c0 + 0x48) = 0;
  *(undefined1 *)(local_c0 + 0x40) = 0;
  local_e7 = local_e6;
LAB_143adadd2:
  do {
    if (local_e0 <= local_e7) {
LAB_143adaf08:
      if (((local_e7 == local_e0) &&
          (((local_e7 == '\x03' || (local_e7 == '\x02')) &&
           (local_e4 = local_e4 - *(int *)(&DAT_145cfb5e8 + (longlong)local_e7 * 4),
           *(int *)(&DAT_145cfb5d0 + (longlong)local_e7 * 4) <= (int)local_e4)))) &&
         (((int)local_e4 < 0xd800 || (0xdfff < (int)local_e4)))) {
        local_a4 = *(uint *)(local_40 +
                            (longlong)
                            (int)((uint)*(ushort *)(local_40 + (longlong)((int)local_e4 >> 10) * 2)
                                 + ((int)local_e4 >> 4 & 0x3fU)) * 4);
      }
      else {
        if (((local_e7 != local_e0) || (local_e7 != '\x04')) ||
           ((local_e4 = local_e4 + 0xfc37df80, (int)local_e4 < 0x10000 || (0x10ffff < (int)local_e4)
            ))) {
          local_d8 = local_d8 + -(longlong)((int)local_e7 - (int)local_e6);
          for (; local_e6 < local_e7; local_e6 = local_e6 + '\x01') {
            *(byte *)(local_c0 + 0x41 + (longlong)local_e6) = *local_d8;
            local_d8 = local_d8 + 1;
          }
          *(char *)(local_c0 + 0x40) = local_e7;
          *(byte **)(param_2 + 0x10) = local_d8;
          *(byte **)(param_1 + 0x20) = local_c8;
          *param_3 = 0xc;
          return;
        }
        if (local_a8 == 0) {
          local_a4 = 0;
        }
        else {
          local_a4 = *(uint *)(local_40 +
                              (longlong)
                              (int)((uint)*(ushort *)
                                           (local_40 + (longlong)((int)local_e4 >> 10) * 2) +
                                   ((int)local_e4 >> 4 & 0x3fU)) * 4);
        }
      }
      local_dc = *(ushort *)
                  (local_88 + (ulonglong)((local_a4 & 0xffff) * 0x10 + (local_e4 & 0xf)) * 2);
      local_20 = 1;
      if ((local_a4 & 1 << ((byte)local_e4 & 0xf) + 0x10) != 0) goto LAB_143adb196;
      if ((((*(char *)(local_b0 + 0x3f) != '\0') || (local_e4 - 0xe000 < 0x1900)) ||
          (local_e4 - 0xf0000 < 0x20000)) && (local_dc != 0)) goto LAB_143adb196;
LAB_143adb26c:
      do {
        local_18[0] = &DAT_145cfb604;
        uVar4 = FUN_143add0b0(local_b0,*(undefined8 *)(local_b0 + 0x30),local_e4,local_18,
                              &DAT_145cfb604,&local_c8,local_c8 + local_cc,0,0xffffffff,
                              *(undefined1 *)(param_1 + 2),param_3);
        if (0 < *param_3) {
          *(undefined4 *)(local_b0 + 0x54) = uVar4;
LAB_143adb37f:
          if (((*param_3 < 1) && (*(int *)(local_b0 + 0xd0) < 0)) &&
             (pbVar5 = *(byte **)(param_2 + 0x18), local_d8 < pbVar5)) {
            bVar1 = *local_d8;
            *(byte *)(local_c0 + 0x41) = bVar1;
            local_e4 = (uint)bVar1;
            local_e7 = '\x01';
            if (bVar1 < 0xf0) {
              local_78 = (0xbf < bVar1) + (0xdf < bVar1);
            }
            else {
              if (bVar1 < 0xfe) {
                local_80 = (0xf7 < bVar1) + '\x03' + (0xfb < bVar1);
              }
              else {
                local_80 = '\0';
              }
              local_78 = local_80;
            }
            while (local_d8 = local_d8 + 1, local_d8 < pbVar5) {
              bVar1 = *local_d8;
              *(byte *)(local_c0 + 0x41 + (longlong)local_e7) = bVar1;
              local_e7 = local_e7 + '\x01';
              local_e4 = local_e4 * 0x40 + (uint)bVar1;
            }
            *(uint *)(local_c0 + 0x48) = local_e4;
            *(char *)(local_c0 + 0x40) = local_e7;
            *(int *)(local_c0 + 0x4c) = (int)(char)(local_78 + '\x01');
          }
          *(byte **)(param_2 + 0x10) = local_d8;
          *(byte **)(param_1 + 0x20) = local_c8;
          return;
        }
        if (-1 < *(int *)(local_b0 + 0xd0)) {
          *param_3 = -0x7f;
          goto LAB_143adb37f;
        }
        local_cc = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_c8;
LAB_143adaa07:
        while( true ) {
          if (local_a0 <= local_d8) goto LAB_143adb37f;
          if (local_cc < 1) {
            *param_3 = 0xf;
            goto LAB_143adb37f;
          }
          bVar1 = *local_d8;
          pbVar5 = local_d8 + 1;
          if (-1 < (char)bVar1) break;
          if (bVar1 < 0xe1) {
            if (bVar1 < 0xe0) {
              if ((bVar1 < 0xc2) || (bVar2 = *pbVar5 + 0x80, 0x3f < bVar2)) {
                local_e4 = 0xffffffff;
                local_d8 = pbVar5;
              }
              else {
                local_e4 = bVar1 & 0x1f;
                local_d8 = local_d8 + 2;
                local_dc = *(ushort *)
                            (local_88 +
                            (longlong)(int)((uint)local_28[(int)local_e4] + (uint)bVar2) * 2);
                if (local_dc == 0) {
                  local_e4 = local_e4 << 6 | (uint)bVar2;
                  goto LAB_143adb26c;
                }
              }
            }
            else {
              local_e4 = 0xffffffff;
              local_d8 = pbVar5;
            }
          }
          else {
            bVar2 = *pbVar5 + 0x80;
            if ((((bVar1 < 0xed) && (bVar2 < 0x40)) || ((bVar1 == 0xed && (bVar2 < 0x20)))) &&
               (bVar3 = local_d8[2] + 0x80, bVar3 < 0x40)) {
              local_e4 = (bVar1 & 0xf) << 6 | (uint)bVar2;
              local_d8 = local_d8 + 3;
              local_dc = *(ushort *)
                          (local_88 +
                          (longlong)(int)((uint)local_28[(int)local_e4] + (uint)bVar3) * 2);
              if (local_dc == 0) {
                local_e4 = local_e4 << 6 | (uint)bVar3;
                goto LAB_143adb26c;
              }
            }
            else {
              local_e4 = 0xffffffff;
              local_d8 = pbVar5;
            }
          }
          if ((int)local_e4 < 0) {
            local_e6 = '\0';
            local_e7 = '\x01';
            if (bVar1 < 0xf0) {
              local_90 = (uint)(0xbf < bVar1);
              local_70 = (uint)(0xdf < bVar1);
              local_74 = local_90 + local_70;
            }
            else {
              if (bVar1 < 0xfe) {
                local_64 = (uint)(0xf7 < bVar1);
                local_98 = (uint)(0xfb < bVar1);
                local_54 = local_64 + 3 + local_98;
              }
              else {
                local_54 = 0;
              }
              local_74 = local_54;
            }
            local_e0 = (char)local_74 + '\x01';
            local_e4 = (uint)bVar1;
            goto LAB_143adadd2;
          }
LAB_143adb196:
          if (local_dc < 0x100) {
            *local_c8 = (byte)local_dc;
            local_c8 = local_c8 + 1;
            local_cc = local_cc + -1;
          }
          else {
            *local_c8 = (byte)(local_dc >> 8);
            if (local_cc < 2) {
              *(byte *)(local_b0 + 0x68) = (byte)local_dc;
              *(undefined1 *)(local_b0 + 0x5b) = 1;
              *param_3 = 0xf;
              local_c8 = local_c8 + 1;
              goto LAB_143adb37f;
            }
            local_c8[1] = (byte)local_dc;
            local_c8 = local_c8 + 2;
            local_cc = local_cc + -2;
          }
        }
        local_34 = 1;
        if ((local_30 & 1 << ((byte)((int)(uint)bVar1 >> 2) & 0x1f)) != 0) {
          *local_c8 = bVar1;
          local_c8 = local_c8 + 1;
          local_cc = local_cc + -1;
          local_d8 = pbVar5;
          goto LAB_143adaa07;
        }
        local_dc = *(ushort *)(local_88 + (longlong)(int)((uint)*local_28 + (uint)bVar1) * 2);
        local_d8 = pbVar5;
        if (local_dc != 0) goto LAB_143adb196;
        local_e4 = (uint)bVar1;
      } while( true );
    }
    if (*(byte **)(param_2 + 0x18) <= local_d8) {
      local_d8 = local_d8 + -(longlong)((int)local_e7 - (int)local_e6);
      for (; local_e6 < local_e7; local_e6 = local_e6 + '\x01') {
        *(byte *)(local_c0 + 0x41 + (longlong)local_e6) = *local_d8;
        local_d8 = local_d8 + 1;
      }
      *(uint *)(local_c0 + 0x48) = local_e4;
      *(char *)(local_c0 + 0x40) = local_e7;
      *(int *)(local_c0 + 0x4c) = (int)local_e0;
      *(byte **)(param_2 + 0x10) = local_d8;
      *(byte **)(param_1 + 0x20) = local_c8;
      return;
    }
    bVar1 = *local_d8;
    if ((bVar1 & 0xc0) != 0x80) goto LAB_143adaf08;
    local_d8 = local_d8 + 1;
    local_e7 = local_e7 + '\x01';
    local_e4 = local_e4 * 0x40 + (uint)bVar1;
  } while( true );
}



// FUNCTION 143adb5d0 FUN_143adb5d0 body=1777 status=ok
// SIG undefined FUN_143adb5d0(void)

/* WARNING: Removing unreachable block (ram,0x000143adba39) */

ulonglong FUN_143adb5d0(longlong param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint uVar11;
  uint local_74;
  char local_68;
  byte *local_50;
  byte *local_48;
  byte *local_38;
  longlong local_28;
  byte *local_18;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar3 + 0x11a) < '\x01') {
    if ((*(byte *)(*(longlong *)(lVar3 + 0x30) + 0x105) & 2) == 0) {
      if (*(char *)(*(longlong *)(lVar3 + 0x30) + 0x38) == '\x01') {
        uVar9 = FUN_143ae0620(param_1,param_2);
      }
      else {
        pbVar4 = *(byte **)(param_1 + 0x18);
        if ((*(uint *)(lVar3 + 0x38) & 0x10) == 0) {
          local_28 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x40);
        }
        else {
          local_28 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x48);
        }
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x50);
        uVar11 = *(uint *)(lVar3 + 0x48);
        bVar6 = *(byte *)(lVar3 + 0x4c);
        if (bVar6 == 0) {
          bVar6 = *(byte *)(*(longlong *)(lVar3 + 0x30) + 0x39);
        }
        local_74 = 0xffffffff;
        local_50 = *(byte **)(param_1 + 0x10);
        pbVar10 = *(byte **)(param_1 + 0x10);
LAB_143adb709:
        do {
          local_48 = pbVar10;
          if (pbVar4 <= local_48) goto LAB_143adbaca;
          uVar2 = *(uint *)(local_28 + (ulonglong)bVar6 * 0x400 + (ulonglong)*local_48 * 4);
          pbVar10 = local_48 + 1;
          bVar7 = (byte)(uVar2 >> 0x18);
          if ((int)uVar2 < 0) {
            *(uint *)(lVar3 + 0x4c) = (uint)bVar6;
            bVar6 = bVar7 & 0x7f;
            bVar7 = (byte)(uVar2 >> 0x14) & 0xf;
            local_48 = pbVar10;
            if ((uVar2 >> 0x14 & 0xf) == 0) {
              local_74 = uVar2 & 0xffff;
              goto LAB_143adbaca;
            }
            if (bVar7 == 4) {
              uVar11 = uVar11 + (uVar2 & 0xffff);
              local_74 = (uint)*(ushort *)(lVar5 + (ulonglong)uVar11 * 2);
              if (local_74 < 0xfffe) goto LAB_143adbaca;
              if (local_74 == 0xfffe) {
                local_74 = FUN_143adee00(*(longlong *)(lVar3 + 0x30) + 0x38,uVar11);
                if (local_74 != 0xfffe) goto LAB_143adbaca;
              }
              else {
                *param_2 = 0xc;
              }
            }
            else if (bVar7 == 5) {
              uVar11 = uVar11 + (uVar2 & 0xffff);
              local_74 = (uint)*(ushort *)(lVar5 + (ulonglong)uVar11 * 2);
              uVar11 = uVar11 + 1;
              if (local_74 < 0xd800) goto LAB_143adbaca;
              if (local_74 < 0xe000) {
                local_74 = (local_74 & 0x3ff) * 0x400 + 0x2400 +
                           (uint)*(ushort *)(lVar5 + (ulonglong)uVar11 * 2);
                goto LAB_143adbaca;
              }
              if ((local_74 & 0xfffe) == 0xe000) {
                local_74 = (uint)*(ushort *)(lVar5 + (ulonglong)uVar11 * 2);
                goto LAB_143adbaca;
              }
              if (local_74 == 0xffff) {
                *param_2 = 0xc;
              }
            }
            else {
              if ((bVar7 == 1) || (bVar7 == 3)) {
                local_74 = (uVar2 & 0xfffff) + 0x10000;
                goto LAB_143adbaca;
              }
              if (bVar7 == 8) {
                if (*(char *)(*(longlong *)(lVar3 + 0x30) + 0x39) != '\0') {
                  bVar6 = *(byte *)(lVar3 + 0x4c);
                  *param_2 = 0xc;
                }
              }
              else {
                if (bVar7 == 2) {
                  local_74 = uVar2 & 0xffff;
                  goto LAB_143adbaca;
                }
                if (bVar7 != 6) {
                  if (bVar7 != 7) {
                    uVar11 = 0;
                    local_50 = pbVar10;
                    goto LAB_143adb709;
                  }
                  *param_2 = 0xc;
                }
              }
            }
            uVar11 = 0;
            if (*param_2 < 1) {
              *(undefined4 *)(lVar3 + 0x48) = 0;
              *(uint *)(lVar3 + 0x4c) = (uint)bVar6;
              *(byte **)(param_1 + 0x10) = local_50;
              return 0xfffffff7;
            }
            goto LAB_143adbaca;
          }
          uVar11 = uVar11 + (uVar2 & 0xffffff);
          bVar6 = bVar7;
        } while ((((pbVar4 <= pbVar10) ||
                  (uVar2 = *(uint *)(local_28 + (ulonglong)bVar7 * 0x400 + (ulonglong)*pbVar10 * 4),
                  -1 < (int)uVar2)) || ((uVar2 >> 0x14 & 0xf) != 4)) ||
                (local_74 = (uint)*(ushort *)(lVar5 + (ulonglong)(uVar11 + (uVar2 & 0xffff)) * 2),
                0xfffd < local_74));
        bVar6 = (byte)(uVar2 >> 0x18) & 0x7f;
        local_48 = local_48 + 2;
LAB_143adbaca:
        if ((int)local_74 < 0) {
          if (((*param_2 < 1) && (local_48 == pbVar4)) && (local_50 < local_48)) {
            local_18 = (byte *)(lVar3 + 0x41);
            *(char *)(lVar3 + 0x40) = (char)local_48 - (char)local_50;
            do {
              *local_18 = *local_50;
              local_18 = local_18 + 1;
              local_50 = local_50 + 1;
            } while (local_50 < local_48);
            *param_2 = 0xb;
          }
          else if (*param_2 < 1) {
            *param_2 = 8;
          }
          else {
            cVar1 = *(char *)(*(longlong *)(lVar3 + 0x30) + 0x39);
            *(byte *)(lVar3 + 0x41) = *local_50;
            local_38 = (byte *)(lVar3 + 0x42);
            local_50 = local_50 + 1;
            if (local_50 == local_48) {
              *(undefined1 *)(lVar3 + 0x40) = 1;
            }
            else {
              local_68 = '\x01';
              while ((local_50 < local_48 &&
                     (cVar8 = FUN_143addf60(local_28,bVar6,cVar1 != '\0',*local_50,bVar6,uVar11),
                     cVar8 == '\0'))) {
                *local_38 = *local_50;
                local_38 = local_38 + 1;
                local_50 = local_50 + 1;
                local_68 = local_68 + '\x01';
              }
              *(char *)(lVar3 + 0x40) = local_68;
              local_48 = local_50;
            }
          }
          local_74 = 0xffff;
        }
        *(undefined4 *)(lVar3 + 0x48) = 0;
        *(uint *)(lVar3 + 0x4c) = (uint)bVar6;
        *(byte **)(param_1 + 0x10) = local_48;
        uVar9 = (ulonglong)local_74;
      }
    }
    else {
      uVar9 = 0xfffffff7;
    }
  }
  else {
    uVar9 = 0xfffffff7;
  }
  return uVar9;
}



// FUNCTION 143adbce0 FUN_143adbce0 body=140 status=ok
// SIG undefined FUN_143adbce0(void)

void FUN_143adbce0(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  int local_14;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x30) + 0x39);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x40);
  for (local_14 = 0; local_14 < 0x100; local_14 = local_14 + 1) {
    *(bool *)(param_2 + local_14) =
         -1 < *(int *)((ulonglong)bVar1 * 0x400 + lVar2 + (longlong)local_14 * 4);
  }
  return;
}



// FUNCTION 143adbd70 FUN_143adbd70 body=561 status=ok
// SIG undefined FUN_143adbd70(void)

void FUN_143adbd70(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  int local_38;
  uint local_34;
  uint local_30;
  undefined1 local_28;
  undefined1 local_27 [7];
  undefined1 *local_20;
  longlong local_18;
  undefined1 *local_10;
  
  local_18 = *(longlong *)(param_1 + 8);
  if (*(char *)(local_18 + 0x5e) != '\0') {
    if (*(longlong *)(*(longlong *)(local_18 + 0x30) + 0x128) == 0) {
      local_34 = (uint)(*(ushort *)(local_18 + 0x8c) < 0x100);
      local_30 = local_34;
    }
    else {
      local_30 = (uint)*(char *)(local_18 + 0x5f);
    }
    if (local_30 != 0) {
      local_10 = (undefined1 *)(local_18 + 0x5e);
      local_38 = 1;
      goto LAB_143adbe30;
    }
  }
  local_10 = *(undefined1 **)(local_18 + 0x28);
  local_38 = (int)*(char *)(local_18 + 0x59);
LAB_143adbe30:
  *(undefined1 *)(local_18 + 0x5f) = 0;
  if (*(char *)(*(longlong *)(local_18 + 0x30) + 0x104) == '\f') {
    local_20 = &local_28;
    if (local_38 == 1) {
      if (*(int *)(local_18 + 0x50) == 2) {
        *(undefined4 *)(local_18 + 0x50) = 1;
        local_28 = 0xf;
        local_20 = local_27;
      }
      *local_20 = *local_10;
      local_20 = local_20 + 1;
    }
    else {
      if (local_38 != 2) {
        *param_3 = 1;
        return;
      }
      if (*(uint *)(local_18 + 0x50) < 2) {
        *(undefined4 *)(local_18 + 0x50) = 2;
        local_28 = 0xe;
        local_20 = local_27;
      }
      *local_20 = *local_10;
      local_20[1] = local_10[1];
      local_20 = local_20 + 2;
    }
    local_10 = &local_28;
    local_38 = (int)local_20 - (int)&local_28;
  }
  FUN_143b0cac0(param_1,local_10,local_38,param_2,param_3);
  return;
}



// FUNCTION 143adbfb0 FUN_143adbfb0 body=128 status=ok
// SIG undefined FUN_143adbfb0(void)

void FUN_143adbfb0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  if ((*(uint *)(param_1 + 0x38) & 0x8000) == 0) {
    FUN_143adf6b0(*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_4);
  }
  else {
    (*(code *)param_2[2])(*param_2,0,0xd7ff);
    (*(code *)param_2[2])(*param_2,0xe000,0x10ffff);
  }
  return;
}



// FUNCTION 143adc030 FUN_143adc030 body=2970 status=ok
// SIG undefined FUN_143adc030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143adc030(longlong param_1,longlong param_2,char *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_118 [32];
  int *local_f8;
  byte *local_e8;
  bool local_e0;
  undefined1 local_df;
  char *local_d8;
  int local_d0;
  uint local_cc;
  uint local_c8;
  byte local_c4;
  uint local_c0;
  longlong local_b8;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  void *local_90;
  uint local_88;
  uint local_84;
  uint local_78;
  int local_74;
  undefined4 local_70;
  char *local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined2 local_30;
  byte bStack_24;
  char local_23;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_e8 = (byte *)(param_1 + 0x38);
  local_e0 = false;
  if (*param_3 == '\x04') {
    local_ac = 8;
  }
  else {
    if (((*param_3 != '\x05') || ((byte)param_3[1] < 3)) ||
       ((*(uint *)(param_3 + 0x20) & 0xff80) != 0)) {
      *param_4 = 0xd;
      return;
    }
    local_ac = *(uint *)(param_3 + 0x20) & 0x3f;
    local_e0 = (*(uint *)(param_3 + 0x20) & 0x40) != 0;
    local_df = local_e0;
  }
  *(char *)(param_1 + 0x104) = param_3[0x18];
  if ((local_e0 != false) && (*(char *)(param_1 + 0x104) == '\0')) {
    *param_4 = 0xd;
    return;
  }
  local_9c = *(uint *)(param_3 + 0x18) >> 8;
  if (local_9c != 0) {
    *(char **)(param_1 + 0x128) = param_3 + local_9c;
  }
  local_d8 = param_3;
  if (*(char *)(param_1 + 0x104) == '\x0e') {
    local_58 = 0;
    puVar4 = &local_54;
    for (lVar3 = 0x24; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((longlong)puVar4 + 1);
    }
    local_60 = *(longlong *)(param_1 + 0x128);
    if (local_60 == 0) {
      *param_4 = 0xd;
      return;
    }
    if (*(int *)(param_2 + 4) != 1) {
      *param_4 = 0xe;
      return;
    }
    local_68 = param_3 + (local_ac << 2);
    iVar2 = _guard_xfg_dispatch_icall_nop(local_68,(char *)(*(longlong *)(param_1 + 0x18) + 4));
    if (iVar2 == 0) {
      *param_4 = 0xd;
      return;
    }
    local_58 = 0x28;
    local_54 = 2;
    local_50 = *(undefined1 *)(param_2 + 8);
    local_4e = *(undefined2 *)(param_2 + 10);
    local_4c = *(undefined4 *)(param_2 + 0xc);
    local_48 = *(undefined8 *)(param_2 + 0x10);
    local_40 = local_68;
    local_b8 = FUN_143abd9f0(&local_58,param_4);
    if (0 < *param_4) {
      return;
    }
    if ((*(char *)(*(longlong *)(local_b8 + 0x18) + 0x45) != '\x02') ||
       (*(longlong *)(local_b8 + 0x120) != 0)) {
      FUN_143abdb30(local_b8);
      *param_4 = 0xd;
      return;
    }
    if (*(char *)(param_2 + 8) != '\0') {
      FUN_143abdb30(local_b8);
      return;
    }
    _guard_xfg_dispatch_icall_nop(local_e8,(void *)(local_b8 + 0x38),0xf8);
    *(longlong *)(local_e8 + 0xe8) = local_b8;
    *(longlong *)(local_e8 + 0xf0) = local_60;
    local_e8[0x10] = 0;
    local_e8[0x11] = 0;
    local_e8[0x12] = 0;
    local_e8[0x13] = 0;
    local_e8[0x14] = 0;
    local_e8[0x15] = 0;
    local_e8[0x16] = 0;
    local_e8[0x17] = 0;
    local_e8[0xc0] = 0;
    local_e8[0xc1] = 0;
    local_e8[0xc2] = 0;
    local_e8[0xc3] = 0;
    local_e8[0xc4] = 0;
    local_e8[0xc5] = 0;
    local_e8[0xc6] = 0;
    local_e8[199] = 0;
    local_e8[0xe0] = 0;
    local_e8[0xe1] = 0;
    local_e8[0xe2] = 0;
    local_e8[0xe3] = 0;
    local_e8[0xe4] = 0;
    local_e8[0xe5] = 0;
    local_e8[0xe6] = 0;
    local_e8[0xe7] = 0;
    local_e8[0xd8] = 0;
    local_e8[0xd9] = 0;
    local_e8[0xda] = 0;
    local_e8[0xdb] = 0;
    local_e8[0xdc] = 0;
    local_e8[0xdd] = 0;
    local_e8[0xde] = 0;
    local_e8[0xdf] = 0;
    if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x45) == '\x01') ||
       ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x45) == '\x02' &&
        ('\x01' < *(char *)(*(longlong *)(param_1 + 0x18) + 0x46))))) {
      if (*(char *)(local_b8 + 0x104) == '\f') {
        uVar1 = *(uint *)(*(longlong *)(local_e8 + 8) + 0x38);
        if ((((int)uVar1 < 0) && ((uVar1 >> 0x14 & 0xf) == 8)) && ((uVar1 >> 0x18 & 0x7f) != 0)) {
          local_e8[1] = (byte)(uVar1 >> 0x18) & 0x7f;
          local_e8[0xcc] = 0xdb;
        }
      }
      else if ((((*(char *)(*(longlong *)(local_b8 + 0x18) + 0x45) == '\x02') &&
                (*(char *)(*(longlong *)(local_b8 + 0x18) + 0x46) == '\x01')) &&
               (*(char *)(*(longlong *)(local_b8 + 0x18) + 0x47) == '\x02')) && (*local_e8 < 0x80))
      {
        local_c0 = (uint)*local_e8;
        local_90 = (void *)FUN_143aa7a40((local_c0 + 1) * 0x400);
        if (local_90 == (void *)0x0) {
          FUN_143abdb30(local_b8);
          *param_4 = 7;
          return;
        }
        _guard_xfg_dispatch_icall_nop
                  (local_90,*(void **)(local_e8 + 8),(longlong)(int)(local_c0 * 0x400));
        for (local_d0 = 0; local_d0 < 0x100; local_d0 = local_d0 + 1) {
          if (*(int *)((longlong)local_90 + (longlong)local_d0 * 4) < 0) {
            *(uint *)((longlong)local_90 + (longlong)local_d0 * 4) = local_c0 << 0x18;
          }
        }
        for (local_d0 = 0; local_d0 < 0x100; local_d0 = local_d0 + 1) {
          *(undefined4 *)
           ((longlong)local_90 + (longlong)local_d0 * 4 + (longlong)(int)local_c0 * 0x400) =
               0x80700000;
        }
        *(void **)(local_e8 + 8) = local_90;
        *local_e8 = (char)local_c0 + 1;
        local_e8[2] = 1;
        local_e8[0xcc] = 0xdb;
      }
    }
  }
  else {
    local_c4 = *(byte *)(param_1 + 0x104);
    if ((3 < local_c4) && ((local_c4 < 8 || ((9 < local_c4 && (local_c4 != 0xc)))))) {
      *param_4 = 0xd;
      return;
    }
    if (*(char *)(param_2 + 8) != '\0') {
      return;
    }
    *local_e8 = param_3[4];
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_3 + 8);
    *(char **)(param_1 + 0x40) = param_3 + (local_ac << 2);
    *(ulonglong *)(param_1 + 0x58) =
         (ulonglong)*(uint *)(param_3 + 4) * 0x400 + *(longlong *)(param_1 + 0x40);
    *(char **)(param_1 + 0x50) = param_3 + *(uint *)(param_3 + 0xc);
    *(char **)(param_1 + 0x60) = param_3 + *(uint *)(param_3 + 0x10);
    *(char **)(param_1 + 0xf0) = param_3 + *(uint *)(param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_3 + 0x1c);
    local_30 = 0x14;
    FUN_143ac5310(*(undefined8 *)(param_1 + 8));
    if ((bStack_24 < 7) && ((bStack_24 != 6 || (local_23 == '\0')))) {
      local_e8[0xcd] = 3;
    }
    else {
      local_e8[0xcd] = *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4f) & 3;
    }
    if ((2 < (byte)local_d8[1]) && ((local_e8[0xcd] & 2) == 0)) {
      if (*local_e8 == 1) {
        local_88 = (uint)(0xe < (byte)local_d8[2]);
        local_98 = local_88;
      }
      else {
        local_a0 = (uint)(0xd6 < (byte)local_d8[2]);
        local_98 = local_a0;
      }
      if (local_98 != 0) {
        local_e8[0xce] = 1;
        if (*local_e8 == 1) {
          for (local_cc = 0; (int)local_cc < 0x40; local_cc = local_cc + 1) {
            *(undefined2 *)(local_e8 + (longlong)(int)local_cc * 2 + 0x38) =
                 *(undefined2 *)
                  (*(longlong *)(local_e8 + 0x28) +
                  (longlong)
                  (int)((uint)*(ushort *)
                               (*(longlong *)(local_e8 + 0x28) + (longlong)((int)local_cc >> 4) * 2)
                       + (local_cc & 0xf) * 4) * 2);
          }
          local_e8[0xd0] = 0xff;
          local_e8[0xd1] = 0xf;
        }
        else {
          if (local_e0 == false) {
            local_a4 = *(uint *)(local_e8 + 200);
          }
          else {
            local_a4 = 0;
          }
          *(ulonglong *)(local_e8 + 0x30) = (ulonglong)local_a4 + *(longlong *)(local_e8 + 0xb8);
          *(ushort *)(local_e8 + 0xd0) = (ushort)(byte)local_d8[2] << 8 | 0xff;
        }
      }
    }
    local_a8 = 0xffffffff;
    for (local_c8 = 0; (int)local_c8 < 0x80; local_c8 = local_c8 + 1) {
      if (*(uint *)(*(longlong *)(local_e8 + 8) + (longlong)(int)local_c8 * 4) !=
          (local_c8 | 0x80000000)) {
        local_70 = 1;
        local_a8 = local_a8 & ~(1 << ((byte)((int)local_c8 >> 2) & 0x1f));
      }
    }
    *(uint *)(local_e8 + 0xd4) = local_a8;
    if (local_e0 != false) {
      if ((local_e8[0xcd] & 1) == 0) {
        local_84 = 0x40;
      }
      else {
        local_84 = 0x440;
      }
      local_94 = local_84;
      local_78 = (uint)(*(int *)(local_d8 + 0x14) - *(int *)(local_d8 + 0x10)) / 4;
      local_74 = local_78 - local_84 / 2;
      local_f8 = param_4;
      FUN_143ade010(local_e8,local_84,local_74,*(undefined4 *)(local_d8 + 0x24));
    }
  }
  if (local_e8[0xce] != 0) {
    if (*local_e8 == 1) {
      *(undefined **)(param_1 + 0x28) = &DAT_145cfb610;
    }
    else if (local_e8[0xcc] == 1) {
      *(undefined **)(param_1 + 0x28) = &DAT_145cfb6a0;
    }
  }
  if ((local_e8[0xcc] == 0xdb) || (local_e8[0xcc] == 0xc)) {
    local_e8[0xd4] = 0;
    local_e8[0xd5] = 0;
    local_e8[0xd6] = 0;
    local_e8[0xd7] = 0;
  }
  return;
}



// FUNCTION 143adcbd0 FUN_143adcbd0 body=1240 status=ok
// SIG undefined FUN_143adcbd0(void)

undefined8 FUN_143adcbd0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort *puVar2;
  void *_Src;
  byte *pbVar3;
  undefined8 uVar4;
  void *_Dst;
  char *_Dest;
  void *local_50;
  
  pbVar3 = (byte *)(param_1 + 0x38);
  puVar2 = *(ushort **)(param_1 + 0x60);
  _Src = *(void **)(param_1 + 0xf0);
  if ((((*(char *)(param_1 + 0x104) != '\0') && (*(char *)(param_1 + 0x104) != '\f')) ||
      (*(int *)(*(longlong *)(param_1 + 0x40) + 0x94) != -0x7ffffff6)) ||
     (*(int *)(*(longlong *)(param_1 + 0x40) + 0x54) != -0x7fffff7b)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x104) == '\0') {
    if ((*(short *)((longlong)_Src + (longlong)(int)(puVar2[(int)(uint)*puVar2] + 10) * 2) != 0xf25)
       || (*(short *)((longlong)_Src + (longlong)(int)(puVar2[(int)(*puVar2 + 8)] + 5) * 2) != 0xf15
          )) {
      return 0;
    }
  }
  else {
    if (((*(uint *)(puVar2 + (longlong)(int)(uint)*puVar2 * 2) & 0x4000000) == 0) ||
       (*(short *)((longlong)_Src +
                  (ulonglong)
                  ((*(uint *)(puVar2 + (longlong)(int)(uint)*puVar2 * 2) & 0xffff) * 0x10 + 10) * 2)
        != 0x25)) {
      return 0;
    }
    if (((*(uint *)(puVar2 + (longlong)(int)(*puVar2 + 8) * 2) & 0x200000) == 0) ||
       (*(short *)((longlong)_Src +
                  (ulonglong)
                  ((*(uint *)(puVar2 + (longlong)(int)(*puVar2 + 8) * 2) & 0xffff) * 0x10 + 5) * 2)
        != 0x15)) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    *param_2 = 3;
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x100);
    local_50 = (void *)FUN_143aa7a40((uint)*pbVar3 * 0x400 + 0x50 + uVar1);
    if (local_50 == (void *)0x0) {
      *param_2 = 7;
      uVar4 = 0;
    }
    else {
      _guard_xfg_dispatch_icall_nop
                (local_50,*(void **)(param_1 + 0x40),(longlong)(int)((uint)*pbVar3 * 0x400));
      *(undefined4 *)((longlong)local_50 + 0x94) = 0x80000085;
      *(undefined4 *)((longlong)local_50 + 0x54) = 0x8000000a;
      _Dst = (void *)((longlong)local_50 + (ulonglong)*pbVar3 * 0x400);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar1);
      if (*(char *)(param_1 + 0x104) == '\0') {
        *(undefined2 *)((longlong)_Dst + (longlong)(int)(puVar2[(int)(uint)*puVar2] + 10) * 2) =
             0xf15;
        *(undefined2 *)((longlong)_Dst + (longlong)(int)(puVar2[(int)(*puVar2 + 8)] + 5) * 2) =
             0xf25;
      }
      else {
        *(undefined2 *)
         ((longlong)_Dst +
         (ulonglong)((*(uint *)(puVar2 + (longlong)(int)(uint)*puVar2 * 2) & 0xffff) * 0x10 + 10) *
         2) = 0x15;
        *(undefined2 *)
         ((longlong)_Dst +
         (ulonglong)((*(uint *)(puVar2 + (longlong)(int)(*puVar2 + 8) * 2) & 0xffff) * 0x10 + 5) * 2
         ) = 0x25;
      }
      _Dest = (char *)((longlong)_Dst + (ulonglong)uVar1);
      _guard_xfg_dispatch_icall_nop(_Dest,(char *)(*(longlong *)(param_1 + 0x18) + 4));
      _guard_xfg_dispatch_icall_nop(_Dest,",swaplfnl");
      FUN_143ab2410(0);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        *(void **)(param_1 + 0x48) = local_50;
        *(void **)(param_1 + 0xf8) = _Dst;
        *(char **)(param_1 + 0x118) = _Dest;
        local_50 = (void *)0x0;
      }
      FUN_143ab2470(0);
      if (local_50 != (void *)0x0) {
        FUN_143aa79f0(local_50);
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}



// FUNCTION 143add0b0 FUN_143add0b0 body=721 status=ok
// SIG undefined FUN_143add0b0(void)

uint FUN_143add0b0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined1 param_10,undefined4 *param_11)

{
  char cVar1;
  uint uVar2;
  char local_24;
  char local_23;
  char cStack_22;
  char cStack_21;
  uint local_20;
  uint *local_18;
  longlong local_10;
  
  *(undefined1 *)(param_1 + 0x5f) = 0;
  local_10 = *(longlong *)(param_2 + 0x128);
  if ((local_10 != 0) &&
     (cVar1 = FUN_143b0f300(param_1,local_10,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                            ,param_10,param_11), cVar1 != '\0')) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x38) & 0x8000) != 0) {
    local_18 = &DAT_145cfb730;
    for (local_20 = 0; local_20 < 0xe; local_20 = local_20 + 1) {
      if ((*local_18 <= param_3) && (param_3 <= local_18[1])) {
        uVar2 = (local_18[2] - 0x19beb2) + (param_3 - *local_18);
        cStack_21 = (char)((ulonglong)uVar2 % 10) + '0';
        uVar2 = uVar2 / 10;
        cStack_22 = (char)((ulonglong)uVar2 % 0x7e) + -0x7f;
        uVar2 = uVar2 / 0x7e;
        local_23 = (char)((ulonglong)uVar2 % 10) + '0';
        local_24 = (char)(uVar2 / 10) + -0x7f;
        FUN_143b0d0e0(param_1,&local_24,4,param_6,param_7,param_8,param_9,param_11);
        return 0;
      }
      local_18 = local_18 + 4;
    }
  }
  *param_11 = 10;
  return param_3;
}



// FUNCTION 143add390 FUN_143add390 body=647 status=ok
// SIG undefined FUN_143add390(void)

ulonglong FUN_143add390(longlong param_1,longlong param_2,byte param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined4 param_9,undefined1 param_10,undefined4 *param_11)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint local_24;
  int *local_20;
  
  if ((*(longlong *)(param_2 + 0x128) != 0) &&
     (cVar1 = FUN_143b0f520(param_1,*(longlong *)(param_2 + 0x128),(int)(char)param_3,param_4,
                            param_5,param_6,param_7,param_8,param_9,param_10,param_11),
     cVar1 != '\0')) {
    return (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  if ((param_3 == 4) && ((*(uint *)(param_1 + 0x38) & 0x8000) != 0)) {
    uVar2 = (((uint)*(byte *)(param_1 + 0x41) * 10 + (uint)*(byte *)(param_1 + 0x42)) * 0x7e +
            (uint)*(byte *)(param_1 + 0x43)) * 10 + (uint)*(byte *)(param_1 + 0x44);
    local_20 = &DAT_145cfb730;
    for (local_24 = 0; local_24 < 0xe; local_24 = local_24 + 1) {
      if (((uint)local_20[2] <= uVar2) && (uVar2 <= (uint)local_20[3])) {
        *param_11 = 0;
        uVar3 = FUN_143b0d2e0(param_1,(uVar2 - local_20[2]) + *local_20,param_6,param_7,param_8,
                              param_9,param_11);
        return uVar3 & 0xffffffffffffff00;
      }
      local_20 = local_20 + 4;
    }
  }
  *param_11 = 10;
  return (ulonglong)param_3;
}



// FUNCTION 143add620 FUN_143add620 body=919 status=ok
// SIG undefined FUN_143add620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143add620(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,code *param_6,
             undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_118 [32];
  uint local_f8;
  code *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  longlong local_b8;
  int local_b0;
  int local_ac;
  longlong local_a8;
  uint local_98 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_a8 = (longlong)param_3 * 0x400 + *(longlong *)(param_1 + 8);
  local_b8 = *(longlong *)(param_1 + 0x18);
  local_c8 = 0xffffffff;
  uVar2 = (int)*(char *)(param_2 + param_3) & 0x38;
  local_d4 = uVar2 << 2;
  if ((uVar2 == 0) && ('?' < *(char *)(param_2 + param_3))) {
    local_98[0] = 0xffffffff;
    local_d4 = 1;
  }
  local_ac = (((int)*(char *)(param_2 + param_3) & 7U) + 1) * 0x20;
  uVar2 = local_d4;
  while( true ) {
    do {
      local_d4 = uVar2;
      if (local_ac <= (int)local_d4) {
        return CONCAT71((uint7)(uint3)((uint)local_ac >> 8),1);
      }
      local_d0 = *(uint *)(local_a8 + (longlong)(int)local_d4 * 4);
      if ((int)local_d0 < 0) {
        local_c4 = local_d0 >> 0x14 & 0xf;
        if (local_c4 == 0) {
          local_d8 = local_d0 & 0xffff;
        }
        else if (local_c4 == 4) {
          local_b0 = param_4 + (local_d0 & 0xffff);
          local_d8 = (uint)*(ushort *)(local_b8 + (longlong)local_b0 * 2);
          if (0xfffd < local_d8) {
            local_d8 = 0xffffffff;
          }
        }
        else if (local_c4 == 5) {
          local_cc = param_4 + (local_d0 & 0xffff);
          local_d8 = (uint)*(ushort *)(local_b8 + (longlong)local_cc * 2);
          local_cc = local_cc + 1;
          if (0xd7ff < local_d8) {
            if (local_d8 < 0xdc00) {
              local_d8 = (local_d8 & 0x3ff) * 0x400 + 0x2400 +
                         (uint)*(ushort *)(local_b8 + (longlong)local_cc * 2);
            }
            else if (local_d8 == 0xe000) {
              local_d8 = (uint)*(ushort *)(local_b8 + (longlong)local_cc * 2);
            }
            else {
              local_d8 = 0xffffffff;
            }
          }
        }
        else if (local_c4 == 1) {
          local_d8 = (local_d0 & 0xfffff) + 0x10000;
        }
        else {
          local_d8 = 0xffffffff;
        }
        local_98[(int)(local_d4 & 0x1f)] = local_d8;
        local_c8 = local_c8 & local_d8;
      }
      else {
        local_c0 = local_d0 >> 0x18;
        if (-1 < *(char *)(param_2 + (int)local_c0)) {
          local_f8 = param_5 << 8 | local_d4;
          local_e0 = param_8;
          local_e8 = param_7;
          local_f0 = param_6;
          cVar1 = FUN_143add620(param_1,param_2,local_c0,param_4 + (local_d0 & 0xffffff));
          if (cVar1 == '\0') {
            return 0;
          }
        }
        local_98[(int)(local_d4 & 0x1f)] = 0xffffffff;
      }
      uVar2 = local_d4 + 1;
    } while (((uVar2 & 0x1f) != 0) || ((int)local_c8 < 0));
    uVar3 = local_d4 - 0x1f;
    local_d4 = uVar2;
    cVar1 = (*param_6)(param_7,param_5 << 8 | uVar3,local_98);
    if (cVar1 == '\0') break;
    local_c8 = 0xffffffff;
    uVar2 = local_d4;
  }
  return 0;
}



// FUNCTION 143add9c0 FUN_143add9c0 body=430 status=ok
// SIG undefined FUN_143add9c0(void)

undefined4 FUN_143add9c0(int param_1,uint param_2,undefined1 *param_3)

{
  undefined4 local_18;
  
  local_18 = 0;
  if (param_1 == 0) {
    if ((param_2 & 0x1000) == 0) {
      if ((param_2 & 0x2000) == 0) {
        if ((param_2 & 0x4000) == 0) {
          *param_3 = 0xf;
          local_18 = 1;
        }
        else {
          *param_3 = 0x1a;
          param_3[1] = 0x71;
          local_18 = 2;
        }
      }
      else {
        *param_3 = 0x29;
        local_18 = 1;
      }
    }
    else {
      *param_3 = 10;
      param_3[1] = 0x41;
      local_18 = 2;
    }
  }
  else if (param_1 == 1) {
    if ((param_2 & 0x1000) == 0) {
      if ((param_2 & 0x2000) == 0) {
        if ((param_2 & 0x4000) == 0) {
          *param_3 = 0xe;
          local_18 = 1;
        }
        else {
          *param_3 = 0x1a;
          param_3[1] = 0x70;
          local_18 = 2;
        }
      }
      else {
        *param_3 = 0x28;
        local_18 = 1;
      }
    }
    else {
      *param_3 = 10;
      param_3[1] = 0x42;
      local_18 = 2;
    }
  }
  return local_18;
}



// FUNCTION 143addb70 FUN_143addb70 body=677 status=ok
// SIG undefined FUN_143addb70(void)

undefined1 FUN_143addb70(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int local_20;
  int local_1c;
  
  lVar3 = param_1 + (longlong)param_3 * 0x400;
  *(undefined1 *)(param_2 + param_3) = 0;
  local_20 = 0;
  do {
    uVar1 = *(uint *)(lVar3 + (longlong)local_20 * 4);
    uVar2 = uVar1 >> 0x18 & 0x7f;
    if (*(char *)(param_2 + (int)uVar2) == -1) {
      FUN_143addb70(param_1,param_2,uVar2);
    }
    if ((int)uVar1 < 0) {
      if ((uVar1 >> 0x14 & 0xf) < 6) goto LAB_143addc65;
    }
    else if (-1 < *(char *)(param_2 + (int)uVar2)) {
LAB_143addc65:
      *(byte *)(param_2 + param_3) = *(byte *)(param_2 + param_3) | (byte)((local_20 >> 5) << 3);
      local_1c = 0xff;
      break;
    }
    if (local_20 == 0xff) {
      *(undefined1 *)(param_2 + param_3) = 0xc0;
      return *(undefined1 *)(param_2 + param_3);
    }
    local_20 = local_20 + 1;
  } while( true );
LAB_143addca3:
  if (local_1c <= local_20) {
LAB_143addd26:
    *(byte *)(param_2 + param_3) = *(byte *)(param_2 + param_3) | (byte)(local_1c >> 5);
    for (; local_20 <= local_1c; local_20 = local_20 + 1) {
      uVar1 = *(uint *)(lVar3 + (longlong)local_20 * 4);
      uVar2 = uVar1 >> 0x18 & 0x7f;
      if (*(char *)(param_2 + (int)uVar2) == -1) {
        FUN_143addb70(param_1,param_2,uVar2);
      }
      if (((int)uVar1 < 0) &&
         (*(byte *)(param_2 + (int)uVar2) = *(byte *)(param_2 + (int)uVar2) | 0x40,
         (uVar1 >> 0x14 & 0xf) < 4)) {
        *(byte *)(param_2 + param_3) = *(byte *)(param_2 + param_3) | 0x40;
      }
    }
    return *(undefined1 *)(param_2 + param_3);
  }
  uVar1 = *(uint *)(lVar3 + (longlong)local_1c * 4);
  uVar2 = uVar1 >> 0x18 & 0x7f;
  if (*(char *)(param_2 + (int)uVar2) == -1) {
    FUN_143addb70(param_1,param_2,uVar2);
  }
  if ((int)uVar1 < 0) {
    if ((uVar1 >> 0x14 & 0xf) < 6) goto LAB_143addd26;
  }
  else if (-1 < *(char *)(param_2 + (int)uVar2)) goto LAB_143addd26;
  local_1c = local_1c + -1;
  goto LAB_143addca3;
}



// FUNCTION 143adde20 FUN_143adde20 body=313 status=ok
// SIG undefined FUN_143adde20(void)

longlong FUN_143adde20(longlong param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  uint local_14;
  
  lVar3 = param_1 + (ulonglong)param_2 * 0x400;
  if (((int)*(uint *)(lVar3 + 0x284) < 0) && ((*(uint *)(lVar3 + 0x284) >> 0x14 & 0xf) != 7)) {
    lVar3 = 1;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0x104);
    if (((int)uVar2 < 0) && (uVar2 = uVar2 >> 0x14 & 0xf, uVar2 != 7)) {
      lVar3 = 1;
    }
    else {
      local_14 = 0;
      while ((int)local_14 < 0x100) {
        uVar2 = *(uint *)(lVar3 + (longlong)(int)local_14 * 4);
        if (((int)uVar2 < 0) && ((uVar2 >> 0x14 & 0xf) != 7)) {
          return 1;
        }
        uVar2 = local_14 + 1;
        local_14 = uVar2;
      }
      local_14 = 0;
      while ((int)local_14 < 0x100) {
        uVar2 = *(uint *)(lVar3 + (longlong)(int)local_14 * 4);
        if ((-1 < (int)uVar2) && (cVar1 = FUN_143adde20(param_1,uVar2 >> 0x18), cVar1 != '\0')) {
          return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
        }
        uVar2 = local_14 + 1;
        local_14 = uVar2;
      }
      lVar3 = (ulonglong)(uVar2 >> 8) << 8;
    }
  }
  return lVar3;
}



// FUNCTION 143addf60 FUN_143addf60 body=172 status=ok
// SIG undefined FUN_143addf60(void)

ulonglong FUN_143addf60(longlong param_1,byte param_2,char param_3,byte param_4)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + (ulonglong)param_2 * 0x400 + (ulonglong)param_4 * 4);
  if ((int)uVar1 < 0) {
    bVar2 = (byte)(uVar1 >> 0x14) & 0xf;
    if ((bVar2 == 8) && (param_3 != '\0')) {
      uVar3 = (ulonglong)(uint3)(param_3 >> 7) << 8;
    }
    else {
      uVar3 = (ulonglong)(bVar2 != 7);
    }
  }
  else {
    uVar3 = FUN_143adde20(param_1,uVar1 >> 0x18);
  }
  return uVar3;
}



// FUNCTION 143ade010 FUN_143ade010 body=738 status=ok
// SIG undefined FUN_143ade010(void)

void FUN_143ade010(longlong param_1,uint param_2,int param_3,uint param_4,undefined4 *param_5)

{
  ushort uVar1;
  void *_Dst;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_48;
  int local_40;
  int local_3c;
  int local_30;
  
  uVar2 = param_4 * 4 + param_2 * 2 + *(int *)(param_1 + 200);
  uVar4 = FUN_143aa7a40(uVar2);
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    *param_5 = 7;
  }
  else {
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0xd8),0,(ulonglong)uVar2);
    _Dst = *(void **)(param_1 + 0xd8);
    _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 0x28),(ulonglong)(param_2 << 1));
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Dst + (ulonglong)(param_4 - param_3) * 4 + (ulonglong)param_2 * 2
                       ),(void *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2),
               (ulonglong)(uint)(param_3 << 2));
    *(void **)(param_1 + 0x28) = _Dst;
    *(ulonglong *)(param_1 + 0xb8) =
         (longlong)_Dst + (ulonglong)param_4 * 4 + (ulonglong)param_2 * 2;
    uVar1 = *(ushort *)(param_1 + 0xd0);
    local_40 = 0;
    local_30 = 0;
    while (local_40 < (int)(uVar1 + 1) >> 6) {
      local_48 = (uint)*(ushort *)((longlong)_Dst + (longlong)local_30 * 2);
      if (local_48 == param_2 / 2) {
        local_40 = local_40 + 0x10;
      }
      else {
        for (local_3c = 0; local_3c < 0x10; local_3c = local_3c + 1) {
          uVar2 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)local_40 * 2);
          local_40 = local_40 + 1;
          if (uVar2 != 0) {
            iVar3 = (int)uVar2 >> 4;
            *(int *)((longlong)_Dst + (longlong)(int)local_48 * 4) = iVar3;
            *(int *)((longlong)_Dst + (longlong)(int)(local_48 + 1) * 4) = iVar3 + 1;
            *(int *)((longlong)_Dst + (longlong)(int)(local_48 + 2) * 4) = iVar3 + 2;
            *(int *)((longlong)_Dst + (longlong)(int)(local_48 + 3) * 4) = iVar3 + 3;
          }
          local_48 = local_48 + 4;
        }
      }
      local_30 = local_30 + 1;
    }
    FUN_143adea70(param_1,FUN_143ae1af0,param_1,param_5);
  }
  return;
}



// FUNCTION 143ade300 FUN_143ade300 body=1891 status=ok
// SIG undefined FUN_143ade300(void)

void FUN_143ade300(longlong param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint local_88;
  int local_84;
  int *local_78;
  int local_70;
  int local_6c;
  uint local_68;
  undefined1 *local_60;
  longlong local_58;
  ushort *local_50;
  ushort local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  longlong local_38;
  ushort *local_30;
  undefined4 local_28;
  uint local_24;
  longlong local_20;
  longlong local_18;
  
  local_58 = *(longlong *)(param_1 + 8);
  bVar1 = *(byte *)(*(longlong *)(local_58 + 0x30) + 0x105);
  local_50 = *(ushort **)(param_1 + 0x10);
  local_30 = *(ushort **)(param_1 + 0x18);
  local_60 = *(undefined1 **)(param_1 + 0x20);
  local_84 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  local_78 = *(int **)(param_1 + 0x30);
  local_20 = *(longlong *)(*(longlong *)(local_58 + 0x30) + 0x60);
  local_18 = *(longlong *)(*(longlong *)(local_58 + 0x30) + 0x68);
  if ((*(uint *)(local_58 + 0x38) & 0x10) == 0) {
    local_38 = *(longlong *)(*(longlong *)(local_58 + 0x30) + 0xf0);
  }
  else {
    local_38 = *(longlong *)(*(longlong *)(local_58 + 0x30) + 0xf8);
  }
  local_24 = *(uint *)(*(longlong *)(local_58 + 0x30) + 0x10c);
  local_88 = *(uint *)(local_58 + 0x54);
  if (local_88 == 0) {
    local_44 = 0;
  }
  else {
    local_44 = -1;
  }
  local_6c = local_44;
  local_70 = 0;
  if (local_88 == 0) goto LAB_143ade48f;
  if (local_84 < 1) goto LAB_143ade48f;
LAB_143ade5fe:
  if (local_50 < local_30) {
    local_48 = *local_50;
    if ((local_48 & 0xfc00) == 0xdc00) {
      local_50 = local_50 + 1;
      local_70 = local_70 + 1;
      local_88 = local_88 * 0x400 + -0x35fdc00 + (uint)local_48;
      if ((bVar1 & 1) != 0) goto LAB_143ade6b5;
LAB_143ade786:
      *(ushort **)(param_1 + 0x10) = local_50;
      local_88 = FUN_143add0b0(local_58,*(undefined8 *)(local_58 + 0x30),local_88,&local_50,local_30
                               ,&local_60,local_60 + local_84,&local_78,local_6c,
                               *(undefined1 *)(param_1 + 2),param_2);
      local_70 = local_70 + (int)((longlong)local_50 - *(longlong *)(param_1 + 0x10) >> 1);
      if (*param_2 < 1) {
        local_84 = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_60;
        local_6c = local_70;
LAB_143ade48f:
        do {
          while( true ) {
            if (local_30 <= local_50) goto LAB_143adea1c;
            if (local_84 < 1) {
              *param_2 = 0xf;
              goto LAB_143adea1c;
            }
            uVar2 = *local_50;
            local_88 = (uint)uVar2;
            local_50 = local_50 + 1;
            local_70 = local_70 + 1;
            if ((0x7f < local_88) ||
               (local_3c = 1, (local_24 & 1 << ((byte)((int)local_88 >> 2) & 0x1f)) == 0)) break;
            local_88._0_1_ = (undefined1)uVar2;
            *local_60 = (undefined1)local_88;
            local_60 = local_60 + 1;
            if (local_78 != (int *)0x0) {
              *local_78 = local_6c;
              local_78 = local_78 + 1;
              local_6c = local_70;
            }
            local_84 = local_84 + -1;
            local_88 = 0;
          }
          if (local_88 < 0xd800) {
            local_68 = (uint)*(ushort *)
                              (local_38 +
                              (longlong)
                              (int)((uint)*(ushort *)(local_18 + (longlong)((int)local_88 >> 6) * 2)
                                   + (local_88 & 0x3f)) * 2);
joined_r0x000143ade780:
            if (local_68 == 0) goto LAB_143ade786;
          }
          else {
            if (((local_88 & 0xfffff800) == 0xd800) && ((bVar1 & 2) == 0)) {
              if ((uVar2 & 0x400) == 0) goto LAB_143ade5fe;
              *param_2 = 0xc;
              break;
            }
LAB_143ade6b5:
            local_40 = *(uint *)(local_20 +
                                (longlong)
                                (int)((uint)*(ushort *)
                                             (local_20 + (longlong)((int)local_88 >> 10) * 2) +
                                     ((int)local_88 >> 4 & 0x3fU)) * 4);
            local_68 = (uint)*(ushort *)
                              (local_38 +
                              (ulonglong)((local_40 & 0xffff) * 0x10 + (local_88 & 0xf)) * 2);
            local_28 = 1;
            if ((local_40 & 1 << ((byte)local_88 & 0xf) + 0x10) == 0) {
              if (((*(char *)(local_58 + 0x3f) != '\0') || (local_88 - 0xe000 < 0x1900)) ||
                 (local_88 - 0xf0000 < 0x20000)) goto joined_r0x000143ade780;
              goto LAB_143ade786;
            }
          }
          if (local_68 < 0x100) {
            *local_60 = (undefined1)local_68;
            local_60 = local_60 + 1;
            if (local_78 != (int *)0x0) {
              *local_78 = local_6c;
              local_78 = local_78 + 1;
            }
            local_84 = local_84 + -1;
          }
          else {
            *local_60 = (char)(local_68 >> 8);
            if (local_84 < 2) {
              if (local_78 != (int *)0x0) {
                *local_78 = local_6c;
                local_78 = local_78 + 1;
              }
              *(undefined1 *)(local_58 + 0x68) = (undefined1)local_68;
              *(undefined1 *)(local_58 + 0x5b) = 1;
              *param_2 = 0xf;
              local_88 = 0;
              local_60 = local_60 + 1;
              break;
            }
            local_60[1] = (undefined1)local_68;
            local_60 = local_60 + 2;
            if (local_78 != (int *)0x0) {
              *local_78 = local_6c;
              local_78[1] = local_6c;
              local_78 = local_78 + 2;
            }
            local_84 = local_84 + -2;
          }
          local_88 = 0;
          local_6c = local_70;
        } while( true );
      }
    }
    else {
      *param_2 = 0xc;
    }
  }
LAB_143adea1c:
  *(uint *)(local_58 + 0x54) = local_88;
  *(ushort **)(param_1 + 0x10) = local_50;
  *(undefined1 **)(param_1 + 0x20) = local_60;
  *(int **)(param_1 + 0x30) = local_78;
  return;
}



// FUNCTION 143adea70 FUN_143adea70 body=242 status=ok
// SIG undefined FUN_143adea70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143adea70(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  _guard_xfg_dispatch_icall_nop(local_98,-1,0x80);
  FUN_143addb70(*(undefined8 *)(param_1 + 8),local_98,0);
  for (local_a8 = 0; local_a8 < (int)(uint)*param_1; local_a8 = local_a8 + 1) {
    if ('?' < local_98[local_a8]) {
      local_c8 = 0;
      local_c0 = param_2;
      local_b8 = param_3;
      local_b0 = param_4;
      FUN_143add620(param_1,local_98,local_a8,0);
    }
  }
  return;
}



// FUNCTION 143adeb70 FUN_143adeb70 body=648 status=ok
// SIG undefined FUN_143adeb70(void)

int FUN_143adeb70(longlong param_1,uint param_2,uint *param_3,char param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int local_44;
  
  if (((int)param_2 < 0x10000) || ((*(byte *)(param_1 + 0x105) & 1) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (*(char *)(param_1 + 0x104) == '\0') {
      uVar2 = (uint)*(ushort *)
                     (*(longlong *)(param_1 + 0xf0) +
                     (longlong)
                     (int)((uint)*(ushort *)
                                  (lVar1 + (longlong)
                                           (int)((uint)*(ushort *)
                                                        (lVar1 + (longlong)((int)param_2 >> 10) * 2)
                                                + ((int)param_2 >> 4 & 0x3fU)) * 2) +
                          (param_2 & 0xf)) * 2);
      if (param_4 == '\0') {
        bVar5 = uVar2 < 0xc00;
      }
      else {
        bVar5 = uVar2 < 0x800;
      }
      if (!bVar5) {
        *param_3 = uVar2 & 0xff;
        return 1;
      }
    }
    else {
      uVar2 = *(uint *)(lVar1 + (longlong)
                                (int)((uint)*(ushort *)(lVar1 + (longlong)((int)param_2 >> 10) * 2)
                                     + ((int)param_2 >> 4 & 0x3fU)) * 4);
      if (*(char *)(param_1 + 0x104) != '\x01') {
        return -1;
      }
      uVar3 = (uint)*(ushort *)
                     (*(longlong *)(param_1 + 0xf0) +
                     (ulonglong)((uVar2 & 0xffff) * 0x10 + (param_2 & 0xf)) * 2);
      if (uVar3 < 0x100) {
        local_44 = 1;
      }
      else {
        local_44 = 2;
      }
      if (((uVar2 & 1 << ((byte)param_2 & 0xf) + 0x10) != 0) ||
         ((((param_4 != '\0' || (param_2 - 0xe000 < 0x1900)) || (param_2 - 0xf0000 < 0x20000)) &&
          (uVar3 != 0)))) {
        *param_3 = uVar3;
        return local_44;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x128) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_143b0f7c0(*(longlong *)(param_1 + 0x128),param_2,param_3,param_4);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
  }
  return iVar4;
}



// FUNCTION 143adee00 FUN_143adee00 body=166 status=ok
// SIG undefined FUN_143adee00(void)

undefined4 FUN_143adee00(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint local_28;
  uint local_24;
  
  if (*(uint *)(param_1 + 4) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_28 = 0;
    uVar2 = local_28;
    local_24 = *(uint *)(param_1 + 4);
    while (local_28 = uVar2, local_28 < local_24 - 1) {
      uVar3 = (local_28 + local_24) / 2;
      uVar2 = uVar3;
      if (param_2 < *(uint *)(lVar1 + (ulonglong)uVar3 * 8)) {
        uVar2 = local_28;
        local_24 = uVar3;
      }
    }
    if (param_2 == *(uint *)(lVar1 + (ulonglong)local_28 * 8)) {
      return *(undefined4 *)(lVar1 + 4 + (ulonglong)local_28 * 8);
    }
  }
  return 0xfffe;
}



// FUNCTION 143adeeb0 FUN_143adeeb0 body=2012 status=ok
// SIG undefined FUN_143adeeb0(void)

void FUN_143adeeb0(longlong param_1,undefined8 *param_2,int param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  uint local_98;
  ushort local_94;
  byte local_90;
  uint local_8c;
  ushort local_88;
  ushort *local_80;
  ushort local_78;
  uint local_6c;
  ushort local_68;
  ushort *local_38;
  
  lVar4 = *(longlong *)(param_1 + 0x60);
  if ((*(byte *)(param_1 + 0x105) & 1) == 0) {
    local_78 = 0x40;
  }
  else {
    local_78 = 0x440;
  }
  local_98 = 0;
  if (*(char *)(param_1 + 0x104) == '\0') {
    lVar5 = *(longlong *)(param_1 + 0xf0);
    if (param_3 == 0) {
      local_68 = 0xf00;
    }
    else {
      local_68 = 0x800;
    }
    for (local_88 = 0; local_88 < local_78; local_88 = local_88 + 1) {
      uVar2 = *(ushort *)(lVar4 + (ulonglong)local_88 * 2);
      if (local_78 < uVar2) {
        for (local_94 = 0; local_94 < 0x40; local_94 = local_94 + 1) {
          uVar6 = (uint)*(ushort *)(lVar4 + (ulonglong)uVar2 * 2 + (ulonglong)local_94 * 2);
          if (uVar6 == 0) {
            local_98 = local_98 + 0x10;
          }
          else {
            local_38 = (ushort *)(lVar5 + (ulonglong)uVar6 * 2);
            do {
              uVar3 = *local_38;
              local_38 = local_38 + 1;
              if (local_68 <= uVar3) {
                (*(code *)param_2[1])(*param_2,local_98);
              }
              local_98 = local_98 + 1;
            } while ((local_98 & 0xf) != 0);
          }
        }
      }
      else {
        local_98 = local_98 + 0x400;
      }
    }
    goto LAB_143adf652;
  }
  lVar5 = *(longlong *)(param_1 + 0xf0);
  bVar7 = param_3 == 1;
  cVar1 = *(char *)(param_1 + 0x104);
  if (cVar1 == '\x02') {
LAB_143adf121:
    local_6c = 3;
  }
  else if (cVar1 == '\x03') {
    local_6c = 4;
  }
  else {
    if (cVar1 == '\t') goto LAB_143adf121;
    local_6c = 2;
  }
  for (local_88 = 0; local_88 < local_78; local_88 = local_88 + 1) {
    uVar2 = *(ushort *)(lVar4 + (ulonglong)local_88 * 2);
    if ((uint)((int)(uint)local_78 >> 1) < (uint)uVar2) {
      for (local_94 = 0; local_94 < 0x40; local_94 = local_94 + 1) {
        local_8c = *(uint *)(lVar4 + (ulonglong)uVar2 * 4 + (ulonglong)local_94 * 4);
        if (local_8c == 0) {
          local_98 = local_98 + 0x10;
        }
        else {
          local_80 = (ushort *)(lVar5 + (ulonglong)(local_6c * 0x10 * (local_8c & 0xffff)));
          local_8c = local_8c >> 0x10;
          switch(param_4) {
          case 0:
            do {
              if ((local_8c & 1) == 0) {
                if (bVar7) {
                  local_90 = 0;
                  if (local_6c == 2) {
LAB_143adf2fc:
                    local_90 = local_90 | (byte)*local_80 | *(byte *)((longlong)local_80 + 1);
                    local_80 = local_80 + 1;
                  }
                  else {
                    if (local_6c == 3) {
LAB_143adf2da:
                      local_90 = local_90 | (byte)*local_80;
                      local_80 = (ushort *)((longlong)local_80 + 1);
                      goto LAB_143adf2fc;
                    }
                    if (local_6c == 4) {
                      local_90 = (byte)*local_80;
                      local_80 = (ushort *)((longlong)local_80 + 1);
                      goto LAB_143adf2da;
                    }
                  }
                  if (local_90 != 0) {
                    (*(code *)param_2[1])(*param_2,local_98);
                  }
                }
              }
              else {
                (*(code *)param_2[1])(*param_2,local_98);
                local_80 = (ushort *)((longlong)local_80 + (ulonglong)local_6c);
              }
              local_8c = local_8c >> 1;
              local_98 = local_98 + 1;
            } while ((local_98 & 0xf) != 0);
            break;
          case 1:
            do {
              if ((((local_8c & 1) != 0) || (bVar7)) && (0xff < *local_80)) {
                (*(code *)param_2[1])(*param_2,local_98);
              }
              local_8c = local_8c >> 1;
              local_80 = local_80 + 1;
              local_98 = local_98 + 1;
            } while ((local_98 & 0xf) != 0);
            break;
          case 2:
            do {
              if ((((local_8c & 1) != 0) || (bVar7)) &&
                 (((byte)*local_80 == 0x81 || ((byte)*local_80 == 0x82)))) {
                (*(code *)param_2[1])(*param_2,local_98);
              }
              local_8c = local_8c >> 1;
              local_80 = (ushort *)((longlong)local_80 + 3);
              local_98 = local_98 + 1;
            } while ((local_98 & 0xf) != 0);
            break;
          case 3:
            do {
              if ((((local_8c & 1) != 0) || (bVar7)) &&
                 ((0x813f < *local_80 && (*local_80 < 0xeffd)))) {
                (*(code *)param_2[1])(*param_2,local_98);
              }
              local_8c = local_8c >> 1;
              local_80 = local_80 + 1;
              local_98 = local_98 + 1;
            } while ((local_98 & 0xf) != 0);
            break;
          case 4:
            do {
              if ((((local_8c & 1) != 0) || (bVar7)) &&
                 (((ushort)(*local_80 + 0x5e5f) < 0x5d5e && ((*local_80 - 0xa1 & 0xff) < 0x5e)))) {
                (*(code *)param_2[1])(*param_2,local_98);
              }
              local_8c = local_8c >> 1;
              local_80 = local_80 + 1;
              local_98 = local_98 + 1;
            } while ((local_98 & 0xf) != 0);
            break;
          case 5:
            do {
              if (((((local_8c & 1) != 0) || (bVar7)) && ((ushort)(*local_80 + 0x5e5f) < 0x5c5e)) &&
                 ((*local_80 - 0xa1 & 0xff) < 0x5e)) {
                (*(code *)param_2[1])(*param_2,local_98);
              }
              local_8c = local_8c >> 1;
              local_80 = local_80 + 1;
              local_98 = local_98 + 1;
            } while ((local_98 & 0xf) != 0);
            break;
          default:
            *param_5 = 5;
            return;
          }
        }
      }
    }
    else {
      local_98 = local_98 + 0x400;
    }
  }
LAB_143adf652:
  FUN_143b0ee50(param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 143adf6b0 FUN_143adf6b0 body=101 status=ok
// SIG undefined FUN_143adf6b0(void)

void FUN_143adf6b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_143adeeb0(param_1,param_2,param_3,*(char *)(param_1 + 0x104) == -0x25,param_4);
  return;
}



// FUNCTION 143adf720 FUN_143adf720 body=61 status=ok
// SIG undefined FUN_143adf720(void)

bool FUN_143adf720(longlong param_1,byte param_2)

{
  return -1 < *(int *)(*(longlong *)(param_1 + 0x40) + (ulonglong)param_2 * 4);
}



// FUNCTION 143adf760 FUN_143adf760 body=766 status=ok
// SIG undefined FUN_143adf760(void)

/* WARNING: Removing unreachable block (ram,0x000143adf9b5) */
/* WARNING: Removing unreachable block (ram,0x000143adf9dc) */

ulonglong FUN_143adf760(longlong param_1,longlong param_2,int param_3,undefined1 param_4)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint local_34;
  int local_30;
  byte local_2c;
  int local_24;
  
  if (0 < param_3) {
    lVar1 = *(longlong *)(param_1 + 0x50);
    local_30 = 0;
    local_2c = *(byte *)(param_1 + 0x39);
    local_24 = 0;
    do {
      local_34 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)local_2c * 0x400 +
                          (ulonglong)*(byte *)(param_2 + local_24) * 4);
      local_24 = local_24 + 1;
      if ((int)local_34 < 0) {
        bVar2 = (byte)(local_34 >> 0x14) & 0xf;
        if (bVar2 == 4) {
          uVar4 = local_30 + (local_34 & 0xffff);
          local_34 = (uint)*(ushort *)(lVar1 + (ulonglong)uVar4 * 2);
          if (local_34 == 0xfffe) {
            local_34 = FUN_143adee00(param_1 + 0x38,uVar4);
          }
        }
        else if ((local_34 >> 0x14 & 0xf) == 0) {
          local_34 = local_34 & 0xffff;
        }
        else if (bVar2 == 5) {
          uVar4 = local_30 + (local_34 & 0xffff);
          local_34 = (uint)*(ushort *)(lVar1 + (ulonglong)uVar4 * 2);
          uVar4 = uVar4 + 1;
          if (0xd7ff < local_34) {
            if (local_34 < 0xe000) {
              local_34 = (local_34 & 0x3ff) * 0x400 + 0x2400 +
                         (uint)*(ushort *)(lVar1 + (ulonglong)uVar4 * 2);
            }
            else if ((local_34 & 0xfffe) == 0xe000) {
              local_34 = (uint)*(ushort *)(lVar1 + (ulonglong)uVar4 * 2);
            }
            else {
              if (local_34 == 0xffff) {
                return 0xffff;
              }
              local_34 = 0xfffe;
            }
          }
        }
        else if (bVar2 == 1) {
          local_34 = (local_34 & 0xfffff) + 0x10000;
        }
        else if (bVar2 == 2) {
          local_34 = local_34 & 0xffff;
        }
        else if (bVar2 == 3) {
          local_34 = (local_34 & 0xfffff) + 0x10000;
        }
        else {
          if (bVar2 != 6) {
            return 0xffff;
          }
          local_34 = 0xfffe;
        }
        if (local_24 == param_3) {
          if ((local_34 == 0xfffe) && (*(longlong *)(param_1 + 0x128) != 0)) {
            uVar3 = FUN_143b0f8b0(*(longlong *)(param_1 + 0x128),param_2,param_3,param_4);
            return uVar3;
          }
          return (ulonglong)local_34;
        }
        return 0xffff;
      }
      local_2c = (byte)(local_34 >> 0x18);
      local_30 = local_30 + (local_34 & 0xffffff);
    } while (local_24 != param_3);
  }
  return 0xffff;
}



// FUNCTION 143adfa80 FUN_143adfa80 body=1727 status=ok
// SIG undefined FUN_143adfa80(void)

void FUN_143adfa80(longlong param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint local_88;
  int local_84;
  int local_80;
  ushort *local_78;
  int local_70;
  ushort local_6c;
  ushort local_68;
  int local_64;
  ushort local_60;
  int *local_58;
  longlong local_50;
  undefined1 *local_48;
  longlong local_40;
  int local_38;
  int local_34;
  ushort *local_30;
  ushort *local_28;
  undefined4 local_20;
  uint local_1c;
  longlong local_18;
  longlong local_10;
  
  local_50 = *(longlong *)(param_1 + 8);
  local_78 = *(ushort **)(param_1 + 0x10);
  local_28 = *(ushort **)(param_1 + 0x18);
  local_48 = *(undefined1 **)(param_1 + 0x20);
  local_84 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  local_58 = *(int **)(param_1 + 0x30);
  local_18 = *(longlong *)(*(longlong *)(local_50 + 0x30) + 0x60);
  if ((*(uint *)(local_50 + 0x38) & 0x10) == 0) {
    local_10 = *(longlong *)(*(longlong *)(local_50 + 0x30) + 0xf0);
  }
  else {
    local_10 = *(longlong *)(*(longlong *)(local_50 + 0x30) + 0xf8);
  }
  local_1c = *(uint *)(*(longlong *)(local_50 + 0x30) + 0x10c);
  if (*(char *)(local_50 + 0x3f) == '\0') {
    local_6c = 0xc00;
  }
  else {
    local_6c = 0x800;
  }
  local_88 = *(uint *)(local_50 + 0x54);
  if (local_88 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = -1;
  }
  local_80 = local_38;
  iVar2 = (int)((longlong)local_28 - (longlong)local_78 >> 1);
  if (iVar2 < local_84) {
    local_84 = iVar2;
  }
  local_30 = local_78;
  if (local_88 == 0) goto LAB_143adfc37;
  if (local_84 < 1) goto LAB_143adfc37;
  while( true ) {
    if (local_28 <= local_78) {
      if (*(char *)(param_1 + 2) != '\0') {
        *param_2 = 0xb;
      }
      goto LAB_143ae0012;
    }
    local_68 = *local_78;
    if ((local_68 & 0xfc00) != 0xdc00) break;
    local_78 = local_78 + 1;
    local_88 = local_88 * 0x400 + -0x35fdc00 + (uint)local_68;
    do {
      if (local_88 < 0x10000) {
        local_34 = 1;
      }
      else {
        local_34 = 2;
      }
      local_70 = local_34;
      if (local_58 != (int *)0x0) {
        for (local_64 = (int)((longlong)local_78 - (longlong)local_30 >> 1) - local_34; 0 < local_64
            ; local_64 = local_64 + -1) {
          *local_58 = local_80;
          local_58 = local_58 + 1;
          local_80 = local_80 + 1;
        }
      }
      local_30 = local_78;
      local_88 = FUN_143add0b0(local_50,*(undefined8 *)(local_50 + 0x30),local_88,&local_78,local_28
                               ,&local_48,*(undefined8 *)(param_1 + 0x28),&local_58,local_80,
                               *(undefined1 *)(param_1 + 2),param_2);
      local_80 = local_80 + local_70 + (int)((longlong)local_78 - (longlong)local_30 >> 1);
      local_30 = local_78;
      if (0 < *param_2) goto LAB_143ae0012;
      local_84 = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_48;
      iVar2 = (int)((longlong)local_28 - (longlong)local_78 >> 1);
      if (iVar2 < local_84) {
        local_84 = iVar2;
      }
LAB_143adfc37:
      while( true ) {
        while( true ) {
          if (local_84 < 1) goto LAB_143ae0012;
          uVar1 = *local_78;
          local_88 = (uint)uVar1;
          local_78 = local_78 + 1;
          if ((0x7f < local_88) ||
             (local_20 = 1, (local_1c & 1 << ((byte)((int)local_88 >> 2) & 0x1f)) == 0)) break;
          local_88._0_1_ = (undefined1)uVar1;
          *local_48 = (undefined1)local_88;
          local_48 = local_48 + 1;
          local_88 = 0;
          local_84 = local_84 + -1;
        }
        local_60 = *(ushort *)
                    (local_10 +
                    (longlong)
                    (int)((uint)*(ushort *)
                                 (local_18 +
                                 (longlong)
                                 (int)((uint)*(ushort *)
                                              (local_18 + (longlong)((int)local_88 >> 10) * 2) +
                                      ((int)local_88 >> 4 & 0x3fU)) * 2) + (local_88 & 0xf)) * 2);
        if (local_60 < local_6c) break;
        *local_48 = (undefined1)local_60;
        local_48 = local_48 + 1;
        local_88 = 0;
        local_84 = local_84 + -1;
      }
    } while ((local_88 & 0xfffff800) != 0xd800);
    if ((uVar1 & 0x400) != 0) {
      *param_2 = 0xc;
LAB_143ae0012:
      if (((*param_2 < 1) && (local_78 < local_28)) &&
         (*(undefined1 **)(param_1 + 0x28) <= local_48)) {
        *param_2 = 0xf;
      }
      if (local_58 != (int *)0x0) {
        local_40 = (longlong)local_78 - (longlong)local_30 >> 1;
        if ((local_40 != 0) && (*param_2 == 0xb)) {
          local_40 = local_40 + -1;
        }
        for (; local_40 != 0; local_40 = local_40 + -1) {
          *local_58 = local_80;
          local_58 = local_58 + 1;
          local_80 = local_80 + 1;
        }
      }
      *(uint *)(local_50 + 0x54) = local_88;
      *(ushort **)(param_1 + 0x10) = local_78;
      *(undefined1 **)(param_1 + 0x20) = local_48;
      *(int **)(param_1 + 0x30) = local_58;
      return;
    }
  }
  *param_2 = 0xc;
  goto LAB_143ae0012;
}



// FUNCTION 143ae0150 FUN_143ae0150 body=1216 status=ok
// SIG undefined FUN_143ae0150(void)

void FUN_143ae0150(longlong param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint local_78;
  int local_74;
  int local_6c;
  ushort *local_68;
  ushort local_60;
  ushort local_5c;
  ushort local_58;
  longlong local_50;
  int local_48;
  undefined1 *local_40;
  int *local_38;
  int local_30;
  ushort *local_28;
  longlong local_20;
  longlong local_18;
  
  local_50 = *(longlong *)(param_1 + 8);
  local_68 = *(ushort **)(param_1 + 0x10);
  local_28 = *(ushort **)(param_1 + 0x18);
  local_40 = *(undefined1 **)(param_1 + 0x20);
  local_6c = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  local_38 = *(int **)(param_1 + 0x30);
  local_20 = *(longlong *)(*(longlong *)(local_50 + 0x30) + 0x60);
  if ((*(uint *)(local_50 + 0x38) & 0x10) == 0) {
    local_18 = *(longlong *)(*(longlong *)(local_50 + 0x30) + 0xf0);
  }
  else {
    local_18 = *(longlong *)(*(longlong *)(local_50 + 0x30) + 0xf8);
  }
  if (*(char *)(local_50 + 0x3f) == '\0') {
    local_5c = 0xc00;
  }
  else {
    local_5c = 0x800;
  }
  bVar1 = *(byte *)(*(longlong *)(local_50 + 0x30) + 0x105);
  local_78 = *(uint *)(local_50 + 0x54);
  if (local_78 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = -1;
  }
  local_48 = local_30;
  local_74 = 0;
  if (local_78 == 0) goto LAB_143ae02d7;
  if (local_6c < 1) goto LAB_143ae02d7;
LAB_143ae033e:
  if (local_68 < local_28) {
    local_60 = *local_68;
    if ((local_60 & 0xfc00) == 0xdc00) {
      local_68 = local_68 + 1;
      local_74 = local_74 + 1;
      local_78 = local_78 * 0x400 + -0x35fdc00 + (uint)local_60;
      if ((bVar1 & 1) != 0) goto LAB_143ae03d9;
      while( true ) {
        *(ushort **)(param_1 + 0x10) = local_68;
        local_78 = FUN_143add0b0(local_50,*(undefined8 *)(local_50 + 0x30),local_78,&local_68,
                                 local_28,&local_40,local_40 + local_6c,&local_38,local_48,
                                 *(undefined1 *)(param_1 + 2),param_2);
        local_74 = local_74 + (int)((longlong)local_68 - *(longlong *)(param_1 + 0x10) >> 1);
        if (0 < *param_2) break;
        local_6c = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_40;
        local_48 = local_74;
LAB_143ae02d7:
        while( true ) {
          if (local_28 <= local_68) goto LAB_143ae05c2;
          if (local_6c < 1) {
            *param_2 = 0xf;
            goto LAB_143ae05c2;
          }
          uVar2 = *local_68;
          local_78 = (uint)uVar2;
          local_68 = local_68 + 1;
          local_74 = local_74 + 1;
          if ((local_78 & 0xfffff800) == 0xd800) {
            if ((uVar2 & 0x400) == 0) goto LAB_143ae033e;
            *param_2 = 0xc;
            goto LAB_143ae05c2;
          }
LAB_143ae03d9:
          local_58 = *(ushort *)
                      (local_18 +
                      (longlong)
                      (int)((uint)*(ushort *)
                                   (local_20 +
                                   (longlong)
                                   (int)((uint)*(ushort *)
                                                (local_20 + (longlong)((int)local_78 >> 10) * 2) +
                                        ((int)local_78 >> 4 & 0x3fU)) * 2) + (local_78 & 0xf)) * 2);
          if (local_58 < local_5c) break;
          *local_40 = (undefined1)local_58;
          local_40 = local_40 + 1;
          if (local_38 != (int *)0x0) {
            *local_38 = local_48;
            local_38 = local_38 + 1;
          }
          local_6c = local_6c + -1;
          local_78 = 0;
          local_48 = local_74;
        }
      }
    }
    else {
      *param_2 = 0xc;
    }
  }
LAB_143ae05c2:
  *(uint *)(local_50 + 0x54) = local_78;
  *(ushort **)(param_1 + 0x10) = local_68;
  *(undefined1 **)(param_1 + 0x20) = local_40;
  *(int **)(param_1 + 0x30) = local_38;
  return;
}



// FUNCTION 143ae0620 FUN_143ae0620 body=381 status=ok
// SIG undefined FUN_143ae0620(void)

/* WARNING: Removing unreachable block (ram,0x000143ae073e) */

uint FUN_143ae0620(longlong param_1,int *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte *local_30;
  longlong local_20;
  
  lVar1 = *(longlong *)(param_1 + 8);
  pbVar2 = *(byte **)(param_1 + 0x10);
  if ((*(uint *)(lVar1 + 0x38) & 0x10) == 0) {
    local_20 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x40);
  }
  else {
    local_20 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x48);
  }
  do {
    local_30 = pbVar2;
    if (*(byte **)(param_1 + 0x18) <= local_30) goto LAB_143ae0791;
    uVar4 = *(uint *)(local_20 + (ulonglong)*local_30 * 4);
    *(byte **)(param_1 + 0x10) = local_30 + 1;
    if ((int)uVar4 < -0x7ff00000) {
      return uVar4 & 0xffff;
    }
    bVar3 = (byte)(uVar4 >> 0x14) & 0xf;
    if ((bVar3 == 1) || (bVar3 == 3)) {
      return (uVar4 & 0xfffff) + 0x10000;
    }
    if (bVar3 == 2) {
      return uVar4 & 0xffff;
    }
    if (bVar3 == 6) goto LAB_143ae0766;
    pbVar2 = local_30 + 1;
  } while (bVar3 != 7);
  *param_2 = 0xc;
LAB_143ae0766:
  if (*param_2 < 1) {
    *(byte **)(param_1 + 0x10) = local_30;
    uVar4 = 0xfffffff7;
  }
  else {
LAB_143ae0791:
    *param_2 = 8;
    uVar4 = 0xffff;
  }
  return uVar4;
}



// FUNCTION 143ae07b0 FUN_143ae07b0 body=3697 status=ok
// SIG undefined FUN_143ae07b0(void)

/* WARNING: Removing unreachable block (ram,0x000143ae1348) */

void FUN_143ae07b0(longlong param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  byte *pbVar18;
  undefined2 *puVar19;
  int local_78;
  undefined2 local_74;
  byte *local_70;
  uint local_68;
  undefined2 *local_60;
  int *local_58;
  byte local_50;
  int local_4c;
  int local_48;
  longlong local_40;
  int local_38;
  int local_34;
  longlong local_30;
  byte *local_28;
  byte *local_20;
  int local_18;
  longlong local_10;
  
  local_30 = *(longlong *)(param_1 + 8);
  local_70 = *(byte **)(param_1 + 0x10);
  local_20 = *(byte **)(param_1 + 0x18);
  local_60 = *(undefined2 **)(param_1 + 0x20);
  local_4c = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 1);
  local_58 = *(int **)(param_1 + 0x30);
  if ((*(uint *)(local_30 + 0x38) & 0x10) == 0) {
    local_40 = *(longlong *)(*(longlong *)(local_30 + 0x30) + 0x40);
  }
  else {
    local_40 = *(longlong *)(*(longlong *)(local_30 + 0x30) + 0x48);
  }
  local_78 = 0;
  local_38 = (int)local_20 - (int)local_70;
  local_28 = local_70;
  if (local_38 < local_4c) {
    local_4c = local_38;
  }
  do {
    pbVar18 = local_70;
    if (0xf < local_4c) {
      local_18 = local_4c >> 4;
      local_48 = local_18;
      do {
        uVar1 = *(uint *)(local_40 + (ulonglong)*local_70 * 4);
        local_74 = (undefined2)uVar1;
        *local_60 = local_74;
        uVar2 = *(uint *)(local_40 + (ulonglong)local_70[1] * 4);
        local_74 = (undefined2)uVar2;
        local_60[1] = local_74;
        uVar3 = *(uint *)(local_40 + (ulonglong)local_70[2] * 4);
        local_74 = (undefined2)uVar3;
        local_60[2] = local_74;
        uVar4 = *(uint *)(local_40 + (ulonglong)local_70[3] * 4);
        local_74 = (undefined2)uVar4;
        local_60[3] = local_74;
        uVar5 = *(uint *)(local_40 + (ulonglong)local_70[4] * 4);
        local_74 = (undefined2)uVar5;
        local_60[4] = local_74;
        uVar6 = *(uint *)(local_40 + (ulonglong)local_70[5] * 4);
        local_74 = (undefined2)uVar6;
        local_60[5] = local_74;
        uVar7 = *(uint *)(local_40 + (ulonglong)local_70[6] * 4);
        local_74 = (undefined2)uVar7;
        local_60[6] = local_74;
        uVar8 = *(uint *)(local_40 + (ulonglong)local_70[7] * 4);
        local_74 = (undefined2)uVar8;
        local_60[7] = local_74;
        uVar9 = *(uint *)(local_40 + (ulonglong)local_70[8] * 4);
        local_74 = (undefined2)uVar9;
        local_60[8] = local_74;
        uVar10 = *(uint *)(local_40 + (ulonglong)local_70[9] * 4);
        local_74 = (undefined2)uVar10;
        local_60[9] = local_74;
        uVar11 = *(uint *)(local_40 + (ulonglong)local_70[10] * 4);
        local_74 = (undefined2)uVar11;
        local_60[10] = local_74;
        uVar12 = *(uint *)(local_40 + (ulonglong)local_70[0xb] * 4);
        local_74 = (undefined2)uVar12;
        local_60[0xb] = local_74;
        uVar13 = *(uint *)(local_40 + (ulonglong)local_70[0xc] * 4);
        local_74 = (undefined2)uVar13;
        local_60[0xc] = local_74;
        uVar14 = *(uint *)(local_40 + (ulonglong)local_70[0xd] * 4);
        local_74 = (undefined2)uVar14;
        local_60[0xd] = local_74;
        uVar15 = *(uint *)(local_40 + (ulonglong)local_70[0xe] * 4);
        local_74 = (undefined2)uVar15;
        local_60[0xe] = local_74;
        uVar16 = *(uint *)(local_40 + (ulonglong)local_70[0xf] * 4);
        local_68 = uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 |
                   uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16;
        pbVar18 = local_70 + 0x10;
        local_74 = (undefined2)uVar16;
        local_60[0xf] = local_74;
        puVar19 = local_60 + 0x10;
        if (-0x7ff00001 < (int)local_68) break;
        local_48 = local_48 + -1;
        local_70 = pbVar18;
        local_60 = puVar19;
      } while (0 < local_48);
      local_48 = local_18 - local_48;
      local_4c = local_4c + local_48 * -0x10;
      pbVar18 = local_70;
      if (local_58 != (int *)0x0) {
        local_28 = local_28 + local_48 * 0x10;
        for (; 0 < local_48; local_48 = local_48 + -1) {
          *local_58 = local_78;
          local_58[1] = local_78 + 1;
          local_58[2] = local_78 + 2;
          local_58[3] = local_78 + 3;
          local_58[4] = local_78 + 4;
          local_58[5] = local_78 + 5;
          local_58[6] = local_78 + 6;
          local_58[7] = local_78 + 7;
          local_58[8] = local_78 + 8;
          local_58[9] = local_78 + 9;
          local_58[10] = local_78 + 10;
          local_58[0xb] = local_78 + 0xb;
          local_58[0xc] = local_78 + 0xc;
          local_58[0xd] = local_78 + 0xd;
          local_58[0xe] = local_78 + 0xe;
          local_58[0xf] = local_78 + 0xf;
          local_58 = local_58 + 0x10;
          local_78 = local_78 + 0x10;
        }
      }
    }
    do {
      while( true ) {
        while( true ) {
          local_70 = pbVar18;
          pbVar18 = local_70;
          if ((local_4c < 1) || (local_20 <= local_70)) goto LAB_143ae153e;
          uVar1 = *(uint *)(local_40 + (ulonglong)*local_70 * 4);
          pbVar18 = local_70 + 1;
          local_74 = (undefined2)uVar1;
          if (-0x7ff00001 < (int)uVar1) break;
          *local_60 = local_74;
          local_60 = local_60 + 1;
          local_4c = local_4c + -1;
        }
        local_50 = (byte)(uVar1 >> 0x14) & 0xf;
        if (local_50 != 2) break;
        *local_60 = local_74;
        local_60 = local_60 + 1;
        local_4c = local_4c + -1;
      }
      if (local_50 == 6) goto LAB_143ae137b;
    } while (local_50 != 7);
    *param_2 = 0xc;
LAB_143ae137b:
    if (local_58 != (int *)0x0) {
      local_34 = (int)pbVar18 - (int)local_28;
      while (local_34 = local_34 + -1, 0 < local_34) {
        *local_58 = local_78;
        local_58 = local_58 + 1;
        local_78 = local_78 + 1;
      }
    }
    if (0 < *param_2) {
LAB_143ae153e:
      local_70 = pbVar18;
      if (((*param_2 < 1) && (local_70 < local_20)) &&
         (*(undefined2 **)(param_1 + 0x28) <= local_60)) {
        *param_2 = 0xf;
      }
      if (local_58 != (int *)0x0) {
        for (local_10 = (longlong)local_70 - (longlong)local_28; local_10 != 0;
            local_10 = local_10 + -1) {
          *local_58 = local_78;
          local_58 = local_58 + 1;
          local_78 = local_78 + 1;
        }
      }
      *(byte **)(param_1 + 0x10) = local_70;
      *(undefined2 **)(param_1 + 0x20) = local_60;
      *(int **)(param_1 + 0x30) = local_58;
      return;
    }
    *(byte *)(local_30 + 0x41) = *local_70;
    local_70 = pbVar18;
    local_28 = pbVar18;
    uVar17 = FUN_143add390(local_30,*(undefined8 *)(local_30 + 0x30),1,&local_70,local_20,&local_60,
                           *(undefined8 *)(param_1 + 0x28),&local_58,local_78,
                           *(undefined1 *)(param_1 + 2),param_2);
    *(undefined1 *)(local_30 + 0x40) = uVar17;
    local_78 = local_78 + 1 + ((int)local_70 - (int)local_28);
    pbVar18 = local_70;
    if (0 < *param_2) goto LAB_143ae153e;
    local_4c = (int)(*(longlong *)(param_1 + 0x28) - (longlong)local_60 >> 1);
    local_38 = (int)local_20 - (int)local_70;
    if (local_38 < local_4c) {
      local_4c = local_38;
    }
  } while( true );
}



// FUNCTION 143ae1630 FUN_143ae1630 body=1192 status=ok
// SIG undefined FUN_143ae1630(void)

/* WARNING: Removing unreachable block (ram,0x000143ae1965) */

void FUN_143ae1630(longlong param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  ushort *puVar4;
  int local_54;
  int *local_50;
  uint local_48;
  ushort *local_40;
  ushort local_38;
  byte *local_30;
  longlong local_28;
  ushort *local_20;
  longlong local_18;
  byte *local_10;
  
  local_28 = *(longlong *)(param_1 + 8);
  local_10 = *(byte **)(param_1 + 0x18);
  local_40 = *(ushort **)(param_1 + 0x20);
  local_20 = *(ushort **)(param_1 + 0x28);
  local_50 = *(int **)(param_1 + 0x30);
  if ((*(uint *)(local_28 + 0x38) & 0x10) == 0) {
    local_18 = *(longlong *)(*(longlong *)(local_28 + 0x30) + 0x40);
  }
  else {
    local_18 = *(longlong *)(*(longlong *)(local_28 + 0x30) + 0x48);
  }
  local_54 = 0;
  local_30 = *(byte **)(param_1 + 0x10);
LAB_143ae16ff:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          pbVar3 = local_30;
          if (local_10 <= local_30) goto LAB_143ae1aa4;
          if (local_20 <= local_40) {
            *param_2 = 0xf;
            goto LAB_143ae1aa4;
          }
          local_48 = *(uint *)(local_18 + (ulonglong)*local_30 * 4);
          pbVar3 = local_30 + 1;
          if (-0x7ff00001 < (int)local_48) break;
          *local_40 = (ushort)local_48;
          local_40 = local_40 + 1;
          if (local_50 != (int *)0x0) {
            *local_50 = local_54;
            local_50 = local_50 + 1;
          }
          local_54 = local_54 + 1;
          local_30 = pbVar3;
        }
        bVar1 = (byte)(local_48 >> 0x14) & 0xf;
        if ((bVar1 != 1) && (bVar1 != 3)) break;
        *local_40 = (ushort)((int)(local_48 & 0xfffff) >> 10) | 0xd800;
        puVar4 = local_40 + 1;
        if (local_50 != (int *)0x0) {
          *local_50 = local_54;
          local_50 = local_50 + 1;
        }
        local_38 = (ushort)(local_48 & 0xfffff) & 0x3ff | 0xdc00;
        if (local_20 <= puVar4) {
          *(ushort *)(local_28 + 0x90) = local_38;
          *(undefined1 *)(local_28 + 0x5d) = 1;
          *param_2 = 0xf;
          local_40 = puVar4;
          goto LAB_143ae1aa4;
        }
        *puVar4 = local_38;
        local_40 = local_40 + 2;
        if (local_50 != (int *)0x0) {
          *local_50 = local_54;
          local_50 = local_50 + 1;
        }
        local_54 = local_54 + 1;
        local_30 = pbVar3;
      }
      if (bVar1 != 2) break;
      *local_40 = (ushort)local_48;
      local_40 = local_40 + 1;
      if (local_50 != (int *)0x0) {
        *local_50 = local_54;
        local_50 = local_50 + 1;
      }
      local_54 = local_54 + 1;
      local_30 = pbVar3;
    }
    if (bVar1 != 6) {
      if (bVar1 != 7) {
        local_54 = local_54 + 1;
        local_30 = pbVar3;
        goto LAB_143ae16ff;
      }
      *param_2 = 0xc;
    }
    if (0 < *param_2) goto LAB_143ae1aa4;
    *(byte **)(param_1 + 0x10) = pbVar3;
    *(byte *)(local_28 + 0x41) = *local_30;
    local_30 = pbVar3;
    uVar2 = FUN_143add390(local_28,*(undefined8 *)(local_28 + 0x30),1,&local_30,local_10,&local_40,
                          local_20,&local_50,local_54,*(undefined1 *)(param_1 + 2),param_2);
    *(undefined1 *)(local_28 + 0x40) = uVar2;
    local_54 = local_54 + 1 + ((int)local_30 - (int)*(undefined8 *)(param_1 + 0x10));
    pbVar3 = local_30;
    if (0 < *param_2) {
LAB_143ae1aa4:
      local_30 = pbVar3;
      *(byte **)(param_1 + 0x10) = local_30;
      *(ushort **)(param_1 + 0x20) = local_40;
      *(int **)(param_1 + 0x30) = local_50;
      return;
    }
  } while( true );
}



// FUNCTION 143ae1af0 FUN_143ae1af0 body=567 status=ok
// SIG undefined FUN_143ae1af0(void)

undefined8 FUN_143ae1af0(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint local_res10;
  uint local_54;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar5 = *(longlong *)(param_1 + 0xb8);
  uVar7 = 0;
  local_res10 = param_2;
  if (*(char *)(param_1 + 0xcc) == '\b') {
    if (0xffff < param_2) {
      if (param_2 < 0x8f0000) {
        local_res10 = param_2 & 0x7fff;
        uVar7 = (ulonglong)local_res10;
      }
      else {
        local_res10 = param_2 & 0xff7f;
        uVar7 = (ulonglong)local_res10;
      }
    }
  }
  else if ((*(char *)(param_1 + 0xcc) == '\t') && (0xffffff < param_2)) {
    if (param_2 < 0x8f000000) {
      local_res10 = param_2 & 0x7fffff;
      uVar7 = (ulonglong)local_res10;
    }
    else {
      local_res10 = param_2 & 0xff7fff;
      uVar7 = (ulonglong)local_res10;
    }
  }
  local_54 = 0;
  do {
    if (0x1f < (int)local_54) {
      return CONCAT71((int7)(uVar7 >> 8),1);
    }
    uVar3 = *(uint *)(param_3 + (longlong)(int)local_54 * 4);
    if (-1 < (int)uVar3) {
      puVar1 = (uint *)(lVar4 + (ulonglong)*(ushort *)(lVar4 + (longlong)((int)uVar3 >> 10) * 2) * 4
                       + (longlong)(int)((int)uVar3 >> 4 & 0x3f) * 4);
      iVar6 = (uint)(ushort)*puVar1 * 0x10 + (uVar3 & 0xf);
      cVar2 = *(char *)(param_1 + 0xcc);
      if (cVar2 == '\x02') {
LAB_143ae1c69:
        puVar8 = (undefined1 *)(lVar5 + iVar6 * 3);
        *puVar8 = (char)(local_res10 >> 0x10);
        puVar8[1] = (char)(local_res10 >> 8);
        puVar8[2] = (undefined1)local_res10;
      }
      else if (cVar2 == '\x03') {
        *(uint *)(lVar5 + (longlong)iVar6 * 4) = local_res10;
      }
      else {
        if (cVar2 == '\t') goto LAB_143ae1c69;
        *(undefined2 *)(lVar5 + (longlong)iVar6 * 2) = (undefined2)local_res10;
      }
      *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0xf) + 0x10;
    }
    local_res10 = local_res10 + 1;
    local_54 = local_54 + 1;
    uVar7 = (ulonglong)local_54;
  } while( true );
}



// FUNCTION 143ae1d30 FUN_143ae1d30 body=976 status=ok
// SIG undefined FUN_143ae1d30(void)

void FUN_143ae1d30(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int *local_20;
  byte *local_18;
  ushort *local_10;
  
  local_18 = *(byte **)(param_1 + 0x10);
  local_10 = *(ushort **)(param_1 + 0x20);
  uVar1 = (uint)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 1);
  local_20 = *(int **)(param_1 + 0x30);
  local_38 = 0;
  local_30 = (int)*(undefined8 *)(param_1 + 0x18) - (int)local_18;
  if ((int)uVar1 < (int)local_30) {
    *param_2 = 0xf;
    local_30 = uVar1;
  }
  local_34 = local_30;
  if (7 < (int)local_30) {
    local_28 = (int)local_30 >> 3;
    local_34 = local_30 & 7;
    local_2c = local_28;
    do {
      *local_10 = (ushort)*local_18;
      local_10[1] = (ushort)local_18[1];
      local_10[2] = (ushort)local_18[2];
      local_10[3] = (ushort)local_18[3];
      local_10[4] = (ushort)local_18[4];
      local_10[5] = (ushort)local_18[5];
      local_10[6] = (ushort)local_18[6];
      local_10[7] = (ushort)local_18[7];
      local_10 = local_10 + 8;
      local_18 = local_18 + 8;
      local_2c = local_2c + -1;
    } while (0 < local_2c);
    local_30 = local_34;
    if (local_20 != (int *)0x0) {
      do {
        *local_20 = local_38;
        local_20[1] = local_38 + 1;
        local_20[2] = local_38 + 2;
        local_20[3] = local_38 + 3;
        local_20[4] = local_38 + 4;
        local_20[5] = local_38 + 5;
        local_20[6] = local_38 + 6;
        local_20[7] = local_38 + 7;
        local_38 = local_38 + 8;
        local_20 = local_20 + 8;
        local_28 = local_28 + -1;
      } while (0 < local_28);
    }
  }
  for (; 0 < (int)local_34; local_34 = local_34 - 1) {
    *local_10 = (ushort)*local_18;
    local_10 = local_10 + 1;
    local_18 = local_18 + 1;
  }
  *(byte **)(param_1 + 0x10) = local_18;
  *(ushort **)(param_1 + 0x20) = local_10;
  if (local_20 != (int *)0x0) {
    for (; 0 < (int)local_30; local_30 = local_30 - 1) {
      *local_20 = local_38;
      local_20 = local_20 + 1;
      local_38 = local_38 + 1;
    }
    *(int **)(param_1 + 0x30) = local_20;
  }
  return;
}



// FUNCTION 143ae2100 FUN_143ae2100 body=88 status=ok
// SIG undefined FUN_143ae2100(void)

ulonglong FUN_143ae2100(longlong param_1,undefined4 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar1 < *(byte **)(param_1 + 0x18)) {
    *(byte **)(param_1 + 0x10) = pbVar1 + 1;
    uVar2 = (ulonglong)*pbVar1;
  }
  else {
    *param_2 = 8;
    uVar2 = 0xffff;
  }
  return uVar2;
}



// FUNCTION 143ae2160 FUN_143ae2160 body=2639 status=ok
// SIG undefined FUN_143ae2160(void)

void FUN_143ae2160(longlong param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  longlong lVar17;
  ushort *puVar18;
  int iVar19;
  ushort *puVar20;
  undefined1 *puVar21;
  undefined1 local_88;
  int local_80;
  ushort *local_78;
  undefined1 *local_70;
  int *local_68;
  int local_60;
  ushort local_5c;
  int local_58;
  uint local_54;
  ushort local_50;
  int local_44;
  int local_40;
  undefined1 *local_38;
  longlong local_20;
  
  lVar17 = *(longlong *)(param_1 + 8);
  local_78 = *(ushort **)(param_1 + 0x10);
  puVar18 = *(ushort **)(param_1 + 0x18);
  local_38 = *(undefined1 **)(param_1 + 0x20);
  local_58 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  local_68 = *(int **)(param_1 + 0x30);
  if (*(undefined **)(lVar17 + 0x30) == &DAT_145cfbc20) {
    local_50 = 0xff;
  }
  else {
    local_50 = 0x7f;
  }
  local_54 = *(uint *)(lVar17 + 0x54);
  if (local_54 == 0) {
    local_44 = 0;
  }
  else {
    local_44 = -1;
  }
  local_80 = local_44;
  iVar19 = (int)((longlong)puVar18 - (longlong)local_78 >> 1);
  if (iVar19 < local_58) {
    local_58 = iVar19;
  }
  local_70 = local_38;
  if ((local_54 == 0) || (local_58 < 1)) {
    if (0xf < local_58) {
      local_60 = local_58 >> 4;
      do {
        uVar16 = *local_78;
        local_88 = (undefined1)uVar16;
        *local_70 = local_88;
        uVar1 = local_78[1];
        local_88 = (undefined1)uVar1;
        local_70[1] = local_88;
        uVar2 = local_78[2];
        local_88 = (undefined1)uVar2;
        local_70[2] = local_88;
        uVar3 = local_78[3];
        local_88 = (undefined1)uVar3;
        local_70[3] = local_88;
        uVar4 = local_78[4];
        local_88 = (undefined1)uVar4;
        local_70[4] = local_88;
        uVar5 = local_78[5];
        local_88 = (undefined1)uVar5;
        local_70[5] = local_88;
        uVar6 = local_78[6];
        local_88 = (undefined1)uVar6;
        local_70[6] = local_88;
        uVar7 = local_78[7];
        local_88 = (undefined1)uVar7;
        local_70[7] = local_88;
        uVar8 = local_78[8];
        local_88 = (undefined1)uVar8;
        local_70[8] = local_88;
        uVar9 = local_78[9];
        local_88 = (undefined1)uVar9;
        local_70[9] = local_88;
        uVar10 = local_78[10];
        local_88 = (undefined1)uVar10;
        local_70[10] = local_88;
        uVar11 = local_78[0xb];
        local_88 = (undefined1)uVar11;
        local_70[0xb] = local_88;
        uVar12 = local_78[0xc];
        local_88 = (undefined1)uVar12;
        local_70[0xc] = local_88;
        uVar13 = local_78[0xd];
        local_88 = (undefined1)uVar13;
        local_70[0xd] = local_88;
        uVar14 = local_78[0xe];
        local_88 = (undefined1)uVar14;
        local_70[0xe] = local_88;
        uVar15 = local_78[0xf];
        puVar20 = local_78 + 0x10;
        local_88 = (undefined1)uVar15;
        local_70[0xf] = local_88;
        puVar21 = local_70 + 0x10;
        if (local_50 <
            (ushort)(uVar16 | uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9
                     | uVar10 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15)) break;
        local_60 = local_60 + -1;
        local_78 = puVar20;
        local_70 = puVar21;
      } while (0 < local_60);
      local_60 = (local_58 >> 4) - local_60;
      local_58 = local_58 + local_60 * -0x10;
      if (local_68 != (int *)0x0) {
        local_38 = local_38 + local_60 * 0x10;
        for (; 0 < local_60; local_60 = local_60 + -1) {
          *local_68 = local_80;
          local_68[1] = local_80 + 1;
          local_68[2] = local_80 + 2;
          local_68[3] = local_80 + 3;
          local_68[4] = local_80 + 4;
          local_68[5] = local_80 + 5;
          local_68[6] = local_80 + 6;
          local_68[7] = local_80 + 7;
          local_68[8] = local_80 + 8;
          local_68[9] = local_80 + 9;
          local_68[10] = local_80 + 10;
          local_68[0xb] = local_80 + 0xb;
          local_68[0xc] = local_80 + 0xc;
          local_68[0xd] = local_80 + 0xd;
          local_68[0xe] = local_80 + 0xe;
          local_68[0xf] = local_80 + 0xf;
          local_68 = local_68 + 0x10;
          local_80 = local_80 + 0x10;
        }
      }
    }
    local_5c = 0;
    for (; 0 < local_58; local_58 = local_58 + -1) {
      local_5c = *local_78;
      local_78 = local_78 + 1;
      if (local_50 < local_5c) break;
      *local_70 = (undefined1)local_5c;
      local_70 = local_70 + 1;
    }
    if (local_5c <= local_50) goto LAB_143ae2ae3;
    local_54 = (uint)local_5c;
    if (((local_54 & 0xfffff800) == 0xd800) && ((local_5c & 0x400) == 0)) goto LAB_143ae2a48;
  }
  else {
LAB_143ae2a48:
    if (puVar18 <= local_78) {
      *(uint *)(lVar17 + 0x54) = local_54;
      goto LAB_143ae2ae3;
    }
    uVar16 = *local_78;
    if ((uVar16 & 0xfc00) == 0xdc00) {
      local_78 = local_78 + 1;
      local_54 = local_54 * 0x400 + -0x35fdc00 + (uint)uVar16;
    }
  }
  if ((local_54 & 0xfffff800) == 0xd800) {
    local_40 = 0xc;
  }
  else {
    local_40 = 10;
  }
  *param_2 = local_40;
  *(uint *)(lVar17 + 0x54) = local_54;
LAB_143ae2ae3:
  if (local_68 != (int *)0x0) {
    for (local_20 = (longlong)local_70 - (longlong)local_38; local_20 != 0; local_20 = local_20 + -1
        ) {
      *local_68 = local_80;
      local_68 = local_68 + 1;
      local_80 = local_80 + 1;
    }
  }
  if (((*param_2 < 1) && (local_78 < puVar18)) && (*(undefined1 **)(param_1 + 0x28) <= local_70)) {
    *param_2 = 0xf;
  }
  *(ushort **)(param_1 + 0x10) = local_78;
  *(undefined1 **)(param_1 + 0x20) = local_70;
  *(int **)(param_1 + 0x30) = local_68;
  return;
}



// FUNCTION 143ae2bb0 FUN_143ae2bb0 body=979 status=ok
// SIG undefined FUN_143ae2bb0(void)

void FUN_143ae2bb0(longlong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte *local_50;
  int local_48;
  byte *local_40;
  byte *local_30;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  lVar3 = *(longlong *)(param_2 + 8);
  local_50 = *(byte **)(param_2 + 0x10);
  local_30 = *(byte **)(param_2 + 0x18);
  local_40 = *(byte **)(param_1 + 0x20);
  local_48 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  uVar2 = *(uint *)(lVar3 + 0x48);
  if ((uVar2 != 0) && (local_50 < local_30)) {
    if (local_48 == 0) {
      *param_3 = 0xf;
      return;
    }
    if ((((int)uVar2 < 0xc2) || (0xc3 < (int)uVar2)) ||
       (bVar1 = *local_50, 0x3f < (byte)(bVar1 + 0x80))) {
      *param_3 = -0x7f;
      return;
    }
    local_50 = local_50 + 1;
    *local_40 = (byte)((uVar2 & 3) << 6) | bVar1 + 0x80;
    local_40 = local_40 + 1;
    local_48 = local_48 + -1;
    *(undefined4 *)(lVar3 + 0x48) = 0;
    *(undefined1 *)(lVar3 + 0x40) = 0;
  }
  if ((local_50 < local_30) && ((byte)(local_30[-1] + 0x40) < 0x3e)) {
    local_30 = local_30 + -1;
  }
  do {
    if (local_30 <= local_50) {
LAB_143ae2e2c:
      if ((*param_3 < 1) && (local_50 < *(byte **)(param_2 + 0x18))) {
        bVar1 = *local_50;
        *(byte *)(lVar3 + 0x41) = bVar1;
        *(uint *)(lVar3 + 0x48) = (uint)bVar1;
        local_50 = local_50 + 1;
        *(undefined1 *)(lVar3 + 0x40) = 1;
        if (bVar1 < 0xf0) {
          local_10 = (uint)(0xbf < bVar1);
          local_1c = (uint)(0xdf < bVar1);
          local_18 = local_10 + local_1c;
        }
        else {
          if (bVar1 < 0xfe) {
            local_20 = (uint)(0xf7 < bVar1);
            local_14 = (uint)(0xfb < bVar1);
            local_c = local_20 + 3 + local_14;
          }
          else {
            local_c = 0;
          }
          local_18 = local_c;
        }
        *(int *)(lVar3 + 0x4c) = local_18 + 1;
      }
      *(byte **)(param_2 + 0x10) = local_50;
      *(byte **)(param_1 + 0x20) = local_40;
      return;
    }
    if (local_48 < 1) {
      *param_3 = 0xf;
      goto LAB_143ae2e2c;
    }
    bVar1 = *local_50;
    if ((char)bVar1 < '\0') {
      if (((bVar1 < 0xc2) || (0xc3 < bVar1)) || (bVar4 = local_50[1] + 0x80, 0x3f < bVar4)) {
        *(byte **)(param_2 + 0x10) = local_50;
        *(byte **)(param_1 + 0x20) = local_40;
        *param_3 = -0x7f;
        return;
      }
      local_50 = local_50 + 2;
      *local_40 = bVar1 << 6 | bVar4;
    }
    else {
      *local_40 = bVar1;
      local_50 = local_50 + 1;
    }
    local_40 = local_40 + 1;
    local_48 = local_48 + -1;
  } while( true );
}



// FUNCTION 143ae2f90 FUN_143ae2f90 body=53 status=ok
// SIG undefined FUN_143ae2f90(void)

void FUN_143ae2f90(undefined8 param_1,undefined8 *param_2)

{
  (*(code *)param_2[2])(*param_2,0,0xff);
  return;
}



// FUNCTION 143ae2fd0 FUN_143ae2fd0 body=1474 status=ok
// SIG undefined FUN_143ae2fd0(void)

void FUN_143ae2fd0(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  longlong lVar10;
  int iVar11;
  int local_74;
  byte local_70;
  int local_6c;
  int local_68;
  int *local_60;
  ushort *local_58;
  byte *local_50;
  ushort *local_30;
  longlong local_28;
  
  local_50 = *(byte **)(param_1 + 0x10);
  pbVar9 = *(byte **)(param_1 + 0x18);
  local_30 = *(ushort **)(param_1 + 0x20);
  local_68 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 1);
  local_60 = *(int **)(param_1 + 0x30);
  local_74 = 0;
  iVar11 = (int)pbVar9 - (int)local_50;
  if (iVar11 < local_68) {
    local_68 = iVar11;
  }
  local_58 = local_30;
  if (7 < local_68) {
    local_6c = local_68 >> 3;
    do {
      bVar1 = *local_50;
      *local_58 = (ushort)bVar1;
      bVar2 = local_50[1];
      local_58[1] = (ushort)bVar2;
      bVar3 = local_50[2];
      local_58[2] = (ushort)bVar3;
      bVar4 = local_50[3];
      local_58[3] = (ushort)bVar4;
      bVar5 = local_50[4];
      local_58[4] = (ushort)bVar5;
      bVar6 = local_50[5];
      local_58[5] = (ushort)bVar6;
      bVar7 = local_50[6];
      local_58[6] = (ushort)bVar7;
      bVar8 = local_50[7];
      local_58[7] = (ushort)bVar8;
      if (0x7f < (byte)(bVar1 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8)) break;
      local_50 = local_50 + 8;
      local_58 = local_58 + 8;
      local_6c = local_6c + -1;
    } while (0 < local_6c);
    local_6c = (local_68 >> 3) - local_6c;
    local_68 = local_68 + local_6c * -8;
    if (local_60 != (int *)0x0) {
      local_30 = local_30 + local_6c * 8;
      for (; 0 < local_6c; local_6c = local_6c + -1) {
        *local_60 = local_74;
        local_60[1] = local_74 + 1;
        local_60[2] = local_74 + 2;
        local_60[3] = local_74 + 3;
        local_60[4] = local_74 + 4;
        local_60[5] = local_74 + 5;
        local_60[6] = local_74 + 6;
        local_60[7] = local_74 + 7;
        local_74 = local_74 + 8;
        local_60 = local_60 + 8;
      }
    }
  }
  local_70 = 0;
  for (; 0 < local_68; local_68 = local_68 + -1) {
    local_70 = *local_50;
    local_50 = local_50 + 1;
    if (0x7f < local_70) break;
    *local_58 = (ushort)local_70;
    local_58 = local_58 + 1;
  }
  if (local_70 < 0x80) {
    if ((local_50 < pbVar9) && (*(ushort **)(param_1 + 0x28) <= local_58)) {
      *param_2 = 0xf;
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 8);
    *(byte *)(lVar10 + 0x41) = local_70;
    *(undefined1 *)(lVar10 + 0x40) = 1;
    *param_2 = 0xc;
  }
  if (local_60 != (int *)0x0) {
    for (local_28 = (longlong)local_58 - (longlong)local_30 >> 1; local_28 != 0;
        local_28 = local_28 + -1) {
      *local_60 = local_74;
      local_60 = local_60 + 1;
      local_74 = local_74 + 1;
    }
  }
  *(byte **)(param_1 + 0x10) = local_50;
  *(ushort **)(param_1 + 0x20) = local_58;
  *(int **)(param_1 + 0x30) = local_60;
  return;
}



// FUNCTION 143ae35a0 FUN_143ae35a0 body=181 status=ok
// SIG undefined FUN_143ae35a0(void)

ulonglong FUN_143ae35a0(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (pbVar2 < *(byte **)(param_1 + 0x18)) {
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x10) = pbVar2 + 1;
    if (bVar1 < 0x80) {
      uVar4 = (ulonglong)bVar1;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 8);
      *(byte *)(lVar3 + 0x41) = bVar1;
      *(undefined1 *)(lVar3 + 0x40) = 1;
      *param_2 = 0xc;
      uVar4 = 0xffff;
    }
  }
  else {
    *param_2 = 8;
    uVar4 = 0xffff;
  }
  return uVar4;
}



// FUNCTION 143ae3660 FUN_143ae3660 body=1409 status=ok
// SIG undefined FUN_143ae3660(void)

void FUN_143ae3660(longlong param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *local_40;
  byte *local_38;
  byte local_30;
  int local_2c;
  int local_28;
  
  if (*(int *)(*(longlong *)(param_2 + 8) + 0x48) == 0) {
    local_38 = *(byte **)(param_2 + 0x10);
    pbVar1 = *(byte **)(param_2 + 0x18);
    local_40 = *(byte **)(param_1 + 0x20);
    local_2c = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
    iVar2 = (int)pbVar1 - (int)local_38;
    if (iVar2 < local_2c) {
      local_2c = iVar2;
    }
    if (0xf < local_2c) {
      local_28 = local_2c >> 4;
      do {
        *local_40 = *local_38;
        local_40[1] = local_38[1];
        local_40[2] = local_38[2];
        local_40[3] = local_38[3];
        local_40[4] = local_38[4];
        local_40[5] = local_38[5];
        local_40[6] = local_38[6];
        local_40[7] = local_38[7];
        local_40[8] = local_38[8];
        local_40[9] = local_38[9];
        local_40[10] = local_38[10];
        local_40[0xb] = local_38[0xb];
        local_40[0xc] = local_38[0xc];
        local_40[0xd] = local_38[0xd];
        local_40[0xe] = local_38[0xe];
        local_40[0xf] = local_38[0xf];
        pbVar3 = local_40 + 0x10;
        pbVar4 = local_38 + 0x10;
        if (0x7f < (byte)(*local_40 | local_40[1] | local_40[2] | local_40[3] | local_40[4] |
                          local_40[5] | local_40[6] | local_40[7] | local_40[8] | local_40[9] |
                          local_40[10] | local_40[0xb] | local_40[0xc] | local_40[0xd] |
                          local_40[0xe] | local_40[0xf])) break;
        local_28 = local_28 + -1;
        local_40 = pbVar3;
        local_38 = pbVar4;
      } while (0 < local_28);
      local_2c = local_2c + ((local_2c >> 4) - local_28) * -0x10;
    }
    local_30 = 0;
    while ((0 < local_2c && (local_30 = *local_38, local_30 < 0x80))) {
      local_38 = local_38 + 1;
      *local_40 = local_30;
      local_40 = local_40 + 1;
      local_2c = local_2c + -1;
    }
    if (local_30 < 0x80) {
      if ((local_38 < pbVar1) && (*(byte **)(param_1 + 0x28) <= local_40)) {
        *param_3 = 0xf;
      }
    }
    else {
      *param_3 = 0xffffff81;
    }
    *(byte **)(param_2 + 0x10) = local_38;
    *(byte **)(param_1 + 0x20) = local_40;
  }
  else {
    *param_3 = 0xffffff81;
  }
  return;
}



// FUNCTION 143ae3bf0 FUN_143ae3bf0 body=53 status=ok
// SIG undefined FUN_143ae3bf0(void)

void FUN_143ae3bf0(undefined8 param_1,undefined8 *param_2)

{
  (*(code *)param_2[2])(*param_2,0,0x7f);
  return;
}



// FUNCTION 143ae3c30 FUN_143ae3c30 body=1051 status=ok
// SIG undefined FUN_143ae3c30(void)

void FUN_143ae3c30(longlong param_1,int *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  uint local_68;
  byte *local_60;
  ushort *local_48;
  int local_40;
  byte *local_38;
  byte local_20 [8];
  byte *local_18;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_48 = *(ushort **)(param_1 + 0x10);
  puVar3 = *(ushort **)(param_1 + 0x18);
  local_60 = *(byte **)(param_1 + 0x20);
  pbVar4 = *(byte **)(param_1 + 0x28);
  puVar5 = *(undefined **)(lVar2 + 0x30);
  if (*(int *)(lVar2 + 0x54) == 0) goto LAB_143ae3cde;
  if (pbVar4 <= local_60) goto LAB_143ae3cde;
  local_68 = *(uint *)(lVar2 + 0x54);
  *(undefined4 *)(lVar2 + 0x54) = 0;
  do {
    if (puVar3 <= local_48) {
      *(uint *)(lVar2 + 0x54) = local_68;
LAB_143ae3ffd:
      if ((local_48 < puVar3) && ((pbVar4 <= local_60 && (*param_2 < 1)))) {
        *param_2 = 0xf;
      }
      *(byte **)(param_1 + 0x20) = local_60;
      *(ushort **)(param_1 + 0x10) = local_48;
      return;
    }
    if (((local_68 & 0x400) != 0) || ((*local_48 & 0xfc00) != 0xdc00)) {
      *(uint *)(lVar2 + 0x54) = local_68;
      *param_2 = 0xc;
      goto LAB_143ae3ffd;
    }
    uVar1 = *local_48;
    local_48 = local_48 + 1;
    local_68 = local_68 * 0x400 + -0x35fdc00 + (uint)uVar1;
    do {
      if ((longlong)pbVar4 - (longlong)local_60 < 4) {
        local_18 = local_20;
      }
      else {
        local_18 = local_60;
      }
      local_38 = local_18;
      bVar6 = (byte)((int)local_68 >> 0xc);
      if ((int)local_68 < 0x10000) {
        local_40 = 2;
        *local_18 = bVar6 | 0xe0;
      }
      else {
        local_40 = 3;
        *local_18 = (byte)((int)local_68 >> 0x12) | 0xf0;
        local_18[1] = bVar6 & 0x3f | 0x80;
      }
      local_18[local_40 + -1] = (byte)((int)local_68 >> 6) & 0x3f | 0x80;
      local_18[local_40] = (byte)local_68 & 0x3f | 0x80;
      if (local_18 == local_60) {
        local_60 = local_60 + (local_40 + 1);
      }
      else {
        for (; local_38 <= local_20 + local_40; local_38 = local_38 + 1) {
          if (local_60 < pbVar4) {
            *local_60 = *local_38;
            local_60 = local_60 + 1;
          }
          else {
            *(byte *)(lVar2 + 0x68 + (longlong)*(char *)(lVar2 + 0x5b)) = *local_38;
            *(char *)(lVar2 + 0x5b) = *(char *)(lVar2 + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
        }
      }
LAB_143ae3cde:
      while( true ) {
        while( true ) {
          if ((puVar3 <= local_48) || (pbVar4 <= local_60)) goto LAB_143ae3ffd;
          uVar1 = *local_48;
          uVar7 = (uint)uVar1;
          local_48 = local_48 + 1;
          local_68._0_1_ = (byte)uVar1;
          if (0x7f < uVar7) break;
          *local_60 = (byte)local_68;
          local_60 = local_60 + 1;
        }
        if (0x7ff < uVar7) break;
        *local_60 = (byte)((int)uVar7 >> 6) | 0xc0;
        pbVar8 = local_60 + 1;
        if (pbVar8 < pbVar4) {
          *pbVar8 = (byte)local_68 & 0x3f | 0x80;
          local_60 = local_60 + 2;
        }
        else {
          *(byte *)(lVar2 + 0x68) = (byte)local_68 & 0x3f | 0x80;
          *(undefined1 *)(lVar2 + 0x5b) = 1;
          *param_2 = 0xf;
          local_60 = pbVar8;
        }
      }
      local_68 = uVar7;
    } while (((uVar7 & 0xfffff800) != 0xd800) || (puVar5 == &DAT_145cfc330));
  } while( true );
}



// FUNCTION 143ae4050 FUN_143ae4050 body=1414 status=ok
// SIG undefined FUN_143ae4050(void)

void FUN_143ae4050(longlong param_1,int *param_2)

{
  ushort uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint local_78;
  int local_74;
  byte *local_70;
  int *local_60;
  uint local_54;
  ushort *local_48;
  byte *local_40;
  int local_38;
  byte local_28 [8];
  ushort *local_20;
  byte *local_18;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_48 = *(ushort **)(param_1 + 0x10);
  local_60 = *(int **)(param_1 + 0x30);
  local_20 = *(ushort **)(param_1 + 0x18);
  local_70 = *(byte **)(param_1 + 0x20);
  pbVar3 = *(byte **)(param_1 + 0x28);
  puVar4 = *(undefined **)(lVar2 + 0x30);
  if ((*(int *)(lVar2 + 0x54) == 0) || (pbVar3 <= local_70)) {
    local_74 = 0;
    goto LAB_143ae4138;
  }
  local_78 = *(uint *)(lVar2 + 0x54);
  *(undefined4 *)(lVar2 + 0x54) = 0;
  local_74 = -1;
  local_38 = 0;
  do {
    if (local_20 <= local_48) {
      *(uint *)(lVar2 + 0x54) = local_78;
LAB_143ae456d:
      if ((local_48 < local_20) && ((pbVar3 <= local_70 && (*param_2 < 1)))) {
        *param_2 = 0xf;
      }
      *(byte **)(param_1 + 0x20) = local_70;
      *(ushort **)(param_1 + 0x10) = local_48;
      *(int **)(param_1 + 0x30) = local_60;
      return;
    }
    if (((local_78 & 0x400) != 0) || ((*local_48 & 0xfc00) != 0xdc00)) {
      *(uint *)(lVar2 + 0x54) = local_78;
      *param_2 = 0xc;
      goto LAB_143ae456d;
    }
    uVar1 = *local_48;
    local_48 = local_48 + 1;
    local_38 = local_38 + 1;
    local_78 = local_78 * 0x400 + -0x35fdc00 + (uint)uVar1;
    do {
      if ((longlong)pbVar3 - (longlong)local_70 < 4) {
        local_18 = local_28;
      }
      else {
        local_18 = local_70;
      }
      local_40 = local_18;
      bVar5 = (byte)((int)local_78 >> 0xc);
      if ((int)local_78 < 0x10000) {
        local_54 = 2;
        *local_18 = bVar5 | 0xe0;
      }
      else {
        local_54 = 3;
        *local_18 = (byte)((int)local_78 >> 0x12) | 0xf0;
        local_18[1] = bVar5 & 0x3f | 0x80;
      }
      local_18[(int)(local_54 - 1)] = (byte)((int)local_78 >> 6) & 0x3f | 0x80;
      local_18[(int)local_54] = (byte)local_78 & 0x3f | 0x80;
      if (local_18 == local_70) {
        local_70 = local_70 + (int)(local_54 + 1);
        *local_60 = local_74;
        local_60[1] = local_74;
        local_60[2] = local_74;
        if (2 < local_54) {
          local_60[3] = local_74;
        }
        local_60 = local_60 + (int)(local_54 + 1);
      }
      else {
        for (; local_40 <= local_28 + (int)local_54; local_40 = local_40 + 1) {
          if (local_70 < pbVar3) {
            *local_60 = local_74;
            local_60 = local_60 + 1;
            *local_70 = *local_40;
            local_70 = local_70 + 1;
          }
          else {
            *(byte *)(lVar2 + 0x68 + (longlong)*(char *)(lVar2 + 0x5b)) = *local_40;
            *(char *)(lVar2 + 0x5b) = *(char *)(lVar2 + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
        }
      }
      local_74 = local_38;
LAB_143ae4138:
      while( true ) {
        while( true ) {
          if ((local_20 <= local_48) || (pbVar3 <= local_70)) goto LAB_143ae456d;
          uVar1 = *local_48;
          uVar6 = (uint)uVar1;
          local_48 = local_48 + 1;
          local_78._0_1_ = (byte)uVar1;
          if (0x7f < uVar6) break;
          *local_60 = local_74;
          local_74 = local_74 + 1;
          *local_70 = (byte)local_78;
          local_70 = local_70 + 1;
          local_60 = local_60 + 1;
        }
        if (0x7ff < uVar6) break;
        *local_60 = local_74;
        *local_70 = (byte)((int)uVar6 >> 6) | 0xc0;
        pbVar7 = local_70 + 1;
        if (pbVar7 < pbVar3) {
          local_60[1] = local_74;
          local_74 = local_74 + 1;
          *pbVar7 = (byte)local_78 & 0x3f | 0x80;
          local_70 = local_70 + 2;
          local_60 = local_60 + 2;
        }
        else {
          *(byte *)(lVar2 + 0x68) = (byte)local_78 & 0x3f | 0x80;
          *(undefined1 *)(lVar2 + 0x5b) = 1;
          *param_2 = 0xf;
          local_70 = pbVar7;
          local_60 = local_60 + 1;
        }
      }
      local_38 = local_74 + 1;
      local_78 = uVar6;
    } while (((uVar6 & 0xfffff800) != 0xd800) || (puVar4 == &DAT_145cfc330));
  } while( true );
}



// FUNCTION 143ae45e0 FUN_143ae45e0 body=1002 status=ok
// SIG undefined FUN_143ae45e0(void)

void FUN_143ae45e0(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined *puVar5;
  ushort *puVar6;
  bool bVar7;
  uint local_68;
  int local_60;
  ushort *local_58;
  int local_40;
  byte *local_38;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_38 = *(byte **)(param_1 + 0x10);
  local_58 = *(ushort **)(param_1 + 0x20);
  pbVar3 = *(byte **)(param_1 + 0x18);
  puVar4 = *(ushort **)(param_1 + 0x28);
  puVar5 = *(undefined **)(lVar2 + 0x30);
  if (*(int *)(lVar2 + 0x48) == 0) goto LAB_143ae46c6;
  if (puVar4 <= local_58) goto LAB_143ae46c6;
  local_40 = *(int *)(lVar2 + 0x4c);
  local_60 = (int)*(char *)(lVar2 + 0x40);
  *(undefined1 *)(lVar2 + 0x40) = 0;
  local_68 = *(uint *)(lVar2 + 0x48);
  *(undefined4 *)(lVar2 + 0x48) = 0;
LAB_143ae4755:
  for (; local_60 < local_40; local_60 = local_60 + 1) {
    if (pbVar3 <= local_38) {
      *(uint *)(lVar2 + 0x48) = local_68;
      *(int *)(lVar2 + 0x4c) = local_40;
      *(undefined1 *)(lVar2 + 0x40) = (undefined1)local_60;
LAB_143ae497c:
      if (((local_38 < pbVar3) && (puVar4 <= local_58)) && (*param_2 < 1)) {
        *param_2 = 0xf;
      }
      *(ushort **)(param_1 + 0x20) = local_58;
      *(byte **)(param_1 + 0x10) = local_38;
      return;
    }
    bVar1 = *local_38;
    ((byte *)(lVar2 + 0x41))[local_60] = bVar1;
    if ((bVar1 & 0xc0) != 0x80) break;
    local_68 = local_68 * 0x40 + (uint)bVar1;
    local_38 = local_38 + 1;
  }
  local_68 = local_68 - *(int *)(&DAT_145cfbe80 + (longlong)local_40 * 4);
  if (((local_60 == local_40) && (local_68 < 0x110000)) &&
     (*(uint *)(&DAT_145cfbfa0 + (longlong)local_60 * 4) <= local_68)) {
    if (puVar5 == &DAT_145cfc330) {
      bVar7 = 3 < local_60;
    }
    else {
      bVar7 = (local_68 & 0xfffff800) == 0xd800;
    }
    if (!bVar7) {
      if (local_68 < 0x10000) {
        *local_58 = (ushort)local_68;
        local_58 = local_58 + 1;
      }
      else {
        *local_58 = (short)(local_68 - 0x10000 >> 10) + 0xd800;
        puVar6 = local_58 + 1;
        local_68._0_2_ = ((ushort)(local_68 - 0x10000) & 0x3ff) + 0xdc00;
        if (puVar4 <= puVar6) {
          *(ushort *)(lVar2 + 0x90) = (ushort)local_68;
          *(undefined1 *)(lVar2 + 0x5d) = 1;
          *param_2 = 0xf;
          local_58 = puVar6;
          goto LAB_143ae497c;
        }
        *puVar6 = (ushort)local_68;
        local_58 = local_58 + 2;
      }
LAB_143ae46c6:
      while( true ) {
        if ((pbVar3 <= local_38) || (puVar4 <= local_58)) goto LAB_143ae497c;
        bVar1 = *local_38;
        local_68 = (uint)bVar1;
        local_38 = local_38 + 1;
        if (0x7f < local_68) break;
        local_68._0_2_ = (ushort)bVar1;
        *local_58 = (ushort)local_68;
        local_58 = local_58 + 1;
      }
      *(byte *)(lVar2 + 0x41) = bVar1;
      local_40 = (int)(char)(&DAT_145cfbea0)[local_68];
      local_60 = 1;
      goto LAB_143ae4755;
    }
  }
  *(undefined1 *)(lVar2 + 0x40) = (undefined1)local_60;
  *param_2 = 0xc;
  goto LAB_143ae497c;
}



// FUNCTION 143ae49d0 FUN_143ae49d0 body=1201 status=ok
// SIG undefined FUN_143ae49d0(void)

void FUN_143ae49d0(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined *puVar5;
  ushort *puVar6;
  bool bVar7;
  uint local_78;
  int local_74;
  int local_6c;
  ushort *local_68;
  int *local_50;
  int local_48;
  byte *local_40;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_40 = *(byte **)(param_1 + 0x10);
  local_68 = *(ushort **)(param_1 + 0x20);
  local_50 = *(int **)(param_1 + 0x30);
  local_6c = 0;
  pbVar3 = *(byte **)(param_1 + 0x18);
  puVar4 = *(ushort **)(param_1 + 0x28);
  puVar5 = *(undefined **)(lVar2 + 0x30);
  if (*(int *)(lVar2 + 0x48) == 0) goto LAB_143ae4ade;
  if (puVar4 <= local_68) goto LAB_143ae4ade;
  local_48 = *(int *)(lVar2 + 0x4c);
  local_74 = (int)*(char *)(lVar2 + 0x40);
  *(undefined1 *)(lVar2 + 0x40) = 0;
  local_78 = *(uint *)(lVar2 + 0x48);
  *(undefined4 *)(lVar2 + 0x48) = 0;
LAB_143ae4b90:
  for (; local_74 < local_48; local_74 = local_74 + 1) {
    if (pbVar3 <= local_40) {
      *(uint *)(lVar2 + 0x48) = local_78;
      *(int *)(lVar2 + 0x4c) = local_48;
      *(undefined1 *)(lVar2 + 0x40) = (undefined1)local_74;
LAB_143ae4e16:
      if (((local_40 < pbVar3) && (puVar4 <= local_68)) && (*param_2 < 1)) {
        *param_2 = 0xf;
      }
      *(ushort **)(param_1 + 0x20) = local_68;
      *(byte **)(param_1 + 0x10) = local_40;
      *(int **)(param_1 + 0x30) = local_50;
      return;
    }
    bVar1 = *local_40;
    ((byte *)(lVar2 + 0x41))[local_74] = bVar1;
    if ((bVar1 & 0xc0) != 0x80) break;
    local_78 = local_78 * 0x40 + (uint)bVar1;
    local_40 = local_40 + 1;
  }
  local_78 = local_78 - *(int *)(&DAT_145cfbe80 + (longlong)local_48 * 4);
  if (((local_74 == local_48) && (local_78 < 0x110000)) &&
     (*(uint *)(&DAT_145cfbfa0 + (longlong)local_74 * 4) <= local_78)) {
    if (puVar5 == &DAT_145cfc330) {
      bVar7 = 3 < local_74;
    }
    else {
      bVar7 = (local_78 & 0xfffff800) == 0xd800;
    }
    if (!bVar7) {
      if (local_78 < 0x10000) {
        *local_68 = (ushort)local_78;
        *local_50 = local_6c;
        local_68 = local_68 + 1;
        local_50 = local_50 + 1;
      }
      else {
        *local_68 = (short)(local_78 - 0x10000 >> 10) + 0xd800;
        puVar6 = local_68 + 1;
        *local_50 = local_6c;
        local_78._0_2_ = ((ushort)(local_78 - 0x10000) & 0x3ff) + 0xdc00;
        if (puVar6 < puVar4) {
          *puVar6 = (ushort)local_78;
          local_50[1] = local_6c;
          local_68 = local_68 + 2;
          local_50 = local_50 + 2;
        }
        else {
          *(ushort *)(lVar2 + 0x90) = (ushort)local_78;
          *(undefined1 *)(lVar2 + 0x5d) = 1;
          *param_2 = 0xf;
          local_68 = puVar6;
          local_50 = local_50 + 1;
        }
      }
      local_6c = local_6c + local_74;
LAB_143ae4ade:
      while( true ) {
        if ((pbVar3 <= local_40) || (puVar4 <= local_68)) goto LAB_143ae4e16;
        bVar1 = *local_40;
        local_78 = (uint)bVar1;
        local_40 = local_40 + 1;
        if (0x7f < local_78) break;
        local_78._0_2_ = (ushort)bVar1;
        *local_68 = (ushort)local_78;
        local_68 = local_68 + 1;
        *local_50 = local_6c;
        local_50 = local_50 + 1;
        local_6c = local_6c + 1;
      }
      *(byte *)(lVar2 + 0x41) = bVar1;
      local_48 = (int)(char)(&DAT_145cfbea0)[local_78];
      local_74 = 1;
      goto LAB_143ae4b90;
    }
  }
  *(undefined1 *)(lVar2 + 0x40) = (undefined1)local_74;
  *param_2 = 0xc;
  goto LAB_143ae4e16;
}



// FUNCTION 143ae4e90 FUN_143ae4e90 body=1101 status=ok
// SIG undefined FUN_143ae4e90(void)

uint FUN_143ae4e90(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  char local_37;
  int local_34;
  byte *local_30;
  byte *local_18;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_18 = *(byte **)(param_1 + 0x10);
  if (*(byte **)(param_1 + 0x18) <= local_18) {
    *param_2 = 8;
    return 0xffff;
  }
  bVar1 = *local_18;
  local_30 = local_18 + 1;
  if (bVar1 < 0x80) {
    *(byte **)(param_1 + 0x10) = local_30;
    return (uint)bVar1;
  }
  uVar4 = (ushort)(char)(&DAT_145cfbea0)[bVar1];
  if (uVar4 == 0) {
    *(byte *)(lVar2 + 0x41) = bVar1;
    *(undefined1 *)(lVar2 + 0x40) = 1;
    *param_2 = 0xc;
    *(byte **)(param_1 + 0x10) = local_30;
    return 0xffff;
  }
  if (*(byte **)(param_1 + 0x18) < local_18 + uVar4) {
    *(byte *)(lVar2 + 0x41) = bVar1;
    local_37 = '\x01';
    *param_2 = 0xb;
    do {
      if (*(byte **)(param_1 + 0x18) <= local_30) {
LAB_143ae502e:
        *(char *)(lVar2 + 0x40) = local_37;
        *(byte **)(param_1 + 0x10) = local_30;
        return 0xffff;
      }
      if ((*local_30 & 0xc0) != 0x80) {
        *param_2 = 0xc;
        goto LAB_143ae502e;
      }
      *(byte *)(lVar2 + 0x41 + (longlong)local_37) = *local_30;
      local_37 = local_37 + '\x01';
      local_30 = local_30 + 1;
    } while( true );
  }
  bVar3 = true;
  local_34 = (uint)bVar1 * 0x40;
  if (uVar4 != 2) {
    if (uVar4 != 3) {
      if (uVar4 != 4) {
        if (uVar4 != 5) {
          if (uVar4 != 6) goto LAB_143ae5210;
          local_34 = (local_34 + (uint)*local_30) * 0x40;
          if ((*local_30 & 0xc0) != 0x80) {
            bVar3 = false;
            goto LAB_143ae5210;
          }
          local_30 = local_18 + 2;
        }
        local_34 = (local_34 + (uint)*local_30) * 0x40;
        if ((*local_30 & 0xc0) != 0x80) {
          bVar3 = false;
          goto LAB_143ae5210;
        }
        local_30 = local_30 + 1;
      }
      local_34 = (local_34 + (uint)*local_30) * 0x40;
      if ((*local_30 & 0xc0) != 0x80) {
        bVar3 = false;
        goto LAB_143ae5210;
      }
      local_30 = local_30 + 1;
    }
    local_34 = (local_34 + (uint)*local_30) * 0x40;
    if ((*local_30 & 0xc0) != 0x80) {
      bVar3 = false;
      goto LAB_143ae5210;
    }
    local_30 = local_30 + 1;
  }
  local_34 = local_34 + (uint)*local_30;
  if ((*local_30 & 0xc0) == 0x80) {
    local_30 = local_30 + 1;
  }
  else {
    bVar3 = false;
  }
LAB_143ae5210:
  uVar5 = local_34 - *(int *)(&DAT_145cfbe80 + (ulonglong)uVar4 * 4);
  *(byte **)(param_1 + 0x10) = local_30;
  if ((((!bVar3) || (0x10ffff < uVar5)) ||
      (uVar5 < *(uint *)(&DAT_145cfbfa0 + (ulonglong)uVar4 * 4))) ||
     ((uVar5 & 0xfffff800) == 0xd800)) {
    local_37 = '\0';
    for (; local_18 < local_30; local_18 = local_18 + 1) {
      *(byte *)(lVar2 + 0x41 + (longlong)local_37) = *local_18;
      local_37 = local_37 + '\x01';
    }
    *(char *)(lVar2 + 0x40) = local_37;
    *param_2 = 0xc;
    uVar5 = 0xffff;
  }
  return uVar5;
}



// FUNCTION 143ae52e0 FUN_143ae52e0 body=2960 status=ok
// SIG undefined FUN_143ae52e0(void)

void FUN_143ae52e0(longlong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte local_88;
  char local_87;
  char local_86;
  char local_85;
  char local_83;
  byte *local_80;
  uint local_78;
  int local_74;
  byte *local_70;
  int local_60;
  int local_58;
  uint local_4c;
  char local_38;
  char local_34;
  char local_30;
  uint local_28;
  char local_24;
  uint local_20;
  uint local_18;
  int local_14;
  
  lVar4 = *(longlong *)(param_2 + 8);
  local_80 = *(byte **)(param_2 + 0x10);
  pbVar5 = *(byte **)(param_2 + 0x18);
  local_70 = *(byte **)(param_1 + 0x20);
  iVar6 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  local_78 = *(uint *)(lVar4 + 0x48);
  if (local_78 == 0) {
    local_85 = '\0';
    local_86 = '\0';
  }
  else {
    local_86 = *(char *)(lVar4 + 0x40);
    local_85 = *(char *)(lVar4 + 0x4c);
  }
  local_74 = ((int)pbVar5 - (int)local_80) + (int)local_86;
  if (local_85 <= local_74) {
    if (iVar6 < local_85) {
      *param_3 = -0x7f;
      return;
    }
    if (iVar6 < local_74) {
      local_74 = iVar6;
    }
    local_60 = 0;
    while( true ) {
      if ((2 < local_60) || (local_74 - local_85 <= local_60)) goto LAB_143ae5553;
      bVar1 = local_80[((local_74 - local_86) - local_60) + -1];
      if ((bVar1 & 0xc0) != 0x80) break;
      local_60 = local_60 + 1;
    }
    if (bVar1 < 0xf0) {
      local_28 = (uint)(0xbf < bVar1);
      local_4c = (uint)(0xdf < bVar1);
      local_58 = local_28 + local_4c;
    }
    else {
      if (bVar1 < 0xfe) {
        local_20 = (uint)(0xf7 < bVar1);
        local_18 = (uint)(0xfb < bVar1);
        local_14 = local_20 + 3 + local_18;
      }
      else {
        local_14 = 0;
      }
      local_58 = local_14;
    }
    if (local_60 < local_58) {
      local_74 = local_74 - (local_60 + 1);
    }
  }
LAB_143ae5553:
  if (local_78 == 0) goto LAB_143ae5574;
  *(undefined4 *)(lVar4 + 0x48) = 0;
  *(undefined1 *)(lVar4 + 0x40) = 0;
  local_87 = local_86;
  do {
    while (local_85 <= local_87) {
LAB_143ae5a31:
      if (((local_87 != local_85) ||
          ((((local_87 != '\x03' && (local_87 != '\x02')) ||
            (local_78 = local_78 - *(int *)(&DAT_145cfbfd8 + (longlong)local_87 * 4),
            (int)local_78 < *(int *)(&DAT_145cfbfc0 + (longlong)local_87 * 4))) ||
           ((0xd7ff < (int)local_78 && ((int)local_78 < 0xe000)))))) &&
         ((local_87 != local_85 ||
          (((local_87 != '\x04' || ((int)(local_78 + 0xfc37df80) < 0x10000)) ||
           (0x10ffff < (int)(local_78 + 0xfc37df80))))))) {
        local_80 = local_80 + -(longlong)((int)local_87 - (int)local_86);
        for (; local_86 < local_87; local_86 = local_86 + '\x01') {
          *(byte *)(lVar4 + 0x41 + (longlong)local_86) = *local_80;
          local_80 = local_80 + 1;
        }
        *(char *)(lVar4 + 0x40) = local_87;
        *(byte **)(param_2 + 0x10) = local_80;
        *(byte **)(param_1 + 0x20) = local_70;
        *param_3 = 0xc;
        return;
      }
      for (local_83 = '\0'; local_83 < local_86; local_83 = local_83 + '\x01') {
        *local_70 = *(byte *)(lVar4 + 0x41 + (longlong)local_83);
        local_70 = local_70 + 1;
      }
      local_80 = local_80 + -(longlong)((int)local_87 - (int)local_86);
      for (; local_83 < local_87; local_83 = local_83 + '\x01') {
        *local_70 = *local_80;
        local_70 = local_70 + 1;
        local_80 = local_80 + 1;
      }
      local_74 = local_74 - local_87;
LAB_143ae5574:
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              if (local_74 < 1) {
                if ((0 < *param_3) || (pbVar5 <= local_80)) goto LAB_143ae5e52;
                if (local_70 == *(byte **)(param_1 + 0x28)) {
                  *param_3 = 0xf;
                  goto LAB_143ae5e52;
                }
                local_88 = *local_80;
                if (local_88 < 0xf0) {
                  local_30 = (0xbf < local_88) + (0xdf < local_88);
                }
                else {
                  if (local_88 < 0xfe) {
                    local_38 = (0xf7 < local_88) + '\x03' + (0xfb < local_88);
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_30 = local_38;
                }
                if ((longlong)(char)(local_30 + '\x01') <= (longlong)pbVar5 - (longlong)local_80) {
                  *param_3 = -0x7f;
                  goto LAB_143ae5e52;
                }
                local_87 = '\0';
                local_78 = (uint)local_88;
                goto LAB_143ae5d93;
              }
              bVar1 = *local_80;
              pbVar7 = local_80 + 1;
              if ((char)bVar1 < '\0') break;
              *local_70 = bVar1;
              local_70 = local_70 + 1;
              local_74 = local_74 + -1;
              local_80 = pbVar7;
            }
            if (bVar1 < 0xe1) break;
            bVar2 = *pbVar7;
            if ((bVar2 < 0x80) ||
               ((((0xec < bVar1 || (0xbf < bVar2)) && ((bVar1 != 0xed || (0x9f < bVar2)))) ||
                ((bVar3 = local_80[2], bVar3 < 0x80 || (0xbf < bVar3)))))) goto LAB_143ae583a;
            local_80 = local_80 + 3;
            *local_70 = bVar1;
            local_70[1] = bVar2;
            local_70[2] = bVar3;
            local_70 = local_70 + 3;
            local_74 = local_74 + -3;
          }
          if (0xdf < bVar1) break;
          if (((bVar1 < 0xc2) || (bVar2 = *pbVar7, bVar2 < 0x80)) || (0xbf < bVar2))
          goto LAB_143ae583a;
          local_80 = local_80 + 2;
          *local_70 = bVar1;
          local_70[1] = bVar2;
          local_70 = local_70 + 2;
          local_74 = local_74 + -2;
        }
        if (((bVar1 != 0xe0) || (bVar2 = *pbVar7, bVar2 < 0xa0)) ||
           ((0xbf < bVar2 || ((bVar3 = local_80[2], bVar3 < 0x80 || (0xbf < bVar3)))))) break;
        local_80 = local_80 + 3;
        *local_70 = 0xe0;
        local_70[1] = bVar2;
        local_70[2] = bVar3;
        local_70 = local_70 + 3;
        local_74 = local_74 + -3;
      }
LAB_143ae583a:
      local_86 = '\0';
      local_87 = '\x01';
      if (bVar1 < 0xf0) {
        local_34 = (0xbf < bVar1) + (0xdf < bVar1);
      }
      else {
        if (bVar1 < 0xfe) {
          local_24 = (0xf7 < bVar1) + '\x03' + (0xfb < bVar1);
        }
        else {
          local_24 = '\0';
        }
        local_34 = local_24;
      }
      local_78 = (uint)bVar1;
      local_80 = pbVar7;
      local_85 = local_34 + '\x01';
    }
    if (pbVar5 <= local_80) {
      local_80 = local_80 + -(longlong)((int)local_87 - (int)local_86);
      for (; local_86 < local_87; local_86 = local_86 + '\x01') {
        *(byte *)(lVar4 + 0x41 + (longlong)local_86) = *local_80;
        local_80 = local_80 + 1;
      }
      *(uint *)(lVar4 + 0x48) = local_78;
      *(char *)(lVar4 + 0x40) = local_87;
      *(int *)(lVar4 + 0x4c) = (int)local_85;
      *(byte **)(param_2 + 0x10) = local_80;
      *(byte **)(param_1 + 0x20) = local_70;
      return;
    }
    if ((*local_80 & 0xc0) != 0x80) goto LAB_143ae5a31;
    local_87 = local_87 + '\x01';
    local_78 = local_78 * 0x40 + (uint)*local_80;
    local_80 = local_80 + 1;
  } while( true );
LAB_143ae5d93:
  *(byte *)(lVar4 + 0x41 + (longlong)local_87) = local_88;
  local_87 = local_87 + '\x01';
  local_80 = local_80 + 1;
  if (local_80 == pbVar5) {
    *(uint *)(lVar4 + 0x48) = local_78;
    *(char *)(lVar4 + 0x40) = local_87;
    *(int *)(lVar4 + 0x4c) = (int)(char)(local_30 + '\x01');
LAB_143ae5e52:
    *(byte **)(param_2 + 0x10) = local_80;
    *(byte **)(param_1 + 0x20) = local_70;
    return;
  }
  local_88 = *local_80;
  if ((local_88 & 0xc0) != 0x80) {
    *(char *)(lVar4 + 0x40) = local_87;
    *param_3 = 0xc;
    goto LAB_143ae5e52;
  }
  local_78 = local_78 * 0x40 + (uint)local_88;
  goto LAB_143ae5d93;
}



// FUNCTION 143ae5e80 FUN_143ae5e80 body=976 status=ok
// SIG undefined FUN_143ae5e80(void)

void FUN_143ae5e80(longlong param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  int *piVar4;
  int local_48;
  char *local_38;
  int local_2c;
  int *local_28;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_38 = *(char **)(param_1 + 0x10);
  pcVar3 = *(char **)(param_1 + 0x18);
  local_28 = *(int **)(param_1 + 0x30);
  local_48 = *(int *)(lVar2 + 0x4c);
  local_2c = 0;
  while ((local_38 < pcVar3 && (*param_2 < 1))) {
    if (local_48 == 0) {
      *(char *)(lVar2 + 0x41) = *local_38;
      local_38 = local_38 + 1;
      *(undefined1 *)(lVar2 + 0x40) = 1;
      local_48 = 1;
    }
    else if (local_48 == 1) {
      cVar1 = *local_38;
      if ((*(char *)(lVar2 + 0x41) == -2) && (cVar1 == -1)) {
        if (*(undefined **)(lVar2 + 0x30) == &DAT_145cfc6a0) {
          local_48 = 7;
        }
        else {
          local_48 = 8;
        }
      }
      else if ((*(char *)(lVar2 + 0x41) == -1) && (cVar1 == -2)) {
        if (*(undefined **)(lVar2 + 0x30) == &DAT_145cfc570) {
          local_48 = 6;
        }
        else {
          local_48 = 9;
        }
      }
      else if (((*(undefined **)(lVar2 + 0x30) == &DAT_145cfc7d0) ||
               (*(undefined **)(lVar2 + 0x30) == &DAT_145cfca00)) &&
              ((*(uint *)(lVar2 + 0x38) & 0xf) == 1)) {
        local_48 = 6;
      }
      if (local_48 < 8) {
        if (5 < local_48) {
          *(char *)(lVar2 + 0x42) = cVar1;
          *(undefined1 *)(lVar2 + 0x40) = 2;
          *(char **)(param_1 + 0x10) = local_38 + 1;
          *(int *)(lVar2 + 0x4c) = local_48 + 2;
          *param_2 = 0x12;
          return;
        }
        if (local_38 != *(char **)(param_1 + 0x10)) {
          local_38 = *(char **)(param_1 + 0x10);
          *(undefined1 *)(lVar2 + 0x40) = 0;
        }
        if (*(undefined **)(lVar2 + 0x30) == &DAT_145cfc6a0) {
          local_48 = 9;
        }
        else {
          local_48 = 8;
        }
      }
      else {
        local_38 = local_38 + 1;
        *(undefined1 *)(lVar2 + 0x40) = 0;
        local_2c = (int)local_38 - (int)*(undefined8 *)(param_1 + 0x10);
      }
      *(int *)(lVar2 + 0x4c) = local_48;
    }
    else if (local_48 == 8) {
      *(char **)(param_1 + 0x10) = local_38;
      FUN_143ae6b30(param_1,param_2);
      local_38 = *(char **)(param_1 + 0x10);
    }
    else if (local_48 == 9) {
      *(char **)(param_1 + 0x10) = local_38;
      FUN_143ae8160(param_1,param_2);
      local_38 = *(char **)(param_1 + 0x10);
    }
  }
  if ((local_28 != (int *)0x0) && (local_2c != 0)) {
    piVar4 = *(int **)(param_1 + 0x30);
    for (; local_28 < piVar4; local_28 = local_28 + 1) {
      *local_28 = *local_28 + local_2c;
    }
  }
  *(char **)(param_1 + 0x10) = local_38;
  if ((local_38 == pcVar3) && (*(char *)(param_1 + 2) != '\0')) {
    if (local_48 == 8) {
      FUN_143ae6b30(param_1,param_2);
    }
    else if (local_48 == 9) {
      FUN_143ae8160(param_1,param_2);
    }
  }
  *(int *)(lVar2 + 0x4c) = local_48;
  return;
}



// FUNCTION 143ae6260 FUN_143ae6260 body=2245 status=ok
// SIG undefined FUN_143ae6260(void)

void FUN_143ae6260(longlong param_1,int *param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort *puVar3;
  ushort local_58;
  undefined1 local_54;
  uint local_50;
  int *local_48;
  undefined1 *local_40;
  int local_38;
  uint local_34;
  ushort *local_30;
  int local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  longlong local_20;
  uint local_18;
  
  local_30 = *(ushort **)(param_1 + 0x10);
  local_38 = (int)(*(longlong *)(param_1 + 0x18) - (longlong)local_30 >> 1);
  if (local_38 != 0) {
    local_20 = *(longlong *)(param_1 + 8);
    if (*(int *)(local_20 + 0x50) == 1) {
      FUN_143b0d0e0(local_20,&DAT_145cfc460,2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),
                    param_1 + 0x30,0xffffffff,param_2);
      *(undefined4 *)(local_20 + 0x50) = 0;
    }
    local_40 = *(undefined1 **)(param_1 + 0x20);
    if (local_40 < *(undefined1 **)(param_1 + 0x28)) {
      local_34 = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_40;
      local_48 = *(int **)(param_1 + 0x30);
      local_28 = 0;
      local_58 = *(ushort *)(local_20 + 0x54);
      if (((local_58 != 0) && (uVar1 = *local_30, (uVar1 & 0xfc00) == 0xdc00)) && (3 < local_34)) {
        local_30 = local_30 + 1;
        local_38 = local_38 + -1;
        *local_40 = (char)(local_58 >> 8);
        local_40[1] = (undefined1)local_58;
        local_40[2] = (char)(uVar1 >> 8);
        local_54 = (undefined1)uVar1;
        local_40[3] = local_54;
        local_40 = local_40 + 4;
        local_34 = local_34 - 4;
        if (local_48 != (int *)0x0) {
          *local_48 = -1;
          local_48[1] = -1;
          local_48[2] = -1;
          local_48[3] = -1;
          local_48 = local_48 + 4;
        }
        local_28 = 1;
        local_58 = 0;
        *(undefined4 *)(local_20 + 0x54) = 0;
      }
      if (local_58 == 0) {
        local_50 = local_38 << 1;
        if (local_34 < local_50) {
          local_50 = local_34 & 0xfffffffe;
        }
        local_34 = local_34 - local_50;
        local_50 = local_50 >> 1;
        local_38 = local_38 - local_50;
        if (local_48 == (int *)0x0) {
          for (; puVar3 = local_30, local_50 != 0; local_50 = local_50 - 1) {
            local_58 = *local_30;
            puVar3 = local_30 + 1;
            uVar2 = (undefined1)(local_58 >> 8);
            if ((local_58 & 0xf800) == 0xd800) {
              if ((((local_58 & 0x400) != 0) || (local_50 < 2)) ||
                 (uVar1 = *puVar3, (uVar1 & 0xfc00) != 0xdc00)) break;
              local_30 = local_30 + 2;
              local_50 = local_50 - 1;
              *local_40 = uVar2;
              local_40[1] = (undefined1)local_58;
              local_40[2] = (char)(uVar1 >> 8);
              local_54 = (undefined1)uVar1;
              local_40[3] = local_54;
              local_40 = local_40 + 4;
            }
            else {
              *local_40 = uVar2;
              local_40[1] = (undefined1)local_58;
              local_40 = local_40 + 2;
              local_30 = puVar3;
            }
          }
        }
        else {
          for (; puVar3 = local_30, local_50 != 0; local_50 = local_50 - 1) {
            local_58 = *local_30;
            puVar3 = local_30 + 1;
            uVar2 = (undefined1)(local_58 >> 8);
            if ((local_58 & 0xf800) == 0xd800) {
              if ((((local_58 & 0x400) != 0) || (local_50 < 2)) ||
                 (uVar1 = *puVar3, (uVar1 & 0xfc00) != 0xdc00)) break;
              local_30 = local_30 + 2;
              local_50 = local_50 - 1;
              *local_40 = uVar2;
              local_40[1] = (undefined1)local_58;
              local_40[2] = (char)(uVar1 >> 8);
              local_54 = (undefined1)uVar1;
              local_40[3] = local_54;
              local_40 = local_40 + 4;
              *local_48 = local_28;
              local_48[1] = local_28;
              local_48[2] = local_28;
              local_48[3] = local_28;
              local_48 = local_48 + 4;
              local_28 = local_28 + 2;
            }
            else {
              *local_40 = uVar2;
              local_40[1] = (undefined1)local_58;
              local_40 = local_40 + 2;
              *local_48 = local_28;
              local_48[1] = local_28;
              local_48 = local_48 + 2;
              local_28 = local_28 + 1;
              local_30 = puVar3;
            }
          }
        }
        local_30 = puVar3;
        if (local_50 == 0) {
          if ((local_38 == 0) || (local_34 == 0)) {
            local_38 = 0;
            local_58 = 0;
          }
          else {
            local_58 = *local_30;
            local_18 = local_58 & 0xfffff800;
            local_30 = local_30 + 1;
            if (local_18 != 0xd800) {
              local_24 = (undefined1)(local_58 >> 8);
              local_23 = (undefined1)local_58;
              local_38 = 2;
              local_58 = 0;
            }
          }
        }
        else {
          local_34 = local_34 + local_50 * 2;
        }
      }
      else {
        local_38 = 0;
      }
      if (local_58 != 0) {
        local_38 = 0;
        if ((local_58 & 0x400) == 0) {
          if (local_30 < *(ushort **)(param_1 + 0x18)) {
            uVar1 = *local_30;
            if ((uVar1 & 0xfc00) == 0xdc00) {
              local_30 = local_30 + 1;
              local_24 = (undefined1)(local_58 >> 8);
              local_23 = (undefined1)local_58;
              uStack_22 = (undefined1)(uVar1 >> 8);
              local_54 = (undefined1)uVar1;
              uStack_21 = local_54;
              local_38 = 4;
              local_58 = 0;
            }
            else {
              *param_2 = 0xc;
            }
          }
        }
        else {
          *param_2 = 0xc;
        }
        *(uint *)(local_20 + 0x54) = (uint)local_58;
      }
      if (local_38 != 0) {
        FUN_143b0d0e0(local_20,&local_24,local_38,&local_40,*(undefined8 *)(param_1 + 0x28),
                      &local_48,local_28,param_2);
        local_34 = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_40;
      }
      if (((*param_2 < 1) && (local_30 < *(ushort **)(param_1 + 0x18))) && (local_34 == 0)) {
        *param_2 = 0xf;
      }
      *(ushort **)(param_1 + 0x10) = local_30;
      *(undefined1 **)(param_1 + 0x20) = local_40;
      *(int **)(param_1 + 0x30) = local_48;
    }
    else {
      *param_2 = 0xf;
    }
  }
  return;
}



// FUNCTION 143ae6b30 FUN_143ae6b30 body=2504 status=ok
// SIG undefined FUN_143ae6b30(void)

void FUN_143ae6b30(longlong param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ushort *puVar4;
  ushort uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ushort local_58;
  uint local_54;
  ushort *local_48;
  byte *local_40;
  uint local_38;
  int *local_30;
  uint local_28;
  int local_18;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x4c) < 8) {
    FUN_143ae5e80(param_1,param_2);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 8);
    local_40 = *(byte **)(param_1 + 0x10);
    local_38 = (int)*(undefined8 *)(param_1 + 0x18) - (int)local_40;
    if ((local_38 != 0) || (*(int *)(lVar3 + 0x48) != 0)) {
      puVar4 = *(ushort **)(param_1 + 0x20);
      if (puVar4 < *(ushort **)(param_1 + 0x28)) {
        local_28 = (uint)(*(longlong *)(param_1 + 0x28) - (longlong)puVar4 >> 1);
        local_30 = *(int **)(param_1 + 0x30);
        local_18 = 0;
        local_58 = 0;
        if (*(int *)(lVar3 + 0x48) != 0) {
          *(undefined1 *)(lVar3 + 0x41) = *(undefined1 *)(lVar3 + 0x48);
          *(undefined1 *)(lVar3 + 0x40) = 1;
          *(undefined4 *)(lVar3 + 0x48) = 0;
        }
        local_54 = (uint)*(char *)(lVar3 + 0x40);
        local_48 = puVar4;
        if (local_54 != 0) {
          pbVar6 = (byte *)(lVar3 + 0x41);
          do {
            pbVar6[local_54] = *local_40;
            local_54 = local_54 + 1;
            pbVar7 = local_40 + 1;
            local_18 = local_18 + 1;
            local_38 = local_38 - 1;
            if (local_54 == 2) {
              bVar1 = *pbVar6;
              local_58 = CONCAT11(bVar1,*(undefined1 *)(lVar3 + 0x42));
              if ((bVar1 & 0xf8) != 0xd8) {
                *puVar4 = local_58;
                if (local_30 != (int *)0x0) {
                  *local_30 = -1;
                  local_30 = local_30 + 1;
                }
                local_28 = local_28 - 1;
                local_54 = 0;
                local_58 = 0;
                local_48 = puVar4 + 1;
                break;
              }
              if ((bVar1 & 4) != 0) break;
            }
            else if (local_54 == 4) {
              uVar5 = CONCAT11(*(byte *)(lVar3 + 0x43),*(undefined1 *)(lVar3 + 0x44));
              if ((*(byte *)(lVar3 + 0x43) & 0xfc) != 0xdc) {
                *param_2 = 0xc;
                if (*(longlong *)(param_1 + 0x10) - (longlong)pbVar7 < 2) {
                  *(uint *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x43) | 0x100;
                }
                else {
                  local_40 = local_40 + -1;
                }
                *(undefined1 *)(lVar3 + 0x40) = 2;
                *(byte **)(param_1 + 0x10) = local_40;
                *(ushort **)(param_1 + 0x20) = puVar4;
                *(int **)(param_1 + 0x30) = local_30;
                return;
              }
              *puVar4 = CONCAT11(*pbVar6,*(undefined1 *)(lVar3 + 0x42));
              local_48 = puVar4 + 1;
              if (local_28 < 2) {
                local_28 = 0;
                *(ushort *)(lVar3 + 0x90) = uVar5;
                *(undefined1 *)(lVar3 + 0x5d) = 1;
                *param_2 = 0xf;
              }
              else {
                *local_48 = uVar5;
                local_48 = puVar4 + 2;
                if (local_30 != (int *)0x0) {
                  *local_30 = -1;
                  local_30[1] = -1;
                  local_30 = local_30 + 2;
                }
                local_28 = local_28 - 2;
              }
              local_54 = 0;
              local_58 = 0;
              break;
            }
            local_58 = 0;
            local_40 = pbVar7;
          } while (local_38 != 0);
          *(undefined1 *)(lVar3 + 0x40) = (undefined1)local_54;
          local_40 = pbVar7;
        }
        local_54 = local_28 << 1;
        if (local_38 < local_54) {
          local_54 = local_38 & 0xfffffffe;
        }
        if ((local_58 == 0) && (local_54 != 0)) {
          local_38 = local_38 - local_54;
          local_54 = local_54 >> 1;
          local_28 = local_28 - local_54;
          if (local_30 == (int *)0x0) {
            do {
              bVar1 = *local_40;
              local_58 = CONCAT11(bVar1,local_40[1]);
              pbVar6 = local_40 + 2;
              if ((bVar1 & 0xf8) == 0xd8) {
                if ((((bVar1 & 4) != 0) || (local_54 < 2)) ||
                   (bVar1 = *pbVar6, bVar2 = local_40[3], (bVar1 & 0xfc) != 0xdc)) break;
                local_40 = local_40 + 4;
                local_54 = local_54 - 1;
                *local_48 = local_58;
                local_48[1] = CONCAT11(bVar1,bVar2);
                local_48 = local_48 + 2;
              }
              else {
                *local_48 = local_58;
                local_48 = local_48 + 1;
                local_40 = pbVar6;
              }
              local_54 = local_54 - 1;
              pbVar6 = local_40;
            } while (local_54 != 0);
          }
          else {
            do {
              bVar1 = *local_40;
              local_58 = CONCAT11(bVar1,local_40[1]);
              pbVar6 = local_40 + 2;
              if ((bVar1 & 0xf8) == 0xd8) {
                if ((((bVar1 & 4) != 0) || (local_54 < 2)) ||
                   (bVar1 = *pbVar6, bVar2 = local_40[3], (bVar1 & 0xfc) != 0xdc)) break;
                local_40 = local_40 + 4;
                local_54 = local_54 - 1;
                *local_48 = local_58;
                local_48[1] = CONCAT11(bVar1,bVar2);
                local_48 = local_48 + 2;
                *local_30 = local_18;
                local_30[1] = local_18;
                local_30 = local_30 + 2;
                local_18 = local_18 + 4;
              }
              else {
                *local_48 = local_58;
                local_48 = local_48 + 1;
                *local_30 = local_18;
                local_30 = local_30 + 1;
                local_18 = local_18 + 2;
                local_40 = pbVar6;
              }
              local_54 = local_54 - 1;
              pbVar6 = local_40;
            } while (local_54 != 0);
          }
          local_40 = pbVar6;
          if (local_54 == 0) {
            local_58 = 0;
          }
          else {
            local_38 = (local_38 - 2) + local_54 * 2;
            local_28 = local_28 + local_54;
          }
        }
        if (local_58 != 0) {
          *(char *)(lVar3 + 0x41) = (char)(local_58 >> 8);
          *(undefined1 *)(lVar3 + 0x42) = (undefined1)local_58;
          *(undefined1 *)(lVar3 + 0x40) = 2;
          if ((local_58 & 0x400) == 0) {
            if (1 < local_38) {
              bVar1 = *local_40;
              bVar2 = local_40[1];
              if ((bVar1 & 0xfc) == 0xdc) {
                local_40 = local_40 + 2;
                local_38 = local_38 - 2;
                *local_48 = local_58;
                local_48 = local_48 + 1;
                if (local_30 != (int *)0x0) {
                  *local_30 = local_18;
                  local_30 = local_30 + 1;
                }
                *(ushort *)(lVar3 + 0x90) = CONCAT11(bVar1,bVar2);
                *(undefined1 *)(lVar3 + 0x5d) = 1;
                *(undefined1 *)(lVar3 + 0x40) = 0;
                *param_2 = 0xf;
              }
              else {
                *param_2 = 0xc;
              }
            }
          }
          else {
            *param_2 = 0xc;
          }
        }
        if ((*param_2 < 1) && (local_38 != 0)) {
          if (local_28 == 0) {
            *param_2 = 0xf;
          }
          else {
            *(byte *)(lVar3 + 0x41 + (longlong)*(char *)(lVar3 + 0x40)) = *local_40;
            *(char *)(lVar3 + 0x40) = *(char *)(lVar3 + 0x40) + '\x01';
            local_40 = local_40 + 1;
          }
        }
        *(byte **)(param_1 + 0x10) = local_40;
        *(ushort **)(param_1 + 0x20) = local_48;
        *(int **)(param_1 + 0x30) = local_30;
      }
      else {
        *param_2 = 0xf;
      }
    }
  }
  return;
}



// FUNCTION 143ae7500 FUN_143ae7500 body=675 status=ok
// SIG undefined FUN_143ae7500(void)

uint FUN_143ae7500(longlong param_1,undefined4 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  byte *pbVar3;
  uint local_34;
  byte *local_30;
  byte *local_20;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x4c) < 8) {
    local_34 = 0xfffffff7;
  }
  else {
    local_30 = *(byte **)(param_1 + 0x10);
    pbVar1 = *(byte **)(param_1 + 0x18);
    if (local_30 < pbVar1) {
      if (pbVar1 < local_30 + 2) {
        *(byte *)(*(longlong *)(param_1 + 8) + 0x41) = *local_30;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
        *(byte **)(param_1 + 0x10) = local_30 + 1;
        *param_2 = 0xb;
        local_34 = 0xffff;
      }
      else {
        local_34 = (uint)CONCAT11(*local_30,local_30[1]);
        pbVar3 = local_30 + 2;
        if ((local_34 & 0xfffff800) == 0xd800) {
          if ((*local_30 & 4) == 0) {
            if (pbVar1 < local_30 + 4) {
              local_20 = (byte *)(*(longlong *)(param_1 + 8) + 0x41);
              *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)pbVar1 - (char)local_30;
              do {
                *local_20 = *local_30;
                local_20 = local_20 + 1;
                local_30 = local_30 + 1;
              } while (local_30 < pbVar1);
              local_34 = 0xffff;
              *param_2 = 0xb;
            }
            else if ((*pbVar3 & 0xfc) == 0xdc) {
              local_34 = local_34 * 0x400 + -0x35fdc00 + (uint)CONCAT11(*pbVar3,local_30[3]);
              local_30 = local_30 + 4;
            }
            else {
              local_34 = 0xfffffffe;
              local_30 = pbVar3;
            }
          }
          else {
            local_34 = 0xfffffffe;
            local_30 = pbVar3;
          }
          pbVar3 = local_30;
          if ((int)local_34 < 0) {
            lVar2 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 2;
            *(byte *)(lVar2 + 0x41) = local_30[-2];
            *(byte *)(lVar2 + 0x42) = local_30[-1];
            local_34 = 0xffff;
            *param_2 = 0xc;
          }
        }
        local_30 = pbVar3;
        *(byte **)(param_1 + 0x10) = local_30;
      }
    }
    else {
      *param_2 = 8;
      local_34 = 0xffff;
    }
  }
  return local_34;
}



// FUNCTION 143ae77b0 FUN_143ae77b0 body=93 status=ok
// SIG undefined FUN_143ae77b0(void)

void FUN_143ae77b0(longlong param_1,int param_2)

{
  if (param_2 < 2) {
    if ((*(uint *)(param_1 + 0x38) & 0xf) == 0) {
      *(undefined4 *)(param_1 + 0x4c) = 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  if ((param_2 != 1) && ((*(uint *)(param_1 + 0x38) & 0xf) == 1)) {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  return;
}



// FUNCTION 143ae7810 FUN_143ae7810 body=65 status=ok
// SIG undefined FUN_143ae7810(void)

void FUN_143ae7810(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  if ((*(uint *)(param_1 + 0x38) & 0xf) < 2) {
    FUN_143ae77b0(param_1,0);
  }
  else {
    *param_3 = 1;
  }
  return;
}



// FUNCTION 143ae7860 FUN_143ae7860 body=37 status=ok
// SIG undefined FUN_143ae7860(void)

char * FUN_143ae7860(longlong param_1)

{
  char *pcVar1;
  
  if ((*(uint *)(param_1 + 0x38) & 0xf) == 0) {
    pcVar1 = "UTF-16BE";
  }
  else {
    pcVar1 = "UTF-16BE,version=1";
  }
  return pcVar1;
}



// FUNCTION 143ae7890 FUN_143ae7890 body=2252 status=ok
// SIG undefined FUN_143ae7890(void)

void FUN_143ae7890(longlong param_1,int *param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort *puVar3;
  ushort local_58;
  undefined1 local_54;
  uint local_50;
  int *local_48;
  undefined1 *local_40;
  int local_38;
  uint local_34;
  ushort *local_30;
  int local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  longlong local_20;
  uint local_18;
  
  local_30 = *(ushort **)(param_1 + 0x10);
  local_38 = (int)(*(longlong *)(param_1 + 0x18) - (longlong)local_30 >> 1);
  if (local_38 != 0) {
    local_20 = *(longlong *)(param_1 + 8);
    if (*(int *)(local_20 + 0x50) == 1) {
      FUN_143b0d0e0(local_20,&DAT_145cfc564,2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),
                    param_1 + 0x30,0xffffffff,param_2);
      *(undefined4 *)(local_20 + 0x50) = 0;
    }
    local_40 = *(undefined1 **)(param_1 + 0x20);
    if (local_40 < *(undefined1 **)(param_1 + 0x28)) {
      local_34 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
      local_48 = *(int **)(param_1 + 0x30);
      local_28 = 0;
      local_58 = *(ushort *)(local_20 + 0x54);
      if (((local_58 != 0) && (uVar1 = *local_30, (uVar1 & 0xfc00) == 0xdc00)) && (3 < local_34)) {
        local_30 = local_30 + 1;
        local_38 = local_38 + -1;
        *local_40 = (undefined1)local_58;
        local_40[1] = (char)(local_58 >> 8);
        local_54 = (undefined1)uVar1;
        local_40[2] = local_54;
        local_40[3] = (char)(uVar1 >> 8);
        local_40 = local_40 + 4;
        local_34 = local_34 - 4;
        if (local_48 != (int *)0x0) {
          *local_48 = -1;
          local_48[1] = -1;
          local_48[2] = -1;
          local_48[3] = -1;
          local_48 = local_48 + 4;
        }
        local_28 = 1;
        local_58 = 0;
        *(undefined4 *)(local_20 + 0x54) = 0;
      }
      if (local_58 == 0) {
        local_50 = local_38 << 1;
        if (local_34 < local_50) {
          local_50 = local_34 & 0xfffffffe;
        }
        local_34 = local_34 - local_50;
        local_50 = local_50 >> 1;
        local_38 = local_38 - local_50;
        if (local_48 == (int *)0x0) {
          for (; puVar3 = local_30, local_50 != 0; local_50 = local_50 - 1) {
            local_58 = *local_30;
            puVar3 = local_30 + 1;
            uVar2 = (undefined1)(local_58 >> 8);
            if ((local_58 & 0xf800) == 0xd800) {
              if ((((local_58 & 0x400) != 0) || (local_50 < 2)) ||
                 (uVar1 = *puVar3, (uVar1 & 0xfc00) != 0xdc00)) break;
              local_30 = local_30 + 2;
              local_50 = local_50 - 1;
              *local_40 = (undefined1)local_58;
              local_40[1] = uVar2;
              local_54 = (undefined1)uVar1;
              local_40[2] = local_54;
              local_40[3] = (char)(uVar1 >> 8);
              local_40 = local_40 + 4;
            }
            else {
              *local_40 = (undefined1)local_58;
              local_40[1] = uVar2;
              local_40 = local_40 + 2;
              local_30 = puVar3;
            }
          }
        }
        else {
          for (; puVar3 = local_30, local_50 != 0; local_50 = local_50 - 1) {
            local_58 = *local_30;
            puVar3 = local_30 + 1;
            uVar2 = (undefined1)(local_58 >> 8);
            if ((local_58 & 0xf800) == 0xd800) {
              if ((((local_58 & 0x400) != 0) || (local_50 < 2)) ||
                 (uVar1 = *puVar3, (uVar1 & 0xfc00) != 0xdc00)) break;
              local_30 = local_30 + 2;
              local_50 = local_50 - 1;
              *local_40 = (undefined1)local_58;
              local_40[1] = uVar2;
              local_54 = (undefined1)uVar1;
              local_40[2] = local_54;
              local_40[3] = (char)(uVar1 >> 8);
              local_40 = local_40 + 4;
              *local_48 = local_28;
              local_48[1] = local_28;
              local_48[2] = local_28;
              local_48[3] = local_28;
              local_48 = local_48 + 4;
              local_28 = local_28 + 2;
            }
            else {
              *local_40 = (undefined1)local_58;
              local_40[1] = uVar2;
              local_40 = local_40 + 2;
              *local_48 = local_28;
              local_48[1] = local_28;
              local_48 = local_48 + 2;
              local_28 = local_28 + 1;
              local_30 = puVar3;
            }
          }
        }
        local_30 = puVar3;
        if (local_50 == 0) {
          if ((local_38 == 0) || (local_34 == 0)) {
            local_38 = 0;
            local_58 = 0;
          }
          else {
            local_58 = *local_30;
            local_18 = local_58 & 0xfffff800;
            local_30 = local_30 + 1;
            if (local_18 != 0xd800) {
              local_24 = (undefined1)local_58;
              local_23 = (undefined1)(local_58 >> 8);
              local_38 = 2;
              local_58 = 0;
            }
          }
        }
        else {
          local_34 = local_34 + local_50 * 2;
        }
      }
      else {
        local_38 = 0;
      }
      if (local_58 != 0) {
        local_38 = 0;
        if ((local_58 & 0x400) == 0) {
          if (local_30 < *(ushort **)(param_1 + 0x18)) {
            uVar1 = *local_30;
            if ((uVar1 & 0xfc00) == 0xdc00) {
              local_30 = local_30 + 1;
              local_24 = (undefined1)local_58;
              local_23 = (undefined1)(local_58 >> 8);
              local_54 = (undefined1)uVar1;
              uStack_22 = local_54;
              uStack_21 = (undefined1)(uVar1 >> 8);
              local_38 = 4;
              local_58 = 0;
            }
            else {
              *param_2 = 0xc;
            }
          }
        }
        else {
          *param_2 = 0xc;
        }
        *(uint *)(local_20 + 0x54) = (uint)local_58;
      }
      if (local_38 != 0) {
        FUN_143b0d0e0(local_20,&local_24,local_38,&local_40,*(undefined8 *)(param_1 + 0x28),
                      &local_48,local_28,param_2);
        local_34 = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_40;
      }
      if (((*param_2 < 1) && (local_30 < *(ushort **)(param_1 + 0x18))) && (local_34 == 0)) {
        *param_2 = 0xf;
      }
      *(ushort **)(param_1 + 0x10) = local_30;
      *(undefined1 **)(param_1 + 0x20) = local_40;
      *(int **)(param_1 + 0x30) = local_48;
    }
    else {
      *param_2 = 0xf;
    }
  }
  return;
}



// FUNCTION 143ae8160 FUN_143ae8160 body=2511 status=ok
// SIG undefined FUN_143ae8160(void)

void FUN_143ae8160(longlong param_1,int *param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort local_58;
  uint local_54;
  ushort *local_48;
  ushort *local_40;
  uint local_38;
  int *local_30;
  uint local_28;
  int local_18;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x4c) < 8) {
    FUN_143ae5e80(param_1,param_2);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    local_48 = *(ushort **)(param_1 + 0x10);
    local_38 = (int)*(undefined8 *)(param_1 + 0x18) - (int)local_48;
    if ((local_38 != 0) || (*(int *)(lVar1 + 0x48) != 0)) {
      puVar5 = *(ushort **)(param_1 + 0x20);
      if (puVar5 < *(ushort **)(param_1 + 0x28)) {
        local_28 = (uint)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 1);
        local_30 = *(int **)(param_1 + 0x30);
        local_18 = 0;
        local_58 = 0;
        if (*(int *)(lVar1 + 0x48) != 0) {
          *(undefined1 *)(lVar1 + 0x41) = *(undefined1 *)(lVar1 + 0x48);
          *(undefined1 *)(lVar1 + 0x40) = 1;
          *(undefined4 *)(lVar1 + 0x48) = 0;
        }
        local_54 = (uint)*(char *)(lVar1 + 0x40);
        local_40 = puVar5;
        if (local_54 != 0) {
          puVar3 = (ushort *)(lVar1 + 0x41);
          do {
            *(char *)((longlong)puVar3 + (ulonglong)local_54) = (char)*local_48;
            local_54 = local_54 + 1;
            puVar4 = (ushort *)((longlong)local_48 + 1);
            local_18 = local_18 + 1;
            local_38 = local_38 - 1;
            if (local_54 == 2) {
              local_58 = *puVar3;
              if ((local_58 & 0xf800) != 0xd800) {
                *puVar5 = local_58;
                if (local_30 != (int *)0x0) {
                  *local_30 = -1;
                  local_30 = local_30 + 1;
                }
                local_28 = local_28 - 1;
                local_54 = 0;
                local_58 = 0;
                local_40 = puVar5 + 1;
                break;
              }
              if ((local_58 & 0x400) != 0) break;
            }
            else if (local_54 == 4) {
              uVar2 = *(ushort *)(lVar1 + 0x43);
              if ((uVar2 & 0xfc00) != 0xdc00) {
                *param_2 = 0xc;
                if (*(longlong *)(param_1 + 0x10) - (longlong)puVar4 < 2) {
                  *(uint *)(lVar1 + 0x48) = *(byte *)(lVar1 + 0x43) | 0x100;
                }
                else {
                  local_48 = (ushort *)((longlong)local_48 + -1);
                }
                *(undefined1 *)(lVar1 + 0x40) = 2;
                *(ushort **)(param_1 + 0x10) = local_48;
                *(ushort **)(param_1 + 0x20) = puVar5;
                *(int **)(param_1 + 0x30) = local_30;
                return;
              }
              *puVar5 = *puVar3;
              local_40 = puVar5 + 1;
              if (local_28 < 2) {
                local_28 = 0;
                *(ushort *)(lVar1 + 0x90) = uVar2;
                *(undefined1 *)(lVar1 + 0x5d) = 1;
                *param_2 = 0xf;
              }
              else {
                *local_40 = uVar2;
                local_40 = puVar5 + 2;
                if (local_30 != (int *)0x0) {
                  *local_30 = -1;
                  local_30[1] = -1;
                  local_30 = local_30 + 2;
                }
                local_28 = local_28 - 2;
              }
              local_54 = 0;
              local_58 = 0;
              break;
            }
            local_58 = 0;
            local_48 = puVar4;
          } while (local_38 != 0);
          *(undefined1 *)(lVar1 + 0x40) = (undefined1)local_54;
          local_48 = puVar4;
        }
        local_54 = local_28 << 1;
        if (local_38 < local_54) {
          local_54 = local_38 & 0xfffffffe;
        }
        if ((local_58 == 0) && (local_54 != 0)) {
          local_38 = local_38 - local_54;
          local_54 = local_54 >> 1;
          local_28 = local_28 - local_54;
          if (local_30 == (int *)0x0) {
            do {
              local_58 = *local_48;
              puVar5 = local_48 + 1;
              if ((local_58 & 0xf800) == 0xd800) {
                if ((((local_58 & 0x400) != 0) || (local_54 < 2)) ||
                   (uVar2 = *puVar5, (uVar2 & 0xfc00) != 0xdc00)) break;
                local_48 = local_48 + 2;
                local_54 = local_54 - 1;
                *local_40 = local_58;
                local_40[1] = uVar2;
                local_40 = local_40 + 2;
              }
              else {
                *local_40 = local_58;
                local_40 = local_40 + 1;
                local_48 = puVar5;
              }
              local_54 = local_54 - 1;
              puVar5 = local_48;
            } while (local_54 != 0);
          }
          else {
            do {
              local_58 = *local_48;
              puVar5 = local_48 + 1;
              if ((local_58 & 0xf800) == 0xd800) {
                if ((((local_58 & 0x400) != 0) || (local_54 < 2)) ||
                   (uVar2 = *puVar5, (uVar2 & 0xfc00) != 0xdc00)) break;
                local_48 = local_48 + 2;
                local_54 = local_54 - 1;
                *local_40 = local_58;
                local_40[1] = uVar2;
                local_40 = local_40 + 2;
                *local_30 = local_18;
                local_30[1] = local_18;
                local_30 = local_30 + 2;
                local_18 = local_18 + 4;
              }
              else {
                *local_40 = local_58;
                local_40 = local_40 + 1;
                *local_30 = local_18;
                local_30 = local_30 + 1;
                local_18 = local_18 + 2;
                local_48 = puVar5;
              }
              local_54 = local_54 - 1;
              puVar5 = local_48;
            } while (local_54 != 0);
          }
          local_48 = puVar5;
          if (local_54 == 0) {
            local_58 = 0;
          }
          else {
            local_38 = (local_38 - 2) + local_54 * 2;
            local_28 = local_28 + local_54;
          }
        }
        if (local_58 != 0) {
          *(undefined1 *)(lVar1 + 0x41) = (undefined1)local_58;
          *(char *)(lVar1 + 0x42) = (char)(local_58 >> 8);
          *(undefined1 *)(lVar1 + 0x40) = 2;
          if ((local_58 & 0x400) == 0) {
            if (1 < local_38) {
              uVar2 = *local_48;
              if ((uVar2 & 0xfc00) == 0xdc00) {
                local_48 = local_48 + 1;
                local_38 = local_38 - 2;
                *local_40 = local_58;
                local_40 = local_40 + 1;
                if (local_30 != (int *)0x0) {
                  *local_30 = local_18;
                  local_30 = local_30 + 1;
                }
                *(ushort *)(lVar1 + 0x90) = uVar2;
                *(undefined1 *)(lVar1 + 0x5d) = 1;
                *(undefined1 *)(lVar1 + 0x40) = 0;
                *param_2 = 0xf;
              }
              else {
                *param_2 = 0xc;
              }
            }
          }
          else {
            *param_2 = 0xc;
          }
        }
        if ((*param_2 < 1) && (local_38 != 0)) {
          if (local_28 == 0) {
            *param_2 = 0xf;
          }
          else {
            *(char *)(lVar1 + 0x41 + (longlong)*(char *)(lVar1 + 0x40)) = (char)*local_48;
            *(char *)(lVar1 + 0x40) = *(char *)(lVar1 + 0x40) + '\x01';
            local_48 = (ushort *)((longlong)local_48 + 1);
          }
        }
        *(ushort **)(param_1 + 0x10) = local_48;
        *(ushort **)(param_1 + 0x20) = local_40;
        *(int **)(param_1 + 0x30) = local_30;
      }
      else {
        *param_2 = 0xf;
      }
    }
  }
  return;
}



// FUNCTION 143ae8b40 FUN_143ae8b40 body=675 status=ok
// SIG undefined FUN_143ae8b40(void)

uint FUN_143ae8b40(longlong param_1,undefined4 *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  ushort *puVar3;
  uint local_34;
  ushort *local_30;
  undefined1 *local_20;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x4c) < 8) {
    local_34 = 0xfffffff7;
  }
  else {
    local_30 = *(ushort **)(param_1 + 0x10);
    puVar1 = *(ushort **)(param_1 + 0x18);
    if (local_30 < puVar1) {
      if (puVar1 < local_30 + 1) {
        *(char *)(*(longlong *)(param_1 + 8) + 0x41) = (char)*local_30;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
        *(undefined1 **)(param_1 + 0x10) = (undefined1 *)((longlong)local_30 + 1);
        *param_2 = 0xb;
        local_34 = 0xffff;
      }
      else {
        local_34 = (uint)*local_30;
        puVar3 = local_30 + 1;
        if ((local_34 & 0xfffff800) == 0xd800) {
          if ((*local_30 & 0x400) == 0) {
            if (puVar1 < local_30 + 2) {
              local_20 = (undefined1 *)(*(longlong *)(param_1 + 8) + 0x41);
              *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)puVar1 - (char)local_30;
              do {
                *local_20 = (char)*local_30;
                local_20 = local_20 + 1;
                local_30 = (ushort *)((longlong)local_30 + 1);
              } while (local_30 < puVar1);
              local_34 = 0xffff;
              *param_2 = 0xb;
            }
            else if ((*puVar3 & 0xfc00) == 0xdc00) {
              local_34 = local_34 * 0x400 + -0x35fdc00 + (uint)*puVar3;
              local_30 = local_30 + 2;
            }
            else {
              local_34 = 0xfffffffe;
              local_30 = puVar3;
            }
          }
          else {
            local_34 = 0xfffffffe;
            local_30 = puVar3;
          }
          puVar3 = local_30;
          if ((int)local_34 < 0) {
            lVar2 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 2;
            *(char *)(lVar2 + 0x41) = (char)local_30[-1];
            *(undefined1 *)(lVar2 + 0x42) = *(undefined1 *)((longlong)local_30 + -1);
            local_34 = 0xffff;
            *param_2 = 0xc;
          }
        }
        local_30 = puVar3;
        *(ushort **)(param_1 + 0x10) = local_30;
      }
    }
    else {
      *param_2 = 8;
      local_34 = 0xffff;
    }
  }
  return local_34;
}



// FUNCTION 143ae8df0 FUN_143ae8df0 body=37 status=ok
// SIG undefined FUN_143ae8df0(void)

char * FUN_143ae8df0(longlong param_1)

{
  char *pcVar1;
  
  if ((*(uint *)(param_1 + 0x38) & 0xf) == 0) {
    pcVar1 = "UTF-16LE";
  }
  else {
    pcVar1 = "UTF-16LE,version=1";
  }
  return pcVar1;
}



// FUNCTION 143ae8e20 FUN_143ae8e20 body=48 status=ok
// SIG undefined FUN_143ae8e20(void)

void FUN_143ae8e20(longlong param_1,int param_2)

{
  if (param_2 < 2) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (param_2 != 1) {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  return;
}



// FUNCTION 143ae8e50 FUN_143ae8e50 body=144 status=ok
// SIG undefined FUN_143ae8e50(void)

void FUN_143ae8e50(longlong param_1,longlong param_2,undefined4 *param_3)

{
  if ((*(uint *)(param_1 + 0x38) & 0xf) < 3) {
    if (((*(uint *)(param_1 + 0x38) & 0xf) == 2) && (*(char *)(param_2 + 8) == '\0')) {
      *(undefined **)(param_1 + 0x30) = &DAT_145cfca00;
      _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x28),&DAT_145cfcd08,4);
    }
    FUN_143ae8e20(param_1,0);
  }
  else {
    *param_3 = 1;
  }
  return;
}



// FUNCTION 143ae8f30 FUN_143ae8f30 body=90 status=ok
// SIG undefined FUN_143ae8f30(void)

undefined8 FUN_143ae8f30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x4c);
  if (iVar1 == 8) {
    uVar2 = FUN_143ae7500(param_1,param_2);
  }
  else if (iVar1 == 9) {
    uVar2 = FUN_143ae8b40(param_1,param_2);
  }
  else {
    uVar2 = 0xfffffff7;
  }
  return uVar2;
}



// FUNCTION 143ae8f90 FUN_143ae8f90 body=689 status=ok
// SIG undefined FUN_143ae8f90(void)

void FUN_143ae8f90(longlong param_1,int *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort *puVar4;
  uint local_38;
  uint local_34;
  ushort *local_30;
  byte *local_28;
  
  local_28 = *(byte **)(param_1 + 0x10);
  local_30 = *(ushort **)(param_1 + 0x20);
  pbVar1 = *(byte **)(param_1 + 0x18);
  puVar2 = *(ushort **)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x48) == 0) goto LAB_143ae9044;
  if (puVar2 <= local_30) goto LAB_143ae9044;
  local_34 = (uint)*(char *)(*(longlong *)(param_1 + 8) + 0x40);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
  local_38 = *(int *)(*(longlong *)(param_1 + 8) + 0x48) - 1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48) = 0;
  do {
    for (; local_34 < 4; local_34 = local_34 + 1) {
      if (pbVar1 <= local_28) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x48) = local_38 + 1;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = (undefined1)local_34;
LAB_143ae91f3:
        if ((local_28 < pbVar1) && ((puVar2 <= local_30 && (*param_2 < 1)))) {
          *param_2 = 0xf;
        }
        *(ushort **)(param_1 + 0x20) = local_30;
        *(byte **)(param_1 + 0x10) = local_28;
        return;
      }
      local_38 = local_38 << 8 | (uint)*local_28;
      *(byte *)(lVar3 + 0x41 + (ulonglong)local_34) = *local_28;
      local_28 = local_28 + 1;
    }
    if ((0x10ffff < local_38) || ((local_38 & 0xfffff800) == 0xd800)) {
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = (undefined1)local_34;
      *param_2 = 0xc;
      goto LAB_143ae91f3;
    }
    if (local_38 < 0x10000) {
      *local_30 = (ushort)local_38;
      local_30 = local_30 + 1;
    }
    else {
      *local_30 = (short)(local_38 >> 10) + 0xd7c0;
      puVar4 = local_30 + 1;
      local_38._0_2_ = (ushort)local_38 & 0x3ff | 0xdc00;
      if (puVar2 <= puVar4) {
        *(ushort *)(*(longlong *)(param_1 + 8) + 0x90) = (ushort)local_38;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x5d) = 1;
        *param_2 = 0xf;
        local_30 = puVar4;
        goto LAB_143ae91f3;
      }
      *puVar4 = (ushort)local_38;
      local_30 = local_30 + 2;
    }
LAB_143ae9044:
    if ((pbVar1 <= local_28) || (puVar2 <= local_30)) goto LAB_143ae91f3;
    local_34 = 0;
    local_38 = 0;
  } while( true );
}



// FUNCTION 143ae9250 FUN_143ae9250 body=816 status=ok
// SIG undefined FUN_143ae9250(void)

void FUN_143ae9250(longlong param_1,int *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort *puVar4;
  uint local_48;
  uint local_44;
  ushort *local_40;
  int local_38;
  int *local_30;
  byte *local_28;
  
  local_28 = *(byte **)(param_1 + 0x10);
  local_40 = *(ushort **)(param_1 + 0x20);
  local_30 = *(int **)(param_1 + 0x30);
  pbVar1 = *(byte **)(param_1 + 0x18);
  puVar2 = *(ushort **)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 8);
  local_38 = 0;
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x48) == 0) goto LAB_143ae931a;
  if (puVar2 <= local_40) goto LAB_143ae931a;
  local_44 = (uint)*(char *)(*(longlong *)(param_1 + 8) + 0x40);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
  local_48 = *(int *)(*(longlong *)(param_1 + 8) + 0x48) - 1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48) = 0;
  while( true ) {
    for (; local_44 < 4; local_44 = local_44 + 1) {
      if (pbVar1 <= local_28) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x48) = local_48 + 1;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = (undefined1)local_44;
        goto LAB_143ae9524;
      }
      local_48 = local_48 << 8 | (uint)*local_28;
      *(byte *)(lVar3 + 0x41 + (ulonglong)local_44) = *local_28;
      local_28 = local_28 + 1;
    }
    if ((0x10ffff < local_48) || ((local_48 & 0xfffff800) == 0xd800)) break;
    if (local_48 < 0x10000) {
      *local_40 = (ushort)local_48;
      local_40 = local_40 + 1;
      *local_30 = local_38;
      local_30 = local_30 + 1;
    }
    else {
      *local_40 = (short)(local_48 >> 10) + 0xd7c0;
      puVar4 = local_40 + 1;
      *local_30 = local_38;
      local_48._0_2_ = (ushort)local_48 & 0x3ff | 0xdc00;
      if (puVar2 <= puVar4) {
        *(ushort *)(*(longlong *)(param_1 + 8) + 0x90) = (ushort)local_48;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x5d) = 1;
        *param_2 = 0xf;
        local_40 = puVar4;
        local_30 = local_30 + 1;
        goto LAB_143ae9524;
      }
      *puVar4 = (ushort)local_48;
      local_40 = local_40 + 2;
      local_30[1] = local_38;
      local_30 = local_30 + 2;
    }
    local_38 = local_38 + local_44;
LAB_143ae931a:
    if ((pbVar1 <= local_28) || (puVar2 <= local_40)) goto LAB_143ae9524;
    local_44 = 0;
    local_48 = 0;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = (undefined1)local_44;
  *param_2 = 0xc;
LAB_143ae9524:
  if (((local_28 < pbVar1) && (puVar2 <= local_40)) && (*param_2 < 1)) {
    *param_2 = 0xf;
  }
  *(ushort **)(param_1 + 0x20) = local_40;
  *(byte **)(param_1 + 0x10) = local_28;
  *(int **)(param_1 + 0x30) = local_30;
  return;
}



// FUNCTION 143ae9580 FUN_143ae9580 body=981 status=ok
// SIG undefined FUN_143ae9580(void)

/* WARNING: Removing unreachable block (ram,0x000143ae9687) */

void FUN_143ae9580(longlong param_1,int *param_2)

{
  uint local_48;
  ushort *local_40;
  byte abStack_38 [4];
  uint local_34;
  byte *local_30;
  ushort *local_20;
  byte *local_18;
  
  local_40 = *(ushort **)(param_1 + 0x10);
  local_20 = *(ushort **)(param_1 + 0x18);
  local_18 = *(byte **)(param_1 + 0x28);
  if (local_40 < local_20) {
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x50) == 1) {
      FUN_143b0d0e0(*(undefined8 *)(param_1 + 8),&DAT_145cfcd90,4,param_1 + 0x20,
                    *(undefined8 *)(param_1 + 0x28),param_1 + 0x30,0xffffffff,param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
    }
    local_30 = *(byte **)(param_1 + 0x20);
    abStack_38[0] = 0;
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x54) == 0) goto LAB_143ae96d0;
    local_48 = *(uint *)(*(longlong *)(param_1 + 8) + 0x54);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x54) = 0;
    do {
      if (local_20 <= local_40) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_48;
        if (*(char *)(param_1 + 2) != '\0') {
          *param_2 = 0xc;
        }
        goto LAB_143ae98f8;
      }
      if ((*local_40 & 0xfffffc00) != 0xdc00) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_48;
        *param_2 = 0xc;
        goto LAB_143ae98f8;
      }
      local_48 = (local_48 - 0xd800) * 0x400 + 0x2400 + (uint)*local_40;
      local_40 = local_40 + 1;
      do {
        abStack_38[1] = (byte)(local_48 >> 0x10) & 0x1f;
        abStack_38[2] = (char)(local_48 >> 8);
        abStack_38[3] = (undefined1)local_48;
        for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
          if (local_30 < local_18) {
            *local_30 = abStack_38[local_34];
            local_30 = local_30 + 1;
          }
          else {
            *(byte *)(*(longlong *)(param_1 + 8) + 0x68 +
                     (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = abStack_38[local_34];
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
        }
LAB_143ae96d0:
        if ((local_20 <= local_40) || (local_18 <= local_30)) goto LAB_143ae98f8;
        local_48 = (uint)*local_40;
        local_40 = local_40 + 1;
      } while ((local_48 & 0xfffff800) != 0xd800);
    } while ((local_48 & 0xfffffc00) == 0xd800);
    *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_48;
    *param_2 = 0xc;
LAB_143ae98f8:
    if (((local_40 < local_20) && (local_18 <= local_30)) && (*param_2 < 1)) {
      *param_2 = 0xf;
    }
    *(byte **)(param_1 + 0x20) = local_30;
    *(ushort **)(param_1 + 0x10) = local_40;
  }
  return;
}



// FUNCTION 143ae9960 FUN_143ae9960 body=1121 status=ok
// SIG undefined FUN_143ae9960(void)

/* WARNING: Removing unreachable block (ram,0x000143ae9a89) */

void FUN_143ae9960(longlong param_1,int *param_2)

{
  uint local_58;
  byte abStack_54 [4];
  uint local_50;
  ushort *local_48;
  byte *local_40;
  int local_38;
  uint local_34;
  int *local_28;
  ushort *local_20;
  byte *local_18;
  
  local_48 = *(ushort **)(param_1 + 0x10);
  local_20 = *(ushort **)(param_1 + 0x18);
  local_18 = *(byte **)(param_1 + 0x28);
  local_38 = 0;
  if (local_48 < local_20) {
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x50) == 1) {
      FUN_143b0d0e0(*(undefined8 *)(param_1 + 8),&DAT_145cfcd94,4,param_1 + 0x20,
                    *(undefined8 *)(param_1 + 0x28),param_1 + 0x30,0xffffffff,param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
    }
    local_40 = *(byte **)(param_1 + 0x20);
    local_28 = *(int **)(param_1 + 0x30);
    abStack_54[0] = 0;
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x54) == 0) goto LAB_143ae9ad5;
    local_58 = *(uint *)(*(longlong *)(param_1 + 8) + 0x54);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x54) = 0;
    do {
      if (local_20 <= local_48) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_58;
        if (*(char *)(param_1 + 2) != '\0') {
          *param_2 = 0xc;
        }
        goto LAB_143ae9d50;
      }
      if ((*local_48 & 0xfffffc00) != 0xdc00) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_58;
        *param_2 = 0xc;
        goto LAB_143ae9d50;
      }
      local_58 = (local_58 - 0xd800) * 0x400 + 0x2400 + (uint)*local_48;
      local_48 = local_48 + 1;
      do {
        abStack_54[1] = (byte)(local_58 >> 0x10) & 0x1f;
        abStack_54[2] = (char)(local_58 >> 8);
        abStack_54[3] = (undefined1)local_58;
        for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
          if (local_40 < local_18) {
            *local_40 = abStack_54[local_50];
            local_40 = local_40 + 1;
            *local_28 = local_38;
            local_28 = local_28 + 1;
          }
          else {
            *(byte *)(*(longlong *)(param_1 + 8) + 0x68 +
                     (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = abStack_54[local_50];
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
        }
        local_34 = (uint)((local_58 & 0x1f0000) != 0);
        local_38 = local_38 + 1 + local_34;
LAB_143ae9ad5:
        if ((local_20 <= local_48) || (local_18 <= local_40)) goto LAB_143ae9d50;
        local_58 = (uint)*local_48;
        local_48 = local_48 + 1;
      } while ((local_58 & 0xfffff800) != 0xd800);
    } while ((local_58 & 0xfffffc00) == 0xd800);
    *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_58;
    *param_2 = 0xc;
LAB_143ae9d50:
    if (((local_48 < local_20) && (local_18 <= local_40)) && (*param_2 < 1)) {
      *param_2 = 0xf;
    }
    *(byte **)(param_1 + 0x20) = local_40;
    *(ushort **)(param_1 + 0x10) = local_48;
    *(int **)(param_1 + 0x30) = local_28;
  }
  return;
}



// FUNCTION 143ae9dd0 FUN_143ae9dd0 body=394 status=ok
// SIG undefined FUN_143ae9dd0(void)

uint FUN_143ae9dd0(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *_Src;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_18;
  
  _Src = *(byte **)(param_1 + 0x10);
  if (_Src < *(byte **)(param_1 + 0x18)) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x18) - (int)_Src;
    if (iVar2 < 4) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 8) + 0x41),_Src,(longlong)iVar2);
      local_18 = (undefined1)iVar2;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = local_18;
      *(byte **)(param_1 + 0x10) = _Src + iVar2;
      *param_2 = 0xb;
      uVar4 = 0xffff;
    }
    else {
      uVar3 = (uint)*_Src << 0x18 | (uint)_Src[1] << 0x10;
      bVar1 = _Src[2];
      uVar4 = uVar3 | (uint)bVar1 << 8 | (uint)_Src[3];
      *(byte **)(param_1 + 0x10) = _Src + 4;
      if ((0x10ffff < uVar4) || ((uVar3 | (uint)bVar1 << 8 & 0xfffff800) == 0xd800)) {
        _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_1 + 8) + 0x41),_Src,4);
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 4;
        *param_2 = 0xc;
        uVar4 = 0xffff;
      }
    }
  }
  else {
    *param_2 = 8;
    uVar4 = 0xffff;
  }
  return uVar4;
}



// FUNCTION 143ae9f60 FUN_143ae9f60 body=704 status=ok
// SIG undefined FUN_143ae9f60(void)

void FUN_143ae9f60(longlong param_1,int *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort *puVar4;
  uint local_38;
  uint local_34;
  ushort *local_30;
  byte *local_28;
  
  local_28 = *(byte **)(param_1 + 0x10);
  local_30 = *(ushort **)(param_1 + 0x20);
  pbVar1 = *(byte **)(param_1 + 0x18);
  puVar2 = *(ushort **)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x48) == 0) goto LAB_143aea014;
  if (puVar2 <= local_30) goto LAB_143aea014;
  local_34 = (uint)*(char *)(*(longlong *)(param_1 + 8) + 0x40);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
  local_38 = *(int *)(*(longlong *)(param_1 + 8) + 0x48) - 1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48) = 0;
  do {
    for (; local_34 < 4; local_34 = local_34 + 1) {
      if (pbVar1 <= local_28) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x48) = local_38 + 1;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = (undefined1)local_34;
LAB_143aea1d2:
        if ((local_28 < pbVar1) && ((puVar2 <= local_30 && (*param_2 < 1)))) {
          *param_2 = 0xf;
        }
        *(ushort **)(param_1 + 0x20) = local_30;
        *(byte **)(param_1 + 0x10) = local_28;
        return;
      }
      local_38 = local_38 | (uint)*local_28 << ((byte)(local_34 << 3) & 0x1f);
      *(byte *)(lVar3 + 0x41 + (ulonglong)local_34) = *local_28;
      local_28 = local_28 + 1;
    }
    if ((0x10ffff < local_38) || ((local_38 & 0xfffff800) == 0xd800)) {
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = (undefined1)local_34;
      *param_2 = 0xc;
      goto LAB_143aea1d2;
    }
    if (local_38 < 0x10000) {
      *local_30 = (ushort)local_38;
      local_30 = local_30 + 1;
    }
    else {
      *local_30 = (short)(local_38 >> 10) + 0xd7c0;
      puVar4 = local_30 + 1;
      local_38._0_2_ = (ushort)local_38 & 0x3ff | 0xdc00;
      if (puVar2 <= puVar4) {
        *(ushort *)(*(longlong *)(param_1 + 8) + 0x90) = (ushort)local_38;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x5d) = 1;
        *param_2 = 0xf;
        local_30 = puVar4;
        goto LAB_143aea1d2;
      }
      *puVar4 = (ushort)local_38;
      local_30 = local_30 + 2;
    }
LAB_143aea014:
    if ((pbVar1 <= local_28) || (puVar2 <= local_30)) goto LAB_143aea1d2;
    local_34 = 0;
    local_38 = 0;
  } while( true );
}



// FUNCTION 143aea220 FUN_143aea220 body=831 status=ok
// SIG undefined FUN_143aea220(void)

void FUN_143aea220(longlong param_1,int *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort *puVar4;
  uint local_48;
  uint local_44;
  ushort *local_40;
  int local_38;
  int *local_30;
  byte *local_28;
  
  local_28 = *(byte **)(param_1 + 0x10);
  local_40 = *(ushort **)(param_1 + 0x20);
  local_30 = *(int **)(param_1 + 0x30);
  pbVar1 = *(byte **)(param_1 + 0x18);
  puVar2 = *(ushort **)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 8);
  local_38 = 0;
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x48) == 0) goto LAB_143aea2ea;
  if (puVar2 <= local_40) goto LAB_143aea2ea;
  local_44 = (uint)*(char *)(*(longlong *)(param_1 + 8) + 0x40);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
  local_48 = *(int *)(*(longlong *)(param_1 + 8) + 0x48) - 1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48) = 0;
  while( true ) {
    for (; local_44 < 4; local_44 = local_44 + 1) {
      if (pbVar1 <= local_28) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x48) = local_48 + 1;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = (undefined1)local_44;
        goto LAB_143aea503;
      }
      local_48 = local_48 | (uint)*local_28 << ((byte)(local_44 << 3) & 0x1f);
      *(byte *)(lVar3 + 0x41 + (ulonglong)local_44) = *local_28;
      local_28 = local_28 + 1;
    }
    if ((0x10ffff < local_48) || ((local_48 & 0xfffff800) == 0xd800)) break;
    if (local_48 < 0x10000) {
      *local_40 = (ushort)local_48;
      local_40 = local_40 + 1;
      *local_30 = local_38;
      local_30 = local_30 + 1;
    }
    else {
      *local_40 = (short)(local_48 >> 10) + 0xd7c0;
      puVar4 = local_40 + 1;
      *local_30 = local_38;
      local_48._0_2_ = (ushort)local_48 & 0x3ff | 0xdc00;
      if (puVar2 <= puVar4) {
        *(ushort *)(*(longlong *)(param_1 + 8) + 0x90) = (ushort)local_48;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x5d) = 1;
        *param_2 = 0xf;
        local_40 = puVar4;
        local_30 = local_30 + 1;
        goto LAB_143aea503;
      }
      *puVar4 = (ushort)local_48;
      local_40 = local_40 + 2;
      local_30[1] = local_38;
      local_30 = local_30 + 2;
    }
    local_38 = local_38 + local_44;
LAB_143aea2ea:
    if ((pbVar1 <= local_28) || (puVar2 <= local_40)) goto LAB_143aea503;
    local_44 = 0;
    local_48 = 0;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = (undefined1)local_44;
  *param_2 = 0xc;
LAB_143aea503:
  if (((local_28 < pbVar1) && (puVar2 <= local_40)) && (*param_2 < 1)) {
    *param_2 = 0xf;
  }
  *(ushort **)(param_1 + 0x20) = local_40;
  *(byte **)(param_1 + 0x10) = local_28;
  *(int **)(param_1 + 0x30) = local_30;
  return;
}



// FUNCTION 143aea560 FUN_143aea560 body=981 status=ok
// SIG undefined FUN_143aea560(void)

/* WARNING: Removing unreachable block (ram,0x000143aea667) */

void FUN_143aea560(longlong param_1,int *param_2)

{
  uint local_48;
  ushort *local_40;
  byte abStack_38 [4];
  uint local_34;
  byte *local_30;
  ushort *local_20;
  byte *local_18;
  
  local_40 = *(ushort **)(param_1 + 0x10);
  local_20 = *(ushort **)(param_1 + 0x18);
  local_18 = *(byte **)(param_1 + 0x28);
  if (local_40 < local_20) {
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x50) == 1) {
      FUN_143b0d0e0(*(undefined8 *)(param_1 + 8),&DAT_145cfcd98,4,param_1 + 0x20,
                    *(undefined8 *)(param_1 + 0x28),param_1 + 0x30,0xffffffff,param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
    }
    local_30 = *(byte **)(param_1 + 0x20);
    abStack_38[3] = 0;
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x54) == 0) goto LAB_143aea6b0;
    local_48 = *(uint *)(*(longlong *)(param_1 + 8) + 0x54);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x54) = 0;
    do {
      if (local_20 <= local_40) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_48;
        if (*(char *)(param_1 + 2) != '\0') {
          *param_2 = 0xc;
        }
        goto LAB_143aea8d8;
      }
      if ((*local_40 & 0xfffffc00) != 0xdc00) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_48;
        *param_2 = 0xc;
        goto LAB_143aea8d8;
      }
      local_48 = (local_48 - 0xd800) * 0x400 + 0x2400 + (uint)*local_40;
      local_40 = local_40 + 1;
      do {
        abStack_38[2] = (byte)(local_48 >> 0x10) & 0x1f;
        abStack_38[1] = (char)(local_48 >> 8);
        abStack_38[0] = (byte)local_48;
        for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
          if (local_30 < local_18) {
            *local_30 = abStack_38[local_34];
            local_30 = local_30 + 1;
          }
          else {
            *(byte *)(*(longlong *)(param_1 + 8) + 0x68 +
                     (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = abStack_38[local_34];
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
        }
LAB_143aea6b0:
        if ((local_20 <= local_40) || (local_18 <= local_30)) goto LAB_143aea8d8;
        local_48 = (uint)*local_40;
        local_40 = local_40 + 1;
      } while ((local_48 & 0xfffff800) != 0xd800);
    } while ((local_48 & 0xfffffc00) == 0xd800);
    *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_48;
    *param_2 = 0xc;
LAB_143aea8d8:
    if (((local_40 < local_20) && (local_18 <= local_30)) && (*param_2 < 1)) {
      *param_2 = 0xf;
    }
    *(byte **)(param_1 + 0x20) = local_30;
    *(ushort **)(param_1 + 0x10) = local_40;
  }
  return;
}



// FUNCTION 143aea940 FUN_143aea940 body=1121 status=ok
// SIG undefined FUN_143aea940(void)

/* WARNING: Removing unreachable block (ram,0x000143aeaa69) */

void FUN_143aea940(longlong param_1,int *param_2)

{
  uint local_58;
  byte abStack_54 [4];
  uint local_50;
  ushort *local_48;
  byte *local_40;
  int local_38;
  uint local_34;
  int *local_28;
  ushort *local_20;
  byte *local_18;
  
  local_48 = *(ushort **)(param_1 + 0x10);
  local_20 = *(ushort **)(param_1 + 0x18);
  local_18 = *(byte **)(param_1 + 0x28);
  local_38 = 0;
  if (local_48 < local_20) {
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x50) == 1) {
      FUN_143b0d0e0(*(undefined8 *)(param_1 + 8),&DAT_145cfcd9c,4,param_1 + 0x20,
                    *(undefined8 *)(param_1 + 0x28),param_1 + 0x30,0xffffffff,param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
    }
    local_40 = *(byte **)(param_1 + 0x20);
    local_28 = *(int **)(param_1 + 0x30);
    abStack_54[3] = 0;
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x54) == 0) goto LAB_143aeaab5;
    local_58 = *(uint *)(*(longlong *)(param_1 + 8) + 0x54);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x54) = 0;
    do {
      if (local_20 <= local_48) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_58;
        if (*(char *)(param_1 + 2) != '\0') {
          *param_2 = 0xc;
        }
        goto LAB_143aead30;
      }
      if ((*local_48 & 0xfffffc00) != 0xdc00) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_58;
        *param_2 = 0xc;
        goto LAB_143aead30;
      }
      local_58 = (local_58 - 0xd800) * 0x400 + 0x2400 + (uint)*local_48;
      local_48 = local_48 + 1;
      do {
        abStack_54[2] = (byte)(local_58 >> 0x10) & 0x1f;
        abStack_54[1] = (char)(local_58 >> 8);
        abStack_54[0] = (byte)local_58;
        for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
          if (local_40 < local_18) {
            *local_40 = abStack_54[local_50];
            local_40 = local_40 + 1;
            *local_28 = local_38;
            local_28 = local_28 + 1;
          }
          else {
            *(byte *)(*(longlong *)(param_1 + 8) + 0x68 +
                     (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = abStack_54[local_50];
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
        }
        local_34 = (uint)((local_58 & 0x1f0000) != 0);
        local_38 = local_38 + 1 + local_34;
LAB_143aeaab5:
        if ((local_20 <= local_48) || (local_18 <= local_40)) goto LAB_143aead30;
        local_58 = (uint)*local_48;
        local_48 = local_48 + 1;
      } while ((local_58 & 0xfffff800) != 0xd800);
    } while ((local_58 & 0xfffffc00) == 0xd800);
    *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_58;
    *param_2 = 0xc;
LAB_143aead30:
    if (((local_48 < local_20) && (local_18 <= local_40)) && (*param_2 < 1)) {
      *param_2 = 0xf;
    }
    *(byte **)(param_1 + 0x20) = local_40;
    *(ushort **)(param_1 + 0x10) = local_48;
    *(int **)(param_1 + 0x30) = local_28;
  }
  return;
}



// FUNCTION 143aeadb0 FUN_143aeadb0 body=394 status=ok
// SIG undefined FUN_143aeadb0(void)

uint FUN_143aeadb0(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *_Src;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_18;
  
  _Src = *(byte **)(param_1 + 0x10);
  if (_Src < *(byte **)(param_1 + 0x18)) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x18) - (int)_Src;
    if (iVar2 < 4) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 8) + 0x41),_Src,(longlong)iVar2);
      local_18 = (undefined1)iVar2;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = local_18;
      *(byte **)(param_1 + 0x10) = _Src + iVar2;
      *param_2 = 0xb;
      uVar4 = 0xffff;
    }
    else {
      uVar3 = (uint)_Src[3] << 0x18 | (uint)_Src[2] << 0x10;
      bVar1 = _Src[1];
      uVar4 = uVar3 | (uint)bVar1 << 8 | (uint)*_Src;
      *(byte **)(param_1 + 0x10) = _Src + 4;
      if ((0x10ffff < uVar4) || ((uVar3 | (uint)bVar1 << 8 & 0xfffff800) == 0xd800)) {
        _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_1 + 8) + 0x41),_Src,4);
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 4;
        *param_2 = 0xc;
        uVar4 = 0xffff;
      }
    }
  }
  else {
    *param_2 = 8;
    uVar4 = 0xffff;
  }
  return uVar4;
}



// FUNCTION 143aeaf40 FUN_143aeaf40 body=36 status=ok
// SIG undefined FUN_143aeaf40(void)

void FUN_143aeaf40(undefined8 param_1)

{
  FUN_143ae8e20(param_1,0);
  return;
}



// FUNCTION 143aeaf70 FUN_143aeaf70 body=1180 status=ok
// SIG undefined FUN_143aeaf70(void)

void FUN_143aeaf70(longlong param_1,int *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  uint local_58;
  char *local_50;
  int local_44;
  int *local_40;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_50 = *(char **)(param_1 + 0x10);
  pcVar3 = *(char **)(param_1 + 0x18);
  local_40 = *(int **)(param_1 + 0x30);
  local_58 = *(uint *)(lVar2 + 0x4c);
  local_44 = 0;
LAB_143aeafd6:
  if ((pcVar3 <= local_50) || (0 < *param_2)) {
    if ((local_40 != (int *)0x0) && (local_44 != 0)) {
      piVar4 = *(int **)(param_1 + 0x30);
      for (; local_40 < piVar4; local_40 = local_40 + 1) {
        *local_40 = *local_40 + local_44;
      }
    }
    *(char **)(param_1 + 0x10) = local_50;
    if (((local_50 == pcVar3) && (*(char *)(param_1 + 2) != '\0')) && (local_58 != 0)) {
      if (local_58 == 8) {
        FUN_143ae8f90(param_1,param_2);
      }
      else if (local_58 == 9) {
        FUN_143ae9f60(param_1,param_2);
      }
      else {
        *(undefined **)(param_1 + 0x10) = &DAT_145cfcf98 + (int)(local_58 & 4);
        *(longlong *)(param_1 + 0x18) =
             (longlong)(int)(local_58 & 3) + *(longlong *)(param_1 + 0x10);
        FUN_143ae8f90(param_1,param_2);
        *(char **)(param_1 + 0x10) = local_50;
        *(char **)(param_1 + 0x18) = pcVar3;
        local_58 = 8;
      }
    }
    *(uint *)(lVar2 + 0x4c) = local_58;
    return;
  }
  switch(local_58) {
  case 0:
    if (*local_50 == '\0') {
      local_58 = 1;
    }
    else {
      if (*local_50 != -1) {
        local_58 = 8;
        goto LAB_143aeafd6;
      }
      local_58 = 5;
    }
    local_50 = local_50 + 1;
    break;
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
    if (*local_50 == (&DAT_145cfcf98)[(int)local_58]) {
      local_58 = local_58 + 1;
      local_50 = local_50 + 1;
      if (local_58 == 4) {
        local_58 = 8;
        local_44 = (int)local_50 - (int)*(undefined8 *)(param_1 + 0x10);
      }
      else if (local_58 == 8) {
        local_58 = 9;
        local_44 = (int)local_50 - (int)*(undefined8 *)(param_1 + 0x10);
      }
      break;
    }
    uVar5 = (int)local_50 - (int)*(undefined8 *)(param_1 + 0x10);
    local_50 = *(char **)(param_1 + 0x10);
    if (uVar5 != (local_58 & 3)) {
      uVar1 = *(undefined1 *)(param_1 + 2);
      *(undefined **)(param_1 + 0x10) = &DAT_145cfcf98 + (int)(local_58 & 4);
      *(longlong *)(param_1 + 0x18) =
           (longlong)(int)((local_58 & 3) - uVar5) + *(longlong *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 2) = 0;
      FUN_143ae8f90(param_1,param_2);
      *(char **)(param_1 + 0x18) = pcVar3;
      *(undefined1 *)(param_1 + 2) = uVar1;
    }
    local_58 = 8;
    goto LAB_143aeafd6;
  case 8:
    *(char **)(param_1 + 0x10) = local_50;
    if (local_40 == (int *)0x0) {
      FUN_143ae8f90(param_1,param_2);
    }
    else {
      FUN_143ae9250(param_1,param_2);
    }
    local_50 = *(char **)(param_1 + 0x10);
    break;
  case 9:
    *(char **)(param_1 + 0x10) = local_50;
    if (local_40 == (int *)0x0) {
      FUN_143ae9f60(param_1,param_2);
    }
    else {
      FUN_143aea220(param_1,param_2);
    }
    local_50 = *(char **)(param_1 + 0x10);
  }
  goto LAB_143aeafd6;
}



// FUNCTION 143aeb440 FUN_143aeb440 body=90 status=ok
// SIG undefined FUN_143aeb440(void)

undefined8 FUN_143aeb440(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x4c);
  if (iVar1 == 8) {
    uVar2 = FUN_143ae9dd0(param_1,param_2);
  }
  else if (iVar1 == 9) {
    uVar2 = FUN_143aeadb0(param_1,param_2);
  }
  else {
    uVar2 = 0xfffffff7;
  }
  return uVar2;
}



// FUNCTION 143aeb4a0 FUN_143aeb4a0 body=2517 status=ok
// SIG undefined FUN_143aeb4a0(void)

void FUN_143aeb4a0(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  short *psVar7;
  uint local_84;
  uint local_80;
  byte *local_78;
  char *local_70;
  int local_68;
  short *local_60;
  longlong local_58;
  uint local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  char local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  byte *local_20;
  undefined4 local_18;
  uint local_14;
  byte *local_10;
  
  local_78 = *(byte **)(param_1 + 0x10);
  local_60 = *(short **)(param_1 + 0x20);
  local_20 = *(byte **)(param_1 + 0x18);
  local_50 = 0;
  local_58 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  local_70 = (char *)(local_58 + 0x5c);
  if (*(int *)(local_58 + 0x68) == 0) {
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x40) != '\x01') goto LAB_143aeb5ca;
    if (local_20 <= local_78) goto LAB_143aeb5ca;
    if (*(short **)(param_1 + 0x28) <= local_60) goto LAB_143aeb5ca;
    local_84 = (uint)*(byte *)(*(longlong *)(param_1 + 8) + 0x41);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
    local_68 = (int)local_70[*(char *)(local_58 + 0x60)];
    goto LAB_143aeb9df;
  }
  do {
    local_10 = local_78;
    local_48 = *(char *)(*(longlong *)(param_1 + 8) + 0x40);
    FUN_143af0dd0(*(undefined8 *)(param_1 + 8),&local_78,local_20,1,param_2);
    if ((((*(int *)(local_58 + 0x6c) == 0) && (*(int *)(local_58 + 0x68) == 0)) &&
        (cVar4 = FUN_143a8b110(*param_2), cVar4 != '\0')) && (*(char *)(local_58 + 0x70) != '\0')) {
      *param_2 = 0x12;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x11c) = 2;
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = local_48 + ((char)local_78 - (char)local_10);
    }
    cVar4 = FUN_143a8b0e0(*param_2);
    if (cVar4 != '\0') {
      *(short **)(param_1 + 0x20) = local_60;
      *(byte **)(param_1 + 0x10) = local_78;
      *(undefined1 *)(local_58 + 0x70) = 0;
      return;
    }
    if (*(int *)(local_58 + 0x68) == 0) {
      *(undefined1 *)(local_58 + 0x70) = 1;
    }
LAB_143aeb5ca:
    while( true ) {
      if (local_20 <= local_78) goto LAB_143aebe63;
      local_80 = 0xffff;
      if (*(short **)(param_1 + 0x28) <= local_60) {
        *param_2 = 0xf;
        goto LAB_143aebe63;
      }
      bVar1 = *local_78;
      local_84 = (uint)bVar1;
      pbVar6 = local_78 + 1;
      local_44 = local_84;
      if ((local_84 != 10) && (local_84 != 0xd)) break;
      if ((*local_70 != '\0') && (*local_70 != '\x03')) {
        *local_70 = '\0';
      }
      local_70[2] = '\0';
      local_70[4] = '\0';
LAB_143aeb851:
      *(undefined1 *)(local_58 + 0x70) = 0;
      local_68 = (int)local_70[local_70[4]];
      if ((((local_84 - 0xa1 & 0xff) < 0x3f) && (*(int *)(local_58 + 0x6c) == 4)) &&
         ((local_68 < 4 || (7 < local_68)))) {
        local_80 = local_84 + 0xfec0;
        local_78 = pbVar6;
        if ('\x01' < local_70[4]) {
          local_70[4] = local_70[5];
        }
      }
      else {
        local_40 = local_68;
        if (local_68 == 0) {
          local_78 = pbVar6;
          if (local_84 < 0x80) {
            local_80 = local_84;
          }
        }
        else if (local_68 == 1) {
          if (local_84 < 0x80) {
            local_80 = local_84 + 0x80;
          }
          local_70[4] = local_70[5];
          local_78 = pbVar6;
        }
        else if (local_68 == 2) {
          if (local_84 < 0x80) {
            local_80 = (uint)*(ushort *)
                              (*(longlong *)(*(longlong *)(local_58 + 0x10) + 0x40) +
                              (ulonglong)(local_84 + 0x80 & 0xff) * 4);
          }
          local_70[4] = local_70[5];
          local_78 = pbVar6;
        }
        else if (local_68 == 3) {
          local_78 = pbVar6;
          if (local_84 < 0x80) {
            local_80 = FUN_143af1620(local_84);
          }
        }
        else if (local_68 == 8) {
          local_78 = pbVar6;
          if ((local_84 - 0x21 & 0xff) < 0x3f) {
            local_80 = local_84 + 0xff40;
          }
        }
        else {
          local_78 = pbVar6;
          if (local_20 <= pbVar6) {
            *(byte *)(*(longlong *)(param_1 + 8) + 0x41) = bVar1;
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
            goto LAB_143aebe63;
          }
LAB_143aeb9df:
          local_80 = 0xffff;
          bVar1 = *local_78;
          local_38 = (uint)((local_84 - 0x21 & 0xff) < 0x5e);
          local_14 = local_38;
          local_2c = (uint)((byte)(bVar1 - 0x21) < 0x5e);
          local_3c = local_2c;
          if ((local_38 == 0) || (local_2c == 0)) {
            if ((local_2c == 0) &&
               ((0x1f < bVar1 || (local_18 = 1, (1 << (bVar1 & 0x1f) & 0x800c000U) == 0)))) {
              local_84 = local_84 << 8 | 0x10000 | (uint)bVar1;
              local_78 = local_78 + 1;
            }
          }
          else {
            local_78 = local_78 + 1;
            uVar5 = local_84 << 8 | (uint)bVar1;
            local_50 = uVar5;
            if (local_68 == 4) {
              FUN_143af0ce0((undefined1)local_84,bVar1,&local_4c);
              local_84 = local_50;
            }
            else {
              if (local_68 == 7) {
                local_50 = uVar5 + 0x8080;
              }
              local_4c = (undefined1)(local_50 >> 8);
              local_4b = (undefined1)local_50;
              local_84 = uVar5;
            }
            local_80 = FUN_143adf760(*(undefined8 *)(local_58 + (longlong)local_68 * 8),&local_4c,2,
                                     0);
          }
        }
      }
LAB_143aebbad:
      iVar2 = (int)local_78;
      if (local_80 < 0xfffe) {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          if (local_84 < 0x100) {
            local_30 = 1;
          }
          else {
            local_30 = 2;
          }
          *(int *)(*(longlong *)(param_1 + 0x30) +
                  ((longlong)local_60 - *(longlong *)(param_1 + 0x20) >> 1) * 4) =
               (iVar2 - (int)*(undefined8 *)(param_1 + 0x10)) - local_30;
        }
        *local_60 = (short)local_80;
        local_60 = local_60 + 1;
      }
      else {
        if (local_80 < 0x10000) {
          FUN_143af1760(*(undefined8 *)(param_1 + 8),local_84,local_80,param_2);
LAB_143aebe63:
          *(short **)(param_1 + 0x20) = local_60;
          *(byte **)(param_1 + 0x10) = local_78;
          return;
        }
        *local_60 = (short)(local_80 - 0x10000 >> 10) + -0x2800;
        if (*(longlong *)(param_1 + 0x30) != 0) {
          if (local_84 < 0x100) {
            local_28 = 1;
          }
          else {
            local_28 = 2;
          }
          *(int *)(*(longlong *)(param_1 + 0x30) +
                  ((longlong)local_60 - *(longlong *)(param_1 + 0x20) >> 1) * 4) =
               (iVar2 - (int)*(undefined8 *)(param_1 + 0x10)) - local_28;
        }
        psVar7 = local_60 + 1;
        uVar3 = (ushort)(local_80 - 0x10000);
        if (psVar7 < *(short **)(param_1 + 0x28)) {
          *psVar7 = (uVar3 & 0x3ff) + 0xdc00;
          if (*(longlong *)(param_1 + 0x30) != 0) {
            if (local_84 < 0x100) {
              local_34 = 1;
            }
            else {
              local_34 = 2;
            }
            *(int *)(*(longlong *)(param_1 + 0x30) +
                    ((longlong)psVar7 - *(longlong *)(param_1 + 0x20) >> 1) * 4) =
                 (iVar2 - (int)*(undefined8 *)(param_1 + 0x10)) - local_34;
          }
          local_60 = local_60 + 2;
        }
        else {
          *(ushort *)
           (*(longlong *)(param_1 + 8) + 0x90 +
           (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = (uVar3 & 0x3ff) + 0xdc00;
          *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
               *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
          local_60 = psVar7;
        }
      }
    }
    if (local_84 == 0xe) {
      if (*(int *)(local_58 + 0x6c) != 3) {
        *(undefined1 *)(local_58 + 0x70) = 0;
        local_78 = pbVar6;
        goto LAB_143aebbad;
      }
      local_70[1] = '\b';
      local_70[4] = '\x01';
      local_78 = pbVar6;
      goto LAB_143aeb5ca;
    }
    if (local_84 == 0xf) {
      if (*(int *)(local_58 + 0x6c) != 3) {
        *(undefined1 *)(local_58 + 0x70) = 0;
        local_78 = pbVar6;
        goto LAB_143aebbad;
      }
      local_70[4] = '\0';
      local_78 = pbVar6;
      goto LAB_143aeb5ca;
    }
    if (local_84 != 0x1b) goto LAB_143aeb851;
    local_44 = 0x1b;
  } while( true );
}



// FUNCTION 143aebe90 FUN_143aebe90 body=2103 status=ok
// SIG undefined FUN_143aebe90(void)

void FUN_143aebe90(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char local_68;
  uint local_64;
  uint local_60;
  char local_5c;
  undefined1 local_5b;
  char *local_58;
  int local_50;
  int local_4c;
  int *local_48;
  ushort *local_40;
  undefined1 local_38;
  ushort local_34;
  char *local_30;
  ushort *local_28;
  undefined4 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_40 = *(ushort **)(param_1 + 0x10);
  local_28 = *(ushort **)(param_1 + 0x18);
  local_58 = *(char **)(param_1 + 0x20);
  local_30 = *(char **)(param_1 + 0x28);
  local_48 = *(int **)(param_1 + 0x30);
  local_64 = 0;
  local_60 = 0;
  local_4c = 0;
  local_18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  if (*(int *)(local_18 + 0x6c) == 1) {
    FUN_143af06b0(param_1,param_2);
  }
  else {
    local_10 = *(undefined8 *)(*(longlong *)(local_18 + 0x50) + 0x30);
    local_38 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3f);
    local_5c = *(char *)(*(longlong *)(param_1 + 8) + 0x50);
    local_68 = *(char *)(*(longlong *)(param_1 + 8) + 0x50);
    local_60 = *(uint *)(*(longlong *)(param_1 + 8) + 0x54);
    if ((local_60 == 0) || (local_30 <= local_58)) {
      while (local_40 < local_28) {
        local_64 = 0xffff;
        if (*(char **)(param_1 + 0x28) <= local_58) {
          *param_2 = 0xf;
          break;
        }
        uVar1 = *local_40;
        local_60 = (uint)uVar1;
        local_40 = local_40 + 1;
        if ((local_60 < 0x20) && (local_20 = 1, (1 << ((byte)uVar1 & 0x1f) & 0x800c000U) != 0)) {
          *param_2 = 0xc;
          *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_60;
          break;
        }
        local_4c = FUN_143af0380(local_10,local_60,&local_64,local_38,1);
        if (local_4c < 0) {
          local_4c = -local_4c;
        }
        if ((((2 < local_4c) || (local_4c == 0)) || ((local_4c == 1 && (0x7f < local_64)))) ||
           ((local_4c == 2 &&
            ((0x5d5d < (local_64 - 0xa1a1 & 0xffff) || (0x5d < (local_64 - 0xa1 & 0xff))))))) {
          local_64 = 0xffff;
        }
        if (local_64 == 0xffff) {
          if ((local_60 & 0xfffff800) == 0xd800) {
            if ((local_60 & 0x400) == 0) goto LAB_143aec47e;
            *param_2 = 0xc;
          }
          else {
            *param_2 = 10;
          }
          goto LAB_143aec51e;
        }
        local_5c = local_68;
        local_5b = 0xff < local_64;
        if (local_68 != local_5b) {
          if ((bool)local_5b) {
            *local_58 = '\x0e';
          }
          else {
            *local_58 = '\x0f';
          }
          local_58 = local_58 + 1;
          if (local_48 != (int *)0x0) {
            *local_48 = (int)((longlong)local_40 - *(longlong *)(param_1 + 0x10) >> 1) + -1;
            local_48 = local_48 + 1;
          }
        }
        local_68 = local_5b;
        if (local_64 < 0x100) {
          if (local_58 < local_30) {
            *local_58 = (char)local_64;
            local_58 = local_58 + 1;
            if (local_48 != (int *)0x0) {
              *local_48 = (int)((longlong)local_40 - *(longlong *)(param_1 + 0x10) >> 1) + -1;
              local_48 = local_48 + 1;
            }
          }
          else {
            *(char *)(*(longlong *)(param_1 + 8) + 0x68 +
                     (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (char)local_64;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
        }
        else {
          cVar2 = (char)(local_64 >> 8);
          if (local_58 < local_30) {
            *local_58 = cVar2 + -0x80;
            pcVar4 = local_58 + 1;
            if (local_48 != (int *)0x0) {
              *local_48 = (int)((longlong)local_40 - *(longlong *)(param_1 + 0x10) >> 1) + -1;
              local_48 = local_48 + 1;
            }
            if (pcVar4 < local_30) {
              *pcVar4 = (char)local_64 + -0x80;
              local_58 = local_58 + 2;
              if (local_48 != (int *)0x0) {
                *local_48 = (int)((longlong)local_40 - *(longlong *)(param_1 + 0x10) >> 1) + -1;
                local_48 = local_48 + 1;
              }
            }
            else {
              *(char *)(*(longlong *)(param_1 + 8) + 0x68 +
                       (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) =
                   (char)local_64 + -0x80;
              *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
              *param_2 = 0xf;
              local_58 = pcVar4;
            }
          }
          else {
            *(char *)(*(longlong *)(param_1 + 8) + 0x68 +
                     (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = cVar2 + -0x80;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *(char *)(*(longlong *)(param_1 + 8) + 0x68 +
                     (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) =
                 (char)local_64 + -0x80;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
        }
      }
    }
    else {
LAB_143aec47e:
      if (local_40 < local_28) {
        local_34 = *local_40;
        if ((local_34 & 0xfc00) == 0xdc00) {
          local_40 = local_40 + 1;
          local_60 = local_60 * 0x400 + -0x35fdc00 + (uint)local_34;
          *param_2 = 10;
        }
        else {
          *param_2 = 0xc;
        }
      }
      else {
        *param_2 = 0;
      }
LAB_143aec51e:
      *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_60;
    }
    cVar2 = FUN_143a8b110(*param_2);
    if ((((cVar2 != '\0') && (local_68 != '\0')) && (*(char *)(param_1 + 2) != '\0')) &&
       ((local_28 <= local_40 && (*(int *)(*(longlong *)(param_1 + 8) + 0x54) == 0)))) {
      local_68 = '\0';
      iVar3 = (int)((longlong)local_40 - *(longlong *)(param_1 + 0x10) >> 1);
      if (iVar3 < 1) {
        local_50 = -1;
      }
      else {
        local_50 = iVar3 + -1;
        if (((*(ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)local_50 * 2) & 0xfc00) ==
             0xdc00) &&
           ((local_50 == 0 ||
            ((*(ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar3 + -2) * 2) & 0xfc00) ==
             0xd800)))) {
          local_50 = iVar3 + -2;
        }
      }
      FUN_143af13c0(*(undefined8 *)(param_1 + 8),&DAT_145cfd478,1,&local_58,local_30,&local_48,
                    local_50,param_2);
    }
    *(ushort **)(param_1 + 0x10) = local_40;
    *(char **)(param_1 + 0x20) = local_58;
    *(int *)(*(longlong *)(param_1 + 8) + 0x50) = (int)local_68;
  }
  return;
}



// FUNCTION 143aec6d0 FUN_143aec6d0 body=1455 status=ok
// SIG undefined FUN_143aec6d0(void)

void FUN_143aec6d0(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  byte *pbVar5;
  ushort local_58;
  byte *local_50;
  int local_48;
  char local_44;
  char local_43;
  longlong local_40;
  undefined2 *local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  byte *local_20;
  uint local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_50 = *(byte **)(param_1 + 0x10);
  local_38 = *(undefined2 **)(param_1 + 0x20);
  local_20 = *(byte **)(param_1 + 0x18);
  local_48 = 0;
  local_40 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  if (*(int *)(local_40 + 0x6c) == 1) {
    FUN_143af07b0(param_1,param_2);
  }
  else {
    local_10 = *(undefined8 *)(*(longlong *)(local_40 + 0x50) + 0x30);
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3f);
    if (*(int *)(local_40 + 0x68) == 0) {
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x40) != '\x01') goto LAB_143aec807;
      if (local_20 <= local_50) goto LAB_143aec807;
      if (*(undefined2 **)(param_1 + 0x28) <= local_38) goto LAB_143aec807;
      local_58 = (ushort)*(byte *)(*(longlong *)(param_1 + 8) + 0x41);
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
      goto LAB_143aec9e1;
    }
LAB_143aec93d:
    *(undefined1 *)(local_40 + 0x70) = 0;
    FUN_143af0dd0(*(undefined8 *)(param_1 + 8),&local_50,local_20,2,param_2);
    cVar4 = FUN_143a8b0e0(*param_2);
    if (cVar4 == '\0') {
LAB_143aec807:
      do {
        pbVar3 = local_50;
        if (local_20 <= local_50) {
LAB_143aecc6b:
          *(undefined2 **)(param_1 + 0x20) = local_38;
          *(byte **)(param_1 + 0x10) = local_50;
          return;
        }
        if (*(undefined2 **)(param_1 + 0x28) <= local_38) {
          *param_2 = 0xf;
          goto LAB_143aecc6b;
        }
        bVar2 = *local_50;
        local_58 = (ushort)bVar2;
        pbVar5 = local_50 + 1;
        if (local_58 != 0xf) {
          if (local_58 == 0xe) {
            *(undefined1 *)(local_40 + 0x60) = 1;
            *(undefined1 *)(local_40 + 0x70) = 1;
            local_50 = pbVar5;
            goto LAB_143aec807;
          }
          if (local_58 != 0x1b) {
            *(undefined1 *)(local_40 + 0x70) = 0;
            if (*(char *)(local_40 + 0x60) == '\x01') {
              local_50 = pbVar5;
              if (local_20 <= pbVar5) {
                *(byte *)(*(longlong *)(param_1 + 8) + 0x41) = bVar2;
                *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
                goto LAB_143aecc6b;
              }
LAB_143aec9e1:
              local_48 = 0xffff;
              bVar2 = *local_50;
              local_2c = (uint)((local_58 - 0x21 & 0xff) < 0x5e);
              local_18 = local_2c;
              local_28 = (uint)((byte)(bVar2 - 0x21) < 0x5e);
              local_30 = local_28;
              if ((local_2c == 0) || (local_28 == 0)) {
                if ((local_28 == 0) &&
                   ((0x1f < bVar2 || (local_14 = 1, (1 << (bVar2 & 0x1f) & 0x800c000U) == 0)))) {
                  local_50 = local_50 + 1;
                  local_58 = local_58 << 8 | (ushort)bVar2;
                }
              }
              else {
                local_50 = local_50 + 1;
                local_44 = (char)local_58 + -0x80;
                local_43 = bVar2 + 0x80;
                local_48 = FUN_143adf760(local_10,&local_44,2,uVar1);
                local_58 = local_58 << 8 | (ushort)bVar2;
              }
            }
            else if (local_58 < 0x80) {
              local_50 = pbVar5;
              local_48 = FUN_143adf760(local_10,pbVar3,1,uVar1);
            }
            else {
              local_48 = 0xffff;
              local_50 = pbVar5;
            }
            if (0xfffd < local_48) {
              FUN_143af1760(*(undefined8 *)(param_1 + 8),local_58,local_48,param_2);
              goto LAB_143aecc6b;
            }
            if (*(longlong *)(param_1 + 0x30) != 0) {
              if (local_58 < 0x100) {
                local_24 = 1;
              }
              else {
                local_24 = 2;
              }
              *(int *)(*(longlong *)(param_1 + 0x30) +
                      ((longlong)local_38 - *(longlong *)(param_1 + 0x20) >> 1) * 4) =
                   ((int)local_50 - (int)*(undefined8 *)(param_1 + 0x10)) - local_24;
            }
            *local_38 = (undefined2)local_48;
            local_38 = local_38 + 1;
            goto LAB_143aec807;
          }
          goto LAB_143aec93d;
        }
        *(undefined1 *)(local_40 + 0x60) = 0;
        local_50 = pbVar5;
        if (*(char *)(local_40 + 0x70) != '\0') {
          *(undefined1 *)(local_40 + 0x70) = 0;
          *param_2 = 0x12;
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x11c) = 2;
          *(byte *)(*(longlong *)(param_1 + 8) + 0x41) = bVar2;
          *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
          *(undefined2 **)(param_1 + 0x20) = local_38;
          *(byte **)(param_1 + 0x10) = pbVar5;
          return;
        }
      } while( true );
    }
    *(undefined2 **)(param_1 + 0x20) = local_38;
    *(byte **)(param_1 + 0x10) = local_50;
  }
  return;
}



// FUNCTION 143aecca0 FUN_143aecca0 body=3025 status=ok
// SIG undefined FUN_143aecca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143aecca0(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  undefined1 auStack_f8 [32];
  byte *local_d8;
  int **local_d0;
  int local_c8;
  undefined4 *local_c0;
  char local_b8;
  char local_b7;
  int local_b4;
  uint local_b0;
  char acStack_ac [4];
  undefined1 local_a8;
  char local_a7;
  int local_a4;
  int local_a0;
  byte *local_98;
  int local_90;
  ushort *local_88;
  int *local_80;
  longlong local_78;
  ushort local_70;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  longlong local_50;
  char local_48;
  int local_44;
  int local_40;
  char local_3c;
  byte *local_38;
  int local_30;
  undefined4 local_2c;
  ushort *local_28;
  byte local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_78 = *(longlong *)(param_1 + 8);
  local_98 = *(byte **)(param_1 + 0x20);
  local_38 = *(byte **)(param_1 + 0x28);
  local_88 = *(ushort **)(param_1 + 0x10);
  local_28 = *(ushort **)(param_1 + 0x18);
  local_80 = *(int **)(param_1 + 0x30);
  local_60 = 0;
  local_50 = *(longlong *)(local_78 + 0x10);
  local_68 = (void *)(*(longlong *)(local_78 + 0x10) + 0x62);
  local_90 = 0;
  local_b0 = *(uint *)(local_78 + 0x54);
  if (local_b0 == 0) goto LAB_143aecd96;
  if (*(byte **)(param_1 + 0x28) <= *(byte **)(param_1 + 0x20)) goto LAB_143aecd96;
  while( true ) {
    if (local_28 <= local_88) {
      *(uint *)(local_78 + 0x54) = local_b0;
      goto LAB_143aed6ec;
    }
    local_70 = *local_88;
    if ((local_70 & 0xfc00) != 0xdc00) break;
    local_88 = local_88 + 1;
    local_b0 = local_b0 * 0x400 + -0x35fdc00 + (uint)local_70;
    *(undefined4 *)(local_78 + 0x54) = 0;
    do {
      if ((int)local_b0 < 0x80) {
        bVar4 = (byte)local_b0;
        if (((int)local_b0 < 0x20) && (local_2c = 1, (1 << (bVar4 & 0x1f) & 0x800c000U) != 0)) {
          *param_2 = 0xc;
          *(uint *)(local_78 + 0x54) = local_b0;
          goto LAB_143aed6ec;
        }
        if (*(char *)((longlong)local_68 + 4) == '\0') {
          local_20[0] = bVar4;
          local_b4 = 1;
        }
        else {
          local_20[0] = 0xf;
          local_20[1] = bVar4;
          local_b4 = 2;
          *(undefined1 *)((longlong)local_68 + 4) = 0;
          local_90 = 0;
        }
        if ((local_b0 == 0xd) || (local_b0 == 10)) {
          _guard_xfg_dispatch_icall_nop(local_68,0,6);
          local_90 = 0;
        }
      }
      else {
        if (local_90 == 0) {
          acStack_ac[0] = *(char *)((longlong)local_68 + 1);
          if (*(char *)((longlong)local_68 + 1) == '\0') {
            acStack_ac[0] = '\x01';
          }
          if (*(int *)(local_50 + 0x6c) == 0) {
            if (acStack_ac[0] == '\x01') {
              acStack_ac[1] = 0x21;
            }
            else {
              acStack_ac[1] = 1;
            }
            local_90 = 2;
          }
          else if (*(int *)(local_50 + 0x6c) == 1) {
            local_48 = acStack_ac[0];
            if (acStack_ac[0] == '\x01') {
              acStack_ac[1] = 0x21;
              acStack_ac[2] = 2;
            }
            else if (acStack_ac[0] == '\x02') {
              acStack_ac[1] = 1;
              acStack_ac[2] = 0x21;
            }
            else {
              acStack_ac[1] = 1;
              acStack_ac[2] = 2;
            }
            local_90 = 3;
          }
          else {
            acStack_ac[0] = '!';
            acStack_ac[1] = 1;
          }
        }
        local_b8 = '\0';
        local_b7 = '\0';
        local_b4 = 0;
        local_a8 = *(undefined1 *)(local_78 + 0x3f);
        local_58 = 0;
        while ((local_58 < local_90 && (local_b4 < 1))) {
          local_a7 = acStack_ac[local_58];
          if ('\0' < local_a7) {
            if (local_a7 < ' ') {
              local_d8 = (byte *)CONCAT44(local_d8._4_4_,1);
              local_a0 = FUN_143af0380(*(undefined8 *)(local_50 + (longlong)local_a7 * 8),local_b0,
                                       &local_5c,local_a8);
              if ((local_a0 == 2) || ((local_a0 == -2 && (local_b4 == 0)))) {
                local_60 = local_5c;
                local_b7 = local_a7;
                local_b8 = '\x01';
                local_a8 = 0;
                local_b4 = local_a0;
              }
            }
            else {
              local_d8 = (byte *)CONCAT44(local_d8._4_4_,2);
              local_a0 = FUN_143af0380(*(undefined8 *)(local_50 + 0x18),local_b0,&local_5c,local_a8)
              ;
              if ((local_a0 == 3) || ((local_a0 == -3 && (local_b4 == 0)))) {
                local_60 = local_5c;
                local_b7 = (char)((uint)local_5c >> 0x10) + -0x60;
                if (local_a0 < 0) {
                  local_b4 = -2;
                  local_a8 = 0;
                }
                else {
                  local_b4 = 2;
                }
                if (local_b7 == '!') {
                  local_b8 = '\x01';
                }
                else if (local_b7 == '\"') {
                  local_b8 = '\x02';
                }
                else if (*(int *)(local_50 + 0x6c) == 1) {
                  local_b8 = '\x03';
                }
                else {
                  local_b4 = 0;
                }
              }
            }
          }
          local_58 = local_58 + 1;
        }
        if (local_b4 == 0) {
          *param_2 = 10;
          *(uint *)(local_78 + 0x54) = local_b0;
          goto LAB_143aed6ec;
        }
        local_b4 = 0;
        if (local_b7 != *(char *)((longlong)local_68 + (longlong)local_b8)) {
          if (local_b7 < '\x03') {
            _guard_xfg_dispatch_icall_nop(local_20,(&PTR_DAT_145cfd480)[local_b7],4);
          }
          else {
            _guard_xfg_dispatch_icall_nop(local_20,(&PTR_DAT_145cfd480)[local_b7 + -0x1e],4);
          }
          local_b4 = 4;
          *(char *)((longlong)local_68 + (longlong)local_b8) = local_b7;
          if (local_b8 == '\x01') {
            local_90 = 0;
          }
        }
        if (local_b8 != *(char *)((longlong)local_68 + 4)) {
          local_3c = local_b8;
          if (local_b8 == '\x01') {
            local_20[local_b4] = 0xe;
            local_b4 = local_b4 + 1;
            *(undefined1 *)((longlong)local_68 + 4) = 1;
          }
          else if (local_b8 == '\x02') {
            local_20[local_b4] = 0x1b;
            local_20[local_b4 + 1] = 0x4e;
            local_b4 = local_b4 + 2;
          }
          else {
            local_20[local_b4] = 0x1b;
            local_20[local_b4 + 1] = 0x4f;
            local_b4 = local_b4 + 2;
          }
        }
        local_20[local_b4] = (byte)((uint)local_60 >> 8);
        local_20[local_b4 + 1] = (byte)local_60;
        local_b4 = local_b4 + 2;
      }
      if (local_b4 == 1) {
        *local_98 = local_20[0];
        local_98 = local_98 + 1;
        if (local_80 != (int *)0x0) {
          *local_80 = (int)((longlong)local_88 - *(longlong *)(param_1 + 0x10) >> 1) + -1;
          local_80 = local_80 + 1;
        }
      }
      else if ((local_b4 == 2) && (local_98 + 2 <= local_38)) {
        *local_98 = local_20[0];
        local_98[1] = local_20[1];
        local_98 = local_98 + 2;
        if (local_80 != (int *)0x0) {
          if (local_b0 < 0x10000) {
            local_30 = 1;
          }
          else {
            local_30 = 2;
          }
          local_40 = (int)((longlong)local_88 - *(longlong *)(param_1 + 0x10) >> 1) - local_30;
          *local_80 = local_40;
          local_80[1] = local_40;
          local_80 = local_80 + 2;
        }
      }
      else {
        if (local_b0 < 0x10000) {
          local_44 = 1;
        }
        else {
          local_44 = 2;
        }
        local_c8 = (int)((longlong)local_88 - *(longlong *)(param_1 + 0x10) >> 1) - local_44;
        local_d0 = &local_80;
        local_d8 = local_38;
        local_c0 = param_2;
        FUN_143af13c0(local_78,local_20,local_b4,&local_98);
        cVar2 = FUN_143a8b0e0(*param_2);
        if (cVar2 != '\0') goto LAB_143aed6ec;
      }
LAB_143aecd96:
      if (local_28 <= local_88) goto LAB_143aed6ec;
      if (local_38 <= local_98) {
        *param_2 = 0xf;
        goto LAB_143aed6ec;
      }
      uVar1 = *local_88;
      local_b0 = (uint)uVar1;
      local_88 = local_88 + 1;
    } while ((local_b0 & 0xfffff800) != 0xd800);
    if ((uVar1 & 0x400) != 0) {
      *param_2 = 0xc;
      *(uint *)(local_78 + 0x54) = local_b0;
LAB_143aed6ec:
      cVar2 = FUN_143a8b110(*param_2);
      if ((((cVar2 != '\0') && (*(char *)((longlong)local_68 + 4) != '\0')) &&
          (*(char *)(param_1 + 2) != '\0')) &&
         ((local_28 <= local_88 && (*(int *)(local_78 + 0x54) == 0)))) {
        *(undefined1 *)((longlong)local_68 + 4) = 0;
        iVar3 = (int)((longlong)local_88 - *(longlong *)(param_1 + 0x10) >> 1);
        if (iVar3 < 1) {
          local_a4 = -1;
        }
        else {
          local_a4 = iVar3 + -1;
          if (((*(ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)local_a4 * 2) & 0xfc00) ==
               0xdc00) &&
             ((local_a4 == 0 ||
              ((*(ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar3 + -2) * 2) & 0xfc00) ==
               0xd800)))) {
            local_a4 = iVar3 + -2;
          }
        }
        local_c8 = local_a4;
        local_d0 = &local_80;
        local_d8 = local_38;
        local_c0 = param_2;
        FUN_143af13c0(local_78,&DAT_145cfd478,1,&local_98);
      }
      *(ushort **)(param_1 + 0x10) = local_88;
      *(byte **)(param_1 + 0x20) = local_98;
      return;
    }
  }
  *param_2 = 0xc;
  *(uint *)(local_78 + 0x54) = local_b0;
  goto LAB_143aed6ec;
}



// FUNCTION 143aed880 FUN_143aed880 body=2280 status=ok
// SIG undefined FUN_143aed880(void)

void FUN_143aed880(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  char cVar4;
  byte *pbVar5;
  short *psVar6;
  uint local_84;
  uint local_80;
  byte *local_78;
  short *local_70;
  char local_68;
  byte local_64;
  byte local_63;
  byte bStack_62;
  longlong local_60;
  uint local_58;
  void *local_50;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  byte *local_28;
  uint local_20;
  undefined4 local_1c;
  undefined8 local_18;
  byte *local_10;
  
  local_78 = *(byte **)(param_1 + 0x10);
  local_70 = *(short **)(param_1 + 0x20);
  local_28 = *(byte **)(param_1 + 0x18);
  local_60 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  local_50 = (void *)(local_60 + 0x5c);
  if (*(int *)(local_60 + 0x68) == 0) {
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x40) != '\x01') goto LAB_143aed988;
    if (local_28 <= local_78) goto LAB_143aed988;
    if (*(short **)(param_1 + 0x28) <= local_70) goto LAB_143aed988;
    local_84 = (uint)*(byte *)(*(longlong *)(param_1 + 8) + 0x41);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
    goto LAB_143aedc57;
  }
  do {
    local_10 = local_78;
    local_68 = *(char *)(*(longlong *)(param_1 + 8) + 0x40);
    FUN_143af0dd0(*(undefined8 *)(param_1 + 8),&local_78,local_28,3,param_2);
    if (((*(int *)(local_60 + 0x68) == 0) && (cVar4 = FUN_143a8b110(*param_2), cVar4 != '\0')) &&
       (*(char *)(local_60 + 0x70) != '\0')) {
      *param_2 = 0x12;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x11c) = 2;
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = local_68 + ((char)local_78 - (char)local_10);
    }
    cVar4 = FUN_143a8b0e0(*param_2);
    if (cVar4 != '\0') {
      *(short **)(param_1 + 0x20) = local_70;
      *(byte **)(param_1 + 0x10) = local_78;
      *(undefined1 *)(local_60 + 0x70) = 0;
      return;
    }
LAB_143aed988:
    while( true ) {
      if (local_28 <= local_78) goto LAB_143aee151;
      local_80 = 0xffff;
      if (*(short **)(param_1 + 0x28) <= local_70) {
        *param_2 = 0xf;
        goto LAB_143aee151;
      }
      bVar1 = *local_78;
      local_84 = (uint)bVar1;
      pbVar5 = local_78 + 1;
      local_58 = local_84;
      if ((local_84 != 10) && (local_84 != 0xd)) break;
      local_78 = pbVar5;
      _guard_xfg_dispatch_icall_nop(local_50,0,6);
      pbVar5 = local_78;
LAB_143aedc2a:
      local_78 = pbVar5;
      *(undefined1 *)(local_60 + 0x70) = 0;
      if (*(char *)((longlong)local_50 + 4) == '\0') {
        if (local_84 < 0x80) {
          local_80 = (uint)bVar1;
        }
      }
      else {
        if (local_28 <= local_78) {
          *(byte *)(*(longlong *)(param_1 + 8) + 0x41) = bVar1;
          *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
          goto LAB_143aee151;
        }
LAB_143aedc57:
        local_80 = 0xffff;
        bVar1 = *local_78;
        local_2c = (uint)((local_84 - 0x21 & 0xff) < 0x5e);
        local_20 = local_2c;
        local_34 = (uint)((byte)(bVar1 - 0x21) < 0x5e);
        local_38 = local_34;
        if ((local_2c == 0) || (local_34 == 0)) {
          if ((local_34 == 0) &&
             ((0x1f < bVar1 || (local_1c = 1, (1 << (bVar1 & 0x1f) & 0x800c000U) == 0)))) {
            local_78 = local_78 + 1;
            local_84 = local_84 << 8 | 0x10000 | (uint)bVar1;
          }
        }
        else {
          local_78 = local_78 + 1;
          cVar4 = *(char *)((longlong)local_50 + (longlong)*(char *)((longlong)local_50 + 4));
          local_48 = (int)cVar4;
          if (local_48 < 0x20) {
            local_18 = *(undefined8 *)(local_60 + (longlong)local_48 * 8);
            local_64 = (byte)local_84;
            local_40 = 2;
            local_63 = bVar1;
          }
          else {
            local_18 = *(undefined8 *)(local_60 + 0x18);
            local_64 = cVar4 + 0x60;
            local_63 = (byte)local_84;
            local_40 = 3;
            bStack_62 = bVar1;
          }
          local_80 = FUN_143adf760(local_18,&local_64,local_40,0);
          local_84 = local_84 << 8 | (uint)bVar1;
        }
        if ('\x01' < *(char *)((longlong)local_50 + 4)) {
          *(undefined1 *)((longlong)local_50 + 4) = *(undefined1 *)((longlong)local_50 + 5);
        }
      }
LAB_143aedead:
      iVar2 = (int)local_78;
      if (local_80 < 0xfffe) {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          if (local_84 < 0x100) {
            local_44 = 1;
          }
          else {
            local_44 = 2;
          }
          *(int *)(*(longlong *)(param_1 + 0x30) +
                  ((longlong)local_70 - *(longlong *)(param_1 + 0x20) >> 1) * 4) =
               (iVar2 - (int)*(undefined8 *)(param_1 + 0x10)) - local_44;
        }
        *local_70 = (short)local_80;
        local_70 = local_70 + 1;
      }
      else {
        if (local_80 < 0x10000) {
          FUN_143af1760(*(undefined8 *)(param_1 + 8),local_84,local_80,param_2);
LAB_143aee151:
          *(short **)(param_1 + 0x20) = local_70;
          *(byte **)(param_1 + 0x10) = local_78;
          return;
        }
        *local_70 = (short)(local_80 - 0x10000 >> 10) + -0x2800;
        if (*(longlong *)(param_1 + 0x30) != 0) {
          if (local_84 < 0x100) {
            local_3c = 1;
          }
          else {
            local_3c = 2;
          }
          *(int *)(*(longlong *)(param_1 + 0x30) +
                  ((longlong)local_70 - *(longlong *)(param_1 + 0x20) >> 1) * 4) =
               (iVar2 - (int)*(undefined8 *)(param_1 + 0x10)) - local_3c;
        }
        psVar6 = local_70 + 1;
        uVar3 = (ushort)(local_80 - 0x10000);
        if (psVar6 < *(short **)(param_1 + 0x28)) {
          *psVar6 = (uVar3 & 0x3ff) + 0xdc00;
          if (*(longlong *)(param_1 + 0x30) != 0) {
            if (local_84 < 0x100) {
              local_30 = 1;
            }
            else {
              local_30 = 2;
            }
            *(int *)(*(longlong *)(param_1 + 0x30) +
                    ((longlong)psVar6 - *(longlong *)(param_1 + 0x20) >> 1) * 4) =
                 (iVar2 - (int)*(undefined8 *)(param_1 + 0x10)) - local_30;
          }
          local_70 = local_70 + 2;
        }
        else {
          *(ushort *)
           (*(longlong *)(param_1 + 8) + 0x90 +
           (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = (uVar3 & 0x3ff) + 0xdc00;
          *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
               *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
          local_70 = psVar6;
        }
      }
    }
    if (local_84 == 0xe) {
      if (*(char *)((longlong)local_50 + 1) == '\0') {
        *(undefined1 *)(local_60 + 0x70) = 0;
        local_78 = pbVar5;
        goto LAB_143aedead;
      }
      *(undefined1 *)((longlong)local_50 + 4) = 1;
      *(undefined1 *)(local_60 + 0x70) = 1;
      local_78 = pbVar5;
      goto LAB_143aed988;
    }
    if (local_84 == 0xf) {
      *(undefined1 *)((longlong)local_50 + 4) = 0;
      local_78 = pbVar5;
      if (*(char *)(local_60 + 0x70) != '\0') {
        *(undefined1 *)(local_60 + 0x70) = 0;
        *param_2 = 0x12;
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x11c) = 2;
        *(byte *)(*(longlong *)(param_1 + 8) + 0x41) = bVar1;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
        *(short **)(param_1 + 0x20) = local_70;
        *(byte **)(param_1 + 0x10) = pbVar5;
        return;
      }
      goto LAB_143aed988;
    }
    if (local_84 != 0x1b) goto LAB_143aedc2a;
    local_58 = 0x1b;
  } while( true );
}



// FUNCTION 143aee180 FUN_143aee180 body=2106 status=ok
// SIG undefined FUN_143aee180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143aee180(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_168 [32];
  void *local_148;
  uint local_140;
  size_t local_138;
  char *local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 local_11f;
  undefined2 local_11e;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_f8 [224];
  char local_18;
  char local_17;
  char local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_18 = ' ';
  local_17 = ' ';
  local_16 = ' ';
  local_15 = 0x20;
  local_14 = 0x20;
  local_13 = 0x20;
  uVar2 = FUN_143aa7a40(0x98);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *param_3 = 7;
    return;
  }
  local_128 = 0x28;
  local_124 = 0;
  local_11f = 0;
  local_11e = 0;
  local_11c = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_148 = *(void **)(param_1 + 0x10);
  local_120 = *(undefined1 *)(param_2 + 8);
  _guard_xfg_dispatch_icall_nop(local_148,0,0x98);
  *(undefined4 *)((longlong)local_148 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    strncpy(&local_18,*(char **)(param_2 + 0x20),6);
  }
  local_140 = *(uint *)(param_2 + 0xc) & 0xf;
  *(uint *)((longlong)local_148 + 0x6c) = local_140;
  if (((local_18 == 'j') && ((local_17 == 'a' || (local_17 == 'p')))) &&
     ((local_16 == '_' || (local_16 == '\0')))) {
    local_138 = 0;
    if (4 < local_140) {
      local_140 = 0;
      *(undefined4 *)((longlong)local_148 + 0x6c) = 0;
    }
    if ((*(ushort *)(&DAT_145cfd4d0 + (ulonglong)local_140 * 2) & 4) != 0) {
      uVar2 = FUN_143abd4c0("ISO8859_7",local_f8,&local_128,param_3);
      *(undefined8 *)((longlong)local_148 + 0x10) = uVar2;
    }
    uVar2 = FUN_143abd4c0("Shift-JIS",local_f8,&local_128,param_3);
    *(undefined8 *)((longlong)local_148 + 0x20) = uVar2;
    if ((*(ushort *)(&DAT_145cfd4d0 + (ulonglong)local_140 * 2) & 0x20) != 0) {
      uVar2 = FUN_143abd4c0("jisx-212",local_f8,&local_128,param_3);
      *(undefined8 *)((longlong)local_148 + 0x28) = uVar2;
    }
    if ((*(ushort *)(&DAT_145cfd4d0 + (ulonglong)local_140 * 2) & 0x40) != 0) {
      uVar2 = FUN_143abd4c0("ibm-5478",local_f8,&local_128,param_3);
      *(undefined8 *)((longlong)local_148 + 0x30) = uVar2;
    }
    if ((*(ushort *)(&DAT_145cfd4d0 + (ulonglong)local_140 * 2) & 0x80) != 0) {
      uVar2 = FUN_143abd4c0("ksc_5601",local_f8,&local_128,param_3);
      *(undefined8 *)((longlong)local_148 + 0x38) = uVar2;
    }
    *(undefined **)(param_1 + 0x30) = &DAT_145cfd780;
    _guard_xfg_dispatch_icall_nop((char *)((longlong)local_148 + 0x8f),"ja");
    _guard_xfg_dispatch_icall_nop
              ((char *)((longlong)local_148 + 0x71),"ISO_2022,locale=ja,version=");
    local_138 = _guard_xfg_dispatch_icall_nop((char *)((longlong)local_148 + 0x71));
    *(char *)((longlong)local_148 + local_138 + 0x71) =
         (char)*(undefined4 *)((longlong)local_148 + 0x6c) + '0';
    *(undefined1 *)((longlong)local_148 + local_138 + 0x72) = 0;
  }
  else if (((local_18 == 'k') && ((local_17 == 'o' || (local_17 == 'r')))) &&
          ((local_16 == '_' || (local_16 == '\0')))) {
    if (local_140 == 1) {
      local_130 = "icu-internal-25546";
    }
    else {
      local_130 = "ibm-949";
      local_140 = 0;
      *(undefined4 *)((longlong)local_148 + 0x6c) = 0;
    }
    if (*(char *)(param_2 + 8) != '\0') {
      FUN_143abce40(local_130,param_3);
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
      return;
    }
    uVar2 = FUN_143ab0f00(local_130,param_3);
    *(undefined8 *)((longlong)local_148 + 0x50) = uVar2;
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 != '\0') {
      FUN_143aee9c0(param_1);
      return;
    }
    if (local_140 == 1) {
      _guard_xfg_dispatch_icall_nop
                ((char *)((longlong)local_148 + 0x71),"ISO_2022,locale=ko,version=1");
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x28),
                 *(void **)(*(longlong *)((longlong)local_148 + 0x50) + 0x28),4);
      *(undefined1 *)(param_1 + 0x59) =
           *(undefined1 *)(*(longlong *)((longlong)local_148 + 0x50) + 0x59);
    }
    else {
      _guard_xfg_dispatch_icall_nop
                ((char *)((longlong)local_148 + 0x71),"ISO_2022,locale=ko,version=0");
    }
    FUN_143af1710(param_1,local_148);
    FUN_143af1660(param_1,local_148);
    *(undefined **)(param_1 + 0x30) = &DAT_145cfd8b0;
    _guard_xfg_dispatch_icall_nop((char *)((longlong)local_148 + 0x8f),"ko");
  }
  else {
    if ((((local_18 != 'z') || (local_17 != 'h')) && ((local_18 != 'c' || (local_17 != 'n')))) ||
       ((local_16 != '_' && (local_16 != '\0')))) {
      *param_3 = 0x10;
      return;
    }
    uVar2 = FUN_143abd4c0("ibm-5478",local_f8,&local_128,param_3);
    *(undefined8 *)((longlong)local_148 + 8) = uVar2;
    if (local_140 == 1) {
      uVar2 = FUN_143abd4c0("iso-ir-165",local_f8,&local_128,param_3);
      *(undefined8 *)((longlong)local_148 + 0x10) = uVar2;
    }
    uVar2 = FUN_143abd4c0("cns-11643-1992",local_f8,&local_128,param_3);
    *(undefined8 *)((longlong)local_148 + 0x18) = uVar2;
    *(undefined **)(param_1 + 0x30) = &DAT_145cfd9e0;
    _guard_xfg_dispatch_icall_nop((char *)((longlong)local_148 + 0x8f),"cn");
    if (local_140 == 0) {
      *(undefined4 *)((longlong)local_148 + 0x6c) = 0;
      _guard_xfg_dispatch_icall_nop
                ((char *)((longlong)local_148 + 0x71),"ISO_2022,locale=zh,version=0");
    }
    else if (local_140 == 1) {
      *(undefined4 *)((longlong)local_148 + 0x6c) = 1;
      _guard_xfg_dispatch_icall_nop
                ((char *)((longlong)local_148 + 0x71),"ISO_2022,locale=zh,version=1");
    }
    else {
      *(undefined4 *)((longlong)local_148 + 0x6c) = 2;
      _guard_xfg_dispatch_icall_nop
                ((char *)((longlong)local_148 + 0x71),"ISO_2022,locale=zh,version=2");
    }
  }
  *(undefined1 *)(param_1 + 0x58) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) + 0x47);
  cVar1 = FUN_143a8b0e0(*param_3);
  if ((cVar1 != '\0') || (*(char *)(param_2 + 8) != '\0')) {
    FUN_143aee9c0(param_1);
  }
  return;
}



// FUNCTION 143aee9c0 FUN_143aee9c0 body=169 status=ok
// SIG undefined FUN_143aee9c0(void)

void FUN_143aee9c0(longlong param_1)

{
  longlong lVar1;
  undefined4 local_28;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
      if (*(longlong *)(lVar1 + (longlong)local_28 * 8) != 0) {
        FUN_143abdae0(*(undefined8 *)(lVar1 + (longlong)local_28 * 8));
      }
    }
    FUN_143ab09a0(*(undefined8 *)(lVar1 + 0x50));
    if (*(char *)(param_1 + 0x3e) == '\0') {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



// FUNCTION 143aeea70 FUN_143aeea70 body=188 status=ok
// SIG undefined FUN_143aeea70(void)

void FUN_143aeea70(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (param_2 < 2) {
    _guard_xfg_dispatch_icall_nop((void *)(lVar1 + 0x5c),0,6);
    *(undefined4 *)(lVar1 + 0x68) = 0;
    *(undefined1 *)(lVar1 + 0x70) = 0;
  }
  if (param_2 != 1) {
    _guard_xfg_dispatch_icall_nop((void *)(lVar1 + 0x62),0,6);
  }
  if (*(char *)(lVar1 + 0x8f) == 'k') {
    if (param_2 < 2) {
      FUN_143af1710(param_1,lVar1);
    }
    if (param_2 != 1) {
      FUN_143af1660(param_1,lVar1);
    }
  }
  return;
}



// FUNCTION 143aeeb30 FUN_143aeeb30 body=51 status=ok
// SIG undefined FUN_143aeeb30(void)

longlong FUN_143aeeb30(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x10) + 0x71;
  }
  return lVar1;
}



// FUNCTION 143aeeb70 FUN_143aeeb70 body=1171 status=ok
// SIG undefined FUN_143aeeb70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143aeeb70(longlong param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  int *local_88;
  undefined1 *local_78;
  char local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  char local_50;
  char *local_48;
  undefined1 *local_40;
  int local_38;
  void *local_30;
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_58 = *(longlong *)(param_1 + 8);
  local_68 = *(longlong *)(local_58 + 0x10);
  local_48 = (char *)(local_68 + 0x62);
  local_40 = *(undefined1 **)(local_58 + 0x28);
  cVar1 = *(char *)(local_58 + 0x59);
  local_38 = (int)cVar1;
  local_78 = local_20;
  local_50 = *(char *)(local_68 + 0x8f);
  if (local_50 == 'c') {
    if (*(char *)(local_68 + 0x66) != '\0') {
      *(undefined1 *)(local_68 + 0x66) = 0;
      local_20[0] = 0xf;
      local_78 = local_20 + 1;
    }
    *local_78 = *local_40;
    local_78 = local_78 + 1;
  }
  else if (local_50 == 'j') {
    if (*(char *)(local_68 + 0x66) == '\x01') {
      *(undefined1 *)(local_68 + 0x66) = 0;
      local_20[0] = 0xf;
      local_78 = local_20 + 1;
    }
    local_70 = *local_48;
    if ((local_70 != '\0') && (local_70 != '\x03')) {
      *local_48 = '\0';
      *local_78 = 0x1b;
      local_78[1] = 0x28;
      local_78[2] = 0x42;
      local_78 = local_78 + 3;
    }
    *local_78 = *local_40;
    local_78 = local_78 + 1;
  }
  else if (local_50 == 'k') {
    if (*(int *)(local_68 + 0x6c) != 0) {
      local_28 = *(undefined8 *)(*(longlong *)(local_68 + 0x50) + 0x28);
      local_60 = *(undefined1 *)(*(longlong *)(local_68 + 0x50) + 0x59);
      *(undefined1 **)(*(longlong *)(local_68 + 0x50) + 0x28) = local_40;
      *(char *)(*(longlong *)(local_68 + 0x50) + 0x59) = cVar1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(local_68 + 0x50);
      *(undefined4 *)(*(longlong *)(local_68 + 0x50) + 0x54) = *(undefined4 *)(local_58 + 0x54);
      FUN_143b0cb40(param_1,0,param_3);
      *(undefined4 *)(local_58 + 0x54) = *(undefined4 *)(*(longlong *)(local_68 + 0x50) + 0x54);
      *(longlong *)(param_1 + 8) = local_58;
      *(undefined8 *)(*(longlong *)(local_68 + 0x50) + 0x28) = local_28;
      *(undefined1 *)(*(longlong *)(local_68 + 0x50) + 0x59) = local_60;
      if (*param_3 != 0xf) {
        return;
      }
      if ('\0' < *(char *)(*(longlong *)(local_68 + 0x50) + 0x5b)) {
        local_30 = (void *)(local_58 + 0x68);
        _guard_xfg_dispatch_icall_nop
                  (local_30,(void *)(*(longlong *)(local_68 + 0x50) + 0x68),
                   (longlong)*(char *)(*(longlong *)(local_68 + 0x50) + 0x5b));
      }
      *(undefined1 *)(local_58 + 0x5b) = *(undefined1 *)(*(longlong *)(local_68 + 0x50) + 0x5b);
      *(undefined1 *)(*(longlong *)(local_68 + 0x50) + 0x5b) = 0;
      return;
    }
    if (local_38 == 1) {
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x50) != '\0') {
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
        local_20[0] = 0xf;
        local_78 = local_20 + 1;
      }
      *local_78 = *local_40;
      local_78 = local_78 + 1;
    }
    else {
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x50) == '\0') {
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 1;
        local_20[0] = 0xe;
        local_78 = local_20 + 1;
      }
      *local_78 = *local_40;
      local_78[1] = local_40[1];
      local_78 = local_78 + 2;
    }
  }
  local_88 = param_3;
  FUN_143b0cac0(param_1,local_20,(longlong)local_78 - (longlong)local_20 & 0xffffffff,param_2);
  return;
}



// FUNCTION 143aef010 FUN_143aef010 body=303 status=ok
// SIG undefined FUN_143aef010(void)

longlong FUN_143aef010(longlong param_1,longlong param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  int local_28;
  undefined4 local_24;
  longlong local_20;
  void *local_18;
  
  if (*param_3 == 0) {
    *param_3 = 0x2e0;
    local_20 = 0;
  }
  else {
    local_18 = *(void **)(param_1 + 0x10);
    local_20 = param_2;
    _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x248),local_18,0x98);
    *(longlong *)(local_20 + 0x10) = local_20 + 0x248;
    *(undefined1 *)(local_20 + 0x3e) = 1;
    if (*(longlong *)((longlong)local_18 + 0x50) != 0) {
      local_24 = 0x128;
      uVar2 = FUN_143ab1280(*(undefined8 *)((longlong)local_18 + 0x50),local_20 + 0x120,&local_24,
                            param_4);
      *(undefined8 *)(local_20 + 0x298) = uVar2;
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
      if (*(longlong *)((longlong)local_18 + (longlong)local_28 * 8) != 0) {
        FUN_143abd470(*(undefined8 *)((longlong)local_18 + (longlong)local_28 * 8));
      }
    }
  }
  return local_20;
}



// FUNCTION 143aef140 FUN_143aef140 body=726 status=ok
// SIG undefined FUN_143aef140(void)

void FUN_143aef140(longlong param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  char cVar2;
  int local_28;
  undefined4 local_20;
  
  cVar2 = FUN_143a8b0e0(*param_4);
  if (cVar2 != '\0') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  cVar2 = *(char *)(lVar1 + 0x8f);
  if (cVar2 != 'c') {
    if (cVar2 == 'j') {
      (*(code *)param_2[1])(*param_2,0xa5);
      (*(code *)param_2[1])(*param_2,0x203e);
      if ((*(ushort *)(&DAT_145cfd4d0 + (ulonglong)*(uint *)(lVar1 + 0x6c) * 2) & 2) == 0) {
        (*(code *)param_2[2])(*param_2,0,0x7f);
      }
      else {
        (*(code *)param_2[2])(*param_2,0,0xff);
      }
      if (((*(int *)(lVar1 + 0x6c) == 3) || (*(int *)(lVar1 + 0x6c) == 4)) || (param_3 == 1)) {
        (*(code *)param_2[2])(*param_2,0xff61,0xff9f);
      }
      goto LAB_143aef2bb;
    }
    if (cVar2 == 'k') {
      (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x30) + 0x28) + 0x78))
                (*(undefined8 *)(lVar1 + 0x50),param_2,param_3,param_4);
      goto LAB_143aef2bb;
    }
    if (cVar2 != 'z') goto LAB_143aef2bb;
  }
  (*(code *)param_2[2])(*param_2,0,0x7f);
LAB_143aef2bb:
  for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
    if (*(longlong *)(lVar1 + (longlong)local_28 * 8) != 0) {
      if (((*(char *)(lVar1 + 0x8f) == 'c') || (*(char *)(lVar1 + 0x8f) == 'z')) &&
         ((*(int *)(lVar1 + 0x6c) == 0 && (local_28 == 3)))) {
        local_20 = 2;
      }
      else if ((*(char *)(lVar1 + 0x8f) == 'j') && (local_28 == 4)) {
        local_20 = 3;
      }
      else if (local_28 == 7) {
        local_20 = 4;
      }
      else {
        local_20 = 0;
      }
      FUN_143adeeb0(*(undefined8 *)(lVar1 + (longlong)local_28 * 8),param_2,param_3,local_20,param_4
                   );
    }
  }
  (*(code *)param_2[4])(*param_2,0xe);
  (*(code *)param_2[4])(*param_2,0xf);
  (*(code *)param_2[4])(*param_2,0x1b);
  (*(code *)param_2[5])(*param_2,0x80,0x9f);
  return;
}



// FUNCTION 143aef420 FUN_143aef420 body=3891 status=ok
// SIG undefined FUN_143aef420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143aef420(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  int **local_100;
  int local_f8;
  undefined4 *local_f0;
  byte local_e8;
  byte local_e7;
  byte local_e6;
  char local_e5;
  uint local_e4;
  uint local_e0;
  ushort local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  byte *local_b8;
  undefined1 *local_b0;
  ushort *local_a8;
  int *local_a0;
  longlong local_98;
  ushort local_90;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  undefined1 *local_70;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ushort *local_48;
  undefined4 local_40;
  byte local_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 local_28 [8];
  byte abStack_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_98 = *(longlong *)(param_1 + 8);
  local_b0 = *(undefined1 **)(param_1 + 0x20);
  local_70 = *(undefined1 **)(param_1 + 0x28);
  local_a8 = *(ushort **)(param_1 + 0x10);
  local_48 = *(ushort **)(param_1 + 0x18);
  local_a0 = *(int **)(param_1 + 0x30);
  local_cc = 0;
  local_88 = *(longlong *)(local_98 + 0x10);
  local_b8 = (byte *)(local_88 + 0x62);
  local_d4 = 0;
  local_e0 = *(uint *)(local_98 + 0x54);
  if (local_e0 == 0) goto LAB_143aef516;
  if (local_70 <= local_b0) goto LAB_143aef516;
  while( true ) {
    if (local_48 <= local_a8) {
      *(uint *)(local_98 + 0x54) = local_e0;
      goto LAB_143af00e3;
    }
    local_90 = *local_a8;
    if ((local_90 & 0xfc00) != 0xdc00) break;
    local_a8 = local_a8 + 1;
    local_e0 = local_e0 * 0x400 + -0x35fdc00 + (uint)local_90;
    *(undefined4 *)(local_98 + 0x54) = 0;
    do {
      if (((int)local_e0 < 0x20) && (local_58 = 1, (1 << ((byte)local_e0 & 0x1f) & 0x800c000U) != 0)
         ) {
        *param_2 = 0xc;
        *(uint *)(local_98 + 0x54) = local_e0;
        goto LAB_143af00e3;
      }
      if (local_d4 == 0) {
        uVar2 = *(ushort *)(&DAT_145cfd4d0 + (ulonglong)*(uint *)(local_88 + 0x6c) * 2);
        local_d4 = 0;
        if ((*(int *)(local_88 + 0x6c) == 3) || (*(int *)(local_88 + 0x6c) == 4)) {
          abStack_20[0] = 8;
          local_d4 = 1;
        }
        bVar1 = *local_b8;
        abStack_20[local_d4] = bVar1;
        local_5c = 1;
        local_dc = uVar2 & 0xfeff & ~(ushort)(1 << (bVar1 & 0x1f));
        bVar1 = local_b8[2];
        iVar4 = local_d4 + 1;
        if (bVar1 != 0) {
          abStack_20[local_d4 + 1] = bVar1;
          local_50 = 1;
          local_dc = local_dc & ~(ushort)(1 << (bVar1 & 0x1f));
          iVar4 = local_d4 + 2;
        }
        local_d4 = iVar4;
        for (local_c0 = 0; local_c0 < 9; local_c0 = local_c0 + 1) {
          bVar1 = (&DAT_145cfd708)[(longlong)local_c0 * 4];
          local_40 = 1;
          if ((1 << (bVar1 & 0x1f) & (uint)local_dc) != 0) {
            abStack_20[local_d4] = bVar1;
            local_d4 = local_d4 + 1;
            local_54 = 1;
            local_dc = local_dc & ~(ushort)(1 << (bVar1 & 0x1f));
          }
        }
      }
      local_e7 = 0;
      local_e8 = 0;
      local_d8 = 0;
      local_e5 = *(char *)(local_98 + 0x3f);
      local_c0 = 0;
      while ((local_c0 < local_d4 && (local_d8 < 1))) {
        local_e6 = abStack_20[local_c0];
        local_68 = (int)(char)local_e6;
        switch(local_68) {
        case 0:
          if ((int)local_e0 < 0x80) {
            local_cc = local_e0;
            local_d8 = 1;
            local_e7 = 0;
            local_e8 = local_e6;
          }
          break;
        case 1:
          if ((0x9f < (int)local_e0) && ((int)local_e0 < 0x100)) {
            local_cc = local_e0 - 0x80;
            local_d8 = 1;
            local_e7 = 2;
            local_e8 = local_e6;
          }
          break;
        case 2:
          local_c8 = FUN_143af0590(*(undefined8 *)(local_88 + (longlong)(char)local_e6 * 8),local_e0
                                   ,&local_d0,local_e5);
          if ((((local_c8 != 0) && ((-1 < local_c8 || (local_d8 == 0)))) && (0x9f < local_d0)) &&
             (local_d0 < 0x100)) {
            local_cc = local_d0 - 0x80;
            local_e8 = local_e6;
            local_e7 = 2;
            local_e5 = '\0';
            local_d8 = local_c8;
          }
          break;
        case 3:
          local_d0 = FUN_143af15d0(local_e0);
          if (local_d0 < 0x80) {
            local_d8 = 1;
            local_e8 = local_e6;
            local_e7 = 0;
            local_e5 = '\0';
            local_cc = local_d0;
          }
          break;
        case 4:
          local_108 = (undefined1 *)CONCAT44(local_108._4_4_,1);
          local_c8 = FUN_143af0380(*(undefined8 *)(local_88 + (longlong)(char)local_e6 * 8),local_e0
                                   ,&local_d0,local_e5);
          if ((local_c8 == 2) || ((local_c8 == -2 && (local_d8 == 0)))) {
            local_d0 = FUN_143af0c10(local_d0);
            if (local_d0 != 0) {
              local_d8 = local_c8;
              local_e8 = local_e6;
              local_e7 = 0;
              local_e5 = '\0';
              local_cc = local_d0;
            }
          }
          else if (((local_d8 == 0) && (local_e5 != '\0')) && (local_e0 - 0xff61 < 0x3f)) {
            local_cc = (uint)*(ushort *)
                              (
                              "#!V!W!\"!&!r%!%#%%%\'%)%c%e%g%C%<!\"%$%&%(%*%+%-%/%1%3%5%7%9%;%=%?%A%D%F%H%J%K%L%M%N%O%R%U%X%[%^%_%`%a%b%d%f%h%i%j%k%l%m%o%s%+!,!"
                              + (longlong)(int)(local_e0 - 0xff61) * 2);
            local_d8 = -2;
            local_e8 = local_e6;
            local_e7 = 0;
            local_e5 = '\0';
          }
          break;
        default:
          local_108 = (undefined1 *)CONCAT44(local_108._4_4_,1);
          local_c8 = FUN_143af0380(*(undefined8 *)(local_88 + (longlong)(char)local_e6 * 8),local_e0
                                   ,&local_d0,local_e5);
          if (((local_c8 == 2) || ((local_c8 == -2 && (local_d8 == 0)))) &&
             ((local_e6 != 7 || (local_d0 = FUN_143af0bd0(local_d0), local_d0 != 0)))) {
            local_cc = local_d0;
            local_e7 = 0;
            local_e5 = '\0';
            local_e8 = local_e6;
            local_d8 = local_c8;
          }
          break;
        case 8:
          if (local_e0 - 0xff61 < 0x3f) {
            if (*(int *)(local_88 + 0x6c) == 3) {
              local_cc = local_e0 - 0xff40;
              local_d8 = 1;
              local_b8[1] = local_e6;
              local_e7 = 1;
              local_e8 = local_e6;
            }
            else if (*(int *)(local_88 + 0x6c) == 4) {
              local_cc = local_e0 - 0xfec0;
              local_d8 = 1;
              local_e8 = *local_b8;
              if (('\x03' < (char)local_e8) && ((char)local_e8 < '\b')) {
                local_e8 = 3;
              }
              local_e7 = 0;
            }
          }
        }
        local_c0 = local_c0 + 1;
      }
      if (local_d8 == 0) {
        *param_2 = 10;
        *(uint *)(local_98 + 0x54) = local_e0;
        goto LAB_143af00e3;
      }
      if (local_d8 < 0) {
        local_d8 = -local_d8;
      }
      local_e4 = 0;
      if ((local_b8[4] == 1) && (local_e7 == 0)) {
        local_28[0] = 0xf;
        local_e4 = 1;
        local_b8[4] = 0;
      }
      if (local_e8 != local_b8[(char)local_e7]) {
        local_64 = (int)(char)(&DAT_145cfe110)[(char)local_e8];
        local_38 = local_28 + (int)local_e4;
        _guard_xfg_dispatch_icall_nop
                  (local_38,&DAT_145cfe0d8 + (longlong)(char)local_e8 * 6,(longlong)local_64);
        local_e4 = local_e4 + local_64;
        local_b8[(char)local_e7] = local_e8;
        local_d4 = 0;
      }
      if (local_e7 != local_b8[4]) {
        local_3c = local_e7;
        if (local_e7 == 1) {
          local_28[(int)local_e4] = 0xe;
          local_e4 = local_e4 + 1;
          local_b8[4] = 1;
        }
        else {
          local_28[(int)local_e4] = 0x1b;
          local_28[(int)(local_e4 + 1)] = 0x4e;
          local_e4 = local_e4 + 2;
        }
      }
      if (local_d8 == 1) {
        local_28[(int)local_e4] = (undefined1)local_cc;
        local_e4 = local_e4 + 1;
      }
      else {
        local_28[(int)local_e4] = (char)(local_cc >> 8);
        local_28[(int)(local_e4 + 1)] = (undefined1)local_cc;
        local_e4 = local_e4 + 2;
      }
      if ((local_e0 == 0xd) || (local_e0 == 10)) {
        local_b8[2] = 0;
        local_d4 = 0;
      }
      if (local_e4 == 1) {
        *local_b0 = local_28[0];
        local_b0 = local_b0 + 1;
        if (local_a0 != (int *)0x0) {
          *local_a0 = (int)((longlong)local_a8 - *(longlong *)(param_1 + 0x10) >> 1) + -1;
          local_a0 = local_a0 + 1;
        }
      }
      else if ((local_e4 == 2) && (local_b0 + 2 <= local_70)) {
        *local_b0 = local_28[0];
        local_b0[1] = local_28[1];
        local_b0 = local_b0 + 2;
        if (local_a0 != (int *)0x0) {
          if (local_e0 < 0x10000) {
            local_78 = 1;
          }
          else {
            local_78 = 2;
          }
          local_7c = (int)((longlong)local_a8 - *(longlong *)(param_1 + 0x10) >> 1) - local_78;
          *local_a0 = local_7c;
          local_a0[1] = local_7c;
          local_a0 = local_a0 + 2;
        }
      }
      else {
        if (local_e0 < 0x10000) {
          local_80 = 1;
        }
        else {
          local_80 = 2;
        }
        local_f8 = (int)((longlong)local_a8 - *(longlong *)(param_1 + 0x10) >> 1) - local_80;
        local_100 = &local_a0;
        local_108 = local_70;
        local_f0 = param_2;
        FUN_143af13c0(local_98,local_28,local_e4,&local_b0);
        cVar3 = FUN_143a8b0e0(*param_2);
        if (cVar3 != '\0') goto LAB_143af00e3;
      }
LAB_143aef516:
      if (local_48 <= local_a8) goto LAB_143af00e3;
      if (local_70 <= local_b0) {
        *param_2 = 0xf;
        goto LAB_143af00e3;
      }
      uVar2 = *local_a8;
      local_e0 = (uint)uVar2;
      local_a8 = local_a8 + 1;
    } while ((local_e0 & 0xfffff800) != 0xd800);
    if ((uVar2 & 0x400) != 0) {
      *param_2 = 0xc;
      *(uint *)(local_98 + 0x54) = local_e0;
LAB_143af00e3:
      cVar3 = FUN_143a8b110(*param_2);
      if ((cVar3 != '\0') &&
         ((((local_b8[4] != 0 || (*local_b8 != 0)) && (*(char *)(param_1 + 2) != '\0')) &&
          ((local_48 <= local_a8 && (*(int *)(local_98 + 0x54) == 0)))))) {
        bVar1 = local_b8[4];
        if (bVar1 != 0) {
          local_b8[4] = 0;
        }
        local_e4 = (uint)(bVar1 != 0);
        if (*local_b8 != 0) {
          local_60 = 3;
          local_30 = local_28 + (int)local_e4;
          _guard_xfg_dispatch_icall_nop(local_30,&DAT_145cfe0d8,3);
          local_e4 = local_e4 + local_60;
          *local_b8 = 0;
        }
        iVar4 = (int)((longlong)local_a8 - *(longlong *)(param_1 + 0x10) >> 1);
        if (iVar4 < 1) {
          local_c4 = -1;
        }
        else {
          local_c4 = iVar4 + -1;
          if (((*(ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)local_c4 * 2) & 0xfc00) ==
               0xdc00) &&
             ((local_c4 == 0 ||
              ((*(ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar4 + -2) * 2) & 0xfc00) ==
               0xd800)))) {
            local_c4 = iVar4 + -2;
          }
        }
        local_f8 = local_c4;
        local_100 = &local_a0;
        local_108 = local_70;
        local_f0 = param_2;
        FUN_143af13c0(local_98,local_28,local_e4,&local_b0);
      }
      *(ushort **)(param_1 + 0x10) = local_a8;
      *(undefined1 **)(param_1 + 0x20) = local_b0;
      return;
    }
  }
  *param_2 = 0xc;
  *(uint *)(local_98 + 0x54) = local_e0;
  goto LAB_143af00e3;
}



// FUNCTION 143af0380 FUN_143af0380 body=524 status=ok
// SIG undefined FUN_143af0380(void)

ulonglong FUN_143af0380(longlong param_1,uint param_2,uint *param_3,char param_4,int param_5)

{
  uint uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint local_38;
  uint local_34;
  
  if (((int)param_2 < 0x10000) || ((*(byte *)(param_1 + 0x105) & 1) != 0)) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x60) +
                     (longlong)
                     (int)((uint)*(ushort *)
                                  (*(longlong *)(param_1 + 0x60) +
                                  (longlong)((int)param_2 >> 10) * 2) + ((int)param_2 >> 4 & 0x3fU))
                     * 4);
    if (param_5 == 1) {
      local_38 = (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0xf0) +
                        (ulonglong)((uVar1 & 0xffff) * 0x10 + (param_2 & 0xf)) * 2);
      if (local_38 < 0x100) {
        local_34 = 1;
      }
      else {
        local_34 = 2;
      }
    }
    else {
      pbVar2 = (byte *)((ulonglong)(((uVar1 & 0xffff) * 0x10 + (param_2 & 0xf)) * 3) +
                       *(longlong *)(param_1 + 0xf0));
      local_38 = (uint)*pbVar2 << 0x10 | (uint)pbVar2[1] << 8 | (uint)pbVar2[2];
      if (local_38 < 0x100) {
        local_34 = 1;
      }
      else if (local_38 < 0x10000) {
        local_34 = 2;
      }
      else {
        local_34 = 3;
      }
    }
    if ((uVar1 & 1 << ((byte)param_2 & 0xf) + 0x10) != 0) {
      *param_3 = local_38;
      return (ulonglong)local_34;
    }
    if ((((param_4 != '\0') || (param_2 - 0xe000 < 0x1900)) || (param_2 - 0xf0000 < 0x20000)) &&
       (local_38 != 0)) {
      *param_3 = local_38;
      return (ulonglong)-local_34;
    }
  }
  if (*(longlong *)(param_1 + 0x128) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143b0f7c0(*(longlong *)(param_1 + 0x128),param_2,param_3,param_4);
  }
  return uVar3;
}



// FUNCTION 143af0590 FUN_143af0590 body=277 status=ok
// SIG undefined FUN_143af0590(void)

undefined8 FUN_143af0590(longlong param_1,uint param_2,uint *param_3,char param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (((int)param_2 < 0x10000) || ((*(byte *)(param_1 + 0x105) & 1) != 0)) {
    uVar2 = (uint)*(ushort *)
                   (*(longlong *)(param_1 + 0xf0) +
                   (longlong)
                   (int)((uint)*(ushort *)
                                (*(longlong *)(param_1 + 0x60) +
                                (longlong)
                                (int)((uint)*(ushort *)
                                             (*(longlong *)(param_1 + 0x60) +
                                             (longlong)((int)param_2 >> 10) * 2) +
                                     ((int)param_2 >> 4 & 0x3fU)) * 2) + (param_2 & 0xf)) * 2);
    *param_3 = uVar2 & 0xff;
    if (uVar2 < 0xf00) {
      if (param_4 == '\0') {
        bVar1 = uVar2 < 0xc00;
      }
      else {
        bVar1 = uVar2 < 0x800;
      }
      if (bVar1) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143af06b0 FUN_143af06b0 body=255 status=ok
// SIG undefined FUN_143af06b0(void)

void FUN_143af06b0(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar2 + 0x50);
  *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + 0x54) = *(undefined4 *)(lVar1 + 0x54);
  FUN_143ad6a90(param_1,param_2);
  *(undefined4 *)(lVar1 + 0x54) = *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + 0x54);
  if (*param_2 == 0xf) {
    if ('\0' < *(char *)(*(longlong *)(lVar2 + 0x50) + 0x5b)) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + 0x68),(void *)(*(longlong *)(lVar2 + 0x50) + 0x68),
                 (longlong)*(char *)(*(longlong *)(lVar2 + 0x50) + 0x5b));
    }
    *(undefined1 *)(lVar1 + 0x5b) = *(undefined1 *)(*(longlong *)(lVar2 + 0x50) + 0x5b);
    *(undefined1 *)(*(longlong *)(lVar2 + 0x50) + 0x5b) = 0;
  }
  *(longlong *)(param_1 + 8) = lVar1;
  return;
}



// FUNCTION 143af07b0 FUN_143af07b0 body=1036 status=ok
// SIG undefined FUN_143af07b0(void)

void FUN_143af07b0(ushort *param_1,int *param_2)

{
  undefined8 uVar1;
  char cVar2;
  uint local_88;
  int *local_80;
  ulonglong local_78;
  undefined2 local_68 [4];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  void *local_20;
  void *local_18;
  void *local_10;
  
  local_30 = *(longlong *)(*(longlong *)(param_1 + 4) + 0x10);
  if (*param_1 < 0x38) {
    local_88 = (uint)*param_1;
  }
  else {
    local_88 = 0x38;
  }
  _guard_xfg_dispatch_icall_nop(local_68,param_1,(longlong)(int)local_88);
  local_68[0] = (undefined2)local_88;
  local_60 = *(longlong *)(local_30 + 0x50);
  local_28 = *(longlong *)(param_1 + 8);
  if (*(int *)(local_30 + 0x68) == 0) goto LAB_143af0864;
  while( true ) {
    FUN_143af0dd0(*(undefined8 *)(param_1 + 4),param_1 + 8,*(undefined8 *)(param_1 + 0xc),2,param_2)
    ;
LAB_143af0864:
    cVar2 = FUN_143a8b110(*param_2);
    if ((cVar2 == '\0') || (*(ulonglong *)(param_1 + 0xc) <= *(ulonglong *)(param_1 + 8))) {
      return;
    }
    local_58 = *(longlong *)(param_1 + 8);
    local_50 = FUN_143af1450(param_1 + 8,*(undefined8 *)(param_1 + 0xc),(char)param_1[1]);
    if (local_58 != local_50) {
      if ('\0' < *(char *)(*(longlong *)(param_1 + 4) + 0x40)) {
        local_10 = (void *)(local_60 + 0x41);
        _guard_xfg_dispatch_icall_nop
                  (local_10,(void *)(*(longlong *)(param_1 + 4) + 0x41),
                   (longlong)*(char *)(*(longlong *)(param_1 + 4) + 0x40));
      }
      *(undefined1 *)(local_60 + 0x40) = *(undefined1 *)(*(longlong *)(param_1 + 4) + 0x40);
      FUN_143ad85d0(local_68,param_2);
      if ((*(longlong *)(param_1 + 0x18) != 0) && (local_28 != *(longlong *)(param_1 + 8))) {
        local_80 = *(int **)(param_1 + 0x18);
        uVar1 = *(undefined8 *)(param_1 + 8);
        for (local_78 = *(ulonglong *)(param_1 + 0x10); local_78 < local_48; local_78 = local_78 + 2
            ) {
          if (-1 < *local_80) {
            *local_80 = *local_80 + ((int)uVar1 - (int)local_28);
          }
          local_80 = local_80 + 1;
        }
      }
      *(longlong *)(param_1 + 8) = local_58;
      *(ulonglong *)(param_1 + 0x10) = local_48;
      *(undefined8 *)(param_1 + 0x18) = local_38;
      if ('\0' < *(char *)(local_60 + 0x40)) {
        local_20 = (void *)(*(longlong *)(param_1 + 4) + 0x41);
        _guard_xfg_dispatch_icall_nop
                  (local_20,(void *)(local_60 + 0x41),(longlong)*(char *)(local_60 + 0x40));
      }
      *(undefined1 *)(*(longlong *)(param_1 + 4) + 0x40) = *(undefined1 *)(local_60 + 0x40);
      if (*param_2 == 0xf) {
        if ('\0' < *(char *)(local_60 + 0x5d)) {
          local_18 = (void *)(*(longlong *)(param_1 + 4) + 0x90);
          _guard_xfg_dispatch_icall_nop
                    (local_18,(void *)(local_60 + 0x90),(longlong)*(char *)(local_60 + 0x5d));
        }
        *(undefined1 *)(*(longlong *)(param_1 + 4) + 0x5d) = *(undefined1 *)(local_60 + 0x5d);
        *(undefined1 *)(local_60 + 0x5d) = 0;
      }
    }
    cVar2 = FUN_143a8b0e0(*param_2);
    if (cVar2 != '\0') break;
    if (*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0xc)) {
      return;
    }
  }
  return;
}



// FUNCTION 143af0bd0 FUN_143af0bd0 body=54 status=ok
// SIG undefined FUN_143af0bd0(void)

int FUN_143af0bd0(int param_1)

{
  if (((param_1 - 0xa1a1U & 0xffff) < 0x5d5e) && ((param_1 - 0xa1U & 0xff) < 0x5e)) {
    param_1 = param_1 + -0x8080;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 143af0c10 FUN_143af0c10 body=197 status=ok
// SIG undefined FUN_143af0c10(void)

uint FUN_143af0c10(uint param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 local_res8;
  
  if (param_1 < 0xeffd) {
    local_res8._0_1_ = (byte)param_1;
    bVar1 = (byte)local_res8;
    local_res8 = param_1 & 0xff00;
    if (local_res8 < 0x9f01) {
      local_res8 = local_res8 - 0x7000;
    }
    else {
      local_res8 = local_res8 - 0xb000;
    }
    if (bVar1 < 0x9f) {
      if (bVar1 < 0x7f) {
        uVar2 = (param_1 & 0xff) - 0x1f;
      }
      else {
        uVar2 = (param_1 & 0xff) - 0x20;
      }
      local_res8 = local_res8 * 2 - 0x100 | uVar2;
    }
    else {
      local_res8 = local_res8 * 2 | (param_1 & 0xff) - 0x7e;
    }
  }
  else {
    local_res8 = 0;
  }
  return local_res8;
}



// FUNCTION 143af0ce0 FUN_143af0ce0 body=237 status=ok
// SIG undefined FUN_143af0ce0(void)

void FUN_143af0ce0(byte param_1,byte param_2,char *param_3)

{
  byte local_res8;
  char local_res10;
  
  if ((param_1 & 1) == 0) {
    local_res8 = param_1;
    if ((byte)(param_2 - 0x21) < 0x5e) {
      local_res10 = param_2 + 0x7e;
    }
    else {
      local_res10 = '\0';
    }
  }
  else {
    local_res8 = param_1 + 1;
    if (param_2 < 0x60) {
      local_res10 = param_2 + 0x1f;
    }
    else if (param_2 < 0x7f) {
      local_res10 = param_2 + 0x20;
    }
    else {
      local_res10 = '\0';
    }
  }
  local_res8 = local_res8 >> 1;
  if (local_res8 < 0x30) {
    local_res8 = local_res8 + 0x70;
  }
  else if (local_res8 < 0x40) {
    local_res8 = local_res8 + 0xb0;
  }
  else {
    local_res8 = '\0';
  }
  *param_3 = local_res8;
  param_3[1] = local_res10;
  return;
}



// FUNCTION 143af0dd0 FUN_143af0dd0 body=1431 status=ok
// SIG undefined FUN_143af0dd0(void)

void FUN_143af0dd0(longlong param_1,ulonglong *param_2,ulonglong param_3,int param_4,int *param_5)

{
  undefined1 uVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int local_30;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  local_20 = *(undefined4 *)(lVar3 + 0x68);
  local_24 = 0;
  cVar5 = *(char *)(param_1 + 0x40);
  local_30 = 0;
  do {
    if (param_3 <= *param_2) goto LAB_143af0ee4;
    uVar1 = *(undefined1 *)*param_2;
    *param_2 = *param_2 + 1;
    *(undefined1 *)(param_1 + 0x41 + (longlong)*(char *)(param_1 + 0x40)) = uVar1;
    *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) + '\x01';
    local_18 = FUN_143af14a0(uVar1,&local_20,&local_24);
    local_30 = local_18;
    if (local_18 == -1) goto LAB_143af0ee4;
    if (local_18 == 1) {
      local_20 = 0;
      goto LAB_143af0ee4;
    }
  } while (local_18 != 2);
  local_30 = 1;
  local_20 = 0;
LAB_143af0ee4:
  *(undefined4 *)(lVar3 + 0x68) = local_20;
  if (local_30 == 0) {
    return;
  }
  if (local_30 == -1) {
    *param_5 = 0x12;
    goto LAB_143af1242;
  }
  local_14 = param_4;
  if (param_4 == 1) {
    bVar2 = (&DAT_145cfdc40)[local_24];
    if (bVar2 == 0xff) {
      *param_5 = 0x13;
      goto LAB_143af1242;
    }
    if ('\0' < (char)bVar2) {
      if ((char)bVar2 < '\x03') {
        if (((uint)*(ushort *)(&DAT_145cfd4d0 + (ulonglong)*(uint *)(lVar3 + 0x6c) * 2) &
            1 << (bVar2 & 0x1f)) == 0) {
          *param_5 = 0x13;
        }
        else {
          *(byte *)(lVar3 + 0x5e) = bVar2;
        }
        goto LAB_143af1242;
      }
      if (bVar2 == 0x10) {
        if (*(char *)(lVar3 + 0x5e) == '\0') {
          *param_5 = 0x12;
        }
        else {
          if (*(char *)(lVar3 + 0x60) < '\x02') {
            *(undefined1 *)(lVar3 + 0x61) = *(undefined1 *)(lVar3 + 0x60);
          }
          *(undefined1 *)(lVar3 + 0x60) = 2;
        }
        goto LAB_143af1242;
      }
    }
    if (((uint)*(ushort *)(&DAT_145cfd4d0 + (ulonglong)*(uint *)(lVar3 + 0x6c) * 2) &
        1 << (bVar2 & 0x1f)) == 0) {
      *param_5 = 0x13;
    }
    else {
      *(byte *)(lVar3 + 0x5c) = bVar2;
    }
  }
  else if (param_4 == 2) {
    if (local_24 != 0x30) {
      *param_5 = 0x13;
    }
  }
  else if (param_4 == 3) {
    cVar4 = (&DAT_145cfdc90)[local_24];
    local_1c = cVar4 + 1;
    switch(local_1c) {
    case 0:
      *param_5 = 0x13;
      break;
    default:
      if (*(int *)(lVar3 + 0x6c) == 0) {
        *param_5 = 0x13;
      }
      else {
        *(char *)(lVar3 + 0x5f) = cVar4;
      }
      break;
    case 3:
      if (*(int *)(lVar3 + 0x6c) == 0) {
        *param_5 = 0x13;
        break;
      }
    case 2:
    case 0x22:
      *(char *)(lVar3 + 0x5d) = cVar4;
      break;
    case 0x11:
      if (*(char *)(lVar3 + 0x5e) == '\0') {
        *param_5 = 0x12;
      }
      else {
        if (*(char *)(lVar3 + 0x60) < '\x02') {
          *(undefined1 *)(lVar3 + 0x61) = *(undefined1 *)(lVar3 + 0x60);
        }
        *(undefined1 *)(lVar3 + 0x60) = 2;
      }
      break;
    case 0x12:
      if (*(char *)(lVar3 + 0x5f) == '\0') {
        *param_5 = 0x12;
      }
      else {
        if (*(char *)(lVar3 + 0x60) < '\x02') {
          *(undefined1 *)(lVar3 + 0x61) = *(undefined1 *)(lVar3 + 0x60);
        }
        *(undefined1 *)(lVar3 + 0x60) = 3;
      }
      break;
    case 0x23:
      *(char *)(lVar3 + 0x5e) = cVar4;
    }
  }
  else {
    *param_5 = 0x12;
  }
LAB_143af1242:
  cVar4 = FUN_143a8b110(*param_5);
  if (cVar4 == '\0') {
    if (*param_5 == 0x12) {
      if ('\x01' < *(char *)(param_1 + 0x40)) {
        cVar4 = *(char *)(param_1 + 0x40) + -1;
        cVar5 = *(char *)(param_1 + 0x40) - cVar5;
        if (cVar5 < cVar4) {
          *(char *)(param_1 + 0x11a) = cVar5 - cVar4;
          local_10 = (void *)(param_1 + 0xfa);
          _guard_xfg_dispatch_icall_nop
                    (local_10,(void *)(param_1 + 0x42),(longlong)-(int)*(char *)(param_1 + 0x11a));
          *param_2 = *param_2 - (longlong)cVar5;
        }
        else {
          *param_2 = *param_2 - (longlong)cVar4;
        }
        *(undefined1 *)(param_1 + 0x40) = 1;
      }
    }
    else if (*param_5 == 0x13) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 143af13c0 FUN_143af13c0 body=130 status=ok
// SIG undefined FUN_143af13c0(void)

void FUN_143af13c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 local_18 [3];
  
  local_18[0] = *param_4;
  FUN_143b0d0e0(param_1,param_2,param_3,local_18,param_5,param_6,param_7,param_8);
  *param_4 = local_18[0];
  return;
}



// FUNCTION 143af1450 FUN_143af1450 body=76 status=ok
// SIG undefined FUN_143af1450(void)

char * FUN_143af1450(undefined8 *param_1,char *param_2)

{
  char *local_18;
  
  for (local_18 = (char *)*param_1; (local_18 < param_2 && (*local_18 != '\x1b'));
      local_18 = local_18 + 1) {
  }
  return local_18;
}



// FUNCTION 143af14a0 FUN_143af14a0 body=301 status=ok
// SIG undefined FUN_143af14a0(void)

int FUN_143af14a0(byte param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  local_20 = 0x4a;
  local_18 = 0;
  if ((char)(&DAT_145cfd4e0)[param_1] == 0) {
    *param_2 = 0;
    *param_3 = 0;
    iVar3 = -1;
  }
  else {
    iVar1 = *param_2 * 0x20 + (int)(char)(&DAT_145cfd4e0)[param_1];
    iVar3 = local_20;
    do {
      local_20 = iVar3;
      if ((local_20 == local_1c) || (iVar2 = local_20 + local_1c >> 1, iVar2 == local_18)) {
        *param_2 = 0;
        *param_3 = 0;
        return -1;
      }
      iVar3 = iVar2;
      local_18 = iVar2;
    } while ((iVar1 < *(int *)(&DAT_145cfd5e0 + (longlong)iVar2 * 4)) ||
            (iVar3 = local_20, local_1c = iVar2,
            *(int *)(&DAT_145cfd5e0 + (longlong)iVar2 * 4) < iVar1));
    *param_2 = iVar1;
    *param_3 = iVar2;
    iVar3 = (int)(char)(&DAT_145cfd730)[iVar2];
  }
  return iVar3;
}



// FUNCTION 143af15d0 FUN_143af15d0 body=73 status=ok
// SIG undefined FUN_143af15d0(void)

uint FUN_143af15d0(uint param_1)

{
  if (param_1 < 0x80) {
    if ((param_1 != 0x5c) && (param_1 != 0x7e)) {
      return param_1;
    }
  }
  else {
    if (param_1 == 0xa5) {
      return 0x5c;
    }
    if (param_1 == 0x203e) {
      return 0x7e;
    }
  }
  return 0xfffe;
}



// FUNCTION 143af1620 FUN_143af1620 body=50 status=ok
// SIG undefined FUN_143af1620(void)

uint FUN_143af1620(uint param_1)

{
  if (0x5b < param_1) {
    if (param_1 == 0x5c) {
      param_1 = 0xa5;
    }
    else if (param_1 == 0x7e) {
      param_1 = 0x203e;
    }
  }
  return param_1;
}



// FUNCTION 143af1660 FUN_143af1660 body=163 status=ok
// SIG undefined FUN_143af1660(void)

void FUN_143af1660(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x5b) == '\0') {
    *(undefined1 *)(param_1 + 0x5b) = 4;
    *(undefined1 *)(param_1 + 0x68) = 0x1b;
    *(undefined1 *)(param_1 + 0x69) = 0x24;
    *(undefined1 *)(param_1 + 0x6a) = 0x29;
    *(undefined1 *)(param_1 + 0x6b) = 0x43;
  }
  if (*(int *)(param_2 + 0x6c) == 1) {
    lVar1 = *(longlong *)(param_2 + 0x50);
    *(undefined4 *)(lVar1 + 0x54) = 0;
    *(undefined4 *)(lVar1 + 0x50) = 1;
  }
  return;
}



// FUNCTION 143af1710 FUN_143af1710 body=73 status=ok
// SIG undefined FUN_143af1710(void)

void FUN_143af1710(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x6c) == 1) {
    lVar1 = *(longlong *)(param_2 + 0x50);
    *(undefined4 *)(lVar1 + 0x48) = 0;
    *(undefined4 *)(lVar1 + 0x4c) = 0;
    *(undefined1 *)(lVar1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 143af1760 FUN_143af1760 body=155 status=ok
// SIG undefined FUN_143af1760(void)

void FUN_143af1760(longlong param_1,uint param_2,int param_3,undefined4 *param_4)

{
  undefined1 local_res10;
  
  local_res10 = (undefined1)param_2;
  if (param_2 < 0x100) {
    *(undefined1 *)(param_1 + 0x41) = local_res10;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    *(char *)(param_1 + 0x41) = (char)(param_2 >> 8);
    *(undefined1 *)(param_1 + 0x42) = local_res10;
    *(undefined1 *)(param_1 + 0x40) = 2;
  }
  if (param_3 == 0xfffe) {
    *param_4 = 10;
  }
  else {
    *param_4 = 0xc;
  }
  return;
}



// FUNCTION 143af1800 FUN_143af1800 body=146 status=ok
// SIG undefined FUN_143af1800(void)

void FUN_143af1800(longlong param_1)

{
  longlong lVar1;
  undefined1 local_18;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      if (*(longlong *)(lVar1 + (ulonglong)local_18 * 8) != 0) {
        FUN_143abdae0(*(undefined8 *)(lVar1 + (ulonglong)local_18 * 8));
      }
    }
    if (*(char *)(param_1 + 0x3e) == '\0') {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



// FUNCTION 143af18a0 FUN_143af18a0 body=210 status=ok
// SIG undefined FUN_143af18a0(void)

longlong FUN_143af18a0(longlong param_1,longlong param_2,int *param_3)

{
  void *_Src;
  undefined4 local_28;
  
  if (*param_3 < 1) {
    *param_3 = 0x1c8;
    param_2 = 0;
  }
  else {
    _Src = *(void **)(param_1 + 0x10);
    _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x120),_Src,0xa8);
    for (local_28 = 0; local_28 < 0x14; local_28 = local_28 + 1) {
      if (*(longlong *)((longlong)_Src + (longlong)local_28 * 8) != 0) {
        FUN_143abd470(*(undefined8 *)((longlong)_Src + (longlong)local_28 * 8));
      }
    }
    *(longlong *)(param_2 + 0x10) = param_2 + 0x120;
    *(undefined1 *)(param_2 + 0x3e) = 1;
  }
  return param_2;
}



// FUNCTION 143af1980 FUN_143af1980 body=2221 status=ok
// SIG undefined FUN_143af1980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143af1980(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_a8 [32];
  byte *local_88;
  char *local_80;
  ushort local_78 [2];
  byte local_74;
  byte local_73 [3];
  int local_70;
  byte local_6c;
  undefined1 *local_68;
  byte local_60;
  longlong local_58;
  undefined1 local_50;
  byte local_4f;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  int local_30;
  char local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_73[0] = 0;
  local_58 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  local_48 = 0;
  do {
    if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 0x10)) {
      return;
    }
    if (0 < *param_2) {
      return;
    }
    local_50 = *(undefined1 *)(local_58 + 0xa1);
    if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x20)) {
      *param_2 = 0xf;
      return;
    }
    local_78[0] = **(ushort **)(param_1 + 0x10);
    local_70 = 0;
    local_68 = local_4c;
    if ((((((0x7f < local_78[0]) && (local_78[0] < 0x100)) && (local_78[0] != 0xb1)) &&
         ((local_78[0] != 0xd7 && (local_78[0] != 0xf7)))) && (local_78[0] != 0xb0)) &&
       (((local_78[0] != 0xb4 && (local_78[0] != 0xb6)) &&
        ((local_78[0] != 0xa7 && (local_78[0] != 0xa8)))))) {
      *(undefined1 *)(local_58 + 0xa1) = 1;
    }
    if (((((0x1f < local_78[0]) && (local_78[0] < 0x80)) || (local_78[0] == 0)) ||
        ((local_78[0] == 9 || (local_78[0] == 0xd)))) ||
       ((local_78[0] == 10 || (local_78[0] == 0x19)))) {
      local_4c[0] = (undefined1)local_78[0];
      local_68 = local_4c + 1;
      local_70 = 1;
    }
    if (local_70 == 0) {
      local_74 = FUN_143af2990(local_78[0]);
      if (local_74 == 0x14) {
        lVar2 = FUN_143af2c30(local_68);
        local_68 = local_68 + lVar2;
        local_70 = (int)local_68 - (int)local_4c;
      }
      else if (local_74 == 0xf) {
        if (local_78[0] < 0x20) {
          *local_68 = 0xf;
          local_68[1] = (char)local_78[0] + ' ';
          local_68 = local_68 + 2;
        }
        else if ((0x7f < local_78[0]) && (local_78[0] < 0xa1)) {
          *local_68 = 0xf;
          local_68[1] = (char)local_78[0];
          local_68 = local_68 + 2;
        }
        local_70 = (int)local_68 - (int)local_4c;
      }
      else if (local_74 < 0x14) {
        local_80 = local_28;
        local_88 = local_73;
        local_70 = FUN_143af2a70(local_58,local_74,local_68,local_78);
      }
      if (local_70 == 0) {
        _guard_xfg_dispatch_icall_nop(local_28,0,0x14);
        if ((*(char *)(local_58 + 0xa0) != '\x01') &&
           ((((local_74 == 0x80 && (*(byte *)(local_58 + 0xa0) < 0x10)) ||
             ((local_74 == 0x81 && (0xf < *(byte *)(local_58 + 0xa0))))) || (local_74 == 0x82)))) {
          if (*(byte *)(local_58 + 0xa1) < 0x10) {
            local_80 = local_28;
            local_88 = local_73;
            local_70 = FUN_143af2a70(local_58,1,local_68,local_78);
            if (local_70 == 0) {
              local_80 = local_28;
              local_88 = local_73;
              local_70 = FUN_143af2a70(local_58,0,local_68,local_78);
            }
            if (local_70 == 0) {
              local_80 = local_28;
              local_88 = local_73;
              local_70 = FUN_143af2a70(local_58,*(undefined1 *)(local_58 + 0xa1),local_68,local_78);
            }
          }
          else {
            local_80 = local_28;
            local_88 = local_73;
            local_70 = FUN_143af2a70(local_58,*(undefined1 *)(local_58 + 0xa1),local_68,local_78);
          }
        }
        if (((local_70 == 0) && (*(char *)(local_58 + 0xa1) != '\0')) &&
           (((local_74 == 0x80 && (*(byte *)(local_58 + 0xa1) < 0x10)) ||
            (((local_74 == 0x81 && (0xf < *(byte *)(local_58 + 0xa1))) || (local_74 == 0x82)))))) {
          local_80 = local_28;
          local_88 = local_73;
          local_70 = FUN_143af2a70(local_58,*(undefined1 *)(local_58 + 0xa1),local_68,local_78);
        }
        if (((local_70 == 0) && (local_73[0] != 0)) &&
           (((local_74 == 0x80 && (local_73[0] < 0x10)) ||
            (((local_74 == 0x81 && (0xf < local_73[0])) || (local_74 == 0x82)))))) {
          local_80 = local_28;
          local_88 = local_73;
          local_70 = FUN_143af2a70(local_58,local_73[0],local_68,local_78);
        }
        if (local_70 == 0) {
          if (local_74 == 0x81) {
            local_44 = 0x10;
          }
          else {
            local_44 = 1;
          }
          local_60 = (byte)local_44;
          if (local_74 == 0x81) {
            local_40 = 0x13;
          }
          else {
            local_40 = 0xb;
          }
          local_4f = (byte)local_40;
          if (local_74 == 0x82) {
            local_60 = 1;
            local_4f = 0x13;
          }
          local_6c = local_60;
          while ((local_6c <= local_4f && (local_70 == 0))) {
            if ((*(longlong *)(local_58 + (ulonglong)local_6c * 8) != 0) &&
               (local_28[local_6c] == '\0')) {
              local_80 = local_28;
              local_88 = local_73;
              local_70 = FUN_143af2a70(local_58,local_6c,local_68,local_78);
            }
            local_6c = local_6c + 1;
          }
          if ((local_70 == 0) && (local_60 == 1)) {
            local_80 = local_28;
            local_88 = local_73;
            local_70 = FUN_143af2a70(local_58,0,local_68,local_78);
          }
        }
        if (local_70 == 0) {
          iVar1 = FUN_143af2c30(local_68);
          local_70 = ((int)local_68 + iVar1) - (int)local_4c;
        }
      }
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 2;
    local_68 = local_4c;
    while (*(ulonglong *)(param_1 + 0x20) < *(ulonglong *)(param_1 + 0x28)) {
      local_3c = local_70;
      iVar1 = local_70 + -1;
      bVar3 = local_70 == 0;
      local_70 = iVar1;
      if (bVar3) break;
      **(undefined1 **)(param_1 + 0x20) = *local_68;
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
      local_68 = local_68 + 1;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        **(int **)(param_1 + 0x30) = local_48;
        *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
      }
    }
    local_48 = local_48 + 1;
    if (0 < local_70) {
      local_38 = (undefined1 *)(*(longlong *)(param_1 + 8) + 0x68);
      *param_2 = 0xf;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x5b) = (undefined1)local_70;
      while( true ) {
        local_30 = local_70;
        if (local_70 == 0) break;
        *local_38 = *local_68;
        local_38 = local_38 + 1;
        local_68 = local_68 + 1;
        local_70 = local_70 + -1;
      }
    }
    *(undefined1 *)(local_58 + 0xa1) = local_50;
  } while( true );
}



// FUNCTION 143af2230 FUN_143af2230 body=1111 status=ok
// SIG undefined FUN_143af2230(void)

void FUN_143af2230(longlong param_1,int *param_2)

{
  char local_68;
  ushort local_64;
  undefined1 local_60 [8];
  size_t local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 0x10);
  local_50 = (undefined1 *)0x0;
  local_68 = '\0';
  do {
    if (((0 < *param_2) || (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 0x10))) ||
       (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x20))) {
      if (((*param_2 < 1) && (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x18))) &&
         (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x20))) {
        *param_2 = 0xf;
      }
      else if (0 < *param_2) {
        *(char *)(*(longlong *)(param_1 + 8) + 0x40) = local_68;
        if ('\0' < local_68) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 8) + 0x41),local_50,(longlong)local_68);
        }
        if (*param_2 == 0xb) {
          *param_2 = 0;
        }
      }
      return;
    }
    local_48 = *(undefined1 **)(param_1 + 0x10);
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x40) == '\0') {
      local_50 = local_48;
      local_64 = FUN_143af2ce0(param_1,param_2);
      local_68 = (char)*(undefined8 *)(param_1 + 0x10) - (char)local_48;
    }
    else {
      local_58 = (size_t)*(char *)(*(longlong *)(param_1 + 8) + 0x40);
      local_28 = 3 - local_58;
      local_38 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10);
      local_30 = local_38;
      if (local_28 < local_38) {
        local_30 = local_28;
      }
      local_40 = local_30;
      _guard_xfg_dispatch_icall_nop(local_60,(void *)(*(longlong *)(param_1 + 8) + 0x41),local_58);
      _guard_xfg_dispatch_icall_nop(local_60 + local_58,*(void **)(param_1 + 0x10),local_40);
      local_20 = *(undefined8 *)(param_1 + 0x18);
      local_50 = local_60;
      *(undefined1 **)(param_1 + 0x10) = local_50;
      *(undefined1 **)(param_1 + 0x18) = local_60 + local_40 + local_58;
      local_68 = (char)local_58 + (char)local_40;
      local_64 = FUN_143af2ce0(param_1,param_2);
      *(undefined1 **)(param_1 + 0x10) =
           local_48 + ((*(longlong *)(param_1 + 0x10) - (longlong)local_60) - local_58);
      *(undefined8 *)(param_1 + 0x18) = local_20;
      if (*param_2 == 0xb) {
        *(char *)(*(longlong *)(param_1 + 8) + 0x40) = local_68;
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 8) + 0x41),local_60,(longlong)local_68);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
        *param_2 = 0;
        return;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
    }
    if (*param_2 < 1) {
      if (local_64 < 0xfffe) {
        **(ushort **)(param_1 + 0x20) = local_64;
        *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 2;
        if (*(longlong *)(param_1 + 0x30) != 0) {
          **(int **)(param_1 + 0x30) = (int)local_48 - (int)local_18;
          *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
        }
      }
      else if (local_64 == 0xfffe) {
        *param_2 = 10;
      }
      else {
        *param_2 = 0xc;
      }
    }
  } while( true );
}



// FUNCTION 143af2690 FUN_143af2690 body=47 status=ok
// SIG undefined FUN_143af2690(void)

void FUN_143af2690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,1);
  return;
}



// FUNCTION 143af26c0 FUN_143af26c0 body=47 status=ok
// SIG undefined FUN_143af26c0(void)

void FUN_143af26c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,2);
  return;
}



// FUNCTION 143af26f0 FUN_143af26f0 body=47 status=ok
// SIG undefined FUN_143af26f0(void)

void FUN_143af26f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,3);
  return;
}



// FUNCTION 143af2720 FUN_143af2720 body=47 status=ok
// SIG undefined FUN_143af2720(void)

void FUN_143af2720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,4);
  return;
}



// FUNCTION 143af2750 FUN_143af2750 body=47 status=ok
// SIG undefined FUN_143af2750(void)

void FUN_143af2750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,5);
  return;
}



// FUNCTION 143af2780 FUN_143af2780 body=47 status=ok
// SIG undefined FUN_143af2780(void)

void FUN_143af2780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,6);
  return;
}



// FUNCTION 143af27b0 FUN_143af27b0 body=47 status=ok
// SIG undefined FUN_143af27b0(void)

void FUN_143af27b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,8);
  return;
}



// FUNCTION 143af27e0 FUN_143af27e0 body=47 status=ok
// SIG undefined FUN_143af27e0(void)

void FUN_143af27e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,0xb);
  return;
}



// FUNCTION 143af2810 FUN_143af2810 body=47 status=ok
// SIG undefined FUN_143af2810(void)

void FUN_143af2810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,0x10);
  return;
}



// FUNCTION 143af2840 FUN_143af2840 body=47 status=ok
// SIG undefined FUN_143af2840(void)

void FUN_143af2840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,0x11);
  return;
}



// FUNCTION 143af2870 FUN_143af2870 body=47 status=ok
// SIG undefined FUN_143af2870(void)

void FUN_143af2870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,0x12);
  return;
}



// FUNCTION 143af28a0 FUN_143af28a0 body=47 status=ok
// SIG undefined FUN_143af28a0(void)

void FUN_143af28a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143af3260(param_1,param_2,param_3,0x13);
  return;
}



// FUNCTION 143af28d0 FUN_143af28d0 body=182 status=ok
// SIG undefined FUN_143af28d0(void)

ulonglong FUN_143af28d0(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  ulonglong uVar3;
  size_t _MaxCount;
  undefined **local_18;
  
  ppuVar2 = &PTR_DAT_145cff2b0;
  local_18 = &PTR_DAT_145cff2b0;
  if ((param_1 == (char *)0x0) ||
     (ppuVar2 = (undefined **)(ulonglong)(uint)(int)*param_1, (int)*param_1 == 0)) {
    uVar3 = (ulonglong)ppuVar2 & 0xffffffffffffff00;
  }
  else {
    for (; ppuVar2 = local_18, *local_18 != (undefined *)0x0; local_18 = local_18 + 2) {
      if (**local_18 == *param_1) {
        _MaxCount = _guard_xfg_dispatch_icall_nop(*local_18);
        iVar1 = strncmp(*local_18,param_1,_MaxCount);
        if (iVar1 == 0) {
          return (ulonglong)*(byte *)(local_18 + 1);
        }
      }
      else {
        ppuVar2 = (undefined **)(ulonglong)(uint)(int)(char)**local_18;
        if ((int)*param_1 < (int)(char)**local_18) break;
      }
    }
    uVar3 = CONCAT71((int7)((ulonglong)ppuVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 143af2990 FUN_143af2990 body=84 status=ok
// SIG undefined FUN_143af2990(void)

ulonglong FUN_143af2990(ushort param_1)

{
  ulonglong uVar1;
  ushort *local_18;
  
  for (local_18 = (ushort *)&DAT_145cfef80; local_18[1] < param_1; local_18 = local_18 + 3) {
  }
  if (param_1 < *local_18) {
    uVar1 = CONCAT71((uint7)(byte)(param_1 >> 8),0x14);
  }
  else {
    uVar1 = (ulonglong)(byte)local_18[2];
  }
  return uVar1;
}



// FUNCTION 143af29f0 FUN_143af29f0 body=119 status=ok
// SIG undefined FUN_143af29f0(void)

undefined2 FUN_143af29f0(longlong *param_1)

{
  char cVar1;
  undefined1 local_18;
  undefined1 local_17;
  
  local_18 = *(char *)*param_1;
  *param_1 = *param_1 + 1;
  cVar1 = *(char *)*param_1;
  *param_1 = *param_1 + 1;
  local_17 = cVar1;
  if (local_18 == -10) {
    local_17 = '\0';
    local_18 = cVar1;
  }
  return CONCAT11(local_18,local_17);
}



// FUNCTION 143af2a70 FUN_143af2a70 body=436 status=ok
// SIG undefined FUN_143af2a70(void)

longlong FUN_143af2a70(longlong param_1,byte param_2,byte *param_3,undefined2 *param_4,byte *param_5
                      ,longlong param_6)

{
  int iVar1;
  byte *pbVar2;
  uint local_20 [2];
  byte *local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_1 + (ulonglong)param_2 * 8);
  local_18 = param_3;
  iVar1 = FUN_143adeb70(local_10,*param_4,local_20,0);
  if (iVar1 < 1) {
    *(undefined1 *)(param_6 + (ulonglong)param_2) = 1;
    return 0;
  }
  *param_5 = param_2;
  pbVar2 = local_18;
  if ((param_2 != 0) && (*(byte *)(param_1 + 0xa0) != param_2)) {
    *local_18 = param_2;
    pbVar2 = local_18 + 1;
    if ((iVar1 == 1) && (0xf < param_2)) {
      *pbVar2 = param_2;
      pbVar2 = local_18 + 2;
    }
  }
  local_18 = pbVar2;
  if ((iVar1 == 1) && ((byte)(local_20[0] >> ((char)iVar1 * '\b' - 8U & 0x1f)) < 0x20)) {
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        if (iVar1 != 4) goto LAB_143af2c0f;
        *local_18 = (byte)(local_20[0] >> 0x18);
        local_18 = local_18 + 1;
      }
      *local_18 = (byte)(local_20[0] >> 0x10);
      local_18 = local_18 + 1;
    }
    *local_18 = (byte)(local_20[0] >> 8);
    local_18 = local_18 + 1;
  }
  *local_18 = (byte)local_20[0];
  local_18 = local_18 + 1;
LAB_143af2c0f:
  return (longlong)local_18 - (longlong)param_3;
}



// FUNCTION 143af2c30 FUN_143af2c30 body=175 status=ok
// SIG undefined FUN_143af2c30(void)

undefined8 FUN_143af2c30(undefined1 *param_1,undefined2 param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)((ushort)param_2 >> 8);
  *param_1 = 0x14;
  if ((char)param_2 == '\0') {
    param_1[1] = 0xf6;
    param_1[2] = uVar1;
  }
  else {
    param_1[1] = uVar1;
    param_1[2] = (char)param_2;
  }
  return 3;
}



// FUNCTION 143af2ce0 FUN_143af2ce0 body=1401 status=ok
// SIG undefined FUN_143af2ce0(void)

uint FUN_143af2ce0(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  byte local_24;
  byte local_23;
  uint local_20;
  longlong local_18;
  undefined8 *local_10;
  
  local_20 = 0;
  if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x18)) {
    local_24 = **(byte **)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    if (((((local_24 < 0x20) || (0x7f < local_24)) && (local_24 != 0)) &&
        ((local_24 != 9 && (local_24 != 0xd)))) && ((local_24 != 10 && (local_24 != 0x19)))) {
      if (local_24 == 0xf) {
        if (*(ulonglong *)(param_1 + 0x18) < *(longlong *)(param_1 + 0x10) + 1U) {
          *param_2 = 0xb;
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
          local_20 = 0xffff;
        }
        else {
          bVar1 = **(byte **)(param_1 + 0x10);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          if (bVar1 < 0x80) {
            local_20 = bVar1 - 0x20;
          }
          else {
            local_20 = (uint)bVar1;
          }
        }
      }
      else if (local_24 == 0x14) {
        if (*(ulonglong *)(param_1 + 0x18) < *(longlong *)(param_1 + 0x10) + 2U) {
          *param_2 = 0xb;
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
          local_20 = 0xffff;
        }
        else {
          uVar3 = FUN_143af29f0(param_1 + 0x10);
          local_20 = (uint)uVar3;
        }
      }
      else if (local_24 < 0x21) {
        local_10 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10);
        if ((local_24 < 0x14) &&
           (local_18 = *(longlong *)((longlong)local_10 + (ulonglong)local_24 * 8), local_18 != 0))
        {
          if (local_24 < 0x10) {
            if (*(ulonglong *)(param_1 + 0x18) < *(longlong *)(param_1 + 0x10) + 1U) {
              *param_2 = 0xb;
              *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
              local_20 = 0xffff;
            }
            else {
              local_23 = **(byte **)(param_1 + 0x10);
              *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
              if (local_23 < 0x80) {
                local_10 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10);
                local_18 = *local_10;
                local_20 = FUN_143adf760(local_18,&local_24,2,0);
              }
              else {
                local_20 = (uint)*(ushort *)
                                  (*(longlong *)(local_18 + 0x40) + (ulonglong)local_23 * 4);
              }
            }
          }
          else if (*(ulonglong *)(param_1 + 0x18) < *(longlong *)(param_1 + 0x10) + 2U) {
            *param_2 = 0xb;
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
            local_20 = 0xffff;
          }
          else if ((int)**(char **)(param_1 + 0x10) == (uint)local_24) {
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
            local_20 = FUN_143adf760(local_18,*(undefined8 *)(param_1 + 0x10),1,0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          }
          else {
            local_20 = FUN_143adf760(local_18,*(undefined8 *)(param_1 + 0x10),2,0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 2;
          }
        }
        else {
          *param_2 = 10;
        }
      }
      else if (0x7f < local_24) {
        local_10 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10);
        local_18 = *(longlong *)
                    ((longlong)local_10 + (ulonglong)*(byte *)((longlong)local_10 + 0xa0) * 8);
        if (*(byte *)((longlong)local_10 + 0xa0) < 0x10) {
          local_20 = (uint)*(ushort *)(*(longlong *)(local_18 + 0x40) + (ulonglong)local_24 * 4);
        }
        else {
          cVar2 = FUN_143adf720(local_18,local_24);
          if (cVar2 == '\0') {
            if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10)) {
              *param_2 = 0xb;
              *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
              local_20 = 0xffff;
            }
            else {
              local_20 = FUN_143adf760(local_18,*(longlong *)(param_1 + 0x10) + -1,1,0);
            }
          }
          else if (*(ulonglong *)(param_1 + 0x18) < *(longlong *)(param_1 + 0x10) + 1U) {
            *param_2 = 0xb;
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
            local_20 = 0xffff;
          }
          else {
            local_20 = FUN_143adf760(local_18,*(longlong *)(param_1 + 0x10) + -1,2,0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          }
        }
      }
    }
    else {
      local_20 = (uint)local_24;
    }
  }
  else {
    *param_2 = 1;
    local_20 = 0xffff;
  }
  return local_20;
}



// FUNCTION 143af3260 FUN_143af3260 body=406 status=ok
// SIG undefined FUN_143af3260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143af3260(longlong param_1,longlong param_2,int *param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_158 [32];
  byte local_138;
  void *local_130;
  void *local_128;
  undefined4 local_120;
  undefined1 local_11c [4];
  undefined1 local_118;
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_130 = (void *)FUN_143aa7a40(0xa8);
  *(void **)(param_1 + 0x10) = local_130;
  if (local_130 == (void *)0x0) {
    *param_3 = 7;
  }
  else {
    local_120 = 0x28;
    puVar4 = local_11c;
    for (lVar3 = 0x24; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_128 = local_130;
    _guard_xfg_dispatch_icall_nop(local_130,0,0xa8);
    local_118 = *(undefined1 *)(param_2 + 8);
    local_138 = 0;
    while ((local_138 < 0x14 && (*param_3 < 1))) {
      if ((&PTR_s_lmb_excp_145cfeee0)[local_138] != (undefined *)0x0) {
        uVar2 = FUN_143abd4c0((&PTR_s_lmb_excp_145cfeee0)[local_138],local_f8,&local_120,param_3);
        *(undefined8 *)((longlong)local_130 + (ulonglong)local_138 * 8) = uVar2;
      }
      local_138 = local_138 + 1;
    }
    if ((*param_3 < 1) && (*(char *)(param_2 + 8) == '\0')) {
      *(undefined1 *)((longlong)local_130 + 0xa0) = param_4;
      uVar1 = FUN_143af28d0(*(undefined8 *)(param_2 + 0x20));
      *(undefined1 *)((longlong)local_130 + 0xa1) = uVar1;
    }
    else {
      FUN_143af1800(param_1);
    }
  }
  return;
}



// FUNCTION 143af3400 FUN_143af3400 body=217 status=ok
// SIG undefined FUN_143af3400(void)

void FUN_143af3400(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 8) == '\0') {
    uVar1 = FUN_143ab0f00(&DAT_145d00570,param_3);
    if (*param_3 < 1) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      uVar2 = FUN_143aa7990(1,0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        FUN_143ab09a0(uVar1);
        *param_3 = 7;
      }
      else {
        **(undefined8 **)(param_1 + 0x10) = uVar1;
      }
    }
  }
  else {
    FUN_143abce40(&DAT_145d00570,param_3);
  }
  return;
}



// FUNCTION 143af34e0 FUN_143af34e0 body=83 status=ok
// SIG undefined FUN_143af34e0(void)

void FUN_143af34e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_143ab09a0(**(undefined8 **)(param_1 + 0x10));
    if (*(char *)(param_1 + 0x3e) == '\0') {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143af3600 FUN_143af3600 body=1815 status=ok
// SIG undefined FUN_143af3600(void)

/* WARNING: Removing unreachable block (ram,0x000143af36a6) */
/* WARNING: Removing unreachable block (ram,0x000143af3684) */

void FUN_143af3600(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  uint local_78;
  char local_74;
  char local_73;
  uint local_70;
  byte *local_68;
  longlong *local_60;
  ushort *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_20;
  byte *local_18;
  
  local_58 = *(ushort **)(param_1 + 0x20);
  local_18 = *(byte **)(param_1 + 0x18);
  local_60 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
  local_20 = 0;
  local_28 = 1;
  pbVar5 = *(byte **)(param_1 + 0x10);
LAB_143af36b5:
  do {
    local_68 = pbVar5;
    if (local_18 <= local_68) {
LAB_143af3cf9:
      *(ushort **)(param_1 + 0x20) = local_58;
      *(byte **)(param_1 + 0x10) = local_68;
      return;
    }
    if (*(ushort **)(param_1 + 0x28) <= local_58) {
      *param_2 = 0xf;
      goto LAB_143af3cf9;
    }
    bVar1 = *local_68;
    uVar4 = (uint)bVar1;
    pbVar5 = local_68 + 1;
    local_78._0_2_ = (ushort)bVar1;
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x4c) != 0x7e) {
      if (*(char *)((longlong)local_60 + 0x11) == '\0') {
        if (uVar4 != 0x7e) {
          local_78 = uVar4;
          if (uVar4 < 0x80) {
            *(undefined1 *)((longlong)local_60 + 0x13) = 0;
            local_70 = uVar4;
            local_68 = pbVar5;
          }
          else {
            local_70 = 0xffff;
            *(undefined1 *)((longlong)local_60 + 0x13) = 0;
            local_68 = pbVar5;
          }
          goto LAB_143af3ba7;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x4c) = 0x7e;
      }
      else if (*(int *)(*(longlong *)(param_1 + 8) + 0x48) == 0) {
        if (uVar4 == 0x7e) {
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x4c) = 0x7e;
        }
        else {
          *(uint *)(*(longlong *)(param_1 + 8) + 0x48) = uVar4 | 0x100;
          *(undefined1 *)((longlong)local_60 + 0x13) = 0;
        }
      }
      else {
        uVar2 = *(uint *)(*(longlong *)(param_1 + 8) + 0x48);
        local_78 = uVar2 & 0xff;
        local_70 = 0xffff;
        local_48 = (uint)((local_78 - 0x21 & 0xff) < 0x5d);
        local_2c = local_48;
        local_3c = (uint)((uVar4 - 0x21 & 0xff) < 0x5e);
        local_30 = local_3c;
        if ((local_48 == 0) || (local_3c == 0)) {
          if (local_3c == 0) {
            local_78 = local_78 << 8 | 0x10000 | uVar4;
            local_68 = pbVar5;
          }
        }
        else {
          local_74 = (char)uVar2 + -0x80;
          local_73 = bVar1 + 0x80;
          local_68 = pbVar5;
          local_50 = local_78;
          local_70 = FUN_143adf760(*(undefined8 *)(*local_60 + 0x30),&local_74,2,
                                   *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3f));
          local_78 = local_50 << 8 | uVar4;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48) = 0;
LAB_143af3ba7:
        if (0xfffd < (int)local_70) {
          if (local_70 == 0xfffe) {
            *param_2 = 10;
          }
          else {
            *param_2 = 0xc;
          }
          if ((int)local_78 < 0x100) {
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x41) = (undefined1)local_78;
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
          }
          else {
            *(char *)(*(longlong *)(param_1 + 8) + 0x41) = (char)(local_78 >> 8);
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x42) = (undefined1)local_78;
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 2;
          }
          goto LAB_143af3cf9;
        }
        if (*(longlong *)(param_1 + 0x30) != 0) {
          *(int *)(*(longlong *)(param_1 + 0x30) +
                  ((longlong)local_58 - *(longlong *)(param_1 + 0x20) >> 1) * 4) =
               (((int)local_68 - (int)*(undefined8 *)(param_1 + 0x10)) + -1) -
               (int)*(char *)((longlong)local_60 + 0x11);
        }
        *local_58 = (ushort)local_70;
        local_58 = local_58 + 1;
        pbVar5 = local_68;
      }
      goto LAB_143af36b5;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x4c) = 0;
    local_4c = uVar4;
    if (uVar4 != 10) {
      if ((uVar4 == 0x7b) || (uVar4 == 0x7d)) {
        local_34 = (uint)(uVar4 == 0x7b);
        *(bool *)((longlong)local_60 + 0x11) = uVar4 == 0x7b;
        if (*(char *)((longlong)local_60 + 0x13) != '\0') {
          *(undefined1 *)((longlong)local_60 + 0x13) = 0;
          *param_2 = 0x12;
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x11c) = 2;
          *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x41) = 0x7e;
          *(byte *)(*(longlong *)(param_1 + 8) + 0x42) = bVar1;
          *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 2;
          *(ushort **)(param_1 + 0x20) = local_58;
          *(byte **)(param_1 + 0x10) = pbVar5;
          return;
        }
        *(undefined1 *)((longlong)local_60 + 0x13) = 1;
      }
      else {
        if (uVar4 != 0x7e) {
          *(undefined1 *)((longlong)local_60 + 0x13) = 0;
          *param_2 = 0x12;
          *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x41) = 0x7e;
          if (*(char *)((longlong)local_60 + 0x11) == '\0') {
            bVar3 = uVar4 < 0x80;
          }
          else if ((uVar4 < 0x21) || (0x7e < uVar4)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
          }
          else {
            *(byte *)(*(longlong *)(param_1 + 8) + 0x42) = bVar1;
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 2;
            local_68 = pbVar5;
          }
          *(ushort **)(param_1 + 0x20) = local_58;
          *(byte **)(param_1 + 0x10) = local_68;
          return;
        }
        if (*(longlong *)(param_1 + 0x30) != 0) {
          *(int *)(*(longlong *)(param_1 + 0x30) +
                  ((longlong)local_58 - *(longlong *)(param_1 + 0x20) >> 1) * 4) =
               ((int)pbVar5 - (int)*(undefined8 *)(param_1 + 0x10)) + -2;
        }
        *local_58 = (ushort)local_78;
        local_58 = local_58 + 1;
        *(undefined1 *)((longlong)local_60 + 0x13) = 0;
      }
    }
  } while( true );
}



// FUNCTION 143af3d30 FUN_143af3d30 body=2332 status=ok
// SIG undefined FUN_143af3d30(void)

void FUN_143af3d30(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  char local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  char local_64;
  undefined1 local_63;
  int *local_60;
  uint local_58;
  int local_54;
  undefined1 *local_50;
  int local_44;
  longlong *local_40;
  int local_38;
  longlong local_30;
  int local_28;
  int local_24;
  int local_20;
  longlong local_18;
  
  local_18 = *(longlong *)(param_1 + 0x10);
  local_30 = *(longlong *)(param_1 + 0x20);
  local_60 = *(int **)(param_1 + 0x30);
  local_6c = 0;
  local_74 = 0;
  local_54 = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_30;
  local_38 = (int)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 1);
  local_44 = 0;
  local_58 = 0;
  local_40 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
  local_78 = *(char *)((longlong)local_40 + 0x12);
  local_68 = 0;
  local_50 = (undefined1 *)0x0;
  iVar4 = local_6c;
  if ((*(int *)(*(longlong *)(param_1 + 8) + 0x54) == 0) || (local_54 < 1)) {
    while (local_6c = iVar4, local_6c < local_38) {
      local_70 = 0xffff;
      if (local_54 <= local_74) {
        *param_2 = 0xf;
        break;
      }
      local_58 = (uint)*(ushort *)(local_18 + (longlong)local_6c * 2);
      iVar4 = local_6c + 1;
      local_64 = local_78;
      if (local_58 == 0x7e) {
        local_68 = 2;
        local_50 = &DAT_145d00574;
        while( true ) {
          local_24 = local_68;
          iVar5 = local_68 + -1;
          bVar2 = local_68 < 1;
          local_68 = iVar5;
          if (bVar2) break;
          if (local_74 < local_54) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_74) = *local_50;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              *local_60 = local_6c;
              local_60 = local_60 + 1;
            }
            local_74 = local_74 + 1;
          }
          else {
            *(undefined1 *)
             (*(longlong *)(param_1 + 8) + 0x68 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = *local_50;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
          local_50 = local_50 + 1;
        }
      }
      else {
        local_6c = iVar4;
        if (local_58 < 0x80) {
          local_44 = 1;
          local_70 = local_58;
        }
        else {
          local_44 = FUN_143adeb70(*(undefined8 *)(*local_40 + 0x30),local_58,&local_70,
                                   *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3f));
          if (((local_44 == 2) && ((local_70 - 0xa1a1 & 0xffff) < 0x5c5e)) &&
             ((local_70 - 0xa1 & 0xff) < 0x5e)) {
            local_70 = local_70 - 0x8080;
          }
          else {
            local_70 = 0xffff;
          }
        }
        if (local_70 == 0xffff) {
          if ((local_58 & 0xfffff800) != 0xd800) {
            *param_2 = 10;
            goto LAB_143af45ca;
          }
          if ((local_58 & 0x400) == 0) {
            *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_58;
            goto LAB_143af4504;
          }
          *param_2 = 0xc;
          goto LAB_143af45ca;
        }
        local_78 = 0xff < local_70;
        *(char *)((longlong)local_40 + 0x12) = local_78;
        if ((local_64 != local_78) || ((char)local_40[2] == '\0')) {
          if ((bool)local_78) {
            local_68 = 2;
            local_50 = &DAT_145d0057c;
            while( true ) {
              local_28 = local_68;
              if (local_68 < 1) break;
              if (local_74 < local_54) {
                *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_74) = *local_50;
                if (*(longlong *)(param_1 + 0x30) != 0) {
                  *local_60 = local_6c + -1;
                  local_60 = local_60 + 1;
                }
                local_74 = local_74 + 1;
              }
              else {
                *(undefined1 *)
                 (*(longlong *)(param_1 + 8) + 0x68 +
                 (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = *local_50;
                *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                     *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                *param_2 = 0xf;
              }
              local_50 = local_50 + 1;
              local_68 = local_68 + -1;
            }
            *(undefined1 *)(local_40 + 2) = 1;
            local_68 = local_68 + -1;
          }
          else {
            local_68 = 2;
            local_50 = &DAT_145d00578;
            while( true ) {
              local_20 = local_68;
              if (local_68 < 1) break;
              if (local_74 < local_54) {
                *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_74) = *local_50;
                if (*(longlong *)(param_1 + 0x30) != 0) {
                  *local_60 = local_6c + -1;
                  local_60 = local_60 + 1;
                }
                local_74 = local_74 + 1;
              }
              else {
                *(undefined1 *)
                 (*(longlong *)(param_1 + 8) + 0x68 +
                 (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = *local_50;
                *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                     *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                *param_2 = 0xf;
              }
              local_50 = local_50 + 1;
              local_68 = local_68 + -1;
            }
            *(undefined1 *)(local_40 + 2) = 1;
            local_68 = local_68 + -1;
          }
        }
        iVar4 = local_6c;
        local_63 = local_78;
        if ((bool)local_78) {
          uVar3 = (undefined1)(local_70 >> 8);
          if (local_74 < local_54) {
            *(undefined1 *)(local_30 + local_74) = uVar3;
            iVar5 = local_74 + 1;
            if (local_60 != (int *)0x0) {
              *local_60 = local_6c + -1;
              local_60 = local_60 + 1;
            }
            if (iVar5 < local_54) {
              *(undefined1 *)(local_30 + iVar5) = (undefined1)local_70;
              local_74 = local_74 + 2;
              if (local_60 != (int *)0x0) {
                *local_60 = local_6c + -1;
                local_60 = local_60 + 1;
              }
            }
            else {
              *(undefined1 *)
               (*(longlong *)(param_1 + 8) + 0x68 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_70;
              *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
              *param_2 = 0xf;
              local_74 = iVar5;
            }
          }
          else {
            *(undefined1 *)
             (*(longlong *)(param_1 + 8) + 0x68 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = uVar3;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *(undefined1 *)
             (*(longlong *)(param_1 + 8) + 0x68 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_70;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
        }
        else if (local_74 < local_54) {
          *(undefined1 *)(local_30 + local_74) = (undefined1)local_70;
          local_74 = local_74 + 1;
          if (local_60 != (int *)0x0) {
            *local_60 = local_6c + -1;
            local_60 = local_60 + 1;
          }
        }
        else {
          *(undefined1 *)
           (*(longlong *)(param_1 + 8) + 0x68 +
           (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_70;
          *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
               *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
          *param_2 = 0xf;
        }
      }
    }
  }
  else {
LAB_143af4504:
    if (local_6c < local_38) {
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)local_6c * 2);
      if ((uVar1 & 0xfc00) == 0xdc00) {
        local_6c = local_6c + 1;
        local_58 = *(int *)(*(longlong *)(param_1 + 8) + 0x54) * 0x400 + -0x35fdc00 + (uint)uVar1;
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x54) = 0;
        *param_2 = 10;
      }
      else {
        *param_2 = 0xc;
      }
    }
    else {
      *param_2 = 0;
    }
LAB_143af45ca:
    *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_58;
  }
  *(longlong *)(param_1 + 0x20) = (longlong)local_74 + *(longlong *)(param_1 + 0x20);
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)local_6c * 2;
  *(char *)((longlong)local_40 + 0x12) = local_78;
  return;
}



// FUNCTION 143af4660 FUN_143af4660 body=216 status=ok
// SIG undefined FUN_143af4660(void)

void FUN_143af4660(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26 [6];
  undefined1 *local_20;
  longlong local_18;
  longlong local_10;
  
  local_10 = *(longlong *)(param_1 + 8);
  local_18 = *(longlong *)(local_10 + 0x10);
  local_20 = &local_28;
  if (*(char *)(local_18 + 0x12) != '\0') {
    local_28 = 0x7e;
    local_27 = 0x7d;
    local_20 = local_26;
    *(undefined1 *)(local_18 + 0x12) = 0;
  }
  *local_20 = **(undefined1 **)(local_10 + 0x28);
  local_20 = local_20 + 1;
  FUN_143b0cac0(param_1,&local_28,(longlong)local_20 - (longlong)&local_28 & 0xffffffff,param_2,
                param_3);
  return;
}



// FUNCTION 143af4740 FUN_143af4740 body=221 status=ok
// SIG undefined FUN_143af4740(void)

longlong FUN_143af4740(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  undefined8 uVar1;
  undefined4 local_14;
  longlong local_10;
  
  if (*param_4 < 1) {
    if (*param_3 == 0) {
      *param_3 = 0x260;
      local_10 = 0;
    }
    else {
      local_10 = param_2;
      _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x248),*(void **)(param_1 + 0x10),0x18);
      *(longlong *)(local_10 + 0x10) = local_10 + 0x248;
      *(undefined1 *)(local_10 + 0x3e) = 1;
      local_14 = 0x128;
      uVar1 = FUN_143ab1280(**(undefined8 **)(param_1 + 0x10),local_10 + 0x120,&local_14,param_4);
      **(undefined8 **)(local_10 + 0x10) = uVar1;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



// FUNCTION 143af4820 FUN_143af4820 body=100 status=ok
// SIG undefined FUN_143af4820(void)

void FUN_143af4820(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  (*(code *)param_2[2])(*param_2,0,0x7f);
  FUN_143adeeb0(*(undefined8 *)(**(longlong **)(param_1 + 0x10) + 0x30),param_2,param_3,5,param_4);
  return;
}



// FUNCTION 143af4890 FUN_143af4890 body=474 status=ok
// SIG undefined FUN_143af4890(void)

void FUN_143af4890(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  size_t sVar3;
  short local_18;
  
  if (*(char *)(param_2 + 8) == '\0') {
    uVar2 = FUN_143aa7a40(0x30);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      *param_3 = 7;
    }
    else {
      puVar1 = *(undefined2 **)(param_1 + 0x10);
      *puVar1 = 0xfffe;
      *(undefined4 *)(param_1 + 0x48) = 0xffff;
      puVar1[1] = 0;
      *(undefined1 *)((longlong)puVar1 + 0x19) = 0;
      if ((*(uint *)(param_2 + 0xc) & 0xf) < 9) {
        local_18 = (short)*(undefined4 *)
                           (&DAT_145d00580 + (ulonglong)(*(uint *)(param_2 + 0xc) & 0xf) * 0xc) *
                   0x80;
        puVar1[2] = local_18;
        puVar1[4] = local_18;
        puVar1[3] = local_18;
        *(undefined4 *)(puVar1 + 10) =
             *(undefined4 *)(&DAT_145d00584 + (ulonglong)(*(uint *)(param_2 + 0xc) & 0xf) * 0xc);
        *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(puVar1 + 10);
        *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar1 + 8);
        *(undefined1 *)(puVar1 + 0xc) = 1;
        _guard_xfg_dispatch_icall_nop((char *)(puVar1 + 0xd),"ISCII,version=");
        sVar3 = _guard_xfg_dispatch_icall_nop((char *)(puVar1 + 0xd));
        *(byte *)((longlong)puVar1 + (longlong)(int)sVar3 + 0x1a) =
             ((byte)*(undefined4 *)(param_2 + 0xc) & 0xf) + 0x30;
        *(undefined1 *)((longlong)puVar1 + (longlong)((int)sVar3 + 1) + 0x1a) = 0;
        *(undefined4 *)(puVar1 + 0x16) = 0;
      }
      else {
        FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = 0;
        *param_3 = 1;
      }
    }
  }
  return;
}



// FUNCTION 143af4a70 FUN_143af4a70 body=66 status=ok
// SIG undefined FUN_143af4a70(void)

void FUN_143af4a70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x3e) == '\0') {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143af4ac0 FUN_143af4ac0 body=51 status=ok
// SIG undefined FUN_143af4ac0(void)

longlong FUN_143af4ac0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x10) + 0x1a;
  }
  return lVar1;
}



// FUNCTION 143af4b00 FUN_143af4b00 body=190 status=ok
// SIG undefined FUN_143af4b00(void)

void FUN_143af4b00(longlong param_1,int param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)(param_1 + 0x10);
  if (param_2 < 2) {
    *(undefined4 *)(param_1 + 0x48) = 0xffff;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    puVar1[4] = puVar1[2];
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(puVar1 + 10);
    *puVar1 = 0xfffe;
    *(undefined4 *)(puVar1 + 0x16) = 0;
  }
  if (param_2 != 1) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar1 + 10);
    puVar1[3] = puVar1[2];
    *(undefined1 *)(puVar1 + 0xc) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x19) = 0;
  }
  return;
}



// FUNCTION 143af4bc0 FUN_143af4bc0 body=5902 status=ok
// SIG undefined FUN_143af4bc0(void)

/* WARNING: Removing unreachable block (ram,0x000143af5390) */
/* WARNING: Removing unreachable block (ram,0x000143af4fcf) */
/* WARNING: Removing unreachable block (ram,0x000143af5927) */
/* WARNING: Removing unreachable block (ram,0x000143af60ba) */

void FUN_143af4bc0(longlong param_1,int *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint local_78;
  int *local_70;
  uint local_68;
  undefined1 *local_60;
  undefined1 local_58;
  ushort local_50;
  ushort *local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_38 = *(ushort **)(param_1 + 0x10);
  puVar4 = *(ushort **)(param_1 + 0x18);
  local_60 = *(undefined1 **)(param_1 + 0x20);
  puVar5 = *(undefined1 **)(param_1 + 0x28);
  local_70 = *(int **)(param_1 + 0x30);
  bVar7 = false;
  if (((*(longlong *)(param_1 + 8) == 0) ||
      (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x20))) ||
     (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10))) {
    *param_2 = 1;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    local_50 = 0;
    local_68 = *(uint *)(*(longlong *)(param_1 + 8) + 0x54);
    if (local_68 == 0) {
LAB_143af4d02:
      do {
        while( true ) {
          if (puVar4 <= local_38) goto LAB_143af62a4;
          if (*(int *)(*(longlong *)(param_1 + 8) + 0x50) == 10) {
            uVar11 = (byte)(&DAT_145d00588)[(ulonglong)local_50 * 0xc] + 0xef00;
            *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
            iVar3 = (int)((longlong)local_38 - *(longlong *)(param_1 + 0x10) >> 1);
            local_28 = iVar3 + -1;
            local_78._0_1_ = (undefined1)uVar11;
            uVar8 = (undefined1)(uVar11 >> 8);
            if (local_60 < puVar5) {
              if (uVar11 < 0x100) {
                *local_60 = (undefined1)local_78;
                local_60 = local_60 + 1;
                if (local_70 != (int *)0x0) {
                  *local_70 = local_28;
                  local_70 = local_70 + 1;
                }
              }
              else {
                if (0xffff < uVar11) {
                  *local_60 = 0;
                  local_60 = local_60 + 1;
                  if (local_70 != (int *)0x0) {
                    local_28 = iVar3 + -2;
                    *local_70 = local_28;
                    local_70 = local_70 + 1;
                  }
                }
                if (local_60 < puVar5) {
                  *local_60 = uVar8;
                  puVar10 = local_60 + 1;
                  if (local_70 != (int *)0x0) {
                    *local_70 = local_28;
                    local_70 = local_70 + 1;
                  }
                  if (puVar10 < puVar5) {
                    *puVar10 = (undefined1)local_78;
                    local_60 = local_60 + 2;
                    if (local_70 != (int *)0x0) {
                      *local_70 = local_28;
                      local_70 = local_70 + 1;
                    }
                  }
                  else {
                    *(undefined1 *)
                     (*(longlong *)(param_1 + 8) + 0x68 +
                     (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_78;
                    *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                         *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                    *param_2 = 0xf;
                    local_60 = puVar10;
                  }
                }
                else {
                  *(undefined1 *)
                   (*(longlong *)(param_1 + 8) + 0x68 +
                   (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = uVar8;
                  *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                       *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                  *(undefined1 *)
                   (*(longlong *)(param_1 + 8) + 0x68 +
                   (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_78;
                  *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                       *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                  *param_2 = 0xf;
                }
              }
            }
            else {
              if ((uVar11 & 0xff00) != 0) {
                *(undefined1 *)
                 (*(longlong *)(param_1 + 8) + 0x68 +
                 (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = uVar8;
                *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                     *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
              }
              *(undefined1 *)
               (*(longlong *)(param_1 + 8) + 0x68 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_78;
              *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
              *param_2 = 0xf;
            }
            if (0 < *param_2) goto LAB_143af62a4;
          }
          uVar2 = *local_38;
          uVar11 = (uint)uVar2;
          local_38 = local_38 + 1;
          sVar1 = *(short *)(lVar6 + 2);
          local_78 = 0xffff;
          if (0xa0 < uVar11) break;
          *(uint *)(*(longlong *)(param_1 + 8) + 0x50) = uVar11;
          iVar3 = (int)((longlong)local_38 - *(longlong *)(param_1 + 0x10) >> 1);
          local_2c = iVar3 + -1;
          local_68._0_1_ = (byte)uVar2;
          uVar8 = (undefined1)(uVar2 >> 8);
          if (local_60 < puVar5) {
            if (uVar11 < 0x100) {
              *local_60 = (byte)local_68;
              local_60 = local_60 + 1;
              if (local_70 != (int *)0x0) {
                *local_70 = local_2c;
                local_70 = local_70 + 1;
              }
            }
            else {
              if (0xffff < uVar11) {
                *local_60 = 0;
                local_60 = local_60 + 1;
                if (local_70 != (int *)0x0) {
                  local_2c = iVar3 + -2;
                  *local_70 = local_2c;
                  local_70 = local_70 + 1;
                }
              }
              if (local_60 < puVar5) {
                *local_60 = uVar8;
                puVar10 = local_60 + 1;
                if (local_70 != (int *)0x0) {
                  *local_70 = local_2c;
                  local_70 = local_70 + 1;
                }
                if (puVar10 < puVar5) {
                  *puVar10 = (byte)local_68;
                  local_60 = local_60 + 2;
                  if (local_70 != (int *)0x0) {
                    *local_70 = local_2c;
                    local_70 = local_70 + 1;
                  }
                }
                else {
                  *(byte *)(*(longlong *)(param_1 + 8) + 0x68 +
                           (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (byte)local_68;
                  *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                       *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                  *param_2 = 0xf;
                  local_60 = puVar10;
                }
              }
              else {
                *(undefined1 *)
                 (*(longlong *)(param_1 + 8) + 0x68 +
                 (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = uVar8;
                *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                     *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                *(byte *)(*(longlong *)(param_1 + 8) + 0x68 +
                         (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (byte)local_68;
                *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                     *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                *param_2 = 0xf;
              }
            }
          }
          else {
            if ((uVar2 & 0xff00) != 0) {
              *(undefined1 *)
               (*(longlong *)(param_1 + 8) + 0x68 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = uVar8;
              *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            }
            *(byte *)(*(longlong *)(param_1 + 8) + 0x68 +
                     (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (byte)local_68;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
          iVar3 = *param_2;
joined_r0x000143af5e20:
          if (0 < iVar3) goto LAB_143af62a4;
        }
        local_68 = uVar11;
        if (uVar11 == 0x200c) {
          if (*(short *)(lVar6 + 2) == 0) {
            *(undefined2 *)(lVar6 + 2) = 0;
            goto LAB_143af4d02;
          }
          *(undefined2 *)(lVar6 + 2) = 0;
          local_78 = 0xe8;
        }
        else if (uVar11 == 0x200d) {
          if (*(short *)(lVar6 + 2) == 0) {
            local_78 = 0xd9;
          }
          else {
            local_78 = 0xe9;
          }
          *(undefined2 *)(lVar6 + 2) = 0;
        }
        else {
          if ((0xd7f - uVar11 & 0xffff) < 0x480) {
            if ((uVar11 != 0x964) && (uVar11 != 0x965)) {
              local_50 = (ushort)((int)((uVar11 - 0x900) + ((int)(uVar11 - 0x900) >> 0x1f & 0x7fU))
                                 >> 7);
              if (((ushort)(local_50 * 0x80) != *(short *)(lVar6 + 6)) ||
                 (*(char *)(lVar6 + 0x18) != '\0')) {
                *(ushort *)(lVar6 + 6) = local_50 * 0x80;
                *(undefined4 *)(lVar6 + 0xc) =
                     *(undefined4 *)(&DAT_145d00584 + (ulonglong)local_50 * 0xc);
                bVar7 = true;
                *(undefined1 *)(lVar6 + 0x18) = 0;
              }
              if (*(short *)(lVar6 + 6) == 0x100) {
                if (uVar11 == 0xa70) {
                  local_68 = 0xa02;
                }
                else if (uVar11 == 0xa71) {
                  *(undefined2 *)(lVar6 + 2) = 0xa71;
                }
              }
              local_68 = local_68 - *(ushort *)(lVar6 + 6);
            }
            local_78 = (uint)*(ushort *)(&DAT_145d006c0 + (ulonglong)(byte)local_68 * 2);
            if ((((uint)(byte)(&DAT_145d00640)[(byte)local_68] & *(uint *)(lVar6 + 0xc)) == 0) &&
               ((*(short *)(lVar6 + 6) != 0x300 || (local_68 != 0x931)))) {
              local_78 = 0xffff;
            }
            if (bVar7) {
              uVar11 = (byte)(&DAT_145d00588)[(ulonglong)local_50 * 0xc] + 0xef00;
              bVar7 = false;
              iVar3 = (int)((longlong)local_38 - *(longlong *)(param_1 + 0x10) >> 1);
              local_30 = iVar3 + -1;
              local_58 = (undefined1)uVar11;
              uVar8 = (undefined1)(uVar11 >> 8);
              if (local_60 < puVar5) {
                if (uVar11 < 0x100) {
                  *local_60 = local_58;
                  local_60 = local_60 + 1;
                  if (local_70 != (int *)0x0) {
                    *local_70 = local_30;
                    local_70 = local_70 + 1;
                  }
                }
                else {
                  if (0xffff < uVar11) {
                    *local_60 = 0;
                    local_60 = local_60 + 1;
                    if (local_70 != (int *)0x0) {
                      local_30 = iVar3 + -2;
                      *local_70 = local_30;
                      local_70 = local_70 + 1;
                    }
                  }
                  if (local_60 < puVar5) {
                    *local_60 = uVar8;
                    puVar10 = local_60 + 1;
                    if (local_70 != (int *)0x0) {
                      *local_70 = local_30;
                      local_70 = local_70 + 1;
                    }
                    if (puVar10 < puVar5) {
                      *puVar10 = local_58;
                      local_60 = local_60 + 2;
                      if (local_70 != (int *)0x0) {
                        *local_70 = local_30;
                        local_70 = local_70 + 1;
                      }
                    }
                    else {
                      *(undefined1 *)
                       (*(longlong *)(param_1 + 8) + 0x68 +
                       (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = local_58;
                      *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                           *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                      *param_2 = 0xf;
                      local_60 = puVar10;
                    }
                  }
                  else {
                    *(undefined1 *)
                     (*(longlong *)(param_1 + 8) + 0x68 +
                     (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = uVar8;
                    *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                         *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                    *(undefined1 *)
                     (*(longlong *)(param_1 + 8) + 0x68 +
                     (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = local_58;
                    *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                         *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                    *param_2 = 0xf;
                  }
                }
              }
              else {
                if ((uVar11 & 0xff00) != 0) {
                  *(undefined1 *)
                   (*(longlong *)(param_1 + 8) + 0x68 +
                   (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = uVar8;
                  *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                       *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                }
                *(undefined1 *)
                 (*(longlong *)(param_1 + 8) + 0x68 +
                 (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = local_58;
                *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                     *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                *param_2 = 0xf;
              }
              if (0 < *param_2) goto LAB_143af5a5a;
            }
            if ((*(short *)(lVar6 + 6) == 0x100) && (local_68 == 0x971)) goto LAB_143af4d02;
          }
          *(undefined2 *)(lVar6 + 2) = 0;
        }
LAB_143af5a5a:
        if (((*(short *)(lVar6 + 6) == 0x100) && (sVar1 == 0xa71)) &&
           (cVar9 = FUN_143af8890(local_68 + 0x100), cVar9 != '\0')) {
          *(undefined2 *)(lVar6 + 2) = 0;
          uVar11 = local_78 << 0x10 | 0xe800 | local_78;
          iVar3 = (int)((longlong)local_38 - *(longlong *)(param_1 + 0x10) >> 1);
          local_20 = iVar3 + -1;
          uVar8 = (undefined1)(uVar11 >> 8);
          if (local_60 < puVar5) {
            if (uVar11 < 0x100) {
              *local_60 = (undefined1)local_78;
              local_60 = local_60 + 1;
              if (local_70 != (int *)0x0) {
                *local_70 = local_20;
                local_70 = local_70 + 1;
              }
            }
            else {
              if (0xffff < uVar11) {
                *local_60 = (undefined1)local_78;
                local_60 = local_60 + 1;
                if (local_70 != (int *)0x0) {
                  local_20 = iVar3 + -2;
                  *local_70 = local_20;
                  local_70 = local_70 + 1;
                }
              }
              if (local_60 < puVar5) {
                *local_60 = uVar8;
                puVar10 = local_60 + 1;
                if (local_70 != (int *)0x0) {
                  *local_70 = local_20;
                  local_70 = local_70 + 1;
                }
                if (puVar10 < puVar5) {
                  *puVar10 = (undefined1)local_78;
                  local_60 = local_60 + 2;
                  if (local_70 != (int *)0x0) {
                    *local_70 = local_20;
                    local_70 = local_70 + 1;
                  }
                }
                else {
                  *(undefined1 *)
                   (*(longlong *)(param_1 + 8) + 0x68 +
                   (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_78;
                  *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                       *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                  *param_2 = 0xf;
                  local_60 = puVar10;
                }
              }
              else {
                *(undefined1 *)
                 (*(longlong *)(param_1 + 8) + 0x68 +
                 (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = uVar8;
                *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                     *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                *(undefined1 *)
                 (*(longlong *)(param_1 + 8) + 0x68 +
                 (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_78;
                *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                     *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                *param_2 = 0xf;
              }
            }
          }
          else {
            if ((local_78 << 0x10 & 0xff0000) != 0) {
              *(undefined1 *)
               (*(longlong *)(param_1 + 8) + 0x68 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_78;
              *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            }
            if ((uVar11 & 0xff00) != 0) {
              *(undefined1 *)
               (*(longlong *)(param_1 + 8) + 0x68 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = uVar8;
              *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            }
            *(undefined1 *)
             (*(longlong *)(param_1 + 8) + 0x68 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_78;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
          iVar3 = *param_2;
          goto joined_r0x000143af5e20;
        }
        if (local_78 == 0xffff) {
          if ((local_68 & 0xfffff800) == 0xd800) {
            if ((local_68 & 0x400) == 0) goto LAB_143af61ea;
            *param_2 = 0xc;
          }
          else {
            *param_2 = 10;
          }
          goto LAB_143af628a;
        }
        if (local_78 == 0xe8) {
          *(undefined2 *)(lVar6 + 2) = 0xe8;
        }
        iVar3 = (int)((longlong)local_38 - *(longlong *)(param_1 + 0x10) >> 1);
        local_24 = iVar3 + -1;
        uVar8 = (undefined1)(local_78 >> 8);
        if (local_60 < puVar5) {
          if (local_78 < 0x100) {
            *local_60 = (undefined1)local_78;
            local_60 = local_60 + 1;
            if (local_70 != (int *)0x0) {
              *local_70 = local_24;
              local_70 = local_70 + 1;
            }
          }
          else {
            if (0xffff < local_78) {
              *local_60 = 0;
              local_60 = local_60 + 1;
              if (local_70 != (int *)0x0) {
                local_24 = iVar3 + -2;
                *local_70 = local_24;
                local_70 = local_70 + 1;
              }
            }
            if (local_60 < puVar5) {
              *local_60 = uVar8;
              puVar10 = local_60 + 1;
              if (local_70 != (int *)0x0) {
                *local_70 = local_24;
                local_70 = local_70 + 1;
              }
              if (puVar10 < puVar5) {
                *puVar10 = (undefined1)local_78;
                local_60 = local_60 + 2;
                if (local_70 != (int *)0x0) {
                  *local_70 = local_24;
                  local_70 = local_70 + 1;
                }
              }
              else {
                *(undefined1 *)
                 (*(longlong *)(param_1 + 8) + 0x68 +
                 (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_78;
                *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                     *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
                *param_2 = 0xf;
                local_60 = puVar10;
              }
            }
            else {
              *(undefined1 *)
               (*(longlong *)(param_1 + 8) + 0x68 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = uVar8;
              *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
              *(undefined1 *)
               (*(longlong *)(param_1 + 8) + 0x68 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_78;
              *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
              *param_2 = 0xf;
            }
          }
        }
        else {
          if ((local_78 & 0xff00) != 0) {
            *(undefined1 *)
             (*(longlong *)(param_1 + 8) + 0x68 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = uVar8;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
          }
          *(undefined1 *)
           (*(longlong *)(param_1 + 8) + 0x68 +
           (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = (undefined1)local_78;
          *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
               *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
          *param_2 = 0xf;
        }
      } while (*param_2 < 1);
    }
    else {
LAB_143af61ea:
      if (local_38 < puVar4) {
        uVar2 = *local_38;
        if ((uVar2 & 0xfc00) == 0xdc00) {
          local_38 = local_38 + 1;
          local_68 = local_68 * 0x400 + -0x35fdc00 + (uint)uVar2;
          *param_2 = 10;
        }
        else {
          *param_2 = 0xc;
        }
      }
      else {
        *param_2 = 0;
      }
LAB_143af628a:
      *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = local_68;
    }
LAB_143af62a4:
    *(ushort **)(param_1 + 0x10) = local_38;
    *(undefined1 **)(param_1 + 0x20) = local_60;
  }
  return;
}



// FUNCTION 143af62d0 FUN_143af62d0 body=8826 status=ok
// SIG undefined FUN_143af62d0(void)

void FUN_143af62d0(longlong param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ushort *puVar3;
  ushort *puVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  ushort uVar10;
  uint local_74;
  ushort *local_68;
  byte *local_48;
  int local_40;
  
  local_48 = *(byte **)(param_1 + 0x10);
  local_68 = *(ushort **)(param_1 + 0x20);
  pbVar2 = *(byte **)(param_1 + 0x18);
  puVar3 = *(ushort **)(param_1 + 0x28);
  if (((*(longlong *)(param_1 + 8) == 0) || (local_68 < *(ushort **)(param_1 + 0x20))) ||
     (local_48 < *(byte **)(param_1 + 0x10))) {
    *param_2 = 1;
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_1 + 8) + 0x10);
    puVar9 = (uint *)(*(longlong *)(param_1 + 8) + 0x48);
LAB_143af63d3:
    while( true ) {
      if ((0 < *param_2) || (pbVar2 <= local_48)) goto LAB_143af8335;
      local_74 = 0xffff;
      if (puVar3 <= local_68) {
        *param_2 = 0xf;
        goto LAB_143af8335;
      }
      bVar1 = *local_48;
      local_48 = local_48 + 1;
      if (*puVar4 != 0xef) break;
      if ((byte)(0x4b - bVar1) < 10) {
        puVar4[4] = *(short *)(&DAT_145d00a10 + (longlong)(int)(bVar1 & 0xf) * 4) * 0x80;
        *(uint *)(puVar4 + 8) = (uint)*(ushort *)(&DAT_145d00a12 + (longlong)(int)(bVar1 & 0xf) * 4)
        ;
      }
      else if (bVar1 == 0x40) {
        puVar4[4] = puVar4[2];
        *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar4 + 10);
      }
      else if ((bVar1 < 0x21) || (0x3f < bVar1)) {
        *param_2 = 0xc;
        *puVar4 = 0xfffe;
        goto LAB_143af82ee;
      }
      *puVar4 = 0xfffe;
    }
    iVar8 = (int)local_48;
    if (*puVar4 == 0xf0) {
      if ((byte)(0xee - bVar1) < 0x4e) {
        if ((bVar1 == 0xbf) || (bVar1 == 0xb8)) {
          if (bVar1 == 0xbf) {
            uVar10 = 0x970;
          }
          else {
            uVar10 = 0x952;
          }
          local_74._0_1_ = (byte)uVar10;
          if (((uint)(byte)(&DAT_145d00640)[(byte)local_74] & *(uint *)(puVar4 + 8)) != 0) {
            *puVar4 = 0xfffe;
            if (*(int *)(puVar4 + 0x16) != 0) {
              if ((((0xa0 < *(int *)(puVar4 + 0x16)) && (*(int *)(puVar4 + 0x16) != 0x200d)) &&
                  (*(int *)(puVar4 + 0x16) != 0x200c)) &&
                 ((*(int *)(puVar4 + 0x16) != 0x964 && (*(int *)(puVar4 + 0x16) != 0x965)))) {
                *(undefined4 *)(puVar4 + 0x16) = *(undefined4 *)(puVar4 + 0x16);
              }
              if (local_68 < *(ushort **)(param_1 + 0x28)) {
                *local_68 = puVar4[0x16];
                local_68 = local_68 + 1;
                if (*(longlong *)(param_1 + 0x30) != 0) {
                  **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -1;
                  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
                }
              }
              else {
                *(ushort *)
                 (*(longlong *)(param_1 + 8) + 0x90 +
                 (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = puVar4[0x16];
                *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                     *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
                *param_2 = 0xf;
              }
              puVar4[0x16] = 0;
              puVar4[0x17] = 0;
            }
            if (((0xa0 < uVar10) && (uVar10 != 0x200d)) &&
               ((uVar10 != 0x200c && ((uVar10 != 0x964 && (uVar10 != 0x965)))))) {
              uVar10 = uVar10 + puVar4[4];
            }
            if (local_68 < *(ushort **)(param_1 + 0x28)) {
              *local_68 = uVar10;
              local_68 = local_68 + 1;
              if (*(longlong *)(param_1 + 0x30) != 0) {
                **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -2;
                *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
              }
            }
            else {
              *(ushort *)
               (*(longlong *)(param_1 + 8) + 0x90 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = uVar10;
              *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
              *param_2 = 0xf;
            }
            goto LAB_143af63d3;
          }
        }
        *param_2 = 10;
      }
      else {
        *puVar4 = 0xfffe;
        *param_2 = 0xc;
      }
    }
    else {
      if (*puVar4 == 0xd9) {
        if (bVar1 == 0xe8) {
          local_74 = 0x20;
        }
        else {
          local_74 = 0x200d;
        }
        if (*(int *)(puVar4 + 0x16) != 0) {
          if (((0xa0 < *(int *)(puVar4 + 0x16)) && (*(int *)(puVar4 + 0x16) != 0x200d)) &&
             ((*(int *)(puVar4 + 0x16) != 0x200c &&
              ((*(int *)(puVar4 + 0x16) != 0x964 && (*(int *)(puVar4 + 0x16) != 0x965)))))) {
            *(undefined4 *)(puVar4 + 0x16) = *(undefined4 *)(puVar4 + 0x16);
          }
          if (local_68 < *(ushort **)(param_1 + 0x28)) {
            *local_68 = puVar4[0x16];
            local_68 = local_68 + 1;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -1;
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
            }
          }
          else {
            *(ushort *)
             (*(longlong *)(param_1 + 8) + 0x90 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = puVar4[0x16];
            *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
            *param_2 = 0xf;
          }
          puVar4[0x16] = 0;
          puVar4[0x17] = 0;
        }
        if ((((0xa0 < local_74) && (local_74 != 0x200d)) && (local_74 != 0x200c)) &&
           ((local_74 != 0x964 && (local_74 != 0x965)))) {
          local_74 = local_74 + puVar4[4];
        }
        if (local_68 < *(ushort **)(param_1 + 0x28)) {
          *local_68 = (ushort)local_74;
          local_68 = local_68 + 1;
          if (*(longlong *)(param_1 + 0x30) != 0) {
            **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -2;
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
          }
        }
        else {
          *(ushort *)
           (*(longlong *)(param_1 + 8) + 0x90 +
           (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = (ushort)local_74;
          *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
               *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
          *param_2 = 0xf;
        }
        *puVar4 = 0xfffe;
      }
      switch(bVar1) {
      case 10:
      case 0xd:
        *(byte *)((longlong)puVar4 + 0x19) = 1;
        local_74 = (uint)*(ushort *)(&DAT_145d007c0 + (ulonglong)bVar1 * 2);
        if (((0xa0 < bVar1) &&
            (((uint)(byte)(&DAT_145d00640)[local_74 & 0x7f] & *(uint *)(puVar4 + 8)) == 0)) &&
           ((puVar4[4] != 0x300 || (local_74 != 0x931)))) {
          local_74 = 0xffff;
        }
        *puVar4 = (ushort)bVar1;
        break;
      default:
switchD_143af6b6d_caseD_b:
        local_74 = (uint)*(ushort *)(&DAT_145d007c0 + (ulonglong)bVar1 * 2);
        if (((0xa0 < bVar1) &&
            (((uint)(byte)(&DAT_145d00640)[local_74 & 0x7f] & *(uint *)(puVar4 + 8)) == 0)) &&
           ((puVar4[4] != 0x300 || (local_74 != 0x931)))) {
          local_74 = 0xffff;
        }
        *puVar4 = (ushort)bVar1;
        break;
      case 0xd9:
      case 0xef:
      case 0xf0:
        *puVar4 = (ushort)bVar1;
        if (*puVar9 != 0xffff) {
          if (*(int *)(puVar4 + 0x16) != 0) {
            if ((((0xa0 < *(int *)(puVar4 + 0x16)) && (*(int *)(puVar4 + 0x16) != 0x200d)) &&
                (*(int *)(puVar4 + 0x16) != 0x200c)) &&
               ((*(int *)(puVar4 + 0x16) != 0x964 && (*(int *)(puVar4 + 0x16) != 0x965)))) {
              *(undefined4 *)(puVar4 + 0x16) = *(undefined4 *)(puVar4 + 0x16);
            }
            if (local_68 < *(ushort **)(param_1 + 0x28)) {
              *local_68 = puVar4[0x16];
              local_68 = local_68 + 1;
              if (*(longlong *)(param_1 + 0x30) != 0) {
                **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -1;
                *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
              }
            }
            else {
              *(ushort *)
               (*(longlong *)(param_1 + 8) + 0x90 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = puVar4[0x16];
              *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
              *param_2 = 0xf;
            }
            puVar4[0x16] = 0;
            puVar4[0x17] = 0;
          }
          if (((0xa0 < (int)*puVar9) && (*puVar9 != 0x200d)) &&
             ((*puVar9 != 0x200c && ((*puVar9 != 0x964 && (*puVar9 != 0x965)))))) {
            *puVar9 = (uint)puVar4[4] + *puVar9;
          }
          if (local_68 < *(ushort **)(param_1 + 0x28)) {
            *local_68 = *(ushort *)puVar9;
            local_68 = local_68 + 1;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -2;
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
            }
          }
          else {
            *(ushort *)
             (*(longlong *)(param_1 + 8) + 0x90 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = *(ushort *)puVar9;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
            *param_2 = 0xf;
          }
          *puVar9 = 0xffff;
        }
        goto LAB_143af63d3;
      case 0xe0:
        bVar6 = false;
        for (local_40 = 1; local_40 < 2; local_40 = local_40 + 1) {
          if ((&DAT_145d009c0)[(longlong)local_40 * 2] == (ushort)(byte)*puVar4) {
            local_74 = (uint)*(ushort *)(&UNK_145d009c2 + (longlong)local_40 * 4);
            bVar6 = true;
            break;
          }
        }
        if ((bVar6) && (((uint)(byte)(&DAT_145d00640)[(byte)local_74] & *(uint *)(puVar4 + 8)) != 0)
           ) {
          *puVar4 = 0xfffe;
          *puVar9 = 0xffff;
        }
        else {
          local_74 = (uint)*(ushort *)(&DAT_145d007c0 + (ulonglong)bVar1 * 2);
          if (((0xa0 < bVar1) &&
              (((uint)(byte)(&DAT_145d00640)[local_74 & 0x7f] & *(uint *)(puVar4 + 8)) == 0)) &&
             ((puVar4[4] != 0x300 || (local_74 != 0x931)))) {
            local_74 = 0xffff;
          }
          *puVar4 = (ushort)bVar1;
        }
        break;
      case 0xe8:
        if (*puVar4 == 0xe8) {
          local_74 = 0x200c;
          *puVar4 = 0xfffe;
        }
        else {
          local_74 = (uint)*(ushort *)(&DAT_145d007c0 + (ulonglong)bVar1 * 2);
          if (((0xa0 < bVar1) &&
              (((uint)(byte)(&DAT_145d00640)[local_74 & 0x7f] & *(uint *)(puVar4 + 8)) == 0)) &&
             ((puVar4[4] != 0x300 || (local_74 != 0x931)))) {
            local_74 = 0xffff;
          }
          *puVar4 = (ushort)bVar1;
        }
        break;
      case 0xe9:
        if (*puVar4 == 0xe8) {
          local_74 = 0x200d;
          *puVar4 = 0xfffe;
          break;
        }
        if ((puVar4[4] == 0x100) && (*puVar4 == 0xc0)) {
          if (*(int *)(puVar4 + 0x16) != 0) {
            if ((((0xa0 < *(int *)(puVar4 + 0x16)) && (*(int *)(puVar4 + 0x16) != 0x200d)) &&
                (*(int *)(puVar4 + 0x16) != 0x200c)) &&
               ((*(int *)(puVar4 + 0x16) != 0x964 && (*(int *)(puVar4 + 0x16) != 0x965)))) {
              *(undefined4 *)(puVar4 + 0x16) = *(undefined4 *)(puVar4 + 0x16);
            }
            if (local_68 < *(ushort **)(param_1 + 0x28)) {
              *local_68 = puVar4[0x16];
              local_68 = local_68 + 1;
              if (*(longlong *)(param_1 + 0x30) != 0) {
                **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -1;
                *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
              }
            }
            else {
              *(ushort *)
               (*(longlong *)(param_1 + 8) + 0x90 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = puVar4[0x16];
              *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
              *param_2 = 0xf;
            }
            puVar4[0x16] = 0;
            puVar4[0x17] = 0;
          }
          if (local_68 < *(ushort **)(param_1 + 0x28)) {
            *local_68 = 0xa5c;
            local_68 = local_68 + 1;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -2;
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
            }
          }
          else {
            *(undefined2 *)
             (*(longlong *)(param_1 + 8) + 0x90 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = 0xa5c;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
            *param_2 = 0xf;
          }
          if (*param_2 < 1) {
            if (local_68 < *(ushort **)(param_1 + 0x28)) {
              *local_68 = 0xa4d;
              local_68 = local_68 + 1;
              if (*(longlong *)(param_1 + 0x30) != 0) {
                **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -2;
                *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
              }
            }
            else {
              *(undefined2 *)
               (*(longlong *)(param_1 + 8) + 0x90 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = 0xa4d;
              *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
              *param_2 = 0xf;
            }
            if (*param_2 < 1) {
              if (local_68 < *(ushort **)(param_1 + 0x28)) {
                *local_68 = 0xa39;
                local_68 = local_68 + 1;
                if (*(longlong *)(param_1 + 0x30) != 0) {
                  **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -2;
                  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
                }
              }
              else {
                *(undefined2 *)
                 (*(longlong *)(param_1 + 8) + 0x90 +
                 (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = 0xa39;
                *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                     *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
                *param_2 = 0xf;
              }
            }
            else {
              *(undefined2 *)
               (*(longlong *)(param_1 + 8) + 0x90 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = 0xa39;
              *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
            }
          }
          else {
            *(undefined2 *)
             (*(longlong *)(param_1 + 8) + 0x90 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = 0xa4d;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
            *(undefined2 *)
             (*(longlong *)(param_1 + 8) + 0x90 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = 0xa39;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
          }
          *puVar9 = 0xffff;
          *puVar4 = 0xfffe;
        }
        else {
          bVar6 = false;
          for (local_40 = 1; local_40 < 0x10; local_40 = local_40 + 1) {
            if ((&DAT_145d009d0)[(longlong)local_40 * 2] == (ushort)(byte)*puVar4) {
              local_74 = (uint)*(ushort *)(&UNK_145d009d2 + (longlong)local_40 * 4);
              bVar6 = true;
              break;
            }
          }
          if ((!bVar6) ||
             (((uint)(byte)(&DAT_145d00640)[(byte)local_74] & *(uint *)(puVar4 + 8)) == 0))
          goto switchD_143af6b6d_caseD_b;
          *puVar4 = 0xfffe;
          *puVar9 = 0xffff;
          if (puVar4[4] != 0x100) break;
          if (*(int *)(puVar4 + 0x16) != 0) {
            if ((((0xa0 < *(int *)(puVar4 + 0x16)) && (*(int *)(puVar4 + 0x16) != 0x200d)) &&
                (*(int *)(puVar4 + 0x16) != 0x200c)) &&
               ((*(int *)(puVar4 + 0x16) != 0x964 && (*(int *)(puVar4 + 0x16) != 0x965)))) {
              *(undefined4 *)(puVar4 + 0x16) = *(undefined4 *)(puVar4 + 0x16);
            }
            if (local_68 < *(ushort **)(param_1 + 0x28)) {
              *local_68 = puVar4[0x16];
              local_68 = local_68 + 1;
              if (*(longlong *)(param_1 + 0x30) != 0) {
                **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -1;
                *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
              }
            }
            else {
              *(ushort *)
               (*(longlong *)(param_1 + 8) + 0x90 +
               (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = puVar4[0x16];
              *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                   *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
              *param_2 = 0xf;
            }
            puVar4[0x16] = 0;
            puVar4[0x17] = 0;
          }
          if (((0xa0 < local_74) && (local_74 != 0x200d)) &&
             ((local_74 != 0x200c && ((local_74 != 0x964 && (local_74 != 0x965)))))) {
            local_74 = local_74 + puVar4[4];
          }
          if (local_68 < *(ushort **)(param_1 + 0x28)) {
            *local_68 = (ushort)local_74;
            local_68 = local_68 + 1;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -2;
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
            }
          }
          else {
            *(ushort *)
             (*(longlong *)(param_1 + 8) + 0x90 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = (ushort)local_74;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
            *param_2 = 0xf;
          }
        }
        goto LAB_143af63d3;
      case 0xea:
        if (*puVar4 == 0xea) {
          local_74 = 0x965;
          *puVar4 = 0xfffe;
          *puVar9 = 0xffff;
        }
        else {
          local_74 = (uint)*(ushort *)(&DAT_145d007c0 + (ulonglong)bVar1 * 2);
          if (((0xa0 < bVar1) &&
              (((uint)(byte)(&DAT_145d00640)[local_74 & 0x7f] & *(uint *)(puVar4 + 8)) == 0)) &&
             ((puVar4[4] != 0x300 || (local_74 != 0x931)))) {
            local_74 = 0xffff;
          }
          *puVar4 = (ushort)bVar1;
        }
      }
      if (*puVar9 != 0xffff) {
        if ((((puVar4[4] == 0x100) && (*(int *)(puVar4 + 0x16) != 0)) &&
            (cVar7 = FUN_143af8890(*(undefined4 *)(puVar4 + 0x16)), cVar7 != '\0')) &&
           ((*puVar9 == 0x94d && (local_74 + 0x100 == *(int *)(puVar4 + 0x16))))) {
          iVar8 = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -3;
          if (local_68 < *(ushort **)(param_1 + 0x28)) {
            *local_68 = 0xa71;
            local_68 = local_68 + 1;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              **(int **)(param_1 + 0x30) = iVar8;
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
            }
          }
          else {
            *(undefined2 *)
             (*(longlong *)(param_1 + 8) + 0x90 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = 0xa71;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
            *param_2 = 0xf;
          }
          if (((0xa0 < *(int *)(puVar4 + 0x16)) && (*(int *)(puVar4 + 0x16) != 0x200d)) &&
             ((*(int *)(puVar4 + 0x16) != 0x200c &&
              ((*(int *)(puVar4 + 0x16) != 0x964 && (*(int *)(puVar4 + 0x16) != 0x965)))))) {
            *(undefined4 *)(puVar4 + 0x16) = *(undefined4 *)(puVar4 + 0x16);
          }
          if (local_68 < *(ushort **)(param_1 + 0x28)) {
            *local_68 = puVar4[0x16];
            local_68 = local_68 + 1;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              **(int **)(param_1 + 0x30) = iVar8;
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
            }
          }
          else {
            *(ushort *)
             (*(longlong *)(param_1 + 8) + 0x90 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = puVar4[0x16];
            *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
            *param_2 = 0xf;
          }
          puVar4[0x16] = 0;
          puVar4[0x17] = 0;
          *puVar9 = 0xffff;
          goto LAB_143af63d3;
        }
        if (*(int *)(puVar4 + 0x16) != 0) {
          if ((((0xa0 < *(int *)(puVar4 + 0x16)) && (*(int *)(puVar4 + 0x16) != 0x200d)) &&
              (*(int *)(puVar4 + 0x16) != 0x200c)) &&
             ((*(int *)(puVar4 + 0x16) != 0x964 && (*(int *)(puVar4 + 0x16) != 0x965)))) {
            *(undefined4 *)(puVar4 + 0x16) = *(undefined4 *)(puVar4 + 0x16);
          }
          if (local_68 < *(ushort **)(param_1 + 0x28)) {
            *local_68 = puVar4[0x16];
            local_68 = local_68 + 1;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -1;
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
            }
          }
          else {
            *(ushort *)
             (*(longlong *)(param_1 + 8) + 0x90 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = puVar4[0x16];
            *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
            *param_2 = 0xf;
          }
          puVar4[0x16] = 0;
          puVar4[0x17] = 0;
        }
        if (((puVar4[4] == 0x100) && (local_74 == 0x902)) &&
           (cVar7 = FUN_143af8850(*puVar9 + 0x100), cVar7 != '\0')) {
          local_74 = 0x970;
          if ((((0xa0 < (int)*puVar9) && (*puVar9 != 0x200d)) && (*puVar9 != 0x200c)) &&
             ((*puVar9 != 0x964 && (*puVar9 != 0x965)))) {
            *puVar9 = *puVar9 + 0x100;
          }
          if (local_68 < *(ushort **)(param_1 + 0x28)) {
            *local_68 = *(ushort *)puVar9;
            local_68 = local_68 + 1;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -2;
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
            }
          }
          else {
            *(ushort *)
             (*(longlong *)(param_1 + 8) + 0x90 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = *(ushort *)puVar9;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
            *param_2 = 0xf;
          }
        }
        else if (((puVar4[4] == 0x100) && (local_74 == 0x94d)) &&
                (cVar7 = FUN_143af8890(*puVar9 + 0x100), cVar7 != '\0')) {
          *(uint *)(puVar4 + 0x16) = *puVar9 + 0x100;
        }
        else {
          if (((0xa0 < (int)*puVar9) && (*puVar9 != 0x200d)) &&
             ((*puVar9 != 0x200c && ((*puVar9 != 0x964 && (*puVar9 != 0x965)))))) {
            *puVar9 = (uint)puVar4[4] + *puVar9;
          }
          if (local_68 < *(ushort **)(param_1 + 0x28)) {
            *local_68 = *(ushort *)puVar9;
            local_68 = local_68 + 1;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              **(int **)(param_1 + 0x30) = (iVar8 - (int)*(undefined8 *)(param_1 + 0x10)) + -2;
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
            }
          }
          else {
            *(ushort *)
             (*(longlong *)(param_1 + 8) + 0x90 +
             (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = *(ushort *)puVar9;
            *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
                 *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
            *param_2 = 0xf;
          }
        }
        *puVar9 = 0xffff;
      }
      if (local_74 != 0xffff) {
        *puVar9 = local_74 & 0xffff;
        if (*(byte *)((longlong)puVar4 + 0x19) == 1) {
          puVar4[4] = puVar4[2];
          *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar4 + 10);
          *(byte *)((longlong)puVar4 + 0x19) = 0;
        }
        goto LAB_143af63d3;
      }
      *param_2 = 10;
    }
LAB_143af82ee:
    *(byte *)(*(longlong *)(param_1 + 8) + 0x41) = bVar1;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
LAB_143af8335:
    if (((*param_2 < 1) && (*(char *)(param_1 + 2) != '\0')) && (local_48 == pbVar2)) {
      lVar5 = *(longlong *)(param_1 + 8);
      if (((*puVar4 == 0xef) || (*puVar4 == 0xf0)) || (*puVar4 == 0xd9)) {
        *(byte *)(lVar5 + 0x41) = (byte)*puVar4;
        *(undefined1 *)(lVar5 + 0x40) = 1;
        *puVar4 = 0xfffe;
      }
      else {
        *(undefined1 *)(lVar5 + 0x40) = 0;
      }
      if (*puVar9 != 0xffff) {
        if (((0xa0 < (int)*puVar9) && (*puVar9 != 0x200d)) &&
           ((*puVar9 != 0x200c && ((*puVar9 != 0x964 && (*puVar9 != 0x965)))))) {
          *puVar9 = (uint)puVar4[4] + *puVar9;
        }
        if (local_68 < *(ushort **)(param_1 + 0x28)) {
          *local_68 = *(ushort *)puVar9;
          local_68 = local_68 + 1;
          if (*(longlong *)(param_1 + 0x30) != 0) {
            **(int **)(param_1 + 0x30) = ((int)local_48 - (int)*(undefined8 *)(param_1 + 0x10)) + -1
            ;
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
          }
        }
        else {
          *(ushort *)
           (*(longlong *)(param_1 + 8) + 0x90 +
           (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5d) * 2) = *(ushort *)puVar9;
          *(char *)(*(longlong *)(param_1 + 8) + 0x5d) =
               *(char *)(*(longlong *)(param_1 + 8) + 0x5d) + '\x01';
          *param_2 = 0xf;
        }
        *puVar9 = 0xffff;
      }
    }
    *(ushort **)(param_1 + 0x20) = local_68;
    *(byte **)(param_1 + 0x10) = local_48;
  }
  return;
}



// FUNCTION 143af8670 FUN_143af8670 body=154 status=ok
// SIG undefined FUN_143af8670(void)

longlong FUN_143af8670(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  if (*param_4 < 1) {
    if (*param_3 == 0) {
      *param_3 = 0x150;
      param_2 = 0;
    }
    else {
      _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x120),*(void **)(param_1 + 0x10),0x30);
      *(longlong *)(param_2 + 0x10) = param_2 + 0x120;
      *(undefined1 *)(param_2 + 0x3e) = 1;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}



// FUNCTION 143af8710 FUN_143af8710 body=308 status=ok
// SIG undefined FUN_143af8710(void)

void FUN_143af8710(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  int local_14;
  int local_10;
  
  (*(code *)param_2[2])(*param_2,0,0xa0);
  for (local_14 = 0; local_14 < 9; local_14 = local_14 + 1) {
    bVar1 = (&DAT_145d00584)[(longlong)local_14 * 0xc];
    for (local_10 = 0; local_10 < 0x80; local_10 = local_10 + 1) {
      if ((((&DAT_145d00640)[local_10] & bVar1) != 0) || ((local_14 == 6 && (local_10 == 0x31)))) {
        (*(code *)param_2[1])(*param_2,local_10 + 0x900 + local_14 * 0x80);
      }
    }
  }
  (*(code *)param_2[1])(*param_2,0x964);
  (*(code *)param_2[1])(*param_2,0x965);
  (*(code *)param_2[1])(*param_2,0x200c);
  (*(code *)param_2[1])(*param_2,0x200d);
  return;
}



// FUNCTION 143af8850 FUN_143af8850 body=53 status=ok
// SIG undefined FUN_143af8850(void)

ulonglong FUN_143af8850(int param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((param_1 < 0xa00) || (0xa4f < param_1)) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar1 = (ulonglong)(uint)((int)(uint)(byte)(&DAT_145d005f0)[param_1 + -0xa00] >> 1);
  }
  return uVar1;
}



// FUNCTION 143af8890 FUN_143af8890 body=54 status=ok
// SIG undefined FUN_143af8890(void)

ulonglong FUN_143af8890(int param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((param_1 < 0xa00) || (0xa4f < param_1)) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar1 = (ulonglong)((byte)(&DAT_145d005f0)[param_1 + -0xa00] & 1);
  }
  return uVar1;
}



// FUNCTION 143af88d0 FUN_143af88d0 body=3645 status=ok
// SIG undefined FUN_143af88d0(void)

void FUN_143af88d0(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte local_88;
  uint local_84;
  char local_7f;
  int local_7c;
  int local_78;
  byte *local_70;
  int local_68;
  ushort *local_50;
  int local_48;
  ushort local_44;
  uint local_40;
  byte *local_38;
  int local_30;
  ushort *local_28;
  longlong local_18;
  undefined4 local_10;
  byte bVar7;
  
  local_18 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(local_18 + 0x10);
  local_50 = *(ushort **)(param_1 + 0x10);
  local_28 = *(ushort **)(param_1 + 0x18);
  local_70 = *(byte **)(param_1 + 0x20);
  local_78 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  local_7f = *(char *)(lVar2 + 0x48);
  local_88 = *(byte *)(lVar2 + 0x49);
  local_68 = *(int *)(lVar2 + 0x20 + (ulonglong)local_88 * 4);
  local_84 = *(uint *)(local_18 + 0x54);
  do {
    if (local_7f == '\0') {
      if ((local_84 == 0) || (local_78 < 1)) {
        while( true ) {
          if (local_28 <= local_50) goto LAB_143af94bf;
          if (local_78 < 1) {
            *param_2 = 0xf;
            goto LAB_143af94bf;
          }
          uVar1 = *local_50;
          local_84 = (uint)uVar1;
          local_50 = local_50 + 1;
          if (0xa3ff < local_84 - 0x3400) {
            if (local_84 - 0x3400 < 0xbf00) {
              if (0xdfff < local_84) {
                local_84 = local_84 | 0xf00000;
                local_7c = 3;
                goto LAB_143af950f;
              }
              if ((uVar1 & 0x400) == 0) goto LAB_143af9279;
              *param_2 = 0xc;
              goto LAB_143af94bf;
            }
            if ((local_28 <= local_50) || (0xa3ff < *local_50 - 0x3400)) {
              if ((local_84 - 0x30 < 10) || ((local_84 - 0x61 < 0x1a || (local_84 - 0x41 < 0x1a))))
              {
                local_7f = '\x01';
                local_84 = local_84 | (local_88 + 0xe0) * 0x100 | local_84;
                local_7c = 2;
                goto LAB_143af950f;
              }
              bVar4 = FUN_143afc3b0(lVar2 + 0x20,local_84);
              if (-1 < (char)bVar4) {
                local_7f = '\x01';
                local_68 = *(int *)(lVar2 + 0x20 + (ulonglong)bVar4 * 4);
                FUN_143afc470(lVar2,bVar4);
                local_84 = (bVar4 + 0xe0) * 0x100 | local_84 - local_68 | 0x80;
                local_7c = 2;
                local_88 = bVar4;
                goto LAB_143af950f;
              }
              iVar10 = FUN_143afc240(local_84,&local_48);
              if (-1 < iVar10) {
                local_7f = '\x01';
                local_88 = FUN_143afc350(lVar2);
                iVar9 = local_48;
                *(int *)(lVar2 + 0x20 + (ulonglong)local_88 * 4) = local_48;
                local_68 = local_48;
                FUN_143afc470(lVar2,local_88);
                local_84 = (local_88 + 0xe8) * 0x10000 | iVar10 << 8 | local_84 - iVar9 | 0x80;
                local_7c = 3;
                goto LAB_143af950f;
              }
            }
            local_7c = 2;
            goto LAB_143af950f;
          }
          if (local_78 < 2) break;
          *local_70 = (byte)(uVar1 >> 8);
          local_84._0_1_ = (byte)uVar1;
          local_70[1] = (byte)local_84;
          local_70 = local_70 + 2;
          local_78 = local_78 + -2;
          local_84 = 0;
        }
        local_7c = 2;
      }
      else {
LAB_143af9279:
        local_44 = (ushort)local_84;
        if (local_28 <= local_50) goto LAB_143af94bf;
        uVar1 = *local_50;
        if ((uVar1 & 0xfc00) != 0xdc00) {
          *param_2 = 0xc;
          goto LAB_143af94bf;
        }
        local_50 = local_50 + 1;
        iVar10 = local_84 * 0x400 + -0x35fdc00 + (uint)uVar1;
        bVar4 = FUN_143afc3b0(lVar2 + 0x20,iVar10);
        if (((char)bVar4 < '\0') || ((local_50 < local_28 && (*local_50 - 0x3400 < 0xa400)))) {
          if ((local_50 < local_28) &&
             ((local_44 == *local_50 && (iVar9 = FUN_143afc240(iVar10,&local_48), -1 < iVar9)))) {
            local_7f = '\x01';
            local_88 = FUN_143afc350(lVar2);
            iVar3 = local_48;
            *(int *)(lVar2 + 0x20 + (ulonglong)local_88 * 4) = local_48;
            local_68 = local_48;
            FUN_143afc470(lVar2,local_88);
            local_84 = (uint)local_88 << 0x15 | 0xf1000000 | (iVar9 + -0x200) * 0x100 |
                       iVar10 - iVar3 | 0x80;
            local_7c = 4;
          }
          else {
            local_84 = CONCAT22(local_44,uVar1);
            local_7c = 4;
          }
        }
        else {
          local_7f = '\x01';
          local_68 = *(int *)(lVar2 + 0x20 + (ulonglong)bVar4 * 4);
          FUN_143afc470(lVar2,bVar4);
          local_84 = (bVar4 + 0xe0) * 0x100 | iVar10 - local_68 | 0x80;
          local_7c = 2;
          local_88 = bVar4;
        }
      }
    }
    else {
      if (local_84 == 0) goto LAB_143af89b6;
      if (local_78 < 1) goto LAB_143af89b6;
      while( true ) {
        local_44 = (ushort)local_84;
        if (local_28 <= local_50) goto LAB_143af94bf;
        uVar1 = *local_50;
        if ((uVar1 & 0xfc00) != 0xdc00) {
          *param_2 = 0xc;
          goto LAB_143af94bf;
        }
        local_50 = local_50 + 1;
        iVar10 = local_84 * 0x400 + -0x35fdc00 + (uint)uVar1;
        local_40 = iVar10 - local_68;
        if (0x7f < local_40) {
          bVar4 = FUN_143afc3b0(lVar2 + 0x20,iVar10);
          if ((char)bVar4 < '\0') {
            iVar9 = FUN_143afc240(iVar10,&local_48);
            if (iVar9 < 0) {
              local_7f = '\0';
              *local_70 = 0xf;
              local_70 = local_70 + 1;
              local_78 = local_78 + -1;
              local_84 = CONCAT22(local_44,uVar1);
              local_7c = 4;
            }
            else {
              local_88 = FUN_143afc350(lVar2);
              iVar3 = local_48;
              *(int *)(lVar2 + 0x20 + (ulonglong)local_88 * 4) = local_48;
              local_68 = local_48;
              FUN_143afc470(lVar2,local_88);
              local_84 = (uint)local_88 << 0x15 | 0xb000000 | (iVar9 + -0x200) * 0x100 |
                         iVar10 - iVar3 | 0x80;
              local_7c = 4;
            }
          }
          else {
            local_68 = *(int *)(lVar2 + 0x20 + (ulonglong)bVar4 * 4);
            FUN_143afc470(lVar2,bVar4);
            local_84 = (bVar4 + 0x10) * 0x100 | iVar10 - local_68 | 0x80;
            local_7c = 2;
            local_88 = bVar4;
          }
          goto LAB_143af950f;
        }
        *local_70 = (byte)local_40 | 0x80;
        local_70 = local_70 + 1;
        local_78 = local_78 + -1;
        while( true ) {
          while( true ) {
            while( true ) {
              local_84 = 0;
LAB_143af89b6:
              if (local_28 <= local_50) goto LAB_143af94bf;
              if (local_78 < 1) {
                *param_2 = 0xf;
                goto LAB_143af94bf;
              }
              uVar1 = *local_50;
              uVar8 = (uint)uVar1;
              local_50 = local_50 + 1;
              local_84._0_1_ = (byte)uVar1;
              if (0x5f < uVar8 - 0x20) break;
              *local_70 = (byte)local_84;
              local_70 = local_70 + 1;
              local_78 = local_78 + -1;
            }
            if (0x1f < uVar8) break;
            local_10 = 1;
            if ((1 << ((byte)local_84 & 0x1f) & 0x2601U) == 0) {
              local_84 = uVar8 | 0x100;
              local_7c = 2;
              goto LAB_143af950f;
            }
            *local_70 = (byte)local_84;
            local_70 = local_70 + 1;
            local_78 = local_78 + -1;
          }
          local_40 = uVar8 - local_68;
          if (0x7f < local_40) break;
          *local_70 = (byte)local_40 | 0x80;
          local_70 = local_70 + 1;
          local_78 = local_78 + -1;
        }
        if ((uVar8 & 0xfffff800) != 0xd800) break;
        local_84 = uVar8;
        if ((uVar1 & 0x400) != 0) {
          *param_2 = 0xc;
          goto LAB_143af94bf;
        }
      }
      if (uVar8 < 0xa0) {
        local_84 = uVar8 & 0x7f | 0x200;
        local_7c = 2;
      }
      else if ((uVar8 == 0xfeff) || (0xffef < uVar8)) {
        local_84 = uVar8 | 0xe0000;
        local_7c = 3;
      }
      else {
        bVar4 = FUN_143afc3b0(lVar2 + 0x20,uVar8);
        if ((char)bVar4 < '\0') {
          cVar5 = FUN_143afc3b0(&DAT_145d00d78,uVar8);
          if (cVar5 < '\0') {
            iVar10 = FUN_143afc240(uVar8,&local_48);
            if (iVar10 < 0) {
              if ((uVar8 - 0x3400 < 0xa400) &&
                 ((local_28 <= local_50 || (*local_50 - 0x3400 < 0xa400)))) {
                local_7f = '\0';
                local_84 = uVar8 | 0xf0000;
                local_7c = 3;
              }
              else {
                local_84 = uVar8 | 0xe0000;
                local_7c = 3;
              }
            }
            else {
              local_88 = FUN_143afc350(lVar2);
              iVar9 = local_48;
              *(int *)(lVar2 + 0x20 + (ulonglong)local_88 * 4) = local_48;
              local_68 = local_48;
              FUN_143afc470(lVar2,local_88);
              local_84 = (local_88 + 0x18) * 0x10000 | iVar10 << 8 | uVar8 - iVar9 | 0x80;
              local_7c = 3;
            }
          }
          else {
            local_84 = (cVar5 + 1) * 0x100 | uVar8 - *(int *)(&DAT_145d00d78 + (longlong)cVar5 * 4);
            local_7c = 2;
          }
        }
        else if ((local_50 < local_28) &&
                (cVar5 = FUN_143afc400(*(undefined4 *)(lVar2 + 0x20 + (longlong)(char)bVar4 * 4),
                                       *local_50), cVar5 == '\0')) {
          local_84 = ((char)bVar4 + 1) * 0x100 |
                     uVar8 - *(int *)(lVar2 + 0x20 + (longlong)(char)bVar4 * 4) | 0x80;
          local_7c = 2;
        }
        else {
          local_68 = *(int *)(lVar2 + 0x20 + (ulonglong)bVar4 * 4);
          FUN_143afc470(lVar2,bVar4);
          local_84 = (bVar4 + 0x10) * 0x100 | uVar8 - local_68 | 0x80;
          local_7c = 2;
          local_88 = bVar4;
        }
      }
    }
LAB_143af950f:
    bVar4 = (byte)(local_84 >> 8);
    bVar6 = (byte)(local_84 >> 0x10);
    bVar7 = (byte)(local_84 >> 0x18);
    if (local_78 < local_7c) break;
    local_30 = local_7c;
    if (local_7c == 1) {
LAB_143af9594:
      *local_70 = (byte)local_84;
      local_70 = local_70 + 1;
    }
    else {
      if (local_7c == 2) {
LAB_143af9579:
        *local_70 = bVar4;
        local_70 = local_70 + 1;
        goto LAB_143af9594;
      }
      if (local_7c == 3) {
LAB_143af955e:
        *local_70 = bVar6;
        local_70 = local_70 + 1;
        goto LAB_143af9579;
      }
      if (local_7c == 4) {
        *local_70 = bVar7;
        local_70 = local_70 + 1;
        goto LAB_143af955e;
      }
    }
    local_78 = local_78 - local_7c;
    local_84 = 0;
  } while( true );
  local_7c = local_7c - local_78;
  local_38 = (byte *)(local_18 + 0x68);
  if (local_7c == 1) {
LAB_143af9676:
    *local_38 = (byte)local_84;
  }
  else {
    if (local_7c == 2) {
LAB_143af965b:
      *local_38 = bVar4;
      local_38 = local_38 + 1;
      goto LAB_143af9676;
    }
    if (local_7c == 3) {
LAB_143af9640:
      *local_38 = bVar6;
      local_38 = local_38 + 1;
      goto LAB_143af965b;
    }
    if (local_7c == 4) {
      *local_38 = bVar7;
      local_38 = (byte *)(local_18 + 0x69);
      goto LAB_143af9640;
    }
  }
  *(char *)(local_18 + 0x5b) = (char)local_7c;
  local_84 = local_84 >> ((char)local_7c * '\b' & 0x1fU);
  if (local_78 != 1) {
    if (local_78 != 2) {
      if (local_78 != 3) goto LAB_143af9720;
      *local_70 = (byte)(local_84 >> 0x10);
      local_70 = local_70 + 1;
    }
    *local_70 = (byte)(local_84 >> 8);
    local_70 = local_70 + 1;
  }
  *local_70 = (byte)local_84;
  local_70 = local_70 + 1;
LAB_143af9720:
  *param_2 = 0xf;
  local_84 = 0;
LAB_143af94bf:
  *(char *)(lVar2 + 0x48) = local_7f;
  *(byte *)(lVar2 + 0x49) = local_88;
  *(uint *)(local_18 + 0x54) = local_84;
  *(ushort **)(param_1 + 0x10) = local_50;
  *(byte **)(param_1 + 0x20) = local_70;
  return;
}



// FUNCTION 143af9750 FUN_143af9750 body=64 status=ok
// SIG undefined FUN_143af9750(void)

char * FUN_143af9750(longlong param_1)

{
  char *pcVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4a) == '\x01') {
    pcVar1 = "SCSU,locale=ja";
  }
  else {
    pcVar1 = "SCSU";
  }
  return pcVar1;
}



// FUNCTION 143af9790 FUN_143af9790 body=154 status=ok
// SIG undefined FUN_143af9790(void)

longlong FUN_143af9790(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  if (*param_4 < 1) {
    if (*param_3 == 0) {
      *param_3 = 0x178;
      param_2 = 0;
    }
    else {
      _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x120),*(void **)(param_1 + 0x10),0x54);
      *(longlong *)(param_2 + 0x10) = param_2 + 0x120;
      *(undefined1 *)(param_2 + 0x3e) = 1;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}



// FUNCTION 143af9830 FUN_143af9830 body=283 status=ok
// SIG undefined FUN_143af9830(void)

void FUN_143af9830(longlong param_1,int param_2)

{
  void *_Dst;
  
  _Dst = *(void **)(param_1 + 0x10);
  if (param_2 < 2) {
    _guard_xfg_dispatch_icall_nop(_Dst,&DAT_145d00d98,0x20);
    *(undefined1 *)((longlong)_Dst + 0x40) = 1;
    *(undefined1 *)((longlong)_Dst + 0x41) = 0;
    *(undefined1 *)((longlong)_Dst + 0x43) = 0;
    *(undefined1 *)((longlong)_Dst + 0x42) = 0;
    *(undefined1 *)((longlong)_Dst + 0x44) = 0;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  if (param_2 != 1) {
    _guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + 0x20),&DAT_145d00d98,0x20);
    *(undefined1 *)((longlong)_Dst + 0x48) = 1;
    *(undefined1 *)((longlong)_Dst + 0x49) = 0;
    *(undefined1 *)((longlong)_Dst + 0x4b) = 0;
    if (*(char *)((longlong)_Dst + 0x4a) == '\x01') {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + 0x4c),&DAT_145d00de0,8);
    }
    else {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + 0x4c),&DAT_145d00dd8,8);
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}



// FUNCTION 143af9950 FUN_143af9950 body=279 status=ok
// SIG undefined FUN_143af9950(void)

void FUN_143af9950(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(char **)(param_2 + 0x20);
  if (*(char *)(param_2 + 8) == '\0') {
    uVar2 = FUN_143aa7a40(0x54);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      *param_3 = 7;
    }
    else {
      if ((((pcVar1 == (char *)0x0) || (*pcVar1 != 'j')) || (pcVar1[1] != 'a')) ||
         ((pcVar1[2] != '\0' && (pcVar1[2] != '_')))) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x4a) = 0;
      }
      else {
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x4a) = 1;
      }
      FUN_143af9830(param_1,0);
    }
    *(undefined2 *)(param_1 + 0x88) = 0xfffd;
    *(undefined1 *)(param_1 + 0x59) = 0xff;
  }
  return;
}



// FUNCTION 143af9a70 FUN_143af9a70 body=3144 status=ok
// SIG undefined FUN_143af9a70(void)

void FUN_143af9a70(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  char local_77;
  char local_76;
  byte local_75;
  int *local_70;
  char local_68;
  int local_64;
  ushort *local_60;
  int local_58;
  char local_54;
  byte *local_48;
  ushort local_38;
  ushort local_34;
  int local_1c;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  local_48 = *(byte **)(param_1 + 0x10);
  pbVar4 = *(byte **)(param_1 + 0x18);
  local_60 = *(ushort **)(param_1 + 0x20);
  puVar5 = *(ushort **)(param_1 + 0x28);
  local_70 = *(int **)(param_1 + 0x30);
  local_68 = *(char *)(lVar3 + 0x40);
  local_77 = *(char *)(lVar3 + 0x41);
  local_54 = *(char *)(lVar3 + 0x42);
  local_76 = *(char *)(lVar3 + 0x43);
  local_75 = *(byte *)(lVar3 + 0x44);
  if (local_77 == '\0') {
    local_1c = 0;
  }
  else {
    local_1c = -1;
  }
  local_64 = local_1c;
  local_58 = 0;
  if (local_68 == '\0') {
    if (local_77 != '\0') goto LAB_143afa3c1;
    goto LAB_143afa30a;
  }
  iVar6 = local_64;
  if (local_77 != '\0') goto switchD_143af9ded_default;
LAB_143af9b78:
  do {
    local_64 = iVar6;
    if (((pbVar4 <= local_48) || (puVar5 <= local_60)) || (bVar1 = *local_48, bVar1 < 0x20)) {
switchD_143af9ded_default:
      do {
        if (pbVar4 <= local_48) goto LAB_143afa626;
        if (puVar5 <= local_60) {
          *param_2 = 0xf;
          goto LAB_143afa626;
        }
        bVar1 = *local_48;
        local_48 = local_48 + 1;
        local_58 = local_58 + 1;
        iVar6 = local_58;
        switch(local_77) {
        case '\0':
          if ((1 << (bVar1 & 0x1f) & 0x2601U) != 0) {
            *local_60 = (ushort)bVar1;
            local_60 = local_60 + 1;
            if (local_70 != (int *)0x0) {
              *local_70 = local_64;
              local_70 = local_70 + 1;
            }
            goto LAB_143af9b78;
          }
          if (bVar1 < 0x10) {
            if (bVar1 < 9) {
              local_54 = bVar1 - 1;
              local_77 = '\x03';
            }
            else if (bVar1 == 0xb) {
              local_77 = '\x04';
            }
            else {
              if (bVar1 != 0xe) {
                if (bVar1 == 0xf) {
                  local_68 = '\0';
                  local_64 = local_58;
LAB_143afa30a:
                  do {
                    for (; ((local_48 + 1 < pbVar4 && (local_60 < puVar5)) &&
                           (0x12 < (byte)(*local_48 + 0x20))); local_48 = local_48 + 2) {
                      *local_60 = CONCAT11(*local_48,local_48[1]);
                      local_60 = local_60 + 1;
                      if (local_70 != (int *)0x0) {
                        *local_70 = local_64;
                        local_70 = local_70 + 1;
                      }
                      local_64 = local_58;
                      local_58 = local_58 + 2;
                    }
LAB_143afa3c1:
                    do {
                      while( true ) {
                        while( true ) {
                          if (pbVar4 <= local_48) goto LAB_143afa626;
                          if (puVar5 <= local_60) {
                            *param_2 = 0xf;
                            goto LAB_143afa626;
                          }
                          bVar1 = *local_48;
                          local_48 = local_48 + 1;
                          local_58 = local_58 + 1;
                          if (local_77 != '\0') break;
                          if ((byte)(bVar1 + 0x20) < 0x13) {
                            if (bVar1 < 0xe8) {
                              local_76 = bVar1 + 0x20;
                              local_68 = '\x01';
                              iVar6 = local_58;
                              goto LAB_143af9b78;
                            }
                            if (bVar1 < 0xf0) {
                              local_76 = bVar1 + 0x18;
                              local_68 = '\x01';
                              *(byte *)(lVar2 + 0x41) = bVar1;
                              *(undefined1 *)(lVar2 + 0x40) = 1;
                              local_77 = '\x06';
                              goto switchD_143af9ded_default;
                            }
                            if (bVar1 == 0xf1) {
                              local_68 = '\x01';
                              *(undefined1 *)(lVar2 + 0x41) = 0xf1;
                              *(undefined1 *)(lVar2 + 0x40) = 1;
                              local_77 = '\x04';
                              goto switchD_143af9ded_default;
                            }
                            if (bVar1 != 0xf0) {
                              *param_2 = 0xc;
                              *(byte *)(lVar2 + 0x41) = bVar1;
                              *(undefined1 *)(lVar2 + 0x40) = 1;
                              goto LAB_143afa626;
                            }
                            *(undefined1 *)(lVar2 + 0x41) = 0xf0;
                            *(undefined1 *)(lVar2 + 0x40) = 1;
                            local_77 = '\x01';
                          }
                          else {
                            *(byte *)(lVar2 + 0x41) = bVar1;
                            *(undefined1 *)(lVar2 + 0x40) = 1;
                            local_77 = '\x02';
                            local_75 = bVar1;
                          }
                        }
                        if (local_77 != '\x01') break;
                        *(byte *)(lVar2 + 0x42) = bVar1;
                        *(undefined1 *)(lVar2 + 0x40) = 2;
                        local_77 = '\x02';
                        local_75 = bVar1;
                      }
                    } while (local_77 != '\x02');
                    *local_60 = CONCAT11(local_75,bVar1);
                    local_60 = local_60 + 1;
                    if (local_70 != (int *)0x0) {
                      *local_70 = local_64;
                      local_70 = local_70 + 1;
                    }
                    local_77 = '\0';
                    local_64 = local_58;
                  } while( true );
                }
                *param_2 = 0xc;
                *(byte *)(lVar2 + 0x41) = bVar1;
                *(undefined1 *)(lVar2 + 0x40) = 1;
                goto LAB_143afa626;
              }
              local_77 = '\x01';
            }
          }
          else {
            if (bVar1 < 0x18) {
              local_76 = bVar1 - 0x10;
              goto LAB_143af9b78;
            }
            local_76 = bVar1 - 0x18;
            local_77 = '\x06';
          }
          *(byte *)(lVar2 + 0x41) = bVar1;
          *(undefined1 *)(lVar2 + 0x40) = 1;
          break;
        case '\x01':
          *(byte *)(lVar2 + 0x42) = bVar1;
          *(undefined1 *)(lVar2 + 0x40) = 2;
          local_77 = '\x02';
          local_75 = bVar1;
          break;
        case '\x02':
          goto switchD_143af9ded_caseD_2;
        case '\x03':
          if (bVar1 < 0x80) {
            *local_60 = (ushort)bVar1 +
                        (short)*(undefined4 *)(&DAT_145d00d78 + (longlong)local_54 * 4);
            local_60 = local_60 + 1;
            if (local_70 != (int *)0x0) {
              *local_70 = local_64;
              local_70 = local_70 + 1;
            }
          }
          else {
            uVar8 = (bVar1 & 0x7f) + *(int *)(lVar3 + (longlong)local_54 * 4);
            local_38 = (ushort)uVar8;
            if (uVar8 < 0x10000) {
              *local_60 = local_38;
              local_60 = local_60 + 1;
              if (local_70 != (int *)0x0) {
                *local_70 = local_64;
                local_70 = local_70 + 1;
              }
            }
            else {
              *local_60 = (short)(uVar8 >> 10) + 0xd7c0;
              puVar7 = local_60 + 1;
              if (puVar5 <= puVar7) {
                if (local_70 != (int *)0x0) {
                  *local_70 = local_64;
                  local_70 = local_70 + 1;
                }
                *(ushort *)(lVar2 + 0x90) = local_38 & 0x3ff | 0xdc00;
                *(undefined1 *)(lVar2 + 0x5d) = 1;
                *param_2 = 0xf;
                local_60 = puVar7;
                goto LAB_143afa626;
              }
              *puVar7 = local_38 & 0x3ff | 0xdc00;
              local_60 = local_60 + 2;
              if (local_70 != (int *)0x0) {
                *local_70 = local_64;
                local_70[1] = local_64;
                local_70 = local_70 + 2;
              }
            }
          }
          local_77 = '\0';
          goto LAB_143af9b78;
        case '\x04':
          local_76 = (char)((int)(uint)bVar1 >> 5);
          *(byte *)(lVar2 + 0x42) = bVar1;
          *(undefined1 *)(lVar2 + 0x40) = 2;
          local_77 = '\x05';
          local_75 = bVar1 & 0x1f;
          break;
        case '\x05':
          *(uint *)(lVar3 + (longlong)local_76 * 4) =
               ((uint)local_75 << 0xf | (uint)bVar1 << 7) + 0x10000;
          local_77 = '\0';
          goto LAB_143af9b78;
        case '\x06':
          if (bVar1 == 0) {
            *(undefined1 *)(lVar2 + 0x42) = 0;
            *(undefined1 *)(lVar2 + 0x40) = 2;
            goto LAB_143afa626;
          }
          if (bVar1 < 0x68) {
            *(uint *)(lVar3 + (longlong)local_76 * 4) = (uint)bVar1 << 7;
          }
          else if ((byte)(bVar1 + 0x98) < 0x40) {
            *(uint *)(lVar3 + (longlong)local_76 * 4) = (uint)bVar1 * 0x80 + 0xac00;
          }
          else {
            if (bVar1 < 0xf9) {
              *(byte *)(lVar2 + 0x42) = bVar1;
              *(undefined1 *)(lVar2 + 0x40) = 2;
              goto LAB_143afa626;
            }
            *(undefined4 *)(lVar3 + (longlong)local_76 * 4) =
                 *(undefined4 *)(&DAT_145d00db8 + (longlong)(int)(bVar1 - 0xf9) * 4);
          }
          local_77 = '\0';
          goto LAB_143af9b78;
        }
      } while( true );
    }
    local_48 = local_48 + 1;
    local_58 = local_58 + 1;
    iVar6 = local_58;
    if (bVar1 < 0x80) {
      *local_60 = (ushort)bVar1;
      local_60 = local_60 + 1;
      if (local_70 != (int *)0x0) {
        *local_70 = local_64;
        local_70 = local_70 + 1;
      }
    }
    else {
      uVar8 = (bVar1 & 0x7f) + *(int *)(lVar3 + (longlong)local_76 * 4);
      local_34 = (ushort)uVar8;
      if (uVar8 < 0x10000) {
        *local_60 = local_34;
        local_60 = local_60 + 1;
        if (local_70 != (int *)0x0) {
          *local_70 = local_64;
          local_70 = local_70 + 1;
        }
      }
      else {
        *local_60 = (short)(uVar8 >> 10) + 0xd7c0;
        puVar7 = local_60 + 1;
        if (puVar5 <= puVar7) {
          if (local_70 != (int *)0x0) {
            *local_70 = local_64;
            local_70 = local_70 + 1;
          }
          *(ushort *)(lVar2 + 0x90) = local_34 & 0x3ff | 0xdc00;
          *(undefined1 *)(lVar2 + 0x5d) = 1;
          *param_2 = 0xf;
          local_60 = puVar7;
LAB_143afa626:
          if ((*param_2 < 1) || (*param_2 == 0xf)) {
            if (local_77 == '\0') {
              *(undefined1 *)(lVar2 + 0x40) = 0;
            }
          }
          else {
            local_77 = '\0';
          }
          *(char *)(lVar3 + 0x40) = local_68;
          *(char *)(lVar3 + 0x41) = local_77;
          *(char *)(lVar3 + 0x42) = local_54;
          *(char *)(lVar3 + 0x43) = local_76;
          *(byte *)(lVar3 + 0x44) = local_75;
          *(byte **)(param_1 + 0x10) = local_48;
          *(ushort **)(param_1 + 0x20) = local_60;
          *(int **)(param_1 + 0x30) = local_70;
          return;
        }
        *puVar7 = local_34 & 0x3ff | 0xdc00;
        local_60 = local_60 + 2;
        if (local_70 != (int *)0x0) {
          *local_70 = local_64;
          local_70[1] = local_64;
          local_70 = local_70 + 2;
        }
      }
    }
  } while( true );
switchD_143af9ded_caseD_2:
  *local_60 = CONCAT11(local_75,bVar1);
  local_60 = local_60 + 1;
  if (local_70 != (int *)0x0) {
    *local_70 = local_64;
    local_70 = local_70 + 1;
  }
  local_77 = '\0';
  goto LAB_143af9b78;
}



// FUNCTION 143afa6f0 FUN_143afa6f0 body=2423 status=ok
// SIG undefined FUN_143afa6f0(void)

void FUN_143afa6f0(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  char local_67;
  char local_66;
  byte local_65;
  char local_64;
  ushort *local_60;
  char local_58;
  byte *local_48;
  ushort local_38;
  ushort local_34;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  local_48 = *(byte **)(param_1 + 0x10);
  pbVar4 = *(byte **)(param_1 + 0x18);
  local_60 = *(ushort **)(param_1 + 0x20);
  puVar5 = *(ushort **)(param_1 + 0x28);
  local_64 = *(char *)(lVar3 + 0x40);
  local_67 = *(char *)(lVar3 + 0x41);
  local_58 = *(char *)(lVar3 + 0x42);
  local_66 = *(char *)(lVar3 + 0x43);
  local_65 = *(byte *)(lVar3 + 0x44);
  if (local_64 == '\0') {
    if (local_67 != '\0') goto LAB_143afadd4;
    goto LAB_143afad5c;
  }
  if (local_67 != '\0') goto switchD_143afa963_default;
LAB_143afa7ad:
  do {
    if (((pbVar4 <= local_48) || (puVar5 <= local_60)) || (bVar1 = *local_48, bVar1 < 0x20)) {
switchD_143afa963_default:
      do {
        if (pbVar4 <= local_48) goto LAB_143afaff2;
        if (puVar5 <= local_60) {
          *param_2 = 0xf;
          goto LAB_143afaff2;
        }
        bVar1 = *local_48;
        local_48 = local_48 + 1;
        switch(local_67) {
        case '\0':
          if ((1 << (bVar1 & 0x1f) & 0x2601U) != 0) {
            *local_60 = (ushort)bVar1;
            local_60 = local_60 + 1;
            goto LAB_143afa7ad;
          }
          if (bVar1 < 0x10) {
            if (bVar1 < 9) {
              local_58 = bVar1 - 1;
              local_67 = '\x03';
            }
            else if (bVar1 == 0xb) {
              local_67 = '\x04';
            }
            else {
              if (bVar1 != 0xe) {
                if (bVar1 == 0xf) {
                  local_64 = '\0';
LAB_143afad5c:
                  do {
                    for (; ((local_48 + 1 < pbVar4 && (local_60 < puVar5)) &&
                           (0x12 < (byte)(*local_48 + 0x20))); local_48 = local_48 + 2) {
                      *local_60 = CONCAT11(*local_48,local_48[1]);
                      local_60 = local_60 + 1;
                    }
LAB_143afadd4:
                    do {
                      while( true ) {
                        while( true ) {
                          if (pbVar4 <= local_48) goto LAB_143afaff2;
                          if (puVar5 <= local_60) {
                            *param_2 = 0xf;
                            goto LAB_143afaff2;
                          }
                          bVar1 = *local_48;
                          local_48 = local_48 + 1;
                          if (local_67 != '\0') break;
                          if ((byte)(bVar1 + 0x20) < 0x13) {
                            if (bVar1 < 0xe8) {
                              local_66 = bVar1 + 0x20;
                              local_64 = '\x01';
                              goto LAB_143afa7ad;
                            }
                            if (bVar1 < 0xf0) {
                              local_66 = bVar1 + 0x18;
                              local_64 = '\x01';
                              *(byte *)(lVar2 + 0x41) = bVar1;
                              *(undefined1 *)(lVar2 + 0x40) = 1;
                              local_67 = '\x06';
                              goto switchD_143afa963_default;
                            }
                            if (bVar1 == 0xf1) {
                              local_64 = '\x01';
                              *(undefined1 *)(lVar2 + 0x41) = 0xf1;
                              *(undefined1 *)(lVar2 + 0x40) = 1;
                              local_67 = '\x04';
                              goto switchD_143afa963_default;
                            }
                            if (bVar1 != 0xf0) {
                              *param_2 = 0xc;
                              *(byte *)(lVar2 + 0x41) = bVar1;
                              *(undefined1 *)(lVar2 + 0x40) = 1;
                              goto LAB_143afaff2;
                            }
                            *(undefined1 *)(lVar2 + 0x41) = 0xf0;
                            *(undefined1 *)(lVar2 + 0x40) = 1;
                            local_67 = '\x01';
                          }
                          else {
                            *(byte *)(lVar2 + 0x41) = bVar1;
                            *(undefined1 *)(lVar2 + 0x40) = 1;
                            local_67 = '\x02';
                            local_65 = bVar1;
                          }
                        }
                        if (local_67 != '\x01') break;
                        *(byte *)(lVar2 + 0x42) = bVar1;
                        *(undefined1 *)(lVar2 + 0x40) = 2;
                        local_67 = '\x02';
                        local_65 = bVar1;
                      }
                    } while (local_67 != '\x02');
                    *local_60 = CONCAT11(local_65,bVar1);
                    local_60 = local_60 + 1;
                    local_67 = '\0';
                  } while( true );
                }
                *param_2 = 0xc;
                *(byte *)(lVar2 + 0x41) = bVar1;
                *(undefined1 *)(lVar2 + 0x40) = 1;
                goto LAB_143afaff2;
              }
              local_67 = '\x01';
            }
          }
          else {
            if (bVar1 < 0x18) {
              local_66 = bVar1 - 0x10;
              goto LAB_143afa7ad;
            }
            local_66 = bVar1 - 0x18;
            local_67 = '\x06';
          }
          *(byte *)(lVar2 + 0x41) = bVar1;
          *(undefined1 *)(lVar2 + 0x40) = 1;
          break;
        case '\x01':
          *(byte *)(lVar2 + 0x42) = bVar1;
          *(undefined1 *)(lVar2 + 0x40) = 2;
          local_67 = '\x02';
          local_65 = bVar1;
          break;
        case '\x02':
          goto switchD_143afa963_caseD_2;
        case '\x03':
          if (bVar1 < 0x80) {
            *local_60 = (ushort)bVar1 +
                        (short)*(undefined4 *)(&DAT_145d00d78 + (longlong)local_58 * 4);
            local_60 = local_60 + 1;
          }
          else {
            uVar7 = (bVar1 & 0x7f) + *(int *)(lVar3 + (longlong)local_58 * 4);
            local_34 = (ushort)uVar7;
            if (uVar7 < 0x10000) {
              *local_60 = local_34;
              local_60 = local_60 + 1;
            }
            else {
              *local_60 = (short)(uVar7 >> 10) + 0xd7c0;
              puVar6 = local_60 + 1;
              if (puVar5 <= puVar6) {
                *(ushort *)(lVar2 + 0x90) = local_34 & 0x3ff | 0xdc00;
                *(undefined1 *)(lVar2 + 0x5d) = 1;
                *param_2 = 0xf;
                local_60 = puVar6;
                goto LAB_143afaff2;
              }
              *puVar6 = local_34 & 0x3ff | 0xdc00;
              local_60 = local_60 + 2;
            }
          }
          local_67 = '\0';
          goto LAB_143afa7ad;
        case '\x04':
          local_66 = (char)((int)(uint)bVar1 >> 5);
          *(byte *)(lVar2 + 0x42) = bVar1;
          *(undefined1 *)(lVar2 + 0x40) = 2;
          local_67 = '\x05';
          local_65 = bVar1 & 0x1f;
          break;
        case '\x05':
          *(uint *)(lVar3 + (longlong)local_66 * 4) =
               ((uint)local_65 << 0xf | (uint)bVar1 << 7) + 0x10000;
          local_67 = '\0';
          goto LAB_143afa7ad;
        case '\x06':
          if (bVar1 == 0) {
            *(undefined1 *)(lVar2 + 0x42) = 0;
            *(undefined1 *)(lVar2 + 0x40) = 2;
            goto LAB_143afaff2;
          }
          if (bVar1 < 0x68) {
            *(uint *)(lVar3 + (longlong)local_66 * 4) = (uint)bVar1 << 7;
          }
          else if ((byte)(bVar1 + 0x98) < 0x40) {
            *(uint *)(lVar3 + (longlong)local_66 * 4) = (uint)bVar1 * 0x80 + 0xac00;
          }
          else {
            if (bVar1 < 0xf9) {
              *(byte *)(lVar2 + 0x42) = bVar1;
              *(undefined1 *)(lVar2 + 0x40) = 2;
              goto LAB_143afaff2;
            }
            *(undefined4 *)(lVar3 + (longlong)local_66 * 4) =
                 *(undefined4 *)(&DAT_145d00db8 + (longlong)(int)(bVar1 - 0xf9) * 4);
          }
          local_67 = '\0';
          goto LAB_143afa7ad;
        }
      } while( true );
    }
    local_48 = local_48 + 1;
    if (bVar1 < 0x80) {
      *local_60 = (ushort)bVar1;
      local_60 = local_60 + 1;
    }
    else {
      uVar7 = (bVar1 & 0x7f) + *(int *)(lVar3 + (longlong)local_66 * 4);
      local_38 = (ushort)uVar7;
      if (uVar7 < 0x10000) {
        *local_60 = local_38;
        local_60 = local_60 + 1;
      }
      else {
        *local_60 = (short)(uVar7 >> 10) + 0xd7c0;
        puVar6 = local_60 + 1;
        if (puVar5 <= puVar6) {
          *(ushort *)(lVar2 + 0x90) = local_38 & 0x3ff | 0xdc00;
          *(undefined1 *)(lVar2 + 0x5d) = 1;
          *param_2 = 0xf;
          local_60 = puVar6;
LAB_143afaff2:
          if ((*param_2 < 1) || (*param_2 == 0xf)) {
            if (local_67 == '\0') {
              *(undefined1 *)(lVar2 + 0x40) = 0;
            }
          }
          else {
            local_67 = '\0';
          }
          *(char *)(lVar3 + 0x40) = local_64;
          *(char *)(lVar3 + 0x41) = local_67;
          *(char *)(lVar3 + 0x42) = local_58;
          *(char *)(lVar3 + 0x43) = local_66;
          *(byte *)(lVar3 + 0x44) = local_65;
          *(byte **)(param_1 + 0x10) = local_48;
          *(ushort **)(param_1 + 0x20) = local_60;
          return;
        }
        *puVar6 = local_38 & 0x3ff | 0xdc00;
        local_60 = local_60 + 2;
      }
    }
  } while( true );
switchD_143afa963_caseD_2:
  *local_60 = CONCAT11(local_65,bVar1);
  local_60 = local_60 + 1;
  local_67 = '\0';
  goto LAB_143afa7ad;
}



// FUNCTION 143afb0a0 FUN_143afb0a0 body=4443 status=ok
// SIG undefined FUN_143afb0a0(void)

void FUN_143afb0a0(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte local_98;
  uint local_94;
  char local_8f;
  int local_8c;
  byte *local_88;
  int *local_80;
  int local_78;
  int local_74;
  int local_70;
  ushort *local_58;
  int local_50;
  int local_4c;
  ushort local_48;
  uint local_44;
  byte *local_40;
  int local_34;
  ushort *local_30;
  int local_28;
  int local_20;
  longlong local_18;
  undefined4 local_10;
  byte bVar7;
  
  local_18 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(local_18 + 0x10);
  local_58 = *(ushort **)(param_1 + 0x10);
  local_30 = *(ushort **)(param_1 + 0x18);
  local_88 = *(byte **)(param_1 + 0x20);
  local_78 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  local_80 = *(int **)(param_1 + 0x30);
  local_8f = *(char *)(lVar2 + 0x48);
  local_98 = *(byte *)(lVar2 + 0x49);
  local_74 = *(int *)(lVar2 + 0x20 + (ulonglong)local_98 * 4);
  local_94 = *(uint *)(local_18 + 0x54);
  if (local_94 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = -1;
  }
  local_70 = local_20;
  local_50 = 0;
  do {
    if (local_8f == '\0') {
      if ((local_94 == 0) || (local_78 < 1)) {
        while( true ) {
          if (local_30 <= local_58) goto LAB_143afbdfc;
          if (local_78 < 1) {
            *param_2 = 0xf;
            goto LAB_143afbdfc;
          }
          uVar1 = *local_58;
          local_94 = (uint)uVar1;
          local_58 = local_58 + 1;
          local_50 = local_50 + 1;
          if (0xa3ff < local_94 - 0x3400) {
            if (local_94 - 0x3400 < 0xbf00) {
              if (0xdfff < local_94) {
                local_94 = local_94 | 0xf00000;
                local_8c = 3;
                goto LAB_143afbe5d;
              }
              if ((uVar1 & 0x400) == 0) goto LAB_143afbba1;
              *param_2 = 0xc;
              goto LAB_143afbdfc;
            }
            if ((local_30 <= local_58) || (0xa3ff < *local_58 - 0x3400)) {
              if ((local_94 - 0x30 < 10) || ((local_94 - 0x61 < 0x1a || (local_94 - 0x41 < 0x1a))))
              {
                local_8f = '\x01';
                local_94 = local_94 | (local_98 + 0xe0) * 0x100 | local_94;
                local_8c = 2;
                goto LAB_143afbe5d;
              }
              bVar4 = FUN_143afc3b0(lVar2 + 0x20,local_94);
              if (-1 < (char)bVar4) {
                local_8f = '\x01';
                local_74 = *(int *)(lVar2 + 0x20 + (ulonglong)bVar4 * 4);
                FUN_143afc470(lVar2,bVar4);
                local_94 = (bVar4 + 0xe0) * 0x100 | local_94 - local_74 | 0x80;
                local_8c = 2;
                local_98 = bVar4;
                goto LAB_143afbe5d;
              }
              iVar10 = FUN_143afc240(local_94,&local_4c);
              if (-1 < iVar10) {
                local_8f = '\x01';
                local_98 = FUN_143afc350(lVar2);
                iVar9 = local_4c;
                *(int *)(lVar2 + 0x20 + (ulonglong)local_98 * 4) = local_4c;
                local_74 = local_4c;
                FUN_143afc470(lVar2,local_98);
                local_94 = (local_98 + 0xe8) * 0x10000 | iVar10 << 8 | local_94 - iVar9 | 0x80;
                local_8c = 3;
                goto LAB_143afbe5d;
              }
            }
            local_8c = 2;
            goto LAB_143afbe5d;
          }
          if (local_78 < 2) break;
          *local_88 = (byte)(uVar1 >> 8);
          local_94._0_1_ = (byte)uVar1;
          local_88[1] = (byte)local_94;
          local_88 = local_88 + 2;
          if (local_80 != (int *)0x0) {
            *local_80 = local_70;
            local_80[1] = local_70;
            local_80 = local_80 + 2;
          }
          local_78 = local_78 + -2;
          local_94 = 0;
          local_70 = local_50;
        }
        local_8c = 2;
      }
      else {
LAB_143afbba1:
        local_48 = (ushort)local_94;
        if (local_30 <= local_58) goto LAB_143afbdfc;
        uVar1 = *local_58;
        if ((uVar1 & 0xfc00) != 0xdc00) {
          *param_2 = 0xc;
          goto LAB_143afbdfc;
        }
        local_58 = local_58 + 1;
        local_50 = local_50 + 1;
        iVar10 = local_94 * 0x400 + -0x35fdc00 + (uint)uVar1;
        bVar4 = FUN_143afc3b0(lVar2 + 0x20,iVar10);
        if (((char)bVar4 < '\0') || ((local_58 < local_30 && (*local_58 - 0x3400 < 0xa400)))) {
          if ((local_58 < local_30) &&
             ((local_48 == *local_58 && (iVar9 = FUN_143afc240(iVar10,&local_4c), -1 < iVar9)))) {
            local_8f = '\x01';
            local_98 = FUN_143afc350(lVar2);
            iVar3 = local_4c;
            *(int *)(lVar2 + 0x20 + (ulonglong)local_98 * 4) = local_4c;
            local_74 = local_4c;
            FUN_143afc470(lVar2,local_98);
            local_94 = (uint)local_98 << 0x15 | 0xf1000000 | (iVar9 + -0x200) * 0x100 |
                       iVar10 - iVar3 | 0x80;
            local_8c = 4;
          }
          else {
            local_94 = CONCAT22(local_48,uVar1);
            local_8c = 4;
          }
        }
        else {
          local_8f = '\x01';
          local_74 = *(int *)(lVar2 + 0x20 + (ulonglong)bVar4 * 4);
          FUN_143afc470(lVar2,bVar4);
          local_94 = (bVar4 + 0xe0) * 0x100 | iVar10 - local_74 | 0x80;
          local_8c = 2;
          local_98 = bVar4;
        }
      }
    }
    else {
      if (local_94 == 0) goto LAB_143afb1c9;
      if (local_78 < 1) goto LAB_143afb1c9;
      while( true ) {
        local_48 = (ushort)local_94;
        if (local_30 <= local_58) goto LAB_143afbdfc;
        uVar1 = *local_58;
        if ((uVar1 & 0xfc00) != 0xdc00) {
          *param_2 = 0xc;
          goto LAB_143afbdfc;
        }
        local_58 = local_58 + 1;
        local_50 = local_50 + 1;
        iVar10 = local_94 * 0x400 + -0x35fdc00 + (uint)uVar1;
        local_44 = iVar10 - local_74;
        if (0x7f < local_44) {
          bVar4 = FUN_143afc3b0(lVar2 + 0x20,iVar10);
          if ((char)bVar4 < '\0') {
            iVar9 = FUN_143afc240(iVar10,&local_4c);
            if (iVar9 < 0) {
              local_8f = '\0';
              *local_88 = 0xf;
              local_88 = local_88 + 1;
              if (local_80 != (int *)0x0) {
                *local_80 = local_70;
                local_80 = local_80 + 1;
              }
              local_78 = local_78 + -1;
              local_94 = CONCAT22(local_48,uVar1);
              local_8c = 4;
            }
            else {
              local_98 = FUN_143afc350(lVar2);
              iVar3 = local_4c;
              *(int *)(lVar2 + 0x20 + (ulonglong)local_98 * 4) = local_4c;
              local_74 = local_4c;
              FUN_143afc470(lVar2,local_98);
              local_94 = (uint)local_98 << 0x15 | 0xb000000 | (iVar9 + -0x200) * 0x100 |
                         iVar10 - iVar3 | 0x80;
              local_8c = 4;
            }
          }
          else {
            local_74 = *(int *)(lVar2 + 0x20 + (ulonglong)bVar4 * 4);
            FUN_143afc470(lVar2,bVar4);
            local_94 = (bVar4 + 0x10) * 0x100 | iVar10 - local_74 | 0x80;
            local_8c = 2;
            local_98 = bVar4;
          }
          goto LAB_143afbe5d;
        }
        *local_88 = (byte)local_44 | 0x80;
        local_88 = local_88 + 1;
        if (local_80 != (int *)0x0) {
          *local_80 = local_70;
          local_80 = local_80 + 1;
        }
        local_78 = local_78 + -1;
        while( true ) {
          while( true ) {
            while( true ) {
              local_94 = 0;
              local_70 = local_50;
LAB_143afb1c9:
              if (local_30 <= local_58) goto LAB_143afbdfc;
              if (local_78 < 1) {
                *param_2 = 0xf;
                goto LAB_143afbdfc;
              }
              uVar1 = *local_58;
              uVar8 = (uint)uVar1;
              local_58 = local_58 + 1;
              local_50 = local_50 + 1;
              local_94._0_1_ = (byte)uVar1;
              if (0x5f < uVar8 - 0x20) break;
              *local_88 = (byte)local_94;
              local_88 = local_88 + 1;
              if (local_80 != (int *)0x0) {
                *local_80 = local_70;
                local_80 = local_80 + 1;
              }
              local_78 = local_78 + -1;
            }
            if (0x1f < uVar8) break;
            local_10 = 1;
            if ((1 << ((byte)local_94 & 0x1f) & 0x2601U) == 0) {
              local_94 = uVar8 | 0x100;
              local_8c = 2;
              goto LAB_143afbe5d;
            }
            *local_88 = (byte)local_94;
            local_88 = local_88 + 1;
            if (local_80 != (int *)0x0) {
              *local_80 = local_70;
              local_80 = local_80 + 1;
            }
            local_78 = local_78 + -1;
          }
          local_44 = uVar8 - local_74;
          if (0x7f < local_44) break;
          *local_88 = (byte)local_44 | 0x80;
          local_88 = local_88 + 1;
          if (local_80 != (int *)0x0) {
            *local_80 = local_70;
            local_80 = local_80 + 1;
          }
          local_78 = local_78 + -1;
        }
        if ((uVar8 & 0xfffff800) != 0xd800) break;
        local_94 = uVar8;
        if ((uVar1 & 0x400) != 0) {
          *param_2 = 0xc;
          goto LAB_143afbdfc;
        }
      }
      if (uVar8 < 0xa0) {
        local_94 = uVar8 & 0x7f | 0x200;
        local_8c = 2;
      }
      else if ((uVar8 == 0xfeff) || (0xffef < uVar8)) {
        local_94 = uVar8 | 0xe0000;
        local_8c = 3;
      }
      else {
        bVar4 = FUN_143afc3b0(lVar2 + 0x20,uVar8);
        if ((char)bVar4 < '\0') {
          cVar5 = FUN_143afc3b0(&DAT_145d00d78,uVar8);
          if (cVar5 < '\0') {
            iVar10 = FUN_143afc240(uVar8,&local_4c);
            if (iVar10 < 0) {
              if ((uVar8 - 0x3400 < 0xa400) &&
                 ((local_30 <= local_58 || (*local_58 - 0x3400 < 0xa400)))) {
                local_8f = '\0';
                local_94 = uVar8 | 0xf0000;
                local_8c = 3;
              }
              else {
                local_94 = uVar8 | 0xe0000;
                local_8c = 3;
              }
            }
            else {
              local_98 = FUN_143afc350(lVar2);
              iVar9 = local_4c;
              *(int *)(lVar2 + 0x20 + (ulonglong)local_98 * 4) = local_4c;
              local_74 = local_4c;
              FUN_143afc470(lVar2,local_98);
              local_94 = (local_98 + 0x18) * 0x10000 | iVar10 << 8 | uVar8 - iVar9 | 0x80;
              local_8c = 3;
            }
          }
          else {
            local_94 = (cVar5 + 1) * 0x100 | uVar8 - *(int *)(&DAT_145d00d78 + (longlong)cVar5 * 4);
            local_8c = 2;
          }
        }
        else if ((local_58 < local_30) &&
                (cVar5 = FUN_143afc400(*(undefined4 *)(lVar2 + 0x20 + (longlong)(char)bVar4 * 4),
                                       *local_58), cVar5 == '\0')) {
          local_94 = ((char)bVar4 + 1) * 0x100 |
                     uVar8 - *(int *)(lVar2 + 0x20 + (longlong)(char)bVar4 * 4) | 0x80;
          local_8c = 2;
        }
        else {
          local_74 = *(int *)(lVar2 + 0x20 + (ulonglong)bVar4 * 4);
          FUN_143afc470(lVar2,bVar4);
          local_94 = (bVar4 + 0x10) * 0x100 | uVar8 - local_74 | 0x80;
          local_8c = 2;
          local_98 = bVar4;
        }
      }
    }
LAB_143afbe5d:
    bVar4 = (byte)(local_94 >> 8);
    bVar6 = (byte)(local_94 >> 0x10);
    bVar7 = (byte)(local_94 >> 0x18);
    if (local_78 < local_8c) break;
    if (local_80 == (int *)0x0) {
      local_28 = local_8c;
      if (local_8c != 1) {
        if (local_8c != 2) {
          if (local_8c != 3) {
            if (local_8c != 4) goto LAB_143afc029;
            *local_88 = bVar7;
            local_88 = local_88 + 1;
          }
          *local_88 = bVar6;
          local_88 = local_88 + 1;
        }
        *local_88 = bVar4;
        local_88 = local_88 + 1;
      }
      *local_88 = (byte)local_94;
      local_88 = local_88 + 1;
    }
    else {
      local_34 = local_8c;
      if (local_8c != 1) {
        if (local_8c != 2) {
          if (local_8c != 3) {
            if (local_8c != 4) goto LAB_143afc029;
            *local_88 = bVar7;
            local_88 = local_88 + 1;
            *local_80 = local_70;
            local_80 = local_80 + 1;
          }
          *local_88 = bVar6;
          local_88 = local_88 + 1;
          *local_80 = local_70;
          local_80 = local_80 + 1;
        }
        *local_88 = bVar4;
        local_88 = local_88 + 1;
        *local_80 = local_70;
        local_80 = local_80 + 1;
      }
      *local_88 = (byte)local_94;
      local_88 = local_88 + 1;
      *local_80 = local_70;
      local_80 = local_80 + 1;
    }
LAB_143afc029:
    local_78 = local_78 - local_8c;
    local_94 = 0;
    local_70 = local_50;
  } while( true );
  local_8c = local_8c - local_78;
  local_40 = (byte *)(local_18 + 0x68);
  if (local_8c == 1) {
LAB_143afc0fa:
    *local_40 = (byte)local_94;
  }
  else {
    if (local_8c == 2) {
LAB_143afc0df:
      *local_40 = bVar4;
      local_40 = local_40 + 1;
      goto LAB_143afc0fa;
    }
    if (local_8c == 3) {
LAB_143afc0c4:
      *local_40 = bVar6;
      local_40 = local_40 + 1;
      goto LAB_143afc0df;
    }
    if (local_8c == 4) {
      *local_40 = bVar7;
      local_40 = (byte *)(local_18 + 0x69);
      goto LAB_143afc0c4;
    }
  }
  *(char *)(local_18 + 0x5b) = (char)local_8c;
  local_94 = local_94 >> ((char)local_8c * '\b' & 0x1fU);
  if (local_78 != 1) {
    if (local_78 != 2) {
      if (local_78 != 3) goto LAB_143afc20e;
      *local_88 = (byte)(local_94 >> 0x10);
      local_88 = local_88 + 1;
      if (local_80 != (int *)0x0) {
        *local_80 = local_70;
        local_80 = local_80 + 1;
      }
    }
    *local_88 = (byte)(local_94 >> 8);
    local_88 = local_88 + 1;
    if (local_80 != (int *)0x0) {
      *local_80 = local_70;
      local_80 = local_80 + 1;
    }
  }
  *local_88 = (byte)local_94;
  local_88 = local_88 + 1;
  if (local_80 != (int *)0x0) {
    *local_80 = local_70;
    local_80 = local_80 + 1;
  }
LAB_143afc20e:
  *param_2 = 0xf;
  local_94 = 0;
LAB_143afbdfc:
  *(char *)(lVar2 + 0x48) = local_8f;
  *(byte *)(lVar2 + 0x49) = local_98;
  *(uint *)(local_18 + 0x54) = local_94;
  *(ushort **)(param_1 + 0x10) = local_58;
  *(byte **)(param_1 + 0x20) = local_88;
  *(int **)(param_1 + 0x30) = local_80;
  return;
}



// FUNCTION 143afc240 FUN_143afc240 body=256 status=ok
// SIG undefined FUN_143afc240(void)

uint FUN_143afc240(uint param_1,uint *param_2)

{
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (6 < local_18) {
      if (param_1 < 0x80) {
        param_1 = 0xffffffff;
      }
      else if (((param_1 < 0x3400) || (param_1 - 0x10000 < 0x4000)) || (param_1 - 0x1d000 < 0x3000))
      {
        *param_2 = param_1 & 0x7fffff80;
        param_1 = param_1 >> 7;
      }
      else if (((param_1 < 0xe000) || (param_1 == 0xfeff)) || (0xffef < param_1)) {
        param_1 = 0xffffffff;
      }
      else {
        *param_2 = param_1 & 0x7fffff80;
        param_1 = param_1 - 0xac00 >> 7;
      }
      return param_1;
    }
    if (param_1 - *(int *)(&DAT_145d00db8 + (longlong)local_18 * 4) < 0x80) break;
    local_18 = local_18 + 1;
  }
  *param_2 = *(uint *)(&DAT_145d00db8 + (longlong)local_18 * 4);
  return local_18 + 0xf9;
}



// FUNCTION 143afc350 FUN_143afc350 body=87 status=ok
// SIG undefined FUN_143afc350(void)

undefined1 FUN_143afc350(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = *(undefined1 *)(param_1 + 0x4c + (longlong)*(char *)(param_1 + 0x4b));
  cVar2 = *(char *)(param_1 + 0x4b) + '\x01';
  *(char *)(param_1 + 0x4b) = cVar2;
  if (cVar2 == '\b') {
    *(undefined1 *)(param_1 + 0x4b) = 0;
  }
  return uVar1;
}



// FUNCTION 143afc3b0 FUN_143afc3b0 body=76 status=ok
// SIG undefined FUN_143afc3b0(void)

undefined1 FUN_143afc3b0(longlong param_1,int param_2)

{
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (7 < local_18) {
      return 0xff;
    }
    if ((uint)(param_2 - *(int *)(param_1 + (longlong)local_18 * 4)) < 0x80) break;
    local_18 = local_18 + 1;
  }
  return (undefined1)local_18;
}



// FUNCTION 143afc400 FUN_143afc400 body=99 status=ok
// SIG undefined FUN_143afc400(void)

undefined1 FUN_143afc400(uint param_1,uint param_2)

{
  undefined1 local_18;
  
  if ((param_1 + 0x7f < param_2) ||
     ((param_2 < param_1 &&
      ((0x7f < param_2 || ((param_2 < 0x20 && ((1 << ((byte)param_2 & 0x1f) & 0x2601U) == 0))))))))
  {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143afc470 FUN_143afc470 body=194 status=ok
// SIG undefined FUN_143afc470(void)

void FUN_143afc470(longlong param_1,char param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = (int)*(char *)(param_1 + 0x4b);
  do {
    local_14 = local_14 + -1;
    if (local_14 < 0) {
      local_14 = 7;
    }
  } while (*(char *)(param_1 + 0x4c + (longlong)local_14) != param_2);
  local_18 = local_14 + 1;
  if (local_18 == 8) {
    local_18 = 0;
  }
  while (local_18 != *(char *)(param_1 + 0x4b)) {
    *(undefined1 *)(param_1 + 0x4c + (longlong)local_14) =
         *(undefined1 *)(param_1 + 0x4c + (longlong)local_18);
    local_14 = local_18;
    local_18 = local_18 + 1;
    if (local_18 == 8) {
      local_18 = 0;
    }
  }
  *(char *)(param_1 + 0x4c + (longlong)local_14) = param_2;
  return;
}



// FUNCTION 143afc540 FUN_143afc540 body=70 status=ok
// SIG undefined FUN_143afc540(void)

void FUN_143afc540(longlong param_1,int param_2)

{
  if (param_2 < 2) {
    *(undefined4 *)(param_1 + 0x48) = 0x1000000;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xf0000000 | 0x1000000;
  }
  return;
}



// FUNCTION 143afc590 FUN_143afc590 body=87 status=ok
// SIG undefined FUN_143afc590(void)

void FUN_143afc590(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  if ((*(uint *)(param_1 + 0x38) & 0xf) < 2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x38) << 0x1c;
    FUN_143afc540(param_1,0);
  }
  else {
    *param_3 = 1;
  }
  return;
}



// FUNCTION 143afc5f0 FUN_143afc5f0 body=1731 status=ok
// SIG undefined FUN_143afc5f0(void)

void FUN_143afc5f0(longlong param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  ushort *puVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte local_78;
  char local_76;
  byte local_75;
  ushort local_74;
  byte local_70;
  int local_6c;
  int *local_68;
  ushort *local_60;
  int local_58;
  byte *local_50;
  int local_48;
  ushort local_40;
  int local_24;
  
  lVar3 = *(longlong *)(param_1 + 8);
  pbVar4 = *(byte **)(param_1 + 0x18);
  local_60 = *(ushort **)(param_1 + 0x20);
  puVar5 = *(ushort **)(param_1 + 0x28);
  local_68 = *(int **)(param_1 + 0x30);
  uVar2 = *(uint *)(lVar3 + 0x48);
  local_70 = (byte)(uVar2 >> 0x18) & 1;
  local_75 = (byte)(uVar2 >> 0x10);
  local_40 = (ushort)uVar2;
  local_74 = local_40;
  pbVar9 = (byte *)(lVar3 + 0x41);
  if (*(byte *)(lVar3 + 0x40) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = -1;
  }
  local_6c = local_24;
  local_58 = 0;
  local_78 = *(byte *)(lVar3 + 0x40);
  iVar8 = local_6c;
  iVar6 = local_58;
  local_50 = *(byte **)(param_1 + 0x10);
  if ((uVar2 & 0x1000000) == 0) goto switchD_143afc9f9_default;
LAB_143afc6e4:
  local_6c = iVar8;
  local_78 = 0;
  local_48 = (int)pbVar4 - (int)local_50;
  iVar8 = (int)((longlong)puVar5 - (longlong)local_60 >> 1);
  if (iVar8 < local_48) {
    local_48 = iVar8;
  }
  do {
    if (local_48 < 1) {
LAB_143afc83a:
      if ((local_50 < pbVar4) && (puVar5 <= local_60)) {
        *param_2 = 0xf;
      }
      goto LAB_143afcc25;
    }
    bVar1 = *local_50;
    local_50 = local_50 + 1;
    if ((((0x5d < (byte)(bVar1 - 0x20)) || (bVar1 == 0x5c)) && (bVar1 != 0xd)) &&
       ((bVar1 != 10 && (bVar1 != 9)))) {
      *pbVar9 = bVar1;
      local_78 = 1;
      *param_2 = 0xc;
      goto LAB_143afc83a;
    }
    if (bVar1 == 0x2b) break;
    *local_60 = (ushort)bVar1;
    local_60 = local_60 + 1;
    if (local_68 != (int *)0x0) {
      *local_68 = local_6c;
      local_68 = local_68 + 1;
      local_6c = local_6c + 1;
    }
    local_48 = local_48 + -1;
  } while( true );
  local_6c = local_6c + 1;
  local_70 = 0;
  local_78 = 0;
  local_74 = 0;
  local_75 = 0xff;
  iVar6 = local_6c;
switchD_143afc9f9_default:
  while( true ) {
    local_58 = iVar6;
    if (pbVar4 <= local_50) goto LAB_143afcc25;
    if (puVar5 <= local_60) {
      *param_2 = 0xf;
      goto LAB_143afcc25;
    }
    bVar1 = *local_50;
    pbVar9[local_78] = bVar1;
    bVar7 = local_78 + 1;
    pbVar10 = local_50 + 1;
    iVar8 = local_58 + 1;
    local_76 = -3;
    if (((0x7d < bVar1) || (local_76 = (&DAT_145d01070)[bVar1], local_76 == -3)) || (local_76 == -1)
       ) {
      local_70 = 1;
      if (local_75 == 0xff) {
        *pbVar9 = 0x2b;
        local_78 = 1;
        *param_2 = 0xc;
        goto LAB_143afcc25;
      }
      if (local_74 != 0) {
        *param_2 = 0xc;
        goto LAB_143afcc25;
      }
      if (local_76 != -3) {
        iVar8 = local_58;
        goto LAB_143afc6e4;
      }
      *param_2 = 0xc;
      local_78 = bVar7;
      local_50 = pbVar10;
      goto LAB_143afcc25;
    }
    if (local_76 < '\0') break;
    local_78 = bVar7;
    iVar6 = iVar8;
    local_50 = pbVar10;
    switch(local_75) {
    case 1:
    case 3:
    case 4:
    case 6:
      local_74 = local_74 << 6 | (short)local_76;
      local_75 = local_75 + 1;
      break;
    case 2:
      *local_60 = local_74 << 4 | (ushort)((int)local_76 >> 2);
      local_60 = local_60 + 1;
      if (local_68 != (int *)0x0) {
        *local_68 = local_6c;
        local_68 = local_68 + 1;
        local_6c = local_58;
      }
      *pbVar9 = bVar1;
      local_78 = 1;
      local_74 = (short)local_76 & 3;
      local_75 = 3;
      break;
    case 5:
      *local_60 = local_74 << 2 | (ushort)((int)local_76 >> 4);
      local_60 = local_60 + 1;
      if (local_68 != (int *)0x0) {
        *local_68 = local_6c;
        local_68 = local_68 + 1;
        local_6c = local_58;
      }
      *pbVar9 = bVar1;
      local_78 = 1;
      local_74 = (short)local_76 & 0xf;
      local_75 = 6;
      break;
    case 7:
      *local_60 = local_74 << 6 | (short)local_76;
      local_60 = local_60 + 1;
      if (local_68 != (int *)0x0) {
        *local_68 = local_6c;
        local_68 = local_68 + 1;
        local_6c = iVar8;
      }
      local_78 = 0;
      local_74 = 0;
      local_75 = 0;
      break;
    case 0xff:
    case 0:
      local_74 = (ushort)local_76;
      local_75 = 1;
    }
  }
  local_70 = 1;
  if (local_75 == 0xff) {
    *local_60 = 0x2b;
    local_60 = local_60 + 1;
    local_50 = pbVar10;
    if (local_68 != (int *)0x0) {
      *local_68 = local_6c + -1;
      local_68 = local_68 + 1;
    }
  }
  else {
    local_50 = pbVar10;
    if (local_74 != 0) {
      *param_2 = 0xc;
      local_78 = bVar7;
LAB_143afcc25:
      if (((*param_2 < 1) && (*(char *)(param_1 + 2) != '\0')) &&
         ((local_50 == pbVar4 && (local_74 == 0)))) {
        local_78 = 0;
      }
      *(uint *)(lVar3 + 0x48) =
           (int)(char)local_70 << 0x18 | (uint)local_75 << 0x10 | (uint)local_74;
      *(byte *)(lVar3 + 0x40) = local_78;
      *(byte **)(param_1 + 0x10) = local_50;
      *(ushort **)(param_1 + 0x20) = local_60;
      *(int **)(param_1 + 0x30) = local_68;
      return;
    }
  }
  goto LAB_143afc6e4;
}



// FUNCTION 143afccf0 FUN_143afccf0 body=3083 status=ok
// SIG undefined FUN_143afccf0(void)

void FUN_143afccf0(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  int iVar6;
  ushort *puVar7;
  undefined1 *puVar8;
  undefined1 local_78;
  int local_74;
  int *local_70;
  byte local_68;
  char local_67;
  undefined1 *local_60;
  byte local_58;
  ushort *local_48;
  int local_38;
  byte local_34;
  undefined *local_20;
  
  lVar3 = *(longlong *)(param_1 + 8);
  puVar4 = *(ushort **)(param_1 + 0x18);
  local_60 = *(undefined1 **)(param_1 + 0x20);
  puVar5 = *(undefined1 **)(param_1 + 0x28);
  local_70 = *(int **)(param_1 + 0x30);
  uVar2 = *(uint *)(lVar3 + 0x50);
  if (uVar2 < 0x10000000) {
    local_20 = &DAT_145d00f30;
  }
  else {
    local_20 = &DAT_145d00fb0;
  }
  local_58 = (byte)(uVar2 >> 0x18) & 1;
  local_67 = (char)(uVar2 >> 0x10);
  local_34 = (byte)uVar2;
  local_68 = local_34;
  local_74 = 0;
  local_48 = *(ushort **)(param_1 + 0x10);
  if ((uVar2 & 0x1000000) == 0) goto LAB_143afd00a;
  do {
    do {
      while( true ) {
        local_38 = (int)((longlong)puVar4 - (longlong)local_48 >> 1);
        iVar6 = (int)puVar5 - (int)local_60;
        if (iVar6 < local_38) {
          local_38 = iVar6;
        }
        while( true ) {
          if (local_38 < 1) goto LAB_143afcfdf;
          uVar1 = *local_48;
          puVar7 = local_48 + 1;
          if ((0x7f < uVar1) || (local_20[uVar1] == '\0')) break;
          local_78 = (undefined1)uVar1;
          *local_60 = local_78;
          local_60 = local_60 + 1;
          if (local_70 != (int *)0x0) {
            *local_70 = local_74;
            local_70 = local_70 + 1;
            local_74 = local_74 + 1;
          }
          local_38 = local_38 + -1;
          local_48 = puVar7;
        }
        if (uVar1 != 0x2b) break;
        *local_60 = 0x2b;
        puVar8 = local_60 + 1;
        if (puVar5 <= puVar8) {
          if (local_70 != (int *)0x0) {
            *local_70 = local_74;
            local_70 = local_70 + 1;
            local_74 = local_74 + 1;
          }
          *(undefined1 *)(lVar3 + 0x68) = 0x2d;
          *(undefined1 *)(lVar3 + 0x5b) = 1;
          *param_2 = 0xf;
          local_60 = puVar8;
          local_48 = puVar7;
LAB_143afcfdf:
          if ((local_48 < puVar4) && (puVar5 <= local_60)) {
            *param_2 = 0xf;
          }
LAB_143afd72e:
          if ((*(char *)(param_1 + 2) == '\0') || (local_48 < puVar4)) {
            *(uint *)(lVar3 + 0x50) =
                 *(uint *)(lVar3 + 0x50) & 0xf0000000 | (int)(char)local_58 << 0x18 |
                 (int)local_67 << 0x10 | (uint)local_68;
          }
          else {
            if (local_58 == 0) {
              if (local_67 != '\0') {
                if (local_60 < puVar5) {
                  *local_60 = (&DAT_145d01030)[local_68];
                  local_60 = local_60 + 1;
                  if (local_70 != (int *)0x0) {
                    *local_70 = local_74 + -1;
                    local_70 = local_70 + 1;
                  }
                }
                else {
                  *(undefined *)(lVar3 + 0x68 + (longlong)*(char *)(lVar3 + 0x5b)) =
                       (&DAT_145d01030)[local_68];
                  *(char *)(lVar3 + 0x5b) = *(char *)(lVar3 + 0x5b) + '\x01';
                  *param_2 = 0xf;
                }
              }
              if (local_60 < puVar5) {
                *local_60 = 0x2d;
                local_60 = local_60 + 1;
                if (local_70 != (int *)0x0) {
                  *local_70 = local_74 + -1;
                  local_70 = local_70 + 1;
                }
              }
              else {
                *(undefined1 *)(lVar3 + 0x68 + (longlong)*(char *)(lVar3 + 0x5b)) = 0x2d;
                *(char *)(lVar3 + 0x5b) = *(char *)(lVar3 + 0x5b) + '\x01';
                *param_2 = 0xf;
              }
            }
            *(uint *)(lVar3 + 0x50) = *(uint *)(lVar3 + 0x50) & 0xf0000000 | 0x1000000;
          }
          *(ushort **)(param_1 + 0x10) = local_48;
          *(undefined1 **)(param_1 + 0x20) = local_60;
          *(int **)(param_1 + 0x30) = local_70;
          return;
        }
        *puVar8 = 0x2d;
        local_60 = local_60 + 2;
        local_48 = puVar7;
        if (local_70 != (int *)0x0) {
          *local_70 = local_74;
          local_70[1] = local_74;
          local_70 = local_70 + 2;
          local_74 = local_74 + 1;
        }
      }
      *local_60 = 0x2b;
      local_60 = local_60 + 1;
      if (local_70 != (int *)0x0) {
        *local_70 = local_74;
        local_70 = local_70 + 1;
      }
      local_58 = 0;
      local_67 = '\0';
LAB_143afd00a:
      while( true ) {
        if (puVar4 <= local_48) goto LAB_143afd72e;
        if (puVar5 <= local_60) {
          *param_2 = 0xf;
          goto LAB_143afd72e;
        }
        uVar1 = *local_48;
        puVar7 = local_48 + 1;
        if ((uVar1 < 0x80) && (local_20[uVar1] != '\0')) break;
        local_48 = puVar7;
        if (local_67 == '\0') {
          *local_60 = (&DAT_145d01030)[(int)(uint)uVar1 >> 10];
          puVar8 = local_60 + 1;
          if (puVar8 < puVar5) {
            *puVar8 = (&DAT_145d01030)[(int)((int)(uint)uVar1 >> 4 & 0x3f)];
            local_60 = local_60 + 2;
            if (local_70 != (int *)0x0) {
              *local_70 = local_74;
              local_70[1] = local_74;
              local_70 = local_70 + 2;
              local_74 = local_74 + 1;
            }
          }
          else {
            if (local_70 != (int *)0x0) {
              *local_70 = local_74;
              local_70 = local_70 + 1;
              local_74 = local_74 + 1;
            }
            *(undefined *)(lVar3 + 0x68) = (&DAT_145d01030)[(int)((int)(uint)uVar1 >> 4 & 0x3f)];
            *(undefined1 *)(lVar3 + 0x5b) = 1;
            *param_2 = 0xf;
            local_60 = puVar8;
          }
          local_68 = (byte)((uVar1 & 0xf) << 2);
          local_67 = '\x01';
        }
        else if (local_67 == '\x01') {
          *local_60 = (&DAT_145d01030)[(int)((uint)local_68 | (int)(uint)uVar1 >> 0xe)];
          puVar8 = local_60 + 1;
          if (puVar8 < puVar5) {
            *puVar8 = (&DAT_145d01030)[(int)((int)(uint)uVar1 >> 8 & 0x3f)];
            puVar8 = local_60 + 2;
            if (puVar8 < puVar5) {
              *puVar8 = (&DAT_145d01030)[(int)((int)(uint)uVar1 >> 2 & 0x3f)];
              local_60 = local_60 + 3;
              if (local_70 != (int *)0x0) {
                *local_70 = local_74;
                local_70[1] = local_74;
                local_70[2] = local_74;
                local_70 = local_70 + 3;
                local_74 = local_74 + 1;
              }
            }
            else {
              if (local_70 != (int *)0x0) {
                *local_70 = local_74;
                local_70[1] = local_74;
                local_70 = local_70 + 2;
                local_74 = local_74 + 1;
              }
              *(undefined *)(lVar3 + 0x68) = (&DAT_145d01030)[(int)((int)(uint)uVar1 >> 2 & 0x3f)];
              *(undefined1 *)(lVar3 + 0x5b) = 1;
              *param_2 = 0xf;
              local_60 = puVar8;
            }
          }
          else {
            if (local_70 != (int *)0x0) {
              *local_70 = local_74;
              local_70 = local_70 + 1;
              local_74 = local_74 + 1;
            }
            *(undefined *)(lVar3 + 0x68) = (&DAT_145d01030)[(int)((int)(uint)uVar1 >> 8 & 0x3f)];
            *(undefined *)(lVar3 + 0x69) = (&DAT_145d01030)[(int)((int)(uint)uVar1 >> 2 & 0x3f)];
            *(undefined1 *)(lVar3 + 0x5b) = 2;
            *param_2 = 0xf;
            local_60 = puVar8;
          }
          local_68 = (byte)((uVar1 & 3) << 4);
          local_67 = '\x02';
        }
        else if (local_67 == '\x02') {
          *local_60 = (&DAT_145d01030)[(int)((uint)local_68 | (int)(uint)uVar1 >> 0xc)];
          puVar8 = local_60 + 1;
          if (puVar8 < puVar5) {
            *puVar8 = (&DAT_145d01030)[(int)((int)(uint)uVar1 >> 6 & 0x3f)];
            puVar8 = local_60 + 2;
            if (puVar8 < puVar5) {
              *puVar8 = (&DAT_145d01030)[(int)(uVar1 & 0x3f)];
              local_60 = local_60 + 3;
              if (local_70 != (int *)0x0) {
                *local_70 = local_74;
                local_70[1] = local_74;
                local_70[2] = local_74;
                local_70 = local_70 + 3;
                local_74 = local_74 + 1;
              }
            }
            else {
              if (local_70 != (int *)0x0) {
                *local_70 = local_74;
                local_70[1] = local_74;
                local_70 = local_70 + 2;
                local_74 = local_74 + 1;
              }
              *(undefined *)(lVar3 + 0x68) = (&DAT_145d01030)[(int)(uVar1 & 0x3f)];
              *(undefined1 *)(lVar3 + 0x5b) = 1;
              *param_2 = 0xf;
              local_60 = puVar8;
            }
          }
          else {
            if (local_70 != (int *)0x0) {
              *local_70 = local_74;
              local_70 = local_70 + 1;
              local_74 = local_74 + 1;
            }
            *(undefined *)(lVar3 + 0x68) = (&DAT_145d01030)[(int)((int)(uint)uVar1 >> 6 & 0x3f)];
            *(undefined *)(lVar3 + 0x69) = (&DAT_145d01030)[(int)(uVar1 & 0x3f)];
            *(undefined1 *)(lVar3 + 0x5b) = 2;
            *param_2 = 0xf;
            local_60 = puVar8;
          }
          local_68 = 0;
          local_67 = '\0';
        }
      }
      local_58 = 1;
      if (local_67 != '\0') {
        *local_60 = (&DAT_145d01030)[local_68];
        local_60 = local_60 + 1;
        if (local_70 != (int *)0x0) {
          *local_70 = local_74 + -1;
          local_70 = local_70 + 1;
        }
      }
    } while ((&DAT_145d01070)[uVar1] == -1);
    if (puVar5 <= local_60) {
      *(undefined1 *)(lVar3 + 0x68) = 0x2d;
      *(undefined1 *)(lVar3 + 0x5b) = 1;
      *param_2 = 0xf;
      goto LAB_143afd72e;
    }
    *local_60 = 0x2d;
    local_60 = local_60 + 1;
    if (local_70 != (int *)0x0) {
      *local_70 = local_74 + -1;
      local_70 = local_70 + 1;
    }
  } while( true );
}



// FUNCTION 143afd910 FUN_143afd910 body=52 status=ok
// SIG undefined FUN_143afd910(void)

char * FUN_143afd910(longlong param_1)

{
  char *pcVar1;
  
  if (*(uint *)(param_1 + 0x50) >> 0x1c == 1) {
    pcVar1 = "UTF-7,version=1";
  }
  else {
    pcVar1 = "UTF-7";
  }
  return pcVar1;
}



// FUNCTION 143afd950 FUN_143afd950 body=1921 status=ok
// SIG undefined FUN_143afd950(void)

void FUN_143afd950(longlong param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  ushort *puVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  byte *pbVar10;
  byte local_78;
  byte local_77;
  byte local_75;
  ushort local_70;
  int local_68;
  int *local_60;
  ushort *local_58;
  int local_50;
  int local_4c;
  byte *local_48;
  ushort local_3c;
  int local_2c;
  
  lVar4 = *(longlong *)(param_1 + 8);
  local_48 = *(byte **)(param_1 + 0x10);
  pbVar5 = *(byte **)(param_1 + 0x18);
  local_58 = *(ushort **)(param_1 + 0x20);
  puVar6 = *(ushort **)(param_1 + 0x28);
  local_60 = *(int **)(param_1 + 0x30);
  uVar3 = *(uint *)(lVar4 + 0x48);
  local_75 = (byte)(uVar3 >> 0x18) & 1;
  local_78 = (byte)(uVar3 >> 0x10);
  local_3c = (ushort)uVar3;
  local_70 = local_3c;
  pbVar10 = (byte *)(lVar4 + 0x41);
  local_77 = *(byte *)(lVar4 + 0x40);
  if (local_77 == 0) {
    local_2c = 0;
  }
  else {
    local_2c = -1;
  }
  local_68 = local_2c;
  local_50 = 0;
  iVar9 = local_68;
  iVar7 = local_50;
  if ((uVar3 & 0x1000000) == 0) goto switchD_143afdcb8_default;
LAB_143afda45:
  local_68 = iVar9;
  local_77 = 0;
  local_4c = (int)pbVar5 - (int)local_48;
  iVar9 = (int)((longlong)puVar6 - (longlong)local_58 >> 1);
  if (iVar9 < local_4c) {
    local_4c = iVar9;
  }
  do {
    if (local_4c < 1) {
LAB_143afdb79:
      if ((local_48 < pbVar5) && (puVar6 <= local_58)) {
        *param_2 = 0xf;
      }
      goto LAB_143afe007;
    }
    bVar1 = *local_48;
    local_48 = local_48 + 1;
    if ((bVar1 < 0x20) || (0x7e < bVar1)) {
      *pbVar10 = bVar1;
      local_77 = 1;
      *param_2 = 0xc;
      goto LAB_143afdb79;
    }
    if (bVar1 == 0x26) break;
    *local_58 = (ushort)bVar1;
    local_58 = local_58 + 1;
    if (local_60 != (int *)0x0) {
      *local_60 = local_68;
      local_60 = local_60 + 1;
      local_68 = local_68 + 1;
    }
    local_4c = local_4c + -1;
  } while( true );
  local_68 = local_68 + 1;
  local_75 = 0;
  local_77 = 0;
  local_70 = 0;
  local_78 = 0xff;
  iVar7 = local_68;
switchD_143afdcb8_default:
  while( true ) {
    local_50 = iVar7;
    if (pbVar5 <= local_48) goto LAB_143afe007;
    if (puVar6 <= local_58) {
      *param_2 = 0xf;
      goto LAB_143afe007;
    }
    bVar1 = *local_48;
    pbVar10[local_77] = bVar1;
    local_77 = local_77 + 1;
    local_48 = local_48 + 1;
    iVar9 = local_50 + 1;
    if (0x7e < bVar1) {
      local_75 = 1;
      *param_2 = 0xc;
      goto LAB_143afe007;
    }
    if (bVar1 == 0x2c) {
      cVar2 = '?';
    }
    else if (bVar1 == 0x2f) {
      cVar2 = -1;
    }
    else {
      cVar2 = (&DAT_145d01070)[bVar1];
    }
    if (cVar2 < '\0') break;
    iVar7 = iVar9;
    switch(local_78) {
    case 1:
    case 3:
    case 4:
    case 6:
      local_70 = local_70 << 6 | (short)cVar2;
      local_78 = local_78 + 1;
      break;
    case 2:
      uVar8 = local_70 << 4 | (ushort)((int)cVar2 >> 2);
      if ((0x1f < uVar8) && (uVar8 < 0x7f)) {
        local_75 = 1;
        *param_2 = 0xc;
        goto LAB_143afe007;
      }
      *local_58 = uVar8;
      local_58 = local_58 + 1;
      if (local_60 != (int *)0x0) {
        *local_60 = local_68;
        local_60 = local_60 + 1;
        local_68 = local_50;
      }
      *pbVar10 = bVar1;
      local_77 = 1;
      local_70 = (short)cVar2 & 3;
      local_78 = 3;
      break;
    case 5:
      uVar8 = local_70 << 2 | (ushort)((int)cVar2 >> 4);
      if ((0x1f < uVar8) && (uVar8 < 0x7f)) {
        local_75 = 1;
        *param_2 = 0xc;
        goto LAB_143afe007;
      }
      *local_58 = uVar8;
      local_58 = local_58 + 1;
      if (local_60 != (int *)0x0) {
        *local_60 = local_68;
        local_60 = local_60 + 1;
        local_68 = local_50;
      }
      *pbVar10 = bVar1;
      local_77 = 1;
      local_70 = (short)cVar2 & 0xf;
      local_78 = 6;
      break;
    case 7:
      uVar8 = local_70 << 6 | (short)cVar2;
      if ((0x1f < uVar8) && (uVar8 < 0x7f)) {
        local_75 = 1;
        *param_2 = 0xc;
        goto LAB_143afe007;
      }
      *local_58 = uVar8;
      local_58 = local_58 + 1;
      if (local_60 != (int *)0x0) {
        *local_60 = local_68;
        local_60 = local_60 + 1;
        local_68 = iVar9;
      }
      local_77 = 0;
      local_70 = 0;
      local_78 = 0;
      break;
    case 0xff:
    case 0:
      local_70 = (ushort)cVar2;
      local_78 = 1;
    }
  }
  if (cVar2 != -2) {
    if (local_78 == 0xff) {
      *pbVar10 = 0x26;
      *(byte *)(lVar4 + 0x42) = bVar1;
      local_77 = 2;
    }
    local_75 = 1;
    *param_2 = 0xc;
    goto LAB_143afe007;
  }
  local_75 = 1;
  if (local_78 == 0xff) {
    *local_58 = 0x26;
    local_58 = local_58 + 1;
    if (local_60 != (int *)0x0) {
      *local_60 = local_68 + -1;
      local_60 = local_60 + 1;
    }
  }
  else if ((local_70 != 0) || (((local_78 != 0 && (local_78 != 3)) && (local_78 != 6)))) {
    *param_2 = 0xc;
LAB_143afe007:
    if ((((*param_2 < 1) && (local_75 == 0)) && (local_77 == 0)) &&
       ((*(char *)(param_1 + 2) != '\0' && (pbVar5 <= local_48)))) {
      if (local_78 == 0xff) {
        *pbVar10 = 0x26;
        local_77 = 1;
      }
      local_75 = 1;
      *param_2 = 0xb;
    }
    *(uint *)(lVar4 + 0x48) = (int)(char)local_75 << 0x18 | (uint)local_78 << 0x10 | (uint)local_70;
    *(byte *)(lVar4 + 0x40) = local_77;
    *(byte **)(param_1 + 0x10) = local_48;
    *(ushort **)(param_1 + 0x20) = local_58;
    *(int **)(param_1 + 0x30) = local_60;
    return;
  }
  goto LAB_143afda45;
}



// FUNCTION 143afe100 FUN_143afe100 body=3710 status=ok
// SIG undefined FUN_143afe100(void)

void FUN_143afe100(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  byte local_b7;
  undefined1 local_b4;
  int local_b0;
  int *local_a8;
  char local_a0;
  undefined1 *local_98;
  byte local_90;
  ushort *local_80;
  int local_70;
  byte local_68;
  
  lVar4 = *(longlong *)(param_1 + 8);
  puVar5 = *(ushort **)(param_1 + 0x18);
  local_98 = *(undefined1 **)(param_1 + 0x20);
  puVar6 = *(undefined1 **)(param_1 + 0x28);
  local_a8 = *(int **)(param_1 + 0x30);
  uVar3 = *(uint *)(lVar4 + 0x50);
  local_90 = (byte)(uVar3 >> 0x18) & 1;
  local_a0 = (char)(uVar3 >> 0x10);
  local_68 = (byte)uVar3;
  local_b7 = local_68;
  local_b0 = 0;
  local_80 = *(ushort **)(param_1 + 0x10);
  if ((uVar3 & 0x1000000) == 0) goto LAB_143afe408;
  do {
    while( true ) {
      local_70 = (int)((longlong)puVar5 - (longlong)local_80 >> 1);
      iVar9 = (int)puVar6 - (int)local_98;
      if (iVar9 < local_70) {
        local_70 = iVar9;
      }
      while( true ) {
        if (local_70 < 1) goto LAB_143afe3da;
        uVar2 = *local_80;
        puVar10 = local_80 + 1;
        if (((uVar2 < 0x20) || (0x7e < uVar2)) || (uVar2 == 0x26)) break;
        local_b4 = (undefined1)uVar2;
        *local_98 = local_b4;
        local_98 = local_98 + 1;
        if (local_a8 != (int *)0x0) {
          *local_a8 = local_b0;
          local_a8 = local_a8 + 1;
          local_b0 = local_b0 + 1;
        }
        local_70 = local_70 + -1;
        local_80 = puVar10;
      }
      if (uVar2 != 0x26) break;
      *local_98 = 0x26;
      puVar11 = local_98 + 1;
      if (puVar6 <= puVar11) {
        if (local_a8 != (int *)0x0) {
          *local_a8 = local_b0;
          local_a8 = local_a8 + 1;
          local_b0 = local_b0 + 1;
        }
        *(undefined1 *)(lVar4 + 0x68) = 0x2d;
        *(undefined1 *)(lVar4 + 0x5b) = 1;
        *param_2 = 0xf;
        local_98 = puVar11;
        local_80 = puVar10;
LAB_143afe3da:
        if ((local_80 < puVar5) && (puVar6 <= local_98)) {
          *param_2 = 0xf;
        }
        goto LAB_143afed72;
      }
      *puVar11 = 0x2d;
      local_98 = local_98 + 2;
      local_80 = puVar10;
      if (local_a8 != (int *)0x0) {
        *local_a8 = local_b0;
        local_a8[1] = local_b0;
        local_a8 = local_a8 + 2;
        local_b0 = local_b0 + 1;
      }
    }
    *local_98 = 0x26;
    local_98 = local_98 + 1;
    if (local_a8 != (int *)0x0) {
      *local_a8 = local_b0;
      local_a8 = local_a8 + 1;
    }
    local_90 = 0;
    local_a0 = '\0';
LAB_143afe408:
    while( true ) {
      if (puVar5 <= local_80) goto LAB_143afed72;
      if (puVar6 <= local_98) {
        *param_2 = 0xf;
        goto LAB_143afed72;
      }
      uVar2 = *local_80;
      puVar10 = local_80 + 1;
      if ((0x1f < uVar2) && (uVar2 < 0x7f)) break;
      local_80 = puVar10;
      if (local_a0 == '\0') {
        bVar7 = (byte)((int)(uint)uVar2 >> 10);
        if (bVar7 < 0x3f) {
          uVar1 = (&DAT_145d01030)[bVar7];
        }
        else {
          uVar1 = 0x2c;
        }
        *local_98 = uVar1;
        puVar11 = local_98 + 1;
        if (puVar11 < puVar6) {
          bVar7 = (byte)((int)(uint)uVar2 >> 4) & 0x3f;
          if (bVar7 < 0x3f) {
            uVar1 = (&DAT_145d01030)[bVar7];
          }
          else {
            uVar1 = 0x2c;
          }
          *puVar11 = uVar1;
          local_98 = local_98 + 2;
          if (local_a8 != (int *)0x0) {
            *local_a8 = local_b0;
            local_a8[1] = local_b0;
            local_a8 = local_a8 + 2;
            local_b0 = local_b0 + 1;
          }
        }
        else {
          if (local_a8 != (int *)0x0) {
            *local_a8 = local_b0;
            local_a8 = local_a8 + 1;
            local_b0 = local_b0 + 1;
          }
          bVar7 = (byte)((int)(uint)uVar2 >> 4) & 0x3f;
          if (bVar7 < 0x3f) {
            uVar1 = (&DAT_145d01030)[bVar7];
          }
          else {
            uVar1 = 0x2c;
          }
          *(undefined1 *)(lVar4 + 0x68) = uVar1;
          *(undefined1 *)(lVar4 + 0x5b) = 1;
          *param_2 = 0xf;
          local_98 = puVar11;
        }
        local_b7 = (byte)((uVar2 & 0xf) << 2);
        local_a0 = '\x01';
      }
      else if (local_a0 == '\x01') {
        local_b7 = local_b7 | (byte)((int)(uint)uVar2 >> 0xe);
        if (local_b7 < 0x3f) {
          uVar1 = (&DAT_145d01030)[local_b7];
        }
        else {
          uVar1 = 0x2c;
        }
        *local_98 = uVar1;
        puVar11 = local_98 + 1;
        bVar7 = (byte)(uVar2 >> 8);
        if (puVar11 < puVar6) {
          bVar7 = bVar7 & 0x3f;
          if (bVar7 < 0x3f) {
            uVar1 = (&DAT_145d01030)[bVar7];
          }
          else {
            uVar1 = 0x2c;
          }
          *puVar11 = uVar1;
          puVar11 = local_98 + 2;
          if (puVar11 < puVar6) {
            bVar7 = (byte)((int)(uint)uVar2 >> 2) & 0x3f;
            if (bVar7 < 0x3f) {
              uVar1 = (&DAT_145d01030)[bVar7];
            }
            else {
              uVar1 = 0x2c;
            }
            *puVar11 = uVar1;
            local_98 = local_98 + 3;
            if (local_a8 != (int *)0x0) {
              *local_a8 = local_b0;
              local_a8[1] = local_b0;
              local_a8[2] = local_b0;
              local_a8 = local_a8 + 3;
              local_b0 = local_b0 + 1;
            }
          }
          else {
            if (local_a8 != (int *)0x0) {
              *local_a8 = local_b0;
              local_a8[1] = local_b0;
              local_a8 = local_a8 + 2;
              local_b0 = local_b0 + 1;
            }
            bVar7 = (byte)((int)(uint)uVar2 >> 2) & 0x3f;
            if (bVar7 < 0x3f) {
              uVar1 = (&DAT_145d01030)[bVar7];
            }
            else {
              uVar1 = 0x2c;
            }
            *(undefined1 *)(lVar4 + 0x68) = uVar1;
            *(undefined1 *)(lVar4 + 0x5b) = 1;
            *param_2 = 0xf;
            local_98 = puVar11;
          }
        }
        else {
          if (local_a8 != (int *)0x0) {
            *local_a8 = local_b0;
            local_a8 = local_a8 + 1;
            local_b0 = local_b0 + 1;
          }
          bVar7 = bVar7 & 0x3f;
          if (bVar7 < 0x3f) {
            uVar1 = (&DAT_145d01030)[bVar7];
          }
          else {
            uVar1 = 0x2c;
          }
          *(undefined1 *)(lVar4 + 0x68) = uVar1;
          bVar7 = (byte)((int)(uint)uVar2 >> 2) & 0x3f;
          if (bVar7 < 0x3f) {
            uVar1 = (&DAT_145d01030)[bVar7];
          }
          else {
            uVar1 = 0x2c;
          }
          *(undefined1 *)(lVar4 + 0x69) = uVar1;
          *(undefined1 *)(lVar4 + 0x5b) = 2;
          *param_2 = 0xf;
          local_98 = puVar11;
        }
        local_b7 = (byte)((uVar2 & 3) << 4);
        local_a0 = '\x02';
      }
      else if (local_a0 == '\x02') {
        local_b7 = local_b7 | (byte)((int)(uint)uVar2 >> 0xc);
        if (local_b7 < 0x3f) {
          uVar1 = (&DAT_145d01030)[local_b7];
        }
        else {
          uVar1 = 0x2c;
        }
        *local_98 = uVar1;
        puVar11 = local_98 + 1;
        bVar7 = (byte)uVar2;
        if (puVar11 < puVar6) {
          bVar8 = (byte)((int)(uint)uVar2 >> 6) & 0x3f;
          if (bVar8 < 0x3f) {
            uVar1 = (&DAT_145d01030)[bVar8];
          }
          else {
            uVar1 = 0x2c;
          }
          *puVar11 = uVar1;
          puVar11 = local_98 + 2;
          if (puVar11 < puVar6) {
            if ((bVar7 & 0x3f) < 0x3f) {
              uVar1 = (&DAT_145d01030)[bVar7 & 0x3f];
            }
            else {
              uVar1 = 0x2c;
            }
            *puVar11 = uVar1;
            local_98 = local_98 + 3;
            if (local_a8 != (int *)0x0) {
              *local_a8 = local_b0;
              local_a8[1] = local_b0;
              local_a8[2] = local_b0;
              local_a8 = local_a8 + 3;
              local_b0 = local_b0 + 1;
            }
          }
          else {
            if (local_a8 != (int *)0x0) {
              *local_a8 = local_b0;
              local_a8[1] = local_b0;
              local_a8 = local_a8 + 2;
              local_b0 = local_b0 + 1;
            }
            if ((bVar7 & 0x3f) < 0x3f) {
              uVar1 = (&DAT_145d01030)[bVar7 & 0x3f];
            }
            else {
              uVar1 = 0x2c;
            }
            *(undefined1 *)(lVar4 + 0x68) = uVar1;
            *(undefined1 *)(lVar4 + 0x5b) = 1;
            *param_2 = 0xf;
            local_98 = puVar11;
          }
        }
        else {
          if (local_a8 != (int *)0x0) {
            *local_a8 = local_b0;
            local_a8 = local_a8 + 1;
            local_b0 = local_b0 + 1;
          }
          bVar8 = (byte)((int)(uint)uVar2 >> 6) & 0x3f;
          if (bVar8 < 0x3f) {
            uVar1 = (&DAT_145d01030)[bVar8];
          }
          else {
            uVar1 = 0x2c;
          }
          *(undefined1 *)(lVar4 + 0x68) = uVar1;
          if ((bVar7 & 0x3f) < 0x3f) {
            uVar1 = (&DAT_145d01030)[bVar7 & 0x3f];
          }
          else {
            uVar1 = 0x2c;
          }
          *(undefined1 *)(lVar4 + 0x69) = uVar1;
          *(undefined1 *)(lVar4 + 0x5b) = 2;
          *param_2 = 0xf;
          local_98 = puVar11;
        }
        local_b7 = 0;
        local_a0 = '\0';
      }
    }
    local_90 = 1;
    if (local_a0 != '\0') {
      if (local_b7 < 0x3f) {
        uVar1 = (&DAT_145d01030)[local_b7];
      }
      else {
        uVar1 = 0x2c;
      }
      *local_98 = uVar1;
      local_98 = local_98 + 1;
      if (local_a8 != (int *)0x0) {
        *local_a8 = local_b0 + -1;
        local_a8 = local_a8 + 1;
      }
    }
    if (puVar6 <= local_98) {
      *(undefined1 *)(lVar4 + 0x68) = 0x2d;
      *(undefined1 *)(lVar4 + 0x5b) = 1;
      *param_2 = 0xf;
LAB_143afed72:
      if ((*(char *)(param_1 + 2) == '\0') || (local_80 < puVar5)) {
        *(uint *)(lVar4 + 0x50) =
             *(uint *)(lVar4 + 0x50) & 0xf0000000 | (int)(char)local_90 << 0x18 |
             (int)local_a0 << 0x10 | (uint)local_b7;
      }
      else {
        if (local_90 == 0) {
          if (local_a0 != '\0') {
            if (local_98 < puVar6) {
              if (local_b7 < 0x3f) {
                uVar1 = (&DAT_145d01030)[local_b7];
              }
              else {
                uVar1 = 0x2c;
              }
              *local_98 = uVar1;
              local_98 = local_98 + 1;
              if (local_a8 != (int *)0x0) {
                *local_a8 = local_b0 + -1;
                local_a8 = local_a8 + 1;
              }
            }
            else {
              if (local_b7 < 0x3f) {
                uVar1 = (&DAT_145d01030)[local_b7];
              }
              else {
                uVar1 = 0x2c;
              }
              *(undefined1 *)(lVar4 + 0x68 + (longlong)*(char *)(lVar4 + 0x5b)) = uVar1;
              *(char *)(lVar4 + 0x5b) = *(char *)(lVar4 + 0x5b) + '\x01';
              *param_2 = 0xf;
            }
          }
          if (local_98 < puVar6) {
            *local_98 = 0x2d;
            local_98 = local_98 + 1;
            if (local_a8 != (int *)0x0) {
              *local_a8 = local_b0 + -1;
              local_a8 = local_a8 + 1;
            }
          }
          else {
            *(undefined1 *)(lVar4 + 0x68 + (longlong)*(char *)(lVar4 + 0x5b)) = 0x2d;
            *(char *)(lVar4 + 0x5b) = *(char *)(lVar4 + 0x5b) + '\x01';
            *param_2 = 0xf;
          }
        }
        *(uint *)(lVar4 + 0x50) = *(uint *)(lVar4 + 0x50) & 0xf0000000 | 0x1000000;
      }
      *(ushort **)(param_1 + 0x10) = local_80;
      *(undefined1 **)(param_1 + 0x20) = local_98;
      *(int **)(param_1 + 0x30) = local_a8;
      return;
    }
    *local_98 = 0x2d;
    local_98 = local_98 + 1;
    if (local_a8 != (int *)0x0) {
      *local_a8 = local_b0 + -1;
      local_a8 = local_a8 + 1;
    }
  } while( true );
}



// FUNCTION 143afef90 FUN_143afef90 body=2306 status=ok
// SIG undefined FUN_143afef90(void)

void FUN_143afef90(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  char cVar4;
  uint uVar6;
  int iVar7;
  char local_88;
  uint local_84;
  int local_80;
  char *local_78;
  int *local_70;
  int local_68;
  int local_64;
  int local_60;
  char local_5c;
  int local_58;
  ushort *local_50;
  char *local_38;
  char local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char cVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_50 = *(ushort **)(param_1 + 0x10);
  puVar3 = *(ushort **)(param_1 + 0x18);
  local_78 = *(char **)(param_1 + 0x20);
  local_80 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  local_70 = *(int **)(param_1 + 0x30);
  local_84 = *(uint *)(lVar2 + 0x54);
  local_60 = *(int *)(lVar2 + 0x50);
  if (local_60 == 0) {
    local_60 = 0x40;
  }
  if (local_84 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = -1;
  }
  local_68 = local_18;
  local_64 = 0;
  if (local_84 == 0) goto LAB_143aff089;
  if (local_80 < 1) goto LAB_143aff089;
  do {
    if (puVar3 <= local_50) {
      local_84 = -local_84;
LAB_143aff820:
      if ((int)local_84 < 0) {
        local_24 = -local_84;
      }
      else {
        local_24 = 0;
      }
      *(int *)(lVar2 + 0x54) = local_24;
      *(int *)(lVar2 + 0x50) = local_60;
      *(ushort **)(param_1 + 0x10) = local_50;
      *(char **)(param_1 + 0x20) = local_78;
      *(int **)(param_1 + 0x30) = local_70;
      return;
    }
    uVar1 = *local_50;
    if ((uVar1 & 0xfc00) == 0xdc00) {
      local_50 = local_50 + 1;
      local_64 = local_64 + 1;
      local_84 = local_84 * 0x400 + -0x35fdc00 + (uint)uVar1;
    }
    do {
      iVar7 = local_84 - local_60;
      if (((int)local_84 < 0x3040) || (0xd7a3 < (int)local_84)) {
        local_1c = (local_84 & 0xffffff80) + 0x40;
      }
      else {
        local_1c = FUN_143b00e40(local_84);
      }
      local_60 = local_1c;
      if ((iVar7 < -0x40) || (0x3f < iVar7)) {
        if ((iVar7 < -0x2911) || ((0x2910 < iVar7 || (local_80 < 2)))) {
          uVar6 = FUN_143b00ff0(iVar7);
          if (uVar6 < 0x4000000) {
            local_20 = (int)uVar6 >> 0x18;
          }
          else {
            local_20 = 4;
          }
          local_88 = (char)uVar6;
          cVar4 = (char)(uVar6 >> 8);
          cVar5 = (char)(uVar6 >> 0x10);
          if (local_80 < local_20) {
            local_20 = local_20 - local_80;
            local_38 = (char *)(lVar2 + 0x68);
            if (local_20 == 1) {
LAB_143aff708:
              *local_38 = local_88;
            }
            else {
              if (local_20 == 2) {
LAB_143aff6ed:
                *local_38 = cVar4;
                local_38 = local_38 + 1;
                goto LAB_143aff708;
              }
              if (local_20 == 3) {
                *local_38 = cVar5;
                local_38 = (char *)(lVar2 + 0x69);
                goto LAB_143aff6ed;
              }
            }
            local_5c = (char)local_20;
            *(char *)(lVar2 + 0x5b) = local_5c;
            iVar7 = (int)uVar6 >> (local_5c * '\b' & 0x1fU);
            if (local_80 == 1) {
LAB_143aff7bf:
              local_88 = (char)iVar7;
              *local_78 = local_88;
              local_78 = local_78 + 1;
              *local_70 = local_68;
              local_70 = local_70 + 1;
            }
            else {
              if (local_80 == 2) {
LAB_143aff78b:
                *local_78 = (char)((uint)iVar7 >> 8);
                local_78 = local_78 + 1;
                *local_70 = local_68;
                local_70 = local_70 + 1;
                goto LAB_143aff7bf;
              }
              if (local_80 == 3) {
                *local_78 = (char)((uint)iVar7 >> 0x10);
                local_78 = local_78 + 1;
                *local_70 = local_68;
                local_70 = local_70 + 1;
                goto LAB_143aff78b;
              }
            }
            *param_2 = 0xf;
            goto LAB_143aff820;
          }
          if (local_20 == 2) {
LAB_143aff612:
            *local_78 = cVar4;
            *local_70 = local_68;
            local_78[1] = local_88;
            local_78 = local_78 + 2;
            local_70[1] = local_68;
            local_70 = local_70 + 2;
          }
          else {
            if (local_20 == 3) {
LAB_143aff5de:
              *local_78 = cVar5;
              local_78 = local_78 + 1;
              *local_70 = local_68;
              local_70 = local_70 + 1;
              goto LAB_143aff612;
            }
            if (local_20 == 4) {
              *local_78 = (char)(uVar6 >> 0x18);
              local_78 = local_78 + 1;
              *local_70 = local_68;
              local_70 = local_70 + 1;
              goto LAB_143aff5de;
            }
          }
          local_80 = local_80 - local_20;
        }
        else {
          if (iVar7 < 0) {
            local_58 = (iVar7 + 0x40) % 0xf3;
            local_88 = (char)((iVar7 + 0x40) / 0xf3);
            if (local_58 < 0) {
              local_88 = local_88 + -1;
              local_58 = local_58 + 0xf3;
            }
            local_88 = local_88 + 'P';
          }
          else {
            local_58 = (iVar7 + -0x40) % 0xf3;
            local_88 = (char)((iVar7 + -0x40) / 0xf3) + -0x30;
          }
          *local_78 = local_88;
          if (local_58 < 0x14) {
            local_28 = (&DAT_145d01588)[local_58];
          }
          else {
            local_28 = (char)local_58 + '\r';
          }
          local_78[1] = local_28;
          local_78 = local_78 + 2;
          *local_70 = local_68;
          local_70[1] = local_68;
          local_70 = local_70 + 2;
          local_80 = local_80 + -2;
        }
      }
      else {
        *local_78 = (char)iVar7 + -0x70;
        local_78 = local_78 + 1;
        *local_70 = local_68;
        local_70 = local_70 + 1;
        local_80 = local_80 + -1;
        if ((int)local_84 < 0x3000) {
LAB_143aff089:
          iVar7 = (int)((longlong)puVar3 - (longlong)local_50 >> 1);
          if (iVar7 < local_80) {
            local_80 = iVar7;
          }
          for (; 0 < local_80; local_80 = local_80 + -1) {
            local_84 = (uint)*local_50;
            if (0x2fff < local_84) break;
            if (local_84 < 0x21) {
              if (local_84 != 0x20) {
                local_60 = 0x40;
              }
              local_84._0_1_ = (char)*local_50;
              *local_78 = (char)local_84;
              *local_70 = local_64;
            }
            else {
              iVar7 = local_84 - local_60;
              if ((iVar7 < -0x40) || (0x3f < iVar7)) break;
              local_60 = (local_84 & 0xffffff80) + 0x40;
              *local_78 = (char)iVar7 + -0x70;
              *local_70 = local_64;
            }
            local_50 = local_50 + 1;
            local_64 = local_64 + 1;
            local_70 = local_70 + 1;
            local_78 = local_78 + 1;
          }
          local_80 = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_78;
        }
      }
      while( true ) {
        if (puVar3 <= local_50) goto LAB_143aff820;
        if (local_80 < 1) {
          *param_2 = 0xf;
          goto LAB_143aff820;
        }
        uVar1 = *local_50;
        local_84 = (uint)uVar1;
        local_50 = local_50 + 1;
        iVar7 = local_64 + 1;
        if (0x20 < local_84) break;
        if (local_84 != 0x20) {
          local_60 = 0x40;
        }
        local_84._0_1_ = (char)uVar1;
        *local_78 = (char)local_84;
        local_78 = local_78 + 1;
        *local_70 = local_64;
        local_70 = local_70 + 1;
        local_80 = local_80 + -1;
        local_64 = iVar7;
      }
      local_68 = local_64;
      local_64 = iVar7;
    } while ((local_84 & 0xfffffc00) != 0xd800);
  } while( true );
}



// FUNCTION 143aff8a0 FUN_143aff8a0 body=1747 status=ok
// SIG undefined FUN_143aff8a0(void)

void FUN_143aff8a0(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  char cVar4;
  uint uVar6;
  int iVar7;
  char local_78;
  uint local_74;
  int local_70;
  char *local_68;
  int local_60;
  char local_5c;
  int local_58;
  ushort *local_50;
  char *local_40;
  int local_28;
  char local_20;
  int local_1c;
  int local_18;
  char cVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_50 = *(ushort **)(param_1 + 0x10);
  puVar3 = *(ushort **)(param_1 + 0x18);
  local_68 = *(char **)(param_1 + 0x20);
  local_70 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  local_74 = *(uint *)(lVar2 + 0x54);
  local_60 = *(int *)(lVar2 + 0x50);
  if (local_60 == 0) {
    local_60 = 0x40;
  }
  if (local_74 == 0) goto LAB_143aff956;
  if (local_70 < 1) goto LAB_143aff956;
  do {
    if (puVar3 <= local_50) {
      local_74 = -local_74;
LAB_143afff1b:
      if ((int)local_74 < 0) {
        local_1c = -local_74;
      }
      else {
        local_1c = 0;
      }
      *(int *)(lVar2 + 0x54) = local_1c;
      *(int *)(lVar2 + 0x50) = local_60;
      *(ushort **)(param_1 + 0x10) = local_50;
      *(char **)(param_1 + 0x20) = local_68;
      return;
    }
    uVar1 = *local_50;
    if ((uVar1 & 0xfc00) == 0xdc00) {
      local_50 = local_50 + 1;
      local_74 = local_74 * 0x400 + -0x35fdc00 + (uint)uVar1;
    }
    do {
      iVar7 = local_74 - local_60;
      if (((int)local_74 < 0x3040) || (0xd7a3 < (int)local_74)) {
        local_28 = (local_74 & 0xffffff80) + 0x40;
      }
      else {
        local_28 = FUN_143b00e40(local_74);
      }
      local_60 = local_28;
      if ((iVar7 < -0x40) || (0x3f < iVar7)) {
        if ((iVar7 < -0x2911) || ((0x2910 < iVar7 || (local_70 < 2)))) {
          uVar6 = FUN_143b00ff0(iVar7);
          if (uVar6 < 0x4000000) {
            local_18 = (int)uVar6 >> 0x18;
          }
          else {
            local_18 = 4;
          }
          local_78 = (char)uVar6;
          cVar4 = (char)(uVar6 >> 8);
          cVar5 = (char)(uVar6 >> 0x10);
          if (local_70 < local_18) {
            local_18 = local_18 - local_70;
            local_40 = (char *)(lVar2 + 0x68);
            if (local_18 == 1) {
LAB_143affe51:
              *local_40 = local_78;
            }
            else {
              if (local_18 == 2) {
LAB_143affe36:
                *local_40 = cVar4;
                local_40 = local_40 + 1;
                goto LAB_143affe51;
              }
              if (local_18 == 3) {
                *local_40 = cVar5;
                local_40 = (char *)(lVar2 + 0x69);
                goto LAB_143affe36;
              }
            }
            local_5c = (char)local_18;
            *(char *)(lVar2 + 0x5b) = local_5c;
            iVar7 = (int)uVar6 >> (local_5c * '\b' & 0x1fU);
            if (local_70 == 1) {
LAB_143affed3:
              local_78 = (char)iVar7;
              *local_68 = local_78;
              local_68 = local_68 + 1;
            }
            else {
              if (local_70 == 2) {
LAB_143affeb8:
                *local_68 = (char)((uint)iVar7 >> 8);
                local_68 = local_68 + 1;
                goto LAB_143affed3;
              }
              if (local_70 == 3) {
                *local_68 = (char)((uint)iVar7 >> 0x10);
                local_68 = local_68 + 1;
                goto LAB_143affeb8;
              }
            }
            *param_2 = 0xf;
            goto LAB_143afff1b;
          }
          if (local_18 == 3) {
LAB_143affd7a:
            *local_68 = cVar5;
            local_68[1] = cVar4;
            local_68[2] = local_78;
            local_68 = local_68 + 3;
          }
          else if (local_18 == 4) {
            *local_68 = (char)(uVar6 >> 0x18);
            local_68 = local_68 + 1;
            goto LAB_143affd7a;
          }
          local_70 = local_70 - local_18;
        }
        else {
          if (iVar7 < 0) {
            local_58 = (iVar7 + 0x40) % 0xf3;
            local_78 = (char)((iVar7 + 0x40) / 0xf3);
            if (local_58 < 0) {
              local_78 = local_78 + -1;
              local_58 = local_58 + 0xf3;
            }
            local_78 = local_78 + 'P';
          }
          else {
            local_58 = (iVar7 + -0x40) % 0xf3;
            local_78 = (char)((iVar7 + -0x40) / 0xf3) + -0x30;
          }
          *local_68 = local_78;
          if (local_58 < 0x14) {
            local_20 = (&DAT_145d01588)[local_58];
          }
          else {
            local_20 = (char)local_58 + '\r';
          }
          local_68[1] = local_20;
          local_68 = local_68 + 2;
          local_70 = local_70 + -2;
        }
      }
      else {
        *local_68 = (char)iVar7 + -0x70;
        local_68 = local_68 + 1;
        local_70 = local_70 + -1;
        if ((int)local_74 < 0x3000) {
LAB_143aff956:
          iVar7 = (int)((longlong)puVar3 - (longlong)local_50 >> 1);
          if (iVar7 < local_70) {
            local_70 = iVar7;
          }
          for (; 0 < local_70; local_70 = local_70 + -1) {
            local_74 = (uint)*local_50;
            if (0x2fff < local_74) break;
            if (local_74 < 0x21) {
              if (local_74 != 0x20) {
                local_60 = 0x40;
              }
              local_74._0_1_ = (char)*local_50;
              *local_68 = (char)local_74;
            }
            else {
              iVar7 = local_74 - local_60;
              if ((iVar7 < -0x40) || (0x3f < iVar7)) break;
              local_60 = (local_74 & 0xffffff80) + 0x40;
              *local_68 = (char)iVar7 + -0x70;
            }
            local_68 = local_68 + 1;
            local_50 = local_50 + 1;
          }
          local_70 = (int)*(undefined8 *)(param_1 + 0x28) - (int)local_68;
        }
      }
      while( true ) {
        if (puVar3 <= local_50) goto LAB_143afff1b;
        if (local_70 < 1) {
          *param_2 = 0xf;
          goto LAB_143afff1b;
        }
        uVar1 = *local_50;
        local_74 = (uint)uVar1;
        local_50 = local_50 + 1;
        if (0x20 < local_74) break;
        if (local_74 != 0x20) {
          local_60 = 0x40;
        }
        local_74._0_1_ = (char)uVar1;
        *local_68 = (char)local_74;
        local_68 = local_68 + 1;
        local_70 = local_70 + -1;
      }
    } while ((local_74 & 0xfffffc00) != 0xd800);
  } while( true );
}



// FUNCTION 143afff80 FUN_143afff80 body=2043 status=ok
// SIG undefined FUN_143afff80(void)

void FUN_143afff80(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  ushort *puVar10;
  uint local_78;
  char local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  ushort *local_60;
  int *local_58;
  int local_50;
  byte *local_48;
  int local_38;
  int local_28;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_48 = *(byte **)(param_1 + 0x10);
  pbVar3 = *(byte **)(param_1 + 0x18);
  local_60 = *(ushort **)(param_1 + 0x20);
  puVar4 = *(ushort **)(param_1 + 0x28);
  local_58 = *(int **)(param_1 + 0x30);
  local_64 = *(int *)(lVar2 + 0x48);
  if (local_64 == 0) {
    local_64 = 0x40;
  }
  local_68 = *(uint *)(lVar2 + 0x4c) & 3;
  local_6c = (int)*(uint *)(lVar2 + 0x4c) >> 2;
  local_74 = *(char *)(lVar2 + 0x40);
  pbVar7 = (byte *)(lVar2 + 0x41);
  if (local_74 == '\0') {
    local_28 = 0;
  }
  else {
    local_28 = -1;
  }
  local_50 = local_28;
  local_70 = 0;
  if (local_68 == 0) goto LAB_143b000a6;
  if (local_74 < '\x01') goto LAB_143b000a6;
  if (puVar4 <= local_60) goto LAB_143b000a6;
LAB_143b004b3:
  do {
    if (pbVar3 <= local_48) {
LAB_143b0070b:
      if (*param_2 == 0xc) {
        *(undefined4 *)(lVar2 + 0x48) = 0x40;
        *(undefined4 *)(lVar2 + 0x4c) = 0;
      }
      else {
        *(int *)(lVar2 + 0x48) = local_64;
        *(uint *)(lVar2 + 0x4c) = local_6c << 2 | local_68;
      }
      *(char *)(lVar2 + 0x40) = local_74;
      *(byte **)(param_1 + 0x10) = local_48;
      *(ushort **)(param_1 + 0x20) = local_60;
      *(int **)(param_1 + 0x30) = local_58;
      return;
    }
    local_70 = local_70 + 1;
    pbVar7[local_74] = *local_48;
    lVar9 = (longlong)local_74;
    local_74 = local_74 + '\x01';
    local_48 = local_48 + 1;
    iVar6 = FUN_143b00f90(local_68,pbVar7[lVar9]);
    if (iVar6 < 0) {
      *param_2 = 0xc;
      goto LAB_143b0070b;
    }
    local_6c = local_6c + iVar6;
    local_68 = local_68 - 1;
    if (local_68 == 0) {
      local_74 = '\0';
      local_78 = local_64 + local_6c;
      pbVar8 = local_48;
      if (local_78 < 0x110000) {
LAB_143b005a3:
        do {
          local_48 = pbVar8;
          if (((int)local_78 < 0x3040) || (0xd7a3 < (int)local_78)) {
            local_38 = (local_78 & 0xffffff80) + 0x40;
          }
          else {
            local_38 = FUN_143b00e40(local_78);
          }
          local_64 = local_38;
          if ((int)local_78 < 0x10000) {
            *local_60 = (ushort)local_78;
            local_60 = local_60 + 1;
            *local_58 = local_50;
            local_58 = local_58 + 1;
          }
          else {
            *local_60 = (short)((int)local_78 >> 10) + 0xd7c0;
            puVar10 = local_60 + 1;
            if (puVar4 <= puVar10) {
              *local_58 = local_50;
              local_58 = local_58 + 1;
              *(ushort *)(lVar2 + 0x90) = (ushort)local_78 & 0x3ff | 0xdc00;
              *(undefined1 *)(lVar2 + 0x5d) = 1;
              *param_2 = 0xf;
              local_60 = puVar10;
              goto LAB_143b0070b;
            }
            *puVar10 = (ushort)local_78 & 0x3ff | 0xdc00;
            local_60 = local_60 + 2;
            *local_58 = local_50;
            local_58[1] = local_50;
            local_58 = local_58 + 2;
          }
          local_50 = local_70;
LAB_143b001fa:
          while( true ) {
            if (pbVar3 <= local_48) goto LAB_143b0070b;
            if (puVar4 <= local_60) {
              *param_2 = 0xf;
              goto LAB_143b0070b;
            }
            local_70 = local_50 + 1;
            bVar1 = *local_48;
            local_78 = (uint)bVar1;
            pbVar8 = local_48 + 1;
            if ((local_78 < 0x50) || (0xcf < local_78)) break;
            local_78 = local_64 + -0x90 + local_78;
            if (0x2fff < (int)local_78) goto LAB_143b005a3;
            *local_60 = (ushort)local_78;
            local_60 = local_60 + 1;
            *local_58 = local_50;
            local_58 = local_58 + 1;
            local_64 = (local_78 & 0xffffff80) + 0x40;
            local_48 = pbVar8;
LAB_143b000a6:
            local_6c = (int)pbVar3 - (int)local_48;
            local_68 = (uint)(*(longlong *)(param_1 + 0x28) - (longlong)local_60 >> 1);
            if ((int)local_6c < (int)local_68) {
              local_68 = local_6c;
            }
            for (; 0 < (int)local_68; local_68 = local_68 - 1) {
              uVar5 = (uint)*local_48;
              if ((uVar5 < 0x50) || (0xcf < uVar5)) {
                if (0x20 < uVar5) break;
                if (uVar5 != 0x20) {
                  local_64 = 0x40;
                }
                local_78._0_2_ = (ushort)*local_48;
                *local_60 = (ushort)local_78;
                *local_58 = local_70;
              }
              else {
                uVar5 = local_64 + -0x90 + uVar5;
                if (0x2fff < (int)uVar5) break;
                local_78._0_2_ = (ushort)uVar5;
                *local_60 = (ushort)local_78;
                *local_58 = local_70;
                local_64 = (uVar5 & 0xffffff80) + 0x40;
              }
              local_58 = local_58 + 1;
              local_60 = local_60 + 1;
              local_70 = local_70 + 1;
              local_48 = local_48 + 1;
            }
            local_50 = local_70;
          }
          if (local_78 < 0x21) {
            if (local_78 != 0x20) {
              local_64 = 0x40;
            }
            local_78._0_2_ = (ushort)bVar1;
            *local_60 = (ushort)local_78;
            local_60 = local_60 + 1;
            *local_58 = local_50;
            local_58 = local_58 + 1;
            local_50 = local_70;
            local_48 = pbVar8;
            goto LAB_143b001fa;
          }
          if (((local_78 < 0x25) || (0xfa < local_78)) || (pbVar3 <= pbVar8)) {
            if (local_78 != 0xff) {
              *pbVar7 = bVar1;
              local_74 = '\x01';
              local_6c = FUN_143b00ea0(local_78);
              local_68 = local_6c & 3;
              local_6c = (int)local_6c >> 2;
              local_48 = pbVar8;
              goto LAB_143b004b3;
            }
            local_64 = 0x40;
            local_50 = local_70;
            local_48 = pbVar8;
            goto LAB_143b001fa;
          }
          if (local_78 < 0x90) {
            local_6c = (local_78 - 0x50) * 0xf3 - 0x40;
          }
          else {
            local_6c = (local_78 - 0xd0) * 0xf3 + 0x40;
          }
          local_70 = local_50 + 2;
          iVar6 = FUN_143b00f90(1,*pbVar8);
          if ((iVar6 < 0) ||
             (local_78 = local_64 + local_6c + iVar6, pbVar8 = local_48 + 2, 0x10ffff < local_78)) {
            *pbVar7 = *local_48;
            *(byte *)(lVar2 + 0x42) = local_48[1];
            local_74 = '\x02';
            *param_2 = 0xc;
            local_48 = local_48 + 2;
            goto LAB_143b0070b;
          }
        } while( true );
      }
      *param_2 = 0xc;
      goto LAB_143b0070b;
    }
  } while( true );
}



// FUNCTION 143b007a0 FUN_143b007a0 body=1658 status=ok
// SIG undefined FUN_143b007a0(void)

void FUN_143b007a0(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  ushort *puVar10;
  uint local_68;
  char local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  ushort *local_50;
  byte *local_48;
  int local_38;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_48 = *(byte **)(param_1 + 0x10);
  pbVar3 = *(byte **)(param_1 + 0x18);
  local_50 = *(ushort **)(param_1 + 0x20);
  puVar4 = *(ushort **)(param_1 + 0x28);
  local_5c = *(int *)(lVar2 + 0x48);
  if (local_5c == 0) {
    local_5c = 0x40;
  }
  local_58 = *(uint *)(lVar2 + 0x4c) & 3;
  local_60 = (int)*(uint *)(lVar2 + 0x4c) >> 2;
  local_64 = *(char *)(lVar2 + 0x40);
  pbVar7 = (byte *)(lVar2 + 0x41);
  if (local_58 == 0) goto LAB_143b00884;
  if (local_64 < '\x01') goto LAB_143b00884;
  if (puVar4 <= local_50) goto LAB_143b00884;
LAB_143b00bdc:
  do {
    if (pbVar3 <= local_48) {
LAB_143b00dbb:
      if (*param_2 == 0xc) {
        *(undefined4 *)(lVar2 + 0x48) = 0x40;
        *(undefined4 *)(lVar2 + 0x4c) = 0;
      }
      else {
        *(int *)(lVar2 + 0x48) = local_5c;
        *(uint *)(lVar2 + 0x4c) = local_60 << 2 | local_58;
      }
      *(char *)(lVar2 + 0x40) = local_64;
      *(byte **)(param_1 + 0x10) = local_48;
      *(ushort **)(param_1 + 0x20) = local_50;
      return;
    }
    pbVar7[local_64] = *local_48;
    lVar9 = (longlong)local_64;
    local_64 = local_64 + '\x01';
    local_48 = local_48 + 1;
    iVar6 = FUN_143b00f90(local_58,pbVar7[lVar9]);
    if (iVar6 < 0) {
      *param_2 = 0xc;
      goto LAB_143b00dbb;
    }
    local_60 = local_60 + iVar6;
    local_58 = local_58 - 1;
    if (local_58 == 0) {
      local_64 = '\0';
      local_68 = local_5c + local_60;
      pbVar8 = local_48;
      if (local_68 < 0x110000) {
LAB_143b00cc2:
        do {
          local_48 = pbVar8;
          if (((int)local_68 < 0x3040) || (0xd7a3 < (int)local_68)) {
            local_38 = (local_68 & 0xffffff80) + 0x40;
          }
          else {
            local_38 = FUN_143b00e40(local_68);
          }
          local_5c = local_38;
          if ((int)local_68 < 0x10000) {
            *local_50 = (ushort)local_68;
            local_50 = local_50 + 1;
          }
          else {
            *local_50 = (short)((int)local_68 >> 10) + 0xd7c0;
            puVar10 = local_50 + 1;
            if (puVar4 <= puVar10) {
              *(ushort *)(lVar2 + 0x90) = (ushort)local_68 & 0x3ff | 0xdc00;
              *(undefined1 *)(lVar2 + 0x5d) = 1;
              *param_2 = 0xf;
              local_50 = puVar10;
              goto LAB_143b00dbb;
            }
            *puVar10 = (ushort)local_68 & 0x3ff | 0xdc00;
            local_50 = local_50 + 2;
          }
LAB_143b0098a:
          if (pbVar3 <= local_48) goto LAB_143b00dbb;
          if (puVar4 <= local_50) {
            *param_2 = 0xf;
            goto LAB_143b00dbb;
          }
          bVar1 = *local_48;
          local_68 = (uint)bVar1;
          pbVar8 = local_48 + 1;
          if ((0x4f < local_68) && (local_68 < 0xd0)) {
            local_68 = local_5c + -0x90 + local_68;
            if (0x2fff < (int)local_68) goto LAB_143b00cc2;
            *local_50 = (ushort)local_68;
            local_50 = local_50 + 1;
            local_5c = (local_68 & 0xffffff80) + 0x40;
            local_48 = pbVar8;
LAB_143b00884:
            local_60 = (int)pbVar3 - (int)local_48;
            local_58 = (uint)(*(longlong *)(param_1 + 0x28) - (longlong)local_50 >> 1);
            if ((int)local_60 < (int)local_58) {
              local_58 = local_60;
            }
            for (; 0 < (int)local_58; local_58 = local_58 - 1) {
              uVar5 = (uint)*local_48;
              if ((uVar5 < 0x50) || (0xcf < uVar5)) {
                if (0x20 < uVar5) break;
                if (uVar5 != 0x20) {
                  local_5c = 0x40;
                }
                local_68._0_2_ = (ushort)*local_48;
                *local_50 = (ushort)local_68;
              }
              else {
                uVar5 = local_5c + -0x90 + uVar5;
                if (0x2fff < (int)uVar5) break;
                local_68._0_2_ = (ushort)uVar5;
                *local_50 = (ushort)local_68;
                local_5c = (uVar5 & 0xffffff80) + 0x40;
              }
              local_50 = local_50 + 1;
              local_48 = local_48 + 1;
            }
            goto LAB_143b0098a;
          }
          if (local_68 < 0x21) {
            if (local_68 != 0x20) {
              local_5c = 0x40;
            }
            local_68._0_2_ = (ushort)bVar1;
            *local_50 = (ushort)local_68;
            local_50 = local_50 + 1;
            local_48 = pbVar8;
            goto LAB_143b0098a;
          }
          if (((local_68 < 0x25) || (0xfa < local_68)) || (pbVar3 <= pbVar8)) {
            if (local_68 != 0xff) {
              *pbVar7 = bVar1;
              local_64 = '\x01';
              local_60 = FUN_143b00ea0(local_68);
              local_58 = local_60 & 3;
              local_60 = (int)local_60 >> 2;
              local_48 = pbVar8;
              goto LAB_143b00bdc;
            }
            local_5c = 0x40;
            local_48 = pbVar8;
            goto LAB_143b0098a;
          }
          if (local_68 < 0x90) {
            local_60 = (local_68 - 0x50) * 0xf3 - 0x40;
          }
          else {
            local_60 = (local_68 - 0xd0) * 0xf3 + 0x40;
          }
          iVar6 = FUN_143b00f90(1,*pbVar8);
          if ((iVar6 < 0) ||
             (local_68 = local_5c + local_60 + iVar6, pbVar8 = local_48 + 2, 0x10ffff < local_68)) {
            *pbVar7 = *local_48;
            *(byte *)(lVar2 + 0x42) = local_48[1];
            local_64 = '\x02';
            *param_2 = 0xc;
            local_48 = local_48 + 2;
            goto LAB_143b00dbb;
          }
        } while( true );
      }
      *param_2 = 0xc;
      goto LAB_143b00dbb;
    }
  } while( true );
}



// FUNCTION 143b00e40 FUN_143b00e40 body=76 status=ok
// SIG undefined FUN_143b00e40(void)

int FUN_143b00e40(uint param_1)

{
  int iVar1;
  
  if ((int)param_1 < 0x30a0) {
    iVar1 = 0x3070;
  }
  else if (((int)param_1 < 0x4e00) || (0x9fa5 < (int)param_1)) {
    if ((int)param_1 < 0xac00) {
      iVar1 = (param_1 & 0xffffff80) + 0x40;
    }
    else {
      iVar1 = 0xc1d1;
    }
  }
  else {
    iVar1 = 0x7711;
  }
  return iVar1;
}



// FUNCTION 143b00ea0 FUN_143b00ea0 body=232 status=ok
// SIG undefined FUN_143b00ea0(void)

uint FUN_143b00ea0(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1 < 0x50) {
    if (param_1 < 0x25) {
      if (param_1 < 0x22) {
        local_18 = -0xddcf77;
        local_14 = 3;
      }
      else {
        local_18 = (param_1 + -0x25) * 0xe6a9 + -0x2911;
        local_14 = 2;
      }
    }
    else {
      local_18 = (param_1 + -0x50) * 0xf3 + -0x40;
      local_14 = 1;
    }
  }
  else if (param_1 < 0xfb) {
    local_18 = (param_1 + -0xd0) * 0xf3 + 0x40;
    local_14 = 1;
  }
  else if (param_1 < 0xfe) {
    local_18 = (param_1 + -0xfb) * 0xe6a9 + 0x2911;
    local_14 = 2;
  }
  else {
    local_18 = 0x2dd0c;
    local_14 = 3;
  }
  return local_18 << 2 | local_14;
}



// FUNCTION 143b00f90 FUN_143b00f90 body=87 status=ok
// SIG undefined FUN_143b00f90(void)

int FUN_143b00f90(int param_1,int param_2)

{
  int local_res10;
  
  if (param_2 < 0x21) {
    local_res10 = (int)(char)(&DAT_145d01560)[param_2];
  }
  else {
    local_res10 = param_2 + -0xd;
  }
  if (param_1 != 1) {
    if (param_1 == 2) {
      local_res10 = local_res10 * 0xf3;
    }
    else {
      local_res10 = local_res10 * 0xe6a9;
    }
  }
  return local_res10;
}



// FUNCTION 143b00ff0 FUN_143b00ff0 body=1451 status=ok
// SIG undefined FUN_143b00ff0(void)

uint FUN_143b00ff0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_res8;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1 < -0x40) {
    if (param_1 < -0x2911) {
      if (param_1 < -0x2dd0c) {
        local_48 = (param_1 + 0x2dd0c) % 0xf3;
        local_res8 = (param_1 + 0x2dd0c) / 0xf3;
        if (local_48 < 0) {
          local_res8 = local_res8 + -1;
          local_48 = local_48 + 0xf3;
        }
        if (local_48 < 0x14) {
          local_24 = (uint)(char)(&DAT_145d01588)[local_48];
        }
        else {
          local_24 = local_48 + 0xd;
        }
        local_48 = local_res8 % 0xf3;
        local_res8 = local_res8 / 0xf3;
        if (local_48 < 0) {
          local_res8 = local_res8 + -1;
          local_48 = local_48 + 0xf3;
        }
        if (local_48 < 0x14) {
          local_1c = (int)(char)(&DAT_145d01588)[local_48];
        }
        else {
          local_1c = local_48 + 0xd;
        }
        if (local_res8 + 0xf3 < 0x14) {
          local_14 = (int)(char)(&DAT_145d01588)[local_res8 + 0xf3];
        }
        else {
          local_14 = local_res8 + 0x100;
        }
        local_44 = local_24 | local_1c << 8 | local_14 << 0x10 | 0x21000000;
      }
      else {
        local_48 = (param_1 + 0x2911) % 0xf3;
        local_res8 = (param_1 + 0x2911) / 0xf3;
        if (local_48 < 0) {
          local_res8 = local_res8 + -1;
          local_48 = local_48 + 0xf3;
        }
        if (local_48 < 0x14) {
          local_34 = (uint)(char)(&DAT_145d01588)[local_48];
        }
        else {
          local_34 = local_48 + 0xd;
        }
        local_48 = local_res8 % 0xf3;
        local_res8 = local_res8 / 0xf3;
        if (local_48 < 0) {
          local_res8 = local_res8 + -1;
          local_48 = local_48 + 0xf3;
        }
        if (local_48 < 0x14) {
          local_2c = (int)(char)(&DAT_145d01588)[local_48];
        }
        else {
          local_2c = local_48 + 0xd;
        }
        local_44 = local_34 | 0x3000000 | local_2c << 8 | (local_res8 + 0x25) * 0x10000;
      }
    }
    else {
      local_48 = (param_1 + 0x40) % 0xf3;
      local_res8 = (param_1 + 0x40) / 0xf3;
      if (local_48 < 0) {
        local_res8 = local_res8 + -1;
        local_48 = local_48 + 0xf3;
      }
      if (local_48 < 0x14) {
        local_3c = (uint)(char)(&DAT_145d01588)[local_48];
      }
      else {
        local_3c = local_48 + 0xd;
      }
      local_44 = local_3c | 0x2000000 | (local_res8 + 0x50) * 0x100;
    }
  }
  else if (param_1 < 0x2911) {
    iVar1 = (param_1 + -0x40) % 0xf3;
    if (iVar1 < 0x14) {
      local_20 = (uint)(char)(&DAT_145d01588)[iVar1];
    }
    else {
      local_20 = iVar1 + 0xd;
    }
    local_44 = local_20 | 0x2000000 | ((param_1 + -0x40) / 0xf3 + 0xd0) * 0x100;
  }
  else if (param_1 < 0x2dd0c) {
    iVar1 = (param_1 + -0x2911) % 0xf3;
    iVar2 = (param_1 + -0x2911) / 0xf3;
    if (iVar1 < 0x14) {
      local_38 = (uint)(char)(&DAT_145d01588)[iVar1];
    }
    else {
      local_38 = iVar1 + 0xd;
    }
    local_18 = iVar2 % 0xf3;
    if (local_18 < 0x14) {
      local_18 = (int)(char)(&DAT_145d01588)[local_18];
    }
    else {
      local_18 = local_18 + 0xd;
    }
    local_44 = local_38 | 0x3000000 | local_18 << 8 | (iVar2 / 0xf3 + 0xfb) * 0x10000;
  }
  else {
    iVar1 = (param_1 + -0x2dd0c) % 0xf3;
    local_28 = (param_1 + -0x2dd0c) / 0xf3;
    if (iVar1 < 0x14) {
      local_30 = (uint)(char)(&DAT_145d01588)[iVar1];
    }
    else {
      local_30 = iVar1 + 0xd;
    }
    local_40 = local_28 % 0xf3;
    local_28 = local_28 / 0xf3;
    if (local_40 < 0x14) {
      local_40 = (int)(char)(&DAT_145d01588)[local_40];
    }
    else {
      local_40 = local_40 + 0xd;
    }
    if (local_28 < 0x14) {
      local_28 = (int)(char)(&DAT_145d01588)[local_28];
    }
    else {
      local_28 = local_28 + 0xd;
    }
    local_44 = local_30 | local_40 << 8 | local_28 << 0x10 | 0xfe000000;
  }
  return local_44;
}



// FUNCTION 143b015a0 FUN_143b015a0 body=1158 status=ok
// SIG undefined FUN_143b015a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b015a0(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined4 local_120;
  undefined1 local_11c [36];
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar1 = FUN_143aa7a40(0xa8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *param_3 = 7;
  }
  else {
    local_128 = *(undefined8 **)(param_1 + 0x10);
    local_120 = 0x28;
    puVar3 = local_11c;
    for (lVar2 = 0x24; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *local_128 = 0;
    uVar1 = FUN_143abd4c0("icu-internal-compound-s1",local_f8,&local_120,param_3);
    local_128[1] = uVar1;
    uVar1 = FUN_143abd4c0("icu-internal-compound-s2",local_f8,&local_120,param_3);
    local_128[2] = uVar1;
    uVar1 = FUN_143abd4c0("icu-internal-compound-s3",local_f8,&local_120,param_3);
    local_128[3] = uVar1;
    uVar1 = FUN_143abd4c0("icu-internal-compound-d1",local_f8,&local_120,param_3);
    local_128[4] = uVar1;
    uVar1 = FUN_143abd4c0("icu-internal-compound-d2",local_f8,&local_120,param_3);
    local_128[5] = uVar1;
    uVar1 = FUN_143abd4c0("icu-internal-compound-d3",local_f8,&local_120,param_3);
    local_128[6] = uVar1;
    uVar1 = FUN_143abd4c0("icu-internal-compound-d4",local_f8,&local_120,param_3);
    local_128[7] = uVar1;
    uVar1 = FUN_143abd4c0("icu-internal-compound-d5",local_f8,&local_120,param_3);
    local_128[8] = uVar1;
    uVar1 = FUN_143abd4c0("icu-internal-compound-d6",local_f8,&local_120,param_3);
    local_128[9] = uVar1;
    uVar1 = FUN_143abd4c0("icu-internal-compound-d7",local_f8,&local_120,param_3);
    local_128[10] = uVar1;
    uVar1 = FUN_143abd4c0("icu-internal-compound-t",local_f8,&local_120,param_3);
    local_128[0xb] = uVar1;
    uVar1 = FUN_143abd4c0("ibm-915_P100-1995",local_f8,&local_120,param_3);
    local_128[0xc] = uVar1;
    uVar1 = FUN_143abd4c0("ibm-916_P100-1995",local_f8,&local_120,param_3);
    local_128[0xd] = uVar1;
    uVar1 = FUN_143abd4c0("ibm-914_P100-1995",local_f8,&local_120,param_3);
    local_128[0xe] = uVar1;
    uVar1 = FUN_143abd4c0("ibm-874_P100-1995",local_f8,&local_120,param_3);
    local_128[0xf] = uVar1;
    uVar1 = FUN_143abd4c0("ibm-912_P100-1995",local_f8,&local_120,param_3);
    local_128[0x10] = uVar1;
    uVar1 = FUN_143abd4c0("ibm-913_P100-2000",local_f8,&local_120,param_3);
    local_128[0x11] = uVar1;
    uVar1 = FUN_143abd4c0("iso-8859_14-1998",local_f8,&local_120,param_3);
    local_128[0x12] = uVar1;
    uVar1 = FUN_143abd4c0("ibm-923_P100-1998",local_f8,&local_120,param_3);
    local_128[0x13] = uVar1;
    if ((*param_3 < 1) && (*(char *)(param_2 + 8) == '\0')) {
      *(undefined4 *)(local_128 + 0x14) = 0;
    }
    else {
      FUN_143b01a30(param_1);
    }
  }
  return;
}



// FUNCTION 143b01a30 FUN_143b01a30 body=119 status=ok
// SIG undefined FUN_143b01a30(void)

void FUN_143b01a30(longlong param_1)

{
  longlong lVar1;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      if (*(longlong *)(lVar1 + (longlong)local_18 * 8) != 0) {
        FUN_143abdae0(*(undefined8 *)(lVar1 + (longlong)local_18 * 8));
      }
    }
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 143b01ab0 FUN_143b01ab0 body=10 status=ok
// SIG undefined FUN_143b01ab0(void)

void FUN_143b01ab0(void)

{
  return;
}



// FUNCTION 143b01ac0 FUN_143b01ac0 body=13 status=ok
// SIG undefined FUN_143b01ac0(void)

char * FUN_143b01ac0(void)

{
  return "x11-compound-text";
}



// FUNCTION 143b01ad0 FUN_143b01ad0 body=1416 status=ok
// SIG undefined FUN_143b01ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b01ad0(longlong param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  uint local_80;
  undefined1 local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  ushort local_68;
  ushort *local_60;
  int local_58;
  longlong local_50;
  undefined1 *local_48;
  uint local_40 [2];
  longlong local_38;
  undefined1 *local_30;
  ushort *local_28;
  undefined1 auStack_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_50 = *(longlong *)(param_1 + 8);
  local_48 = *(undefined1 **)(param_1 + 0x20);
  local_30 = *(undefined1 **)(param_1 + 0x28);
  local_60 = *(ushort **)(param_1 + 0x10);
  local_28 = *(ushort **)(param_1 + 0x18);
  local_7c = *(undefined1 *)(local_50 + 0x3f);
  local_6c = 0;
  local_38 = *(longlong *)(local_50 + 0x10);
  local_78 = *(int *)(local_38 + 0xa0);
  local_80 = *(uint *)(local_50 + 0x54);
  if (local_80 == 0) goto LAB_143b01ba6;
  if (local_30 <= local_48) goto LAB_143b01ba6;
  while( true ) {
    if (local_28 <= local_60) {
      *(uint *)(local_50 + 0x54) = local_80;
      goto LAB_143b0200f;
    }
    local_68 = *local_60;
    if ((local_68 & 0xfc00) != 0xdc00) break;
    local_60 = local_60 + 1;
    local_80 = local_80 * 0x400 + -0x35fdc00 + (uint)local_68;
    *(undefined4 *)(local_50 + 0x54) = 0;
    do {
      local_84 = 0;
      local_70 = FUN_143b02820(local_80);
      if ((local_70 != -1) && (local_78 != local_70)) {
        local_88 = 0;
        while (local_78 = local_70,
              (&DAT_145d01900)[(longlong)local_88 + (longlong)local_70 * 5] != '\0') {
          auStack_20[local_84] = (&DAT_145d01900)[(longlong)local_88 + (longlong)local_70 * 5];
          local_84 = local_84 + 1;
          local_88 = local_88 + 1;
        }
      }
      if (local_70 == -1) {
        local_88 = 1;
LAB_143b01d7a:
        if (local_88 < 0xc) {
          local_6c = FUN_143adeb70(*(undefined8 *)(local_38 + (longlong)local_88 * 8),local_80,
                                   local_40,local_7c);
          if (local_6c < 1) goto LAB_143b01d70;
          local_70 = local_88;
          local_74 = local_6c;
          if (local_78 != local_88) {
            local_78 = local_88;
            local_58 = 0;
            while ((&DAT_145d01900)[(longlong)local_58 + (longlong)local_88 * 5] != '\0') {
              auStack_20[local_84] = (&DAT_145d01900)[(longlong)local_58 + (longlong)local_88 * 5];
              local_84 = local_84 + 1;
              local_58 = local_58 + 1;
            }
          }
          while (local_74 = local_74 + -1, -1 < local_74) {
            auStack_20[local_84] = (char)(local_40[0] >> ((char)local_74 * '\b' & 0x1fU));
            local_84 = local_84 + 1;
          }
        }
        goto LAB_143b01f25;
      }
      if (local_70 == 0) {
        auStack_20[local_84] = (undefined1)local_80;
        local_84 = local_84 + 1;
      }
      else {
        local_6c = FUN_143adeb70(*(undefined8 *)(local_38 + (longlong)local_78 * 8),local_80,
                                 local_40,local_7c);
        iVar2 = local_6c;
        if (0 < local_6c) {
          while (local_74 = iVar2 + -1, -1 < local_74) {
            auStack_20[local_84] = (char)(local_40[0] >> ((char)local_74 * '\b' & 0x1fU));
            local_84 = local_84 + 1;
            iVar2 = local_74;
          }
        }
      }
LAB_143b01f25:
      for (local_88 = 0; local_88 < local_84; local_88 = local_88 + 1) {
        if (local_30 <= local_48) {
          *param_2 = 0xf;
          break;
        }
        *local_48 = auStack_20[local_88];
        local_48 = local_48 + 1;
      }
      if (*param_2 == 0xf) {
        for (; local_88 < local_84; local_88 = local_88 + 1) {
          *(undefined1 *)
           (*(longlong *)(param_1 + 8) + 0x68 +
           (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b)) = auStack_20[local_88];
          *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
               *(char *)(*(longlong *)(param_1 + 8) + 0x5b) + '\x01';
        }
      }
LAB_143b01ba6:
      if (local_28 <= local_60) goto LAB_143b0200f;
      if (local_30 <= local_48) {
        *param_2 = 0xf;
        goto LAB_143b0200f;
      }
      uVar1 = *local_60;
      local_80 = (uint)uVar1;
      local_60 = local_60 + 1;
    } while ((local_80 & 0xfffff800) != 0xd800);
    if ((uVar1 & 0x400) != 0) {
      *param_2 = 0xc;
      *(uint *)(local_50 + 0x54) = local_80;
LAB_143b0200f:
      *(int *)(local_38 + 0xa0) = local_78;
      *(ushort **)(param_1 + 0x10) = local_60;
      *(undefined1 **)(param_1 + 0x20) = local_48;
      return;
    }
  }
  *param_2 = 0xc;
  *(uint *)(local_50 + 0x54) = local_80;
  goto LAB_143b0200f;
LAB_143b01d70:
  local_88 = local_88 + 1;
  goto LAB_143b01d7a;
}



// FUNCTION 143b02060 FUN_143b02060 body=1283 status=ok
// SIG undefined FUN_143b02060(void)

void FUN_143b02060(ushort *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  size_t sVar6;
  byte *local_98;
  int local_90;
  ushort *local_80;
  uint local_74;
  undefined2 local_50 [4];
  longlong local_48;
  byte *local_40;
  byte *local_38;
  ushort *local_30;
  void *local_18;
  
  local_98 = *(byte **)(param_1 + 8);
  local_80 = *(ushort **)(param_1 + 0x10);
  pbVar2 = *(byte **)(param_1 + 0xc);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 4) + 0x10);
  if (*param_1 < 0x38) {
    local_74 = (uint)*param_1;
  }
  else {
    local_74 = 0x38;
  }
  _guard_xfg_dispatch_icall_nop(local_50,param_1,(longlong)(int)local_74);
  local_50[0] = (undefined2)local_74;
  local_90 = *(int *)(lVar3 + 0xa0);
LAB_143b02141:
  do {
    do {
      if (pbVar2 <= local_98) goto LAB_143b0252c;
      if (*(ushort **)(param_1 + 0x14) <= local_80) {
        *param_2 = 0xf;
        goto LAB_143b0252c;
      }
      if (*(char *)(*(longlong *)(param_1 + 4) + 0x40) < '\x01') {
        bVar1 = *local_98;
      }
      else {
        bVar1 = *(byte *)(*(longlong *)(param_1 + 4) + 0x41);
      }
      if (bVar1 == 0x1b) {
        iVar5 = FUN_143b026b0(local_98,pbVar2,*(longlong *)(param_1 + 4) + 0x41,
                              (int)*(char *)(*(longlong *)(param_1 + 4) + 0x40),param_2);
        if (*param_2 == 0xb) goto LAB_143b02206;
        if (iVar5 == -2) {
          if (*(char *)(*(longlong *)(param_1 + 4) + 0x40) == '\0') {
            local_98 = local_98 + 1;
          }
          *param_2 = 0xc;
          goto LAB_143b0252c;
        }
        if (iVar5 != local_90) {
          local_90 = iVar5;
        }
        sVar6 = _guard_xfg_dispatch_icall_nop(&DAT_145d01900 + (longlong)local_90 * 5);
        local_98 = local_98 + ((int)sVar6 - (int)*(char *)(*(longlong *)(param_1 + 4) + 0x40));
        *(undefined1 *)(*(longlong *)(param_1 + 4) + 0x40) = 0;
      }
      if (local_90 == 0) {
        while( true ) {
          if ((pbVar2 <= local_98) || (*local_98 == 0x1b)) goto LAB_143b02141;
          if (*(ushort **)(param_1 + 0x14) <= local_80) break;
          *local_80 = (ushort)*local_98;
          local_80 = local_80 + 1;
          local_98 = local_98 + 1;
        }
        *param_2 = 0xf;
        goto LAB_143b02141;
      }
    } while (pbVar2 <= local_98);
    iVar5 = FUN_143b02650(local_98,pbVar2);
    local_38 = local_98 + iVar5;
    local_40 = local_98;
    local_30 = local_80;
    uVar4 = *(undefined8 *)(local_48 + 0x30);
    *(undefined8 *)(local_48 + 0x30) = *(undefined8 *)(lVar3 + (longlong)local_90 * 8);
    FUN_143ad85d0(local_50,param_2);
    *(undefined8 *)(local_48 + 0x30) = uVar4;
    local_98 = local_40;
    local_80 = local_30;
  } while (*param_2 < 1);
  if (*param_2 == 0xf) {
    if ('\0' < *(char *)(local_48 + 0x5d)) {
      local_18 = (void *)(*(longlong *)(param_1 + 4) + 0x90);
      _guard_xfg_dispatch_icall_nop
                (local_18,(void *)(local_48 + 0x90),(longlong)*(char *)(local_48 + 0x5d));
    }
    *(undefined1 *)(*(longlong *)(param_1 + 4) + 0x5d) = *(undefined1 *)(local_48 + 0x5d);
    *(undefined1 *)(local_48 + 0x5d) = 0;
  }
LAB_143b0252c:
  *(int *)(lVar3 + 0xa0) = local_90;
  *(ushort **)(param_1 + 0x10) = local_80;
  *(byte **)(param_1 + 8) = local_98;
  return;
LAB_143b02206:
  for (; local_98 < pbVar2; local_98 = local_98 + 1) {
    *(byte *)(*(longlong *)(param_1 + 4) + 0x41 +
             (longlong)*(char *)(*(longlong *)(param_1 + 4) + 0x40)) = *local_98;
    *(char *)(*(longlong *)(param_1 + 4) + 0x40) =
         *(char *)(*(longlong *)(param_1 + 4) + 0x40) + '\x01';
  }
  *param_2 = 0;
  goto LAB_143b0252c;
}



// FUNCTION 143b02570 FUN_143b02570 body=220 status=ok
// SIG undefined FUN_143b02570(void)

void FUN_143b02570(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  int local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  for (local_18 = 1; local_18 < 0x14; local_18 = local_18 + 1) {
    FUN_143adf6b0(*(undefined8 *)(lVar1 + (longlong)local_18 * 8),param_2,param_3,param_4);
  }
  (*(code *)param_2[1])(*param_2,0);
  (*(code *)param_2[1])(*param_2,9);
  (*(code *)param_2[1])(*param_2,10);
  (*(code *)param_2[2])(*param_2,0x20,0x7f);
  (*(code *)param_2[2])(*param_2,0xa0,0xff);
  return;
}



// FUNCTION 143b02650 FUN_143b02650 body=94 status=ok
// SIG undefined FUN_143b02650(void)

int FUN_143b02650(longlong param_1,int param_2)

{
  int iVar1;
  int local_18;
  
  param_2 = param_2 - (int)param_1;
  for (local_18 = 1;
      (iVar1 = param_2, local_18 < param_2 &&
      (iVar1 = local_18, *(char *)(param_1 + local_18) != '\x1b')); local_18 = local_18 + 1) {
  }
  return iVar1;
}



// FUNCTION 143b026b0 FUN_143b026b0 body=363 status=ok
// SIG undefined FUN_143b026b0(void)

int FUN_143b026b0(longlong param_1,ulonglong param_2,longlong param_3,int param_4,
                 undefined4 *param_5)

{
  bool bVar1;
  int local_24;
  int local_20;
  int local_18;
  
  local_18 = -2;
  bVar1 = false;
  for (local_20 = 0; local_20 < 0x14; local_20 = local_20 + 1) {
    bVar1 = true;
    local_24 = 0;
    while ((&DAT_145d01900)[(longlong)local_24 + (longlong)local_20 * 5] != '\0') {
      if (local_24 < param_4) {
        if (*(char *)(param_3 + local_24) !=
            (&DAT_145d01900)[(longlong)local_24 + (longlong)local_20 * 5]) {
          bVar1 = false;
          break;
        }
      }
      else {
        if (param_2 <= (ulonglong)(param_1 + (local_24 - param_4))) {
          *param_5 = 0xb;
          bVar1 = false;
          break;
        }
        if ((int)*(char *)(param_1 + (local_24 - param_4)) !=
            (uint)(byte)(&DAT_145d01900)[(longlong)local_24 + (longlong)local_20 * 5]) {
          bVar1 = false;
          break;
        }
      }
      local_24 = local_24 + 1;
    }
    if (bVar1) break;
  }
  if (bVar1) {
    local_18 = local_20;
  }
  return local_18;
}



// FUNCTION 143b02820 FUN_143b02820 body=1687 status=ok
// SIG undefined FUN_143b02820(void)

undefined4 FUN_143b02820(int param_1)

{
  undefined4 local_18;
  
  local_18 = 0xffffffff;
  if ((((param_1 == 0) || (param_1 == 9)) || (param_1 == 10)) ||
     (((0x1f < param_1 && (param_1 < 0x80)) || ((0x9f < param_1 && (param_1 < 0x100)))))) {
    local_18 = 0;
  }
  else if (((((param_1 < 0x102) || (0x107 < param_1)) && ((param_1 < 0x10c || (0x111 < param_1))))
           && ((((((((((param_1 < 0x118 || (0x11b < param_1)) && (param_1 != 0x139)) &&
                     ((param_1 != 0x13a && (param_1 != 0x13d)))) && (param_1 != 0x13e)) &&
                   ((param_1 < 0x141 || (0x144 < param_1)))) &&
                  (((param_1 != 0x147 &&
                    (((param_1 != 0x147 && (param_1 != 0x150)) && (param_1 != 0x151)))) &&
                   ((param_1 != 0x154 && (param_1 != 0x155)))))) &&
                 ((param_1 < 0x158 || (0x15b < param_1)))) &&
                (((param_1 != 0x15e && (param_1 != 0x15f)) &&
                 ((param_1 < 0x160 || (0x165 < param_1)))))) &&
               (((param_1 != 0x16e && (param_1 != 0x16f)) && (param_1 != 0x170)))))) &&
          (((param_1 != 0x171 && ((param_1 < 0x179 || (0x17e < param_1)))) &&
           ((((param_1 != 0x2c7 && ((param_1 != 0x2d8 && (param_1 != 0x2d9)))) && (param_1 != 0x2db)
             ) && (param_1 != 0x2dd)))))) {
    if ((((((param_1 < 0x108) || (0x10b < param_1)) && (param_1 != 0x11c)) &&
         ((param_1 != 0x11d && (param_1 != 0x120)))) &&
        ((param_1 != 0x121 && ((param_1 < 0x124 || (0x127 < param_1)))))) &&
       ((param_1 != 0x134 &&
        ((((param_1 != 0x135 && (param_1 != 0x15c)) && (param_1 != 0x15d)) &&
         ((param_1 != 0x16c && (param_1 != 0x16d)))))))) {
      if (((((param_1 < 0x174) || (0x177 < param_1)) &&
           (((param_1 != 0x1e0a && (param_1 != 0x1e0b)) && (param_1 != 0x1e1e)))) &&
          ((((param_1 != 0x1e1f && (param_1 != 0x1e40)) && (param_1 != 0x1e41)) &&
           ((param_1 != 0x1e56 && (param_1 != 0x1e57)))))) &&
         ((((param_1 != 0x1e60 && ((param_1 != 0x1e61 && (param_1 != 0x1e6a)))) &&
           (param_1 != 0x1e6b)) &&
          (((param_1 != 0x1ef2 && (param_1 != 0x1ef3)) && ((param_1 < 0x1e80 || (0x1e85 < param_1)))
           ))))) {
        if ((((param_1 == 0x152) || (param_1 == 0x153)) || (param_1 == 0x178)) ||
           (param_1 == 0x20ac)) {
          local_18 = 0x13;
        }
        else if (((param_1 < 0xe01) || (0xe3a < param_1)) &&
                ((param_1 < 0xe3f || (0xe5b < param_1)))) {
          if ((((((param_1 == 0x100) || (param_1 == 0x101)) ||
                ((param_1 == 0x112 ||
                 (((param_1 == 0x113 || (param_1 == 0x116)) || (param_1 == 0x117)))))) ||
               ((param_1 == 0x122 || (param_1 == 0x123)))) || ((0x127 < param_1 && (param_1 < 300)))
              ) || (((((param_1 == 0x12e || (param_1 == 0x12f)) ||
                      ((0x135 < param_1 && (param_1 < 0x139)))) ||
                     (((param_1 == 0x13b || (param_1 == 0x13c)) || (param_1 == 0x145)))) ||
                    (((param_1 == 0x146 || ((0x149 < param_1 && (param_1 < 0x14e)))) ||
                     ((((param_1 == 0x156 || (param_1 == 0x157)) ||
                       (((0x165 < param_1 && (param_1 < 0x16c)) || (param_1 == 0x172)))) ||
                      (param_1 == 0x173)))))))) {
            local_18 = 0xe;
          }
          else if ((((param_1 == 700) || (param_1 == 0x2bd)) ||
                   ((899 < param_1 && (param_1 < 0x3cf)))) || (param_1 == 0x2015)) {
            local_18 = 2;
          }
          else if ((((((((param_1 == 0x60c) || (param_1 == 0x61b)) || (param_1 == 0x61f)) ||
                      ((0x620 < param_1 && (param_1 < 0x63b)))) ||
                     ((0x63f < param_1 && (param_1 < 0x653)))) ||
                    ((0x65f < param_1 && (param_1 < 0x66e)))) || (param_1 == 0x200b)) ||
                  ((((0xfe6f < param_1 && (param_1 < 0xfe73)) || (param_1 == 0xfe74)) ||
                   ((0xfe75 < param_1 && (param_1 < 0xfebf)))))) {
            local_18 = 3;
          }
          else if (((param_1 < 0x5d0) || (0x5ea < param_1)) &&
                  ((param_1 != 0x2017 && (param_1 != 0x203e)))) {
            if (((param_1 < 0x401) || (0x45f < param_1)) && (param_1 != 0x2116)) {
              if ((((param_1 == 0x11e) || (param_1 == 0x11f)) || (param_1 == 0x130)) ||
                 ((param_1 == 0x131 || ((0x217 < param_1 && (param_1 < 0x21c)))))) {
                local_18 = 1;
              }
            }
            else {
              local_18 = 0xc;
            }
          }
          else {
            local_18 = 0xd;
          }
        }
        else {
          local_18 = 0xf;
        }
      }
      else {
        local_18 = 0x12;
      }
    }
    else {
      local_18 = 0x11;
    }
  }
  else {
    local_18 = 0x10;
  }
  return local_18;
}



// FUNCTION 143b02ec0 FUN_143b02ec0 body=56 status=ok
// SIG undefined FUN_143b02ec0(void)

undefined4 FUN_143b02ec0(longlong param_1)

{
  undefined4 local_18;
  
  local_18 = 0;
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    local_18 = **(undefined4 **)(param_1 + 0x10);
  }
  return local_18;
}



// FUNCTION 143b02f00 FUN_143b02f00 body=233 status=ok
// SIG undefined FUN_143b02f00(void)

longlong FUN_143b02f00(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 == (int *)0x0) {
    lVar4 = *(longlong *)(param_1 + 8);
  }
  else {
    iVar1 = *piVar2;
    iVar3 = FUN_143b030d0(param_2,piVar2,piVar2 + 1,iVar1);
    if (iVar3 < 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar3;
      if (iVar3 + 1 < iVar1) {
        *param_3 = piVar2[lVar4 * 2 + 4] - piVar2[lVar4 * 2 + 2];
      }
      else {
        *param_3 = -1;
      }
      lVar4 = (longlong)piVar2 + (ulonglong)(uint)piVar2[lVar4 * 2 + 2];
    }
  }
  return lVar4;
}



// FUNCTION 143b02ff0 FUN_143b02ff0 body=58 status=ok
// SIG undefined FUN_143b02ff0(void)

undefined4 FUN_143b02ff0(longlong param_1)

{
  undefined4 local_18;
  
  if (*(undefined4 **)(param_1 + 0x10) == (undefined4 *)0x0) {
    local_18 = 0;
  }
  else {
    local_18 = **(undefined4 **)(param_1 + 0x10);
  }
  return local_18;
}



// FUNCTION 143b03030 FUN_143b03030 body=154 status=ok
// SIG undefined FUN_143b03030(void)

undefined8 FUN_143b03030(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    iVar2 = FUN_143b03260(param_2,puVar1 + 2,*puVar1);
    if (iVar2 < 0) {
      uVar3 = 0;
    }
    else {
      *param_3 = 0xffffffff;
      uVar3 = FUN_143ac5600(*(undefined8 *)(puVar1 + (longlong)iVar2 * 4 + 4));
    }
  }
  return uVar3;
}



// FUNCTION 143b030d0 FUN_143b030d0 body=393 status=ok
// SIG undefined FUN_143b030d0(void)

int FUN_143b030d0(undefined8 param_1,longlong param_2,uint *param_3,int param_4)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_20 = 0;
  if (param_4 == 0) {
    local_28 = -1;
  }
  else {
    iVar1 = FUN_143b033d0(param_1,param_2 + (ulonglong)*param_3,&local_18);
    if (iVar1 == 0) {
      local_28 = 0;
    }
    else {
      local_24 = 1;
      local_28 = param_4 + -1;
      iVar1 = FUN_143b033d0(param_1,param_2 + (ulonglong)param_3[(longlong)local_28 * 2],&local_20);
      if (iVar1 != 0) {
        while (local_24 < local_28) {
          local_1c = (local_24 + local_28) / 2;
          if (local_18 < local_20) {
            local_10 = local_18;
          }
          else {
            local_10 = local_20;
          }
          local_14 = local_10;
          local_c = FUN_143b033d0(param_1,param_2 + (ulonglong)param_3[(longlong)local_1c * 2],
                                  &local_14);
          if (local_c < 0) {
            local_28 = local_1c;
            local_20 = local_14;
          }
          else {
            if (local_c == 0) {
              return local_1c;
            }
            local_24 = local_1c + 1;
            local_18 = local_14;
          }
        }
        local_28 = -1;
      }
    }
  }
  return local_28;
}



// FUNCTION 143b03260 FUN_143b03260 body=357 status=ok
// SIG undefined FUN_143b03260(void)

int FUN_143b03260(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_20 = 0;
  if (param_3 == 0) {
    local_28 = -1;
  }
  else {
    iVar1 = FUN_143b033d0(param_1,*param_2,&local_18);
    if (iVar1 == 0) {
      local_28 = 0;
    }
    else {
      local_24 = 1;
      local_28 = param_3 + -1;
      iVar1 = FUN_143b033d0(param_1,param_2[(longlong)local_28 * 2],&local_20);
      if (iVar1 != 0) {
        while (local_24 < local_28) {
          local_1c = (local_24 + local_28) / 2;
          if (local_18 < local_20) {
            local_10 = local_18;
          }
          else {
            local_10 = local_20;
          }
          local_14 = local_10;
          local_c = FUN_143b033d0(param_1,param_2[(longlong)local_1c * 2],&local_14);
          if (local_c < 0) {
            local_28 = local_1c;
            local_20 = local_14;
          }
          else {
            if (local_c == 0) {
              return local_1c;
            }
            local_24 = local_1c + 1;
            local_18 = local_14;
          }
        }
        local_28 = -1;
      }
    }
  }
  return local_28;
}



// FUNCTION 143b033d0 FUN_143b033d0 body=188 status=ok
// SIG undefined FUN_143b033d0(void)

int FUN_143b033d0(longlong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *local_res8;
  byte *local_res10;
  int local_18;
  
  local_18 = *param_3;
  local_res8 = (byte *)(param_1 + local_18);
  local_res10 = (byte *)(param_2 + local_18);
  while( true ) {
    bVar1 = *local_res8;
    local_res8 = local_res8 + 1;
    bVar2 = *local_res10;
    local_res10 = local_res10 + 1;
    iVar3 = (uint)bVar1 - (uint)bVar2;
    if ((iVar3 != 0) || (bVar1 == 0)) break;
    local_18 = local_18 + 1;
  }
  *param_3 = local_18;
  return iVar3;
}



// FUNCTION 143b03490 FUN_143b03490 body=592 status=ok
// SIG undefined FUN_143b03490(void)

void FUN_143b03490(undefined8 *param_1,int *param_2)

{
  ushort uVar1;
  
  if (*param_2 < 1) {
    if ((param_1 == (undefined8 *)0x0) || (param_1[1] == 0)) {
      *param_2 = 3;
    }
    else if ((((*(char *)(param_1[1] + 2) == -0x26) && (*(char *)(param_1[1] + 3) == '\'')) &&
             (*(char *)(param_1[1] + 8) == '\0')) && (*(char *)(param_1[1] + 9) == '\0')) {
      if (((*(char *)(param_1[1] + 0xc) == 'C') && (*(char *)(param_1[1] + 0xd) == 'm')) &&
         ((*(char *)(param_1[1] + 0xe) == 'n' &&
          ((*(char *)(param_1[1] + 0xf) == 'D' && (*(char *)(param_1[1] + 0x10) == '\x01')))))) {
        *param_1 = &PTR_FUN_145d01c98;
        uVar1 = FUN_143b036e0(param_1[1]);
        param_1[2] = (ulonglong)uVar1 + param_1[1];
      }
      else if ((*(char *)(param_1[1] + 0xc) == 'T') &&
              ((((*(char *)(param_1[1] + 0xd) == 'o' && (*(char *)(param_1[1] + 0xe) == 'C')) &&
                (*(char *)(param_1[1] + 0xf) == 'P')) && (*(char *)(param_1[1] + 0x10) == '\x01'))))
      {
        *param_1 = &PTR_FUN_145d01ca8;
        uVar1 = FUN_143b036e0(param_1[1]);
        param_1[2] = (ulonglong)uVar1 + param_1[1];
      }
      else {
        *param_2 = 3;
      }
    }
    else {
      *param_2 = 3;
    }
    if (0 < *param_2) {
      FUN_143ac56d0(param_1);
    }
  }
  return;
}



// FUNCTION 143b036e0 FUN_143b036e0 body=77 status=ok
// SIG undefined FUN_143b036e0(void)

uint FUN_143b036e0(ushort *param_1)

{
  uint uVar1;
  
  if (param_1 == (ushort *)0x0) {
    uVar1 = 0;
  }
  else if ((char)param_1[4] == '\0') {
    uVar1 = (uint)*param_1;
  }
  else {
    uVar1 = (uint)*param_1 << 8 | (int)(uint)*param_1 >> 8;
  }
  return uVar1;
}



// FUNCTION 143b03740 FUN_143b03740 body=77 status=ok
// SIG undefined FUN_143b03740(void)

uint FUN_143b03740(ushort *param_1)

{
  uint uVar1;
  
  if (param_1 == (ushort *)0x0) {
    uVar1 = 0;
  }
  else if ((char)param_1[2] == '\0') {
    uVar1 = (uint)*param_1;
  }
  else {
    uVar1 = (uint)*param_1 << 8 | (int)(uint)*param_1 >> 8;
  }
  return uVar1;
}



// FUNCTION 143b037a0 FUN_143b037a0 body=171 status=ok
// SIG undefined FUN_143b037a0(void)

longlong FUN_143b037a0(longlong param_1)

{
  char *local_18;
  
  if (*(int *)(param_1 + 0x78) < 0) {
    for (local_18 = (char *)((longlong)*(int *)(param_1 + 0x7c) + *(longlong *)(param_1 + 0x48));
        *local_18 != '\0'; local_18 = local_18 + 1) {
    }
    if ((longlong)local_18 - *(longlong *)(param_1 + 0x48) < 0x7fffffff) {
      *(int *)(param_1 + 0x78) = (int)local_18 - (int)*(undefined8 *)(param_1 + 0x48);
    }
    else {
      *(undefined4 *)(param_1 + 0x78) = 0x7fffffff;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
  }
  return (longlong)*(int *)(param_1 + 0x78);
}



// FUNCTION 143b03850 FUN_143b03850 body=4137 status=ok
// SIG undefined FUN_143b03850(void)

undefined8 FUN_143b03850(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int local_res10;
  int local_c8;
  int local_c4;
  int local_c0;
  byte local_bc;
  int *local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  char local_a4;
  char local_a3;
  byte local_a2;
  int local_a0;
  uint local_9c;
  int *local_98;
  int *local_90;
  int local_88;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int local_48;
  int *local_40;
  int *local_38;
  int local_30;
  int *local_28;
  int *local_20;
  int *local_18;
  
  local_80 = *(longlong *)(param_1 + 0x48);
  local_78 = *(int *)(param_1 + 0x78);
  local_res10 = (int)param_2;
  local_c8 = local_res10;
  local_74 = 0;
  if (param_2 < 0) {
    local_c8 = 0;
  }
  else if (0x7fffffff < param_2) {
    local_c8 = 0x7fffffff;
  }
  iVar6 = local_c8;
  if (((local_78 < local_c8) && (iVar6 = local_78, local_78 < 0)) &&
     (iVar6 = local_c8, *(int *)(param_1 + 0x7c) <= local_c8)) {
    while ((*(int *)(param_1 + 0x7c) < local_c8 &&
           (*(char *)(local_80 + *(int *)(param_1 + 0x7c)) != '\0'))) {
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    }
    if (*(char *)(local_80 + *(int *)(param_1 + 0x7c)) == '\0') {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x7c);
      local_78 = *(int *)(param_1 + 0x7c);
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
      iVar6 = *(int *)(param_1 + 0x7c);
    }
  }
  local_c8 = iVar6;
  if (param_3 == '\0') {
    if ((longlong)local_c8 == *(longlong *)(param_1 + 0x20)) {
      if (local_c8 == 0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        return 0;
      }
      local_18 = *(int **)(param_1 + 0x58);
      if ((*local_18 < local_c8) && (local_c8 <= local_18[1])) goto LAB_143b03cd6;
    }
    local_b8 = *(int **)(param_1 + 0x58);
    if ((*local_b8 < local_c8) && (local_c8 <= local_b8[1])) goto LAB_143b03cd6;
    if (local_c8 != 0) {
      if ((*(longlong *)(param_1 + 0x20) < (longlong)local_c8) &&
         ((longlong)local_c8 <= *(longlong *)(param_1 + 0x10))) {
        lVar1 = *(longlong *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x28) =
             (uint)*(byte *)(lVar1 + 0x84 + (longlong)(local_c8 - *(int *)(lVar1 + 0x14))) -
             *(int *)(lVar1 + 8);
        if (*(int *)(param_1 + 0x28) == 0) {
          return 0;
        }
        return 1;
      }
      if ((local_c8 != *(int *)(param_1 + 0x78)) &&
         ((*(byte *)(local_80 + local_c8) & 0xc0) == 0x80)) {
        local_c8 = FUN_143ab9560(local_80,0,local_c8);
      }
      local_98 = *(int **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
      *(int **)(param_1 + 0x50) = local_98;
      local_50 = local_98 + 6;
      local_60 = local_98 + 0x18;
      local_38 = local_98 + 0x21;
      local_a0 = local_c8 + -0x61;
      local_ac = 0x22;
      local_a8 = local_c8;
      local_48 = 0x22;
      *(char *)((longlong)local_98 + 0x82) = (char)local_c8 - (char)local_a0;
      *(undefined1 *)((longlong)local_38 + (longlong)(local_c8 - local_a0)) = 0x22;
      while (((2 < local_ac && (5 < local_a8 - local_a0)) && (0 < local_a8))) {
        local_a8 = local_a8 + -1;
        local_ac = local_ac + -1;
        local_9c = (uint)*(byte *)(local_80 + local_a8);
        if (local_9c < 0x80) {
          local_9c._0_2_ = (ushort)*(byte *)(local_80 + local_a8);
          *(ushort *)((longlong)local_50 + (longlong)local_ac * 2) = (ushort)local_9c;
          *(undefined1 *)((longlong)local_38 + (longlong)(local_a8 - local_a0)) =
               (undefined1)local_ac;
          *(char *)((longlong)local_60 + (longlong)local_ac) = (char)local_a8 - (char)local_a0;
        }
        else {
          local_68 = local_a8;
          iVar6 = FUN_143ab9a30(local_80,0,&local_a8,local_9c,0xfd);
          local_9c._0_2_ = (ushort)iVar6;
          cVar3 = (char)local_a8;
          cVar4 = (char)local_a0;
          if (iVar6 < 0x10000) {
            *(ushort *)((longlong)local_50 + (longlong)local_ac * 2) = (ushort)local_9c;
            *(char *)((longlong)local_60 + (longlong)local_ac) = cVar3 - cVar4;
          }
          else {
            *(ushort *)((longlong)local_50 + (longlong)local_ac * 2) =
                 (ushort)local_9c & 0x3ff | 0xdc00;
            *(char *)((longlong)local_60 + (longlong)local_ac) = cVar3 - cVar4;
            local_ac = local_ac + -1;
            *(short *)((longlong)local_50 + (longlong)local_ac * 2) = (short)(iVar6 >> 10) + -0x2840
            ;
            *(char *)((longlong)local_60 + (longlong)local_ac) = cVar3 - cVar4;
          }
          do {
            *(undefined1 *)((longlong)local_38 + (longlong)(local_68 - local_a0)) =
                 (undefined1)local_ac;
            local_68 = local_68 + -1;
          } while (local_a8 <= local_68);
          local_48 = local_ac;
        }
      }
      *local_98 = local_a8;
      local_98[1] = local_c8;
      local_98[2] = local_ac;
      local_98[3] = 0x22;
      local_98[4] = local_48 - local_98[2];
      local_98[5] = local_a0;
      *(longlong *)(param_1 + 0x30) = (longlong)local_50 + (longlong)local_98[2] * 2;
      *(int *)(param_1 + 0x2c) = local_98[3] - local_98[2];
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
      *(longlong *)(param_1 + 0x20) = (longlong)*local_98;
      *(longlong *)(param_1 + 0x10) = (longlong)local_98[1];
      *(int *)(param_1 + 0x1c) = local_98[4];
      return 1;
    }
    if (*local_b8 == 0) goto LAB_143b03dce;
  }
  else {
    if ((longlong)local_c8 == *(longlong *)(param_1 + 0x10)) {
      if (local_c8 == local_78) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
        return 0;
      }
      local_20 = *(int **)(param_1 + 0x58);
      if ((*local_20 <= local_c8) && (local_c8 < local_20[1])) goto LAB_143b03cd6;
    }
    local_b8 = *(int **)(param_1 + 0x58);
    if ((*local_b8 <= local_c8) && (local_c8 < local_b8[1])) {
LAB_143b03cd6:
      piVar2 = *(int **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
      *(int **)(param_1 + 0x50) = piVar2;
      *(longlong *)(param_1 + 0x30) = (longlong)piVar2 + (longlong)piVar2[2] * 2 + 0x18;
      *(int *)(param_1 + 0x2c) = piVar2[3] - piVar2[2];
      *(longlong *)(param_1 + 0x20) = (longlong)*piVar2;
      *(longlong *)(param_1 + 0x10) = (longlong)piVar2[1];
      *(int *)(param_1 + 0x1c) = piVar2[4];
      *(uint *)(param_1 + 0x28) =
           (uint)*(byte *)((longlong)piVar2 + (longlong)(local_c8 - piVar2[5]) + 0x84) - piVar2[2];
      return 1;
    }
    if (local_c8 != local_78) {
      if ((*(longlong *)(param_1 + 0x20) <= (longlong)local_c8) &&
         ((longlong)local_c8 < *(longlong *)(param_1 + 0x10))) {
        lVar1 = *(longlong *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x28) =
             (uint)*(byte *)(lVar1 + 0x84 + (longlong)(local_c8 - *(int *)(lVar1 + 0x14))) -
             *(int *)(lVar1 + 8);
        return 1;
      }
      if ((*(byte *)(local_80 + local_c8) & 0xc0) == 0x80) {
        local_c8 = FUN_143ab9560(local_80,0,local_c8);
      }
      local_90 = *(int **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
      *(int **)(param_1 + 0x50) = local_90;
      local_88 = *(int *)(param_1 + 0x78);
      local_a3 = local_88 < 0;
      if ((bool)local_a3) {
        local_88 = 0x7fffffff;
      }
      local_58 = local_90 + 6;
      local_40 = local_90 + 0x18;
      local_28 = local_90 + 0x21;
      local_c0 = 0;
      local_c4 = local_c8;
      local_a4 = '\0';
      local_b0 = 0;
      do {
        cVar3 = (char)local_c8;
        if (0x1f < local_c0) break;
        uVar5 = (uint)*(byte *)(local_80 + local_c4);
        if ((uVar5 == 0) || (0x7f < uVar5)) {
          if (local_a4 == '\0') {
            local_a4 = '\x01';
            local_90[4] = local_c0;
          }
          local_70 = local_c4;
          local_6c = local_c0;
          local_30 = local_c0;
          local_b0 = (uint)*(byte *)(local_80 + local_c4);
          iVar6 = local_c4 + 1;
          if (0x7f < local_b0) {
            if ((((local_b0 < 0xe1) || (0xec < local_b0)) ||
                ((local_88 <= local_c4 + 2 && (-1 < local_88)))) ||
               ((local_bc = *(char *)(local_80 + iVar6) + 0x80, 0x3f < local_bc ||
                (local_a2 = *(char *)(local_80 + (local_c4 + 2)) + 0x80, 0x3f < local_a2)))) {
              if ((local_b0 < 0xe0) &&
                 (((0xc1 < local_b0 && (iVar6 != local_88)) &&
                  (local_bc = *(char *)(local_80 + iVar6) + 0x80, local_bc < 0x40)))) {
                local_b0 = (local_b0 & 0x1f) << 6 | (uint)local_bc;
                iVar6 = local_c4 + 2;
              }
              else {
                local_c4 = iVar6;
                local_b0 = FUN_143ab96e0(local_80,&local_c4,local_88,local_b0,0xfd);
                iVar6 = local_c4;
              }
            }
            else {
              local_b0 = (local_b0 & 0xf) << 0xc | (uint)local_bc << 6 | (uint)local_a2;
              iVar6 = local_c4 + 3;
            }
          }
          local_c4 = iVar6;
          if ((local_b0 == 0) && (local_a3 != '\0')) {
            local_c4 = local_c4 + -1;
            break;
          }
          if (local_b0 < 0x10000) {
            *(ushort *)((longlong)local_58 + (longlong)local_c0 * 2) = (ushort)local_b0;
            local_c0 = local_c0 + 1;
          }
          else {
            *(short *)((longlong)local_58 + (longlong)local_c0 * 2) =
                 (short)((int)local_b0 >> 10) + -0x2840;
            *(ushort *)((longlong)local_58 + (longlong)(local_c0 + 1) * 2) =
                 (ushort)local_b0 & 0x3ff | 0xdc00;
            local_c0 = local_c0 + 2;
          }
          do {
            *(char *)((longlong)local_40 + (longlong)local_6c) = (char)local_70 - cVar3;
            local_6c = local_6c + 1;
          } while (local_6c < local_c0);
          do {
            *(undefined1 *)((longlong)local_28 + (longlong)(local_70 - local_c8)) =
                 (undefined1)local_30;
            local_70 = local_70 + 1;
          } while (local_70 < local_c4);
        }
        else {
          local_b0._0_2_ = (ushort)*(byte *)(local_80 + local_c4);
          *(ushort *)((longlong)local_58 + (longlong)local_c0 * 2) = (ushort)local_b0;
          *(char *)((longlong)local_40 + (longlong)local_c0) = (char)local_c4 - cVar3;
          *(undefined1 *)((longlong)local_28 + (longlong)(local_c4 - local_c8)) =
               (undefined1)local_c0;
          local_c4 = local_c4 + 1;
          local_c0 = local_c0 + 1;
          local_b0 = uVar5;
        }
      } while (local_c4 < local_88);
      *(char *)((longlong)local_40 + (longlong)local_c0) = (char)local_c4 - cVar3;
      *(undefined1 *)((longlong)local_28 + (longlong)(local_c4 - local_c8)) = (undefined1)local_c0;
      *local_90 = local_c8;
      local_90[1] = local_c4;
      local_90[2] = 0;
      local_90[3] = local_c0;
      if (local_a4 == '\0') {
        local_90[4] = local_c0;
      }
      local_90[5] = *local_90;
      *(int **)(param_1 + 0x30) = local_58;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(int *)(param_1 + 0x2c) = local_90[3];
      *(longlong *)(param_1 + 0x20) = (longlong)*local_90;
      *(longlong *)(param_1 + 0x10) = (longlong)local_90[1];
      *(int *)(param_1 + 0x1c) = local_90[4];
      if (((local_a3 != '\0') && (*(int *)(param_1 + 0x7c) < local_c4)) &&
         (*(int *)(param_1 + 0x7c) = local_c4, local_b0 == 0)) {
        *(int *)(param_1 + 0x78) = local_c4;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
      }
      return 1;
    }
    if ((longlong)local_c8 == *(longlong *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
      return 0;
    }
    if (local_c8 == local_b8[1]) goto LAB_143b03dce;
  }
  piVar2 = *(int **)(param_1 + 0x58);
  *piVar2 = local_c8;
  piVar2[1] = local_c8;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = local_c8;
  *(undefined1 *)(piVar2 + 0x18) = 0;
  *(undefined1 *)(piVar2 + 0x21) = 0;
LAB_143b03dce:
  piVar2 = *(int **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
  *(int **)(param_1 + 0x50) = piVar2;
  *(longlong *)(param_1 + 0x30) = (longlong)piVar2 + (longlong)piVar2[2] * 2 + 0x18;
  *(int *)(param_1 + 0x2c) = piVar2[3] - piVar2[2];
  *(longlong *)(param_1 + 0x20) = (longlong)*piVar2;
  *(longlong *)(param_1 + 0x10) = (longlong)piVar2[1];
  *(int *)(param_1 + 0x1c) = piVar2[4];
  if (local_c8 == piVar2[1]) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return 0;
}



// FUNCTION 143b048c0 FUN_143b048c0 body=537 status=ok
// SIG undefined FUN_143b048c0(void)

undefined4
FUN_143b048c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5,
             undefined4 *param_6)

{
  int iVar1;
  char cVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_18 [2];
  longlong local_10;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  cVar2 = FUN_143a8b0e0(*param_6);
  if (cVar2 == '\0') {
    if ((param_5 < 0) || ((local_res20 == 0 && (0 < param_5)))) {
      *param_6 = 1;
      local_18[0] = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x78);
      local_28 = FUN_143b06fd0(&local_res10,(longlong)iVar1);
      local_24 = FUN_143b06fd0(&local_res18,(longlong)iVar1);
      if (local_24 < local_28) {
        *param_6 = 8;
        local_18[0] = 0;
      }
      else {
        local_10 = *(longlong *)(param_1 + 0x48);
        if ((longlong)local_28 < *(longlong *)(param_1 + 0x10)) {
          local_20 = 0;
          for (; (((local_20 < 3 && ((*(byte *)(local_10 + local_28) & 0x80) != 0)) &&
                  (0x3d < (byte)(*(char *)(local_10 + local_28) + 0x40U))) && (local_28 != 0));
              local_28 = local_28 + -1) {
            local_20 = local_20 + 1;
          }
        }
        if ((longlong)local_24 < *(longlong *)(param_1 + 0x10)) {
          local_20 = 0;
          for (; ((local_20 < 3 && ((*(byte *)(local_10 + local_24) & 0x80) != 0)) &&
                 ((0x3d < (byte)(*(char *)(local_10 + local_24) + 0x40U) && (local_24 != 0))));
              local_24 = local_24 + -1) {
            local_20 = local_20 + 1;
          }
        }
        local_18[0] = 0;
        FUN_143b08800(local_res20,param_5,local_18,
                      (longlong)local_28 + *(longlong *)(param_1 + 0x48),local_24 - local_28,param_6
                     );
        FUN_143b03850(param_1,(longlong)local_24,1);
      }
    }
  }
  else {
    local_18[0] = 0;
  }
  return local_18[0];
}



// FUNCTION 143b04ae0 FUN_143b04ae0 body=71 status=ok
// SIG undefined FUN_143b04ae0(void)

longlong FUN_143b04ae0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  return (longlong)
         (int)((uint)*(byte *)(lVar1 + 0x60 +
                              (longlong)(*(int *)(param_1 + 0x28) + *(int *)(lVar1 + 8))) +
              *(int *)(lVar1 + 0x14));
}



// FUNCTION 143b04b30 FUN_143b04b30 body=93 status=ok
// SIG undefined FUN_143b04b30(void)

int FUN_143b04b30(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  return (uint)*(byte *)(lVar1 + 0x84 + (longlong)(param_2 - *(int *)(lVar1 + 0x14))) -
         *(int *)(lVar1 + 8);
}



// FUNCTION 143b04b90 FUN_143b04b90 body=210 status=ok
// SIG undefined FUN_143b04b90(void)

longlong FUN_143b04b90(undefined8 param_1,longlong param_2,char param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  
  lVar3 = FUN_143b07180(param_1,param_2,param_4);
  if (param_3 != '\0') {
    cVar1 = FUN_143a8b110(*param_4);
    if (cVar1 != '\0') {
      iVar2 = FUN_143b07900(param_2);
      _Dst = (void *)FUN_143aa7a40((longlong)(iVar2 + 1));
      if (_Dst == (void *)0x0) {
        *param_4 = 7;
      }
      else {
        _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_2 + 0x48),(longlong)(iVar2 + 1));
        *(void **)(lVar3 + 0x48) = _Dst;
        *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x20;
      }
    }
  }
  return lVar3;
}



// FUNCTION 143b04c70 FUN_143b04c70 body=66 status=ok
// SIG undefined FUN_143b04c70(void)

void FUN_143b04c70(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 143b04cc0 FUN_143b04cc0 body=164 status=ok
// SIG undefined FUN_143b04cc0(void)

longlong FUN_143b04cc0(undefined8 param_1,longlong param_2,char param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_143b07180(param_1,param_2,param_4);
  if (param_3 != '\0') {
    cVar1 = FUN_143a8b110(*param_4);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x30))(*(longlong **)(param_2 + 0x48));
      *(undefined8 *)(lVar2 + 0x48) = uVar3;
      *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x20;
      *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 8;
    }
  }
  return lVar2;
}



// FUNCTION 143b04d70 FUN_143b04d70 body=120 status=ok
// SIG undefined FUN_143b04d70(void)

void FUN_143b04d70(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 143b04df0 FUN_143b04df0 body=47 status=ok
// SIG undefined FUN_143b04df0(void)

longlong FUN_143b04df0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_143a93e70(*(undefined8 *)(param_1 + 0x48));
  return (longlong)iVar1;
}



// FUNCTION 143b04e20 FUN_143b04e20 body=1265 status=ok
// SIG undefined FUN_143b04e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b04e20(ulonglong param_1,longlong param_2,char param_3)

{
  longlong local_res10;
  char local_res18;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  byte local_50;
  ushort *local_48;
  longlong *local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_40 = *(longlong **)(param_1 + 0x48);
  local_res10 = param_2;
  local_res18 = param_3;
  local_54 = FUN_143a93e70(local_40);
  local_58 = FUN_143b06fd0(&local_res10,(longlong)local_54);
  if (local_res18 == '\0') {
    if ((*(longlong *)(param_1 + 0x20) < (longlong)local_58) &&
       ((longlong)local_58 <= *(longlong *)(param_1 + 0x10))) {
      local_58 = local_58 - *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x28) = local_58;
      return CONCAT71((uint7)(uint3)((uint)local_58 >> 8),1);
    }
    if ((local_58 == 0) && (*(longlong *)(param_1 + 0x20) == 0)) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      return param_1 & 0xffffffffffffff00;
    }
    *(longlong *)(param_1 + 0x20) = (longlong)(local_58 + -9);
    if (*(longlong *)(param_1 + 0x20) < 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(longlong *)(param_1 + 0x10) = (longlong)(local_58 + 1);
    if ((longlong)local_54 < *(longlong *)(param_1 + 0x10)) {
      *(longlong *)(param_1 + 0x10) = (longlong)local_54;
    }
  }
  else {
    if ((*(longlong *)(param_1 + 0x20) <= (longlong)local_58) &&
       ((longlong)local_58 < *(longlong *)(param_1 + 0x10))) {
      local_res10 = local_res10 - *(longlong *)(param_1 + 0x20);
      *(int *)(param_1 + 0x28) = (int)local_res10;
      return CONCAT71((int7)((ulonglong)local_res10 >> 8),1);
    }
    if ((local_54 <= local_58) && (*(longlong *)(param_1 + 0x10) == (longlong)local_54)) {
      local_54 = local_54 - *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x28) = local_54;
      return (ulonglong)(uint3)((uint)local_54 >> 8) << 8;
    }
    *(longlong *)(param_1 + 0x10) = local_res10 + 9;
    if ((longlong)local_54 < *(longlong *)(param_1 + 0x10)) {
      *(longlong *)(param_1 + 0x10) = (longlong)local_54;
    }
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x10) + -10;
    if (*(longlong *)(param_1 + 0x20) < 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  local_48 = *(ushort **)(param_1 + 0x40);
  FUN_143a8d8e0(local_38,local_48,0,10);
  (**(code **)(*local_40 + 0x10))
            (local_40,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10),local_38);
  *(ushort **)(param_1 + 0x30) = local_48;
  *(int *)(param_1 + 0x2c) =
       (int)*(undefined8 *)(param_1 + 0x10) - (int)*(undefined8 *)(param_1 + 0x20);
  *(int *)(param_1 + 0x28) = local_58 - (int)*(undefined8 *)(param_1 + 0x20);
  if ((*(longlong *)(param_1 + 0x10) < (longlong)local_54) &&
     ((local_48[*(int *)(param_1 + 0x2c) + -1] & 0xfc00) == 0xd800)) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x28)) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
    }
  }
  if ((0 < *(longlong *)(param_1 + 0x20)) && ((*local_48 & 0xfc00) == 0xdc00)) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 2;
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  }
  if ((((*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x28) * 2) &
        0xfc00) == 0xdc00) && (0 < *(int *)(param_1 + 0x28))) &&
     ((*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x28) + -1) * 2) &
      0xfc00) == 0xd800)) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x2c);
  local_50 = 1;
  FUN_143a8dc60(local_38);
  return (ulonglong)local_50;
}



// FUNCTION 143b05320 FUN_143b05320 body=583 status=ok
// SIG undefined FUN_143b05320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_143b05320(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
             undefined4 *param_6)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_48 = *(longlong **)(param_1 + 0x48);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_50 = FUN_143a93e70(local_48);
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if ((param_5 < 0) || ((local_res20 == 0 && (0 < param_5)))) {
      *param_6 = 1;
    }
    if (local_res18 < local_res10) {
      *param_6 = 8;
      local_40 = 0;
    }
    else {
      local_54 = FUN_143b06fd0(&local_res10,(longlong)local_50);
      local_58 = FUN_143b06fd0(&local_res18,(longlong)local_50);
      if (local_54 < local_50) {
        uVar2 = FUN_143a93e20(local_48,local_54);
        if ((uVar2 & 0xfc00) == 0xdc00) {
          iVar3 = FUN_143b06f10(local_48,local_54);
          if (iVar3 - 0x10000U < 0x100000) {
            local_54 = local_54 + -1;
          }
        }
      }
      if (local_58 < local_50) {
        uVar2 = FUN_143a93e20(local_48,local_58);
        if ((uVar2 & 0xfc00) == 0xdc00) {
          iVar3 = FUN_143b06f10(local_48,local_58);
          if (iVar3 - 0x10000U < 0x100000) {
            local_58 = local_58 + -1;
          }
        }
      }
      local_50 = local_58 - local_54;
      if (param_5 < local_50) {
        local_58 = local_54 + param_5;
      }
      FUN_143a8d8e0(local_38,local_res20,0,param_5);
      (**(code **)(*local_48 + 0x10))(local_48,local_54,local_58,local_38);
      FUN_143b04e20(param_1,(longlong)local_58,1);
      local_40 = FUN_143ab4a70(local_res20,param_5,local_50,param_6);
      FUN_143a8dc60(local_38);
    }
  }
  else {
    local_40 = 0;
  }
  return local_40;
}



// FUNCTION 143b05570 FUN_143b05570 body=632 status=ok
// SIG undefined FUN_143b05570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b05570(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                 undefined4 *param_6)

{
  char cVar1;
  ushort uVar2;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong *local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = *(longlong **)(param_1 + 0x48);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if ((local_res20 == 0) && (param_5 != 0)) {
      *param_6 = 1;
      local_4c = 0;
    }
    else {
      local_5c = FUN_143a93e70(local_58);
      if (local_res18 < local_res10) {
        *param_6 = 8;
        local_4c = 0;
      }
      else {
        local_64 = FUN_143b06fd0(&local_res10,(longlong)local_5c);
        local_60 = FUN_143b06fd0(&local_res18,(longlong)local_5c);
        if ((((local_64 < local_5c) &&
             (uVar2 = FUN_143a93e20(local_58,local_64), (uVar2 & 0xfc00) == 0xdc00)) &&
            (0 < local_64)) &&
           (uVar2 = FUN_143a93e20(local_58,local_64 + -1), (uVar2 & 0xfc00) == 0xd800)) {
          local_64 = local_64 + -1;
        }
        if (((local_60 < local_5c) &&
            (uVar2 = FUN_143a93e20(local_58,local_60 + -1), (uVar2 & 0xfc00) == 0xd800)) &&
           (uVar2 = FUN_143a93e20(local_58,local_60), (uVar2 & 0xfc00) == 0xdc00)) {
          local_60 = local_60 + 1;
        }
        local_68 = param_5 < 0;
        FUN_143a8d4f0(local_40,local_68,local_res20,param_5);
        (**(code **)(*local_58 + 0x18))(local_58,local_64,local_60,local_40);
        local_48 = FUN_143a93e70(local_58);
        local_50 = local_48 - local_5c;
        if ((longlong)local_64 < *(longlong *)(param_1 + 0x10)) {
          FUN_143b06f80(param_1);
        }
        local_44 = local_60 + local_50;
        FUN_143b04e20(param_1,(longlong)local_44,1);
        local_4c = local_50;
        FUN_143a8dc60(local_40);
      }
    }
  }
  else {
    local_4c = 0;
  }
  return local_4c;
}



// FUNCTION 143b057f0 FUN_143b057f0 body=607 status=ok
// SIG undefined FUN_143b057f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b057f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char param_5,
                  undefined4 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong *local_58;
  int local_50;
  int local_4c;
  int local_48;
  longlong local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = *(longlong **)(param_1 + 0x48);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_50 = FUN_143a93e70(local_58);
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if ((local_res18 < local_res10) || ((local_res10 < local_res20 && (local_res20 < local_res18))))
    {
      *param_6 = 8;
    }
    else {
      local_68 = FUN_143b06fd0(&local_res10,(longlong)local_50);
      local_64 = FUN_143b06fd0(&local_res18,(longlong)local_50);
      local_60 = FUN_143b06fd0(&local_res20,(longlong)local_50);
      if (param_5 == '\0') {
        (**(code **)(*local_58 + 0x20))(local_58,local_68,local_64,local_60);
      }
      else {
        local_48 = local_64 - local_68;
        (**(code **)(*local_58 + 0x20))(local_58,local_68,local_64,local_60);
        if (local_60 < local_68) {
          local_68 = local_68 + local_48;
          local_64 = local_64 + local_48;
        }
        uVar2 = FUN_143a8ac30(local_38);
        local_40 = *local_58;
        (**(code **)(local_40 + 0x18))(local_58,local_68,local_64,uVar2);
        FUN_143a8dc60(local_38);
      }
      local_5c = local_60;
      if ((param_5 != '\0') && (local_68 < local_60)) {
        local_5c = local_68;
      }
      if ((longlong)local_5c < *(longlong *)(param_1 + 0x10)) {
        FUN_143b06f80(param_1);
      }
      local_4c = (local_60 + local_64) - local_68;
      if ((param_5 != '\0') && (local_68 < local_60)) {
        local_4c = local_60;
      }
      FUN_143b04e20(param_1,(longlong)local_4c,1);
    }
  }
  return;
}



// FUNCTION 143b05a50 FUN_143b05a50 body=225 status=ok
// SIG undefined FUN_143b05a50(void)

longlong FUN_143b05a50(undefined8 param_1,longlong param_2,char param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_20;
  
  lVar3 = FUN_143b07180(param_1,param_2,param_4);
  if (param_3 != '\0') {
    cVar2 = FUN_143a8b110(*param_4);
    if (cVar2 != '\0') {
      uVar1 = *(undefined8 *)(param_2 + 0x48);
      lVar4 = FUN_143a8d310(0x28);
      if (lVar4 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_143a8d3a0(lVar4,uVar1);
      }
      *(undefined8 *)(lVar3 + 0x48) = local_20;
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x20;
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 8;
    }
  }
  return lVar3;
}



// FUNCTION 143b05b40 FUN_143b05b40 body=30 status=ok
// SIG undefined FUN_143b05b40(void)

longlong FUN_143b05b40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x48));
  return (longlong)iVar1;
}



// FUNCTION 143b05b60 FUN_143b05b60 body=126 status=ok
// SIG undefined FUN_143b05b60(void)

undefined1 FUN_143b05b60(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res10;
  char local_res18;
  undefined1 local_18;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  local_res10 = param_2;
  local_res18 = param_3;
  uVar2 = FUN_143b06fd0(&local_res10,(longlong)iVar1);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if (((local_res18 == '\0') || (iVar1 <= local_res10)) &&
     ((local_res18 != '\0' || (local_res10 < 1)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b05be0 FUN_143b05be0 body=431 status=ok
// SIG undefined FUN_143b05be0(void)

int FUN_143b05be0(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,int param_5,
                 undefined4 *param_6)

{
  undefined8 uVar1;
  char cVar2;
  int local_24;
  int local_1c;
  int local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  local_18 = FUN_143a904f0(uVar1);
  cVar2 = FUN_143a8b0e0(*param_6);
  if (cVar2 == '\0') {
    if ((param_5 < 0) || ((param_4 == 0 && (0 < param_5)))) {
      *param_6 = 1;
    }
    if (((longlong)param_2 < 0) || ((longlong)param_3 < (longlong)param_2)) {
      *param_6 = 8;
      local_18 = 0;
    }
    else {
      local_1c = local_18;
      if ((longlong)param_2 < (longlong)local_18) {
        local_1c = FUN_143a8fec0(uVar1,param_2 & 0xffffffff);
      }
      if ((longlong)param_3 < (longlong)local_18) {
        local_18 = FUN_143a8fec0(uVar1,param_3 & 0xffffffff);
      }
      local_18 = local_18 - local_1c;
      if ((param_5 < 1) || (param_4 == 0)) {
        *(int *)(param_1 + 0x28) = local_1c;
      }
      else {
        local_24 = local_18;
        if (param_5 < local_18) {
          local_24 = param_5;
        }
        FUN_143b06f40(uVar1,local_1c,local_24,param_4,0);
        *(int *)(param_1 + 0x28) = local_1c + local_24;
      }
      FUN_143ab4a70(param_4,param_5,local_18,param_6);
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b05d90 FUN_143b05d90 body=407 status=ok
// SIG undefined FUN_143b05d90(void)

int FUN_143b05d90(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                 undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  int local_28;
  int local_20;
  
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if ((local_res20 == 0) && (param_5 != 0)) {
      *param_6 = 1;
    }
    if (local_res18 < local_res10) {
      *param_6 = 8;
      iVar3 = 0;
    }
    else {
      iVar2 = FUN_143a904f0(uVar4);
      local_28 = FUN_143b06fd0(&local_res10,(longlong)iVar2);
      local_20 = FUN_143b06fd0(&local_res18,(longlong)iVar2);
      if (local_28 < iVar2) {
        local_28 = FUN_143a8fec0(uVar4,local_28);
      }
      if (local_20 < iVar2) {
        local_20 = FUN_143a8fec0(uVar4,local_20);
      }
      FUN_143b07020(uVar4,local_28,local_20 - local_28,local_res20,param_5);
      iVar3 = FUN_143a904f0(uVar4);
      uVar4 = FUN_143a8fe10(uVar4);
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      *(int *)(param_1 + 0x2c) = iVar3;
      *(longlong *)(param_1 + 0x10) = (longlong)iVar3;
      *(int *)(param_1 + 0x1c) = iVar3;
      iVar3 = iVar3 - iVar2;
      *(int *)(param_1 + 0x28) = local_20 + iVar3;
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



// FUNCTION 143b05f30 FUN_143b05f30 body=496 status=ok
// SIG undefined FUN_143b05f30(void)

void FUN_143b05f30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined4 *param_6)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  int local_28;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  iVar3 = FUN_143a904f0(plVar1);
  cVar2 = FUN_143a8b0e0(*param_6);
  if (cVar2 == '\0') {
    local_28 = FUN_143b06fd0(&local_res10,(longlong)iVar3);
    iVar4 = FUN_143b06fd0(&local_res18,(longlong)iVar3);
    iVar3 = FUN_143b06fd0(&local_res20,(longlong)iVar3);
    if ((iVar4 < local_28) || ((local_28 < iVar3 && (iVar3 < iVar4)))) {
      *param_6 = 8;
    }
    else {
      if (param_5 == '\0') {
        (**(code **)(*plVar1 + 0x20))(plVar1,local_28,iVar4,iVar3);
      }
      else {
        iVar6 = iVar4 - local_28;
        (**(code **)(*plVar1 + 0x20))(plVar1,local_28,iVar4,iVar3);
        if (iVar3 < local_28) {
          local_28 = local_28 + iVar6;
        }
        FUN_143b07020(plVar1,local_28,iVar6,0,0);
      }
      uVar5 = FUN_143a8fe10(plVar1);
      *(undefined8 *)(param_1 + 0x30) = uVar5;
      if (param_5 == '\0') {
        *(int *)(param_1 + 0x2c) = (iVar4 - local_28) + *(int *)(param_1 + 0x2c);
        *(longlong *)(param_1 + 0x10) = (longlong)*(int *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x2c);
      }
      *(int *)(param_1 + 0x28) = (iVar3 + iVar4) - local_28;
      if ((param_5 != '\0') && (local_28 < iVar3)) {
        *(int *)(param_1 + 0x28) = iVar3;
      }
    }
  }
  return;
}



// FUNCTION 143b06120 FUN_143b06120 body=284 status=ok
// SIG undefined FUN_143b06120(void)

longlong FUN_143b06120(undefined8 param_1,longlong param_2,char param_3,undefined4 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_20;
  
  lVar4 = FUN_143b07180(param_1,param_2,param_4);
  if (param_3 != '\0') {
    cVar2 = FUN_143a8b110(*param_4);
    if (cVar2 != '\0') {
      iVar3 = FUN_143b07900(lVar4);
      lVar1 = *(longlong *)(param_2 + 0x48);
      lVar5 = FUN_143aa7a40();
      if (lVar5 == 0) {
        *param_4 = 7;
      }
      else {
        for (local_20 = 0; local_20 < iVar3; local_20 = local_20 + 1) {
          *(undefined2 *)(lVar5 + local_20 * 2) = *(undefined2 *)(lVar1 + local_20 * 2);
        }
        *(undefined2 *)(lVar5 + (longlong)iVar3 * 2) = 0;
        *(longlong *)(lVar4 + 0x48) = lVar5;
        *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x20;
      }
    }
  }
  return lVar4;
}



// FUNCTION 143b06240 FUN_143b06240 body=167 status=ok
// SIG undefined FUN_143b06240(void)

undefined8 FUN_143b06240(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) < 0) {
    while (*(short *)(*(longlong *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x10) * 2) != 0) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    }
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x2c);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
  }
  return *(undefined8 *)(param_1 + 0x70);
}



// FUNCTION 143b062f0 FUN_143b062f0 body=808 status=ok
// SIG undefined FUN_143b062f0(void)

undefined1 FUN_143b062f0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong local_res10;
  undefined1 local_28;
  int local_24;
  int local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (param_2 < 0) {
    local_res10 = 0;
  }
  else {
    local_res10 = param_2;
    if (param_2 < *(longlong *)(param_1 + 0x10)) {
      if ((((*(ushort *)(lVar1 + param_2 * 2) & 0xfc00) == 0xdc00) && (0 < param_2)) &&
         ((*(ushort *)(lVar1 + -2 + param_2 * 2) & 0xfc00) == 0xd800)) {
        local_res10 = param_2 + -1;
      }
    }
    else if (*(longlong *)(param_1 + 0x70) < 0) {
      local_res10._0_4_ = (int)param_2;
      local_20 = (int)local_res10 + 0x20;
      if ((0x7fffffff < param_2 + 0x20) || (param_2 + 0x20 < 0)) {
        local_20 = 0x7fffffff;
      }
      for (local_24 = *(int *)(param_1 + 0x10); local_24 < local_20; local_24 = local_24 + 1) {
        if (*(short *)(lVar1 + (longlong)local_24 * 2) == 0) {
          *(longlong *)(param_1 + 0x70) = (longlong)local_24;
          *(int *)(param_1 + 0x2c) = local_24;
          *(int *)(param_1 + 0x1c) = local_24;
          if (param_2 < local_24) {
            if ((((*(ushort *)(lVar1 + param_2 * 2) & 0xfc00) == 0xdc00) && (0 < param_2)) &&
               ((*(ushort *)(lVar1 + -2 + param_2 * 2) & 0xfc00) == 0xd800)) {
              local_res10 = param_2 + -1;
            }
          }
          else {
            local_res10 = (longlong)local_24;
          }
          *(longlong *)(param_1 + 0x10) = (longlong)local_24;
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
          goto LAB_143b065cb;
        }
      }
      if ((((*(ushort *)(lVar1 + param_2 * 2) & 0xfc00) == 0xdc00) && (0 < param_2)) &&
         ((*(ushort *)(lVar1 + -2 + param_2 * 2) & 0xfc00) == 0xd800)) {
        local_res10 = param_2 + -1;
      }
      if (local_24 == 0x7fffffff) {
        *(undefined8 *)(param_1 + 0x70) = 0x7fffffff;
        *(undefined4 *)(param_1 + 0x2c) = 0x7fffffff;
        *(undefined4 *)(param_1 + 0x1c) = 0x7fffffff;
        if (0x7fffffff < local_res10) {
          local_res10 = 0x7fffffff;
        }
        *(undefined8 *)(param_1 + 0x10) = 0x7fffffff;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
      }
      else {
        if ((*(ushort *)(lVar1 + (longlong)(local_24 + -1) * 2) & 0xfc00) == 0xd800) {
          local_24 = local_24 + -1;
        }
        *(longlong *)(param_1 + 0x10) = (longlong)local_24;
        *(int *)(param_1 + 0x1c) = local_24;
        *(int *)(param_1 + 0x2c) = local_24;
      }
    }
    else {
      local_res10 = *(longlong *)(param_1 + 0x70);
    }
  }
LAB_143b065cb:
  *(int *)(param_1 + 0x28) = (int)local_res10;
  if (((param_3 == '\0') || (*(longlong *)(param_1 + 0x10) <= local_res10)) &&
     ((param_3 != '\0' || (local_res10 < 1)))) {
    local_28 = 0;
  }
  else {
    local_28 = 1;
  }
  return local_28;
}



// FUNCTION 143b06620 FUN_143b06620 body=632 status=ok
// SIG undefined FUN_143b06620(void)

int FUN_143b06620(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                 undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong local_res18;
  longlong local_res20;
  int local_24;
  int local_20;
  int local_1c;
  
  local_res18 = param_3;
  local_res20 = param_4;
  cVar3 = FUN_143a8b0e0(*param_6);
  if (cVar3 == '\0') {
    if ((param_5 < 0) || (((local_res20 == 0 && (0 < param_5)) || (local_res18 < param_2)))) {
      *param_6 = 1;
      local_24 = 0;
    }
    else {
      FUN_143b062f0(param_1,param_2,1);
      lVar2 = *(longlong *)(param_1 + 0x30);
      iVar1 = *(int *)(param_1 + 0x28);
      local_20 = *(int *)(param_1 + 0x70);
      if (local_20 < 0) {
        local_1c = FUN_143b06fd0(&local_res18,0x7fffffff);
      }
      else {
        local_1c = FUN_143b06fd0(&local_res18,(longlong)local_20);
      }
      local_24 = 0;
      for (iVar4 = iVar1; iVar4 < local_1c; iVar4 = iVar4 + 1) {
        if ((local_20 < 0) && (*(short *)(lVar2 + (longlong)iVar4 * 2) == 0)) {
          *(longlong *)(param_1 + 0x70) = (longlong)iVar4;
          *(longlong *)(param_1 + 0x10) = (longlong)iVar4;
          *(int *)(param_1 + 0x2c) = iVar4;
          *(int *)(param_1 + 0x1c) = iVar4;
          local_20 = iVar4;
          break;
        }
        if (local_24 < param_5) {
          *(undefined2 *)(local_res20 + (longlong)local_24 * 2) =
               *(undefined2 *)(lVar2 + (longlong)iVar4 * 2);
        }
        else if (-1 < local_20) {
          local_24 = local_1c - iVar1;
          iVar4 = local_1c;
          break;
        }
        local_24 = local_24 + 1;
      }
      if ((((0 < iVar4) && ((*(ushort *)(lVar2 + (longlong)(iVar4 + -1) * 2) & 0xfc00) == 0xd800))
          && ((iVar4 < local_20 || (local_20 < 0)))) &&
         (((*(ushort *)(lVar2 + (longlong)iVar4 * 2) & 0xfc00) == 0xdc00 && (local_24 < param_5))))
      {
        *(undefined2 *)(local_res20 + (longlong)local_24 * 2) =
             *(undefined2 *)(lVar2 + (longlong)iVar4 * 2);
        local_24 = local_24 + 1;
        iVar4 = iVar4 + 1;
      }
      uVar5 = FUN_143ac1240(local_20,iVar1 + param_5);
      *(undefined4 *)(param_1 + 0x28) = uVar5;
      FUN_143ab4a70(local_res20,param_5,local_24,param_6,iVar4);
    }
  }
  else {
    local_24 = 0;
  }
  return local_24;
}



// FUNCTION 143b068a0 FUN_143b068a0 body=105 status=ok
// SIG undefined FUN_143b068a0(void)

void FUN_143b068a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 143b06910 FUN_143b06910 body=15 status=ok
// SIG undefined FUN_143b06910(void)

longlong FUN_143b06910(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 0x70);
}



// FUNCTION 143b06920 FUN_143b06920 body=737 status=ok
// SIG undefined FUN_143b06920(void)

bool FUN_143b06920(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  int local_38;
  int local_30;
  int local_2c;
  longlong local_28;
  bool local_20;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (param_2 < 0) {
    local_30 = 0;
  }
  else {
    local_30 = param_2;
    if (*(longlong *)(param_1 + 0x70) <= (longlong)param_2) {
      local_30 = *(int *)(param_1 + 0x70);
    }
  }
  local_38 = local_30;
  if ((param_3 == '\0') && (0 < local_30)) {
    local_38 = local_30 + -1;
  }
  else if ((param_3 != '\0') &&
          (((longlong)local_30 == *(longlong *)(param_1 + 0x70) && (0 < local_30)))) {
    local_38 = local_30 + -1;
  }
  uVar4 = local_38 >> 0x1f & 0xf;
  local_38 = local_38 - ((local_38 + uVar4 & 0xf) - uVar4);
  local_28 = 0;
  bVar2 = true;
  if (*(longlong *)(param_1 + 0x20) == (longlong)local_38) {
    bVar2 = false;
  }
  else if (*(int *)(param_1 + 0x78) == local_38) {
    local_28 = *(longlong *)(param_1 + 0x50);
  }
  else if (*(int *)(param_1 + 0x7c) == local_38) {
    local_28 = *(longlong *)(param_1 + 0x58);
  }
  else {
    local_28 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == *(longlong *)(param_1 + 0x30)) {
      local_28 = *(longlong *)(param_1 + 0x58);
    }
    (**(code **)(*plVar1 + 0x70))(plVar1,local_38);
    for (local_2c = 0; local_2c < 0x10; local_2c = local_2c + 1) {
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
      *(undefined2 *)(local_28 + (longlong)local_2c * 2) = uVar3;
      if (*(longlong *)(param_1 + 0x70) < (longlong)(local_2c + local_38)) break;
    }
  }
  if (bVar2) {
    *(longlong *)(param_1 + 0x30) = local_28;
    *(undefined4 *)(param_1 + 0x2c) = 0x10;
    *(longlong *)(param_1 + 0x20) = (longlong)local_38;
    *(longlong *)(param_1 + 0x10) = (longlong)(local_38 + 0x10);
    if (*(longlong *)(param_1 + 0x70) < *(longlong *)(param_1 + 0x10)) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x70);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x2c);
  }
  *(int *)(param_1 + 0x28) = local_30 - *(int *)(param_1 + 0x20);
  if (param_3 == '\0') {
    local_20 = *(int *)(param_1 + 0x28) < 1;
  }
  else {
    local_20 = *(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x28);
  }
  local_20 = !local_20;
  return local_20;
}


