// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143a9c230 FUN_143a9c230 body=728 status=ok
// SIG undefined FUN_143a9c230(void)

int FUN_143a9c230(char *param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  char *local_res8;
  char local_18;
  int local_14;
  
  if ((param_2 == (int *)0x0) || (local_14 = *param_2, local_14 == 0)) {
    local_14 = 1;
    cVar1 = *param_1;
    pcVar2 = param_1 + 1;
    if ((cVar1 == 't') || (cVar1 == 'T')) {
      local_18 = *pcVar2;
      local_res8 = param_1 + 2;
      if ((local_18 == 'u') || (local_18 == 'U')) {
        local_18 = *local_res8;
        local_res8 = param_1 + 3;
      }
      if (((local_18 == 'r') || (local_18 == 'R')) &&
         ((cVar1 = *local_res8, cVar1 == '_' || ((cVar1 == '-' || (cVar1 == '\0')))))) {
        local_14 = 2;
      }
    }
    else if ((cVar1 == 'a') || (cVar1 == 'A')) {
      if ((*pcVar2 == 'z') || (*pcVar2 == 'Z')) {
        local_18 = param_1[2];
        if ((local_18 == 'e') || (local_18 == 'E')) {
          local_18 = param_1[3];
        }
        if (((local_18 == '_') || (local_18 == '-')) || (local_18 == '\0')) {
          local_14 = 2;
        }
      }
    }
    else if ((cVar1 == 'l') || (cVar1 == 'L')) {
      local_18 = *pcVar2;
      local_res8 = param_1 + 2;
      if ((local_18 == 'i') || (local_18 == 'I')) {
        local_18 = *local_res8;
        local_res8 = param_1 + 3;
      }
      if (((local_18 == 't') || (local_18 == 'T')) &&
         ((cVar1 = *local_res8, cVar1 == '_' || ((cVar1 == '-' || (cVar1 == '\0')))))) {
        local_14 = 3;
      }
    }
    else if ((cVar1 == 'n') || (cVar1 == 'N')) {
      if ((*pcVar2 == 'l') || (*pcVar2 == 'L')) {
        local_18 = param_1[2];
        if ((local_18 == 'd') || (local_18 == 'D')) {
          local_18 = param_1[3];
        }
        if (((local_18 == '_') || (local_18 == '-')) || (local_18 == '\0')) {
          local_14 = 4;
        }
      }
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_14;
    }
  }
  return local_14;
}



// FUNCTION 143a9c510 FUN_143a9c510 body=8 status=ok
// SIG undefined FUN_143a9c510(void)

undefined * FUN_143a9c510(void)

{
  return &DAT_145cd6d70;
}



// FUNCTION 143a9c520 FUN_143a9c520 body=334 status=ok
// SIG undefined FUN_143a9c520(void)

ushort FUN_143a9c520(longlong param_1,uint param_2)

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
  return *(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 2) & 7;
}



// FUNCTION 143a9c670 FUN_143a9c670 body=334 status=ok
// SIG undefined FUN_143a9c670(void)

ushort FUN_143a9c670(longlong param_1,uint param_2)

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
  return *(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 2) & 3;
}



// FUNCTION 143a9c7c0 FUN_143a9c7c0 body=791 status=ok
// SIG undefined FUN_143a9c7c0(void)

/* WARNING: Removing unreachable block (ram,0x000143a9c7e0) */

int FUN_143a9c7c0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char local_36;
  undefined4 local_30 [2];
  undefined *local_28;
  int local_20;
  undefined1 local_18 [24];
  
  local_28 = &DAT_145cd6d70;
  local_20 = param_2 + -0x16;
  switch(local_20) {
  case 0:
    iVar2 = FUN_143a9c670(&DAT_145cd6d70,param_1);
    iVar2 = (int)(iVar2 == 1);
    break;
  default:
    iVar2 = 0;
    break;
  case 5:
    cVar1 = FUN_143a9cca0(&DAT_145cd6d70,param_1);
    iVar2 = (int)cVar1;
    break;
  case 8:
    iVar2 = FUN_143a9c670(&DAT_145cd6d70,param_1);
    iVar2 = (int)(iVar2 == 2);
    break;
  case 0xc:
    cVar1 = FUN_143a9cb30(&DAT_145cd6d70,param_1);
    iVar2 = (int)cVar1;
    break;
  case 0x1b:
    iVar2 = FUN_143a9c670(&DAT_145cd6d70,param_1);
    iVar2 = (int)(iVar2 != 0);
    break;
  case 0x1c:
    iVar2 = FUN_143a9c520(&DAT_145cd6d70,param_1);
    iVar2 = (int)(char)(iVar2 >> 2);
    break;
  case 0x1d:
    local_30[0] = 1;
    iVar2 = FUN_143a9d130(&DAT_145cd6d70,param_1,0,0,local_18,&DAT_145af3922,local_30);
    iVar2 = (int)(-1 < iVar2);
    break;
  case 0x1e:
    local_30[0] = 1;
    iVar2 = FUN_143a9d930(&DAT_145cd6d70,param_1,0,0,local_18,&DAT_145af3922,local_30);
    iVar2 = (int)(-1 < iVar2);
    break;
  case 0x1f:
    local_30[0] = 1;
    iVar2 = FUN_143a9d8d0(&DAT_145cd6d70,param_1,0,0,local_18,&DAT_145af3922,local_30);
    iVar2 = (int)(-1 < iVar2);
    break;
  case 0x21:
    local_30[0] = 1;
    iVar2 = FUN_143a9d130(&DAT_145cd6d70,param_1,0,0,local_18,&DAT_145af3922,local_30);
    if (((iVar2 < 0) &&
        (iVar2 = FUN_143a9d930(local_28,param_1,0,0,local_18,&DAT_145af3922,local_30), iVar2 < 0))
       && (iVar2 = FUN_143a9d8d0(local_28,param_1,0,0,local_18,&DAT_145af3922,local_30), iVar2 < 0))
    {
      local_36 = '\0';
    }
    else {
      local_36 = '\x01';
    }
    iVar2 = (int)local_36;
  }
  return iVar2;
}



// FUNCTION 143a9cb30 FUN_143a9cb30 body=354 status=ok
// SIG undefined FUN_143a9cb30(void)

bool FUN_143a9cb30(longlong param_1,uint param_2)

{
  uint uVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  uVar1 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_10 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_20 = 0x140;
      }
      else {
        local_20 = 0;
      }
      local_14 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_20 + uVar1) * 2) * 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(param_1 + 0x4c)) {
          local_1c = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)(param_1 + 0x20) +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)(param_1 + 0x20) +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_1c = *(int *)(param_1 + 0x50);
        }
        local_18 = local_1c;
      }
      else {
        local_18 = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_14 = local_18;
    }
    local_10 = local_14;
  }
  return (*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_10 * 2) & 8) != 0;
}



// FUNCTION 143a9cca0 FUN_143a9cca0 body=54 status=ok
// SIG undefined FUN_143a9cca0(void)

bool FUN_143a9cca0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_143a9ac10(param_1,param_2);
  return iVar1 == 0x20;
}



// FUNCTION 143a9cce0 FUN_143a9cce0 body=1086 status=ok
// SIG undefined FUN_143a9cce0(void)

uint FUN_143a9cce0(longlong param_1,uint param_2,longlong *param_3,char param_4)

{
  ushort *puVar1;
  ushort uVar2;
  sbyte sVar3;
  uint uVar4;
  ushort *local_40;
  uint local_38;
  uint local_34;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  uVar4 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_14 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar4 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_18 = 0x140;
      }
      else {
        local_18 = 0;
      }
      local_1c = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_18 + uVar4) * 2) * 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(param_1 + 0x4c)) {
          local_24 = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)(param_1 + 0x20) +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)(param_1 + 0x20) +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar4 & 0x3f)) * 2) * 4;
        }
        else {
          local_24 = *(int *)(param_1 + 0x50);
        }
        local_10 = local_24;
      }
      else {
        local_10 = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_1c = local_10;
    }
    local_14 = local_1c;
  }
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 2);
  if ((uVar2 & 0x10) == 0) {
    local_38 = param_2;
    if (1 < (uVar2 & 3)) {
      local_38 = param_2 + ((int)(short)uVar2 >> 7);
    }
  }
  else {
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)((int)(uint)uVar2 >> 5) * 2);
    uVar2 = *puVar1;
    if ((uVar2 & 0x8000) == 0) {
      if ((uVar2 & 0x80) != 0) {
        if ((uVar2 & 0x100) == 0) {
          local_40 = puVar1 + (ulonglong)(byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x7f)] + 1;
          local_34 = (uint)*local_40;
        }
        else {
          local_40 = puVar1 + (longlong)
                              (int)((uint)(byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x7f)] << 1) + 1 + 1;
          local_34 = CONCAT22(puVar1[(longlong)
                                     (int)((uint)(byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x7f)] << 1) +
                                     1],*local_40);
        }
        uVar4 = (int)local_34 >> 4 & 0xf;
        if (uVar4 != 0) {
          *param_3 = (longlong)(local_40 + (longlong)(int)(local_34 & 0xf) + 1);
          return uVar4;
        }
      }
    }
    else if (param_4 == '\0') {
      if (param_2 == 0x49) {
        return 0x69;
      }
      if (param_2 == 0x130) {
        *param_3 = (longlong)&DAT_145cd6048;
        return 2;
      }
    }
    else {
      if (param_2 == 0x49) {
        return 0x131;
      }
      if (param_2 == 0x130) {
        return 0x69;
      }
    }
    if ((uVar2 & 2) == 0) {
      if ((uVar2 & 1) == 0) {
        return ~param_2;
      }
      sVar3 = 0;
    }
    else {
      sVar3 = 1;
    }
    if ((uVar2 & 0x100) == 0) {
      local_38 = (uint)puVar1[(ulonglong)
                              (byte)(&DAT_145cd6df0)[(int)((uint)uVar2 & (1 << sVar3) - 1U)] + 1];
    }
    else {
      local_38 = CONCAT22(puVar1[(longlong)
                                 (int)((uint)(byte)(&DAT_145cd6df0)
                                                   [(int)((uint)uVar2 & (1 << sVar3) - 1U)] << 1) +
                                 1],
                          (puVar1 + (longlong)
                                    (int)((uint)(byte)(&DAT_145cd6df0)
                                                      [(int)((uint)uVar2 & (1 << sVar3) - 1U)] << 1)
                                    + 1)[1]);
    }
  }
  if (local_38 == param_2) {
    local_38 = ~local_38;
  }
  return local_38;
}



// FUNCTION 143a9d130 FUN_143a9d130 body=1661 status=ok
// SIG undefined FUN_143a9d130(void)

uint FUN_143a9d130(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint local_50;
  uint local_4c;
  ushort *local_48;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  uVar5 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_1c = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar5 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_2c = 0x140;
      }
      else {
        local_2c = 0;
      }
      local_24 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_2c + uVar5) * 2) * 4;
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
                                 (uVar5 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = *(int *)(param_1 + 0x50);
        }
        local_18 = local_20;
      }
      else {
        local_18 = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_24 = local_18;
    }
    local_1c = local_24;
  }
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_1c * 2);
  local_50 = param_2;
  if ((uVar2 & 0x10) == 0) {
    if (1 < (uVar2 & 3)) {
      local_50 = param_2 + ((int)(short)uVar2 >> 7);
    }
  }
  else {
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)((int)(uint)uVar2 >> 5) * 2);
    uVar2 = *puVar1;
    puVar7 = puVar1 + 1;
    if ((uVar2 & 0x4000) == 0) {
      if ((uVar2 & 0x80) != 0) {
        if ((uVar2 & 0x100) == 0) {
          local_48 = puVar7 + (byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x7f)];
          uVar3 = *local_48;
        }
        else {
          local_48 = puVar7 + (longlong)
                              (int)((uint)(byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x7f)] << 1) + 1;
          uVar3 = *local_48;
        }
        local_4c = (uint)uVar3;
        if ((uVar3 & 0xf) != 0) {
          *param_5 = local_48 + 1;
          return local_4c & 0xf;
        }
      }
    }
    else {
      iVar6 = FUN_143a9c230(param_6,param_7);
      if ((iVar6 == 3) &&
         (((((param_2 == 0x49 || (param_2 == 0x4a)) || (param_2 == 0x12e)) &&
           (cVar4 = FUN_143a9aea0(param_1,param_3,param_4), cVar4 != '\0')) ||
          (((param_2 == 0xcc || (param_2 == 0xcd)) || (param_2 == 0x128)))))) {
        switch(param_2) {
        case 0x49:
          *param_5 = &DAT_145cd6048;
          return 2;
        case 0x4a:
          *param_5 = &DAT_145cd604c;
          return 2;
        default:
          return 0;
        case 0xcc:
          *param_5 = &DAT_145cd6de8;
          return 3;
        case 0xcd:
          *param_5 = &DAT_145cd6ef0;
          return 3;
        case 0x128:
          *param_5 = &DAT_145cd6ef8;
          return 3;
        case 0x12e:
          *param_5 = &DAT_145cd6d64;
          return 2;
        }
      }
      if ((iVar6 == 2) && (param_2 == 0x130)) {
        return 0x69;
      }
      if (((iVar6 == 2) && (param_2 == 0x307)) &&
         (cVar4 = FUN_143a9afa0(param_1,param_3,param_4), cVar4 != '\0')) {
        return 0;
      }
      if (((iVar6 == 2) && (param_2 == 0x49)) &&
         (cVar4 = FUN_143a9ae20(param_1,param_3,param_4), cVar4 == '\0')) {
        return 0x131;
      }
      if (param_2 == 0x130) {
        *param_5 = &DAT_145cd6048;
        return 2;
      }
      if (((param_2 == 0x3a3) && (cVar4 = FUN_143a9ada0(param_1,param_3,param_4,1), cVar4 == '\0'))
         && (cVar4 = FUN_143a9ada0(param_1,param_3,param_4,0xff), cVar4 != '\0')) {
        return 0x3c2;
      }
    }
    if ((uVar2 & 1) != 0) {
      if ((uVar2 & 0x100) == 0) {
        local_50 = (uint)*puVar7;
      }
      else {
        local_50 = CONCAT22(*puVar7,puVar1[2]);
      }
    }
  }
  if (local_50 == param_2) {
    local_50 = ~local_50;
  }
  return local_50;
}



// FUNCTION 143a9d8d0 FUN_143a9d8d0 body=90 status=ok
// SIG undefined FUN_143a9d8d0(void)

void FUN_143a9d8d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_143a9b0e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 143a9d930 FUN_143a9d930 body=90 status=ok
// SIG undefined FUN_143a9d930(void)

void FUN_143a9d930(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_143a9b0e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,1);
  return;
}



// FUNCTION 143a9d990 FUN_143a9d990 body=128 status=ok
// SIG undefined FUN_143a9d990(void)

void FUN_143a9d990(undefined4 param_1,byte *param_2)

{
  byte extraout_var;
  
  if (param_2 != (byte *)0x0) {
    FUN_143a9e120(param_1,0);
    *param_2 = extraout_var >> 4;
    param_2[1] = extraout_var & 0xf;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  return;
}



// FUNCTION 143a9da10 FUN_143a9da10 body=334 status=ok
// SIG undefined FUN_143a9da10(void)

int FUN_143a9da10(uint param_1)

{
  uint uVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    local_18 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      if ((int)param_1 < 0xdc00) {
        local_28 = 0x140;
      }
      else {
        local_28 = 0;
      }
      local_1c = (param_1 & 0x1f) +
                 (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)(local_28 + uVar1) * 2) * 4;
    }
    else {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0x110000) {
          local_24 = (param_1 & 0x1f) +
                     (uint)*(ushort *)
                            (&DAT_145cd6f10 +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (&DAT_145cd6f10 +
                                         (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_24 = 0x4608;
        }
        local_20 = local_24;
      }
      else {
        local_20 = 0xff0;
      }
      local_1c = local_20;
    }
    local_18 = local_1c;
  }
  iVar2 = (*(ushort *)(&DAT_145cd6f10 + (longlong)local_18 * 2) >> 6) - 1;
  if (9 < iVar2) {
    iVar2 = -1;
  }
  return iVar2;
}



// FUNCTION 143a9db60 FUN_143a9db60 body=310 status=ok
// SIG undefined FUN_143a9db60(void)

ushort FUN_143a9db60(uint param_1)

{
  uint uVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    local_18 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      if ((int)param_1 < 0xdc00) {
        local_28 = 0x140;
      }
      else {
        local_28 = 0;
      }
      local_1c = (param_1 & 0x1f) +
                 (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)(local_28 + uVar1) * 2) * 4;
    }
    else {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0x110000) {
          local_24 = (param_1 & 0x1f) +
                     (uint)*(ushort *)
                            (&DAT_145cd6f10 +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (&DAT_145cd6f10 +
                                         (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_24 = 0x4608;
        }
        local_20 = local_24;
      }
      else {
        local_20 = 0xff0;
      }
      local_1c = local_20;
    }
    local_18 = local_1c;
  }
  return *(ushort *)(&DAT_145cd6f10 + (longlong)local_18 * 2) & 0x1f;
}



// FUNCTION 143a9dca0 FUN_143a9dca0 body=307 status=ok
// SIG undefined FUN_143a9dca0(void)

undefined2 FUN_143a9dca0(uint param_1)

{
  uint uVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    local_18 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      if ((int)param_1 < 0xdc00) {
        local_28 = 0x140;
      }
      else {
        local_28 = 0;
      }
      local_1c = (param_1 & 0x1f) +
                 (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)(local_28 + uVar1) * 2) * 4;
    }
    else {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0x110000) {
          local_24 = (param_1 & 0x1f) +
                     (uint)*(ushort *)
                            (&DAT_145cd6f10 +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (&DAT_145cd6f10 +
                                         (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_24 = 0x4608;
        }
        local_20 = local_24;
      }
      else {
        local_20 = 0xff0;
      }
      local_1c = local_20;
    }
    local_18 = local_1c;
  }
  return *(undefined2 *)(&DAT_145cd6f10 + (longlong)local_18 * 2);
}



// FUNCTION 143a9dde0 FUN_143a9dde0 body=793 status=ok
// SIG undefined FUN_143a9dde0(void)

double FUN_143a9dde0(uint param_1)

{
  uint uVar1;
  int local_54;
  int local_50;
  double local_48;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    local_30 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      if ((int)param_1 < 0xdc00) {
        local_28 = 0x140;
      }
      else {
        local_28 = 0;
      }
      local_34 = (param_1 & 0x1f) +
                 (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)(local_28 + uVar1) * 2) * 4;
    }
    else {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0x110000) {
          local_2c = (param_1 & 0x1f) +
                     (uint)*(ushort *)
                            (&DAT_145cd6f10 +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (&DAT_145cd6f10 +
                                         (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_2c = 0x4608;
        }
        local_38 = local_2c;
      }
      else {
        local_38 = 0xff0;
      }
      local_34 = local_38;
    }
    local_30 = local_34;
  }
  uVar1 = (uint)(*(ushort *)(&DAT_145cd6f10 + (longlong)local_30 * 2) >> 6);
  if (uVar1 == 0) {
    local_48 = -123456789.0;
  }
  else if (uVar1 < 0xb) {
    local_48 = (double)(int)(uVar1 - 1);
  }
  else if (uVar1 < 0x15) {
    local_48 = (double)(int)(uVar1 - 0xb);
  }
  else if (uVar1 < 0xb0) {
    local_48 = (double)(int)(uVar1 - 0x15);
  }
  else if (uVar1 < 0x1e0) {
    local_48 = (double)(((int)uVar1 >> 4) + -0xc) / (double)((uVar1 & 0xf) + 1);
  }
  else if (uVar1 < 0x300) {
    local_48 = (double)(((int)uVar1 >> 5) + -0xe);
    for (local_50 = (uVar1 & 0x1f) + 2; 3 < local_50; local_50 = local_50 + -4) {
      local_48 = local_48 * 10000.0;
    }
    if (local_50 == 1) {
      local_48 = local_48 * 10.0;
    }
    else if (local_50 == 2) {
      local_48 = local_48 * 100.0;
    }
    else if (local_50 == 3) {
      local_48 = local_48 * 1000.0;
    }
  }
  else if (uVar1 < 0x324) {
    local_54 = ((int)uVar1 >> 2) + -0xbf;
    uVar1 = uVar1 & 3;
    if ((*(ushort *)(&DAT_145cd6f10 + (longlong)local_30 * 2) >> 6 & 3) == 0) {
      local_54 = local_54 * 0x3c;
    }
    else if (uVar1 == 1) {
      local_54 = local_54 * 0xe10;
    }
    else if (uVar1 == 2) {
      local_54 = local_54 * 0x34bc0;
    }
    else if (uVar1 == 3) {
      local_54 = local_54 * 0xc5c100;
    }
    local_48 = (double)local_54;
  }
  else {
    local_48 = -123456789.0;
  }
  return local_48;
}



// FUNCTION 143a9e120 FUN_143a9e120 body=349 status=ok
// SIG undefined FUN_143a9e120(void)

undefined4 FUN_143a9e120(uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_2 < 3) {
    uVar1 = (int)param_1 >> 5;
    if (param_1 < 0xd800) {
      local_14 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cdfb80 + (longlong)(int)uVar1 * 2) * 4
      ;
    }
    else {
      if (param_1 < 0x10000) {
        if ((int)param_1 < 0xdc00) {
          local_24 = 0x140;
        }
        else {
          local_24 = 0;
        }
        local_18 = (param_1 & 0x1f) +
                   (uint)*(ushort *)(&DAT_145cdfb80 + (longlong)(int)(local_24 + uVar1) * 2) * 4;
      }
      else {
        if (param_1 < 0x110000) {
          if ((int)param_1 < 0x110000) {
            local_20 = (param_1 & 0x1f) +
                       (uint)*(ushort *)
                              (&DAT_145cdfb80 +
                              (longlong)
                              (int)((uint)*(ushort *)
                                           (&DAT_145cdfb80 +
                                           (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                   (uVar1 & 0x3f)) * 2) * 4;
          }
          else {
            local_20 = 0x5b74;
          }
          local_1c = local_20;
        }
        else {
          local_1c = 0x10a0;
        }
        local_18 = local_1c;
      }
      local_14 = local_18;
    }
    uVar2 = *(undefined4 *)
             (&DAT_145ceb2c0 +
             (longlong)(int)((uint)*(ushort *)(&DAT_145cdfb80 + (longlong)local_14 * 2) + param_2) *
             4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143a9e290 FUN_143a9e290 body=59 status=ok
// SIG undefined FUN_143a9e290(void)

bool FUN_143a9e290(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_143a9e120(param_1,1);
  return (uVar1 & 0x100) != 0;
}



// FUNCTION 143a9e2d0 FUN_143a9e2d0 body=57 status=ok
// SIG undefined FUN_143a9e2d0(void)

bool FUN_143a9e2d0(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_143a9e120(param_1,1);
  return (uVar1 & 1) != 0;
}



// FUNCTION 143a9e310 FUN_143a9e310 body=412 status=ok
// SIG undefined FUN_143a9e310(void)

undefined1 FUN_143a9e310(uint param_1)

{
  uint uVar1;
  undefined1 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    local_14 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      if ((int)param_1 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_1 & 0x1f) +
                 (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)(local_24 + uVar1) * 2) * 4;
    }
    else {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0x110000) {
          local_20 = (param_1 & 0x1f) +
                     (uint)*(ushort *)
                            (&DAT_145cd6f10 +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (&DAT_145cd6f10 +
                                         (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = 0x4608;
        }
        local_1c = local_20;
      }
      else {
        local_1c = 0xff0;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  if ((((((1 << ((byte)*(undefined2 *)(&DAT_145cd6f10 + (longlong)local_14 * 2) & 0x1f) & 0x7000U)
          == 0) || (param_1 == 0xa0)) || (param_1 == 0x2007)) || (param_1 == 0x202f)) &&
     (((0x1f < (int)param_1 || ((int)param_1 < 9)) ||
      ((0xd < (int)param_1 && ((int)param_1 < 0x1c)))))) {
    local_28 = 0;
  }
  else {
    local_28 = 1;
  }
  return local_28;
}



// FUNCTION 143a9e4b0 FUN_143a9e4b0 body=62 status=ok
// SIG undefined FUN_143a9e4b0(void)

undefined1 FUN_143a9e4b0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_143a9e290(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143a9e680(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 143a9e4f0 FUN_143a9e4f0 body=384 status=ok
// SIG undefined FUN_143a9e4f0(void)

bool FUN_143a9e4f0(uint param_1)

{
  uint uVar1;
  bool local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 < 0xa0) {
    if ((param_1 == 9) || (param_1 == 0x20)) {
      local_24 = true;
    }
    else {
      local_24 = false;
    }
  }
  else {
    uVar1 = (int)param_1 >> 5;
    if (param_1 < 0xd800) {
      local_10 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)uVar1 * 2) * 4
      ;
    }
    else {
      if (param_1 < 0x10000) {
        if ((int)param_1 < 0xdc00) {
          local_20 = 0x140;
        }
        else {
          local_20 = 0;
        }
        local_14 = (param_1 & 0x1f) +
                   (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)(local_20 + uVar1) * 2) * 4;
      }
      else {
        if (param_1 < 0x110000) {
          if ((int)param_1 < 0x110000) {
            local_1c = (param_1 & 0x1f) +
                       (uint)*(ushort *)
                              (&DAT_145cd6f10 +
                              (longlong)
                              (int)((uint)*(ushort *)
                                           (&DAT_145cd6f10 +
                                           (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                   (uVar1 & 0x3f)) * 2) * 4;
          }
          else {
            local_1c = 0x4608;
          }
          local_18 = local_1c;
        }
        else {
          local_18 = 0xff0;
        }
        local_14 = local_18;
      }
      local_10 = local_14;
    }
    local_24 = (*(ushort *)(&DAT_145cd6f10 + (longlong)local_10 * 2) & 0x1f) == 0xc;
  }
  return local_24;
}



// FUNCTION 143a9e680 FUN_143a9e680 body=332 status=ok
// SIG undefined FUN_143a9e680(void)

bool FUN_143a9e680(uint param_1)

{
  uint uVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    local_14 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      if ((int)param_1 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_1 & 0x1f) +
                 (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)(local_24 + uVar1) * 2) * 4;
    }
    else {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0x110000) {
          local_20 = (param_1 & 0x1f) +
                     (uint)*(ushort *)
                            (&DAT_145cd6f10 +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (&DAT_145cd6f10 +
                                         (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = 0x4608;
        }
        local_1c = local_20;
      }
      else {
        local_1c = 0xff0;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  return (*(ushort *)(&DAT_145cd6f10 + (longlong)local_14 * 2) & 0x1f) == 9;
}



// FUNCTION 143a9e7d0 FUN_143a9e7d0 body=354 status=ok
// SIG undefined FUN_143a9e7d0(void)

bool FUN_143a9e7d0(uint param_1)

{
  uint uVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    local_14 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      if ((int)param_1 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_1 & 0x1f) +
                 (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)(local_24 + uVar1) * 2) * 4;
    }
    else {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0x110000) {
          local_20 = (param_1 & 0x1f) +
                     (uint)*(ushort *)
                            (&DAT_145cd6f10 +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (&DAT_145cd6f10 +
                                         (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = 0x4608;
        }
        local_1c = local_20;
      }
      else {
        local_1c = 0xff0;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  return (1 << ((byte)*(undefined2 *)(&DAT_145cd6f10 + (longlong)local_14 * 2) & 0x1f) & 0x4f001U)
         == 0;
}



// FUNCTION 143a9e940 FUN_143a9e940 body=332 status=ok
// SIG undefined FUN_143a9e940(void)

bool FUN_143a9e940(uint param_1)

{
  uint uVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    local_14 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      if ((int)param_1 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_1 & 0x1f) +
                 (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)(local_24 + uVar1) * 2) * 4;
    }
    else {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0x110000) {
          local_20 = (param_1 & 0x1f) +
                     (uint)*(ushort *)
                            (&DAT_145cd6f10 +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (&DAT_145cd6f10 +
                                         (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = 0x4608;
        }
        local_1c = local_20;
      }
      else {
        local_1c = 0xff0;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  return (*(ushort *)(&DAT_145cd6f10 + (longlong)local_14 * 2) & 0x1f) == 2;
}



// FUNCTION 143a9ea90 FUN_143a9ea90 body=351 status=ok
// SIG undefined FUN_143a9ea90(void)

undefined1 FUN_143a9ea90(uint param_1)

{
  char cVar1;
  uint uVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    local_14 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)uVar2 * 2) * 4;
  }
  else {
    if (param_1 < 0x10000) {
      if ((int)param_1 < 0xdc00) {
        local_24 = 0x140;
      }
      else {
        local_24 = 0;
      }
      local_18 = (param_1 & 0x1f) +
                 (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)(local_24 + uVar2) * 2) * 4;
    }
    else {
      if (param_1 < 0x110000) {
        if ((int)param_1 < 0x110000) {
          local_20 = (param_1 & 0x1f) +
                     (uint)*(ushort *)
                            (&DAT_145cd6f10 +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (&DAT_145cd6f10 +
                                         (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                 (uVar2 & 0x3f)) * 2) * 4;
        }
        else {
          local_20 = 0x4608;
        }
        local_1c = local_20;
      }
      else {
        local_1c = 0xff0;
      }
      local_18 = local_1c;
    }
    local_14 = local_18;
  }
  if (((*(ushort *)(&DAT_145cd6f10 + (longlong)local_14 * 2) & 0x1f) != 0xc) &&
     (cVar1 = FUN_143a9e7d0(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 143a9ebf0 FUN_143a9ebf0 body=407 status=ok
// SIG undefined FUN_143a9ebf0(void)

bool FUN_143a9ebf0(uint param_1)

{
  uint uVar1;
  bool bVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (((((int)param_1 < 0x67) && (0x40 < (int)param_1)) &&
      (((int)param_1 < 0x47 || (0x60 < (int)param_1)))) ||
     (((0xff20 < (int)param_1 && ((int)param_1 < 0xff47)) &&
      (((int)param_1 < 0xff27 || (0xff40 < (int)param_1)))))) {
    bVar2 = true;
  }
  else {
    uVar1 = (int)param_1 >> 5;
    if (param_1 < 0xd800) {
      local_14 = (param_1 & 0x1f) + (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)uVar1 * 2) * 4
      ;
    }
    else {
      if (param_1 < 0x10000) {
        if ((int)param_1 < 0xdc00) {
          local_24 = 0x140;
        }
        else {
          local_24 = 0;
        }
        local_18 = (param_1 & 0x1f) +
                   (uint)*(ushort *)(&DAT_145cd6f10 + (longlong)(int)(local_24 + uVar1) * 2) * 4;
      }
      else {
        if (param_1 < 0x110000) {
          if ((int)param_1 < 0x110000) {
            local_20 = (param_1 & 0x1f) +
                       (uint)*(ushort *)
                              (&DAT_145cd6f10 +
                              (longlong)
                              (int)((uint)*(ushort *)
                                           (&DAT_145cd6f10 +
                                           (longlong)(((int)param_1 >> 0xb) + 0x820) * 2) +
                                   (uVar1 & 0x3f)) * 2) * 4;
          }
          else {
            local_20 = 0x4608;
          }
          local_1c = local_20;
        }
        else {
          local_1c = 0xff0;
        }
        local_18 = local_1c;
      }
      local_14 = local_18;
    }
    bVar2 = (*(ushort *)(&DAT_145cd6f10 + (longlong)local_14 * 2) & 0x1f) == 9;
  }
  return bVar2;
}



// FUNCTION 143a9ed90 FUN_143a9ed90 body=879 status=ok
// SIG undefined FUN_143a9ed90(void)

void FUN_143a9ed90(undefined8 *param_1,int *param_2)

{
  if (*param_2 < 1) {
    FUN_143ac2b60(&PTR_DAT_145cdfb30,0,FUN_143a9abd0,param_1);
    (*(code *)param_1[1])(*param_1,9);
    (*(code *)param_1[1])(*param_1,10);
    (*(code *)param_1[1])(*param_1,0xe);
    (*(code *)param_1[1])(*param_1,0x1c);
    (*(code *)param_1[1])(*param_1,0x20);
    (*(code *)param_1[1])(*param_1,0x85);
    (*(code *)param_1[1])(*param_1,0x86);
    (*(code *)param_1[1])(*param_1,0x7f);
    (*(code *)param_1[1])(*param_1,0x200a);
    (*(code *)param_1[1])(*param_1,0x2010);
    (*(code *)param_1[1])(*param_1,0x206a);
    (*(code *)param_1[1])(*param_1,0x2070);
    (*(code *)param_1[1])(*param_1,0xfeff);
    (*(code *)param_1[1])(*param_1,0xff00);
    (*(code *)param_1[1])(*param_1,0xa0);
    (*(code *)param_1[1])(*param_1,0xa1);
    (*(code *)param_1[1])(*param_1,0x2007);
    (*(code *)param_1[1])(*param_1,0x2008);
    (*(code *)param_1[1])(*param_1,0x202f);
    (*(code *)param_1[1])(*param_1,0x2030);
    (*(code *)param_1[1])(*param_1,0x61);
    (*(code *)param_1[1])(*param_1,0x7b);
    (*(code *)param_1[1])(*param_1,0x41);
    (*(code *)param_1[1])(*param_1,0x5b);
    (*(code *)param_1[1])(*param_1,0xff41);
    (*(code *)param_1[1])(*param_1,0xff5b);
    (*(code *)param_1[1])(*param_1,0xff21);
    (*(code *)param_1[1])(*param_1,0xff3b);
    (*(code *)param_1[1])(*param_1,0x67);
    (*(code *)param_1[1])(*param_1,0x47);
    (*(code *)param_1[1])(*param_1,0xff47);
    (*(code *)param_1[1])(*param_1,0xff27);
    (*(code *)param_1[1])(*param_1,0x2060);
    (*(code *)param_1[1])(*param_1,0xfff0);
    (*(code *)param_1[1])(*param_1,0xfffc);
    (*(code *)param_1[1])(*param_1,0xe0000);
    (*(code *)param_1[1])(*param_1,0xe1000);
    (*(code *)param_1[1])(*param_1,0x34f);
    (*(code *)param_1[1])(*param_1,0x350);
  }
  return;
}



// FUNCTION 143a9f100 FUN_143a9f100 body=66 status=ok
// SIG undefined FUN_143a9f100(void)

void FUN_143a9f100(undefined8 param_1,int *param_2)

{
  if (*param_2 < 1) {
    FUN_143ac2b60(&PTR_DAT_145ceb270,0,FUN_143a9abd0,param_1);
  }
  return;
}



// FUNCTION 143a9f150 FUN_143a9f150 body=78 status=ok
// SIG undefined FUN_143a9f150(void)

undefined4 FUN_143a9f150(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xadca0;
  }
  else if (param_1 == 2) {
    uVar1 = 0x2774191;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143a9f1a0 FUN_143a9f1a0 body=160 status=ok
// SIG undefined FUN_143a9f1a0(void)

uint FUN_143a9f1a0(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 == (int *)0x0) || (0 < *param_2)) {
    uVar2 = 0xffffffff;
  }
  else if (param_1 < 0x110000) {
    uVar1 = FUN_143a9e120(param_1,0);
    uVar2 = uVar1 & 0xc000ff;
    if (0x3fffff < uVar2) {
      if (uVar2 < 0x800000) {
        uVar2 = 0;
      }
      else if (uVar2 < 0xc00000) {
        uVar2 = 1;
      }
      else {
        uVar2 = (uint)*(ushort *)(&DAT_145ceffa0 + (ulonglong)(uVar1 & 0xff) * 2);
      }
    }
  }
  else {
    *param_2 = 1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143a9f250 FUN_143a9f250 body=242 status=ok
// SIG undefined FUN_143a9f250(void)

ulonglong FUN_143a9f250(undefined4 param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort *local_18;
  
  uVar2 = FUN_143a9e120(param_1,0);
  uVar3 = uVar2 & 0xc000ff;
  if (uVar3 < 0x400000) {
    uVar4 = (ulonglong)(param_2 == uVar3);
  }
  else {
    lVar1 = (ulonglong)(uVar2 & 0xff) * 2;
    if (0xbfffff < uVar3) {
      lVar1 = (ulonglong)*(ushort *)(&DAT_145ceffa2 + lVar1) * 2;
    }
    local_18 = (ushort *)(&DAT_145ceffa0 + lVar1);
    if ((int)param_2 < 0xa1) {
      for (; (int)(uint)*local_18 < (int)param_2; local_18 = local_18 + 1) {
      }
      uVar4 = (ulonglong)(param_2 == (*local_18 & 0x7fff));
    }
    else {
      uVar4 = (ulonglong)local_18 & 0xffffffffffffff00;
    }
  }
  return uVar4;
}



// FUNCTION 143a9f350 FUN_143a9f350 body=85 status=ok
// SIG undefined FUN_143a9f350(void)

undefined8 * FUN_143a9f350(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::BreakIterator::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa5) = 0;
  return param_1;
}



// FUNCTION 143a9f3b0 FUN_143a9f3b0 body=44 status=ok
// SIG undefined FUN_143a9f3b0(void)

CMonikerFile * FUN_143a9f3b0(CMonikerFile *param_1)

{
  CMonikerFile::CMonikerFile(param_1);
  *(undefined ***)param_1 = icu_53::ICUBreakIteratorFactory::vftable;
  return param_1;
}



// FUNCTION 143a9f3e0 FUN_143a9f3e0 body=265 status=ok
// SIG undefined FUN_143a9f3e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143a9f3e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60 = FUN_143a8d4f0(local_40,1,L"Break Iterator",0xe);
  local_50 = local_60;
  FUN_143acef70(param_1,local_60);
  FUN_143a8dc60(local_40);
  *param_1 = icu_53::ICUBreakIteratorService::vftable;
  local_70[0] = 0;
  local_78 = (undefined1 *)FUN_143a8d310(0x60);
  if (local_78 == (undefined1 *)0x0) {
    local_68 = 0;
  }
  else {
    puVar2 = local_78;
    for (lVar1 = 0x60; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_68 = FUN_143a9f3b0(local_78);
  }
  local_58 = local_68;
  FUN_143ace0b0(param_1,local_68,local_70);
  return param_1;
}



// FUNCTION 143a9f4f0 FUN_143a9f4f0 body=48 status=ok
// SIG undefined FUN_143a9f4f0(void)

undefined8 * FUN_143a9f4f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 143a9f520 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::BreakIterator::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143a9f550 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::ICUBreakIteratorFactory::vftable;
  UPrimalCharacterSetting::~UPrimalCharacterSetting(param_1);
  return;
}



// FUNCTION 143a9f580 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(CHttpFile *param_1)

{
  *(undefined ***)param_1 = icu_53::ICUBreakIteratorService::vftable;
  CHttpFile::~CHttpFile(param_1);
  return;
}



// FUNCTION 143a9f5b0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143a9f5f0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143a9f630 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143a9f670 FUN_143a9f670 body=1225 status=ok
// SIG undefined FUN_143a9f670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143a9f670(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *_Source;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_3f8 [32];
  longlong *local_3d8;
  undefined1 local_3d0;
  undefined1 local_3cf [3];
  int local_3cc;
  undefined1 *local_3c8;
  undefined1 *local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  uint local_3a8 [2];
  longlong local_3a0;
  longlong *local_398;
  longlong local_390;
  longlong *local_388;
  ulonglong local_380;
  undefined8 local_378;
  longlong *local_368;
  longlong *local_360;
  undefined1 local_358 [16];
  undefined8 local_348;
  undefined1 local_338 [192];
  undefined1 local_278 [192];
  char local_1b8 [160];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_348 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  local_3d0 = 0;
  puVar4 = local_3cf;
  for (lVar3 = 3; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_3b0 = 0;
  local_3c0 = local_338;
  local_3c8 = local_278;
  local_3d8 = (longlong *)0x0;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143aa5540(local_3c0);
    FUN_143aa5540(local_3c8);
    uVar2 = FUN_143a8c200(param_1);
    local_3b8 = FUN_143aa5b10("icudt53l-brkitr",uVar2,param_4);
    if (*param_4 == -0x7f) {
      *param_4 = 0;
      FUN_143aa58b0(local_3b8,"icudt53l-brkitr",&DAT_145af3922,param_4);
    }
    cVar1 = FUN_143a8b110(*param_4);
    if (cVar1 != '\0') {
      local_3c0 = (undefined1 *)FUN_143aa3350(local_3b8,"boundaries",local_3c0,param_4);
      local_3c8 = (undefined1 *)FUN_143aa3350(local_3c0,param_2,local_3c8,param_4);
      local_3b0 = FUN_143aa5430(local_3c8,local_3a8,param_4);
      if (0xff < local_3a8[0]) {
        local_3a8[0] = 0;
        cVar1 = FUN_143a8b110(*param_4);
        if (cVar1 != '\0') {
          *param_4 = 0xf;
        }
      }
      cVar1 = FUN_143a8b110(*param_4);
      if ((cVar1 != '\0') && (local_3b0 != 0)) {
        _Source = (char *)FUN_143aa4820(local_3c8,param_4);
        strncpy(local_1b8,_Source,0x9d);
        local_3a0 = FUN_143ab45e0(local_3b0,0x2e);
        local_3cc = 0;
        if (local_3a0 != 0) {
          local_3cc = (int)(local_3a0 - local_3b0 >> 1);
          FUN_143ab5770(local_3a0 + 2,&local_3d0,4);
          FUN_143ab5770(local_3b0,local_118,local_3cc);
        }
        local_380 = (ulonglong)local_3cc;
        if (0xff < local_380) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        local_118[local_380] = 0;
      }
    }
    FUN_143aa2ef0(local_3c0);
    FUN_143aa2ef0(local_3c8);
    local_378 = FUN_143ac54b0("icudt53l-brkitr",&local_3d0,local_118,param_4);
    cVar1 = FUN_143a8b0e0(*param_4);
    if (cVar1 == '\0') {
      local_390 = FUN_143a8d310(0x1a8);
      if (local_390 == 0) {
        local_388 = (longlong *)0x0;
      }
      else {
        local_388 = (longlong *)FUN_143ac5870(local_390,local_378,param_4);
      }
      local_360 = local_388;
      local_3d8 = local_388;
      cVar1 = FUN_143a8b110(*param_4);
      if ((cVar1 != '\0') && (local_3d8 != (longlong *)0x0)) {
        FUN_143a9f4f0(local_358,(longlong)local_3d8 + 0xa5,local_3d8 + 1);
        uVar2 = FUN_143aa4780(local_3b8,1,param_4);
        FUN_143acfd80(local_358,uVar2,local_1b8);
        (**(code **)(*local_3d8 + 0xd0))(local_3d8,param_3);
      }
      FUN_143aa2ef0(local_3b8);
      cVar1 = FUN_143a8b0e0(*param_4);
      if ((cVar1 == '\0') || (local_3d8 == (longlong *)0x0)) {
        if (local_3d8 == (longlong *)0x0) {
          FUN_143ac56d0(local_378);
          cVar1 = FUN_143a8b110(*param_4);
          if (cVar1 != '\0') {
            *param_4 = 7;
          }
        }
      }
      else {
        local_368 = local_3d8;
        local_398 = local_3d8;
        if (local_3d8 != (longlong *)0x0) {
          (**(code **)*local_3d8)(local_3d8,1);
        }
        local_3d8 = (longlong *)0x0;
      }
    }
    else {
      FUN_143aa2ef0(local_3b8);
      local_3d8 = (longlong *)0x0;
    }
  }
  else {
    local_3d8 = (longlong *)0x0;
  }
  return local_3d8;
}



// FUNCTION 143a9fb40 FUN_143a9fb40 body=35 status=ok
// SIG undefined FUN_143a9fb40(void)

void FUN_143a9fb40(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2);
  return;
}



// FUNCTION 143a9fb70 FUN_143a9fb70 body=36 status=ok
// SIG undefined FUN_143a9fb70(void)

void FUN_143a9fb70(undefined8 param_1,undefined8 param_2)

{
  FUN_143a9fba0(param_1,0,param_2);
  return;
}



// FUNCTION 143a9fba0 FUN_143a9fba0 body=386 status=ok
// SIG undefined FUN_143a9fba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a9fba0(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_1f8 [32];
  undefined4 *local_1d8;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1b0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a9ff70();
    if (cVar1 == '\0') {
      local_1c0 = FUN_143aa0080(param_1,param_2,param_3);
    }
    else {
      local_1d8 = (undefined4 *)0x0;
      FUN_143a8a690(local_198,&DAT_145af3922,0,0);
      local_1d8 = param_3;
      local_1c8 = FUN_143acf5c0(DAT_146bc5528,param_1,param_2,local_198);
      cVar1 = FUN_143a8b110(*param_3);
      if ((cVar1 != '\0') && (local_1c8 != 0)) {
        pcVar2 = (char *)FUN_143a8c200(local_198);
        if (*pcVar2 != '\0') {
          FUN_143a9f4f0(local_1a8,local_1c8 + 0xa5,local_1c8 + 8);
          local_1b8 = FUN_143a8c200(local_198);
          uVar3 = FUN_143a8c200(local_198);
          FUN_143acfd80(local_1a8,uVar3,local_1b8);
        }
      }
      local_1c0 = local_1c8;
      FUN_143a8acf0(local_198);
    }
  }
  else {
    local_1c0 = 0;
  }
  return local_1c0;
}



// FUNCTION 143a9fd30 FUN_143a9fd30 body=39 status=ok
// SIG undefined FUN_143a9fd30(void)

void FUN_143a9fd30(undefined8 param_1,undefined8 param_2)

{
  FUN_143a9fba0(param_1,2,param_2);
  return;
}



// FUNCTION 143a9fd60 FUN_143a9fd60 body=39 status=ok
// SIG undefined FUN_143a9fd60(void)

void FUN_143a9fd60(undefined8 param_1,undefined8 param_2)

{
  FUN_143a9fba0(param_1,3,param_2);
  return;
}



// FUNCTION 143a9fd90 FUN_143a9fd90 body=39 status=ok
// SIG undefined FUN_143a9fd90(void)

void FUN_143a9fd90(undefined8 param_1,undefined8 param_2)

{
  FUN_143a9fba0(param_1,4,param_2);
  return;
}



// FUNCTION 143a9fdc0 FUN_143a9fdc0 body=39 status=ok
// SIG undefined FUN_143a9fdc0(void)

void FUN_143a9fdc0(undefined8 param_1,undefined8 param_2)

{
  FUN_143a9fba0(param_1,1,param_2);
  return;
}



// FUNCTION 143a9fdf0 FUN_143a9fdf0 body=93 status=ok
// SIG undefined FUN_143a9fdf0(void)

undefined8 FUN_143a9fdf0(undefined8 param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (param_3 < 1) {
      *param_4 = 0xf;
      uVar2 = 1;
    }
    else {
      *param_2 = 0;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143a9fe50 `dynamic_atexit_destructor_for_'Singleton'' body=35 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'Singleton''(void)

undefined8
`FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  FUN_143a9aa60(&DAT_146bc5530,FUN_143a9ffb0);
  return DAT_146bc5528;
}



// FUNCTION 143a9fe80 FUN_143a9fe80 body=48 status=ok
// SIG undefined FUN_143a9fe80(void)

void FUN_143a9fe80(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_143aa0080(param_2,param_3,param_5);
  return;
}



// FUNCTION 143a9feb0 FUN_143a9feb0 body=185 status=ok
// SIG undefined FUN_143a9feb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a9feb0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_1b8 = param_2;
  local_1b0 = (**(code **)(*param_2 + 0x48))(param_2);
  FUN_143a8aad0(local_198);
  (**(code **)(*local_1b8 + 0x58))(local_1b8,local_198);
  local_1a8 = FUN_143aa0080(local_198,local_1b0,param_4);
  FUN_143a8acf0(local_198);
  return local_1a8;
}



// FUNCTION 143a9ff70 FUN_143a9ff70 body=55 status=ok
// SIG undefined FUN_143a9ff70(void)

undefined1 FUN_143a9ff70(void)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_143aa0050(&DAT_146bc5530);
  if ((cVar1 == '\0') &&
     (lVar2 = `FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
              _dynamic_atexit_destructor_for__Singleton__(), lVar2 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143a9ffb0 FUN_143a9ffb0 body=106 status=ok
// SIG undefined FUN_143a9ffb0(void)

void FUN_143a9ffb0(void)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x200);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143a9f3e0(lVar1);
  }
  DAT_146bc5528 = local_20;
  FUN_143aa77b0(1,FUN_143aa01d0);
  return;
}



// FUNCTION 143aa0020 FUN_143aa0020 body=46 status=ok
// SIG undefined FUN_143aa0020(void)

bool FUN_143aa0020(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_143acc790(param_1);
  return iVar1 == 1;
}



// FUNCTION 143aa0050 FUN_143aa0050 body=48 status=ok
// SIG undefined FUN_143aa0050(void)

bool FUN_143aa0050(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_143a910d0(param_1);
  return iVar1 == 0;
}



// FUNCTION 143aa0080 FUN_143aa0080 body=322 status=ok
// SIG undefined FUN_143aa0080(void)

undefined8 FUN_143aa0080(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 local_10;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_10 = 0;
    if (param_2 == 0) {
      local_10 = FUN_143a9f670(param_1,"grapheme",0,param_3);
    }
    else if (param_2 == 1) {
      local_10 = FUN_143a9f670(param_1,&DAT_145cf034c,1,param_3);
    }
    else if (param_2 == 2) {
      local_10 = FUN_143a9f670(param_1,&DAT_145b5932c,2,param_3);
    }
    else if (param_2 == 3) {
      local_10 = FUN_143a9f670(param_1,"sentence",3,param_3);
    }
    else if (param_2 == 4) {
      local_10 = FUN_143a9f670(param_1,"title",4,param_3);
    }
    else {
      *param_3 = 1;
    }
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 != '\0') {
      local_10 = 0;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



// FUNCTION 143aa01d0 FUN_143aa01d0 body=110 status=ok
// SIG undefined FUN_143aa01d0(void)

undefined8 FUN_143aa01d0(void)

{
  if (DAT_146bc5528 != (undefined8 *)0x0) {
    if (DAT_146bc5528 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc5528)(DAT_146bc5528,1);
    }
    DAT_146bc5528 = (undefined8 *)0x0;
  }
  FUN_143a9a9f0(&DAT_146bc5530);
  return 1;
}



// FUNCTION 143aa0240 FUN_143aa0240 body=80 status=ok
// SIG undefined FUN_143aa0240(void)

void FUN_143aa0240(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_143aa2ef0(lVar1 + 0xb8);
  FUN_143aa2ef0(lVar1);
  FUN_143aa79f0(lVar1);
  FUN_143aa79f0(param_1);
  return;
}



// FUNCTION 143aa0290 FUN_143aa0290 body=46 status=ok
// SIG undefined FUN_143aa0290(void)

void FUN_143aa0290(longlong param_1)

{
  FUN_143aa4d80(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143aa02c0 FUN_143aa02c0 body=186 status=ok
// SIG undefined FUN_143aa02c0(void)

char * FUN_143aa02c0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  local_28 = (char *)0x0;
  uVar4 = 0;
  cVar1 = FUN_143aa54f0(lVar2);
  if (cVar1 != '\0') {
    lVar2 = FUN_143aa4880(lVar2,lVar2 + 0xb8,param_3,param_4,uVar4,uVar5);
    if (lVar2 != 0) {
      local_28 = (char *)FUN_143aa4760(lVar2);
      sVar3 = _guard_xfg_dispatch_icall_nop(local_28);
      uVar4 = (undefined4)sVar3;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar4;
  }
  return local_28;
}



// FUNCTION 143aa0380 FUN_143aa0380 body=43 status=ok
// SIG undefined FUN_143aa0380(void)

void FUN_143aa0380(longlong param_1)

{
  FUN_143aa5d90(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143aa03b0 FUN_143aa03b0 body=49 status=ok
// SIG undefined FUN_143aa03b0(void)

longlong * FUN_143aa03b0(longlong *param_1)

{
  *param_1 = (longlong)param_1 + 0xd;
  *(undefined4 *)(param_1 + 1) = 0x28;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 143aa03f0 FUN_143aa03f0 body=72 status=ok
// SIG undefined FUN_143aa03f0(void)

longlong FUN_143aa03f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_143aa03b0(param_1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  puVar1 = (undefined1 *)FUN_143a8afe0(param_1,0,param_3,param_4,uVar2);
  *puVar1 = 0;
  return param_1;
}



// FUNCTION 143aa0440 ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> body=27 status=ok
// SIG undefined ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(void)

void TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
     ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(undefined8 param_1)

{
  FUN_143a8ac70(param_1);
  return;
}



// FUNCTION 143aa0460 FUN_143aa0460 body=73 status=ok
// SIG undefined FUN_143aa0460(void)

void FUN_143aa0460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_2);
  uVar1 = FUN_143a8b510(param_2);
  FUN_143acff50(param_1,uVar1,uVar2,param_3);
  return;
}



// FUNCTION 143aa04b0 FUN_143aa04b0 body=56 status=ok
// SIG undefined FUN_143aa04b0(void)

bool FUN_143aa04b0(undefined8 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_143aa2970(param_1,0x5f);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  return puVar1 != (undefined1 *)0x0;
}



// FUNCTION 143aa04f0 FUN_143aa04f0 body=154 status=ok
// SIG undefined FUN_143aa04f0(void)

undefined1 FUN_143aa04f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  cVar3 = FUN_143ab2f70(*param_1,*param_2);
  if ((cVar3 != '\0') && (cVar3 = FUN_143ab2f70(uVar1,uVar2), cVar3 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143aa0590 FUN_143aa0590 body=65 status=ok
// SIG undefined FUN_143aa0590(void)

void FUN_143aa0590(undefined8 param_1)

{
  DAT_146bc5538 = FUN_143ab3680(FUN_143aa1640,FUN_143aa04f0,0,param_1);
  FUN_143aa77b0(4,FUN_143aa2bb0);
  return;
}



// FUNCTION 143aa05e0 ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> body=27 status=ok
// SIG undefined ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(void)

void TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
     ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(undefined8 param_1)

{
  FUN_143a8b510(param_1);
  return;
}



// FUNCTION 143aa0600 FUN_143aa0600 body=48 status=ok
// SIG undefined FUN_143aa0600(void)

void FUN_143aa0600(undefined8 param_1)

{
  FUN_143ab2410(&DAT_146bc5540);
  FUN_143aa0630(param_1);
  FUN_143ab2470(&DAT_146bc5540);
  return;
}



// FUNCTION 143aa0630 FUN_143aa0630 body=73 status=ok
// SIG undefined FUN_143aa0630(void)

void FUN_143aa0630(longlong param_1)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  while (local_res8 != 0) {
    *(int *)(local_res8 + 0x5c) = *(int *)(local_res8 + 0x5c) + -1;
    local_res8 = *(longlong *)(local_res8 + 0x10);
  }
  return;
}



// FUNCTION 143aa0680 FUN_143aa0680 body=102 status=ok
// SIG undefined FUN_143aa0680(void)

void FUN_143aa0680(longlong param_1)

{
  longlong local_res8;
  
  FUN_143ab2410(&DAT_146bc5540);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  local_res8 = param_1;
  while (*(longlong *)(local_res8 + 0x10) != 0) {
    local_res8 = *(longlong *)(local_res8 + 0x10);
    *(int *)(local_res8 + 0x5c) = *(int *)(local_res8 + 0x5c) + 1;
  }
  FUN_143ab2470(&DAT_146bc5540);
  return;
}



// FUNCTION 143aa06f0 FUN_143aa06f0 body=2264 status=ok
// SIG undefined FUN_143aa06f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143aa08d4) */
/* WARNING: Removing unreachable block (ram,0x000143aa0821) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_143aa06f0(char *param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *_Source;
  undefined1 auStack_1b8 [32];
  char *local_198;
  int *local_190;
  char local_188;
  char local_187;
  char local_186;
  char local_185;
  char local_184 [4];
  undefined8 *local_180;
  char local_178;
  char local_177;
  char local_176;
  undefined8 *local_170;
  int local_168 [2];
  undefined8 *local_160;
  int local_158 [4];
  undefined8 *local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  char local_118 [156];
  undefined1 uStack_7c;
  char local_78 [95];
  undefined1 uStack_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_168[0] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_170 = (undefined8 *)0x0;
  local_180 = (undefined8 *)0x0;
  local_160 = (undefined8 *)0x0;
  local_148 = (undefined8 *)0x0;
  local_140 = 0;
  local_184[0] = '\0';
  local_186 = '\0';
  local_187 = '\0';
  local_188 = '\x01';
  if ((param_1 == (char *)0x0) || (iVar2 = strncmp(param_1,"icudt53l",8), iVar2 == 0)) {
    local_176 = '\x01';
  }
  else {
    local_176 = '\0';
  }
  local_185 = local_176;
  FUN_143aa16a0(param_3);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return (undefined8 *)0x0;
  }
  strncpy(local_118,param_2,0x9c);
  local_138 = 0x9c;
  uStack_7c = 0;
  if (local_185 != '\0') {
    if (param_1 == (char *)0x0) {
      _guard_xfg_dispatch_icall_nop(local_78,"usrdt53l");
    }
    else {
      strncpy(local_78,param_1,0x5f);
      local_78[0] = 'u';
      local_78[1] = 0x73;
      local_78[2] = 0x72;
      local_128 = 0x5f;
      uStack_19 = 0;
    }
  }
  FUN_143ab2410(&DAT_146bc5540);
  local_190 = local_168;
  local_198 = local_184;
  local_170 = (undefined8 *)FUN_143aa0fe0(param_1,local_118,&local_186,&local_188);
  if (local_170 != (undefined8 *)0x0) {
    local_187 = '\x01';
    local_180 = local_170;
    if ((local_185 != '\0') &&
       (local_148 = (undefined8 *)FUN_143aa16d0(*local_170,local_78,local_158 + 1),
       local_148 != (undefined8 *)0x0)) {
      if (*(int *)(local_148 + 0xc) == 0) {
        local_148[2] = local_180;
        local_170 = local_148;
      }
      else {
        *(undefined4 *)((longlong)local_148 + 0x5c) = 0;
      }
    }
    while ((((local_188 != '\0' && (local_186 == '\0')) && (local_180[2] == 0)) &&
           (*(char *)(local_180 + 10) == '\0'))) {
      iVar2 = FUN_143ad0e30(local_180 + 5,"%%Parent");
      if (iVar2 == -1) {
LAB_143aa0a94:
        local_160 = (undefined8 *)FUN_143aa16d0(local_118,local_180[1],local_158);
        if (local_185 != '\0') {
          local_158[1] = 0;
          local_140 = FUN_143aa16d0(local_118,local_78,local_158 + 1);
        }
        if ((local_160 == (undefined8 *)0x0) || ((local_185 != '\0' && (local_140 == 0)))) {
          *param_3 = 7;
          goto LAB_143aa0f62;
        }
        if ((local_185 == '\0') || (*(int *)(local_140 + 0x60) != 0)) {
          local_180[2] = local_160;
          if (local_185 != '\0') {
            *(undefined4 *)(local_140 + 0x5c) = 0;
          }
        }
        else {
          local_180[2] = local_140;
          *(undefined8 **)(local_140 + 0x10) = local_160;
        }
        local_180 = local_160;
        local_188 = FUN_143aa04b0(local_118);
      }
      else {
        local_158[2] = 0;
        uVar3 = FUN_143ad0e30(local_180 + 5,"%%Parent");
        local_120 = FUN_143ad0e70(local_180 + 5,uVar3,local_158 + 2);
        if ((local_120 == 0) || (local_158[2] < 1)) goto LAB_143aa0a94;
        FUN_143ab5770(local_120,local_118,local_158[2] + 1);
        iVar2 = _guard_xfg_dispatch_icall_nop(local_118,"root");
        if (iVar2 != 0) goto LAB_143aa0a94;
        local_188 = '\0';
      }
    }
  }
  if (((local_170 == (undefined8 *)0x0) && (local_184[0] == '\0')) && (local_186 == '\0')) {
    _Source = (char *)FUN_143a96a30();
    _guard_xfg_dispatch_icall_nop(local_118,_Source);
    local_190 = local_168;
    local_198 = local_184;
    local_170 = (undefined8 *)FUN_143aa0fe0(param_1,local_118,&local_186,&local_188);
    local_168[0] = -0x7f;
    if (local_170 != (undefined8 *)0x0) {
      local_187 = '\x01';
      local_184[0] = '\x01';
      local_180 = local_170;
      while ((local_188 != '\0' && (local_180[2] == 0))) {
        iVar2 = FUN_143ad0e30(local_180 + 5,"%%Parent");
        if (iVar2 == -1) {
LAB_143aa0cf2:
          local_160 = (undefined8 *)FUN_143aa16d0(local_118,local_180[1],local_158);
          if (local_160 == (undefined8 *)0x0) {
            *param_3 = 7;
            goto LAB_143aa0f62;
          }
          iVar2 = FUN_143ad0e30(local_180 + 5,"%%ParentIsRoot");
          if (iVar2 == -1) {
            local_180[2] = local_160;
            local_180 = local_160;
          }
          local_188 = FUN_143aa04b0(local_118);
        }
        else {
          local_158[3] = 0;
          uVar3 = FUN_143ad0e30(local_180 + 5,"%%Parent");
          local_130 = FUN_143ad0e70(local_180 + 5,uVar3,local_158 + 3);
          if ((local_130 == 0) || (local_158[3] < 1)) goto LAB_143aa0cf2;
          FUN_143ab5770(local_130,local_118,local_158[3] + 1);
          iVar2 = _guard_xfg_dispatch_icall_nop(local_118,"root");
          if (iVar2 != 0) goto LAB_143aa0cf2;
          local_188 = '\0';
        }
      }
    }
  }
  if (local_170 == (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(local_118,"root");
    local_190 = local_168;
    local_198 = local_184;
    local_170 = (undefined8 *)FUN_143aa0fe0(param_1,local_118,&local_186,&local_188);
    if (local_170 == (undefined8 *)0x0) {
      *param_3 = 2;
      goto LAB_143aa0f62;
    }
    local_168[0] = -0x7f;
    local_187 = '\x01';
    local_180 = local_170;
  }
  else if ((((local_186 == '\0') &&
            (iVar2 = _guard_xfg_dispatch_icall_nop((char *)*local_180,"root"), iVar2 != 0)) &&
           (local_180[2] == 0)) && (*(char *)(local_170 + 10) == '\0')) {
    local_160 = (undefined8 *)FUN_143aa16d0(&DAT_145b22a58,local_180[1],local_158);
    if (local_160 == (undefined8 *)0x0) {
      *param_3 = 7;
      goto LAB_143aa0f62;
    }
    if (local_187 == '\0') {
      *(undefined4 *)(local_170 + 0xc) = 0xffffff81;
    }
    if ((*(int *)(local_160 + 0xc) == 0) || (local_187 != '\0')) {
      local_178 = '\x01';
    }
    else {
      local_178 = '\0';
    }
    local_187 = local_178;
    local_180[2] = local_160;
    local_180 = local_160;
  }
  while (((local_170 != (undefined8 *)0x0 && (local_186 == '\0')) && (local_180[2] != 0))) {
    *(int *)(local_180[2] + 0x5c) = *(int *)(local_180[2] + 0x5c) + 1;
    if ((*(int *)((undefined8 *)local_180[2] + 0xc) == 0) || (local_187 != '\0')) {
      local_177 = '\x01';
    }
    else {
      local_177 = '\0';
    }
    local_187 = local_177;
    local_180 = (undefined8 *)local_180[2];
  }
LAB_143aa0f62:
  FUN_143ab2470(&DAT_146bc5540);
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 == '\0') {
    local_170 = (undefined8 *)0x0;
  }
  else {
    cVar1 = FUN_143a8b110(local_158[0]);
    if (cVar1 == '\0') {
      *param_3 = local_158[0];
      local_170 = (undefined8 *)0x0;
    }
    else if (local_168[0] != 0) {
      *param_3 = local_168[0];
    }
  }
  return local_170;
}



// FUNCTION 143aa0fe0 FUN_143aa0fe0 body=369 status=ok
// SIG undefined FUN_143aa0fe0(void)

undefined8 *
FUN_143aa0fe0(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4,undefined8 param_5,
             undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  char *_Str2;
  size_t _MaxCount;
  bool bVar3;
  undefined8 *local_20;
  
  local_20 = (undefined8 *)0x0;
  bVar3 = false;
  _Str2 = (char *)FUN_143a96a30();
  *param_4 = '\x01';
  while( true ) {
    if (*param_4 == '\0') {
      return local_20;
    }
    if (bVar3) break;
    local_20 = (undefined8 *)FUN_143aa16d0(param_2,param_1,param_6);
    cVar1 = FUN_143a8b0e0(*param_6);
    if (cVar1 != '\0') {
      return (undefined8 *)0x0;
    }
    _MaxCount = _guard_xfg_dispatch_icall_nop(param_2);
    iVar2 = strncmp(param_2,_Str2,_MaxCount);
    *(bool *)param_5 = iVar2 == 0;
    bVar3 = *(int *)(local_20 + 0xc) == 0;
    if (bVar3) {
      _guard_xfg_dispatch_icall_nop(param_2,(char *)*local_20);
    }
    else {
      *(int *)((longlong)local_20 + 0x5c) = *(int *)((longlong)local_20 + 0x5c) + -1;
      local_20 = (undefined8 *)0x0;
      *param_6 = 0xffffff80;
    }
    iVar2 = _guard_xfg_dispatch_icall_nop(param_2,"root");
    *(bool *)param_3 = iVar2 == 0;
    cVar1 = FUN_143aa04b0(param_2);
    *param_4 = cVar1;
  }
  return local_20;
}



// FUNCTION 143aa1160 FUN_143aa1160 body=216 status=ok
// SIG undefined FUN_143aa1160(void)

void FUN_143aa1160(longlong *param_1)

{
  longlong local_18;
  
  FUN_143ad1970(param_1 + 5);
  if ((*param_1 != 0) && ((longlong *)*param_1 != param_1 + 0xb)) {
    FUN_143aa79f0(*param_1);
  }
  if (param_1[1] != 0) {
    FUN_143aa79f0(param_1[1]);
  }
  if (param_1[4] != 0) {
    *(int *)(param_1[4] + 0x5c) = *(int *)(param_1[4] + 0x5c) + -1;
  }
  local_18 = param_1[3];
  if (local_18 != 0) {
    for (; *(longlong *)(local_18 + 0x18) != 0; local_18 = *(longlong *)(local_18 + 0x18)) {
    }
    *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + -1;
  }
  FUN_143aa79f0(param_1);
  return;
}



// FUNCTION 143aa1240 FUN_143aa1240 body=405 status=ok
// SIG undefined FUN_143aa1240(void)

undefined8 *
FUN_143aa1240(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
             undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  char *_Str2;
  uint local_18;
  undefined4 local_14;
  undefined8 *local_10;
  
  local_10 = *(undefined8 **)(param_1 + 8);
  local_14 = 0xffffffff;
  *param_4 = -1;
  if (local_10 == (undefined8 *)0x0) {
    *param_5 = 2;
    local_10 = (undefined8 *)0x0;
  }
  else {
    iVar2 = *(int *)(local_10 + 0xc);
    if (iVar2 == 0) {
      iVar1 = FUN_143ad1310(local_10 + 5,*(undefined4 *)(local_10 + 9),&local_14,param_2);
      *param_4 = iVar1;
    }
    local_18 = (uint)(iVar2 == 0);
    if (*(char *)(param_1 + 0xa0) == '\x01') {
      while ((*param_4 == -1 && (local_10[2] != 0))) {
        local_10 = (undefined8 *)local_10[2];
        if (*(int *)(local_10 + 0xc) == 0) {
          local_18 = local_18 + 1;
          iVar2 = FUN_143ad1310(local_10 + 5,*(undefined4 *)(local_10 + 9),&local_14,param_2);
          *param_4 = iVar2;
        }
      }
    }
    if (*param_4 == -1) {
      *param_5 = 2;
      local_10 = (undefined8 *)0x0;
    }
    else {
      if (1 < (int)local_18) {
        _Str2 = (char *)FUN_143a96a30();
        iVar2 = _guard_xfg_dispatch_icall_nop((char *)*local_10,_Str2);
        if ((iVar2 == 0) ||
           (iVar2 = _guard_xfg_dispatch_icall_nop((char *)*local_10,"root"), iVar2 == 0)) {
          *param_5 = 0xffffff81;
        }
        else {
          *param_5 = 0xffffff80;
        }
      }
      *param_3 = local_10;
      local_10 = local_10 + 5;
    }
  }
  return local_10;
}



// FUNCTION 143aa13e0 FUN_143aa13e0 body=113 status=ok
// SIG undefined FUN_143aa13e0(void)

longlong FUN_143aa13e0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_143aa16d0(&DAT_145cf03f8,param_1,param_2);
  cVar1 = FUN_143a8b110(*param_2);
  if ((cVar1 != '\0') &&
     (((lVar2 == 0 || (*(int *)(lVar2 + 0x60) != 0)) || (*(char *)(lVar2 + 0x51) == '\0')))) {
    *param_2 = 3;
  }
  return lVar2;
}



// FUNCTION 143aa1460 FUN_143aa1460 body=468 status=ok
// SIG undefined FUN_143aa1460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143aa1460(undefined8 param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint local_a4;
  char *local_a0;
  char *local_98;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  undefined1 local_80 [8];
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = param_2;
  FUN_143aa03f0(local_58);
  local_90 = 0;
  FUN_143acfdd0(local_68,param_3);
  FUN_143aa0460(local_58,local_68,&local_90);
  cVar1 = FUN_143a8b0e0(local_90);
  if (cVar1 == '\0') {
    local_98 = (char *)TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                       ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
    while (((local_a4 = local_a8 >> 0x1c, *local_98 != '\0' && (local_a8 != 0xffffffff)) &&
           (((local_a4 == 2 || (((local_a4 == 5 || (local_a4 == 4)) || (local_a4 == 8)))) ||
            (local_a4 == 9))))) {
      local_a0 = (char *)FUN_143a8d150(local_98,0x2f);
      if (local_a0 == (undefined1 *)0x0) {
        local_a0 = (char *)FUN_143a8d150(local_98,0);
      }
      else {
        *local_a0 = 0;
        local_a0 = local_a0 + 1;
      }
      local_78 = local_98;
      local_a8 = FUN_143ad1310(param_1,local_a8,local_80,&local_78);
      local_98 = local_a0;
    }
    if (*local_98 == '\0') {
      local_84 = local_a8;
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      local_8c = local_84;
    }
    else {
      local_88 = 0xffffffff;
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      local_8c = local_88;
    }
  }
  else {
    local_8c = 0xffffffff;
    TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
  }
  return local_8c;
}



// FUNCTION 143aa1640 FUN_143aa1640 body=86 status=ok
// SIG undefined FUN_143aa1640(void)

int FUN_143aa1640(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1[1];
  iVar2 = FUN_143ab3350(*param_1);
  iVar3 = FUN_143ab3350(uVar1);
  return iVar2 + iVar3 * 0x25;
}



// FUNCTION 143aa16a0 FUN_143aa16a0 body=38 status=ok
// SIG undefined FUN_143aa16a0(void)

void FUN_143aa16a0(undefined8 param_1)

{
  FUN_143aa29a0(&DAT_146bc5570,FUN_143aa0590,param_1);
  return;
}



// FUNCTION 143aa16d0 FUN_143aa16d0 body=1210 status=ok
// SIG undefined FUN_143aa16d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143aa16d0(char *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined4 local_130;
  int local_12c;
  int local_128;
  char *local_120;
  uint *local_118;
  undefined8 *local_110;
  longlong local_108;
  char *local_f8;
  longlong local_f0;
  undefined1 local_88;
  undefined1 local_87 [111];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_138 = (undefined8 *)0x0;
  local_88 = 0;
  puVar4 = local_87;
  for (lVar3 = 99; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_12c = 0;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return (undefined8 *)0x0;
  }
  if (param_1 == (char *)0x0) {
    local_120 = (char *)FUN_143a96a30();
  }
  else {
    local_120 = param_1;
    if (*param_1 == '\0') {
      local_120 = "root";
    }
  }
  local_f8 = local_120;
  local_f0 = param_2;
  local_138 = (undefined8 *)FUN_143ab32d0(DAT_146bc5538);
  if (local_138 == (undefined8 *)0x0) {
    local_138 = (undefined8 *)FUN_143aa7a40(0x68);
    if (local_138 == (undefined8 *)0x0) {
      *param_3 = 7;
      return (undefined8 *)0x0;
    }
    _guard_xfg_dispatch_icall_nop(local_138,0,0x68);
    FUN_143aa28c0(local_138,local_120,param_3);
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 != '\0') {
      FUN_143aa79f0(local_138);
      return (undefined8 *)0x0;
    }
    if (param_2 != 0) {
      uVar2 = FUN_143ab8360(param_2);
      local_138[1] = uVar2;
      if (local_138[1] == 0) {
        *param_3 = 7;
        FUN_143aa79f0(local_138);
        return (undefined8 *)0x0;
      }
    }
    FUN_143ad18c0(local_138 + 5,local_138[1],*local_138,param_3);
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      if (*(char *)((longlong)local_138 + 0x52) != '\0') {
        uVar2 = FUN_143aa13e0(local_138[1],param_3);
        local_138[4] = uVar2;
        cVar1 = FUN_143a8b110(*param_3);
        if (cVar1 == '\0') {
          *(undefined4 *)(local_138 + 0xc) = *param_3;
        }
        else {
          local_118 = (uint *)(*(longlong *)(local_138[4] + 0x30) + 4);
          if (*(int *)(local_138[6] + 0x20) == *(int *)(*(longlong *)(local_138[4] + 0x30) + 0x20))
          {
            local_138[8] = local_118 + (int)(*local_118 & 0xff);
          }
          else {
            *param_3 = 3;
            *(undefined4 *)(local_138 + 0xc) = 3;
          }
        }
      }
      cVar1 = FUN_143a8b110(*param_3);
      if ((((cVar1 != '\0') && (local_128 = FUN_143ad0e30(local_138 + 5,"%%ALIAS"), local_128 != -1)
           ) && (local_108 = FUN_143ad0e70(local_138 + 5,local_128,&local_12c), local_108 != 0)) &&
         (0 < local_12c)) {
        FUN_143ab5770(local_108,&local_88,local_12c + 1);
        uVar2 = FUN_143aa16d0(&local_88,param_2,param_3);
        local_138[3] = uVar2;
      }
    }
    else {
      *param_3 = 0xffffff80;
      *(undefined4 *)(local_138 + 0xc) = 0xffffff80;
    }
    local_110 = (undefined8 *)0x0;
    local_110 = (undefined8 *)FUN_143ab32d0(DAT_146bc5538,local_138);
    if (local_110 == (undefined8 *)0x0) {
      local_130 = 0;
      FUN_143ab36d0(DAT_146bc5538,local_138,local_138,&local_130);
      cVar1 = FUN_143a8b0e0(local_130);
      if (cVar1 != '\0') {
        *param_3 = local_130;
        FUN_143aa1160(local_138);
        local_138 = (undefined8 *)0x0;
      }
    }
    else {
      FUN_143aa1160(local_138);
      local_138 = local_110;
    }
  }
  if (local_138 != (undefined8 *)0x0) {
    for (; local_138[3] != 0; local_138 = (undefined8 *)local_138[3]) {
    }
    *(int *)((longlong)local_138 + 0x5c) = *(int *)((longlong)local_138 + 0x5c) + 1;
    if ((*(int *)(local_138 + 0xc) != 0) && (cVar1 = FUN_143a8b110(*param_3), cVar1 != '\0')) {
      *param_3 = *(undefined4 *)(local_138 + 0xc);
    }
  }
  return local_138;
}



// FUNCTION 143aa1b90 FUN_143aa1b90 body=3265 status=ok
// SIG undefined FUN_143aa1b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143aa1b90(void *param_1,uint param_2,char *param_3,int param_4,longlong param_5,
             undefined8 *param_6,int param_7,undefined8 *param_8,undefined4 *param_9)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  uint local_res10;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  undefined8 *local_390;
  int local_388;
  undefined8 *local_380;
  undefined4 *local_378;
  int local_368;
  int local_364;
  char *local_360;
  char *local_358;
  undefined8 *local_350;
  char *local_348;
  undefined8 *local_340;
  char *local_338;
  longlong local_330;
  char *local_328;
  char *local_320;
  uint local_318;
  undefined4 local_314;
  undefined8 local_310;
  int local_308;
  int local_304;
  char *local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  char local_2e8 [208];
  char local_218 [256];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  if ((param_9 != (undefined4 *)0x0) && (cVar1 = FUN_143a8b0e0(*param_9), cVar1 == '\0')) {
    if (param_6 == (undefined8 *)0x0) {
      *param_9 = 1;
      param_8 = (undefined8 *)0x0;
    }
    else if (param_2 >> 0x1c == 3) {
      if (param_7 < 0x100) {
        local_368 = 0;
        local_2f0 = FUN_143ad0b40(param_1,param_2,&local_368);
        if (local_368 < 1) {
          *param_9 = 1;
        }
        else {
          local_360 = (char *)0x0;
          local_328 = (char *)0x0;
          local_348 = (char *)0x0;
          local_358 = (char *)0x0;
          local_368 = local_368 + 1;
          if (param_6[4] == 0) {
            local_364 = 0;
          }
          else {
            sVar4 = _guard_xfg_dispatch_icall_nop((char *)param_6[4]);
            local_364 = (int)sVar4 + 1;
          }
          if (local_364 < local_368) {
            local_364 = local_368;
          }
          if (local_364 < 0xc9) {
            local_364 = 200;
            local_360 = local_2e8;
          }
          else {
            local_360 = (char *)FUN_143aa7a40((longlong)local_364);
            if (local_360 == (char *)0x0) {
              *param_9 = 7;
              return (undefined8 *)0x0;
            }
          }
          FUN_143ab5770(local_2f0,local_360,local_368);
          if (*local_360 == '/') {
            local_348 = (char *)FUN_143a8d150(local_360 + 1,0x2f);
            if (local_348 == (undefined1 *)0x0) {
              local_348 = (char *)FUN_143a8d150(local_360,0);
            }
            else {
              *local_348 = 0;
              local_348 = local_348 + 1;
            }
            local_328 = local_360 + 1;
            iVar2 = _guard_xfg_dispatch_icall_nop(local_328,"LOCALE");
            if (iVar2 == 0) {
              local_358 = local_348;
              local_348 = *(char **)param_6[3];
              local_328 = *(char **)(param_5 + 8);
            }
            else {
              iVar2 = _guard_xfg_dispatch_icall_nop(local_328,"ICUDATA");
              if (iVar2 == 0) {
                local_328 = (char *)0x0;
              }
              local_358 = (char *)FUN_143a8d150(local_348,0x2f);
              if (local_358 != (char *)0x0) {
                *local_358 = '\0';
                local_358 = local_358 + 1;
              }
            }
          }
          else {
            local_348 = local_360;
            local_358 = (char *)FUN_143a8d150(local_360,0x2f);
            if (local_358 != (char *)0x0) {
              *local_358 = '\0';
              local_358 = local_358 + 1;
            }
            local_328 = *(char **)(param_5 + 8);
          }
          local_340 = param_8;
          local_310 = 0;
          local_314 = 0;
          local_350 = (undefined8 *)FUN_143aa56e0(local_328,local_348,&local_314);
          cVar1 = FUN_143a8b110(local_314);
          if (cVar1 == '\0') {
            *param_9 = local_314;
          }
          else if (local_358 == (char *)0x0) {
            local_320 = (char *)param_6[4];
            if (local_320 == (char *)0x0) {
              local_res10 = *(uint *)((longlong)local_350 + 0x9c);
              local_320 = (char *)0x0;
            }
            else {
              _guard_xfg_dispatch_icall_nop(local_360,local_320);
              local_320 = local_360;
              local_res10 = FUN_143ad08e0(local_350 + 5,*(undefined4 *)((longlong)local_350 + 0x9c),
                                          &local_320,&local_310);
            }
            if (param_3 == (char *)0x0) {
              if (param_4 != -1) {
                local_318 = local_res10 >> 0x1c;
                if (((local_318 == 2) || (local_318 == 5)) || (local_318 == 4)) {
                  local_res10 = FUN_143ad1020(local_350 + 5,local_res10,param_4,&local_320);
                }
                else {
                  local_res10 = FUN_143ad0bf0(local_350 + 5,local_res10,param_4);
                }
              }
            }
            else {
              sVar4 = _guard_xfg_dispatch_icall_nop(param_3);
              local_368 = (int)sVar4 + 1;
              if (local_364 < local_368) {
                local_364 = local_368;
                if (local_360 == local_2e8) {
                  local_360 = (char *)FUN_143aa7a40((longlong)local_368);
                }
                else {
                  local_360 = (char *)FUN_143aa7aa0(local_360,(longlong)local_368);
                }
                if (local_360 == (char *)0x0) {
                  FUN_143aa2ef0(local_350);
                  *param_9 = 7;
                  return (undefined8 *)0x0;
                }
              }
              _guard_xfg_dispatch_icall_nop(local_360,param_3,(longlong)local_368);
              local_320 = local_360;
              local_res10 = FUN_143ad08e0(local_350 + 5,local_res10,&local_320,&local_310);
            }
            if (local_res10 == 0xffffffff) {
              *param_9 = 2;
              local_340 = param_8;
            }
            else {
              local_388 = param_7 + 1;
              local_378 = param_9;
              local_380 = param_8;
              local_390 = local_350;
              local_398 = local_350[1];
              local_340 = (undefined8 *)
                          FUN_143aa1b90(local_350 + 5,local_res10,local_310,0xffffffff);
            }
          }
          else {
            local_330 = local_350[1];
            local_338 = local_218;
            local_300 = local_338;
            sVar4 = _guard_xfg_dispatch_icall_nop(local_358);
            if (0x100 < sVar4) {
              sVar4 = _guard_xfg_dispatch_icall_nop(local_358);
              local_338 = (char *)FUN_143aa7a40(sVar4 + 1);
              if (local_338 == (char *)0x0) {
                *param_9 = 7;
                return (undefined8 *)0x0;
              }
            }
            _guard_xfg_dispatch_icall_nop(local_338,local_358);
            local_340 = local_350;
            do {
              local_res10 = *(int *)(local_330 + 0x48);
              while (((*local_300 != '\0' && (cVar1 = FUN_143a8b110(*param_9), cVar1 != '\0')) &&
                     (local_res10 = FUN_143ad08e0(local_330 + 0x28,local_res10,&local_300,&local_310
                                                 ), local_res10 != -1))) {
                local_388 = param_7 + 1;
                local_378 = param_9;
                local_380 = param_8;
                local_390 = local_340;
                local_398 = local_330;
                param_8 = (undefined8 *)
                          FUN_143aa1b90(local_330 + 0x28,local_res10,local_310,0xffffffff);
                local_340 = param_8;
                if (param_8 != (undefined8 *)0x0) {
                  local_res10 = *(int *)((longlong)param_8 + 0x9c);
                  local_330 = param_8[1];
                }
              }
              local_330 = *(longlong *)(local_330 + 0x10);
              _guard_xfg_dispatch_icall_nop(local_338,local_358);
              local_300 = local_338;
            } while ((local_res10 == -1) && (local_330 != 0));
            if (local_res10 == -1) {
              *param_9 = 2;
              local_340 = param_8;
            }
            if (local_338 != local_218) {
              FUN_143aa79f0(local_338);
            }
          }
          if (local_360 != local_2e8) {
            FUN_143aa79f0(local_360);
          }
          param_8 = local_340;
          if (local_350 != local_340) {
            FUN_143aa2ef0(local_350);
            param_8 = local_340;
          }
        }
      }
      else {
        *param_9 = 0x18;
      }
    }
    else {
      if (param_8 == (undefined8 *)0x0) {
        param_8 = (undefined8 *)FUN_143aa7a40(0xb8);
        if (param_8 == (undefined8 *)0x0) {
          *param_9 = 7;
          return (undefined8 *)0x0;
        }
        FUN_143aa2e90(param_8,0);
        param_8[4] = 0;
        *(undefined4 *)(param_8 + 0x13) = 0;
      }
      else {
        if (param_8[1] != 0) {
          FUN_143aa0600(param_8[1]);
        }
        if (param_8[2] != 0) {
          FUN_143aa79f0(param_8[2]);
        }
        if (param_6 != param_8) {
          FUN_143aa2d40(param_8);
        }
      }
      param_8[1] = param_5;
      FUN_143aa0680(param_8[1]);
      *(undefined1 *)(param_8 + 0x14) = 0;
      *(undefined1 *)((longlong)param_8 + 0xa1) = 0;
      *(undefined4 *)((longlong)param_8 + 0xac) = 0xffffffff;
      *param_8 = param_3;
      param_8[3] = param_6[3];
      if ((param_6[4] != 0) && (param_6 != param_8)) {
        FUN_143aa2a40(param_8,param_6[4],*(undefined4 *)(param_6 + 0x13),param_9);
      }
      if (param_3 == (char *)0x0) {
        if (-1 < param_4) {
          local_2f8 = FUN_143ab80b0(local_118,param_4,10);
          FUN_143aa2a40(param_8,local_118,local_2f8,param_9);
          if (*(char *)(param_8[4] + (longlong)(*(int *)(param_8 + 0x13) + -1)) != '/') {
            FUN_143aa2a40(param_8,&DAT_145b11fc0,1,param_9);
          }
        }
      }
      else {
        sVar4 = _guard_xfg_dispatch_icall_nop(param_3);
        FUN_143aa2a40(param_8,param_3,sVar4 & 0xffffffff,param_9);
        if (*(char *)(param_8[4] + (longlong)(*(int *)(param_8 + 0x13) + -1)) != '/') {
          FUN_143aa2a40(param_8,&DAT_145b11fc0,1,param_9);
        }
      }
      if (param_8 + 0xb == (undefined8 *)param_8[4]) {
        local_308 = *(int *)(param_8 + 0x13);
      }
      else {
        local_308 = 0;
      }
      local_304 = local_308;
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_8 + (longlong)local_308 + 0x58),0,
                 0x40 - (longlong)local_308);
      param_8[2] = 0;
      *(uint *)((longlong)param_8 + 0x9c) = param_2;
      memmove(param_8 + 5,param_1,0x30);
      uVar3 = FUN_143ad07e0(param_8 + 5,*(undefined4 *)((longlong)param_8 + 0x9c));
      *(undefined4 *)(param_8 + 0x16) = uVar3;
    }
  }
  return param_8;
}



// FUNCTION 143aa2860 FUN_143aa2860 body=81 status=ok
// SIG undefined FUN_143aa2860(void)

undefined4 FUN_143aa2860(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char *_Str1;
  int iVar1;
  
  do {
    _Str1 = (char *)FUN_143abdee0(param_1,0,param_3);
    if (_Str1 == (char *)0x0) {
      return 0;
    }
    iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,param_2);
  } while (iVar1 != 0);
  return 1;
}



// FUNCTION 143aa28c0 FUN_143aa28c0 body=173 status=ok
// SIG undefined FUN_143aa28c0(void)

void FUN_143aa28c0(longlong *param_1,char *param_2,undefined4 *param_3)

{
  size_t sVar1;
  longlong lVar2;
  
  sVar1 = _guard_xfg_dispatch_icall_nop(param_2);
  if ((*param_1 != 0) && ((longlong *)*param_1 != param_1 + 0xb)) {
    FUN_143aa79f0(*param_1);
  }
  if ((int)sVar1 < 3) {
    *param_1 = (longlong)(param_1 + 0xb);
  }
  else {
    lVar2 = FUN_143aa7a40((longlong)((int)sVar1 + 1));
    *param_1 = lVar2;
  }
  if (*param_1 == 0) {
    *param_3 = 7;
  }
  else {
    _guard_xfg_dispatch_icall_nop((char *)*param_1,param_2);
  }
  return;
}



// FUNCTION 143aa2970 FUN_143aa2970 body=33 status=ok
// SIG undefined FUN_143aa2970(void)

void FUN_143aa2970(char *param_1,int param_2)

{
  strrchr(param_1,param_2);
  return;
}



// FUNCTION 143aa29a0 FUN_143aa29a0 body=151 status=ok
// SIG undefined FUN_143aa29a0(void)

void FUN_143aa29a0(longlong param_1,code *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    iVar2 = FUN_143a910d0(param_1);
    if ((iVar2 == 2) || (cVar1 = FUN_143ab2360(param_1), cVar1 == '\0')) {
      cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 4));
      if (cVar1 != '\0') {
        *param_3 = *(undefined4 *)(param_1 + 4);
      }
    }
    else {
      (*param_2)(param_3);
      *(undefined4 *)(param_1 + 4) = *param_3;
      FUN_143ab2340(param_1);
    }
  }
  return;
}



// FUNCTION 143aa2a40 FUN_143aa2a40 body=353 status=ok
// SIG undefined FUN_143aa2a40(void)

void FUN_143aa2a40(longlong param_1,char *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    *(longlong *)(param_1 + 0x20) = param_1 + 0x58;
    **(undefined1 **)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + param_3;
  if (0x3f < *(int *)(param_1 + 0x98) + 1) {
    if (*(longlong *)(param_1 + 0x20) == param_1 + 0x58) {
      uVar2 = FUN_143aa7a40((longlong)(*(int *)(param_1 + 0x98) + 1));
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      if (*(longlong *)(param_1 + 0x20) == 0) {
        *param_4 = 7;
        return;
      }
      _guard_xfg_dispatch_icall_nop(*(char **)(param_1 + 0x20),(char *)(param_1 + 0x58));
    }
    else {
      lVar3 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x20),(longlong)(*(int *)(param_1 + 0x98) + 1)
                           );
      if (lVar3 == 0) {
        *param_4 = 7;
        return;
      }
      *(longlong *)(param_1 + 0x20) = lVar3;
    }
  }
  _guard_xfg_dispatch_icall_nop((char *)((longlong)iVar1 + *(longlong *)(param_1 + 0x20)),param_2);
  return;
}



// FUNCTION 143aa2bb0 FUN_143aa2bb0 body=61 status=ok
// SIG undefined FUN_143aa2bb0(void)

undefined1 FUN_143aa2bb0(void)

{
  if (DAT_146bc5538 != 0) {
    FUN_143aa2c70();
    FUN_143ab2e80(DAT_146bc5538);
    DAT_146bc5538 = 0;
  }
  FUN_143a9a9f0(&DAT_146bc5570);
  return 1;
}



// FUNCTION 143aa2bf0 FUN_143aa2bf0 body=124 status=ok
// SIG undefined FUN_143aa2bf0(void)

void FUN_143aa2bf0(longlong param_1,char param_2)

{
  char cVar1;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_143aa0600(*(undefined8 *)(param_1 + 8));
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
    }
    FUN_143aa2d40(param_1);
    cVar1 = FUN_143aa2e40(param_1);
    if ((cVar1 == '\0') && (param_2 != '\0')) {
      FUN_143aa79f0(param_1);
    }
  }
  return;
}



// FUNCTION 143aa2c70 FUN_143aa2c70 body=195 status=ok
// SIG undefined FUN_143aa2c70(void)

int FUN_143aa2c70(void)

{
  bool bVar1;
  int local_24;
  undefined4 local_20 [2];
  longlong local_18;
  longlong local_10;
  
  local_24 = 0;
  FUN_143ab2410(&DAT_146bc5540);
  if (DAT_146bc5538 == 0) {
    FUN_143ab2470(&DAT_146bc5540);
    local_24 = 0;
  }
  else {
    do {
      bVar1 = false;
      local_20[0] = 0xffffffff;
      while (local_18 = FUN_143ab3590(DAT_146bc5538,local_20), local_18 != 0) {
        local_10 = *(longlong *)(local_18 + 8);
        if (*(int *)(local_10 + 0x5c) == 0) {
          local_24 = local_24 + 1;
          bVar1 = true;
          FUN_143ab37e0(DAT_146bc5538,local_18);
          FUN_143aa1160(local_10);
        }
      }
    } while (bVar1);
    FUN_143ab2470(&DAT_146bc5540);
  }
  return local_24;
}



// FUNCTION 143aa2d40 FUN_143aa2d40 body=88 status=ok
// SIG undefined FUN_143aa2d40(void)

void FUN_143aa2d40(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x20) != param_1 + 0x58)) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}



// FUNCTION 143aa2da0 FUN_143aa2da0 body=144 status=ok
// SIG undefined FUN_143aa2da0(void)

undefined8
FUN_143aa2da0(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 >> 0x1c == 3) {
    uVar1 = FUN_143aa30d0(param_1,param_3,0,param_5);
    uVar2 = FUN_143aa5430(uVar1,param_4,param_5);
    FUN_143aa2ef0(uVar1);
  }
  else {
    uVar2 = FUN_143ad0e70(param_1 + 0x28,param_2,param_4);
  }
  return uVar2;
}



// FUNCTION 143aa2e40 FUN_143aa2e40 body=68 status=ok
// SIG undefined FUN_143aa2e40(void)

undefined1 FUN_143aa2e40(longlong param_1)

{
  undefined1 local_18;
  
  if ((*(int *)(param_1 + 0xa4) == 0x12c9b17) && (*(int *)(param_1 + 0xa8) == 0x12bb38b)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143aa2e90 FUN_143aa2e90 body=81 status=ok
// SIG undefined FUN_143aa2e90(void)

void FUN_143aa2e90(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0xa4) = 0x12c9b17;
    *(undefined4 *)(param_1 + 0xa8) = 0x12bb38b;
  }
  else {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 143aa2ef0 FUN_143aa2ef0 body=26 status=ok
// SIG undefined FUN_143aa2ef0(void)

void FUN_143aa2ef0(undefined8 param_1)

{
  FUN_143aa2bf0(param_1,1);
  return;
}



// FUNCTION 143aa2f10 FUN_143aa2f10 body=302 status=ok
// SIG undefined FUN_143aa2f10(void)

void * FUN_143aa2f10(void *param_1,void *param_2,undefined4 *param_3)

{
  char cVar1;
  void *local_res8;
  undefined1 local_18;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (((cVar1 == '\0') && (param_1 != param_2)) && (param_2 != (void *)0x0)) {
    if (param_1 == (void *)0x0) {
      local_18 = 0;
      local_res8 = (void *)FUN_143aa7a40(0xb8);
      if (local_res8 == (void *)0x0) {
        *param_3 = 7;
        return (void *)0x0;
      }
    }
    else {
      local_18 = FUN_143aa2e40(param_1);
      FUN_143aa2bf0(param_1,0);
      local_res8 = param_1;
    }
    _guard_xfg_dispatch_icall_nop(local_res8,param_2,0xb8);
    *(undefined8 *)((longlong)local_res8 + 0x20) = 0;
    *(undefined4 *)((longlong)local_res8 + 0x98) = 0;
    if (*(longlong *)((longlong)param_2 + 0x20) != 0) {
      FUN_143aa2a40(local_res8,*(undefined8 *)((longlong)param_2 + 0x20),
                    *(undefined4 *)((longlong)param_2 + 0x98),param_3);
    }
    FUN_143aa2e90(local_res8,local_18);
    param_1 = local_res8;
    if (*(longlong *)((longlong)local_res8 + 8) != 0) {
      FUN_143aa0680(*(undefined8 *)((longlong)local_res8 + 8));
    }
  }
  return param_1;
}



// FUNCTION 143aa3040 FUN_143aa3040 body=140 status=ok
// SIG undefined FUN_143aa3040(void)

longlong FUN_143aa3040(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  
  if ((param_3 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_3), cVar1 != '\0')) {
    lVar2 = 0;
  }
  else if (param_1 == 0) {
    *param_3 = 1;
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_143ad0cb0(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),param_2);
    if (lVar2 == 0) {
      *param_3 = 0x11;
    }
  }
  return lVar2;
}



// FUNCTION 143aa30d0 FUN_143aa30d0 body=576 status=ok
// SIG undefined FUN_143aa30d0(void)

undefined8 FUN_143aa30d0(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  if ((param_4 != (undefined4 *)0x0) && (cVar1 = FUN_143a8b0e0(*param_4), cVar1 == '\0')) {
    if (param_1 == 0) {
      *param_4 = 1;
    }
    else if ((param_2 < 0) || (*(int *)(param_1 + 0xb0) <= param_2)) {
      *param_4 = 2;
    }
    else {
      switch(*(uint *)(param_1 + 0x9c) >> 0x1c) {
      case 0:
      case 1:
      case 6:
      case 7:
      case 0xe:
        param_3 = FUN_143aa2f10(param_3,param_1,param_4);
        break;
      case 2:
      case 4:
      case 5:
        uVar2 = FUN_143ad1020(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),param_2,local_10);
        param_3 = FUN_143aa1b90(param_1 + 0x28,uVar2,local_10[0],param_2,
                                *(undefined8 *)(param_1 + 8),param_1,0,param_3,param_4);
        break;
      default:
        break;
      case 8:
      case 9:
        uVar2 = FUN_143ad0bf0(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),param_2);
        param_3 = FUN_143aa1b90(param_1 + 0x28,uVar2,local_10[0],param_2,
                                *(undefined8 *)(param_1 + 8),param_1,0,param_3,param_4);
      }
    }
  }
  return param_3;
}



// FUNCTION 143aa3350 FUN_143aa3350 body=1132 status=ok
// SIG undefined FUN_143aa3350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143aa3350(longlong param_1,char *param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  char *_Str2;
  longlong local_res18;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  longlong local_180;
  undefined4 local_178;
  longlong local_170;
  undefined4 *local_168;
  uint local_158;
  undefined8 *local_150;
  int local_148;
  longlong local_140;
  undefined4 local_138;
  uint local_134;
  char *local_130;
  char *local_128;
  void *local_120;
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_158 = 0xffffffff;
  local_138 = 0xffffffff;
  local_140 = 0;
  if (param_4 == (undefined4 *)0x0) {
    return param_3;
  }
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    return param_3;
  }
  if (param_1 == 0) {
    *param_4 = 1;
    return param_3;
  }
  local_134 = *(uint *)(param_1 + 0x9c) >> 0x1c;
  local_res18 = param_3;
  if (((local_134 == 2) || (local_134 == 5)) || (local_134 == 4)) {
    local_158 = FUN_143aa1460(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),param_2);
    local_128 = param_2;
    if (local_158 == 0xffffffff) {
      local_150 = *(undefined8 **)(param_1 + 8);
      local_130 = local_118;
      local_120 = *(void **)(param_1 + 0x20);
      local_148 = *(int *)(param_1 + 0x98);
      do {
        if ((local_158 != 0xffffffff) || (local_150[2] == 0)) goto LAB_143aa3644;
        local_150 = (undefined8 *)local_150[2];
        local_138 = *(undefined4 *)(local_150 + 9);
        if (*(int *)(local_150 + 0xc) == 0) {
          if (0 < local_148) {
            _guard_xfg_dispatch_icall_nop(local_118,local_120,(longlong)local_148);
          }
          _guard_xfg_dispatch_icall_nop(local_118 + local_148,param_2);
          local_130 = local_118;
          local_128 = param_2;
          do {
            local_158 = FUN_143ad08e0(local_150 + 5,local_138,&local_130,&local_128);
            if ((local_158 >> 0x1c == 3) && (*local_130 != '\0')) {
              local_170 = local_140;
              local_178 = 0;
              local_188 = local_150;
              local_180 = param_1;
              local_168 = param_4;
              local_140 = FUN_143aa1b90(local_150 + 5,local_158,0,0xffffffff);
              if (local_140 == 0) break;
              local_150 = *(undefined8 **)(local_140 + 8);
              local_138 = *(undefined4 *)(local_140 + 0x9c);
              local_120 = *(void **)(local_140 + 0x20);
              local_148 = *(int *)(local_140 + 0x98);
            }
          } while (*local_130 != '\0');
        }
      } while( true );
    }
    local_178 = 0;
    local_188 = *(undefined8 **)(param_1 + 8);
    local_180 = param_1;
    local_170 = param_3;
    local_168 = param_4;
    local_res18 = FUN_143aa1b90(param_1 + 0x28,local_158,param_2,0xffffffff);
  }
  else {
    *param_4 = 0x11;
  }
LAB_143aa3792:
  FUN_143aa2ef0(local_140);
  return local_res18;
LAB_143aa3644:
  if (local_158 == 0xffffffff) {
    *param_4 = 2;
  }
  else {
    _Str2 = (char *)FUN_143a96a30();
    iVar2 = _guard_xfg_dispatch_icall_nop((char *)*local_150,_Str2);
    if ((iVar2 == 0) ||
       (iVar2 = _guard_xfg_dispatch_icall_nop((char *)*local_150,"root"), iVar2 == 0)) {
      *param_4 = 0xffffff81;
    }
    else {
      *param_4 = 0xffffff80;
    }
    local_178 = 0;
    local_188 = local_150;
    local_180 = param_1;
    local_170 = param_3;
    local_168 = param_4;
    local_res18 = FUN_143aa1b90(local_150 + 5,local_158,param_2,0xffffffff);
  }
  goto LAB_143aa3792;
}



// FUNCTION 143aa37c0 FUN_143aa37c0 body=603 status=ok
// SIG undefined FUN_143aa37c0(void)

undefined8 FUN_143aa37c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int local_38;
  uint local_34;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_38 = -1;
  local_20 = 0;
  if ((param_4 != (undefined4 *)0x0) &&
     (local_28 = param_2, cVar1 = FUN_143a8b0e0(*param_4), cVar1 == '\0')) {
    if (param_1 == 0) {
      *param_4 = 1;
    }
    else {
      local_34 = *(uint *)(param_1 + 0x9c) >> 0x1c;
      if (((local_34 == 2) || (local_34 == 5)) || (local_34 == 4)) {
        local_38 = FUN_143ad1310(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),local_30,&local_28);
        if (local_38 == -1) {
          if (*(char *)(param_1 + 0xa0) == '\x01') {
            local_28 = param_2;
            local_18 = FUN_143aa1240(param_1,&local_28,&local_20,&local_38,param_4);
            cVar1 = FUN_143a8b110(*param_4);
            if (cVar1 == '\0') {
              *param_4 = 2;
            }
            else {
              param_3 = FUN_143aa1b90(local_18,local_38,local_28,0xffffffff,local_20,param_1,0,
                                      param_3,param_4);
            }
          }
          else {
            *param_4 = 2;
          }
        }
        else {
          param_3 = FUN_143aa1b90(param_1 + 0x28,local_38,local_28,0xffffffff,
                                  *(undefined8 *)(param_1 + 8),param_1,0,param_3,param_4);
        }
      }
      else {
        *param_4 = 0x11;
      }
    }
  }
  return param_3;
}



// FUNCTION 143aa3a20 FUN_143aa3a20 body=3091 status=ok
// SIG undefined FUN_143aa3a20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143aa445d) */
/* WARNING: Removing unreachable block (ram,0x000143aa3efa) */
/* WARNING: Removing unreachable block (ram,0x000143aa41aa) */
/* WARNING: Removing unreachable block (ram,0x000143aa3b93) */

undefined8
FUN_143aa3a20(char *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,char *param_5,
             undefined8 param_6,undefined1 *param_7,char param_8,int *param_9)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *_Source;
  size_t sVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStack_1e38 [32];
  int *local_1e18;
  int local_1e08;
  int local_1e04;
  longlong local_1e00;
  int local_1df8;
  int local_1df4;
  int local_1df0;
  int local_1dec [3];
  undefined8 local_1de0;
  undefined8 local_1dd8;
  undefined8 local_1dd0;
  undefined8 local_1dc8;
  undefined8 local_1dc0;
  ulonglong local_1db8;
  ulonglong local_1db0;
  ulonglong local_1da8;
  undefined1 local_1d98 [192];
  undefined1 local_1cd8 [192];
  char local_1c18 [1024];
  char local_1818;
  undefined1 local_1817 [1023];
  char local_1418 [1024];
  char local_1018;
  undefined1 local_1017 [1023];
  char local_c18;
  undefined1 local_c17 [1023];
  char local_818;
  undefined1 local_817 [1023];
  char local_418;
  undefined1 local_417 [1023];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143aa3a3e;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e38;
  local_1018 = '\0';
  puVar8 = local_1017;
  for (lVar7 = 0x3ff; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_c18 = '\0';
  puVar8 = local_c17;
  for (lVar7 = 0x3ff; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_418 = '\0';
  puVar8 = local_417;
  for (lVar7 = 0x3ff; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_818 = '\0';
  puVar8 = local_817;
  for (lVar7 = 0x3ff; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_1818 = '\0';
  puVar8 = local_1817;
  for (lVar7 = 0x3ff; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_1e00 = 0;
  local_1e08 = 0;
  local_1e04 = 0;
  cVar1 = FUN_143a8b0e0(*param_9);
  if (cVar1 == '\0') {
    local_1e18 = &local_1e08;
    FUN_143a96b00(param_6,param_5,&local_1018,0x3ff);
    iVar3 = _guard_xfg_dispatch_icall_nop(&local_1018,"default");
    if (iVar3 == 0) {
      local_1dd8 = 0;
      local_1018 = '\0';
    }
    FUN_143a96830(param_6,&local_818,0x3ff,&local_1e08);
    FUN_143aa5540(local_1d98);
    FUN_143aa5540(local_1cd8);
    _guard_xfg_dispatch_icall_nop(local_1418,&local_818);
    _guard_xfg_dispatch_icall_nop(local_1c18,&local_818);
    if (param_7 != (undefined1 *)0x0) {
      local_1dc8 = FUN_143aa5570(param_3,&local_1e08);
      *param_7 = 1;
      cVar1 = FUN_143a8b110(local_1e08);
      if (cVar1 != '\0') {
        uVar2 = FUN_143aa2860(local_1dc8,local_1418,&local_1e08);
        *param_7 = uVar2;
      }
      FUN_143abddd0(local_1dc8);
    }
    cVar1 = FUN_143a8b0e0(local_1e08);
    if (cVar1 == '\0') {
      do {
        local_1e08 = 0;
        local_1e00 = FUN_143aa5b10(param_3,local_1418,&local_1e08);
        if (((local_1e08 == -0x80) || (local_1e08 == -0x7f)) && (param_7 != (undefined1 *)0x0)) {
          *param_7 = 0;
        }
        param_7 = (undefined1 *)0x0;
        cVar1 = FUN_143a8b0e0(local_1e08);
        if (cVar1 == '\0') {
          if ((local_1e08 == 0) &&
             (FUN_143aa37c0(local_1e00,param_4,local_1d98,&local_1e08), local_1e08 == 0)) {
            local_1dd0 = FUN_143aa5130(local_1d98,"default",&local_1df4,&local_1e08);
            cVar1 = FUN_143a8b110(local_1e08);
            if ((cVar1 != '\0') && (local_1df4 != 0)) {
              uVar4 = FreeLib(local_1dd0);
              FUN_143ab5770(local_1dd0,&local_c18,uVar4);
              _guard_xfg_dispatch_icall_nop(&local_418,local_1418);
              if (local_1018 == '\0') {
                _guard_xfg_dispatch_icall_nop(&local_1018,&local_c18);
              }
            }
          }
        }
        else {
          *param_9 = local_1e08;
        }
        local_1e08 = 0;
        if (local_1e00 != 0) {
          _Source = (char *)FUN_143aa4780(local_1e00,1,&local_1e08);
          _guard_xfg_dispatch_icall_nop(local_1c18,_Source);
        }
        FUN_143a972c0(local_1c18,local_1418,0x400,&local_1e08);
        FUN_143aa2ef0(local_1e00);
      } while (((local_c18 == '\0') && (local_1c18[0] != '\0')) &&
              ((iVar3 = _guard_xfg_dispatch_icall_nop(local_1c18,"root"), iVar3 != 0 &&
               (cVar1 = FUN_143a8b110(*param_9), cVar1 != '\0'))));
      _guard_xfg_dispatch_icall_nop(local_1418,&local_818);
      _guard_xfg_dispatch_icall_nop(local_1c18,&local_818);
      do {
        local_1e08 = 0;
        local_1e00 = FUN_143aa5b10(param_3,local_1418,&local_1e08);
        cVar1 = FUN_143a8b0e0(local_1e08);
        if (cVar1 == '\0') {
          if (((local_1e08 == 0) &&
              (FUN_143aa37c0(local_1e00,param_4,local_1d98,&local_1e08), local_1e08 == 0)) &&
             (FUN_143aa37c0(local_1d98,&local_1018,local_1cd8,&local_1e08), local_1e08 == 0)) {
            _guard_xfg_dispatch_icall_nop(&local_1818,local_1418);
            if (local_1818 == '\0') {
              _guard_xfg_dispatch_icall_nop(&local_1818,"root");
            }
            local_1db8 = _guard_xfg_dispatch_icall_nop(&local_418);
            sVar5 = _guard_xfg_dispatch_icall_nop(&local_1818);
            if (sVar5 < local_1db8) {
              local_1dc0 = FUN_143aa5130(local_1d98,"default",local_1dec,&local_1e08);
              cVar1 = FUN_143a8b110(local_1e08);
              if ((cVar1 != '\0') && (local_1dec[0] != 0)) {
                uVar4 = FreeLib(local_1dc0);
                FUN_143ab5770(local_1dc0,&local_c18,uVar4);
                _guard_xfg_dispatch_icall_nop(&local_418,&local_1818);
              }
            }
          }
        }
        else {
          *param_9 = local_1e08;
        }
        local_1e08 = 0;
        _guard_xfg_dispatch_icall_nop(local_1c18,local_1418);
        FUN_143a972c0(local_1c18,local_1418,0x3ff,&local_1e08);
        FUN_143aa2ef0(local_1e00);
      } while (((local_1818 == '\0') && (local_1c18[0] != '\0')) &&
              (cVar1 = FUN_143a8b110(*param_9), cVar1 != '\0'));
      if ((local_1818 == '\0') &&
         (iVar3 = _guard_xfg_dispatch_icall_nop(&local_1018,&local_c18), iVar3 != 0)) {
        _guard_xfg_dispatch_icall_nop(&local_1018,&local_c18);
        _guard_xfg_dispatch_icall_nop(local_1418,&local_818);
        _guard_xfg_dispatch_icall_nop(local_1c18,&local_818);
        do {
          local_1e08 = 0;
          local_1e00 = FUN_143aa5b10(param_3,local_1418,&local_1e08);
          cVar1 = FUN_143a8b0e0(local_1e08);
          if (cVar1 == '\0') {
            if (((local_1e08 == 0) &&
                (FUN_143aa37c0(local_1e00,param_4,local_1d98,&local_1e08), local_1e08 == 0)) &&
               (FUN_143aa37c0(local_1d98,&local_1018,local_1cd8,&local_1e08), local_1e08 == 0)) {
              _guard_xfg_dispatch_icall_nop(&local_1818,local_1418);
              if (local_1818 == '\0') {
                _guard_xfg_dispatch_icall_nop(&local_1818,"root");
              }
              local_1db0 = _guard_xfg_dispatch_icall_nop(&local_418);
              sVar5 = _guard_xfg_dispatch_icall_nop(&local_1818);
              if (sVar5 < local_1db0) {
                local_1de0 = FUN_143aa5130(local_1d98,"default",&local_1df0,&local_1e08);
                cVar1 = FUN_143a8b110(local_1e08);
                if ((cVar1 != '\0') && (local_1df0 != 0)) {
                  uVar4 = FreeLib(local_1de0);
                  FUN_143ab5770(local_1de0,&local_c18,uVar4);
                  _guard_xfg_dispatch_icall_nop(&local_418,&local_1818);
                }
              }
            }
          }
          else {
            *param_9 = local_1e08;
          }
          local_1e08 = 0;
          _guard_xfg_dispatch_icall_nop(local_1c18,local_1418);
          FUN_143a972c0(local_1c18,local_1418,0x3ff,&local_1e08);
          FUN_143aa2ef0(local_1e00);
        } while (((local_1818 == '\0') && (local_1c18[0] != '\0')) &&
                (cVar1 = FUN_143a8b110(*param_9), cVar1 != '\0'));
      }
      cVar1 = FUN_143a8b110(*param_9);
      if (cVar1 != '\0') {
        if (local_1818 == '\0') {
          *param_9 = 2;
        }
        else if (param_8 != '\0') {
          local_1da8 = _guard_xfg_dispatch_icall_nop(&local_418);
          sVar5 = _guard_xfg_dispatch_icall_nop(&local_1818);
          if ((local_1da8 <= sVar5) &&
             (iVar3 = _guard_xfg_dispatch_icall_nop(&local_1018,&local_c18), iVar3 == 0)) {
            local_1dec[1] = 0;
            local_1dec[2] = 0;
            local_1018 = '\0';
          }
        }
        _guard_xfg_dispatch_icall_nop(local_1c18,&local_1818);
        if (local_1018 == '\0') {
          if (param_8 == '\0') {
            _guard_xfg_dispatch_icall_nop(local_1c18,"@");
            _guard_xfg_dispatch_icall_nop(local_1c18,param_5);
            _guard_xfg_dispatch_icall_nop(local_1c18,"=");
            _guard_xfg_dispatch_icall_nop(local_1c18,&local_c18);
          }
        }
        else {
          _guard_xfg_dispatch_icall_nop(local_1c18,"@");
          _guard_xfg_dispatch_icall_nop(local_1c18,param_5);
          _guard_xfg_dispatch_icall_nop(local_1c18,"=");
          _guard_xfg_dispatch_icall_nop(local_1c18,&local_1018);
        }
      }
      FUN_143aa2ef0(local_1d98);
      FUN_143aa2ef0(local_1cd8);
      sVar5 = _guard_xfg_dispatch_icall_nop(local_1c18);
      local_1e04 = (int)sVar5;
      cVar1 = FUN_143a8b110(*param_9);
      if (cVar1 == '\0') {
        local_1e04 = 0;
        *param_1 = '\0';
      }
      else {
        local_1df8 = FUN_143ac1240(local_1e04,param_2);
        if (0 < local_1df8) {
          strncpy(param_1,local_1c18,(longlong)local_1df8);
        }
        if (local_1e04 == 0) {
          *param_9 = 2;
        }
      }
      uVar6 = FUN_143ab4930(param_1,param_2,local_1e04,param_9);
    }
    else {
      *param_9 = local_1e08;
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 143aa4640 FUN_143aa4640 body=140 status=ok
// SIG undefined FUN_143aa4640(void)

longlong FUN_143aa4640(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  
  if ((param_3 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_3), cVar1 != '\0')) {
    lVar2 = 0;
  }
  else if (param_1 == 0) {
    *param_3 = 1;
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_143ad0d60(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),param_2);
    if (lVar2 == 0) {
      *param_3 = 0x11;
    }
  }
  return lVar2;
}



// FUNCTION 143aa46d0 FUN_143aa46d0 body=133 status=ok
// SIG undefined FUN_143aa46d0(void)

int FUN_143aa46d0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  if ((param_2 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_2), cVar1 != '\0')) {
    return -1;
  }
  if (param_1 == 0) {
    *param_2 = 1;
    return -1;
  }
  if (*(uint *)(param_1 + 0x9c) >> 0x1c != 7) {
    *param_2 = 0x11;
    return -1;
  }
  return (*(int *)(param_1 + 0x9c) << 4) >> 4;
}



// FUNCTION 143aa4760 FUN_143aa4760 body=26 status=ok
// SIG undefined FUN_143aa4760(void)

undefined8 FUN_143aa4760(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}



// FUNCTION 143aa4780 FUN_143aa4780 body=153 status=ok
// SIG undefined FUN_143aa4780(void)

undefined8 FUN_143aa4780(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  
  if ((param_3 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_3), cVar1 != '\0')) {
    return 0;
  }
  if (param_1 == 0) {
    *param_3 = 1;
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      return **(undefined8 **)(param_1 + 0x18);
    }
    if (param_2 != 2) {
      *param_3 = 1;
      return 0;
    }
    return 0;
  }
  return **(undefined8 **)(param_1 + 8);
}



// FUNCTION 143aa4820 FUN_143aa4820 body=85 status=ok
// SIG undefined FUN_143aa4820(void)

undefined8 FUN_143aa4820(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  if ((param_2 != (undefined4 *)0x0) && (cVar1 = FUN_143a8b0e0(*param_2), cVar1 == '\0')) {
    if (param_1 == 0) {
      *param_2 = 1;
      return 0;
    }
    return **(undefined8 **)(param_1 + 8);
  }
  return 0;
}



// FUNCTION 143aa4880 FUN_143aa4880 body=602 status=ok
// SIG undefined FUN_143aa4880(void)

undefined8 FUN_143aa4880(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  if ((param_3 != (undefined4 *)0x0) && (cVar1 = FUN_143a8b0e0(*param_3), cVar1 == '\0')) {
    if (param_1 == 0) {
      *param_3 = 1;
    }
    else if (*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb0) + -1) {
      *param_3 = 8;
    }
    else {
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
      switch(*(uint *)(param_1 + 0x9c) >> 0x1c) {
      case 0:
      case 1:
      case 6:
      case 7:
      case 0xe:
        param_2 = FUN_143aa2f10(param_2,param_1,param_3);
        break;
      case 2:
      case 4:
      case 5:
        uVar2 = FUN_143ad1020(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),
                              *(undefined4 *)(param_1 + 0xac),local_10);
        param_2 = FUN_143aa1b90(param_1 + 0x28,uVar2,local_10[0],*(undefined4 *)(param_1 + 0xac),
                                *(undefined8 *)(param_1 + 8),param_1,0,param_2,param_3);
        break;
      default:
        break;
      case 8:
      case 9:
        uVar2 = FUN_143ad0bf0(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),
                              *(undefined4 *)(param_1 + 0xac));
        param_2 = FUN_143aa1b90(param_1 + 0x28,uVar2,local_10[0],*(undefined4 *)(param_1 + 0xac),
                                *(undefined8 *)(param_1 + 8),param_1,0,param_2,param_3);
      }
    }
  }
  return param_2;
}



// FUNCTION 143aa4b20 FUN_143aa4b20 body=541 status=ok
// SIG undefined FUN_143aa4b20(void)

undefined8 FUN_143aa4b20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((param_4 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_4), cVar1 != '\0')) {
    uVar3 = 0;
  }
  else if (param_1 == 0) {
    *param_4 = 1;
    uVar3 = 0;
  }
  else if (*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb0) + -1) {
    *param_4 = 8;
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    switch(*(uint *)(param_1 + 0x9c) >> 0x1c) {
    case 0:
    case 6:
      uVar3 = FUN_143ad0e70(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),param_2);
      break;
    case 1:
    case 7:
    case 0xe:
      *param_4 = 0x11;
    default:
      uVar3 = 0;
      break;
    case 2:
    case 4:
    case 5:
      uVar2 = FUN_143ad1020(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),
                            *(undefined4 *)(param_1 + 0xac),param_3);
      uVar3 = FUN_143aa2da0(param_1,uVar2,*(undefined4 *)(param_1 + 0xac),param_2,param_4);
      break;
    case 3:
      uVar3 = FUN_143aa2da0(param_1,*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xac),
                            param_2,param_4);
      break;
    case 8:
    case 9:
      uVar2 = FUN_143ad0bf0(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),
                            *(undefined4 *)(param_1 + 0xac));
      uVar3 = FUN_143aa2da0(param_1,uVar2,*(undefined4 *)(param_1 + 0xac),param_2,param_4);
    }
  }
  return uVar3;
}



// FUNCTION 143aa4d80 FUN_143aa4d80 body=29 status=ok
// SIG undefined FUN_143aa4d80(void)

undefined4 FUN_143aa4d80(longlong param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xb0);
  }
  return uVar1;
}



// FUNCTION 143aa4da0 FUN_143aa4da0 body=502 status=ok
// SIG undefined FUN_143aa4da0(void)

undefined8 FUN_143aa4da0(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  if ((param_4 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_4), cVar1 != '\0')) {
    return 0;
  }
  if (param_1 == 0) {
    *param_4 = 1;
    return 0;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0xb0) <= param_2)) {
    *param_4 = 2;
    goto LAB_143aa4f8f;
  }
  switch(*(uint *)(param_1 + 0x9c) >> 0x1c) {
  case 0:
  case 6:
    uVar3 = FUN_143ad0e70(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),param_3);
    break;
  case 1:
  case 7:
  case 0xe:
    *param_4 = 0x11;
    goto LAB_143aa4f8f;
  case 2:
  case 4:
  case 5:
    uVar2 = FUN_143ad1020(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),param_2,local_10);
    uVar3 = FUN_143aa2da0(param_1,uVar2,param_2,param_3,param_4);
    break;
  case 3:
    uVar3 = FUN_143aa2da0(param_1,*(undefined4 *)(param_1 + 0x9c),param_2,param_3,param_4);
    break;
  case 8:
  case 9:
    uVar2 = FUN_143ad0bf0(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),param_2);
    uVar3 = FUN_143aa2da0(param_1,uVar2,param_2,param_3,param_4);
    break;
  default:
    *param_4 = 5;
LAB_143aa4f8f:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143aa4fe0 FUN_143aa4fe0 body=332 status=ok
// SIG undefined FUN_143aa4fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

short * FUN_143aa4fe0(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_108 [32];
  int local_e8 [2];
  short *local_e0;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e0 = (short *)0x0;
  FUN_143aa5540(local_d8);
  FUN_143aa3350(param_1,param_2,local_d8,param_4);
  local_e0 = (short *)FUN_143aa5430(local_d8,local_e8,param_4);
  FUN_143aa2ef0(local_d8);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if ((((local_e8[0] == 3) && (*local_e0 == 0x2205)) && (local_e0[1] == 0x2205)) &&
       (local_e0[2] == 0x2205)) {
      local_e0 = (short *)0x0;
      local_e8[0] = 0;
      *param_4 = 2;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_e8[0];
    }
  }
  else {
    local_e0 = (short *)0x0;
  }
  return local_e0;
}



// FUNCTION 143aa5130 FUN_143aa5130 body=765 status=ok
// SIG undefined FUN_143aa5130(void)

undefined8 FUN_143aa5130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = 0xffffffff;
  local_18 = 0;
  if ((param_4 == (undefined4 *)0x0) ||
     (local_48 = param_2, cVar1 = FUN_143a8b0e0(*param_4), cVar1 != '\0')) {
    return 0;
  }
  if (param_1 == 0) {
    *param_4 = 1;
    return 0;
  }
  local_54 = *(uint *)(param_1 + 0x9c) >> 0x1c;
  if (((local_54 == 2) || (local_54 == 5)) || (local_54 == 4)) {
    local_40[0] = 0;
    local_58 = FUN_143ad1310(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),local_40,&local_48);
    if (local_58 != 0xffffffff) {
      local_4c = local_58 >> 0x1c;
      if (local_4c != 0) {
        if (local_4c == 3) {
          local_30 = 0;
          local_38 = FUN_143aa37c0(param_1,param_2,0,param_4);
          local_30 = FUN_143aa5430(local_38,param_3,param_4);
          FUN_143aa2ef0(local_38);
          return local_30;
        }
        if (local_4c != 6) {
          *param_4 = 0x11;
          return 0;
        }
      }
      uVar2 = FUN_143ad0e70(param_1 + 0x28,local_58,param_3);
      return uVar2;
    }
    if (*(char *)(param_1 + 0xa0) == '\x01') {
      local_48 = param_2;
      local_10 = FUN_143aa1240(param_1,&local_48,&local_18,&local_58,param_4);
      cVar1 = FUN_143a8b110(*param_4);
      if (cVar1 != '\0') {
        local_50 = local_58 >> 0x1c;
        if (local_50 != 0) {
          if (local_50 == 3) {
            local_28 = 0;
            local_20 = FUN_143aa37c0(param_1,param_2,0,param_4);
            local_28 = FUN_143aa5430(local_20,param_3,param_4);
            FUN_143aa2ef0(local_20);
            return local_28;
          }
          if (local_50 != 6) {
            *param_4 = 0x11;
            return 0;
          }
        }
        uVar2 = FUN_143ad0e70(local_10,local_58,param_3);
        return uVar2;
      }
      *param_4 = 2;
    }
    else {
      *param_4 = 2;
    }
  }
  else {
    *param_4 = 0x11;
  }
  return 0;
}



// FUNCTION 143aa5430 FUN_143aa5430 body=140 status=ok
// SIG undefined FUN_143aa5430(void)

longlong FUN_143aa5430(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  
  if ((param_3 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_3), cVar1 != '\0')) {
    lVar2 = 0;
  }
  else if (param_1 == 0) {
    *param_3 = 1;
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_143ad0e70(param_1 + 0x28,*(undefined4 *)(param_1 + 0x9c),param_2);
    if (lVar2 == 0) {
      *param_3 = 0x11;
    }
  }
  return lVar2;
}



// FUNCTION 143aa54c0 FUN_143aa54c0 body=45 status=ok
// SIG undefined FUN_143aa54c0(void)

undefined8 FUN_143aa54c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_143ad0e10(*(undefined4 *)(param_1 + 0x9c));
  }
  return uVar1;
}



// FUNCTION 143aa54f0 FUN_143aa54f0 body=66 status=ok
// SIG undefined FUN_143aa54f0(void)

ulonglong FUN_143aa54f0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_1 == 0) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar1 = (ulonglong)(*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xb0) + -1);
  }
  return uVar1;
}



// FUNCTION 143aa5540 FUN_143aa5540 body=44 status=ok
// SIG undefined FUN_143aa5540(void)

void FUN_143aa5540(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0xb8);
  FUN_143aa2e90(param_1,1);
  return;
}



// FUNCTION 143aa5570 FUN_143aa5570 body=360 status=ok
// SIG undefined FUN_143aa5570(void)

void * FUN_143aa5570(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *local_20;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    lVar2 = FUN_143aa7a40(0x170);
    local_20 = (void *)FUN_143aa7a40(0x38);
    if ((local_20 == (void *)0x0) || (lVar2 == 0)) {
      *param_2 = 7;
      FUN_143aa79f0(local_20);
      FUN_143aa79f0(lVar2);
      local_20 = (void *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(local_20,&DAT_145cf0368,0x38);
      FUN_143aa5540(lVar2);
      FUN_143aa5540(lVar2 + 0xb8);
      uVar3 = FUN_143aa56e0(param_1,"res_index",param_2);
      FUN_143aa37c0(uVar3,"InstalledLocales",lVar2,param_2);
      cVar1 = FUN_143a8b110(*param_2);
      if (cVar1 == '\0') {
        FUN_143aa2ef0(lVar2);
        FUN_143aa79f0(lVar2);
        FUN_143aa79f0(local_20);
        local_20 = (void *)0x0;
      }
      else {
        *(longlong *)((longlong)local_20 + 8) = lVar2;
      }
      FUN_143aa2ef0(uVar3);
    }
  }
  else {
    local_20 = (void *)0x0;
  }
  return local_20;
}



// FUNCTION 143aa56e0 FUN_143aa56e0 body=450 status=ok
// SIG undefined FUN_143aa56e0(void)

undefined8 * FUN_143aa56e0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_18 [2];
  undefined8 *local_10;
  
  local_18[0] = 0;
  if ((param_3 == (int *)0x0) || (cVar1 = FUN_143a8b0e0(*param_3), cVar1 != '\0')) {
    return (undefined8 *)0x0;
  }
  local_10 = (undefined8 *)FUN_143aa7a40(0xb8);
  if (local_10 == (undefined8 *)0x0) {
    *param_3 = 7;
    return (undefined8 *)0x0;
  }
  *(undefined1 *)(local_10 + 0x14) = 0;
  *(undefined1 *)((longlong)local_10 + 0xa1) = 1;
  FUN_143aa2e90(local_10,0);
  *(undefined4 *)((longlong)local_10 + 0xac) = 0xffffffff;
  uVar3 = FUN_143aa06f0(param_1,param_2,local_18);
  local_10[1] = uVar3;
  cVar1 = FUN_143a8b0e0(local_18[0]);
  if (cVar1 != '\0') {
    *param_3 = local_18[0];
    FUN_143aa79f0(local_10);
    return (undefined8 *)0x0;
  }
  if (local_18[0] != 0) {
    FUN_143aa0600(local_10[1]);
    FUN_143aa79f0(local_10);
    *param_3 = 2;
    return (undefined8 *)0x0;
  }
  *local_10 = 0;
  local_10[2] = 0;
  _guard_xfg_dispatch_icall_nop(local_10 + 5,(void *)(local_10[1] + 0x28),0x30);
  *(undefined4 *)((longlong)local_10 + 0x9c) = *(undefined4 *)(local_10 + 9);
  uVar2 = FUN_143ad07e0(local_10 + 5,*(undefined4 *)((longlong)local_10 + 0x9c));
  *(undefined4 *)(local_10 + 0x16) = uVar2;
  local_10[4] = 0;
  *(undefined4 *)(local_10 + 0x13) = 0;
  local_10[3] = local_10[1];
  return local_10;
}



// FUNCTION 143aa58b0 FUN_143aa58b0 body=604 status=ok
// SIG undefined FUN_143aa58b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143aa58b0(void *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c7;
  longlong local_c0;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (param_1 == (void *)0x0) {
    *param_4 = 1;
  }
  else {
    local_c7 = FUN_143aa2e40(param_1);
    FUN_143a96830(param_3,local_b8,0x9d,param_4);
    cVar1 = FUN_143a8b0e0(*param_4);
    if ((cVar1 == '\0') && (*param_4 != -0x7c)) {
      FUN_143aa2bf0(param_1);
      _guard_xfg_dispatch_icall_nop(param_1,0,0xb8);
      FUN_143aa2e90(param_1,local_c7);
      *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
      *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
      *(undefined4 *)((longlong)param_1 + 0xac) = 0xffffffff;
      uVar3 = FUN_143aa06f0(param_2,local_b8,param_4);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 == '\0') {
        for (local_c0 = *(longlong *)((longlong)param_1 + 8);
            (*(int *)(local_c0 + 0x60) != 0 && (*(longlong *)(local_c0 + 0x10) != 0));
            local_c0 = *(longlong *)(local_c0 + 0x10)) {
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)param_1 + 0x28),(void *)(local_c0 + 0x28),0x30);
        local_c8 = *(char *)((longlong)param_1 + 0x50) == '\0';
        *(undefined1 *)((longlong)param_1 + 0xa0) = local_c8;
        *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_1 + 0x48);
        uVar2 = FUN_143ad07e0((longlong)param_1 + 0x28,*(undefined4 *)((longlong)param_1 + 0x9c));
        *(undefined4 *)((longlong)param_1 + 0xb0) = uVar2;
        *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + 8);
      }
    }
    else {
      *param_4 = 1;
    }
  }
  return;
}



// FUNCTION 143aa5b10 FUN_143aa5b10 body=636 status=ok
// SIG undefined FUN_143aa5b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_143aa5b10(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  void *local_d0;
  longlong local_c8;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_c8 = 0;
  if ((param_3 != (int *)0x0) && (cVar1 = FUN_143a8b0e0(*param_3), cVar1 == '\0')) {
    FUN_143a96830(param_2,local_b8,0x9d,param_3);
    cVar1 = FUN_143a8b0e0(*param_3);
    if ((cVar1 == '\0') && (*param_3 != -0x7c)) {
      local_d0 = (void *)FUN_143aa7a40(0xb8);
      if (local_d0 == (void *)0x0) {
        *param_3 = 7;
      }
      else {
        _guard_xfg_dispatch_icall_nop(local_d0,0,0xb8);
        *(undefined1 *)((longlong)local_d0 + 0xa0) = 1;
        *(undefined1 *)((longlong)local_d0 + 0xa1) = 1;
        FUN_143aa2e90(local_d0,0);
        *(undefined4 *)((longlong)local_d0 + 0xac) = 0xffffffff;
        uVar3 = FUN_143aa06f0(param_1,local_b8,param_3);
        *(undefined8 *)((longlong)local_d0 + 8) = uVar3;
        cVar1 = FUN_143a8b0e0(*param_3);
        if (cVar1 == '\0') {
          *(undefined8 *)((longlong)local_d0 + 0x18) = *(undefined8 *)((longlong)local_d0 + 8);
          local_c8 = *(longlong *)((longlong)local_d0 + 8);
          do {
            if (*(int *)(local_c8 + 0x60) == 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)local_d0 + 0x28),(void *)(local_c8 + 0x28),0x30);
              local_d8 = *(char *)((longlong)local_d0 + 0x50) == '\0';
              *(undefined1 *)((longlong)local_d0 + 0xa0) = local_d8;
              *(undefined4 *)((longlong)local_d0 + 0x9c) =
                   *(undefined4 *)((longlong)local_d0 + 0x48);
              uVar2 = FUN_143ad07e0((longlong)local_d0 + 0x28,
                                    *(undefined4 *)((longlong)local_d0 + 0x9c));
              *(undefined4 *)((longlong)local_d0 + 0xb0) = uVar2;
              return local_d0;
            }
            local_c8 = *(longlong *)(local_c8 + 0x10);
          } while (local_c8 != 0);
          FUN_143aa0600(*(undefined8 *)((longlong)local_d0 + 8));
          FUN_143aa79f0(local_d0);
          *param_3 = 2;
        }
        else {
          FUN_143aa79f0(local_d0);
        }
      }
    }
    else {
      *param_3 = 1;
    }
  }
  return (void *)0x0;
}



// FUNCTION 143aa5d90 FUN_143aa5d90 body=31 status=ok
// SIG undefined FUN_143aa5d90(void)

void FUN_143aa5d90(longlong param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  }
  return;
}



// FUNCTION 143aa5db0 FUN_143aa5db0 body=57 status=ok
// SIG undefined FUN_143aa5db0(void)

undefined8 * FUN_143aa5db0(undefined8 *param_1)

{
  FUN_143ad1ac0(param_1);
  *param_1 = icu_53::UCharCharacterIterator::vftable;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 143aa5df0 FUN_143aa5df0 body=72 status=ok
// SIG undefined FUN_143aa5df0(void)

undefined8 * FUN_143aa5df0(undefined8 *param_1,longlong param_2)

{
  FUN_143ad19b0(param_1,param_2);
  *param_1 = icu_53::UCharCharacterIterator::vftable;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 143aa5e40 FUN_143aa5e40 body=129 status=ok
// SIG undefined FUN_143aa5e40(void)

undefined8 * FUN_143aa5e40(undefined8 *param_1,longlong param_2,int param_3)

{
  int local_18;
  int local_14;
  
  if (param_2 == 0) {
    local_14 = 0;
  }
  else {
    local_18 = param_3;
    if (param_3 < 0) {
      local_18 = FreeLib(param_2);
    }
    local_14 = local_18;
  }
  FUN_143ad1a30(param_1,local_14);
  *param_1 = icu_53::UCharCharacterIterator::vftable;
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 143aa5ed0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::UCharCharacterIterator::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143aa5f00 FUN_143aa5f00 body=209 status=ok
// SIG undefined FUN_143aa5f00(void)

undefined1 FUN_143aa5f00(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_28;
  
  if (param_1 == param_2) {
    local_28 = 1;
  }
  else {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143aa5fe0(uVar3,uVar2);
    if (cVar1 == '\0') {
      if ((((*(longlong *)(param_1 + 0x18) == *(longlong *)(param_2 + 0x18)) &&
           (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
          (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
         ((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10) &&
          (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))))) {
        local_28 = 1;
      }
      else {
        local_28 = 0;
      }
    }
    else {
      local_28 = 0;
    }
  }
  return local_28;
}



// FUNCTION 143aa5fe0 FUN_143aa5fe0 body=73 status=ok
// SIG undefined FUN_143aa5fe0(void)

bool FUN_143aa5fe0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = __std_type_info_compare(param_1 + 8,param_2 + 8);
  return iVar1 != 0;
}



// FUNCTION 143aa6030 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143aa6070 CreateInternalContext body=92 status=ok
// SIG undefined CreateInternalContext(void)

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::ThreadScheduler::CreateInternalContext(void) __ptr64
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::UMSThreadScheduler::CreateInternalContext(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

undefined8 CreateInternalContext(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x20);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143aa5df0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143aa60d0 FUN_143aa60d0 body=302 status=ok
// SIG undefined FUN_143aa60d0(void)

uint FUN_143aa60d0(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x10)) ||
     (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0xc))) {
    uVar2 = 0xffff;
  }
  else {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2);
    uVar2 = (uint)uVar1;
    if ((uVar2 & 0xfffff800) == 0xd800) {
      if ((uVar1 & 0x400) == 0) {
        if ((*(int *)(param_1 + 0xc) + 1 != *(int *)(param_1 + 0x14)) &&
           (uVar1 = *(ushort *)
                     (*(longlong *)(param_1 + 0x18) + (longlong)(*(int *)(param_1 + 0xc) + 1) * 2),
           (uVar1 & 0xfc00) == 0xdc00)) {
          uVar2 = uVar2 * 0x400 + -0x35fdc00 + (uint)uVar1;
        }
      }
      else if ((*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) &&
              (uVar1 = *(ushort *)
                        (*(longlong *)(param_1 + 0x18) +
                        (longlong)(*(int *)(param_1 + 0xc) + -1) * 2), (uVar1 & 0xfc00) == 0xd800))
      {
        uVar2 = (uint)uVar1 * 0x400 + -0x35fdc00 + uVar2;
      }
    }
  }
  return uVar2;
}



// FUNCTION 143aa6200 FUN_143aa6200 body=71 status=ok
// SIG undefined FUN_143aa6200(void)

undefined2 FUN_143aa6200(longlong param_1)

{
  undefined2 uVar1;
  
  if ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x10)) ||
     (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0xc))) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2);
  }
  return uVar1;
}



// FUNCTION 143aa6250 FUN_143aa6250 body=207 status=ok
// SIG undefined FUN_143aa6250(void)

uint FUN_143aa6250(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    uVar2 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2)
    ;
    iVar3 = *(int *)(param_1 + 0xc) + 1;
    if ((((uVar2 & 0xfffffc00) == 0xd800) && (iVar3 != *(int *)(param_1 + 0x14))) &&
       (uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 2),
       (uVar1 & 0xfc00) == 0xdc00)) {
      uVar2 = uVar2 * 0x400 + -0x35fdc00 + (uint)uVar1;
    }
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}



// FUNCTION 143aa6330 FUN_143aa6330 body=223 status=ok
// SIG undefined FUN_143aa6330(void)

uint FUN_143aa6330(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    uVar2 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2)
    ;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if ((((uVar2 & 0xfffffc00) == 0xd800) && (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x14)))
       && (uVar1 = *(ushort *)
                    (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2),
          (uVar1 & 0xfc00) == 0xdc00)) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      uVar2 = uVar2 * 0x400 + -0x35fdc00 + (uint)uVar1;
    }
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}



// FUNCTION 143aa6420 FUN_143aa6420 body=69 status=ok
// SIG undefined FUN_143aa6420(void)

undefined2 FUN_143aa6420(longlong param_1)

{
  undefined2 uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2);
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}



// FUNCTION 143aa6470 FUN_143aa6470 body=103 status=ok
// SIG undefined FUN_143aa6470(void)

undefined2 FUN_143aa6470(longlong param_1)

{
  undefined2 uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}



// FUNCTION 143aa64e0 FUN_143aa64e0 body=19 status=ok
// SIG undefined FUN_143aa64e0(void)

void FUN_143aa64e0(void)

{
  FUN_143aa6500();
  return;
}



// FUNCTION 143aa6500 FUN_143aa6500 body=8 status=ok
// SIG undefined FUN_143aa6500(void)

undefined * FUN_143aa6500(void)

{
  return &DAT_146bc5578;
}



// FUNCTION 143aa6510 FUN_143aa6510 body=134 status=ok
// SIG undefined FUN_143aa6510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143aa6510(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = FUN_143a8db50(local_40,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
  local_50 = local_58;
  FUN_143a8dcd0(param_2,local_58);
  FUN_143a8dc60(local_40);
  return;
}



// FUNCTION 143aa65a0 FUN_143aa65a0 body=52 status=ok
// SIG undefined FUN_143aa65a0(void)

bool FUN_143aa65a0(longlong param_1)

{
  return *(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14);
}



// FUNCTION 143aa65e0 FUN_143aa65e0 body=52 status=ok
// SIG undefined FUN_143aa65e0(void)

bool FUN_143aa65e0(longlong param_1)

{
  return *(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc);
}



// FUNCTION 143aa6620 FUN_143aa6620 body=60 status=ok
// SIG undefined FUN_143aa6620(void)

uint FUN_143aa6620(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_143ab5470(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
  return uVar1 ^ *(uint *)(param_1 + 0xc) ^ *(uint *)(param_1 + 0x10) ^ *(uint *)(param_1 + 0x14);
}



// FUNCTION 143aa6660 FUN_143aa6660 body=230 status=ok
// SIG undefined FUN_143aa6660(void)

uint FUN_143aa6660(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    iVar2 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar2;
    uVar3 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 2);
    if ((((uVar3 & 0xfffffc00) == 0xdc00) && (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)))
       && (uVar1 = *(ushort *)
                    (*(longlong *)(param_1 + 0x18) + (longlong)(*(int *)(param_1 + 0xc) + -1) * 2),
          (uVar1 & 0xfc00) == 0xd800)) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      uVar3 = (uint)uVar1 * 0x400 + -0x35fdc00 + uVar3;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  return uVar3;
}



// FUNCTION 143aa6750 FUN_143aa6750 body=96 status=ok
// SIG undefined FUN_143aa6750(void)

undefined2 FUN_143aa6750(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    iVar2 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar2;
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 2);
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}



// FUNCTION 143aa67c0 FUN_143aa67c0 body=975 status=ok
// SIG undefined FUN_143aa67c0(void)

undefined4 FUN_143aa67c0(longlong param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    local_28 = param_2;
    if (0 < param_2) {
      while ((0 < local_28 &&
             ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14) ||
              ((*(int *)(param_1 + 0x14) < 0 &&
               (*(short *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2) !=
                0))))))) {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        if (((uVar1 & 0xfc00) == 0xd800) &&
           ((*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x14) &&
            ((*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2) &
             0xfc00) == 0xdc00)))) {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        }
        local_28 = local_28 + -1;
      }
    }
  }
  else if (param_3 == 1) {
    local_2c = param_2;
    if (param_2 < 1) {
      local_30 = -param_2;
      while ((0 < local_30 && (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)))) {
        iVar2 = *(int *)(param_1 + 0xc) + -1;
        *(int *)(param_1 + 0xc) = iVar2;
        if (((*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 2) & 0xfc00) == 0xdc00)
           && ((*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc) &&
               ((*(ushort *)
                  (*(longlong *)(param_1 + 0x18) + (longlong)(*(int *)(param_1 + 0xc) + -1) * 2) &
                0xfc00) == 0xd800)))) {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        }
        local_30 = local_30 + -1;
      }
    }
    else {
      while ((0 < local_2c &&
             ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14) ||
              ((*(int *)(param_1 + 0x14) < 0 &&
               (*(short *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2) !=
                0))))))) {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        if (((uVar1 & 0xfc00) == 0xd800) &&
           ((*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x14) &&
            ((*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2) &
             0xfc00) == 0xdc00)))) {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        }
        local_2c = local_2c + -1;
      }
    }
  }
  else if ((param_3 == 2) &&
          (*(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14), param_2 < 0)) {
    local_38 = -param_2;
    while ((0 < local_38 && (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)))) {
      iVar2 = *(int *)(param_1 + 0xc) + -1;
      *(int *)(param_1 + 0xc) = iVar2;
      if (((*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 2) & 0xfc00) == 0xdc00) &&
         ((*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc) &&
          ((*(ushort *)
             (*(longlong *)(param_1 + 0x18) + (longlong)(*(int *)(param_1 + 0xc) + -1) * 2) & 0xfc00
           ) == 0xd800)))) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
      local_38 = local_38 + -1;
    }
  }
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 143aa6b90 FUN_143aa6b90 body=192 status=ok
// SIG undefined FUN_143aa6b90(void)

undefined4 FUN_143aa6b90(longlong param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x10) + param_2;
  }
  else if (param_3 == 1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  }
  else if (param_3 == 2) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x14) + param_2;
  }
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  }
  else if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  }
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 143aa6c50 FUN_143aa6c50 body=358 status=ok
// SIG undefined FUN_143aa6c50(void)

uint FUN_143aa6c50(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if ((((uVar1 & 0xfc00) == 0xd800) && (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x14))) &&
       ((*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2) & 0xfc00
        ) == 0xdc00)) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
      uVar2 = (uint)*(ushort *)
                     (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2);
      iVar3 = *(int *)(param_1 + 0xc) + 1;
      if ((uVar2 & 0xfffffc00) != 0xd800) {
        return uVar2;
      }
      if (iVar3 == *(int *)(param_1 + 0x14)) {
        return uVar2;
      }
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 2);
      if ((uVar1 & 0xfc00) != 0xdc00) {
        return uVar2;
      }
      return uVar2 * 0x400 + -0x35fdc00 + (uint)uVar1;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  return 0xffff;
}



// FUNCTION 143aa6dc0 FUN_143aa6dc0 body=207 status=ok
// SIG undefined FUN_143aa6dc0(void)

uint FUN_143aa6dc0(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    uVar2 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2)
    ;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if ((((uVar2 & 0xfffffc00) == 0xd800) && (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x14)))
       && (uVar1 = *(ushort *)
                    (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2),
          (uVar1 & 0xfc00) == 0xdc00)) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      uVar2 = uVar2 * 0x400 + -0x35fdc00 + (uint)uVar1;
    }
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}



// FUNCTION 143aa6ea0 FUN_143aa6ea0 body=98 status=ok
// SIG undefined FUN_143aa6ea0(void)

undefined2 FUN_143aa6ea0(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) + 1 < *(int *)(param_1 + 0x14)) {
    iVar2 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = iVar2;
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 2);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
    uVar1 = 0xffff;
  }
  return uVar1;
}



// FUNCTION 143aa6f10 FUN_143aa6f10 body=87 status=ok
// SIG undefined FUN_143aa6f10(void)

undefined2 FUN_143aa6f10(longlong param_1)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}



// FUNCTION 143aa6f70 FUN_143aa6f70 body=214 status=ok
// SIG undefined FUN_143aa6f70(void)

uint FUN_143aa6f70(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    iVar2 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar2;
    uVar3 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 2);
    if ((((uVar3 & 0xfffffc00) == 0xdc00) && (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)))
       && (uVar1 = *(ushort *)
                    (*(longlong *)(param_1 + 0x18) + (longlong)(*(int *)(param_1 + 0xc) + -1) * 2),
          (uVar1 & 0xfc00) == 0xd800)) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      uVar3 = (uint)uVar1 * 0x400 + -0x35fdc00 + uVar3;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  return uVar3;
}



// FUNCTION 143aa7050 FUN_143aa7050 body=80 status=ok
// SIG undefined FUN_143aa7050(void)

undefined2 FUN_143aa7050(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    iVar2 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar2;
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 2);
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}



// FUNCTION 143aa70b0 FUN_143aa70b0 body=352 status=ok
// SIG undefined FUN_143aa70b0(void)

uint FUN_143aa70b0(longlong param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int local_res10;
  
  if (param_2 < *(int *)(param_1 + 0x10)) {
    local_res10 = *(int *)(param_1 + 0x10);
  }
  else {
    local_res10 = param_2;
    if (*(int *)(param_1 + 0x14) < param_2) {
      local_res10 = *(int *)(param_1 + 0x14);
    }
  }
  if (local_res10 < *(int *)(param_1 + 0x14)) {
    if ((((*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)local_res10 * 2) & 0xfc00) ==
          0xdc00) && (*(int *)(param_1 + 0x10) < local_res10)) &&
       ((*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)(local_res10 + -1) * 2) & 0xfc00) ==
        0xd800)) {
      local_res10 = local_res10 + -1;
    }
    *(int *)(param_1 + 0xc) = local_res10;
    uVar2 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)local_res10 * 2);
    if ((((uVar2 & 0xfffffc00) == 0xd800) && (local_res10 + 1 != *(int *)(param_1 + 0x14))) &&
       (uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)(local_res10 + 1) * 2),
       (uVar1 & 0xfc00) == 0xdc00)) {
      uVar2 = uVar2 * 0x400 + -0x35fdc00 + (uint)uVar1;
    }
  }
  else {
    *(int *)(param_1 + 0xc) = local_res10;
    uVar2 = 0xffff;
  }
  return uVar2;
}



// FUNCTION 143aa7220 FUN_143aa7220 body=133 status=ok
// SIG undefined FUN_143aa7220(void)

undefined2 FUN_143aa7220(longlong param_1,int param_2)

{
  undefined2 uVar1;
  
  if (param_2 < *(int *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  }
  else if (*(int *)(param_1 + 0x14) < param_2) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  }
  else {
    *(int *)(param_1 + 0xc) = param_2;
  }
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0xc) * 2);
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}



// FUNCTION 143aa72b0 FUN_143aa72b0 body=101 status=ok
// SIG undefined FUN_143aa72b0(void)

void FUN_143aa72b0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 local_res18;
  
  *(longlong *)(param_1 + 0x18) = param_2;
  if ((param_2 == 0) || (local_res18 = param_3, param_3 < 0)) {
    local_res18 = 0;
  }
  *(int *)(param_1 + 8) = local_res18;
  *(int *)(param_1 + 0x14) = local_res18;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 143aa7320 FUN_143aa7320 body=117 status=ok
// SIG undefined FUN_143aa7320(void)

undefined8 *
FUN_143aa7320(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_143aa5df0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::StringCharacterIterator::vftable;
  FUN_143a8d3a0(param_1 + 4,param_2 + 0x20);
  uVar1 = FUN_143a8fe10(param_1 + 4);
  param_1[3] = uVar1;
  return param_1;
}



// FUNCTION 143aa73a0 FUN_143aa73a0 body=142 status=ok
// SIG undefined FUN_143aa73a0(void)

undefined8 *
FUN_143aa73a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar1 = FUN_143a904f0(param_2);
  uVar2 = FUN_143a8fe10(param_2);
  FUN_143aa5e40(param_1,uVar2,uVar1,param_4,uVar1,uVar3);
  *param_1 = icu_53::StringCharacterIterator::vftable;
  FUN_143a8d3a0(param_1 + 4,param_2);
  uVar2 = FUN_143a8fe10(param_1 + 4);
  param_1[3] = uVar2;
  return param_1;
}



// FUNCTION 143aa7430 FUN_143aa7430 body=56 status=ok
// SIG undefined FUN_143aa7430(void)

void FUN_143aa7430(undefined8 *param_1)

{
  *param_1 = icu_53::StringCharacterIterator::vftable;
  FUN_143a8dc60(param_1 + 4);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143aa7470 FUN_143aa7470 body=204 status=ok
// SIG undefined FUN_143aa7470(void)

undefined1 FUN_143aa7470(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_28;
  
  if (param_1 == param_2) {
    local_28 = 1;
  }
  else {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143aa5fe0(uVar3,uVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_143a8dd00(param_1 + 0x20,param_2 + 0x20);
      if ((((cVar1 == '\0') || (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc))) ||
          (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) ||
         (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14))) {
        local_28 = 0;
      }
      else {
        local_28 = 1;
      }
    }
    else {
      local_28 = 0;
    }
  }
  return local_28;
}



// FUNCTION 143aa7540 FUN_143aa7540 body=54 status=ok
// SIG undefined FUN_143aa7540(void)

undefined8 FUN_143aa7540(undefined8 param_1,uint param_2)

{
  FUN_143aa7430(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143aa7580 CreateInternalContext body=92 status=ok
// SIG undefined CreateInternalContext(void)

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::ThreadScheduler::CreateInternalContext(void) __ptr64
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::UMSThreadScheduler::CreateInternalContext(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

undefined8 CreateInternalContext(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x48);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143aa7320(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143aa75e0 FUN_143aa75e0 body=19 status=ok
// SIG undefined FUN_143aa75e0(void)

void FUN_143aa75e0(void)

{
  FUN_143aa7600();
  return;
}



// FUNCTION 143aa7600 FUN_143aa7600 body=8 status=ok
// SIG undefined FUN_143aa7600(void)

undefined * FUN_143aa7600(void)

{
  return &DAT_146bc5579;
}



// FUNCTION 143aa7610 FUN_143aa7610 body=41 status=ok
// SIG undefined FUN_143aa7610(void)

void FUN_143aa7610(longlong param_1,undefined8 param_2)

{
  FUN_143a8dcd0(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 143aa7640 FUN_143aa7640 body=96 status=ok
// SIG undefined FUN_143aa7640(void)

void FUN_143aa7640(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_143a8dcd0(param_1 + 0x20,param_2);
  uVar1 = FUN_143a904f0(param_1 + 0x20);
  uVar2 = FUN_143a8fe10(param_1 + 0x20);
  FUN_143aa72b0(param_1,uVar2,uVar1);
  return;
}



// FUNCTION 143aa76a0 FUN_143aa76a0 body=51 status=ok
// SIG undefined FUN_143aa76a0(void)

void FUN_143aa76a0(undefined8 param_1)

{
  FUN_143ad2610(param_1);
  FUN_143ad3c60(param_1);
  FUN_143aa77b0(0x11,FUN_143aa76e0);
  return;
}



// FUNCTION 143aa76e0 FUN_143aa76e0 body=23 status=ok
// SIG undefined FUN_143aa76e0(void)

undefined1 FUN_143aa76e0(void)

{
  FUN_143a9a9f0(&DAT_146bc5580);
  return 1;
}



// FUNCTION 143aa7700 FUN_143aa7700 body=38 status=ok
// SIG undefined FUN_143aa7700(void)

void FUN_143aa7700(undefined8 param_1)

{
  FUN_143aa29a0(&DAT_146bc5580,FUN_143aa76a0,param_1);
  return;
}



// FUNCTION 143aa7730 FUN_143aa7730 body=38 status=ok
// SIG undefined FUN_143aa7730(void)

void FUN_143aa7730(void)

{
  FUN_143ab2410(0);
  FUN_143ab2470(0);
  FUN_143aa77e0();
  FUN_143aa78b0();
  FUN_143ad3ee0();
  return;
}



// FUNCTION 143aa7760 FUN_143aa7760 body=67 status=ok
// SIG undefined FUN_143aa7760(void)

void FUN_143aa7760(int param_1)

{
  if (*(longlong *)(&DAT_146bc5620 + (longlong)param_1 * 8) != 0) {
    (**(code **)(&DAT_146bc5620 + (longlong)param_1 * 8))();
    *(undefined8 *)(&DAT_146bc5620 + (longlong)param_1 * 8) = 0;
  }
  return;
}



// FUNCTION 143aa77b0 FUN_143aa77b0 body=45 status=ok
// SIG undefined FUN_143aa77b0(void)

void FUN_143aa77b0(int param_1,undefined8 param_2)

{
  if ((-1 < param_1) && (param_1 < 0x12)) {
    *(undefined8 *)(&DAT_146bc5590 + (longlong)param_1 * 8) = param_2;
  }
  return;
}



// FUNCTION 143aa77e0 FUN_143aa77e0 body=152 status=ok
// SIG undefined FUN_143aa77e0(void)

undefined8 FUN_143aa77e0(void)

{
  int iVar1;
  int local_14;
  
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    FUN_143aa7760(local_14);
  }
  for (iVar1 = 0; iVar1 < 0x12; iVar1 = iVar1 + 1) {
    if (*(longlong *)(&DAT_146bc5590 + (longlong)iVar1 * 8) != 0) {
      (**(code **)(&DAT_146bc5590 + (longlong)iVar1 * 8))();
      *(undefined8 *)(&DAT_146bc5590 + (longlong)iVar1 * 8) = 0;
    }
  }
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}



// FUNCTION 143aa7880 FUN_143aa7880 body=45 status=ok
// SIG undefined FUN_143aa7880(void)

void FUN_143aa7880(int param_1,undefined8 param_2)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    *(undefined8 *)(&DAT_146bc5620 + (longlong)param_1 * 8) = param_2;
  }
  return;
}



// FUNCTION 143aa78b0 FUN_143aa78b0 body=54 status=ok
// SIG undefined FUN_143aa78b0(void)

undefined1 FUN_143aa78b0(void)

{
  DAT_146bc5660 = 0;
  DAT_146bc5668 = 0;
  DAT_146bc5670 = 0;
  DAT_146bc5678 = 0;
  DAT_146bc5680 = 0;
  return 1;
}



// FUNCTION 143aa78f0 FUN_143aa78f0 body=8 status=ok
// SIG undefined FUN_143aa78f0(void)

undefined1 FUN_143aa78f0(void)

{
  return DAT_146bc5680;
}



// FUNCTION 143aa7900 FUN_143aa7900 body=142 status=ok
// SIG undefined FUN_143aa7900(void)

void FUN_143aa7900(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  int *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = DAT_146bc5660;
  lVar2 = DAT_146bc5668;
  lVar3 = DAT_146bc5670;
  lVar4 = DAT_146bc5678;
  if (*param_5 < 1) {
    if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
      *param_5 = 1;
      uVar1 = DAT_146bc5660;
      lVar2 = DAT_146bc5668;
      lVar3 = DAT_146bc5670;
      lVar4 = DAT_146bc5678;
    }
    else {
      uVar1 = param_1;
      lVar2 = param_2;
      lVar3 = param_3;
      lVar4 = param_4;
      if (DAT_146bc5680 != '\0') {
        *param_5 = 0x1b;
        uVar1 = DAT_146bc5660;
        lVar2 = DAT_146bc5668;
        lVar3 = DAT_146bc5670;
        lVar4 = DAT_146bc5678;
      }
    }
  }
  DAT_146bc5678 = lVar4;
  DAT_146bc5670 = lVar3;
  DAT_146bc5668 = lVar2;
  DAT_146bc5660 = uVar1;
  return;
}



// FUNCTION 143aa7990 FUN_143aa7990 body=89 status=ok
// SIG undefined FUN_143aa7990(void)

void * FUN_143aa7990(longlong param_1,longlong param_2)

{
  void *_Dst;
  
  _Dst = (void *)FUN_143aa7a40(param_2 * param_1);
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,param_2 * param_1);
  }
  return _Dst;
}



// FUNCTION 143aa79f0 FUN_143aa79f0 body=69 status=ok
// SIG undefined FUN_143aa79f0(void)

void FUN_143aa79f0(undefined **param_1)

{
  if (param_1 != &PTR_145cf06e8) {
    if (DAT_146bc5678 == (code *)0x0) {
      free(param_1);
    }
    else {
      (*DAT_146bc5678)(DAT_146bc5660,param_1);
    }
  }
  return;
}



// FUNCTION 143aa7a40 FUN_143aa7a40 body=79 status=ok
// SIG undefined FUN_143aa7a40(void)

undefined ** FUN_143aa7a40(size_t param_1)

{
  undefined **ppuVar1;
  
  if (param_1 == 0) {
    ppuVar1 = &PTR_145cf06e8;
  }
  else {
    DAT_146bc5680 = 1;
    if (DAT_146bc5668 == (code *)0x0) {
      ppuVar1 = malloc(param_1);
    }
    else {
      ppuVar1 = (undefined **)(*DAT_146bc5668)(DAT_146bc5660,param_1);
    }
  }
  return ppuVar1;
}



// FUNCTION 143aa7aa0 FUN_143aa7aa0 body=161 status=ok
// SIG undefined FUN_143aa7aa0(void)

undefined ** FUN_143aa7aa0(undefined **param_1,size_t param_2)

{
  undefined **ppuVar1;
  
  if (param_1 == &PTR_145cf06e8) {
    ppuVar1 = (undefined **)FUN_143aa7a40(param_2);
  }
  else if (param_2 == 0) {
    if (DAT_146bc5678 == (code *)0x0) {
      free(param_1);
    }
    else {
      (*DAT_146bc5678)(DAT_146bc5660,param_1);
    }
    ppuVar1 = &PTR_145cf06e8;
  }
  else {
    DAT_146bc5680 = 1;
    if (DAT_146bc5670 == (code *)0x0) {
      ppuVar1 = realloc(param_1,param_2);
    }
    else {
      ppuVar1 = (undefined **)(*DAT_146bc5670)(DAT_146bc5660,param_1,param_2);
    }
  }
  return ppuVar1;
}



// FUNCTION 143aa7b50 FUN_143aa7b50 body=196 status=ok
// SIG undefined FUN_143aa7b50(void)

void FUN_143aa7b50(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = DAT_146bc5688;
  lVar2 = DAT_146bc5690;
  lVar3 = DAT_146bc5698;
  if (*param_4 < 1) {
    if (((param_2 != 0) || (uVar1 = param_1, lVar2 = param_2, lVar3 = param_3, param_3 != 0)) &&
       ((param_2 == 0 || (uVar1 = param_1, lVar2 = param_2, lVar3 = param_3, param_3 == 0)))) {
      *param_4 = 1;
      uVar1 = DAT_146bc5688;
      lVar2 = DAT_146bc5690;
      lVar3 = DAT_146bc5698;
    }
  }
  DAT_146bc5698 = lVar3;
  DAT_146bc5690 = lVar2;
  DAT_146bc5688 = uVar1;
  return;
}



// FUNCTION 143aa7c20 FUN_143aa7c20 body=470 status=ok
// SIG undefined FUN_143aa7c20(void)

undefined1 FUN_143aa7c20(longlong param_1,LPCSTR param_2)

{
  undefined1 uVar1;
  BOOL BVar2;
  undefined1 *hFile;
  HANDLE hFileMappingObject;
  LPVOID pvVar3;
  LPSECURITY_ATTRIBUTES local_50;
  _SECURITY_ATTRIBUTES local_48;
  undefined1 local_30 [48];
  
  if (DAT_146bc5690 == (code *)0x0) {
    local_50 = (LPSECURITY_ATTRIBUTES)0x0;
    FUN_143ac55a0(param_1);
    hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x10000080,(HANDLE)0x0);
    if (hFile == &DAT_ffffffffffffffff) {
      uVar1 = 0;
    }
    else {
      BVar2 = InitializeSecurityDescriptor(local_30,1);
      if (BVar2 != 0) {
        BVar2 = SetSecurityDescriptorDacl(local_30,1,(PACL)0x0,0);
        if (BVar2 != 0) {
          _guard_xfg_dispatch_icall_nop(&local_48,0,0x18);
          local_48.nLength = 0x18;
          local_48.lpSecurityDescriptor = local_30;
          local_48.bInheritHandle = 0;
          local_50 = &local_48;
        }
      }
      hFileMappingObject = CreateFileMappingA(hFile,local_50,2,0,0,(LPCSTR)0x0);
      CloseHandle(hFile);
      if (hFileMappingObject == (HANDLE)0x0) {
        uVar1 = 0;
      }
      else {
        pvVar3 = MapViewOfFile(hFileMappingObject,4,0,0,0);
        *(LPVOID *)(param_1 + 8) = pvVar3;
        if (*(longlong *)(param_1 + 8) == 0) {
          CloseHandle(hFileMappingObject);
          uVar1 = 0;
        }
        else {
          *(HANDLE *)(param_1 + 0x28) = hFileMappingObject;
          uVar1 = 1;
        }
      }
    }
  }
  else {
    FUN_143ac55a0(param_1);
    uVar1 = (*DAT_146bc5690)(DAT_146bc5688,param_1 + 0x28,param_1 + 8,param_2);
  }
  return uVar1;
}



// FUNCTION 143aa7e00 FUN_143aa7e00 body=159 status=ok
// SIG undefined FUN_143aa7e00(void)

void FUN_143aa7e00(longlong param_1)

{
  if (DAT_146bc5698 == (code *)0x0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
      UnmapViewOfFile(*(LPCVOID *)(param_1 + 8));
      CloseHandle(*(HANDLE *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
  }
  else {
    (*DAT_146bc5698)(DAT_146bc5688,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 143aa7ea0 FUN_143aa7ea0 body=297 status=ok
// SIG undefined FUN_143aa7ea0(void)

void FUN_143aa7ea0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)(param_1 + 0x198);
  if (*piVar1 == 0) {
    uVar2 = FUN_143aa7a40(0x50);
    *(undefined8 *)(param_1 + 0x1a8) = uVar2;
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      *(undefined4 *)(param_1 + 0x1a4) = 7;
      return;
    }
    *piVar1 = 10;
  }
  if (*piVar1 <= *(int *)(param_1 + 0x19c)) {
    uVar2 = *(undefined8 *)(param_1 + 0x1a8);
    uVar3 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x1a8),(longlong)(*piVar1 << 1) << 3);
    *(undefined8 *)(param_1 + 0x1a8) = uVar3;
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      *(undefined8 *)(param_1 + 0x1a8) = uVar2;
      *(undefined4 *)(param_1 + 0x1a4) = 7;
      return;
    }
    *piVar1 = *piVar1 << 1;
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)*(int *)(param_1 + 0x19c) * 8) =
       CONCAT44(param_3,param_2);
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  return;
}



// FUNCTION 143aa7fd0 FUN_143aa7fd0 body=603 status=ok
// SIG undefined FUN_143aa7fd0(void)

void FUN_143aa7fd0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int local_38;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  lVar3 = *(longlong *)(param_1 + 0x80);
  if ((*(uint *)(param_1 + 0xc4) & 0x7ddb80) != 0) {
    cVar1 = *(char *)(param_1 + 0x94);
    local_38 = *(int *)(param_1 + 0xcc);
LAB_143aa802f:
    if (0 < local_38) {
      while (0 < local_38) {
        local_38 = local_38 + -1;
        uVar5 = 1 << (*(byte *)(lVar2 + local_38) & 0x1f);
        if ((uVar5 & 0x7ddb80) == 0) break;
        if ((cVar1 == '\0') || ((uVar5 & 0x80) == 0)) {
          if ((*(char *)(param_1 + 0x96) == '\0') || (local_38 < **(int **)(param_1 + 0xd8))) {
            uVar4 = *(undefined1 *)(param_1 + 0x95);
          }
          else {
            uVar4 = FUN_143aad1e0(param_1,local_38);
          }
          *(undefined1 *)(lVar3 + local_38) = uVar4;
        }
        else {
          *(undefined1 *)(lVar3 + local_38) = 0;
        }
      }
LAB_143aa8116:
      do {
        if (local_38 < 1) goto LAB_143aa802f;
        iVar6 = local_38 + -1;
        uVar5 = 1 << (*(byte *)(lVar2 + iVar6) & 0x1f);
        if ((uVar5 & 0x5d800) != 0) {
          *(undefined1 *)(lVar3 + iVar6) = *(undefined1 *)(lVar3 + local_38);
          local_38 = iVar6;
          goto LAB_143aa8116;
        }
        if ((cVar1 != '\0') && ((uVar5 & 0x80) != 0)) {
          *(undefined1 *)(lVar3 + iVar6) = 0;
          local_38 = iVar6;
          goto LAB_143aa802f;
        }
        local_38 = iVar6;
      } while ((uVar5 & 0x180) == 0);
      if ((*(char *)(param_1 + 0x96) == '\0') || (iVar6 < **(int **)(param_1 + 0xd8))) {
        uVar4 = *(undefined1 *)(param_1 + 0x95);
      }
      else {
        uVar4 = FUN_143aad1e0(param_1,iVar6);
      }
      *(undefined1 *)(lVar3 + iVar6) = uVar4;
      goto LAB_143aa802f;
    }
  }
  return;
}



// FUNCTION 143aa8230 FUN_143aa8230 body=387 status=ok
// SIG undefined FUN_143aa8230(void)

undefined8 FUN_143aa8230(longlong *param_1,ushort param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  undefined4 *puVar5;
  
  plVar1 = param_1 + (longlong)*(int *)((longlong)param_1 + 500) * 2 + 0x3f;
  if ((int)param_1[0x3e] <= (int)(uint)*(ushort *)((longlong)plVar1 + 6)) {
    lVar2 = *param_1;
    cVar3 = FUN_143aad100(lVar2 + 0x50,lVar2 + 0x2c,1,(uint)*(ushort *)((longlong)plVar1 + 6) * 0x30
                         );
    if (cVar3 == '\0') {
      return 0;
    }
    if ((longlong *)param_1[0x3d] == param_1 + 1) {
      _guard_xfg_dispatch_icall_nop(*(void **)(lVar2 + 0x50),param_1 + 1,0x1e0);
    }
    param_1[0x3d] = *(longlong *)(lVar2 + 0x50);
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(lVar2 + 0x2c);
  }
  puVar5 = (undefined4 *)((ulonglong)*(ushort *)((longlong)plVar1 + 6) * 0x18 + param_1[0x3d]);
  *puVar5 = param_3;
  puVar5[1] = (uint)param_2;
  puVar5[4] = *(undefined4 *)((longlong)plVar1 + 0xc);
  puVar5[2] = (int)*plVar1;
  *(undefined2 *)(puVar5 + 3) = 0;
  sVar4 = *(short *)((longlong)plVar1 + 6) + 1;
  *(short *)((longlong)plVar1 + 6) = sVar4;
  return CONCAT71((uint7)(byte)((ushort)sVar4 >> 8),1);
}



// FUNCTION 143aa83c0 FUN_143aa83c0 body=553 status=ok
// SIG undefined FUN_143aa83c0(void)

void FUN_143aa83c0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 local_18;
  undefined1 local_14;
  undefined1 local_c;
  
  *param_2 = param_1;
  *(undefined4 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fe) = 0;
  if ((*(char *)(param_1 + 0x96) == '\0') || (0 < **(int **)(param_1 + 0xd8))) {
    local_14 = *(undefined1 *)(param_1 + 0x95);
  }
  else {
    local_14 = FUN_143aad1e0(param_1,0);
  }
  *(undefined1 *)(param_2 + 0x40) = local_14;
  if ((*(char *)(param_1 + 0x96) == '\0') || (0 < **(int **)(param_1 + 0xd8))) {
    bVar1 = *(byte *)(param_1 + 0x95);
  }
  else {
    bVar1 = FUN_143aad1e0(param_1,0);
  }
  *(uint *)((longlong)param_2 + 0x204) = bVar1 & 1;
  local_18 = (undefined1)(bVar1 & 1);
  *(undefined1 *)((longlong)param_2 + 0x202) = local_18;
  *(undefined1 *)((longlong)param_2 + 0x201) = local_18;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    param_2[0x3d] = (longlong)(param_2 + 1);
    *(undefined4 *)(param_2 + 0x3e) = 0x14;
  }
  else {
    param_2[0x3d] = *(longlong *)(param_1 + 0x50);
    *(undefined4 *)(param_2 + 0x3e) = *(undefined4 *)(param_1 + 0x2c);
  }
  if ((*(int *)(*param_2 + 0x8c) == 1) || (*(int *)(*param_2 + 0x8c) == 6)) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  *(undefined1 *)(param_2 + 0x13d) = local_c;
  return;
}



// FUNCTION 143aa85f0 FUN_143aa85f0 body=193 status=ok
// SIG undefined FUN_143aa85f0(void)

void FUN_143aa85f0(longlong param_1,byte param_2)

{
  undefined1 local_18;
  
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined2 *)(param_1 + 0x1fe) = 0;
  *(byte *)(param_1 + 0x200) = param_2;
  *(uint *)(param_1 + 0x204) = param_2 & 1;
  local_18 = (undefined1)(param_2 & 1);
  *(undefined1 *)(param_1 + 0x202) = local_18;
  *(undefined1 *)(param_1 + 0x201) = local_18;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  return;
}



// FUNCTION 143aa86c0 FUN_143aa86c0 body=241 status=ok
// SIG undefined FUN_143aa86c0(void)

void FUN_143aa86c0(longlong *param_1,int param_2,byte param_3,byte param_4)

{
  longlong *plVar1;
  byte local_res18;
  undefined1 local_28;
  
  plVar1 = param_1 + (longlong)*(int *)((longlong)param_1 + 500) * 2 + 0x3f;
  if ((1 << (*(byte *)(*(longlong *)(*param_1 + 0x78) + (longlong)param_2) & 0x1f) & 0x780000U) == 0
     ) {
    local_res18 = param_3;
    if ((param_3 & 0x7f) < (param_4 & 0x7f)) {
      local_res18 = param_4;
    }
    *(undefined2 *)((longlong)plVar1 + 6) = *(undefined2 *)((longlong)plVar1 + 4);
    *(byte *)(plVar1 + 1) = param_4;
    *(uint *)((longlong)plVar1 + 0xc) = local_res18 & 1;
    local_28 = (undefined1)(local_res18 & 1);
    *(undefined1 *)((longlong)plVar1 + 10) = local_28;
    *(undefined1 *)((longlong)plVar1 + 9) = local_28;
    *(int *)plVar1 = param_2;
  }
  return;
}



// FUNCTION 143aa87c0 FUN_143aa87c0 body=1755 status=ok
// SIG undefined FUN_143aa87c0(void)

undefined8 FUN_143aa87c0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  byte local_58;
  ushort local_48;
  ushort local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  
  plVar1 = param_1 + (longlong)*(int *)((longlong)param_1 + 500) * 2 + 0x3f;
  lVar2 = *(longlong *)(*param_1 + 0x78);
  local_58 = *(byte *)(lVar2 + param_2);
  if (local_58 == 10) {
    local_48 = *(ushort *)(*(longlong *)(*param_1 + 0x10) + (longlong)param_2 * 2);
    local_40 = (uint)*(ushort *)((longlong)plVar1 + 6);
    do {
      local_40 = local_40 - 1;
      if ((int)local_40 < (int)(uint)*(ushort *)((longlong)plVar1 + 4)) goto LAB_143aa8a77;
    } while (*(uint *)(param_1[0x3d] + 4 + (longlong)(int)local_40 * 0x18) != (uint)local_48);
    bVar3 = FUN_143aa8ea0(param_1,local_40,param_2);
    if (bVar3 != 10) {
      *(undefined1 *)((longlong)plVar1 + 10) = 10;
      *(uint *)((longlong)plVar1 + 0xc) = (uint)bVar3;
      *(int *)plVar1 = param_2;
      bVar3 = *(byte *)(*(longlong *)(*param_1 + 0x80) + (longlong)param_2);
      if ((bVar3 & 0x80) != 0) {
        bVar3 = bVar3 & 1;
        *(byte *)((longlong)plVar1 + 9) = bVar3;
        for (local_38 = (uint)*(ushort *)((longlong)plVar1 + 4); (int)local_38 < (int)local_40;
            local_38 = local_38 + 1) {
          *(ushort *)(param_1[0x3d] + 0xc + (longlong)(int)local_38 * 0x18) =
               *(ushort *)(param_1[0x3d] + 0xc + (longlong)(int)local_38 * 0x18) |
               (ushort)(1 << bVar3);
        }
        *(byte *)(*(longlong *)(*param_1 + 0x80) + (longlong)param_2) =
             *(byte *)(*(longlong *)(*param_1 + 0x80) + (longlong)param_2) & 0x7f;
      }
      *(byte *)(*(longlong *)(*param_1 + 0x80) +
               (longlong)*(int *)(param_1[0x3d] + (longlong)(int)local_40 * 0x18)) =
           *(byte *)(*(longlong *)(*param_1 + 0x80) +
                    (longlong)*(int *)(param_1[0x3d] + (longlong)(int)local_40 * 0x18)) & 0x7f;
      return 1;
    }
    local_48 = 0;
LAB_143aa8a77:
    if (local_48 == 0) {
      local_44 = 0;
    }
    else {
      local_44 = FUN_143ad4040(local_48);
    }
    if ((local_44 != local_48) &&
       (iVar5 = FUN_143ad4710(*(undefined8 *)(*param_1 + 8),local_48), iVar5 == 1)) {
      if (local_44 == 0x232a) {
        cVar4 = FUN_143aa8230(param_1,0x3009,param_2);
        if (cVar4 == '\0') {
          return 0;
        }
      }
      else if ((local_44 == 0x3009) &&
              (cVar4 = FUN_143aa8230(param_1,0x232a,param_2), cVar4 == '\0')) {
        return 0;
      }
      cVar4 = FUN_143aa8230(param_1,local_44,param_2);
      if (cVar4 == '\0') {
        return 0;
      }
    }
  }
  bVar3 = *(byte *)(*(longlong *)(*param_1 + 0x80) + (longlong)param_2);
  if ((bVar3 & 0x80) == 0) {
    if ((local_58 < 2) || (local_58 == 0xd)) {
      *(byte *)((longlong)plVar1 + 10) = local_58;
      *(byte *)((longlong)plVar1 + 9) = local_58;
      *(uint *)((longlong)plVar1 + 0xc) = (uint)(local_58 != 0);
      *(int *)plVar1 = param_2;
      local_58 = local_58 != 0;
    }
    else if (local_58 == 2) {
      *(undefined1 *)((longlong)plVar1 + 10) = 2;
      if (*(char *)((longlong)plVar1 + 9) == '\0') {
        local_58 = 0;
        if ((char)param_1[0x13d] == '\0') {
          *(undefined1 *)(lVar2 + param_2) = 0x17;
        }
        *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
        *(int *)plVar1 = param_2;
      }
      else {
        local_58 = 1;
        if (*(char *)((longlong)plVar1 + 9) == '\r') {
          *(undefined1 *)(lVar2 + param_2) = 5;
        }
        else {
          *(undefined1 *)(lVar2 + param_2) = 0x18;
        }
        *(undefined4 *)((longlong)plVar1 + 0xc) = 1;
        *(int *)plVar1 = param_2;
      }
    }
    else if (local_58 == 5) {
      local_58 = 1;
      *(undefined1 *)((longlong)plVar1 + 10) = 5;
      *(undefined4 *)((longlong)plVar1 + 0xc) = 1;
      *(int *)plVar1 = param_2;
    }
    else if (local_58 == 0x11) {
      local_58 = *(byte *)((longlong)plVar1 + 10);
      if (local_58 == 10) {
        *(undefined1 *)(lVar2 + param_2) = 10;
      }
    }
    else {
      *(byte *)((longlong)plVar1 + 10) = local_58;
    }
  }
  else {
    bVar3 = bVar3 & 1;
    if (((local_58 != 8) && (local_58 != 9)) && (local_58 != 10)) {
      *(byte *)(lVar2 + param_2) = bVar3;
    }
    *(byte *)((longlong)plVar1 + 10) = bVar3;
    *(byte *)((longlong)plVar1 + 9) = bVar3;
    *(uint *)((longlong)plVar1 + 0xc) = (uint)bVar3;
    *(int *)plVar1 = param_2;
    local_58 = bVar3;
  }
  if ((local_58 < 2) || (uVar6 = 0, local_58 == 0xd)) {
    for (local_3c = (uint)*(ushort *)((longlong)plVar1 + 4);
        uVar6 = (ulonglong)*(ushort *)((longlong)plVar1 + 6),
        (int)local_3c < (int)(uint)*(ushort *)((longlong)plVar1 + 6); local_3c = local_3c + 1) {
      if (*(int *)(param_1[0x3d] + (longlong)(int)local_3c * 0x18) < param_2) {
        *(ushort *)(param_1[0x3d] + 0xc + (longlong)(int)local_3c * 0x18) =
             *(ushort *)(param_1[0x3d] + 0xc + (longlong)(int)local_3c * 0x18) |
             (ushort)(1 << (local_58 != 0));
      }
    }
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 143aa8ea0 FUN_143aa8ea0 body=696 status=ok
// SIG undefined FUN_143aa8ea0(void)

ulonglong FUN_143aa8ea0(longlong *param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  undefined2 local_res10;
  byte local_38;
  uint local_34;
  byte local_30;
  
  plVar1 = param_1 + (longlong)*(int *)((longlong)param_1 + 500) * 2 + 0x3f;
  piVar3 = (int *)((longlong)(int)param_2 * 0x18 + param_1[0x3d]);
  uVar2 = *(byte *)(plVar1 + 1) & 1;
  bVar4 = true;
  local_30 = (byte)uVar2;
  local_res10 = (undefined2)param_2;
  if ((((*(byte *)(plVar1 + 1) & 1) == 0) && ((*(ushort *)(piVar3 + 3) & 1) != 0)) ||
     ((uVar2 == 1 && ((*(ushort *)(piVar3 + 3) & 2) != 0)))) {
    local_38 = local_30;
  }
  else {
    if ((*(ushort *)(piVar3 + 3) & 3) == 0) {
      *(undefined2 *)((longlong)plVar1 + 6) = local_res10;
      return CONCAT71((int7)((ulonglong)plVar1 >> 8),10);
    }
    bVar4 = param_2 == *(ushort *)((longlong)plVar1 + 4);
    if (uVar2 == piVar3[4]) {
      local_38 = local_30;
    }
    else {
      local_38 = *(byte *)(piVar3 + 4);
    }
  }
  *(byte *)(*(longlong *)(*param_1 + 0x78) + (longlong)*piVar3) = local_38;
  *(byte *)(*(longlong *)(*param_1 + 0x78) + (longlong)param_3) = local_38;
  FUN_143aa98c0(param_1,param_2,*piVar3,local_38);
  if (bVar4) {
    *(undefined2 *)((longlong)plVar1 + 6) = local_res10;
    while ((*(ushort *)((longlong)plVar1 + 4) < *(ushort *)((longlong)plVar1 + 6) &&
           (*(int *)(param_1[0x3d] + (longlong)(int)(*(ushort *)((longlong)plVar1 + 6) - 1) * 0x18)
            == *piVar3))) {
      *(short *)((longlong)plVar1 + 6) = *(short *)((longlong)plVar1 + 6) + -1;
    }
  }
  else {
    piVar3[1] = -param_3;
    local_34 = param_2;
    while ((local_34 = local_34 - 1, (int)(uint)*(ushort *)((longlong)plVar1 + 4) <= (int)local_34
           && (*(int *)(param_1[0x3d] + (longlong)(int)local_34 * 0x18) == *piVar3))) {
      *(undefined4 *)(param_1[0x3d] + 4 + (longlong)(int)local_34 * 0x18) = 0;
    }
    while ((local_34 = param_2 + 1, (int)local_34 < (int)(uint)*(ushort *)((longlong)plVar1 + 6) &&
           (piVar3 = (int *)((longlong)(int)local_34 * 0x18 + param_1[0x3d]), *piVar3 < param_3))) {
      param_2 = local_34;
      if (0 < piVar3[1]) {
        piVar3[1] = 0;
      }
    }
  }
  return (ulonglong)local_38;
}



// FUNCTION 143aa9160 FUN_143aa9160 body=212 status=ok
// SIG undefined FUN_143aa9160(void)

void FUN_143aa9160(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined1 local_14;
  
  lVar1 = param_1 + 0x1f8 + (longlong)*(int *)(param_1 + 500) * 0x10;
  *(undefined1 *)(lVar1 + 10) = 10;
  uVar2 = *(undefined2 *)(lVar1 + 6);
  *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
  *(undefined2 *)(lVar1 + 0x16) = uVar2;
  *(undefined2 *)(lVar1 + 0x14) = uVar2;
  *(byte *)(lVar1 + 0x18) = param_2;
  *(uint *)(lVar1 + 0x1c) = param_2 & 1;
  local_14 = (undefined1)(param_2 & 1);
  *(undefined1 *)(lVar1 + 0x1a) = local_14;
  *(undefined1 *)(lVar1 + 0x19) = local_14;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  return;
}



// FUNCTION 143aa9240 FUN_143aa9240 body=79 status=ok
// SIG undefined FUN_143aa9240(void)

void FUN_143aa9240(longlong param_1)

{
  *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + -1;
  *(undefined1 *)(param_1 + (longlong)*(int *)(param_1 + 500) * 0x10 + 0x202) = 10;
  return;
}



// FUNCTION 143aa9290 FUN_143aa9290 body=618 status=ok
// SIG undefined FUN_143aa9290(void)

undefined8 FUN_143aa9290(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  byte local_38;
  uint local_34;
  int local_30;
  int local_2c;
  byte local_28;
  
  lVar3 = *(longlong *)(param_1 + 0x78);
  lVar4 = *(longlong *)(param_1 + 0x80);
  local_2c = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  local_34 = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  local_30 = 0;
  while( true ) {
    if (iVar2 <= local_30) {
      if ((local_34 & 0x7fdfd8) != 0) {
        local_34 = local_34 |
                   *(uint *)(&DAT_145cf0998 + (longlong)(int)(*(byte *)(param_1 + 0x95) & 1) * 4);
      }
      *(uint *)(param_1 + 0xc4) = local_34;
      uVar6 = FUN_143aa9610(param_1);
      return uVar6;
    }
    local_38 = *(byte *)(lVar4 + local_30);
    bVar1 = *(byte *)(lVar3 + local_30);
    if ((bVar1 == 0x14) || (bVar1 == 0x15)) {
      local_2c = local_2c + 1;
      if (*(int *)(param_1 + 0x14c) < local_2c) {
        *(int *)(param_1 + 0x14c) = local_2c;
      }
    }
    else if (bVar1 == 0x16) {
      local_2c = local_2c + -1;
    }
    else if (bVar1 == 7) {
      local_2c = 0;
    }
    if ((local_38 & 0x80) == 0) {
      uVar5 = *(uint *)(&DAT_145cf09a0 + (longlong)(int)(local_38 & 1) * 4) | 1 << (bVar1 & 0x1f);
    }
    else {
      local_38 = local_38 & 0x7f;
      uVar5 = *(uint *)(&DAT_145cf09a8 + (longlong)(int)(local_38 & 1) * 4);
    }
    local_34 = local_34 | uVar5;
    if ((*(char *)(param_1 + 0x96) == '\0') || (local_30 < **(int **)(param_1 + 0xd8))) {
      local_28 = *(byte *)(param_1 + 0x95);
    }
    else {
      local_28 = FUN_143aad1e0(param_1,local_30);
    }
    if (((local_38 < local_28) && ((local_38 != 0 || (bVar1 != 7)))) || (0x7d < local_38)) break;
    local_30 = local_30 + 1;
  }
  *param_2 = 1;
  return 0;
}



// FUNCTION 143aa9500 FUN_143aa9500 body=267 status=ok
// SIG undefined FUN_143aa9500(void)

undefined8 FUN_143aa9500(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xd8) == param_1 + 0xe0) {
    if (*(int *)(param_1 + 0xd0) < 0xb) {
      uVar2 = 1;
    }
    else {
      cVar1 = FUN_143aad100(param_1 + 0x58,param_1 + 0x30,1,0xa0);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x58);
        _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x58),(void *)(param_1 + 0xe0),0x50);
        uVar2 = 1;
      }
    }
  }
  else {
    cVar1 = FUN_143aad100(param_1 + 0x58,param_1 + 0x30,1,
                          ((longlong)(*(int *)(param_1 + 0xd0) << 1) & 0x1fffffffU) << 3);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x58);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 143aa9610 FUN_143aa9610 body=90 status=ok
// SIG undefined FUN_143aa9610(void)

undefined8 FUN_143aa9610(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc4);
  if (((uVar1 & 0x20e002) == 0) && (((uVar1 & 0x20) == 0 || ((uVar1 & 0x7ddfd8) == 0)))) {
    uVar2 = 0;
  }
  else if ((uVar1 & 0x1901825) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 143aa9670 FUN_143aa9670 body=289 status=ok
// SIG undefined FUN_143aa9670(void)

char FUN_143aa9670(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  char local_27;
  int local_20;
  uint local_1c;
  
  lVar3 = *(longlong *)(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0xa0);
  local_27 = '\n';
  local_20 = 0;
  while (local_20 < iVar2) {
    local_1c = (uint)*(ushort *)(lVar3 + (longlong)local_20 * 2);
    iVar5 = local_20 + 1;
    if ((((local_1c & 0xfffffc00) == 0xd800) && (iVar5 != iVar2)) &&
       (uVar1 = *(ushort *)(lVar3 + (longlong)iVar5 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
      local_1c = local_1c * 0x400 + -0x35fdc00 + (uint)uVar1;
      iVar5 = local_20 + 2;
    }
    local_20 = iVar5;
    cVar4 = FUN_143aad040(param_1,local_1c);
    if (local_27 == '\n') {
      if (((cVar4 == '\0') || (cVar4 == '\x01')) || (cVar4 == '\r')) {
        local_27 = cVar4;
      }
    }
    else if (cVar4 == '\a') {
      local_27 = '\n';
    }
  }
  return local_27;
}



// FUNCTION 143aa97a0 FUN_143aa97a0 body=281 status=ok
// SIG undefined FUN_143aa97a0(void)

undefined8 FUN_143aa97a0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int local_20;
  uint local_1c;
  
  lVar3 = *(longlong *)(param_1 + 0xa8);
  iVar2 = *(int *)(param_1 + 0xb0);
  local_20 = 0;
  do {
    if (iVar2 <= local_20) {
      return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),4);
    }
    local_1c = (uint)*(ushort *)(lVar3 + (longlong)local_20 * 2);
    iVar5 = local_20 + 1;
    if ((((local_1c & 0xfffffc00) == 0xd800) && (iVar5 != iVar2)) &&
       (uVar1 = *(ushort *)(lVar3 + (longlong)iVar5 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
      local_1c = local_1c * 0x400 + -0x35fdc00 + (uint)uVar1;
      iVar5 = local_20 + 2;
    }
    local_20 = iVar5;
    cVar4 = FUN_143aad040(param_1,local_1c);
    if (cVar4 == '\0') {
      return 0;
    }
    if ((cVar4 == '\x01') || (cVar4 == '\r')) {
      return 1;
    }
    if (cVar4 == '\x02') {
      return 2;
    }
  } while (cVar4 != '\x05');
  return 3;
}



// FUNCTION 143aa98c0 FUN_143aa98c0 body=355 status=ok
// SIG undefined FUN_143aa98c0(void)

void FUN_143aa98c0(longlong *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_38;
  int *local_28;
  
  iVar1 = *(int *)((longlong)param_1 + 500);
  lVar4 = *(longlong *)(*param_1 + 0x78);
  local_38 = param_2 + 1;
  local_28 = (int *)((longlong)local_38 * 0x18 + param_1[0x3d]);
  do {
    if ((int)(uint)*(ushort *)((longlong)param_1 + (longlong)iVar1 * 0x10 + 0x1fe) <= local_38) {
      return;
    }
    if (local_28[1] < 0) {
      if (param_3 < local_28[2]) {
        return;
      }
      if (param_3 < *local_28) {
        if ((uint)param_4 == local_28[4]) {
          return;
        }
        iVar2 = *local_28;
        *(byte *)(lVar4 + iVar2) = param_4;
        iVar3 = local_28[1];
        *(byte *)(lVar4 + -iVar3) = param_4;
        local_28[1] = 0;
        FUN_143aa98c0(param_1,local_38,iVar2,param_4);
        FUN_143aa98c0(param_1,local_38,-iVar3,param_4);
      }
    }
    local_38 = local_38 + 1;
    local_28 = local_28 + 6;
  } while( true );
}



// FUNCTION 143aa9a30 FUN_143aa9a30 body=2342 status=ok
// SIG undefined FUN_143aa9a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143aa9a30(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_318 [32];
  byte local_2f8;
  byte local_2f7;
  byte local_2f6;
  int local_2f4;
  int local_2f0;
  uint local_2ec;
  char local_2e8;
  uint local_2e4;
  char local_2e0;
  char local_2df;
  uint local_2dc;
  byte local_2d8;
  int local_2d4;
  ushort local_2d0;
  int local_2cc;
  uint local_2c8;
  undefined4 local_2c4;
  int local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined4 local_2a8;
  int aiStack_298 [128];
  char acStack_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_2b0 = *(longlong *)(param_1 + 0x10);
  local_2b8 = *(longlong *)(param_1 + 0x40);
  local_2f4 = 0;
  local_2d4 = *(int *)(param_1 + 0x18);
  local_2e4 = 0;
  local_2f8 = 0;
  local_2e8 = 0xfd < *(byte *)(param_1 + 0x95);
  local_2c8 = (uint)(byte)local_2e8;
  if ((bool)local_2e8) {
    if ((*(int *)(param_1 + 0x8c) == 5) || (*(int *)(param_1 + 0x8c) == 6)) {
      local_2df = '\x01';
    }
    else {
      local_2df = '\0';
    }
    if (local_2df != '\0') {
      local_2c4 = 1;
      goto LAB_143aa9b1c;
    }
  }
  local_2c4 = 0;
LAB_143aa9b1c:
  local_2e0 = (char)local_2c4;
  local_2c0 = -1;
  local_2cc = 0;
  local_2d8 = (byte)*(undefined4 *)(param_1 + 0x90) & 2;
  local_2f7 = 10;
  local_2f0 = -1;
  if ((*(uint *)(param_1 + 0x90) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  local_2f6 = *(byte *)(param_1 + 0x95) & 1;
  if ((bool)local_2e8) {
    *(uint *)(*(longlong *)(param_1 + 0xd8) + 4) = (uint)local_2f6;
    local_2f7 = local_2f6;
    if ((*(int *)(param_1 + 0xa0) < 1) || (local_2f8 = FUN_143aa9670(param_1), local_2f8 == 10)) {
      local_2ec = 1;
    }
    else {
      if (local_2f8 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 4) = 0;
      }
      else {
        *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 4) = 1;
      }
      local_2ec = 0;
    }
  }
  else {
    *(uint *)(*(longlong *)(param_1 + 0xd8) + 4) = (uint)*(byte *)(param_1 + 0x95);
    local_2ec = 0;
  }
  while (local_2f4 < local_2d4) {
    local_2dc = (uint)*(ushort *)(local_2b0 + (longlong)local_2f4 * 2);
    iVar2 = local_2f4 + 1;
    if ((((local_2dc & 0xfffffc00) == 0xd800) && (iVar2 != local_2d4)) &&
       (local_2d0 = *(ushort *)(local_2b0 + (longlong)iVar2 * 2), (local_2d0 & 0xfc00) == 0xdc00)) {
      local_2dc = local_2dc * 0x400 + -0x35fdc00 + (uint)local_2d0;
      iVar2 = local_2f4 + 2;
    }
    local_2f4 = iVar2;
    local_2f8 = FUN_143aad040(param_1,local_2dc);
    local_2a8 = 1;
    local_2e4 = local_2e4 | 1 << (local_2f8 & 0x1f);
    *(byte *)(local_2b8 + (local_2f4 + -1)) = local_2f8;
    if (0xffff < (int)local_2dc) {
      local_2e4 = local_2e4 | 0x40000;
      *(undefined1 *)(local_2b8 + (local_2f4 + -2)) = 0x12;
    }
    if ((local_2d8 != 0) &&
       ((((local_2dc & 0xfffffffc) == 0x200c || (local_2dc - 0x202a < 5)) ||
        (local_2dc - 0x2066 < 4)))) {
      local_2cc = local_2cc + 1;
    }
    if (local_2f8 == 0) {
      if (local_2ec == 1) {
        *(undefined4 *)
         (*(longlong *)(param_1 + 0xd8) + 4 + (longlong)(*(int *)(param_1 + 0xd0) + -1) * 8) = 0;
        local_2ec = 0;
      }
      else if (local_2ec == 2) {
        if (local_2f0 < 0x7e) {
          local_2e4 = local_2e4 | 0x100000;
        }
        local_2ec = 3;
      }
      local_2f7 = 0;
    }
    else if ((local_2f8 == 1) || (local_2f8 == 0xd)) {
      if (local_2ec == 1) {
        *(undefined4 *)
         (*(longlong *)(param_1 + 0xd8) + 4 + (longlong)(*(int *)(param_1 + 0xd0) + -1) * 8) = 1;
        local_2ec = 0;
      }
      else if (local_2ec == 2) {
        if (local_2f0 < 0x7e) {
          *(undefined1 *)(local_2b8 + aiStack_298[local_2f0]) = 0x15;
          local_2e4 = local_2e4 | 0x200000;
        }
        local_2ec = 3;
      }
      local_2f7 = 1;
      if (local_2f8 == 0xd) {
        local_2c0 = local_2f4 + -1;
      }
    }
    else if ((local_2f8 < 0x13) || (0x15 < local_2f8)) {
      if (local_2f8 == 0x16) {
        if ((local_2ec == 2) && (local_2f0 < 0x7e)) {
          local_2e4 = local_2e4 | 0x100000;
        }
        if (-1 < local_2f0) {
          if (local_2f0 < 0x7e) {
            local_2ec = (uint)acStack_98[local_2f0];
          }
          local_2f0 = local_2f0 + -1;
        }
      }
      else if ((local_2f8 == 7) &&
              (((local_2d4 <= local_2f4 || (local_2dc != 0xd)) ||
               (*(short *)(local_2b0 + (longlong)local_2f4 * 2) != 10)))) {
        *(int *)(*(longlong *)(param_1 + 0xd8) + (longlong)(*(int *)(param_1 + 0xd0) + -1) * 8) =
             local_2f4;
        if ((local_2e0 != '\0') && (local_2f7 == 1)) {
          *(undefined4 *)
           (*(longlong *)(param_1 + 0xd8) + 4 + (longlong)(*(int *)(param_1 + 0xd0) + -1) * 8) = 1;
        }
        if ((*(uint *)(param_1 + 0x90) & 4) != 0) {
          *(int *)(param_1 + 0x1c) = local_2f4;
          *(int *)(param_1 + 0x1b0) = local_2cc;
        }
        if (local_2f4 < local_2d4) {
          *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
          cVar1 = FUN_143aa9500(param_1);
          if (cVar1 == '\0') {
            return 0;
          }
          if (local_2e8 == '\0') {
            *(uint *)(*(longlong *)(param_1 + 0xd8) + 4 +
                     (longlong)(*(int *)(param_1 + 0xd0) + -1) * 8) =
                 (uint)*(byte *)(param_1 + 0x95);
          }
          else {
            *(uint *)(*(longlong *)(param_1 + 0xd8) + 4 +
                     (longlong)(*(int *)(param_1 + 0xd0) + -1) * 8) = (uint)local_2f6;
            local_2f7 = local_2f6;
          }
          local_2ec = (uint)(local_2e8 != '\0');
          local_2f0 = -1;
        }
      }
    }
    else {
      local_2f0 = local_2f0 + 1;
      if (local_2f0 < 0x7e) {
        aiStack_298[local_2f0] = local_2f4 + -1;
        acStack_98[local_2f0] = (char)local_2ec;
      }
      if (local_2f8 == 0x13) {
        *(undefined1 *)(local_2b8 + (local_2f4 + -1)) = 0x14;
        local_2ec = 2;
      }
      else {
        local_2ec = 3;
      }
    }
  }
  if (0x7d < local_2f0) {
    local_2f0 = 0x7d;
    local_2ec = 2;
  }
  do {
    if (local_2f0 < 0) {
LAB_143aaa1a0:
      if ((*(uint *)(param_1 + 0x90) & 4) == 0) {
        *(int *)(*(longlong *)(param_1 + 0xd8) + (longlong)(*(int *)(param_1 + 0xd0) + -1) * 8) =
             local_2d4;
        *(int *)(param_1 + 0x1b0) = local_2cc;
      }
      else if (*(int *)(param_1 + 0x1c) < local_2d4) {
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
      }
      if ((local_2e0 != '\0') && (local_2f7 == 1)) {
        *(undefined4 *)
         (*(longlong *)(param_1 + 0xd8) + 4 + (longlong)(*(int *)(param_1 + 0xd0) + -1) * 8) = 1;
      }
      if (local_2e8 != '\0') {
        *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 4);
      }
      for (local_2f4 = 0; local_2f4 < *(int *)(param_1 + 0xd0); local_2f4 = local_2f4 + 1) {
        local_2e4 = local_2e4 |
                    *(uint *)(&DAT_145cf0998 +
                             (longlong)
                             (int)(*(uint *)(*(longlong *)(param_1 + 0xd8) + 4 +
                                            (longlong)local_2f4 * 8) & 1) * 4);
      }
      if ((*(char *)(param_1 + 0x94) != '\0') && ((local_2e4 & 0x80) != 0)) {
        local_2e4 = local_2e4 | 1;
      }
      *(uint *)(param_1 + 0xc4) = local_2e4;
      *(int *)(param_1 + 200) = local_2c0;
      return 1;
    }
    if (local_2ec == 2) {
      local_2e4 = local_2e4 | 0x100000;
      goto LAB_143aaa1a0;
    }
    local_2ec = (uint)acStack_98[local_2f0];
    local_2f0 = local_2f0 + -1;
  } while( true );
}



// FUNCTION 143aaa360 FUN_143aaa360 body=264 status=ok
// SIG undefined FUN_143aaa360(void)

undefined8 FUN_143aaa360(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_20;
  uint local_1c;
  
  lVar2 = *(longlong *)(param_1 + 0x98);
  local_20 = *(uint *)(param_1 + 0xa0);
  uVar5 = (ulonglong)local_20;
  while( true ) {
    if ((int)local_20 < 1) {
      return CONCAT71((int7)(uVar5 >> 8),4);
    }
    uVar4 = local_20 - 1;
    local_1c = (uint)*(ushort *)(lVar2 + (longlong)(int)uVar4 * 2);
    if ((((local_1c & 0xfffffc00) == 0xdc00) && (0 < (int)uVar4)) &&
       (uVar1 = *(ushort *)(lVar2 + (longlong)(int)(local_20 - 2) * 2), (uVar1 & 0xfc00) == 0xd800))
    {
      local_1c = (uint)uVar1 * 0x400 + -0x35fdc00 + local_1c;
      uVar4 = local_20 - 2;
    }
    local_20 = uVar4;
    cVar3 = FUN_143aad040(param_1,local_1c);
    if (cVar3 == '\0') break;
    if ((cVar3 == '\x01') || (cVar3 == '\r')) {
      return 1;
    }
    uVar5 = 0;
    if (cVar3 == '\a') {
      return 4;
    }
  }
  return 0;
}



// FUNCTION 143aaa470 FUN_143aaa470 body=2013 status=ok
// SIG undefined FUN_143aaa470(void)

void FUN_143aaa470(longlong param_1,longlong *param_2,byte param_3,int param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  int local_res20;
  int local_44;
  
  lVar3 = *param_2;
  lVar4 = *(longlong *)(param_1 + 0x80);
  bVar5 = *(byte *)((longlong)param_2 + 0x1c);
  bVar1 = *(byte *)(lVar3 + (ulonglong)bVar5 * 8 + (ulonglong)param_3);
  *(uint *)((longlong)param_2 + 0x1c) = bVar1 & 0xf;
  cVar2 = *(char *)(param_2[1] + (longlong)((int)(uint)bVar1 >> 4));
  cVar6 = *(char *)(lVar3 + (longlong)*(int *)((longlong)param_2 + 0x1c) * 8 + 7);
  local_res20 = param_4;
  if (cVar2 != '\0') {
    local_44 = param_4;
    switch(cVar2) {
    case '\x01':
      *(int *)(param_2 + 2) = param_4;
      break;
    case '\x02':
      local_res20 = (int)param_2[2];
      break;
    case '\x03':
      FUN_143aac180(param_1,(int)param_2[2],param_4,*(char *)((longlong)param_2 + 0x24) + '\x01');
      break;
    case '\x04':
      FUN_143aac180(param_1,(int)param_2[2],param_4,*(char *)((longlong)param_2 + 0x24) + '\x02');
      break;
    case '\x05':
      if (-1 < *(int *)((longlong)param_2 + 0x14)) {
        FUN_143aa7ea0(param_1,*(undefined4 *)((longlong)param_2 + 0x14),1);
      }
      *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
      if ((*(int *)(param_1 + 0x198) == 0) ||
         (*(int *)(param_1 + 0x19c) <= *(int *)(param_1 + 0x1a0))) {
        *(undefined4 *)(param_2 + 3) = 0xffffffff;
        if (((*(byte *)(lVar3 + (ulonglong)bVar5 * 8 + 7) & 1) != 0) && (0 < (int)param_2[2])) {
          local_res20 = (int)param_2[2];
        }
        if (param_3 == 5) {
          FUN_143aa7ea0(param_1,param_4,1);
          *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x19c);
        }
      }
      else {
        local_44 = (int)param_2[3];
        while (local_44 = local_44 + 1, local_44 < param_4) {
          *(byte *)(lVar4 + local_44) = *(char *)(lVar4 + local_44) - 2U & 0xfe;
        }
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x19c);
        *(undefined4 *)(param_2 + 3) = 0xffffffff;
        if (param_3 == 5) {
          FUN_143aa7ea0(param_1,param_4,1);
          *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x19c);
        }
      }
      break;
    case '\x06':
      if (0 < *(int *)(param_1 + 0x198)) {
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1a0);
      }
      *(undefined4 *)(param_2 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
      *(int *)(param_2 + 3) = param_5 + -1;
      break;
    case '\a':
      if (((param_3 == 3) &&
          (*(char *)(*(longlong *)(param_1 + 0x78) + (longlong)param_4) == '\x05')) &&
         (*(int *)(param_1 + 0x8c) != 6)) {
        if (*(int *)((longlong)param_2 + 0x14) == -1) {
          *(int *)(param_2 + 3) = param_5 + -1;
        }
        else {
          if (-1 < *(int *)((longlong)param_2 + 0x14)) {
            FUN_143aa7ea0(param_1,*(undefined4 *)((longlong)param_2 + 0x14),1);
            *(undefined4 *)((longlong)param_2 + 0x14) = 0xfffffffe;
          }
          FUN_143aa7ea0(param_1,param_4,1);
        }
      }
      else if (*(int *)((longlong)param_2 + 0x14) == -1) {
        *(int *)((longlong)param_2 + 0x14) = param_4;
      }
      break;
    case '\b':
      *(int *)(param_2 + 3) = param_5 + -1;
      *(undefined4 *)(param_2 + 2) = 0xffffffff;
      break;
    case '\t':
      do {
        local_44 = local_44 + -1;
        if (local_44 < 0) break;
      } while ((*(byte *)(lVar4 + local_44) & 1) == 0);
      if (-1 < local_44) {
        FUN_143aa7ea0(param_1,local_44,4);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x19c);
      }
      *(int *)(param_2 + 2) = param_4;
      break;
    case '\n':
      FUN_143aa7ea0(param_1,param_4,1);
      FUN_143aa7ea0(param_1,param_4,2);
      break;
    case '\v':
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1a0);
      if (param_3 == 5) {
        FUN_143aa7ea0(param_1,param_4,4);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x19c);
      }
      break;
    case '\f':
      bVar5 = *(char *)((longlong)param_2 + 0x24) + cVar6;
      for (local_44 = (int)param_2[2]; local_44 < param_4; local_44 = local_44 + 1) {
        if (*(byte *)(lVar4 + local_44) < bVar5) {
          *(byte *)(lVar4 + local_44) = bVar5;
        }
      }
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x19c);
      *(int *)(param_2 + 2) = param_4;
      break;
    case '\r':
      bVar5 = *(byte *)((longlong)param_2 + 0x24);
      while (local_44 = local_44 + -1, (int)param_2[2] <= local_44) {
        if ((uint)*(byte *)(lVar4 + local_44) == bVar5 + 3) {
          while ((uint)*(byte *)(lVar4 + local_44) == bVar5 + 3) {
            *(char *)(lVar4 + local_44) = *(char *)(lVar4 + local_44) + -2;
            local_44 = local_44 + -1;
          }
          for (; *(byte *)(lVar4 + local_44) == bVar5; local_44 = local_44 + -1) {
          }
        }
        if ((uint)*(byte *)(lVar4 + local_44) == bVar5 + 2) {
          *(byte *)(lVar4 + local_44) = bVar5;
        }
        else {
          *(byte *)(lVar4 + local_44) = bVar5 + 1;
        }
      }
      break;
    case '\x0e':
      cVar2 = *(char *)((longlong)param_2 + 0x24);
      while (local_44 = local_44 + -1, (int)param_2[2] <= local_44) {
        if ((byte)(cVar2 + 1U) < *(byte *)(lVar4 + local_44)) {
          *(char *)(lVar4 + local_44) = *(char *)(lVar4 + local_44) + -2;
        }
      }
    }
  }
  if ((cVar6 != '\0') || (local_res20 < param_4)) {
    cVar6 = *(char *)((longlong)param_2 + 0x24) + cVar6;
    if (local_res20 < (int)param_2[4]) {
      FUN_143aac180(param_1,local_res20,param_5,cVar6);
    }
    else {
      for (local_44 = local_res20; local_44 < param_5; local_44 = local_44 + 1) {
        *(char *)(lVar4 + local_44) = cVar6;
      }
    }
  }
  return;
}



// FUNCTION 143aaac90 FUN_143aaac90 body=3100 status=ok
// SIG undefined FUN_143aaac90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143aaac90(longlong param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined1 auStack_1598 [32];
  byte local_1578;
  byte local_1577;
  byte local_1576;
  int local_1574;
  uint local_1570;
  byte local_156c;
  byte local_156b;
  uint local_1568;
  int local_1564;
  int local_1560;
  int local_155c;
  int local_1558;
  int local_1554;
  int local_1550;
  int local_154c;
  int local_1548;
  longlong local_1540;
  int local_1538;
  longlong local_1530;
  uint local_1528;
  uint local_1524;
  uint local_1520;
  int local_151c;
  int local_1518;
  longlong local_1510;
  int local_1508;
  undefined4 local_1504;
  undefined4 local_14fc;
  undefined1 local_14f8 [2544];
  undefined1 local_b08 [2544];
  ushort auStack_118 [128];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x143aaaca4;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1598;
  local_1530 = *(longlong *)(param_1 + 0x78);
  local_1540 = *(longlong *)(param_1 + 0x80);
  local_1510 = *(longlong *)(param_1 + 0x10);
  local_1574 = 0;
  local_1538 = *(int *)(param_1 + 0x1c);
  local_1570 = *(uint *)(param_1 + 0xc4);
  if ((*(char *)(param_1 + 0x96) == '\0') || (0 < **(int **)(param_1 + 0xd8))) {
    local_156c = *(byte *)(param_1 + 0x95);
  }
  else {
    local_156c = FUN_143aad1e0(param_1,0);
  }
  local_1524 = (uint)local_156c;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  if (*param_2 < 1) {
    local_154c = FUN_143aa9610(param_1);
    if (local_154c == 2) {
      if (*(int *)(param_1 + 0x8c) < 2) {
        if ((local_1570 & 0x79d800) == 0) {
          FUN_143aa83c0(param_1,local_b08);
          for (local_1550 = 0; local_1550 < *(int *)(param_1 + 0xd0); local_1550 = local_1550 + 1) {
            if (local_1550 == 0) {
              local_151c = 0;
            }
            else {
              local_151c = *(int *)(*(longlong *)(param_1 + 0xd8) + (longlong)(local_1550 + -1) * 8)
              ;
            }
            local_1508 = *(int *)(*(longlong *)(param_1 + 0xd8) + (longlong)local_1550 * 8);
            local_156c = *(undefined1 *)
                          (*(longlong *)(param_1 + 0xd8) + 4 + (longlong)local_1550 * 8);
            for (local_1574 = local_151c; local_1574 < local_1508; local_1574 = local_1574 + 1) {
              *(byte *)(local_1540 + local_1574) = local_156c;
              local_1576 = *(char *)(local_1530 + local_1574);
              if (local_1576 != '\x12') {
                if (local_1576 == '\a') {
                  if ((local_1574 + 1 < local_1538) &&
                     ((*(short *)(local_1510 + (longlong)local_1574 * 2) != 0xd ||
                      (*(short *)(local_1510 + (longlong)(local_1574 + 1) * 2) != 10)))) {
                    FUN_143aa85f0(local_b08,local_156c);
                  }
                }
                else {
                  cVar3 = FUN_143aa87c0(local_b08,local_1574);
                  if (cVar3 == '\0') {
                    *param_2 = 7;
                    return 0;
                  }
                }
              }
            }
          }
        }
        else {
          local_1578 = local_156c;
          local_1577 = local_156c;
          local_1554 = 0;
          local_1568 = 0;
          local_1564 = 0;
          local_1560 = 0;
          local_155c = 0;
          FUN_143aa83c0(param_1,local_14f8);
          auStack_118[0] = (ushort)local_156c;
          local_1570 = 0;
          for (local_1574 = 0; local_1574 < local_1538; local_1574 = local_1574 + 1) {
            local_1576 = *(byte *)(local_1530 + local_1574);
            local_1548 = local_1576 - 7;
            switch(local_1548) {
            case 0:
              local_1570 = local_1570 | 0x80;
              if ((*(char *)(param_1 + 0x96) == '\0') || (local_1574 < **(int **)(param_1 + 0xd8)))
              {
                bVar4 = *(byte *)(param_1 + 0x95);
              }
              else {
                bVar4 = FUN_143aad1e0(param_1,local_1574);
              }
              local_1528 = (uint)bVar4;
              *(byte *)(local_1540 + local_1574) = bVar4;
              if ((local_1574 + 1 < local_1538) &&
                 ((*(short *)(local_1510 + (longlong)local_1574 * 2) != 0xd ||
                  (*(short *)(local_1510 + (longlong)(local_1574 + 1) * 2) != 10)))) {
                local_1564 = 0;
                local_1560 = 0;
                local_155c = 0;
                local_1568 = 0;
                if ((*(char *)(param_1 + 0x96) == '\0') ||
                   (local_1574 + 1 < **(int **)(param_1 + 0xd8))) {
                  local_1578 = *(byte *)(param_1 + 0x95);
                }
                else {
                  local_1578 = FUN_143aad1e0(param_1,local_1574 + 1);
                }
                local_1520 = (uint)local_1578;
                auStack_118[0] = (ushort)local_1578;
                local_1577 = local_1578;
                FUN_143aa85f0(local_14f8,local_1578);
              }
              break;
            default:
              if ((local_1578 & 0x7f) != (local_1577 & 0x7f)) {
                FUN_143aa86c0(local_14f8,local_1554,local_1577,local_1578);
                if ((local_1578 & 0x80) == 0) {
                  local_1570 = local_1570 | 0x80000000 |
                               *(uint *)(&DAT_145cf09a0 + (longlong)(int)(local_1578 & 1) * 4);
                }
                else {
                  local_1570 = local_1570 | 0x80000000 |
                               *(uint *)(&DAT_145cf09a8 + (longlong)(int)(local_1578 & 1) * 4);
                }
              }
              local_1577 = local_1578;
              *(byte *)(local_1540 + local_1574) = local_1578;
              cVar3 = FUN_143aa87c0(local_14f8,local_1574);
              if (cVar3 == '\0') {
                return -1;
              }
              local_1504 = 1;
              local_1570 = local_1570 | 1 << (*(byte *)(local_1530 + local_1574) & 0x1f);
              break;
            case 4:
            case 5:
            case 7:
            case 8:
              local_1570 = local_1570 | 0x40000;
              *(byte *)(local_1540 + local_1574) = local_1577;
              if ((local_1576 == 0xb) || (local_1576 == 0xc)) {
                local_156b = local_1578 + 2 & 0x7e;
              }
              else {
                local_156b = (local_1578 & 0x7f) + 1 | 1;
              }
              if (((local_156b < 0x7e) && (local_1564 == 0)) && (local_1560 == 0)) {
                local_1554 = local_1574;
                local_1578 = local_156b;
                if ((local_1576 == 0xc) || (local_1576 == 0xf)) {
                  local_1578 = local_156b | 0x80;
                }
                local_1568 = local_1568 + 1;
                auStack_118[local_1568] = (ushort)local_1578;
              }
              else if (local_1564 == 0) {
                local_1560 = local_1560 + 1;
              }
              break;
            case 9:
              local_1570 = local_1570 | 0x40000;
              *(byte *)(local_1540 + local_1574) = local_1577;
              if (local_1564 == 0) {
                if (local_1560 == 0) {
                  if ((local_1568 != 0) && (auStack_118[local_1568] < 0x100)) {
                    local_1554 = local_1574;
                    local_1568 = local_1568 - 1;
                    local_1578 = (byte)auStack_118[local_1568];
                  }
                }
                else {
                  local_1560 = local_1560 + -1;
                }
              }
              break;
            case 0xb:
              *(byte *)(local_1540 + local_1574) = local_1577;
              local_1570 = local_1570 | 0x40000;
              break;
            case 0xd:
            case 0xe:
              local_1570 = local_1570 |
                           *(uint *)(&DAT_145cf0998 + (longlong)(int)(local_1578 & 1) * 4) | 0x400;
              *(byte *)(local_1540 + local_1574) = local_1578 & 0x7f;
              if ((local_1578 & 0x7f) != (local_1577 & 0x7f)) {
                FUN_143aa86c0(local_14f8,local_1554,local_1577,local_1578);
                local_1570 = local_1570 | 0x80000000;
              }
              local_1577 = local_1578;
              if (local_1576 == 0x14) {
                local_156b = local_1578 + 2 & 0x7e;
              }
              else {
                local_156b = (local_1578 & 0x7f) + 1 | 1;
              }
              if (((local_156b < 0x7e) && (local_1564 == 0)) && (local_1560 == 0)) {
                local_14fc = 1;
                local_1570 = local_1570 | 1 << (local_1576 & 0x1f);
                local_1554 = local_1574;
                local_155c = local_155c + 1;
                if (*(int *)(param_1 + 0x14c) < local_155c) {
                  *(int *)(param_1 + 0x14c) = local_155c;
                }
                local_1578 = local_156b;
                local_1568 = local_1568 + 1;
                auStack_118[local_1568] = local_156b + 0x100;
                FUN_143aa9160(local_14f8,local_156b);
              }
              else {
                *(undefined1 *)(local_1530 + local_1574) = 9;
                local_1564 = local_1564 + 1;
              }
              break;
            case 0xf:
              if ((local_1578 & 0x7f) != (local_1577 & 0x7f)) {
                FUN_143aa86c0(local_14f8,local_1554,local_1577,local_1578);
                local_1570 = local_1570 | 0x80000000;
              }
              if (local_1564 == 0) {
                if (local_155c == 0) {
                  *(undefined1 *)(local_1530 + local_1574) = 9;
                }
                else {
                  local_1570 = local_1570 | 0x400000;
                  local_1554 = local_1574;
                  local_1560 = 0;
                  for (; auStack_118[local_1568] < 0x100; local_1568 = local_1568 - 1) {
                  }
                  local_1568 = local_1568 - 1;
                  local_155c = local_155c + -1;
                  FUN_143aa9240(local_14f8);
                }
              }
              else {
                local_1564 = local_1564 + -1;
                *(undefined1 *)(local_1530 + local_1574) = 9;
              }
              local_1578 = (byte)auStack_118[local_1568];
              local_1570 = local_1570 |
                           *(uint *)(&DAT_145cf0998 + (longlong)(int)(local_1578 & 1) * 4) | 0x400;
              *(byte *)(local_1540 + local_1574) = local_1578 & 0x7f;
              local_1577 = local_1578;
            }
          }
          if ((local_1570 & 0x7fdfd8) != 0) {
            local_1570 = local_1570 |
                         *(uint *)(&DAT_145cf0998 +
                                  (longlong)(int)(*(byte *)(param_1 + 0x95) & 1) * 4);
          }
          if ((*(char *)(param_1 + 0x94) != '\0') && ((local_1570 & 0x80) != 0)) {
            local_1570 = local_1570 | 1;
          }
          *(uint *)(param_1 + 0xc4) = local_1570;
          local_154c = FUN_143aa9610(param_1);
        }
      }
      else {
        for (local_1558 = 0; local_1558 < *(int *)(param_1 + 0xd0); local_1558 = local_1558 + 1) {
          if (local_1558 == 0) {
            local_1518 = 0;
          }
          else {
            local_1518 = *(int *)(*(longlong *)(param_1 + 0xd8) + (longlong)(local_1558 + -1) * 8);
          }
          iVar2 = *(int *)(*(longlong *)(param_1 + 0xd8) + (longlong)local_1558 * 8);
          uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 4 + (longlong)local_1558 * 8);
          for (local_1574 = local_1518; local_1574 < iVar2; local_1574 = local_1574 + 1) {
            *(undefined1 *)(local_1540 + local_1574) = uVar1;
          }
        }
      }
    }
  }
  else {
    local_154c = 0;
  }
  return local_154c;
}



// FUNCTION 143aab8f0 FUN_143aab8f0 body=2179 status=ok
// SIG undefined FUN_143aab8f0(void)

void FUN_143aab8f0(longlong param_1,int param_2,int param_3,byte param_4,byte param_5)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  byte local_res20;
  byte local_87;
  int local_84;
  char local_7e;
  byte local_7b;
  ushort local_78;
  short local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_58;
  int local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  byte local_14;
  
  lVar3 = *(longlong *)(param_1 + 0x78);
  local_7e = '\x01';
  local_48 = -1;
  if (param_2 < *(int *)(param_1 + 200)) {
    if ((*(char *)(param_1 + 0x96) == '\0') || (param_2 < **(int **)(param_1 + 0xd8))) {
      bVar5 = *(byte *)(param_1 + 0x95);
    }
    else {
      bVar5 = FUN_143aad1e0(param_1,param_2);
    }
    if (((bVar5 & 1) != 0) && ((*(int *)(param_1 + 0x8c) == 5 || (*(int *)(param_1 + 0x8c) == 6))))
    {
      bVar4 = true;
      goto LAB_143aab9e4;
    }
  }
  bVar4 = false;
LAB_143aab9e4:
  local_24 = 0xffffffff;
  local_20 = 0xffffffff;
  local_14 = *(byte *)(*(longlong *)(param_1 + 0x80) + (longlong)param_2);
  local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)(local_14 & 1) * 8);
  local_30 = *(undefined8 *)
              (*(longlong *)(param_1 + 0xb8) + 0x10 + (longlong)(int)(local_14 & 1) * 8);
  local_res20 = param_4;
  local_18 = param_2;
  if (((param_2 == 0) && (local_res20 = param_4, 0 < *(int *)(param_1 + 0xa0))) &&
     (bVar5 = FUN_143aaa360(param_1), local_res20 = param_4, bVar5 != 4)) {
    local_res20 = bVar5;
  }
  local_84 = param_2;
  local_64 = param_2;
  if (*(char *)(lVar3 + param_2) == '\x16') {
    local_28 = *(undefined4 *)
                (*(longlong *)(param_1 + 0x150) + (longlong)*(int *)(param_1 + 0x14c) * 0xc);
    local_6c = *(int *)(*(longlong *)(param_1 + 0x150) + 4 +
                       (longlong)*(int *)(param_1 + 0x14c) * 0xc);
    local_78 = *(ushort *)
                (*(longlong *)(param_1 + 0x150) + 8 + (longlong)*(int *)(param_1 + 0x14c) * 0xc);
    local_1c = (int)*(short *)(*(longlong *)(param_1 + 0x150) + 10 +
                              (longlong)*(int *)(param_1 + 0x14c) * 0xc);
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + -1;
  }
  else {
    local_28 = 0xffffffff;
    if (*(char *)(lVar3 + param_2) == '\x11') {
      local_78 = local_res20 + 1;
    }
    else {
      local_78 = 0;
    }
    local_1c = 0;
    FUN_143aaa470(param_1,&local_38,local_res20,param_2,param_2);
    local_6c = param_2;
  }
  for (; local_84 <= param_3; local_84 = local_84 + 1) {
    local_60 = param_3;
    if (local_84 < param_3) {
      local_87 = *(byte *)(lVar3 + local_84);
      if (bVar4) {
        if (local_87 == 0xd) {
          local_87 = 1;
        }
        else if (local_87 == 2) {
          if (local_48 <= local_84) {
            local_7e = '\x01';
            local_58 = local_84;
            do {
              local_58 = local_58 + 1;
              local_48 = param_3;
              if (param_3 <= local_58) goto LAB_143aabdc8;
              cVar1 = *(char *)(lVar3 + local_58);
            } while (((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\r'));
            local_48 = local_58;
            local_7e = cVar1;
          }
LAB_143aabdc8:
          if (local_7e == '\r') {
            local_87 = 5;
          }
        }
      }
      local_7b = (&DAT_145cf0a48)[local_87];
    }
    else {
      do {
        local_60 = local_60 + -1;
        if (local_60 <= param_2) break;
      } while ((1 << (*(byte *)(lVar3 + local_60) & 0x1f) & 0x5d800U) != 0);
      if ((*(char *)(lVar3 + local_60) == '\x14') || (*(char *)(lVar3 + local_60) == '\x15')) break;
      local_7b = param_5;
    }
    bVar5 = (&DAT_145cf0a70)[(ulonglong)local_7b + (ulonglong)local_78 * 0x10];
    local_70 = (short)((int)(uint)bVar5 >> 5);
    if ((local_84 == param_3) && (local_70 == 0)) {
      local_70 = 1;
    }
    if (local_70 != 0) {
      uVar2 = (&DAT_145cf0a7f)[(ulonglong)local_78 * 0x10];
      if (local_70 == 1) {
        FUN_143aaa470(param_1,&local_38,uVar2,local_6c,local_84);
        local_6c = local_84;
      }
      else if (local_70 == 2) {
        local_64 = local_84;
      }
      else if (local_70 == 3) {
        FUN_143aaa470(param_1,&local_38,uVar2,local_6c,local_64);
        FUN_143aaa470(param_1,&local_38,4,local_64,local_84);
        local_6c = local_84;
      }
      else if (local_70 == 4) {
        FUN_143aaa470(param_1,&local_38,uVar2,local_6c,local_64);
        local_6c = local_64;
        local_64 = local_84;
      }
    }
    local_78 = bVar5 & 0x1f;
  }
  local_84 = param_3;
  if ((param_3 == *(int *)(param_1 + 0x1c)) &&
     ((0 < *(int *)(param_1 + 0xb0) && (bVar5 = FUN_143aa97a0(param_1), bVar5 != 4)))) {
    param_5 = bVar5;
  }
  do {
    local_84 = local_84 + -1;
    if (local_84 <= param_2) break;
  } while ((1 << (*(byte *)(lVar3 + local_84) & 0x1f) & 0x5d800U) != 0);
  if (((*(char *)(lVar3 + local_84) == '\x14') || (*(char *)(lVar3 + local_84) == '\x15')) &&
     (param_3 < *(int *)(param_1 + 0x1c))) {
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    *(ushort *)(*(longlong *)(param_1 + 0x150) + 8 + (longlong)*(int *)(param_1 + 0x14c) * 0xc) =
         local_78;
    *(undefined2 *)(*(longlong *)(param_1 + 0x150) + 10 + (longlong)*(int *)(param_1 + 0x14c) * 0xc)
         = (undefined2)local_1c;
    *(int *)(*(longlong *)(param_1 + 0x150) + 4 + (longlong)*(int *)(param_1 + 0x14c) * 0xc) =
         local_6c;
    *(undefined4 *)(*(longlong *)(param_1 + 0x150) + (longlong)*(int *)(param_1 + 0x14c) * 0xc) =
         local_28;
  }
  else {
    FUN_143aaa470(param_1,&local_38,param_5,param_3,param_3);
  }
  return;
}



// FUNCTION 143aac180 FUN_143aac180 body=188 status=ok
// SIG undefined FUN_143aac180(void)

void FUN_143aac180(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_24;
  undefined4 local_20;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  lVar3 = *(longlong *)(param_1 + 0x80);
  local_20 = 0;
  for (local_24 = param_2; local_24 < param_3; local_24 = local_24 + 1) {
    cVar1 = *(char *)(lVar2 + local_24);
    if (cVar1 == '\x16') {
      local_20 = local_20 + -1;
    }
    if (local_20 == 0) {
      *(undefined1 *)(lVar3 + local_24) = param_4;
    }
    if ((cVar1 == '\x14') || (cVar1 == '\x15')) {
      local_20 = local_20 + 1;
    }
  }
  return;
}



// FUNCTION 143aac240 FUN_143aac240 body=3004 status=ok
// SIG undefined FUN_143aac240(void)

void FUN_143aac240(longlong param_1,undefined8 param_2,int param_3,byte param_4,int *param_5)

{
  void *_Dst;
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  void *_Src;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int local_d8;
  int local_d4;
  uint local_d0;
  undefined1 *local_c8;
  uint local_bc;
  int local_a0;
  uint local_98;
  int local_94;
  int local_80;
  int local_7c;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_60;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if (param_3 == 0) {
    FUN_143aad430(param_1,param_2,0,param_4,0,param_5);
    goto LAB_143aacde0;
  }
  lVar12 = FUN_143aa7a40((longlong)param_3 * 7);
  if (lVar12 == 0) {
    *param_5 = 7;
    goto LAB_143aacde0;
  }
  lVar13 = lVar12 + (longlong)param_3 * 4;
  _Dst = (void *)(lVar13 + (longlong)param_3 * 2);
  uVar11 = *(uint *)(param_1 + 0x90);
  if ((uVar11 & 1) != 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xfffffffe;
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 2;
  }
  FUN_143aad430(param_1,param_2,param_3,param_4 & 1,0,param_5);
  if (0 < *param_5) goto LAB_143aacde0;
  _Src = (void *)FUN_143aae7b0(param_1,param_5);
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)*(int *)(param_1 + 0x1c));
  uVar2 = *(undefined4 *)(param_1 + 0xcc);
  local_a0 = *(int *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0xc0);
  uVar9 = FUN_143ad5960(param_1,lVar13,param_3,2,param_5);
  FUN_143aaefc0(param_1,lVar12,param_5);
  if (*param_5 < 1) {
    *(uint *)(param_1 + 0x90) = uVar11;
    *(undefined4 *)(param_1 + 0x8c) = 5;
    uVar1 = *(undefined1 *)(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x70) = 0;
    FUN_143aad430(param_1,lVar13,uVar9,param_4 & 1 ^ 1,0,param_5);
    *(undefined1 *)(param_1 + 0x70) = uVar1;
    FUN_143aae970(param_1,param_5);
    if (*param_5 < 1) {
      local_d4 = 0;
      iVar4 = *(int *)(param_1 + 0x130);
      local_c8 = *(undefined1 **)(param_1 + 0x138);
      local_80 = 0;
      for (local_d8 = 0; local_d8 < iVar4; local_d8 = local_d8 + 1) {
        iVar10 = *(int *)(local_c8 + (longlong)local_d8 * 0xc + 4) - local_80;
        if (1 < iVar10) {
          uVar11 = *(uint *)(local_c8 + (longlong)local_d8 * 0xc) & 0x7fffffff;
          while (local_d0 = uVar11 + 1,
                (int)local_d0 <
                (int)((*(uint *)(local_c8 + (longlong)local_d8 * 0xc) & 0x7fffffff) + iVar10)) {
            iVar5 = *(int *)(lVar12 + (longlong)(int)local_d0 * 4);
            iVar6 = *(int *)(lVar12 + (longlong)(int)uVar11 * 4);
            if (iVar5 - iVar6 < 0) {
              local_7c = -(iVar5 - iVar6);
            }
            else {
              local_7c = iVar5 - iVar6;
            }
            uVar11 = local_d0;
            if ((local_7c != 1) ||
               (*(char *)((longlong)_Dst + (longlong)iVar5) !=
                *(char *)((longlong)_Dst + (longlong)iVar6))) {
              local_d4 = local_d4 + 1;
            }
          }
        }
        local_80 = local_80 + iVar10;
      }
      if (local_d4 != 0) {
        cVar8 = FUN_143aad100(param_1 + 0x60,param_1 + 0x34,*(undefined1 *)(param_1 + 0x71),
                              (iVar4 + local_d4) * 0xc);
        if (cVar8 == '\0') goto LAB_143aacced;
        if (iVar4 == 1) {
          puVar14 = *(undefined1 **)(param_1 + 0x60);
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar14 = *local_c8;
            local_c8 = local_c8 + 1;
            puVar14 = puVar14 + 1;
          }
        }
        *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x60);
        local_c8 = *(undefined1 **)(param_1 + 0x138);
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + local_d4;
      }
      while (local_d8 = iVar4 + -1, -1 < local_d8) {
        if (local_d8 == 0) {
          local_74 = *(int *)(local_c8 + 4);
        }
        else {
          local_74 = *(int *)(local_c8 + (longlong)local_d8 * 0xc + 4) -
                     *(int *)(local_c8 + (longlong)(iVar4 + -2) * 0xc + 4);
        }
        uVar11 = -((int)*(uint *)(local_c8 + (longlong)local_d8 * 0xc) >> 0x1f);
        local_98 = *(uint *)(local_c8 + (longlong)local_d8 * 0xc) & 0x7fffffff;
        iVar4 = local_d8;
        if (local_74 < 2) {
          if (local_d4 != 0) {
            puVar14 = local_c8 + (longlong)local_d8 * 0xc;
            puVar15 = local_c8 + (longlong)(local_d8 + local_d4) * 0xc;
            for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
              *puVar15 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
          }
          uVar7 = *(uint *)(lVar12 + (longlong)(int)local_98 * 4);
          *(uint *)(local_c8 + (longlong)(local_d8 + local_d4) * 0xc) =
               uVar7 | (*(byte *)((longlong)_Dst + (longlong)(int)uVar7) ^ uVar11) << 0x1f;
        }
        else {
          if (uVar11 == 0) {
            local_bc = (local_98 - 1) + local_74;
            local_94 = -1;
          }
          else {
            local_94 = 1;
            local_bc = local_98;
            local_98 = (local_98 - 1) + local_74;
          }
          for (local_d0 = local_bc; local_d0 != local_98; local_d0 = local_d0 + local_94) {
            local_60 = *(uint *)(lVar12 + (longlong)(int)local_d0 * 4);
            iVar10 = *(int *)(lVar12 + (longlong)(int)(local_d0 + local_94) * 4);
            if ((int)(local_60 - iVar10) < 0) {
              local_6c = -(local_60 - iVar10);
            }
            else {
              local_6c = local_60 - iVar10;
            }
            if ((local_6c != 1) ||
               (*(char *)((longlong)_Dst + (longlong)(int)local_60) !=
                *(char *)((longlong)_Dst + (longlong)iVar10))) {
              if (*(int *)(lVar12 + (longlong)(int)local_bc * 4) < (int)local_60) {
                local_60 = *(uint *)(lVar12 + (longlong)(int)local_bc * 4);
              }
              *(uint *)(local_c8 + (longlong)(local_d8 + local_d4) * 0xc) =
                   local_60 | (*(byte *)((longlong)_Dst + (longlong)(int)local_60) ^ uVar11) << 0x1f
              ;
              *(undefined4 *)(local_c8 + (longlong)(local_d8 + local_d4) * 0xc + 4) =
                   *(undefined4 *)(local_c8 + (longlong)local_d8 * 0xc + 4);
              if ((int)(local_d0 - local_bc) < 0) {
                local_70 = -(local_d0 - local_bc);
              }
              else {
                local_70 = local_d0 - local_bc;
              }
              *(int *)(local_c8 + (longlong)local_d8 * 0xc + 4) =
                   *(int *)(local_c8 + (longlong)local_d8 * 0xc + 4) - (local_70 + 1);
              uVar7 = *(uint *)(local_c8 + (longlong)local_d8 * 0xc + 8);
              *(uint *)(local_c8 + (longlong)(local_d8 + local_d4) * 0xc + 8) = uVar7 & 10;
              *(uint *)(local_c8 + (longlong)local_d8 * 0xc + 8) =
                   *(uint *)(local_c8 + (longlong)local_d8 * 0xc + 8) & ~(uVar7 & 10);
              local_bc = local_d0 + local_94;
              local_d4 = local_d4 + -1;
            }
          }
          if (local_d4 != 0) {
            puVar14 = local_c8 + (longlong)local_d8 * 0xc;
            puVar15 = local_c8 + (longlong)(local_d8 + local_d4) * 0xc;
            for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
              *puVar15 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
          }
          if (*(int *)(lVar12 + (longlong)(int)local_bc * 4) <
              *(int *)(lVar12 + (longlong)(int)local_98 * 4)) {
            local_68 = *(uint *)(lVar12 + (longlong)(int)local_bc * 4);
          }
          else {
            local_68 = *(uint *)(lVar12 + (longlong)(int)local_98 * 4);
          }
          *(uint *)(local_c8 + (longlong)(local_d8 + local_d4) * 0xc) =
               local_68 | (*(byte *)((longlong)_Dst + (longlong)(int)local_68) ^ uVar11) << 0x1f;
        }
      }
    }
LAB_143aacced:
    *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x95) ^ 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x1c) = local_a0;
  *(int *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  if (*(int *)(param_1 + 0x28) < local_a0) {
    local_a0 = *(int *)(param_1 + 0x28);
  }
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x80),_Dst,(longlong)local_a0);
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  FUN_143aa79f0(lVar12);
  if (1 < *(int *)(param_1 + 0x130)) {
    *(undefined4 *)(param_1 + 0xc0) = 2;
  }
LAB_143aacde0:
  *(undefined4 *)(param_1 + 0x8c) = 3;
  return;
}



// FUNCTION 143aace00 FUN_143aace00 body=49 status=ok
// SIG undefined FUN_143aace00(void)

void FUN_143aace00(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(longlong *)param_1 = param_1;
  return;
}



// FUNCTION 143aace40 FUN_143aace40 body=236 status=ok
// SIG undefined FUN_143aace40(void)

void FUN_143aace40(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    if (param_1[8] != 0) {
      FUN_143aa79f0(param_1[8]);
    }
    if (param_1[9] != 0) {
      FUN_143aa79f0(param_1[9]);
    }
    if (param_1[10] != 0) {
      FUN_143aa79f0(param_1[10]);
    }
    if (param_1[0xb] != 0) {
      FUN_143aa79f0(param_1[0xb]);
    }
    if (param_1[0xc] != 0) {
      FUN_143aa79f0(param_1[0xc]);
    }
    if (param_1[0xd] != 0) {
      FUN_143aa79f0(param_1[0xd]);
    }
    if (param_1[0x35] != 0) {
      FUN_143aa79f0(param_1[0x35]);
    }
    FUN_143aa79f0(param_1);
  }
  return;
}



// FUNCTION 143aacf30 FUN_143aacf30 body=264 status=ok
// SIG undefined FUN_143aacf30(void)

undefined8 FUN_143aacf30(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  int local_res10;
  int local_14;
  uint local_10;
  
  if ((param_1 == 0) || (param_2 < -1)) {
    uVar3 = 3;
  }
  else {
    local_res10 = param_2;
    if (param_2 == -1) {
      local_res10 = FreeLib(param_1);
    }
    local_14 = 0;
    do {
      if (local_res10 <= local_14) {
        return 3;
      }
      local_10 = (uint)*(ushort *)(param_1 + (longlong)local_14 * 2);
      iVar2 = local_14 + 1;
      if ((((local_10 & 0xfffffc00) == 0xd800) && (iVar2 != local_res10)) &&
         (uVar1 = *(ushort *)(param_1 + (longlong)iVar2 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
        local_10 = local_10 * 0x400 + -0x35fdc00 + (uint)uVar1;
        iVar2 = local_14 + 2;
      }
      local_14 = iVar2;
      iVar2 = FUN_143ad4000(local_10);
      if (iVar2 == 0) {
        return 0;
      }
    } while ((iVar2 != 1) && (iVar2 != 0xd));
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143aad040 FUN_143aad040 body=112 status=ok
// SIG undefined FUN_143aad040(void)

int FUN_143aad040(longlong param_1,undefined4 param_2)

{
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    local_18 = (**(code **)(param_1 + 0x1b8))(*(undefined8 *)(param_1 + 0x1c0),param_2);
    if (local_18 != 0x17) goto LAB_143aad098;
  }
  local_18 = FUN_143ad41e0(*(undefined8 *)(param_1 + 8),param_2);
LAB_143aad098:
  if (0x16 < local_18) {
    local_18 = 10;
  }
  return local_18;
}



// FUNCTION 143aad0b0 FUN_143aad0b0 body=76 status=ok
// SIG undefined FUN_143aad0b0(void)

undefined4 FUN_143aad0b0(longlong *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == (longlong *)0x0) ||
     (((longlong *)*param_1 != param_1 && ((*param_1 == 0 || (*(longlong *)*param_1 != *param_1)))))
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)param_1[0x18];
  }
  return uVar1;
}



// FUNCTION 143aad100 FUN_143aad100 body=204 status=ok
// SIG undefined FUN_143aad100(void)

undefined8 FUN_143aad100(longlong *param_1,int *param_2,char param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    if (param_3 != '\0') {
      lVar1 = FUN_143aa7a40((longlong)param_4);
      *param_1 = lVar1;
      if (*param_1 != 0) {
        *param_2 = param_4;
        return 1;
      }
    }
    uVar2 = 0;
  }
  else if (*param_2 < param_4) {
    if (param_3 == '\0') {
      uVar2 = 0;
    }
    else {
      lVar1 = FUN_143aa7aa0(*param_1,(longlong)param_4);
      if (lVar1 == 0) {
        uVar2 = 0;
      }
      else {
        *param_1 = lVar1;
        *param_2 = param_4;
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143aad1e0 FUN_143aad1e0 body=133 status=ok
// SIG undefined FUN_143aad1e0(void)

undefined1 FUN_143aad1e0(longlong param_1,int param_2)

{
  int local_18;
  
  local_18 = 0;
  while ((local_18 < *(int *)(param_1 + 0xd0) &&
         (*(int *)(*(longlong *)(param_1 + 0xd8) + (longlong)local_18 * 8) <= param_2))) {
    local_18 = local_18 + 1;
  }
  if (*(int *)(param_1 + 0xd0) <= local_18) {
    local_18 = *(int *)(param_1 + 0xd0) + -1;
  }
  return *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 4 + (longlong)local_18 * 8);
}



// FUNCTION 143aad270 FUN_143aad270 body=403 status=ok
// SIG undefined FUN_143aad270(void)

void * FUN_143aad270(int param_1,int param_2,int *param_3)

{
  char cVar1;
  void *_Dst;
  undefined8 uVar2;
  
  if ((param_3 == (int *)0x0) || (0 < *param_3)) {
    return (void *)0x0;
  }
  if ((-1 < param_1) && (-1 < param_2)) {
    _Dst = (void *)FUN_143aa7a40(0x1c8);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x1c8);
      uVar2 = FUN_143ad49f0();
      *(undefined8 *)((longlong)_Dst + 8) = uVar2;
      if (param_1 < 1) {
        *(undefined1 *)((longlong)_Dst + 0x70) = 1;
      }
      else {
        cVar1 = FUN_143aad100((longlong)_Dst + 0x40,(longlong)_Dst + 0x24,1,param_1);
        if ((cVar1 == '\0') ||
           (cVar1 = FUN_143aad100((longlong)_Dst + 0x48,(longlong)_Dst + 0x28,1,param_1),
           cVar1 == '\0')) {
          *param_3 = 7;
        }
      }
      if (param_2 < 1) {
        *(undefined1 *)((longlong)_Dst + 0x71) = 1;
      }
      else if (param_2 == 1) {
        *(undefined4 *)((longlong)_Dst + 0x34) = 0xc;
      }
      else {
        cVar1 = FUN_143aad100((longlong)_Dst + 0x60,(longlong)_Dst + 0x34,1,param_2 * 0xc);
        if (cVar1 == '\0') {
          *param_3 = 7;
        }
      }
      if (0 < *param_3) {
        FUN_143aace40(_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
    *param_3 = 7;
    return (void *)0x0;
  }
  *param_3 = 1;
  return (void *)0x0;
}



// FUNCTION 143aad410 FUN_143aad410 body=31 status=ok
// SIG undefined FUN_143aad410(void)

void FUN_143aad410(void)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  FUN_143aad270(0,0,local_18);
  return;
}



// FUNCTION 143aad430 FUN_143aad430 body=3671 status=ok
// SIG undefined FUN_143aad430(void)

void FUN_143aad430(undefined8 *param_1,longlong param_2,int param_3,byte param_4,longlong param_5,
                  int *param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  int local_res18;
  ulonglong in_stack_ffffffffffffff68;
  byte local_87;
  byte local_86;
  byte local_85;
  int local_84;
  int local_7c;
  int local_74;
  int local_70;
  int local_6c;
  int local_5c;
  
  if ((param_6 != (int *)0x0) && (*param_6 < 1)) {
    if (((param_1 == (undefined8 *)0x0) || ((param_2 == 0 || (param_3 < -1)))) ||
       ((0x7d < param_4 && (param_4 < 0xfe)))) {
      *param_6 = 1;
    }
    else {
      local_res18 = param_3;
      if (param_3 == -1) {
        local_res18 = FreeLib(param_2);
      }
      if (*(int *)((longlong)param_1 + 0x8c) == 3) {
        FUN_143aac240(param_1,param_2,local_res18,param_4,param_6);
      }
      else {
        *param_1 = 0;
        param_1[2] = param_2;
        *(int *)(param_1 + 4) = local_res18;
        *(int *)(param_1 + 3) = local_res18;
        *(int *)((longlong)param_1 + 0x1c) = local_res18;
        *(byte *)((longlong)param_1 + 0x95) = param_4;
        *(uint *)(param_1 + 0x18) = param_4 & 1;
        *(undefined4 *)(param_1 + 0x1a) = 1;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x27] = 0;
        *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(bool *)((longlong)param_1 + 0x96) = 0xfd < param_4;
        if (local_res18 == 0) {
          if (0xfd < param_4) {
            *(byte *)((longlong)param_1 + 0x95) = *(byte *)((longlong)param_1 + 0x95) & 1;
            *(undefined1 *)((longlong)param_1 + 0x96) = 0;
          }
          *(undefined4 *)((longlong)param_1 + 0xc4) =
               *(undefined4 *)(&DAT_145cf0998 + (longlong)(int)(param_4 & 1) * 4);
          *(undefined4 *)(param_1 + 0x26) = 0;
          *(undefined4 *)(param_1 + 0x1a) = 0;
          FUN_143aace00(param_1);
        }
        else {
          *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
          if (param_1[0xb] == 0) {
            param_1[0x1b] = param_1 + 0x1c;
          }
          else {
            param_1[0x1b] = param_1[0xb];
          }
          cVar6 = FUN_143aad100(param_1 + 8,(longlong)param_1 + 0x24,*(undefined1 *)(param_1 + 0xe),
                                local_res18);
          if (cVar6 == '\0') {
            *param_6 = 7;
          }
          else {
            param_1[0xf] = param_1[8];
            cVar6 = FUN_143aa9a30(param_1);
            if (cVar6 == '\0') {
              *param_6 = 7;
            }
            else {
              lVar3 = param_1[0xf];
              iVar1 = *(int *)((longlong)param_1 + 0x1c);
              *(int *)((longlong)param_1 + 0xcc) = iVar1;
              if (param_5 == 0) {
                cVar6 = FUN_143aad100(param_1 + 9,param_1 + 5,*(undefined1 *)(param_1 + 0xe),iVar1);
                if (cVar6 == '\0') {
                  *param_6 = 7;
                  return;
                }
                param_1[0x10] = param_1[9];
                iVar9 = FUN_143aaac90(param_1,param_6);
                iVar2 = *param_6;
              }
              else {
                param_1[0x10] = param_5;
                iVar9 = FUN_143aa9290(param_1,param_6);
                iVar2 = *param_6;
              }
              if (iVar2 < 1) {
                if (*(int *)((longlong)param_1 + 0x14c) < 6) {
                  param_1[0x2a] = param_1 + 0x2b;
                }
                else if (*(int *)(param_1 + 7) < *(int *)((longlong)param_1 + 0x14c) * 0xc) {
                  cVar6 = FUN_143aad100(param_1 + 0xd,param_1 + 7,1,
                                        *(int *)((longlong)param_1 + 0x14c) * 0xc);
                  if (cVar6 == '\0') {
                    *param_6 = 7;
                    return;
                  }
                  param_1[0x2a] = param_1[0xd];
                }
                else {
                  param_1[0x2a] = param_1[0xd];
                }
                *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
                *(int *)(param_1 + 0x18) = iVar9;
                if (iVar9 == 0) {
                  *(byte *)((longlong)param_1 + 0x95) =
                       *(char *)((longlong)param_1 + 0x95) + 1U & 0xfe;
                  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
                }
                else if (iVar9 == 1) {
                  *(byte *)((longlong)param_1 + 0x95) = *(byte *)((longlong)param_1 + 0x95) | 1;
                  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
                }
                else {
                  switch(*(undefined4 *)((longlong)param_1 + 0x8c)) {
                  case 0:
                    param_1[0x17] = &PTR_DAT_145cf0768;
                    break;
                  case 1:
                    param_1[0x17] = &PTR_DAT_145cf07b0;
                    break;
                  case 2:
                    param_1[0x17] = &PTR_DAT_145cf0828;
                    break;
                  case 4:
                    param_1[0x17] = &PTR_DAT_145cf08a8;
                    break;
                  case 5:
                    if ((*(uint *)(param_1 + 0x12) & 1) == 0) {
                      param_1[0x17] = &PTR_DAT_145cf0908;
                    }
                    else {
                      param_1[0x17] = &PTR_DAT_145cf09c0;
                    }
                    break;
                  case 6:
                    if ((*(uint *)(param_1 + 0x12) & 1) == 0) {
                      param_1[0x17] = &PTR_DAT_145cf09e0;
                    }
                    else {
                      param_1[0x17] = &PTR_DAT_145cf0a28;
                    }
                  }
                  if (((param_5 == 0) && (*(int *)(param_1 + 0x1a) < 2)) &&
                     ((*(uint *)((longlong)param_1 + 0xc4) & 0x80000000) == 0)) {
                    if ((*(char *)((longlong)param_1 + 0x96) == '\0') ||
                       (iVar1 + -1 < *(int *)param_1[0x1b])) {
                      uVar7 = *(undefined1 *)((longlong)param_1 + 0x95);
                    }
                    else {
                      uVar7 = FUN_143aad1e0(param_1,iVar1 + -1);
                    }
                    if ((*(char *)((longlong)param_1 + 0x96) == '\0') || (0 < *(int *)param_1[0x1b])
                       ) {
                      bVar8 = *(byte *)((longlong)param_1 + 0x95);
                    }
                    else {
                      bVar8 = FUN_143aad1e0(param_1,0);
                    }
                    FUN_143aab8f0(param_1,0,iVar1,bVar8 & 1,
                                  CONCAT71((int7)(in_stack_ffffffffffffff68 >> 8),uVar7) &
                                  0xffffffffffffff01);
                  }
                  else {
                    pbVar4 = (byte *)param_1[0x10];
                    local_84 = 0;
                    if ((*(char *)((longlong)param_1 + 0x96) == '\0') || (0 < *(int *)param_1[0x1b])
                       ) {
                      local_86 = *(byte *)((longlong)param_1 + 0x95);
                    }
                    else {
                      local_86 = FUN_143aad1e0(param_1,0);
                    }
                    local_87 = *pbVar4;
                    if (local_86 < local_87) {
                      local_86 = local_87 & 1;
                    }
                    else {
                      local_86 = local_86 & 1;
                    }
                    do {
                      iVar2 = local_84;
                      bVar8 = local_87;
                      local_7c = local_84;
                      if ((local_84 < 1) || (*(char *)(lVar3 + (local_84 + -1)) != '\a')) {
                        local_85 = local_86;
                      }
                      else {
                        if ((*(char *)((longlong)param_1 + 0x96) == '\0') ||
                           (local_84 < *(int *)param_1[0x1b])) {
                          local_85 = *(byte *)((longlong)param_1 + 0x95);
                        }
                        else {
                          local_85 = FUN_143aad1e0(param_1,local_84);
                        }
                        local_85 = local_85 & 1;
                      }
                      do {
                        local_84 = local_84 + 1;
                        if (iVar1 <= local_84) break;
                      } while ((pbVar4[local_84] == local_87) ||
                              ((1 << (*(byte *)(lVar3 + local_84) & 0x1f) & 0x5d800U) != 0));
                      if (local_84 < iVar1) {
                        local_87 = pbVar4[local_84];
                      }
                      else if ((*(char *)((longlong)param_1 + 0x96) == '\0') ||
                              (iVar1 + -1 < *(int *)param_1[0x1b])) {
                        local_87 = *(byte *)((longlong)param_1 + 0x95);
                      }
                      else {
                        local_87 = FUN_143aad1e0(param_1,iVar1 + -1);
                      }
                      bVar5 = bVar8;
                      if ((bVar8 & 0x7f) < (local_87 & 0x7f)) {
                        bVar5 = local_87;
                      }
                      local_86 = bVar5 & 1;
                      if ((bVar8 & 0x80) == 0) {
                        in_stack_ffffffffffffff68 =
                             CONCAT71((int7)(in_stack_ffffffffffffff68 >> 8),bVar5) &
                             0xffffffffffffff01;
                        FUN_143aab8f0(param_1,iVar2,local_84,local_85,in_stack_ffffffffffffff68);
                      }
                      else {
                        do {
                          pbVar4[local_7c] = pbVar4[local_7c] & 0x7f;
                          local_7c = local_7c + 1;
                        } while (local_7c < local_84);
                      }
                    } while (local_84 < iVar1);
                  }
                  if (0 < *(int *)((longlong)param_1 + 0x1a4)) {
                    *param_6 = *(int *)((longlong)param_1 + 0x1a4);
                    return;
                  }
                  FUN_143aa7fd0(param_1);
                }
                if (((*(char *)((longlong)param_1 + 0x96) != '\0') &&
                    ((*(uint *)(param_1 + 0x12) & 1) != 0)) &&
                   ((*(int *)((longlong)param_1 + 0x8c) == 5 ||
                    (*(int *)((longlong)param_1 + 0x8c) == 6)))) {
                  for (local_74 = 0; local_74 < *(int *)(param_1 + 0x1a); local_74 = local_74 + 1) {
                    local_70 = *(int *)(param_1[0x1b] + (longlong)local_74 * 8) + -1;
                    if (*(char *)(param_1[0x1b] + 4 + (longlong)local_74 * 8) != '\0') {
                      local_6c = local_70;
                      if (local_74 == 0) {
                        local_5c = 0;
                      }
                      else {
                        local_5c = *(int *)(param_1[0x1b] + (longlong)(local_74 + -1) * 8);
                      }
LAB_143aae16b:
                      if (local_5c <= local_6c) {
                        if (*(byte *)(lVar3 + local_6c) == 0) {
                          if (local_6c < local_70) {
                            for (; *(char *)(lVar3 + local_70) == '\a'; local_70 = local_70 + -1) {
                            }
                          }
                          FUN_143aa7ea0(param_1,local_70,4);
                        }
                        else if ((1 << (*(byte *)(lVar3 + local_6c) & 0x1f) & 0x2002U) == 0)
                        goto LAB_143aae161;
                      }
                    }
                  }
                }
                if ((*(uint *)(param_1 + 0x12) & 2) == 0) {
                  *(int *)(param_1 + 4) =
                       *(int *)(param_1 + 4) + *(int *)((longlong)param_1 + 0x19c);
                }
                else {
                  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - *(int *)(param_1 + 0x36);
                }
                FUN_143aace00(param_1);
              }
            }
          }
        }
      }
    }
  }
  return;
LAB_143aae161:
  local_6c = local_6c + -1;
  goto LAB_143aae16b;
}



// FUNCTION 143aae2b0 FUN_143aae2b0 body=204 status=ok
// SIG undefined FUN_143aae2b0(void)

int FUN_143aae2b0(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int local_28;
  int local_24;
  
  local_24 = 0;
  local_28 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x130) <= local_28) {
      *param_3 = 0x1b;
      return 0;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x138) + 4 + (longlong)local_28 * 0xc) - local_24;
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x138) + (longlong)local_28 * 0xc) & 0x7fffffff;
    if (((int)uVar2 <= param_2) && (param_2 < (int)(uVar2 + iVar1))) break;
    local_24 = local_24 + iVar1;
    local_28 = local_28 + 1;
  }
  return local_28;
}



// FUNCTION 143aae380 FUN_143aae380 body=142 status=ok
// SIG undefined FUN_143aae380(void)

void FUN_143aae380(longlong param_1,byte param_2)

{
  *(longlong *)(param_1 + 0x138) = param_1 + 0x140;
  *(undefined4 *)(param_1 + 0x130) = 1;
  **(int **)(param_1 + 0x138) = (uint)param_2 << 0x1f;
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 8) = 0;
  return;
}



// FUNCTION 143aae410 FUN_143aae410 body=756 status=ok
// SIG undefined FUN_143aae410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143aae410(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte local_res18;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)&local_68;
  if ((param_2 | 1) < param_3) {
    lVar1 = *(longlong *)(param_1 + 0x138);
    lVar4 = *(longlong *)(param_1 + 0x80);
    local_64 = *(int *)(param_1 + 0x130);
    local_res18 = param_3;
    if (*(int *)(param_1 + 0xcc) < *(int *)(param_1 + 0x1c)) {
      local_64 = local_64 + -1;
    }
LAB_143aae4a7:
    local_res18 = local_res18 - 1;
    if ((byte)(param_2 + 1) <= local_res18) {
      local_68 = 0;
      while( true ) {
        while ((local_68 < local_64 &&
               (*(byte *)(lVar4 + *(int *)(lVar1 + (longlong)local_68 * 0xc)) < local_res18))) {
          local_68 = local_68 + 1;
        }
        if (local_64 <= local_68) break;
        local_60 = local_68;
        iVar2 = local_60;
        do {
          local_60 = iVar2;
          iVar2 = local_60 + 1;
          if (local_64 <= iVar2) break;
        } while (local_res18 <= *(byte *)(lVar4 + *(int *)(lVar1 + (longlong)iVar2 * 0xc)));
        local_5c = local_60;
        for (; local_68 < local_5c; local_68 = local_68 + 1) {
          puVar5 = (undefined1 *)(lVar1 + (longlong)local_68 * 0xc);
          puVar6 = local_38;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = (undefined1 *)(lVar1 + (longlong)local_5c * 0xc);
          puVar6 = (undefined1 *)(lVar1 + (longlong)local_68 * 0xc);
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = local_38;
          puVar6 = (undefined1 *)(lVar1 + (longlong)local_5c * 0xc);
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          local_5c = local_5c + -1;
        }
        if (iVar2 == local_64) break;
        local_68 = local_60 + 2;
      }
      goto LAB_143aae4a7;
    }
    if ((param_2 + 1 & 1) == 0) {
      local_68 = 0;
      if (*(int *)(param_1 + 0xcc) == *(int *)(param_1 + 0x1c)) {
        local_64 = local_64 + -1;
      }
      for (; local_68 < local_64; local_68 = local_68 + 1) {
        puVar5 = (undefined1 *)(lVar1 + (longlong)local_68 * 0xc);
        puVar6 = local_38;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar5 = (undefined1 *)(lVar1 + (longlong)local_64 * 0xc);
        puVar6 = (undefined1 *)(lVar1 + (longlong)local_68 * 0xc);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar5 = local_38;
        puVar6 = (undefined1 *)(lVar1 + (longlong)local_64 * 0xc);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        local_64 = local_64 + -1;
      }
    }
  }
  return;
}



// FUNCTION 143aae710 FUN_143aae710 body=160 status=ok
// SIG undefined FUN_143aae710(void)

undefined4 FUN_143aae710(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == (int *)0x0) || (0 < *param_2)) {
    uVar1 = 0xffffffff;
  }
  else if ((param_1 == (longlong *)0x0) ||
          (((longlong *)*param_1 != param_1 &&
           ((*param_1 == 0 || (*(longlong *)*param_1 != *param_1)))))) {
    *param_2 = 0x1b;
    uVar1 = 0xffffffff;
  }
  else {
    FUN_143aae970(param_1,param_2);
    if (*param_2 < 1) {
      uVar1 = (undefined4)param_1[0x26];
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



// FUNCTION 143aae7b0 FUN_143aae7b0 body=435 status=ok
// SIG undefined FUN_143aae7b0(void)

void * FUN_143aae7b0(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  void *_Dst;
  
  if ((param_2 == (int *)0x0) || (0 < *param_2)) {
    _Dst = (void *)0x0;
  }
  else if ((param_1 == (longlong *)0x0) ||
          (((longlong *)*param_1 != param_1 &&
           ((*param_1 == 0 || (*(longlong *)*param_1 != *param_1)))))) {
    *param_2 = 0x1b;
    _Dst = (void *)0x0;
  }
  else {
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    if (iVar1 < 1) {
      *param_2 = 1;
      _Dst = (void *)0x0;
    }
    else {
      iVar2 = *(int *)((longlong)param_1 + 0xcc);
      if (iVar2 == iVar1) {
        _Dst = (void *)param_1[0x10];
      }
      else {
        cVar3 = FUN_143aad100(param_1 + 9,param_1 + 5,(char)param_1[0xe],iVar1);
        if (cVar3 == '\0') {
          *param_2 = 7;
          _Dst = (void *)0x0;
        }
        else {
          _Dst = (void *)param_1[9];
          if ((0 < iVar2) && (_Dst != (void *)param_1[0x10])) {
            _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[0x10],(longlong)iVar2);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)_Dst + (longlong)iVar2),
                     (uint)*(byte *)((longlong)param_1 + 0x95),(longlong)(iVar1 - iVar2));
          *(int *)((longlong)param_1 + 0xcc) = iVar1;
          param_1[0x10] = (longlong)_Dst;
        }
      }
    }
  }
  return _Dst;
}



// FUNCTION 143aae970 FUN_143aae970 body=1612 status=ok
// SIG undefined FUN_143aae970(void)

undefined8 FUN_143aae970(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  char local_88;
  byte local_87;
  int local_84;
  byte local_80;
  int local_7c;
  int local_78;
  int local_74;
  ushort *local_60;
  undefined4 *local_48;
  int local_38;
  
  if (*(int *)(param_1 + 0x130) < 0) {
    if (*(int *)(param_1 + 0xc0) == 2) {
      iVar8 = *(int *)(param_1 + 0x1c);
      puVar3 = *(undefined1 **)(param_1 + 0x80);
      local_88 = -2;
      iVar9 = *(int *)(param_1 + 0xcc);
      local_78 = 0;
      for (local_84 = 0; local_84 < iVar9; local_84 = local_84 + 1) {
        if (puVar3[local_84] != local_88) {
          local_78 = local_78 + 1;
          local_88 = puVar3[local_84];
        }
      }
      if ((local_78 == 1) && (iVar9 == iVar8)) {
        FUN_143aae380(param_1,*puVar3);
      }
      else {
        local_87 = 0x7e;
        local_80 = 0;
        if (iVar9 < iVar8) {
          local_78 = local_78 + 1;
        }
        cVar7 = FUN_143aad100(param_1 + 0x60,param_1 + 0x34,*(undefined1 *)(param_1 + 0x71),
                              local_78 * 0xc);
        if (cVar7 == '\0') {
          return 0;
        }
        lVar4 = *(longlong *)(param_1 + 0x60);
        local_74 = 0;
        local_84 = 0;
        do {
          iVar6 = local_84;
          bVar2 = puVar3[local_84];
          if (bVar2 < local_87) {
            local_87 = bVar2;
          }
          if (local_80 < bVar2) {
            local_80 = bVar2;
          }
          do {
            local_84 = local_84 + 1;
            if (iVar9 <= local_84) break;
          } while (puVar3[local_84] == bVar2);
          *(int *)(lVar4 + (longlong)local_74 * 0xc) = iVar6;
          *(int *)(lVar4 + 4 + (longlong)local_74 * 0xc) = local_84 - iVar6;
          *(undefined4 *)(lVar4 + 8 + (longlong)local_74 * 0xc) = 0;
          local_74 = local_74 + 1;
        } while (local_84 < iVar9);
        if (iVar9 < iVar8) {
          *(int *)(lVar4 + (longlong)local_74 * 0xc) = iVar9;
          *(int *)(lVar4 + 4 + (longlong)local_74 * 0xc) = iVar8 - iVar9;
          if (*(byte *)(param_1 + 0x95) < local_87) {
            local_87 = *(byte *)(param_1 + 0x95);
          }
        }
        *(longlong *)(param_1 + 0x138) = lVar4;
        *(int *)(param_1 + 0x130) = local_78;
        FUN_143aae410(param_1,local_87,local_80);
        local_7c = 0;
        for (local_84 = 0; local_84 < local_78; local_84 = local_84 + 1) {
          *(uint *)(lVar4 + (longlong)local_84 * 0xc) =
               *(uint *)(lVar4 + (longlong)local_84 * 0xc) |
               (uint)(byte)puVar3[*(int *)(lVar4 + (longlong)local_84 * 0xc)] << 0x1f;
          local_7c = local_7c + *(int *)(lVar4 + 4 + (longlong)local_84 * 0xc);
          *(int *)(lVar4 + 4 + (longlong)local_84 * 0xc) = local_7c;
        }
        if (local_74 < local_78) {
          local_38 = local_74;
          if ((*(byte *)(param_1 + 0x95) & 1) != 0) {
            local_38 = 0;
          }
          *(uint *)(lVar4 + (longlong)local_38 * 0xc) =
               *(uint *)(lVar4 + (longlong)local_38 * 0xc) | (uint)*(byte *)(param_1 + 0x95) << 0x1f
          ;
        }
      }
    }
    else {
      FUN_143aae380(param_1,*(undefined1 *)(param_1 + 0x95));
    }
    if (0 < *(int *)(param_1 + 0x19c)) {
      local_48 = *(undefined4 **)(param_1 + 0x1a8);
      puVar1 = local_48 + (longlong)*(int *)(param_1 + 0x19c) * 2;
      for (; local_48 < puVar1; local_48 = local_48 + 2) {
        iVar8 = FUN_143aae2b0(param_1,*local_48,param_2);
        *(uint *)(*(longlong *)(param_1 + 0x138) + 8 + (longlong)iVar8 * 0xc) =
             *(uint *)(*(longlong *)(param_1 + 0x138) + 8 + (longlong)iVar8 * 0xc) | local_48[1];
      }
    }
    if (0 < *(int *)(param_1 + 0x1b0)) {
      puVar5 = *(ushort **)(param_1 + 0x10);
      iVar8 = *(int *)(param_1 + 0x1c);
      for (local_60 = puVar5; local_60 < puVar5 + iVar8; local_60 = local_60 + 1) {
        if ((((*local_60 & 0xfffc) == 0x200c) || (*local_60 - 0x202a < 5)) ||
           (*local_60 - 0x2066 < 4)) {
          iVar9 = FUN_143aae2b0(param_1,(longlong)local_60 - (longlong)puVar5 >> 1 & 0xffffffff,
                                param_2);
          *(int *)(*(longlong *)(param_1 + 0x138) + 8 + (longlong)iVar9 * 0xc) =
               *(int *)(*(longlong *)(param_1 + 0x138) + 8 + (longlong)iVar9 * 0xc) + -1;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 143aaefc0 FUN_143aaefc0 body=1593 status=ok
// SIG undefined FUN_143aaefc0(void)

void FUN_143aaefc0(longlong param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint *local_68;
  int local_5c;
  int local_48;
  uint *local_40;
  uint local_38;
  int local_28;
  
  if ((param_3 != (int *)0x0) && (*param_3 < 1)) {
    if (param_2 == (uint *)0x0) {
      *param_3 = 1;
    }
    else {
      FUN_143aae710(param_1,param_3);
      if (*param_3 < 1) {
        local_68 = *(uint **)(param_1 + 0x138);
        puVar8 = local_68 + (longlong)*(int *)(param_1 + 0x130) * 3;
        if (0 < *(int *)(param_1 + 0x20)) {
          local_84 = 0;
          local_40 = param_2;
          for (; local_68 < puVar8; local_68 = local_68 + 3) {
            local_88 = *local_68;
            uVar2 = local_68[1];
            if ((local_88 & 0x80000000) == 0) {
              do {
                *local_40 = local_88;
                local_40 = local_40 + 1;
                local_88 = local_88 + 1;
                local_84 = local_84 + 1;
              } while (local_84 < (int)uVar2);
            }
            else {
              local_88 = (local_88 & 0x7fffffff) + (uVar2 - local_84);
              do {
                local_88 = local_88 - 1;
                *local_40 = local_88;
                local_40 = local_40 + 1;
                local_84 = local_84 + 1;
              } while (local_84 < (int)uVar2);
            }
          }
          if (*(int *)(param_1 + 0x19c) < 1) {
            if (0 < *(int *)(param_1 + 0x1b0)) {
              iVar3 = *(int *)(param_1 + 0x130);
              lVar5 = *(longlong *)(param_1 + 0x138);
              local_84 = 0;
              local_6c = 0;
              for (local_5c = 0; local_5c < iVar3; local_5c = local_5c + 1) {
                iVar6 = *(int *)(lVar5 + 4 + (longlong)local_5c * 0xc) - local_84;
                iVar4 = *(int *)(lVar5 + 8 + (longlong)local_5c * 0xc);
                if ((iVar4 == 0) && (local_6c == local_84)) {
                  local_6c = local_6c + iVar6;
                }
                else if (iVar4 == 0) {
                  iVar4 = *(int *)(lVar5 + 4 + (longlong)local_5c * 0xc);
                  for (local_74 = local_84; local_74 < iVar4; local_74 = local_74 + 1) {
                    param_2[local_6c] = param_2[local_74];
                    local_6c = local_6c + 1;
                  }
                }
                else {
                  uVar2 = *(uint *)(lVar5 + (longlong)local_5c * 0xc);
                  uVar7 = uVar2 & 0x7fffffff;
                  for (local_74 = 0; local_74 < iVar6; local_74 = local_74 + 1) {
                    if ((uVar2 & 0x80000000) == 0) {
                      local_38 = uVar7 + local_74;
                    }
                    else {
                      local_38 = ((uVar7 - 1) + iVar6) - local_74;
                    }
                    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)local_38 * 2)
                    ;
                    if ((((uVar1 & 0xfffc) != 0x200c) && (4 < uVar1 - 0x202a)) &&
                       (3 < uVar1 - 0x2066)) {
                      param_2[local_6c] = local_38;
                      local_6c = local_6c + 1;
                    }
                  }
                }
                local_84 = local_84 + iVar6;
              }
            }
          }
          else {
            local_78 = 0;
            lVar5 = *(longlong *)(param_1 + 0x138);
            for (local_80 = 0; local_80 < *(int *)(param_1 + 0x130); local_80 = local_80 + 1) {
              uVar2 = *(uint *)(lVar5 + 8 + (longlong)local_80 * 0xc);
              if ((uVar2 & 5) != 0) {
                local_78 = local_78 + 1;
              }
              if ((uVar2 & 10) != 0) {
                local_78 = local_78 + 1;
              }
            }
            local_70 = *(int *)(param_1 + 0x20);
            iVar3 = *(int *)(param_1 + 0x130);
            while ((local_80 = iVar3 + -1, -1 < local_80 && (0 < local_78))) {
              uVar2 = *(uint *)(lVar5 + 8 + (longlong)local_80 * 0xc);
              if ((uVar2 & 10) != 0) {
                local_70 = local_70 + -1;
                param_2[local_70] = 0xffffffff;
                local_78 = local_78 + -1;
              }
              if (local_80 < 1) {
                local_28 = 0;
              }
              else {
                local_28 = *(int *)(lVar5 + 4 + (longlong)(iVar3 + -2) * 0xc);
              }
              local_48 = *(int *)(lVar5 + 4 + (longlong)local_80 * 0xc);
              while ((local_48 = local_48 + -1, local_28 <= local_48 && (0 < local_78))) {
                local_70 = local_70 + -1;
                param_2[local_70] = param_2[local_48];
              }
              iVar3 = local_80;
              if ((uVar2 & 5) != 0) {
                local_70 = local_70 + -1;
                param_2[local_70] = 0xffffffff;
                local_78 = local_78 + -1;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143aaf600 FUN_143aaf600 body=345 status=ok
// SIG undefined FUN_143aaf600(void)

uint FUN_143aaf600(longlong *param_1,int param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  int local_18 [6];
  
  local_18[0] = 0;
  if ((param_1 == (longlong *)0x0) ||
     (((longlong *)*param_1 != param_1 && ((*param_1 == 0 || (*(longlong *)*param_1 != *param_1)))))
     ) {
    uVar1 = 0;
  }
  else {
    FUN_143aae970(param_1,local_18);
    if (local_18[0] < 1) {
      if ((param_2 < 0) || ((int)param_1[0x26] <= param_2)) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1[0x27] + (longlong)param_2 * 0xc);
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar1 & 0x7fffffff;
        }
        if (param_4 != (int *)0x0) {
          if (param_2 < 1) {
            *param_4 = *(int *)(param_1[0x27] + 4);
          }
          else {
            *param_4 = *(int *)(param_1[0x27] + 4 + (longlong)param_2 * 0xc) -
                       *(int *)(param_1[0x27] + 4 + (longlong)(param_2 + -1) * 0xc);
          }
        }
        uVar1 = uVar1 >> 0x1f;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 143aaf760 FUN_143aaf760 body=1900 status=ok
// SIG undefined FUN_143aaf760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143aaf760(longlong param_1,int *param_2)

{
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c0;
  int *local_b8;
  undefined1 local_a8;
  char local_a7;
  undefined8 *local_a0;
  int local_98;
  undefined4 local_94;
  char local_90;
  char local_8f;
  uint local_8c;
  int local_88;
  longlong local_80;
  int local_78;
  int local_74;
  int local_70;
  longlong local_68;
  uint local_60;
  code *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_a0 = *(undefined8 **)(param_1 + 8);
  local_48 = *(ulonglong *)(param_1 + 0x10);
  local_40 = *(undefined8 *)(param_1 + 0x20);
  local_68 = *(longlong *)(param_1 + 0x30);
  local_98 = 0;
  if (local_68 == 0) {
    local_58 = *(code **)(*(longlong *)(local_a0[6] + 0x28) + 0x40);
  }
  else {
    local_58 = *(code **)(*(longlong *)(local_a0[6] + 0x28) + 0x48);
    if (local_58 == (code *)0x0) {
      local_58 = *(code **)(*(longlong *)(local_a0[6] + 0x28) + 0x40);
      local_98 = -1;
    }
  }
  if (*(char *)((longlong)local_a0 + 0x119) < '\0') {
    local_80 = *(longlong *)(param_1 + 0x10);
    local_50 = *(undefined8 *)(param_1 + 0x18);
    local_a8 = *(undefined1 *)(param_1 + 2);
    local_78 = local_98;
    _guard_xfg_dispatch_icall_nop
              (local_38,(void *)((longlong)local_a0 + 0xd4),
               (longlong)(*(char *)((longlong)local_a0 + 0x119) * -2));
    *(undefined1 **)(param_1 + 0x10) = local_38;
    *(undefined1 **)(param_1 + 0x18) =
         local_38 + (longlong)*(char *)((longlong)local_a0 + 0x119) * -2;
    *(undefined1 *)(param_1 + 2) = 0;
    local_98 = -1;
    *(undefined1 *)((longlong)local_a0 + 0x119) = 0;
  }
  else {
    local_80 = 0;
    local_50 = 0;
    local_a8 = 0;
    local_78 = 0;
  }
LAB_143aaf946:
  if (*param_2 < 1) {
    (*local_58)(param_1,param_2);
    if ((((*param_2 < 1) && (*(char *)(param_1 + 2) != '\0')) &&
        (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x18))) &&
       (*(int *)((longlong)local_a0 + 0x54) == 0)) {
      local_8f = '\x01';
    }
    else {
      local_8f = '\0';
    }
    local_90 = local_8f;
  }
  else {
    local_90 = '\0';
  }
  local_a7 = '\0';
  local_94 = 0;
  do {
    if (local_68 != 0) {
      local_74 = (int)*(undefined8 *)(param_1 + 0x20) - (int)local_40;
      if (0 < local_74) {
        FUN_143ab08d0(local_68,local_74,local_98,local_94);
        local_68 = local_68 + (longlong)local_74 * 4;
        *(longlong *)(param_1 + 0x30) = local_68;
      }
      if (-1 < local_98) {
        local_98 = local_98 + (int)((longlong)(*(longlong *)(param_1 + 0x10) - local_48) >> 1);
      }
    }
    if (*(char *)((longlong)local_a0 + 0x119) < '\0') {
      if (local_80 == 0) {
        local_80 = *(longlong *)(param_1 + 0x10);
        local_50 = *(undefined8 *)(param_1 + 0x18);
        local_a8 = *(undefined1 *)(param_1 + 2);
        local_78 = local_98;
        _guard_xfg_dispatch_icall_nop
                  (local_38,(void *)((longlong)local_a0 + 0xd4),
                   (longlong)(*(char *)((longlong)local_a0 + 0x119) * -2));
        *(undefined1 **)(param_1 + 0x10) = local_38;
        *(undefined1 **)(param_1 + 0x18) =
             local_38 + (longlong)*(char *)((longlong)local_a0 + 0x119) * -2;
        *(undefined1 *)(param_1 + 2) = 0;
        local_98 = local_98 + *(char *)((longlong)local_a0 + 0x119);
        if (local_98 < 0) {
          local_98 = -1;
        }
        *(undefined1 *)((longlong)local_a0 + 0x119) = 0;
      }
      else {
        *param_2 = 5;
      }
    }
    local_48 = *(ulonglong *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0x20);
    if (*param_2 < 1) {
      if (local_48 < *(ulonglong *)(param_1 + 0x18)) goto LAB_143aaf946;
      if (local_80 != 0) {
        *(longlong *)(param_1 + 0x10) = local_80;
        *(undefined8 *)(param_1 + 0x18) = local_50;
        *(undefined1 *)(param_1 + 2) = local_a8;
        local_98 = local_78;
        local_80 = 0;
        goto LAB_143aaf946;
      }
      if ((*(char *)(param_1 + 2) == '\0') || (*(int *)((longlong)local_a0 + 0x54) == 0)) break;
      *param_2 = 0xb;
      local_a7 = '\0';
    }
    if (((local_a7 != '\0') || (local_88 = *param_2, local_88 == 0xf)) ||
       ((local_88 != 10 && ((local_88 != 0xc && (local_88 != 0xb)))))) {
      if (local_80 == 0) {
        return;
      }
      local_70 = (int)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 1);
      if (0 < local_70) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_a0 + 0xd4),*(void **)(param_1 + 0x10),
                   (longlong)(local_70 << 1));
        *(char *)((longlong)local_a0 + 0x119) = -(char)local_70;
      }
      *(longlong *)(param_1 + 0x10) = local_80;
      *(undefined8 *)(param_1 + 0x18) = local_50;
      *(undefined1 *)(param_1 + 2) = local_a8;
      return;
    }
    local_c8 = *(uint *)((longlong)local_a0 + 0x54);
    local_8c._0_2_ = (ushort)local_c8;
    if (local_c8 < 0x10000) {
      *(ushort *)((longlong)local_a0 + 0x8c) = (ushort)local_8c;
      local_94 = 1;
    }
    else {
      *(short *)((longlong)local_a0 + 0x8c) = (short)((int)local_c8 >> 10) + -0x2840;
      *(ushort *)((longlong)local_a0 + 0x8e) = (ushort)local_8c & 0x3ff | 0xdc00;
      local_94 = 2;
    }
    *(undefined1 *)((longlong)local_a0 + 0x5c) = (undefined1)local_94;
    *(undefined4 *)((longlong)local_a0 + 0x54) = 0;
    local_60 = (uint)(*param_2 != 10);
    local_c0 = local_60;
    local_b8 = param_2;
    local_8c = local_c8;
    (*(code *)*local_a0)(local_a0[3],param_1,(longlong)local_a0 + 0x8c,local_94);
    local_a7 = '\x01';
  } while( true );
  if (*(char *)(param_1 + 2) == '\0') {
    return;
  }
  if (local_90 != '\0') {
    FUN_143aafee0(local_a0,2,0);
    return;
  }
  goto LAB_143aaf946;
}



// FUNCTION 143aafee0 FUN_143aafee0 body=715 status=ok
// SIG undefined FUN_143aafee0(void)

void FUN_143aafee0(longlong *param_1,int param_2,char param_3)

{
  undefined4 local_88 [2];
  undefined2 local_80;
  undefined1 local_7e;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_1 != (longlong *)0x0) {
    if (param_3 != '\0') {
      if ((param_2 < 2) && ((code *)param_1[1] != FUN_143ad6650)) {
        local_80 = 0x38;
        local_7e = 1;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_88[0] = 0;
        local_78 = param_1;
        (*(code *)param_1[1])(param_1[4],&local_80,0,0,3,local_88);
      }
      if ((param_2 != 1) && ((code *)*param_1 != FUN_143ad65f0)) {
        local_48 = 0x38;
        local_46 = 1;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        local_88[0] = 0;
        local_40 = param_1;
        (*(code *)*param_1)(param_1[3],&local_48,0,0,0,3,local_88);
      }
    }
    if (param_2 < 2) {
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_1[6] + 0x30);
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined1 *)((longlong)param_1 + 0x5d) = 0;
      *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
      *(undefined1 *)((longlong)param_1 + 0x11a) = 0;
    }
    if (param_2 != 1) {
      *(undefined4 *)(param_1 + 10) = 0;
      *(undefined4 *)((longlong)param_1 + 0x54) = 0;
      *(undefined1 *)((longlong)param_1 + 0x5b) = 0;
      *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
      *(undefined1 *)((longlong)param_1 + 0x119) = 0;
    }
    if (*(longlong *)(*(longlong *)(param_1[6] + 0x28) + 0x28) != 0) {
      (**(code **)(*(longlong *)(param_1[6] + 0x28) + 0x28))(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 143ab01b0 FUN_143ab01b0 body=1816 status=ok
// SIG undefined FUN_143ab01b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ab01b0(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  int *local_b0;
  undefined1 local_a8;
  longlong local_a0;
  char local_98;
  int local_94;
  char local_90;
  char local_8f;
  int local_8c;
  int local_88;
  longlong local_80;
  int local_78;
  int local_74;
  int local_70;
  longlong local_68;
  undefined8 local_60;
  code *local_58;
  ulonglong local_50;
  longlong local_48;
  void *local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a0 = *(longlong *)(param_1 + 8);
  local_50 = *(ulonglong *)(param_1 + 0x10);
  local_48 = *(longlong *)(param_1 + 0x20);
  local_68 = *(longlong *)(param_1 + 0x30);
  local_94 = 0;
  if (local_68 == 0) {
    local_58 = *(code **)(*(longlong *)(*(longlong *)(local_a0 + 0x30) + 0x28) + 0x30);
  }
  else {
    local_58 = *(code **)(*(longlong *)(*(longlong *)(local_a0 + 0x30) + 0x28) + 0x38);
    if (local_58 == (code *)0x0) {
      local_58 = *(code **)(*(longlong *)(*(longlong *)(local_a0 + 0x30) + 0x28) + 0x30);
      local_94 = -1;
    }
  }
  if (*(char *)(local_a0 + 0x11a) < '\0') {
    local_80 = *(longlong *)(param_1 + 0x10);
    local_60 = *(undefined8 *)(param_1 + 0x18);
    local_a8 = *(undefined1 *)(param_1 + 2);
    local_70 = local_94;
    _guard_xfg_dispatch_icall_nop
              (local_38,(void *)(local_a0 + 0xfa),(longlong)-(int)*(char *)(local_a0 + 0x11a));
    *(undefined1 **)(param_1 + 0x10) = local_38;
    *(undefined1 **)(param_1 + 0x18) = local_38 + -(longlong)*(char *)(local_a0 + 0x11a);
    *(undefined1 *)(param_1 + 2) = 0;
    local_94 = -1;
    *(undefined1 *)(local_a0 + 0x11a) = 0;
  }
  else {
    local_80 = 0;
    local_60 = 0;
    local_a8 = 0;
    local_70 = 0;
  }
LAB_143ab0385:
  if (*param_2 < 1) {
    (*local_58)(param_1,param_2);
    if ((((*param_2 < 1) && (*(char *)(param_1 + 2) != '\0')) &&
        (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x18))) &&
       (*(char *)(local_a0 + 0x40) == '\0')) {
      local_90 = '\x01';
    }
    else {
      local_90 = '\0';
    }
    local_8f = local_90;
  }
  else {
    local_8f = '\0';
  }
  local_98 = '\0';
  local_88 = 0;
  do {
    if (local_68 != 0) {
      uVar1 = *(longlong *)(param_1 + 0x20) - local_48 >> 1;
      local_74 = (int)uVar1;
      if (0 < local_74) {
        FUN_143ab08d0(local_68,uVar1 & 0xffffffff,local_94,local_88);
        local_68 = local_68 + (longlong)local_74 * 4;
        *(longlong *)(param_1 + 0x30) = local_68;
      }
      if (-1 < local_94) {
        local_94 = local_94 + ((int)*(undefined8 *)(param_1 + 0x10) - (int)local_50);
      }
    }
    if (*(char *)(local_a0 + 0x11a) < '\0') {
      if (local_80 == 0) {
        local_80 = *(longlong *)(param_1 + 0x10);
        local_60 = *(undefined8 *)(param_1 + 0x18);
        local_a8 = *(undefined1 *)(param_1 + 2);
        local_70 = local_94;
        _guard_xfg_dispatch_icall_nop
                  (local_38,(void *)(local_a0 + 0xfa),(longlong)-(int)*(char *)(local_a0 + 0x11a));
        *(undefined1 **)(param_1 + 0x10) = local_38;
        *(undefined1 **)(param_1 + 0x18) = local_38 + -(longlong)*(char *)(local_a0 + 0x11a);
        *(undefined1 *)(param_1 + 2) = 0;
        local_94 = local_94 + *(char *)(local_a0 + 0x11a);
        if (local_94 < 0) {
          local_94 = -1;
        }
        *(undefined1 *)(local_a0 + 0x11a) = 0;
      }
      else {
        *param_2 = 5;
      }
    }
    local_50 = *(ulonglong *)(param_1 + 0x10);
    local_48 = *(longlong *)(param_1 + 0x20);
    if (*param_2 < 1) {
      if (local_50 < *(ulonglong *)(param_1 + 0x18)) goto LAB_143ab0385;
      if (local_80 != 0) {
        *(longlong *)(param_1 + 0x10) = local_80;
        *(undefined8 *)(param_1 + 0x18) = local_60;
        *(undefined1 *)(param_1 + 2) = local_a8;
        local_94 = local_70;
        local_80 = 0;
        goto LAB_143ab0385;
      }
      if ((*(char *)(param_1 + 2) == '\0') || (*(char *)(local_a0 + 0x40) < '\x01')) break;
      *param_2 = 0xb;
      local_98 = '\0';
    }
    if (((local_98 != '\0') || (local_8c = *param_2, local_8c == 0xf)) ||
       ((local_8c != 10 &&
        ((((local_8c != 0xc && (local_8c != 0xb)) && (local_8c != 0x12)) && (local_8c != 0x13))))))
    {
      if (local_80 == 0) {
        return;
      }
      local_78 = (int)*(undefined8 *)(param_1 + 0x18) - (int)*(undefined8 *)(param_1 + 0x10);
      if (0 < local_78) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(local_a0 + 0xfa),*(void **)(param_1 + 0x10),(longlong)local_78);
        *(char *)(local_a0 + 0x11a) = -(char)local_78;
      }
      *(longlong *)(param_1 + 0x10) = local_80;
      *(undefined8 *)(param_1 + 0x18) = local_60;
      *(undefined1 *)(param_1 + 2) = local_a8;
      return;
    }
    *(undefined1 *)(local_a0 + 0x5a) = *(undefined1 *)(local_a0 + 0x40);
    local_88 = (int)*(char *)(local_a0 + 0x5a);
    if (0 < local_88) {
      local_40 = (void *)(local_a0 + 0x60);
      _guard_xfg_dispatch_icall_nop(local_40,(void *)(local_a0 + 0x41),(longlong)local_88);
    }
    *(undefined1 *)(local_a0 + 0x40) = 0;
    if ((*(int *)(local_a0 + 0x11c) == 1) && (*param_2 == 10)) {
      *(undefined4 *)(local_a0 + 0x11c) = 0;
    }
    local_b8 = *(undefined4 *)(local_a0 + 0x11c);
    local_b0 = param_2;
    (**(code **)(local_a0 + 8))(*(undefined8 *)(local_a0 + 0x20),param_1,local_a0 + 0x60,local_88);
    *(undefined4 *)(local_a0 + 0x11c) = 1;
    local_98 = '\x01';
  } while( true );
  if (*(char *)(param_1 + 2) == '\0') {
    return;
  }
  if (local_8f != '\0') {
    FUN_143aafee0(local_a0,1,0);
    return;
  }
  goto LAB_143ab0385;
}



// FUNCTION 143ab08d0 FUN_143ab08d0 body=197 status=ok
// SIG undefined FUN_143ab08d0(void)

void FUN_143ab08d0(int *param_1,int param_2,int param_3,int param_4)

{
  int *local_res8;
  int local_18;
  
  if (param_3 < 0) {
    local_18 = -1;
  }
  else {
    local_18 = param_3 - param_4;
  }
  if (local_18 != 0) {
    local_res8 = param_1;
    if (local_18 < 1) {
      for (; local_res8 < param_1 + param_2; local_res8 = local_res8 + 1) {
        *local_res8 = -1;
      }
    }
    else {
      for (; local_res8 < param_1 + param_2; local_res8 = local_res8 + 1) {
        if (-1 < *local_res8) {
          *local_res8 = *local_res8 + local_18;
        }
      }
    }
  }
  return;
}



// FUNCTION 143ab09a0 FUN_143ab09a0 body=573 status=ok
// SIG undefined FUN_143ab09a0(void)

void FUN_143ab09a0(longlong *param_1)

{
  undefined4 local_88 [2];
  undefined2 local_80;
  undefined1 local_7e;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_88[0] = 0;
  if (param_1 != (longlong *)0x0) {
    if ((code *)param_1[1] != FUN_143ad6650) {
      local_80 = 0x38;
      local_7e = 1;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_88[0] = 0;
      local_78 = param_1;
      (*(code *)param_1[1])(param_1[4],&local_80,0,0,4,local_88);
    }
    if ((code *)*param_1 != FUN_143ad65f0) {
      local_48 = 0x38;
      local_46 = 1;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_88[0] = 0;
      local_40 = param_1;
      (*(code *)*param_1)(param_1[3],&local_48,0,0,0,4,local_88);
    }
    if (*(longlong *)(*(longlong *)(param_1[6] + 0x28) + 0x20) != 0) {
      (**(code **)(*(longlong *)(param_1[6] + 0x28) + 0x20))(param_1);
    }
    if ((longlong *)param_1[5] != param_1 + 0x11) {
      FUN_143aa79f0(param_1[5]);
    }
    if (*(int *)(param_1[6] + 4) != -1) {
      FUN_143abdae0(param_1[6]);
    }
    if (*(char *)((longlong)param_1 + 0x3d) == '\0') {
      FUN_143aa79f0(param_1);
    }
  }
  return;
}



// FUNCTION 143ab0be0 FUN_143ab0be0 body=683 status=ok
// SIG undefined FUN_143ab0be0(void)

void FUN_143ab0be0(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong *param_4,
                  ulonglong param_5,undefined8 param_6,char param_7,int *param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong local_48;
  undefined2 local_40;
  char local_3e;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  undefined8 local_10;
  
  if ((param_8 != (int *)0x0) && (*param_8 < 1)) {
    if ((param_1 == 0) || ((param_2 == (ulonglong *)0x0 || (param_4 == (ulonglong *)0x0)))) {
      *param_8 = 1;
    }
    else {
      uVar1 = *param_4;
      uVar2 = *param_2;
      if (param_5 < param_5 + 0x7fffffff) {
        local_48 = param_5 + 0x7fffffff;
      }
      else {
        local_48 = 0xffffffffffffffff;
      }
      if (local_48 == param_5) {
        param_5 = param_5 - 1;
      }
      if ((((param_5 < uVar1) || (param_3 < uVar2)) ||
          ((0x3fffffff < (ulonglong)((longlong)(param_5 - uVar1) >> 1) && (uVar1 < param_5)))) ||
         (((0x7fffffff < param_3 - uVar2 && (uVar2 < param_3)) || ((param_5 - uVar1 & 1) != 0)))) {
        *param_8 = 1;
      }
      else if (((*(char *)(param_1 + 0x5b) < '\x01') ||
               (cVar3 = FUN_143ab0f50(param_1,param_2,param_3,&param_6,param_8), cVar3 == '\0')) &&
              ((param_7 != '\0' || ((uVar1 != param_5 || (*(char *)(param_1 + 0x119) < '\0')))))) {
        local_3e = param_7;
        local_10 = param_6;
        local_28 = param_5;
        local_20 = *param_2;
        local_40 = 0x38;
        local_38 = param_1;
        local_30 = uVar1;
        local_18 = param_3;
        FUN_143aaf760(&local_40,param_8);
        *param_4 = local_30;
        *param_2 = local_20;
      }
    }
  }
  return;
}



// FUNCTION 143ab0e90 FUN_143ab0e90 body=111 status=ok
// SIG undefined FUN_143ab0e90(void)

longlong FUN_143ab0e90(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  if (*param_2 < 1) {
    if ((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28) + 0x60) == 0) ||
       (lVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28) + 0x60))(param_1),
       lVar1 == 0)) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) + 4;
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143ab0f00 FUN_143ab0f00 body=68 status=ok
// SIG undefined FUN_143ab0f00(void)

undefined8 FUN_143ab0f00(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == (int *)0x0) || (0 < *param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143abd150(0,param_1,param_2);
  }
  return uVar1;
}



// FUNCTION 143ab0f50 FUN_143ab0f50 body=381 status=ok
// SIG undefined FUN_143ab0f50(void)

undefined8
FUN_143ab0f50(longlong param_1,undefined8 *param_2,undefined1 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  int local_38;
  int local_34;
  undefined4 *local_28;
  undefined1 *local_20;
  
  local_20 = (undefined1 *)*param_2;
  if (param_4 == (undefined8 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)*param_4;
  }
  lVar2 = param_1 + 0x68;
  cVar1 = *(char *)(param_1 + 0x5b);
  local_38 = 0;
  while( true ) {
    if (cVar1 <= local_38) {
      *(undefined1 *)(param_1 + 0x5b) = 0;
      *param_2 = local_20;
      if (local_28 != (undefined4 *)0x0) {
        *param_4 = local_28;
      }
      return 0;
    }
    if (local_20 == param_3) break;
    *local_20 = *(undefined1 *)(lVar2 + local_38);
    local_20 = local_20 + 1;
    local_38 = local_38 + 1;
    if (local_28 != (undefined4 *)0x0) {
      *local_28 = 0xffffffff;
      local_28 = local_28 + 1;
    }
  }
  local_34 = 0;
  do {
    *(undefined1 *)(lVar2 + local_34) = *(undefined1 *)(lVar2 + local_38);
    local_34 = local_34 + 1;
    local_38 = local_38 + 1;
  } while (local_38 < cVar1);
  *(undefined1 *)(param_1 + 0x5b) = (undefined1)local_34;
  *param_2 = local_20;
  if (local_28 != (undefined4 *)0x0) {
    *param_4 = local_28;
  }
  *param_5 = 0xf;
  return 1;
}



// FUNCTION 143ab10d0 FUN_143ab10d0 body=386 status=ok
// SIG undefined FUN_143ab10d0(void)

undefined8
FUN_143ab10d0(longlong param_1,undefined8 *param_2,undefined2 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  int local_38;
  int local_34;
  undefined4 *local_28;
  undefined2 *local_20;
  
  local_20 = (undefined2 *)*param_2;
  if (param_4 == (undefined8 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)*param_4;
  }
  lVar2 = param_1 + 0x90;
  cVar1 = *(char *)(param_1 + 0x5d);
  local_38 = 0;
  while( true ) {
    if (cVar1 <= local_38) {
      *(undefined1 *)(param_1 + 0x5d) = 0;
      *param_2 = local_20;
      if (local_28 != (undefined4 *)0x0) {
        *param_4 = local_28;
      }
      return 0;
    }
    if (local_20 == param_3) break;
    *local_20 = *(undefined2 *)(lVar2 + (longlong)local_38 * 2);
    local_20 = local_20 + 1;
    local_38 = local_38 + 1;
    if (local_28 != (undefined4 *)0x0) {
      *local_28 = 0xffffffff;
      local_28 = local_28 + 1;
    }
  }
  local_34 = 0;
  do {
    *(undefined2 *)(lVar2 + (longlong)local_34 * 2) =
         *(undefined2 *)(lVar2 + (longlong)local_38 * 2);
    local_34 = local_34 + 1;
    local_38 = local_38 + 1;
  } while (local_38 < cVar1);
  *(undefined1 *)(param_1 + 0x5d) = (undefined1)local_34;
  *param_2 = local_20;
  if (local_28 != (undefined4 *)0x0) {
    *param_4 = local_28;
  }
  *param_5 = 0xf;
  return 1;
}



// FUNCTION 143ab1260 FUN_143ab1260 body=29 status=ok
// SIG undefined FUN_143ab1260(void)

void FUN_143ab1260(undefined8 param_1)

{
  FUN_143aafee0(param_1,0,1);
  return;
}



// FUNCTION 143ab1280 FUN_143ab1280 body=1272 status=ok
// SIG undefined FUN_143ab1280(void)

void * FUN_143ab1280(undefined8 *param_1,void *param_2,int *param_3,int *param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  int *local_res18;
  void *local_a8;
  int local_a0;
  int local_9c;
  void *local_98;
  undefined4 local_90;
  int local_8c;
  void *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  void *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = 0x38;
  local_46 = 1;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_80 = 0x38;
  local_7e = 1;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  if ((param_4 == (int *)0x0) || (0 < *param_4)) {
    local_a8 = (void *)0x0;
  }
  else if (param_1 == (undefined8 *)0x0) {
    *param_4 = 1;
    local_a8 = (void *)0x0;
  }
  else {
    local_88 = param_2;
    if (*(longlong *)(*(longlong *)(param_1[6] + 0x28) + 0x70) == 0) {
      local_9c = 0x120;
    }
    else {
      local_9c = 0;
      (**(code **)(*(longlong *)(param_1[6] + 0x28) + 0x70))(param_1,0,&local_9c,param_4);
      if (0 < *param_4) {
        return (void *)0x0;
      }
    }
    if (param_3 == (int *)0x0) {
      local_a0 = 1;
      local_res18 = &local_a0;
    }
    else {
      local_a0 = *param_3;
      local_res18 = param_3;
      if (local_a0 < 1) {
        *param_3 = local_9c;
        return (void *)0x0;
      }
    }
    if (((ulonglong)param_2 & 7) != 0) {
      local_8c = 8 - ((uint)local_88 & 7);
      if (local_8c < local_a0) {
        local_a0 = local_a0 - local_8c;
        local_88 = (void *)((longlong)local_88 + (longlong)local_8c);
      }
      else {
        local_a0 = 1;
      }
    }
    pvVar1 = local_88;
    if ((local_a0 < local_9c) || (local_88 == (void *)0x0)) {
      local_a8 = (void *)FUN_143aa7a40((longlong)local_9c);
      if (local_a8 == (void *)0x0) {
        *param_4 = 7;
        return (void *)0x0;
      }
      *param_4 = -0x7e;
      local_98 = local_a8;
      *local_res18 = local_9c;
    }
    else {
      local_a8 = local_88;
      local_98 = (void *)0x0;
    }
    _guard_xfg_dispatch_icall_nop(local_a8,0,(longlong)local_9c);
    _guard_xfg_dispatch_icall_nop(local_a8,param_1,0x120);
    *(undefined1 *)((longlong)local_a8 + 0x3e) = 0;
    *(undefined1 *)((longlong)local_a8 + 0x3d) = 0;
    if ((undefined8 *)param_1[5] == param_1 + 0x11) {
      *(longlong *)((longlong)local_a8 + 0x28) = (longlong)local_a8 + 0x88;
    }
    else {
      uVar2 = FUN_143aa7a40(0x40);
      *(undefined8 *)((longlong)local_a8 + 0x28) = uVar2;
      if (*(longlong *)((longlong)local_a8 + 0x28) == 0) {
        FUN_143aa79f0(local_98);
        return (void *)0x0;
      }
      _guard_xfg_dispatch_icall_nop(*(void **)((longlong)local_a8 + 0x28),(void *)param_1[5],0x40);
    }
    if (*(longlong *)(*(longlong *)(param_1[6] + 0x28) + 0x70) != 0) {
      local_a8 = (void *)(**(code **)(*(longlong *)(param_1[6] + 0x28) + 0x70))
                                   (param_1,local_a8,local_res18,param_4);
    }
    if ((local_a8 == (void *)0x0) || (0 < *param_4)) {
      if ((local_98 != (void *)0x0) &&
         (*(longlong *)((longlong)local_98 + 0x28) != (longlong)local_98 + 0x88)) {
        FUN_143aa79f0(*(undefined8 *)((longlong)local_98 + 0x28));
      }
      FUN_143aa79f0(local_98);
      local_a8 = (void *)0x0;
    }
    else {
      if (*(int *)(param_1[6] + 4) != -1) {
        FUN_143abd470(param_1[6]);
      }
      if (local_a8 == pvVar1) {
        *(undefined1 *)((longlong)local_a8 + 0x3d) = 1;
      }
      local_78 = local_a8;
      local_40 = local_a8;
      local_90 = 0;
      (*(code *)param_1[1])(param_1[4],&local_48,0,0,5,&local_90);
      local_90 = 0;
      (*(code *)*param_1)(param_1[3],&local_80,0,0,0,5,&local_90);
    }
  }
  return local_a8;
}



// FUNCTION 143ab1780 FUN_143ab1780 body=683 status=ok
// SIG undefined FUN_143ab1780(void)

void FUN_143ab1780(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong *param_4,
                  ulonglong param_5,undefined8 param_6,char param_7,int *param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong local_res18;
  ulonglong local_48;
  undefined2 local_40;
  char local_3e;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  undefined8 local_10;
  
  if ((param_8 != (int *)0x0) && (*param_8 < 1)) {
    if ((param_1 == 0) || ((param_2 == (ulonglong *)0x0 || (param_4 == (ulonglong *)0x0)))) {
      *param_8 = 1;
    }
    else {
      uVar1 = *param_4;
      uVar2 = *param_2;
      if (param_3 < param_3 + 0x7fffffff) {
        local_48 = param_3 + 0x7fffffff;
      }
      else {
        local_48 = 0xffffffffffffffff;
      }
      local_res18 = param_3;
      if (local_48 == param_3) {
        local_res18 = param_3 - 1;
      }
      if ((((param_5 < uVar1) || (local_res18 < uVar2)) ||
          ((0x7fffffff < param_5 - uVar1 && (uVar1 < param_5)))) ||
         (((0x3fffffff < (ulonglong)((longlong)(local_res18 - uVar2) >> 1) && (uVar2 < local_res18))
          || ((local_res18 - uVar2 & 1) != 0)))) {
        *param_8 = 1;
      }
      else if (((*(char *)(param_1 + 0x5d) < '\x01') ||
               (cVar3 = FUN_143ab10d0(param_1,param_2,local_res18,&param_6,param_8), cVar3 == '\0'))
              && ((param_7 != '\0' || ((uVar1 != param_5 || (*(char *)(param_1 + 0x11a) < '\0'))))))
      {
        local_3e = param_7;
        local_10 = param_6;
        local_28 = param_5;
        local_20 = *param_2;
        local_18 = local_res18;
        local_40 = 0x38;
        local_38 = param_1;
        local_30 = uVar1;
        FUN_143ab01b0(&local_40,param_8);
        *param_4 = local_30;
        *param_2 = local_20;
      }
    }
  }
  return;
}



// FUNCTION 143ab1a30 FUN_143ab1a30 body=92 status=ok
// SIG undefined FUN_143ab1a30(void)

void FUN_143ab1a30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143aa79f0(param_1);
  return;
}



// FUNCTION 143ab1a90 FUN_143ab1a90 body=48 status=ok
// SIG undefined FUN_143ab1a90(void)

void FUN_143ab1a90(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 143ab1ac0 FUN_143ab1ac0 body=58 status=ok
// SIG undefined FUN_143ab1ac0(void)

void FUN_143ab1ac0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(undefined8 *)(param_1 + 8),param_2,param_3);
  return;
}



// FUNCTION 143ab1b00 FUN_143ab1b00 body=58 status=ok
// SIG undefined FUN_143ab1b00(void)

void FUN_143ab1b00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(undefined8 *)(param_1 + 8),param_2,param_3);
  return;
}



// FUNCTION 143ab1b40 FUN_143ab1b40 body=48 status=ok
// SIG undefined FUN_143ab1b40(void)

void FUN_143ab1b40(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 143ab1b70 FUN_143ab1b70 body=24 status=ok
// SIG undefined FUN_143ab1b70(void)

void FUN_143ab1b70(undefined8 param_1)

{
  FUN_143aa79f0(param_1);
  return;
}



// FUNCTION 143ab1b90 FUN_143ab1b90 body=19 status=ok
// SIG undefined FUN_143ab1b90(void)

undefined4 FUN_143ab1b90(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// FUNCTION 143ab1bb0 FUN_143ab1bb0 body=131 status=ok
// SIG undefined FUN_143ab1bb0(void)

undefined8 FUN_143ab1bb0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x3c)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x38) * 8);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    if (param_2 != (undefined4 *)0x0) {
      uVar1 = FreeLib(uVar2);
      *param_2 = uVar1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143ab1c40 FUN_143ab1c40 body=131 status=ok
// SIG undefined FUN_143ab1c40(void)

char * FUN_143ab1c40(longlong param_1,undefined4 *param_2)

{
  char *_Str;
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x3c)) {
    _Str = *(char **)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x38) * 8);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    if (param_2 != (undefined4 *)0x0) {
      sVar1 = _guard_xfg_dispatch_icall_nop(_Str);
      *param_2 = (int)sVar1;
    }
  }
  else {
    _Str = (char *)0x0;
  }
  return _Str;
}



// FUNCTION 143ab1cd0 FUN_143ab1cd0 body=23 status=ok
// SIG undefined FUN_143ab1cd0(void)

void FUN_143ab1cd0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 143ab1cf0 FUN_143ab1cf0 body=101 status=ok
// SIG undefined FUN_143ab1cf0(void)

undefined8 * FUN_143ab1cf0(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::StringEnumeration::vftable;
  FUN_143a8ac30(param_1 + 1);
  param_1[10] = param_1 + 6;
  *(undefined4 *)(param_1 + 0xb) = 0x20;
  return param_1;
}


